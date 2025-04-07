#pragma once

#include <map>
#include <string>

using namespace std;

class ASpell;

class SpellBook {
public:
  SpellBook();
  ~SpellBook();

  void learnSpell(ASpell *);
  void forgetSpell(string const &);
  ASpell *createSpell(string const &);

  SpellBook(const SpellBook &) = delete;
  SpellBook &operator=(const SpellBook &) = delete;

private:
  typedef std::map<std::string, ASpell *> SpellMap;
  typedef std::map<std::string, ASpell *>::iterator SpellIt;
  typedef std::map<std::string, ASpell *>::const_iterator ConstSpellIt;

  SpellMap spells_;
};

/*
Now, make a SpellBook class, in canonical form, that can't be copied or
instantiated by copy. It will have the following functions:

* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
the name of a spell, creates it, and returns it.
*/
