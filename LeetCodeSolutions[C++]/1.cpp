#include "Solutions.h"

vector<int> Solutions::twoSum(vector<int>& nums, int target)
{
    vector<int> result;
    int i = 0;
    while (i < nums.size())
    {
        int j = i + 1;
        while (j < nums.size())
        {
            if (nums[i] + nums[j] == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
            j++;
        }
        i++;
    }
    return result;
}