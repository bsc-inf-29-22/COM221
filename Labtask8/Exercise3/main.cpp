#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    // Assuming you've overloaded the + operator for Person
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;

    return 0;
}
