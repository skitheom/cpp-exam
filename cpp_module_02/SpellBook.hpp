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
