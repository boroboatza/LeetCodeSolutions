#include"Solutions.h"
string Solutions::intToRoman(int num)
{

    string roman = "";
    int n = num;
    int digit;
    int i = 0;
    while (n)
    {
        if (n >= 1000)
        {
            i = 0;
            digit = n / 1000;
            while (i < digit)
            {
                roman += "M";
                i++;
            }
            n %= 1000;
        }
        if (n < 1000 && n > 899)
        {
            roman += "CM";
            n %= 100;
        }
        if (n < 900 && n > 499)
        {
            i = 0;
            digit = n / 100;
            roman += "D";
            while (i < digit - 5)
            {
                roman += "C";
                i++;
            }
            n %= 100;
        }
        if (n < 500 && n>399)
        {
            roman += "CD";
            n %= 100;
        }
        if (n < 400 && n>99)
        {
            i = 0;
            digit = n / 100;
            while (i < digit)
            {
                roman += "C";
                i++;
            }
            n %= 100;
        }
        if (n < 100 && n > 89)
        {
            roman += "XC";
            n %= 10;
        }
        if (n < 90 && n > 49)
        {
            i = 0;
            digit = n / 10;
            roman += "L";
            while (i < digit - 5)
            {
                roman += "X";
                i++;
            }
            n %= 10;
        }
        if (n < 50 && n > 39)
        {
            roman += "XL";
            n %= 10;
        }
        if (n < 40 && n > 9)
        {
            i = 0;
            digit = n / 10;
            while (i < digit)
            {
                roman += "X";
                i++;
            }
            n %= 10;
        }
        if (n == 9)
        {
            roman += "IX";
            n /= 10;
        }
        if (n < 9 && n>4)
        {
            i = 0;
            roman += "V";
            while (i < n - 5)
            {
                roman += "I";
                i++;
            }
            n /= 10;
        }
        if (n == 4)
        {
            roman += "IV";
            n /= 10;
        }
        if (n < 4)
        {
            i = 0;
            while (i < n)
            {
                roman += "I";
                i++;
            }
            n /= 10;
        }
    }
    return roman;
    /*
    vector<pair<int, string>> values =
    {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
    };
    string result = "";
    for (auto &value : values)
    {
        while (num >= value.first)
        {
        result += value.second;
        num -= value.first;
        }
    }
    return result;
    */

}
