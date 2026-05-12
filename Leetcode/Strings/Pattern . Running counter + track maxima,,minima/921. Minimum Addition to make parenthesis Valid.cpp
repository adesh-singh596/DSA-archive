// 921. Minimum Addition to make parenthesis Valid
//Approach: Stack
/*  1. Initialize an empty stack to keep track of unmatched parentheses.
    2. Iterate through each character in the input string:      
        a. If the character is an opening parenthesis '(', push it onto the stack.
        b. If the character is a closing parenthesis ')':
            i. Check if the stack is not empty and the top of the stack is an opening parenthesis '('. If so, pop the top element from the stack (indicating a matched pair).
            ii. If the stack is empty or the top of the stack is not an opening parenthesis, push the closing parenthesis onto the stack (indicating an unmatched closing parenthesis).     
    3. After processing all characters, the size of the stack will represent the number of unmatched parentheses (both opening and closing) that need to be added to make the string valid.
    4. Return the size of the stack as the result.
*/
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for(auto ch:s)
        {
            if(!st.empty()&&(ch==')'&&st.top()=='('))
                st.pop();
            else st.push(ch);
        }
        return st.size();
    }
};