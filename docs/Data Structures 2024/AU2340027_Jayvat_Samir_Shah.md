## Submission at 2024-08-09 04:47:41


```
n=input("Enter your name:")
print("Hello ",n,"!")
```

## Submission at 2024-08-09 04:49:00


```
n=input("Enter your name:")
print("Hello ",n,"!")
```

## Submission at 2024-08-09 04:50:20


```
n=input()
print("Hello",n,"!")
```

## Submission at 2024-08-09 04:51:24


```
n=input()
print("Hello ",n,"!")
```

## Submission at 2024-08-09 04:52:36


```
n=input()
print("Hello "+n+"!")
```

## Submission at 2024-08-09 05:01:05


```
g=int(input())
n=input()
n1=input()
n2=input()
print("Hello "+n+"!")
print("Hello "+n1+"!")
print("Hello "+n2+"!")
```

## Submission at 2024-08-09 05:02:13


```
g=int(input())
n=input()
n1=input()
n2=input()
print("Hello "+n+"!")
print("Hello "+n1+"!")
print("Hello "+n2+"!")
```

## Submission at 2024-08-09 05:02:41


```
g=int(input())
n=input()
n1=input()
n2=input()
print("Hello "+n+"!")
print("Hello "+n1+"!")
print("Hello "+n2+"!")
```

## Submission at 2024-08-09 05:03:18


```
g=input()
n=input()
n1=input()
n2=input()
print("Hello "+n+"!")
print("Hello "+n1+"!")
print("Hello "+n2+"!")
```

## Submission at 2024-08-09 05:05:45


```
n=input()
print("Hello "+n+"!")
```

## Submission at 2024-08-09 05:08:57


```
n=int(input())
for i in range(0,n):
    g=input()
    print("Hello "+g+"!")
```

## Submission at 2024-08-16 04:50:38


```
n=int(input())
def fibonacci(x):
    if x<=1:
        return x
    else:
        return (fibonacci(x-1)+fibonacci(x-2)) 

def main():
    if n<0:
        print("Input a positive number")
    else:
        print(fibonacci(n))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:03:52


```
x=int(input())
def is_power_of_two(n):
    if n==2:
        print("true")
    elif n>2:
        n=n/2
        is_power_of_two(n)
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:09:19


```
x=int(input())
def is_power_of_two(n):
    if n==2:
        print("true")
    elif n>2:
        n=n/2
        if n%2==0:
            is_power_of_two(n)
        else:
            print("false")
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:10:05


```
x=int(input())
def is_power_of_two(n):
    if n==2:
        print("true")
    elif n>2:
        n=n/2
        if n%2==0:
            is_power_of_two(n)
        else:
            print("false")
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:20:48


```
x=int(input())
def is_power_of_two(n):
    n=n/2
    if n==2:
        print("true")
    elif n>2:
        if n%2==0:
            is_power_of_two(n)
        else:
            print("false")
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:21:57


```
x=int(input())
def is_power_of_two(n):
    if n==2:
        print("true")
    elif n>2:
        n=n/2
        if n%2==0:
            is_power_of_two(n)
        else:
            print("false")
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:26:11


```
x=int(input())
def is_power_of_two(n):
    if n==2:
        print("true")
    elif n>2:
        n=n/2
        if n%2==0:
            is_power_of_two(n)
        else:
            print("false")
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:34:01


```
x=int(input())
def is_power_of_two(n):
    if n==1:
        print("true")
    elif n/2==1:
        print("true")
    elif n>2:
        n=n/2
        if n%2==0:
            is_power_of_two(n)
        else:
            print("false")
    else:
        print("false")

def main():
    is_power_of_two(x)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:51:16


```
def subsets(nums):
    result = []
    
    def backtrack(start, path):
        result.append(path)
        for i in range(start, len(nums)):
            backtrack(i + 1, path + [nums[i]])
    backtrack(0, [])
    
    return result

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

## Submission at 2024-08-16 05:55:40


```
def subsets(nums):
    result = []
    
    def backtrack(start, path):
        result.append(path)
        for i in range(start, len(nums)):
            backtrack(i + 1, path + [nums[i]])
    backtrack(0, [])
    
    return result

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 08:21:03


