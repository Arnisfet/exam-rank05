//
// Created by Mickey Rudge on 4/30/22.
//

#ifndef EXAM_RANK05_BRICKWALL_H
#define EXAM_RANK05_BRICKWALL_H

#include "ATarget.h"

class BrickWall : ATarget
{
public:
	BrickWall();
	virtual ~BrickWall();

	virtual ATarget *clone(void) const;
};


#endif //EXAM_RANK05_BRICKWALL_H
