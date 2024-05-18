#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Generating a random integer values between 0 and 11
    srand(time(0));
    int daysUntilExpiration = rand() % 12 ;

    // Checking  condition using switch statement 
    switch (daysUntilExpiration) {
        // zero day
        case 0:
            cout << "Your subscription has expired" << endl;
            break;
            // exact one day
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
            // 5 days or less
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " day" << endl;
            cout << "Renew now and save 10%!";
            break;
            // 10 days or less
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
        
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}
