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
    //////////Constants////////////
    enum UnitOfWeight { POUND, KILO, SLUG };

    static const float    UNKNOWN_WEIGHT;
    static const float    KILOS_IN_A_POUND;
    static const float    SLUGS_IN_A_POUND;

    static const string POUND_LABEL;
    static const string KILO_LABEL;
    static const string SLUG_LABEL;

    /////////////Constructors//////////////////////
    Weight() noexcept;
    Weight(float newWeight);
    Weight(UnitOfWeight newUnitOfWeight) noexcept;
    Weight(float newWeight, UnitOfWeight newUnitOfWeight);
    Weight(float newWeight, float newMaxWeight);
    Weight(UnitOfWeight newUnitOfWeight, float newMaxWeight);
    Weight(float newWeight, UnitOfWeight newUnitOfWeight, float newMaxWeight);

    ///////////////////Getters///////////////
    bool  isWeightKnown() const noexcept;
    bool  hasMaxWeight() const noexcept;
    float getWeight() const noexcept;
    float getWeight( UnitOfWeight weightUnits ) const noexcept;
    float getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

    ////////Setters//////////
    void setWeight( float newWeight );
    void setWeight( float newWeight, UnitOfWeight weightUnits );


private:

    /////////Member Variables//////////
    bool bIsKnown;
    bool bHasMax;
    enum UnitOfWeight unitOfWeight;
    float weight{};
    float maxWeight{};



};


//#endif //EE205_LAB12A_FATCAT_WEIGHT_H
