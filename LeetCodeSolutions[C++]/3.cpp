#include"Solutions.h"
int Solutions::lengthOfLongestSubstring(string s)
{
    int r = s.size();
    int max_length = 0;
    unordered_map<char, int> _Map;

    for (int i = 0, j = 0; j < r; j++)
    {

        if (_Map.find(s[j]) != _Map.end())
        {
            i = max(i, _Map[s[j]] + 1);
        }

        _Map[s[j]] = j;
        max_length = max(max_length, j - i + 1);
    }
    return max_length;
}