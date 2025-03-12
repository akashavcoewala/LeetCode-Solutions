// 1004. Max Consecutive Ones III
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

// Example 1:

// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
// Example 2:



class Solution {
public:
//solve using sliding window
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0, left=0, zeroCount=0;

        for(int right=0; right<nums.size(); right++)
        {
            if(nums[right]==0) zeroCount++;

            if(zeroCount>k)
            {
                if(nums[left]==0) zeroCount--;
                left++;
                
            }
            maxlen= max(maxlen, right-left+1);
        }
        return maxlen;
        
    }
};