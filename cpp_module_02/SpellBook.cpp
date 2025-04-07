#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {
  for (SpellIt it = spells_.begin(); it != spells_.end(); ++it) {
    delete it->second;
  }
}

void SpellBook::learnSpell(ASpell *spell) {
  ConstSpellIt it = spells_.find(spell->getName());
  if (it != spells_.end()) {
    return;
  }
  spells_[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(string const &spellName) {
  SpellIt it = spells_.find(spellName);
  if (it == spells_.end()) {
    return;
  }
  delete it->second;
  spells_.erase(it);
}

ASpell *SpellBook::createSpell(string const &spellName) {
  SpellIt it = spells_.find(spellName);
  if (it == spells_.end()) {
    return nullptr;
  }
  return it->second->clone();
}
