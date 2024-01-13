#include <iostream>

#define LOG(x) std::cout << x 
#define LOG_L(x) std::cout << x << std::endl

void printArray(int* array, int sizeArray)
{
    for(int i = 0; i < sizeArray; i++)
    {
        LOG(array[i] << "\t");
    }

    LOG_L("");
}

int* fetchArray(int sizeArray)
{
    int *arr = new int[sizeArray];
    for(int i = 0; i < sizeArray; i++)
    {
        arr[i] = i+1;
    }
    return arr;
}

int main()
{
    int sizeArray = 3;
    int arr[] = {1, 2, 3};

    printArray(arr, sizeArray);

    int* array = fetchArray(sizeArray);

    for(int i = 0; i < sizeArray; i++)
    {
        LOG(array[i] << "\t");
    }

    LOG_L("");
    return 0;
}
