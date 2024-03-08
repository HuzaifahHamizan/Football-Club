#ifndef SPONSOR_H
#define SPONSOR_H
#include <string>

using namespace std;

class Sponsor
{
    public:
        Sponsor();
        Sponsor(string name);

        void setName(const string& name);
        string getName();
        void setAmSponsored(int ammount);
        int getAmSponsored();
        virtual void display();

    protected:

    private:
        string name;
        int amount;
};

#endif // SPONSOR_H
