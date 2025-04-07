#pragma once

#include <map>
#include <string>

using namespace std;

class ATarget;

class TargetGenerator {
public:
  TargetGenerator();
  ~TargetGenerator();

  void learnTargetType(ATarget *);
  void forgetTargetType(string const &);
  ATarget *createTarget(string const &);

  TargetGenerator(const TargetGenerator &) = delete;
  TargetGenerator &operator=(const TargetGenerator &) = delete;

private:
  typedef map<std::string, ATarget *> TargetMap;
  typedef TargetMap::iterator TargetMapIt;
  typedef TargetMap::const_iterator ConstTargetMapIt;

  TargetMap targetMap_;
};

/*
Make a TargetGenerator class, in canonical form, and as before,
non-copyable.

It will have the following functions:

* void learnTargetType(ATarget*), teaches a target to the generator

* void forgetTargetType(string const &), that makes the generator forget a
  target type if it's known

* ATarget* createTarget(string const &), that creates a target of the
  specified type
*/
