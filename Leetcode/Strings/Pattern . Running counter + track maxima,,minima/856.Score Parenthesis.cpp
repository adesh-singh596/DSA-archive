//Approach: Stack
/*
1. Use a stack to keep track of the scores of the parentheses.
2. Initialize the stack with a 0 to represent the score of an empty string.
3. Iterate through each character in the input string:
   a. If the character is '(', push a 0 onto the stack to represent the score of the new parentheses.
   b. If the character is ')', pop the top element from the stack, which represents the score of the inner parentheses. Then, pop the next element from the
stack, which represents the score of the outer parentheses. Calculate the new score by adding the outer score and the maximum of either 2 times the inner score (if the inner score is greater than 0) or 1 (if the inner score is 0). Push this new score back onto the stack.
4. After processing all characters, the top element of the stack will contain the total score of the parentheses. Return this value.
*/
class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(auto ch:s)
        {
            if(ch=='(')     st.push(0);
            else
            {
                int inner=st.top();
                st.pop();
                int outer=st.top();
                st.pop();
                st.push(outer+max(2*inner,1));
            }
        }
        return st.top();
    }
};
