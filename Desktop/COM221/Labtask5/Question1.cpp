#include <iostream>
#include <ctime>
using namespace std;

int main() {
    /* Generate a random integer values between 0 and 11*/
    srand(time(0));
    int daysUntilExpiration = rand() % 12; /* 0 to 11*/

    /* Check condition*/
    if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired" <<endl;
        
        }
        else if (daysUntilExpiration ==1) {
            cout << "Your subscription expires within a day!" <<endl;
            cout << "Renew now and save 20%!" <<endl;
           }
           else if (daysUntilExpiration <=5) {
            cout << "Your subscription expires in " << daysUntilExpiration << " day"<<endl;
            cout << "Renew now and save 10%!";
               
             }
             else if (daysUntilExpiration <=10){
                 cout << "Your subscription will expire soon. Renew now!" <<endl;
                 
        }
                else {
                 cout << "You have an active subscription."<<endl;
                
    }

    return 0;
}