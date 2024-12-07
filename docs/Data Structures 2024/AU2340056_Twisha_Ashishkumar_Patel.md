## Submission at 2024-08-09 04:50:40


```
# Write your Python code here from the scratch
a= input()
print("Hello "+a+"!")
```

## Submission at 2024-08-09 05:02:59


```
a=int(input())
for i in range(0,a):
        n=input() 
        print("Hello "+n+"!")   
```

## Submission at 2024-08-09 05:09:55


```

a= input()
print("Hello "+a+"!")
```

## Submission at 2024-08-09 05:11:07


```

a= input()
print("Hello "+a+"!")
```

## Submission at 2024-08-09 05:17:22


```
# Write your Python code here
a=int(input())
for i in range(a):
    n=input()
    print("Hello "+n+"!")
```

## Submission at 2024-08-20 04:34:43


```
def fibonacci(x:int) -> int:
    if x==0:
        return 0
    if x==1:
        return 1
    else:
        return fibonacci(x-1)+fibonacci(x-2)
    

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-20 05:10:55


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "true"
    if (n<=0 or n%2!=0):
        return "false"

    return  is_power_of_two(n/2)
    
        

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:18:51


```
def combine(n, k):
    ans = []
    def backtrack(first, combo):
        if len(combo) == k:
            ans.append(combo.copy())
            return 
        for i in range(first, n + 1):
            combo.append(i)
            backtrack(i + 1, combo)
            combo.pop()
    
    backtrack(1, [])
    return ans

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

## Submission at 2024-08-22 06:34:25


```
def generateParenthesis(n):
    def backtrack(first, left, right):
        
        if len(first) == 2 * n:
            result.append(first)
            return
        
        if left < n:
            backtrack(first + "(", left + 1, right)
        
        if right < left:
            backtrack(first + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    
    n = int(input())
    
    
    result = generateParenthesis(n)
    
    
    final_result = "[" + ",".join(f'"{first}"' for first in result) + "]"
    
    
    print(final_result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 11:46:14


```
from typing import List

def permute(nums: List[int]) -> List[List[int]]:
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    result.sort()
    
    return result

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    

    final_result = "[" + ",".join("[" + ",".join(map(str, perm)) + "]" for perm in result) + "]"
    
    print(final_result)

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-22 11:46:30


```
from typing import List

def permute(nums: List[int]) -> List[List[int]]:
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    result.sort()
    
    return result

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    

    final_result = "[" + ",".join("[" + ",".join(map(str, perm)) + "]" for perm in result) + "]"
    
    print(final_result)

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-22 11:48:21


```
from typing import List

