//
// Created by arnisfet on 19.05.2022.
//

#include "Fwoosh.h"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::~Fwoosh()
{}

ASpell *Fwoosh::clone()
{
	return (new Fwoosh());
}