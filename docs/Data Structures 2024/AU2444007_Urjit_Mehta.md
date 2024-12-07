## Submission at 2024-09-02 10:19:14


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here

    #Making a pointer for traversal named Current_Node
    current_node=head

    #loop till current is not NONe/NULL
    while current_node:
        result.append(current_node.val)
        current_node=current_node.next
    
    return result

```

## Submission at 2024-09-02 11:12:57


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    curr_node=head
    prev_node=None

    while curr_node:
        if curr_node==k:
            if prev_node ==None:
                #if the first element is to be removed
                head=head.next
            else:
                prev_node.next=curr_node.next
            break
        prev_node=curr_node
        curr_node=curr_node.next

    return head





```

## Submission at 2024-09-02 11:14:25


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    curr_node=head
    prev_node=None

    while curr_node:
        if curr_node.data==k:
            if prev_node ==None:
                #if the first element is to be removed
                head=head.next
            else:
                prev_node.next=curr_node.next
            break
        prev_node=curr_node
        curr_node=curr_node.next

    return head





```

## Submission at 2024-09-02 11:31:33


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    # Your code here
    curr_node=head
    size=0
    pos=1
    while curr_node:
        size+=1
        curr_node=curr_node.next
    
    #Due to first while, curr_node is None
    # So need to re-initialize to head
    curr_node=head
    if(k>size):
        return -1
    else:
        while pos<k:
            curr_node=curr_node.next
            pos+=1
        return curr_node.val

```

## Submission at 2024-09-02 11:47:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    curr_node=head
    prev_node=None

    while curr_node:
        #storing the next node
        next_node=curr_node.next
        #Reverse the link 
        curr_node.next=prev_node
        #updating previous node
        prev_node=curr_node
        #updating current node
        curr_node=next_node
    
    head=prev_node
    return head


```

## Submission at 2024-09-04 11:06:37


```
size = int(input())

a = list(map(int, input().split()))

b = list(map(int, input().split()))


c = []
for k in range(size):
    c.append(max(a[k], b[k]))

print(c)

```

## Submission at 2024-09-04 11:07:37


```
size = int(input())

a = list(map(int, input().split()))

b = list(map(int, input().split()))


c = []
for k in range(size):
    c.append(max(a[k], b[k]))

print(*c) #it is used to unpack the array and use each elements as individual ones

```

## Submission at 2024-09-04 11:28:22


```

def diagonal_traversal(matrix):
    # Your code here
    if not matrix:
        return []

    m=len(matrix) #m=3 (rows)
    n=len(matrix[0]) #n=3(columns)
    res=[]

    for i in range(n): #i=starting column
        row, col = 0, i #i=0
        while row < m and col >= 0: 
            res.append(matrix[row][col])
            row += 1
            col -= 1
    
    for j in range(1, m):
        row, col = j, n - 1
        while row < m and col >= 0:
            res.append(matrix[row][col])
            row += 1
            col -= 1
    
    return res


    

```

## Submission at 2024-09-05 09:59:38


```

def diagonal_traversal(matrix):
    # Your code here

    m=len(matrix)
    n=len(matrix[0])

    res=[]

    for k in range(m):
        i=k
        j=0
        while i>=0:
            res.append(matrix[i][j])
            i-=1
            j+=1
    
    for k in range(0,n):
        i=m-1
        j=k
        diagonal=[]
        while j<=n-1:
            res.append(matrix[i][j])
            i-=1
            j+=1
    return res
    

```

## Submission at 2024-09-05 10:03:20


```

def diagonal_traversal(matrix):
    # Your code here

    m=len(matrix)
    n=len(matrix[0])

    res=[]

    for k in range(m):
        i=k
        j=0
        while i>=0:
            res.append(matrix[i][j])
            i-=1
            j+=1
    
    for k in range(1,n):
        i=m-1
        j=k
        diagonal=[]
        while j<=n-1:
            res.append(matrix[i][j])
            i-=1
            j+=1
    return res
    

```

## Submission at 2024-09-05 10:04:52


```

def diagonal_traversal(matrix):
    # Your code here

    if not matrix or not matrix[0]:
        print("")  # Or handle the empty matrix case as needed
        return


    m=len(matrix)
    n=len(matrix[0])

    res=[]

    for k in range(m):
        i=k
        j=0
        while i>=0:
            res.append(matrix[i][j])
            i-=1
            j+=1
    
    for k in range(1,n):
        i=m-1
        j=k
        diagonal=[]
        while j<=n-1:
            res.append(matrix[i][j])
            i-=1
            j+=1
    return res
    

```

## Submission at 2024-09-05 10:09:08


```

