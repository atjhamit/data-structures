#include <iostream>

#define LOG(x) std::cout << x << "\n"

#pragma pack(1) // to disable padding and do packing instead

struct Struc
{
    char a;
    char c;
    int b;
    char e;
};

int main()
{
    struct Struc s;
    LOG(sizeof(s));
    return 0;
}