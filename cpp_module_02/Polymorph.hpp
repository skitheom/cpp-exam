#pragma once

#include "ASpell.hpp"

class Polymorph : public ASpell {
public:
  Polymorph();
  ~Polymorph();

  Polymorph *clone() const override;

  Polymorph(const Polymorph &) = delete;
  Polymorph &operator=(const Polymorph &) = delete;
};

/*
* Polymorph (Name: "Polymorph", Effects: "turned into a critter")
*/
