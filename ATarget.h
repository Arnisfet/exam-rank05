//
// Created by Mickey Rudge on 4/24/22.
//

#ifndef EXAMRANK_ATARGET_H
#define EXAMRANK_ATARGET_H

#include <iostream>
#include "ASpell.h"

class ASpell;

class ATarget
{
private:
	std::string type;
public:
	ATarget();
	ATarget(std::string const &type);
	ATarget(ATarget const &other);
	~ATarget();

	ATarget &operator=(ATarget const &other);

	std::string getType() const;

	virtual ATarget *clone(void) const = 0;
	void getHitBySpell(ASpell const &spell) const;
};

#endif //EXAMRANK_ATARGET_H
