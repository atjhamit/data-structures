#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

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
    LOG("Enter n and r");
    int n, r;
    std::cin >> n >> r;

    LOG(n << "C" << r << ": " << nCr(n, r));

    return 0;
}