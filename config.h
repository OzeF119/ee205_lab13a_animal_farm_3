///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <iomanip>
#define PROGRAM_NAME "animalfarm3"
#define PROGRAM_TITLE "Animal Farm 3"

/// Format the heading for dumping members of a class to the console
///
/// Print =====================
#define PRINT_HEADING_FOR_DUMP \
 /* Print =========================================================== */ \
 std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl


/// Format a line for dumping the members of a class to the console.
/// Setup the fields for printing (space pad, left justify, etc.)
#define FORMAT_LINE_FOR_DUMP( className, member )         \
    std::cout << std::setfill( ' ' )  /* Space pad    */  \
              << std::left            /* Left justify */  \
              << std::boolalpha  /* Print `true` or `false` for `bool`s */ \
              << std::setw( 8) << (className)             \
              << std::setw(20) << (member)                \
              << std::setw(52)  /* (data) */



