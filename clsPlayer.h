#pragma once
#include <iostream> 
using namespace std;

class clsPlayer
{
private :

	string _UserName;
	int _Score;

public :

	clsPlayer(string userName, int score)
	{
		_UserName = userName;
		_Score = score;
	}
	string GetUserName()
	{
		return _UserName;
	}
	void SetUserName(string userName )
	{
		_UserName = userName;
	}
	_declspec(property(put = SetUserName, get = GetUserName)) string UserName;

	int GetScore()
	{
		return _Score;
	}
	void SetScore(int score )
	{
		_Score = score;
	}
	_declspec(property(put = SetScore, get = GetScore)) int Score;


};

