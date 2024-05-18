


#include "Rectangle.h"
#include <iostream>
using namespace std;

int main(){
    float length;
    float width;
    
    cout <<"Enter value of length"<<endl;
    cin>> length;
    cout <<"Enter value of width"<<endl;
    cin>> width;
Rectangle rectangle = Rectangle(length, width);

rectangle.AreaOfRectangle();
cout<<"The newly created area of rectangle is: "<<rectangle.AreaOfRectangle()<<endl;



return 0;

}
