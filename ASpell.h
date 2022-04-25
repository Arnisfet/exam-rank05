#include <iostream>

#ifndef ASPELL_H
# define ASPELL_H

class ATarget;

#include "ATarget.h"

class ASpell
{
private:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(std::string const &name, std::string const &title);
	ASpell(ASpell const &other);
	virtual ~ASpell();

	ASpell &operator=(ASpell const &other);

	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell *clone (void) const = 0;
	void launch (ATarget const &target) const;
};

#endif