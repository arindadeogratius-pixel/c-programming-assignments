POLYMORPHISM

Polymorphism means "many forms": the same function call behaves differently depending on the type of object it is called on. In C++, runtime polymorphism is achieved with virtual functions and base-class pointers or references.

Real-world example
A drawing application handles many kinds of shapes. Each shape must be drawn and measured differently, but the program wants to treat them all the same way.

Shape: (parent class): has the virtual functions 'area()' and 'draw()', plus a 'describe()' function that prints the shape's area.

Circle: Rectangle and Triangle (derived classes): each overrides 'area()' and 'draw()' with its own formula and message.

HOW IT WORKS IN PROGRAM
A function marked 'virtual' in the parent can be overridden in derived classes, and the 'override' keyword lets the compiler check this.
 The program stores the addresses of a Circle, a Rectangle and a Triangle in an array of Shape pointers.

Calling 's->draw()' on each pointer runs the version belonging to the real object, not the pointer's type. This choice is made at runtime using the virtual table (vtable).

A function taking a 'const Shape&' also works for any derived object, which shows polymorphism through a reference.

The base class has a virtual destructor so that derived objects are cleaned up correctly when deleted through a base pointer.
Same call, different behaviour

The call 's->draw()' is identical every time, yet it prints a circle message, a rectangle message or a triangle message. Even 'describe()', which is defined only in Shape, prints a different area because it calls the virtual 'area()'.
<img width="3024" height="4032" alt="20261026_190011" src="https://github.com/user-attachments/assets/fe6f1637-9ea4-4415-929b-fe873d1f049e" />


