// src/units/StrategicUnit.cpp
#include "../../include/UnitHeaders/StrategicUnit.h"

// Implementation of move behavior
void StrategicUnit::move() {
    std::cout << "[StrategicUnit] " << name << " repositions on the strategic map.\n";
}

// Implementation of attack behavior
void StrategicUnit::attack(Unit& target) {
    std::cout << "[StrategicUnit] " << name << " launches a strategic strike on " 
              << target.getName() << "!\n";
    target.takeDamage(attackPower);
}

// Implementation of manageResources behavior
void StrategicUnit::manageResources() {
    std::cout << "[StrategicUnit] " << name << " allocates resources strategically.\n";
}

// Implementation of takeDamage (inherited from Unit)
void Unit::takeDamage(int damage) {
    health -= damage;
    std::cout << "[Unit] " << name << " takes " << damage << " damage! Remaining health: " 
              << health << "\n";
    if (health <= 0) {
        std::cout << "[Unit] " << name << " has been destroyed!\n";
    }
}