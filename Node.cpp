///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Node.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Node.h"
#include "config.h"

using namespace std;

void Node::dump() const {
    FORMAT_LINE_FOR_DUMP( "Node", "this") << this << endl;
    FORMAT_LINE_FOR_DUMP( "Node", "next" ) << next << endl;
}

bool Node::operator>(const Node &toTheRight) {
    if(this > &(Node&)toTheRight) {
        return true;
    }
    return false;
}

bool Node::validate() const noexcept {
    if(next == nullptr){
        return true;
    }
    if(next == next->next) {
        return false;
    }
    return true;
}