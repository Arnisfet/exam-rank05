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
	for (std::vector<ASpell *>::iterator begin = this->arr.begin(); begin != this->arr
	.end(); begin++)
	{
		delete *begin;
	}
	arr.clear();
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

void Warlock::learnSpell(ASpell* spell_ptr)
{
	if (spell_ptr)
	{
		for (auto begin = this->arr.begin(); begin != this->arr.end(); begin++)
			if ((*begin)->getName() == spell_ptr->getName())
				return ;
			this->arr.push_back(spell_ptr->clone());
	}
}

void Warlock::forgetSpell(std::string const &spellName)
{	std::vector<ASpell*>::iterator end= this->arr.end();
	for (std::vector<ASpell*>::iterator begin = this->arr.begin(); begin != end; begin++)
	{
		if ((*begin)->getName() == spellName)
		{
			delete *begin;
			begin = this->arr.erase(begin);
		}
	}
}

void Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	for (auto begin = this->arr.begin(); begin != this->arr.end(); begin++)
	{
		if ((*begin)->getName() == spellName)
		{
			(*begin)->launch(target);
			return ;
		}
	}
}

