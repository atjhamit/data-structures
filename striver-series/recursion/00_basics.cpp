#include <iostream>

#define LOG(x) std::cout << x << "\n"
#define LOG_T(x) std::cout << x << "\t"

void printName(const char* name, int n)
{
    if(n > 0)
    {
        LOG(name);
        printName(name, n - 1);
    }
}

void parameterizedSum(int i, int sum)
{
    if(i < 1)
    {
        LOG(sum);
        return;
    }
    parameterizedSum(i - 1, sum + i);
}

int functionalSum(int N)
{
    if(N < 1)
        return 0;
    return N + functionalSum(N - 1);
}

int main()
{
    const char* name = "AMIT";
    printName(name, 5);

    LOG_T("parameterizedSum(5, 0): ");
    parameterizedSum(5, 0);
    LOG("functionalSum(5): " << functionalSum(5));

    return 0;
}