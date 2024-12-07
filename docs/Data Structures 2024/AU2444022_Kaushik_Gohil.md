## Submission at 2024-08-12 10:02:11


```
def fibonacci(x:int) -> int:
    if x <= 1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:11:50


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    if n == 1:
        return True
    if n % 2 != 0:
        return False
    return is_power_of_two(n // 2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 10:21:05


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def remove_first_node():
    if head == None:
        return
    head = head.next
def delNode(head, index):
    if head == None:
        return
    current_node = head
    position = 0
    if position == index:
        self.remove_first_node()
    else:
        while(current_node != None and position +1 != index):
            position = position+1
            current_node = current_node.next
        if current_node != None:
            current_node.next = current_node.next.next
        else:
            print("Index not present")
    # Code here


```

## Submission at 2024-09-02 10:23:29


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def remove_first_node():
    if head == None:
        return
    head = head.next
def delNode(head, index):
    if head == None:
        return
    current_node = head
    position = 0
    if position == index:
        self.remove_first_node()
    else:
        while(current_node != None and position +1 != index):
            position = position+1
            current_node = current_node.next
        if current_node != None:
            current_node.next = current_node.next.next
        else:
            return


```

## Submission at 2024-09-02 10:39:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def remove_first_node():
    if head == None:
        return
    head = head.next
def delNode(head, index):
    if head == None:
        return
    current_node = head
    position = 0
    if index == 1:
        return remove_first_node(head)
    else:
        while(current_node != None and position +1 != index):
            position = position+1
            current_node = current_node.next
    if current_node != None:
        current_node.next = current_node.next.next
    else:
        return

def print_linked_list(head):
    current = head
    while current:
        print(current_node, end = ' ')
        current = current.next
    print()

if __name__ == "__main__":
    # Input size and elements
    n = int(input())
    elements = list(map(int, input().split()))
    
    # Index to be deleted
    index = int(input())

    # Create linked list from input elements
    head = Node(elements[0])
    current_node = head
    for i in range(1, n):
        current_node.next = Node(elements[i])
        current_node = current_node.next
    
    # Delete the node at the given index
    head = delNode(head, index)

    # Print the updated linked list
    print_linked_list(head)
```

## Submission at 2024-09-02 11:01:56


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def remove_first_node():
    if head == None:
        return
    head = head.next
def delNode(head, index):
    if head == None:
        return
    current_node = head
    position = 0
    if index == 1:
        return remove_first_node(head)
    else:
        while(current_node != None and position +1 != index):
            position = position+1
            current_node = current_node.next
    if current_node != None:
        current_node.next = current_node.next.next
    else:
        return

```

## Submission at 2024-09-02 11:05:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def remove_first_node():
    if head == None:
        return
    head = head.next
def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)

    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    
    if current_node.next is not None:
        current_node.next = current_node.next.next
    
    return head

```

## Submission at 2024-09-02 11:06:38


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)

    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    
    if current_node.next is not None:
        current_node.next = current_node.next.next
    
    return head

```

## Submission at 2024-09-02 11:07:02


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)

    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    
    if current_node.next is not None:
        current_node.next = current_node.next.next
    
    return head

```

## Submission at 2024-09-02 11:08:26


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)

    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    
    if current_node.next is not None:
        current_node.next = current_node.next.next
    
    return head

```

## Submission at 2024-09-02 11:08:53


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)

    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    
    if current_node.next is not None:
        current_node.next = current_node.next.next
    
    return head
    

```

## Submission at 2024-09-02 11:09:27


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)

    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    
    if current_node.next is not None:
        current_node.next = current_node.next.next
    
    return head 

```

## Submission at 2024-09-02 11:09:44


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)
    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    if current_node.next is not None:
        current_node.next = current_node.next.next
    return head 

```

## Submission at 2024-09-02 11:10:58


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)
    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    if current_node.next is not None:
        current_node.next = current_node.next.next
    return head 




```

## Submission at 2024-09-02 11:11:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)
    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    if current_node.next is not None:
        current_node.next = current_node.next.next
    return head 

```

