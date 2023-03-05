#include"Solutions.h"
int Solutions::compress(vector<char>& chars)
{
    vector<char> temp;
    char c;
    int n = 0;
    int i = 0;
    int j = 0;
    while (i < chars.size())
    {
        c = chars[i];
        while (j < chars.size() && c == chars[j])
        {
            n++;
            if (n < 2)
            {
                temp.push_back(chars[j]);
            }
            j++;
        }

        if (n > 1)
        {
            int minus = 0;
            while (n)
            {
                temp.insert(temp.end() - minus, (n % 10) + '0');
                n /= 10;
                minus++;
            }
        }
        n = 0;
        i++;
    }
    chars.clear();
    for (char ch : temp)
    {
        chars.push_back(ch);
    }
    return chars.size();
}