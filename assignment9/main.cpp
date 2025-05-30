#include <iostream>
#include "DocumentManager.h"

int main() {
    dms manager;

    // Add two patrons
    manager.addPatron(101);
    manager.addPatron(202);

    // Add two documents
    manager.addDocument("DocA", 1, 2); // id = 1, license limit = 2
    manager.addDocument("DocB", 2, 1); // id = 2, license limit = 1

    // Search for a document
    int id = manager.search("DocA");
    if (id == 1) {
        std::cout << "DocA found (expected)\n";
    } else {
        std::cout << "DocA NOT found (unexpected)\n";
    }

    // Try borrowing with valid patron
    if (manager.borrowDocument(1, 101)) {
        std::cout << "Patron 101 borrowed Doc 1 (expected)\n";
    } else {
        std::cout << "Borrow failed (unexpected)\n";
    }

    // Try borrowing same document again within license limit
    if (manager.borrowDocument(1, 202)) {
        std::cout << "Patron 202 borrowed Doc 1 (expected)\n";
    } else {
        std::cout << "Borrow failed (unexpected)\n";
    }

    // Try borrowing again exceeding license limit
    if (!manager.borrowDocument(1, 202)) {
        std::cout << "Doc 1 borrow limit reached (expected)\n";
    } else {
        std::cout << "Borrow succeeded (unexpected)\n";
    }

    // Try borrowing non-existent doc
    if (!manager.borrowDocument(99, 101)) {
        std::cout << "Doc 99 not found (expected)\n";
    } else {
        std::cout << "Borrowed non-existent doc (unexpected)\n";
    }

    // Try returning
    manager.returnDocument(1, 101);
    std::cout << "Patron 101 returned Doc 1\n";

    // Borrow again after return
    if (manager.borrowDocument(1, 202)) {
        std::cout << "Patron 202 borrowed Doc 1 again (expected)\n";
    } else {
        std::cout << "Borrow failed after return (unexpected)\n";
    }

    return 0;
}
