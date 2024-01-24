#include <iostream>

#define LOG_T(x)  std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

void reverseArray(int* array, int size, int i)
{
    if(i >= (size / 2))
    {
        return;
    }
    int temp = array[i];
    array[i] = array[size - i - 1];
    array[size - i - 1] = temp;
    reverseArray(array, size, i + 1);
}

void reverseArray2(int* array, int first, int second)
{
    if(first >= second)
    {
        return;
    }

    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;

    reverseArray2(array, first + 1, second - 1);
}

int main()
{
    int array[] = {5, 8, 9, 2, 4, 3, 7};
    int size = sizeof(array)/sizeof(array[0]);

    LOG("Before");
    for(int i = 0; i < size; i++)
    {
        LOG_T(array[i]);
    }
    LOG("");

    reverseArray(array, size, 0);

    LOG("After");
    for(int i = 0; i < size; i++)
    {
        LOG_T(array[i]);
    }
    LOG("");

    LOG("Before");
    for(int i = 0; i < size; i++)
    {
        LOG_T(array[i]);
    }
    LOG("");

    reverseArray2(array, 0, size - 1);

    LOG("After");
    for(int i = 0; i < size; i++)
    {
        LOG_T(array[i]);
    }
    LOG("");

    return 0;
}