///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include "src/Weight.h"

using namespace std;

int main() {
    cout << "Starting fatCat" << endl ;

    Weight noWeight;
    noWeight.dump();
    cout << "noWeight = " << noWeight << endl;

    Weight myWeight( 3.14, Weight::KILO, 20 );
    myWeight.dump();
    cout << "myWeight = " << myWeight << endl ;

    cout << "Done with fatCat" << endl;
    return 0;
}