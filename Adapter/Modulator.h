#pragma once
#include <iostream>
#include "AbstractPhone.h"
#include "AbstractRadioPlayer.h"

using namespace std;

class Modulator : public AbstractRadioPlayer
{
public:
	Modulator(const AbstractPhone& abstractPhone) : abstractPhone_(abstractPhone)
	{
		cout << "������ �����������..." << endl;
	}
	void MusicTroughPhone()
	{
		cout << "���!!!������ ������..." << endl;
	}
private:
	const AbstractPhone& abstractPhone_;
};