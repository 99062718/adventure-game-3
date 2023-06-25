#include <string>
#include <array>
#include "item.hpp"

class Entity{
    std::string name;
    int health, maxHealth, mana, maxMana, attack, defense, speed, level, exp;
    item* equipped[5];
    float attackMulti = 1;

public:
    Entity(int health, int maxHealth, int mana, int maxMana, int attack, int defense, int speed, int level, int exp, item* equipped[5]);

    int getHealth();
    int getAttack();
    float getAttackMulti();
    int getDefense();
    int getSpeed();
    int getLevel();
    int getExp();
    item* getItem(int bodyPart);

    void setHealth(int health);
    void setAttack(int attack);
    void setAttackMulti(float attackMulti);
    void setDefense(int defense);
    void setSpeed(int speed);
    void addExp(int exp);
    void setItem(item* newItem, int bodyPart);

};