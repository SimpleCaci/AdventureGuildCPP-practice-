
#include "Guild.h"
#include <iostream>
using namespace std;

Guild::Guild() { }

void Guild::AddMember(const Adventurer& newMember) {
    members.push_back(newMember);
}

void Guild::AddMember(string name, string role, int hp) {
    Adventurer temp(name, role, hp);
    members.push_back(temp);
}

void Guild::BattleTest(int damage) {
    cout << "\n🛡️ The guild faces a mighty foe! 🛡️" << endl;
    for (auto& m : members) {
        m.TakeDamage(damage);
        m.PrintStats();
    }
}

void Guild::PrintGuild() const {
    cout << "\n=== Adventurer Roster ===" << endl;
    for (const auto& m : members) {
        m.PrintStats();
    }
}

double Guild::AverageLevel() const {
    if (members.empty()) return 0.0;
    double sum = 0.0;
    for (const auto& m : members) {
        sum += m.GetLevel();
    }
    return sum / members.size();
}
