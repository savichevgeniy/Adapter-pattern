#include "pch.h"
#include <iostream>
#include <Windows.h>
#include "Modulator.h"
#include "AndroidPhone.h"
#include "Carh.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	AndroidPhone androidPhone;

	Modulator modulator(androidPhone);

	Car car;

	car.PlayMyMusic(modulator);
	system("pause");
	return 0;

}
