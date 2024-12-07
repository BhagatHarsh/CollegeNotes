## Submission at 2024-09-02 10:15:02


```
class ListNode:
    def _init_(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current = head

    while current:
        result.append(current.val)
        current = current.next
    return result
```

## Submission at 2024-09-02 10:23:00


```
a = [1, 3, 6, 7, 10]
b = [2, 4, 5, 8, 9]

c = [max(a[i], b[i]) for i in range(len(a))]

print(c)
```

## Submission at 2024-09-02 10:26:06


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Initialize the result array c
c = []

# Create the array c where c[i] is max(a[i], b[i])
for i in range(n):
    c.append(max(a[i], b[i]))

# Print the result array c
print(" ".join(map(str, c)))
```

## Submission at 2024-09-02 10:28:38


```

class Node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    previous = None
    current = head

    while current is not None:
        next_node = current.next  # Save the next node
        current.next = previous   # Reverse the link
        previous = current        # Move previous to this node
        current = next_node       # Move to the next node in the original list

    return previous  # New head of the reversed list



```

## Submission at 2024-09-02 10:30:43


```
class Node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # If head is to be deleted
    if k == 1:
        return head.next
    
    # Initialize pointers
    current = head
    count = 1
    
    # Traverse the list until we reach the (k-1)th node
    while current is not None and count < k - 1:
        current = current.next
        count += 1
    
    # If the (k-1)th node exists and the k-th node is not null
    if current is not None and current.next is not None:
        current.next = current.next.next
    
    return head

```

## Submission at 2024-09-02 10:31:27


```
class Node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # If head is to be deleted
    if k == 1:
        return head.next
    
    # Initialize pointers
    current = head
    count = 1
    
    # Traverse the list until we reach the (k-1)th node
    while current is not None and count < k - 1:
        current = current.next
        count += 1
    
    # If the (k-1)th node exists and the k-th node is not null
    if current is not None and current.next is not None:
        current.next = current.next.next
    
    return head

```

## Submission at 2024-09-02 10:34:07


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current is not None and count < k:
        current = current.next
        count += 1
    
    return current


head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
kth_node = get_kth_node(head, 3)
if kth_node:
    print(kth_node.val)  
else:
    print("K-th node does not exist.")

```

## Submission at 2024-09-02 10:35:32


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current is not None and count < k:
        current = current.next
        count += 1
    
    return current


# head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
# kth_node = get_kth_node(head, 3)
# if kth_node:
#     print(kth_node.val)  
# else:
#     print("K-th node does not exist.")

```

## Submission at 2024-09-02 11:03:14


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    count=1
    curr = head
    while curr:
        if count == k:
            return curr.val
        curr = curr.next
        count = count + 1
    return -1
    

```

## Submission at 2024-09-02 11:31:44


```
def diagonal_traversal(matrix):
    res=[]
    n = len(matrix)
    for indices_sum in range (0,2*n-1):
        for i in range (0,indices_sum+1):
            j = indices_sum - i   
            res = res+ [matrix[i][j]]
            print(matrix[i][j])
    return res
    

```

## Submission at 2024-09-03 03:53:17


```

def diagonal_traversal(matrix):
  res=[]
  n=len(matrix)
  m=len(matrix[0])
  for indsum in range(0,m+n-1):
    for j in range(0,indsum+1):
        i = indsum - j
        if i < n and j < m:
            res= res + [matrix[i][j]]
  return res  
    

```

## Submission at 2024-09-09 04:16:57


```
def fibonacci(x:int) -> int:
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else :
        return fibonacci(x-1)+ fibonacci(x-2)
   

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 04:24:46


```
def is_power_of_two(n:int) -> int:
    return n>0 and (n&(n-1)) == 0



    print(is_power_of_two(n))


```

## Submission at 2024-09-09 04:26:25


```
def is_power_of_two(n:int) -> bool:
    return n >0 and(n & (n-1))==0


    print(is_power_of_two(n))

```

## Submission at 2024-09-09 04:28:20


```
def is_power_of_two(n:int) -> bool:
    if n <= 0:
        return False
    else:
        return (n & (n - 1)) == 0

    print(is_power_of_two(n))

```

## Submission at 2024-09-09 04:29:06


```
def is_power_of_two(n: int) -> bool:
    # A power of two is a number greater than 0 and n & (n-1) == 0
    if n <= 0:
        return False
    return (n & (n - 1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n):
        print(f"{n} is a power of two.")
    else:
        print(f"{n} is not a power of two.")

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 04:29:57


```
def is_power_of_two(n: int) -> str:
    if n <= 0:
        return False
    else:
        return (n & (n - 1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n):
        print(f"{n} is a power of two.")
    else:
        print(f"{n} is not a power of two.")

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 04:31:42


```
def is_power_of_two(n: int) -> str:
    if n <= 0:
        return "False"
    elif(n & (n - 1)) == 0:
        return "True"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n):
        print(f"{n} is a power of two.")
    else:
        print(f"{n} is not a power of two.")

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 04:33:39


