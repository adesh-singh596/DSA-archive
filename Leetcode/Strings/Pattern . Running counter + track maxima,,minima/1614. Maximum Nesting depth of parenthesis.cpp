//Approach: We can use two variables to keep track of the number of left and right parentheses. We can iterate through the string and whenever we encounter a left parenthesis, we increment the left variable and whenever we encounter a right parenthesis, we increment the right variable. We can also keep track of the maximum depth by taking the maximum of the current depth (left - right) and the previous maximum depth.

class Solution {
public:
    int maxDepth(string s) {
        int l=0,r=0,depth=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')   {
                l++;
                depth=max(depth,l-r);
            }

            else if(s[i]==')')  {
                r++;
                depth=max(depth,l-r);
            }
            
        }
        return depth;
    }
};