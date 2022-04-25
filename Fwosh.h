//
// Created by Mickey Rudge on 4/24/22.
//

#ifndef EXAMRANK_FWOSH_H
#define EXAMRANK_FWOSH_H
#include "ASpell.h"

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	virtual ~Fwoosh();

	virtual ASpell *clone (void) const;
};


#endif //EXAMRANK_FWOSH_H
