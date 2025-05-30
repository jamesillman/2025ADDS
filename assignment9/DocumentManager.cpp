#include "DocumentManager.h"

void DocumentManager::addDocument(string name, int id, int license_limit) {
    Document tempDoc{name, id, license_limit, 0};  // borrowed starts at 0
    
    documentsById.insert({id, tempDoc});
    documentsByName.insert({name, tempDoc});
};

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
};

// returns docid if name is in the document collection or 0 if the name is not in the collection
int DocumentManager::search(string name){
    auto found = documentsByName.find(name);
    if (found != documentsByName.end()) {
        return found->second.id;
    }
    // Not found
    return 0;
};

// returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
bool DocumentManager::borrowDocument(int docid, int patronID) {
    // Check patron validity
    if (patrons.find(patronID) == patrons.end()) {
        return false;  // Invalid patron
    }

    // Check document validity
    auto docIt = documentsById.find(docid);
    if (docIt == documentsById.end()) {
        return false;  // Document not found
    }

    // Check license limit
    Document& doc = docIt->second;
    if (doc.borrowed >= doc.license_limit) {
        return false;  // All copies are borrowed
    }

    // All good — borrow
    doc.borrowed++;
    return true;
};


void DocumentManager::returnDocument(int docid, int patronID) {
    auto docIt = documentsById.find(docid);
    Document& doc = docIt->second;
    // Borrow document
    doc.borrowed--;

};