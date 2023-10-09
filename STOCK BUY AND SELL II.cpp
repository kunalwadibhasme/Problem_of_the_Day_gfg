STOCK BUY AND SELL II
The cost of stock on each day is given in an array price[] of size n. 
Each day you may decide to either buy or sell the stock i at price[i],
you can even buy and sell the stock on the same day, Find the maximum profit which you can get.

Note: Buying and Selling of the stock can be done multiple times, 
but you can only hold one stock at a time. In order to buy another stock,
firstly you have to sell the current holding stock.
Example 1
Input:
n = 4
price[] = {3, 4, 1, 5}
Output:
5
Explanation:
We can buy stock on day 1 (at price 3) and sell it on 
day 2 (at price 4) profit will be 4-3=1, 
We can buy another stock on day 3 (at price 1) and sell 
it on day 4 (at price 5) profit will be 5-1=4, 
which will give us maximum profit of 1+4=5.

#include<bits/stdc++.h>
using namespace std;
class Array
  { 
    public:
    template <class T>
    static void input (vector<T> &A, int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
    }
    template <class T> 
    static void print (vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] <<" ";
        }
    } cout << endl;
};


class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &arr) {
        // code here
        int low=0;int high=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[high]<arr[i])
            {
                high++;
            }
            else
            {
                sum+=arr[high]-arr[low];
                low=i;
                high=i;
            }
        }
        sum+=arr[high]-arr[low];
        return sum;
    }
};
