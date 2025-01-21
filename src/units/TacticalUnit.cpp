/*
TacticalUnit.cpp
Author: Hashem Wahed
Date: Jan 2025
Description: How a tactical unit operates.
*/
#pragma once
#include "../../include/UnitHeaders/TacticalUnit.h"


/*
Function: Initialize Strength
Description: What this function does is that it looks through all of the unit's
equipment and then sets its strength, ie, its defense, hard attack, etc.
This function will definitely be subject to alot of changes, but this
will be the start
Explanation of the algorithm:
We look through the equipment and initialize these values:
These six features are what decide who wins and loses a battle
(The first two are values from 0-100 as percentanges)
1. Hardness
2. Health
(These are all values >0)
3. softAttack
4. hardAttack
5. defense
6. speed
###############################################################################
These next factors are needed for the general nation to determine stockpiles
and stuff
(now these next ones are all values > 0)
Now, little timmy may ask, if fuel is a value from 0-100, how is fuel
consumption an actual value?
Well, great question little timmy, fuel shall be the amount of fuel as a
percentage of how much the unit needs. But fuel consumption directly affects
the amount of fuel a country has and is using. They are both kind of different
and similar.
1. fuel consumption (this will be in barrels)
2. ammunition consumption (in bullets, 1-1000 scale)
###############################################################################
Then we have some other factors which are both affected by equipment and other
things, maybe the political surroundings.
What I mean is that, if troops don't have food, they won't be very happy.
However, sometimes, even when they do have food, maybe they just generally do
not want to fight for their government. This will be a trait changed in other
places. Probably will make a state modifiers section.
1. morale
2. organization
################################################################################
Then the hard part, our equipment. Our values are all dependant on all of this
equipment:
(these all range from 0-100)
1. fuel
2. ammunition
3. supply
4. entrench
5. experience
6. training
7. discipline
8. fatigue
(These next ones are in values>0)
1. manpower
2. smallArms
3. artillery
4. apcs
5. ifvs
6. apcs
7. antitank
8. antiair
9. tanks
10. trucks
11. personnelEquipment (rations and uniforms and stuff)
Parameters: None
*/
void TacticalUnit::initializeStrength() {
    
}
/*
Function: Move
Description: Moving a unit from one position to another
Parameters: 
    int dx: The x destination
    int dy: The y destination
NEED TO DO: PATHFINDING ALGORITHM
*/
void TacticalUnit::move(int dx, int dy) {
    // for now, no pathfinding algorithm. we will do this when we 
    // build our map. Right now we focus on engagements inshallah
    this->position.x = dx;
    this->position.y = dy;
}

/*
Function: Attack
Description: Atacking another unit. How will this be structured? 
    so there are a couple of unit parameters which are what are really
    focused on during an attack. 
    1. Anti-personnel firepower. This will signify how much we can hurt
        flesh targets, like infantry.
    2. Anti-armor firepower. This will signify how much we can hurt armoured
        targets, like tanks, mechanized vehicles, etc.
    3. Hardness: This signifies how much we are armoured. This allows us to
        know if the enemy can pierce us.
    4. Organization: This signifies just how organized our force is.
    5. 
Parameters:
    Unit& target: The other unit to attack.
NEED TO DO: TIMELAPSING
*/
void TacticalUnit::attack(Unit& target) {
    // 
}