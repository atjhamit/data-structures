#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

int factorial(int n)
{
    if(n < 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n = 5;
    LOG("Factorial of 5 : " << factorial(n));

    return 0;
}
