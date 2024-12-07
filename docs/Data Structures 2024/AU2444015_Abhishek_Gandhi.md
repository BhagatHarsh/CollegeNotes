## Submission at 2024-08-12 09:41:56


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==1:
        return 1
    else:
        return x*fibonacci(x-1)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:42:38


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==1:
        return 1
    else:
        return x*fibonacci(x-1)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:45:00


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==1:
        return 1
    else:
        return x*fibonacci(x-1)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:46:38


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<=1:
        return 1
    else:
        return fibonacci(x-1)+fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:47:24


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<=1:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-09-02 10:16:44


```

class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
    
    i=2

    while temp!=None:
        if i+1==k:
            temp.next=temp.next.next
        temp=temp.next

    return head

```

## Submission at 2024-09-02 10:18:18


```

# class node:
#     def __init__(self):
#         self.data = None
#         self.next = None

def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
    
    i=2

    while temp!=None:
        if i+1==k:
            temp.next=temp.next.next
        temp=temp.next

    return head

```

## Submission at 2024-09-02 10:19:57


```

# class node:
#     def __init__(self):
#         self.data = None
#         self.next = None

def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=2

    while temp!=None:
        if i+1==k:
            temp.next=temp.next.next
        temp=temp.next

    return head

```

## Submission at 2024-09-02 10:22:06


```

# class node:
#     def __init__(self):
#         self.data = None
#         self.next = None

def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=2

    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
        temp=temp.next

    return head

```

## Submission at 2024-09-02 10:29:27


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=2
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next

```

## Submission at 2024-09-02 10:41:24


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=2
    temp=temp.next
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next


```

## Submission at 2024-09-02 10:42:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=2
    temp=temp.next.next
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next


```

## Submission at 2024-09-02 10:44:47


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=1
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next
        i+=1


```

## Submission at 2024-09-02 10:47:14


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp=head

    while temp!=None:
        result.append(temp.val)
        temp=temp.next
    return result

```

## Submission at 2024-09-02 10:53:47


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    count=0
    flag=0
    while temp!=None:
        if count==k:
            flag=1
            return temp.val
        temp=temp.next
        count+=1

    if flag==0 and count>k:
        return -1
```

## Submission at 2024-09-02 10:55:41


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    val=0
    count=0
    flag=0
    while temp!=None:
        if count==k:
            flag=1
            val=temp.val
        temp=temp.next
        count+=1

    if flag==0:
        return -1
    else:
        return val
```

## Submission at 2024-09-02 11:00:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=1
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next
        i+=1
```

## Submission at 2024-09-02 11:00:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=1
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next
        i+=1
```

## Submission at 2024-09-02 11:02:51


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp=head

    while temp!=None:
        result.append(temp.val)
        temp=temp.next
    return result

```

## Submission at 2024-09-02 11:04:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=1
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next
        i+=1


```

## Submission at 2024-09-02 11:06:38


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=1
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next
        i+=1
    
    return head

```

## Submission at 2024-09-02 11:08:14


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    temp=head
    
    if k==1:
        head=head.next
        return head
    
    i=1
    while temp.next!=None:
        if i+1==k:
            temp.next=temp.next.next
            return head
        temp=temp.next
        i+=1

    return head


```

## Submission at 2024-09-02 11:13:34


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    val=0
    count=0
    flag=0
    while temp!=None:
        if count==k:
            flag=1
            val=temp.val
        temp=temp.next
        count+=1

    if flag==0:
        return -1
    else:
        return val


```

## Submission at 2024-09-02 11:15:10


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    val=0
    count=0
    flag=0
    while temp.next!=None:
        if count==k:
            flag=1
            val=temp.val
        temp=temp.next
        count+=1

    if flag==0:
        return -1
    else:
        return val


```

## Submission at 2024-09-02 11:16:47


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    val=0
    count=0
    flag=0

    while temp!=None:
        if count==k:
            flag=1
            val=temp.val
        temp=temp.next
        count+=1

    if flag==0:
        val=-1
    else:
        return val
    
    return val



```

## Submission at 2024-09-02 11:19:02


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    val=-1
    count=1

    while temp!=None:
        if count==k:
            val=temp.val
        temp=temp.next
        count+=1

    return val




```

## Submission at 2024-09-02 11:26:46


```
# Write code from scratch
def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if lst1[i]<lst2[i]:
            lst_result.append(lst1[i])
        else:
            lst_result.append(lst2[i])

    return lst_result

result=maximal_array([1,3,6,7,10],[2,4,5,8,9])
for i in result:
    print(i)

```

## Submission at 2024-09-03 08:01:19


```
# Write code from scratch
def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if lst1[i]<lst2[i]:
            lst_result.append(lst2[i])
        else:
            lst_result.append(lst1[i])        

    return lst_result

result=maximal_array([1,3,6,7,10],[2,4,5,8,9])
for i in result:
    print(i)
```

## Submission at 2024-09-03 08:01:51


```
# Write code from scratch
def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if lst1[i]<lst2[i]:
            lst_result.append(lst2[i])
        else:
            lst_result.append(lst1[i])        

    return lst_result

result=maximal_array([1,3,6,7,10],[2,4,5,8,9])
for i in result:
    print(i,end=" ")
```

## Submission at 2024-09-03 08:02:09


```
# Write code from scratch
def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if lst1[i]<lst2[i]:
            lst_result.append(lst2[i])
        else:
            lst_result.append(lst1[i])        

    return lst_result

result=maximal_array([1,3,6,7,10],[2,4,5,8,9])
for i in result:
    print(i,end=" ")

```

## Submission at 2024-09-03 08:03:34


```
# Write code from scratch
def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if lst1[i]<lst2[i]:
            lst_result.append(lst2[i])
        else:
            lst_result.append(lst1[i])        

    return lst_result

