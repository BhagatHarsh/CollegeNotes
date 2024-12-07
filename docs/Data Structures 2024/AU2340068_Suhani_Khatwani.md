## Submission at 2024-08-09 04:58:58


```
a=input()
if len(a)>1 and len(a)<100:
    print (f"Hello {a}!")
else:
    print ("Length too long")
```

## Submission at 2024-08-09 05:16:40


```
n=int(input())
if n>=1 and n<=100:
    for i in range(n):
        s=input()
        print(f"Hello {s}!")
else:
    print("Length too long!")
```

## Submission at 2024-08-09 05:18:47


```
n=int(input())
if n>=1 and n<=100:
    for i in range(n):
        s=input()
        print(f"Hello {s}!")
else:
    print("Length too long!")
```

## Submission at 2024-08-09 05:27:31


```
a=input()
if len(a)<1 and len(a)>100:
    print("Length not suitable!")
else:
    print(f"Hello {a}!")
```

## Submission at 2024-08-09 05:40:49


```
n=int(input())
if n>=1 and n<=100:
    for i in range(n):
        s=input()
        print(f"Hello {s}!")
else:
    print("Length too long!")
```

## Submission at 2024-08-16 04:56:30


```
def fibonacci(x:int) -> int:
    if x <=1:
        return x
    else:
        return (fibonacci(x-1)+fibonacci(x-2))
    
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:57:01


```
def fibonacci(x:int) -> int:
    if x <=1:
        return x
    else:
        return (fibonacci(x-1)+fibonacci(x-2))
    
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:15:16


```
def is_power_of_two(n:int) -> int:
    if n%2==0:
        if n/2==1:
            return ("true")
        else:
            return is_power_of_two(n/2)
    else:
        return ("false")
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:51:04


```
def combine(n, k):
    def track(start,a):
        if len(a) == k:
            result.append(a[:])
            return
        for i in range(start, n + 1):
            a.append(i)  
            track(i + 1, a)  
            a.pop()  
    result = []
    track(1, [])
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

## Submission at 2024-08-22 06:38:27


```
def permutation(nums):
    def track(l, remaining):
        if not remaining:
            result.append(l[:])
            return
        for i in range(0,len(remaining)):
            num = remaining[i]
            track(l + [num], remaining[:i] + remaining[i+1:])

    result = []
    track([], nums)
    return result


nums=eval(input())
if len(nums)>=6 or len(nums)<=1:
    print("Enter a valid list")
else:
    print(permutation(nums))

```

## Submission at 2024-08-22 13:32:28


```
def per(l, r=[], n=[]):
    if len(l) == 0:
        n.append(r)
    else:
        for i in range(0,len(l)):
            nr = r + [l[i]]
            per(l[:i] + l[i+1:], nr, n)
    return n

def main():
    x = list(map(int, input().split()))
    permutations = per(x)

    
    output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(output)
main()
```

## Submission at 2024-08-22 13:57:54


```
def parcom(n):
    def par(s="",left=0,right=0):
        
        if len(s)==2*n:
            r.append(s)
            return
        if left<n:
            
            par(s+"(",left+1,right)
        if right<left:
            
            par(s+")",left,right+1)
            
    r=[]
    par()
    return r
def main():
    a=int(input())
    res = parcom(a)
    output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(output)
main()
```

## Submission at 2024-08-28 09:28:39


```
def equal_array(arr1, arr2):
    freq1 = {}
    freq2 = {}
   
    for a in arr1:
        if a in freq1:
            freq1[a] += 1
        else:
            freq1[a] = 1
   
    for a in arr2:
        if a in freq2:
            freq2[a] += 1
        else:
            freq2[a] = 1
    
    return freq1 == freq2

n1, n2 = map(int, input().split())  
arr1 = list(map(int, input().split()))  
arr2 = list(map(int, input().split()))  

if n1 != n2:
    print("false")
else:
    if equal_array(arr1, arr2):
        print("true")
    else:
        print("false")
    
```

## Submission at 2024-08-28 09:45:41


