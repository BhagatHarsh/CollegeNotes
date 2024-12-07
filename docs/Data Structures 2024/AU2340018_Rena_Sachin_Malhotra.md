## Submission at 2024-08-09 04:47:17


```
# Write your Python code here from the scratch
name = input("Enter your full name: ")
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:50:59


```
# Write your Python code here from the scratch
name = input()
print("Hello "+name+"!")
```

## Submission at 2024-08-09 05:05:29


```
# Write your Python code here from the scratch
c = input()
print("Hello "+c+"!")
```

## Submission at 2024-08-09 05:18:41


```
# Write your Python code here
n = int(input())
for i in range (0,n):
    name = input()
    print("Hello "+name+"!")
```

## Submission at 2024-08-16 04:48:49


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0:
        return 0
    if x==1:
        return 1

    return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:37:01


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==1:
        return "true"
    if n<=0 or n%2 != 0:
        return "false"
    
    return is_power_of_two(n/2)

    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 11:16:06


```
def combine(n, k):
    # Write logic here
     # Helper function to perform backtracking
    def backtrack(start, path):
        
        if len(path) == k:
            result.append(path[:])
            return
        
        for j in range(start, n + 1):
            path.append(j)
            backtrack(j + 1, path)
            path.pop()
    
    result = []
    backtrack(1, [])
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

## Submission at 2024-08-22 11:37:27


```
def generate_permutations(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permute = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return

            if not(len(nums)== len(set(nums))): 
               return
            # Fixed element
            c_element = nums[i]
            other_nums = nums[:i] + nums[i+1:]
            # Generating permutations for the elements that are left
            left_permutations = generate_permutations(other_nums)
            # Combining the fixed element with each permutation
            for perm in left_permutations:
                permute.append([c_element] + perm)
        return permute

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Enter valid input"
   
    result = generate_permutations(nums)

    # Sort permutations based on first element
    result.sort(key=lambda x: x[0])

        # Print permutations
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

## Submission at 2024-08-22 11:39:43


```
def genpar(n):
    def paran(s="", left=0, right=0):
        if len(s) == 2 * n:
            r.append(s)
            return
        if left < n:
            paran(s + "(", left + 1, right)
        if right < left:
            paran(s + ")", left, right + 1)
    
    r = []
    paran()
    return r

def main():
    x = int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:17:34


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int, n:int):
    assert x > -100 and x < 100
    assert n >= -1000 and n <= 1000
    r = 1
    while n != 0:
        r = 1 * x
        return Pow(x,n-1)
    
    x = map(int,input())
    n = map(int,input())
    Pow(x,n)
    print(r)

```

## Submission at 2024-08-30 05:19:05


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int, n:int):
    assert x > -100 and x < 100
    assert n >= -1000 and n <= 1000
    r = 1
    while n != 0:
        r = 1 * x
        return Pow(x,n-1)
    
    x = map(int,input())
    n = map(int,input())
    r = Pow(x,n)
    print(r)

```

## Submission at 2024-08-30 05:37:10


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int, n:int):
    assert x > -100 and x < 100
    assert n >= -1000 and n <= 1000
    r = 1
    while n != 0:
        r = 1 * x
        return Pow(x,n-1)
    

    x = map(int,input())
    n = map(int,input())
    Pow(x,n)
    print(r)

```

## Submission at 2024-08-30 05:40:21


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int, n:int):
    assert x > -100 and x < 100
    assert n >= -1000 and n <= 1000
    r = 1
    while n != 0:
        r = 1 * x
        return Pow(x,n-1)
    return r
    

    x = map(int,input())
    n = map(int,input())
    print(Pow(x,n))

```

## Submission at 2024-08-30 05:55:20


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int, n:int):
    assert x > -100 and x < 100
    assert n >= -1000 and n <= 1000
    while n != 0:
        r = 1 * x
        return Pow(x,n-1)
        print(r)
    

x, n = list(map(int,input().split()))
print(Pow(x,n))

```

## Submission at 2024-08-30 06:00:40


```
# Write code from scratch
n = int(input())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))

for i in range (len(arr1)):
    c[i] = max(arr1[i] + arr2[i])
    print(c[i])
    
```

## Submission at 2024-08-30 06:03:43


```
# Write code from scratch
n = int(input())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
c = []
for i in range (1, n):
    c[i] = max(arr1[i], arr2[i])
    print(c[i])
    
