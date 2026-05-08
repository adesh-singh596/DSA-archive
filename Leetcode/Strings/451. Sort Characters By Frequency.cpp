/*
Approach
1.Create a hash map to count frequency of each element in the string
2. Create a vectro of pairs to store charachters and their frequencies
3. Sort the vector in decreasing order of frequency
4. Iterate through the sorted vector and append the charachters to the answer string according to their frequencies
5. Return the answer string
*/
class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int> mp;
        for(auto ch:s)  mp[ch]++;
        vector<pair<char,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b)  {return a.second>b.second;});
        for(auto i:vec)
        {
            while(i.second--)
            {
                ans+=i.first;
            }
        }
        return ans;
    }
};