## Submission at 2024-09-02 11:13:20


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, index):
    if head is None:
        return None
    if index == 1:
        return remove_first_node(head)
    current_node = head
    for _ in range(index - 2):
        if current_node.next is None:
            return head
        current_node = current_node.next
    if current_node.next is not None:
        current_node.next = current_node.next.next
    return head 

```

## Submission at 2024-09-02 11:14:01


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, index):
    if index == 1:
        return head.next
    
    current_node = head
    for _ in range(index - 2):
        if not current_node.next:
            return head
        current_node = current_node.next
    
    if current_node.next:
        current_node.next = current_node.next.next

    return head

```

## Submission at 2024-09-02 11:17:39


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while temp != head:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:18:03


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while temp != head:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:18:56


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while temp != head:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:20:11


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while temp != None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 12:00:11


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    current = head
    count = 1 
    
    while current:
        if count == k:
            return current.value
        current = current.next
        count += 1
    
    return -1 
```

## Submission at 2024-09-02 12:00:42


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    current = head
    count = 1 
    
    while current:
        if count == k:
            return current.value
        current = current.next
        count += 1
    
    return -1 


```

## Submission at 2024-09-02 12:01:07


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    current = head
    count = 1 
    
    while current:
        if count == k:
            return current.value
        current = current.next
        count += 1
    
    return -1 


```

## Submission at 2024-09-02 12:04:22


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def get_kth_node(head, k):
    current = head
    count = 1  # Start counting from 1 since k is 1-based index
    
    while current:
        if count == k:
            return current.value
        current = current.next
        count += 1
    
    return -1 

```

## Submission at 2024-09-02 12:04:39


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def get_kth_node(head, k):
    current = head
    count = 1  # Start counting from 1 since k is 1-based index
    
    while current:
        if count == k:
            return current.value
        current = current.next
        count += 1
    
    return -1 
    
```

## Submission at 2024-09-04 10:48:43


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp = head
    count = 1

    while temp is not None:
        if count == k:
            return temp.val
        count +=1
    
    return -1
    

```

## Submission at 2024-09-04 10:49:10


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp = head
    count = 1

    while temp is not None:
        if count == k:
            return temp.val
        temp = temp.next
        count +=1
    
    return -1
    

```

## Submission at 2024-09-04 10:55:24


```
# Write code from scratch

import sys
a = [1,3,6,7,10]
b = [2,4,5,8,9]
list1 = []
for i in range(0, len(a)):
    if a[i] > b[i]:
        list1.append(a)
    else:
        list1.append(b)

print(list1)
```

## Submission at 2024-09-04 11:03:57


```
# Write code from scratch

n = int(input())
a = input().split()
b = input().split()
c = []
for i in range(0, n):
    if int(a[i]) > int(b[i]):
        c.append(int(a[i]))
    else:
        c.append(int(b[i]))

print(c)
```

## Submission at 2024-09-04 11:04:25


```
# Write code from scratch

n = int(input())
a = input().split()
b = input().split()
c = []
for i in range(0, n):
    if int(a[i]) > int(b[i]):
        c.append(int(a[i]))
    else:
        c.append(int(b[i]))

    return c

print(c)

```

## Submission at 2024-09-04 11:04:52


```
# Write code from scratch

n = int(input())
a = input().split()
b = input().split()
c = []
for i in range(0, n):
    if int(a[i]) > int(b[i]):
        c.append(int(a[i]))
    else:
        c.append(int(b[i]))


print(c)

```

## Submission at 2024-09-04 11:06:18


```
# Write code from scratch

n = int(input())
a = input().split()
b = input().split()
c = []
for i in range(0, n):
    if int(a[i]) > int(b[i]):
        c.append(int(a[i]))
    else:
        c.append(int(b[i]))

for i in c:
    print(i,end=" ")

```

## Submission at 2024-09-04 11:11:10


```
# Write code from scratch

n = int(input())  
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []
for i in range(0, n):
    if (a[i]) > (b[i]):
        c.append(a[i])
    else:
        c.append(b[i])

for i in c:
    print(i,end=" ")

