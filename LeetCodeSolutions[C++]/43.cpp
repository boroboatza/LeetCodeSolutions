#include "Solutions.h"
string Solutions::multiply(string num1, string num2)
{
    vector<int> nr1;
    vector<int> nr2;

    for (int i = 0; i < num1.length(); i++)
    {
        nr1.push_back(num1[i] - '0'); //set vector 1 from string to int
    }

    for (int i = 0; i < num2.length(); i++)
    {
        nr2.push_back(num2[i] - '0'); //set vector 2 from string to int
    }

    int n = nr1.size();
    int m = nr2.size();

    vector<int>rezultat(n + m, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int produs = nr1[i] * nr2[j];
            int poz1 = i + j;
            int poz2 = i + j + 1;
            int sum = produs + rezultat[poz2];
            rezultat[poz1] += sum / 10; //Computes the carry-over value
            rezultat[poz2] = sum % 10; //Computes the least significant digit of the product 
        }
    }
    int i = 0;
    vector<int> int_Result;

    while (i < n + m && rezultat[i] == 0)
    {
        i++;
    }

    if (i == n + m)
    {
        return "0";
    }

    else
    {
        //Copies the sub-vector of rezultat from index i to the end of the vector into a new vector int_Result
        //This removes any leading zeros from the result.
        int_Result = vector<int>(rezultat.begin() + i, rezultat.end());
    }

    string str_Result;

    for (int i = 0; i < int_Result.size(); i++)
    {
        //Converts each digit of the vector int_Result back to a character by adding the ASCII value of '0', 
        //and appends it to the end of the string str_Result.
        //This converts the vector of integers back to a string representation of the product.
        str_Result.push_back(int_Result[i] + '0'); 
    }

    return str_Result;
}
