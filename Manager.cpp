#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager()
{
}


Manager::~Manager()
{
	delete this->player1;
	delete this->player2;
	delete this->board;
}

bool Manager::Init()
{
	int playerType;
	string PlayerName;
	cout << "Choose type Player 2 (1-human,2-Computer): " << endl;
	this->player1 = new Player();
	cin >> playerType;
	if (playerType == 1)
		this->player2 = new PlayerB();
	else
		this->player2 = new rndP();
	this->board = new GameBoard();
	cin.ignore();
	cout << "Name Player 1: ";
	getline(cin, PlayerName);
	player1->SetupPlayer(PlayerName, Celltype_W);
	cout << "Name Player 2: ";
	getline(cin, PlayerName);
	player2->SetupPlayer(PlayerName, CellType_B);
	player1->SetBoard(this->board);
	player2->SetBoard(this->board);
	curPlayer = player1;
	return true;
}

void Manager::ShowBoard()
{
	this->board->Show();
}

void Manager::MakeMove()
{
	ShowBoard();
	while (!curPlayer->MakeMove())
	{
		cout << "Error,try again " << endl;
		ShowBoard();
	}
	if (this->board->CheckEnd())
	{	
		if (this->board->isEnd())
			cout << "Player" << curPlayer->GetName() << "winner!" << endl;
		this->Gameend = true;
		ShowBoard();
		return;
	}
	
	curPlayer = (curPlayer == player1) ? player2 : player1;
}

bool Manager::GameEnd()
{
	return Gameend;
}
