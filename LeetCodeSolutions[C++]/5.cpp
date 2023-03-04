#include"Solutions.h"
string Solutions::longestPalindrome(string s)
{

    {
        int n = s.size() + 1;
        bool** matrix = new bool* [n];
        for (int i = 0; i < n; i++)
        {
            matrix[i] = new bool[n];
            memset(matrix[i], false, sizeof(bool) * n);
        }
        int max = 1;
        int off = 0;

        // Single substrings are palindromes
        for (int i = 0; i < n; i++)
        {
            matrix[i][i] = true;
        }

        // Check substrings of length 2 or more
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < n - i + 1; j++)
            {
                int k = j + i - 1;

                if (s[j] == s[k] && (i == 2 || matrix[j + 1][k - 1]))
                {
                    matrix[j][k] = true;

                    if (i > max)
                    {
                        max = i;
                        off = j;
                    }
                }
            }
        }

        return s.substr(off, max);
    }
}