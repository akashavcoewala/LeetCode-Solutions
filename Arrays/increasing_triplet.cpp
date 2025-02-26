// 334. Increasing Triplet Subsequence
// Solved
// Medium
// Topics
// Companies
// Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

 

// Example 1:

// Input: nums = [1,2,3,4,5]
// Output: true
// Explanation: Any triplet where i < j < k is valid.
// Example 2:

// Input: nums = [5,4,3,2,1]
// Output: false
// Explanation: No triplet exists.

// class Solution {
// public:
//     bool increasingTriplet(vector<int>& nums) {
//         int i, j;
//         for(i=0; i<(nums.size()-2); i++)
//         {
//             j=i+1;
//             if(nums[i]<nums[j] && nums[j]<nums[j+1])
//             {
//                 return true;
//             }
            
//         }
    
//   return false;  
// }
// };


class Solution {
    public:
        bool increasingTriplet(vector<int>& nums) {
            int first = INT_MAX, second = INT_MAX;
            
            for (int num : nums) {
                if (num <= first) {
                    first = num;  // Update smallest number
                } 
                else if (num <= second) {
                    second = num;  // Update second smallest
                } 
                else {
                    return true;  // Found third number greater than first & second
                }
            }
            
            return false;
        }
    };
    