#include <iostream>

#define LOG_L(x) std::cout << x << "\n"

#pragma pack(1) // to disable padding and do packing instead

struct Struc
{
    char a;
    char c;
    int b;
    char e;
};

int main1()
{
    struct Struc s;
    LOG_L(sizeof(s));
    return 0;
}