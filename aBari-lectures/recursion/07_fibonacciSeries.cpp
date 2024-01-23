#include <iostream>

#define LOG(x)      std::cout << x << "\t"
#define LOG_L(x)    std::cout << x << "\n"

// O(N)
int iterativeFib(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n < 2)
    {
        return n;
    }
    int first = 0;
    int second = 1;
    int result = first + second;

    for(int i = 2; i <= n; i++)
    {
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}

// O(2^N)
int recursiveFib(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n < 2)
    {
        return n;
    }
    return recursiveFib(n - 2) + recursiveFib(n - 1);
}


int* memory;
// O(N)
int recursiveFibOptimized(int n)
{
    if(n < 0)
    {
        return -1;
    }
    if(n < 2)
    {
        memory[n] = n;
        return n;
    }

    if(memory[n - 2] == -1)
    {
        memory[n - 2] = recursiveFibOptimized(n - 2);
    }
    if(memory[n - 1] == -1)
    {
        memory[n - 1] = recursiveFibOptimized(n - 1);
    }

    return memory[n - 2] + memory[n - 1];
}

int main()
{
    int n = 0;
    LOG_L("enter n");
    std::cin >> n;
    memory = new int[n];

    for(int i = 0; i < n; i++)
    {
        memory[i] = -1;
    }

    LOG_L("iterative result : " << iterativeFib(n));
    LOG_L("recursive result : " << recursiveFib(n));
    LOG_L("recursive optimized result : " << recursiveFibOptimized(n));

    return 0;
}