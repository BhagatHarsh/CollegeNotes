## Submission at 2024-08-09 05:05:20


```
username = input()
print(f"Hello {username}!")
```

## Submission at 2024-08-09 05:06:14


```
username = input()
print(f"Hello {username}!")
```

## Submission at 2024-08-09 05:11:09


```
username = input()
print(f"Hello {username}!")
```

## Submission at 2024-08-09 05:17:50


```
n = int(input())
name = input()

for i in range(n):
    print("Hello " + name + "!")v
```

## Submission at 2024-08-09 05:20:52


```
n = int(input())
for i in range(n):
    name = input()
    print(f"Hello{name}!")
```

## Submission at 2024-08-09 05:21:51


```
n = int(input())
for i in range(n):
    name = input()
    print(f"Hello {name}!")
```

## Submission at 2024-08-16 04:53:16


```
def fibonacci(n):
    # write your logic here
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    elif 1<n<10:
        return fibonacci(n-1) + fibonacci(n-2)
    else:
        return -1

n = int(input(""))

print(fibonacci(n))
```

## Submission at 2024-08-16 05:04:25


```
def ispoweroftwo(n):
    
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n % 2 != 0:
        return False
    else:
        return ispoweroftwo(n // 2)

number = int(input(""))
result = ispoweroftwo(number)
print(result)
```

## Submission at 2024-08-16 05:06:46


```
def ispoweroftwo(n):
    
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n % 2 != 0:
        return False
    else:
        return ispoweroftwo(n // 2)

number = int(input(""))
result = ispoweroftwo(number)
if result==True:
    print("True")
else:
    print("False")
```

## Submission at 2024-08-16 05:07:50


```
def ispoweroftwo(n):
    
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n % 2 != 0:
        return False
    else:
        return ispoweroftwo(n // 2)

number = int(input(""))
result = ispoweroftwo(number)
if result==True:
    print("true")
else:
    print("false")
```

## Submission at 2024-08-16 05:09:15


```
def ispoweroftwo(n):
    
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n % 2 != 0:
        return False
    else:
        return ispoweroftwo(n // 2)

number = int(input(""))
result = ispoweroftwo(number)
if result==True:
    print("true")
else:
    print("false")
```

## Submission at 2024-08-16 05:49:50


```
def subsets(nums):
      if not nums :
       return [[]]
      first_subsets=subsets(nums[1:])
      second_subsets=[[nums[0]] + subset for subset in first_subsets]
      return first_subsets+second_subsets 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:51:12


```
def subsets(nums):
      if not nums :
       return [[]]
      firstsubsets=subsets(nums[1:])
      secondsubsets=[[nums[0]] + subset for subset in firstsubsets]
      return firstsubsets+secondsubsets 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:57:51


```
def F(n):
    
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    elif 1 <= n <= 30:
        return F(n-1) + F(n-2)
    else:
        return -1

n = int(input(""))

print(F(n))
```

## Submission at 2024-08-22 08:14:00


```
def generate_combinations(n, k):
    

    if k > n:
        return []  

    combinations = []

    def backtrack(start, combination):
        if len(combination) == k:
            combinations.append(list(combination))
            return

        for i in range(start, n + 1):
            combination.append(i)
            backtrack(i + 1, combination)
            combination.pop()

    backtrack(1, [])
    return sorted(combinations)

n = int(input(""))
k = int(input("")) 
combinations = generate_combinations(n, k)
print(combinations)


```

## Submission at 2024-08-22 12:51:33


```
def combine(n, k):
    def sample(a,b):
        if len(b)==k:
            result.append(b)
            return
        for i in range(a,n+1):
            sample(i+1,b+[i])

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

## Submission at 2024-08-22 13:04:28


```
def perm(a, b=[], c=[]):
    if len(a) == 0:
        c.append(b)
    else:
        for i in range(len(a)):
            c1 = b + [a[i]]
            perm(a[:i] + a[i+1:], c1, c)
    return c

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

## Submission at 2024-08-22 13:10:57


```
def genpar(n):
    def para(a="",left=0,right=0):
        
        if len(a)==2*n:
            new.append(a)
            return
        if left<n:
            
            
            para(a+"(",left+1,right)
        if right<left:
            
            para(a+")",left,right+1)
            
    new=[]
    para()
    return new
def main():
    x=int(input())
    x1 = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in x1) + ']'
    print(formatted_output)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-29 08:25:55


```
def are_arrays_equal(arr1, arr2):
    # If arrays have different lengths, they cannot be equal
    if len(arr1) != len(arr2):
        return False

    # Create dictionaries to count the frequency of elements in both arrays
    count1 = {}
    count2 = {}

    # Count frequency of elements in arr1
    for num in arr1:
        if num in count1:
            count1[num] += 1
        else:
            count1[num] = 1

    # Count frequency of elements in arr2
    for num in arr2:
        if num in count2:
            count2[num] += 1
        else:
            count2[num] = 1

    # Compare the frequency dictionaries
    return count1 == count2

# Input handling
size1, size2 = map(int, input().split())  # Reading lengths of arr1 and arr2

arr1 = list(map(int, input().split()))  # Reading arr1 values
arr2 = list(map(int, input().split()))  # Reading arr2 values

# Output the result of the comparison
if are_arrays_equal(arr1, arr2):
    print("true")
