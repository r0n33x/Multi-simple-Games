#pragma once
#include "clsHeaderScreen.h"
#include "Global.h"
#include "clsInputValidate.h"
#include "clsUtil.h"
#include "clsGames.h"
class clsGuessNumberGameScreen: clsHeaderScreen
{

private : 


public :

	static void GuessNumberGameScreen()
	{
		PrintHeader(Player1, Player2);

		cout << "\n\n\n\n\n\n";
		cout << setw(100) << "\tPlease Enter How Many Rounds Do you Want Play >> " << endl;
		short NumberOfRounds = clsInputValidate::ReadShortNumber();

		system("cls");

		short RoundNum = 0;

		while (NumberOfRounds--)
		{
			RoundNum++;

			system("cls");

			cout << "\n\n\n\n\n\n";
			cout << "\tPlyer " << Player1.UserName << " Turn In Round (" << RoundNum << ") " << endl;
			cout << setw(100) << "\n\n\tPlease Enter Number Between (1 - 100) " << endl;
			short Player1Choice = clsInputValidate::ReadShortNumberBetween(1, 100);

			system("cls");

			cout << "\n\n\n\n\n\n";
			cout << "\tPlyer " << Player2.UserName << " Turn In Round (" << RoundNum << ") " << endl;
			cout << setw(100) << "\n\n\tPlease Enter Number Between (1 - 100) " << endl;
			short Player2Choice = clsInputValidate::ReadShortNumberBetween(1, 100);

			system("cls");

			short RandomNumber = clsUtil::RandomNumber(1, 100);

			cout << "\n\n\n\n\n\n";
			cout << setw(80) << "\tPress Any Key to see the Random Number :-) " << endl;
			system("pause>0");

			cout << "\n\n\n\n\n\n";
			cout << setw(80) << "\tThe Random Number is : " << RandomNumber << endl;
			
			system("pause>0");
			system("cls");

			
			if (RandomNumber == Player1Choice)
			{
				cout << "\n\n\n\n\n\n";
				cout << setw(80) << "\tPlyer " << Player1.UserName << " Win The Round (" << RoundNum << ") " << endl;
				Player1.Score += clsGames::enEveryPointsGamePerRound::eGuessNumber_Points;
			}
			else if (RandomNumber == Player2Choice)
			{
				cout << "\n\n\n\n\n\n";
				cout << setw(80) << "\tPlyer " << Player2.UserName << " Win The Round (" << RoundNum << ") " << endl;
				Player2.Score += clsGames::enEveryPointsGamePerRound::eGuessNumber_Points;
			}
			else if ( Player1Choice == Player2Choice && Player1Choice == RandomNumber)
			{
				cout << "\n\n\n\n\n\n";
				cout << setw(80) << "\t  Round (" << RoundNum << ") Result is Draw :-) " << endl;
				Player1.Score += clsGames::enEveryPointsGamePerRound::eGuessNumber_Points;
				Player2.Score += clsGames::enEveryPointsGamePerRound::eGuessNumber_Points;

			}
			else
			{
				cout << "\n\n\n\n\n\n";
				cout << setw(80) << "\t  No One Win Round (" << RoundNum << ") :-( " << endl;
			}

			system("pause>0");
		}

	}



};

