#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    Person Jane   Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);
    if (John == Jane){
        cout << "this is the same person"<<endl;
    }
     if (John != John ){
         cout << "This is not the same person"<<endl;
     }
     if (Jane < John){
         cout<< "Jane is younger than john"<<endl;
     }
     if (John > Jane){
         cout<< "John is older than jane" <<endl;
     }

//    Person John = Person("John", 75.0f);
     float totalWeight = Jane + John;

    cout << "Total weight: " << totalWeight << endl;

    return 0;
}
