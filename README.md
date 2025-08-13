# C++ Module 03

# Concepts:

- Inheritance between classes
- Multiple inheritance
- Diamond problem

# ex00

Implemented a `ClapTrap` class with health, energy, and attack mechanics, simulating basic combat actions while tracking object construction and destruction.

Usage:
```
make
```
```
./claptrap
```

# ex01

Created a `ScavTrap` class inheriting from `ClapTrap`, with updated stats, custom attack messages, and a unique `guardGate()` ability.

Usage:
```
make
```
```
./scavtrap
```

# ex02

Added a `FragTrap` class inheriting from `ClapTrap`, featuring distinct construction messages, boosted stats, and a `highFivesGuys()` special ability.

Usage:
```
make
```
```
./fragtrap
```

# ex03

Implemented `DiamondTrap`, a multiple-inheritance hybrid of `ScavTrap` and `FragTrap`, combining abilities, customizing attributes, and adding a `whoAmI()` identity reveal. Solved the diamond problem error.

 Usage:
```
make
```
```
./diamondtrap
```

----
✅ Check out [C++ Module 04](https://github.com/ricvrdv/cpp-04) - subtype polymorphism, abstract classes, and interfaces

⏪️ Go back to [C++ Module 02](https://github.com/ricvrdv/cpp-02) - function and operator overloading
