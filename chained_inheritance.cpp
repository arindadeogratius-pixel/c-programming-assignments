// Chained inheritance: Person -> Employee -> Manager
#include <iostream>
#include <string>
using namespace std;
class Person {                       // Level 1
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}
    void displayPerson() const { cout << "Name: " << name << ", Age: " << age << endl; }
    void birthday() { age++; cout << name << " is now " << age << endl; }
};
class Employee : public Person {     // Level 2
protected:
    int id;
    double salary;
public:
    Employee(string n, int a, int i, double s) : Person(n, a), id(i), salary(s) {}
    void displayEmployee() const {
        displayPerson();             // inherited from Person
        cout << "ID: " << id << ", Salary: $" << salary << endl;
    }
    void giveRaise(double pct) {
        salary += salary * pct / 100;
        cout << name << " got a " << pct << "% raise: $" << salary << endl;
    }
};
class Manager : public Employee {    // Level 3
    string dept;
    int teamSize;
public:
    Manager(string n, int a, int i, double s, string d, int t)
        : Employee(n, a, i, s), dept(d), teamSize(t) {}
    void displayManager() const {
        displayEmployee();           // inherited from Employee
        cout << "Dept: " << dept << ", Team: " << teamSize << endl;
    }
    void addTeamMember() { teamSize++; cout << name << "'s team: " << teamSize << endl; }
};

int main() {
    Person p("Alice", 30);
    p.displayPerson();
    p.birthday();
    Employee e("Bob", 28, 101, 50000);
    e.displayEmployee();
    e.giveRaise(10);                 // Employee's own function
    Manager m("Carol", 40, 201, 90000, "Engineering", 8);
    m.birthday();                    // inherited from Person
    m.giveRaise(5);                  // inherited from Employee
    m.addTeamMember();               // Manager's own function
    m.displayManager();
}
