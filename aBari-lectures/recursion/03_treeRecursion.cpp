#include <iostream>

#define LOG(x)      std::cout << x << "\t"
#define LOG_L(x)    std::cout << x << "\n"

void func(int n)
{
    if(n > 0)
    {
        LOG(n);
        func(n - 1);
        func(n - 1);
    }
}

int main()
{
    int x = 3;
    func(x);

    return 0;
}