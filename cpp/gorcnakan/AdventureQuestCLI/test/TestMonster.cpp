#include "../include/Monster.h"
#include <gtest/gtest.h>

TEST(MonsterTest, ConstructorInitialization) {
    Monster monster("TestMonster", 80, 15, 5, "Poison Strike");

    EXPECT_EQ(monster.getHealth(), 80);
    EXPECT_NO_THROW(monster.displayStats());
}

TEST(MonsterTest, TakeDamageFunctionality) {
    Monster monster("TestMonster", 80, 15, 5, "Poison Strike");

    monster.takeDamage(30);
    EXPECT_EQ(monster.getHealth(), 50);

    monster.takeDamage(100);
    EXPECT_EQ(monster.getHealth(), 0);
}

TEST(MonsterTest, SpecialAbilityDisplay) {
    Monster monster("TestMonster", 80, 15, 5, "Poison Strike");

    EXPECT_NO_THROW(monster.displayStats());
}
