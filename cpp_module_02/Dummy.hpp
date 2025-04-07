#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget {
public:
  Dummy();
  ~Dummy();

  Dummy *clone() const override;

  Dummy(const Dummy &) = delete;
  Dummy &operator=(const Dummy &) = delete;
};

/*
In the same way, create a concrete ATarget called Dummy, the type of which is
"Target Practice Dummy". You must also implement its clone() method.
*/
