#include <vector>
#include <iostream>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

using namespace std;

class Solution
{
    vector<vector<int>> getCombinationSum(int index, const vector<int>& candidates,
                                            int target, vector<int> temp,
                                            vector<vector<int>>& result)
    {
        if(index == candidates.size())
        {
            if(target == 0)
            {
                result.push_back(temp);
            }
            return result;
        }

        if((target - candidates[index]) >= 0)
        {
            temp.push_back(candidates[index]);
            getCombinationSum(index, candidates, target - candidates[index], temp, result);
            temp.pop_back();
        }
        getCombinationSum(index + 1, candidates, target, temp, result);
        return result;
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> result;
        return getCombinationSum(0, candidates, target, {}, result);
    }
};

int main()
{
    vector<vector<int>> result;
    vector<int> candidates = {2, 3, 5};
    int target = 8;

    Solution obj;
    result = obj.combinationSum(candidates, target);

    for(const std::vector<int>& vec : result)
    {
        for(const int& value : vec)
        {
            LOG_T(value);
        }
        LOG("");
    }

    return 0;
}
