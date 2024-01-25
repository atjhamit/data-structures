#include <iostream>
#include <vector>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

// Time : O(2^n * n for printing)
// Space : O(n) since stack depth is similar to origArray size
int generateSubsequence(int index, const std::vector<int>& origArray, int k, int sum)
{
    if(index >= origArray.size())
    {
        if(k == sum)
        {
            return 1;
        }
        return 0;
    }
    return generateSubsequence(index + 1, origArray, k, sum + origArray[index]) +
            generateSubsequence(index + 1, origArray, k, sum);
}

int main()
{
    const std::vector<int> origArray = {1, 2, 1};
    LOG("Count : " << generateSubsequence(0, origArray, 2, 0));

    return 0;
}