```
def permute(nums):
    def backtrack(start=0):
        if start == len(n) - 1:
            result.append(n[:])
        for i in range(start, len(n)):
            n[start], n[i] =n[i], n[start]
            backtrack(start + 1)
            n[start], n[i] = n[i], n[start]

    result = []
    n.sort() 
    backtrack()
    return result

n=[1,2,3]
result = permute(n)
for perm in result:
    print(perm)

```

## Submission at 2024-08-22 03:35:06


```
def permute(nums):
    def backtrack(start=0):
        if start == len(nums) - 1:
            result.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)  # Recurse
            nums[start], nums[i] = nums[i], nums[start]  # Swap back to original

    result = []
    nums.sort()  # Ensure the initial order is sorted
    backtrack()
    return result

nums = list(map(int, input().split()))


result = permute(nums)

for perm in result:
    print(perm)

```

## Submission at 2024-08-22 03:58:14


```
def permute(nums):
    def backtrack(start=0):
        if start == len(nums) - 1:
            result.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)  # Recurse
            nums[start], nums[i] = nums[i], nums[start]  # Swap back to original

    result = []
    nums.sort()  # Ensure the initial order is sorted
    backtrack()
    return result

nums = list(map(int, input().split()))


result = permute(nums)

for perm in result:
    print(perm)

```

## Submission at 2024-08-22 04:01:11


```
def permute(nums):
    def backtrack(start=0):
        if start == len(nums) - 1:
            result.append(nums[:])  # Add a copy of the current permutation
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)  # Recurse
            nums[start], nums[i] = nums[i], nums[start]  # Swap back to original

    result = []
    nums.sort() 
    backtrack()
    return result

nums = list(map(int, input().split()))

result = permute(nums)

print(result)

```

## Submission at 2024-08-22 04:05:57


```
def permute(nums):
    def backtrack(start=0):
        if start == len(nums) - 1:
            result.append(nums[:])  # Add a copy of the current permutation
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)  # Recurse
            nums[start], nums[i] = nums[i], nums[start]  # Swap back to original

    result = []
    nums.sort()  # Ensure the initial order is sorted
    backtrack()

    # Interchange the last two elements in the result list
    if len(result) > 1:
        result[-1], result[-2] = result[-2], result[-1]
    
    return result

nums = list(map(int, input().split()))

result = permute(nums)

print(result)

```

## Submission at 2024-08-22 04:16:24


```
def permute(nums):
    def backtrack(start=0):
        if start == len(nums) - 1:
            result.append(nums[:])  # Add a copy of the current permutation
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)  # Recurse
            nums[start], nums[i] = nums[i], nums[start]  # Swap back to original

    result = []
    nums.sort()  # Ensure the initial order is sorted
    backtrack()

    if len(result) > 1:
        result[-1], result[-2] = result[-2], result[-1]
    
    return result

nums = list(map(int, input().split()))
result = permute(nums)

output = str(result).replace(", ", ",")
print(output)

```

## Submission at 2024-08-22 04:21:26


```
def combine(n, k):
    def backtrack(start, path):
        if len(path) == k:
            result.append(path[:])
            return
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
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

## Submission at 2024-08-22 04:27:06


```
def combine(n, k):
    def backtrack(start, end):
        if len(end) == k:
            result.append(end[:])
            return
        for i in range(start, n + 1):
            end.append(i)
            backtrack(i + 1, end)
            end.pop()

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

## Submission at 2024-08-22 04:46:42


```
def Parantheses(n):
    def backtrack(a, start, end):
        if len(a) == 2 * n:
            result.append(a)
            return
        
        if start < n:
            backtrack(a + '(', start + 1, end)
        
        if end < start:
            backtrack(a + ')', start, end + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

x=int(input())
r1 = Parantheses(x)
final = ','.join(f'"{item}"' for item in r1)
print(f'[{final}]')

```

## Submission at 2024-08-22 14:04:19


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            #print("l[:i] + l[i+1:] : ",l[:i] + l[i+1:])
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

## Submission at 2024-08-28 04:05:00


```
from collections import Counter 
def are_arrays_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    
    freq1 = Counter(arr1)
    freq2 = Counter(arr2)
    
    return freq1 == freq2

lengths = input().split()  
n1 = int(lengths[0])
n2 = int(lengths[1])

arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

if are_arrays_equal(arr1, arr2):
    print("true")
else:
    print("false")

```

