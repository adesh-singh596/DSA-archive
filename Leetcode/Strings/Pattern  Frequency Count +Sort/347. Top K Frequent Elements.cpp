//Solution 692. Top K Frequent Words.cpp 
//approach: Hash Map + Sorting
/*
1. Create an unordered map to count the frequency of each element in the input vector.
2. Convert the unordered map into a vector of pairs (element, frequency) for sorting.
3. Sort the vector of pairs in descending order based on frequency using a custom comparator.       */
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it:nums)   mp[it]++;
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){ return a.second>b.second;});
        vector<int> ans;
        for(auto ch:vec)
        {
            if(k--==0)  break;
            else ans.push_back(ch.first);
        }
        return ans;
    }
};
