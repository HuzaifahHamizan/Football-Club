#include <iostream>
#include <vector>
#include <fstream>
#include "Club.h"
#include "Player.h"
#include "Manager.h"


using namespace std;

int main()
{

	Club c1 ("Chelsea", 12);

    Player p11("Lukaku");
    p11.setPosition("Forward");
    p11.setNetW(145000000);

    Player p12("Hazard");
    p12.setPosition("Forward");
    p12.setNetW(100000000);

//    c1.displayVectorDetails();

    if (p11 == p12) {
        cout << "They're the same" << endl;
    } else {
        cout << "They're not the same" << endl;
    }

//    c1.sortClub();

//    c1.clubDisplay();

    Manager m1("Mourinho");

    c1.addName(p11);
    c1.addName(p12);
//    c1.addItemToSet(p11);
//    c1.addItemToSet(p12);
//    c1.findItem(p11);

    c1.addNameM(m1);
    c1.display();

    c1.wfile();
    c1.rfile();





    if (p11 == p12) {
        cout << "They're the same" << endl;
    } else {
        cout << "They're not the same" << endl;
    }
//    Club c2 ("Manchester", 12);
//    Player p21("Ronaldo");
//    c2.addName(p21);
//    c2.display();



    return 0;

}