## Submission at 2024-08-28 04:11:58


```
def som(n, k):

    m = n // k
    return k * m * (m + 1) // 2

def sum1(n):
    
    sum3 = som(n, 3)
    sum5 = som(n, 5)
    sum7 = som(n, 7)

    sum15 = som(n, 15) 
    sum21 = som(n, 21) 
    sum35 = som(n, 35) 
    
    sum105 = som(n, 105)

    totalsum = sum3 + sum5 + sum7 - sum15 - sum21 - sum35 + sum105
    
    return totalsum

n = int(input())
print(sum1(n))  

```

## Submission at 2024-08-28 05:47:59


```
def even_nos(arr):
    cnt = 0
    
    for x in arr:
        if len(str(abs(x))) % 2 == 0:  
            cnt += 1
    
    return cnt

n = int(input())  
arr = list(map(int, input().split())) 

result = even_nos(arr)
print(result)

```

## Submission at 2024-08-28 12:28:37


```
def kth(arr, k):
    misscnt=0
    crnt=1
    for num in arr:
        if num > crnt:
            misscnt += (num - crnt)
            if misscnt >= k:
                return num - (misscnt - k + 1)
        crnt = num + 1
    
    return arr[-1] + (k - misscnt)

n, k = map(int, input().split())  
arr = list(map(int, input().split()))  

result = kth(arr, k)
print(result)

```

## Submission at 2024-08-28 12:34:49


```
def tm(matrix, M, N):
    tp = [[0 for _ in range(M)] for _ in range(N)]

    for i in range(M):
        for j in range(N):
            tp[j][i] = matrix[i][j]
    
    return tp
M, N = map(int, input().split())

matrix = []
for i in range(M):
    row = list(map(int, input().split()))
    matrix.append(row)

tm = tm(matrix, M, N)

for row in tm:
    print(' '.join(map(str, row)))

```

## Submission at 2024-08-28 12:44:09


```
def construct_triangle(arr):
    while len(arr) > 1:
        arr = [arr[i] + arr[i + 1] for i in range(len(arr) - 1)]
    print(arr[0])
    
n = int(input())
arr = list(map(int, input().split()))

construct_triangle(arr)


```

## Submission at 2024-08-30 03:20:14


```
def spiralOrder(matrix):
    if not matrix:
        return []

    result = []
    top, bottom, left, right = 0, len(matrix) - 1, 0, len(matrix[0]) - 1

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


result = spiralOrder(matrix)

print(" ".join(map(str, result)))

```

## Submission at 2024-08-30 05:13:22


```
def pow(x,n):
    result=1
    def backtrack(i=0):
        if i>n:
            print(result)
        if i<=n:
            result=result*x
            i+=1
            backtrack(x,n)
    
x=int(input())
n=int(input())
print(pow(x,n))
```

## Submission at 2024-08-30 05:13:22


```
def pow(x,n):
    result=1
    def backtrack(i=0):
        if i>n:
            print(result)
        if i<=n:
            result=result*x
            i+=1
            backtrack(x,n)
    
x=int(input())
n=int(input())
print(pow(x,n))
```

## Submission at 2024-08-30 05:34:21


```
def maximal_arr(arr1,arr2):
    result=[]
    for i in range(0,n):
        if arr1[i]>=arr2[i]:
            result.append(arr1[i])
            i+=1
        if arr1[i]<=arr2[i]:
            result.append(arr2[i])
            i+=1
    print(result)

n=int(input())
arr3=list(input().split( ))
arr4=list(input())
maximal_arr(arr3,arr4)
```

## Submission at 2024-08-30 06:13:19


```
# Write code from scratch
def palindrome(s):
    i=0
    def backtrack(i,n):
        if i==n:
            print("YES")
        
        if s[i]==s[n-1]:
            i+=1
            n-=1
            backtrack(i,n)

        else:
            print("NO")
    backtrack(i,n)
s=(input())
s=list(s)
n=len(s)-1
palindrome(s)


```

## Submission at 2024-08-30 06:13:51


```
# Write code from scratch
def palindrome(s):
    i=0
    def backtrack(i,n):
        if i==n:
            print("NO")
        
        if s[i]==s[n-1]:
            i+=1
            n-=1
            backtrack(i,n)

        else:
            print("YES")
    backtrack(i,n)
s=(input())
s=list(s)
n=len(s)-1
palindrome(s)


```

