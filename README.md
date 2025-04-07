# exam-05
42 exam prep

## cpp module 00

### 概要
- Warlock クラスを実装（Coplien form）
- コンストラクタ／デストラクタ、コピー制御などの基本

### Warlock class
- `name` と `title` を持つ
- default constructor, copy constructor, copy assignment operator 禁止
- 指定フォーマットでセリフを出す（生成, 破棄, 自己紹介）

## cpp module 01

### 概要

- ASpell / ATarget の抽象クラスを作る
- Warlock が spell を覚えて、ターゲットに撃つ

### 要点
- clone() 使って spell を複製
- Warlock が learn / forget / launch できる
- Fwoosh（魔法）と Dummy（ターゲット）を実装
