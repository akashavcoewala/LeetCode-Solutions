class Solution {
    public:
    
    //firstwe will create a function to check if n is prime or not
    bool isPrime(int n)
    {
        if (n<2) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3; i*i<=n; i+=2)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    
    
    
    vector<int> closestPrimes(int left, int right) {
            vector <int> primes;
    
        //check if n is prime , if yes - push it to vector primes
        for(int i=left; i<=right; i++)
        {
            if(isPrime(i)) primes.push_back(i);
        }
    
        if(primes.size()<2) return {-1,-1};
    
        int min_diff= INT_MAX;
        vector <int> result;
    
        for(int i=1; i<primes.size(); i++)
        {
            int diff=primes[i]-primes[i-1];
            if(diff<min_diff) 
            {
                min_diff=diff;
                 result={primes[i-1], primes[i]};    
            }
                  
        }
        return result;
        }
    };