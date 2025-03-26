#include "../include/Character.h"
#include <iostream>

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

void Character::displayStats() const {
    std::cout << "Character Stats: "
              << name << " | Health: " << health
              << " | Attack Power: " << attackPower
              << " | Defense: " << defense << "\n";
}

void Character::setHealth(int health) { this->health = health; }
void Character::setAttackPower(int attackPower) { this->attackPower = attackPower; }
int Character::getMaxHealth() const { return maxHealth; }

int Character::getHealth() const { return health; }
int Character::getAttackPower() const { return attackPower; }
int Character::getDefense() const { return defense; }
std::string Character::getName() const { return name; }