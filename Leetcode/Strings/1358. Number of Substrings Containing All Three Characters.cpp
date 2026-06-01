class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,len=0,have=0;
        int n=s.length();
        unordered_map<char,int> mp={{'a',0},{'b',0},{'c',0}};
        while(right<n)
        {
            int temp=mp[s[right]];
            mp[s[right]]++;
            if(temp==0)    have++;

            right++;
            
            while(have==3)
            {
                len+=n-right+1;
                mp[s[left]]--;
                if(mp[s[left]]==0)  have--;
                left++;
            }
            
        }
        return len;
    }
};