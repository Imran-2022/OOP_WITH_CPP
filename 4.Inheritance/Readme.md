# C++ Inheritance Exercises for Final Test

## 1. Single Inheritance

**Question:**
Create a class `Animal` with a function `void eat()` that prints "Eating...". Derive a class `Dog` from `Animal` and add a function `void bark()` that prints "Barking...". Demonstrate calling both functions using a `Dog` object.

## 2. Multilevel Inheritance

**Question:**
Create a class `Grandparent` with a function `void familyName()`. Derive `Parent` from `Grandparent` with a function `void parentTrait()`. Derive `Child` from `Parent` with a function `void childTrait()`. Call all three functions using a `Child` object.

## 3. Multiple Inheritance

**Question:**
Create class `A` with `void showA()`, class `B` with `void showB()`, and a class `C` that inherits from both `A` and `B`. Call both functions using `C`.

## 4. Hierarchical Inheritance

**Question:**
Create a base class `Shape` with a function `void setName()`. Derive classes `Circle` and `Rectangle` from `Shape`, each having its own function `draw()`. Demonstrate calling all functions.

## 5. Hybrid Inheritance

**Question:**
Combine multiple and multilevel inheritance. Create:

* Class `Vehicle` → Base class with `void type()`.
* Class `Car` inherits from `Vehicle`.
* Class `Truck` inherits from `Vehicle`.
* Class `SportsCar` inherits from `Car`.

Demonstrate calling all functions using `SportsCar`.