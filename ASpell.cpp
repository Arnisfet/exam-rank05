//
// Created by Mickey Rudge on 4/24/22.
//

#include "ASpell.h"

ASpell::ASpell()
{}

ASpell::ASpell(std::string const &name, std::string const &title): name(name)
, effects(effects)
{}

ASpell::ASpell(ASpell const &other): name(other.name), effects(other.effects)
{}

ASpell::~ASpell()
{}

ASpell &ASpell::operator=(ASpell const &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return(*this);
}

std::string ASpell::getName() const
{
	return(this->name);
}

std::string ASpell::getEffects() const
{
	return(this->effects);
}

void ASpell::launch(const ATarget &target) const
{
	target.getHitBySpell(*this);
}
