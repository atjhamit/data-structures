#include <iostream>

#define LOG(x) std::cout << x 
#define LOG_L(x) std::cout << x << std::endl

int main()
{
    int size = 0;
    LOG_L("Enter the size of the array: ");
    std::cin >> size;

    // remember that variable size arrays cannot be initialized
    // such as int A[size_from_user] = {1,2,3};
    int A[size];
    int i = 0;

    for(i = 0; i < size; i++)
    {
        LOG_L("Enter the value at index : " << i);
        std::cin >> A[i];
    }

    LOG_L("Displaying the elements in variable size array A");
    for(int element : A)
    {
        LOG_L(element);
    }

    return 0;
}
