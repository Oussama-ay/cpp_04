# **CPP 04 :**

This module introduces advanced Object-Oriented Programming concepts in C++, focusing on polymorphism, inheritance, and interface design patterns.

## Core Concepts Covered

### 1. **Subtype Polymorphism**

- **What it is**: The ability for objects of different types to be treated as instances of the same base type
- **Key mechanism**: Virtual functions that enable runtime method resolution
- **Benefit**: Code flexibility and extensibility through common interfaces

### 2. **Abstract Classes**

- **Purpose**: Classes that cannot be instantiated directly
- **Implementation**: Using pure virtual functions (`virtual function() = 0`)
- **Use case**: Defining common interfaces for derived classes

### 3. **Interface Design**

- **Concept**: Pure abstract classes that define contracts
- **C++ Implementation**: Classes with only pure virtual functions
- **Advantage**: Multiple inheritance of interfaces without implementation conflicts

---

## Exercise Breakdown & Learning Objectives

### Exercise 00: Polymorphism

 **Objective**: Master basic polymorphism and virtual functions

**What you'll build**:

- Base `Animal` class with virtual `makeSound()` method
- Derived `Dog` and `Cat` classes with specific implementations
- Counter-example with `WrongAnimal`/`WrongCat` (non-virtual methods)

**Key Learning Points**:

- Understanding virtual function dispatch
- Difference between compile-time and runtime binding
- Proper use of virtual destructors
- Why non-virtual functions don't support polymorphism

---

### Exercise 01: Deep Copy & Memory Management

 **Objective**: Master deep copying and proper memory management in inheritance hierarchies

**What you'll build**:

- `Brain` class with dynamic memory allocation
- Enhanced `Dog` and `Cat` classes with `Brain*` members
- Proper copy constructors and assignment operators
- Array of polymorphic objects

**Key Learning Points**:

- Deep vs shallow copy distinction
- Memory leak prevention in inheritance
- Orthodox Canonical Form in derived classes
- Virtual destructor necessity

---

### Exercise 02: Abstract Classes

 **Objective**: Create non-instantiable base classes using pure virtual functions

**What you'll build**:

- Modified `Animal` class as abstract base
- Pure virtual functions preventing instantiation
- Maintained polymorphic functionality

**Key Learning Points**:

- When and why to make classes abstract
- Pure virtual function syntax and behavior
- Interface vs implementation separation
- Design patterns with abstract bases

---

### Exercise 03: Interface Design & Complex Polymorphism

 **Objective**: Implement interface-based design with multiple abstract classes

**What you'll build**:

- `AMateria` abstract base class with clone pattern
- `Ice` and `Cure` concrete implementations
- `ICharacter` interface with inventory management
- `Character` class implementing complex behavior
- `IMateriaSource` interface for factory pattern
- `MateriaSource` implementation with learning capability

**Key Learning Points**:

- Interface segregation principle
- Factory and prototype design patterns
- Complex object composition
- Multiple levels of abstraction
- Resource management in complex hierarchies

---

## Key Programming Concepts Mastered

| Concept | Description | Implementation |
| --- | --- | --- |
| **Virtual Functions** | Enable runtime polymorphism | `virtual returnType function()` |
| **Pure Virtual Functions** | Force implementation in derived classes | `virtual returnType function() = 0` |
| **Virtual Destructors** | Ensure proper cleanup in inheritance | `virtual ~ClassName()` |
| **Abstract Classes** | Non-instantiable base classes | Contains ≥1 pure virtual function |
| **Interface Classes** | Pure abstract classes defining contracts | Only pure virtual functions |
| **Deep Copy** | Copying object state including dynamic members | Custom copy constructor/assignment |
| **Clone Pattern** | Creating copies through virtual methods | `virtual Object* clone() const` |
