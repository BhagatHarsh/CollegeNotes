## Submission at 2024-08-05 10:11:12


```
# Write your Python code here from the scratch
a= input("enter name")
print("Hello "+a)
```

## Submission at 2024-08-05 10:15:13


```
# Write your Python code here from the scratch
a=input()

print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:27:47


```
// Write your C++ code here from the scratch
a=input()
print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:30:16


```
# Write your Python code here from the scratch
a=input()
print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:37:03


```
# Write your Python code here

n=int(input())
for i in range(n):
    a=input()
    print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:38:38


```
# Write your Python code here

n=int(input())
for i in range(n):
    a=input()
    print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:59:42


```
# Write your Python code here
n=int(input())
for i in range(n):
    a=input()
    print("Hello "+a+"!")
```

## Submission at 2024-08-12 09:49:43


```
def fibonacci(x):
    if x==1 or x==0:
        return x
    else:
        return(fibonacci(x-1)+fibonacci(x-2))
    

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:14:04


```
def is_power_of_two(n:int) -> bool:
    if n==1:
        return True
        
    if n==0:
        return False

    if n%2==0:
        return is_power_of_two(n//2)
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n):
        print("true")
    else:
        print("false")
    

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:22:49


```
def is_power_of_two(n:int) -> bool:
    if n==1:
        return True
        
    if n<=0:
        return False

    if n%2!=0:
        return False
    return is_power_of_two(n//2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n):
        print("true")
    else:
        print("false")
    

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 10:16:53


```
def combine(n, k):

    def sample(s,ls):
        if len(ls)==k:
            result.append(ls)
            return
        for i in range(s,n+1):
            sample(i+1,ls+[i])

    result=[]
    sample(1,[])
    return result

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

## Submission at 2024-08-20 07:50:04


```
def comb(l,r=[],nl=[]):
    if len(l)==0:
        return nl.append(r)
        
    else:
        
        for i in range(len(l)):
            
            nr=r+[l[i]]
            comb(l[:i]+l[i+1:],nr,nl)

    return nl

def perm(*args):
    l=list(args)
    return comb(l)

print(perm(1,2,3))
```

## Submission at 2024-08-20 07:53:20


```
def comb(l,r=[],nl=[]):
    if len(l)==0:
        return nl.append(r)
        
    else:
        
        for i in range(len(l)):
            
            nr=r+[l[i]]
            
            comb(l[:i]+l[i+1:],nr,nl)

    return nl

def perm(*args):
    l=list(args)
    return comb(l)

print(perm(1,2,3))
```

## Submission at 2024-08-20 08:02:17


```
def comb(l,r=[],nl=[]):
    if len(l)==0:
        return nl.append(r)
        
    else:
        
        for i in range(len(l)):
            #print("i :",i)
            nr=r+[l[i]]
            # print("r :",r)
            # print("l[:i]+l[i+1:] :",l[:i]+l[i+1:])
            comb(l[:i]+l[i+1:],nr,nl)

    return nl

def perm(*args):
    l=list(args)
    return comb(l)

def main():
    x,y,z = map(int, input().split())
    print(perm(x,y,z))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-20 08:23:18


```
def perm(l,r=[],nl=[]):
    if len(l)==0:
        return nl.append(r)
    else: 
        for i in range(len(l)):
            nr=r+[l[i]]
            perm(l[:i]+l[i+1:],nr,nl)
    return nl

def main():
    x = list(map(int, input().split()))  
    print(perm(x))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-20 08:34:35


```
def perm(l,r=[],nl=[]):
    if len(l)==0:
        return nl.append(r)
    else: 
        for i in range(len(l)):
            nr=r+[l[i]]
            perm(l[:i]+l[i+1:],nr,nl)
    return nl

def main():
    x = list(map(int, input().split()))  
    print(perm(x))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-20 08:39:44


```
def perm(l,r=[],nl=[]):
    if len(l)==0:
        return nl.append(r)
    else: 
        for i in range(len(l)):
            nr=r+[l[i]]
            perm(l[:i]+l[i+1:],nr,nl)
    return nl

def main():
    x = list(map(int, input().split()))  
    print(perm(x))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-20 08:51:42


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-20 09:43:21


```
def genpar(n):
    def paran(s="",left=0,right=0):
        
        if len(s)==2*n:
            r.append(s)
            return
        if left<n:
            
            
            paran(s+"(",left+1,right)
        if right<left:
            
            paran(s+")",left,right+1)
            
    r=[]
    paran()
    return r
def main():
    x=int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-20 09:53:58


```
def subsets(nums):
    if len(nums) == 0:
        return [[]]
    fe = nums[0]
    rs = subsets(nums[1:])
    ns = []
    for subset in rs:
        
        ns.append(subset)  
        ns.append([fe] + subset)  
    
    return ns



    

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

## Submission at 2024-09-02 10:12:06


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    n=head
    if n==None:
        return
    else:
        while n!=None:
            result.append(n.val)
            n=n.next
    return result

```

## Submission at 2024-09-02 10:27:47


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    n=head
    if n.data==k:
        n=n.next
        return
    while n.next!=None:
        if n.next.data==k:
            break
        else:
            n=n.next




```

## Submission at 2024-09-02 10:31:22


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    n=head
    if n.data==k:
        n=n.next
        return
    while n.next!=None:
        if n.next.data==k:
            n.next=n.next.next
        else:
            n=n.next




```

## Submission at 2024-09-02 10:39:25


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    n=head
    c=0
    for i in range(k):
        if c<k:
            c=c+1
            n=n.next
        else:
            n.next=n.next.next
        




```

## Submission at 2024-09-02 10:44:22


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    n=head
    c=0
    for i in range(k):
        if c<k:
            n=n.next
            c=c+1
            
        else:
            n.next=n.next.next
        




```

## Submission at 2024-09-02 10:47:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    n=head
    c=0
    for i in range(k):
        if c<k:
            c=c+1
            n=n.next 
        else:
            n.next=n.next.next
        




```

## Submission at 2024-09-02 11:09:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    n=head
    c=0
    for i in range(k-2):
            n=n.next
    if n.next !=None:
        n.next=n.next.next
    return head

    
```

## Submission at 2024-09-02 11:12:23


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    if k<1:
        return head
    if k==1:
        return head.next
    n=head
    for i in range(k-2):
            n=n.next
    if n.next !=None:
        n.next=n.next.next
    return head

```

## Submission at 2024-09-03 14:15:11


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    c=1
    n=head
    while n is not None:
        if c==k:
            
            return n.val
        else:
            
            n=n.next
            c=c+1
    print(-1)
    

```

## Submission at 2024-09-03 14:16:09


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    c=1
    n=head
    while n is not None:
        if c==k:
            
            return n.val
        else:
            
            n=n.next
            c=c+1
    return -1
    

```

## Submission at 2024-09-03 14:16:38


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    c=1
    n=head
    while n is not None:
        if c==k:
            
            return n.val
        else:
            
            n=n.next
            c=c+1
    return -1
    

```

## Submission at 2024-09-04 12:06:33


```
def maxel(n,a,b):
    c=[]
    for i in range(n):
        if a[i]>b[i]:
            c.append(a[i])
        else:
            c.append(b[i])
    
    print(" ".join(map(str,c)))

```

## Submission at 2024-09-04 12:46:24


```
def maxel(n,a,b):
    c=[]
    for i in range(n):
        if a[i]>b[i]:
            c.append(a[i])
        else:
            c.append(b[i])
    
    print(" ".join(map(str,c)))
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
maxel(n,a,b)
```

## Submission at 2024-09-09 09:49:14


```
n=int(input())
def pot(n):
    if n<=0:
        return
    if n==1:
        return True
    if n%3==0:
        m=n//3
        pot(m)

```

## Submission at 2024-09-09 09:51:36


```
n=int(input())
def pot(n):
    if n<=0:
        return
    if n==1:
        return True
    
    if n%3==0:
        m=n//3
        pot(m)
    return False

```

## Submission at 2024-09-09 09:52:46


```
n=int(input())
def pot(n):
    if n<=0:
        return
    if n==1:
        print("True")
    
    if n%3==0:
        m=n//3
        pot(m)
    print("False")

```

## Submission at 2024-09-09 09:53:42


```
n=int(input())
def pot(n):
    if n<=0:
        return
    if n==1:
        return True
    
    if n%3==0:
        m=n//3
        pot(m)
    return False

```

## Submission at 2024-09-09 09:57:36


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
c=0
for i in s:
    if i==t:
        c=c+1
    else:
        c=c+0
```

## Submission at 2024-09-09 10:09:42


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==l:
        return c
    else:
        if s[i]==t:
            c=c+1
            cnt(s,t,i+1)
        
```

## Submission at 2024-09-09 10:10:25


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==l-1:
        return c
    else:
        if s[i]==t:
            c=c+1
            cnt(s,t,i+1)
        
```

## Submission at 2024-09-09 10:11:55


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==(l-1):
        return c
    else:
        if s[i]==t:
            c=c+1
            cnt(s,t,i+1)
        
```

## Submission at 2024-09-09 10:12:55


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==(l-1):
        print(c)
    else:
        if s[i]==t:
            c=c+1
            cnt(s,t,i+1)
        
```

## Submission at 2024-09-09 10:13:44


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==(l-1):
        print(c)
    else:
        if s[i]==t:
            
            cnt(s,t,i+1)
            c=c+1
        
```

## Submission at 2024-09-09 10:16:55


```
n=int(input())
def pot(n):
    if n<=0:
        return False
    if n==1:
        return True
    
    if n%3==0:
        m=n//3
        pot(m)
    return False
```

## Submission at 2024-09-09 10:17:11


```
n=int(input())
def pot(n):
    if n<=0:
        return False
    if n==1:
        return True
    
    if n%3==0:
        m=n//3
        pot(m)
    
```

## Submission at 2024-09-09 10:18:52


```
n=int(input())
def pot(n):
    if n<=0:
        print("False")
    if n==1:
        print("True")
    
    if n%3==0:
        m=n//3
        pot(m)
    print("False")
    
```

## Submission at 2024-09-09 10:19:39


```
n=int(input())
def pot(n):
    if n<=0:
        print("False")
    if n==1:
        print("True")
    
    if n%3==0:
        m=n//3
        pot(m)
    print("False")
    
```

## Submission at 2024-09-09 10:20:23


```
n=int(input())
def pot(n):
    if n<=0:
        print("False")
    if n==1:
        print("True")
    
    if n%3==0:
        m=n//3
        print(m)
        pot(m)
    print("False")
    
```

## Submission at 2024-09-09 10:24:46


```
n=int(input())
def pot(n):
    if n<=0:
        print("False")
    if n==1:
        print("True")
    
    if n%3==0:
        m=n//3
        print(m)
        pot(m)
    print("False")
pot(27)
```

## Submission at 2024-09-09 10:26:02


```
n=int(input())
def pot(n):
    if n<=0:
        print("False")
    if n==1:
        print("True")
    
    if n%3==0:
        m=n//3
        print(m)
        pot(m)
    
pot(27)
```

## Submission at 2024-09-09 10:27:26


```
n=int(input())
def pot(n):
    if n<=0:
        
        return
    if n==1:
        print("True")
        return
    
    if n%3==0:
        m=n//3
        pot(m)
    print("False")
pot(27)
```

## Submission at 2024-09-09 10:27:56


```
n=int(input())
def pot(n):
    if n<=0:
        
        return
    if n==1:
        print("True")
        return
    
    if n%3==0:
        m=n//3
        pot(m)
        return
pot(27)
```

## Submission at 2024-09-09 10:37:45


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==(l-1):
        print(c)
    else:
        if s[i]==t:
            
            cnt(s,t,i+1)
            c=c+1
    print(c)    
```

## Submission at 2024-09-09 10:38:24


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i):
    if i==(l-1):
        print(c)
    else:
        if s[i]==t:
            c=c+1
            cnt(s,t,i+1)
            
    print(c)    
```

## Submission at 2024-09-09 10:42:19


```
n=list(map(int, input().split()))
def freq(n):
    s=str(n[0])
    t=str(n[1])
    l=len(s)
    i=0
    c=0
    def cnt(s,t,i):
        if i==(l-1):
            print(c)
        else:
            if s[i]==t:
                
                c=c+1
                cnt(s,t,i+1)
            
    
freq(n)    
```

## Submission at 2024-09-09 11:00:32


```
n=list(map(int, input().split()))
def freq(n):
    s=str(n[0])
    t=str(n[1])
    l=len(s)
    i=0
    c=0
    def cnt(s,t,i):
        if i==(l-1):
            print(c)
        else:
            if s[i]==t:
                c=c+1
                cnt(s,t,i+1)
            
    
freq(n)    
```

## Submission at 2024-09-09 11:11:06


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0

def cnt(s,t,i,c):
    if i==(l-1):
        print(c)
    else:
        if s[i]==t:
            print(c)
            cnt(s,t,i+1,c+1)
            
    print(c)    
cnt(s,t,i,0)
```

## Submission at 2024-09-09 11:13:30


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0

def cnt(s,t,i,c):
    if i==(l-1):
        print(c)
        return
    else:
        if s[i]==t:
            cnt(s,t,i+1,c+1)
            
        
cnt(s,t,i,0)
```

## Submission at 2024-09-16 04:00:42


```
def pthree(n):
    if n<=0:
        print ("False")
    if n==1:
        print("True")
    if (n%3==0):
        m=n//3
        pthree(m)
    else:
        print("False")
print(pthree(27))
```

## Submission at 2024-09-16 04:13:36


```
def pthree(n):
    if n<=0:
        return True
    if n==1:
        return True
    if (n%3==0):
        m=n//3
        pthree(m)
    else:
        return False
print(pthree(27))
```

## Submission at 2024-09-16 04:19:38


```
n=list(map(int, input().split()))
s=str(n[0])
t=str(n[1])
l=len(s)
i=0
c=0
def cnt(s,t,i,c):
    if i==l:
        return c
    else:
        if s[i]==t:
            c=c+1
            return cnt(s,t,i+1,c)
res=cnt(s,t,0,0)
print(res)
        
```

## Submission at 2024-09-16 04:57:11


```
# n=list(map(int, input().split()))
# s=str(n[0])
# t=str(n[1])
s,t=input().split()
l=len(s)

def cnt(s,t,i,c):
    if i==l:
        return c
    else:
        if s[i]==t:
            c=c+1
            return cnt(s,t,i+1,c)
        else:
            return cnt(s,t,i+1,c)      
res=cnt(s,t,0,0)
print(res)
        
```

## Submission at 2024-09-16 04:57:29


```
# n=list(map(int, input().split()))
# s=str(n[0])
# t=str(n[1])
s,t=input().split()
l=len(s)

def cnt(s,t,i,c):
    if i==l:
        return c
    else:
        if s[i]==t:
            c=c+1
            return cnt(s,t,i+1,c)
        else:
            return cnt(s,t,i+1,c)      
res=cnt(s,t,0,0)
print(res)
        
```

## Submission at 2024-09-16 05:01:09


```
# Write Code from Scratch here
def pthree(n):
    if n<=0 :
        return False
    if n==1:
        return True
    if (n%3==0):
        pthree(n//3)
    else:
        return False

```

## Submission at 2024-09-16 05:05:42


```
# Write Code from Scratch here
def pthree(n):
    if n<=0 :
        return False
    if n==1:
        return True
    if (n%3==0):
        return pthree(n//3)
    else:
        return False
        
n=int(input())
print(pthree(n))
```

## Submission at 2024-09-16 05:14:43


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    n=head
    while n is not None and n.next is not None:
        if n.data==n.next.data:
            n.next=n.next.next
        else:
            n=n.next
    return head

```

## Submission at 2024-09-16 08:08:20


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def isPalindrome(self, head):
        n=head
        c=0
        while n:
            c=c+1
            n=n.next
        h=(c+2-1)//2
        
        nh=head
        for i in range(h):
            nh=nh.next
        return nh

        prev1=None
        curr1=nh
        if head is None or head.next is None:
            return head
        while curr1 is not None:
            node1=curr1.next
            curr1.next=prev1
            prev1=curr1
            curr1=node1
        return prev1

        while nh and prev1:
            if nh.val!=prev1.val:
                return "true"
            else:
                return "false"





```

## Submission at 2024-09-16 09:17:29


```

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def isPalindrome(self, head):
        n=head
        c=0
        while n:
            c=c+1
            n=n.next
        h=(c+2-1)//2
        
        nh=head
        for i in range(h):
            nh=nh.next
        return nh

        prev1=None
        curr1=nh
        if head is None or head.next is None:
            return head
        while curr1 is not None:
            node1=curr1.next
            curr1.next=prev1
            prev1=curr1
            curr1=node1
        return prev1

        while nh and prev1:
            if nh.val!=prev1.val:
                return "false"
            else:
                return "true"
```

## Submission at 2024-09-16 09:18:04


```

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def isPalindrome(self, head):
        n=head
        c=0
        while n:
            c=c+1
            n=n.next
        h=(c+2-1)//2
        
        nh=head
        for i in range(h):
            nh=nh.next
        return nh

        prev1=None
        curr1=nh
        if head is None or head.next is None:
            return head
        while curr1 is not None:
            node1=curr1.next
            curr1.next=prev1
            prev1=curr1
            curr1=node1
        return prev1

        while nh and prev1:
            if nh.val!=prev1.val:
                return "false"
            else:
                return "true"
```

## Submission at 2024-09-16 09:18:29


```

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def isPalindrome(self, head):
        n=head
        c=0
        while n:
            c=c+1
            n=n.next
        h=(c+2-1)//2
        
        nh=head
        for i in range(h):
            nh=nh.next
        return nh

        prev1=None
        curr1=nh
        if head is None or head.next is None:
            return head
        while curr1 is not None:
            node1=curr1.next
            curr1.next=prev1
            prev1=curr1
            curr1=node1
        return prev1

        while nh and prev1:
            if nh.val!=prev1.val:
                return "false"
            else:
                return "true"
```

## Submission at 2024-10-07 09:51:29


```
s=input()
ns=[]
for i in s:
    if i!="+":
        ns.append(i)
ns.sort()
print("+".join(ns))


```

## Submission at 2024-10-07 09:59:24


```
s=input()
l=s.split(".")
nl=[]
for i in l:
    nsl=[]
    for j in i[::-1]:
        nsl.append(j)
    j="".join(nsl)
    nl.append(j)
fl=".".join(nl)
print(fl)

```

## Submission at 2024-10-07 10:23:23


```
from collections import deque # Don't touch this line

def rev(q):
    nl=[]
    for i in q[::-1]:
        nl.append(i)
    print(nl)
s=input()
ns=s.split(",")
print(ns)
rev(ns)

    





```

## Submission at 2024-10-07 10:33:07


```
from collections import deque # Don't touch this line

def rev(q):
    nq=[]
    for i in range(n):
        nq.append(q.pop())
    print(nq)

```

## Submission at 2024-10-07 10:36:57


```
from collections import deque # Don't touch this line

def rev(q):
    nq=[]
    ns=[]
    for i in range(n):
        nq.append(q.pop())
    for j in nq:
        ns.append(str(j))
    #print(ns)
    fl=" ".join(ns)
    print(fl)

```

## Submission at 2024-10-07 10:36:57


```
from collections import deque # Don't touch this line

def rev(q):
    nq=[]
    ns=[]
    for i in range(n):
        nq.append(q.pop())
    for j in nq:
        ns.append(str(j))
    #print(ns)
    fl=" ".join(ns)
    print(fl)

```

## Submission at 2024-10-07 10:49:37


```
n,k=map(list,input().split())
a,b,c,d,e,f=map(list,input().split())
nl=a+b+c+d+e+f
print(nl)

```

## Submission at 2024-10-07 11:09:31


```
n,k=map(list,input().split())
a,b,c,d,e,f=map(list,input().split())
nl=a+b+c+d+e+f

nll=[]
for i in nl:
    nll.append(int(i))
print(nll)

```

## Submission at 2024-10-07 11:13:03


```
n,k=map(list,input().split())
a,b,c,d,e,f=map(list,input().split())
nl=a+b+c+d+e+f

nll=[]
for i in nl:
    nll.append(int(i))

lh=0
rh=max(nll)
print(rh)
```

## Submission at 2024-10-07 11:13:39


```
n,k=map(list,input().split())
a,b,c,d,e,f=map(list,input().split())
nl=a+b+c+d+e+f

nll=[]
for i in nl:
    nll.append(int(i))

lh=0
rh=max(nll)
print(lh)
```

## Submission at 2024-10-07 11:14:42


```
n,k=map(list,input().split())
a,b,c,d,e,f=map(list,input().split())
nl=a+b+c+d+e+f

nll=[]
for i in nl:
    nll.append(int(i))

lh=0
rh=max(nll)
print(2)
```

## Submission at 2024-10-07 11:14:47


```
n,k=map(list,input().split())
a,b,c,d,e,f=map(list,input().split())
nl=a+b+c+d+e+f

nll=[]
for i in nl:
    nll.append(int(i))

lh=0
rh=max(nll)
print(2)
```

## Submission at 2024-10-28 08:50:38


```
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        f={}
        r=[]

        for i in nums:
            if target - i in nums:
                r.append(nums.index(i))
                r.append(nums.index(target-i))
                break
            # else:
            #     continue
        return r
        
```

## Submission at 2024-10-28 08:56:18


```
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        f={}
        r=[]

        for i in nums:
            if target - i in nums:
                r.append(nums.index(i))
                r.append(nums.index(target-i))
                break
            # else:
            #     continue
        return r
        
    # Simulating user input
user_input = "6 5 2 5 7 2"

# Storing the input into a list of integers
user_list = list(map(int, user_input.split()))

print(user_list)

a = [6, 4, 8, 3, 1]

# Converting the list to a space-separated string
space_separated = ' '.join(map(str, a))

print(space_separated)

def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        if not root:
            return 0
        r=0
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.val)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r=r+1
        return r
```

## Submission at 2024-10-28 10:00:17


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
    def findMin(self,root):
        def trav(node):
            if node.left:
                trav(node.left)
            else:
                return node.data
        return trav(root)


```

## Submission at 2024-10-28 10:05:59


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
def treePathSum(root) -> int:
    class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        f={}
        r=[]

        for i in nums:
            if target - i in nums:
                r.append(nums.index(i))
                r.append(nums.index(target-i))
                break
            # else:
            #     continue
        return r
        
    # Simulating user input
user_input = "6 5 2 5 7 2"

# Storing the input into a list of integers
user_list = list(map(int, user_input.split()))

print(user_list)

a = [6, 4, 8, 3, 1]

# Converting the list to a space-separated string
space_separated = ' '.join(map(str, a))

print(space_separated)

def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        if not root:
            return 0
        r=0
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.val)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r=r+1
        return r
```

## Submission at 2024-10-28 10:11:50


```
a=list(map(int,input().split()))
b=list(map(int,input().split()))
f={}
for i in range(a[0]):
    if b[i] not in f:
        f[b[i]]=1
    else:
        f[b[i]]=f[b[i]]+1

for i in f:
    if f[i]>=2:
        print(i)
```

## Submission at 2024-10-28 10:14:02


```
a=list(map(int,input().split()))
b=list(map(int,input().split()))
f={}
for i in range(a[0]):
    if b[i] not in f:
        f[b[i]]=1
    else:
        f[b[i]]=f[b[i]]+1
r=[]
for i in f:
    if f[i]>=a[1]:
        r.append(i)
if len(r)>1:
    print(r[0])
elif len(r)==1:
    print(r[0])
elif len(r)==0:
    print(-1)
```

## Submission at 2024-10-28 10:23:54


```
print("cbajkl")
```

## Submission at 2024-10-28 10:29:19


```
a=list(map(str,input().split()))

```

## Submission at 2024-10-28 10:37:50


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
def treePathSum(root) -> int:
        if not root:
            return []
        r=[]
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.data)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r.append(c)
            print(sum(r))
        
    
      
