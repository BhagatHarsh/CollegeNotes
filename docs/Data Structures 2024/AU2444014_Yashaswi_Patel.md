## Submission at 2024-09-02 11:08:02


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, x):
    # If the head node is to be deleted
    if x == 1:
        return head.next
    
    # Initialize current to head of the list
    current = head
    
    # Move to the (x-1)th node
    for i in range(x - 2):
        current = current.next
    
    # Change the next pointer of the (x-1)th node to skip the xth node
    current.next = current.next.next
    
    return head

```

## Submission at 2024-09-09 09:55:33


```
# write code from scratch
def power(i):
    if i==0 or i==1
```

## Submission at 2024-09-09 10:02:22


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
        number1 = num1
        number2 = num2
        while number1:
            result1.append(number1.val)
            number1=number1.next
        while number2:
            result2.append(number.val)
            number2=number2.next

```

## Submission at 2024-09-09 10:05:40


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
        number1 = num1
        number2 = num2
        while number1:
            result1.append(number1.val)
            number1=number1.next
        while number2:
            result2.append(number.val)
            number2=number2.next

```

## Submission at 2024-09-09 10:10:13


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
    Cuff = head
    while cuff is None:
        if cuff.data is cuff

```

## Submission at 2024-09-09 10:19:40


```
# write code from scratch
def power(n):
    #if n < 0:
        #return false

    for i in range(0,31):
        if n**i == n:
            result = True
            break
        else :
            result = False
    return false

n = input()
result = power(n)
print(result)
        

```

## Submission at 2024-09-09 10:23:27


```
# write code from scratch
def power(n):
    #if n < 0:
        #return false

    for i in range(0,31):
        if n*i == n:
            result = True
            break
        else :
            result = False
    return False
n = input()
result = power(n)
print(result)
        

```

## Submission at 2024-09-09 10:23:42


```
# write code from scratch
def power(n):
    #if n < 0:
        #return false

    for i in range(0,31):
        if n*i == n:
            result = True
            break
        else :
            result = False
    return False
n = input()
result = power(n)
print(result)
        

```

## Submission at 2024-09-09 10:33:56


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head!=next:
        return head
    curr=head
    return curr.next.data==curr.data


```

## Submission at 2024-09-09 10:52:09


```
# write code from scratch
n=int(input())
n2 = input().split(' ')
n3 = []
for i in n2:
    n2.append(int(i))
len1 = len(n2)
result = []
for i in range(0, len1-1):
    result.append(n3[i] + n3[i+1])

print(result)
```

## Submission at 2024-09-09 10:57:06


```
# write code from scratch
n=int(input())
n2 = input().split(' ')
n3 = []
for i in n2:
    n2.append(int(i))
len1 = len(n2)
result = []
for i in range(0, len1-1):
    result.append(n3[i] + n3[i+1])

len2 = len(result)
for i in range(0,len2):
    for j in result:
        if result[i]>j:
            count - i
print(count + 1)
```

## Submission at 2024-09-09 10:59:25


```
n=int(input())
n2 = input().split(' ')
n3 = []
for i in n2:
    n2.append(int(i))
len1 = len(n2)
result = []
for i in range(0, len1-1):
    result.append(n3[i] + n3[i+1])

len2 = len(result)
for i in range(0,len2):
    for j in result:
        if result[i]>j:
            count - i
print(count + 1)
```

## Submission at 2024-09-09 11:04:01


```
#n=int(input())
n2 = input().split(' ')
n3 = []
for i in n2:
    n2.append(int(i))
len1 = len(n2)
result = []
for i in range(0, len1-1):
    result.append(n3[i] + n3[i+1])
len2 = len(result)
for i in range(0,len2):
    for j in result:
        if result[i]>j:
            count - i
print(count + 1)
```

## Submission at 2024-09-09 11:07:39


```
# write code from scratch
def power(n):
    #if n < 0:
        #return false

    for i in range(0,31):
        if n**i == n:
            result = True
            break
        else :
            result = False
    return False
n = input()
result = power(n)
print(result)

```

## Submission at 2024-09-09 11:08:18


```
# write code from scratch
def power(n):
    #if n < 0:
        #return false

    for i in range(0,31):
        if n*i == n:
            result = True
            break
        else :
            result = False
    return False
n = input()
result = power(n)
print(result)

```

## Submission at 2024-10-07 10:08:12


```
# Write code from scratch
def sum_of_four_digit():
    num=2932
    new1=29
    new2=23
    new=new1+new2
    return new
    
    
    
```

## Submission at 2024-10-07 10:23:24


```
# Write code from scratch
def sum_of_four_digit():
    num=2932
    num3=[num1,num2]

