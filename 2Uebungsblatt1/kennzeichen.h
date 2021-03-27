#pragma once
#include <string>
#include <iostream>
// IHR CODE 

namespace kfz
{
	struct kennzeichen
	{
		std::string ort;
		std::string buchstaben;
		short zahl;
	};
	typedef struct kennzeichen kennzeichen;

	std::string einlesenOrt() { 
		char ort[1024]{}; 
		bool errorcheck = false;
		while (errorcheck == false) {
			std::cout << "Ortskuerzel eingeben: ";
			std::cin >> ort;
			for (int i = 1; i <= 3; i++) { //ohne 0, da dann array leer --> keine valide Eingabe
				if (ort[i] == '\0') {
					errorcheck = true;
				}
			}
			std::cout << std::endl;
			if (errorcheck == false) std::cout << "invalid input please retry\n";
		}
		return ort;

	}

	std::string einlesenBuchstaben() { 
		std::string ort;
		bool errorcheck = false;
		while (errorcheck == false) {
			std::cout << "Bitte 1 oder 2 Buchstaben eingeben: ";
			std::cin >> ort;
			if (ort.length() <= 2 && ort.length()>=1) errorcheck = true;
			std::cout << std::endl;
			if (errorcheck == false) std::cout << "invalid input please retry\n";
		}
		return ort;
	}
	
	short einlesenZahl() { 
		short inp = 0;
		bool errorcheck = false;
		while (errorcheck == false) {
			inp = 1;
			//char dumpster[42];
			std::cout << "Insert Number between 1 and 9999: ";
			std::cin.clear();
			std::cin.sync();
			std::cin >> inp;//>> dumpster;
			if (inp <= 9999 && inp >= 1) {
				errorcheck = true;
			}
			std::cout << std::cin.good()<<std::endl;
			if (errorcheck == false) std::cout << "invalid input please retry\n";
		}
		return inp;
	} //TODO Problem bei fehlerhafter eingabe geht in endlessloop lösen
	
	kennzeichen* einlesen() { 
		kennzeichen* newkenn;
		newkenn = new kennzeichen;
		newkenn->ort = einlesenOrt();
		newkenn->buchstaben = einlesenBuchstaben();
		newkenn->zahl = einlesenZahl();
		return newkenn;
	}
	
	bool istSchnapszahl(const kennzeichen* pkenn) {
		if (pkenn->zahl == 0) {
			std::cout << "invalid input\n";
		}
		if (pkenn->zahl/10==0) {
			return false;			
		}
		if (pkenn->zahl / 100 == 0) {
			if ((pkenn->zahl % 10) == ((pkenn->zahl / 10) % 10)) {
				return true; 
			}
		}
		else {
			if (pkenn->zahl / 1000 == 0) {
				if ((pkenn->zahl % 10) == ((pkenn->zahl / 10) % 10) == ((pkenn->zahl / 100) % 10)) {

					return true;
				}
			}
			else {
				if (pkenn->zahl / 10000 == 0) {
					if ((pkenn->zahl % 10) == ((pkenn->zahl / 10) % 10) == ((pkenn->zahl / 100) % 10) == (pkenn->zahl / 1000)) {
						return true;
					}
				}
			}
		}
		return false;
	}
	
	bool istZehner(const kennzeichen* pkenn) { 
		if (pkenn->zahl/100==0) {
			if (pkenn->zahl%10==0) {
				return true;
			}
		}
		return false;
	}
	
	bool istHunderter(const kennzeichen* pkenn) { 
		if (pkenn->zahl / 1000 == 0) {
			if ((pkenn->zahl % 100 == 0) && (pkenn->zahl % 10 == 0)) {
				return true;
			}
		}
		return false;
	}
	
	bool istTausender(const kennzeichen* pkenn) {
		if (pkenn->zahl / 10000 == 0) {
			if ((pkenn->zahl % 1000 == 0) && (pkenn->zahl % 100 == 0) && (pkenn->zahl % 10 == 0)) {
				return true;
			}
		}
		return false;
	}

	void schildTest(kennzeichen* kenn) { 
		if (istSchnapszahl(kenn)) {
			std::cout << "Eine Schnappszahl, na dann zu Wohl!\n";
		}
		else {
			if (istZehner(kenn)) {
				std::cout << "Ein 10er Kennzeichen!\n";
			}
			else {
				if (istHunderter(kenn)) {
					std::cout << "Ein 100er Kennzeichen!!\n";
				}
				else {
					if (istTausender(kenn)) {
						std::cout << "Ein 1000er Kennzeichen!!\n";
					}
				}
			}
		}		
		std::cout << "Gute Wahl!\n";
		return;
	}
	
	std::string ausgabe(const kennzeichen* pkenn) { 
		std::string kennung = (pkenn->ort + '-' + pkenn->buchstaben + '-' + std::to_string(pkenn->zahl));

		return kennung;
	}
	
}