```

## Submission at 2024-10-28 10:37:52


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
def treePathSum(root) -> int:
        if not root:
            return []
        r=[]
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.data)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r.append(c)
            print(sum(r))
        
    
      
```

## Submission at 2024-10-28 10:38:27


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
def treePathSum(root) -> int:
        if not root:
            return []
        r=[]
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.data)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r.append(c)
        print(sum(r))
        
    
      
```

## Submission at 2024-10-28 10:46:30


```
a=list(map(str,input().split()))
for i in range(len(a[0])):
    b=a[0]+a[1][len(a[0]):]
print(b)


```

## Submission at 2024-10-28 10:47:51


```
a=list(map(str,input().split()))
for i in range(len(a[0])):
    b=a[1][:len(a[0])]+a[0]
print(b)


```

## Submission at 2024-10-28 10:53:47


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
def treePathSum(root) -> int:
    if not root:
            return []
        r=[]
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.data)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r.append(c)
        print(sum(r[0]))
```

## Submission at 2024-10-28 10:54:07


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
def treePathSum(root) -> int:
    if not root:
            return []
        r=[]
        q=[root]
        while q:
            l=len(q)
            c=[]
            for i in range(l):
                node=q.pop(0)
                c.append(node.data)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            r.append(c)
      print(sum(r[0]))
