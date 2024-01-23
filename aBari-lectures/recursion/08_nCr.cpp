#include <iostream>

#define LOG(x)      std::cout << x << "\t"
#define LOG_L(x)    std::cout << x << "\n"

int nCr(int n, int r)
{
    if((r == 0) || (r == n))
    {
        return 1;
    }
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    LOG_L("Enter n and r");
    int n, r;
    std::cin >> n >> r;

    LOG_L(n << "C" << r << ": " << nCr(n, r));

    return 0;
}