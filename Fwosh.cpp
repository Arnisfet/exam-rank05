//
// Created by Mickey Rudge on 4/24/22.
//

#include "Fwosh.h"

Fwoosh::Fwoosh():
	ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh()
{}

ASpell *Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}