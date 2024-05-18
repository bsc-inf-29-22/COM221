


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
Rectangle rectangle;

rectangle.SetLength(length);
rectangle.SetWidth(width);

rectangle.AreaOfRectangle();
cout<<"The area of rectangle is: "<<rectangle.AreaOfRectangle()<<endl;



return 0;

}
