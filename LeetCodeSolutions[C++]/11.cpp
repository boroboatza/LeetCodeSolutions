#include"Solutions.h"
int Solutions::maxArea(vector<int>& height)
{
    size_t right = height.size() - 1;
    size_t left = 0;
    int max_area = 0;
    while (right != left)
    {
        int area = 0;
        if (height[left] <= height[right])
        {
            area = height[left] * (right - left);
            left++;
        }
        if (height[right] < height[left])
        {
            area = height[right] * (right - left);
            right--;
        }
        if (area > max_area)
        {
            max_area = area;
        }
    }
    return max_area;
}