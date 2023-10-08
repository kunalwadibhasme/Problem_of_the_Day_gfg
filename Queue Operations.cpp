Given N integers, the task is to insert those elements in the queue. Also, given M integers, the task is to find the frequency of each number in the Queue.
Note:
insert() will be called N times by main().
findFrequency() will be called M times by main();
Where k is each element passing through respective function calls.
Example 1:
Input:
N = 8
1 2 3 4 5 2 3 1
M = 5
1 3 2 9 10
Output:
2
2
2
-1
-1
Explanation:
After inserting 1, 2, 3, 4, 5, 2, 3 and 1 into the queue, frequency of 1 is 2, 3 is 2 and 2 is 2. Since 9 and 10 are not there in the queue we output -1 for them



//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        queue<int> p;
        int ans=0;
        while(q.size()){
            p.push(q.front());
            ans+=q.front() == k;
            q.pop();
        }
        while(p.size())
        {
            q.push(p.front());
            p.pop();
            }
            return ans;
    }
    
};

int main() {
    int testcase; 
    cin>>testcase;
    while(testcase-- > 0)
    {
    Declaring Queve 
    queue<int> q; 
    int n, k;
    cin>>n;
    // Invoking object of Geeks class
  Solution obj;
  for (int i=0;i<n;i++)
  {
    cin >> k; 
    obj.insert(q, k);
  }
  int m;
  cin >> m; 
  for(int i=0;i<m;i++)
  {
    cin >> k;
  }
  int f = obj.findFrequency(q, k);
  if(f != 0)
  {
    cout<<f<<endl;
  } 
  else
  {
    cout<<"-1\n";
  }
}
return 0;
Driver Code Ends
}