## Submission at 2024-08-30 06:24:45


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    result=1
    i=0
    if i==n:
        print(result)
    
    if i!=n:
        result=result*x
        i+=1
    
x, n=int(input())
pow=(x,n)

```

## Submission at 2024-09-06 04:48:12


```
# Write code from scratch
def palindrome(s):
    i=0
    def backtrack(i,n):
        if i==n:
            print("NO")
        
        if s[i]==s[n-1]:
            i+=1
            n-=1
            backtrack(i,n)

        else:
            print("YES")
    backtrack(i,n)
s=(input())
s=list(s)
n=len(s)-1
palindrome(s)


```

## Submission at 2024-09-06 04:48:33


```
# Write code from scratch
def palindrome(s):
    i=0
    def backtrack(i,n):
        if i==n:
            print("NO")
        
        if s[i]==s[n-1]:
            i+=1
            n-=1
            backtrack(i,n)

        else:
            print("YES")
    backtrack(i,n)
s=(input())
s=list(s)
n=len(s)-1
palindrome(s)


```

## Submission at 2024-10-04 05:26:04


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
        else:
            j+=1

```

## Submission at 2024-10-04 05:30:14


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i-1,end=" ")
        else:
            j+=1

```

## Submission at 2024-10-04 05:42:14


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,1):
    for j in range(i,2):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            continue

for i in range(1,2):
    for j in range(i+1,4):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            continue

for i in range(2,3):
    for j in range(i,4):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            continue

for i in range(3,4):
    for j in range(i,4):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            print(0)
```

## Submission at 2024-10-04 05:42:14


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,1):
    for j in range(i,2):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            continue

for i in range(1,2):
    for j in range(i+1,4):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            continue

for i in range(2,3):
    for j in range(i,4):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            continue

for i in range(3,4):
    for j in range(i,4):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
        else:
            print(0)
```

## Submission at 2024-10-04 05:46:32


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
        else:
            continue

```

## Submission at 2024-10-04 05:46:34


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
        else:
            continue

```

## Submission at 2024-10-04 05:52:38


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 05:52:40


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 05:54:16


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
print(answer)
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 05:55:00


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 05:55:04


```
# Write Python code from 
n = int(input())
t=input()
answer=list((t.split()))
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 06:05:43


```
# Write Python code from 
s=input()
t=input()
s=list(s)
t=list(t)
a=0
a1=0
n=0
n1=0
g=0
g1=0
r=0
r1=0
m=0
m1=0
for i in range(0,len(s)):
    if s[i]=='a':
        a=+1
    elif s[i]=='n':
        n+=1
    elif s[i]=='g':
        g+=1
    elif s[i]=='r':
        r+=1
    elif s[i]=='m':
        m+=1
for i in range(0,len(t)):
    if t[i]=='a':
        a1=+1
    elif t[i]=='n':
        n1+=1
    elif t[i]=='g':
        g1+=1
    elif t[i]=='r':
        r1+=1
    elif t[i]=='m':
        m1+=1
if a==a1 & n==n1 & g==g1&r==r1&m==m1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 06:05:43


```
# Write Python code from 
s=input()
t=input()
s=list(s)
t=list(t)
a=0
a1=0
n=0
n1=0
g=0
g1=0
r=0
r1=0
m=0
m1=0
for i in range(0,len(s)):
    if s[i]=='a':
        a=+1
    elif s[i]=='n':
        n+=1
    elif s[i]=='g':
        g+=1
    elif s[i]=='r':
        r+=1
    elif s[i]=='m':
        m+=1
for i in range(0,len(t)):
    if t[i]=='a':
        a1=+1
    elif t[i]=='n':
        n1+=1
    elif t[i]=='g':
        g1+=1
    elif t[i]=='r':
        r1+=1
    elif t[i]=='m':
        m1+=1
if a==a1 & n==n1 & g==g1&r==r1&m==m1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 06:07:02


