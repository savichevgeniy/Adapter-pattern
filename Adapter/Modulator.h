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
		cout << "Музыка зашружается..." << endl;
	}
	void MusicTroughPhone()
	{
		cout << "Ура!!!Музыка играет..." << endl;
	}
private:
	const AbstractPhone& abstractPhone_;
};