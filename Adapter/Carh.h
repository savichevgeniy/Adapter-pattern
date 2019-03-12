#pragma once
#include <iostream>
#include "AbstractRadioPlayer.h"

using namespace std;

class Car
{
public:
	Car()
	{
		cout << "’очу слушать музыку на своей косетной магнитоле" << endl;
	}
	void PlayMyMusic(AbstractRadioPlayer& music)
	{
		music.MusicTroughPhone();
	}
};