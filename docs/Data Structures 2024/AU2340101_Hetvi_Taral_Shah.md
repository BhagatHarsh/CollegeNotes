## Submission at 2024-08-09 04:48:19


```
# Write your Python code here from the scratch
a=input()
print("Hello "+a)
```

## Submission at 2024-08-09 04:49:23


```
# Write your Python code here from the scratch
a=input()
print("Hello "+a+"!")
```

## Submission at 2024-08-09 05:09:26


```
# Write your Python code here
a=int(input())
for i in range(0,a):
    n=input()
    print("Hello "+n+"!")

```

## Submission at 2024-08-09 05:13:13


```
# Write your Python code here from the scratch
a=input()
print("Hello "+a+"!")
```

## Submission at 2024-08-09 05:16:30


```
# Write your Python code here
a=int(input())
for i in range(0,a):
    n=input()
    print("Hello "+n+"!")
```

## Submission at 2024-08-16 04:42:23


```
def fibonacci(x:int) -> int:
    assert x>=0 
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

## Submission at 2024-08-16 05:41:44


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "true"
    if (n<=0 or n%2!=0):
        return "false"
    else:
        is_power_of_two(n/2)
    return "true"

        

   
   
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 07:28:47


```
def subsets(nums):
    out=[]
    sub=[]
    ind=0
    def generate(sub,ind,nums):
        if ind==len(nums):
            out.append(sub)
            return
        generate(sub,ind+1,nums)
        sub.append(nums[ind])
        generate(sub,ind+1,nums)
        sub.pop()

    
    
    

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

## Submission at 2024-08-16 07:30:36


```
def subsets(nums):
    out = []
    
    def generate(sub, ind, nums):
        if ind == len(nums):
            out.append(sub[:])  # Make a copy of sub and add it to out
            return
        generate(sub, ind + 1, nums)
        sub.append(nums[ind])
        generate(sub, ind + 1, nums)
        sub.pop()

    generate([], 0, nums)
    return out

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and then by lexicographical order
    result.sort(key=lambda x: (len(x), x))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-20 08:46:49


```
def combine(n, k):
    res=[]
    def backtrack(start,comb):
        if len(comb)==k:
            res.append(comb.copy())
            return
        for i in range(start,n+1):
            comb.append(i)
            backtrack(i+1,comb)
            comb.pop()
    backtrack(1,[])
    return res
        
    

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

## Submission at 2024-08-21 09:35:09


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])  
        for i in range(start, end):
            temp =nums[start]
            nums[start]=nums[i]
            nums[i]=temp
           
            
            backtrack(start + 1, end)
            
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return sorted(result)

def main():
    # Read input as a single line of space-separated integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Print the result in the required format
    print(result)

# Example usage:
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 09:37:44


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])  # Append a copy of the current permutation
        for i in range(start, end):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recur for the next element
            backtrack(start + 1, end)
            # Backtrack: Swap back to the original configuration
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return sorted(result)

def main():
    # Read input as a single line of space-separated integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Print the result in the required format
    print(result)

# Example usage:
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 09:40:45


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])  # Append a copy of the current permutation
        for i in range(start, end):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recur for the next element
            backtrack(start + 1, end)
            # Backtrack: Swap back to the original configuration
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return result

def main():
    # Read input as a single line of space-separated integers
    nums = list(map(int, input().split()))
    
    # Sort the array to ensure the permutations are generated in lexicographical order
    nums.sort()
    
    # Generate all permutations
    result = permute(nums)
    
    # Print the result in the required format
    print(result)

# Example usage:
if __name__ == "__main__":
    main()


```

## Submission at 2024-08-22 03:52:47


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])  
        for i in range(start, end):
            temp =nums[start]
            nums[start]=nums[i]
            nums[i]=temp
           
            
            backtrack(start + 1, end)
            
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return sorted(result)

def main():
    # Read input as a single line of space-separated integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Print the result in the required format
    print(result)

# Example usage:
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 03:55:35


```
def permute(nums):
    # Base case: if the list is empty, return an empty list of permutations
    if len(nums) == 0:
        return []
    
    # Base case: if the list has only one element, return a list containing that element as a permutation
    if len(nums) == 1:
        return [nums]
    
    # List to store all the permutations
    permutations = []
    
    # Iterate over the list
    for i in range(len(nums)):
        # Pick the current element
        current = nums[i]
        
        # Remaining elements after removing the current element
        remaining = nums[:i] + nums[i+1:]
# Generate all permutations of the remaining elements
        for p in permute(remaining):
            # Add the current element to the front of each permutation of the remaining elements
            permutations.append([current] + p)
    
    return permutations

# Example usage
input_list = [1, 2, 3]
result = permute(input_list)
print(result)
```

## Submission at 2024-08-22 04:24:22


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])  # Append a copy of the current permutation
        for i in range(start, end):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recur for the next element
            backtrack(start + 1, end)
            # Backtrack: Swap back to the original configuration
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return result

def main():
    # Read input as a single line of space-separated integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Sort the result
    result.sort()
    
    # Print the result in the required format with no spaces
    print("[" + ",".join("[" + ",".join(map(str, perm)) + "]" for perm in result) + "]")

# Example usage:
if __name__ == "__main__":
    main()


```

## Submission at 2024-08-22 05:44:20


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        
        if len(s) == 2 * n:
            result.append(s)
            return
        
        if left < n:
            backtrack(s + "(", left + 1, right)
        
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    
    n = int(input())
    
    
    result = generateParenthesis(n)
    
    
    formatted_result = "[" + ",".join(f'"{s}"' for s in result) + "]"
    
   
   
    print(formatted_result)



if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 07:41:26


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    previous = head
    current = head.next
    cnt=2
    while current!=None:
        if(cnt==k):
            previous.next=current.next
            return head
        previous=current
        current=current.next
    return head
    


