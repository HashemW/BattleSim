#pragma once
#include <string>

class Unit {
protected:
    std::string name;
    // range from 0-100, in percent
    int organization; 
    int morale;
    int supply;
    int fuel;
    int ammunition;
    int entrenchment;

    int hardness;
    int health;
    int antiPersonnelFirepower;
    int antiArmorFirepower;

    int speed;
    
    int experience;
    int training;

    int fuelConsumption;
    int ammunitionConsumption;

    int discipline;
    int fatigue;
    int willpower;

    int manpower;

    // equipment
    int smallArms;
    int artillery;
    int apcs;
    int ifvs;
    int antitank;
    int antiair;
    int tanks;
    int trucks;
    int personnelEquipment;

public:
    Unit(std::string name, int org, int morale, int fuel, int ammunition, 
        int supply, int entrench, int hardness, int health, int softAttack, 
        int hardAttack, int speed, int experience, int training, 
        int fuelConsumption, int ammunitionConsumption, int discipline, 
        int fatigue, int willpower, int manpower, int smallArms, int artillery,
        int apcs, int ifvs, int antitank, int antiair, int tanks, int trucks,
        int personnelEquipment)
        : name(name), organization(org), morale(morale), supply(supply), 
            fuel(fuel), ammunition(ammunition), entrenchment(entrenchment),
            hardness(hardness), health(health), 
            antiPersonnelFirepower(softAttack), antiArmorFirepower(hardAttack),
            speed(speed), experience(experience), training(training), 
            fuelConsumption(fuelConsumption), 
            ammunitionConsumption(ammunitionConsumption), 
            discipline(discipline), fatigue(fatigue), willpower(willpower),
            manpower(manpower), smallArms(smallArms), artillery(artillery),
            apcs(apcs), ifvs(ifvs), antitank(antitank), antiair(antiair),
            tanks(tanks), trucks(trucks), 
            personnelEquipment(personnelEquipment) {}

    virtual ~Unit() = default;

    virtual void move() = 0;
    virtual void attack(Unit& target) = 0;
    virtual void takeDamage(int damage);
    bool isAlive() const { return health > 0; }
// std::string name;
//     // range from 0-100, in percent
//     int organization; 
//     int morale;
//     int supply;
//     int fuel;
//     int ammunition;
//     int entrenchment;

//     int hardness;
//     int health;
//     int antiPersonnelFirepower;
//     int antiArmorFirepower;

//     int speed;
    
//     int experience;
//     int training;

//     int fuelConsumption;
//     int ammunitionConsumption;

//     int discipline;
//     int fatigue;
//     int willpower;

//     int manpower;

    // stupid setters
    void setName(std::string name) { this->name = name; }
    void setOrganization(int org) { this->organization = org; }
    void setMorale(int morale) { this->morale = morale; }
    void setSupply(int supply) { this->supply = supply; }
    void setFuel(int fuel) { this->fuel = fuel; }
    void setAmmunition(int ammunition) { this->ammunition = ammunition; }
    void setEntrenchment(int entrench) { this->entrenchment = entrench; }
    void setHardness(int hardness) { this->hardness = hardness; }
    void setHealth(int health) { this->health = health; }
    void setAntiPersonnelFirepower(int antiPersonnelFirepower) {
        this->antiPersonnelFirepower = antiPersonnelFirepower;
    }
    void setAntiArmorFirepower(int antiArmorFirepower) {
        this->antiArmorFirepower = antiArmorFirepower;
    }
    void setSpeed(int speed) { this->speed = speed; }
    void setExperience(int experience) { this->experience = experience; }
    void setTraining(int training) {this->training = training; }
    void setFuelConsumption(int fuelConsumption) { 
        this->fuelConsumption = fuelConsumption; 
    }
    void setAmmunitionConsumption(int ammunitionConsumption) {
        this->ammunitionConsumption = ammunitionConsumption;
    }
    void setDiscipline(int discipline) { this->discipline = discipline; }
    void setSmallArms(int smallArms) { this->smallArms = smallArms; }
    void setArtillery(int artillery) { this->artillery = artillery; }
    void setAPCs(int apcs) { this->apcs = apcs; }
    void setIFVs(int ifvs) { this->ifvs = ifvs; }
    void setAntiTank(int antitank) { this->antitank = antitank; }
    void setAntiAir(int antiair) { this->antiair = antiair; }
    void setTanks(int tanks) { this->tanks = tanks; }
    void setTrucks(int trucks) { this->trucks = trucks; }
    void setPersonnelEquipment(int personnelEquipment) { 
        this->personnelEquipment = personnelEquipment;
    }
    //stupid getters
    std::string getName() const { return name; }
    int getOrganization() { return organization; }
    int getMorale() { return morale; }
    int getSupply() { return supply; }
    int getFuel() { return fuel; }
    int getAmmunition() { return ammunition; }
    int getEntrenchment() { return ammunition; }
    int getHardness() { return hardness; }
    int getHealth() { return health; }
    int getAntiPersonnelFirePower() { return antiPersonnelFirepower; }
    int getAntiArmorFirepower() { return antiArmorFirepower; }
    int getSpeed() { return speed; }
    int getExperience() { return experience; }
    int getTraining() { return training; }
    int getFuelConsumption() { return fuelConsumption; }
    int getAmmunitionConsumption() { return ammunitionConsumption; }
    int getDiscipline() { return discipline; }
    int getFatigue() { return fatigue; }
    int getWillpower() { return willpower; }
    int getManpower() { return manpower; }
    int getSmallArms() { return smallArms; }
    int getArtillery() { return artillery; }
    int getAPCs() { return apcs; }
    int getIFVs() { return ifvs; }
    int getAntiTank() { return antitank; }
    int getAntiAir() { return antiair; }
    int getTanks() { return tanks; }
    int getTrucks() { return trucks; }
    int getPersonnelEquipment() { return personnelEquipment; }
};

