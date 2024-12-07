## Submission at 2024-09-02 10:59:01


```
# Write code from scratch
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = [max(a[i] , b[i]) for i in range(n)]
print(" ".join(map(str,c)))
```

## Submission at 2024-09-02 11:03:42


```
# Write code from scratch
n = int(input())  # Taking the number of elements
a = list(map(int,input().split()))  # spliting the converted integers into list a
b = list(map(int,input().split()))  # spliting the converted integers into list b
c = [max(a[i] , b[i]) for i in range(n)] # Taking the maximum value from a and b elements 
print(" ".join(map(str,c))) # separating string elements of list and printinf it
```

## Submission at 2024-09-04 11:49:25


```
n = int(input())

a = list(map(int , input().split()))

b = list(map(int , input().split()))

c = [max(a[i] ,b[i]) for i in range(n)]

print(c)
```

## Submission at 2024-09-04 12:04:56


```
n = int(input())

a = list(map(int , input().split()))

b = list(map(int , input().split()))

c = [max(a[i] ,b[i]) for i in range(n)]

" ".join(map(str,c))
```

## Submission at 2024-09-04 12:05:56


```
n = int(input())

a = list(map(int , input().split()))

b = list(map(int , input().split()))

c = [max(a[i] ,b[i]) for i in range(n)]

print(" ".join(map(str,c)))
```

## Submission at 2024-09-04 12:23:54


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    current_node = head

    while current_node is not None:
        result.append(current_node.val)

        current_node  = current_node.next
    return result

```

## Submission at 2024-09-04 13:24:01


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if k == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if k is None:
            return head

    prev.next = current.next 

    return head


```

## Submission at 2024-09-05 07:15:14


```
def get_kth_node(head, k):
    current = head
    count = 1

    while current is not None:
        if count == k:
            return current.val

        current.next
        count+=1

    return -1
    
    

```

## Submission at 2024-09-05 07:19:42


```
def get_kth_node(head, k):
    current = head
    count = 1

    while current is not None:
        if count == k:
            return current.val

        current.next
        count+=1

    return -1
    
    

```

## Submission at 2024-09-05 07:20:34


```
def get_kth_node(head, k):
    current = head
    count = 1

    while current is not None:
        if count == k:
            return current.val

        current = current.next
        count+=1

    return -1
    
    

```

## Submission at 2024-09-05 07:53:11


```
def reverseLinkedList(head):
    current = head
    prev = None

    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node

    return prev


```

## Submission at 2024-09-05 08:55:31


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

    prev.next = current.next

    return head


```

## Submission at 2024-09-05 08:56:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head


    prev.next = current.next

    return head


```

## Submission at 2024-09-05 08:57:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head

    prev.next = current.next

    return head


```

## Submission at 2024-09-05 08:59:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head

    prev.next = current.next

    return head


```

## Submission at 2024-09-05 09:00:03


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head

    prev.next = current.next

    return head


```

## Submission at 2024-09-05 09:00:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head

    prev.next = current.next

    return head 

    


```

## Submission at 2024-09-05 09:01:19


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head

    prev.next = current.next

    return head


```

## Submission at 2024-09-05 09:01:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if head is None or k < 1:
        return head

    if head == 1:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if current is None:
            return head

    prev.next = current.next

    return head


```

## Submission at 2024-09-09 04:32:28


```

def diagonal_traversal(matrix):
    # Get the number of rows and columns from the matrix
    m = len(matrix)
    n = len(matrix[0]) if m > 0 else 0
    
    result = []
    
    # Traverse from the first row (starting points: (0,0) to (0,n-1))
    for start_col in range(n):
        row = 0
        col = start_col
        diagonal = []
        
        while row < m and col >= 0:
            diagonal.append(matrix[row][col])
            row += 1
            col -= 1
        
        result.extend(diagonal)
    
    # Traverse from the left-most column (starting points: (1,0) to (m-1,0))
    for start_row in range(1, m):
        row = start_row
        col = n - 1
        diagonal = []
        
        while row < m and col >= 0:
            diagonal.append(matrix[row][col])
            row += 1
            col -= 1
        
        result.extend(diagonal)
    
    return result
```

## Submission at 2024-09-09 04:34:42


