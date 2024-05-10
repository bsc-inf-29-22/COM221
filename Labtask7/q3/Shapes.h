// Shapes.h
#ifndef SHAPES_H
#define SHAPES_H

namespace shapes {

class Square {
private:
    int side;
public:
    Square();
    Square(int side);
    void setSide(int side);
    int getSide() const;
    ~Square();
};

class Triangle {
private:
    int base;
    int height;
public:
    Triangle();
    Triangle(int base, int height);
    void setBase(int base);
    int getBase() const;
    void setHeight(int height);
    int getHeight() const;
    ~Triangle();
};

class Circle {
private:
    int radius;
public:
    Circle();
    Circle(int radius);
    void setRadius(int radius);
    int getRadius() const;
    ~Circle();
};

class Area {
public:
    static int areaOfSquare(const Square& s);
    static double areaOfTriangle(const Triangle& t);
    static double areaOfCircle(const Circle& c);
};

} // namespace shapes
#endif // SHAPES_H