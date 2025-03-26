#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <vector>
#include "Character.h"

class Hero : public Character {
    int experiencePoints;
    int level;
    std::vector<std::string> inventory;

public:
    Hero(const std::string& name, int health, int attackPower, int defense, int maxHealth, int level = 1)
        : Character(name, health, attackPower, defense, maxHealth), experiencePoints(0), level(level) {}

    void displayStats() const override;
    void takeDamage(int damage) override;
    void addItemToInventory(const std::string& item);
    void levelUp();
    void removeItemFromInventory(const std::string& item);
    bool useItem(const std::string& item);
    void gainExperience(int experience);
    void heal(int amount);
    void displayInventory() const;
    void displayLevel() const;
    void displayExperience() const;
};

#endif