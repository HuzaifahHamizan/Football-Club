#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <Member.h>

using namespace std;

class Player : public Member
{
    public:
        Player(string name);
        void display();
        Player (const string*);

    protected:

    private:

        static int nofPlayers;
        string name;
        string position;


};

#endif // PLAYER_H
