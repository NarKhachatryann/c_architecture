#include "../include/GameWorld.h"
#include <iostream>

GameWorld::GameWorld() {
    std::cout << "GameWorld created!" << std::endl;
}

GameWorld::~GameWorld() {
    for (Character* entity : entities) {
        delete entity;
    }
    entities.clear();
    std::cout << "GameWorld destroyed!" << std::endl;
}

void GameWorld::addEntity(Character* entity) {
    entities.push_back(entity);
    std::cout << "Entity added to the GameWorld!" << std::endl;
}

void GameWorld::exploreLocation() {
    std::cout << "Exploring the GameWorld!" << std::endl;
    for (Character* entity : entities) {
        if (entity) {
            entity->displayStats();
        }
    }
}