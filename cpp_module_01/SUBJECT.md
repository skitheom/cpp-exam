# cpp module 01

## 提出 file

Warlock.cpp Warlock.hpp ASpell.hpp ASpell.cpp ATarget.hpp ATarget.cpp Fwoosh.hpp Fwoosh.cpp Dummy.hpp Dummy.cpp

OK。まずは詳細版のSUBJECT.mdを書いてみたよ。リポジトリにpushする前に、ちゃんと簡略版にするつもりだけど取り組むのに楽だからまずは詳細版だよ。



## 概要
- ASpell abstruct class
- ATarget abstruct class
- Coplien form に基づく（= Orthodox Canonical Form）
- switch文の禁止

## ASpell abstruct class
関数はすべて`const`定義

### Constructor / Destructor
```c++
ASpell(const std::string &name, const std::string &effects);
~ASpell();
```

### protected attributes
* name (string)
* effects (string)

### Accessor / Mutator
getName, getEffects (both return string)

### Methods
clone() -> returns a pointer to ASpell = 0 (純粋関数)
launch(const ATarget &target) const;

launch() func  will simply call the getHitBySpell of the passed object, passing the current instance as a parameter.



## ATarget
関数はすべて`const`定義

### attributes
* type (string)

### Accessor / Mutator
getType (return const std::string &type)

### Methods
close() = 0 pure method
getHitBySpell(const ASpell &spell) const;



## Example
<TYPE> has been <EFFECTS>!

<TYPE> is the ATarget's type, and <EFFECTS> is the return of the ASpell's
getEffects function.


## 禁止
- switch文


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
