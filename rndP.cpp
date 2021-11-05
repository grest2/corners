#include "rndP.h"



rndP::rndP()
{
}


rndP::~rndP()
{
}

bool rndP::MakeMove()
{
	
	unsigned int rowold, colold, row, col;
	rowold = (unsigned int)(rand() % 3);
	colold = (unsigned int)(rand() % 3);
	row = rowold;
	col = colold + 1;
	if ((col + 1 || row + 1) ==this->celltp)
		if (colold >= 7)
		{
			col = colold;
			row = rowold + 1;
		}
	
		if(this->board->CheckMoveB(colold, rowold, col, row))
		{
			this->board->SetCell(colold, rowold, col, row, this->celltp);
			return true;
		}
	return false;
}