```

## Submission at 2024-09-04 11:31:42


```
def diagonal_traversal(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ' '.join(map(str, result))
    
    

```

## Submission at 2024-09-04 11:32:26


```
def diagonal_traversal(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result))
```

## Submission at 2024-09-04 11:32:52


```
def diagonal_traversal(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result)) 
    
```

## Submission at 2024-09-04 11:33:04


```
def diagonal_traversal(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result)) 
    
```

## Submission at 2024-09-04 11:33:15


```
def diagonal_traversal(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result)) 
    
```

## Submission at 2024-09-04 11:35:05


```
def diagonal_traversal(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result)) 
    
```

## Submission at 2024-09-04 11:35:52


```
def diagonal_traversal(matrix):
    if not matrix:
        return []
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result)) 
    
```

## Submission at 2024-09-04 11:35:53


```
def diagonal_traversal(matrix):
    if not matrix:
        return []
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        result.extend(diagonal)
    
    # Convert each element to string for join
    return ''.join(map(str, result)) 
    
```

## Submission at 2024-09-04 11:37:23


```
def diagonal_traversal(matrix):
    if not matrix:
        return []
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(str(matrix[row][col]))  # Convert to string here
            row -= 1
            col += 1

        result.extend(diagonal)
    
    return ''.join(result) 
    
```

## Submission at 2024-09-04 11:37:42


```
def diagonal_traversal(matrix):
    if not matrix:
        return []
    # Your code here
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        if d < m:
            row = d
            col = 0
        else:
            row = m - 1
            col = d - m + 1

        diagonal = []
        while row >= 0 and col < n:
            diagonal.append(str(matrix[row][col]))  # Convert to string here
            row -= 1
            col += 1

        result.extend(diagonal)
    
    return ''.join(result) 



```

## Submission at 2024-09-04 11:41:44


```
def diagonal_traversal(matrix):
    # Your code here
    m = len(matrix)
    n = len(matrix[0])
    result = []
    for start_row in range(m):
        i, j = start_row, 0
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    # Traverse diagonals starting from the first row (excluding the first element)
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

## Submission at 2024-09-04 12:05:22


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

    while current is not None:
        next_node = current.next  
        current.next = prev        
        prev = current            
        current = next_node

    return prev

```

## Submission at 2024-09-05 06:49:18


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    for  i in range(0,31):
        if n == 2**i:
            return True
        else:
            return False
    return n

def main():
    n = int(input().strip())
    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-05 06:52:36


```
def is_power_of_two(n):
    # Write your logic here
    for  i in range(0,31):
        if n == 2**i:
            return True
        return False

def main():
    n = int(input().strip())
    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-05 06:58:14


```
def is_power_of_two(n):
    # Write your logic here
    if n <=0:
        return False
    for  i in range(0,31):
        if n == 2**i:
            return True
    return False

def main():
    n = int(input().strip())
    # Determine if n is a power of two
    print('true' if is_power_of_two(n) else 'false')

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-05 07:12:40


```
def subsets(nums):
    result = []
    
    def backtrack(start, current_subset):
        result.append(list(current_subset))
        
        for i in range(start, len(nums)):
            current_subset.append(nums[i])
            backtrack(i + 1, current_subset)
            current_subset.pop()
    
    backtrack(0, [])
    result.sort(key=lambda x: (len(x), x))
    
    return result
def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-05 07:43:12


```
def combine(n, k):
    # Write logic here

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print combinations
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        for j in range(len(result[i])):
            print(result[i][j], end="")
            if j < len(result[i]) - 1:
                print(",", end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-05 07:52:20


```
from typing import List

def permute(nums: List[int]) -> List[List[int]]:
    n = len(nums)
    ans, sol = [], []

    def backtrack():
        if len(sol) == n:
            ans.append(sol[:])  
            return
        
        for x in nums:
            if x not in sol:
                sol.append(x)
                backtrack()
                sol.pop()

    backtrack()
    return ans 
nums = list(map(int, input().split())) 
output = permute(nums) 
print(output)  

```

## Submission at 2024-09-05 07:53:03


```
from typing import List

