#pragma once

#include <string>

class ASpell;

class ATarget {

public:
  // Constructor / Destructor
  ATarget(const std::string &type);
  virtual ~ATarget();

  // Accessor
  const std::string &getType() const;

  // Abstract method
  virtual ATarget *clone() const = 0;

  // Behavior
  void getHitBySpell(const ASpell &spell) const;

  // Forbidden
  ATarget() = delete;
  ATarget(const ATarget &) = delete;
  ATarget &operator=(const ATarget &) = delete;

protected:
  std::string type_;
};

/*
Now you will create an ATarget abstract class, in Coplien's form. It has a type
attribute, which is a string, and its associated getter, getType, that return a
reference to a constant string.

In much the same way as ASpell, it has a clone() pure method.

All these functions can be called on a constant object.

It has a constructor that takes its type.

Now, add to your ATarget a getHitBySpell function that takes a reference to
constant ASpell.

It will display :

<TYPE> has been <EFFECTS>!

<TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
getEffects function.
*/
