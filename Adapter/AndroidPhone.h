#pragma once
#include <iostream>
#include "AbstractPhone.h"

using namespace std;

class AndroidPhone : public AbstractPhone
{
public:
	AndroidPhone()
	{
		cout << "��� �������������� ������ ������������� �����: jack 3.5" << endl;
	}
	void PhoneOutput()
	{
		cout << "������ ������..." << endl;
	}
};