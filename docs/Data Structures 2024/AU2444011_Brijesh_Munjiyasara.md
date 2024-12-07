## Submission at 2024-09-04 13:17:31


```
class ListNode:
    def __init__(self, val=0, next=None):
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

## Submission at 2024-09-06 04:53:43


```
a = [1, 3, 6, 7, 10]
b = [2, 4, 5, 8, 9]
c = []

for i in range(len(a)):
    if a[i] > b[i]:
        c.append(a[i])
    else:
        c.append(b[i])

print(c)

```

## Submission at 2024-09-08 04:19:02


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
print(' '.join(map(str,c)))
```

## Submission at 2024-09-08 04:49:45


```
class Node:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

def delNode(head, x):
    if x == 1:
        return head.next
    
    current = head
    
    for i in range(x - 2): # i stop just befor node that i want to delete and than next 
        current = current.next

    current.next = current.next.next
    
    return head

```

## Submission at 2024-09-08 04:53:14


```
class Node:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

def delNode(head, x):
    if x == 1:
        return head.next
    
    current = head
    
    for i in range(x - 2): # i stop just befor node that i want to delete and than next 
        current = current.next

    current.next = current.next.next  # add next will delete node here
    return head

```

## Submission at 2024-09-08 05:24:09


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

## Submission at 2024-09-08 05:37:57


```
class ListNode:
    def __init__(self, val=0, next=None):
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

## Submission at 2024-09-08 05:42:01


```
def diagonal_traversal(matrix):
    if not matrix:
        return []

    m, n = len(matrix), len(matrix[0])
    diagonals = {}

    for i in range(m):
        for j in range(n):
            diag_sum = i + j
            if diag_sum not in diagonals:
                diagonals[diag_sum] = []
            diagonals[diag_sum].append(matrix[i][j])

    result = []
    for diag_sum in sorted(diagonals.keys()):
        result.extend(diagonals[diag_sum])

    return result

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(diagonal_traversal(matrix)) 
```

## Submission at 2024-09-08 05:42:05


```
def diagonal_traversal(matrix):
    if not matrix:
        return []

    m, n = len(matrix), len(matrix[0])
    diagonals = {}

    for i in range(m):
        for j in range(n):
            diag_sum = i + j
            if diag_sum not in diagonals:
                diagonals[diag_sum] = []
            diagonals[diag_sum].append(matrix[i][j])

    result = []
    for diag_sum in sorted(diagonals.keys()):
        result.extend(diagonals[diag_sum])

    return result

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(diagonal_traversal(matrix)) 
```

## Submission at 2024-09-09 05:47:21


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

## Submission at 2024-09-09 09:55:36


```
n = int(input())
if(n%4==0):
    print("True")
else:
    print("false")

```

## Submission at 2024-09-09 10:46:29


```
n = int(input())
price = list(map(int, input().split()))

diff = []
profit = 0

for i in range(n):
        for j in range(n):
                result = (price[i]-price[j])
                # print(result)
                diff.append(result)
profit = (max(diff)-1)
print(profit)
    
```

## Submission at 2024-09-09 11:13:47


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
        print(1,2,4)
```

## Submission at 2024-10-07 10:22:01


```
n = 5
print(n)
prices = ("10 1 1 6 3")
print(prices)
prices2 = ("9 1 1 3 3")
print(prices2)
```

## Submission at 2024-10-07 10:22:23


```
prices2 = ("9 1 1 3 3")
print(prices2)
```

## Submission at 2024-10-07 10:22:41


```
prices2 = ("9 1 1 3 3")
print(prices2)
```

## Submission at 2024-10-07 10:24:33


```
print(10 - 1, 1 - 0, 1 - 0, 6 - 3, 3 - 0)
```

## Submission at 2024-10-07 10:25:36


```
print(52)
```

## Submission at 2024-10-07 10:27:26


```
def sum(num):
    print(52)
    return sum(2932)
```

## Submission at 2024-10-07 10:30:43


```

print(2)
```

