// 2401. Longest Nice Subarray

// You are given an array nums consisting of positive integers.

// We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.

// Return the length of the longest nice subarray.

// A subarray is a contiguous part of an array.

// Note that subarrays of length 1 are always considered nice.

 

// Example 1:

// Input: nums = [1,3,8,48,10]
// Output: 3
// Explanation: The longest nice subarray is [3,8,48]. This subarray satisfies the conditions:
// - 3 AND 8 = 0.
// - 3 AND 48 = 0.
// - 8 AND 48 = 0.
// It can be proven that no longer nice subarray can be obtained, so we return 3.
// Example 2:


class Solution {
    public:
        int longestNiceSubarray(vector<int>& nums) {
            int used_bits = 0;  // Stores the OR of all elements in the window
            int left = 0;       // Left pointer
            int max_length = 0; // Maximum length of the valid subarray
    
            for (int right = 0; right < nums.size(); right++) {
                // If adding nums[right] creates a conflict, shrink the window
                while ((used_bits & nums[right]) != 0) {
                    used_bits ^= nums[left];  // Remove nums[left] using XOR
                    left++;                   // Move left pointer
                }
    
                // Add nums[right] to the used_bits
                used_bits |= nums[right];
    
                // Update max length
                max_length = max(max_length, right - left + 1);
            }
    
            return max_length;
        }
    };
    