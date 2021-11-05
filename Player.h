#pragma once
#include"GameBoard.h"
#include <string>
#include "abPlayer.h"
using namespace std;

class Player:public abPlayer
{
private:
	GameBoard* board;
	CellType celltp;
	string name;
public:
	Player();
	virtual~Player();
	 void  SetupPlayer(string name, CellType celltp);
	void SetBoard(GameBoard* board);
	virtual bool MakeMove();
 string GetName();
	
};

