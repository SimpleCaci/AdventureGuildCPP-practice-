
#ifndef GUILD_H
#define GUILD_H

#include <vector>
#include "Adventurer.h"
using namespace std;

class Guild {
private:
    vector<Adventurer> members;

public:
    Guild();

    // Add members
    void AddMember(const Adventurer& newMember);
    void AddMember(string name, string role, int hp); // Overloaded

    // Interactions
    void BattleTest(int damage);  // all members take damage
    void PrintGuild() const;
    double AverageLevel() const;
};

#endif