def permute(nums: List[int]) -> List[List[int]]:
    n = len(nums)
    ans, sol = [], []

    def backtrack():
        if len(sol) == n:
            ans.append(sol[:])  
            return
        
        for x in nums:
            if x not in sol:
                sol.append(x)
                backtrack()
                sol.pop()

    backtrack()
    return ans 
nums = list(map(int, input().split())) 
output = permute(nums) 
print(output)  

```

## Submission at 2024-09-05 08:38:08


```
from typing import List

def permute(nums: List[int]) -> List[List[int]]:
    n = len(nums)
    ans, sol = [], []

    def backtrack():
        if len(sol) == n:
            ans.append(sol[:])  
            return
        
        for x in nums:
            if x not in sol:
                sol.append(x)
                backtrack()
                sol.pop()

    backtrack()
    return ans 
nums = list(map(int, input().split())) 
output = permute(nums) 
print(output)  

```

## Submission at 2024-09-09 09:48:14


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is None:
        return head
    curr = head
    while curr:
        if curr == curr.next:
            curr = curr.next.next
        else:
            curr = curr.next

    return head

```

## Submission at 2024-09-09 09:52:58


```
# write code from scratch
def powerOfFour(i):
    if i == 0 or i == 1 or i == 2 or i == 3 or i < 0:
        return False
    
    for
```

## Submission at 2024-09-09 10:01:51


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
        number1 = int(''.join(result1))
        number2 = int(''.join(result2))

        c = number1 + number2
        print(c)
```

## Submission at 2024-09-09 10:05:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is None:
        return head
    curr = head
    while curr != None:
        if curr.data == curr.next.data:
            curr = curr.next.next
        else:
            curr = curr.next

    return head
    
```

## Submission at 2024-09-09 10:08:57


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is None:
        return head
    curr = head
    while curr != None:
        if curr.data != curr.next.data:
            curr = curr.next
        else:
            curr.next = curr.next.next

    return head
    
```

## Submission at 2024-09-09 10:15:44


```
# write code from scratch
def powerOfFour(n):
    if n < 0 or n < 4:
        return False

    for i in range(0, 31):
        if 4**i == n:
            return True
    return False
```

## Submission at 2024-09-09 10:19:10


```
# write code from scratch
def powerOfFour(n):
    result = True
    for i in range(0, 31):
        if 4**i == n:
            result = True
            break
        else:
            result = False
    return result


n = input()
result = powerOfFour(n)
print(result)
```

## Submission at 2024-09-09 10:33:04


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
        return 124        
```

## Submission at 2024-09-09 10:56:19


```
# write code from scratch
n = int(input())
n2 = input().split(' ')
n3 = []
for i in n2:
    n3.append(int(i))
len1 = len(n3)
result = []
for i in range(0, len1 - 1):
    result.append(n3[i] + n3[i +1])
count = 0
len2 = len(result)
for i in range(0, len2):
    for j in result:
        if result[i] >= j:
            count = i

print(count + 1)
```

## Submission at 2024-09-09 11:00:45


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
        number1 = int(''.join(result1))
        number2 = int(''.join(result2))

        c = number1 + number2
        print(c)
```

## Submission at 2024-10-07 10:28:42


```
# Write code from scratch
list1 = input()
list2 = list1.split(' ')
n = list2[0]
k = list2[1]
list3 = []
for i in range(0, int(n) + 1):
    list3.append(i)
y = 0
i = 0
new1 = []
if sum(list3) == k:
    print('0')
else:
    while y == k:
        y += list3[i]
        i += 1
        new1.append(list3[i])

h = 0
for i in (new1):
    h += 1

count1 = n - h
```

## Submission at 2024-10-07 10:29:31


```
# Write code from scratch
list1 = input()
list2 = list1.split(' ')
n = list2[0]
k = list2[1]
list3 = []
for i in range(0, int(n) + 1):
    list3.append(i)
y = 0
i = 0
new1 = []
if sum(list3) == k:
    print('0')
else:
    while y == k:
        y += list3[i]
        i += 1
        new1.append(list3[i])

h = 0
for i in (new1):
    h += 1

count1 = int(n) - h
```

## Submission at 2024-10-07 10:33:49


```
# Write code from scratch
list1 = input()
list2 = list1.split(' ')
n = list2[0]
k = list2[1]
list3 = []
for i in range(0, int(n) + 1):
    list3.append(i)
