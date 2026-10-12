 RECTANGLE WITH PRIVATE MEMBERS
 1. WHAT THE PROGRAM DOES 

The program defines a 'Rectangle' class that stores a width and a length, and can calculate its area and perimeter. The 'main' function creates three rectangles to show how the class is used.

2. LIBRARY USED 

 '<iostream>': provides 'cout', which prints text and numbers to the screen.
The line 'using namespace std;' lets us write 'cout' and 'endl' instead of 'std::cout' and 'std::endl'.

3. THE 'RECTANGLE' CLASS 

A class is a blueprint. Each object made from it (such as 'r1') gets its own width and length.

 PRIVATE MEMBERS (HIDDEN DATA)

 'width' ('double'): the width of the rectangle.
 'length' ('double'): the length of the rectangle.

They are 'private', so code outside the class cannot change them directly. It must use the public functions. This protects the data from invalid values.

 PUBLIC MEMBER FUNCTIONS 

'Rectangle(double w = 1.0, double l = 1.0)':It runs when an object is created and sets the starting width and length. If no values are given, both are 1.0.
'getWidth()':It returns the width.
'getLength()' : It returns the length.
'setWidth(double w)':It changes the width, but only if 'w' is greater than 0. Otherwise it prints a message and uses 1.0.
'setLength(double l)':It works like `setWidth`, but for the length.
'area()': returns 'width * length'
'perimeter()': returns '2 * (width + length)'

The word 'const' after a function name (for example 'getWidth() const') promises that the function only reads the data and does not change it.

4 THE 'main' FUNCTION 

Example 1
Rectangle r1(5, 3): creates an object with starting values, then reads them with getters and calculates the area and perimeter.
Example 2 
Rectangle r2: creates an object with the default 1 x 1 size, then changes it with 'setWidth(10)' and 'setLength(4.5)'
Example 3 
Rectangle r3(2, 8); then 'r3.setWidth(-4);': shows that an invalid negative width is rejected, so the width becomes 1.0.

