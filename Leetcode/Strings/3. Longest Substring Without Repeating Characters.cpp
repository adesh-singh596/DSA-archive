class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,len=0;
        unordered_map<char,int> mp;
        int n=s.length();
        while(right<n)
        {
            //Incrementing the frequency of added element. If it doesn't exist frequency will be set to 1
            mp[s[right]]++;

            //Removing the duplicates
            while(mp[s[right]]>1)
            {
                mp[s[left]]--;
                left++;
            }
            len=max(len,right-left+1);
            right++;
        }
        
        return len;
    }
};