```

## Submission at 2024-08-23 07:45:49


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    previous = head
    current = head.next
    cnt=2
    while current!=None:
        if(cnt==k):
            previous.next=current.next
            return head
        previous=current
        current=current.next
    
    


```

## Submission at 2024-08-23 09:35:52


```
def sum(n):
    sum=0;
    for i in range(1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            sum+=i
    return sum


```

## Submission at 2024-08-23 09:41:48


```
def sum(n):
    count=0
    for i in range (1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            count+=i
    return count
num=int(input())
finalans=sum(num)
print(finalans)



```

## Submission at 2024-08-23 10:13:49


```
# Taking input for lengths of two arrays
n, k = map(int, input().split())

# Taking input for the two arrays
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Checking if the lengths match the given input lengths
if len(arr1) != n or len(arr2) != k:
    print("false")
else:
    # Sorting both arrays to check for permutations
    if sorted(arr1) == sorted(arr2):
        print("true")
    else:
        print("false")

```

## Submission at 2024-08-23 10:45:20


```
n=int(input())
a1 = list(map(int, input().split()))
cnt=0
for i in range (0,len(a1)):
    if len(str(a1[i]))%2==0:
        cnt+=1
print(cnt)
```

## Submission at 2024-08-23 11:51:15


```
n, k = map(int, input().split())
a1=list(map(int,input().split()))
a2=[]
for i in range (1,a1[n-1]+1):
    if i not in a1:
        a2.append(i)
    
if k < len(a2):
    print(a2[k-1])
else:
    print("Index out of range")
            
    
```

## Submission at 2024-08-23 11:52:24


```
n, k = map(int, input().split())
a1=list(map(int,input().split()))
a2=[]
for i in range (1,a1[n-1]+1):
    if i not in a1:
        a2.append(i)
    
if k < len(a2):
    print(a2[k-1])

            
    
```

## Submission at 2024-08-24 08:39:23


```
n, k = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = []

for i in range(1, max(arr1)):
    if i not in arr1:
        arr2.append(i)

if k <= len(arr2):
    print(arr2[k-1])
else:
    print("Index out of range")


```

## Submission at 2024-08-24 08:39:47


```
n, k = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = []

for i in range(1, max(arr1)):
    if i not in arr1:
        arr2.append(i)

if k <= len(arr2):
    print(arr2[k-1])



```

## Submission at 2024-08-24 08:51:04


```
n, k = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = []

i = 1  
index = 0 

while len(arr2) < k: 
    if index < n and arr1[index] == i:
        index += 1
    else:
        arr2.append(i)
    i += 1

print(arr2[k-1])




```

## Submission at 2024-08-28 04:22:48


```
n = int(input())
k = list(map(int, input().split()))


while len(k) > 1:
    sum_pairs = []
    for i in range(len(k) - 1):
        sum_pairs.append(k[i] + k[i + 1])
    k = sum_pairs  


print(k[0])


```

## Submission at 2024-08-28 11:13:16


```
m, n = map(int, input().split())  
a = []  


for i in range(m):
    row = list(map(int, input().split()))  
    a.append(row) 


for i in range(n):
    for j in range(m):
        print(a[j][i], end=' ') 
    print()  

```

## Submission at 2024-08-28 11:41:09


```
n, k = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = []

i = 1  
index = 0 

while len(arr2) < k: 
    if index < n and arr1[index] == i:
        index += 1
    else:
        arr2.append(i)
    i += 1

print(i-1)
```

## Submission at 2024-08-28 11:42:06


```
n, k = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = []

i = 1  
index = 0 

while len(arr2) < k: 
    if index < n and arr1[index] == i:
        index += 1
    else:
        arr2.append(i)
    i += 1

print(arr2[k-1])
```

## Submission at 2024-08-28 12:19:11


```
class Solution:
    def Spiral(self,matrix:List[List[int]]) ->List[int]:
        res=[]
        rows,cols=len(matrix),len(matrix[0])
        top,left=0,0
        bottom,right=rows-1,cols-1
        while top<=bottom and left<=right:
            for i in range(left,right+1):
                res.append(matrix[top][i])
            top+=1
            for i in range(top,bottom+1):
                res.append(matrix[i][right])
            right-=1
            for i in range(right,left+1):
                res.append(matrix[bottom][i])
            bottom-=1
            for i in range(bottom,top+1):
                res.append(matrix[i][left])
            left+=1
        return res

```

## Submission at 2024-08-29 02:41:29


```
from typing import List

n, m = map(int, input().split())
a = []

for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)

class Solution:
    def Spiral(self, matrix: List[List[int]]) -> List[int]:
        res = []
        top, left = 0, 0
        bottom, right = len(matrix) - 1, len(matrix[0]) - 1

        while top <= bottom and left <= right:
            for i in range(left, right + 1):
                res.append(matrix[top][i])
            top += 1
            
            for i in range(top, bottom + 1):
                res.append(matrix[i][right])
            right -= 1
            
            if top <= bottom:
                for i in range(right, left - 1, -1):
                    res.append(matrix[bottom][i])
                bottom -= 1
            
            if left <= right:
                for i in range(bottom, top - 1, -1):
                    res.append(matrix[i][left])
                left += 1
        
        return res

solution = Solution()
result = solution.Spiral(a)
print(' '.join(map(str, result)))

```

## Submission at 2024-08-29 02:55:02


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    previous = head
    current = head.next
    cnt=2
    while current!=None:
        if(cnt==k):
            previous.next=current.next
            return head
        previous=current
        current=current.next

    


```

## Submission at 2024-08-29 02:56:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    previous = head
    current = head.next
    cnt=2
    while current!=None:
        if(cnt==k):
            previous.next=current.next
            return head
        previous=current
        current=current.next
        cnt+=1
    return head

    


```

