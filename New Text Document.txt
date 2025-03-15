
// 2529. Maximum Count of Positive Integer and Negative Integer
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

// In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
// Note that 0 is neither positive nor negative.

 

// Example 1:

// Input: nums = [-2,-1,-1,1,2,3]
// Output: 3
// Explanation: There are 3 positive integers and 3 negative integers. The maximum count among them is 3.
// Example 2:


class Solution {
    public:
        int maximumCount(vector<int>& nums) {
    
            int negativeCount=0, positiveCount=0;
    
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i]>0) positiveCount++;
                if(nums[i]<0) negativeCount++;
            }
            return max(positiveCount, negativeCount);
            
        }
    };