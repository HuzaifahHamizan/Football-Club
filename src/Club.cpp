#include "Club.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <fstream>

using namespace std;

Club::Club(string n, int nofNames) : maxNofNames(nofNames) { //lab4 - part4: initialising the constant variable in the constructor initialisation list
	                                                                 //once this variable is assigned an initial value for a Playlist object that value CANNOT be changed
	setClubName(n);
}

string Club::getClubName() {
	return ClubName;
}

void Club::setClubName(string n) {
	ClubName = n;
}


void Club::addName(Member x) {
	if (members.size() <= maxNofNames) { //check if Club is at full capacity
		members.push_back(x);
    } else {
    	cout<<"Club is full"<<endl;
    }
}

void Club::addNameM(Member x) {
	if (members.size() <= maxNofNames) { //check if Club is at full capacity
		members.push_back(x);

    } else {
    	cout<<"Club is full"<<endl;
    }
}

void Club::display() {
	cout<<"This is the " << getClubName() << " club!" << endl;
	cout<<"The max number of members allowed in this club is : "<<maxNofNames<<endl; //Update the display to show the value of this constant
	cout<<"There are " << members.size() << " members in this club" << endl;
	for (int i=0; i<members.size(); i++) {
		members[i].display();
	}
  	cout << '\n';
}

//void Club::clubDisplay() {
//    for (int i=0; i<members.size(); i++) {
//		cout<<members[i]);
//	}
//}

bool orderByNet(Member p11, Member p12){      //Criteria created for sorting
    return (p11.getNetW() > p12.getNetW());
}

bool orderByName(Member a, Member b) {      //Criteria created for sorting
    return (a.getName() < b.getName());
}

//void Club::sortClub(){
//    sort(members.begin(), members.end(), orderByName);
//    for (string &s : members)
//        cout << s << " ";
//}
//

//void Club::addItemToSet(Member s){
//    if (itemsSet.size() <= maxNofNames) {
//		itemsSet.insert(s);
//    } else {
//    	cout<<"Club is full"<<endl;
//    }
//}
//
//void Club::findItem (Member s) {
//    auto it = find(itemsSet.begin(), itemsSet.end(), s);
//	if (it != itemsSet.end()) {
//		cout<<"Member details found are :"<<endl;
//		cout<<*it;
//		it->display(); /
//	} else {
//		cout<<s.getName()<<" player not found inside the club"<<endl;
//	}
//
//}


Sponsor Club::getSponsor() {
	return sponsor;
}

void Club::setSponsor(Sponsor Spo) {
	sponsor = Spo;
}

void Club::wfile(){
    ofstream myfile;

    myfile.open("Display.txt");
//    myfile << c1.display();
    myfile << "This is the " << getClubName() << " club!" << endl;
	myfile <<"The max number of members allowed in this club is : "<<maxNofNames<<endl; //Update the display to show the value of this constant
	myfile <<"There are " << members.size() << " members in this club" << endl;
	myfile << "Member : Lukaku" << endl;
	myfile << "Member : Hazard" << endl;
	myfile << "Member : Mourinho" << endl;
//    for (int i=0; i<members.size(); i++) {
//		myfile << members[i].display() << endl;
//	}
  	myfile << '\n';
    myfile.close();
	}

void Club::rfile(){
    string line;
    ifstream myfile ("Display.txt");
    if (myfile.is_open()){
        while ( getline (myfile,line) ){
            cout << line << '\n';
        }
    myfile.close();
    }

    else cout << "Unable to open file";

}


//ofstream& operator<< (ofstream &myfile, Club& c){
//    for (int i=0; i<c.members.size(); i++) {
//		myfile << c.members[i].display;
//	}
//
//    return myfile;
//}




