#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

bool isPalindrome(const char* array, int i, int size)
{
    if(i >= (size / 2))
    {
        return true;
    }

    return ((array[i] == array[size - i - 1]) &&
            isPalindrome(array, i + 1, size));
}

int main()
{
    const char* array = "madbm";
    int size = 5;

    if(isPalindrome(array, 0, 5))
    {
        LOG("Yes Palindrome");
    }
    else
    {
        LOG("Not Palindrome");
    }

    return 0;
}