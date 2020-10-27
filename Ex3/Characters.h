//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#pragma once

#include <iostream>

class Hero;

class Character
{
public:
    Character();
    void takeDamage();
    bool isAlive();
    virtual void death() = 0;
    int getAttack;
    int getStrength;
	int getHealth();
    int getDefense();
protected:
    int health_;
    int attack_;
    int defense_;
    int strength_;
};

class Monster : Character
{
    
public:
    Monster();
    void takeDamage();
    void fight(Hero*);
    void death();
};

class Hero : Character
{
public:
    Hero();
    void takeDamage();
    void fight(Monster*);
    void death();
};