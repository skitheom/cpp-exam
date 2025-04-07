#pragma once

#include <map>
#include <string>

class ASpell;
class ATarget;

class Warlock {
public:
  Warlock(const std::string &name, const std::string &title);
  ~Warlock();

  const std::string &getName() const;
  const std::string &getTitle() const;
  void setTitle(const std::string &title);

  void introduce() const;

  void learnSpell(ASpell *spell);
  void forgetSpell(const std::string &spellName);
  void launchSpell(const std::string &spellName, const ATarget &target);

  Warlock() = delete;
  Warlock(const Warlock &) = delete;
  Warlock &operator=(const Warlock &) = delete;

private:
  std::string name_;
  std::string title_;
  std::map<std::string, ASpell *> spells_;

  typedef std::map<std::string, ASpell *> SpellMap;
  typedef std::map<std::string, ASpell *>::iterator SpellIt;
  typedef std::map<std::string, ASpell *>::const_iterator ConstSpellIt;
};

/*
Add to the Warlock the following member functions:

* learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
* forgetSpell, takes a string corresponding to a spell's name, and makes the
  Warlock forget it. If it's not a known spell, does nothing.
* launchSpell, takes a string (a spell name) and a reference to ATarget, that
  launches the spell on the selected target. If it's not a known spell, does
  nothing.

At any time your warlock can know only know one spell with the same name.

You will need a new attribute to store the spells your Warlock knows. Several
types fit the bill, it's up to you to choose the best one.
*/
