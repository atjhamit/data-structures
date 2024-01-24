#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

int func(int n)
{
    static int x = 0;
    if(n > 0)
    {
        x++;
        return func(n - 1) + x;
    }
    return 0;
}

int main()
{
    int x = 5;
    LOG("final value : " << func(5));

    return 0;
}