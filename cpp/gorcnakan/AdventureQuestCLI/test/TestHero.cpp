#include "../include/Hero.h"
#include <gtest/gtest.h>

TEST(HeroTest, ConstructorInitialization) {
    Hero hero("TestHero", 100, 20, 10, 1);

    EXPECT_EQ(hero.getHealth(), 100);
    EXPECT_NO_THROW(hero.displayStats());
}

TEST(HeroTest, TakeDamageFunctionality) {
    Hero hero("TestHero", 100, 20, 10, 1);

    hero.takeDamage(30);
    EXPECT_EQ(hero.getHealth(), 70);

    hero.takeDamage(100);
    EXPECT_EQ(hero.getHealth(), 0);
}

TEST(HeroTest, InventoryManagement) {
    Hero hero("TestHero", 100, 20, 10, 1);

    hero.addItemToInventory("Health Potion");
    hero.addItemToInventory("Sword");

    EXPECT_NO_THROW(hero.displayStats());
}
