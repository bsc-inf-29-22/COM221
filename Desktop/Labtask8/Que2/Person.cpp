// Person.cpp

#include "Person.h"
#include <iostream>

// Default constructor
Person::Person() : mFirstName(""), mWeight(0.0), mAge(0) {
    // Initialization of members can also be done in the body if needed
}

// Parameterized constructor
Person::Person(string newName, float newWeight, int newAge) 
    : mFirstName(newName), mWeight(newWeight), mAge(newAge) {
    // Initialization of members with given parameters
}

// Destructor
Person::~Person() {
    // Any necessary cleanup can be done here
}

// Overload the add operator
float Person::operator + (const Person& otherPerson) {
    // Adds the weights of the two Person objects
    return this->mWeight + otherPerson.mWeight;
}
