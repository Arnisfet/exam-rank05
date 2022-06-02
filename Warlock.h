#include <iostream>
#include <map>
#include <ASpell.h>

class Warlock
{
private:
	std::string name;
	std::string title;
	Warlock();
	Warlock const &operator=(Warlock const &other);
	Warlock(Warlock const &other);
	std::map<std::string, ASpell *> arr;
public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;

	void learnSpell(ASpell* spell_ptr);
	void forgetSpell(std::string const &spellName);
	void launchSpell(std::string const &spellName, ATarget const &target);
};
