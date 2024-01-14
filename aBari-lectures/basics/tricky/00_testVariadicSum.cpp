#include <iostream>
#include <stdarg.h>

int sum(int num_args, ...)
{
    va_list variable_list;
    va_start(variable_list, num_args);

    int i = 0;
    int sum = 0;

    for(; i < num_args; i++)
    {
        sum += va_arg(variable_list, int);
    }

    va_end(variable_list);

    return sum;
}

int main1()
{
    int a = 5;
    int b = 6;
    int c = 10;
    int num_args = 3; // total number of arguments a, b, c -> 3

    printf("sum = %d\n", sum(num_args, a, b, c));
    return 0;
}
