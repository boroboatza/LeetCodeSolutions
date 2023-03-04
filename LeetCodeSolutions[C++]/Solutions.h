#pragma once
#include<iostream>
#include<string>
#include <vector>
#include<unordered_map>
using namespace std;
class Solutions
{
public:
	//#1
	vector<int> twoSum(vector<int>& nums, int target);

	//#3
	int lengthOfLongestSubstring(string s);
	
	//#4
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
	
	//#10
	bool isMatch(string s, string p);
	
	//#28
	int strStr(string haystack, string needle);

	//#43
	string multiply(string num1, string num2);
	
};