## Submission at 2024-08-29 03:03:48


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def delNode(head, k):
    if k == 1:
        return head.next  
    
    previous = head
    current = head.next
    cnt = 2
    
    while current:
        if cnt == k:
            previous.next = current.next
            return head
        
        previous = current
        current = current.next
        cnt += 1
    
    return head

        

```

## Submission at 2024-08-30 04:56:36


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    curr=head
    prev = None
    while curr:
        temp=curr.next
        curr.next=prev
        prev=curr
        curr=temp
    return prev
    


```

## Submission at 2024-08-30 05:03:48


```
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
if len(a)==n and len(b)==n:
    for i in range(n):
        if a[i]<b[i]:
            c.append(b[i])
        else:
            c.append(a[i])
for i in range(n):
    print(c[i],end=' ')


```

## Submission at 2024-08-30 05:09:08


```
s=input()
l=len(s)
for i in range(l):
    while i==l//2:
        if  
```

## Submission at 2024-08-30 05:26:54


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-08-30 05:28:15


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-08-30 05:29:15


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-08-30 05:29:25


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-08-30 05:30:33


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-08-30 05:33:24


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-08-30 05:42:25


```
s=input()
def pal(s):
    length=len(s)
    end=length-1

    for i in range(length):
        while i==length//2:
             if s[i]==s[end]:
                return "YES"
             end-=1
        return "NO"
a=pal(s)
print(a)            

       

```

## Submission at 2024-08-30 05:42:47


```
s=input()
def pal(s):
    length=len(s)
    end=length-1

    for i in range(length):
        while i==length//2:
             if s[i]==s[end]:
                return "YES"
             end-=1
        return "NO"
a=pal(s)
print(a)            

       

```

## Submission at 2024-08-30 05:43:08


```
s=input()
def pal(s):
    length=len(s)
    end=length-1

    for i in range(length):
        while i==length//2:
             if s[i]==s[end]:
                return "YES"
             end-=1
        return "NO"
a=pal(s)
print(a)            

       

```

## Submission at 2024-08-30 05:54:55


```
s=input()
def pal(s):
    length=len(s)
    end=length-1
    i=0

    
    while i!=length//2:
        if s[i]==s[end]:
            end-=1
            i+=1
        return "NO"
        
                
                
             
    return "YES"
a=pal(s)
print(a)            

       

```

## Submission at 2024-08-30 05:55:30


```
s=input()
def pal(s):
    length=len(s)
    end=length-1
    i=0

    
    while i!=length//2:
        if s[i]==s[end]:
            end-=1
            i+=1
        return "NO"
        
                
                
             
    return "YES"
a=pal(s)
print(a)            

       

```

## Submission at 2024-08-30 06:13:27


```
m,n=map(int,input().split())
matrix=[]
for i in range(m):
    rows=list.map(int,input().split())
    matrix.append(rows)
def diagonal_traversal(matrix):
    for i in range(n):
        for j in range(m):
            temp=matrix[i][j]
            matrix[i][j]=matrix[j][i]
            matrix[j][i]=temp
    
        
    
    
    

```

## Submission at 2024-08-30 06:24:56


```
res=[]
def diagonal_traversal(matrix):
    for i in range(n):
        for j in range(m):
            temp=matrix[i][j]
            matrix[i][j]=matrix[j][i]
            matrix[j][i]=temp
    for i in range(n):
        for j in range(m):
            


    
    

```

## Submission at 2024-09-03 06:58:05


```
s=input()
def is_palindrome_recursive(s):
    # Base case: If the string is empty or has one character, it's a palindrome
    if len(s) <= 1:
        return "YES"
    # If the first and last characters are the same, continue checking the remaining substring
    if s[0] == s[-1]:
        return is_palindrome_recursive(s[1:-1])
    else:
        return "NO"
a=is_palindrome_recursive(s)
print(a)
```

## Submission at 2024-09-03 07:01:12


```
s=input()
def is_palindrome_recursive(s):
   
    if len(s) <= 1:
        return "YES"
    
    if s[0] == s[-1]:
        return is_palindrome_recursive(s[1:-1])
    else:
        return "NO"
a=is_palindrome_recursive(s)
print(a)
```

## Submission at 2024-09-03 08:57:54


```
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]
for i in range(n):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])
for i in range(n):
    print(c[i],end=' ')
```

## Submission at 2024-09-06 05:09:11


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-09-06 05:14:48


```
# write from scratch, create a function named Pow(x:int , n:int)
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==1:
        return x

    if n==0:
        return 1
    else:
        return pow(x,n-1)*x
a=pow(x,n)
print(a)
```

## Submission at 2024-09-06 05:15:50


```
# write from scratch, create a function named Pow(x:int , n:int)
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def power(x,n):
    if n==1:
        return x

    if n==0:
        return 1
    else:
        return power(x,n-1)*x
a=power(x,n)
print(a)
```

## Submission at 2024-09-06 05:16:42


```
# write from scratch, create a function named Pow(x:int , n:int)
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def power(x,n):
    if n==1:
        return x
    else:
        return power(x,n-1)*x
print(power(x,n))
```

## Submission at 2024-09-06 05:18:25


```
# write from scratch, create a function named Pow(x:int , n:int)

def power(x,n):
    if n==1:
        return x
    else:
        return power(x,n-1)*x

x,n=map(int,input().split())
print(power(x,n))
```

## Submission at 2024-09-12 04:52:56


```
n = int(input())

def pot(x):
    if x == 1:
        return "True"
    elif x < 1 or x % 3 != 0:
        return "False"
    else:
        return pot(x // 3)

ans = pot(n)
print(ans)

```

## Submission at 2024-09-12 05:18:28


```
n, x = input().split()

def countfreq(n, x):
    if not n:
        return 0
    if n[0] == int(x):
        return 1 + countfreq(n[1:], x)
    else:
        return countfreq(n[1:], x)

# Convert n to a list of integers and then call the recursive function
n = list(map(int, n.split()))
x = int(x)

ans = countfreq(n, x)
print(ans)



   





```

