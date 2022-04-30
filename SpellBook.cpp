//
// Created by Mickey Rudge on 4/30/22.
//

#include "SpellBook.h"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
	std::vector<ASpell*>::iterator end = this->spells.end();
	for (std::vector<ASpell*>::iterator begin = this->spells.begin(); begin
	!= end; begin++)
		delete *begin;
	this->spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		std::vector<ASpell*>::iterator end = this->spells.end();
		for (std::vector<ASpell*>::iterator begin = this->spells.begin();
		begin != end; begin++)
			if ((*begin)->getName() == spell->getName())
				return;
		this->spells.push_back(spell->clone());
	}
}

void SpellBook::forgetSpell(const std::string &spell)
{
	std::vector<ASpell*>::iterator end = this->spells.end();
	for (std::vector<ASpell*>::iterator begin = this->spells.begin();
		 begin != end; begin++)
	{
		delete *begin;
		begin = this->spells.erase(begin);
	}
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
	std::vector<ASpell*>::iterator end = this->spells.end();
	for (std::vector<ASpell*>::iterator begin = this->spells.begin();
		 begin != end; begin++)
	{
		if ((*begin)->getName() == spell)
			return (*begin);
	}
	return (NULL);
}