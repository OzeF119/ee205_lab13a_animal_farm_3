///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////

#pragma once


#include <string>
#include <ostream>

class Weight {
public:
    enum UnitOfWeight { POUND, KILO, SLUG };
    typedef float t_weight;

public:
    static const t_weight UNKNOWN_WEIGHT ;
    static const t_weight KILOS_IN_A_POUND ;
    static const t_weight SLUGS_IN_A_POUND ;
    static const std::string POUND_LABEL ;
    static const std::string KILO_LABEL ;
    static const std::string SLUG_LABEL ;

private:
    bool bIsKnown = false ;
    bool bHasMax = false ;
    enum UnitOfWeight unitOfWeight = POUND ;
    t_weight weight{} ;
    t_weight maxWeight{} ;

public:
    explicit Weight() noexcept;
    explicit Weight( t_weight newWeight );
    explicit Weight( UnitOfWeight newUnitOfWeight ) noexcept;
    explicit Weight( t_weight newWeight, UnitOfWeight newUnitOfWeight );
    explicit Weight( t_weight newWeight, t_weight newMaxWeight );
    explicit Weight( UnitOfWeight newUnitOfWeight, t_weight newMaxWeight );
    explicit Weight( t_weight newWeight, UnitOfWeight newUnitOfWeight, t_weight newMaxWeight );

public:
    bool  isWeightKnown() const noexcept;
    bool  hasMaxWeight() const noexcept;
    t_weight getWeight() const noexcept;
    t_weight getWeight( UnitOfWeight weightUnits ) const noexcept;
    t_weight getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit() const noexcept;

public:
    void setWeight( t_weight newWeight );
    void setWeight( t_weight newWeight, UnitOfWeight weightUnits );

private:
    void setMaxWeight( t_weight newMaxWeight );

public:
    static float fromKilogramToPound( t_weight kilogram ) noexcept;
    static float fromPoundToKilogram( t_weight pound ) noexcept;
    static float fromSlugToPound( t_weight slug ) noexcept;
    static float fromPoundToSlug( t_weight pound ) noexcept;
    static float convertWeight( t_weight fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit ) noexcept;

public:
    bool isWeightValid( t_weight checkWeight ) const noexcept;
    bool validate() const noexcept;
    void dump() const noexcept;

public:
    bool operator==( const Weight& rhs_Weight ) const;
    bool operator<( const Weight& rhs_Weight ) const;
    Weight& operator+=( t_weight rhs_addToWeight );
};


std::ostream& operator<<( std::ostream& lhs_stream, const Weight& rhs_Weight ) ;
std::ostream& operator<<( std::ostream& lhs_stream, Weight::UnitOfWeight rhs_UnitOfWeight );