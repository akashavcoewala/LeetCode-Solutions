class Solution {
    public:
        int maxOperations(vector<int>& nums, int k) {
            int count=0;
            int  left=0, right=nums.size()-1;
            sort(nums.begin(), nums.end());
    
            while(left<right)
            {
                if(nums[left]+nums[right]==k)
                {
                    left++;
                    right--;
                    count++;
                }
                else if((nums[left] + nums[right])<k) left++;
                else right--;
            }
            return count;
        }
    };