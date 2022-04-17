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

#include "Weight.h"

using namespace std;

const float Weight::UNKNOWN_WEIGHT = -1;
const float Weight::KILOS_IN_A_POUND = 0.45359237;
const float Weight::SLUGS_IN_A_POUND = 0.03108095;

const string Weight::POUND_LABEL = "lb";
const string Weight::KILO_LABEL = "kg";
const string Weight::SLUG_LABEL = "slug";