#include <iostream>
#include <vector>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

// Time : O(2^n * n for printing)
// Space : O(n) since stack depth is similar to origArray size
bool generateSubsequence(int index, const std::vector<int>& origArray, std::vector<int> tempArray, int k, int sum)
{
    if(index >= origArray.size())
    {
        if(k == sum)
        {
            for(const int& i : tempArray)
            {
                LOG_T(i);
            }
            LOG("");
            return true;
        }
        return false;
    }
    tempArray.push_back(origArray[index]);
    if(generateSubsequence(index + 1, origArray, tempArray, k, sum + origArray[index]) == true)
    {
        return true;
    }

    tempArray.pop_back();

    if(generateSubsequence(index + 1, origArray, tempArray, k, sum) == true)
    {
        return true;
    }
    return false;
}

int main()
{
    const std::vector<int> origArray = {1, 2, 1};
    generateSubsequence(0, origArray, {}, 2, 0);

    return 0;
}
