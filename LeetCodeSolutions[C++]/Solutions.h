#pragma once
#include "ListNode.h"
#include<iostream>
#include<string>
#include <vector>
#include<unordered_map>
#include <queue>
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

	//#5
	string longestPalindrome(string s);
	
	//#10
	bool isMatch(string s, string p);

	//#11
	int maxArea(vector<int>& height);

	//#12
	string intToRoman(int num);

	//#23
	ListNode* mergeKLists(vector<ListNode*>& lists);
	//#28
	int strStr(string haystack, string needle);

	//#43
	string multiply(string num1, string num2);

	//#443
	int compress(vector<char>& chars);
	
};

