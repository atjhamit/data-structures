#include <iostream>
#include <stdlib.h>

#define LOG(x) std::cout << x << "\n"

int main()
{
    int numArgs = 0;
    LOG("enter the number of arguments:");
    std::cin >> numArgs;

    int *mp = (int*) malloc(numArgs * sizeof(int));
    int *np = new int[numArgs];

    LOG("Enter the " << numArgs << " elements:");
    for(int i = 0; i < numArgs; i++)
    {
        std::cin >> mp[i];
        np[i] = mp[i];
    }

    LOG("Malloc entries");
    for(int i = 0; i < numArgs; i++)
    {
        LOG(mp[i]);
    }

    LOG("new entries");
    for(int i = 0; i < numArgs; i++)
    {
        LOG(np[i]);
    }

    delete[] np;
    free(mp);

    return 0;
}