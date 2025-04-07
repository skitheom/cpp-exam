# exam-05
42 exam prep

## cpp module 00

### 概要
- Warlock クラスを実装（Coplien form = Orthodox Canonical form）
- コンストラクタ／デストラクタ、コピー制御 (delete) など

## cpp module 01

### 概要

- ASpell / ATarget の抽象クラスを作る
- Warlock が spell を覚えて、対象を撃つ

### 要点
- clone() 使って spell を複製
- Warlock が learn / forget / launch できる
- Fwoosh（魔法）と Dummy（ターゲット）を実装

## cpp module 02

### 概要

- 魔法とターゲットの管理に、SpellBook, TargetGeneratorを使う
- 魔法は SpellBook に登録して、そこから発動
- ターゲットは TargetGenerator で登録・生成
- clone(), delete を適切に使う

### 要点

- Fireball（燃やす魔法）と Polymorph（変身魔法）を追加
- BrickWall（壁ターゲット）を追加
- SpellBook: spell の登録・削除・生成を担当
- TargetGenerator: target type の登録と生成を担当
- Warlock: spellBook 経由で魔法を使う
