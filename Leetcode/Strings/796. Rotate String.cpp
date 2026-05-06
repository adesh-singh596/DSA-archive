
//Approach: Brute Force
/*
1. Iterate through the string s and perform a left rotation by one character in each iteration.
2. After each rotation, check if the resulting string is equal to the goal string.
3. If a match is found, return true. If the loop completes without finding a match, return false.   
*/
class Solution {
public:
    bool rotateString(string s, string goal) {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            cnt=s[0];
            for(int j=0;j<s.length();j++)
            {
                if(j<s.length()-1)   s[j]=s[j+1];
            }
            s[s.length()-1]=cnt;
            if(s==goal)  return true;
        }
        return false;
    }
};
//Approach: Concatenation
/**?
 * If we concatenate the string s with itself, the resulting string will contain all possible rotations of s as substrings.
 * Therefore, if goal is a rotation of s, it will be a substring of (s + s).
 */
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())   return false;
        else return (s+s).find(goal)!=string::npos;
    }
};