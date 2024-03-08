#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int Player::nofPlayers = 0;

Player::Player(string n) : Member(n) {
	setName(n);
	nofPlayers++;
}

void Player::display() {
	cout<<"Player "<< getName() << endl;
}


