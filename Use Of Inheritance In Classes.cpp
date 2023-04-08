#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    void makeSound() {
        cout << "The Animal makes a sound." << endl;
    }
};

// Child class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "The Dog barks." << endl;
    }
};

// Child class inheriting from Animal
class Cat : public Animal {
public:
    void meow() {
        cout << "The Cat meows." << endl;
    }
};

int main() {
    // Create objects of the child classes
    Dog dog1;
    Cat cat1;

    // Call methods from parent class and child classes
    dog1.makeSound(); // Output: The Animal makes a sound.
    dog1.bark(); // Output: The Dog barks.

    cat1.makeSound(); // Output: The Animal makes a sound.
    cat1.meow(); // Output: The Cat meows.

    return 0;
}
