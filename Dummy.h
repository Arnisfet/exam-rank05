//
// Created by arnisfet on 19.05.2022.
//

#ifndef EXAM_RANK05_DUMMY_H
#define EXAM_RANK05_DUMMY_H

#include "ATarget.h"

class Dummy : public ATarget
{
public:
	~Dummy();

	ATarget *clone();


	Dummy();
};


#endif //EXAM_RANK05_DUMMY_H
