# Chained (Multilevel) Inheritance in C++

## What it is

Chained inheritance is when a class is derived from a class that is itself derived from another class. The last class in the chain inherits the accessible members of every class above it.

## Real-world example

Every manager is an employee, and every employee is a person, so the program uses three classes: Person, Employee and Manager.

- **Person** (base class): holds `name` and `age`, with functions to display the details and celebrate a birthday.
- **Employee** (derived from Person): adds `id` and `salary`, with functions to display employee details and give a raise.
- **Manager** (derived from Employee): adds `dept` and `teamSize`, with functions to display manager details and add a team member.

## How inheritance works in the program

- Employee inherits Person's public and protected members, so it can use `name` and `age` directly.
- Manager inherits from Employee, which includes everything Employee inherited from Person. This is the chain.
- Constructors pass values upward using initializer lists, so Manager calls Employee, which calls Person.
- A derived class can reuse its parent's functions. For example, the Manager display function calls the Employee display function, which calls the Person display function.

## Inherited vs local members

For a Manager object:

- `birthday()` is inherited from Person (the grandparent).
- `giveRaise()` is inherited from Employee (the parent).
- `addTeamMember()` is defined in Manager itself (local).

## Hand-drawn illustrations to include

1. **Inheritance chain:** three boxes stacked vertically (Person at the top, Employee in the middle, Manager at the bottom), each listing its data members and functions, with upward arrows from child to parent.
2. **Object layout:** one large box labelled Manager, containing a smaller Employee box, which in turn contains a smaller Person box.
3. **Access diagram:** next to each class, list which functions its objects can call, showing that Manager objects can call everything.

## Compile and run

Compile with `g++ -std=c++11 chained_inheritance.cpp -o chained_inheritance`, then run `./chained_inheritance`.

## Key takeaways

- Chained inheritance models "is-a" relationships across several levels.
- Code written once in a base class is reused by every class below it.
- `protected` lets derived classes access members while hiding them from outside code.
