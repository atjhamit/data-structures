#include <iostream>
#include <bits/stdc++.h>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

using namespace std;

class Solution 
{
    void routine(int index, const vector<int>& nums, vector<int> temp, vector<vector<int>>& result)
    {
        result.push_back(temp);

        for(int i = index; i < nums.size(); i++)
        {
            if((i != index) &&
                (nums[i] == nums[i - 1]))
            {
                continue;
            }
            temp.push_back(nums[i]);
            routine(i + 1, nums, temp, result);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        routine(0, nums, {}, result);
        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result;

    Solution obj;
    result = obj.subsetsWithDup(nums);

    for(const vector<int>& line : result)
    {
        for(const int number : line)
        {
            LOG_T(number);
        }
        LOG("");
    }

    return 0;
}
