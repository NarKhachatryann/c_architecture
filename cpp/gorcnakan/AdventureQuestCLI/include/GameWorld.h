#ifndef GAMEWORLD_H
#define GAMEWORLD_H

#include <vector>
#include "Character.h"

class GameWorld {
    std::vector<Character*> entities;

public:
    GameWorld();
    ~GameWorld();
    void addEntity(Character* entity);
    void exploreLocation();
};

#endif