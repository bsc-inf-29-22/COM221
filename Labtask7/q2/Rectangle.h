#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
using namespace std;

class Rectangle{
private:
    float width;
    float length;


public:
    Rectangle();
    Rectangle(const float length, float width);
    ~Rectangle();



// member functions
    void SetLength(const float& length);
    float GetLength();
    void SetWidth(float width);
    float GetWidth() ;
    float AreaOfRectangle(); 

};
#endif
