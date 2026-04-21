class Solution {
public:
    static bool compa(const string& a,const string &b)
    {
        if(a.size()!=b.size())  return a.size()>b.size();
        else return a>b;
    }
    string kthLargestNumber(vector<string>& nums, int k) {
       sort(nums.begin(),nums.end(),compa);

       int n=nums.size();
       string kmax=nums[k-1];
       return kmax;
    }
};
