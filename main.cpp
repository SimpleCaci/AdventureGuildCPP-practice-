
#include "Guild.h"
#include <iostream>
using namespace std;

int main() {
    Guild silverBlades;

    // Add adventurers
    Adventurer a("Lyra", "Wizard", 90);
    Adventurer b("Thorn", "Rogue", 110);

    silverBlades.AddMember(a);
    silverBlades.AddMember(b);
    silverBlades.AddMember("Kael", "Knight", 130);

    silverBlades.PrintGuild();

    cout << "\nAverage Level: " << silverBlades.AverageLevel() << endl;

    // Simulate a battle
    silverBlades.BattleTest(45);

    cout << "\nAfter battle results:" << endl;
    silverBlades.PrintGuild();

    return 0;
}
