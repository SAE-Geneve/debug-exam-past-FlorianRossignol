//
//  SUPER HERO VERSUS HORDE OF MONSTERS
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#include <iostream>
#include <list>
#include <vector>
#include "Characters.h"

int main(
)
{
    Monster monster1 = Monster(10, 4, 1, 4);
    Monster monster2 = Monster(20, 5, 5, 5);
    Monster monster3 = Monster(30, 6, 10, 6);
    Hero hero = Hero (100,10,5,2);
    std::list<Monster> monsters;
    auto it = monsters.begin();
    monsters.insert(monster1);
    monsters.insert(monster2);
    monsters.insert(monster3);
    for(std::vector<Hero>::iterator monsterIt = monsters.begin();
monsterIt != monsters.end(); monsterIt++)
    {
        while (hero.isAlive() || Monster.isAlive());
        {
            hero.fight(monsterIt);
            monsterIt->fight(hero);
        }
        //If the monster is dead, meaning not alive, he dies!
        if(!Monster.isAlive())
        {
            Monster.death();
        }
        //Windows specific
        if(!hero.isAlive())
{
            hero.death();
            break;
        }
    }
    
    system("pasue");
    return 0;
}