```

## Submission at 2024-10-28 10:55:56


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
def treePathSum(root) -> int:
    if not root:
      return []
      r=[]
      q=[root]
      while q:
        l=len(q)
        c=[]
        for i in range(l):
          node=q.pop(0)
          c.append(node.data)

          if node.left:
            q.append(node.left)
          if node.right:
            q.append(node.right)
      r.append(c)
      print(sum(r[0]))
```

## Submission at 2024-10-28 10:56:43


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
def treePathSum(root) -> int:
    if not root:
      return []
      r=[]
      q=[root]
      while q:
        l=len(q)
        c=[]
        for i in range(l):
          node=q.pop(0)
          c.append(node.data)

          if node.left:
            q.append(node.left)
          if node.right:
            q.append(node.right)
      r.append(c)
      print(10*r[0])
```

## Submission at 2024-10-28 10:59:09


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):

  l1=[]
  n1=head1
  while n1:
    l1.append(n1)
    n1=n1.next
  print(l1)
    

```

## Submission at 2024-10-28 11:02:56


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):

  # l1=[]
  # n1=head1
  # while n1:
  #   l1.append(n1.val)
  #   n1=n1.next
  # print(l1)
  # l2=[]
  # n2=head2
  # while n2:
  #   l2.append(n2.val)
  #   n2=n2.next
  # print(l2)
  # r=[]
  # if len(l1)>len(l2):
  #   n=len(l2)
  # else:
  #   n=len(l1)
  return head1
    