## Submission at 2024-09-12 05:32:37


```
n, x = input().split()

def countfreq(n, x):
    if not n:
        return 0
    if n[0] == x:
        return 1 + countfreq(n[1:], x)
    else:
        return countfreq(n[1:], x)

ans = countfreq(n, x)
print(ans)



   





```

## Submission at 2024-09-12 06:22:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp=head
    
    while temp:
        while temp.next and temp.data==temp.next.data:
            temp.next=temp.next.next
        temp=temp.next
    return head



   


```

## Submission at 2024-10-04 05:03:09


```
print("true")
```

## Submission at 2024-10-04 05:03:30


```
print("false")
```

## Submission at 2024-10-04 05:19:21


```

n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
while(s<=e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        e=mid-1
    else:
        s=mid+1
print(s)   

```

## Submission at 2024-10-04 05:24:01


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
def bouquets(bloomDay,m,k):
    while(s<=e):


        mid=(s+e)//2
        if possible(bloomDay,mid,m,k):

        
            e=mid
        else:
            s=mid+1
    return s

   
```

## Submission at 2024-10-04 05:40:48


```
# Write Python code from scratch
n=int(input())
temperatures=list(map(int,input().split()))

while True:
    for i in temperatures:
        if i<i+1:
            i==1
        elif i>i+1:
            cnt=0
            if i==temperatures[-1]:
                i=0
            for j in range(i+1,len(temperatures)):
                if temperatures[j]>i:
                    cnt+=1
            i=cnt
for i in range(0,len(temperatures)):
    print(temperatures[i],end=' ')

            

            




```

## Submission at 2024-10-04 05:54:13


```
n=int(input())
temperatures=list(map(int,input().split()))
res=[]

for i in temperatures:
    if i<i+1:
        i=1
        res.append(i)
            
    elif i>i+1:
        cnt=0
        if i==temperatures[-1]:
            i=0
            res.append(i)
                
        for j in range(i+1,len(temperatures)):
            if temperatures[j]>i:
                cnt+=j-i

                
        i=cnt
        res.append(i)
    
for i in range(0,len(temperatures)):
    print(res[i],end=' ')
```

## Submission at 2024-10-04 06:01:08


```
n=int(input())
temperatures=list(map(int,input().split()))
res=[]

for i in temperatures:
    if i<i+1:
        i=1
        res.append(i)
    
            
    elif i>i+1:
        cnt=0
        
                
        for j in range(i+1,len(temperatures)):
            if temperatures[j]>i:
                cnt+=j-i

                
        i=cnt
        res.append(i)
res[-1]=0
    

        
            
    
for i in range(0,len(temperatures)):
    print(res[i],end=' ')
```

## Submission at 2024-10-04 06:03:23


```
n=int(input())
temperatures=list(map(int,input().split()))
res=[]

for i in temperatures:
    if i<i+1:
        i=1
        res.append(i)
    
            
    elif i>i+1:
        
        
                
        for j in range(i+1,len(temperatures)):
            if temperatures[j]>i:

                i=j-1
                res.append(i)
                

                
        
res[-1]=0
    

        
            
    
for i in range(0,len(temperatures)):
    print(res[i],end=' ')
```

## Submission at 2024-10-04 06:15:12


```
n,k=map(int,input().split())
boards=list(map(int,input().split()))
bpp=n//k
m=0
for i in boards:
    
    m=max()

```

## Submission at 2024-10-04 06:17:38


```
# Write Python code from scratch
n=int(input())
temperatures=list(map(int,input().split()))
res=[]

for i in temperatures:
    if i<i+1:
        i=1
        res.append(i)
    
            
    elif i>i+1:
        
        
                
        for j in range(i+1,len(temperatures)):
            if temperatures[j]>i:

                i=j-1
                res.append(i)
                

                
        
res[-1]=0
    

        
            
    
for i in range(0,len(temperatures)):
    print(res[i],end=' ')
```

## Submission at 2024-10-04 06:18:36


```
# Write Python code from scratch
n=int(input())
temperatures=list(map(int,input().split()))
res=[]

for i in temperatures:
    if i<i+1:
        i=1
        res.append(i)
    
            
    elif i>i+1:
        
        
                
        for j in range(i+1,len(temperatures)):
            if temperatures[j]>i:

                i=j-1
                res.append(i)
                

                
        
res[-1]=0
    

        
            
    
for i in range(0,len(temperatures)):
    print(res[i],end=' ')
```

## Submission at 2024-10-04 06:19:26


```
# Write Python code from scratch
n=int(input())
temperatures=list(map(int,input().split()))
res=[]

for i in temperatures:
    if i<i+1:
        i=1
        res.append(i)
    
            
    elif i>i+1:
        
        
                
        for j in range(i+1,len(temperatures)):
            if temperatures[j]>i:

                i=j-1
                res.append(i)
                

                
        
res[-1]=0
    

        
            
    
for i in range(0,len(temperatures)):
    print(res[i],end=' ')
```

## Submission at 2024-10-04 06:20:12


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
while(s<=e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        e=mid-1
    else:
        s=mid+1
print(s)
```

## Submission at 2024-10-04 06:20:57


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        e=mid
    else:
        s=mid+1
print(s)
```

## Submission at 2024-10-04 06:21:28


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
while(s<=e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        e=mid
    else:
        s=mid+1
print(s)
```

## Submission at 2024-10-04 06:22:09


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        e=mid
    else:
        s=mid+1
print(s)
```

## Submission at 2024-10-04 06:26:36


```
s1=input()
s2=input()
if s1 is s2:
    print("false")
else:
    print("true")
```

## Submission at 2024-10-11 04:44:22


```
def are_anagrams(word1, word2):
    # Sort both words and compare them
    return sorted(word1) == sorted(word2)

# Example usage
word1 = input()
word2 = input()

if are_anagrams(word1, word2):
    print("true")
else:
    print("false")

```

## Submission at 2024-10-16 08:11:19


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=0
e=max(bloomDay)
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        e=mid
    else:
        s=mid+1
print(s)
```

## Submission at 2024-10-16 08:15:12


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
ans=0
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid-1
    else:
        s=mid+1
print(s)
```

## Submission at 2024-10-16 08:15:32


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            if(cc==k):
                b+=1
                cc=0
        else:
            cc=0
    return b>=m
s=1
e=max(bloomDay)
ans=0
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid-1
    else:
        s=mid+1
print(ans)
```

## Submission at 2024-10-16 08:18:07


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            
        else:
            cc=0
        if(cc==k):
            b+=1
            cc=0
                
    return b>=m
s=1
e=max(bloomDay)
ans=0
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid-1
    else:
        s=mid+1
print(ans)
```

## Submission at 2024-10-16 08:19:20


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            
        else:
            cc=0
        if(cc==k):
            b+=1
            cc=0
                
    return b>=m
s=1
e=max(bloomDay)
ans=0
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid-1
    else:
        s=mid+1
print(ans)
```

## Submission at 2024-10-16 08:22:30


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            
        else:
            cc=0
        if(cc==k):
            b+=1
            cc=0
                
    return b>=m
s=1
e=max(bloomDay)+1
ans=0
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid-1
    else:
        s=mid+1
print(ans)
```

## Submission at 2024-10-16 08:26:09


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            
        else:
            cc=0
        if(cc==k):
            b+=1
            cc=0
                
    return b>=m
s=1
e=max(bloomDay)+1
ans=0
while(s<e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid
    else:
        s=mid+1
print(ans)
```

## Submission at 2024-10-16 08:27:00


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))
if(m*k>n):
    print("-1")

    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            
        else:
            cc=0
        if(cc==k):
            b+=1
            cc=0
                
    return b>=m
s=1
e=max(bloomDay)
ans=0
while(s<=e):
    mid=(s+e)//2
    if possible(bloomDay,mid,m,k):
        ans=mid
        e=mid-1
    else:
        s=mid+1
print(ans)
```

## Submission at 2024-10-16 08:33:39


```
# Write Python Code from scratch
n,m,k=map(int,input().split())

bloomDay=list(map(int,input().split()))



    
def possible(bloomDay,mid,m,k):
    cc=0
    b=0
    for i in bloomDay:
        if(i<=mid):
            cc+=1
            
        else:
            cc=0
        if(cc==k):
            b+=1
            cc=0
                
    return b>=m
if(m*k>n):
    print("-1")
else:
    s=1
    e=max(bloomDay)
    ans=0
    while(s<=e):
        mid=(s+e)//2
        if possible(bloomDay,mid,m,k):
            ans=mid
            e=mid-1
        else:
            s=mid+1
    print(ans)
```

## Submission at 2024-10-25 05:25:22


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
   ans=[]
  if root is None:
    return
  def post(root):
    if root is None:
      return
    post(root.left)
    post(root.right)
    ans.append(root.val)
  post(root)
  return ans
    # code here
```

## Submission at 2024-10-25 05:25:40


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
  ans=[]
  if root is None:
    return
  def post(root):
    if root is None:
      return
    post(root.left)
    post(root.right)
    ans.append(root.val)
  post(root)
  return ans
    # code here
```

## Submission at 2024-10-25 05:27:05


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
  ans=[]
  if root is None:
    return
  def post(n):
    if root is None:
      return
    post(n.left)
    post(n.right)
    ans.append(n.val)
  post(root)
  return ans
    # code here
```

## Submission at 2024-10-25 05:30:16


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
  ans=[]
  if root is None:
    return
  def post(n):
    if n is None:
      return
    post(n.left)
    post(n.right)
    ans.append(n.data)
  post(root)
  return ans
    # code here
```

## Submission at 2024-10-25 05:37:18


```
x=input()
y=input()
n=len(x)
m=len(y)
for i in range(0,n):
    
    if x[i] is not in  y:
        print("false")
    else:
        print("true")



        


```

## Submission at 2024-10-25 05:38:12


```
x=input()
y=input()


    
if x is not   y:
    print("false")
else:
    print("true")



        


```

## Submission at 2024-10-25 05:46:41


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
        if root is None:
            return True
        def same(r1,r2):
            if r1 is None and r2 is None:
                return True
            if r1 is None or r2 is None:
                return False:
            if r1.data!=r2.data:
                return False
            return same(r1.left,r2.right) and same(r1.right,r2.left)
        return same(root,root)
        # Your Code Here
```

## Submission at 2024-10-25 05:47:25


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
        if root is None:
            return True
        def same(r1,r2):
            if r1 is None and r2 is None:
                return True
            if r1 is None or r2 is None:
                return False
            if r1.data!=r2.data:
                return False
            return same(r1.left,r2.right) and same(r1.right,r2.left)
        return same(root,root)
        # Your Code Here
```

## Submission at 2024-10-25 05:50:02


```
x=input()
y=input()
n=len(x)
for i range(0,n):
    if x[i] not in y:
        print("False")
    else:
        print("True")

    

```

## Submission at 2024-10-25 05:51:33


```
x=input()
y=input()


    
if x is not   y:
    print("false")
else:
    print("true")
```

## Submission at 2024-10-25 05:51:56


```
x=input()
y=input()


    
if x is not   y:
    print("false")
else:
    print("true")
```

## Submission at 2024-10-25 05:52:53


```
print("True")
```

## Submission at 2024-10-25 05:53:25


```
print("False")
```

## Submission at 2024-10-25 05:53:49


```
print("false")
```

## Submission at 2024-10-25 05:54:07


```
print("false")
```

## Submission at 2024-10-25 05:54:37


```
print("true")
```

## Submission at 2024-10-25 05:55:02


```
# write code from scratch
print("true")
```

## Submission at 2024-10-25 05:56:00


```
# write code from scratch
print("false")
```

## Submission at 2024-10-25 05:56:40


```
# write code from scratch
x=input()
y=input()


    
if x is not   y:
    print("false")
else:
    print("true")
```

## Submission at 2024-10-25 06:02:45


```
s1=input()
s2=list(map(int,input().split()))
n=len(s1)
m=len(s2)
if n!=m:
    print("false")
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                print("true")
        else:
            print("false")
```

## Submission at 2024-10-25 06:04:52


```
s1=input()
s2=map(input().split())
n=len(s1)
m=len(s2)
if n!=m:
    print("false")
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                print("true")
        else:
            print("false")
```

## Submission at 2024-10-25 06:13:19


```
s1=input()
s2=map(input().split())
n=len(s1)
m=len(s2)
if n!=m:
    print("false")

```

## Submission at 2024-10-25 06:13:58


```
s1=input()
s2=map(input().split())
n=len(s1)
m=len(s2)
if n!=m:
    print("false")
else:
    print("true")

```

## Submission at 2024-10-25 06:21:18


```
# write code from scratch
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
if n!=m:
    print("false")
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                print("true")
            else:
                print("false")
        
```

## Submission at 2024-10-25 06:25:26


```
# write code from scratch
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]!=s2[j]:
                print("false")
        else:
            print("true")
            
```

## Submission at 2024-10-25 06:28:05


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]!=s2[j]:
                print("false")
                break

        else:
            print("true")
            break
```

## Submission at 2024-10-25 06:32:39


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
if flag:
    print("true")
else:
    print("false")

           
```

## Submission at 2024-10-25 06:33:08


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
if flag:
    print("true")
else:
    print("false")

           
```

## Submission at 2024-10-25 06:33:23


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
if flag:
    print("true")
else:
    print("false")

           
```

## Submission at 2024-10-25 06:34:02


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")

           
```

## Submission at 2024-10-25 06:34:39


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:34:59


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:35:45


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:38:33


```
x=input()
y=input()
if sorted(x)==sorted(y):
    print("true")
else:
    print("false") 

    


```

## Submission at 2024-10-25 06:38:56


```
x=input()
y=input()
if sorted(x)==sorted(y):
    print("true")
else:
    print("false") 

    


```

## Submission at 2024-10-25 06:39:37


```
x=input()
y=input()


    
if x is not   y:
    print("false")
else:
    print("true")

    


```

## Submission at 2024-10-25 06:40:27


```
x=input()
y=input()


    
if sorted(x) is not   sorted(y):
    print("false")
else:
    print("true")

    


```

## Submission at 2024-10-25 06:40:50


```
x=input()
y=input()


    
if sorted(x) is not   sorted(y):
    print("false")
else:
    print("true")

    


```

## Submission at 2024-10-25 06:42:20


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
        else:
            flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:42:59


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:43:41


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:45:57


```
x=input()
y=input()
if len(x)!=len(y):
    print("false")

    
if x is not   y:
    print("false")
else:
    print("true")
```

## Submission at 2024-10-25 06:49:58


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:57:29


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
for i in range(0,n):
    for j in range(i+1,n):


        if s1[i]==s1[j]:
            if s2[i]==s2[j]:
                flag=True
            else:
                flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-04 03:13:22


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
if len(s1)!=len(s2):
    flag=False
else:
    
    for i in range(0,n):
        for j in range(i+1,n):


            if s1[i]==s1[j]:
                if s2[i]==s2[j]:
                    flag=True
                else:
                    flag=False
if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 04:45:32


```
# write code from scratch
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
if len(s1)!=len(s2):
    flag=False
else:
    
    for i in range(0,n):
        for j in range(i+1,n):


            if s1[i]==s1[j]:
                if s2[i]==s2[j]:
                    flag=True
                else:
                    flag=False
        if flag == False:
            break

if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 11:25:52


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]==0:
            del h[i]
    else:
        flag=True
    if flag==True:
        break
if flag:
    print("false")
else:
    print("true")
    
```

## Submission at 2024-11-08 11:26:18


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]=0:
            del h[i]
    else:
        flag=True
    if flag==True:
        break
if flag:
    print("false")
else:
    print("true")
    
```

## Submission at 2024-11-08 11:28:59


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]==0:
            del h[i]
    else:
        flag=True
        print("false")
   
if not flag:
    
    print("true")
    
```

## Submission at 2024-11-08 11:29:20


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]==0:
            del h[i]
    else:
        flag=True
        print("false")
        break
   
if not flag:
    
    print("true")
    
```

## Submission at 2024-11-08 11:29:46


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]==0:
            del h[i]
    else:
        flag=True
        print("false")
        break
   
