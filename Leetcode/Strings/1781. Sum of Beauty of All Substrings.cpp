//Approach: Brute Force
/*1. Use two nested loops to generate all possible substrings of the input string.
2. For each substring, maintain a frequency count of each character using a vector of size 26 (assuming only lowercase letters).
3. After updating the frequency count for the current substring, calculate the minimum and maximum frequency of characters that appear in the substring.
4. The beauty of the substring is defined as the difference between the maximum and minimum frequency. Add this value to the total sum.
5. Finally, return the total sum of the beauty of all substrings.
*/
class Solution {
public:
    int beautySum(string s) {
        int sum=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            vector<int> prefix(26);
            for(int j=i;j<n;j++)
            {
                prefix[s[j]-'a']++;
                int min=INT_MAX;
                int max=INT_MIN;
                for(int k=0;k<26;k++)
                {
                    if(prefix[k]<min&&prefix[k]!=0)   min=prefix[k];
                    if(prefix[k]>max)  max=prefix[k];
                }
                sum+=(max-min);
            }
        }
        return sum;
    }
};