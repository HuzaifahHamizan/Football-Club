#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include <Member.h>

using namespace std;

class Manager : public Member
{
    public:
        Manager(string name);
        void display();
    protected:

    private:
        static int nofManager;
        string name;
};

#endif // MANAGER_H
