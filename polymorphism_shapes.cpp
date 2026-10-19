//polymorphism 
#include <iostream>
#include <string>
using namespace std;
class Shape {                                  // Parent class
    string name;
public:
    Shape(string n) : name(n) {}
    virtual double area() const { return 0; }  // Virtual function
    virtual void draw() const { cout << "Drawing a shape" << endl; }
    void describe() const { cout << name << " has area " << area() << endl; }
    virtual ~Shape() {}                        // Virtual destructor
};
class Circle : public Shape {
    double r;
public:
    Circle(double x) : Shape("Circle"), r(x) {}
    double area() const override { return 3.14159 * r * r; }
    void draw() const override { cout << "Drawing a round circle" << endl; }
};
class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double a, double b) : Shape("Rectangle"), w(a), h(b) {}
    double area() const override { return w * h; }
    void draw() const override { cout << "Drawing a rectangle" << endl; }
};
class Triangle : public Shape {
    double b, h;
public:
    Triangle(double x, double y) : Shape("Triangle"), b(x), h(y) {}
    double area() const override { return 0.5 * b * h; }
    void draw() const override { cout << "Drawing a triangle" << endl; }
};
void render(const Shape& s) { s.draw(); s.describe(); }  // Base reference
int main() {
    Circle c(5); Rectangle r(4, 6); Triangle t(3, 8);
    Shape* shapes[] = {&c, &r, &t};            // Base-class pointers
    for (Shape* s : shapes) {
        s->draw(); s->describe();              // Resolved at runtime
    }
    cout << "--- Using a base-class reference ---" << endl;
    render(r);
}
