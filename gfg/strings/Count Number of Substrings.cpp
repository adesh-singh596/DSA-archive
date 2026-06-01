//Approach: Two Pointers
/*
1. Initialize two pointers, left and right, to keep track of the current substring.
2. Use an unordered map to count the occurrences of characters 'a', 'b', and 'c' in the current substring.
3. Traverse the string with the right pointer, updating the count of characters in the map and the number of unique characters (have) in the current substring. 
4. When the current substring contains all three characters (have == 3), calculate the number of valid substrings that can be formed by adding the remaining characters to the right and update the answer (ans).
5. Move the left pointer to the right, updating the counts in the map and the number of unique characters (have) accordingly until the current substring no longer contains all three characters.
6. Continue this process until the right pointer reaches the end of the string, and return the final count of valid substrings (ans).
*/
class Solution {
  public:
    int countSubstring(string &s) {
        int left=0,right=0,ans=0,have=0;
        
        unordered_map<char,int> mp={{'a',0},{'b',0},{'c',0}};
        int n=s.length();
        while(right<n)
        {
            int temp=mp[s[right]];
            mp[s[right]]++;
            if(temp==0&&(s[right]=='a'||s[right]=='b'||s[right]=='c'))    
            {
                have++;
            }
            right++;
            
            while(have==3&&left<n)
            {
                ans+=n-right+1;
                mp[s[left]]--;
                if(mp[s[left]]==0&&(s[left]=='a'||s[left]=='b'||s[left]=='c'))  
                {
                    have--;
                }
                left++;
            }
        }
        return ans;
    }
};