#include <memory.h>
#include <cmath>
#include "entity.hpp"

Entity::Entity(int health, int maxHealth, int mana, int maxMana, int attack, int defense, int speed, int level, int exp, item* equipped[5]):
        health(health), maxHealth(maxHealth), mana(mana), maxMana(maxMana), attack(attack), defense(defense), speed(speed), level(level), exp(exp)
        {
            memcpy(this->equipped, equipped, 5);
        }

int Entity::getHealth(){
    return health;
}

int Entity::getAttack(){
    return attack;
}

float Entity::getAttackMulti(){
    return attackMulti;
}

int Entity::getDefense(){
    return defense;
}

int Entity::getSpeed(){
    return speed;
}

int Entity::getLevel(){
    return level;
}

int Entity::getExp(){
    return exp;
}

item* Entity::getItem(int bodyPart){
    return equipped[bodyPart];
}

void Entity::setHealth(int health){
    
    this->health = health;
}

void Entity::setAttack(int attack){
    this->attack = attack;
}

void Entity::setAttackMulti(float attackMulti){
    this->attackMulti = attackMulti;
}

void Entity::setDefense(int defense){
    this->defense = defense;
}

void Entity::setSpeed(int speed){
    this->speed = speed;
}
void Entity::addExp(int exp){
    this->exp += exp;
    if(this->exp >= (int)pow(50, level * 0.7)){
        level++;
        this->exp -= (int)pow(50, level * 0.7);
        // stat upgrades should be here
    }
}
void Entity::setItem(item* newItem, int bodyPart){
    equipped[bodyPart] = newItem;
}