//
// Created by Mickey Rudge on 4/24/22.
//

#include "ATarget.h"

ATarget::ATarget()
{}

ATarget::ATarget(std::string const &type): type(type)
{}

ATarget::ATarget(ATarget const &other): type(type)
{}

ATarget::~ATarget()
{}

ATarget &ATarget::operator=(ATarget const &other)
{
	this->type = other.type;
	return(*this);
}

std::string ATarget::getType() const
{
	return(this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << std::endl;
}