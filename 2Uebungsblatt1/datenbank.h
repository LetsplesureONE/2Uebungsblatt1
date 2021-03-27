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
		if (db->eintraege == DB_LIMIT) {
			return false;
		}
		db->schilder[db->eintraege] = schild;
		db->eintraege++;
		return true;
	}
	
	std::string ausgabe(datenbank* db) { 
		std::string backbounce =( "Datenbank: "+db->name+"\n\----------------------\n");
		for (int i = 0; i < db->eintraege; i++) {
			backbounce = (backbounce + kfz::ausgabe(db->schilder[i])+"\n");
		}
		return backbounce;
	}
	
}