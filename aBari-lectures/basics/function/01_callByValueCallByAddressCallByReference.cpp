#include <iostream>

#define LOG_T(x) std::cout << x 
#define LOG(x) std::cout << x << std::endl

void callByValue(int val1, int val2)
{
    int temp    = val1;
    val1        = val2;
    val2        = temp;

    LOG("==Call By Value==");
    LOG("val1 = " << val1);
    LOG("val2 = " << val2);
}

void callByAddress(int* pVal1, int* pVal2)
{
    int temp    = *pVal1;
    *pVal1      = *pVal2;
    *pVal2      = temp;

    LOG("==Call By Address==");
}

void callByReference(int &val1, int &val2)
{
    int temp    = val1;
    val1        = val2;
    val2        = temp;

    LOG("==Call By Reference==");
}

int main()
{
    int value1 = 3;
    int value2 = 4;

    LOG("Original values:\nvalue1 = " << value1 << ", value2 = " << value2);

    callByValue(value1, value2);

    // resetting to original values
    value1 = 3;
    value2 = 4;

    callByAddress(&value1, &value2);
    LOG("value1 = " << value1 << ", value2 = " << value2);

    // resetting to original values
    value1 = 3;
    value2 = 4;

    callByReference(value1, value2);
    LOG("value1 = " << value1 << ", value2 = " << value2);

    return 0;
}
