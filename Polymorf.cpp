//
// Created by Mickey Rudge on 4/30/22.
//

#include "Polymorf.h"

Polymorf::Polymorf() : ASpell("Polymorph", "turned into a critter")
{}

Polymorf::~Polymorf()
{}

ASpell *Polymorf::clone() const
{
	return (new Polymorf(*this));
}