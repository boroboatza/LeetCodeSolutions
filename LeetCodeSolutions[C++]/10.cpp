#include "Solutions.h"
bool Solutions::isMatch(string s, string p)
{
    int m = s.length(), n = p.length();
    vector<vector<bool>> matrix(m + 1, vector<bool>(n + 1));
    //
    matrix[0][0] = true;
    //
    for (int j = 2; j <= n; j++)
    {
        if (p[j - 1] == '*') matrix[0][j] = matrix[0][j - 2];
    }
    //
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s[i - 1] == p[j - 1] || p[j - 1] == '.')
            {
                matrix[i][j] = matrix[i - 1][j - 1];
            }
            else if (p[j - 1] == '*')
            {
                matrix[i][j] = matrix[i][j - 2];
                if (s[i - 1] == p[j - 2] || p[j - 2] == '.')
                {
                    matrix[i][j] = matrix[i][j] || matrix[i - 1][j];
                }
            }
        }
    }
    return matrix[m][n];
}