#ifndef CLUB_H
#define CLUB_H
#include <string>
#include <vector>
#include <set>

#include "Player.h"
#include "Sponsor.h"
using namespace std;

class Club
{
    public:
        Club(string, int);
		string getClubName();
		void setClubName(string n);
        void addName(Member x);
        void addNameM(Member x); //function that allow members of the club to be added to member vector
        void display();
        void wfile();
        void rfile();

//      void clubDisplay();

//		void sortClub();
		void addItemToSet(Member s);
        void findItem(Member s);

        Sponsor getSponsor();
        void setSponsor(Sponsor Spo);

//        friend ofstream& operator<< (ofstream myfile, Club& c);

    protected:

    private:
        string ClubName;
        vector<Member> members; //creating a vector of club members
        set<Member> itemsSet;
        const int maxNofNames;

        Sponsor sponsor;

};

//ofstream& operator<< (ofstream& myfile, Club& c);

#endif // CLUB_H
