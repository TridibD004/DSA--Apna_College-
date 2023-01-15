class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
             unordered_map <int, int> a;
            unordered_map <int, int> b;
            unordered_map <int, int> c;
            vector <int> ans;
            
            for (int i = 0; i < n1; i++)
                a[A[i]]++;
                
            for (int i = 0; i < n2; i++)
                b[B[i]]++;
                
            for (int i = 0; i < n3; i++)
                c[C[i]]++;
                
            
            for (auto it : a)
            {
                int temp = it.first;
                if (b.find(temp) != b.end() && c.find(temp) != c.end())
                {
                    ans.push_back(temp);
                }
            }
            
            if (ans.size() == 0)
                ans.push_back(-1);
                
            sort (ans.begin(), ans.end());
            return ans;
            
        }

};
