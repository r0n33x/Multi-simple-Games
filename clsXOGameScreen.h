#pragma once
#include "clsHeaderScreen.h"
#include "Global.h"
#include "clsInputValidate.h"
#include <string> 
#include "clsGames.h"
class clsXOGameScreen : clsHeaderScreen
{
private :

	struct stXOplaces
	{
		char s_One = '1';
		char s_Two = '2';
		char s_Three = '3';
		char s_Four = '4';
		char s_Five = '5';
		char s_Six = '6';
		char s_Seven = '7';
		char s_Eight = '8';
		char s_Nine = '9';
	};

	static void PrintXoGame(stXOplaces Places)
	{

		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << setw(95) << "------------------------------\n";
		cout << setw(95) << "|        |         |         |\n";
		cout << setw(69) << "|    " << Places.s_One << "   |    " << Places.s_Two << "    |    " << Places.s_Three << "    |\n";
		cout << setw(95) << "|        |         |         |\n";
		cout << setw(95) << "------------------------------\n";
		cout << setw(95) << "|        |         |         |\n";
		cout << setw(69) << "|    " << Places.s_Four << "   |    " << Places.s_Five << "    |    " << Places.s_Six << "    |\n";
		cout << setw(95) << "|        |         |         |\n";
		cout << setw(95) << "------------------------------\n";
		cout << setw(95) << "|        |         |         |\n";
		cout << setw(69) << "|    " << Places.s_Seven << "   |    " << Places.s_Eight << "    |    " << Places.s_Nine << "    |\n";
		cout << setw(95) << "|        |         |         |\n";
		cout << setw(95) << "------------------------------\n";
	}

	static void _ReadCharChoice( char & Player1 , char & Player2)
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n";
		cout << setw(70) << "Player 1 : \n\n";
		cout << setw(70) << "\t\t\t\tPlease Enter you Choice ( X or O ) >> \n";

		char cc;
		cin >> cc;

		while (cc != 'X' && cc != 'O')
		{
			cout << setw (70) <<  "Please Enter Right Choice (Just X or O ) >> \n";
			cin >> cc;
		}

		Player1 = cc;
		if (cc == 'X')
			Player2 = 'O';
		else Player2 = 'X';

		system("cls");
	}

	static char GetTheResult(stXOplaces p)
	{
		if (p.s_One == 'X' && p.s_Five == 'X' && p.s_Nine == 'X' )
		{
			return 'X';
		}
		else if (p.s_One == 'O' && p.s_Five == 'O' && p.s_Nine == 'O')
		{
			return 'O';
		}
		else if (p.s_One == 'X' && p.s_Two == 'X' && p.s_Three == 'X')
		{
			return 'X';
		}
		else if (p.s_One == 'O' && p.s_Two == 'O' && p.s_Three == 'O')
		{
			return 'O';
		}
		else if (p.s_Four == 'X' && p.s_Five == 'X' && p.s_Six == 'X')
		{
			return 'X';
		}
		else if (p.s_Four == 'O' && p.s_Five == 'O' && p.s_Six == 'O')
		{
			return 'O';
		}
		else if (p.s_Seven == 'X' && p.s_Eight == 'X' && p.s_Nine == 'X')
		{
			return 'X';
		}
		else if (p.s_Seven == 'O' && p.s_Eight == 'O' && p.s_Nine == 'O')
		{
			return 'O';
		}
		else if (p.s_Three == 'X' && p.s_Six == 'X' && p.s_Nine == 'X')
		{
			return 'X';
		}
		else if (p.s_Three == 'O' && p.s_Six == 'O' && p.s_Nine == 'O')
		{
			return 'O';
		}
		else if (p.s_Two == 'X' && p.s_Five == 'X' && p.s_Eight == 'X')
		{
			return 'X';
		}
		else if (p.s_Two == 'O' && p.s_Five == 'O' && p.s_Eight == 'O')
		{
			return 'O';
		}
		else if (p.s_One == 'X' && p.s_Four == 'X' && p.s_Seven == 'X')
		{
			return 'X';
		}
		else if (p.s_One == 'O' && p.s_Four == 'O' && p.s_Seven == 'O')
		{
			return 'O';
		}
		else if (p.s_Three == 'X' && p.s_Five == 'X' && p.s_Seven == 'X')
		{
			return 'X';
		}
		else if (p.s_Three == 'O' && p.s_Five == 'O' && p.s_Seven == 'O')
		{
			return 'O';
		}
		else 
		{
			if (p.s_One != '1' && p.s_Two != '2' && p.s_Three != '3' && p.s_Four != '4' && p.s_Five != '5' && p.s_Six != '6' && p.s_Seven != '7' && p.s_Eight != '8' && p.s_Nine != '9')
			{
				return 'D';
			}
		}
		return ' ';
	}

	static void _ReplaceCharFromBoard( stXOplaces & pp , char C, char Num)
	{
		if (Num == '1') pp.s_One = C;
		else if (Num == '2') pp.s_Two = C;
		else if (Num == '3') pp.s_Three = C;
		else if (Num == '4') pp.s_Four = C;
		else if (Num == '5') pp.s_Five = C;
		else if (Num == '6') pp.s_Six = C;
		else if (Num == '7') pp.s_Seven = C;
		else if (Num == '8') pp.s_Eight = C;
		else if (Num == '9') pp.s_Nine = C;
 	}

	static bool _CheckIfValidPlace( stXOplaces p , char c)
	{
		if (c == '1' && p.s_One == '1')
			return 1;
		else if (c == '2' && p.s_Two == '2')
			return 1;
		else if (c == '3' && p.s_Three == '3')
			return 1;
		else if (c == '4' && p.s_Four == '4')
			return 1;
		else if (c == '5' && p.s_Five == '5')
			return 1;
		else if (c == '6' && p.s_Six == '6')
			return 1;
		else if (c == '7' && p.s_Seven == '7')
			return 1;
		else if (c == '8' && p.s_Eight == '8')
			return 1;
		else if (c == '9' && p.s_Nine == '9')
			return 1;
		else return 0;
		
	}

	static char _ConvertIntToChar1TO9(short Num)
	{
		switch (Num)
		{
		case 1 : 
			return '1';
			break;
		case 2 : 
			return '2';
			break;
		case 3 :
			return '3';
			break;
		case 4 : 
			return '4';
			break;
		case 5 : 
			return '5';
			break;
		case 6 :
			return '6';
			break;
		case 7 :
			return '7';
			break;
		case 8 : 
			return '8';
			break;
		case 9 :
			return '9';
			break;
		}
	}

