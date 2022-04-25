///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file List.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "List.h"
#include "config.h"

bool List::empty() const noexcept {
    return (head == nullptr);
}


unsigned int List::size() const noexcept {
    return count;
}


bool List::isIn(Node *aNode) const {
    if( aNode == nullptr ) {
        throw invalid_argument( PROGRAM_NAME ": aNode cannot be empty." );
    }
    Node* placeNode = head;
    while( placeNode != nullptr ) {
        if( aNode == placeNode )
            return true;
        placeNode = placeNode->next;
    }
    return false;
}


bool List::isSorted() const noexcept {
    assert( validate() );

    if( count <= 1 )
        return true;

    for(Node* i = head; i->next != nullptr; i = i->next) {
        if( *i > *i->next )
            return false;
    }
    return true;
}


Node* List::get_first() const noexcept {
    return head;
}

void List::deleteAllNodes() noexcept {
    assert( validate() );

    while(head != nullptr) {
        pop_front();
    }
    #ifdef DEBUG
        cout << PROGRAM_NAME << ": All Nodes have been deleted" << endl ;
    #endif
    assert( validate() );
}


Node* List::get_next(const Node *currentNode) {
    if(currentNode == nullptr) {
        throw invalid_argument( PROGRAM_NAME ": currentNode cannot be empty." );
    }
    return currentNode->next;
}


