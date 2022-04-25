///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Cat.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include "config.h"
#include "Mammal.h"

#include <string>

class Cat : public Mammal {
public:
    static const std:: string SPECIES_NAME;
    static const Weight::t_weight MAX_WEIGHT;
protected:
    std::string name;
    bool isCatFixed;
public:
    std::string getName() const noexcept;
    void setName(const std::string& newName);
    void fixCat() noexcept;
    bool isFixed() const noexcept;
public:
    std::string speak() const noexcept;
    void dump() const noexcept;
    bool validate() const noexcept;
    static bool validateName(const std::string& newName);
public:
    Cat( const std::string& newName ) : Mammal( MAX_WEIGHT, SPECIES_NAME ) {
        name = newName;
        isCatFixed = false;
        Cat::validate();
    }
    Cat( const std::string& newName ,const Color newColor ,const bool newIsFixed ,const Gender newGender,const Weight::t_weight newWeight)
    : Mammal( newColor, newGender, newWeight, MAX_WEIGHT, SPECIES_NAME ) {
        name = newName;
        isCatFixed = newIsFixed;
        Cat::validate();
    }
};


