#include "Manager.h"
#include <iostream>
#include <string>

using namespace std;

int Manager::nofManager = 0;

Manager::Manager(string n) : Member(n){
	nofManager++;
}

void Manager::display() {
	cout<<"The name of the manager is : "<<nofManager<<endl;

}