def permute(nums: List[int]) -> List[List[int]]:
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    result.sort()
    
    return result

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    

    final_result = "[" + ",".join("[" + ",".join(map(str, perm)) + "]" for perm in result) + "]"
    
    print(final_result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-23 10:55:40


```
def arr_equal(arr1,arr2):
    arr1.sort
    arr2.sort
    
    return arr1.sort==arr2.sort

length1, length2 = map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

result = arr_equal(arr1,arr2)
print(str(result).lower())
```

## Submission at 2024-08-23 10:58:25


```
def arr_equal(arr1,arr2):
    arr1_sort = sorted(arr1)
    arr2_sort = sorted(arr2)

    return arr1.sort()==arr2.sort()

length1, length2 = map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

result = arr_equal(arr1,arr2)
print(str(result).lower())
```

## Submission at 2024-08-23 11:03:43


```
def arr_equal(arr1,arr2):
    arr1_sort = sorted(arr1)
    arr2_sort = sorted(arr2)

    return arr1_sort==arr2_sort

length1, length2 = map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

result = arr_equal(arr1,arr2)
print(str(result).lower())
```

## Submission at 2024-08-23 11:03:59


```
def arr_equal(arr1,arr2):
    arr1_sort = sorted(arr1)
    arr2_sort = sorted(arr2)

    return arr1_sort==arr2_sort

length1, length2 = map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

result = arr_equal(arr1,arr2)
print(str(result).lower())
```

## Submission at 2024-08-23 11:05:32


```
def arr_equal(arr1,arr2):
    arr1_sort = sorted(arr1)
    arr2_sort = sorted(arr2)

    return arr1_sort==arr2_sort

length1, length2 = map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

result = arr_equal(arr1,arr2)
print(str(result).lower())
```

## Submission at 2024-08-23 11:23:21


```
try:
    n = int(input())
    k = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            k += i
    print(k)
except EOFError:
    print("No input provided. Exiting.")
    exit()

```

## Submission at 2024-08-23 12:07:59


```
try:
    n = int(input())
    arr = list(map(int, input().split))
    cnt=0

    for i in range(n):
        num = arr[i]
        num_str = str(num)
        if (len(str(num))%2 == 0):
            cnt=cnt+1
    print(cnt)
except EOFError:
    print("No input provided. Exiting.")
    exit()
```

## Submission at 2024-08-23 12:09:45


```
try:
    n = int(input())
    arr = list(map(int, input().split()))
    cnt=0

    for i in range(n):
        num = arr[i]
        num_str = str(num)
        if (len(str(num))%2 == 0):
            cnt=cnt+1
    print(cnt)
except EOFError:
    print("No input provided. Exiting.")
    exit()
```

## Submission at 2024-08-28 11:50:28


```
n,k = list(map(int,input().split()))
arr = list(map(int,input().split()))

missing_num = 0
i = 0
current_num = 1

while missing_num<k:
    if i<n and arr[i]==current_num:
        i+=1
    else:
        missing_num+=1
    current_num+=1
print(current_num-1)
```

## Submission at 2024-08-28 11:52:15


```
n,k = list(map(int,input().split()))
arr = list(map(int,input().split()))

missing_num = 0
i = 0
current_num = 1

while missing_num<k:
    if i<n and arr[i]==current_num:
        i+=1
    else:
        missing_num+=1
    current_num+=1
print(current_num-1)
```

## Submission at 2024-08-29 05:33:28


```
n = int(input())
arr = list(map(int,input().split()))

while len(arr)>1:
    new_arr = []
    for i in range(len(arr)-1):
        new_arr.append(arr[i]+arr[i+1])
    arr = new_arr
print(arr[0])
```

## Submission at 2024-08-29 06:25:51


```
m,n = map(int,input().split())
matrix = []

for i in range(m):
        row = list(map(int,input().split()))
        matrix.append(row)

for i in range(n):
        for j in range(m):
                print(matrix[j][i],end=' ')
        print()
```

## Submission at 2024-08-29 10:11:43


```
def spiral_traversal(matrix):
    if not matrix:
        return []

    result = []
    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1

        
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1

        if top <= bottom:
           
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1

        if left <= right:
           
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

spiral_order = spiral_traversal(matrix)

print(" ".join(map(str, spiral_order)))

```

## Submission at 2024-08-30 05:02:42


```
s = str(input())
cnt = 0
def palindrome(s):

    for i in range(len(s)):
        if (i = len(s)-i):
            cnt+=1

    if cnt<1 :
        print("YES")
    else:
        print("NO")

print(palindrome(s))
```

## Submission at 2024-08-30 05:16:20


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    x,n = map(int,input().split())
    if n>0:
        for i in range(n-1):
            a = 0
            ans = x*x
            a = a+ans
        return a
    else if n=0:
        print("1")
    else:
        n = -1/n
        

```

## Submission at 2024-08-30 05:22:12


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    current = head
    prev = None
    next_Node = 0

    while current!=None:
        next_Node = current.next
        current.next = prev
        prev = current
        current = next_Node

    return prev


```

## Submission at 2024-08-30 05:38:32


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int,input().split()))
c = []

