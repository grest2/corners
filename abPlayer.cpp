#include "abPlayer.h"



abPlayer::abPlayer()
{
}


abPlayer::~abPlayer()
{
}

void abPlayer::SetupPlayer(string name, CellType celltp)
{
	this->name = name;
	this->celltp = celltp;
}

void abPlayer::SetBoard(GameBoard* board)
{
	this->board = board;
}

string abPlayer::GetName()
{
	return this->name;
}