```
def is_power_of_two(n: int) -> str:
    return "True"if  n>0 and (n & (n - 1)) == 0 else "False"

    print(is_power_of_two(n))
```

## Submission at 2024-09-09 04:36:01


```
def is_power_of_two(n: int) -> bool:
    if  n>0 and (n & (n - 1)) == 0:
        return  true 
    else : 
        return false
    print(is_power_of_two(n))

```

## Submission at 2024-09-09 04:37:17


```
def is_power_of_two(n:int) -> str:
    return "true" if n > 0 and (n & (n - 1)) == 0 else "false"
    print(is_power_of_two(n))


```

## Submission at 2024-09-09 04:37:52


```
def is_power_of_two(n:int) -> str:
    return "true" if n > 0 and (n & (n - 1)) == 0 else "false"


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if _name_ == "_main_":
    main()
```

## Submission at 2024-09-09 04:41:39


```
class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        if n == 0 : return False
        return (n & n-1) == 0
```

## Submission at 2024-09-09 09:50:29


```
class Solution:
    def power_of_four(n,int)->bool:
        if n>0 and (n>1 & (n-1)) ==0:
            return true
        else: 
            return false
    print(power_of_four)

```

## Submission at 2024-09-09 09:51:21


```
class Solution:
    def power_of_four(n,int)->bool:
        if n>0 and (n>4 & (n-1)) ==0:
            return true
        else: 
            return false
    print(power_of_four)

```

