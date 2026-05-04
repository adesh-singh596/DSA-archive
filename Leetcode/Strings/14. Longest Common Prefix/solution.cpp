class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.size()==0) return "";
        else if(s.size()==1)    return s[0];
        int left=0;
        int right=0;
        string hypo;
        int m=s[0].length(),n=s[1].length();
        while(left<m&&right<n)
        {
            if(s[0][left]==s[1][right])   
            {
                hypo+=s[0][left];
                left++;
                right++;
            }
            else break;
        }
        for(int i=2;i<s.size();i++)
        {
            int l=0,r=0;
            while(l<hypo.length()&&r<s[i].length())
            {
                if(!(hypo[l]==s[i][r]))  
                {
                    hypo.erase(l);
                    break;
                }
                else
                {
                    l++;
                    r++;
                }
            }
            if(l<hypo.length()) hypo.erase(l);
        }
        return hypo;
    }
};