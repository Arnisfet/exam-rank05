#include "ASpell.h"

ASpell::ASpell()
{}

ASpell::~ASpell()
{}

ASpell::ASpell(std::string const &name, std::string const &effects)
{
	this->name = name;
	this->effects = effects;
}

ASpell::ASpell(ASpell const &other)
{
	this->name = other.name;
	this->effects = other.effects;
}

ASpell const &ASpell::operator=(ASpell const &other)
{
	this->name = other.name;
	this->effects = other.effects;
	return(*this);
}

std::string const &ASpell::getName() const
{
	return(this->name);
}

std::string const &ASpell::getEffects() const
{
	return(this->effects);
}

void ASpell::launch(ATarget const &target)
{
	target.getHitBySpell((*this));
}

