#include <iostream>
#include <string>
using namespace std;

int main(){
//Dynamically allocate integer
int*dynamicInt = new int;

//Dynamically allocate string
string*dynamicString = new string;

//prompt the user to enter integer value
cout <<"Enter an integer value: ";
cin >>*dynamicInt;


//prompt the user to enter a string
cout <<"Enter a string: ";
cin >>*dynamicString;

//Display the results onto the console
cout <<"The value of the dynamically allocated integer is: "<< *dynamicInt<<endl;
cout <<"The value of the dynamically allocated string is: "<< *dynamicString<<endl;

 // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;
    
    return 0;

}