c=maximal_array(a,b)
for i in c:
    print(i,end=" ")

```

## Submission at 2024-09-03 08:12:18


```
# Write code from scratch
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if lst1[i]<lst2[i]:
            lst_result.append(lst2[i])
        else:
            lst_result.append(lst1[i])        

    return lst_result

c=maximal_array(a,b)
for i in c:
    print(i,end=" ")
```

## Submission at 2024-09-03 08:13:35


```
# Write code from scratch
n = int(input())
a = input().split()
b = input().split()

def maximal_array(lst1,lst2):
    lst_result=[]
    for i in range(len(lst1)):
        if int(lst1[i])<int(lst2[i]):
            lst_result.append(int(lst2[i]))
        else:
            lst_result.append(int(lst1[i]))        

    return lst_result

c=maximal_array(a,b)
for i in c:
    print(i,end=" ")
```

## Submission at 2024-09-03 09:55:52


```

def diagonal_traversal(matrix):
    # Your code here
    result=[]
    sum=0
    for i in range(len(matrix)):
        for j in range(len(matrix)):
            if (i+j)==sum:
                result.append(matrix[i][j])
        sum+=1

    print(result)
    return result
    

```

## Submission at 2024-09-04 04:02:43


```
def diagonal_traversal(matrix):
    result = []
    rows = len(matrix)
    cols = len(matrix[0])

    # Traverse the upper half of the matrix (including the main diagonal)
    for col in range(cols):
        i, j = 0, col
        while i < rows and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1

    # Traverse the lower half of the matrix (excluding the main diagonal)
    for row in range(1, rows):
        i, j = row, cols - 1
        while i < rows and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    return result

```

## Submission at 2024-09-04 04:04:44


```

def diagonal_traversal(matrix):
    # Your code here
    result = []
    m=n=len(matrix)

    # Traverse each diagonal starting from the top row and the first column.
    for d in range(m + n - 1):
        if d < m:
            row, col = d, 0
        else:
            row, col = m - 1, d - m + 1
        
        diagonal = []
        
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1
        
        result.extend(diagonal)
    
    return result
    
    

```

## Submission at 2024-09-04 04:12:55


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    lst=[]
    temp=head
    
    while temp!=None:
        lst.append(temp.data)
        temp=temp.next

    temp=head

    while temp!=None:
        temp.data=lst.pop()
        temp=temp.next
    
    return head

```

## Submission at 2024-09-05 08:36:55


```

def diagonal_traversal(matrix):
    # Your code here
    m=len(matrix)
    n=len(matrix[0])
    result=[]
    for start_row in range(m):
        i,j=start_row,0
        diagonal=[]
        while i>=0 and j<n:
            diagonal.append(matrix[i][j])
            i-=1
            j+=1
        result.extend(diagonal)
    
    for start_col in range(1,n):
        i,j=m-1,start_col
        while i>=0 and j<n:
            diagonal.append(matrix[i][j])
            i-=1
            j+=1
        result.extend(diagonal)
    
    return result



    
    

```

## Submission at 2024-09-05 08:38:25


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

## Submission at 2024-09-06 08:17:06


```
from itertools import combinations 
def combine(n, k):
    # Write logic here
    assert k <= n
    if k == 1:
        return [[i] for i in range(1, n+1)]
    else:
        x=list(combinations(range(1, n+1), k))
        for i in range(len(x)):
            x[i]=list(x[i])

        return x


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

## Submission at 2024-09-06 08:17:39


```
from itertools import combinations 
def combine(n, k):
    # Write logic here
    assert k <= n
    if k == 1:
        return [[i] for i in range(1, n+1)]
    else:
        x=list(combinations(range(1, n+1), k))
        for i in range(len(x)):
            x[i]=list(x[i])

        return x


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

## Submission at 2024-09-06 08:23:16


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0:
        return 0
    if x==1:
        return 1
    else:
        return fibonacci(x-1)+fibonacci(x-2)



    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-06 08:26:20


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    m=0
    while (2**m)<n:
        if (2**m)==n:
            return m
        else:
            m+=1
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-06 08:26:48


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    m=0
    while (2**m)<n:
        if (2**m)==n:
            print(m)
            return m
        m+=1
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-06 08:28:08


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    m=0
    while (2**m)<=n:
        if (2**m)==n:
            return m
        m+=1
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-06 08:29:03


```
def is_power_of_two(n:int) -> bool:
    # Write your logic here
    m=0
    while (2**m)<=n:
        if (2**m)==n:
            return True
        m+=1
    return False

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-06 08:30:03


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    m=0
    while (2**m)<=n:
        if (2**m)==n:
            return 1
        m+=1
    return 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(bool(is_power_of_two(n)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-06 08:52:36


```
from itertools import combinations
def subsets(nums):
    # Wrtie logic here
    result=[[]]
    for i in nums:
        result.append([i])

    for i in range(2,len(nums)):
        x=list(combinations(nums, i))
        for j in range(len(x)):
            print(x[j])
            x[j]=list(x[j])
        
        for k in x:
            print(k)
            result.append(k)
    
    result.append(nums)

    print(result)
    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    # result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    # for subset in result:
    #     print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-06 08:53:18


```
from itertools import combinations
def subsets(nums):
    # Wrtie logic here
    result=[[]]
    for i in nums:
        result.append([i])

    for i in range(2,len(nums)):
        x=list(combinations(nums, i))
        for j in range(len(x)):
            print(x[j])
            x[j]=list(x[j])
        
        for k in x:
            print(k)
            result.append(k)
    
    result.append(nums)

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

## Submission at 2024-09-06 08:54:28


```
from itertools import combinations
def subsets(nums):
    # Wrtie logic here
    result=[[]]
    for i in nums:
        result.append([i])

    for i in range(2,len(nums)):
        x=list(combinations(nums, i))
        for j in range(len(x)):
            x[j]=list(x[j])
        
        for k in x:
            result.append(k)
    
    result.append(nums)

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

