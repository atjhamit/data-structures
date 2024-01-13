#include <iostream>
#include <stdlib.h>

#define LOG_L(x) std::cout << x << "\n"

int main()
{
    int numArgs = 0;
    LOG_L("enter the number of arguments:");
    std::cin >> numArgs;

    int *mp = (int*) malloc(numArgs * sizeof(int));
    int *np = new int[numArgs];

    LOG_L("Enter the " << numArgs << " elements:");
    for(int i = 0; i < numArgs; i++)
    {
        std::cin >> mp[i];
        np[i] = mp[i];
    }

    LOG_L("Malloc entries");
    for(int i = 0; i < numArgs; i++)
    {
        LOG_L(mp[i]);
    }

    LOG_L("new entries");
    for(int i = 0; i < numArgs; i++)
    {
        LOG_L(np[i]);
    }

    delete[] np;
    free(mp);

    return 0;
}