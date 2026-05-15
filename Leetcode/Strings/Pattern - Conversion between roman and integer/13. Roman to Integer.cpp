/*
Approach:
1. Stored the roman character with its integer value in a hashmap.
2. Create an integer named val to store the value
3. While traversing the string backward check if i is greater than 0 and whether the preceding character of 'X','V' is 'I' or 'C','L' is 'X' or 'D','M' is 'C'.
4. If so then add the difference of current element value and previous element value
5. Else add the previous element value
6. Return the val

*/ 
class Solution {
public:
    int romanToInt(string s) {
         unordered_map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int val=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(i>0&&(((s[i]=='V'||s[i]=='X')&&s[i-1]=='I')
                ||((s[i]=='L'||s[i]=='C')&&s[i-1]=='X')
                ||((s[i]=='D'||s[i]=='M')&&s[i-1]=='C')))
                {
                    val+=mp[s[i]]-mp[s[i-1]];
                    i--;
                }
            else if(i>=0)    val+=mp[s[i]];
        }
        return val;
    }
};