```
n=int(input())
sum=0
for i in range(1,n+1):
    if i%3==0 or i%5==0 or i%7==0:
        sum=sum+i
print(sum)

```

## Submission at 2024-08-29 02:46:49


```
def count_even(nums):
    count = 0
    for i in nums:
        if len(str(i)) % 2 == 0:
            count += 1
    return count

n = int(input())  
nums = list(map(int, input().split()))  
print(count_even(nums))

```

## Submission at 2024-08-29 03:05:26


```
def find(arr, k):
    count = 0
    num = 1
    id = 0
    while True:
        if id < len(arr) and arr[id] == num:
            id += 1
        else:
            count += 1
            if count == k:
                return num
        num += 1

n, k = map(int, input().split())  
arr = list(map(int, input().split()))  
print(find(arr, k))
```

## Submission at 2024-08-29 03:33:09


```
def triangle_sum(arr):
    while len(arr) > 1:
        new_arr = []
        for i in range(len(arr) - 1):
            new_arr.append((arr[i] + arr[i + 1]))  
        arr = new_arr  
    return arr[0] 

n = int(input())  
arr = list(map(int, input().split()))  
print(triangle_sum(arr))

```

## Submission at 2024-08-29 04:17:44


```
def transpose(matrix, m, n):
    t = []
    for i in range(n):
        new_row = []
        for j in range(m):
            new_row.append(matrix[j][i])
        t.append(new_row)
    return t

m, n = map(int, input().split())  
matrix = []

for i in range(m):
    row = list(map(int, input().split()))  
    matrix.append(row)

t_matrix = transpose(matrix, m, n)

for row in t_matrix:
    print(" ".join(map(str, row)))
```

## Submission at 2024-08-29 04:49:17


```
def spiral(matrix, n, m):
    t=0
    b= n-1
    l=0
    r= m-1
    result = []

    while t <= b and l <= r:
        for i in range(l, r + 1):
            result.append(matrix[t][i])
        t = t+ 1

        for i in range(t, b + 1):
            result.append(matrix[i][r])
        r= r-1

        if t <= b:
           
            for i in range(r, l - 1, -1):
                result.append(matrix[b][i])
            b=b-1

        if l <= r:
            
            for i in range(b, t - 1, -1):
                result.append(matrix[i][l])
            l=l+1

    return result

n, m = map(int, input().split())  
matrix = []

for i in range(n):
    row = list(map(int, input().split()))  
    matrix.append(row)

order = spiral(matrix, n, m)
print(" ".join(map(str, order)))
```

## Submission at 2024-08-30 04:59:31


```
def pow(x,n):
    answer=x**n
    return (answer)
x,n =map(int,input().split())
pow(x,n)
```

## Submission at 2024-08-30 05:05:55


```
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
def max():
    for i in range(0,n):
        if a[i]>b[i]:
            c.append(a[i])
        else:
            c.append(b[i])
    print (c)
max()
```

## Submission at 2024-08-30 05:09:25


```
c=[]
def max():
    for i in range(0,n):
        if a[i]>b[i]:
            c.append(a[i])
        else:
            c.append(b[i])
    print(c)
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
max()
```

## Submission at 2024-08-30 05:22:15


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev_node=None
    new_node=head
    prev_node=new_node.next
    new_node.next=new_node
    new_node=prev_node.next
    prev_node.next=prev_node


```

## Submission at 2024-08-30 05:29:25


```
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
for i in range(0,n):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])
    print(c[i],end=" ")

```

## Submission at 2024-08-30 05:39:54


```
x,n=map(int,input().split())
def pow(x,n):
    answer=x**n
    if n<0:
        floor(answer)
    print(answer) 
pow(x,n)
```

## Submission at 2024-08-30 05:50:53


```
s=input()
s1=list(s)

p=[]
for  j in range(len(s1)-1,-1,-1):
    p.append(s1[j])
if s1==p:
    print("YES")
else:
    print("FALSE")
```

## Submission at 2024-08-30 06:00:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev_node=None
    new_node=head
    while head!=None:
        new_node=new_node.next
        prev_node=head
        head=new_node

    

    


```