## Submission at 2024-09-06 08:56:32


```
from itertools import combinations
def subsets(nums):
    # Wrtie logic here
    result=[[]]
    for i in nums:
        result.append([i])

    for i in range(2,len(nums)):
        x=list(combinations(nums, i))
        for j in range(len(x)):
            x[j]=list(x[j])
        
        for k in x:
            result.append(k)
    
    result.append(nums)

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

## Submission at 2024-09-06 08:56:42


```
from itertools import combinations
def subsets(nums):
    # Wrtie logic here
    result=[[]]
    for i in nums:
        result.append([i])

    for i in range(2,len(nums)):
        x=list(combinations(nums, i))
        for j in range(len(x)):
            x[j]=list(x[j])
        
        for k in x:
            result.append(k)
    
    result.append(nums)

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

## Submission at 2024-09-06 09:00:18


```
from itertools import combinations
def subsets(nums):
    # Wrtie logic here
    result=[[]]
    for i in nums:
        if [i] not in result:
            result.append([i])

    if len(nums)>2:
        for i in range(2,len(nums)):
            x=list(combinations(nums, i))
            for j in range(len(x)):
                x[j]=list(x[j])
            
            for k in x:
                if k not in result:
                    result.append(k)
    
    if nums not in result:
        result.append(nums)

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

## Submission at 2024-09-06 09:10:15


```
from itertools import permutations

n_str=input()
n_lst=n_str.split(" ")
for i in range(len(n_lst)):
    n_lst[i]=int(n_lst[i])

x=list(permutations(n_lst))
for i in range(len(x)):
    x[i]=list(x[i])

print(x)


```

## Submission at 2024-09-06 09:11:56


```
from itertools import permutations

def find_oerders(n_lst):
    x=list(permutations(n_lst))
    for i in range(len(x)):
        x[i]=list(x[i])
    return x

n_str=input()
n_lst=n_str.split(" ")
for i in range(len(n_lst)):
    n_lst[i]=int(n_lst[i])

find_oerders(n_lst)


```

## Submission at 2024-09-06 09:12:23


```
from itertools import permutations

def find_oerders(n_lst):
    x=list(permutations(n_lst))
    for i in range(len(x)):
        x[i]=list(x[i])
    return x

n_str=input()
n_lst=n_str.split(" ")
for i in range(len(n_lst)):
    n_lst[i]=int(n_lst[i])

print(find_oerders(n_lst))


```

## Submission at 2024-09-06 09:15:42


```
from itertools import permutations

def find_oerders(n_lst):
    x=list(permutations(n_lst))
    for i in range(len(x)):
        x[i]=list(x[i])
    return x

n_str=input()
n_lst=n_str.split(" ")
for i in range(len(n_lst)):
    n_lst[i]=int(n_lst[i])

print(find_oerders(n_lst))


```

## Submission at 2024-09-06 09:34:19


```
# Write the code from scratch, no boilerplate is required
def check_equak_arrays(arr1,arr2):
    x=arr1
    
    for i in x:
        if i in arr2:
            arr1.remove(i)
            arr2.remove(i)

    if len(arr1)==0 and len(arr2)==0:
        return True
    else:
        return False

temp=input()
str1=input()
str2=input()
arr1=str1.split(" ")
arr2=str2.split(" ")
for i in range(len(arr1)):
    arr1[i]=int(arr1[i])
for i in range(len(arr2)):
    arr2[i]=int(arr2[i])

print(check_equak_arrays(arr1,arr2))
```

## Submission at 2024-09-06 09:34:57


```
# Write the code from scratch, no boilerplate is required
def check_equak_arrays(arr1,arr2):
    x=[]
    for i in arr1:
        x.append(i)
    
    for i in x:
        if i in arr2:
            arr1.remove(i)
            arr2.remove(i)

    if len(arr1)==0 and len(arr2)==0:
        return True
    else:
        return False

temp=input()
str1=input()
str2=input()
arr1=str1.split(" ")
arr2=str2.split(" ")
for i in range(len(arr1)):
    arr1[i]=int(arr1[i])
for i in range(len(arr2)):
    arr2[i]=int(arr2[i])

print(check_equak_arrays(arr1,arr2))
```

## Submission at 2024-09-06 09:36:02


```
# Write the code from scratch, no boilerplate is required
def check_equak_arrays(arr1,arr2):
    x=[]
    for i in arr1:
        x.append(i)
    
    for i in x:
        if i in arr2:
            arr1.remove(i)
            arr2.remove(i)

    if len(arr1)==0 and len(arr2)==0:
        return True
    else:
        return False

temp=input()
str1=input()
str2=input()
arr1=str1.split(" ")
arr2=str2.split(" ")
for i in range(len(arr1)):
    arr1[i]=int(arr1[i])
for i in range(len(arr2)):
    arr2[i]=int(arr2[i])

if check_equak_arrays(arr1,arr2):
    print("true")
else:
    print("false")
```

## Submission at 2024-09-06 09:37:16


```
from itertools import permutations

def find_oerders(n_lst):
    x=list(permutations(n_lst))
    for i in range(len(x)):
        x[i]=list(x[i])
    return x

n_str=input()
n_lst=n_str.split(" ")
for i in range(len(n_lst)):
    n_lst[i]=int(n_lst[i])

for i in find_oerders(n_lst):
    print(i)
