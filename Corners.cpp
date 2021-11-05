#include "Manager.h"
#include<conio.h>
#include <iostream>
using namespace std;
int main()
{
	Manager manager;
	if (!manager.Init())
	{
		cout << "Error";
		_getch();
		return 0;
	}
	while (true)
	{
		manager.MakeMove();
	}
	
}
