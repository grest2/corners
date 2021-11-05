#pragma once
#include "GameBoard.h"
#include "abPlayer.h"
#include "Player.h"
#include "rndP.h"
#include "PlayerB.h"
class Manager
{
private :
	GameBoard* board;
	abPlayer* player1;
	abPlayer* player2;
	abPlayer* curPlayer;
	bool Gameend = false;

public:
	Manager();
	virtual ~Manager();
	bool Init();
	void ShowBoard();
	void MakeMove();
	bool GameEnd();
};
	

