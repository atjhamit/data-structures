#include <iostream>
#include <bits/stdc++.h>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

class Solution 
{
    void combinationSumII(const std::vector<int>& origArray, int target, int index, std::vector<int> temp, std::vector<std::vector<int>>& result)
    {
        if(target == 0)
        {
            result.push_back(temp);
            return;
        }

        for(int i = index; i < origArray.size(); i++)
        {
            if((i != index) && (origArray[i] == origArray[i - 1]))
            {
                continue;
            }
            if(target - origArray[i] >= 0)
            {
                temp.push_back(origArray[i]);
                combinationSumII(origArray, target - origArray[i], i + 1, temp, result);
                temp.pop_back();
            }
            else
            {
                break;
            }
        }
    }

public:
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target) 
    {
        std::vector<std::vector<int>> result;
        std::sort(candidates.begin(), candidates.end());

        combinationSumII(candidates, target, 0, {}, result);
        return result;
    }
};

int main()
{
   // std::vector<int> origArray = {10, 1, 2, 7, 6, 1, 5};
   // int target = 8;

    // std::vector<int> origArray = {1, 1, 1, 2, 2};
    // int target = 4;

    std::vector<int> origArray = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int target = 27;

    Solution obj;

    std::vector<std::vector<int>> result = obj.combinationSum2(origArray, target);

    for(const std::vector<int>& line : result)
    {
        for(const int& element : line)
        {
            LOG_T(element);
        }
        LOG("");
    }

    return 0;
}