```

def diagonal_traversal(matrix):

    m = len(matrix)
    n = len(matrix[0])
    result = []
    
    # Traverse diagonals starting from the first row
    for col in range(n):
        row, current_col = 0, col
        diagonal = []
        
        while row < m and current_col >= 0:
            diagonal.append(matrix[row][current_col])
            row += 1
            current_col -= 1
        
        result.extend(diagonal)
    
    # Traverse diagonals starting from the left-most column (excluding the first diagonal)
    for row in range(1, m):
        current_row, col = row, n - 1
        diagonal = []
        
        while current_row < m and col >= 0:
            diagonal.append(matrix[current_row][col])
            current_row += 1
            col -= 1
        
        result.extend(diagonal)
    
    return result

    
```

## Submission at 2024-09-09 04:37:23


```

def diagonal_traversal(matrix):
    m = len(matrix)
    n = len(matrix[0])
    result = []
    
    # Traverse diagonals starting from the first row
    for col in range(n):
        row, current_col = 0, col
        diagonal = []
        
        while row < m and current_col >= 0:
            diagonal.append(matrix[row][current_col])
            row += 1
            current_col -= 1
        
        # Reverse every alternate diagonal (diagonals starting from top row)
        if col % 2 == 0:
            result.extend(diagonal)
        else:
            result.extend(diagonal[::-1])
    
    # Traverse diagonals starting from the left-most column (excluding the first diagonal)
    for row in range(1, m):
        current_row, col = row, n - 1
        diagonal = []
        
        while current_row < m and col >= 0:
            diagonal.append(matrix[current_row][col])
            current_row += 1
            col -= 1
        
        # Reverse every alternate diagonal (diagonals starting from the left column)
        if (n + row - 1) % 2 == 0:
            result.extend(diagonal)
        else:
            result.extend(diagonal[::-1])
    
    return result

    

    
```

## Submission at 2024-09-09 05:05:50


```
n = int(input())

nums = list(map(int,input().split()))

count = 0

for num in nums:
    if len(str(num)) % 2 == 0:
        count+=1

print(count)
```

## Submission at 2024-09-09 06:59:37


```
def delNode(head, k):
    if k < 1 or head is None:
        return head
    
    if k == head:
        return head.next

    current = head
    prev = None

    for _ in range(k-1):
        prev = current
        current = current.next

        if head is None:
            return head

        prev.next = current.next
            
    return head



```

## Submission at 2024-09-09 07:09:52


```
def get_kth_node(head, k):
    current = head
    count = 1

    while current:
        if count == k:
            return current.val

        current = current.next
        count+=1

    return -1

    

```

## Submission at 2024-09-09 07:29:26


```
def traverse_linked_list(head):
    result = []
    
    current = head

    while current:
        result.append(current.val)

        current = current.next

    return result

```

## Submission at 2024-09-09 07:30:50


```
def traverse_linked_list(head):
    result = []
    
    current = head

    while current:
        result.append(current.val)

        current = current.next

    return result

```

## Submission at 2024-09-09 10:03:53


```
n = int(input())

def factFour(n)
{
    return 
}
```

## Submission at 2024-09-09 10:16:32


```
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        result = Solution().addTwoLists(num1, num2)
        print(result)
```

## Submission at 2024-09-09 10:24:26


```
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        
```

## Submission at 2024-09-09 10:24:40


```
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        current = head
        res1 = []
        for x in num1:
            x = current.val
            res1.append(x)
            current = current.next

        print(res1)
```

## Submission at 2024-09-09 10:34:23


```
def removeDuplicates(head):
    current = head.next
    prev = head
    # res = []

    while current:
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head



```

## Submission at 2024-09-09 10:44:12


```
def removeDuplicates(head):
    current = head
    prev = None
    # res = []

    while current:
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head

```

## Submission at 2024-09-09 10:49:47


```
def removeDuplicates(head):
    current = head.next
    prev = head
    # res = []

    while current:
        if prev == current:
            prev.next = current.next
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head

```

## Submission at 2024-09-09 10:52:43


```
def removeDuplicates(head):
    current = head.next
    prev = head
    
    if prev == current:
            prev.next = current.next

    while current:
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-09-09 10:55:59


```
def removeDuplicates(head):
    current = head.next
    prev = None
    
    while current and prev is not None:
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-09-09 11:00:39


