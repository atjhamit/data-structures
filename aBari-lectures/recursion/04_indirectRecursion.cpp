#include <iostream>

#define LOG(x)      std::cout << x << "\t"
#define LOG_L(x)    std::cout << x << "\n"

void funcB(int);

void funcA(int n)
{
    if(n > 0)
    {
        LOG_L(n);
        funcB(n - 1);
    }
}

void funcB(int n)
{
    if(n > 1)
    {
        LOG_L(n);
        funcA(n / 2);
    }
}

int main()
{
    int n = 20;
    funcA(n);

    return 0;
}