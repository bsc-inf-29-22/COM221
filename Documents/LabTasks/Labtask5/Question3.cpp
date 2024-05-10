#include <iostream>
#include <ctime>
using namespace std;

main(){
// array creation and initialization
string letter[8] = {"B123","C234","A345","C15","B17","G3003","C235","B179"};


    for (int i = 0; i < sizeof(letter) / sizeof(letter[0]); ++i) {
        // Check if the element starts with "B"
        if (letter[i][0] == 'B') {
            // Print the element if it starts with "B"
            
            cout << letter[i] << endl;
            
        }
    }




return 0;
}
