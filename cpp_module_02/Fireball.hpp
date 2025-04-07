#pragma once

#include "ASpell.hpp"

class Fireball : public ASpell {
public:
  Fireball();
  ~Fireball();

  Fireball *clone() const override;

  Fireball(const Fireball &) = delete;
  Fireball &operator=(const Fireball &) = delete;
};

/*
* Fireball (Name: "Fireball", Effects: "burnt to a crisp")
*/
