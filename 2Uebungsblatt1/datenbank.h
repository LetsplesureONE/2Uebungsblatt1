#pragma once
#define DB_LIMIT 10
#include "kennzeichen.h"
#include <string>
namespace db
{
	struct datenbank
	{
		std::string name;
		kfz::kennzeichen* schilder[DB_LIMIT];
		int eintraege = 0;
	};
	typedef struct datenbank datenbank;
	bool einfuegen(datenbank* db, kfz::kennzeichen* schild) { 
		/* IHR CODE */ 
	}

	std::string ausgabe(datenbank* db) { 
		/* IHR CODE */ 
	}

}