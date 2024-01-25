#include <iostream>
#include <vector>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

// Time : O(2^n * n for printing)
// Space : O(n) since stack depth is similar to origArray size
void generateSubsequence(int index, const std::vector<int>& origArray, std::vector<int> tempArray)
{
    if(index >= origArray.size())
    {
        for(const int& i : tempArray)
        {
            LOG_T(i);
        }
        LOG("");
        return;
    }
    tempArray.push_back(origArray[index]);
    generateSubsequence(index + 1, origArray, tempArray);
    tempArray.pop_back();
    generateSubsequence(index + 1, origArray, tempArray);
}

int main()
{
    const std::vector<int> origArray = {3, 1, 2};
    generateSubsequence(0, origArray, {});

    return 0;
}
