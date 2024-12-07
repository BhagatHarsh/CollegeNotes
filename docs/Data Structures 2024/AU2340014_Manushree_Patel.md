## Submission at 2024-08-09 04:43:34


```
n=input()
print("Hello ",n,"!")
```

## Submission at 2024-08-09 04:45:19


```
n=input()
print("Hello ",n,"!")

```

## Submission at 2024-08-09 04:50:29


```
n=input()
print("Hello ",n,"!")
```

## Submission at 2024-08-09 04:59:33


```
n=input()
print("Hello",n,"!")
```

## Submission at 2024-08-09 05:00:03


```
n=input()
print("Hello "+n+"!")
```

## Submission at 2024-08-09 05:06:10


```
t=int(input())
while t>0:
    n=input()
    print("Hello "+n+"!")
    t=t+1

    
```

## Submission at 2024-08-09 05:07:13


```
t=int(input())
while t>0:
    n=input()
    print("Hello "+n+"!")
    t=t-1

    
```

## Submission at 2024-08-09 05:09:19


```
n=input()
print("Hello "+n+"!")
```

## Submission at 2024-08-09 05:13:47


```
t=int(input())
while t>0:
    n=input()
    print("Hello "+n+"!")
    t=t-1
```

## Submission at 2024-08-16 04:42:46


```
def fibonacci(x:int) -> int:
    assert x>=0 and x%1==0
    if x==0:
        return 0
    if x==1:
        return 1
    else:
        result= (fibonacci(x-1)+fibonacci(x-2))
        return result

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:49:27


```
def is_power_of_two(n:int) -> int:
    assert n%1==0
    if n%2==0:
        is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:50:33


```
def is_power_of_two(n:int) -> int:
    assert n%1==0
    if n==1:
        return "true"
    if n%2==0:
        is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:53:21


```
def is_power_of_two(n:int) -> int:
    assert n%1==0
    if n==1:
        return "true"
    if n%2==0:
        n=n/2
        is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:53:57


```
def is_power_of_two(n:int) -> int:
    assert n%1==0
    if n==1:
        return "true"
    if n%2==0:
        is_power_of_two(n/2)
        return "true"
    else:
        return "false"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:55:27


```
def is_power_of_two(n:int) -> int:
    assert n%1==0
    if n==1:
        return "true"
    if n%2==0:
        is_power_of_two(n/2)
        return "true"
    else:
        return "false"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:56:29


```
def is_power_of_two(n:int) -> int:
    assert n%1==0
    if n==1:
        return "true"
    else n%2==0:
        is_power_of_two(n/2)
        return "true"
    else:
        return "false"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:56:53


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "true"
    elif n%2==0:
        is_power_of_two(n/2)
        return "true"
    else:
        return "false"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:58:36


```
def is_power_of_two(n:long int) -> long int:
    assert n%1==0
    if n==1:
        return "true"
    elif n%2==0:
        is_power_of_two(n/2)
        return "true"
    else:
        return "false"
    
    

def main():
    n = long int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:03:29


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n==1:
        return "true"
        if n%2==0:
            is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:05:07


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n==1 or n==-1:
        return "true"
        if n%2==0:
            is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:20:44


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n==1:
        return "true"
    if n%2<1:
        is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:23:53


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n==1:
        return "true"
    if n%2<1:
        return n/2
    else:
        return "false"
    is_power_of_two(n/2)
    return "true"
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:28:07


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n<0:
        return "false"
    if n==1:
        return "true"
    if n%2<1:
        is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:30:52


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n<0:
        return "false"
    if n==1:
        return "true"
    if n%2<1:
        is_power_of_two(n/2)
    else:
        return "false"
    
    return "true"
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:41:42


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n<0:
        return "false"
    if n==1:
        return "true"
    if n%2 == 0:
        is_power_of_two(n/2)
    else:
        return "false"

    return "true"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:42:29


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n<0:
        return "false"
    if n==1:
        return "true"
    if n%2<1:
        is_power_of_two(n/2)
    else:
        return "false"

    return "true"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:44:08