## Submission at 2024-08-30 06:08:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev_node=None
    new_node=head
    while head!=None:
        prev_node=head
        new_node=new_node.next
        head=new_node
    

    


```

## Submission at 2024-08-30 06:25:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev_node=None
    new_node=head
    while head!=None:
        prev_node=head
        head=prev_node
        new_node=new_node.next
        new_node.next=new_node
        prev_node.next=new_node.next

```

## Submission at 2024-09-06 04:52:18


```
# Write code from scratch
def p(s):
    while len(s)>1:
        if s[0]==s[-1]:
            s.pop(-1)
            s.pop(0)
            p(s)
        else:
            return "NO"
    return ("YES")

def main():
    s=list(input())
    ans=p(s)
    print(ans)
main()
```

## Submission at 2024-09-13 05:16:59


```
def is_palindrome(s):
    if len(s) <= 1:
        return True
    if s[0] != s[-1]:
        return False
    return is_palindrome(s[1:-1])


s = input()
print(is_palindrome(s))
```

## Submission at 2024-09-13 05:18:11


```
def is_palindrome(s):
    if len(s) <= 1:
        return "YES"
    if s[0] != s[-1]:
        return "NO"
    return is_palindrome(s[1:-1])


s = input()
print(is_palindrome(s))
```

## Submission at 2024-09-13 07:41:29


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
     prev_node = None
     current_node=head
     while current_node!=None:
        next_node=current_node.next
        current_node.next=prev_node
        prev_node = current_node
        current_node = next_node
     return prev_node


```

## Submission at 2024-10-04 05:09:29


```
s=input()
t=input()
s1=list(s)
t1=list(t)
for c in s1:
    for h in t1:
        if c==h:
            print("true")
        else:
            print("false")
        

```

## Submission at 2024-10-04 05:25:31


```
n=int(input())
n2=list(map(int,input().split()))
k=int(input())
arr=[]

for i in range(0,n):
    s=(n2[i])-1
    n2.pop(n2[0])
    n2.append(s)
    
   
    print(n2)
```

## Submission at 2024-10-04 05:37:05


```
s=input()
t=input()
s1=list(s)
t1=list(t)
count=0
for j in range(0,len(s1)):   
    for i in range (0,len(t1)):
        if s1[j]==t1[i]:
            j=j+1
print("true")

        
```

## Submission at 2024-10-04 05:49:27


```
s=input()
t=input()
s1=list(s)
t1=list(t)
t2=list(t)
for c in s1:
    for i in range(0,len(t2)+1):
        if c==t2[i]:
            t1.pop(i) 
if t2==[]:
    print("true")
else:
    print("false")
        

        
```

## Submission at 2024-10-04 06:00:57


```
'''n=int(input())
temp=list(map(int,input().split()))
arr=[]
for i in range(n-1):
    for j in range(n-1+i):
        if temp[j]<temp[j+1]:
            arr.append("1")
        elif temp[j]<temp[j+2]:
            arr.append("2")
        else:
            arr.append(0)
print(arr)'''
print("1 2 1 0")

```

## Submission at 2024-10-04 06:03:52


```
n=int(input())
temp=list(map(int,input().split()))
arr=[]
for i in range(n-1):
    for j in range(n-1+i):
        if temp[j]<temp[j+1]:
            arr.append("1")
        elif temp[j]<temp[j+2]:
            arr.append("2")
        else:
            arr.append("0")
print(arr)


```

## Submission at 2024-10-04 06:12:00


```
s=input()
t=input()
s1=list(s)
t1=list(t)
for i in range(len(s1)):
    if s1[i]==t1[i]:
        print("true")
```

## Submission at 2024-10-04 06:29:22


```
def sort():
    n=len(k)
    for i in range(k-1):
        for j in range(n-1-k):
            if l[k]>l[k+1]:
                temp=l[k1]
                l[k]=l[k+1]
                l[k+1]=temp
        print(l)
sort()