y = 0
i = 0
new1 = []
if sum(list3) == k:
    print('0')
else:
    while y == k:
        y += list3[i]
        i += 1
        new1.append(list3[i])

    h = 0
    for i in (new1):
        h += 1

    count1 = int(n) - h
    print(count1 - 1)
```

## Submission at 2024-10-07 10:33:51


```
# Write code from scratch
list1 = input()
list2 = list1.split(' ')
n = list2[0]
k = list2[1]
list3 = []
for i in range(0, int(n) + 1):
    list3.append(i)
y = 0
i = 0
new1 = []
if sum(list3) == k:
    print('0')
else:
    while y == k:
        y += list3[i]
        i += 1
        new1.append(list3[i])

    h = 0
    for i in (new1):
        h += 1

    count1 = int(n) - h
    print(count1 - 1)
```

## Submission at 2024-10-07 10:34:22


```
# Write code from scratch
list1 = input()
list2 = list1.split(' ')
n = list2[0]
k = list2[1]
list3 = []
for i in range(0, int(n) + 1):
    list3.append(i)
y = 0
i = 0
new1 = []
if sum(list3) == k:
    print(0)
else:
    while y == k:
        y += list3[i]
        i += 1
        new1.append(list3[i])

    h = 0
    for i in (new1):
        h += 1

    count1 = int(n) - h
    print(count1 )
```

## Submission at 2024-10-07 11:08:21


```
# Write Python Code from scratch
n = input()
list1 = input()
list2 = []
x = 0
for i in range(0, len(list1)):
    if i != n:
        if int(list1[i]) > int(list1[i+1]):
            x = int(list1[i]) - int(list1[i + 1])
            list2.append(x)
        else:
            list2.append(list1[i])
    else:
        list2.append(list1[i])
print(list2)
```

## Submission at 2024-10-07 11:08:50


```
# Write Python Code from scratch
n = input()
list1 = input()
list2 = []
x = 0
for i in range(0, len(list1)):
    if i != n:
        if int(list1[i]) > int(list1[i+1]):
            x = int(list1[i]) - int(list1[i + 1])
            list2.append(x)
        else:
            list2.append(list1[i])
    else:
        list2.append(list1[i])
print(list2)


```

## Submission at 2024-10-07 11:10:56


```
# Write Python Code from scratch
n = input()
list1 = input()
list2 = []
x = 0
for i in range(0, len(list1)):
    if i != n:
        if int(list1[i]) > int(list1[i+1]):
            x = int(list1[i]) - int(list1[i + 1])
            list2.append(x)
        else:
            list2.append(list1[i])
    else:
        list2.append(list1[i])
print(list2)


```

## Submission at 2024-10-28 10:09:36


```
# Write your code from scratch here
list1 = input()
list2 = list1.split(' ')
s = list2[0]
order = list2[1]
s_list = []
for i in s:
    s_list.append(i)
order_list = []
for j in order:
    order_list.append(j)
result = []
for i in range(0, len(s_list)):
    for j in range(0, len(order_list)):
        if s_list[i] == order_list[j]:
            j = i
            
```

## Submission at 2024-10-28 10:11:23


```
# Write your code from scratch here
list1 = input()
list2 = list1.split(' ')
s = list2[0]
order = list2[1]
s_list = []
for i in s:
    s_list.append(i)
order_list = []
for j in order:
    order_list.append(j)
result = []
for i in range(0, len(s_list)):
    for j in range(0, len(order_list)):
        if s_list[i] == order_list[j]:
            

```

## Submission at 2024-10-28 10:12:37


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

## Submission at 2024-10-28 10:20:20


```
# Write code from scratch
total_candy = int(input())
type_candy = input().split(' ')
total_candy_mid = total_candy / 2
set1 = set(type_candy)
result = []
for i in int(total_candy_mid):
    result.append(set1[i])
print(len(result))
```

## Submission at 2024-10-28 10:24:15


```
# Write code from scratch
total_candy = int(input())
type_candy = input().split(' ')
total_candy_mid = int(total_candy / 2)
list1 = []
for i in type_candy:
    if i not in list1:
        list1.append(i)
