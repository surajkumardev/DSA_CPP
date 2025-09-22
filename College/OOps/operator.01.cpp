#include <iostream>
using namespace std;

class complex {
private:
    float r, i;   // real and imaginary parts
public:
    // Parameterized constructor
    complex(float r, float i) {
        this->r = r;
        this->i = i;
    }

    // Default constructor
    complex() {
        r = 0;
        i = 0;
    }

    // Display function
    void displaydata() {
        cout << "real part = " << r << endl;
        cout << "imaginary part = " << i << endl;
    }

    // Operator overloading for +
    complex operator+ (complex c) {
        return complex(r + c.r, i + c.i);
    }
};

int main() {
    complex a(2, 3);    // first complex number
    complex b(3, 4);    // second complex number
    complex c = a + b;  // operator overloading in action
    c.displaydata();    // display result
    return 0;
}

