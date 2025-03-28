#include "../include/Character.h"
#include "../include/Combatable.h"
#include "../include/GameWorld.h"
#include "../include/Hero.h"
#include "../include/Interactable.h"
#include "../include/Monster.h"
#include "../include/NPC.h"
#include "../include/QuestManager.h"
#include "../include/Utility.h"/* 
#include "../include/moveHero.h" */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    GameWorld game;
    Hero hero("Armen", 100, 15, 10, 120);
    Monster dragon("Dragon", 150, 20, 5, 150, "Fire Breath");

    while (true) {
        std::cout << "\n--- Menu ---\n";
        std::cout << "1. Move Hero\n";
        std::cout << "2. Display Hero Stats\n";
        std::cout << "3. Add Item to Inventory\n";
        std::cout << "4. Remove Item from Inventory\n";
        std::cout << "5. Use Item\n";
        std::cout << "6. Gain Experience\n";
        std::cout << "7. Exit\n";
        std::cout << "Choose an option: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string direction;
                std::cout << "Enter direction (up, down, left, right): ";
                std::cin >> direction;
                hero.move(direction);
                std::cout << "Hero's current position: (" << hero.getX() << ", " << hero.getY() << ")\n";
                break;
            }
            case 2: {
                hero.displayStats();
                break;
            }
            case 3: {
                std::string item;
                std::cout << "Enter item to add: ";
                std::cin.ignore();
                std::getline(std::cin, item);
                hero.addItemToInventory(item);
                break;
            }
            case 4: {
                std::string item;
                std::cout << "Enter item to remove: ";
                std::cin >> item;
                hero.removeItemFromInventory(item);
                break;
            }
            case 5: {
                std::string item;
                std::cout << "Enter item to use: ";
                std::cin.ignore();
                std::getline(std::cin, item);
                hero.useItem(item);
                break;
            }
            case 6: {
                int experience;
                std::cout << "Enter experience points to gain: ";
                std::cin >> experience;
                hero.gainExperience(experience);
                std::cout << "Hero's current experience: " << hero.getExperience() << "\n";
                break;
            }
            case 7: {
                std::cout << "Exiting the game. Goodbye!\n";
                return 0;
            }
            default: {
                std::cout << "Invalid option. Please try again.\n";
                break;
            }
        }
    }

    /* game.addEntity(&hero);
    game.addEntity(&dragon);

    hero.displayStats();
    dragon.displayStats(); */

    return 0;
}