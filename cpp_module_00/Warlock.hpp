#pragma once

#include <string>

class Warlock {
public:
  // コンストラクタ & デストラクタ
  Warlock(const std::string &name, const std::string &title);
  ~Warlock();

  // default構築/コピー/代入の禁止
  Warlock() = delete;
  Warlock(const Warlock &) = delete;
  Warlock &operator=(const Warlock &) = delete;

  // Accessor & Mutator
  const std::string &getName() const;
  const std::string &getTitle() const;
  void setTitle(const std::string &title);

  void introduce() const;

private:
  std::string name_;
  std::string title_;
};
