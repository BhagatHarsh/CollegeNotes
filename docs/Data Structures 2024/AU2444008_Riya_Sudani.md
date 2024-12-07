## Submission at 2024-09-02 11:04:38


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
     if k == 1:
        return head.next
    
    # Initialize the current node as head
     current = head
    
    # Traverse to the (k-1)th node
     for _ in range(k - 2):  # k-2 because we want to stop at the (k-1)th node
        if current.next is None:
            return head  # If k is out of bounds, return the original list
        current = current.next
    
    # Skip the k-th node
     if current.next is not None:
        current.next = current.next.next
    
     return head

# Helper function to print the linked list (for testing purposes)
def printList(head):
    current = head
    while current:
        print(current.data, end=" -> " if current.next else "")
        current = current.next
    print()

# Helper function to create a linked list from a list of values (for testing purposes)
def createLinkedList(values):
    if not values:
        return None
    
    head = node()
    head.data = values[0]
    current = head
    
    for value in values[1:]:
        current.next = node()
        current.next.data = value
        current = current.next
    
    return head


```

## Submission at 2024-09-02 11:05:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
     if k == 1:
        return head.next
    
    # Initialize the current node as head
     current = head
    
    # Traverse to the (k-1)th node
     for _ in range(k - 2):  # k-2 because we want to stop at the (k-1)th node
        if current.next is None:
            return head  # If k is out of bounds, return the original list
        current = current.next
    
    # Skip the k-th node
     if current.next is not None:
        current.next = current.next.next
    
     return head

# Helper function to print the linked list (for testing purposes)
def printList(head):
    current = head
    while current:
        print(current.data, end=" -> " if current.next else "")
        current = current.next
    print()

# Helper function to create a linked list from a list of values (for testing purposes)
def createLinkedList(values):
    if not values:
        return None
    
    head = node()
    head.data = values[0]
    current = head
    
    for value in values[1:]:
        current.next = node()
        current.next.data = value
        current = current.next
    
    return head


```

## Submission at 2024-09-02 11:12:15


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    current = head
    
    while current:
        result.append(current.val)  # Add the current node's value to the result list
        current = current.next  # Move to the next node
    
    return result


```

## Submission at 2024-09-02 11:28:32


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    current = head
    count = 1
    
    # Traverse the list until we reach the k-th node
    while current is not None:
        if count == k:
            return current.val
        current = current.next
        count += 1
    
    # If k is greater than the size of the list
    return -1

# Helper function to create a linked list from a list of values (for testing purposes)
def create_linked_list(values):
    if not values:
        return None
    
    head = ListNode(values[0])
    current = head
    
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    
    return head
    

```

## Submission at 2024-09-09 05:44:43


```
def find_maximal_array(n, a, b):
    # Create the resultant array c by taking the maximum of a[i] and b[i] for each i
    c = [max(a[i], b[i]) for i in range(n)]
    # Print the array c as space-separated values
    print(" ".join(map(str, c)))

# Input reading
n = int(input())  # Read size of arrays
a = list(map(int, input().split()))  # Read array a
b = list(map(int, input().split()))  # Read array b

# Call the function to find and output the maximal array
find_maximal_array(n, a, b)
```

## Submission at 2024-09-09 05:48:44


```
class ListNode:
    def _init_(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current_node = head
    
    while current_node is not None:
        result.append(current_node.val)
        current_node = current_node.next
    
    return result

```

## Submission at 2024-09-09 05:49:28


```
class ListNode:
    def _init_(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    curr = head
    count = 1
    while curr is not None:
        if count == k:
            return curr.val 
        curr = curr.next
        count += 1
    
    return -1
    

```

## Submission at 2024-09-09 05:51:40


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev = None
    curr = head
    next = None

    while curr is not None:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
    return prev


```

## Submission at 2024-09-09 05:59:50


```
def diagonal_traversal(matrix):
    result = []
    n = len(matrix) 
    m = len(matrix[0])
    for i_sum in range(0,m+n-1):
        for j in range(0,i_sum + 1):
            i = i_sum - j
            if i < n and j < m:
                result.append(matrix[i][j])
    return result
```

## Submission at 2024-09-09 09:51:24


```
n = int(input())
    if(n**4==0)
        return true
    else
        return false
```

## Submission at 2024-09-09 10:07:36


```
n = int(input("Enter value:"))
for i in range():
    if (n==4**i):
        return true
return false
i=i+1

```

## Submission at 2024-09-09 10:20:48


```
class node:
    def __init__(self,data):
        self.data = data
        self.next = None

def removeDuplicates(head):
    current = head
    while current.data.next == head:
        current = current.next
        current = current.next .next

def print_list(head):
    current = head
    while current:
        print(current.data)
print_list(head))



```

## Submission at 2024-09-09 10:36:26


```
n = int(input("Enter Value:"))

for i in range(1):
   while n == 4**i:
      print("True")
   print("False")
   i=i+1
```

## Submission at 2024-09-09 10:43:37


```
class node:
    def __init__(self, data):
        self.data = data
        self.next = None

def removeDuplicates(head):
    current = head
    while current.next.data == current:
        current = current.next
    current.next = current.next.next

def print_list(head):
    current = head
    while current:
        print(curent.data)
print_list(head)


```

## Submission at 2024-09-09 11:12:37


```
n = int(input("ENter value:"))
 def pof(n):
    for i in range(1):
        if n==4**i:
            print("True")
        else:
            print("False")
            i=i+1
pof(16)


```

## Submission at 2024-10-07 10:20:21


```
def special_discount():
    for i in prices:
        for j in prices:
            if j>i and prices[j]<=prices[i]:
                discount = price[i] - price[j]
            return discount

