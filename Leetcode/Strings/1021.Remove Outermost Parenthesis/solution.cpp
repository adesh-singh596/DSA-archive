// Approach--> 
// Initialize depth that corresponds to how deep we are inside the parenthesis. (--> increases depth and )--> decreases depth.
//If depth is less than 1 ie 0 , we will skip that character since it is outermost parenthesis, else add the character in string named answer
class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth=0;
        string ans;
        for(auto ch:s)
        {
            if(ch=='(')
            {
                if(depth++>0)
                {
                    ans+=ch;
                }
                //depth++;
            }
            if(ch==')')
            {
                //depth--;
                if(--depth>0)
                {
                    ans+=ch;
                }
            }
        }
        return ans;
    }
};
