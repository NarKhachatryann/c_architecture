#include "../include/Monster.h"
#include <iostream>

void Monster::displayStats() const {
    std::cout << "Monster: " << name << " | Health: " << health
              << " | Attack Power: " << attackPower << " | Defense: " << defense
              << " | Special Ability: " << specialAbility << "\n";
}

void Monster::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

void Monster::useSpecialAbility() const {
    std::cout << name << " uses " << specialAbility << "!\n";
}