```

## Submission at 2024-09-06 09:41:25


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if head==None:
        return
    if head.next==None:
        if k==1:
            head=None
        return head

    temp=head
    
    count=1
    while temp!=None:
        if (count+1)==k:
            temp.next=temp.next.next
            break
        temp=temp.next

    return head



```

## Submission at 2024-09-06 09:42:12


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if head==None:
        return
    if head.next==None:
        if k==1:
            head=None
        return head
    
    if k==1:
        head=head.next
        return head

    temp=head
    
    count=1
    while temp!=None:
        if (count+1)==k:
            temp.next=temp.next.next
            break
        temp=temp.next

    return head



```

## Submission at 2024-09-06 09:57:10


```
def sum_multiples(n):
    sums=0
    for i in range(1,n+1):
        if i%3==0:
            sums+=i
        elif i%5==0:
            sums+=i
        elif i%7==0:
            sums+=i
    return sums

n=int(input())
print(sum_multiples(n))


```

## Submission at 2024-09-06 10:09:42


```
def numEvenDigitCount(arr):
    count=0
    for i in arr:
        if len(i)%2==0:
            count+=1

    return count

n=input()
str1=input()
arr=str1.split(" ")
print(numEvenDigitCount(arr))
```

## Submission at 2024-09-06 10:22:57


```
def K_MissingPositiveNumber(arr,k):
    temp=[i for i in range(1,arr[-1]+1) if i not in arr]
    return temp[k-1]

str1=input()
str2=input()
n_k=str1.split(" ")
arr=str2.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])
print(K_MissingPositiveNumber(arr,int(n_k[1])))

```

## Submission at 2024-09-06 10:23:15


```
def K_MissingPositiveNumber(arr,k):
    temp=[i for i in range(1,arr[-1]+1) if i not in arr]
    return temp[k-1]

str1=input()
str2=input()
n_k=str1.split(" ")
arr=str2.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])
print(K_MissingPositiveNumber(arr,int(n_k[1])))

```

## Submission at 2024-09-06 10:31:36


```
def K_MissingPositiveNumber(arr,k):
    temp=[i for i in range(1,10000) if i not in arr]
    return temp[k-1]

str1=input()
str2=input()
n_k=str1.split(" ")
arr=str2.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])
print(K_MissingPositiveNumber(arr,int(n_k[1])))

```

## Submission at 2024-09-06 10:31:51


```
def K_MissingPositiveNumber(arr,k):
    temp=[i for i in range(1,2000) if i not in arr]
    return temp[k-1]

str1=input()
str2=input()
n_k=str1.split(" ")
arr=str2.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])
print(K_MissingPositiveNumber(arr,int(n_k[1])))

```

## Submission at 2024-09-06 10:32:46


```
def K_MissingPositiveNumber(arr,k):
    temp=[i for i in range(1,2001) if i not in arr]
    return temp[k-1]

str1=input()
str2=input()
n_k=str1.split(" ")
arr=str2.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])
print(K_MissingPositiveNumber(arr,int(n_k[1])))

```

## Submission at 2024-09-06 10:44:33


```
# Write Code from Scratch
def transpose_matrix(matrixVal):
    result=[]
    for i in range(len(matrixVal)):
        temp=[]
        for j in range(len(matrixVal)):
            temp.append(matrixVal[j][i])
        result.append(temp)
    
    return result

matrixVal=[]
n=input()
for i in range(int(n[0])):
    str1=input()
    row1=str1.split(" ")
    for i in range(len(row1)):
        row1[i]=int(row1[i])    
    matrixVal.append(row1)
    
result=transpose_matrix(matrixVal)
for i in range(len(result)):
    for j in range(len(result[0])):
        print(result[i][j],end=" ")
    print()

```

## Submission at 2024-09-06 10:51:11


```
# Write Code from Scratch
def transpose_matrix(matrix):
    result=[]
    for i in range(len(matrix[0])):
        temp=[]
        for j in range(len(matrix)):
            temp.append(matrix[j][i])
        print(temp)
        result.append(temp)
        
        return result

matrixVal=[]
n=input()
for i in range(int(n[0])):
    str1=input()
    row1=str1.split(" ")
    for i in range(len(row1)):
        row1[i]=int(row1[i])    
    matrixVal.append(row1)
    
result=transpose_matrix(matrixVal)
for i in range(len(result)):
    for j in range(len(result[0])):
        print(result[i][j],end=" ")
    print()

```

## Submission at 2024-09-06 10:51:43


```
# Write Code from Scratch
def transpose_matrix(matrix):
    result=[]
    for i in range(len(matrix[0])):
        temp=[]
        for j in range(len(matrix)):
            temp.append(matrix[j][i])
        print(temp)
        result.append(temp)
        
        return result

matrixVal=[]
n=input()
for i in range(int(n[0])):
    str1=input()
    row1=str1.split(" ")
    for i in range(len(row1)):
        row1[i]=int(row1[i])    
    matrixVal.append(row1)
    
result=transpose_matrix(matrixVal)
for i in range(len(result)):
    for j in range(len(result[0])):
        print(result[i][j],end=" ")
    print()

```

## Submission at 2024-09-06 10:52:09


```
# Write Code from Scratch
def transpose_matrix(matrixVal):
    result=[]
    for i in range(len(matrixVal[0])):
        temp=[]
        for j in range(len(matrixVal)):
            temp.append(matrixVal[j][i])
        print(temp)
        result.append(temp)
        
    return result

matrixVal=[]
n=input()
for i in range(int(n[0])):
    str1=input()
    row1=str1.split(" ")
    for i in range(len(row1)):
        row1[i]=int(row1[i])    
    matrixVal.append(row1)
    
result=transpose_matrix(matrixVal)
for i in range(len(result)):
    for j in range(len(result[0])):
        print(result[i][j],end=" ")
    print()

