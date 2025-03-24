#ifndef NPC_H
#define NPC_H

#include "Character.h"
#include <string>

class NPC : public Character {
    std::string dialogue;

public:
    NPC(const std::string& name, int health, const std::string& dialogue)
        : Character(name, health, 0, 0), dialogue(dialogue) {}

    void displayStats() const override;
    void takeDamage(int damage) override;
    std::string interact() const;
};

#endif