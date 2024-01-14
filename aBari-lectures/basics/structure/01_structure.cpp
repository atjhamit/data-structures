#include <iostream>

#define LOG(x) std::cout << x 
#define LOG_L(x) std::cout << x << std::endl

struct rectangle
{
    int length;
    int breadth;
    float area;
    char a;
};

int main1()
{
    struct rectangle rect_obj;
    printf("Current area of rectangle = %f", rect_obj.area);

    printf("\nEnter the length : ");
    scanf("%d", &rect_obj.length);
    printf("\nEnter the breadth : ");
    scanf("%d", &rect_obj.breadth); 

    rect_obj.area = rect_obj.length * rect_obj.breadth;
    printf("Area of rectangle = %f\n", rect_obj.area);
    printf("Size of rect_obj:%lu\n", sizeof(rect_obj));

    return 0;
}
