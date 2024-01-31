#include <iostream>
#include <bits/stdc++.h>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

class Solution 
{
    void combinationSumII(const std::vector<int>& origArray, const int& target, int index, std::vector<int> temp, std::vector<std::vector<int>>& result)
    {
        if(index == origArray.size())
        {
            if(target == 0)
            {
                result.push_back(temp);
            }
            return;
        }
        temp.push_back(origArray[index]);
        combinationSumII(origArray, target - origArray[index], index + 1, temp, result);
        temp.pop_back();
        combinationSumII(origArray, target, index + 1, temp, result);
    }

    void removeDuplicate(std::vector<std::vector<int>>& result)
    {
        int i = 0;
        while(i < ((int)result.size() - 1))
        {
            if(result[i] == result[i + 1])
            {
                result.erase(result.begin() + i + 1);
            }
            else
            {
                i++;
            }
        }
    }

public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) 
    {
        std::vector<std::vector<int>> result;
        std::sort(candidates.begin(), candidates.end());
        combinationSumII(candidates, target, 0, {}, result);
        std::sort(result.begin(), result.end());
        removeDuplicate(result);
        return result;
    }
};

int main()
{
   std::vector<int> origArray = {10, 1, 2, 7, 6, 1, 5};
   int target = 8;

    // won't work for this exponential
    // std::vector<int> origArray = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    // int target = 27;

    Solution obj;

    std::vector<std::vector<int>> result = obj.combinationSum2(origArray, target);

    for(const std::vector<int> line : result)
    {
        for(const int element : line)
        {
            LOG_T(element);
        }
        LOG("");
    }

    return 0;
}
