NEXT HAPPY NUMBER
For a given non-negative integer N, find the next smallest Happy Number. 
A number is called Happy if it leads to 1 after a sequence of steps. 
Wherein at each step the number is replaced by the sum of squares of its digits that is, 
if we start with Happy Number and keep replacing it with sum of squares of its digits, we reach 1 at some point.
Example 1
Input:
N = 8
Output:
10
Explanation:
Next happy number after 8 is 10 since
1*1 + 0*0 = 1

#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:

    int isHappy(int N)
    {
        if(N==1||N==7)
        {
            return 1;
        }
        int sum=N,curr=N;
        while(sum>9)
        {
            sum=0;
            while(curr>0)
            {
                int d=curr%10;
                sum+=d*d;
                curr/=10;
            }
            if(sum==1)
                return 1;
            curr =sum;
        }
        if(sum == 7)
            return 1;
        return 0;
    }
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int N;
    cin>>N;
    Solution ob; 
    cout << ob.nextHappy (N) << endl;
  }
return 0;
Driver Code Ends
}
