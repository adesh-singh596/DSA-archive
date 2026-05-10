/*
692. Top K Frequent Words   
Approach: Hash Map + Sorting
1. Create an unordered map to count the frequency of each word in the input vector.         
2. Convert the unordered map into a vector of pairs (word, frequency) for sorting.
3. Sort the vector of pairs based on frequency in descending order. If two words have the same frequency, sort them in lexicographical order (ascending).
4. Iterate through the sorted vector and add the top k words to the answer vector.*/
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto ch:words)  mp[ch]++;
        vector<pair<string,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            if(a.second!=b.second)
                return a.second>b.second;
            else return a.first<b.first;
            });
        vector<string> ans;
        for(auto it: vec)
        {
            if(k--==0)  break;
            else    ans.push_back(it.first);
        }
        
        return ans;
   }
};