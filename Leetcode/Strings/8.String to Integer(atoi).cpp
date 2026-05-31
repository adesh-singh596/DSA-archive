class Solution {
public:
    int myAtoi(string s) {
        int flag=1,i=0,ans=0;
      //Skipping through white spaces 
      while(s[i]==' ')
      {
         i++;
      }
        //checking for sign
      if(s[i]=='-') 
      {
        flag=-1;
        i++;
      }
      else if(s[i]=='+')
      {
        flag=1;
        i++;
      }
      //Building the answer
        while(s[i]>='0'&&s[i]<='9')
        {
             if(ans>INT_MAX/10||(ans==INT_MAX/10 && (s[i]-'0')>7))
            {
                if(flag==-1) return INT_MIN;
                else return INT_MAX;
            }
            ans=ans*10+(s[i]-'0');
            i++;
        }
       
        return flag*ans;
    }
};