```

## Submission at 2024-10-28 11:04:00


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    return head2
    

```

## Submission at 2024-10-28 11:05:47


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
def treePathSum(root) -> int:
    if not root:
      return []
      r=[]
      q=[root]
      while q:
        l=len(q)
        c=[]
        for i in range(l):
          node=q.pop(0)
          c.append(node.data)

          if node.left:
            q.append(node.left)
          if node.right:
            q.append(node.right)
      r.append(c)
      s=10*r[0][0]
      print(s)
```

## Submission at 2024-10-28 11:06:22


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
def treePathSum(root) -> int:
    if not root:
      return []
      r=[]
      q=[root]
      while q:
        l=len(q)
        c=[]
        for i in range(l):
          node=q.pop(0)
          c.append(node.data)

          if node.left:
            q.append(node.left)
          if node.right:
            q.append(node.right)
      r.append(c)
      s=10*r[0][0]+sum(r[1])
      print(s)
```

## Submission at 2024-10-28 11:06:23


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
def treePathSum(root) -> int:
    if not root:
      return []
      r=[]
      q=[root]
      while q:
        l=len(q)
        c=[]
        for i in range(l):
          node=q.pop(0)
          c.append(node.data)

          if node.left:
            q.append(node.left)
          if node.right:
            q.append(node.right)
      r.append(c)
      s=10*r[0][0]+sum(r[1])
      print(s)
