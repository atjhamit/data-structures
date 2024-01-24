#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

void func(int n)
{
    if(n > 0)
    {
        func(n - 1);
        LOG_T(n);
    }
}

int main()
{
    int x = 3;
    func(x);
    LOG("");

    return 0;
}
