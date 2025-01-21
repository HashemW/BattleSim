// src/units/TacticalUnit.h
#pragma once
#include "Unit.h"
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

enum class TacticalUnitType {
    Infantry,
    MotorizedInfantry, 
    Tank,
    Artillery,
    AntiTank,
    AntiAir,
    Recon,
    Engineers,
    SpecialForces,
    Logistics
};

class TacticalUnit : public Unit {
private:
    TacticalUnitType type;

    // supplies
    int range;
    
    


public:
    // Constructor
    TacticalUnit(std::string name, 
        int org, 
        int morale, 
        int fuel, 
        int ammunition, 
        int supply, 
        int entrench, 
        int hardness, 
        int health, 
        int softAttack, 
        int hardAttack, 
        int antiAirFirepower,
        int defense, 
        int speed, 
        int experience, 
        int training, 
        int fuelConsumption, 
        int ammunitionConsumption, 
        int discipline, 
        int fatigue, 
        int willpower, 
        int manpower, 
        int smallArms, 
        int artillery,
        int apcs, 
        int ifvs, 
        int antitank, 
        int antiair, 
        int tanks, 
        int trucks,
        int personnelEquipment, 
        int engagementRange, 
        Position position,
        TacticalUnitType type, 
        int range = 0)
        : Unit(name, 
            org, 
            morale, 
            fuel, 
            ammunition, 
            supply, 
            entrench, 
            hardness,
            health, 
            softAttack, 
            hardAttack, 
            antiAirFirepower,
            defense,
            speed, 
            experience, 
            training,
            fuelConsumption, 
            ammunitionConsumption, 
            discipline, 
            fatigue, 
            willpower, 
            manpower, 
            smallArms, 
            artillery, 
            apcs, 
            ifvs, 
            antitank,
            antiair, 
            tanks, 
            trucks, 
            personnelEquipment, 
            engagementRange,
            position), 
            type(type), 
            range(range) {}
    
    // // Override move and attack
    void move(int dx, int dy) override;
    void attack(Unit& target) override;

    // // Unique Strategic Behavior
    void manageResources();

    // // Accessor for strategic value
    //int getStrategicValue() const { return tacticalValue; }
    void addEquipment(const std::string& item, int quantity);
    //this method initializes our unit strength from our equipment.
    void initializeStrength();

    // stupid setters
    void setType(TacticalUnitType type) { this->type = type; }
    void setRange(int range) { this->range = range; }

    // stupid getters
    TacticalUnitType getType() const { return type; }
    int getRange() { return range; }
    
};