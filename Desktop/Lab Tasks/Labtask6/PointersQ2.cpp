#include <iostream>
using namespace std;

int main(){
int rows,columns;

//prompt the user to enter the Two Dimensions of an array
cout <<"Enter the number of rows (not exceed 3): ";
cin >>rows;

if (rows <=0 || rows >3){
cout <<"Invalid number of rows Please enter value between 1 and 3"<<endl;
return 1;

}

cout <<"Enter the number of columns (not exceed 3): ";
cin >>columns;

if (columns <=0 || columns >3){
cout <<"Invalid number of columns Please enter number between 1 and 3"<<endl;
return 1;
}
//dynamically allocate memory for the two dimensional array,Array of pointers
double**dynamicArray = new double*[rows];

for (int i = 0; i < rows; ++i){
dynamicArray[i] = new double[columns];

//prompt the user to enter values of 2D array
cout << "Enter values for the " << rows << "x" << columns << " 2D array:" <<endl;

for (int i = 0; i < rows; ++i){
   for (int j = 0; j < rows; ++j){

cout<<"Enter values for an element of  ("<< i << ", " << j <<"): ";
cin>>dynamicArray[i][j];

   }
}

// Display the values of the 2D array
    cout << "Values of the dynamically allocated 2D array:" <<endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout <<endl;
    }

} 
// Free the dynamically allocated memory
    for (int i = 0; i < rows; ++i) {
    delete[] dynamicArray[i]; // Free memory for each row
    }
    delete[] dynamicArray; // Free memory for the array of pointers

    return 0;
    
}