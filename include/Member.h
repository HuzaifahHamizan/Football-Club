#ifndef MEMBER_H
#define MEMBER_H
#include <string>

using namespace std;

class Member
{
    public:
        Member(string name);
        void setName(string);
        string getName() const;

        void setPosition(string);
        string getPosition() const;

        void setNetW(int);
        int getNetW() const;

        virtual void display() const ; //use of virtual void for abstract function

    protected:

    private:
        string name;
        string position;
        int netWorth;


};

bool operator==(Member, Member);
bool operator!= (Member, Member);
bool operator<(Member, Member);
bool operator>(Member, Member);

ostream& operator<< (ostream &cout, Member m);
#endif // MEMBER_H
