/*Approach:
This question is based on bijection ie if a is mapped on b then b should be mapped on a

1. Create 2 hashtables one for mapping characters of s over t and vice versa for t over s
2. Transverse each character of string s and check if it is present in the map or not
3. If yes and it is not equal to corresponding character of t then return false
4. Repeat the same for each character of t over s
5. If the loop still reaches here, add the respective characters to the maps
6. Return true if all the conditions are satisfied*/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<int,int> mp1,mp2;
        int sch=-1,tch=-1;
        for(int i=0;i<s.length();i++)
        {
            sch=s[i],tch=t[i];
           if(mp1.count(sch)&&mp1[sch]!=tch)  return false;  
           if(mp2.count(tch)&&mp2[tch]!=sch)    return false;

           mp1[sch]=tch;
           mp2[tch]=sch;
        }
        return true;
    }
};