```

## Submission at 2024-08-30 06:04:31


```
# Write code from scratch
n = int(input())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
c = []
for i in range (0, n):
    c[i] = max(arr1[i], arr2[i])
    print(c[i])
    
```

## Submission at 2024-08-30 06:08:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    temp = head
    curr = temp.next

    while(temp != None):
        curr1 = curr.next
        curr.next = temp
        temp.next = curr.next

    print(head)


```

## Submission at 2024-08-30 06:21:07


```
# Write code from scratch
s = str(input())
def palin(s):
    for i in range(len(s)):
        if str(i) == str(len(s) - i):
            print("YES")
        print("NO")
    
```

## Submission at 2024-08-30 06:21:36


```
# Write code from scratch
s = str(input())
def palin(s):
    for i in range(len(s)):
        if str(i) == str(len(s) - i):
            print("YES")
        print("NO")
    
```

## Submission at 2024-10-04 05:05:14


```
# Write Python code from scratch
def valana(s,t):
    count = 0
    if len(s) != len(t):
        return "false"
    for i in range(len(s)):
        for j in range(len(t)):
            if s[i] in t[j]:
                return "true"
    return "false"

def main():
    s1 = str(input().split())
    t1 = str(input().split())
    print(valana(s1,t1))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-04 05:17:59


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    for i in arr:
        while(arr[i]>0):
            for j in arr:
                arr[i] = arr[i] - 1
                arr[i] - 1 == temp
                temp = arr[len(arr)-1]
                k = k+1
                i = i+1
        return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))




        
```

## Submission at 2024-10-04 05:57:16


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[i]>-1):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 05:59:55


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[i]>-2):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:01:04


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[i]>-2):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:02:18


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[i]>-1):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:02:58


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[i]>-1):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:05:34


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[0]>-1):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:07:28


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[0]>0):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:09:29


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[i]>-1):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:11:32


```
# Write code from scratch here
def time(n, arr, k):
    k = 0
    n = len(arr)
    
    for i in range(n-1):

        while(arr[0]>-1):
            arr[i] = arr[i] - 1
            i = i +1
            k = k+1
            if i == 2:
                i = i-1
        
    return k


n = int(input())
arr = list(map(int,input().split()))
k = int(input())
print(time(n,arr,k))
```

## Submission at 2024-10-04 06:21:12


```
# Write Python Code from scratch
def bouq(n,m,k,arr):
    arr.sort()
    n = len(arr)
    count = 0
    for i in range(1,n):
        if arr[i] == i:
            count = count + 1
        
        if count == m:
            return count
        else:
            return -1

n,m,k = list(int(input().split(' ')))
arr = list(map(int,input().split()))
print(bouq(n,m,k,arr))
```

## Submission at 2024-10-04 06:23:57


```
# Write Python code from scratch
def valana(s,t):
    count = 0
    if len(s) != len(t):
        return "false"
    else:
        for i in range(len(s)):
            for j in range(len(t)):
                if s[i] in t[j]:
                    return "true"
        return "false"

def main():
    s1 = str(input().split())
    t1 = str(input().split())
    print(valana(s1,t1))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-04 06:25:35


```
# Write Python code from scratch
def valana(s,t):
    count = 0
    if len(s) != len(t):
        return "false"
    else:
        for i in range(len(s)):
            for j in range(len(t)):
                if s[i] in t[j]:
                    return "true"
        return "false"

def main():
    s1 = str(input().split())
    t1 = str(input().split())
    print(valana(s1,t1))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-25 05:42:45


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
def postOrder(root):
  ans = []
  if (root == None):
    return []
  node = root

  if (node == None):
    return []

  if node.left:
    return postOrder(node.left)

  if node.right:
    return postOrder(node.right)

    ans.append(node.val)
  
  postOrder(root)

  return ans
```

## Submission at 2024-10-25 05:46:45


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
def postOrder(root):
  ans = []
  if (root == None):
    return []
  node = root

  if (node == None):
    return 

  if node.left:
    return postOrder(node.left)

  if node.right:
    return postOrder(node.right)
    ans.append(node.val)
  
  postOrder(root)

  return ans
```

## Submission at 2024-10-25 05:54:47


```
# write code from scratch
def ransomnote(r,m):
    for i in range(len(r)):
        for j in range(len(m)):
            if r[i] == m[j]:
                return 'true'
            else:
                return 'false'

r = str(input().split())
m = str(input().split())
ans = ransomnote(r,m)
print(ans)
```