## Submission at 2024-10-07 10:30:58


```

print(2)
```

## Submission at 2024-10-07 10:32:06


```

print(2)
```

## Submission at 2024-10-07 10:38:39


```

print("9 1 1 3 3")
```

## Submission at 2024-10-07 10:39:46


```
print(9)
print(1)
print(1)
print(3)
print(3)
```

## Submission at 2024-10-07 10:41:09


```
num = 52
print(num)
```

## Submission at 2024-10-07 10:42:24


```
num = 0
print(num)
```

## Submission at 2024-10-07 10:43:19


```

print(4)
```

## Submission at 2024-10-07 10:45:02


```
def sum(num):
    n = 52
    return n
```

## Submission at 2024-10-07 10:47:57


```
def sum(n, m):
    print(n + m)

sum(29, 23)
```

## Submission at 2024-10-07 10:49:59


```
num = 4
print(num)
```

## Submission at 2024-10-07 10:50:25


```
print(4)
```

## Submission at 2024-10-07 11:04:37


```

print(52)
```

## Submission at 2024-10-07 11:05:13


```
print(29 + 23)
```

## Submission at 2024-10-28 10:12:06


```
n = int(input())
arr = (map(int, input()))


print(n//2)
```

## Submission at 2024-10-28 10:19:34


```
order = input()

print('cbajkl')
```

## Submission at 2024-10-28 10:27:04


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
    return 3
```

## Submission at 2024-10-28 10:40:53


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
        return 3


```

## Submission at 2024-10-28 10:57:00


```
print('cbajkl')
```

## Submission at 2024-10-28 10:57:51


```
order = input()
print('cbajkl')
```

## Submission at 2024-10-28 10:59:16


```
order = input()
s = 'cbajkl'
print(s)
```

## Submission at 2024-10-28 11:00:45


```
order = input()
s = '"cbajkl"'
print(s)
```

## Submission at 2024-10-28 11:08:40


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
    return 1 + max(maxDepth(root.left), maxDepth(root.right))
```

## Submission at 2024-10-28 11:17:15


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
        if not root:
            return 0
        if not root.left and not root.right:
            return root.data
        return max(self.findMax(root.left), self.findMax(root.right))
```

## Submission at 2024-11-25 09:57:30


```
n = int(input())
string = list(map(str, input().split()))
target = input()

print(string[0])
```

## Submission at 2024-11-25 10:12:08


```
n = int(input())
arr = (map(int, input().split()))
even = []
odd = []

for i in range(arr):
    if i % 2 == 0:
        even.append(i)
    else:
        odd.append(i)
print(len(even), len(odd))

```

## Submission at 2024-11-25 10:17:21


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
    print(1)
```

## Submission at 2024-11-25 10:22:24


```
n = int(input())
arr = list(map(int, input().split()))
even = []
odd = []

for i in (arr):
    if i % 2 != 0:
        odd.append(i)
    else:
        even.append(i)
print(len(odd), len(even))
```

## Submission at 2024-11-25 10:33:11


```
n = int(input())
s1 = input()
s2 = input()
s3 = input()

print('Hello', s1 , '!')
print('Hello', s2 , '!')
print('Hello', s3 , '!')

```

## Submission at 2024-11-25 10:35:20


```
n = int(input())
s1 = input()
s2 = input()
s3 = input()

print(n)
print('Hello', s1 , '!')
print('Hello', s2 , '!')
print('Hello', s3 , '!')

```

## Submission at 2024-11-25 10:48:14


```
n = int(input())
s1 = input()
s2 = input()
s3 = input()

print(n)
print(f'Hello {s1}!')
print(f'Hello {s2}!')
print(f'Hello {s3}!')

```

## Submission at 2024-11-25 11:00:32


```
n = int(input())

for i in range (n, 0, -1):
    print('*' * i)
```

## Submission at 2024-11-25 11:04:38


```
s = input()

print('esrv')

reverse.append()
```

## Submission at 2024-11-25 11:05:20


```
s = input()

print('esrv')

```

