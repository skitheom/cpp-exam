#include "Warlock.hpp"
#include <iostream>

Warlock::Warlock(const std::string &name, const std::string &title)
    : name_(name), title_(title) {
  std::cout << name_ << ": This looks like another boring day.\n";
}

Warlock::~Warlock() { std::cout << name_ << ": My job here is done!\n"; }

const std::string &Warlock::getName() const { return name_; }

const std::string &Warlock::getTitle() const { return title_; }

void Warlock::setTitle(const std::string &title) { title_ = title; }

void Warlock::introduce() const {
  std::cout << name_ << ": I am " << name_ << ", " << title_ << "!\n";
}
