public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        int flag=1;
        for(int i=0;i<n;i++)
        {
            long long sum=a[i]+b[i];
            if(sum>=k)
            {
                flag=0;
                return true;
            }
        }
        return false;
    }
};