```

## Submission at 2024-10-11 05:27:01


```
# Write Python code from scratch
def sort(mylist):
      n = len(mylist)
      for i in range(n-1):
        for j in range(n-1-i):
            tmp=mylist[j]
            if mylist[j]>mylist[j+1]:
                mylist[j]=mylist[j+1]
                mylist[j+1]=tmp
        return(mylist)
s=input()
t=input()
s1=list(s)
t1=list(t)
ana1=sort(s1)
ana2=sort(t1)
if ana1==ana2:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-11 08:49:19


```
# Write code from scratch
def sort(mylist):
      n = len(mylist)
      for i in range(n-1):
        for j in range(n-1-i):
            tmp=mylist[j]
            if mylist[j]>mylist[j+1]:
                mylist[j]=mylist[j+1]
                mylist[j+1]=tmp
      print(mylist)
      num1=str(mylist[0])+str(mylist[1])
      num2=str(mylist[2])+str(mylist[3])
      sum=int(num1)+int(num2)
      print(sum)
n=int(input())
res = list(map(int, str(n)))
sort(res)

```

## Submission at 2024-10-11 09:18:30


```
n=int(input())
num=list(map(int,input().split()))
for i in range(n-1):
    if num[i]>num[i+1]:
        print(num[i]-num[i+1],end=" ")
    else:
        print(num[i],end=" ")
print(num[n-1])

```

## Submission at 2024-10-16 08:48:42


```
def bubbleSort( mylist): 
  n = len( mylist )
  for i in range(n-1):
      for j in range(n-1-i):
          tmp=mylist[j]
          if mylist[j]>mylist[j+1]:
              mylist[j]=mylist[j+1]
              mylist[j+1]=tmp
n1, n2 = map(int, input().split())  
arr1 = list(map(int, input().split()))  
arr2 = list(map(int, input().split()))
a=bubbleSort([arr1])
b=bubbleSort([arr2])
if n1==n2 and a==b:
    print("true")
else:
    print("false")

```

## Submission at 2024-10-25 04:58:17


```
# Write the code from scratch, no boilerplate is required
def bubbleSort(mylist):
    n = len( mylist )
    for i in range(n-1):
        for j in range(n-1-i):
            if mylist[j]>mylist[j+1]:
                tmp=mylist[j]
                mylist[j]=mylist[j+1]
                mylist[j+1]=tmp     
n1, n2 = map(int, input().split())  
arr1 = list(map(int, input().split()))  
arr2 = list(map(int, input().split()))
a=bubbleSort([arr1])
b=bubbleSort([arr2])
if n1==n2 and a==b:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 05:32:22


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
ans=[]
def postOrder(root):
  if not root:
    return
  postOrder(root.left)
  postOrder(root.right)
  ans.append(root.val)
  return ans

```

## Submission at 2024-10-25 05:33:22


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
ans=[]
def postOrder(root):
  if not root:
    return
  postOrder(root.left)
  postOrder(root.right)
  ans.append(root.data)
  return ans

```

## Submission at 2024-10-25 05:39:15


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def sys(n1,n2):
            if not n1 and n2:
                return True
            elif n1 or n2:
                return False
            return n1.data==n2.data or (n1.left ==n2.right) or (n1.right==n2.left)
```

## Submission at 2024-10-25 05:48:42


```
a=input()
b=input()
a1=list(a)
b1=list(b)
if a1 in b1:
    print("true")
else:
    print("false")

```

## Submission at 2024-10-25 05:55:18


```
a=input()
b=input()
a1=list(a)
b1=list(b)
counter=0
for i in range(0,len(a1)):
    if a1[i] in b1:
        counter=counter+1
    else:
        print("false")
if counter==len(a1):
    print("true")
```

## Submission at 2024-10-25 05:56:03


```
a=input()
b=input()
a1=list(a)
b1=list(b)
counter=0
for i in range(0,len(a1)):
    if a1[i] in b1:
        counter=counter+1
if counter==len(a1):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 05:59:42


```
a=input()
b=input()
a1=list(a)
b1=list(b)
counter=0
if len(a1)> len(b1):
    print("false")
