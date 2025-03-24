#include "../include/Character.h"
#include <gtest/gtest.h>

class MockCharacter : public Character {
public:
    MockCharacter(const std::string& name, int health, int attackPower, int defense)
        : Character(name, health, attackPower, defense) {}

    void displayStats() const override {
        std::cout << "MockCharacter Stats: "
                  << getName() << " | Health: " << getHealth()
                  << " | Attack Power: " << getAttackPower()
                  << " | Defense: " << getDefense() << "\n";
    }

    void takeDamage(int damage) override {
        health -= damage;
        if (health < 0) health = 0;
    }
};

TEST(CharacterTest, ConstructorInitialization) {
    MockCharacter character("TestCharacter", 100, 20, 10);

    EXPECT_EQ(character.getHealth(), 100);
    EXPECT_NO_THROW(character.displayStats());
}

TEST(CharacterTest, TakeDamageFunctionality) {
    MockCharacter character("TestCharacter", 100, 20, 10);
    character.takeDamage(30);

    EXPECT_EQ(character.getHealth(), 70);
    character.takeDamage(100);
    EXPECT_EQ(character.getHealth(), 0);
}

TEST(CharacterTest, VirtualDestructorCleanup) {
    Character* character = new MockCharacter("TestCharacter", 100, 20, 10);

    EXPECT_NO_THROW(delete character);
}
