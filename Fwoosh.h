//
// Created by arnisfet on 19.05.2022.
//

#ifndef EXAM_RANK05_FWOOSH_H
#define EXAM_RANK05_FWOOSH_H
#include "ASpell.h"

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	~Fwoosh();

	ASpell *clone ();
};


#endif //EXAM_RANK05_FWOOSH_H
