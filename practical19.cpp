#include <iostream>
using namespace std;

class Polar {
private:
    int radius;
    int angle;

public:
    // Default constructor
    Polar(){
        cout << "Default constructor called!" << endl;
    }

    // Parameterized constructor
    Polar(int radius, int angle){
        cout << "Parameterized constructor called!" << endl;
    }

    // Copy constructor
    Polar(const Polar &p){
        cout << "Copy constructor called!" << endl;
    }

    // Function to display the polar coordinates
    void display(){
        cout << "Radius: " << radius << ", Angle: " << angle << " degrees" << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    Polar p1;
    p1.display();

    // Creating an object using the parameterized constructor
    Polar p2(10,5);
    p2.display();

    // Creating an object using the copy constructor
    Polar p3(p2);
    p3.display();

    return 0;
}

