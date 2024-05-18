#include "Person.h"

// Constructor with default values
Person::Person()  {

    mWeight==0.0f;
    mFirstName== "";
    mAge ==0;

}

// Constructor with weight parameter
Person::Person(float newWeight)  {

 mWeight== newWeight;
 
 }

 Person::Person(string newmfirstNmae, float newWeight)

 {
 mWeight== newWeight;
 mFirstName == newmfirstNmae;


       
 }

// Destructor
Person::~Person() {


}

// Overload the + operator to add weights
float Person::operator+(const Person& otherPerson) {
    return mWeight + otherPerson.mWeight;
}