```

## Submission at 2024-10-28 10:14:02


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
        n=1
        n2=2
        n3=3
        if n>n2 and n>n3:
            print(n)
        elif n2>n and n2>n3:
            print(n2)
        else:
            print(n3)


```

## Submission at 2024-10-28 10:25:21


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
        result=[]
        def traversal(node):
            if node:
                result.append(Node.val)
                traversal(Node.left)
                traversal(Node.right)
            traversal(root)


```

## Submission at 2024-10-28 10:34:49


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
    return 1+max(maxDepth(root.left).maxDepth(root.right))
```

## Submission at 2024-10-28 10:35:40


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
    return 1+max(maxDepth(root.left),maxDepth(root.right))
```

## Submission at 2024-10-28 10:47:35


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
        max1=float('.inf')
        def dfs(node):
          if not node:
            return 1
        left=dfs(node.left)
        right=dfs(node.right)
        return max(left,right)
    return dfs(root)


```

## Submission at 2024-11-25 09:56:40


```
# Write Python code from scratch
def print_stars():
    a=5
    for i in range a:
        for j in range of i:
            print("*",j)
    
```

## Submission at 2024-11-25 10:09:12


```
// Write C++ code from scratch
#include<iostream.h>
int n;
cout<<n;
cout<<"Hello Tony!"<<endl
cout<<"Hello Steve!"<<endl
cout<<"Hello Banner!"<<endl
```

## Submission at 2024-11-25 10:10:09


```
// Write C++ code from scratch
#include<iostream.h>
int n;
cout<<n;
cout<<"Hello Tony!"<<endl
cout<<"Hello Steve!"<<endl
cout<<"Hello Banner!"<<endl
```

## Submission at 2024-11-25 10:15:55


```
// Write C++ code from scratch
#include<iostream.h>
int n;
cout<<n;
cout<<"Hello Tony!"<<endl
cout<<"Hello Steve!"<<endl
cout<<"Hello Banner!"<<endl
```

## Submission at 2024-11-25 10:19:01


```
# Write Python Code from scratch
def hello():
    int n=3
    int(input(n))
    print("Hello Tony!")
    print("Hello Steve!")
    print("Hello Banner!")
```

## Submission at 2024-11-25 10:20:39


```
# Write Python Code from scratch
def hello():
    int n=3
    print(n)
    print("Hello Tony!")
    print("Hello Steve!")
    print("Hello Banner!")
```

## Submission at 2024-11-25 10:21:50


```
# Write Python Code from scratch
def hello():
    int n=3
    print(n)
    print(Hello Tony!)
    print(Hello Steve!)
    print(Hello Banner!)
```

## Submission at 2024-11-25 10:25:34


```
# Write Python Code from scratch
print("3")
print("Hello Tony!")
print("Hello Steve!")
print("Hello Banner!")
```

## Submission at 2024-11-25 10:29:26


```
# Write Python Code from scratch
int n=3
str n1="Tony", n2="Steve", n3="Banner"
print(n)
print("Hello" n1"!")
print("Hello" n2"!")
print("Hello" n3"!")
```

## Submission at 2024-11-25 10:29:42


```
# Write Python Code from scratch
# Write Python Code from scratch
int n=3
str n1="Tony", n2="Steve", n3="Banner"
print(n)
print("Hello" n1"!")
print("Hello" n2"!")
print("Hello" n3"!")
```

## Submission at 2024-11-25 10:34:03


```
# Write Python code from scratch
n=int(input())
for i in range(1, n+1):
    for j in range(1,n+i-1):
        print("*")
    i+=1
```

## Submission at 2024-11-25 10:37:42


```
# Write Python code from scratch
n=int(input())
for i in range(0,n):
    for j in range(1,i+1):
        print("*")
        j+=1
    i+=1
```

## Submission at 2024-11-25 10:44:18


```
# Write Python Code from scratch
n=int(input())
for i in range(0,n):
    n1=input()
    print("Hello "+n1+"!")
```

## Submission at 2024-11-25 11:08:14


```
# Write Python code from scratch
n=int(input())
for i in range(1-n):
    for j in range(n-i+1):
        print("*")
        j+=1
    i+=1
```

## Submission at 2024-11-25 11:13:59


```
# Write Python code from scratch
n=int(input())
for i in range(1-n):
    for j in range(1,n-i+1):
        print("*")
        j+=1
    i+=1
```

## Submission at 2024-11-25 11:19:32


```
# Write Python code from scratch
n=int(input())
for i in range(1+n):
    for j in range(1,n-i+1):
        print("*")
        j+=1
    i-=1
```

## Submission at 2024-11-25 11:23:58


```
# Write Python code from scratch
n=int(input())
for i in range(1+n):
    for j in range(1,n-i+1):
        j+=1
    i-=1
    print("*")
```

