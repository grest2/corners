#pragma once
#include "GameBoard.h"
#include <string>
using namespace std;

class abPlayer
{
protected:
	GameBoard* board;
	CellType celltp;
	string name;
public:
	abPlayer();
	virtual ~abPlayer();
	virtual void  SetupPlayer(string name, CellType celltp);
	virtual void SetBoard(GameBoard* board);
	virtual bool MakeMove()=0;
	virtual string GetName();
};

