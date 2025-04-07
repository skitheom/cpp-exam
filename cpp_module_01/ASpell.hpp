#pragma once

#include <string>

class ATarget;

class ASpell {

public:
  // Constructor / Destructor
  ASpell(const std::string &name, const std::string &effects);
  virtual ~ASpell();

  // Accessor
  const std::string &getName() const;
  const std::string &getEffects() const;

  // Abstract method
  virtual ASpell *clone() const = 0;

  // Behavior
  void launch(const ATarget &target) const;

  // Forbidden
  ASpell() = delete;
  ASpell(const ASpell &) = delete;
  ASpell &operator=(const ASpell &) = delete;

protected:
  std::string name_;
  std::string effects_;
};

/*
Create an abstract class called ASpell, in Coplien's form, that has the
following protected attributes:

* name (string)
* effects (string)

Both will have getters (getName and getEffects) that return strings.

Also, add a clone pure method that returns a pointer to ASpell.

All these functions can be called on a constant object.

ASpell has a constructor that takes its name and its effects, in that order.

[...]

Finally, add to your ASpell class a launch function that takes a reference to
constant ATarget.

This one will simply call the getHitBySpell of the passed object, passing the
current instance as a parameter.
*/
