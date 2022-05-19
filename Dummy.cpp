//
// Created by arnisfet on 19.05.2022.
//

#include "Dummy.h"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}

Dummy::~Dummy()
{}

ATarget *Dummy::clone()
{
	return (new Dummy());
}