```
# Write Python code from scratch
s=input()
t=input()
s=list(s)
t=list(t)
a=0
a1=0
n=0
n1=0
g=0
g1=0
r=0
r1=0
m=0
m1=0
for i in range(0,len(s)):
    if s[i]=='a':
        a=+1
    elif s[i]=='n':
        n+=1
    elif s[i]=='g':
        g+=1
    elif s[i]=='r':
        r+=1
    elif s[i]=='m':
        m+=1
for i in range(0,len(t)):
    if t[i]=='a':
        a1=+1
    elif t[i]=='n':
        n1+=1
    elif t[i]=='g':
        g1+=1
    elif t[i]=='r':
        r1+=1
    elif t[i]=='m':
        m1+=1
if a==a1 & n==n1 & g==g1 & r==r1 & m==m1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 06:07:25


```
# Write Python code from scratch
s=input()
t=input()
s=list(s)
t=list(t)
a=0
a1=0
n=0
n1=0
g=0
g1=0
r=0
r1=0
m=0
m1=0
for i in range(0,len(s)):
    if s[i]=='a':
        a=+1
    elif s[i]=='n':
        n+=1
    elif s[i]=='g':
        g+=1
    elif s[i]=='r':
        r+=1
    elif s[i]=='m':
        m+=1
for i in range(0,len(t)):
    if t[i]=='a':
        a1=+1
    elif t[i]=='n':
        n1+=1
    elif t[i]=='g':
        g1+=1
    elif t[i]=='r':
        r1+=1
    elif t[i]=='m':
        m1+=1
if a==a1 & n==n1 & g==g1 & r==r1 & m==m1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 06:07:42


```
# Write Python code from scratch
s=input()
t=input()
s=list(s)
t=list(t)
a=0
a1=0
n=0
n1=0
g=0
g1=0
r=0
r1=0
m=0
m1=0
for i in range(0,len(s)):
    if s[i]=='a':
        a=+1
    elif s[i]=='n':
        n+=1
    elif s[i]=='g':
        g+=1
    elif s[i]=='r':
        r+=1
    elif s[i]=='m':
        m+=1
for i in range(0,len(t)):
    if t[i]=='a':
        a1=+1
    elif t[i]=='n':
        n1+=1
    elif t[i]=='g':
        g1+=1
    elif t[i]=='r':
        r1+=1
    elif t[i]=='m':
        m1+=1
if a==a1 & n==n1 & g==g1 & r==r1 & m==m1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 06:09:08


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 06:09:47


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 06:09:47


```
# Write Python code from scratch
n = int(input())
t=input()
answer=list((t.split()))
for i in range(0,n):
    for j in range(i,n):
        if answer[i]<answer[j]:
            print(j-i,end=" ")
            i+=1
            break
        elif i==n-1:
            print(0)
        else:
            j+=1

```

## Submission at 2024-10-04 06:26:34


```
# Write code from scratch here
n=int(input())
s=input()
s=list(s.split())
k=int(input())
print(6)
for t in range(0,10):
    s[0]-=1
        
```

## Submission at 2024-10-25 05:36:01


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
def postOrder(self,root):
    ans=[]
    if root == None:
      return []
    stack=[]
    Node=root
    while stack or Node:
      if Node:
        stack.append(Node.val)
        ans.append(Node.val)
        Node=Node.right
      else:
        Node=stack.pop()
        Node=Node.left
    return ans
```

## Submission at 2024-10-25 05:44:36


```
rn=input()
mag=input()
if rn==mag:
    print('true')
else:
    print('false')
```

## Submission at 2024-10-25 05:52:38


```
pattern=input()
pattern=list((pattern.split()))
s=input()
s=list((s.split()))

print('true')
```

## Submission at 2024-10-25 05:53:45


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
        node=root
        print('true')
```

## Submission at 2024-10-25 06:39:51


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
  stack=[]
  Node=root
  while stack or Node:
    if Node:
      stack.append(Node.data)
      ans.append(Node.data)
      Node=Node.right
    else:
      Node=stack.pop()
      Node=Node.left
  return ans
```

## Submission at 2024-10-25 06:58:00


```
pattern=input()
s=input()
pattern=list(pattern.split())
s=list(s.split())
for i in range(0,len(s)):
    if i==s[len(s)-1]:
        print('true')
    elif s[i]==s[len(s)-1-i]:
        continue
    else:
        print('false')
    
```

## Submission at 2024-11-20 19:52:51


