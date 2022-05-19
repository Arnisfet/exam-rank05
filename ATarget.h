#pragma once

#include<iostream>
#include "ASpell.h"

class ASpell;

class ATarget
{
private:
        std::string type;
public:
        ATarget();
		virtual ~ATarget();
        ATarget(std::string const &type);
        ATarget(ATarget const &other);
        ATarget const &operator=(ATarget const &other);
        std::string const &getType() const;
        virtual ATarget *clone() = 0;
        void getHitBySpell(ASpell const &spell) const;
};