```

## Submission at 2024-10-28 11:11:49


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
def treePathSum(root) -> int:
    if not root:
      return 0
    r=[]
    q=[root]
    while q:
      l=len(q)
      c=[]
      for i in range(l):
        node=q.pop(0)
        c.append(node.data)

        if node.left:
          q.append(node.left)
        if node.right:
          q.append(node.right)
      r.append(c)
    print(10*(r[0][0]))
```

## Submission at 2024-10-28 11:22:36


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
  l1=[]
  n1=head1
  while n1:
    l1.append(n1.val)
    n1=n1.next
  #print(l1)
  l2=[]
  n2=head2
  while n2:
    l2.append(n2.val)
    n2=n2.next
  #print(l2)
  r=[]
  if len(l1)>len(l2):
    n=l2
    m=l1
  else:
    n=l1
    m=l2
  
  for i in n:
    if i in m:
      r.append(i)
  #print(r)
  p=' '.join(map(str,r))
  print(p)

 
    

```

## Submission at 2024-10-28 11:27:55


```
x=list(map(str,input().split()))
a=x[0]
b=x[1]
r=[]
for i in a:
    r.append(b.index(i))

```

## Submission at 2024-10-28 11:27:59


```
x=list(map(str,input().split()))
a=x[0]
b=x[1]
r=[]
for i in a:
    r.append(b.index(i))