## Submission at 2024-09-09 09:52:04


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and (n>4 & (n-1)) ==0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:52:57


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and (n>3 & (n-3)) ==0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:53:44


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and n//4==0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:55:10


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and n//4 =0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:55:59


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and (n-1//4) == 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:57:14


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and ((n-1)//4) == 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:58:11


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and ((n-1)% 4) == 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 09:59:05


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and n% 4 == 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 10:00:19


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and (n>3 & n %4) == 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 10:00:57


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and (n>3 & (n-1%4) )== 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 10:01:24


```
class Solution:
    def power_of_four(n,int)->str:
        if n>0 and (n>1 & (n-1%4) )== 0:
            return "true"
        else: 
            return "false"
    print(power_of_four)

```

## Submission at 2024-09-09 10:04:27


```
def power_of_four(n,int)->str:
    if n>0 & (n-1 % 4 ) == 0:
         return "True"
    else:
        return "False"
    
    
```

## Submission at 2024-09-09 10:05:01


```
def power_of_four(n,int)->str:
    if n>0 and (n-1 % 4 ) == 0:
         return "True"
    else:
        return "False"
    
    
```

## Submission at 2024-09-09 10:05:52


```
def power_of_four(n,int)->str:
    if n>0 and (n % 4 & n-1 ) == 0:
         return "True"
    else:
        return "False"
    print(power_of_four)
    
```

## Submission at 2024-09-09 10:18:26


```
def poweroffour(self,n)->str :
    if n>0 & (n>4 & n%4 ) == 0:
        return "True"
    else:
        return "False"
print(poweroffour)
```

## Submission at 2024-09-09 10:19:03


```
def poweroffour(self,n)->str :
    if n>0 & (n>4 & n-1 ) == 0:
        return "True"
    else:
        return "False"
print(poweroffour)
```

## Submission at 2024-09-09 10:19:36


```
def poweroffour(self,n)->str :
    if (n>4 & n-1 ) == 0:
        return "True"
    else:
        return "False"
print(poweroffour)
```

## Submission at 2024-09-09 10:28:52


```
def pow(x:int)-> str:
    
    assert n>4
    if n == 4: 
            return "True"
    else:
             
            return pow(n%4)==0
    


```

## Submission at 2024-09-09 10:29:15


```
def pow(x:int)-> str:
    
    assert n>4
    if n == 4: 
            return "True"
    else:
             
            return "pow(n%4)==0"
    


```

## Submission at 2024-09-09 10:35:35


```
def power_of_four(x:int) ->str :
    if x>=4 and (x/4) == 0:
        return "True"
    else:
        return "False"
    
print(power_of_four)
```

## Submission at 2024-09-09 10:40:16


```
def power(x:int) ->str:
    if x==4 :
        return"True"
    elif x %4 == 0:
        return "True"
    else:
        return"false"

```

## Submission at 2024-09-09 10:45:39


```
def power(x:int)->str:

    assert x>=4
    if n == 4: 
        return "True"
    elif n//4 == 0:
        return "True"

    else:
        return "False"
print(power)
```

## Submission at 2024-09-09 10:46:29


```
def power(x:int)->str:

    assert x>=4
    if n == 4: 
        return "True"
    elif n/4 == 0:
        return "True"

    else:
        return "False"
print(power)
```

## Submission at 2024-09-09 10:46:54


```
def power(x:int)->str:

    assert x>=4
    if n == 4: 
        return "True"
    elif n%4 == 0:
        return "True"

    else:
        return "False"
print(power)
```

## Submission at 2024-09-09 11:10:46


```
def power(x:int)-> str:
    if n>=4 and (n(n-1))==0:
        return "True"
    else:
        return "false"
print(power)
```

## Submission at 2024-10-07 09:51:04


```
class Solution:
    def minimumSum(self,num :int)-> int:
        new1=[]
        new2=[]
        for i in range (len(num)):
            num = num.split(s0,s1,s2,s3)
            new1 = (s0+s2)
            new2 = (s1+s3)
        return new1+new2
```

## Submission at 2024-10-07 09:51:49


```
class Solution:
    def minimumSum(self,num :int)-> int:
        new1=[]
        new2=[]
        for i in range (len(num)):
            num = num.split(s0,s1,s2,s3)
            new1 = (s0+s2)
            new2 = (s3+s1)
        return new1+new2
```

## Submission at 2024-10-07 09:53:28


```
class Solution:
    def minimumSum(self,num :int)-> int:
        new1=[]
        new2=[]
        for i in range (len(num)):
            num = num.split(s0,s1,s2,s3)
            new1 = (s0+ s2)
            new2 = (s1+s3)
            return min(new1+new2)
```

## Submission at 2024-10-07 09:54:13


```
class Solution:
    def minimumSum(self,num :int)-> int:
        new1=[]
        new2=[]
        for i in range (len(num)):
            num = num.split(s0,s1,s2,s3)
            new1 = (s0+ s2)
            new2 = (s1+s3)
            return  minimumSum(num)
```

## Submission at 2024-10-07 09:55:12


```
class Solution:
    def minimumSum(self,num :int)-> int:
        new1=[]
        new2=[]
        for i in range (len(num)):
            num = num.split(s0,s1,s2,s3)
            new1 = (s0+ s2)
            new2 = (s1+s3)
            num = new1 + new2
            return  minimumSum(num)
```

## Submission at 2024-10-07 09:55:28


```
class Solution:
    def minimumSum(self,num :int)-> int:
        new1=[]
        new2=[]
        for i in range (len(num)):
            num = num.split(s0,s1,s2,s3)
            new1 = (s0+ s2)
            new2 = (s1+s3)
            num = new1 + new2
        return  min(num)
```

## Submission at 2024-10-07 10:26:13


```
def minsum(self,num : int)->int:
    new1 = []
    new2 = []

    for i in range (len(num)):
        num = num.split(s0,s1,s2,s3)
        new1, new2 = min(s0,s1,s2,s3)
    return new1 + new2
```

## Submission at 2024-10-07 10:37:43


```
class Solution:
    def specialDiscount(self, prices : int):
        arr1 = []
        n= len(arr1)

        for i in prices:
            for j in i:
                if prices[i]< prices[j]:
                    discprice = prices[i] - price[j]
                    i = i+1
        return prices
```

## Submission at 2024-10-07 10:51:01


```
class Solution:
    def sandwiches(self,n:int)->bool:
        stack = []
        queue = deque
        for queue[i] in n:
            if i == stack.top:
                return True
                stack = stack - 1
            else:
                queue.deque()
                queue.append()
        return deque
```

## Submission at 2024-10-07 11:11:33


```
class Solution:
    def specialDiscount(self, prices : int):
        n= len(prices)

        for i in prices:
            for j in i:
                if prices[i]< prices[j]:
                    discprice = prices[i] - price[j]
                    i = i+1
        return n
        return prices
```

## Submission at 2024-10-28 10:06:39


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#Function to return a list containing the postorder traversal of the tree.
class Solution:
  def maxDepth(self,root) -> int:
    if not root:
      return 0
    return 1+ max (self.maxDepth(root.left),self.maxDepth(root.right)) 

```

## Submission at 2024-10-28 10:10:19


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
        nums=[]
        for i in range (len(nums)):
            for j in range  (i+1,len(nums)):
                if i < j :
                    return j
                else:
                    return i

```

## Submission at 2024-10-28 10:11:58


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
        nums=[]
        for i in range (len(nums)):
            for j in range  (i+1,len(nums)):
                if i < j :
                    nums.append(j)
                else:
                    nums.append(i) 
        return nums
```

## Submission at 2024-10-28 10:50:05


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
from collections import deque

def maxDepth(root):
    if not root :
      return 0
    res=[]
    q=deque([root])
    # q.append(root)
    while q:
      levelsize=len(q)
      currlevel=[]
    for i in range (levelsize):
      node = queue.popleft()
      currlevel.append(node.val)
      if node.left:
        q.append(node.left)
      if node.right:
        q.append(node.right)
    res.append(currlevel)
    return levelsize
```

## Submission at 2024-11-25 09:55:17


```
print(3)
print("Hello Tony !")
print("Hello Steve !")
print ("Hello Banner !")
```

## Submission at 2024-11-25 10:10:04


```
n = int(input())
count = 0
for i in range of (1,n):
    if n%2 == 0:
        count = count+1
        print(n - count)
        print(count)

```

## Submission at 2024-11-25 10:13:23


```
n = int(input())
count = 0
for i in range (1,n):
    if n%2 == 0:
        count = count+1
        print(n - count)
        print(count)

```

## Submission at 2024-11-25 10:16:09


```
n = int(input())
count = 0
for i in range (1,n):
    if n%2 == 0:
        count = count+1
        print(n - count , count)

```

## Submission at 2024-11-25 10:17:15


```
n = int(input())
count = 0
for i in range (1,n):
    if n%2 == 0:
        count = count+1
        print(n - count , count)

```

## Submission at 2024-11-25 10:30:37


```
n = int(input())
arr = list(map(int, input().split()))
count = 0
for i in range (n):
    if arr[i] % 2 == 0:
        count = count+1
    print(n - count , count)

```

## Submission at 2024-11-25 10:33:54


```
n = int(input())
arr = list(map(int, input().split()))
count = 0
for i in range (n):
    if arr[i] % 2 == 0:
        count = count+1
print(n - count , count)

```

## Submission at 2024-11-25 10:46:48


```
n = int(input())
for i in range (n,0,-1):
    for j in range (n+i-1):
        print("*" , end ="")
```

## Submission at 2024-11-25 10:52:23


```
n = int(input())
users = list(map(str,input.split()))
for  i in range (n):
    print("Hello",users,"!")
```

## Submission at 2024-11-25 10:52:33


```
n = int(input())
users = list(map(str,input.split()))
for  i in range (n):
    print("Hello",users,"!")
```

## Submission at 2024-11-25 10:55:53


```
n = int(input())
users = str(input())
users = str(input())
users = str(input())
for  i in range (n):
    print("Hello",users,"!")
```

## Submission at 2024-11-25 11:00:57


```
n = int(input())
users = list(map(str, input()))
for  i in range (n):
    print("Hello",users,"!")
```

## Submission at 2024-11-25 11:04:33


```
n = int(input())
for  i in range (n):
    users = input()
    print("Hello "+ users +"!")
```

## Submission at 2024-11-25 11:31:12


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
  res = []
  def traversal(root)-> int(int):
    root.traversal(root.left)
    root.traversal(root.right)
    root.append(root.val)
  traversal(root)
  return res
  for i in range(len(res)):
    for j in range (i+1, len(res)):
      if res[i] > res [j]:
        print j
      else:
        print i
        i ++
        j++
return minElementInBST
```

## Submission at 2024-11-25 11:32:01


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
  res = []
  def traversal(root)-> int(int):
    root.traversal(root.left)
    root.traversal(root.right)
    root.append(root.val)
  traversal(root)
  return res
  for i in range(len(res)):
    for j in range (i+1, len(res)):
      if res[i] > res [j]:
        print j
      else:
        print i
  
return minElementInBST
```

## Submission at 2024-11-25 11:33:35


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
  res = []
  def traversal(root)-> int(int):
    root.traversal(root.left)
    root.traversal(root.right)
    root.append(root.val)
  traversal(root)
  return res
  for i in range(len(res)):
    for j in range (i+1, len(res)):
      if res[i] > res [j]:
        print res[j]
      else:
        print res[i]
  
return minElementInBST
```

## Submission at 2024-11-25 11:33:59


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
  res = []
  def traversal(root)-> int(int):
    root.traversal(root.left)
    root.traversal(root.right)
    root.append(root.val)
  traversal(root)
  return res
  for i in range(len(res)):
    for j in range (i+1, len(res)):
      if res[i] > res [j]:
        print res[j]
      else:
        print res[i]
  
return minElementInBST
```

## Submission at 2024-11-25 11:39:17


```
n = str(input())
arr = map(str,input.split())
for i in range(n):
    for j in range (i+1,n):
        if arr[i] != arr[j]:
            print(arr[])

        
```

## Submission at 2024-11-25 11:40:41


```
n = str(input())
arr = map(str,input.split())
for i in range(n):
    for j in range (i+1,n):
        if arr[i] == arr[j]:
            print(arr[] - arr[j])

        
```

