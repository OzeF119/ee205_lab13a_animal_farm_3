///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include "config.h"

class Node {
    friend class SinglyLinkedList;
    friend class List;
protected:
    Node* next = nullptr;
public:
    virtual void dump() const;
    virtual bool operator>(const Node& rightSide);
};