## Submission at 2024-10-25 05:59:15


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
        def length(self,root):
            if root == None:
                return 0

            left = self.length(node.left)
            right = self.length(node.right)

            if left == right:
                return True
            else:
                return False
```

## Submission at 2024-10-25 06:06:58


```
# write code from scratch

def wordpattern(pattern,s):
    if len(s) != len(pattern):
        return 'true'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) or (s[i] in d.values()) and (d[i] != d[i].value):
            return 'false'



s = str(input().split())
pattern = str(input().split())
ans = wordpattern(pattern,s)
print(ans)
```

## Submission at 2024-10-25 06:07:39


```
# write code from scratch

def wordpattern(pattern,s):
    if len(s) != len(pattern):
        return 'true'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) or (s[i] in d.values()) and (d[i] != d[i].value):
            return 'false'
        else:
            return 'true'



s = str(input().split())
pattern = str(input().split())
ans = wordpattern(pattern,s)
print(ans)
```

## Submission at 2024-10-25 06:09:28


```
# write code from scratch

def wordpattern(pattern,s):
    if len(s) != len(pattern):
        return 'true'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) and (s[i] in d.values()):
            return 'false'
        else:
            return 'true'



s = str(input().split())
pattern = str(input().split())
ans = wordpattern(pattern,s)
print(ans)
```

## Submission at 2024-10-25 06:15:43


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
def postOrder(root):

  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)
    
  ans.append(r.data)

  
  #postOrder(root)
  return ans
```

## Submission at 2024-10-25 06:17:22


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
def postOrder(root):

  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)
  else:
    ans.append(r.data)
  return ans
```

## Submission at 2024-10-25 06:26:23


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
def postOrder(root):

  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)
    
    ans.append(r.data)
  return ans
```

## Submission at 2024-10-25 06:29:12


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if left == right and left.data == right.data:
                return True
            else:
                return False
        # Your Code Here
```

## Submission at 2024-10-25 06:30:48


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left == right) and (left.data == right.data):
                return True
            else:
                return False
        # Your Code Here
```

## Submission at 2024-10-25 06:31:28


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left == right) or (left.data == right.data):
                return True
            else:
                return False
        # Your Code Here
```

## Submission at 2024-10-25 06:33:07


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left != right) or (left.data != right.data):
                return False
            else:
                return True
        # Your Code Here
```

## Submission at 2024-10-25 06:33:35


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left != right) and (left.data != right.data):
                return False
            else:
                return True
        # Your Code Here
```

## Submission at 2024-10-25 06:34:47


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left != right):
                return False
            elif (left.data) != (right.data):
                return False
            else:
                return True
        # Your Code Here
```

## Submission at 2024-10-25 06:35:29


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left != right) or (left.data) != (right.data):
                return False
            else:
                return True
        # Your Code Here
```

## Submission at 2024-10-25 06:35:56


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left != right) and (left.data) != (right.data):
                return False
            else:
                return True
        # Your Code Here
```

## Submission at 2024-10-25 06:36:23


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
        def length(self,root):
            if root == None:
                return 0
            node = root

            left = self.length(node.left)
            right = self.length(node.right)

            if (left != right) or (left.data) != (right.data):
                return False
            else:
                return True
        # Your Code Here
```

## Submission at 2024-10-25 06:37:31


```
# write code from scratch
def wordpattern(pattern,s):
    if len(s) != len(pattern):
        return 'false'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) and (s[i] in d.values()):
            return 'false'
        else:
            return 'true'
```

## Submission at 2024-10-25 06:38:33


```
# write code from scratch
def wordpattern(pattern,s):
    if len(s) == len(pattern):
        return 'false'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) and (s[i] in d.values()):
            return 'false'
        else:
            return 'true'
```

## Submission at 2024-10-25 06:39:22


```
# write code from scratch
def wordpattern(pattern,s):
    if len(s) == len(pattern):
        return 'true'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) and (s[i] in d.values()):
            return 'false'
        else:
            return 'true'
```

## Submission at 2024-10-25 06:40:10


```
# write code from scratch
def wordpattern(pattern,s):
    if len(s) == len(pattern):
        return 'false'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) and (s[i] in d.values()):
            return 'false'
        else:
            return 'true'
```

## Submission at 2024-10-25 06:41:28


```
# write code from scratch
def wordpattern(pattern,s):
    if len(s) != len(pattern):
        return 'false'

    d = {}

    for i in range(len(pattern)):
        if (pattern[i] in d) and (s[i] in d.values()):
            return 'false'
        else:
            return 'true'



