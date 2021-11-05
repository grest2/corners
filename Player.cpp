#include "Player.h"
#include <iostream>
using namespace std;

Player::Player()
{
	
}


Player::~Player()
{
}

void Player::SetupPlayer(string name, CellType celltp)
{
	this->name = name;
	this->celltp = celltp;
}

void Player::SetBoard(GameBoard* board)
{
	this->board = board;
}

string Player::GetName()
{
	return this->name;
}


bool Player::MakeMove()
{
	unsigned int row, col, rowold, colold;
	cout << "Player " << name << "Your Step...  " << endl;
	cout << "Enter y old : ";
	cin >> rowold;
	cout << "Enter x old : ";
	cin >> colold;
	cout << "Enter y  : ";
	cin >> row;
	cout << "Enter x  : ";
	cin >> col;
	if (this->board->CheckMove(colold, rowold, col, row))
	{

		this->board->SetCell(colold, rowold, col, row, this->celltp);
		return true;
	}
	return false;
}


