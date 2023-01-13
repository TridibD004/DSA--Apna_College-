class Solution
{
   public:
    void maxmin(int *a,int i,int j,int &max,int &min)
    {
        if(i==j)
        {
            max=a[i];
            min=a[i];
        }
        else if((j-i)==1)
        {
            if(a[i]>=a[j])
            {
                max=a[i];
                min=a[j];
            }
            else
            {
                max=a[j];
                min=a[i];
            }
        }
        else
        {
            int max1=INT_MIN;
            int min1=INT_MAX;
            
            int mid=(i+j)/2;
            maxmin(a,i,mid,max,min);
            maxmin(a,mid+1,j,max1,min1);
            if(max1>max)
                max=max1;
            if(min1<min)
                min=min1;
        }
    }
    
    int findSum(int a[], int n)
    {
    	//code here.
    	int max=INT_MIN;
    	int min=INT_MAX;
    	maxmin(a,0,n-1,max,min);
    	int ans=max+min;
    	return ans;
    }

};