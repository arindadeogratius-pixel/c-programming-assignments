CHAINED INHERITANCE

Chained inheritance is when a class is derived from a class that is itself derived from another class. The last class in the chain inherits the accessible members of every class above it.

Real-world example
Every manager is an employee, and every employee is a person, so the program uses three classes: Person, Employee and Manager.

Person(base class): holds 'name' and 'age', with functions to display the details and celebrate a birthday.

Employee (derived from Person): adds 'id' and 'salary', with functions to display employee details and give a raise.

Manager(derived from Employee): adds 'dept' and 'teamSize', with functions to display manager details and add a team member.

How inheritance works in the program

The Employee inherits Person's public and protected members, so it can use 'name' and 'age' directly.
 The Manager inherits from Employee, which includes everything Employee inherited from Person. This is the chain.
Constructors pass values upward using initializer lists, so Manager calls Employee, which calls Person.
A derived class can reuse its parent's functions. For example, the Manager display function calls the Employee display function, which calls the Person display function.

INHERITED VS LOCAL MEMBERS
For a Manager object:

'birthday()' is inherited from Person (the grandparent).
'giveRaise()' is inherited from Employee (the parent).
'addTeamMember()' is defined in Manager itself (local).

NOTE
 Chained inheritance models "is-a" relationships across several levels.
 Code written once in a base class is reused by every class below it.
'protected' lets derived classes access members while hiding them from outside code.


<img width="486" height="1080" alt="IMG-20261026-WA0033" src="https://github.com/user-attachments/assets/e012d742-0143-42e5-9c8c-5b99ae73204a" />

