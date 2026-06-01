class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int len=0,left=0,right=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            //For odd length palindrome
            left=right=i;
            while(left>=0&&right<n&&s[left]==s[right])
            {
                left--;
                right++;
            }

            if(right-left-1>len)
            {
                len=right-left-1;
                ans=s.substr(left+1,len);
            }
            //For even length palindrome
            left=i,right=i+1;
            while(left>=0&&right<n&&s[left]==s[right])
            {
                left--;
                right++;
            }

            if(right-left-1>len)
            {
                len=right-left-1;
                ans=s.substr(left+1,len);
            }
        }
        return ans;
    }
};