#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

int powSlow(int m, int n)
{
    if(n <= 0)
    {
        return 1;
    }
    else
    {
        return m * powSlow(m, n - 1);
    }
}

int powFast(int m, int n)
{
    if(n <= 0)
    {
        return 1;
    }
    
    if(n % 2 == 0)
    {
        return powFast(m * m, n / 2);
    }
    else
    {
        return m * powFast(m * m, (n - 1) / 2);
    }
}

int main()
{
    int m = 2;
    int n = 9;

    LOG("Ans : " << powSlow(m, n));
    LOG("Ans : " << powFast(m, n));

    return 0;
}