```
def removeDuplicates(head):
    current = head
    prev = None
    
    while current and prev is not None:
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-09-09 11:06:02


```
def removeDuplicates(head):
    current = head.next
    prev = head
    
    while current:
        if current.next == head:
            current = current.next.next
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-09-09 11:07:37


```
def removeDuplicates(head):
    current = head.next
    prev = head
    
    while current:
        if current == prev:
            current = current.next
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-09-09 11:10:46


```
def removeDuplicates(head):
    current = head.next
    prev = head
    
    while current:
        if current == prev:
            prev = current.next
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-09-09 11:13:03


```
def removeDuplicates(head):
    current = head.next
    prev = head
    
    while current:
        if prev == current:
            prev.next = current.next
        current = current.next
        prev = prev.next

        if prev == current:
            prev.next = current.next

        return head
```

## Submission at 2024-11-25 09:50:25


```
# Write Python Code from scratch
n = int(input())

print(n)
```

## Submission at 2024-11-25 09:52:16


```
# Write Python Code from scratch
n = int(input())

str = input()

print(str)
```

## Submission at 2024-11-25 10:11:42


```
n = int(input())

for i in range(n):
    str = input()

print(str)
```

## Submission at 2024-11-25 10:19:57


```
n = int(input())
a = []

for i in range(n):
    a.append(input())

for j in a:
    print("Hello " + j + "!")
```

## Submission at 2024-11-25 10:38:01


```
n = int(input())
a = []

for 
```

## Submission at 2024-11-25 10:43:29


```
n = int(input())
a = []
oddFlag = 0
evenFlag = 0

for i in range(n):
    a.append(int(input()))

for j in a:
    if j % 2 ==0:
        evenFlag + 1
    else:
        oddFlag + 1

print(evenFlag)
```

## Submission at 2024-11-25 10:50:06


```
n = int(input())
a = []
oddFlag = 0
evenFlag = 0

for i in range(n):
    a.append(input())

for j in a:
    if j % 2 ==0:
        evenFlag + 1
    else:
        oddFlag + 1

print(evenFlag)
```

## Submission at 2024-11-25 10:50:42


```
n = int(input())
a = []
oddFlag = 0
evenFlag = 0

for i in range(n):
    a.append(input())

for j in a:
    if j % 2 ==0:
        evenFlag + 1
    else:
        oddFlag + 1

print(oddFlag + evenFlag)
```

## Submission at 2024-11-25 10:51:02


```
n = int(input())
a = []
oddFlag = 0
evenFlag = 0

for i in range(n):
    a.append(input())

for j in a:
    if j % 2 ==0:
        evenFlag += 1
    else:
        oddFlag += 1

print(oddFlag + evenFlag)
```

## Submission at 2024-11-25 10:58:59


```
n = int(input())
a = []
oddFlag = 0
evenFlag = 0

for i in range(n):
    a.append(int(input()))

for j in a:
    if j % 2 ==0:
        evenFlag += 1
    else:
        oddFlag += 1

print(oddFlag + evenFlag)
```

## Submission at 2024-11-25 11:12:06


```
n = int(input())
a = []

for i in range(n):
    num = input()
    a.append(num)

print(a)
```

## Submission at 2024-11-25 11:24:15


```
n = int(input())
a = [1,2,3,4,5]
oddFlag = 0
evenFlag = 0

for i in a:
    if i % 2 == 0:
        evenFlag += 1
    else:
        oddFlag += 1

print(oddFlag,evenFlag)

```

## Submission at 2024-11-25 11:24:15


```
n = int(input())
a = [1,2,3,4,5]
oddFlag = 0
evenFlag = 0

for i in a:
    if i % 2 == 0:
        evenFlag += 1
    else:
        oddFlag += 1

print(oddFlag,evenFlag)

```

## Submission at 2024-11-25 11:25:30


```
n = int(input())
a = [1,2,3,4,5]
oddFlag = 0
evenFlag = 0

for i in a:
    if i % 2 == 0:
        evenFlag += 1
    else:
        oddFlag += 1

print(oddFlag,evenFlag)

```

