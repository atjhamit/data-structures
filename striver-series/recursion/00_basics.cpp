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

int functionalFactorial(int N)
{
    if(N < 1)
        return 1;
    return N * functionalFactorial(N - 1);
}

void parameterizedFactorial(int N, int facto)
{
    if(N < 1)
    {
        LOG_T(facto);
        return;
    }
    parameterizedFactorial(N - 1, facto * N);
}

int main()
{
    const char* name = "AMIT";
    printName(name, 5);

    LOG_T("parameterizedSum(5, 0): ");
    parameterizedSum(5, 0);
    LOG("functionalSum(5): " << functionalSum(5));
    LOG("functionalFactorial(5): " << functionalFactorial(5));
    LOG_T("parameterizedFactorial(5): ");
    parameterizedFactorial(5, 1);
    LOG("");

    return 0;
}