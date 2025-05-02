#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(int *array, int len){
    head = nullptr;
    for (int i = len - 1; i >= 0; i--) {
        insertPosition(1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* currNode = head;
    while (currNode != nullptr) {
        Node* temp = currNode;
        currNode = currNode->link;
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    // if adding in front of the current head (including if the list is empty)
    if (pos <= 1) {
        head = new Node(newNum, head);
        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node* prevNode = head;
    for (int i = 1; i < pos - 1 && prevNode != nullptr; i++) {
        prevNode = prevNode->link;
    }

    if (prevNode == nullptr) {
        Node* currNode = head;
        while (currNode->link != nullptr) {
            currNode = currNode->link;
        }
        currNode->link = new Node(newNum, 0);
    } else {
        prevNode->link = new Node(newNum, prevNode->link);
    }
}


bool LinkedList::deletePosition(int pos){
    if (pos <= 0){
        return false;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->link;
        delete temp;
        return true;
    }

    Node* prevNode = head;
    for (int i = 1; i < pos -1 && prevNode->link != nullptr; i++) {
        prevNode = prevNode->link;
    }

    if (prevNode == nullptr || prevNode->link == nullptr) {
        return false;
    }

    Node *temp = prevNode->link;
    prevNode->link = temp->link;
    delete temp;
    return true;
}

int LinkedList::get(int pos) {
    if (head == nullptr || pos <= 0) {
        return std::numeric_limits<int>::max();
    }

    Node* currNode = head;
    for (int i = 1; i < pos && currNode != nullptr; ++i) {
        currNode = currNode->link;
    }

    if (currNode == nullptr) {
        return std::numeric_limits<int>::max();
    }

    return currNode->data;
}


int LinkedList::search(int target){
    int position = 1;
    Node* currNode = head; 

    while (currNode != nullptr) {
        if (currNode->data == target) {
            return position;
        }
        currNode = currNode->link; 
        position++;
    }
        return -1;

}

void LinkedList::printList(){
    Node* currNode = head; 

    std::cout << "[";
    while (currNode != nullptr) { 
        std::cout << currNode->data << " ";
        currNode = currNode->link; 
    } 
    std::cout << "]" << std::endl; 
}