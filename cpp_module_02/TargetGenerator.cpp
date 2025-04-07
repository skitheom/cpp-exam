#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() : targetMap_() {}

TargetGenerator::~TargetGenerator() {
  for (TargetMapIt it = targetMap_.begin(); it != targetMap_.end(); ++it) {
    delete it->second;
  }
}

void TargetGenerator::learnTargetType(ATarget *target) {
  if (targetMap_.find(target->getType()) != targetMap_.end()) {
    return;
  }
  targetMap_[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(string const &targetType) {
  TargetMapIt it = targetMap_.find(targetType);
  if (it == targetMap_.end()) {
    return;
  }
  delete it->second;
  targetMap_.erase(it);
}

ATarget *TargetGenerator::createTarget(string const &targetType) {
  TargetMapIt it = targetMap_.find(targetType);
  if (it == targetMap_.end()) {
    return nullptr;
  }
  return it->second->clone();
}
