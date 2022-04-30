//
// Created by Mickey Rudge on 4/30/22.
//

#ifndef EXAM_RANK05_FIREBALL_H
#define EXAM_RANK05_FIREBALL_H

#include "ASpell.h"

class Fireball : ASpell
{
public:
	Fireball();
	virtual ~Fireball();

	virtual ASpell *clone(void) const;
};


#endif //EXAM_RANK05_FIREBALL_H
