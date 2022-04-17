///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205-lab12a-fatCat - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Jordan Cortado <jcortado@hawaii.edu>
/// @date   16_Apr_2022
///////////////////////////////////////////////////////////////////////////////

//#ifndef EE205_LAB12A_FATCAT_WEIGHT_H
//#define EE205_LAB12A_FATCAT_WEIGHT_H
#include <string>

using namespace std;

class Weight {
public:

    enum UnitOfWeight { POUND, KILO, SLUG };

    static const float    UNKNOWN_WEIGHT;
    static const float    KILOS_IN_A_POUND;
    static const float    SLUGS_IN_A_POUND;

    static const string POUND_LABEL;
    static const string KILO_LABEL;
    static const string SLUG_LABEL;


};


//#endif //EE205_LAB12A_FATCAT_WEIGHT_H