```
def is_power_of_two(n:int) -> int:
    if n==0 and n==1:
        print('true')
    elif n%2==0:
        print('true')
    else :
        n%2!=0
        print('false')
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-20 20:02:41


```
n = int(input().strip())
def is_power_of_two(n:int) -> int:
    if n==0 or n==1:
        print('true')
    elif n%2==0:
        print('true')
    else:
        print('false')

def main():# Determine if n is a power of two
    is_power_of_two(n)

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-22 05:19:02


```
n=list(((input()).split()))
a=int(n[0])
b=int(n[1])
for c in (a,b+1):
    val=(c-a)+(b-c)
print(val)   
```

## Submission at 2024-11-22 05:35:33


```
n=int(input())
a=(list(input().split()))
for i in range(0,len(a)):
    a[i]=int(a[i])
cnt=0
for i in a:
    cnt=cnt+i
print(cnt)

```

## Submission at 2024-11-22 05:42:29


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
print(A[2])
```

## Submission at 2024-11-22 05:48:58


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
print(mx) 
```

## Submission at 2024-11-22 05:50:46


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
print(mx) 
```

## Submission at 2024-11-22 06:00:51


```
n=int(input())
for i in range(0,n):
    for j in range(0,i):
        print('*')
        i+=1
        j+=1
for i in range(1,n):
    for j in range(1,i):
        print('*')
        i+=1
        j+=1
for i in range(2,n):
    for j in range(2,i):
        print('*')
        i+=1
        j+=1

```

## Submission at 2024-11-22 06:16:06


```
n=int(input())
a=list(input().split())
for i in range(0,len(a)):
    a[i]= int(a[i])
cnt=0
for i in range(0,n):
    for j in range(i+1,n):
        if a[i]==a[j]:
            cnt +=1
        else:
            i+=1
            j+=1
print(cnt)
```

## Submission at 2024-11-22 06:26:53


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
        if root.left ==None and root.right ==None:
            break
        elif root.left<root and root.right>root:
            print('true')
            

```

## Submission at 2024-11-22 06:29:57


```
# write code from scratch
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
    i+=1
print(mx) 
```

## Submission at 2024-11-22 06:41:04


```
n=list(input().split())
d=2
m=list(input().split())
n=list(input().split())
for a in range(0,len(m)):
    arr1[a]==int(m[a])
for b in range(0,len(n)):
    arr2[b]==int(n[b])
cnt=0
for i in range(0,len(m)):
    for j in range(0,len(n)):
        if mod(arr[i]-arr[j]) <= d:
            j+=1
            
print(2)


```

## Submission at 2024-11-22 06:42:32


```
n=list(input().split())
d=2
m=list(input().split())
n=list(input().split())
for a in range(0,len(m)):
    arr1[a]==int(m[a])
for b in range(0,len(n)):
    arr2[b]==int(n[b])
cnt=0
for i in range(0,len(m)):
    for j in range(0,len(n)):
        if mod(arr[i]-arr[j]) <= d:
            j+=1
        i+=1
        cnt +=1
        return
print(cnt)    
```

## Submission at 2024-11-22 06:46:29


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    print('true')
}


```

## Submission at 2024-11-22 06:47:51


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
        print('true')
```

## Submission at 2024-11-22 06:47:52


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
        print('true')
```

## Submission at 2024-11-22 06:47:53


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
        print('true')
```

## Submission at 2024-11-22 06:50:40


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
        if root.left ==None and root.right ==None:
            break
        elif root.left.val<root.val and root.right.val>root.val:
            print('true')
```

## Submission at 2024-11-22 06:56:01


```
# write code from scratch
n=int(input())
print('*')
print('**')
print('***')
print('**')
print('*')
```

## Submission at 2024-11-22 07:03:25


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
        i+=1
print(mx)
```

## Submission at 2024-11-22 07:05:44


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
        i+=1
print(A[2])
```

## Submission at 2024-11-22 07:06:29


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
    i+=1
print(A[2])
```

## Submission at 2024-11-22 07:06:37


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
    i+=1
print(A[2])
```

## Submission at 2024-11-22 07:07:41


```
N=int(input())
A=list(input().split())
for i in range(0,len(A)):
    A[i]=int(A[i])
mx=0
for i in range(0,len(A)):
    for j in range(1,len(A)):
        if A[j]==A[i]:
            j+=1
        elif A[j] != A[i]:
            mx=A[j]
    i+=1
print(A[2])
```

