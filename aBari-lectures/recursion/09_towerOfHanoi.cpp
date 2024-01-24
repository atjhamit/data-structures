#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

void TOH(int n, char a, char b, char c)
{
    if(n > 0)
    {
        TOH(n - 1, a, c, b);
        LOG(a << " -> " << c);
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    int n = 3;
    char a = 'A';
    char b = 'B';
    char c = 'C';

    TOH(n, a, b, c);

    return 0;
}