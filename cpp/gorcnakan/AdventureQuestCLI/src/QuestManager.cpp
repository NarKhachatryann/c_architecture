#include "../include/QuestManager.h"
#include <iostream>
#include <algorithm>

QuestManager::QuestManager() {
    std::cout << "QuestManager has been created!" << std::endl;
}

QuestManager::~QuestManager() {
    for (Quest* quest : activeQuests) {
        delete quest;
    }
    activeQuests.clear();
    std::cout << "QuestManager has cleaned up all quests!" << std::endl;
}

void QuestManager::addQuest(Quest* quest) {
    if (quest) {
        activeQuests.push_back(quest);
        std::cout << "Quest added: " << quest->description << std::endl;
    } else {
        std::cout << "Cannot add a NULL quest!" << std::endl;
    }
}

void QuestManager::completeQuest(Quest* quest) {
    auto it = std::find(activeQuests.begin(), activeQuests.end(), quest);
    if (it != activeQuests.end()) {
        (*it)->isCompleted = true;
        std::cout << "Quest completed: " << (*it)->description << std::endl;
    } else {
        std::cout << "Quest not found in the active quests!" << std::endl;
    }
}

