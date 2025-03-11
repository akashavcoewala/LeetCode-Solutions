// 1358. Number of Substrings Containing All Three Characters
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a string s consisting only of characters a, b and c.

// Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

// Example 1:

// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
// Example 2:

// Input: s = "aaacb"
// Output: 3
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
// Example 3:


//using array
class Solution {
    public:
        int numberOfSubstrings(string s) {
            int count[3] = {0}; // Instead of unordered_map, we use an array
            int left = 0, result = 0, n = s.size();
    
            for (int right = 0; right < n; right++) {
                count[s[right] - 'a']++;  // Convert 'a', 'b', 'c' to indices 0, 1, 2
    
                while (count[0] > 0 && count[1] > 0 && count[2] > 0) {  // All chars exist
                    result += n - right;
                    count[s[left] - 'a']--;  // Remove leftmost character from window
                    left++;
                }
            }
            return result;
        }
    };
    
    
    
// //using hashmap
    // class Solution 
    // {
    // public:
    //     int numberOfSubstrings(string s)
    //      {
    //        unordered_map<char, int> count;
    //        int left=0, result=0, n=s.size();
           
    //        for(int right=0; right<n; right++)
    //        {
    //         count[s[right]]++;
    //         while(count['a']>0 && count['b']>0 && count['c']>0)
    //         {
    //             result+=n-right;
    //             count[s[left]]--;
    //             left++;
    //         }
    //        }
    //        return result;
    //        }
    // };