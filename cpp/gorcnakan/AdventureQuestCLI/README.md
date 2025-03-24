# Adventure Quest - CLI RPG Game

**Adventure Quest** is an immersive Command-Line Interface (CLI) Role-Playing Game (RPG) that invites players into a fantasy world filled with heroes, monsters, and NPCs (Non-Playable Characters). Players will explore different locations, complete quests, engage in battles, and develop their hero's abilities.

---

## Game Overview

Adventure Quest is designed to give players a modular and dynamic RPG experience, leveraging advanced C++ programming concepts such as:
- **Abstract Classes**: Base class `Character` manages shared attributes for all game entities.
- **Interfaces**: Define behaviors like `Interactable` for NPCs and `Combatable` for battle-ready characters.
- **Dynamic Polymorphism**: Seamlessly handles character behaviors and interactions during runtime.
- **RTTI**: Run-Time Type Identification provides custom behaviors based on the character's type (e.g., a Mage’s spell damage or NPC-specific dialogue).

## Features

### Core Features
- **Hero Development**:
  - Level-up by earning XP from battles and quests.
  - Manage inventory to store weapons, potions, and quest items.
  - Gain abilities based on hero type (e.g., Mage, Warrior, Rogue).

- **Exploration**:
  - Travel through textual locations like "Enchanted Forest" or "Dark Dungeon."
  - Discover treasures, meet NPCs, and face unique challenges.

- **Turn-Based Combat**:
  - Use skills, items, and strategic choices to defeat monsters like Goblins, Trolls, and Dragons.

- **Interactive Quests**:
  - Embark on missions given by NPCs with branching dialogue.
  - Complete tasks such as slaying monsters, retrieving items, or solving puzzles.

### Advanced Systems
- **Inventory Management**:
  - Equip and use items during battles and exploration.
  - Organize hero's weapons, potions, and magical relics.

- **Game Progression**:
  - Save and load game states to continue your journey seamlessly.

- **Dynamic Encounters**:
  - Experience unique interactions based on the hero type using RTTI, such as type-specific combat bonuses or NPC dialogue.

---

## Project Structure

The game follows a clean and modular structure: