//Approach:
/*
    -Using Greedy substraction approach where we have two arrays, one for the integer values and another for the corresponding Roman symbols. We iterate through the integer values from largest to smallest, and for each value, we check if the input number is greater than or equal to that value. If it is, we append the corresponding Roman symbol to the answer string and subtract the value from the input number. We repeat this process until the input number is reduced to zero. Finally, we return the constructed Roman numeral string.
    1.Creating two vectors storing integer values and their corresponding Roman symbols in descending order.
    2.Initializing an empty string ans to store the resulting Roman numeral.
    3.Iterating through the integer values in the val vector:
        a.While the input number num is greater than or equal to the current integer value val[i], we append the corresponding Roman symbol sym[i] to the ans string and subtract val[i]
        from num.
    4.Returning the final Roman numeral string ans after the loop completes.
    
*/
class Solution {
public:
    string intToRoman(int num) {
      vector<int> val={1000,900,500,400,100,90,50,40,10,9,5,4,1};  
      vector<string> sym={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
      string ans="";
      for(int i=0;i<val.size();i++)
      {
            while(num>=val[i])
            {
                ans+=sym[i];
                num-=val[i];
            }
      }
      return ans;
    } 
};