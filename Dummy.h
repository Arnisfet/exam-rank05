//
// Created by Mickey Rudge on 4/24/22.
//

#ifndef EXAMRANK_DUMMY_H
#define EXAMRANK_DUMMY_H

#include "ATarget.h"

class Dummy : public ATarget
{
	Dummy();
	virtual ~Dummy();

	virtual ATarget *clone(void) const;
};


#endif //EXAMRANK_DUMMY_H
