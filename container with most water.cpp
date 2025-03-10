class Solution {
    public:
        int maxArea(vector<int>& height) {
           int left=0, right=height.size()-1, maxArea=0;
    
           while(left<right)
           {
            //area of this bucket=height*width,
            // here in this case, h and w will be:
            int h=min(height[left], height[right]);
            int w=right-left;
    
            //calculate area
            maxArea=max(maxArea, h*w);
    
            if(height[left]<height[right])
            left++;
            else
            right--;
           } 
           return maxArea;
        }
    };