for i in range(n):
    if (a[i]>b[i]):
        c.append(a[i])

    else:

        c.append(b[i])
print(c)
```

## Submission at 2024-08-30 05:45:37


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int,input().split()))
c = []


for i in range(n):
    if (a[i]>b[i]):
        c.append(a[i])

    else:
        c.append(b[i])

print(c)
```

## Submission at 2024-08-30 06:08:21


```
s = list(map(str,input().split()))


def palindrome(s):
    cnt = 0

    for i in range(len(s)):
        if (s[i] == s[len(s)-i]):
            cnt+=1

    if cnt<1 :
        print("YES")
    else:
        print("NO")

print(palindrome(s))
```

## Submission at 2024-08-30 06:11:45


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int,input().split()))


for i in range(n):
    if (a[i]>b[i]):
        print(a[i],end =" ")

    else:
        print(b[i],end=" ")


```

## Submission at 2024-08-30 06:22:05


```
s = list(map(str,input().split()))


def palindrome(s):
    cnt = 0

    for i in range((len(s)//2)+1):
        if (s[i] == s[len(s)-i]):
            cnt+=1

    if cnt<1 :
        print("YES")
    else:
        print("NO")

print(palindrome(s))
```

## Submission at 2024-09-03 06:52:40


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    
    if n>0:
        ans = 1
        for i in range(n):
            ans*= x
            
        return ans
    elif n==0:
        return 1
    else:
        return 1 / Pow(x,-n)
        
x,n = map(int,input().split())
print(Pow(x,n))        
```

## Submission at 2024-09-03 06:52:57


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    
    if n>0:
        ans = 1
        for i in range(n):
            ans*= x
            
        return ans
    elif n==0:
        return 1
    else:
        return 1 / Pow(x,-n)
        
x,n = map(int,input().split())
print(Pow(x,n))        
```

## Submission at 2024-09-03 06:53:12


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    
    if n>0:
        ans = 1
        for i in range(n):
            ans*= x
            
        return ans
    elif n==0:
        return 1
    else:
        return 1 / Pow(x,-n)
        
x,n = map(int,input().split())
print(Pow(x,n))        
```

## Submission at 2024-09-03 06:53:37


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    
    if n>0:
        ans = 1
        for i in range(n):
            ans*= x
            
        return ans
    elif n==0:
        return 1
    else:
        return 1 / Pow(x,-n)
        
x,n = map(int,input().split())
print(Pow(x,n))        
```

## Submission at 2024-09-03 06:56:28


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int) -> float:
    
    if n>0:
        ans = 1
        for i in range(n):
            ans*= x
            
        return ans
    elif n==0:
        return 1
    else:
        return 1 / Pow(x,-n)
        
x,n = map(int,input().split())
print(Pow(x,n))        
```

## Submission at 2024-09-03 06:56:43


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int) -> float:
    
    if n>0:
        ans = 1
        for i in range(n):
            ans*= x
            
        return ans
    elif n==0:
        return 1
    else:
        return 1 / Pow(x,-n)
        
x,n = map(int,input().split())
print(Pow(x,n))        
```

## Submission at 2024-09-03 06:59:04


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) -> float:
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans
    elif n == 0:
        return 1
    else:
        return 1 / Pow(x, -n)

# Example usage:
x, n = map(int, input("Enter the base and exponent separated by space: ").split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:02:57


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) :
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans
    elif n == 0:
        return 1
    else:
        return 1 / Pow(x, -n)


x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:03:07


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) :
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans
    elif n == 0:
        return 1
    else:
        return 1 / Pow(x, -n)


x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:03:32


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) -> float :
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans
    elif n == 0:
        return 1
    else:
        return 1 / Pow(x, -n)


x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:03:48


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) -> float :
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans
    elif n == 0:
        return 1
    else:
        return 1 / Pow(x,-n)


x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:04:09


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) -> float :
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans
    elif n == 0:
        return 1
    else:
        return 1 / Pow(x,-n)


x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:05:02


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x: int, n: int) -> float :
    if n > 0:
        ans = 1
        for i in range(n):
            ans *= x
        return ans

    elif n == 0:
        return 1
        
    else:
        return 1 / Pow(x,-n)


x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-09-03 07:11:12


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

## Submission at 2024-09-03 07:11:21


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

## Submission at 2024-09-03 07:11:35


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

## Submission at 2024-09-03 07:12:01


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
return pow(x,n)

```

## Submission at 2024-09-03 07:12:38


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
a = pow(x,n)
print(a)
```

## Submission at 2024-09-03 07:13:34


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
a = pow(x,n)
print(a)
```

## Submission at 2024-09-03 07:14:09


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
a = pow(x,n)
print(a)
```

## Submission at 2024-09-03 07:14:31


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

## Submission at 2024-09-03 08:53:29


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        print("YES")

    
    cnt = 0
    for i in range(len(s) // 2):
        if s[i] == s[len(s) - i - 1]:
            cnt += 1

    if cnt>0:
        return "YES"
    else:
        return "NO"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 08:55:46


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        print("YES")

    
    cnt = 0
    for i in range(len(s) // 2):
        if s[i] == s[len(s) - i - 1]:
            cnt += 1
            return "NO"
    return "YES"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 08:56:03


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        print("YES")

    
    cnt = 0
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - i - 1]:
            cnt += 1
            return "NO"
    return "YES"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 08:57:01


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        print("YES")
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - i - 1]:
            return "NO"
    return "YES"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 08:59:20


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        return "YES"
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - i - 1]:
            return "NO"
    return "YES"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 08:59:45


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        return "YES"
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - i - 1]:
            return "NO"
    return "YES"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 08:59:58


```
# Write code from scratch
s = list(map(str,input().split()))


def palindrome(s):
    if len(s)==1:
        return "YES"
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - i - 1]:
            return "NO"
    return "YES"

