//
// Created by Mickey Rudge on 4/24/22.
//

#include <iostream>
#include <vector>
#include "ATarget.h"
#include "ASpell.h"
#include "SpellBook.h"

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock(Warlock const &other);
	SpellBook SpellBook;

public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	Warlock &operator=(Warlock const &other);

	std::string getName() const;
	std::string getTitle() const;

	void setTitle(std::string const &title);
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spellName);
	void launchSpell(std::string const &spellName, ATarget const &target);

	void introduce() const;
};