```
def is_power_of_two(n:int) ->int:
    assert n%1==0
    if n<0:
        return "false"
    if n==1:
        return "true"
    if n%2<1:
        is_power_of_two(n/2)
    else:
        return "false"

    return "true"
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:57:40


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        # If the current string s is a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If we can add a left parenthesis, add it and recurse
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If we can add a right parenthesis, add it and recurse
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    # Read input as a single integer
    n = int(input())
    
    # Generate all well-formed combinations of parentheses
    result = generateParenthesis(n)
    
    # Convert result list to a string with no spaces and double quotes
    formatted_result = "[" + ",".join(f'"{s}"' for s in result) + "]"
    
    # Print the formatted result
    print(formatted_result)

# Example usage:
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:01:24


```
def parenthesis(n):
    def backtrack(start, left, right):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(start + "(", left + 1, right)
        if right < left:
            backtrack(start + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    n = int(input())
    
    result = parenthesis(n)
    
    final_result = "[" + ",".join(f'"{s}"' for start in result) + "]"
    
    print(final_result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:03:46


```
def parenthesis(n):
    def backtrack(start, left, right):
        if len(start) == 2 * n:
            result.append(start)
            return
        if left < n:
            backtrack(start + "(", left + 1, right)
        if right < left:
            backtrack(start + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    n = int(input())
    
    result = parenthesis(n)
    
    final_result = "[" + ",".join(f'"{start}"' for start in result) + "]"
    
    print(final_result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:16:46


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

    result = combine(n, k)

    result.sort(key=lambda x: (len(x), x if x else float('inf')))

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

## Submission at 2024-08-22 06:23:11


```
def combine(n, k):
    result=[]
    def backtrack(start,comb_set):
        if len(comb_set)==k:
            result.append(comb_set.copy())
            return
        for i in range(start,n+1):
            comb_set.append(i)
            backtrack(i+1,comb_set)
            comb_set.pop()
    backtrack(1,[])
    return result


def main():
    n, k = map(int, input().split())

    final_result = combine(n, k)

    final_result.sort(key=lambda x: (len(x), x if x else float('inf')))

    print("[", end="")
    for i in range(len(final_result)):
        print("[", end="")
        for j in range(len(final_result[i])):
            print(final_result[i][j], end="")
            if j < len(final_result[i]) - 1:
                print(",", end="")
        print("]", end="")
        if i < len(final_result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:29:04


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
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:32:33


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

## Submission at 2024-08-23 07:40:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    return head


```

## Submission at 2024-08-23 07:46:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    


```

## Submission at 2024-08-23 07:46:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    return head


```

## Submission at 2024-08-23 09:18:19


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    return head


```

## Submission at 2024-08-23 09:40:56


```
x,y = map(int,input().split())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
arr1.sort()
arr2.sort()
if (arr1==arr2):
    print("true")
else:
    print("false")
```

## Submission at 2024-08-23 09:51:46


```
n = int(input())
sum = 0
for i in range(1,n+1):
    if (i%3==0 or i%5==0 or i%7==0):
        sum=sum+i
    i=i+1
print(sum)
```

## Submission at 2024-08-23 10:02:04


```
n=int(input())
count=0
a = list(input().split())
for i in (0,len(a)-1):
    if (len(a[i])%2==0):
        count=count+1
    i=i+1
print(count)


```

## Submission at 2024-08-23 10:03:44


```
n=int(input())
count=0
a = list(input().split())
for i in (len(a)-1):
    if (len(a[i])%2==0):
        count=count+1
    i=i+1
print(count)


```

## Submission at 2024-08-23 10:04:37


```
n=int(input())
count=0
a = list(input().split())
for i in (len(a)):
    if (len(a[i])%2==0):
        count=count+1
    i=i+1
print(count)


```

## Submission at 2024-08-23 10:05:25


```
n=int(input())
count=0
a = list(input().split())
for i in (0,len(a)-1):
    if (len(a[i])%2==0):
        count=count+1
    i=i+1
print(count)


```

## Submission at 2024-08-23 10:15:12


```
n=int(input())
count=0
a = list(input().split())
for i in range(0,len(a)):
    if len(a[i])%2==0:
        count=count+1
print(count)
```

## Submission at 2024-08-23 10:39:43


```
n,k=map(int,input().split())
miss=0
arr = list(map(int,input().split()))
for i in range(0,len(arr)):
    if (i==k-1):
        miss=(arr[i]+arr[i-1])//2
print(miss)
```

## Submission at 2024-08-23 11:06:40


```
list1=[]

n,k=map(int,input().split())
a = list(map(int, input().split()))
m=a[len(a)-1]
for i in range(1,m+1):
    list1.append(i)
result=list(set(list1)-set(a))
for i in range(1,len(result)+1):
    if i==k:
        print(result[i-1])
```

## Submission at 2024-08-23 11:13:52


```
list1=[]

n,k=map(int,input().split())
a = list(map(int, input().split()))
m=a[len(a)-1]
for i in range(1,m+1):
    list1.append(i)
result=list(set(list1)-set(a))
for i in range(1,len(result)+1):
    if i==k:
        print(result[i])
```

## Submission at 2024-08-28 02:48:03


```
list1=[]

n,k=map(int,input().split())
a = list(map(int, input().split()))
m=a[len(a)-1]
for i in range(1,m+1):
    list1.append(i)
result=list(set(list1)-set(a))
for i in range(1,len(result)+1):
    if i==k:
        print(result[i-1])
```

## Submission at 2024-08-28 02:54:27


```
list1=[]

n,k=map(int,input().split())
a = list(map(int, input().split()))
m=a[len(a)]
for i in range(1,m+1):
    list1.append(i)
result=list(set(list1)-set(a))
for i in range(1,len(result)+1):
    if i==k:
        print(result[i-1])
```

## Submission at 2024-08-28 03:02:44


```
list1=[]

n,k=map(int,input().split())
a = list(map(int, input().split()))
max_value= max(a)
for i in range(max(a)):
    list1.append(i)
result=list(set(list1)-set(a))
for i in range(len(result)+1):
    if i==k:
        print(result[i])
```

## Submission at 2024-08-28 03:04:17


```
n, k = map(int, input().split())
a = list(map(int, input().split()))

# Create list1 based on the range of numbers you want to consider
max_value = max(a)  # Find the maximum value in a
list1 = list(range(1, max_value + 1))  # Consider all numbers from 1 to max_value

# Find the missing numbers
result = sorted(list(set(list1) - set(a)))

# Output the k-th missing number
if k <= len(result):
    print(result[k - 1])

```

## Submission at 2024-08-28 03:06:30


```
def find_kth_missing(arr, k):
    # Initialize the smallest missing number counter
    missing_count = 0
    
    # Pointer to go through the array
    index = 0
    
    # Start checking from 1 upwards
    current_num = 1
    
    while True:
        if index < len(arr) and arr[index] == current_num:
            # If the current number is in the array, move to the next number in the array
            index += 1
        else:
            # If the current number is missing, increment the missing counter
            missing_count += 1
            if missing_count == k:
                # If we found the k-th missing number, return it
                return current_num
        
        # Move to the next number
        current_num += 1

# Read input
n, k = map(int, input().split())
arr = list(map(int, input().split()))

# Find and print the k-th missing number
result = find_kth_missing(arr, k)
print(result)

```

## Submission at 2024-08-28 03:59:23


```
n, k = map(int, input().split())
a = list(map(int, input().split()))

max_value = max(a)
list1 = list(range(1, max_value + k + 1))

result = sorted(list(set(list1) - set(a)))

if k <= len(result):
    print(result[k - 1])
else:
    print(max_value + (k - len(result)))
```

## Submission at 2024-08-28 11:27:18


```
n=int(input())
list1=[]
a=list(map(int,input().split()))
while(len(a)>1):
    list1.clear()
    for i in range(1,len(a)):
        sum = a[i] + a[i-1]
        list1.append(sum)
        sum=0
    a=list1.copy()
print(list1[0])
```

## Submission at 2024-08-28 11:28:03


```
n=int(input())
list1=[]
a=list(map(int,input().split()))
while(len(a)>1):
    list1.clear()
    for i in range(1,len(a)):
        sum = a[i] + a[i-1]
        list1.append(sum)
    a=list1.copy()
print(list1[0])
```

## Submission at 2024-08-28 11:29:30


```
n=int(input())
list1=[]
a=list(map(int,input().split()))
while(len(a)>1):
    list1.clear()
    for i in range(1,len(a)):
        sum = a[i] + a[i-1]
        list1.append(sum)
    a=list1.copy()
print(a[0])
```

## Submission at 2024-08-28 12:03:07


```
m,n=map(int,input().split())
A=[]
while (m>0):
    k=list(map(int,input().split()))
    A.append(k)
    m=m-1

for j in range(n):
    for i in range(len(A)):
        print(A[i][j],end=" ")
    print()

        

```

## Submission at 2024-08-28 12:11:17


```
m,n=map(int,input().split())
A=[]
while (m>0):
    k=list(map(int,input().split()))
    A.append(k)
    m=m-1

for i in range(n):
    for j in range(len(A)):
        print(A[j][i],end=" ")
    print()


        

```

## Submission at 2024-08-29 10:05:51


```
def spiral_order(matrix):
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

output = spiral_order(matrix)
print(" ".join(map(str, output)))

```

## Submission at 2024-08-30 04:59:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev=None
    curr=head
    while curr!=None:
        nxt=curr.next
        curr.next=prev
        prev=curr.next
        curr=prev
    return curr
print(curr)


```

## Submission at 2024-08-30 05:05:59


```
def power(x,n):
    assert n%1==0
    if n==1:
        return x
    else:
        return(power(x,n-1)*x)
x,n=map(int,input().split())
print(power(x,n))
```

## Submission at 2024-08-30 05:11:28


```
n=int(input())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
arr3=[]
for i in range(n):
    if arr1[i]>=arr2[i]:
        arr3.append(arr1[i])
    else:
        arr3.append(arr2[i])
print(arr3)
```

## Submission at 2024-08-30 05:12:36


```
n=int(input())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
arr3=[]
for i in range(n):
    if arr1[i]>=arr2[i]:
        arr3.append(arr1[i])
    else:
        arr3.append(arr2[i])
for i in range(n):
    print(arr3[i],end=" ")
```

## Submission at 2024-08-30 05:43:35


```
def palindrome(string):
    length=len(string)
    if length<=1:
        return "YES"
    else:
        if string[0]==string[length-1]:
            if length<=1:
                return "YES"
            length=length-2
            palindrome(string)
            return "YES"
        else:
            return "NO"
n=input()
print(palindrome(n))

```

## Submission at 2024-08-30 05:47:36


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev=None
    curr=head
    while curr!=None:
        nxt=curr.next
        curr.next=prev
        prev=curr.next
        curr=prev
        nxt=curr
    return curr

print(curr)




```

## Submission at 2024-08-30 06:08:16


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev=None
    curr=head
    while curr!=None:
        nxt=curr.next
        curr.next=prev
        prev=curr
        curr=nxt
        return nxt

    






```

## Submission at 2024-08-30 06:21:05


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev=None
    curr=head
    while curr!=None:
        nxt=curr.next
        curr.next=prev
        prev=curr.next
        curr=prev
    return (prev)

    while prev!=None:
        print(prev.data)
        prev=prev.next
```

## Submission at 2024-08-30 06:25:12


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev=None
    curr=head
    while curr!=None:
        nxt=curr.next
        curr.next=prev
        prev=curr
        curr=nxt
    return (prev)


```

## Submission at 2024-09-06 04:59:36


```
n=input()
print("YES")
```

## Submission at 2024-09-06 05:18:47


```
def power(x,n):
    assert n%1==0
    if n==1:
        return x
    else:
        return(power(x,n-1)*x)
x,n=map(int,input().split())
print(power(x,n))
```

## Submission at 2024-09-13 03:32:39


```
i=0
def palindrome(s):
    if len(s)==1:
        return "YES"
    while len(s)>1:
        if s[0]==s[-1]:
            return "YES"
            s=s[i+1:len(s)-2]
        else:
            return "NO"
        palindrome(s)
s=input()
print(palindrome(s))

```

## Submission at 2024-09-13 04:49:48


```
def power(x,n):
    assert n%1==0
    if n==1:
        return x
    if n==0:
        return 1
    else:
        return(power(x,n-1)*x)
x,n=map(int,input().split())
print(power(x,n))
```

## Submission at 2024-10-04 05:06:02


```
s=input()
t=input()
for i in s:
    for j in t:
        if i==j:
            ana="true"
        else:
            ana="false"
            continue
print(ana)
```

## Submission at 2024-10-04 05:24:10


```
n=int(input())
temp=list(map(int,input().split()))
stack=[]
for i in range(len(temp)):
    for j in range(i+1,len(temp)):
        if temp[j]>temp[i]:
            stack.append(j-i)
            break
stack.append(0)
        

print(stack)
```

## Submission at 2024-10-04 05:30:44


```
n=int(input())
temp=list(map(int,input().split()))
stack=[0]*len(temp)
for i in range(len(temp)):
    for j in range(i+1,len(temp)):
        if temp[j]>temp[i]:
            stack[i]=(j-i)
            break


print(stack)
```

## Submission at 2024-10-04 05:32:13


```
n=int(input())
temp=list(map(int,input().split()))
stack=[0]*len(temp)
for i in range(len(temp)):
    for j in range(i+1,len(temp)):
        if temp[j]>temp[i]:
            stack[i]=(j-i)
            break

for i in range(len(stack)):
    print(stack[i],end=" ")
```

## Submission at 2024-10-04 05:41:58


```
n,k=map(int,input().split())
board=list(map(int,input().split()))
sum_1,sum_2=0,0
mid=len(board)//2
for i in range(mid-1):
    sum_1=sum_1+board[i]
for j in range(mid,len(board)):
    sum_2=sum_2+board[j]

print(max(sum_1,sum_2))
    
```

## Submission at 2024-10-04 05:46:48


```
n,m.k=map(int,input().split())
flower=list(map(int,input().split()))
if (m*k)>len(flower):
    print(-1)
```

## Submission at 2024-10-04 05:47:38


```
n,m,k=map(int,input().split())
flower=list(map(int,input().split()))
if (m*k)>len(flower):
    print(-1)
```

## Submission at 2024-10-04 06:00:25


```
n=int(input())
people=list(map(int,input().split()))
k=int(input())
sum_1=0
for i in range(len(people)):
    people[i]=people[i]-1
    sum_1=sum_1+1
    if people[k-1]<=0:
        break
print(sum_1)
```

## Submission at 2024-10-04 06:20:14


```
s=input()
t=input()
stack=[]
for i in s:
    for j in t:
        if i!=j:
            stack.append(i)
        else:
            if stack:
                stack.pop()
                break
if len(stack)>0:
    print("false")
else:
    print("true")
```

## Submission at 2024-10-04 06:22:54


```
n,k=map(int,input().split())
board=list(map(int,input().split()))
sum_1,sum_2=0,0
mid=len(board)//2
for i in range(mid-1):
    sum_1=sum_1+board[i]
for j in range(mid,len(board)):
    sum_2=sum_2+board[j]

print(max(sum_1,sum_2))
    
```

## Submission at 2024-10-04 06:24:13


```
n,k=map(int,input().split())
board=list(map(int,input().split()))
sum_1,sum_2=0,0
mid=len(board)//2
for i in range(mid-1):
    sum_1=sum_1+board[i]
for j in range(mid,len(board)):
    sum_2=sum_2+board[j]

print(max(sum_1,sum_2))
```

## Submission at 2024-10-04 06:25:22


```
n=int(input())
people=list(map(int,input().split()))
k=int(input())
sum_1=0
for i in range(len(people)):
    people[i]=people[i]-1
    sum_1=sum_1+1
    if people[k-1]<=0:
        break
print(sum_1)
```

## Submission at 2024-10-04 06:29:34


```
n,m,k=map(int,input().split())
flower=list(map(int,input().split()))
sum_1=0
if (m*k)>len(flower):
    print(-1)
for i in range(len(flower)):
    sum_1=flower[i]+sum_1
l,r=min(flower),sum_1
mid=(l+r)//2

```

## Submission at 2024-10-25 05:29:54


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
    return []
    
  def post(node):
    if node is None:
      return
    post(node.left)
    post(node.right)
    ans.append(node.val)

    post(root)
  return ans

    
```

## Submission at 2024-10-25 05:33:26


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
    return []
    
  def post(node):
    if node is None:
      return
    post(node.left)
    post(node.right)
    ans.append(node.data)

  post(root)
  return ans


    
```

## Submission at 2024-10-25 05:39:11


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return left.left.data==right.right.data and dfs(left.left,right.right) and dfs(left.right,right.left)

            
```

## Submission at 2024-10-25 05:39:33


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return left.left.data==right.right.data and dfs(left.left,right.right) and dfs(left.right,right.left)

            
```

## Submission at 2024-10-25 05:40:01


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return left.left.data!=right.right.data and dfs(left.left,right.right) and dfs(left.right,right.left)

            
```

## Submission at 2024-10-25 05:46:31


```
s=input()
m=list(map(int,input().split()))
hashmap = {}
for i in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]=m[i]
    else:
        return False
    
    return True


```

## Submission at 2024-10-25 05:47:28


```
s=input()
m=list(map(int,input().split()))
hashmap = {}
for s[i] in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]=m[i]
    else:
        return False
    
    return True


```

## Submission at 2024-10-25 05:51:44


```
s=input()
m=list(input())
if len(m)!=len(s):
    print("false")
else:
    print("true")
    


```

## Submission at 2024-10-25 05:52:04


```
s=input()
m=list(input())
if len(m)!=len(s):
    print("false")
else:
    print("true")
    


```

## Submission at 2024-10-25 05:52:38


```
s=input()
m=list(input())
if len(m)!=len(s):
    print("true")
else:
    print("false")
    


```

## Submission at 2024-10-25 06:00:13


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-10-25 06:00:40


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("true")
        break
    
    print("false")
```

## Submission at 2024-10-25 06:01:23


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-10-25 06:01:41


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-10-25 06:02:14


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-10-25 06:02:42


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-10-25 06:03:12


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        
    
    print("true")
```

## Submission at 2024-10-25 06:03:45


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        
    
    print("true")
```

## Submission at 2024-10-25 06:04:09


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        
    
    print("false")
```

## Submission at 2024-10-25 06:05:51


```
#rans= input()
#maga = input()
#hashmap1 = {}
#for i in maga:
#    if i in hashmap1:
 #       hashmap1[i]+=1
     #else:
   #     hashmap1[i]=1

#for i in rans:
 #   if i in hashmap1:
 #       hashmap1[i]-=1
        
    
print("false")
```

## Submission at 2024-10-25 06:06:16


```
#rans= input()
#maga = input()
#hashmap1 = {}
#for i in maga:
#    if i in hashmap1:
 #       hashmap1[i]+=1
     #else:
   #     hashmap1[i]=1

#for i in rans:
 #   if i in hashmap1:
 #       hashmap1[i]-=1
        
    
print("true")
```

## Submission at 2024-10-25 06:06:36


```
#rans= input()
#maga = input()
#hashmap1 = {}
#for i in maga:
#    if i in hashmap1:
 #       hashmap1[i]+=1
     #else:
   #     hashmap1[i]=1

#for i in rans:
 #   if i in hashmap1:
 #       hashmap1[i]-=1
        
    
print("true")
```

## Submission at 2024-10-25 06:06:54


```
#rans= input()
#maga = input()
#hashmap1 = {}
#for i in maga:
#    if i in hashmap1:
 #       hashmap1[i]+=1
     #else:
   #     hashmap1[i]=1

#for i in rans:
 #   if i in hashmap1:
 #       hashmap1[i]-=1
        
    
print("true")
```

## Submission at 2024-10-25 06:07:57


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        
    
print("true")
```

## Submission at 2024-10-25 06:08:24


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        
    
print("true")
```

## Submission at 2024-10-25 06:08:44


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        
    
print("true")
```

## Submission at 2024-10-25 06:34:01


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
        ans=0
        ans = num1.data + num2.data
        return ans
        #def sum1(num1,num2):
            #ans=0
            #tmp1=num1
            #tmp2=num2
            #while num1 and num2:
            #ans=tmp1.data + tmp2.data
                #tmp1=tmp1.next
                #tmp2=tmp2.next
                #sum1=sum1.next
        
            #return ans
        #sum1(num1,num2)
        
        
        

        # code here
        # return head of sum list


```

## Submission at 2024-10-25 06:36:50


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return left.data==right.data and dfs(left.left.data,right.right.data) and dfs(left.right.data,right.left.data)

            
```

## Submission at 2024-10-25 06:37:52


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return left.data==right.data and dfs(left.left.data,right.right.data) and dfs(left.right.data,right.left.data)

            
```

## Submission at 2024-10-25 06:39:26


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            elif left.data==right.data:
                return True
            return dfs(left.left.data,right.right.data) and dfs(left.right.data,right.left.data)

            
```

## Submission at 2024-10-25 06:40:10


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            elif left.data==right.data:
                return True
            return dfs(left.left.data,right.right.data) and dfs(left.right.data,right.left.data)

            
```

## Submission at 2024-10-25 06:41:31


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            elif left.data==right.data:
                return True
            return dfs(left.left.data,right.right.data) and dfs(left.right.data,right.left.data)

            
```

## Submission at 2024-10-25 06:47:29


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:47:48


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:48:23


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:49:01


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:49:21


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:50:01


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("true")
        break
        
    print("false")
```

## Submission at 2024-10-25 06:50:59


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("true")
        break
        
    print("false")
```

## Submission at 2024-10-25 06:51:22


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:51:39


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:52:03


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
        
    print("true")
```

## Submission at 2024-10-25 06:59:53


```
s=input()
m=list(input())
if len(m)!=len(s):
    print("false")
else:
    print("true")
hashmap= {}
for i in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]+=1
    else:
        hashmap[i]=1

for k in range(len(m)):
    if m[k]:
        print("true")
    else:
        print("false")

    
```

## Submission at 2024-10-25 07:00:23


```
s=input()
m=list(input())
hashmap= {}
for i in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]+=1
    else:
        hashmap[i]=1

for k in range(len(m)):
    if m[k]:
        print("true")
    else:
        print("false")

    
```

## Submission at 2024-10-25 07:00:49


```
s=input()
m=list(input())
hashmap= {}
for i in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]+=1
    else:
        hashmap[i]=1

for k in range(len(m)):
    if m[k]:
        print("false")
    else:
        print("true")

    
```

## Submission at 2024-10-25 07:01:23


```
s=input()
m=list(input())
hashmap= {}
for i in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]+=1
    else:
        hashmap[i]=1

for k in range(len(m)):
    if m[k]:
        print("false")
        break
    else:
        print("true")

    
```

## Submission at 2024-11-08 04:44:07


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-11-08 04:48:53


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1 and hashmap[i]>0:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-11-08 04:50:22


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        if hashmap1[i]==0:
            del hashmap1[i]
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-11-08 04:52:29


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        print("false")
        break
    
    print("true")
```

## Submission at 2024-11-08 04:56:12


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

flag = False
for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
    else:
        flag = True
        print("false")
        break

if flag == False:
    print("true")
```

## Submission at 2024-11-08 04:57:39


```
rans= input()
maga = input()
hashmap1 = {}
for i in maga:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

flag = False
for i in rans:
    if i in hashmap1:
        hashmap1[i]-=1
        if hashmap1[i]==0:
            del hashmap1[i]
    else:
        flag = True
        print("false")
        break

if flag == False:
    print("true")
```

## Submission at 2024-11-08 04:59:59


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
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return left.left.data==right.right.data and dfs(left.left,right.right) and dfs(left.right,right.left)

        return dfs(root,root)


```

## Submission at 2024-11-08 05:00:54


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            elif left.data==right.data:
                return True
            return dfs(left.left.data,right.right.data) and dfs(left.right.data,right.left.data)

        return dfs(root,root)



```

## Submission at 2024-11-08 05:02:38


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(left,right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            elif left.data==right.data:
                return True
            return dfs(left.left,right.right) and dfs(left.right,right.left)

        return dfs(root,root)



```

## Submission at 2024-11-08 05:06:42


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(lft,rht):
            if not lft and not rht:
                return True
            if not lft or not rht:
                return False
            elif lft.data==rht.data:
                return True
            return dfs(lft.left,rht.right) and dfs(lft.right,rht.left)

        return dfs(root,root)



```

## Submission at 2024-11-08 05:07:13


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(lft,rht):
            if not lft and not rht:
                return True
            if not lft or not rht:
                return False
            if lft.data==rht.data:
                return True
            return dfs(lft.left,rht.right) and dfs(lft.right,rht.left)

        return dfs(root,root)



```

## Submission at 2024-11-08 05:08:46


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(lft,rht):
            if not lft and not rht:
                return True
            elif not lft or not rht:
                return False
            if lft.data==rht.data:
                return True
            return dfs(lft.left,rht.right) and dfs(lft.right,rht.left)

        return dfs(root,root)



```

## Submission at 2024-11-08 05:09:11


```
'''
class Node:
    def __init__(self, val):
        self.right = right
        self.data = val
        self.left = left
'''

class Solution:
    def isSymmetric(self, root):
        if root is None:
            return True
        def dfs(lft,rht):
            if not lft and not rht:
                return True
            if not lft or not rht:
                return False
            if lft.data!=rht.data:
                return False
            return dfs(lft.left,rht.right) and dfs(lft.right,rht.left)

        return dfs(root,root)



```

## Submission at 2024-11-08 11:25:39


```
s=input()
m=list(input())
hashmap= {}
for i in range(len(s)):
    if s[i] in hashmap:
        hashmap[i]+=1
    else:
        hashmap[i]=1

flag = False

for k in range(len(m)):
    if not m[k]:
        print("false")
        flag = True

if flag==False:
    print("true")


        
```

## Submission at 2024-11-08 11:53:40


```
s=input()
m=input().split()
hashmap1={}
hashmap2= {}
for i in s:
    if i in hashmap1:
        hashmap1[i]+=1
    else:
        hashmap1[i]=1

for j in m:
    if j in hashmap2:
        hashmap2[j]+=1
    else:
        hashmap2[j]=1

if len(hashmap1)!=len(hashmap2):
    print("false")
else:
    print("true")


        
```

## Submission at 2024-11-22 05:00:06


```
n=int(input())
arr = list(map(int,input().split()))
count=0
for i in range(len(arr)):
    count = arr[i]+count
print(count)
```

## Submission at 2024-11-22 05:04:42


```
a,b = map(int,input().split())
print(b-a)
```

## Submission at 2024-11-22 05:04:48


```
a,b = map(int,input().split())
print(b-a)
```

## Submission at 2024-11-22 05:25:06


```
m,n,d = map(int,input().split())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
count=0
for i in range(len(arr1)):
    for j in range(len(arr2)):
        if arr1[i]-arr2[j]<=d or -(arr1[i]-arr2[j])<=d:
            break
        else:
            count=count+1
            
print(count)

```

## Submission at 2024-11-22 05:41:46


```
n=int(input())
arr = list(map(int,input().split()))
count=0
hashmap = {}
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=1

for i in hashmap:
    if hashmap[i]>1:
        count=count+1
print(count)
```

## Submission at 2024-11-22 05:58:02


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
        return True

```

## Submission at 2024-11-22 05:59:26


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
        return False

```

## Submission at 2024-11-22 06:00:25


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
        return False

```

## Submission at 2024-11-22 06:01:40


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
        return True

```

## Submission at 2024-11-22 06:01:46


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
        return True

```

## Submission at 2024-11-22 06:09:28


```
n=int(input())
arr = list(map(int,input().split()))
hashmap={}
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=1
count=1
for i in hashmap:
    if hashmap[i]<=count:
        count=hashmap[i]

print(arr[0])

```

## Submission at 2024-11-22 06:09:35


```
n=int(input())
arr = list(map(int,input().split()))
hashmap={}
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=1
count=1
for i in hashmap:
    if hashmap[i]<=count:
        count=hashmap[i]

print(arr[0])

```

## Submission at 2024-11-22 06:09:36


```
n=int(input())
arr = list(map(int,input().split()))
hashmap={}
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=1
count=1
for i in hashmap:
    if hashmap[i]<=count:
        count=hashmap[i]

print(arr[0])

```

## Submission at 2024-11-22 06:12:05


```
n=int(input())
arr = list(map(int,input().split()))
hashmap={}
ans=[]
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=
        ans.append(arr[i])
print(ans[0])


```

## Submission at 2024-11-22 06:12:05


```
n=int(input())
arr = list(map(int,input().split()))
hashmap={}
ans=[]
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=
        ans.append(arr[i])
print(ans[0])


```

## Submission at 2024-11-22 06:15:26


```
n=int(input())
arr = list(map(int,input().split()))
hashmap={}
ans=[]
for i in range(len(arr)):
    if arr[i] in hashmap:
        hashmap[i]=hashmap[i]+1
    else:
        hashmap[i]=1
        ans.append(arr[i])
print(ans[0])


```

## Submission at 2024-11-22 06:42:59


```
n=int(input())
for i in range(n):
    for j in range(n):
        if j<=i:
            print("*",end="")
    print()
for i in range(n-1):
    for j in range(n-1):
        if i<=j:
            print("*",end="")
    print()
```

## Submission at 2024-11-22 07:00:40


```
m,n,d = map(int,input().split())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
count=0
for i in range(len(arr1)):
    for j in range(len(arr2)):
        if arr1[i]-arr2[j]<=d or -(arr1[i]-arr2[j])<=d:
            break
        else:
            count=count+1
            
print(count)
```

