

// Shapes.cpp
#include "Shapes.h"

namespace shapes {

// Square implementation
Square::Square() {
 side =0;

}
Square::Square(int side) : side(side) {

}
void Square::setSide(int side) { 
    this->side = side; 
    }
int Square::getSide() const { 
    return side; 
    }
Square::~Square() {


}

// Triangle implementation
Triangle::Triangle() {
    base = 0;
    height=0;
}

Triangle::Triangle(int newbase, int newheight){

 base = newbase;
 height = newheight;

} 
void Triangle::setBase(int newbase) {
     base = newbase;

      }
int Triangle::getBase() const {
    
    
     return base;
     
     
      }
void Triangle::setHeight(int newheight) {
    
    
     height = newheight; 
     
     }
int Triangle::getHeight() const {
    
     return height;
       }
Triangle::~Triangle() {

}

// Circle implementation
Circle::Circle(){ 
    radius= 0;
    
    
}
Circle::Circle(int newradius) {
    radius = newradius;

}
void Circle::setRadius(int newradius) { 
    
    
    radius = newradius;
    
    
     }
int Circle::getRadius() const {
     return radius; 
     
     
     }

Circle::~Circle() {




}

// Area implementation
int Area::areaOfSquare(const Square& s) {

    return s.getSide() * s.getSide();


}
double Area::areaOfTriangle(const Triangle& t) {

    return 0.5 * t.getBase() * t.getHeight();


}
double Area::areaOfCircle(const Circle& c) {

    const double pi = 3.14159;
    return pi * c.getRadius() * c.getRadius();
}



} // namespace shapes