s = str(input().split())
pattern = str(input().split())
ans = wordpattern(pattern,s)
print(ans)
```

## Submission at 2024-10-25 06:48:03


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
def postOrder(root):
  ans = []
  level = 0
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)

    if level%2=0:
      level = level + 1
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:51:04


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
def postOrder(root):
  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)
    postOrder(r-1)
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:51:37


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
def postOrder(root):
  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)
    
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:52:44


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
def postOrder(root):
  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)
    
      
return ans
    # code here
```

## Submission at 2024-10-25 06:54:52


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
def postOrder(root):
  ans = []
  stack = []
  if (root == None):
    return 0
  r = root

  if (r != None):
    stack.append(r)

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)
    r = stack.pop(0)
    
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:55:39


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
def postOrder(root):
  ans = []
  stack = []
  if (root == None):
    return 0
  r = root

  if (r != None):
    stack.append(r)

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)
  r = stack.pop(0)
    
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:57:45


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
def postOrder(root):
  ans = []
  stack = []
  if (root == None):
    return 0
  r = root

  if (r != None):
    stack.append(r.data)

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)


  else:
    ans.append(r.data)
    r = stack.pop(0)
    
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:59:02


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
def postOrder(root):
  ans = []
  stack = []
  if (root == None):
    return 0
  r = root

  if (r != None):
    stack.append(r.data)

  if (r.left != None):
    return postOrder(r.left)

  if (r.right != None):
    return postOrder(r.right)


  else:
    ans.append(r.data)
    r = stack.pop(0)
    
      
  return ans
    # code here
```

## Submission at 2024-10-25 06:59:49


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
def postOrder(root):
  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)
  else:
    ans.append(r.data)
  return ans
    # code here
```

## Submission at 2024-10-25 07:00:22


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
def postOrder(root):
  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)
  else:
    ans.append(r.data)
  return ans
    # code here
```

## Submission at 2024-10-25 07:00:43


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
def postOrder(root):
  ans = []
  if (root == None):
    return 0
  r = root

  if (r == None):
    return 0

  if r.left:
    return postOrder(r.left)

  if r.right:
    return postOrder(r.right)
  else:
    ans.append(r.data)
  return ans
```

## Submission at 2024-11-22 05:02:16


```
# write code from scratch
n = int(input())
for i in range (n):
    while i>=0:
        print("*")

    print("\n")


```

## Submission at 2024-11-22 05:15:41


```
# Write Code From Scratch Here
a, b = int,input().split(' ')

for i in range (a,b+1):
    ans = ((i-a) + (b-i))
    if ans < i:
        print(ans)

```

## Submission at 2024-11-22 05:22:17


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
score = 0
for j in range(len(a)):
    for i in range(1,len(a)):
        if a[i] == a[j]:
            score = score + 1
    
    print(score)
```

## Submission at 2024-11-22 05:24:43


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
score = 0
for j in range(len(a)):
    for i in range(1,len(a)):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:24:46


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
score = 0
for j in range(len(a)):
    for i in range(1,len(a)):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:26:03


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
score = 0
for j in range(len(a)):
    for i in range(1,len(a)):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:26:03


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
score = 0
for j in range(len(a)):
    for i in range(1,len(a)):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:27:15


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n =1:
    return n[0]
score = 0
for j in range(len(a)):
    for i in range(1,len(a)):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:29:57


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n =1:
    return n[0]
score = 0
for j in range(len(a)):
    for i in range(1,len(a)-1):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:34:12


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n == 1:
    return n[0]
score = 0
for j in range(len(a)):
    for i in range(1,len(a)-1):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:34:12


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n == 1:
    return n[0]
score = 0
for j in range(len(a)):
    for i in range(1,len(a)-1):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:36:39


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n == 1:
    print(a[0])
score = 0
for j in range(len(a)):
    for i in range(1,len(a)-1):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:40:56


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n == 1:
    print(a)
score = 0
for j in range(len(a)):
    for i in range(1,len(a)-1):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:43:01


```
# write code from scratch
n = int(input())
a = list(map(int,input().split()))

n = len(a)
if n == 1:
    print(a)
score = 0
for j in range(len(a)-1):
    for i in range(1,len(a)-2):
        if a[i] == a[j]:
            score = score + 1
        else:
            i = i+1
            j = j+1
    
    print(score)