def diagonal_traversal(matrix):
    # Your code here

    if not matrix or not matrix[0]:
        print("")  # Or handle the empty matrix case as needed
        return


    m=len(matrix)
    n=len(matrix[0])

    res=[]

    for k in range(m):
        i=k
        j=0
        while i>=0 and j<n:
            res.append(matrix[i][j])
            i-=1
            j+=1
    
    for k in range(1,n):
        i=m-1
        j=k
        diagonal=[]
        while i>=0 and j<n:
            res.append(matrix[i][j])
            i-=1
            j+=1
    return res
    

```

## Submission at 2024-09-05 10:10:16


```

def diagonal_traversal(matrix):
    # Your code here

    if not matrix or not matrix[0]:
        print("")  # Or handle the empty matrix case as needed
        return


    m=len(matrix)
    n=len(matrix[0])

    res=[]

    for k in range(m):
        i=k
        j=0
        while i>=0 and j<n: # i>=0 only doesn't work because we have to keep the boundary in mind
            res.append(matrix[i][j])
            i-=1
            j+=1
    
    for k in range(1,n):
        i=m-1
        j=k
        diagonal=[]
        while i>=0 and j<n: # Same here we just can't use j<=n-1
            res.append(matrix[i][j])
            i-=1
            j+=1
    return res
    

```

## Submission at 2024-09-09 09:51:20


```
# write code from scratch

def power(n):
    if(n%4==0):
        return True
    else:
        return False

n=int(input())
power(n)
```

## Submission at 2024-09-09 09:55:21


```
# write code from scratch

