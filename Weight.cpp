///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.cpp
/// @version 1.0
///
/// @author Jordan Cortado <jcortado@hawaii.edu>
/// @date   16_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cassert>

#include "Weight.h"

using namespace std;

const float Weight::UNKNOWN_WEIGHT = -1;
const float Weight::KILOS_IN_A_POUND = 0.45359237;
const float Weight::SLUGS_IN_A_POUND = 0.03108095;

const string Weight::POUND_LABEL = "lb";
const string Weight::KILO_LABEL = "kg";
const string Weight::SLUG_LABEL = "slug";

///////////////Validation//////////////
bool Weight::isWeightKnown() const noexcept {
    if( weight == UNKNOWN_WEIGHT) {
        cout << "Weight must be known" << endl;
        return false;
    }
    return true;
}
bool Weight::hasMaxWeight() const noexcept {
    if( bHasMax == false) {
        return false;
    }
    return true;
}
bool Weight::isWeightValid(float checkWeight) const noexcept {
    if( checkWeight <= 0 ) {
        return false;
    }
    if( bHasMax == true ) {
        if( checkWeight > maxWeight ) {
            return false;
        }
    }
    return true;
}
bool Weight::validate() const noexcept {
    if( bIsKnown == true ) {
        if( isWeightValid(weight) == false ) {
            return false;
        }
    }
    if( bHasMax == true ) {
        if ( isWeightValid( maxWeight) == false) {
            return false;
        }
    }
    return true;
}

/////////////////////////////Constructors///////////////////////////////

Weight::Weight() noexcept {
    assert( validate() );
}
Weight::Weight(float newWeight) {
}
Weight::Weight(UnitOfWeight newUnitOfWeight) noexcept {

}
Weight::Weight(float newWeight, UnitOfWeight newUnitOfWeight) {}
Weight::Weight(UnitOfWeight newUnitOfWeight, float newMaxWeight) {}
Weight::Weight(float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight) {}