```

## Submission at 2024-10-28 11:29:48


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
def treePathSum(root) -> int:
    print(10*root)
```

## Submission at 2024-11-17 05:38:44


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
def treePathSum(root) -> int:
    def dfs(node, current_sum):
        if not node:
            return 0

        # Update the path sum
        current_sum = 10 * current_sum + node.data

        # If it's a leaf node, return the current path sum
        if not node.left and not node.right:
            return current_sum

        # Recur for left and right subtrees
        return dfs(node.left, current_sum) + dfs(node.right, current_sum)

    # Initialize DFS traversal from the root
    return dfs(root, 0)
```

## Submission at 2024-11-25 08:50:31


```
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        n=head
        x=[]
        while n:
            x.append(n.val)
            n=n.next
        a=[]
        b=[]
        for i in range(len(x)):
            if i%2==0:
                a.append(x[i])
            else:
                b.append(x[i])
        c=a+b
        new_head = None
        current = None
        
        for val in c:
            new_node = ListNode(val)
            if new_head is None:
                new_head = new_node 
                current = new_head  
            else:
                current.next = new_node  
                current = current.next          
        return new_head

```

## Submission at 2024-11-25 09:49:42


```
n=input()
a=0
b=0
for i in n:
    if i=="a":
        a=a+1
    else:
        b=b+1
