#include <iostream>

#define LOG_T(x) std::cout << x 
#define LOG(x) std::cout << x << std::endl

int main()
{
    int size = 0;
    LOG("Enter the size of the array: ");
    std::cin >> size;

    // remember that variable size arrays cannot be initialized
    // such as int A[size_from_user] = {1,2,3};
    int A[size];
    int i = 0;

    for(i = 0; i < size; i++)
    {
        LOG("Enter the value at index : " << i);
        std::cin >> A[i];
    }

    LOG("Displaying the elements in variable size array A");
    for(int element : A)
    {
        LOG(element);
    }

    return 0;
}
