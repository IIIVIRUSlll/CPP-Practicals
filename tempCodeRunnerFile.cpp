#include<iostream>
using namespace std;

class MyClass {
    int* data;  // Pointer to dynamically allocate memory
public:
    // Constructor to allocate memory
    MyClass(int value) {
        data = new int(value);  // Dynamically allocate memory
        cout << "Constructor: Memory allocated." << endl;
    }

    // Destructor to free memory
    ~MyClass() {
        delete data;  // Free the dynamically allocated memory
        cout << "Destructor: Memory deallocated." << endl;
    }

    // Function to display the value
    void display() {
        cout << "Data: " << *data << endl;
    }
};

int main() {
    MyClass obj(10);  // Constructor is called
    obj.display();    // Display the value stored in dynamically allocated memory
    
    // When the object goes out of scope (end of the main function), 
    // the destructor is called to clean up memory automatically.
    return 0;
}
