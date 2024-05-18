#include <iostream>
#include "Person.h"
using namespace std;


int main() {
    // Create two Person objects
    Person Jane("Jane");
    Person John("John");

    // Check if they have the same first name
    if (Jane == John)
        std::cout << "This is the same person" << std::endl;
    else
        std::cout << "This is NOT the same person" << std::endl;

    return 0;
}