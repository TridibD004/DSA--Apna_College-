class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                a+=s[i];
            if(s[i]>='A' && s[i]<='Z')
                a+=(s[i]+32);
            if(s[i]>='0'&&s[i]<='9')
                a+=s[i];
        }
        string b=a;
        reverse(a.begin(),a.end());
        if(b==a)
            return true;
        return false;
    }
};