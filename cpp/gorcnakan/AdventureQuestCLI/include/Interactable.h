#ifndef INTERACTABLE_H
#define INTERACTABLE_H

class Character;

class Interactable {
public:
    virtual ~Interactable() = default;
    virtual void interact(Character* target) = 0;
};

#endif