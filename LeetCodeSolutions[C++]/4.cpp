#include "Solutions.h"
double Solutions::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    if (nums1.size() >= nums2.size())
    {
        while (nums2.size())
        {
            int i = 0;
            int j = 0;
            while (nums2[0] - nums1[nums1.size() - i - 1] < 0)
            {
                i++;
                j++;
                if (i == nums1.size())
                {
                    break;
                }
            }
            nums1.insert(nums1.end() - j, nums2[0]);
            nums2.erase(nums2.begin());
        }
        int s = nums1.size() / 2;
        if (nums1.size() % 2 == 0)
        {
            return (double(nums1[nums1.size() / 2]) + double(nums1[nums1.size() / 2 - 1])) / 2;
        }

        return double(nums1[nums1.size() / 2]);

    }
    ////
    else if (nums1.size() < nums2.size())
    {
        while (nums1.size())
        {
            int i = 0;
            int j = 0;
            while (nums1[0] - nums2[nums2.size() - i - 1] < 0)
            {
                i++;
                j++;
                if (i == nums2.size())
                {
                    break;
                }
            }
            nums2.insert(nums2.end() - j, nums1[0]);
            nums1.erase(nums1.begin());
        }
        int s = nums2.size() / 2;
        if (nums2.size() % 2 == 0)
        {
            return (double(nums2[nums2.size() / 2]) + double(nums2[nums2.size() / 2 - 1])) / 2;
        }
        return double(nums2[nums2.size() / 2]);
    }
    return 0;
}