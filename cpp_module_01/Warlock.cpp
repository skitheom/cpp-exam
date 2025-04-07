#include "Warlock.hpp"
#include "ASpell.hpp"
#include <iostream>

Warlock::Warlock(const std::string &name, const std::string &title)
    : name_(name), title_(title) {
  std::cout << name_ << ": This looks like another boring day.\n";
}

Warlock::~Warlock() {
  for (SpellIt it = spells_.begin(); it != spells_.end(); ++it) {
    delete it->second;
  }
  std::cout << name_ << ": My job here is done!\n";
}

const std::string &Warlock::getName() const { return name_; }

const std::string &Warlock::getTitle() const { return title_; }

void Warlock::setTitle(const std::string &title) { title_ = title; }

void Warlock::introduce() const {
  std::cout << name_ << ": I am " << name_ << ", " << title_ << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
  ConstSpellIt it = spells_.find(spell->getName());
  if (it != spells_.end()) {
    return;
  }
  spells_[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(const std::string &spellName) {
  SpellIt it = spells_.find(spellName);
  if (it == spells_.end()) {
    return;
  }
  delete it->second;
  spells_.erase(it);
}

void Warlock::launchSpell(const std::string &spellName, const ATarget &target) {
  ConstSpellIt it = spells_.find(spellName);
  if (it == spells_.end()) {
    return;
  }
  it->second->launch(target);
}
