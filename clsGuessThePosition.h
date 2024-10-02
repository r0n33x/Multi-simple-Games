#pragma once
#include <iostream>
#include "clsHeaderScreen.h"
#include "clsUtil.h"
#include "Global.h"
#include "clsInputValidate.h"
#include "clsGames.h"
class clsGuessThePosition : clsHeaderScreen
{
private : 


	static void PrintGameBoard(vector < vector < string > > arr)
	{
		cout << "\n\n\n\n\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[0][0]  << "   |    " <<  arr[0][1] << "    |    " << arr[0][2] << "    |    " << arr[0][3] << "   |    " << arr[0][4] << "    |    " << arr[0][5] << "    |    " << arr[0][6] << "   |    " << arr[0][7] << "    |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[1][0] <<  "   |   " << arr[1][1] << "    |    " << arr[1][2] << "   |   " << arr[1][3] << "   |    " << arr[1][4] << "   |    " << arr[1][5] << "   |   " << arr[1][6] << "   |    " << arr[1][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[2][0] << "  |    " << arr[2][1] << "   |    " << arr[2][2] << "   |   " << arr[2][3] << "   |    " << arr[2][4] << "   |    " << arr[2][5] << "   |   " << arr[2][6] << "   |    " << arr[2][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[3][0] << "  |    " << arr[3][1] << "   |    " << arr[3][2] << "   |   " << arr[3][3] << "   |    " << arr[3][4] << "   |    " << arr[3][5] << "   |   " << arr[3][6] << "   |    " << arr[3][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[4][0] << "  |    " << arr[4][1] << "   |    " << arr[4][2] << "   |   " << arr[4][3] << "   |    " << arr[4][4] << "   |    " << arr[4][5] << "   |   " << arr[4][6] << "   |    " << arr[4][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[5][0] << "  |    " << arr[5][1] << "   |    " << arr[5][2] << "   |   " << arr[5][3] << "   |    " << arr[5][4] << "   |    " << arr[5][5] << "   |   " << arr[5][6] << "   |    " << arr[5][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[6][0] << "  |    " << arr[6][1] << "   |    " << arr[6][2] << "   |   " << arr[6][3] << "   |    " << arr[6][4] << "   |    " << arr[6][5] << "   |   " << arr[6][6] << "   |    " << arr[6][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(46) <<  "|    " << arr[7][0] << "  |    " << arr[7][1] << "   |    " << arr[7][2] << "   |   " << arr[7][3] << "   |    " << arr[7][4] << "   |    " << arr[7][5] << "   |   " << arr[7][6] << "   |    " << arr[7][7] << "   |\n";
		cout << setw(120) << "|        |         |         |        |         |         |        |         |\n";
		cout << setw(120) << "------------------------------------------------------------------------------\n";
	}

	static bool CheckIfMovementsOky(  int X , int Y ,  short up = 0 , short down = 0  , short right = 0 , short left = 0  )
	{
		if ((X - up) < 0 || (X + down) > 7 || (Y + right) > 7 || (Y - left) < 0)
			return false;
		
		return true;
	}

	static vector < vector < string > >  Change_X_Position(vector < vector < string > > arr, vector < vector < string > > arr2 ,   string& Ques, int& X, int& Y)
	{
			
			int Dest = clsUtil::RandomNumber(1 , 4);
			
			bool chk = 1;
			while (chk)
			{
				Dest = clsUtil::RandomNumber(1, 4);

				if (Dest == 1 && X > 0 /*UP*/)
				{
					int Move = clsUtil::RandomNumber(1, 7);

					while (!CheckIfMovementsOky(X, Y, Move))
					{
						Move = clsUtil::RandomNumber(1, 7);
					}

					Ques += " To Up " + to_string(Move + 1);

					arr[X][Y] = arr2[X][Y];
					arr[X - Move][Y] = "X";

					X -= Move;

					chk = 0;
				}
				else if (Dest == 2 && X < 7 /*Down*/)
				{
					int Move = clsUtil::RandomNumber(1, 7 - X);

					while (!CheckIfMovementsOky(X, Y, 0, Move))
					{
						Move = clsUtil::RandomNumber(1, 7 - X);
					}

					Ques += " To Down " + to_string(Move + 1);

					arr[X][Y] = arr2[X][Y];
					arr[X + Move][Y] = "X";

					X += Move;

					chk = 0;
				}
				else if (Dest == 3 && Y < 7 /*Right*/)
				{
					int Move = clsUtil::RandomNumber(1, 7);

					while (!CheckIfMovementsOky(X, Y, 0, 0, Move))
					{
						Move = clsUtil::RandomNumber(1, 7 - Y);
					}

					Ques += " To Right " + to_string(Move);

					arr[X][Y] = arr2[X][Y];
					arr[X][Y + Move] = "X";

					Y += Move;

					chk = 0;
				}
				else if (Dest == 4 && Y > 0) /*Left*/
				{
					int Move = clsUtil::RandomNumber(1, 7);

					while (!CheckIfMovementsOky(X, Y, 0, 0, 0, Move))
					{
						Move = clsUtil::RandomNumber(1, 7);
					}

					Ques += " To left " + to_string(Move + 1);

					arr[X][Y] = arr2[X][Y];
					arr[X][Y - Move] = "X";

					Y -= Move;

					chk = 0;
				}
			}

		
		return arr;

	}

	static int GetTheRightAnswer(vector < vector < string > > arr , vector < vector < string > > arr2 )
	{
		
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (arr[i][j] == "X")
				{
					return stoi(arr2[i][j]);
				}
			}
		}
	}

public : 

	static void GuessPositionGame()
	{
		PrintHeader(Player1, Player2);

		cout << "\n\n\n\n\n\n";
		cout << setw(100) << "\tPlease Enter How Many Rounds Do you Want Play >> " << endl;
		short NumberOfRounds = clsInputValidate::ReadShortNumber();

		system("cls");

		PrintHeader(Player1, Player2);

		//short RoundNum = 0;

		while (NumberOfRounds--)
		{

			system("cls");

			cout << "New Round Start >>>>> " << "\n\n\n\n";

			vector < vector < string > > vecChar 
			{
				{"1" , "2"  , "3" , "4" , "5" , "6" , "7" , "8"},
				{"9" , "10"  , "11" , "12" , "13" , "14" , "15" , "16"},
				{"17" , "18"  , "19" , "20" , "21" , "22" , "23" , "24"},
				{"25" , "26"  , "27" , "28" , "29" , "30" , "31" , "32"},
				{"33" , "34"  , "35" , "36" , "37" , "38" , "39" , "40"},
				{"41" , "42"  , "43" , "44" , "45" , "46" , "47" , "48"},
				{"49" , "50"  , "51" , "52" , "53" , "54" , "55" , "56"},
				{"57" , "58"  , "59" , "60" , "61" , "62" , "63" , "64"},

			};

			vector < vector < string > > vec2 = vecChar;
	
			string Ques = " ";

			int x = 0, y = 0;

			vecChar[x][y] = 'X';
			
			PrintGameBoard(vecChar);

			for (int i = 0; i < 4; i++)
			{
				vecChar = Change_X_Position(vecChar , vec2, Ques, x, y);
			}

			Ques += " Guess The Position of X >> ? ";

			cout << "\n\n\n\n";

			cout << Ques << "\n\n\n";

			cout << setw(20) << "\tPlayer " << Player1.UserName  << " Turn >> " << endl;


			int Player1Choice, Player2Choice;

			cin >> Player1Choice;


			cout << "\n\n\n\n";
			cout << setw(20) << "\tPlayer " << Player2.UserName  << " Turn >> " << endl;

			cin >> Player2Choice;

			int Answer = GetTheRightAnswer(vecChar , vec2);

			system("cls");

			cout << "\n\n\nThe Right Answer For this Round Is " << Answer << endl;

			PrintHeader(Player1, Player2);

			PrintGameBoard(vecChar);

			cout << "\n\nPress Any key to continue :-)" << endl;

			system("pause>0");



			if (Player1Choice == Answer)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				Player1.Score += clsGames::enEveryPointsGamePerRound::eGuessPlace_Point;
				cout << setw(70) << "\tPlayer " << Player1.UserName << " Win the Round :-)" << endl;
			}
			else if (Player2Choice == Answer)
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n";
				Player2.Score += clsGames::enEveryPointsGamePerRound::eGuessPlace_Point;
				cout << setw(70) << "\tPlayer " << Player2.UserName << " Win the Round :-)" << endl;
			}
			else
			{
				system("cls");
				cout << "No Winner For This Round :-(" << endl;
			}
			system("pause>0");
		}

		system("pause>0");

	}

};

