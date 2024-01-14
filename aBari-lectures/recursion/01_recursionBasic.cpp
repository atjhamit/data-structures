#include <iostream>

#define LOG(x)      std::cout << x << "\t"
#define LOG_L(x)    std::cout << x << "\n"

void func(int n)
{
    if(n > 0)
    {
        func(n - 1);
        LOG(n);
    }
}

int main()
{
    int x = 3;
    LOG_L("xxxxxxxxxxxxxxxx");
    func(x);
    LOG_L("");

    return 0;
}
