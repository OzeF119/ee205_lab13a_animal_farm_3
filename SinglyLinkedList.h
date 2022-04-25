///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file SinglyLinkedList.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include "Node.h"
#include "List.h"


class SinglyLinkedList {
public:
    SinglyLinkedList();
public:
    void push_front(Node* newNode);
    Node* pop_front() noexcept;
    void insert_after(Node* currentNode, Node* newNode);
    void dump() const noexcept;
    bool validate() const noexcept;
};



