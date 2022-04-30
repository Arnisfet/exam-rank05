//
// Created by Mickey Rudge on 4/30/22.
//

#include "BrickWall.h"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall")
{}

BrickWall::~BrickWall()
{}

ATarget *BrickWall::clone(void) const
{
	return (new BrickWall(*this));
}