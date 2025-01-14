#pragma once
#include "Unit.h"
#include "TacticalUnit.h"
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

enum class OperationalUnitType {
    Infantry,
    Tank,
    Motorized, 
    Mechanized,
    Artillery,
    AntiTank,
    AntiAir,
    SpecialForces
};

class OperationalUnit : public Unit {
private:
    OperationalUnitType type;
    std::vector<TacticalUnit> tacticalUnits;
public:
    OperationalUnit(std::string name, int org, int morale, int fuel, int ammunition, 
        int supply, int entrench, int hardness, int health, int softAttack, 
        int hardAttack, int speed, int experience, int training, 
        int fuelConsumption, int ammunitionConsumption, int discipline, 
        int fatigue, int willpower, int manpower, int smallArms, int artillery,
        int apcs, int ifvs, int antitank, int antiair, int tanks, int trucks,
        int personnelEquipment, OperationalUnitType type, 
        std::vector<TacticalUnit> tacticalUnits) : Unit(name, org, morale, fuel, 
            ammunition, supply, entrench, hardness,
            health, softAttack, hardAttack, speed, experience, training,
            fuelConsumption, ammunitionConsumption, discipline, fatigue, 
            willpower, manpower, smallArms, artillery, apcs, ifvs, antitank,
            antiair, tanks, trucks, personnelEquipment), type(type) {}
    
    void addTacticalUnit(const TacticalUnit& unit);
};