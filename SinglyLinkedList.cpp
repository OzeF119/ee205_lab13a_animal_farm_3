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
#include "List.h"

#include <iostream>
#include <cassert>

using namespace std;


bool SinglyLinkedList::validate() const noexcept {
    int location = 0;
    Node* location = head;
    // Count forward through the List
    while( location != nullptr ) {
        assert( location->validate() ) ;
        location++;
        location = location->next;
    }
    assert( size() == location );

}

SinglyLinkedList::SinglyLinkedList() {
}
void SinglyLinkedList::push_front(Node *newNode) {
}

Node *SinglyLinkedList::pop_front() noexcept {
}

void SinglyLinkedList::insert_after(Node *currentNode, Node *newNode) {
}

void SinglyLinkedList::dump() const noexcept {
}

