#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget() : type_("") {}

ATarget::ATarget(const std::string &type) : type_(type) {}

ATarget::ATarget(const ATarget &other) : type_(other.type_) {}

ATarget::~ATarget() {}

ATarget &ATarget::operator=(const ATarget &other) {
  if (this != &other) {
    type_ = other.type_;
  }
  return *this;
}

const std::string &ATarget::getType() const { return type_; }

void ATarget::getHitBySpell(const ASpell &spell) const {
  std::cout << type_ << " has been " << spell.getEffects() << "!\n";
}
