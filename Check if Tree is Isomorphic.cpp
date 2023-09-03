Given two Binary Trees. Check whether they are Isomorphic or not.
Note: 
Two trees are called isomorphic if one can be obtained from another by a series of flips, i.e. 
by swapping left and right children of several nodes. Any number of nodes at any level can have their children swapped. 
Two empty trees are isomorphic.
For example, the following two trees are isomorphic with the following sub-trees flipped: 2 and 3, NULL and 6, 7 and 8.
         1                        1
        /  \                     / \    
       2    3                   3   2
      / \   /                   \  / \
     4   5 6                     6 4  5
        / \                          / \
       7   8                        8   7

//Driver code starts
#include<bits/stdc++.h> 
using namespace std;
struct Node {
int data;
Node *left;
Node *right;
Node(int val) {
data = val;
left = right = NULL;
}
};
Node* buildTree(string str)
{
Corner Case if(str.length() == 0 || str[0]
== 'N')
// Creating vector of strings from input
return NULL;
// string after spliting by space vector<string> ip;
istringstream iss(str);
for(string str; iss >> str; ) ip.push_back(str);
// Create the root of the tree Node* root = new Node(stoi(ip[]));
// Push the root to the queue
queue<Node*> queue;
queue.push(root);
Starting from the second element
int i = 1;
while(!queue.empty() && i < ip.size()) {
// Get and remove the front of the queue
Node* currNode = queue.front(); queue.pop();
Get the current node's value from the string string currval = ip[i];
// If the Left child is not null if(currval != "n") {
// Create the Left child for the current node currNode->left = new Node(stoi (currval));
// Push it to the queue queue.push(currNode->left);
For the right child
}
i++;
if(i >= ip.size()) currval = ip[i];
break;
// If the right child is not null
if (currval != "N") {
// Create the right child for the current node currNode->right = new Node(stoi(currval));
// Push it to the queue queue.push(currNode->right);
} i++;
}
return root;
}
//Driver code ends
//complete the function
class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
     bool isIsomorphic(Node *root1,Node *root2)
    {
  if (root1 == nullptr && root2 == nullptr)
            return true;

        // Base case 2: One of the trees is empty
        if (root1 == nullptr || root2 == nullptr)
            return false;

        if (root1->data != root2->data)
            return false;
            
        return (isIsomorphic(root1->right, root2->right) && isIsomorphic(root1->left, root2->left)) ||
               (isIsomorphic(root1->right, root2->left) && isIsomorphic(root1->left, root2->right));
    }
};

int main()
{
int t;
scanf("%d",&t); 
while(t--)
{
    string s1,s2;
    getline(cin,s1);
    getline(cin, s2);
    Node* root1 = buildTree(s1); Node* root2 = buildTree(s2);
    Solution obj;
    if (obj.isIsomorphic (root1, root2)) cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
} 
return 0;
}
