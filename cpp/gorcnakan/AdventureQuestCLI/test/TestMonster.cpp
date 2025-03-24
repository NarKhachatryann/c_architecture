#include "../include/Monster.h"
#include <gtest/gtest.h>

// Թեստավորում ենք կոնստրուկտորի ճիշտ աշխատանքի համար
TEST(MonsterTest, ConstructorInitialization) {
    Monster monster("TestMonster", 80, 15, 5, "Poison Strike");

    EXPECT_EQ(monster.getHealth(), 80);
    EXPECT_NO_THROW(monster.displayStats()); // Ստուգում ենք, որ displayStats() չի կրակում բացառում
}

// Թեստավորում ենք takeDamage() ֆունկցիոնալությունը
TEST(MonsterTest, TakeDamageFunctionality) {
    Monster monster("TestMonster", 80, 15, 5, "Poison Strike");

    monster.takeDamage(30);
    EXPECT_EQ(monster.getHealth(), 50);

    monster.takeDamage(100);
    EXPECT_EQ(monster.getHealth(), 0); // Վստահվում ենք, որ առողջությունը հասնում է 0
}

// Թեստավորում ենք հատուկ հմտության ցուցադրումը
TEST(MonsterTest, SpecialAbilityDisplay) {
    Monster monster("TestMonster", 80, 15, 5, "Poison Strike");

    EXPECT_NO_THROW(monster.displayStats()); // Վստահվում ենք, որ հատուկ կարողությունը ճիշտ է ցուցադրվում
}
