#include "Person.h"

Person::Person() : mWeight(0), mFirstName(""), mAge(0) {}

Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {}

Person::~Person() {}

float Person::operator + (const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}
float Person::operator == (const Person& otherPerson) {
    return mWeight ;
}
float Person::operator != (const Person& otherPerson) {
    return mWeight ;
}