```

## Submission at 2024-09-06 10:52:48


```
# Write Code from Scratch
def transpose_matrix(matrixVal):
    result=[]
    for i in range(len(matrixVal[0])):
        temp=[]
        for j in range(len(matrixVal)):
            temp.append(matrixVal[j][i])
        result.append(temp)
        
    return result

matrixVal=[]
n=input()
for i in range(int(n[0])):
    str1=input()
    row1=str1.split(" ")
    for i in range(len(row1)):
        row1[i]=int(row1[i])    
    matrixVal.append(row1)
    
result=transpose_matrix(matrixVal)
for i in range(len(result)):
    for j in range(len(result[0])):
        print(result[i][j],end=" ")
    print()

```

## Submission at 2024-09-09 05:15:24


```
# Write code from scratch
def isPalindrome(s):
    lst=list(s)
    lst.reverse()
    ans=""
    for i in lst:
        ans+=i
    if s==ans:
        return True
    else:
        return False

s=input()
if isPalindrome(s):
    print("YES")
else:
    print("NO")     
```

## Submission at 2024-09-09 10:02:14


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head==None:
        return
    elif head.next==None:
        return head
    else:
        temp=head
        lst=[]
        while temp!=None:
            if temp.data not in lst:
                lst.append(temp.data)
                temp=temp.next
            else:
                temp=temp.next

        temp1=head

        temp1.data=lst[0]

        for i in range(1,len(lst)):
            temp1=temp1.next
            temp1.data=lst[i]

        temp1.next=None

        return head
```

## Submission at 2024-09-09 10:06:29


```
# write code from scratch
def poer_of_four(n):
    m=0
    while 4**m<n:
        if 4**m==n:
            return True
        m+=1
    else:
        return False

n=int(input())
print(poer_of_four(n))

```

## Submission at 2024-09-09 10:09:46


```
# write code from scratch
def poer_of_four(n):
    m=0
    while 4**m<=n:
        if 4**m==n:
            return True
        m+=1
    
    return False

n=int(input())
print(poer_of_four(n))

```

## Submission at 2024-09-09 10:20:55


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
        num1_str=""
        num2_str=""
        temp1=num1
        temp2=num2

        while temp1!=None:
            num1_str+=str(temp1.data)
            temp1=temp1.next
        
        while temp2!=None:
            num2_str+=str(temp2.data)
            temp2=temp2.next
        
        sum_num=int(num1_str)+int(num2_str)
        sum_lst=list(str(sum_num))
        head=Node(sum_lst[0])
        temp=head
        for i in range(1,len(sum_lst)):
            temp_node=Node(sum_lst[i])
            temp.next=temp_node
            temp=temp.next
        
        return head
            


```

## Submission at 2024-09-09 10:26:34


```

def rotateMatrix(matrix):
    # Your code here
    result=[]
    for i in range(len(matrix[0])):
        temp=[]
        for j in range(len(matrix)):
            temp.append(matrix[j][i])
        result.append(temp)

    result.reverse()
    return result
```

## Submission at 2024-09-09 10:34:45


```
# write code from scratch
def buySellStock(prices):
    max_val=0
    for i in range(len(prices)):
        for j in range(i+1,len(prices)):
            if (prices[j]-prices[i])>max_val:
                max_val=(prices[j]-prices[i])
        
    return max_val

n=input()
prices_ary=input()
prices=prices_ary.split(" ")
for i in range(len(prices)):
    prices[i]=int(prices[i])
print(buySellStock(prices))
```

## Submission at 2024-10-07 05:16:40


```

class Solution:
    def isPalindrome(self, head):
        #code here
        temp=head
        list_val=[]

        while temp!=None:
          list_val.append(temp.data)
          temp=temp.next

        temp=head

        for i in range(len(list_val)-1,-1,-1):
          if list_val[i]!=temp.data:
            return False

        return True
          

```

## Submission at 2024-10-07 05:18:02


```

class Solution:
    def isPalindrome(self, head):
        #code here
        if head==None:
          return
        elif head.next==None:
          return True
        else:
          temp=head
          list_val=[]

          while temp!=None:
            list_val.append(temp.data)
            temp=temp.next

          temp=head

          for i in range(len(list_val)-1,-1,-1):
            if list_val[i]!=temp.data:
              return False

          return True
            

```

## Submission at 2024-10-07 05:18:58


```

class Solution:
    def isPalindrome(self, head):
        #code here
        if head==None:
          return
        elif head.next==None:
          return True
        else:
          temp=head
          list_val=[]

          while temp!=None:
            list_val.append(temp.data)
            temp=temp.next

          temp=head

          for i in range(len(list_val)-1,-1,-1):
            if list_val[i]!=temp.data:
              return False
            temp=temp.next

          return True
            

```

## Submission at 2024-10-07 10:08:31


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

arr=findDiscount(arr)

print(arr)
```

## Submission at 2024-10-07 10:24:34


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=1
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            queue.append(queue.pop(0))
            count+=1

        if count==len(queue):
            break
        
    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 10:30:38


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=0
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            x=queue.pop(0)
            queue.append(x)
            count+=1

        if count==len(queue):
            break
        

    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")
stack.reverse()

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 10:36:14


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

print(findDiscount(arr))

```

## Submission at 2024-10-07 10:47:43


```
# Write code from scratch

def find_minisum(nums):
    num1=""
    num2=""

    x=min(nums)
    num1=num1+str(x)
    nums.remove(x)
    x=min(nums)
    num2=num2+str(x)
    nums.remove(x)
    x=min(nums)
    num1=num1+str(x)
    nums.remove(x)
    x=min(nums)
    num2=num2+str(x)
    nums.remove(x)
    
    x=int(num1)
    y=int(num2)
    
    return(x+y)

