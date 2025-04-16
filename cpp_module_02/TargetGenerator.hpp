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