result = []
for i in range(0, total_candy_mid):
    result.append(list1[i])
print(len(result))
```

## Submission at 2024-10-28 10:24:50


```
# Write code from scratch
total_candy = int(input())
type_candy = input().split(' ')
total_candy_mid = int(total_candy / 2)
list1 = []
for i in type_candy:
    if i not in list1:
        list1.append(i)
result = []
for i in range(0, total_candy_mid):
    result.append(list1[i])
print(len(result))

```

## Submission at 2024-10-28 10:25:05


```
# Write code from scratch
total_candy = int(input())
type_candy = input().split(' ')
total_candy_mid = int(total_candy / 2)
list1 = []
for i in type_candy:
    if i not in list1:
        list1.append(i)
result = []
for i in range(0, total_candy_mid):
    result.append(list1[i])
print(len(result))

```

## Submission at 2024-10-28 10:25:24


```
# Write code from scratch
total_candy = int(input())
type_candy = input().split(' ')
total_candy_mid = int(total_candy / 2)
list1 = []
for i in type_candy:
    if i not in list1:
        list1.append(i)
result = []
for i in range(0, total_candy_mid):
    result.append(list1[i])
print(len(result)) 

```

## Submission at 2024-10-28 10:25:47


```
# Write code from scratch
total_candy = int(input())
type_candy = input().split(' ')
total_candy_mid = int(total_candy / 2)
list1 = []
for i in type_candy:
    if i not in list1:
        list1.append(i)
result = []
for i in range(0, total_candy_mid):
    result.append(list1[i])
print(len(result)) 

```

## Submission at 2024-10-28 10:46:06


```
# Write your code from scratch here
list1 = input()
list2 = list1.split(' ')
s = list2[0]
order = list2[1]
s_list = []
for i in s:
    s_list.append(i)
order_list = []
for j in order:
    order_list.append(j)
result = []
for i in range(0, len(s_list)):
    for j in range(0, len(order_list)):
        if s_list[i] == order_list[j]:
            order_list[i], order_list[j] = order_list[j], order_list[i]

result = ''.join(order_list)
print(result)
            
```

## Submission at 2024-10-28 10:53:59


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
        stack = [root]
        result = []

        while stack:
            current = stack.pop()
            result.append(current.val)
            
            if current.right:
                stack.append(current.right)
            if current.left:
                stack.append(current.left)

        return result


```

## Submission at 2024-10-28 11:01:50


```
'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMax(self,root):
        stack = [root]
        result = []

        while stack:
            current = stack.pop()
            result.append(current)
            
            if current.right:
                stack.append(current.right)
            if current.left:
                stack.append(current.left)

        result2 = []
        for i in result:
            result2.append(i.data)
        return max(result2)


```

## Submission at 2024-11-25 10:00:32


```
n = int(input())
char1 = input()
char2 = input()
char_atoz = {'a' : 1,'b':2,'c':3, 'd':4, 'e':5, 'f':6, 'g':7, 'h':8, 'i':9 ,'j':10, 'k':11, 'l':12, 'm':13 ,'n':14, 'o':15, 'p':16, 'q':17, 'r':18, 's':19, 't':20, 'v':21, 'u':22, 'x':23, 'y':24, 'z':25}
for i in range(0, n):
    if char1[i] in char_atoz.key:
        if char2 in char_atoz.key:
            if char1[i].value < char2.value
```

## Submission at 2024-11-25 10:25:34


```
# Write Python Code from scratch
n = int(input())

for i in range(0, n):
    take1 = input()
    print("Hello " +take1+"!")
```

## Submission at 2024-11-25 10:30:30


```
# write code from scratch
n = int(input())
list1 = input()
odd_list = []
even_list = []
for i in list1:
    if int(i)%2 != 0:
        odd_list.append(i)
    else:
        even_list.append(i)

list3 = [len(odd_list), len(even_list)]
print(list3)

```

## Submission at 2024-11-25 10:49:24


