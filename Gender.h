///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Gender.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iostream>
#include <string>

#include "config.h"

enum class Gender {
    UNKNOWN_GENDER=0
    ,MALE
    ,FEMALE
};

inline std::ostream& operator<<( std::ostream& lhs_stream, const Gender& rhs_Gender ) {
    switch( rhs_Gender ) {
        case Gender::UNKNOWN_GENDER:
            lhs_stream << "Unknown gender";
            break;
        case Gender::MALE:
            lhs_stream << "Male";
            break;
        case Gender::FEMALE:
            lhs_stream << "Female";
            break;
        default:
            throw std::out_of_range( PROGRAM_NAME ": Gender not mapped to a string" );
    }

    return lhs_stream;
}

