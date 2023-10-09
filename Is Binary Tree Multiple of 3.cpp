IS BINARY TREE MULTIPLE OF 3
Given a number in its binary form find if the given binary number is a multiple of 3. 
It is recommended to finish the task using one traversal of input binary number.
Example 1
Input: S = "0011"
Output: 1
Explanation: "0011" is 3, which is divisible by 3.

//User function template for C++
#include<iostream>
#include<cmath>
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    
	  /*  long long p=0,z=0;
	    for(long long j=0;s[j]!='\0';j++)
	    {
	        z=z+1;
	    }
	    for(long long i=z-1;i>=0;i--)
	    {
	        if(s[i]=='1')
	        {
	            p = p + pow(2,z-1-i);
	        }
	    }
	    if(p%3==0)
	    {
	        return 1;
	    }
	    else{
	        return 0;
	    }
	    */
	    int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i] == '1')
	        {
	            if(i%2==0)
	            {
	                sum+=1;
	            }
	            else
	            {
	                sum+=2;
	            }
	        }
	    }
	    return sum%3 ==0? 1:0;
	    
	}

};

int main(){
	  int t;
	  cin >> t;
	  while(t--)
		{
		  string s;
		  cin >> s;
		  Solution ob;
		  cout << ob.isDivisible(s) << endl;
	  }
	  return 0;
}
