#pragma once
#include <iostream>
#include "AbstractPhone.h"

using namespace std;

class AndroidPhone : public AbstractPhone
{
public:
	AndroidPhone()
	{
		cout << "Для транслирования музыки используеться выход: jack 3.5" << endl;
	}
	void PhoneOutput()
	{
		cout << "Музыка играет..." << endl;
	}
};