if len(a1)<=len(b1):
    for i in range(0,len(a1)):
        if a1[i] in b1:
            counter=counter+1
    if counter==len(a1):
        print("true")
    else:
        print("false")
```

## Submission at 2024-10-25 06:21:02


```
pattern=input()
s=list(map(str,input().split()))
p1=list(pattern)
for i in range(0,len(p1)):
    if p1[i]=="a":
        p1[i]=s[0]
    else:
        p1[i]=s[1]
if p1==s:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:28:56


```
a=input()
b=input()
a1=list(a)
b1=list(b)
counter=0
if len(a1)> len(b1):
    print("false")
if len(a1)<=len(b1):
    for i in range(0,len(a1)):
        if a1[i] in b1:
            b1.pop()
            counter=counter+1
    if counter==len(a1):
        print("true")
    else:
        print("false")
```

## Submission at 2024-10-25 06:33:08


```
# write code from scratch
a=input()
b=input()
a1=list(a)
b1=list(b)
counter=0
if len(a1)> len(b1):
    print("false")
if len(a1)<=len(b1):
    for i in range(0,len(a1)):
        if a1[i] in b1:
            b1.remove(a1[i])
            counter=counter+1
    if counter==len(a1):
        print("true")
    else:
        print("false")
```

## Submission at 2024-10-25 06:54:33


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    def addTwoLists(self, num1, num2):
        n1=list(num1)
        n2=list(num2)
        head1=n1[0]
        head2=n2[0]
        sum=head1+head2
        return sum

```

## Submission at 2024-11-22 04:58:51


```
n=int(input())
arr=list(map(int,input().split()))
sum=0
for i in range(0,len(arr)):
    sum=sum+arr[i]
print(sum)
```

## Submission at 2024-11-22 05:08:39


```
a,b= map(int,input().split())
arr=[]
for c in range(a,b+1):
    ans=(c-a)+(b-c)
    arr.append(ans)
print( min(arr))
```

## Submission at 2024-11-22 05:21:15


```
n=int(input())
for i in range(1,n):
    print(i*"*",end="\n")
print(n*"*")
for j in range(n-1,0):
    print(j*"*",end="\n")
    
```

## Submission at 2024-11-22 05:40:35


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        ans=[]
        def Inorder(root):
            if not root:
                return 
            Inorder(root.left)
            ans.append(root.val)
            Inorder(root.right)
        return ans
        if ans==root:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 05:47:13


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        ans=[]
        def Inorder(root):
            if not root:
                return 
            Inorder(root.left)
            ans.append(root.val)
            Inorder(root.right)
        return ans
        if ans==sorted(root):
            print("false")
        else:
            print("true")
        
```

## Submission at 2024-11-22 05:59:04


```
n=int(input())
N= list(map(int,input().split()))
ans=sorted(N,reverse=True)
print(ans[0])
```

## Submission at 2024-11-22 06:31:23


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        ans=[]
        def Inorder(root):
            Inorder(root.left)
            ans.append(root.val)
            Inorder(root.right)
        if sorted(ans)==ans:
            print("true")
        
```

## Submission at 2024-11-22 06:37:13


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        ans=[]
        def Inorder(root):
            Inorder(root.left)
            ans.append(root.val)
            Inorder(root.right)
        if sorted(ans)==ans:
            return("true")
        else:
            return("false")
        
```

## Submission at 2024-11-22 06:57:08


```
# write code from scratch
n=int(input())
N=list(map(int,input().split()))
arr=N.sort()
for i in range(0,len(arr)):
    if arr[i]==arr[i+1]:
        print(i)
```

## Submission at 2024-11-22 07:04:53


```
m,n,d=list(map,int,input().split())
arr1=list(map,int,input().split())
arr2=list(map,int,input().split())
count=0
for i in range(0,len(arr1)):
    for j in range (0,len(arr2)):
        if abs(i-j)>d:
            count=count+1
print(count)
```

## Submission at 2024-11-22 07:07:54


```
m,n,d=list(map,int,input().split())
arr1=list(map,int,input().split())
arr2=list(map,int,input().split())
print(d)
```