```
# write code from scratch
n = int(input())
k = input()
list1 = strip(int(" ", k))
odd_list = []
even_list = []
for i in range(n):
    if int(list1[i]) != 0:
        odd_list.append(i)
    else:
        even_list.append(i)

list3 = [len(odd_list), len(even_list)]
print(list3) 

```

## Submission at 2024-11-25 11:00:32


```
# Write Python code from scratch
n = int(input())
list1 = []
for i in range(0, n):
    list2 = []
    for j in range(0, i + 1):
        list2.append("*")
        list1.append(''.join(list2))

list3 = list1[::-1]
print(list3[0])
```

## Submission at 2024-11-25 11:09:29


```
# Write Python code from scratch
n = int(input())
list1 = []
for i in range(0, n + 1):
    list2 = []
    for j in range(0, n -i):
        print("*", end = "")
    print("")

```

## Submission at 2024-11-25 11:20:34


```
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

print(len(odd_num))
print(len(even_num))        
```

## Submission at 2024-11-25 11:22:46


```
# write code from scratch
Code
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

print(len(odd_num) + " " + len(even_num))

```

## Submission at 2024-11-25 11:25:07


```
# write code from scratch
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

print(len(odd_num))
print(len(even_num))
```

## Submission at 2024-11-25 11:26:49


```
# write code from scratch
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

len1 = len(odd_num)
len2 = len(even_num)
print(len1 + " " + len2)
```

## Submission at 2024-11-25 11:28:17


```
# write code from scratch
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

len1 = len(odd_num)
len2 = len(even_num)
# print(len1 + " " + len2)
list3 = [len1, len2]
print(" ".join(list3))
```

## Submission at 2024-11-25 11:29:07


```
# write code from scratch
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

len1 = len(odd_num)
len2 = len(even_num)
# print(len1 + " " + len2)
list3 = [len1, len2]
print(list3)
```

## Submission at 2024-11-25 11:30:15


```
# write code from scratch
# write code from scratch
n = int(input())
k = input()
list1 = []
for i in k:
    if i != " ":
        list1.append(i)
odd_num = []
even_num = []
for i in range(n):
    if int(list1[i])%2 != 0:
        odd_num.append(list1[i])
    else:
        even_num.append(list1[i])

len1 = len(odd_num)
len2 = len(even_num)
# print(len1 + " " + len2)
list3 = [len1, len2]
for i in list3:
    print(i, end = " ")
```

## Submission at 2024-11-25 11:36:44


```
# write code from scratch
n = int(input())
char1 = input()
char2 = input()
temp1 = 0
temp2 = 0
list1 = []
#char_atoz = {'a' : 1,'b':2,'c':3, 'd':4, 'e':5, 'f':6, 'g':7, 'h':8, 'i':9 ,'j':10, 'k':11, 'l':12, 'm':13 ,'n':14, 'o':15, 'p':16, 'q':17, 'r':18, 's':19, 't':20, 'v':21, 'u':22, 'x':23, 'y':24, 'z':25}
for i in char2:
    if i != " ":
        list1.append(i)
temp = None
for i in list1:
    if i < char2:
        temp = i
    else:
        temp = list1[0]

print(temp)
```

## Submission at 2024-11-25 11:38:22


```
# write code from scratch
n = int(input())
char1 = input()
char2 = input()
temp1 = 0
temp2 = 0
list1 = []
#char_atoz = {'a' : 1,'b':2,'c':3, 'd':4, 'e':5, 'f':6, 'g':7, 'h':8, 'i':9 ,'j':10, 'k':11, 'l':12, 'm':13 ,'n':14, 'o':15, 'p':16, 'q':17, 'r':18, 's':19, 't':20, 'v':21, 'u':22, 'x':23, 'y':24, 'z':25}
for i in char2:
    if i != " ":
        list1.append(i)
temp = None
for i in list1:
    if i < char2:
        temp = i
    else:
        temp = list1[0]

print(temp)
```

## Submission at 2024-11-25 11:43:35


```
# Write Python code from scratch
n = input()
list1 = []
for i in n:
    list1.append(n)
list2 = list1[::-1]
list3 = []
for i in list2:
    if i not in list3:
        list3.append(i)
print("".join(list3))    
```