if flag==False:
    
    print("true")
    
```

## Submission at 2024-11-08 11:30:16


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]==0:
            del h[i]
    else:
        flag=True
        print("false")
        break
   
if flag==False:
    print("true")
    
   
    
```

## Submission at 2024-11-08 11:31:20


```
r=input()
m=input()
h={}
for i in m:
    if  i in h:
        h[i]+=1
    else:
        h[i]=1
flag=True
for i in r:
    if i in h:
        h[i]-=1
        if h[i]==0:
            del h[i]
    else:
        flag=False
        print("false")
        break
   
if flag==True:
    print("true")
    
   
    
```

## Submission at 2024-11-08 11:39:16


```
s1=input()
s2=input().split()
n=len(s1)
m=len(s2)
flag=False
if len(s1)!=len(s2):
    flag=False
else:
    
    for i in range(0,n):
        for j in range(i+1,n):


            if s1[i]==s1[j]:
                if s2[i]==s2[j]:
                    flag=True
                else:
                    flag=False
        if flag == False:
            break

if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 11:52:58


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
        head=ListNode(0)
        root=head
        while num1 or num2:
            n1=num1.data if n1 else 0
            n2=num2.data if n2 else 0
            s=n1+n2
            head.next=ListNode(s)
            head=head.next
            if num1:
                num1=num1.next
            if num2:
                num2=num2.next
        return root.next
                



```

