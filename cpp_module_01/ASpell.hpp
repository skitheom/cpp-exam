#pragma once

#include <string>

class ATarget;

class ASpell {

public:
  ASpell();
  ASpell(const ASpell &spell);
  ASpell(const std::string &name, const std::string &effects);
  virtual ~ASpell();

  ASpell &operator=(const ASpell &spell);

  const std::string &getName() const;
  const std::string &getEffects() const;

  virtual ASpell *clone() const = 0;

  void launch(const ATarget &target) const;

protected:
  std::string name_;
  std::string effects_;
};
