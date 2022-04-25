//
// Created by Mickey Rudge on 4/24/22.
//

#include "Warlock.h"

Warlock::Warlock(std::string const &name, std::string const &title): name
(name), title(title)
{
	std::cout << this->name << ": " << "This looks like another boring day.\n";
};

Warlock::~Warlock()
{
	std::cout << this->name << ": " << "My job here is done!\n";
}

Warlock &Warlock::operator=(const Warlock &other)
{
	this->name = other.name;
	this->title = other.title;
	return(*this);
}

std::string Warlock::getName() const
{
	return (this->name);
}

std::string Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": " << "I am " << this->name << ", " <<
	this->title << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{}
