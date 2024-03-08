#include "Sponsor.h"
#include <iostream>

using namespace std;

Sponsor::Sponsor()
{
    setName("");
}

Sponsor::Sponsor(string n) : name(n), amount(5) { //lab3 - part2: using constructor initializer list
	//cout<<"calling user defined overloaded Artist constructor"<<endl;
}

string Sponsor::getName() {
	return name;
}

void Sponsor::setName(const string& name) {
	this->name = name;
}

int Sponsor::getAmSponsored() {
	return amount;
}

void Sponsor::setAmSponsored(int amount) {
	this->amount = amount;
}


void Sponsor::display() {
	cout<<"calling display function defined in Artist class"<<endl;
	cout<<"Sponsor "<<getName() <<" sponsored an amount of "<< getAmSponsored() <<" singles "<<endl;
}
