/*
    Logic-->
        Main concept is that we are moving backward after sorting the array to check for non distinct elements
        1. Sorted the array
        2. Maintain a cnt and initialize it as 1
        3. Initialize the max as the last element
        4. Now moving backward we keep on checking whether the element is equal to the max or not
        5. If not then that's our second max , save it and increment the cnt 
        6. Return smax if cnt is 1 else return -1
        This Logic can be extended to find the kth largest element in the array
*/
class Solution {
  public:
    int getSecondLargest(vector<int> &nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int cnt=1;
        int max=nums[n-1],smax=INT_MIN;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]!=max)
            {
                if(cnt==1)
                {
                    cnt++;
                    smax=nums[i];
                    break;
                }
            }
        }
        if(cnt==2)  return smax;
        else return -1;
    }
};