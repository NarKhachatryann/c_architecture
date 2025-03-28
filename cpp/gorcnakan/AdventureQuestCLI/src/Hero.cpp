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

bool Hero::useItem(const std::string& item) {
    auto it = std::find(inventory.begin(), inventory.end(), item);
    if (it == inventory.end()) {
        std::cout << "Item not found in the inventory!\n";
        return false;
    }

    if (item == "Health Potion") {
        if (getHealth() == getMaxHealth()) {
            std::cout << "You are already at full health. Cannot use " << item << ".\n";
            return false;
        }
        setHealth(getHealth() + 50);
        std::cout << "You used a " << item << " and restored 50 health points!\n";
    } else if (item == "Mana Potion") {
        std::cout << "You used a " << item << " and restored mana points!\n";
    } else {
        std::cout << item << " cannot be used right now.\n";
        return false;
    }

    inventory.erase(it);
    std::cout << item << " has been removed from the inventory.\n";
    return true;
}

void Hero::gainExperience(int experience) {
    experiencePoints += experience;
    while (experiencePoints >= 100) {
        experiencePoints -= 100;
        levelUp();
    }
}

int Hero::getX() const {
    return x;
}

int Hero::getY() const {
    return y;
}

void Hero::move(const std::string& direction) {
    if (direction == "up") {
        y += 1;
    } else if (direction == "down") {
        y -= 1;
    } else if (direction == "left") {
        x -= 1;
    } else if (direction == "right") {
        x += 1;
    } else {
        std::cout << "Invalid direction!" << std::endl;
    }
}

void Hero::setX(int newX) {
    x = newX;
}
void Hero::setY(int newY) {
    y = newY;
}

void Hero::heroMovement() {
    while (true) {
        std::string direction;
        std::cout << "Enter direction to move (up, down, left, right) or type 'exit' to quit: ";
        std::cin >> direction;

        if (direction == "exit") {
            std::cout << "Exiting the movement system. Goodbye!\n";
            break;
        }

        move(direction);
        setX(getX());
        setY(getY());
        std::cout << "Hero's current position: (" << getX() << ", " << getY() << ")\n";
    }
}

int Hero::getExperience() const {
    return experiencePoints;
}

int Hero::getLevel() const {
    return level;
}