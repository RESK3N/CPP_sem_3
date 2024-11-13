/* Write a program in C to implement default constructor,
 parameterised constructor, copy constructor,
 constructor with default arguments and destructor */
#include <iostream>
using namespace std;

class Demo {
    int a, b;

public:
    // Default constructor
    Demo() {
        a = 0;
        b = 0;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Demo(int x, int y) {
        a = x;
        b = y;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Demo(const Demo &obj) {
        a = obj.a;
        b = obj.b;
        cout << "Copy constructor called." << endl;
    }

    // Constructor with default arguments
    Demo(float x, int y = 10) {
        a = x;
        b = y;
        cout << "Constructor with default arguments called." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for object with a = " << a << " and b = " << b << endl;
    }

    // Function to display values of a and b
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    // Using the default constructor
    Demo obj1;
    obj1.display();

    // Using the parameterized constructor
    Demo obj2(5, 15);
    obj2.display();

    // Using the constructor with default arguments
    Demo obj3(20.0);  // Here, b will take the default value of 10
    obj3.display();

    // Using the copy constructor
    Demo obj4(obj2);
    obj4.display();

    return 0;
}
