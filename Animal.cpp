///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////



#include <cassert>
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "config.h"
#include "Animal.h"

using namespace std;
const std::string Animal::KINGDOM_NAME = "Animalia";


Animal::Animal( const Weight::t_weight newMaxWeight,const std::string& newClassification ,const std::string& newSpecies ) : Node(), weight( Weight::POUND, newMaxWeight ) {
    if( !validateClassification( newClassification ) ) {
        throw invalid_argument( "The classification is invalid" );
    }
    classification = newClassification;

    if( !validateSpecies( newSpecies ) ) {
        throw invalid_argument( "The species is invalid" );
    }
    species = newSpecies;

    Animal::validate();
}


Animal::Animal( const Gender newGender
        ,const Weight::t_weight newWeight
        ,const Weight::t_weight newMaxWeight
        ,const string& newClassification
        ,const string& newSpecies ) : Node(), weight( newWeight, newMaxWeight ) {


    if( !validateClassification( newClassification ) ) {
        throw invalid_argument( "The classification is invalid" );
    }
    classification = newClassification;

    if( !validateSpecies( newSpecies ) ) {
        throw invalid_argument( "The species is invalid" );
    }
    species = newSpecies;

    setGender( newGender );
    Animal::validate();
}


std::string Animal::getKingdom() const noexcept {
    return KINGDOM_NAME;
}


std::string Animal::getClassification() const noexcept {
    return classification;
}


std::string Animal::getSpecies() const noexcept {
    return species;
}


Gender Animal::getGender() const noexcept {
    return gender;
}


Weight::t_weight Animal::getWeight() const noexcept {
    return weight.getWeight() ;
}


void Animal::setWeight( const Weight::t_weight newWeight ) {
    weight.setWeight( newWeight );
    validate();
}


void Animal::setGender( const Gender newGender ) {
    if( gender != Gender::UNKNOWN_GENDER ) {
        throw logic_error( PROGRAM_NAME ": The gender is already set, you can't change it" ) ;
    }
    assert( gender == Gender::UNKNOWN_GENDER );
    gender = newGender ;
    validate();
}


void Animal::dump() const noexcept {
    PRINT_HEADING_FOR_DUMP;
    Node::dump();

    FORMAT_LINE_FOR_DUMP( "Animal", "this" ) << this << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "kingdom" ) << getKingdom() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "classification" ) << getClassification() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "species" ) << getSpecies() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "gender" ) << getGender() << endl;
    FORMAT_LINE_FOR_DUMP( "Animal", "weight" ) << weight << endl;
}


bool Animal::validateClassification( const std::string& checkClassification ) noexcept {
    if( checkClassification.empty() ) {
        cout << PROGRAM_NAME ": classification cannot be empty" << endl ;
        return false;
    }
    return true;
}

bool Animal::validateSpecies( const std::string& checkSpecies ) noexcept {
    if( checkSpecies.empty() ) {
        cout << PROGRAM_NAME ": species cannot be empty" << endl ;
        return false;
    }
    return true;
}

bool Animal::validate() const noexcept {
    assert( validateSpecies( getSpecies()));
    assert( validateClassification(getClassification()));
    assert( weight.validate());
    return true;
}