print(palindrome(s))
    
    
```

## Submission at 2024-09-03 09:01:40


```
# Write code from scratch
def palindrome(s):
    if len(s) == 0:
        return "NO"  # If the input is empty, it's not a palindrome

    if len(s) == 1:
        return "YES"
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:  # Fix the indexing issue
            return "NO"
    return "YES"

s = list(map(str, input().split()))
print(palindrome(s))

    
```

## Submission at 2024-09-03 09:01:58


```
# Write code from scratch
def palindrome(s):
    if len(s) == 0:
        return "NO"  # If the input is empty, it's not a palindrome

    if len(s) == 1:
        return "YES"
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:  # Fix the indexing issue
            return "NO"
    return "YES"

s = list(map(str, input().split()))
print(palindrome(s))

    
```

## Submission at 2024-09-03 09:02:00


```
# Write code from scratch
def palindrome(s):
    if len(s) == 0:
        return "NO"  # If the input is empty, it's not a palindrome

    if len(s) == 1:
        return "YES"
        
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:  # Fix the indexing issue
            return "NO"
    return "YES"

s = list(map(str, input().split()))
print(palindrome(s))

    
```

## Submission at 2024-09-03 09:03:59


```
# Write code from scratch
def palindrome(s):
    if len(s) == 0:
        return "NO"  # If the input is empty, it's not a palindrome

    if len(s) == 1:
        return "YES"
        
    for i in range((len(s) // 2)+1):
        if s[i] != s[len(s) - 1 - i]:  # Fix the indexing issue
            return "NO"
    return "YES"

s = list(map(str, input().split()))
print(palindrome(s))

    
```

## Submission at 2024-09-03 09:07:33


```
def palindrome(s):
    if len(s) == 0:
        return "NO"  # Handle empty input case

    if len(s) == 1:
        return "YES"  # Single element is a palindrome

    # Check for palindrome by comparing elements
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:
            return "NO"  # Return "NO" if any mismatch found

    return "YES"  # If all checks pass, it's a palindrome

# Read input
s = input().split()

# Print the result
print(palindrome(s))

```

## Submission at 2024-09-03 09:07:50


```
def palindrome(s):
    if len(s) == 0:
        return "NO"  # Handle empty input case

    if len(s) == 1:
        return "YES"  # Single element is a palindrome

    # Check for palindrome by comparing elements
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:
            return "NO"  # Return "NO" if any mismatch found

    return "YES"  # If all checks pass, it's a palindrome

# Read input
s = input().split()

# Print the result
print(palindrome(s))

```

## Submission at 2024-09-03 09:09:39


```
def palindrome(s):
    if len(s) == 0:
        return "NO"  # Handle empty input case

    if len(s) == 1:
        return "YES"  # Single element is a palindrome

    # Check for palindrome by comparing elements
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:
            return "NO"  # Return "NO" if any mismatch found

    return "YES"  # If all checks pass, it's a palindrome

# Read input
s = input().split()

# Print the result
print(palindrome(s))


```

## Submission at 2024-09-03 09:10:02


```
def palindrome(s):
    if len(s) == 0:
        return "NO"  # Handle empty input case

    if len(s) == 1:
        return "YES"  # Single element is a palindrome

    # Check for palindrome by comparing elements
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:
            return "NO"  # Return "NO" if any mismatch found

    return "YES"  # If all checks pass, it's a palindrome

# Read input
s = input().split()

# Print the result
print(palindrome(s))


```

## Submission at 2024-09-03 09:22:32


```
def palindrome(s):
    if len(s) == 0:
        return "NO"  # Handle empty input case

    if len(s) == 1:
        return "YES"  # Single element is a palindrome

    # Check for palindrome by comparing elements
    for i in range(len(s) // 2):
        if s[i] != s[len(s) - 1 - i]:
            return "NO"  # Return "NO" if any mismatch found

    return "YES"  # If all checks pass, it's a palindrome

# Read input
s = input().split()

# Print the result
print(palindrome(s))


```

## Submission at 2024-09-03 09:31:08


```
def palindrome(s):
    if len(s) == 0:
        return "NO"  # Handle empty input case

    
    for i in range(len(s) // 2):
            if s[i] != s[len(s) - 1 - i]:
                return "NO"  # Return "NO" if any mismatch found

            else:
                return "YES"  # If all checks pass, it's a palindrome

# Read input
s = input().split()

# Print the result
print(palindrome(s))

```

## Submission at 2024-09-06 05:03:23


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n=map(int,input().split())
def pow(x,n):
    if n==0:
        return 1

    if n==1:
        return x
    
a=pow(x,n)
print(a)
```

## Submission at 2024-09-06 05:04:36


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    x,n = map(int,input().split())
    if n>0:
        for i in range(n-1):
            a = 0
            ans = x*x
            a = a+ans
        return a
    if n=0:
        print("1")
    
```

## Submission at 2024-09-06 05:05:14


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    x,n = map(int,input().split())
    if n>0:
        for i in range(n-1):
            a = 0
            ans = x*x
            a = a+ans
        print(a)
    if n=0:
        print("1")
    
```

## Submission at 2024-09-27 10:56:05


```
def fibonacci(x:int) -> int:
    if x==0:
        return 0
    if x==1:
        return 1
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

## Submission at 2024-09-27 10:59:44


```
def fibonacci(x:int) -> int:
    while x>=0:    
        if x==0:
            return 0
        if x==1:
            return 1
        else:
            return fibonacci(x-1) + fibonacci(x-2) 

        return x
    return None

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-27 11:07:55


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "true"
    if (n<=0 or n%2!=0):
        return "false"
    
    return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-27 11:30:11


```
def subsets(nums):
    result = [[]]
    
    for num in nums:
        result += [curr + [num] for curr in result]

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

## Submission at 2024-10-04 05:12:00


```
def tickets(n:int,k:int)->int
    queue = []
    for i in range(n):
        ticket = queue[i] - 1
        queue.remove(queue[i])
        queue.append(ticket)

        

```

## Submission at 2024-10-04 05:20:36


```
def tickets(n:int,k:int)->int
    queue = []
    cnt = 0

    for i in range(n):
        ticket = queue[i] - 1
        queue.remove(queue[i])

        if ticket > 0:
            cnt+=1
            queue.append(ticket)
        return cnt
        
        

        

```

## Submission at 2024-10-04 05:24:38


```
def valid_anagram(t:str,s:str)->bool
    if len(t)==len(s):
        print(true)

    else:
        print(false)
```

## Submission at 2024-10-04 05:25:49


```
s = str(input())
t = str(input())

    if len(t)==len(s):
        print(true)

    else:
        print(false)
```

## Submission at 2024-10-04 05:26:38


```
s = str(input().split())
t = str(input().split())

    if len(t)==len(s):
        print(true)

    else:
        print(false)
```

## Submission at 2024-10-04 05:27:45


```
    if len(t)==len(s):
        print(true)

    else:
        print(false)
```

## Submission at 2024-10-04 05:29:02


```
def valid_anagram(t:str,s:str)->bool
    if len(t)==len(s):
        print(true)

    else:
        print(false)
```

## Submission at 2024-10-04 05:45:08


```
def Paint_problem(n,k:int)->int
    def canPaint(time):
        paint,currtime = 1, time

        for board in n:
            if currtime-board <0:
                paint+=1
                currtime=time

        return paint<=k

    

```

## Submission at 2024-10-04 06:06:50


```
def dailyTemp(in int:n)->int

    answer = []
    cnt=0
    for i in range(n+1):
        maxTemp = answer[i]

        for j in range(1,n): 
            if answer[j]>maxTemp:
                cnt+=1
            return cnt
        return 0

            


```

## Submission at 2024-10-04 06:20:46


```
def MinBloomday(n,m,k:int)->int
    if m*k > n:
        return -1

    else:
        l,h = max(n),sum(n)
        mid = l+h//2

        
```

## Submission at 2024-10-04 06:24:34


```
def MinBloomday(n,m,k:int)->int
    
    def Bloom(time):
        bouquet,currtime = 1, time

        for board in n:
            if currtime-board <0:
                bouquet+=1
                currtime=time

        return bouquet<=k

    if m*k > n:
        return -1

    else:
        l,h = max(n),sum(n)
        mid = l+h//2
```

## Submission at 2024-10-25 05:47:31


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
  if root is None:
    return ans

  def post(node):
      if node is None:
        return
      post(node.left)
      post(node.right)
      ans.append(node.val)
  post(root)
  return ans


```

## Submission at 2024-10-25 06:27:36


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
    return (isSymmetric(root1.left,root2.right) and isSymmetric(root1.right,root2.left))
```

## Submission at 2024-10-25 06:27:37


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
    return (isSymmetric(root1.left,root2.right) and isSymmetric(root1.right,root2.left))
```

## Submission at 2024-10-25 06:43:05


```
n = str(input())
m = str(input())

if n!=m:
    print("false")

else:
    print("true")
```

## Submission at 2024-10-25 06:43:06


```
n = str(input())
m = str(input())

if n!=m:
    print("false")

else:
    print("true")
```

## Submission at 2024-10-25 06:55:40


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
  if root is None:
    return ans

    



    
```

## Submission at 2024-10-25 06:56:57


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
  if root is None:
    return []

    



    
```

## Submission at 2024-10-25 07:01:53


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
    return (isSymmetric(root1.left,root2.right) and isSymmetric(root1.right,root2.left))
```

## Submission at 2024-10-25 07:01:56


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
    return (isSymmetric(root1.left,root2.right) and isSymmetric(root1.right,root2.left))
```

## Submission at 2024-10-25 07:03:23


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    isSymmetric(root1,root2)
```

## Submission at 2024-10-25 07:03:24


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    isSymmetric(root1,root2)
```

## Submission at 2024-10-25 07:03:50


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return isSymmetric(root1,root2)
```

## Submission at 2024-10-25 07:04:44


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return isSymmetric(root1,root2)
```

## Submission at 2024-10-25 07:04:46


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return isSymmetric(root1,root2)
```

## Submission at 2024-11-08 05:08:54


```

'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return symm(root,root)
```

## Submission at 2024-11-08 05:10:22


```

'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root is None:
            return True
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.val!=root2.val:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return symm(root,root)
```

## Submission at 2024-11-08 05:12:01


```

'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root is None:
            return True
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.data!=root2.datal:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return symm(root,root)
```

## Submission at 2024-11-08 05:12:15


```

'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root is None:
            return True
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.data!=root2.data:
                return False
        
        return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
    return symm(root,root)
```

## Submission at 2024-11-08 11:33:34


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
  if root is None:
    return ans

  def post(node):
      if node is None:
        return
      post(node.left)
      post(node.right)
      ans.append(node.data)
  post(root)
  return ans

```

## Submission at 2024-11-08 11:40:18


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root is None:
            return True
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.data!=root2.data:
                return False
        
        return (symm(root1.left==root2.right) and symm(root1.right==root2.left))
    return symm(root,root)
```

## Submission at 2024-11-08 11:43:55


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root is None:
            return True
        def symm(root1,root2):
            if root1 is None and root2 is None:
                return True
            
            if root1 is None or root2 is None:
                return False
            
            if root1.data!=root2.data:
                return False
        
            return (symm(root1.left,root2.right) and symm(root1.right,root2.left))
        return symm(root,root)
```

## Submission at 2024-11-15 05:02:24


```
# Input number of people in the queue
n = int(input())

# Input list of ticket requirements for each person
tickets = list(map(int, input().split()))
# Input the index position of the person of interest
k = int(input())

# Initialize total time counter
time = 0

# Process the queue until the person at position k has bought all their tickets
for i in range(n):
    # Add the minimum of tickets[i] and tickets[k] to time for each person
    # to account for the number of seconds they'd need before the k-th person is done
    if i <= k:
        time += min(tickets[i], tickets[k])
    else:
        time += min(tickets[i], tickets[k] - 1)

print(time)
```

## Submission at 2024-11-22 05:05:29


```
n = int(input())
a = list(map(int, input().split()))

score = []
cnt = 0
for i in range(n-1):
    for j in range(1,n):
        if a[i]==a[j]:
            cnt+=1
        else:
            cnt=0
    score.append(cnt)
print(max(score))
```

## Submission at 2024-11-22 05:06:36


```
n = int(input())
a = list(map(int, input().split()))

score = []
cnt = 0
for i in range(n):
    for j in range(1,n-1):
        if a[i]==a[j]:
            cnt+=1
        else:
            cnt=0
    score.append(cnt)
print(max(score))
```

## Submission at 2024-11-22 05:10:42


```
n = int(input())
a = list(map(int, input().split()))

score = []
cnt = 0
for i in range(n):
    for j in range(i+1,n-1):
        if a[i]==a[j]:
            cnt+=1
        else:
            cnt=0
    score.append(cnt)
print(max(score))
```

## Submission at 2024-11-22 05:12:36


```
n = int(input())
a = list(map(int, input().split()))

score = []
cnt = 0
for i in range(n-1):
    for j in range(i+1,n):
        if a[i]==a[j]:
            cnt+=1
        else:
            cnt=0
    score.append(cnt)
print(max(score))
```

## Submission at 2024-11-22 05:15:39


```
n = int(input())
a = list(map(int, input().split()))

score = []
cnt = 0
for i in range(n):
    for j in range(i+1,n):
        if a[i]==a[j]:
            cnt+=1
        else:
            cnt=0
    score.append(cnt)
print(max(score))
```

## Submission at 2024-11-22 05:18:55


```
n = int(input())
a = list(map(int, input().split()))

score = []
cnt = 0
for i in range(n):
    for j in range(i+1,n):
        if a[i]==a[j]:
            cnt+=1
       
    score.append(cnt)
print(max(score))
```

## Submission at 2024-11-22 05:48:18


```
a,b = map(int,input().split())

c = a-b
d = (c-a) + (b-c)

print(d)
```

## Submission at 2024-11-22 05:51:36


```
n = int(input())
arr = list(map(int, input().split()))
cnt = 0

for i in range(n):
    cnt = cnt + arr[i]

print(cnt)
```

## Submission at 2024-11-22 05:57:02


```
m,n,d = map(int,input().split())

arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
cnt = 0

for i in range(m):
    for j in range(n):
        if arr1[i] >= arr2[j]:
            s = arr1[i] - arr2[j]
            if s<=d:
                break
        else:
            s = arr2[j] - arr1[i]
            if s<=d:
                break

        cnt+=1
print(cnt)
```

## Submission at 2024-11-22 06:36:15


```
n = int(input())
a = list(map(int,input().split()))

hashmap = {}
arr= []
for i in a:
    if i in hashmap:
        hashmap[i]+=1

    else:
        hashmap[i] = 1

if hashmap[i]==1:
    arr.append(i)
print(max(arr))

    
```

## Submission at 2024-11-22 06:40:39


```
n = int(input())
a = list(map(int,input().split()))

hashmap = {}
arr= []
for i in a:
    if i in hashmap:
        hashmap[i]+=1

    else:
        hashmap[i] = 1

    if hashmap[i]==1:
        arr.append(i)
    print(max(arr))

    
```

## Submission at 2024-11-22 06:41:53


```
n = int(input())
a = list(map(int,input().split()))

hashmap = {}
arr= []
for i in a:
    if i in hashmap:
        hashmap[i]+=1

    else:
        hashmap[i] = 1

if hashmap[i]==1:
    arr.append(i)
print(max(arr))

    
```

## Submission at 2024-11-22 06:43:24


```
n = int(input())
a = list(map(int,input().split()))

hashmap = {}
arr= []
for i in a:
    if i in hashmap:
        hashmap[i]+=1

    else:
        hashmap[i] = 1

if hashmap[i]==1:
    arr.append(i)
print(max(arr))

    
```

## Submission at 2024-11-22 06:50:04


```
n = int(input())
a = list(map(int,input().split()))

hashmap = {}
arr= []
for i in a:
    if i in hashmap:
        hashmap[i]+=1

    else:
        hashmap[i] = 1

if hashmap[i]==1:
    arr.append(i)
print(max(arr))

else:
print(0)


```

## Submission at 2024-11-22 06:54:52


```
n = int(input())
a = list(map(int,input().split()))

hashmap = {}
arr= []
for i in a:
    if i in hashmap:
        hashmap[i]+=1

    else:
        hashmap[i] = 1

if hashmap[i]==1:
    arr.append(i)
print(max(arr))

else:
    print(None)
```

## Submission at 2024-11-22 07:01:28


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
       if root is None:
            return[]

        node_trav(node):

            if node is None:
                return
        
            if node.left>node.data or node.right<node.data:
                return False

            else:
                return True
        return node_trav(root)
```

## Submission at 2024-11-22 07:04:56


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
        node = root
        
        if node.left>node.data or node.right<node.data:
            return False

        else:
            return True
        
```

## Submission at 2024-11-22 07:07:41


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
        node = root

        if node.left>node.data or node.right<node.data:
            return False

        
    return True
        
```

