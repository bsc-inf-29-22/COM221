

#include<iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

void Rectangle::SetLength(const float& newlength){
    length = newlength;
}

float Rectangle::GetLength(){
    return length;
}

void Rectangle::SetWidth(float newwidth){
    width = newwidth;
}

float Rectangle::GetWidth(){
    return width;
}

float Rectangle::AreaOfRectangle(){

    float area = length*width;
    return area;
}


Rectangle::~Rectangle(){
}




