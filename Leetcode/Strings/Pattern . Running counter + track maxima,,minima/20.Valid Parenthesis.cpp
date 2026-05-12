//Approach: Stack
/*
1. Create an empty stack to keep track of opening parentheses.
2. Iterate through each character in the input string:
   a. If the character is an opening parenthesis ('(', '{', '['), push it onto the stack.
   b. If the character is a closing parenthesis (')', '}', ']'), check if the stack is not empty and if the top of the stack is the corresponding opening parenthesis. If it is, pop the top element from the stack. Otherwise, return false.
3. After iterating through the string, check if the stack is empty. If it is empty, return true (indicating that all parentheses are valid). Otherwise, return false (indicating that there are unmatched opening parentheses).
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch:s)
        {
            if(ch=='('||ch=='{'||ch=='[')
                st.push(ch);
            else if(!st.empty()&&((ch==')'&&st.top()=='(')||(ch==']'&&st.top()=='[')||(ch=='}'&&st.top()=='{')))
            {
            
                st.pop();
            }
            else return false;
        }
        return st.empty();
    }
};