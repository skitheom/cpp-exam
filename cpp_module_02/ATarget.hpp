#pragma once

#include <string>

class ASpell;

class ATarget {

public:
  ATarget();
  ATarget(const std::string &type);
  ATarget(const ATarget &other);
  virtual ~ATarget();

  ATarget &operator=(const ATarget &other);

  const std::string &getType() const;

  virtual ATarget *clone() const = 0;

  void getHitBySpell(const ASpell &spell) const;

protected:
  std::string type_;
};
