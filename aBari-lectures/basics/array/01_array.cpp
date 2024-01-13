#include <iostream>

#define LOG(x) std::cout << x 
#define LOG_L(x) std::cout << x << std::endl

int main()
{
    int A[5] = {1,2};
    int i;
    int B[] = {1, 2, 3, 4, 5};
    int C[10] = {1,2,4};

    // initialize entire array with 0
    int D[5] = {0};

    for(i = 0; i < (sizeof(D)/sizeof(D[0])); i++)
    {
        LOG_L(D[i]);
    }
    LOG_L("D array is done here");

    // using for each loop
    for(int i : A)
    {
        LOG_L(i);
    }
    LOG_L("A array is done here");

    LOG_L("size of C : " << sizeof(C));
    LOG_L("Element at further index, say 5 is " << C[5]);

    LOG_L("size of A : " << sizeof(A));

    for(i = 0; i < 5; i++)
    {
        A[i]=i;
    }

    LOG_L("size of B : " << sizeof(A));

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", B[i]);
    }

    return 0;
}
