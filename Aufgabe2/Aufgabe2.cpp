// Aufgabe2.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "Temperature.h"
using namespace std;


int main()
{
	Temperature t1;
	int loopmain = 1, loopsub, choice;
	double temp;
	while(loopmain)
	{
		loopsub = 1;
		cout << "Hauptmenue" << endl;
		cout << "__________________________" << endl;
		cout << "1. Temperatureingabe" << endl;
		cout << "2. Temperaturausgabe" << endl;
		cout << "3. Beenden" << endl;
		cout << "__________________________" << endl;
		cout << "Auswahl: ";
		cin >> choice;
		system("cls");
		switch(choice)
		{
		case 1:
			while(loopsub)
			{
				cout << "Temperatureingabe" << endl;
				cout << "__________________________" << endl;
				cout << "1. Eingabe in Celsius" << endl;
				cout << "2. Eingabe in Kelvin" << endl;
				cout << "3. Zurück ins Hauptmenue" << endl;
				cout << "__________________________" << endl;
				cout << "Auswahl:";
				cin >> choice;
				system("cls");
				switch (choice)
				{
				case 1:
					cout << "Eingabe (Grad Celsius): ";
					cin >> temp;
					cout << endl << "Eingabe erfolgreich" << endl;
				case 2:
					cout << "Eingabe (Grad Kelvin): ";
					cin >> temp;
					cout << endl << "Eingabe erfolgreich" << endl;
				case 3:
					loopsub--;
					break;;
				default:
					cout << "Ungueltige Engabe" << endl;
					break;
				}
			}
			break;
			
		case 2:
			cout << "Temperaturausgabe" << endl;
			cout << "__________________________" << endl;
			cout << "Temperatur in Celsius: " << t1.getCel() << endl;
			cout << "Temperatur in Kelvin: " << t1.getKel() << endl;
			cout << "Temperatur in Fahrenheit: " << t1.getFah() << endl;
			cout << "__________________________" << endl;
			cout << "Zurück ins Hauptmenue" << endl;
			cin >> choice;
			system("cls");
			break;
		case 3:
			loopmain++;
			break;
		default:
			cout << "Ungueltige Eingabe" << endl;
			break
		}
	}
	

    return 0;
}