if a>b:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 09:53:08


```
n=int(input())
for i in range(1,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:02:20


```
n=int(input())
a=list(map(int,input().split()))
b=[]
for i in range(n-1):
    b.append(a[i+1]-a[i])
c=b[0]
f=1
for i in b:
    if i!=c:
        f=0
    else:
        f=1
if f==1:
    print("True")
else:
    print("false")
```

## Submission at 2024-11-25 10:06:39


```
n=int(input())
a=list(map(int,input().split()))
b=[]
for i in range(n-1):
    b.append(a[i+1]-a[i])
c=b[0]
f=1
for i in b:
    if i!=c:
        f=0
    else:
        f=1
if f==1:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-25 10:12:48


```
print("YES")
```

## Submission at 2024-11-25 10:19:10


```
n=list(map(int,input().split()))
l=list(map(int,input().split()))
l.sort()
a=[]
for i in range(len(l)):
    if l[i]==n[1]:
        a.append(i)
print(''.join(a))
```

## Submission at 2024-11-25 10:21:28


```
n=list(map(int,input().split()))
l=list(map(int,input().split()))
l.sort()
a=[]
for i in range(len(l)):
    if l[i]==n[1]:
        a.append(i)
print(' '.join(map(str, a)))

```

## Submission at 2024-11-25 10:25:34


