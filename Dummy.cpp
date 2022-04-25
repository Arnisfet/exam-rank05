//
// Created by Mickey Rudge on 4/24/22.
//

#include "Dummy.h"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}

Dummy::~Dummy()
{}

ATarget *Dummy::clone() const
{
	return (new Dummy(*this));
}