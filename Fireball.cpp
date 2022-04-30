//
// Created by Mickey Rudge on 4/30/22.
//

#include "Fireball.h"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp")
{}

ASpell *Fireball::clone(void) const
{
	return (new Fireball(*this));
}