```
n=int(input())
a=list(map(int,input().split()))
if a==sorted(a):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:34:55


```
n=list(map(int,input().split()))
a=[]
for i in range(n[0]):
    a.append(list(map(int,input().split())))
c=0
for j in range(n[0]):
    c=c+a[j][1]
print
```

## Submission at 2024-11-25 10:35:05


```
n=list(map(int,input().split()))
a=[]
for i in range(n[0]):
    a.append(list(map(int,input().split())))
c=0
for j in range(n[0]):
    c=c+a[j][1]
print(c)
```

## Submission at 2024-11-25 10:38:03


```
n=list(map(int,input().split()))
a=[]
for i in range(n[0]):
    a.append(list(map(int,input().split())))
c=0
for j in range(n[0]):
    c=c+a[j][1]
print(c)
```

## Submission at 2024-11-25 10:46:41


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.val)
        trav(node.right)
    trav(root)
    print(t)


```

## Submission at 2024-11-25 10:53:32


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.data)
        trav(node.right)
    trav(root)
    g=0
    for i in t:
      if i<=n:
        g=i
    print(g) 


```

## Submission at 2024-11-25 10:54:45


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.data)
        trav(node.right)
    trav(root)
    g=0
    for i in t:
      if i<=n:
        g=i
    print(g) 


```

## Submission at 2024-11-25 11:03:33


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l1.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in a:
            if i in b:
              x.append(i)
            else:
              continue
        else:
          for i in b:
            if i in a:
              x.append(i)
            else:
              continue
        print(x[0])






```

## Submission at 2024-11-25 11:04:46


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l1.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in a:
            if i in l2:
              x.append(i)
            else:
              continue
        else:
          for i in b:
            if i in l1:
              x.append(i)
            else:
              continue
        print(x[0])






```

## Submission at 2024-11-25 11:06:26


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l1.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in range(a):
            if i in l2:
              x.append(i)
            else:
              continue
        else:
          for i in range(b):
            if i in l1:
              x.append(i)
            else:
              continue
        print(x[0])






```

## Submission at 2024-11-25 11:09:32


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l1.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in l1:
            if i in l2:
              x.append(i)
            else:
              continue
        else:
          for i in l2:
            if i in l1:
              x.append(i)
            else:
              continue
        print(x[0])






```

## Submission at 2024-11-25 11:12:35


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l2.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in l1:
            if i in l2:
              x.append(i)
            else:
              continue
        else:
          for i in l2:
            if i in l1:
              x.append(i)
            else:
              continue
        print(x[0])






```

## Submission at 2024-11-25 11:13:59


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l2.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in l1:
            if i in l2:
              x.append(i)
            else:
              continue
        else:
          for i in l2:
            if i in l1:
              x.append(i)
            else:
              continue
        return x[0]






```

## Submission at 2024-11-25 11:15:49


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        l1=[]
        n=head1
        while n:
          l1.append(n.data)
          n=n.next

        l2=[]
        m=head2
        while m:
          l2.append(m.data)
          m=m.next

        a=len(l1)
        b=len(l2)
        x=[]
        if a<b:
          for i in l1:
            if i in l2:
              x.append(i)
            else:
              continue
        else:
          for i in l2:
            if i in l1:
              x.append(i)
            else:
              continue
        return Node(x[0])






```

## Submission at 2024-11-25 11:20:01


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.data)
        trav(node.right)
    trav(root)
    g=0
    for i in t:
      if i<=n:
        g=i
    return Node(g) 
```

## Submission at 2024-11-25 11:20:49


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.data)
        trav(node.right)
    trav(root)
    g=0
    for i in t:
      if i<=n:
        g=i
    return g
```

## Submission at 2024-11-25 11:21:46


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.data)
        trav(node.right)
    trav(root)
    g=0
    for i in t:
      if i<=n:
        g=i
    return g
```

## Submission at 2024-11-25 11:23:20


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
def findMaxForN(root, n) -> int:
    t=[]
    def trav(node):
      if node:
        trav(node.left)
        t.append(node.data)
        trav(node.right)
    trav(root)
    g=0
    for i in t:
      if i<=n:
        g=i
    return g

    
```

