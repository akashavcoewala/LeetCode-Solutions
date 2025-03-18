// 724. Find Pivot Index
// Solved
// Easy
// Topics
// Companies
// Hint
// Given an array of integers nums, calculate the pivot index of this array.

// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

// Return the leftmost pivot index. If no such index exists, return -1.

 

// Example 1:

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11


class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int leftsum=0;
            int totalsum= accumulate(nums.begin(), nums.end(), 0);
            //accumulate is the fun to sum all elements in vector
    
            for(int i=0; i<nums.size(); i++)
            {
                if(leftsum==totalsum-leftsum-nums[i]) return i;
                leftsum+=nums[i];
            }
            return -1;
            
        }
    };