public : 

	static void XOGameScreen()
	{
		PrintHeader(Player1, Player2);

		cout << "\n\n\n\n\n\n";
		cout << setw(100) << "\tPlease Enter How Many Rounds Do you Want Play >> " << endl;
		short NumberOfRounds = clsInputValidate::ReadShortNumber();

		system("cls");

		PrintHeader(Player1, Player2);

		short RoundNum = 0;

		while (NumberOfRounds--)
		{
			stXOplaces Places;

			RoundNum++;

			char Player1Char, Player2Char;

			_ReadCharChoice(Player1Char, Player2Char);

			char Result;

			do
			{
				system("cls");

				PrintHeader(Player1 , Player2);

				cout << "\n\n\n\n";
				cout << setw(20) << "\tPlayer " << Player1.UserName << " Turn Of Round (" << RoundNum << ") " << endl;

				PrintXoGame(Places);

				short Choice = clsInputValidate::ReadShortNumberBetween(1, 9);

				char Num = _ConvertIntToChar1TO9(Choice);

				while (_CheckIfValidPlace(Places, Num) == false)
				{
					Choice = clsInputValidate::ReadShortNumberBetween(1, 9);
					Num = _ConvertIntToChar1TO9(Choice);
				}

				system("cls");

				_ReplaceCharFromBoard(Places, Player1Char, Num);

				Result = GetTheResult(Places);

				if (Result != ' ') continue;

				PrintHeader(Player1, Player2);

				

				cout << "\n\n\n\n";
				cout << setw(20) << "\tPlayer " << Player2.UserName << " Turn Of Round (" << RoundNum << ") " << endl;

				PrintXoGame(Places);

				Choice = clsInputValidate::ReadShortNumberBetween(1, 9);

				Num = _ConvertIntToChar1TO9(Choice);

				while (_CheckIfValidPlace(Places, Num) == false)
				{
					Choice = clsInputValidate::ReadShortNumberBetween(1, 9);
					Num = _ConvertIntToChar1TO9(Choice);
				}

				system("cls");

				_ReplaceCharFromBoard(Places, Player2Char, Num);

				Result = GetTheResult(Places);

				if (Result != ' ') continue;

				PrintHeader(Player1, Player2);


			} while (Result == ' ');

			if (Result == Player1Char)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				Player1.Score += clsGames::enEveryPointsGamePerRound::eXO_Points;
				cout << setw(70) << "\tPlayer " << Player1.UserName << " Win the Round :-)" << endl;
			}
			else if (Result == Player2Char)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				Player2.Score += clsGames::enEveryPointsGamePerRound::eXO_Points;
				cout << setw(70) << "\tPlayer " << Player2.UserName << " Win the Round :-)" << endl;
			}
			else
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				cout << setw(70) << "\tThe Result is Draw in this Round :-| " << endl;
			}

			system("pause>0");
		}
	}
};

