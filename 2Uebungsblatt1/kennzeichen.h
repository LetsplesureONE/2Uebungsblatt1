#pragma once
#include <string>
#include <iostream>
/* IHR CODE */
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
		/* IHR CODE */ 
	}

	std::string einlesenBuchstaben() { 
		/* IHR CODE */ 
	}

	short einlesenZahl() { 
		/* IHR CODE */
	}

	kennzeichen* einlesen() { 
		/* IHR CODE */
	}

	bool istSchnapszahl(const kennzeichen* pKennzeichen) { 
		/* IHR CODE */ 
	}

	bool istZehner(const kennzeichen* pKennzeichen) { 
		/* IHR CODE */ 
	}

	bool istHunderter(const kennzeichen* pKennzeichen) { 
		/* IHR CODE */ 
	}

	void schildTest(kennzeichen* schild) { 
		/* IHR CODE */ 
	}

	std::string ausgabe(const kennzeichen* pKennzeichen) { 
		/* IHR CODE */
	}

}