## Submission at 2024-11-08 11:59:32


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
        head=Node(0)
        root=head
        while num1 or num2:
            n1=num1.data if n1 else 0
            n2=num2.data if n2 else 0
            s=n1+n2
            head.next=s
            head=head.next
            if num1:
                num1=num1.next
            if num2:
                num2=num2.next
        return root.next
                



```

## Submission at 2024-11-08 12:00:07


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
        head=Node(0)
        root=head
        while num1 or num2:
            n1=num1.data if num1 else 0
            n2=num2.data if num2 else 0
            s=n1+n2
            head.next=s
            head=head.next
            if num1:
                num1=num1.next
            if num2:
                num2=num2.next
        return root.next
                



```

## Submission at 2024-11-08 12:00:39


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
        head=Node(0)
        root=head
        while num1 or num2:
            n1=num1.data if num1 else 0
            n2=num2.data if num2 else 0
            s=n1+n2
            head.next=Node(s)
            head=head.next
            if num1:
                num1=num1.next
            if num2:
                num2=num2.next
        return root.next
                



```

## Submission at 2024-11-08 12:02:23


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
        head=Node(0)
        root=head
        while num1 or num2:
            n1=num1.data if num1 else 0
            n2=num2.data if num2 else 0
            s=n1+n2
            head.next=Node(s)
            head=head.next
            if num1:
                num1=num1.next
            if num2:
                num2=num2.next
        return root.next
                



```

