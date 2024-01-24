#include <iostream>

#define LOG(x) std:: cout << x << "\n"

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(Rectangle* obj, int len, int width)
{
    obj->length = len;
    obj->breadth = width;
}

void area(Rectangle* obj)
{
    LOG("Area of rectangle: " << obj-> length * obj->breadth);
}

void changeLength(Rectangle* obj, int newLength)
{
    obj->length = newLength;
}

int main()
{
    Rectangle* rectObj = new Rectangle;
    initialize(rectObj, 5, 6);
    area(rectObj);
    changeLength(rectObj, 11);
    area(rectObj);

    return 0;
}