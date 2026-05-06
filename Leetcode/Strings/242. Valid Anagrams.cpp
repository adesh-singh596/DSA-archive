//Approach: Hash Map
/*
1. Check if the lengths of the two strings are different. If they are, return false, as they cannot be anagrams.
2. Create an unordered map to count the frequency of each character in the first string (s).
3. Iterate through the second string (t) and decrement the frequency of each character in the map. If a character from t is not found in the map or its frequency becomes negative, return false, as they cannot be anagrams.
4. If all characters in t are accounted for and the frequencies in the map are all zero, return true, indicating that the strings are anagrams.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  return false;
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)  mp[s[i]]++;
        for(int i=0;i<t.length();i++)
        {
            if(mp.count(t[i]))
            {
                if(mp[t[i]]==0)     return false;
                else mp[t[i]]--;
            }
            else return false;
        }
        return true;
    }
};
//Approach: Sorting
/*
1. Check if the lengths of the two strings are different. If they are, return false, as they cannot be anagrams.
2. Sort both strings in alphabetical order.
3. Compare the sorted strings character by character. If any characters differ, return false, as they cannot be anagrams.
4. If all characters are the same, return true, indicating that the strings are anagrams.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++)
            if(s[i]!=t[i])  return false;

        return true;
    }
};