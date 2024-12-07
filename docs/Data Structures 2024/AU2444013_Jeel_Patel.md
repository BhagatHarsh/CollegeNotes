## Submission at 2024-09-02 10:47:09


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

## Submission at 2024-09-02 11:10:40


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    current = head

    # Traverse the linked list until we reach the end
    while current is not None:
        # Append the current node's value to the result list
        result.append(current.val)
        # Move to the next node
        current = current.next
    
    return result

# Helper function to create a linked list from a list of values (for testing purposes)
def create_linked_list(values):
    if not values:
        return None
    
    head = ListNode(values[0])
    current = head
    
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    # Your code here
    return result

```

## Submission at 2024-09-02 11:18:56


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

## Submission at 2024-09-09 06:27:01


```
# Write code from scratch
# Input the size of the arrays
n = int(input())

# Input arrays a and b
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Create array c where each element is the max between a[i] and b[i]
c = [max(a[i], b[i]) for i in range(n)]

# Output the result array c
print(" ".join(map(str, c)))

```

## Submission at 2024-09-09 06:30:35


```

def diagonal_traversal(matrix):
    # Your code here
    m = len(matrix)
    n = len(matrix[0])
    
    result = []
    
    # We need to traverse diagonally by starting from two regions
    # 1. From the first column (row varying from 0 to m-1)
    for start_row in range(m):
        i, j = start_row, 0
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)
    
    # 2. From the top row (column varying from 1 to n-1)
    for start_col in range(1, n):
        i, j = m - 1, start_col
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)
    
    return result
    
    

```

## Submission at 2024-09-09 06:35:06


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    prev = None
    current = head
    
    while current:
        next_node = current.next  # Store the next node
        current.next = prev       # Reverse the current node's pointer
        prev = current            # Move prev to current node
        current = next_node       # Move current to the next node
    
    # At the end, prev will be the new head of the reversed list
    return prev

# Helper function to create a linked list from a list of values (for testing)
def create_linked_list(values):
    if not values:
        return None
    
    head = Node(values[0])
    current = head
    
    for value in values[1:]:
        current.next = Node(value)
        current = current.next
    
    return head

# Helper function to print linked list values (for verification)
def print_linked_list(head):
    current = head
    while current:
        print(current.data, end=" ")
        current = current.next
    print()


```

## Submission at 2024-09-09 09:56:26


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is next
        return head

    current = head
    while current:
        if current = next
            
        


```

## Submission at 2024-09-09 10:02:26


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        result1 = []
        result2 = []
        current1 = num1
        current2 = num2
        while current1:
            result1.append(current1.value)
            current1 = current1.next
        while current2:
            result2.append(current2.value)
            current2 = current2.next
        

```

## Submission at 2024-09-09 10:05:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is next
        return head

    current = head
    while current:
        if current = next


```

## Submission at 2024-09-09 10:12:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head != next:
        return head

    current = head
    return current.next.data == current.data
    


```

## Submission at 2024-09-09 10:20:09


```
# write code from scratch
def powerfour(n):
    result = True
        
    for i in range(0, 31):
        if 4**i == n:
            result = True
            break
        else:
            result = False
        return result
        

n = input()
result = powerfour(n)
print(result)
```

## Submission at 2024-09-09 10:30:08


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        result1 = []
        result2 = []
        current1 = num1
        current2 = num2
        while current1:
            result1.append(current1.val)
            current1 = current1.next
        while current2:
            result2.append(current2.val)
            current2 = current2.next


```

## Submission at 2024-09-09 10:34:29


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        result1 = []
        result2 = []
        curr1 = num1
        curr2 = num2
        while curr1:
            result1.append(curr1.data)
            curr1 = curr1.next
        while curr2:
            result2.append(curr2.data)
            curr2 = curr2.next
        return 123
        
    


```

## Submission at 2024-09-09 10:36:16


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        result1 = []
        result2 = []
        curr1 = num1
        curr2 = num2
        while curr1:
            result1.append(curr1.val)
            curr1 = curr1.next
        while curr2:
            result2.append(curr2.val)
            curr2 = curr2.next
        return 123
        
    


```

## Submission at 2024-09-09 10:46:55


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        res1 = []
        res2 = []
        curr1 = num1
        curr2 = num2
        while curr1:
            res1.append(curr1.data)
            curr1 = curr1.next
        while curr2:
            res2.append(curr2.data)
            curr2 = curr2.next
        return False
        

```

## Submission at 2024-09-09 10:48:22


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        res1 = []
        res2 = []
        curr1 = num1
        curr2 = num2
        while curr1:
            res1.append(curr1.data)
            curr1 = curr1.next
        while curr2:
            res2.append(curr2.data)
            curr2 = curr2.next
        return False
        

```

## Submission at 2024-09-09 10:53:34


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        res1 = []
        res2 = []
        curr1 = num1
        curr2 = num2
        while curr1:
            res1.append(curr1.data)
            curr1 = curr1.next
        while curr2:
            res2.append(curr2.data)
            curr2 = curr2.next
        return curr2

```