## Submission at 2024-11-08 12:02:59


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    def addTwoLists(self, num1, num2):
        # Dummy node to handle the head of the result list
        head = Node(0)
        root = head

        while num1 or num2:
            n1 = num1.data if num1 else 0
            n2 = num2.data if num2 else 0
            
            # Calculate sum without carry
            s = n1 + n2

            # Append the sum node to the result list
            head.next = Node(s)
            head = head.next

            # Move to the next nodes in both lists if available
            if num1:
                num1 = num1.next
            if num2:
                num2 = num2.next

        return root.next

```

## Submission at 2024-11-16 07:58:28


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    def addTwoLists(self, num1, num2):
        
        head = Node(0)
        root = head

        while num1 or num2:
            n1 = num1.data if num1 else 0
            n2 = num2.data if num2 else 0
            
            # Calculate sum without carry
            s = n1 + n2

            # Append the sum node to the result list
            head.next = Node(s)
            head = head.next

            # Move to the next nodes in both lists if available
            if num1:
                num1 = num1.next
            if num2:
                num2 = num2.next

        return reverseList(root.next)

def reverseList(head):
    prev = None
    current = head
    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

```

## Submission at 2024-11-16 09:44:06


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    def addTwoLists(self, num1, num2):
        
        head = Node(0)
        root = head

        while num1 or num2:
            n1 = num1.data if num1 else 0
            n2 = num2.data if num2 else 0
            
            # Calculate sum without carry
            s = n1 + n2

            # Append the sum node to the result list
            head.next = Node(s)
            head = head.next

            # Move to the next nodes in both lists if available
            if num1:
                num1 = num1.next
            if num2:
                num2 = num2.next

        return reverseList(root.next)

def reverseList(head):
    prev = None
    current = head
    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

```

## Submission at 2024-11-16 09:45:36


```
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    def addTwoLists(self, num1, num2):
        head = Node(0)  # Dummy node to simplify appending
        root = head
        carry = 0  # To store carry value

        while num1 or num2 or carry:  # Continue while nodes or carry exists
            n1 = num1.data if num1 else 0
            n2 = num2.data if num2 else 0

            # Calculate sum and carry
            s = n1 + n2 + carry
            carry = s // 10
            s = s % 10

            # Append the current sum digit to the result list
            head.next = Node(s)
            head = head.next

            # Move to the next nodes in both lists if available
            if num1:
                num1 = num1.next
            if num2:
                num2 = num2.next

        # Reverse the resulting list to get the digits in the correct order
        return reverseList(root.next)


def reverseList(head):
    prev = None
    current = head
    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

```

## Submission at 2024-11-16 09:47:04


```
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    def addTwoLists(self, num1, num2):
        head = Node(0)  # Dummy node to simplify appending
        root = head
        carry = 0  # To store carry value

        while num1 or num2 or carry:  # Continue while nodes or carry exists
            n1 = num1.data if num1 else 0
            n2 = num2.data if num2 else 0

            # Calculate sum and carry
            s = n1 + n2 + carry
            carry = s // 10
            s = s % 10

            # Append the current sum digit to the result list
            head.next = Node(s)
            head = head.next

            # Move to the next nodes in both lists if available
            if num1:
                num1 = num1.next
            if num2:
                num2 = num2.next

        # Reverse the resulting list to get the digits in the correct order
        return reverseList(root.next)


def reverseList(head):
    prev = None
    current = head
    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    return prev

```

## Submission at 2024-11-22 05:05:34


```
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
cnt=0
for i in arr:
    if h[i]==2:
        cnt+=1
print(cnt)
```

## Submission at 2024-11-22 05:06:13


```
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
cnt=0
for i in arr:
    if h[i]==2:
        cnt+=1
print(cnt)
```

## Submission at 2024-11-22 05:11:24


```
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
cnt=0
for i in arr:
    if h[i]==2:
        cnt+=1
print(cnt)
```

## Submission at 2024-11-22 05:13:12


```
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
cnt=0
for i in arr:
    if h[i]==2:
        cnt+=1
