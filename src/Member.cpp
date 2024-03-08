#include "Member.h"
#include <iostream>
#include <string>

using namespace std;

Member::Member(string n) {
	setName(n);
}

string Member::getName() const {
	return name;
}

void Member::setName(string n) {
	name = n;
}

string Member::getPosition() const {
	return position;
}

void Member::setPosition(string d) {
	position = d;
}

int Member::getNetW() const {
	return netWorth;
}

void Member::setNetW(int d) {
	netWorth = d;
}

void Member::display() const {
	cout<<"Member : "<<getName()<<endl;
}


bool operator==(Member c1,Member c2)
{
   return (c2.getName()== c1.getName() && c1.getPosition()== c2.getPosition());
}

bool operator!=(const Member c1, const Member c2)
{
    return !(c1==c2);
}

bool operator<(Member pl1, Member pl2) {
    return (pl1.getName()<pl2.getName());
	//return (pl1.getDuration()<pl2.getDuration());
}

bool operator>(Member pl1, Member pl2) {
    return (pl1.getName()>pl2.getName());
}



//ostream& operator<< (ostream &cout, Member m) {
//	cout<<"Member " << m.getName() << "and it's position is " << m.getPosition <<endl;
//    return cout;
//}