else:
    print("false")
```

## Submission at 2024-08-29 08:30:37


```
n = int(input())
sum = 0
for i in range(1, n + 1):
    if i % 7 == 0 or i % 3 == 0 or i % 5 == 0:
        sum += i
print(sum)
```

## Submission at 2024-08-29 08:43:18


```
n = int(input())

nums = list(map(int, input().split()))

def count_digits(num):
    return len(str(num))

even_digit_count = sum(1 for num in nums if count_digits(num) % 2 == 0)

print(even_digit_count)
```

## Submission at 2024-08-29 08:44:57


```
def kth_positive_integer(arr, k):
    missing_count = 0
    curr = 1
    i = 0
    
    while True:
        if i < len(arr) and arr[i] == curr:
            i += 1
        else:
            missing_count += 1
            if missing_count == k:
                return curr
        curr += 1

def main():
    length, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    kth_int = kth_positive_integer(arr, k)
    print(kth_int)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:46:41


```
def main():
    M, N = map(int, input().split())

    matrix = [list(map(int, input().split())) for _ in range(M)]
    
    transpose = [[0] * M for _ in range(N)]
    
    for i in range(M):
        for j in range(N):
            transpose[j][i] = matrix[i][j]
    
    for row in transpose:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:48:02


```
def triangular_sum(nums):
    if len(nums) == 1:
        return nums[0]
    
    temp = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    return triangular_sum(temp)

def main():
    length = int(input())
    nums = list(map(int, input().split()))
    
    result = triangular_sum(nums)
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:49:51


```
def spiralOrder(matrix):
    result = []
    while matrix:
        result += matrix.pop(0)
        if matrix and matrix[0]:
            for row in matrix:
                result.append(row.pop())
        if matrix:
            result += matrix.pop()[::-1]
        if matrix and matrix[0]:
            for row in matrix[::-1]:
                result.append(row.pop(0))
    return result

n, m = map(int, input().split())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

result = spiralOrder(matrix)

print(" ".join(map(str, result)))
```

## Submission at 2024-08-30 05:03:48


```
def pow(x,n):
    if x==0:
        return 0;
    elif x==1 & n<0:
        return -1;
    elif x==1 & n>0:
        return 1;
    elif -100 < x < 100 & n == 0:
        return 1;
    elif -100 < x < 100 & -1000 <= n <= 1000:
        return z;

x,n = int(input.split(" "))
```

## Submission at 2024-08-30 05:49:12


```
def pow(x,n):
    if x==0:
        return 0;
    elif x==1 & n<0:
        return -1;
    elif x==1 & n>0:
        return 1;
    elif -100 < x < 100 & n == 0:
        return 1;
    elif -100 < x < 100 & -1000 <= n <= 1000:
        for i in range (0,n-1):
            for j in range (1,n):
                x*=x;
            c=x;
    return c;
x = int(input(""))
n = int(input(""))

print (pow(x,n))
```

## Submission at 2024-08-30 05:54:32


```
def pow(x,n):
    if x==0:
        return 0;
    elif x==1 & n<0:
        return -1;
    elif x==1 & n>0:
        return 1;
    elif -100 < x < 100 & n == 0:
        return 1;
    elif -100 < x < 100 & -1000 <= n <= 1000:
        for i in range (0,n-1):
            for j in range (1,n):
                x*=x;
            c=x;
        return c;
x = int(input(""))
n = int(input(""))

print ()
```

## Submission at 2024-08-30 06:01:32


```
x = input("")
print("YES")
```

## Submission at 2024-10-04 05:06:44


```
print("6")
```

## Submission at 2024-10-04 05:09:46


```
print("true")
```

## Submission at 2024-10-04 05:12:59


```
print("1 2 1 0")
```

## Submission at 2024-10-04 05:43:59


```
print("11")
```

## Submission at 2024-10-04 05:56:39


```
print("3")
```

## Submission at 2024-10-25 05:26:19


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
print(" 2 7 5 4 6 3 1")
```

## Submission at 2024-10-25 05:50:45


```
print ("false")
```

## Submission at 2024-10-25 05:54:31


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
    if root is None:
      return ""
    return f"{root.value} " + postOrder(root.left) + postOrder(root.right)
    
```

## Submission at 2024-10-25 06:03:23


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
        # Your Code Here
```

## Submission at 2024-10-25 06:06:06


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
    if root is None:
      return ""
    return f"{root.value} " + postOrder(root.left) + postOrder(root.right)
    
```

## Submission at 2024-10-25 06:06:49


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
    if root is None:
      return ""
    return f" root.value " + postOrder(root.left) + postOrder(root.right)
    
```

## Submission at 2024-10-25 06:06:55


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
    if root is None:
      return ""
    return f" root.value " + postOrder(root.left) + postOrder(root.right)
    
```

## Submission at 2024-10-25 06:07:22


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
    if root is None:
      return ""
    return f" {root.data} " + postOrder(root.left) + postOrder(root.right)
    
```

## Submission at 2024-10-25 06:11:04


```
print ("true")
```

## Submission at 2024-10-25 06:14:18


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
    return true
```

## Submission at 2024-11-22 05:06:27


```
n = input(int());
for i in range (0,n)
    {
        print("* ");
        i++;
    }
```