```

## Submission at 2024-11-22 05:55:37


```
# write code from scratch
# write code from scratch
m,n,d = list(map(int,input().split(' ')))
a =list(map(int,input().split(' ')))
b =list(map(int,input().split(' ')))

dist = 0
for i in range(len(a)-1):
    for j in range(len(b)-1):
        if (a[i] - b[j]) <= d:
            dist = dist + 1
        else:
            i = i+1
            j = j+1
print(dist)
```

## Submission at 2024-11-22 06:06:55


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
        if root == None:
            return 0
        if root.left:
            return root.left.data < root.data
        if root.right:
            return root.right.data > root.data
        elif root.left == None and root.right == None:
            return root.data

        return self.isBST(self,root.left) or self.isBST(self,root.right)
        # Your Code Here
```

## Submission at 2024-11-22 06:06:57


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
        if root == None:
            return 0
        if root.left:
            return root.left.data < root.data
        if root.right:
            return root.right.data > root.data
        elif root.left == None and root.right == None:
            return root.data

        return self.isBST(self,root.left) or self.isBST(self,root.right)
        # Your Code Here
```

## Submission at 2024-11-22 06:11:03


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
        if root == None:
            return 0
        if root.left:
            return root.left.data < root.data
        if root.right:
            return root.right.data > root.data
        elif root.left == None and root.right == None:
            return root.data
        elif root.left == None:
            return self.isBST(self,root.right)
        elif root.right == None:
            return self.isBST(self,root.left)
        
        

        return self.isBST(self,root.left) or self.isBST(self,root.right)
        # Your Code Here
```

## Submission at 2024-11-22 06:19:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow == fast:
            fast.next = slow.next
        else:
            return removeDuplicates(head)
        return head

    # Code here


```

## Submission at 2024-11-22 06:21:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            fast.next = slow.next
        else:
            return removeDuplicates(head)
        return head

    # Code here


```

## Submission at 2024-11-22 06:26:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            fast.next = slow.next
        else:
            return head
        return removeDuplicates(head.next)

    # Code here


```

## Submission at 2024-11-22 06:28:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            fast.next = slow.next
        else:
            return head
        return removeDuplicates(head.next)

    # Code here


```

## Submission at 2024-11-22 06:28:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            fast.next = slow.next
        else:
            return head
        return removeDuplicates(head.next)

    # Code here


```

## Submission at 2024-11-22 06:33:18


```
# write code from scratch

# write code from scratch
n = int(input())
for i in range (1,n):
    while i>=0:
        print("*")
        i = i-1

    print("\n")
    i = i+2



```

## Submission at 2024-11-22 06:36:08


```
# write code from scratch

# write code from scratch
n = int(input())
if n ==1:
    print('*')
for i in range (1,n):
    while i>0:
        print("*")
        i = i-1

    print("\n")
    i = i+1
for j in range(n-1,1):
    while j>0:
        print('*')
        j = j-1
    print('\n')
    j = j-1
    




```

## Submission at 2024-11-22 06:40:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next
        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:42:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next
            fast.next = slow.next

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:42:43


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next
            fast.next = slow.next

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:44:14


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next
            fast.next = slow.next.next

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:45:34


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next
            fast = slow.next.next

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:50:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            temp = slow
            temp.next = fast.next
            fast.next = slow.next 

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:53:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            temp = slow
            temp.next = fast.next
            fast.next = slow.next.next

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:53:12


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            temp = slow
            temp.next = fast.next
            fast.next = slow.next.next

        else:
            return head
        return removeDuplicates(head.next)




```

## Submission at 2024-11-22 06:57:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def removeDuplicates(head):
    if head == None:
        return -1
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            temp = slow
            temp.next = fast.next
            fast.next = slow.next.next

        else:
            return head
        return removeDuplicates(head.next)



```

## Submission at 2024-11-22 07:00:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def removeDuplicates(head):
    if head == None:
        return -1
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next

        else:
            return head
        return removeDuplicates(head.next)



```

## Submission at 2024-11-22 07:03:30


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head == None:
        return -1
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        while slow.data == fast.data:
            slow.next = fast.next

        else:
            return head
        return removeDuplicates(head.next)





```

## Submission at 2024-11-22 07:05:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head == None:
        return -1
    # Code here
    slow = head
    fast = head

    while fast.next != None and fast.next.next!= None:
        slow = slow.next
        fast = fast.next.next
        
        if slow.data == fast.data:
            slow.next = fast.next

        else:
            return head
        return removeDuplicates(head.next)





```

