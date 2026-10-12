// Take-home assignment: a Rectangle class with private width and length.

#include <iostream>  

using namespace std;  
// The Rectangle 
class Rectangle {
private:     // private: only the class itself can touch these
    double width;
    double length;

public:       // public: anyone can call these functions

    Rectangle(double w = 1.0, double l = 1.0) {
        setWidth(w);     // reuse the setters so the checks apply here too
        setLength(l);
    }

    double getWidth() const { return width; }
    double getLength() const { return length; }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Invalid width " << w << ". Using 1.0 instead." << endl;
            width = 1.0;
        }
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        } else {
            cout << "Invalid length " << l << ". Using 1.0 instead." << endl;
            length = 1.0;
        }
    }

    // Calculations
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); 

int main() {
    // Example 1: create a rectangle with width 5 and length 3
    Rectangle r1(5, 3);
    cout << "Rectangle 1" << endl;
    cout << "  Width:     " << r1.getWidth() << endl;
    cout << "  Length:    " << r1.getLength() << endl;
    cout << "  Area:      " << r1.area() << endl;
    cout << "  Perimeter: " << r1.perimeter() << endl;

    // Example 2: create a rectangle with default size, then change it
    Rectangle r2;                 // starts as 1 x 1
    r2.setWidth(10);
    r2.setLength(4.5);
    cout << "\nRectangle 2 (after using the setters)" << endl;
    cout << "  Width:     " << r2.getWidth() << endl;
    cout << "  Length:    " << r2.getLength() << endl;
    cout << "  Area:      " << r2.area() << endl;
    cout << "  Perimeter: " << r2.perimeter() << endl;

    // Example 3: an invalid (negative) value is rejected
    cout << "\nRectangle 3 (testing an invalid value)" << endl;
    Rectangle r3(2, 8);
    r3.setWidth(-4);              // not allowed, so width becomes 1.0
    cout << "  Width:     " << r3.getWidth() << endl;
    cout << "  Area:      " << r3.area() << endl;

    return 0;
}
