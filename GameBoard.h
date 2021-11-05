#pragma once
#include "Cell.h"
class GameBoard
{
private:
	unsigned int boardsize;
	CellType** cells;
	bool eG=false;
	bool EndGame();
	int x0, y0;
	bool Check;
public:
	GameBoard();
	
	virtual ~GameBoard();
	void Show();
	void SetCell(unsigned int xposold, unsigned int yposold, unsigned int xpos, unsigned int ypos, CellType ct);
	bool CheckMove(unsigned int xposold, unsigned int yposold, unsigned int xpos, unsigned int ypos);
	bool CheckMoveB(unsigned int xposold, unsigned int yposold, unsigned int xpos, unsigned int ypos);
	bool CheckEnd();
	bool isEnd();
};

