#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <vector>
#include "Character.h"

class Hero : public Character {
    int x, y;
    int experiencePoints;
    int level;
    std::vector<std::string> inventory;

public:
    Hero(const std::string& name, int health, int attackPower, int defense, int maxHealth, int level = 1, int startX = 0, int startY = 0)
        : Character(name, health, attackPower, defense, maxHealth), experiencePoints(0), level(level), x(startX), y(startY) {}

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
    void heroMovement();
    int getX() const;
    void setX(int newX);
    int getY() const;
    void setY(int newY);
    void move(const std::string& direction);
    int getExperience() const;
    int getLevel() const;
};

#endif