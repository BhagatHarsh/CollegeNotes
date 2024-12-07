## Submission at 2024-09-02 11:03:21


```
def pow(x, n):
    # Base case
    if n == 0:
        return 1
    
    # If n is negative
    if n < 0:
        # Calculate pow for positive n and then take the reciprocal
        result = 1 // pow(x, -n)
        return result
    
    # If n is positive and even
    if n % 2 == 0:
        half = pow(x, n // 2)
        return half * half
    
    # If n is positive and odd
    else:
        return x * pow(x, n - 1)

```

## Submission at 2024-09-02 11:03:25


```
def pow(x, n):
    # Base case
    if n == 0:
        return 1
    
    # If n is negative
    if n < 0:
        # Calculate pow for positive n and then take the reciprocal
        result = 1 // pow(x, -n)
        return result
    
    # If n is positive and even
    if n % 2 == 0:
        half = pow(x, n // 2)
        return half * half
    
    # If n is positive and odd
    else:
        return x * pow(x, n - 1)

```

## Submission at 2024-09-02 11:03:31


```
def pow(x, n):
    # Base case
    if n == 0:
        return 1
    
    # If n is negative
    if n < 0:
        # Calculate pow for positive n and then take the reciprocal
        result = 1 // pow(x, -n)
        return result
    
    # If n is positive and even
    if n % 2 == 0:
        half = pow(x, n // 2)
        return half * half
    
    # If n is positive and odd
    else:
        return x * pow(x, n - 1)

```

## Submission at 2024-09-02 11:03:35


```
def pow(x, n):
    # Base case
    if n == 0:
        return 1
    
    # If n is negative
    if n < 0:
        # Calculate pow for positive n and then take the reciprocal
        result = 1 // pow(x, -n)
        return result
    
    # If n is positive and even
    if n % 2 == 0:
        half = pow(x, n // 2)
        return half * half
    
    # If n is positive and odd
    else:
        return x * pow(x, n - 1)

```

## Submission at 2024-09-02 11:08:39


```
def pow(x, n):
    # Base case
    if n == 0:
        return 1
    
    # If n is negative
    if n < 0:
        # Calculate pow for positive n and then take the reciprocal
        result = 1 // pow(x, -n)
        return result
    
    # If n is positive and even
    if n % 2 == 0:
        half = pow(x, n // 2)
        return half * half
    
    # If n is positive and odd
    else:
        return x * pow(x, n - 1)

# Example usage
print(pow(2, 10))  # Output: 1024
print(pow(2, -2))  # Output: 0 (which is floor(0.25))
print(pow(16, -2)) # Output: 0 (which is floor(1/256))

```

## Submission at 2024-09-09 05:57:56


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
    print(''.join(map(str,c)))
```

## Submission at 2024-09-09 06:00:20


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
    print(''.join(map(str,c)))
```

## Submission at 2024-09-09 06:04:21


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
print(''.join(map(str,c)))
```

## Submission at 2024-09-09 06:06:31


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
print(' '.join(map(str,c)))
```

## Submission at 2024-09-09 06:13:50


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

## Submission at 2024-09-09 10:03:38


```
n = input()

def pow(n):
    global = i
    if(n == 0):
        return false
    
    elif (n%4 == 0):
        i = i + 1
        return pow(n/4)
    elif()
        

    if pow(n):
        print("true")
    else:
        print("false")
        
```

## Submission at 2024-09-09 10:06:16


```
n = input()

def pow(n):
    global = i
    if(n == 0):
        return false
    
    elif (n%4 == 0):
        i = i + 1
        return pow(n/4)
    elif(n)
        

    if pow(n):
        print("true")
    else:
        print("false")
        
```

## Submission at 2024-09-09 10:10:30


```
n = input()

def pow(n):
    global = i
    if(n == 0):
        return false
    
    elif (n%4 == 0):
        i = i + 1
        return pow(n/4)
    elif(n)
        

    if pow(n):
        print("true")
    else:
        print("false")
        
```

## Submission at 2024-09-09 10:40:10


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head 
    prev = None 

    while curr:
        prev = curr.next 

    if(prev.data==curr.data):
        if(curr==head):
            curr = prev.next
            head = prev 
        else:
            curr = curr.next 
            prev = prev.next 
            head.next = prev 
    else:
        curr = curr.next 
        prev = prev.next 
    return head 


```

## Submission at 2024-09-09 11:01:47


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head 
    temp = head

    while(curr.next != None):
        if (curr.data == curr.next.data):
            curr.next = curr.next.next
            curr = curr.next 
        else:
            head = curr.next 

        return temp 
        
            
            
        
    
        


```

## Submission at 2024-10-07 09:53:12


```

new1 = 29
new2 = 23
c = new1 + new2
print(c)
```

## Submission at 2024-10-28 10:13:24


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
        arr=[]
        def order(root):
            if root is None:
                return None
            arr.append(root.data)
            order(root.left)
            order(root.right)

         order(root)
         a = sorted(arr)
         return arr[0]   


```

## Submission at 2024-10-28 10:43:03


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
        arr=[]
        def order(root):
            if root is None:
                return None
            arr.append(root.data)
            order(root.right)
            order(root.left)
    order(root)
    a=sorted(arr)
    return arr[0]


```

## Submission at 2024-10-28 10:48:57


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
        arr=[]
        def order(root):
            if root is None:
                return None
            arr.append(root.data)
            order(root.left)
            order(root.right)
            

         order(root)
         a=sorted(arr)
         return arr[0]


```

## Submission at 2024-10-28 11:27:17


```
order=input()
arr=[]
for i in range(len(order)):
    if order[i]==" ":
        continue
    arr.append(order[i])
srr=[]
for i in range(len(arr)):
    if i==3 or i==4 or i==5:
        continue
    print(arr[i,end=" "])
```

## Submission at 2024-11-25 09:53:20


```
n1 = "Hello Tony!"
n2 = "Hello Steve!"
n3 = "Hello Banner!"
print(n1)
print(n2)
print(n3)
```

## Submission at 2024-11-25 10:52:08


```
str n1 = {"Hello Tony!"}
str n2 = {"Hello Steve!"}
str n3 = {"Hello Banner!"}
print(n1)
print(n2)
print(n3)
```

## Submission at 2024-11-25 11:13:22


```
n=input(n)
n=int(n)
for i in range(1,n+1):
    print("*"(n-i+1))
```

## Submission at 2024-11-25 11:24:10


```
n=input(n)
n=int(n)
for i in range (1,n+1):
    print("*"(n-i+1))
```

## Submission at 2024-11-25 11:31:02


```
n=input()
n=int(n)
for i in range (n):
    print("*"*(n-i))
```

