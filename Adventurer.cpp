
#include "Adventurer.h"
#include <iostream>
using namespace std;

// Default constructor
Adventurer::Adventurer() {
    name = "Unknown";
    role = "Novice";
    level = 1;
    hp = 100;
}

// Parameterized constructor
Adventurer::Adventurer(string initName, string initRole, int initHP) {
    name = initName;
    role = initRole;
    level = 1;
    hp = initHP;
}

// Accessors
string Adventurer::GetName() const { return name; }
string Adventurer::GetRole() const { return role; }
int Adventurer::GetLevel() const { return level; }
int Adventurer::GetHP() const { return hp; }

// Mutators
void Adventurer::SetName(const string& newName) { name = newName; }
void Adventurer::SetRole(const string& newRole) { role = newRole; }
void Adventurer::SetHP(int newHP) { hp = newHP; }

// Methods
void Adventurer::LevelUp() {
    level++;
    hp += 10;
}

void Adventurer::TakeDamage(int amount) {
    hp -= amount;
    if (hp < 0) hp = 0;
}

void Adventurer::TakeDamage(double percent) {
    int dmg = static_cast<int>(hp * percent);
    hp -= dmg;
    if (hp < 0) hp = 0;
}

bool Adventurer::IsAlive() const {
    return hp > 0;
}

void Adventurer::PrintStats() const {
    cout << name << " the " << role
         << " | Level " << level
         << " | HP: " << hp
         << (IsAlive() ? " [ALIVE]" : " [DEFEATED]") << endl;
}
