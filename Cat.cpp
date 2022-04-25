///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Cat.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include "Cat.h"

#include <stdexcept>
#include <iostream>
#include <cassert>



using namespace std ;


const std::string Cat::SPECIES_NAME = "Felis Catus";
const Weight::t_weight Cat::MAX_WEIGHT = 40;


string Cat::getName() const noexcept {
    return name;
}


void Cat::setName( const string& newName ) {
    if( !validateName( newName )) {
        throw invalid_argument( "Name not valid" );
    }
    name = newName ;
}


bool Cat::isFixed() const noexcept {
    return isCatFixed;
}


void Cat::fixCat() noexcept {
    Cat::isCatFixed = true;
}


void Cat::dump() const noexcept {
    assert( validate() ) ;
    Mammal::dump() ;
    FORMAT_LINE_FOR_DUMP( "Cat", "name" )    << getName() << endl ;
    FORMAT_LINE_FOR_DUMP( "Cat", "isFixed" ) << isFixed() << endl ;
}

std::string Cat::speak() const noexcept {
    return "Meow" ;
}


bool Cat::validateName( const std::string& newName ) {
    if( newName.empty() ) {
        cout << PROGRAM_NAME ": Cat name cannot be empty" << endl;
        return false;
    }
    return true;
}


bool Cat::validate() const noexcept {
    Mammal::validate() ;
    assert( validateName( getName() ));
    return true;
}



