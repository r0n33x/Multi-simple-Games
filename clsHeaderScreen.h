#pragma once
#include <iostream> 
#include <iomanip>
#include "clsPlayer.h"
using namespace std;
class clsHeaderScreen
{
protected : 

	static void PrintHeader(clsPlayer Player_1, clsPlayer Player_2)
	{
		cout << setw(20) << "\t\t---------------------------------------------------------------------------------------------------------------------------------\n\n";

		cout << setw(40) << " Player 1 : " << Player_1.UserName << " & Score : " << Player_1.Score << " \t\t\t|\t\t\tPlayer 2 : " << Player_2.UserName << " & Score : " << Player_2.Score << "\n\n";

		cout << setw(20) << "\t\t---------------------------------------------------------------------------------------------------------------------------------\n\n";

	}

};

