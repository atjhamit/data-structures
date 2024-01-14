#include <iostream>

#define LOG_L(x) std::cout << x << "\n"

void changeValue(int p, int &q)
{
    p = 5;
    q = 6;

    int k = 9;
    // here q is taking the value of k, q is still the nickname of b only, nickname is only set once!
    // that is why you must do declaration and initialization of reference in a single line itself and it cannot be changed later
    q = k; 
    
}

int main1()
{
    int a = 3;
    int b = 4;

    LOG_L("Values before changeValue call:");
    LOG_L("a: " << a);
    LOG_L("b: " << b);

    changeValue(a, b);

    LOG_L("Values after changeValue call:");
    LOG_L("a: " << a);
    LOG_L("b: " << b);
}