## Submission at 2024-09-09 10:58:51


```
# write code from scratch
def powerfour(n):
    result = True
        
    for i in range(0, 31):
        if n*i == n:
            result = True
            break
        else:
            result = False
        return result
        

n = input()
result = powerfour(n)
print(result)
```

## Submission at 2024-09-09 11:00:39


```
# write code from scratch
def powerfour(n):
    result = True
        
    for i in range(0, 31):
        if 4**i == n:
            result = True
            break
        else:
            result = False
        return result
        

n = input()
result = powerfour(n)
print(result)
```

## Submission at 2024-09-09 11:07:25


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        result1 = []
        result2 = []
        curr1 = num1
        curr2 = num2
        while curr1:
            result1.append(curr1.data)
            curr1 = curr1.next
        while curr2:
            result2.append(curr2.data)
            curr2 = curr2.next
        number1 = result1[::1]
        number2 = result2[::1]
        number3 = number1 + number2
        print(number3)
        

```

## Submission at 2024-10-28 10:06:59


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMax(self,root):
        self.data = root
        print(root) 

        #code here


```

## Submission at 2024-10-28 10:31:43


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
        List<Integer> result = new ArrayList();
        max(root,result);
        return ;
    
    }

    private static void max(Node root, List<Integer> result)
    {
        if (root==null)
        return;
        result.add(root.data);
        max(root.left,result);
        max(root.right,result);
    }
}
```

## Submission at 2024-10-28 10:46:29


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
```

## Submission at 2024-10-28 10:57:56


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
  if not root !=0:
    return root


    # code here
```

## Submission at 2024-10-28 11:09:24


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
    return 1+max(maxDepth(root.left)(root.right))
    # code here
```

## Submission at 2024-10-28 11:14:28


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
    # code here
```

## Submission at 2024-10-28 11:15:58


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
    return 1+max(maxDepth(root.left),maxDepth(root.right))
    # code here
```

## Submission at 2024-10-28 11:17:31


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
  return 1+max(maxDepth(root.left),maxDepth(root.right))
    # code here
```

## Submission at 2024-11-25 09:51:19


```
# Write Python Code from scratch
n=3
print(n)
a='Tony'
b='Steve'
c='Banner'
print(a)
print(b)
print(c)
```

## Submission at 2024-11-25 09:52:59


```
# Write Python Code from scratch
n=3
print(n)
a='Hello Tony!'
b='Hello Steve'
c='Hello Banner'
print(a)
print(b)
print(c)
```

## Submission at 2024-11-25 10:01:43


```
# Write Python Code from scratch
n=3
print(n)
a='Hello Tony!'
b='Hello Steve!'
c='Hello Banner!'
print(a)
print(b)
print(c)

```

## Submission at 2024-11-25 10:16:44


```
# write code from scratch
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0
        even+=1
        else:
            odd=1

    result=[]
    result.append(odd)
    result.append(even)
    return result

n=input("")
array=input("")
array=array.split(" ")
print(*count_odd_even(array))
```

## Submission at 2024-11-25 10:18:02


```
# write code from scratch
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0;
        even+=1
        else:
            odd=1

    result=[]
    result.append(odd)
    result.append(even)
    return result

n=input("")
array=input("")
array=array.split(" ")
print(*count_odd_even(array))
```

## Submission at 2024-11-25 10:21:23


```
# write code from scratch
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0:
            even+=1
        else:
            odd=1

    result=[]
    result.append(odd)
    result.append(even)
    return result

n=input("")
array=input("")
array=array.split(" ")
print(*count_odd_even(array))
```

## Submission at 2024-11-25 10:25:42


```
# write code from scratch
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0:
            even+=1
        else:
            odd=1

    result=[]
    result.append(even)
    result.append(odd)
    return result

n=input("")
array=input("")
array=array.split(" ")
print(*count_odd_even(array))
```

## Submission at 2024-11-25 10:53:27


```
# write code from scratch
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0:
            even+=1
        else:
            odd=1

    result=[]
    result.append(even)
    result.append(odd)
    return result

n=input("")
array=input("")
array=array.split(" ")
print(count_odd_even(array))
```

## Submission at 2024-11-25 10:55:52


```
# write code from scratch
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0:
            even+=1
        else:
            odd=1

    result=[]
    result.append(even)
    result.append(odd)
    return result

n=input("")
array=input("")
array=array.split(" ")
print(*count_odd_even(array))
```

## Submission at 2024-11-25 11:07:17


```
# Write Python code from scratch
n=int(input(""))
for i in range(n):
    for j in range(n-1):
        print("*",end=" ")
    print()
```

## Submission at 2024-11-25 11:16:39


```
// Write C++ Code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 11:30:26


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    Write (t--){
        string s;
        cin >> s;
        cout << "Hello " <<s<<"!"<<endl;
    }
}
```

## Submission at 2024-11-25 11:43:55


```
// Write C++ code from scratch

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        cout << "Hello " <<s<<"!"<<endl;
    }
}
```

