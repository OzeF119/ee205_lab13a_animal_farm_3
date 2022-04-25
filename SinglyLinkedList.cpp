///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "SinglyLinkedList.h"
#include "config.h"

#include <iostream>
#include <cassert>

using namespace std;


bool SinglyLinkedList::validate() const noexcept {
    Node* currentNode = head;
    while( currentNode != nullptr ) {
        assert( currentNode->validate() ) ;
        currentNode = currentNode->next;
    }
    return true;
}

void SinglyLinkedList::push_front(Node *newNode) {
    if(newNode == nullptr) {
        throw invalid_argument(PROGRAM_NAME " newNode cannot be empty");
    }
    assert(validate());
    if(head != nullptr) {
        newNode->next = head;
        head = newNode;
    }
    else {
        newNode->next = nullptr;
        head = newNode;
    }
    assert(validate());
}

Node *SinglyLinkedList::pop_front() noexcept {
    if(head == nullptr){
        return nullptr;
    }
    Node* search = head;
    if(head->next != nullptr) {
        head = head->next;
    }
    else {
        head = nullptr;
    }
    search->next = nullptr;
    assert(validate());
    return search;
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
    if(head == nullptr) {
        throw logic_error(PROGRAM_NAME ": cannot enter into an empty list");
    }
    if(currentNode == nullptr) {
        throw invalid_argument(PROGRAM_NAME ": currentNode cannot be empty");
    }
    if(newNode == nullptr) {
        throw invalid_argument(PROGRAM_NAME ": newNode cannot be empty");
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;
    assert(validate());
}

void SinglyLinkedList::dump() const noexcept {
    cout << "SinglyLinkedList: head = " << head << endl;
    for(Node* currentNode = head; currentNode != nullptr; currentNode = currentNode->next){
        currentNode->dump();
    }
}

