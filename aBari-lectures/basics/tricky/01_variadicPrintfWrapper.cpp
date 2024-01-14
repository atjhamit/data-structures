#include <iostream>
#include <stdarg.h>
#include <string>

void print(const char* sequence, ...)
{
    int numSeq = std::strlen(sequence);
    int itr = 0; // iterator for loop

    va_list argList;
    va_start(argList, sequence);

    for(itr = 0; itr < numSeq; itr++)
    {
        if(sequence[itr] == 'd')
        {
            printf("%d\n", va_arg(argList, int));
        }
        else if(sequence[itr] == 'f')
        {
            printf("%f\n", va_arg(argList, double));
        }
    } 
    va_end(argList);
}

int main1()
{
    int num_args = 3;
    int a   = 5;
    int b   = 3;
    float c = 4.5f;

    const char *seq;
    seq = (char*) malloc(sizeof(char) * num_args);

    seq = "ddf\0";
    print(seq, a, b, c);

    return 0;
}
