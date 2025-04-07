#include "Warlock.hpp"
#include "ASpell.hpp"
#include <iostream>

Warlock::Warlock(const std::string &name, const std::string &title)
    : name_(name), title_(title), spellBook_() {
  std::cout << name_ << ": This looks like another boring day.\n";
}

Warlock::~Warlock() { std::cout << name_ << ": My job here is done!\n"; }

const std::string &Warlock::getName() const { return name_; }

const std::string &Warlock::getTitle() const { return title_; }

void Warlock::setTitle(const std::string &title) { title_ = title; }

void Warlock::introduce() const {
  std::cout << name_ << ": I am " << name_ << ", " << title_ << "!\n";
}

void Warlock::learnSpell(ASpell *spell) { spellBook_.learnSpell(spell); }

void Warlock::forgetSpell(const std::string &spellName) {
  spellBook_.forgetSpell(spellName);
}

void Warlock::launchSpell(const std::string &spellName, const ATarget &target) {
  ASpell *spell = spellBook_.createSpell(spellName);
  if (spell == nullptr) {
    return;
  }
  spell->launch(target);
  delete spell;
}
