#include <iostream>
#include <stdlib.h>

#define LOG(x) std::cout << x << "\n"
struct Rectangle
{
    int len;
    int br;
    int ar;
};

int main()
{
    // struct keyword is no longer needed in c++ during structure variable declaration
    // struct Rectangle *ptr = (struct Rectangle*) malloc(sizeof(struct Rectangle));
    Rectangle *ptr = (Rectangle*) malloc(sizeof(struct Rectangle));
    ptr-> len   = 4;
    ptr-> br    = 5;

    // struct Rectangle *nptr = new struct Rectangle[1];
    // struct keyword is no longer needed in c++ during structure variable declaration
    // Rectangle *nptr = new Rectangle[1];
    // or
    Rectangle *nptr = new Rectangle;
    nptr-> len  = 6;
    nptr-> br   = 5;

    ptr->ar     = ptr->len * ptr->br;
    nptr->ar    = nptr->len * nptr->br; 

    LOG("Area of malloc rect : " << ptr->ar);
    LOG("Area of new rect : " << nptr->ar);

    LOG(sizeof(ptr));
    LOG(sizeof(nptr));
    return 0;
}