/*
approach:
1. we will first count the frequency of each element and then sort the elements based on their frequency and if two elements have the same frequency then we will sort them based on their value in decreasing order.
2. we will iterate through the sorted elements and add them to the result vector based on their frequency.
3. finally, we will return the result vector.
4. time complexity: O(nlogn) where n is the number of elements in the input vector.
*/ 
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto ch:nums)   mp[ch]++;
        vector<pair<int,int>> vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[](auto &a,auto &b){
            if(a.second==b.second)  
                return a.first>b.first;
            else return a.second<b.second;
        });
        vector<int> ans;
        for(auto it:vec)
        {
            while(it.second--)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};