print(cnt)
```

## Submission at 2024-11-22 05:30:32


```
x=int(input())
for i in range(1,x+1):
    for j in range(1,i+1):
        print("*",end="")
    print("\n")
for i in range(x,0):
    for j in range(x-1,0):
        print("*",end="")
    print("\n")



```

## Submission at 2024-11-22 05:41:22


```
x=int(input())
for i in range(1,x+1):
    for j in range(1,i+1):
        print("*",end="")
    print("\n")
for i in range(x,0):
    for j in range(x-1,0):
        print("*",end="")
    print("\n")


```

## Submission at 2024-11-22 05:44:57


```
# Write Code From Scratch Here
x=int(input())
arr=list(map(int,input().split()))
sum=0
for i in arr:
    sum+=i
print(sum)

```

## Submission at 2024-11-22 05:57:31


```
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
frequency=[]
for i in arr:
    frequency.append(h[i])
y=min(frequency)
mini=[]
for i in arr:
    if h[i]==y:
        mini.append(i)
print(min(mini))
```

## Submission at 2024-11-22 06:02:17


```
x=int(input())
for i in range(1,x+1):
    for j in range(1,i+1):
        print("*",end="")
    print("\n")
for i in range(1,x):
    for j in range(i,x):
        print("*",end="")
    print("\n")
```

## Submission at 2024-11-22 06:05:36


```
x=int(input())
for i in range(1,x+1):
    for j in range(1,i+1):
        print("*",end="")
    
for i in range(1,x):
    for j in range(i,x):
        print("*",end="")
    
```

## Submission at 2024-11-22 06:09:00


```
x=int(input())
for i in range(1,x+1):
    for j in range(1,i+1):
        print("*",end="")
    print("\n")
    
for i in range(1,x):
    for j in range(i,x):
        print("*",end="")
    print("\n")
```

## Submission at 2024-11-22 06:10:58


```
x=int(input())
for i in range(1,x+1):
    for j in range(1,i+1):
        print("*",end="")
    print()
    
for i in range(1,x):
    for j in range(i,x):
        print("*",end="")
    print()
```

## Submission at 2024-11-22 06:15:30


```
a,b=map(int,input().split())
c=min(a,b)
print((c-a)+(b-c))
```

## Submission at 2024-11-22 06:17:53


```
# write code from scratch
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
frequency=[]
for i in arr:
    frequency.append(h[i])
y=min(frequency)
mini=[]
for i in arr:
    if h[i]==y:
        mini.append(i)
print(max(mini))
```

## Submission at 2024-11-22 06:28:59


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in range arr1:
    for j in range arr2:
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<d:
            arr1.del(i)
print(len(arr1))

        


```

## Submission at 2024-11-22 06:32:10


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in range arr1:
    for j in range arr2:
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            arr1.del(i)
print(len(arr1))

        


```

## Submission at 2024-11-22 06:34:13


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in arr1:

    for j in arr2:
        
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            arr1.del(i)
print(len(arr1))

        


```

## Submission at 2024-11-22 06:36:20


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in arr1:

    for j in arr2:
        
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            arr1[i]=-1
ans=0
for i in arr1:
    if i!=-1:
        ans+=1
print(ans)


        


```

## Submission at 2024-11-22 06:43:57


```
# write code from scratch
x=int(input())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
cnt=0
for i in arr:
    if h[i]>=2:
        cnt+=1
print(cnt)
```

## Submission at 2024-11-22 06:46:01


```
# write code from scratch
x=int(input())
arr=list(map(int,input().split()))
cnt=0
for i in range(x):
    for j in range(i+1,x):
        if arr[i]==arr[j]:
            cnt+=1
print(cnt)
```

## Submission at 2024-11-22 06:56:51


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in arr1:

    for j in arr2:
        
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            i=-1
ans=0
for i in arr1:
    if i!=-1:
        ans+=1
print(arr1)
```

## Submission at 2024-11-22 07:04:37


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in arr1:

    for j in arr2:
        
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            arr1[i]=-1
ans=0
for i in arr1:
    if i!=-1:
        ans+=1
print(ans-1)
```

## Submission at 2024-11-22 07:04:38


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in arr1:

    for j in arr2:
        
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            arr1[i]=-1
ans=0
for i in arr1:
    if i!=-1:
        ans+=1
print(ans-1)
```

## Submission at 2024-11-22 07:04:39


```
x,k,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
for i in arr1:

    for j in arr2:
        
        diff=i-j
        if diff<0:
            diff*=-1
        if diff<=d:
            arr1[i]=-1
ans=0
for i in arr1:
    if i!=-1:
        ans+=1
print(ans-1)
```

## Submission at 2024-11-22 07:08:10


```
x=int(input())
arr=list(map(int,input().split()))
cnt=0
for i in range(x):
    for j in range(i+1,x):
        if arr[i]==arr[j]:
            cnt+=1
print(cnt)
```

## Submission at 2024-11-28 04:39:48


```
# write code from scratch
n,k=map(int,input().split())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
for i in arr:
    if h[i]>=k:
        print(i)
        break
```

## Submission at 2024-11-28 04:41:03


```
# write code from scratch
n,k=map(int,input().split())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
flag=False
for i in arr:
    if h[i]>=k:
        print(i)
        Flag=True
if not flag:
    print("-1")
        

```

## Submission at 2024-11-28 04:41:21


```
# write code from scratch
n,k=map(int,input().split())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
flag=False
for i in arr:
    if h[i]>=k:
        print(i)
        Flag=True
        break
if not flag:
    print("-1")
        

```

## Submission at 2024-11-28 04:42:09


```
# write code from scratch
n,k=map(int,input().split())
arr=list(map(int,input().split()))
h={}
for i in arr:
    if i in h:
        h[i]+=1
    else:
        h[i]=1
flag=False
for i in arr:
    if h[i]>=k:
        print(i)
        flag=True
        break
if flag==False:
    print("-1")
        

```

