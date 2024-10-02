#pragma once
#include <iostream> 
using namespace std;
class clsGames
{
public : 

	enum enGames { eRock_Scissors_Paper = 1 , eXO = 2  , eGuessNumber = 3 , eGuessPlace = 4};
	
	enum enEveryPointsGamePerRound {eRock_Scissors_Paper_Points = 10 , eXO_Points = 20 , eGuessNumber_Points = 30 , eGuessPlace_Point = 40 };

	static short GetWhoWin(short PlayerOneChoice, short PlayerTwoChoice)
	{

	}

};