n=input()
nums=[]
for i in n:
    nums.append(int(i))

print(find_minisum(nums))
```

## Submission at 2024-10-07 10:52:33


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=0
    ans=0
    while True:
        print(queue)
        print(stack)
        if queue[0]==stack[0]:
            queue.pop(0)
            stack.pop(0)
            count=0
            ans+=1
        else:
            x=queue.pop(0)
            queue.append(x)
            count+=1

        if count==len(queue):
            break
        

    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 10:53:18


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=0
    ans=0
    while True:
        print(queue)
        print(stack)
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            x=queue.pop(0)
            queue.append(x)
            count+=1

        if count==len(queue):
            break
        

    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 10:54:07


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=1
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            queue.append(queue.pop(0))
            count+=1

        if count==len(queue):
            break
        
    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 10:59:40


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=0
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            x=queue.pop(0)
            queue.append(x)
            count+=1

        if count==len(queue):
            break
        

    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")
stack.reverse()

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 11:02:35


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=1
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=1
            ans+=1
        else:
            queue.append(queue.pop(0))
            count+=1

        if count==len(queue):
            break
        
    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 11:07:55


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=0
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            x=queue.pop(0)
            queue.append(x)
            count+=1

        if count==len(queue):
            break
        

    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")
stack.reverse()

print(std_sandwich(queue,stack))
```

## Submission at 2024-10-07 11:09:40


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

print(findDiscount(arr))
```

## Submission at 2024-10-07 11:11:30


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

print(*findDiscount(arr))
```

## Submission at 2024-10-07 11:12:35


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

arr=*findDiscount(arr)

for i in arr:
    print(i,ends=" ")

```

## Submission at 2024-10-07 11:12:57


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

arr=findDiscount(arr)

for i in arr:
    print(i,ends=" ")

```

## Submission at 2024-10-07 11:13:29


```
# Write Python Code from scratch

def findDiscount(arr):
    for i in range(len(arr)):
        j=i+1
        while j<len(arr):
            if arr[i]>arr[j]:
                arr[i]=arr[i]-arr[j]
                break
            j+=1
    return arr

n=input("")
arr_str=input("")
arr=arr_str.split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])

print(*findDiscount(arr))
```

## Submission at 2024-10-07 11:14:25


```
# Write Python code from scratch

def std_sandwich(queue,stack):
    count=0
    ans=0
    while True:
        if queue[0]==stack[-1]:
            queue.pop(0)
            stack.pop()
            count=0
            ans+=1
        else:
            x=queue.pop(0)
            queue.append(x)
            count+=1

        if count==len(queue):
            break
        

    return ans

n=input()
str_queue=input()
str_stack=input()

queue=str_queue.split(" ")
stack=str_stack.split(" ")
stack.reverse()

print(*std_sandwich(queue,stack))
```

## Submission at 2024-10-19 05:26:19


```
# Write Python Code from scratch

def special_dis(str1_num):
    for i in range(len(str1_num)):
        for j in range(i+1,len(str1_num)):
            if str1_num[i]>str1_num[j]:
                str1_num[i]=str1_num[i]-str1_num[j]
                break

    return str1_num

n=input()
str1=input()

str1_num=str1.split()

for i in range(len(str1_num)):
    str1_num[i]=int(str1_num[i])

print(*special_dis(str1_num))

```

## Submission at 2024-10-28 10:01:46


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
        #code here
        if root:
            maxval=0
            def rinorder(root):
                if root:
                    nonlocal maxval
                    rinorder(root.left)
                    if root.data>maxval:
                        maxval=root.data
                    rinorder(root.right)
            
            rinorder(root)

            return maxval

                

```

## Submission at 2024-10-28 10:12:06


```
# Write code from scratch

def maximumCandy(candyarry):
    count=0
    for i in range(0,len(candyarry),2):
        count=count+1
    
    return count
    

n=input("")
candyarry=input("")

candyarry=candyarry.split(" ")

for i in range(len(candyarry)):
    candyarry[i]=int(candyarry[i])

print(maximumCandy(candyarry))
```

## Submission at 2024-10-28 10:23:42


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
    if root:
      queue=[]
      result=[]
      queue.append(root.data)
      while len(queue)!=:
        element=queue.pop(0)
        left=element.left
        right=element.right
        temp=[]
        if left!=None and right!=None:
          temp.append(left.data)
          temp.append(right.data)
        elif left==None:
          temp.append(left.data)
        elif right==None:
          temp.append(right.data)
        result.append(temp)

      print(result)

```

## Submission at 2024-10-28 10:33:17


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
    if root:
      queue=[]
      result=[]
      queue.append(root)
      while len(queue)!=0:
        temp=[]
        while len(queue)!=:
          element=queue.pop(0)
          temp.append(element.data)
          left=element.left
          right=element.right
          if left!=None and right!=None:
            temp.append(left.data)
            temp.append(right.data)
          elif left==None:
            temp.append(left.data)
          elif right==None:
            temp.append(right.data)
        result.append(temp)

      print(result)
```

## Submission at 2024-10-28 10:41:37


```
# Write your code from scratch here

def permurtationString(s,order):
    result=[]
    for i in order:
        result.append()

    for i in order:
        if i not in result:
            result.append(i)
    
    ans=""

    for i in result:
        ans=ans+i

    return ans

str1=input()
str1=str1.split(" ")

orders=str1[0]
s=str1[1]

print(permurtationString(s,order))
```

## Submission at 2024-10-28 10:43:45


```
# Write your code from scratch here

def permurtationString(s,order):
    result=[]
    for i in order:
        result.append(i)

    for i in s:
        if i in result:
            continue
        else:
            result.append(i)
    
    ans=""

    for i in result:
        ans=ans+i

    return ans

