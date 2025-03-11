// 1456. Maximum Number of Vowels in a Substring of Given Length
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

// Example 1:

// Input: s = "abciiidef", k = 3
// Output: 3
// Explanation: The substring "iii" contains 3 vowel letters.

class Solution {
    public:
        int maxVowels(string s, int k) {
    
            //fun to check if char is vowel
            auto isVowel=[](char c)
            {
                return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
            };
    
            int currentVowelCount=0, maxVowelCount=0;
    
            //first window
            for(int i=0; i<k; i++)
            {
                if(isVowel(s[i])) currentVowelCount++;
            }
            maxVowelCount=currentVowelCount;
    
            //secomd window onwards
            for(int i=k; i<s.size(); i++)
            {
                if(isVowel(s[i])) currentVowelCount++;
                if(isVowel(s[i-k])) currentVowelCount--;
                 maxVowelCount=max(maxVowelCount,currentVowelCount);
            }
          
           return maxVowelCount;
    
        }
    };x