#include <iostream>
#include <stdio.h>

#define LOG(x) std::cout << x 
#define LOG_L(x) std::cout << x << std::endl

struct rectangle
{
    float length;
    float breadth;
    float area=0;
};

int main()
{
    struct rectangle rect_obj;
    printf("Current area of rectangle = %f", &rect_obj.area);
    printf("\nEnter the length : ");
    scanf("%f", &rect_obj.length);
    printf("\nEnter the breadth : ");
    scanf("%f", &rect_obj.breadth); 
    rect_obj.area = rect_obj.length * rect_obj.breadth;

    printf("Area of rectangle = %f", &rect_obj.area);

    return 0;
}
