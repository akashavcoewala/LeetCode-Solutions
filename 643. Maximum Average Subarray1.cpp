class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            
            double maxsum=0, currentsum=0;
            //for first window
            for(int i=0; i<k; i++)
            {
                 currentsum+=nums[i];
            }
            maxsum=currentsum;
    
            //for remaining windows
            for(int i=k; i<nums.size(); i++)
            {
                currentsum+=nums[i]-nums[i-k];
                maxsum=max(maxsum, currentsum);
            }
            return maxsum/k;
        }
    };