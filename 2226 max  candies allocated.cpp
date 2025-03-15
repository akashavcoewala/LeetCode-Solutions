2226. Maximum Candies Allocated to K Children
Medium
Topics
Companies
Hint
You are given a 0-indexed integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of sub piles, but you cannot merge two piles together.

You are also given an integer k. You should allocate piles of candies to k children such that each child gets the same number of candies. Each child can be allocated candies from only one pile of candies and some piles of candies may go unused.

Return the maximum number of candies each child can get.

 

Example 1:

Input: candies = [5,8,6], k = 3
Output: 5
Explanation: We can divide candies[1] into 2 piles of size 5 and 3, and candies[2] into 2 piles of size 5 and 1. We now have five piles of candies of sizes 5, 5, 3, 5, and 1. We can allocate the 3 piles of size 5 to 3 children. It can be proven that each child cannot receive more than 5 candies.

class Solution {
    public:
        int maximumCandies(vector<int>& candies, long long k) {
    
            long long left=1, right=*max_element(candies.begin(), candies.end());
            long long ans=0;
    
            while(left<=right)
            {
                long mid= left+ (right-left)/2;
                long long count = 0; 
                for(int c:candies)
                {
                    count+= c/mid;  //atleast k candies can be served to each
    
                }
                if(count>=k)
                {
                    ans=mid;
                    left=mid+1;
                }
                else right=mid-1;
            }
            return ans;
            
        }
    };