#include "../include/NPC.h"
#include <iostream>

void NPC::displayStats() const {
    std::cout << "NPC: " << name << " | Dialogue: " << dialogue << "\n";
}

void NPC::takeDamage(int damage) {
    std::cout << name << " cannot take damage as an NPC!\n";
}

std::string NPC::interact() const {
    std::cout << name << " says: " << dialogue << "\n";
    return dialogue;
}
