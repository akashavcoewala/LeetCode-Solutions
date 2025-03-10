class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
    
         int n=blocks.size();
         int whitecount=0;
         
         //1. iterate 1st window
         for(int i=0; i<k; i++)
         {
            if(blocks[i]=='W') whitecount++;
         }
         //as we have to count the no. of W's which is minimum
         int mincount=whitecount;
    
         //2. slide the window throughout the given string
         for(int i=k; i<n; i++)
         {
            if( blocks[i-k]=='W') whitecount--;
            if(blocks[i]=='W') whitecount++;
    
            mincount=min(mincount, whitecount);
         }
         return mincount;
    
    
        }
    };