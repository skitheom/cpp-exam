#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell {
public:
  Fwoosh();
  ~Fwoosh();

  Fwoosh *clone() const override;

  Fwoosh(const Fwoosh &) = delete;
  Fwoosh &operator=(const Fwoosh &) = delete;
};

/*
When all this is done, create an implementation of ASpell called Fwoosh. Its
default constructor will set the name to "Fwoosh" and the effects to "fwooshed".
You will, of course, implement the clone() method. In the case of Fwoosh, it
will return a pointer to a new Fwoosh object.
*/
