#include <iostream>
#include <bits/stdc++.h>

#define LOG_T(x)      std::cout << x << "\t"
#define LOG(x)    std::cout << x << "\n"

void func(int index, const std::vector<int>& array, std::vector<int>& result, int sum)
{
    if(index >= array.size())
    {
        result.push_back(sum);
        return;
    }
    // pick
    func(index + 1, array, result, sum + array[index]);
    // not pick
    func(index + 1, array, result, sum);
}

int main()
{
    std::vector<int> array = {3, 1, 2};
    std::vector<int> result;

    func(0, array, result, 0);
    std::sort(result.begin(), result.end());

    for(const int& answer : result)
    {
        LOG_T(answer);
    }
    LOG("");

    return 0;
}
