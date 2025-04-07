# cpp module 00

## 概要

- Warlock classを作成
- Coplien form に基づく（= Orthodox Canonical Form）

## Warlock classの構成

### Constructor / Destructor
- `Warlock(const std::string &name, const std::string &title);`
- `~Warlock();`

### private attributes
- `std::string name_`
- `std::string title_`

### Accessor / Mutator
- `const std::string &getName() const;`
- `const std::string &getTitle() const;`
- `void setTitle(const std::string &title);`

### Forbidden
- default constructor 禁止
- copy constructor 禁止
- copy assignment operator 禁止
