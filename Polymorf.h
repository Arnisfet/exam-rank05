//
// Created by Mickey Rudge on 4/30/22.
//

#ifndef EXAM_RANK05_POLYMORF_H
#define EXAM_RANK05_POLYMORF_H

#include "ASpell.h"

class Polymorf : ASpell
{
public:
	Polymorf();
	virtual ~Polymorf();

	ASpell *clone(void) const;
};


#endif //EXAM_RANK05_POLYMORF_H
