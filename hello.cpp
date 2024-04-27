#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Calling function from the base class
    myDog.bark(); // Calling function from the derived class
    return 0;
}
