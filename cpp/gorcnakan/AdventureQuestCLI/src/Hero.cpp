#include "../include/Hero.h"
#include <iostream>
#include <algorithm>

void Hero::displayStats() const {
    std::cout << "Hero: " << name << " | Health: " << health
              << " | Attack Power: " << attackPower << " | Defense: " << defense
              << " | Level: " << level << " | XP: " << experiencePoints << "\n";
}

void Hero::takeDamage(int damage) {
    health -= damage;
    if (health < 0) health = 0;
}

void Hero::levelUp() {
    level++;
    experiencePoints = 0;
    health += 10;
    attackPower += 5;
    defense += 5;
    std::cout << "Congratulations! You have leveled up to level " << level << "!\n";
}

void Hero::addItemToInventory(const std::string& item) {
    inventory.push_back(item);
    std::cout << "You have added " << item << " to your inventory.\n";
}

void Hero::removeItemFromInventory(const std::string& item) {
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end()) {
        inventory.erase(it);
        std::cout << "You have removed " << item << " from your inventory.\n";
    } else {
        std::cout << "You do not have " << item << " in your inventory.\n";
    }
}

void Hero::useItem(const std::string& item) {
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it != inventory.end()) {
        std::cout << "You have used " << item << ".\n";
        inventory.erase(it);
    } else {
        std::cout << "You do not have " << item << " in your inventory.\n";
    }
}

void Hero::gainExperience(int experience) {
    experiencePoints += experience;
    std::cout << "You have gained " << experience << " experience points.\n";
    if (experiencePoints >= 100) {
        levelUp();
    }
}
