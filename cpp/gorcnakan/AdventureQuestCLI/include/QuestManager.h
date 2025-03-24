#ifndef QUESTMANAGER_H
#define QUESTMANAGER_H

#include <vector>
#include <string>

class Quest {
public:
    std::string description;
    bool isCompleted;
};

class QuestManager {
    std::vector<Quest*> activeQuests;

public:
    QuestManager();
    ~QuestManager();
    void addQuest(Quest* quest);
    void completeQuest(Quest* quest);
};

#endif