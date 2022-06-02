#include "Warlock.h"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	    std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";

}

std::string const &Warlock::getName() const
{
	return (this->name);
}

std::string const &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}
void Warlock::introduce() const
{
	 std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *spell_ptr)
{
	if (spell_ptr)
		arr.insert(std::pair<std::string, ASpell *>(spell_ptr->getName(), spell_ptr));
}

void Warlock::forgetSpell(const std::string &spellName)
{
	std::map <std::string, ASpell *>::iterator it = arr.find(spellName);
	if (it != arr.end())
		delete it->second;
	arr.erase(it);
}

void Warlock::launchSpell(const std::string &spellName, const ATarget &target)
{
	ASpell *spell = arr[spellName];
	if (spell)
		spell->launch(target);

}
