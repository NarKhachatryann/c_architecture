#include "../include/Character.h"
#include "../include/Combatable.h"
#include "../include/GameWorld.h"
#include "../include/Hero.h"
#include "../include/Interactable.h"
#include "../include/Monster.h"
#include "../include/NPC.h"
#include "../include/QuestManager.h"
#include "../include/Utility.h"

int main() {
    GameWorld game;
    Hero hero("Armen", 100, 15, 10, 120);
    Monster dragon("Dragon", 150, 20, 5, 150, "Fire Breath");

    game.addEntity(&hero);
    game.addEntity(&dragon);

    hero.displayStats();
    dragon.displayStats();

    return 0;
}