class Solution {
    public:
        long long coloredCells(int n) {
            
        
            return (long long) n*n+ (long long) (n-1)*(n-1);
        }
    };

// n=1=> 1
        // n=2=> 5
        // n=3=> 13
        // n=4=> 25

        // ==>n^2+(n-1)^2