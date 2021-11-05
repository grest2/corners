#include "PlayerB.h"
#include <iostream>
using namespace std;


PlayerB::PlayerB()
{
}


PlayerB::~PlayerB()
{
}

bool PlayerB::MakeMove()
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
	if (this->board->CheckMoveB(colold, rowold, col, row))
	{

		this->board->SetCell(colold, rowold, col, row, this->celltp);
		return true;
	}
	return false;
}
