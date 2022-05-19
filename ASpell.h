#pragma once

#include<iostream>
#include "ATarget.h"

class ATarget;

class ASpell
{
private:
        std::string name;
        std::string effects;
public:
        ASpell();
        virtual ~ASpell();
        ASpell(std::string const &name, std::string const &effects);
        ASpell(ASpell const &other);
        ASpell const &operator=(ASpell const &other);
        std::string const &getName() const;
        std::string const &getEffects() const;
        virtual ASpell *clone() = 0;
        void launch(ATarget const &target);
};

