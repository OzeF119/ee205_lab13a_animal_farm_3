///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab13a_animal_farm_3 - EE 205 - Spr 2022
///
/// @file Animal.h
/// @version 1.0
///
/// @author Oze Farris <ofarris@hawaii.edu>
/// @date   24_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#include <string>

#include "config.h"
#include "Node.h"
#include "Gender.h"
#include "Weight.h"


class Animal : public Node {
public:
    static const std::string KINGDOM_NAME;
private:
    std::string species;
    std::string classification:
    Gender gender = Gender::UNKNOWN_GENDER;
    Weight weight;
public:
    Animal(const Weight::t_weight newMaxWeight, const std::string& newClassification,
           const std::string& new Species);
    Animal(const Gender newGender, const Weight::t_weight newWeight,
           const Weight::t_weight newMaxWeight, const std::string& newClassification,
           const std::string& newSpecies);
public:
    std::string getKingdom() const noexcept;
    std::string getClassification() const noexcept;
    std::string getSpecies() const noexcept;
    Gender getGender() const noexcept;
    Weight::t_weight getWeight() const noexcept;
    void setWeight(const Weight::t_weight newWeight);
public:
    static bool validateClassification(const std::string& checkClassification) noexcept;
    static bool validateSpecies(const std::string& checkSpecies) noexcept;
protected:
    void setGender(const Gender newGender);
public:
    virtual std::string speak() const noexcept = 0;
public:
    void dump() const noexcept;
    bool validate() const noexcept;
};

