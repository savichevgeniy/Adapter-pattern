#pragma once
#include <iostream>
#include "AbstractRadioPlayer.h"

using namespace std;

class Car
{
public:
	Car()
	{
		cout << "���� ������� ������ �� ����� �������� ���������" << endl;
	}
	void PlayMyMusic(AbstractRadioPlayer& music)
	{
		music.MusicTroughPhone();
	}
};