str1=input()
str1=str1.split(" ")

order=str1[0]
s=str1[1]

print(permurtationString(s,order))
```

## Submission at 2024-10-28 10:44:28


```
# Write your code from scratch here

def permurtationString(s,order):
    result=[]
    for i in order:
        result.append(i)

    for i in s:
        if i in result:
            continue
        else:
            result.append(i)
    
    ans=""

    for i in result:
        ans=ans+i

    return ans

str1=input()
str1=str1.split(" ")

order=str1[0]
s=str1[1]

print(*permurtationString(s,order))
```

## Submission at 2024-10-28 10:45:15


```
# Write your code from scratch here

def permurtationString(s,order):
    result=[]
    for i in order:
        result.append(i)

    for i in s:
        if i in result:
            continue
        else:
            result.append(i)
    
    ans=""

    for i in result:
        ans=ans+i

    return ans

str1=input()
str1=str1.split(" ")

order=str1[0]
s=str1[1]

x=permurtationString(s,order)
print(x)
```

## Submission at 2024-10-28 10:53:59


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
        if num1 and num2:
            temp1=num1
            temp2=num2
            digit1=""
            digit2=""
            count1=0
            count2=0
            while temp1!=None:
                count1+=1
                digit1+=str(temp1.data)
                temp1=temp1.next
            while temp2!=None:
                count2+=1
                digit1+=str(temp2.data)
                temp2=temp2.next

            ans=int(digit1)+int(digit2)
            ans=str(ans)

            head=Node(ans[0])
            temp3=head

            for i in ans:
                temp=Node(i)
                temp3.next=temp
                temp3=temp3.next
            
            return head

```

## Submission at 2024-10-28 10:57:27


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
        if num1 and num2:
            temp1=num1
            temp2=num2
            digit1=""
            digit2=""
            count1=0
            count2=0
            while temp1!=None:
                count1+=1
                digit1+=str(temp1.data)
                temp1=temp1.next
            while temp2!=None:
                count2+=1
                digit2+=str(temp2.data)
                temp2=temp2.next

            ans=int(digit1)+int(digit2)
            ans=str(ans)

            head=Node(ans[0])
            temp3=head

            for i in ans:
                temp=Node(i)
                temp3.next=temp
                temp3=temp3.next
            
            return head

```

## Submission at 2024-10-28 10:59:09


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
        if num1 and num2:
            temp1=num1
            temp2=num2
            digit1=""
            digit2=""
            count1=0
            count2=0
            while temp1!=None:
                count1+=1
                digit1+=str(temp1.data)
                temp1=temp1.next
            while temp2!=None:
                count2+=1
                digit2+=str(temp2.data)
                temp2=temp2.next


            ans=int(digit1)+int(digit2)
            ans=str(ans)

            head=Node(ans[0])
            temp3=head

            for i in range(1,len(ans)):
                temp=Node(ans[i])
                temp3.next=temp
                temp3=temp3.next
            
            return head

```

## Submission at 2024-10-28 11:07:09


```
# Write code from scratch
from collections import Counter

def maximumCandy(candyarry):
    count=dict(Counter(candyarry))
    m=len(candyarry)/2
    keys=list(count.keys())
    while len(keys)!=m:
        keys.pop()

    return len(keys)
    

n=input("")
candyarry=input("")

candyarry=candyarry.split(" ")

for i in range(len(candyarry)):
    candyarry[i]=int(candyarry[i])

print(maximumCandy(candyarry))
```

## Submission at 2024-10-28 11:12:28


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
    if root:
      return 1+max(self.maxDepth(root.left),self.maxDepth(root.right))
    else:
      return -1
```

## Submission at 2024-10-28 11:13:27


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
    if root:
      return 1+max(maxDepth(root.left),maxDepth(root.right))
    else:
      return 1
```

## Submission at 2024-10-28 11:14:12


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
    if root:
      return 1+max(maxDepth(root.left),maxDepth(root.right))
    else:
      return 0
```

## Submission at 2024-10-28 11:21:14


```
# Write code from scratch
from collections import Counter

def maximumCandy(candyarry):
    count=dict(Counter(candyarry))
    m=len(candyarry)/2
    keys=list(count.keys())
    if len(keys)<m:
        while len(keys)!=m:
            keys.pop()

    return len(keys)
    

n=input("")
candyarry=input("")

candyarry=candyarry.split(" ")

for i in range(len(candyarry)):
    candyarry[i]=int(candyarry[i])

print(maximumCandy(candyarry))
```

## Submission at 2024-10-28 11:21:35


```
# Write code from scratch
from collections import Counter

def maximumCandy(candyarry):
    count=dict(Counter(candyarry))
    m=len(candyarry)/2
    keys=list(count.keys())
    if len(keys)>m:
        while len(keys)!=m:
            keys.pop()

    return len(keys)
    

n=input("")
candyarry=input("")

candyarry=candyarry.split(" ")

for i in range(len(candyarry)):
    candyarry[i]=int(candyarry[i])

print(maximumCandy(candyarry))
```

## Submission at 2024-10-28 11:25:36


```
# Write your code from scratch here

def permurtationString(s,order):
    result=[]
    odr=[]

    for i in order:
        if i in odr:
            continue
        else:
            odr.append(i)

    for i in odr:
        result.append(i)

    for i in s:
        if i in result:
            continue
        else:
            result.append(i)
    
    ans=""

    for i in result:
        ans=ans+i

    return ans

str1=input()
str1=str1.split(" ")

order=str1[0]
s=str1[1]

x=permurtationString(s,order)
print(x)
```

## Submission at 2024-11-25 09:54:22


```
# write code from scratch
def find_SLGTT(arry,target):
    # print(arry)
    # print(target)
    arry=arry.sort()
    print(chr(97))
    print(ord("a"))
    # for i in arry:
        # if ord()

