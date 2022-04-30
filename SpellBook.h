//
// Created by Mickey Rudge on 4/30/22.
//

#ifndef EXAM_RANK05_SPELLBOOK_H
#define EXAM_RANK05_SPELLBOOK_H

#include "ASpell.h"
#include <vector>

class SpellBook
{
private:
	std::vector<ASpell*> spells;
	SpellBook(SpellBook const &other);
	SpellBook &operator=(SpellBook const &other);

public:
	SpellBook();
	virtual ~SpellBook();

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spell);
	ASpell* createSpell(std::string const &spell);
};


#endif //EXAM_RANK05_SPELLBOOK_H
