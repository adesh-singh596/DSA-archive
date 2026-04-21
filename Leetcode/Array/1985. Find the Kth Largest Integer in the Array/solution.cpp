/*
Logic-->
Constraint observation--> Length of element of the vector ie length of string upto 100==> can't convert to integer array and then solve it.
Create a comparator function to sort the string vector by comparing the length of any two strings, if length are same then it will check character by character.

New concept learnt-->
1.Can customise the sort function as sort(nums.begin(),nums.end(),customise_fn)
2.To convert an integer present in string vector into integer vector use stoi(ch) [string to integer]
3.To add an element to a existing string ---> string_name+= to_string(c) 
*/
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