n=input("")
arry=input("")
target=input("")

arry=arry.split(" ")
find_SLGTT(arry,target)
```

## Submission at 2024-11-25 10:00:48


```
# write code from scratch
def find_SLGTT(arry,target):
    # print(arry)
    # print(target)
    # arry.sort()
    # print(chr(97))
    # print(ord("a"))
    for i in arry:
        if ord(i)>ord(target):
            return i
    
    return arry[0]

n=input("")
arry=input("")
target=input("")

arry=arry.split(" ")
print(find_SLGTT(arry,target))
```

## Submission at 2024-11-25 10:07:26


```
# write code from scratch
def count_odd_even(arry):
    odd=0
    even=0
    for i in arry:
        if int(i)%2==0:
            even+=1
        else:
            odd+=1

    result=[]
    result.append(odd)
    result.append(even)

n=input("")
arry=input("")
arry=arry.split(" ")
print(*count_odd_even(arry))
```

## Submission at 2024-11-25 10:10:17


```
# write code from scratch
def count_odd_even(arry):
    odd=0
    even=0
    for i in arry:
        if int(i)%2==0:
            even+=1
        else:
            odd+=1

    result=[]
    result.append(odd)
    result.append(even)
    return result

n=input("")
arry=input("")
arry=arry.split(" ")
print(*count_odd_even(arry))
```

## Submission at 2024-11-25 10:26:20


```
# Write Python code from scratch
str1=input("")

result=[]

for i in range(len(str1),-1,-1):
    if str1[i] not in result:
        result.append(str1[i])
    
for i in result:
    print(i,ends="")
```

## Submission at 2024-11-25 10:29:36


```
# Write Python code from scratch
str1=input("")

result=[]

for i in range((len(str1)-1),-1,-1):
    if str1[i] not in result:
        result.append(str1[i])
    
for i in result:
    print(i,ends="")
```

## Submission at 2024-11-25 10:31:09


```
# Write Python code from scratch
str1=input("")

result=[]

for i in range((len(str1)-1),-1,-1):
    if str1[i] in result:
        continue
    else:
        result.append(str1[i])
    
for i in result:
    print(i,ends="")
```

## Submission at 2024-11-25 10:36:19


```
# Write Python code from scratch
str1=input("")

result=[]

for i in range((len(str1)-1),-1,-1):
    if str1[i] in result:
        continue
    else:
        result.append(str1[i])

# result_str=""
for i in result:
    print(i,end="")
    # result_str=result_str+i

# print(result_str)
```

## Submission at 2024-11-25 10:42:49


```
# Write Python code from scratch
n=int(input(""))

for i in range(len(n)):
    for j in range(n-i):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 10:47:00


```
# Write Python code from scratch
n=int(input(""))
result=[]

for i in range(len(n)):
    res_str=""
    for j in range(n-i):
        res_str=res_str="*"
    result.append(res_str)

for i in result:
    print(i)
```

## Submission at 2024-11-25 10:49:59


```
# Write Python code from scratch
n=int(input(""))
result=[]

for i in range(len(n)):
    res_str=""
    for j in range(n-i+1):
        res_str=res_str="*"
    result.append(res_str)

for i in result:
    print(i)
```

## Submission at 2024-11-25 10:51:14


```
# Write Python code from scratch
n=int(input(""))
result=[]

for i in range(len(n)):
    res_str=""
    for j in range(n-i+1):
        res_str=res_str+"*"
    result.append(res_str)

for i in result:
    print(i)
```

## Submission at 2024-11-25 10:53:08


```
# Write Python code from scratch
n=int(input(""))

for i in range(n):
    for j in range(n-i+1):
        print("*")
```

## Submission at 2024-11-25 10:54:44


```
# Write Python code from scratch
n=int(input(""))

for i in range(n):
    for j in range(n-i+1):
        print("*",end="")
```

## Submission at 2024-11-25 11:00:48


```
# Write Python code from scratch
n=int(input(""))

for i in range(n+1):
    for j in range(n-i+1):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:00:51


```
# Write Python code from scratch
n=int(input(""))

for i in range(n+1):
    for j in range(n-i+1):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:02:06


```
# Write Python code from scratch
n=int(input(""))

for i in range(n):
    for j in range(n-i):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:04:58


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
    # code here
    if root:
      result=[0]
      def rinorder(root,result):
        if root:
          rinorder(root.left,result)
          if root.data<result[0]:
            result[0]=root.data
          rinorder(root.right,result)
      
      return result[0]
```

## Submission at 2024-11-25 11:06:58


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
    # code here
    if root:
      result=[200]
      def rinorder(root,result):
        if root:
          rinorder(root.left,result)
          if root.data<result[0]:
            result[0]=root.data
          rinorder(root.right,result)
      
      return result[0]
```

## Submission at 2024-11-25 11:11:34


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
    # code here
    if root:
      result=[200]
      def rinorder(root,result):
        if root:
          rinorder(root.left,result)
          if root.data<result[0]:
            result[0]=root.data
          rinorder(root.right,result)
      
      rinorder(root,result)

      return result
```

## Submission at 2024-11-25 11:12:25


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
    # code here
    if root:
      result=[200]
      def rinorder(root,result):
        if root:
          rinorder(root.left,result)
          if root.data<result[0]:
            result[0]=root.data
          rinorder(root.right,result)
      
      rinorder(root,result)

      return result[0]
```

## Submission at 2024-11-25 11:16:09


```
# Write Python Code from scratch
n=input("")
s=[]
for i in range(int(n)):
    s.append(input(""))

for i in range(len(s)):
    print("Hello "+s[i]+"!")
    
```

