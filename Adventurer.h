
#ifndef ADVENTURER_H
#define ADVENTURER_H

#include <string>
using namespace std;

class Adventurer {
private:
    string name;
    string role;
    int level;
    int hp;

public:
    // Constructors
    Adventurer();                                   // Default
    Adventurer(string initName, string initRole, int initHP); // Parameterized

    // Accessors (getters)
    string GetName() const;
    string GetRole() const;
    int GetLevel() const;
    int GetHP() const;

    // Mutators (setters)
    void SetName(const string& newName);
    void SetRole(const string& newRole);
    void SetHP(int newHP);

    // Methods
    void LevelUp();                   // Increase level and HP
    void TakeDamage(int amount);      // Overload #1: flat damage
    void TakeDamage(double percent);  // Overload #2: % damage
    bool IsAlive() const;
    void PrintStats() const;
};

#endif
