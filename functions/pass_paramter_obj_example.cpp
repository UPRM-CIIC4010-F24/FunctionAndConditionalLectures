#include <iostream>
#include <string>
using namespace std;

// Person class definition
class Person {
public:
    string name;
    int age;
    bool canDrive;
    
    Person(string n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function passing object by value
void passByValue(Person p) {
    p.age += 5;  // Modifies the copy
    cout << "Inside passByValue: ";
    p.display();
}

// Function passing object by reference
void passByReference(Person &p) {
    p.age += 5;  // Modifies the original object
    cout << "Inside passByReference: ";
    p.display();
}

// Function passing object by const reference (read-only access)
void passByConstReference(const Person &p) {
    // p.age += 5;  // This line would cause a compilation error because 'p' is read-only
    cout << "Inside passByConstReference: ";
    p.display();  // Can read, but can't modify
}

int main() {
    // Create a Person object
    Person person("Alice", 30);

    cout << "Original object: ";
    person.display();

    // Pass object by value (modification is local)
    passByValue(person);
    cout << "After passByValue, original object: ";
    person.display();  // No changes to the original object

    // Pass object by reference (modification affects original object)
    passByReference(person);
    cout << "After passByReference, original object: ";
    person.display();  // Changes made to the original object

    // Pass object by const reference (read-only, no modification)
    passByConstReference(person);
    cout << "After passByConstReference, original object: ";
    person.display();  // No changes to the original object

    return 0;
}