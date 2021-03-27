#include <iostream>
#include "kennzeichen.h"
#include "datenbank.h"
void schnapszahlTest() { 
	// IHR CODE 
}

void einlesenTest() {
	// IHR CODE 
}

void datenbankTest() { 
	// IHR CODE 
}

int main(){
	// Aufgabe 1
	/*test 1a 
	std::string test1a = kfz::einlesenOrt();
	std::cout << "testout: " << test1a << std::endl;
	/*/
	/*test 1b
	std::string test1b = kfz::einlesenBuchstaben();
	std::cout << "testout: " << test1b << std::endl;
	//*/
	/*test 1c //TODO fehlerhafte eingabe endlessloop
	short test1c = kfz::einlesenZahl();
	std::cout << "testout: " << test1c << std::endl;
	//*/
	/*test 1d
	kfz::kennzeichen *test1d = kfz::einlesen();
	std::cout << "testout: " << test1d <<" "<< test1d->ort<<" "<< test1d->buchstaben << " "<< test1d->zahl << " " << std::endl;
	//*/
	/*test 1e
	kfz::kennzeichen* test1e = new kfz::kennzeichen;
	test1e->zahl = 6969;
	std::cout << "testout: " << test1e->zahl << " " << kfz::istSchnapszahl(test1e)<< std::endl;
	//*/
	/*test 1f
	kfz::kennzeichen* test1f = new kfz::kennzeichen;
	test1f->zahl = 333;
	std::cout << "testout: " << test1f->zahl << " " << kfz::istZehner(test1f)<< std::endl;
	//*/
	/*test 1g
	kfz::kennzeichen* test1g = new kfz::kennzeichen;
	test1g->zahl = 320;
	std::cout << "testout: " << test1g->zahl << " " << kfz::istHunderter(test1g) << std::endl;
	//*/
	/*test 1h
	kfz::kennzeichen* test1h = new kfz::kennzeichen;
	test1h->zahl = 3100;
	std::cout << "testout: " << test1h->zahl << " " << kfz::istTausender(test1h) << std::endl;
	//*/
	/*test 1i
	kfz::kennzeichen* test1i = new kfz::kennzeichen;
	test1i->zahl = 30;
	std::cout << "testout: " << test1i->zahl << std::endl;
	kfz::schildTest(test1i);
	//*/
	/*test 1j
	kfz::kennzeichen* test1j = new kfz::kennzeichen;
	test1j->ort = "A";
	test1j->buchstaben = "UA";
	test1j->zahl = 420;
	std::cout << "testout: " << test1j->ort << test1j->buchstaben << test1j->zahl << std::endl << ausgabe(test1j)<<std::endl;
	//*/
	//Aufgabe 2
	return 0;
}