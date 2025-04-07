#pragma once

#include <string>

class Warlock {
public:
  // Constructor / Destructor
  Warlock(const std::string &name, const std::string &title);
  ~Warlock();

  // Accessor & Mutator
  const std::string &getName() const;
  const std::string &getTitle() const;
  void setTitle(const std::string &title);

  // Behavior
  void introduce() const;

  // Forbidden
  Warlock() = delete;
  Warlock(const Warlock &) = delete;
  Warlock &operator=(const Warlock &) = delete;

private:
  std::string name_;
  std::string title_;
};
