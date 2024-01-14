#include <iostream>

#define LOG_L(x) std:: cout << x << "\n"

// getters and setters are also known as facilitators

class Rectangle
{
    int length;
    int breadth;

    public:
    Rectangle(int len, int width);

    Rectangle();

    int getLength();

    void area();

    void changeLength(int newLength);

    ~Rectangle();
};

Rectangle::Rectangle(int len, int width)
{
    length = len;
    breadth = width;
}

Rectangle::Rectangle()
{
    length = 0;
    breadth = 0;
}

int Rectangle::getLength() // getter or accessor
{
    return length;
}

void Rectangle::area()
{
    LOG_L("Area of rectangle: " << length * breadth);
}

void Rectangle::changeLength(int newLength) // setter or mutator
{
    length = newLength;
}

Rectangle::~Rectangle()  {}

int main()
{
    // Rectangle* rectObj = new Rectangle(5,6);
    // rectObj->area();
    // rectObj->changeLength(11);
    // rectObj->area();

    Rectangle rectObj(5,6);
    rectObj.area();
    rectObj.changeLength(11);
    rectObj.area();
    // LOG_L(rectObj.length); // cannot access private members, by default it is private
    // you could just replace class keyword with struct and use it, just that its data members would become public
    return 0;
}