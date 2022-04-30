//
// Created by Mickey Rudge on 4/30/22.
//

#ifndef EXAM_RANK05_TARGETGENERATOR_H
#define EXAM_RANK05_TARGETGENERATOR_H

#include "vector"
#include "ATarget.h"

class TargetGenerator
{
private:
	std::vector<ATarget*> target;
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &target);
	ATarget* createTarget(std::string const &target);
};


#endif //EXAM_RANK05_TARGETGENERATOR_H
