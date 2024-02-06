#include <iostream>
#include <bits/stdc++.h>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

using namespace std;

class Solution 
{
    void generatePermutations(const vector<int>& nums, vector<int> temp, vector<int> occupied, vector<vector<int>>& result)
    {
        if(temp.size() == nums.size())
        {
            result.push_back(temp);
            return;
        }

        for(int i = 0; i < nums.size(); i++)
        {
            if(occupied[i] == 1)
            {
                continue;
            }

            temp.push_back(nums[i]);
            occupied[i] = 1;
            generatePermutations(nums, temp, occupied, result);
            temp.pop_back();
            occupied[i] = 0;
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> occupied;
        for(int i = 0; i < nums.size(); i++)
        {
            occupied.push_back(0);
        }
        generatePermutations(nums, {}, occupied, result);
        return result;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    Solution obj;

    vector<vector<int>> result = obj.permute(nums);

    for(const vector<int>& line : result)
    {
        for(const int& number : line)
        {
            LOG_T(number);
        }
        LOG("");
    }

    return 0;
}
