#pragma once 
#include <iostream> 
#include "clsHeaderScreen.h"
#include "clsInputValidate.h"
#include "Global.h"
#include "clsGames.h"
class clsRockScissorsPaperGameScreen :clsHeaderScreen
{
private : 

	enum enChoice { eRock = 2, eScissors = 1, ePaper = 3 };

	static enChoice _ReadChioceFromPlayer()
	{
		//PrintHeader(Player1, Player2);
		cout << "\n\n\n\n\n\n";
		cout << setw(90) << "----------------------" << endl;
		cout << setw(90) << "| 1 - Scissors       |" << endl;
		cout << setw(90) << "----------------------" << endl;
		cout << setw(90) << "| 2 - Rock           |" << endl;
		cout << setw(90) << "----------------------" << endl;
		cout << setw(90) << "| 3 - Paper          |" << endl;
		cout << setw(90) << "----------------------" << endl;
		cout << "\n";
		cout << setw(90) << "\t\tPlease Enter Your Choice >> ( 1 - 3 ) ";
		short Choice = clsInputValidate::ReadShortNumberBetween(1, 3);
		return (enChoice)Choice;
	}

	static string _GetNameChoice(enChoice Choice)
	{
		switch (Choice)
		{
		case enChoice::ePaper:
			return "Paper";
			break;
		case enChoice ::eRock :
			return "Rock";
			break;
		case enChoice::eScissors:
			return "Scissors";
			break;
		}
	}

public : 

	static void RockScissorsPaperScreen()
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

			cout << "\n\n\n\n\n\n";

			cout << setw(90) << "\nPlayer " << Player1.UserName << " Turn of Round (" << RoundNum << ")" << endl;
			enChoice ChoicePlayer1 = _ReadChioceFromPlayer();

			system("cls");

			cout << "\n\n\n\n\n\n";


			cout << setw(90) << "\nPlayer " << Player2.UserName << " Turn Of Round (" << RoundNum << ")" << endl;
			enChoice ChoicePlayer2 = _ReadChioceFromPlayer();

			system("cls");

			PrintHeader(Player1, Player2);


			if (ChoicePlayer1 == enChoice::eScissors && ChoicePlayer2 == enChoice::ePaper)
			{
				Player1.Score += clsGames::enEveryPointsGamePerRound::eRock_Scissors_Paper_Points;
				cout << "\n\n\n\n\n\n";
				cout << setw(60) << Player1.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer1) << " & " << Player2.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer2) << endl;
			}
			else if (ChoicePlayer1 == enChoice::ePaper && ChoicePlayer2 == enChoice::eRock)
			{
				Player1.Score += clsGames::enEveryPointsGamePerRound::eRock_Scissors_Paper_Points;
				cout << "\n\n\n\n\n\n";
				cout << setw(60) << Player1.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer1) << " & " << Player2.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer2) << endl;
			}
			else if (ChoicePlayer1 == enChoice::eScissors && ChoicePlayer2 == enChoice::eRock)
			{
				Player1.Score += clsGames::enEveryPointsGamePerRound::eRock_Scissors_Paper_Points;
				cout << "\n\n\n\n\n\n";
				cout << setw(60) << Player1.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer1) << " & " << Player2.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer2) << endl;
			}
			else if (ChoicePlayer1 == ChoicePlayer2)
			{
				Player1.Score += clsGames::enEveryPointsGamePerRound::eRock_Scissors_Paper_Points;
				Player2.Score += clsGames::enEveryPointsGamePerRound::eRock_Scissors_Paper_Points;
				cout << "\n\n\n\n\n\n";
				cout << setw(60) << Player1.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer1) << " & " << Player2.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer2) << endl;
			}
			else
			{
				Player2.Score += clsGames::enEveryPointsGamePerRound::eRock_Scissors_Paper_Points;
				cout << "\n\n\n\n\n\n";
				cout << setw(60) << Player1.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer1) << " & " << Player2.UserName << " Choice is : " << _GetNameChoice(ChoicePlayer2) << endl;
			}

			system("pause>0");
		}

	}
};