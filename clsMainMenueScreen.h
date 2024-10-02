#pragma once
#include <iostream> 
#include <iomanip>
#include "clsHeaderScreen.h"
#include "clsInputValidate.h"
#include "clsPlayer.h"
#include "clsGames.h"
#include "clsRockScissorsPaperGameScreen.h"
#include "Global.h"
#include "clsXOGameScreen.h"
#include "clsGuessNumberGameScreen.h"
#include "clsGuessThePosition.h"
using namespace std;
class clsMainMenueScreen:clsHeaderScreen
{

private : 

	static short PrintGamesOptions()
	{
		system("cls");
		PrintHeader(Player1, Player2);
		cout << "\n\n\n\n";
		cout << setw(70) << "           \t |" << endl;
		cout << setw(73) << "(1)        \t |" << "\t  (2)" << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << setw(68) << "ROCK\t |" << "\tX & O" << endl;
		cout << setw(69) << "PAPER\t |" << endl;
		cout << setw(73) << "SCISSORS\t | " << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << setw(74) << "-----------------------|" << "-----------------------" << endl;
		cout << setw(73) << "(3)        \t |" << "\t  (4)" << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << setw(69) << "Guess\t |" << "\tGuess X Place" << endl;
		cout << setw(70) << "Number\t |" << "\t   In grid" << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << setw(70) << "           \t |" << endl;
		cout << "\n\n\n";
		short Choice;
		cout << setw(70) << "Choose The Game That You Want To Play It >> ( Press 0 To Exit else ( 1 -> 4) ) : ";
		Choice = clsInputValidate::ReadShortNumberBetween(0, 4);
		return Choice;

	}

	static void PrintWelcomeScreen( clsPlayer P1  , clsPlayer P2 )
	{
		system("cls");

		cout << "\n\n\n\n\n" << setw(60) << "\tHello " << P1.UserName << " And " << P2.UserName << ", Welcome To Multi Games Place " << endl;
		cout << setw(30) << "Press Any Key To Start :-)" << endl;
		system("pause>0");
	}

	static short _BackToGamesOptionsScreen()
	{
		cout << "\nPress Any key To come back to Games Options Screen >> ";
		system("pause>0");
		short Choice;
		Choice = PrintGamesOptions();
		return Choice;
	}

	static void RockScissorsPaper()
	{
		//cout << "Rock Paper Scissors Game Will be Here :-)" << endl;
		clsRockScissorsPaperGameScreen::RockScissorsPaperScreen();
	}

	static void XO()
	{
		//cout << "XO Game Will be Here :-)" << endl;
		clsXOGameScreen::XOGameScreen();
	}

	static void GuessNumber()
	{
		//cout << "Guess Game Will be Here :-)" << endl;
		clsGuessNumberGameScreen::GuessNumberGameScreen();
	}

	static void GuessPlaceInGrid()
	{
		clsGuessThePosition::GuessPositionGame();
	}


	static void _PerformMainMenueOption (short Choice)
	{
		switch (Choice)
		{
		case clsGames::eRock_Scissors_Paper :
			system("cls");
			RockScissorsPaper();
			_PerformMainMenueOption(_BackToGamesOptionsScreen());
			break;
		case clsGames::eXO :
			system("cls");
			XO();
			_PerformMainMenueOption(_BackToGamesOptionsScreen());
			break;
		case clsGames::eGuessNumber:
			system("cls");
			GuessNumber();
			_PerformMainMenueOption(_BackToGamesOptionsScreen());
			break;
		case clsGames::eGuessPlace:
			system("cls");
			GuessPlaceInGrid();
			_PerformMainMenueOption(_BackToGamesOptionsScreen());
			break;
		case 0 :
			break;
		}
	}

public : 

	static void ShowMainMenue()
	{
		
		string p1, p2;
		cout << "\nPlease Enter the First Player UserName : ";
		p1 = clsInputValidate::ReadString();
		cout << "\nPlease Enter the Second Player UserName : ";
		p2 = clsInputValidate::ReadString();

		//clsPlayer Player_1(p1 , 0), Player_2(p2 , 0);
		Player1.UserName = p1;
		Player2.UserName = p2;

		PrintWelcomeScreen(Player1, Player2);

		PrintHeader(Player1 , Player2);

		_PerformMainMenueOption(PrintGamesOptions());
	}


};
