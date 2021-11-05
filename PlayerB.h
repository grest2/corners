#pragma once
#include "abPlayer.h"
class PlayerB :
	public abPlayer
{
public:
	PlayerB();
	virtual ~PlayerB();
	virtual bool MakeMove();
};

