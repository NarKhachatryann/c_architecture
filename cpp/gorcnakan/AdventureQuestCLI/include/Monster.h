#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster : public Character {
    std::string specialAbility;

public:
    Monster(const std::string& name, int health, int attackPower, int defense, const std::string& specialAbility)
        : Character(name, health, attackPower, defense), specialAbility(specialAbility) {}

    void displayStats() const override;
    void takeDamage(int damage) override;
};

#endif