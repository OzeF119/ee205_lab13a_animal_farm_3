///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Mammal.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include "Mammal.h"
#include "config.h"
#include <string>
#include <cassert>

using namespace std;
const std::string Mammal::MAMMAL_NAME = "Mammilian";

void Mammal::dump() const noexcept {
    assert(validate());
    Animal::dump();
    FORMAT_LINE_FOR_DUMP( "Mammal", "color") << color << endl;
}

