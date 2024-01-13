#include <iostream>

#define LOG_L(x) std::cout << x << "\n"

void changeValue(int p, int &q)
{
    p = 5;
    q = 6;
}

int main()
{
    int a = 3;
    int b = 4;

    LOG_L("Values before changeValue call:");
    LOG_L("a: " << a);
    LOG_L("b: " << b);

    changeValue(a, b);

    LOG_L("Values after changeValue call:");
    LOG_L("a: " << a);
    LOG_L("b: " << b);
}