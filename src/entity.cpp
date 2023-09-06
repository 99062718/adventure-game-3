#include <memory.h>
#include <cmath>
#include <iostream>
#include "globals.hpp"
#include "entity.hpp"

Entity::Entity(std::string &name, int health, int maxHealth, int mana, int maxMana, int attack, int defense, int speed, int level, int exp, std::array<Item*, 5>* equipped, int position):
    name(name), health(health), maxHealth(maxHealth), mana(mana), maxMana(maxMana), attack(attack), defense(defense), speed(speed), level(level), exp(exp), position(position)
{
    this->equipped = *equipped;
}

int Entity::getHealth()
{
    return health;
}

int Entity::getAttack()
{
    return attack;
}

float Entity::getAttackMulti()
{
    return attackMulti;
}

int Entity::getDefense()
{
    return defense;
}

int Entity::getSpeed()
{
    return speed;
}

int Entity::getLevel()
{
    return level;
}

int Entity::getExp()
{
    return exp;
}

Item* Entity::getItem(int bodyPart)
{
    return equipped[bodyPart];
}

void Entity::setHealth(int health)
{

    this->health = health;
}

void Entity::setAttack(int attack)
{
    this->attack = attack;
}

void Entity::setAttackMulti(float attackMulti)
{
    this->attackMulti = attackMulti;
}

void Entity::setDefense(int defense)
{
    this->defense = defense;
}

void Entity::setSpeed(int speed)
{
    this->speed = speed;
}

void Entity::addExp(int exp)
{
    this->exp += exp;
    if(this->exp >= (int)pow(50, level * 0.7)) {
        level++;
        this->exp -= (int)pow(50, level * 0.7);
        // stat upgrades should be here
    }
}

void Entity::setItem(Item* newItem, int bodyPart)
{
    if (equipped[bodyPart] == newItem) {
        std::string text = newItem->name;
        text.append(" is already equipped");
        globals.display->showText(text.c_str());
        return;
    }

    if (equipped[bodyPart] != nullptr) {
        attack -= equipped[bodyPart]->attack;
        health -= equipped[bodyPart]->health;
        maxHealth -= equipped[bodyPart]->health;
        defense -= equipped[bodyPart]->defense;
        speed -= equipped[bodyPart]->speed;
        mana -= equipped[bodyPart]->mana;
        maxMana -= equipped[bodyPart]->mana;
    }

    equipped[bodyPart] = newItem;

    attack += equipped[bodyPart]->attack;
    maxHealth += equipped[bodyPart]->health;
    defense += equipped[bodyPart]->defense;
    speed += equipped[bodyPart]->speed;
    maxMana += equipped[bodyPart]->mana;
}