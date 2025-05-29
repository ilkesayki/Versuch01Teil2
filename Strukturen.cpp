/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

struct Person {
    std::string sVorname;
    std::string sNachname;
    int iGeburtsjahr;
    int iAlter;
};


int main()
{
	Person nBenutzer;

	std::cout << "Geben Sie Ihren Vornamen ein: ";
	std::cin >> nBenutzer.sVorname;

	std::cout << "Geben Sie Ihren Nachnamen ein: ";
	std::cin >> nBenutzer.sNachname;

	std::cout << "Geben Sie Ihr Geburtsjahr ein: ";
	std::cin >> nBenutzer.iGeburtsjahr;

	std::cout << "Geben Sie Ihr Alter ein: ";
	std::cin >> nBenutzer.iAlter;

	std::cout << "Benutzerinformationen:\n";
	std::cout << "Name: " << nBenutzer.sVorname << " " << nBenutzer.sNachname << std::endl;
	std::cout << "Geburtsjahr: " << nBenutzer.iGeburtsjahr << std::endl;
	std::cout << "Alter: " << nBenutzer.iAlter << std::endl;

	//Tüm struct'ı tek tek kopyalama
	Person nKopieEinzeln;

	nKopieEinzeln.sVorname = nBenutzer.sVorname;
	nKopieEinzeln.sNachname = nBenutzer.sNachname;
	nKopieEinzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
	nKopieEinzeln.iAlter = nBenutzer.iAlter;

	std::cout << "\nEinzeln kopierte Daten:\n";
	std::cout << "Name: " << nKopieEinzeln.sVorname << " " << nKopieEinzeln.sNachname << std::endl;
	std::cout << "Geburtsjahr: " << nKopieEinzeln.iGeburtsjahr << std::endl;
	std::cout << "Alter: " << nKopieEinzeln.iAlter << std::endl;

	//Tüm struct'ı tek seferde kopyalama
	Person nKopieGesamt = nBenutzer;

	std::cout << "\nGesamte Struktur kopiert:\n";
	std::cout << "Name: " << nKopieGesamt.sVorname << " " << nKopieGesamt.sNachname << std::endl;
	std::cout << "Geburtsjahr: " << nKopieGesamt.iGeburtsjahr << std::endl;
	std::cout << "Alter: " << nKopieGesamt.iAlter << std::endl;


    return 0;
    
}
