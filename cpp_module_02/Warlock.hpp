#pragma once

#include "SpellBook.hpp"
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
  SpellBook spellBook_;
};
