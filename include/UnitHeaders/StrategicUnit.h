// src/units/StrategicUnit.h
#pragma once
#include "Unit.h"
#include "OperationalUnit.h"
#include <iostream>

class StrategicUnit : public Unit {
private:
    std::vector<OperationalUnit> operationalUnits;

public:
    // Constructor
    StrategicUnit(std::string name, int org, int morale, int fuel, int ammunition, 
        int supply, int entrench, int hardness, int health, int softAttack, 
        int hardAttack, int speed, int experience, int training, 
        int fuelConsumption, int ammunitionConsumption, int discipline, 
        int fatigue, int willpower, int manpower, int smallArms, int artillery,
        int apcs, int ifvs, int antitank, int antiair, int tanks, int trucks,
        int personnelEquipment, int engagementRange, Position position,
        std::vector<OperationalUnit> operationalUnits)
        : Unit(name, org, morale, fuel, 
            ammunition, supply, entrench, hardness,
            health, softAttack, hardAttack, speed, experience, training,
            fuelConsumption, ammunitionConsumption, discipline, fatigue, 
            willpower, manpower, smallArms, artillery, apcs, ifvs, antitank,
            antiair, tanks, trucks, personnelEquipment, engagementRange, 
            position) {}

    void addOperationalUnit(const OperationalUnit& unit);
    // Override move and attack
    void attack(Unit& target) override;

    // Unique Strategic Behavior
    void manageResources();

};