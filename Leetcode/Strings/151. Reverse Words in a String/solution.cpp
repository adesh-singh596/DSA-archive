//Learnt to use pop_back function to remove the last added element

//Approach: Two Pointers
/*
1. Take two pointers, wrb and wre, to keep track of the beginning and end of a word.
2. Traverse the string from the end to the beginning.
3. When you encounter a space or reach the beginning of the string, it indicates the end of a word. Update the wrb pointer to the position after the space (or the beginning of
the string) and check if wrb is less than or equal to wre. If it is, append the word (from wrb to wre) to the answer string, followed by a space.
4. Update the wre pointer to the position before the space and skip any additional spaces.
5. After the loop, remove any trailing space from the answer string and return it.
*/
class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.length();
        int wrb=n-1,wre=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' '||i==0)
            {
                wrb=(s[i]==' ')?i+1:i;    //wrb is i+i in all cases and it handles the edge case when i=0.
                if(wrb<=wre)
                {
                    for(int j=wrb;j<=wre;j++)
                    {
                        ans+=s[j];
                    }
                    ans+=' ';
                }
                wre=i-1;
                while(wre>=0&&s[wre]==' ')    wre--;    //checks if the wre in inside the bound before decrementing it
            }
        }
        if(!ans.empty()&&ans.back()==' ')     ans.pop_back();    
        return ans;
    }
};