def power(n):
    while(n//4<=0):
        n=n/4
        power(n)
    return True



n=int(input())
power(n)
```

## Submission at 2024-09-09 09:58:26


```
# write code from scratch

def power(n):
    if(n%4==0):
        n=n/4
        power(n)
        return True
    else:
        return False
        
n=int(input())
power(n)
```

## Submission at 2024-09-09 10:00:49


```
# write code from scratch

def power(n):
    if(n%4!=0):
        return False
    else:
        while(n!=1):
            n=n/4
            power(n)
        return True
        
n=int(input())
power(n)
```

## Submission at 2024-09-09 10:01:50


```
# write code from scratch

def power(n):
    if(n%4!=0):
        return False
    else:
        while(n!=1):
            n=n//4
            power(n)
        return True
        
n=int(input())
power(n)
```

## Submission at 2024-09-09 10:02:34


```
# write code from scratch

def power(n):
    if(n%4!=0):
        return False
    else:
        n=n//4
        power(n)
        return True
        
n=int(input())
power(n)
```

## Submission at 2024-09-09 10:56:31


```

# class node:
#     def __init__(self,data):
#         self.data = data
#         self.next = None


def removeDuplicates(head):
    curr=head
    prev=None

    while curr:
        prev=curr.next
        curr=curr.next
        if(prev.data==curr.data):
            if(curr==head):
                curr=prev.next
                head=prev
            else:
                curr.next=prev.next
                curr=prev.next
        else:
            curr=curr.next
            prev=prev.next
        return prev


```

## Submission at 2024-09-09 11:08:45


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
        count=0
        head=num1
        curr=head
        while num1:
            count+=1
            curr=curr.next
        count1=0
        head=num2
        curr=head
        while num2:
            count1+=1
            curr=curr.next
        sum=[]
        head=sum
        curr=head
        if(count==count1):
            while num1:
                curr=num1.data+num2.data
                curr=curr.next
        return head


```

## Submission at 2024-10-07 10:12:19


```
# Write code from scratch
def minSum(num):
    # res=[[29,23],[223,9]]
    # sum_res,res=[],[]
    # # for i in range(len(res)):
    # #     for j in range(i):
    # #         sum_res.append(res[j]+res[j])
    
    # # print(min(sum_res))
    # for i in range(len(res)-1):
    #     for j in range(len(res[i])-1):
    #         sum_res=(res[j]+res[j+1])

    # for i in range(len(sum_res)-1):
    #     res=sum_res[i]+sum_res[i+1]
    # print( res )
    res=[29,23]
    sum_res=[]
    # for i in range(len(res)):
    #     for j in range(i):
    #         sum_res.append(res[j]+res[j])
    
    # print(min(sum_res))
    for i in range(len(res)-1):
        sum_res=res[i]+res[i+1]
    print( sum_res )

num=2932
minSum(num)
```

## Submission at 2024-10-07 10:52:57


```
# Write code from scratch
# candy=0

def put(item):
    arr.append(item)
    return True

def ate(item):
    count=0
    if not arr:
        return False
    else:
        arr.remove(item)
        count+=1
        print(count)
        return True


def func(n,k):

    # n,k=input(),input()

    # count=k
    if n==1 and k==1:
        print(0)
    while n>0:
        if put(1):
            n-=1
        if ate(1):
            n-=1
            k-=1

arr=[]
func(9,11)


        


    





# # def func(n,k):
# #     if n>=1:
# #         if put(1)

# def func(n,k):
#     while n>0:
#         if k
    

stack=[]
```

## Submission at 2024-10-07 11:13:11


```
# Write Python Code from scratch

n=int(input())
arr=[]
res=[]
for i in range(0,n-1):
    arr[i]=input()

for i in range(n):
    if arr[i+1]<arr[i]:
        res.append(arr[i]-arr[i+1])
    if arr[i+1]>=arr[i]:
        res.append(arr[i])

```

## Submission at 2024-10-21 11:34:43


```
# Write Python Code from scratchn=int(input())
n=int(input())
arr=list(map(int,input().split()))
res=[]
# n=len(arr)
for i in range(n-1):
    if arr[i+1]<arr[i]:
        res.append(arr[i]-arr[i+1])
    if arr[i+1]>=arr[i]:
        res.append(arr[i])

for i in range(n-1):
    print(res[i],end=" ")
print(arr[n-1])
```

## Submission at 2024-10-28 10:10:33


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
    def func(self,root,res):
        if root is None:
            return []
        self.func(root.right,res)
        res.append(root.data)
        

    def findMax(self,root):
        #code here
        res=[]
        self.func(root,res)
        return res[0]




```

## Submission at 2024-10-28 10:22:09


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def funcLeft(root,res1):
  funcLeft(root.left,res1)
  res1.append(root.data)


def funcRight(root,res2):
  funcRight(root.right,res2)
  res2.append(root.data)

def maxDepth(root):
    # code here

    res1=[]
    res2=[]
    funcLeft(root,res1)
    funcRight(root,res2)
    return res1,res2


```

## Submission at 2024-10-28 10:31:24


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def funcL(root,resL):
  if root is None:
    return []
  funcL(root.left,resL)
  resL.append(root.data)

def funcR(root,resR):
  if root is None:
    return []
  funcR(root.right,resR)
  resR.append(root.data)


def maxDepth(root):
  resL=[]
  resR=[]
  funcL(root,resL)
  funcR(root,resR)
  
  lenL=len(resL)
  lenR=len(resR)

  if lenL>lenR:
    return lenL
  elif lenL<lenR:
    return lenR
  else:
    return lenL
```

## Submission at 2024-10-28 10:35:42


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def funcL(root,resL):
  if root is None:
    return []
  funcL(root.left,resL)
  resL.append(root.data)

def funcR(root,resR):
  if root is None:
    return []
  funcR(root.right,resR)
  resR.append(root.data)


def maxDepth(root):
  resL=[]
  resR=[]
  funcL(root,resL)
  funcR(root,resR)
  
  lenL=len(resL)
  lenR=len(resR)

  if lenL>lenR:
    return lenL
  elif lenL<lenR:
    return lenR
  elif lenL==lenR:
    return lenL+1
```

## Submission at 2024-10-28 10:36:19


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def funcL(root,resL):
  if root is None:
    return []
  funcL(root.left,resL)
  resL.append(root.data)

def funcR(root,resR):
  if root is None:
    return []
  funcR(root.right,resR)
  resR.append(root.data)


def maxDepth(root):
  resL=[]
  resR=[]
  funcL(root,resL)
  funcR(root,resR)
  
  lenL=len(resL)
  lenR=len(resR)

  if lenL>lenR:
    return lenL
  elif lenL<lenR:
    return lenR
  elif lenL==lenR:
    return lenL
```

## Submission at 2024-10-28 10:39:20


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def funcL(root,resL):
  if root is None:
    return []
  funcL(root.left,resL)
  resL.append(root.data)

def funcR(root,resR):
  if root is None:
    return []
  funcR(root.right,resR)
  resR.append(root.data)


def maxDepth(root):
  resL=[]
  resR=[]
  funcL(root,resL)
  funcR(root,resR)
  return resL,resR
  lenL=len(resL)
  lenR=len(resR)

  if lenL>lenR:
    return lenL
  elif lenL<lenR:
    return lenR
  elif lenL==lenR:
    return lenL
```

## Submission at 2024-10-28 10:39:43


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def funcL(root,resL):
  if root is None:
    return []
  funcL(root.left,resL)
  resL.append(root.data)

def funcR(root,resR):
  if root is None:
    return []
  funcR(root.right,resR)
  resR.append(root.data)


def maxDepth(root):
  resL=[]
  resR=[]
  funcL(root,resL)
  funcR(root,resR)
  # return resL,resR
  lenL=len(resL)
  lenR=len(resR)

  if lenL>lenR:
    return lenL
  elif lenL<lenR:
    return lenR
  elif lenL==lenR:
    return lenL
```

## Submission at 2024-10-28 10:41:32


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def funcL(root,resL):
  if root is None:
    return []
  funcL(root.left,resL)
  resL.append(root.data)

def funcR(root,resR):
  if root is None:
    return []
  funcR(root.right,resR)
  resR.append(root.data)


def maxDepth(root):
  resL=[]
  resR=[]
  funcL(root,resL)
  funcR(root,resR)
  # return resL,resR
  lenL=len(resL)
  lenR=len(resR)
  if (lenR and lenL) is None:
    return None
  if lenL>lenR:
    return lenL
  elif lenL<lenR:
    return lenR
  elif lenL==lenR:
    return lenL
```

## Submission at 2024-10-28 10:46:26


```
# Write code from scratch

totl=int(input())
n=list(map(int,input().split()))

size=len(n)

print(int(size/2))
```

## Submission at 2024-10-28 10:49:05


```
# Write code from scratch

totl=int(input())
n=list(map(int,input().split()))

size=len(n)
if size is None:
    print(None)
else:
    print(int(size/2))
```

## Submission at 2024-10-29 12:12:16


```
total = int(input())
nums = list(map(int, input().split()))

count = {}

for num in nums:
    if num in count:
        count[num] += 1
    else:
        count[num] = 1  # Corrected this line to set initial count to 1

# print(count)

sum_of_val=sum(count.values())
# print(sum_of_val)
if sum_of_val == total:
    print(int(sum_of_val/2))
else:
    print(int(total/2))



```

## Submission at 2024-10-29 12:13:37


```
total = int(input())
nums = list(map(int, input().split()))

count = {}

for num in nums:
    if num in count:
        count[num] += 1
    else:
        count[num] = 1

# print(count)

sum_of_val=sum(count.values())
# print(sum_of_val)
if sum_of_val == total:
    print(int(sum_of_val/2))
else:
    print(int(total/2)) #What to do in the else part.



```

## Submission at 2024-10-29 12:34:23


```
total = int(input())
nums = list(map(int, input().split()))

count = {}

for num in nums:
    if num in count:
        count[num] += 1
    else:
        count[num] = 1  


// print(count)

// sum_of_val=sum(count.values())
// print(sum_of_val)
// if sum_of_val == total:
//     print(sum_of_val/2)
// else:
//     print(total/2)



```

## Submission at 2024-10-30 11:17:34


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    st.add(num)

# print(count)
print(min(len(st), len(nums)))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-10-30 11:17:56


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    st.add(num)

# print(count)
print(max(len(st), len(nums)))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-10-30 11:18:40


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    print(num)
    st.add(num)

# print(count)
print(max(len(st), len(nums)/2))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-10-30 11:18:50


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    # print(num)
    st.add(num)

# print(count)
print(max(len(st), len(nums)/2))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-10-30 11:20:12


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    # print(num)
    st.add(num)

# print(count)
print(min(len(st), total/2))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-10-30 11:21:09


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    # print(num)
    st.add(num)

# print(count)
print(min(len(st), total/2))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-10-30 11:23:02


```
total = int(input())
nums = list(map(int, input().split()))
st = set()
count = {}

for num in nums:
    # print(num)
    st.add(num)

# print(st)
print(int(min(int(len(st)), total/2)))
# print(x)
# sum_of_val=sum(count.values())
# # print(sum_of_val)
# if sum_of_val == total:
#     print(int(sum_of_val/2))
# else:
    # print(int(total/2)) #What to do in the else part.
```

## Submission at 2024-11-25 09:53:52


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
    if root is None:
      return
    
    curr=root

    while curr.left is not None:
      curr=curr.left

    return curr.data
```

## Submission at 2024-11-25 10:00:36


```
# Write Python Code from scratch
n =int(input())
# user_name=[]
for i in range(n):
    user_name=input()
    print(f"Hello {user_name}!")
```

## Submission at 2024-11-25 10:42:25


```
# write code from scratch

n=int(input())
arr=list(map(int,input().split()))
even=0
odd=0
for i in range(n):
    if arr[i]%2==0:
        even+=1
    else:
        odd+=1

print(f"{odd} {even}")

```

## Submission at 2024-11-25 11:01:28


```
# Write Python code from scratch

string=input()
size=len(string)
size=size-1
temp=size
rev=""
res=""
while size!=-1:
    rev+=string[size]
    size-=1

for i in range(temp):
    if rev[i] in res:
        pass
    else:
        res+=rev[i]
print(res)

# print(rev)    
```

## Submission at 2024-11-25 11:04:28


```
# Write Python code from scratch

n=int(input())

for i in range(n):
    print("*"*n)
    n-=1
```

