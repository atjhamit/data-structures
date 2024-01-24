#include <iostream>

#define LOG_T(x) std::cout << x 
#define LOG(x) std::cout << x << std::endl

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
        LOG(D[i]);
    }
    LOG("D array is done here");

    // using for each loop
    for(int i : A)
    {
        LOG(i);
    }
    LOG("A array is done here");

    LOG("size of C : " << sizeof(C));
    LOG("Element at further index, say 5 is " << C[5]);

    LOG("size of A : " << sizeof(A));

    for(i = 0; i < 5; i++)
    {
        A[i]=i;
    }

    LOG("size of B : " << sizeof(A));

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", B[i]);
    }

    return 0;
}
