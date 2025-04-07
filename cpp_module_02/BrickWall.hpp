#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
  BrickWall();
  ~BrickWall();

  BrickWall *clone() const override;

  BrickWall(const BrickWall &) = delete;
  BrickWall &operator=(const BrickWall &) = delete;
};

/*
In addition to this, just so he won't have only dummy to attack, let's make a new target for him, which will be the BrickWall (Type: "Inconspicuous Red-brick Wall").
*/
