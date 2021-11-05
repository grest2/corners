#include "GameBoard.h"
#include <iostream>
using namespace std;


bool GameBoard::EndGame()
{
	int numB = 0, numW = 0;
	if ((cells[ 0][ 0] == Celltype_W) &&
		(cells[ 0][ 1] == Celltype_W) &&
		(cells[0][ 2] == Celltype_W) &&
		(cells[ 1][0] ==Celltype_W) &&
		(cells[ 1][  1] == Celltype_W) &&
		(cells[ 1][ 2] == Celltype_W) &&
		(cells[2][ 0] ==Celltype_W) &&
		(cells[ 2][ 1] == Celltype_W) &&
		(cells[2][2] == Celltype_W))
		numW=1;
	if (((cells[7][7] == CellType_B) &&
		(cells[7][ 6] == CellType_B) &&
		(cells[7][ 5] == CellType_B) &&
		(cells[6][7] == CellType_B) &&
		(cells[6][6] == CellType_B) &&
		(cells[6][5] == CellType_B) &&
		(cells[5][7] == CellType_B) &&
		(cells[5][6] == CellType_B) &&
		(cells[5][5] == CellType_B)))
		numB=1;
	if (numB!=0 || numW!=0)
	{
		eG = true;
		return true;	
	}
	return false;
}

GameBoard::GameBoard()
{
	this->boardsize = 8;
	cells = new CellType * [8];
	for (unsigned int i = 0; i < 8; i++)
		cells[i] = new CellType[8];
	for (unsigned int i = 0; i < 8; i++)
		for (unsigned int j = 0; j < 8; j++)
		{
			cells[i][j] = CellType_Empty;
			cells[0][0] = CellType_B;
			cells[0][1] = CellType_B;
			cells[0][2] = CellType_B;
			cells[1][0] = CellType_B;
			cells[1][1] = CellType_B;
			cells[1][2] = CellType_B;
			cells[2][0] = CellType_B;
			cells[2][1] = CellType_B;
			cells[2][2] = CellType_B;

			cells[7][7] = Celltype_W;
			cells[7][6] = Celltype_W;
			cells[7][5] = Celltype_W;
			cells[6][7] = Celltype_W;
			cells[6][6] = Celltype_W;
			cells[6][5] = Celltype_W;
			cells[5][7] = Celltype_W;
			cells[5][6] = Celltype_W;
			cells[5][5] = Celltype_W;
		}
}




GameBoard::~GameBoard()
{
	for (unsigned int i = 0; i < boardsize; i++)
		delete cells[i];
	delete[]cells;
}

void GameBoard::Show()
{

	
	for (unsigned int i = 0; i < boardsize; i++)
	{
		cout << i << " ";
		for (unsigned int j = 0; j < boardsize; j++)
		{
			switch (cells[i][j])
			{
			case CellType_B:
				cout << "B";
				break;
			case Celltype_W:
				cout << "W";
				break;
			case CellType_Empty:
				cout << " ";
				break;
			}
			cout << " _|";
		}
		cout << endl;
	}
}



void GameBoard::SetCell(unsigned int xposold, unsigned int yposold, unsigned int xpos, unsigned int ypos, CellType ct)
{
	
		cells[yposold][xposold] = CellType_Empty;
		cells[ypos][xpos] = ct;
	
}


bool GameBoard::CheckMove(unsigned int xposold, unsigned int yposold, unsigned int xpos, unsigned int ypos)
{/*
	 x0 = xposold;
	 y0 = yposold;
	if (  (ypos > y0 + 3) || (xpos > x0 + 3)||(cells[xposold][yposold]==CellType_Empty)|| (cells[xposold][yposold] == CellType_B))
		return false;
	return (cells[ypos][xpos] == CellType_Empty);*/
	return true;
}
bool GameBoard::CheckMoveB(unsigned int xposold, unsigned int yposold, unsigned int xpos, unsigned int ypos)
{
	if ((cells[yposold][xposold] == CellType_B))
		if (cells[ypos][xpos] == CellType_Empty)
			return true;
		
	return (cells[yposold][xposold] == CellType_B);
}

bool GameBoard::CheckEnd()
{
	if (EndGame())
		return true;
	return false;
}

bool GameBoard::isEnd()
{
	return eG;
}