prices = [10,1,1,6,3]

```

## Submission at 2024-10-07 10:25:46


```
def special_discount():
    for i in prices:
        for j in prices:
            if j>i and prices[j]<=prices[i]:
                discount = price[i] - price[j]
            return discount[i]

prices = [10,1,1,6,3]

```

## Submission at 2024-10-07 10:44:39


```
def special_discount():
    for i in prices:
        for j in prices:
            if j>i and prices[j]<=prices[i]:
                answer[i] = price[i] - price[j]
            return answer[i]

prices = [10,1,1,6,3]
```

## Submission at 2024-10-07 11:00:10


```
def special_discount():
    for i in prices:
        for j in prices:
            if j>i and prices[j]<=prices[i]:
                answer[i] = price[i] - price[j]
            return answer[i]

prices = [10,1,1,6,3]
```

## Submission at 2024-10-07 11:01:25


```
def special_discount(self,prices):
    for i in prices:
        for j in prices:
            if j>i and prices[j]<=prices[i]:
                answer[i] = price[i] - price[j]
            return answer[i]

prices = [10,1,1,6,3]
```

## Submission at 2024-10-07 11:12:42


```
def special_discount(self,prices):
    for i in prices:
        for j in prices:
            if prices[j]>prices[i] and prices[j]<=prices[i]:
                answer[i] = price[i] - price[j]
            return answer[i]

prices = [10,1,1,6,3]
```

## Submission at 2024-10-28 10:43:49


```
int m = INT_MAX;
vector<int> t (node*root){
    vector<int> ans;
    if(root==NULL){
        return{};
    }
    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MAX;
    if(root==NULL){
        return{};
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]<m){
            m=v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:45:40


```
int m = INT_MAX;
vector<int> t(Node *root){
    vector<int> ans;
    if(root==NULL){
        return{};
    }
    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MAX;
    if(root==NULL){
        return{};
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]<m){
            m=v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:47:26


```
int m = INT_MAX;
vector<int> t(Node *root){
    vector<int> ans;
    if(root==NULL){
        return{};
    }
    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MAX;
    if(root==NULL){
        return{};
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]<m){
            m=v1[i];
        }
    }
}


```

## Submission at 2024-10-28 11:06:33


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMax(Node root){
        if(root.data==0){
            return 1;
        }
        return root.data;
        //code here
    }
}
```

## Submission at 2024-10-28 11:10:18


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMax(Node root){
        if(root.data==0){
            return 1;
        }
        return root.data;
        //code here
    }
    void int help(Node left, node right){
        if(root.left.data == NULL || root.right.data==NULL){
            return root;
        }

    }
}
```

## Submission at 2024-10-28 11:10:45


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMax(Node root){
        if(root.data==0){
            return 1;
        }
        return root.data;
        //code here
    }


    }
}
```

## Submission at 2024-10-28 11:11:29


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMax(Node root){
        if(root.data==0){
            return 1;
        }
        return root.data;
        //code here
    }


    
}
```

## Submission at 2024-10-28 11:18:22


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    
    Integer maxDepth(Node root)
    {
       // Your code goes here
       if(root==0){
          return 1
       }
      
    }
}
```

## Submission at 2024-10-28 11:18:28


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    
    Integer maxDepth(Node root)
    {
       // Your code goes here
       if(root==0){
          return 1;
       }
      
    }
}
```

## Submission at 2024-10-28 11:23:23


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
    # code here
    if not root:
      return 0
    return 1+max(
      maxDepth(root.left).maxDepth(root.right)
    )
```

## Submission at 2024-10-28 11:25:11


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
    # code here
    if not root:
      return 0
    return 1+max(
      maxDepth(root.left)
      maxDepth(root.right)
    )
```

## Submission at 2024-10-28 11:27:17


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
    if not root:
      return 0
    return 1+max(maxDepth(root.left).maxDepth(root.right))
```

## Submission at 2024-10-28 11:28:31


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
  if not root:
    return 0
  return 1+max(maxDepth(root.left).maxDepth(root.right))
```

## Submission at 2024-10-28 11:29:06


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
  if not root:
    return 0
  return 1+max(maxDepth(root.left).maxDepth(root.right))
```

## Submission at 2024-10-28 11:29:55


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
  if not root:
    return 0
  return 1+max(maxDepth(root.left).maxDepth(root.right))
```

## Submission at 2024-11-25 09:53:52


```
print("*")
print(n)
```

## Submission at 2024-11-25 09:56:17


```
n = ("*")
print(n)
```

## Submission at 2024-11-25 10:00:55


```
n = 3
print(n)
```

## Submission at 2024-11-25 10:07:59


```
n = ("*")
print(n)
```

## Submission at 2024-11-25 10:15:31


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:21:36


```
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:21:43


```
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:26:56


```
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 11:01:47


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<"Hello "<<s<<"!"<<endl;
    }
}
```

## Submission at 2024-11-25 11:04:46


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<"Hello "<<s<<"!"<<endl;
    }
}
```

## Submission at 2024-11-25 11:09:03


```
def next_great(letters,target):
    for letter in letters:
        if letter>target:
            return letter
    return letters[0]

n = int(input())
letters = input().split()
target = input()
print(next_great(letters,target))
```

## Submission at 2024-11-25 11:18:45


```
n = int(input())
numbers = list(map(int, input().split()))
odd_count = sum(1 for num in numbers if num%2!=0)
even_count = sum(1 for num in numbers if num%2==0)
print(odd_count, even_count)
```

## Submission at 2024-11-25 11:41:29


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def minElementInBST(root) -> int:
  if not root:
    return None
  current = root
  while current.left:
    current = current.left
  return current.data
    # code here
```

