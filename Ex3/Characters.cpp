//
//  Characters.cpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include "Characters.h"


//////////Character////////////

Character::Character()
{
    this->health_ = getHealth();
    this->attack_ = getAttack();
	this->defense_ = getDefense();
    this->strength_ = getStrength();
}

bool Character::isAlive()
{
	if (health_ > 1)
	{
        return true;
	}
return false;
}

void Character::takeDamage()
{
    health_ -= attack_;
}


int Character::getAttack()
{
    return attack_;
}
int Character::getDefense()
{
    return defense_;
}


//////////Monster////////////

Monster::Monster() : Character()
{
    
}
void Monster::fight(Hero* hero)
{
    int damage = attack_ / defense_ * strength_;
    if (damage < 0)
	{    	
        damage = 0;
	}
    if (damage > strength_)
    {
        damage = strength_;
    }
    std::cout << "Monster gives "<<damage<<" to Hero\n";
    ((Character*)hero)->takeDamage();
}

void Monster::death()
{
	if(health_ <0)
	{
        std::cout << "Yet another dead monster!\n";
	}
}

//////////Hero////////////

Hero::Hero(): Character()
{
  
}
void Hero::fight(Monster* monster)
{
int damage = attack_/defense_ *strength_;
    if(damage < 0)
        damage = 0;
    if(damage > strength_);
        damage = strength_;

    std::cout << "Hero gives "<<damage<<" to Monster\n";
    monster->takeDamage();
}
void Hero::death()
{
	if (health_ <0)
	{
        std::cout << "The hero is dead, long live the hero!\n";
    }
}
    
