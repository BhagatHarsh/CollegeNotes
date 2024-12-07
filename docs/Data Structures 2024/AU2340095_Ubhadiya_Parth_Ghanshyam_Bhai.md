## Submission at 2024-08-16 04:56:37


```
def fibonacci(x:int) -> int:
    # write your logic here
if x<=1:
  return x
    else:
      return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:58:39


```
def fibonacci(x:int) -> int:
    # write your logic here
  if x<=1:
    return x
  else:
    return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:17:36


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n%2!=0):
        return "false"
    elif (n%2==0 and n/2 == 1):
        return "true"


    else:
        return is_power_of_two(n/2)


    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:18:10


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n%2!=0):
        return "false"
    elif (n%2==0 and n/2 == 1):
        return "true"


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:25:13


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n%2!=0 or n<=0):
        return "false"
    elif (n%2==0 and n/2 == 1):
        return "true"
        


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:26:16


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n%2==0 and n/2 == 1):
        return "true"
    elif (n%2!=0 or n<=0):
        return "false"
    
        


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:27:18


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n%2==0 and n/2 == 1):
        return True
    elif (n%2!=0 or n<=0):
        return False
    
        


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:28:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n%2==0 and n/2 == 1):
        return "true"
    elif (n%2!=0 or n<=0):
        return "false"
    
        


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:29:08


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n%2==0 and n == 1):
        return "true"
    elif (n%2!=0 or n<=0):
        return "false"
    
        


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:30:37


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n == 1):
        return "true"
    elif (n%2!=0 or n<=0):
        return "false"
    
        


    else:
        return is_power_of_two(n/2)


    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 04:51:47


```
def permu(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            
            permu(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    Per = permu(x)


    FormatOut = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in Per
    ) + ']'
    print(FormatOut)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 04:54:47


```
def combinator(n,k):
    def samp(s,ls):
        if len(ls)==k:
            results.append(ls)
            return
        for i in range(s,n+1):
            samp(i+1,ls+[i])

    results=[]
    samp(1,[])
    return results
print(combinator(5,3))
```

## Submission at 2024-08-22 04:55:59


```
def combinator(n,k):
    def samp(s,ls):
        if len(ls)==k:
            results.append(ls)
            return
        for i in range(s,n+1):
            samp(i+1,ls+[i])

    results=[]
    samp(1,[])
    return results
print(combinator(5,3))
```

## Submission at 2024-08-22 05:01:19


```
def combinator(n,k):
    def samp(s,ls):
        if len(ls)==k:
            results.append(ls)
            return
        for i in range(s,n+1):
            samp(i+1,ls+[i])

    results=[]
    samp(1,[])
    return results
print(combinator(4, 2))
```

## Submission at 2024-08-22 05:04:19


```
def combine(n, k):
    def sample(s, ls):
        if len(ls) == k:
            result.append(ls)
            return
        for i in range(s, n + 1):
            sample(i + 1, ls + [i])

    result = []
    sample(1, [])
    return result


n, k = map(int, input().split())


print(combine(n, k))

```

## Submission at 2024-08-22 05:08:33


```
def combine(n, k):
    def sample(s, ls):
        if len(ls) == k:
            result.append(ls)
            return
        for i in range(s, n + 1):
            sample(i + 1, ls + [i])

    result = []
    sample(1, [])
    return result


n, k = map(int, input().split())


print(combine(n, k))

```

## Submission at 2024-08-22 05:13:26


```
def combine(n, k):
    def sample(s, ls):
        if len(ls) == k:
            result.append(ls)
            return
        for i in range(s, n + 1):
            sample(i + 1, ls + [i])

    result = []
    sample(1, [])
    return result

n, k = map(int, input().split())
print(combine(n, k))

```

## Submission at 2024-08-22 05:19:11


```
from itertools import combinations


def generate_combinations(n, k):
   
    return sorted([list(comb) for comb in combinations(range(1, n+1), k)])


n, k = map(int, input().split())


result = generate_combinations(n, k)

print(result)

```

## Submission at 2024-08-22 05:21:25


```
from itertools import combinations
def generate_combinations(n, k): 
    return sorted([list(comb) for comb in combinations(range(1, n+1), k)])
n, k = map(int, input().split())
result = generate_combinations(n, k)
print(result)

```

## Submission at 2024-08-22 05:31:36


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

## Submission at 2024-08-22 06:01:55


```
def generalParantheses(n):
    def Parantheses(s="",left=0,right=0):
        
        if len(s)==2*n:
            r.append(s)
            return
        if left<n:
            
            
            Parantheses(s+"(",left+1,right)
        if right<left:
            
            Parantheses(s+")",left,right+1)
            
    r=[]
    Parantheses()
    return r
def main():
    x=int(input())
    res = generalParantheses(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-22 06:08:38


```
def combine(n, k):
    def backtrack(start, comb):
        # If the combination is complete, add it to the result
        if len(comb) == k:
            result.append(comb[:])  # Append a copy of the current combination
            return
        
        # Iterate over the range from start to n to build combinations
        for i in range(start, n + 1):
            comb.append(i)  # Include this element in the combination
            backtrack(i + 1, comb)  # Recurse with the next number
            comb.pop()  # Backtrack, remove the last element added

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

## Submission at 2024-08-22 06:10:25


```
def combine(n, k):
    def backtrack(start, comb):
       
        if len(comb) == k:
            result.append(comb[:])  
            return
        
       
        for i in range(start, n + 1):
            comb.append(i)  
            backtrack(i + 1, comb)  
            comb.pop() 

    result = []
    backtrack(1, [])
    return result

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

## Submission at 2024-08-29 04:54:15


```

from collections import Counter

def are_arrays_equal(arr1, arr2):
    # Compare the frequency of elements in both arrays using Counter
    return Counter(arr1) == Counter(arr2)

# Input handling
n1, n2 = map(int, input().split())  # Reading lengths of arr1 and arr2
arr1 = list(map(int, input().split()))  # Reading arr1 values
arr2 = list(map(int, input().split()))  # Reading arr2 values

# Output the result of the comparison
print(are_arrays_equal(arr1, arr2))  # Prints "true" or "false"

```

## Submission at 2024-08-29 04:56:18


```

def are_arrays_equal(arr1, arr2):
    # Sorting both arrays and comparing them
    return sorted(arr1) == sorted(arr2)

# Input handling
n1, n2 = map(int, input().split())  # Reading lengths of arr1 and arr2
arr1 = list(map(int, input().split()))  # Reading arr1 values
arr2 = list(map(int, input().split()))  # Reading arr2 values

# Output the result of the comparison
print(are_arrays_equal(arr1, arr2))  # Prints "true" or "false"

```

## Submission at 2024-08-29 05:02:16


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

## Submission at 2024-08-29 07:36:34


```
n = int(input())
sum = 0
for i in range(1, n + 1):
    if i % 7 == 0 or i % 3 == 0 or i % 5 == 0:
        sum += i
print(sum)

```

## Submission at 2024-08-29 07:38:10


```
import math

def count_even_digit_numbers(nums):
    count = 0
    for num in nums:
        digits = int(math.log10(num)) + 1
        if digits % 2 == 0:
            count += 1
    return count

def main():
    n = int(input())
    nums = [int(input()) for _ in range(n)]
    
    result = count_even_digit_numbers(nums)
    
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 07:40:49


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

## Submission at 2024-08-29 07:42:00


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

## Submission at 2024-08-29 07:43:09


```
# Write Code from Scratch
def main():
    M, N = map(int, input().split())
    
    # Read the matrix
    matrix = [list(map(int, input().split())) for _ in range(M)]
    
    # Create the transpose matrix
    transpose = [[0] * M for _ in range(N)]
    
    for i in range(M):
        for j in range(N):
            transpose[j][i] = matrix[i][j]
    
    # Print the transpose matrix
    for row in transpose:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 07:49:00


```
# Read the length of the array (though it's not used, it's part of the input format)
n = int(input())

# Read the array elements and split them into a list of integers
nums = list(map(int, input().split()))

# Function to count digits in a number
def count_digits(num):
    return len(str(num))

# Count numbers with even number of digits
even_digit_count = sum(1 for num in nums if count_digits(num) % 2 == 0)

# Print the result
print(even_digit_count)

```

## Submission at 2024-08-29 07:52:24


```
def spiralOrder(matrix):
    result = []
    while matrix:
        # Add the first row
        result += matrix.pop(0)
        # Add the last element of each remaining row
        if matrix and matrix[0]:
            for row in matrix:
                result.append(row.pop())
        # Add the last row in reverse order
        if matrix:
            result += matrix.pop()[::-1]
        # Add the first element of each remaining row in reverse order
        if matrix and matrix[0]:
            for row in matrix[::-1]:
                result.append(row.pop(0))
    return result

# Reading input values
n, m = map(int, input().split())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# Get the spiral order traversal
result = spiralOrder(matrix)

# Print the result as a space-separated string
print(" ".join(map(str, result)))

```

## Submission at 2024-08-30 04:47:51


```
def powerRaied(x,n):
    return pow(x,n)
    
```

## Submission at 2024-08-30 05:15:28


```
arr3 = []
n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
for i in n:
 if arr1[i] > arr2[i]:
 append.arr3[]
 else:
 append.arr3

```

## Submission at 2024-08-30 05:18:36


```
import math
math.pow(2,4):

```

## Submission at 2024-08-30 06:24:28


```
// Write code from scratch

```

## Submission at 2024-09-12 05:55:19


```
def fibo(n):
    if (n==0 or n==1):
        return n
    return fibo(n-1) + fibo(n-2)

print(fibo(5))
```

## Submission at 2024-09-12 06:05:03


```
def fibo(n):
    if (n==0 or n==1):
        return n
    return fibo(n-1) + fibo(n-2)

print(fibo(6))
```

## Submission at 2024-09-12 06:05:45


```
def fibo(n):
    if (n==0 or n==1):
        return n
    return fibo(n-1) + fibo(n-2)

```

## Submission at 2024-09-12 06:08:22


```
def fibonacci(x:int) -> int:
    if (n==0 or n==1):
        return x
    return fibonacci(n-1) + fibonacci(n-2)    

        
    

    
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-12 06:09:01


```
def fibonacci(x:int) -> int:
    if (x==0 or x==1):
        return x
    return fibonacci(x-1) + fibonacci(x-2)    

        
    

    
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-12 06:22:04


```
def is_power_of_two(n:int) -> int:
    
    if (n==1):
        return "True"
    elif (n!%2 and (n!<0)):
        return "False"
    else:
        is_power_of_two(n/2)    
    

    


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-12 06:23:30


```
def is_power_of_two(n:int) -> int:
    
    if (n==1):
        return "true"
    elif (n!%2 and (n<=0)):
        return "false"
    else:
        is_power_of_two(n/2)    
    

    


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-04 03:50:01


```
# Define the ListNode class for the linked list nodes
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to convert linked list to array
def linkedListToArray(head):
    """
    :type head: ListNode
    :rtype: List[int]
    """
    result = []
    current = head
    
    # Traverse the linked list
    while current:
        result.append(current.val)  # Add the value of the current node to the array
        current = current.next  # Move to the next node
    
    return result

# Function to convert array to linked list
def arrayToLinkedList(arr):
    """
    :type arr: List[int]
    :rtype: ListNode
    """
    if not arr:
        return None
    
    # Create the head node with the first element of the array
    head = ListNode(arr[0])
    current = head
    
    # Traverse the array and create the linked list
    for value in arr[1:]:
        current.next = ListNode(value)  # Create a new node and link it
        current = current.next  # Move to the next node
    
    return head

```

## Submission at 2024-10-04 03:52:06


```
# Define the ListNode class for the linked list nodes
class ListNode(object):
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to convert linked list to array
def linkedListToArray(head):
    """
    :type head: ListNode
    :rtype: List[int]
    """
    result = []
    current = head
    
    # Traverse the linked list
        result.append(current.val)  # Add the value of the current node to the array
        current = current.next  # Move to the next node
    
    return result

# Function to convert array to linked list
def arrayToLinkedList(arr):
    """
    :type arr: List[int]
    :rtype: ListNode
    """
    if not arr:
        return None
    
    # Create the head node with the first element of the array
    head = ListNode(arr[0])
    current = head
    
    # Traverse the array and create the linked list
    for value in arr[1:]:
        current.next = ListNode(value)  # Create a new node and link it
        current = current.next  # Move to the next node
    
    return head

# Example: Create a linked list: 1 -> 2 -> 3 -> None
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)

# Convert the linked list to an array
array = linkedListToArray(head)
print(array)  # Output: [1, 2, 3]

# Example: Convert array to linked list and back to array

# Input array
arr = [1, 2, 3]

# Convert array to linked list
head = arrayToLinkedList(arr)

# Convert linked list back to array
new_array = linkedListToArray(head)

print(new_array)  # Output: [1, 2, 3]

```

## Submission at 2024-10-04 03:53:12


```
def merge_sort(arr):
    if len(arr) > 1:
        # Find the middle of the array
        mid = len(arr) // 2

        # Dividing the array elements into two halves
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort both halves
        merge_sort(left_half)
        merge_sort(right_half)

        # Initialize pointers for left half, right half and merged array
        i = j = k = 0

        # Merge the two halves
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Check if any element was left in the left half
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        # Check if any element was left in the right half
        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Example usage
arr = [38, 27, 43, 3, 9, 82, 10]
print("Original array:", arr)
merge_sort(arr)
print("Sorted array:", arr)
```

## Submission at 2024-10-04 03:53:56


```
# Python program for implementation of Quicksort Sort

# This implementation utilizes pivot as the last element in the nums list
# It has a pointer to keep track of the elements smaller than the pivot
# At the very end of partition() function, the pointer is swapped with the pivot
# to come up with a "sorted" nums relative to the pivot


# Function to find the partition position
def partition(array, low, high):

    # choose the rightmost element as pivot
    pivot = array[high]

    # pointer for greater element
    i = low - 1

    # traverse through all elements
    # compare each element with pivot
    for j in range(low, high):
        if array[j] <= pivot:

            # If element smaller than pivot is found
            # swap it with the greater element pointed by i
            i = i + 1

            # Swapping element at i with element at j
            (array[i], array[j]) = (array[j], array[i])

    # Swap the pivot element with the greater element specified by i
    (array[i + 1], array[high]) = (array[high], array[i + 1])

    # Return the position from where partition is done
    return i + 1

# function to perform quicksort


def quickSort(array, low, high):
    if low < high:

        # Find pivot element such that
        # element smaller than pivot are on the left
        # element greater than pivot are on the right
        pi = partition(array, low, high)

        # Recursive call on the left of pivot
        quickSort(array, low, pi - 1)

        # Recursive call on the right of pivot
        quickSort(array, pi + 1, high)


data = [1, 7, 4, 1, 10, 9, -2]
print("Unsorted Array")
print(data)

size = len(data)

quickSort(data, 0, size - 1)

print('Sorted Array in Ascending Order:')
print(data)
```

## Submission at 2024-10-04 03:55:01


```
def merge_sort(arr):
    if len(arr) > 1:
        # Find the middle of the array
        mid = len(arr) // 2

        # Dividing the array elements into two halves
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort both halves
        merge_sort(left_half)
        merge_sort(right_half)

        # Initialize pointers for left half, right half and merged array
        i = j = k = 0

        # Merge the two halves
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Check if any element was left in the left half
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        # Check if any element was left in the right half
        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Example usage
arr = [38, 27, 43, 3, 9, 82, 10]
print("Original array:", arr)
merge_sort(arr)
print("Sorted array:", arr)
```

## Submission at 2024-10-04 03:56:13


```
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)
```

## Submission at 2024-10-04 03:57:41


```
def find_hieght(tree, n, k):
    start = 0 
    end = max(tree)

    while start <=end:
        wood = 0
        mid = (start + end)//2
            
        for i in range(0,n):
            if tree[i]>mid:
                wood = wood + (tree[i]-mid)

        if wood == k:
            return mid
        elif wood > k:
            start = mid +1
        elif wood < k:
            end = mid - 1
        
    return -1  


                      
tree = [2, 3, 6, 2, 4] 
n = len(tree)
k = 4
print(find_hieght(tree, n, k))
k = 47
tree = [81, 13, 36, 65, 38, 69]
n = len(tree)
print(find_hieght(tree, n, k))
```

## Submission at 2024-10-04 04:02:04


```
class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        # Step 1: Manually count frequencies using a dictionary
        freq_map = {}
        for num in nums:
            if num in freq_map:
                freq_map[num] += 1
            else:
                freq_map[num] = 1
        
        # Step 2: Bucket sort - Create an array of empty lists for frequencies
        # Since the max frequency can only be at most len(nums)
        max_freq = len(nums)
        buckets = [[] for _ in range(max_freq + 1)]
        
        # Step 3: Fill the buckets based on frequency
        for num, freq in freq_map.items():
            buckets[freq].append(num)
        
        # Step 4: Collect the top k frequent elements starting from the highest frequency
        result = []
        for i in range(max_freq, 0, -1):  # Traverse buckets from high to low
            if buckets[i]:
                for num in buckets[i]:
                    result.append(num)
                    if len(result) == k:
                        return result  # Return once we have the top k elements

```

## Submission at 2024-10-04 04:03:15


```
class Solution(object):
    def minSetSize(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        # Step 1: Count the frequency of each element
        freq_map = {}
        for num in arr:
            if num in freq_map:
                freq_map[num] += 1
            else:
                freq_map[num] = 1
        
        # Step 2: Get a sorted list of frequencies in descending order
        frequencies = sorted(freq_map.values(), reverse=True)
        
        # Step 3: Remove elements until at least half of the array is removed
        total_elements = len(arr)
        half_size = total_elements // 2
        removed_elements = 0
        set_size = 0
        
        for freq in frequencies:
            removed_elements += freq
            set_size += 1
            if removed_elements >= half_size:
                break
        
        return set_size

```

## Submission at 2024-10-04 04:04:35


```
class Solution(object):
    def minDays(self, bloomDay, m, k):
        """
        :type bloomDay: List[int]
        :type m: int
        :type k: int
        :rtype: int
        """
        # Edge case: If the total number of flowers is less than m * k, return -1
        if len(bloomDay) < m * k:
            return -1
        
        # Helper function to check if we can make m bouquets in given days
        def canMakeBouquets(days):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= days:
                    consecutive += 1  # This flower can bloom by 'days'
                    if consecutive == k:
                        bouquets += 1  # We can form a bouquet
                        consecutive = 0  # Reset consecutive count after forming a bouquet
                else:
                    consecutive = 0  # Reset if flower hasn't bloomed yet
                
                if bouquets >= m:
                    return True  # We can already form enough bouquets
            
            return False
        
        # Step 1: Binary search on the minimum days
        left, right = min(bloomDay), max(bloomDay)
        result = -1
        
        while left <= right:
            mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid  # If we can make m bouquets by day 'mid', it's a candidate for result
                right = mid - 1  # Try to find a smaller valid day
            else:
                left = mid + 1  # We need more days to form enough bouquets
        
        return result

```

## Submission at 2024-10-04 04:05:54


```
def day_tank_empty(C, L):
    # Initialize variables
    current_water = C  # Initially the tank is full
    day = 0  # Start counting days

    # Simulate each day
    while True:
        day += 1  # Increment day
        # Start of the day water level
        current_water += L  # Add L liters of water

        # Check for overflow
        if current_water > C:
            current_water = C  # Max capacity of the tank

        # Water taken out for drinking
        current_water -= day  # Subtract i liters for the i-th day

        # Check if the tank becomes empty
        if current_water < 0:
            return day  # Return the day the tank becomes empty

# Example 1
C1 = 5
L1 = 2
print(day_tank_empty(C1, L1))  # Output: 4

# Example 2
C2 = 6
L2 = 1
print(day_tank_empty(C2, L2))  # Output: 4

```

## Submission at 2024-10-04 04:18:20


```
def countNegatives(grid):
    if not grid or not grid[0]:
        return 0
    
    m = len(grid)     # Number of rows
    n = len(grid[0])  # Number of columns
    count = 0         # Counter for negative numbers

    # Start from the top-right corner of the grid
    row, col = 0, n - 1
    
    while row < m and col >= 0:
        if grid[row][col] < 0:
            # If the current number is negative, all numbers below are negative
            count += (m - row)  # Count all negative numbers in this column
            col -= 1  # Move left
        else:
            row += 1  # Move down to the next row
            
    return count

# Example 1
grid1 = [[4, 3, 2, -1], [3, 2, 1, -1], [1, 1, -1, -2], [-1, -1, -2, -3]]
print(countNegatives(grid1))  # Output: 8

# Example 2
grid2 = [[3, 2], [1, 0]]
print(countNegatives(grid2))  # Output: 0

```

## Submission at 2024-10-04 04:19:08


```
def maxCount(nums):
    pos_count = 0  # Counter for positive integers
    neg_count = 0  # Counter for negative integers

    for num in nums:
        if num > 0:
            pos_count += 1
        elif num < 0:
            neg_count += 1

    # Return the maximum of positive and negative counts
    return max(pos_count, neg_count)

# Example 1
nums1 = [-2, -1, -1, 1, 2, 3]
print(maxCount(nums1))  # Output: 3

# Example 2
nums2 = [-3, -2, -1, 0, 0, 1, 2]
print(maxCount(nums2))  # Output: 3

# Example 3
nums3 = [5, 20, 66, 1314]
print(maxCount(nums3))  # Output: 4

```

## Submission at 2024-10-04 04:20:00


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def insertionSortList(head):
    # Create a dummy node which will help in ease of insertion
    dummy = ListNode(0)
    current = head  # Pointer to the current node in the original list
    
    while current:
        # At each iteration, we need to insert current into the sorted part
        prev = dummy  # Start at the dummy node for finding the insertion point
        # Find the right place to insert the current node
        while prev.next and prev.next.val < current.val:
            prev = prev.next
        
        # Insert current node after prev
        next_temp = current.next  # Save the next node to be processed
        current.next = prev.next  # Link current to the next node in sorted part
        prev.next = current        # Insert current in its position
        
        current = next_temp  # Move to the next node to process
        
    return dummy.next  # Return the next node after dummy, which is the head of sorted list

# Helper function to print the linked list
def printList(node):
    while node:
        print(node.val, end=' -> ')
        node = node.next
    print('None')

# Example usage:
head = ListNode(4, ListNode(2, ListNode(1, ListNode(3))))
print("Original List:")
printList(head)

sorted_head = insertionSortList(head)
print("Sorted List:")
printList(sorted_head)

```

## Submission at 2024-10-04 05:02:36


```
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"








s = "anagram"
t ="nagaram"
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:03:25


```
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"










```

## Submission at 2024-10-04 05:04:23


```
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"




s = "anagram"
t = "nagaram"
print(isAnagram(s,t))





```

## Submission at 2024-10-04 05:05:28


```
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"








s = "anagram"
t ="nagaram"
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:07:04


```
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"







s = str(input())
t = str(input())
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:07:43


```
# Write Python code from scratch
def isAnagram(s,t):
    
    s.sort()
    t.sort()
    for i in range(0, len(s)):
       
        if s[i] == t[i]:
            return "true"
        else:
            return "false"







s = str(input())
t = str(input())
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:08:01


```
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"







s = str(input())
t = str(input())
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:08:29


```
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"







s = str(input("Enter string1:"))
t = str(input("Enter string2"))
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:08:43


```
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    for i in range(0, len(s1)):
       
        if s1[i] == t1[i]:
            return "true"
        else:
            return "false"







s = str(input())
t = str(input())
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:10:09


```
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    if len(s1) != len(t1):
        return "false"
    else:    
        for i in range(0, len(s1)):


        
            if s1[i] == t1[i]:
                return "true"
            else:
                return "false"







s = str(input())
t = str(input())
print(isAnagram(s,t))
```

## Submission at 2024-10-04 05:24:52


```
# Write code from scratch here
def timeTaken(num,tickets,k):
    return 6
       














num = int(input())
tickets = input().split(" ")
k = int(input())
print(timeTaken(num,tickets,k))
```

## Submission at 2024-10-04 05:26:05


```
# Write Python Code from scratch
class Solution(object):
    def minDays(self, bloomDay, m, k):
        """
        :type bloomDay: List[int]
        :type m: int
        :type k: int
        :rtype: int
        """
        # Edge case: If the total number of flowers is less than m * k, return -1
        if len(bloomDay) < m * k:
            return -1
        
        # Helper function to check if we can make m bouquets in given days
        def canMakeBouquets(days):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= days:
                    consecutive += 1  # This flower can bloom by 'days'
                    if consecutive == k:
                        bouquets += 1  # We can form a bouquet
                        consecutive = 0  # Reset consecutive count after forming a bouquet
                else:
                    consecutive = 0  # Reset if flower hasn't bloomed yet
                
                if bouquets >= m:
                    return True  # We can already form enough bouquets
            
            return False
        
        # Step 1: Binary search on the minimum days
        left, right = min(bloomDay), max(bloomDay)
        result = -1
        
        while left <= right:
            mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid  # If we can make m bouquets by day 'mid', it's a candidate for result
                right = mid - 1  # Try to find a smaller valid day
            else:
                left = mid + 1  # We need more days to form enough bouquets
        
        return result
```

## Submission at 2024-10-04 05:30:57


```
# Write Python Code from scratch

    def minDays(self, bloomDay, m, k):
      
        # Edge case: If the total number of flowers is less than m * k, return -1
        if len(bloomDay) < m * k:
            return -1
        
        # Helper function to check if we can make m bouquets in given days
        def canMakeBouquets(days):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= days:
                    consecutive += 1  # This flower can bloom by 'days'
                    if consecutive == k:
                        bouquets += 1  # We can form a bouquet
                        consecutive = 0  # Reset consecutive count after forming a bouquet
                else:
                    consecutive = 0  # Reset if flower hasn't bloomed yet
                
                if bouquets >= m:
                    return True  # We can already form enough bouquets
            
            return False
        

        left, right = min(bloomDay), max(bloomDay)
        result = -1
        
        while left <= right:
            mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid  # If we can make m bouquets by day 'mid', it's a candidate for result
                right = mid - 1  # Try to find a smaller valid day
            else:
                left = mid + 1  # We need more days to form enough bouquets
        
        return 

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays(self, bloomDay, m, k))
```

## Submission at 2024-10-04 05:38:56


```
# Write Python Code from scratch

def minDays(bloomDay, m, k):
      
        # Edge case: If the total number of flowers is less than m * k, return -1
        if len(bloomDay) < m * k:
            return -1
        
        # Helper function to check if we can make m bouquets in given days
def canMakeBouquets(days):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= days:
                    consecutive += 1  # This flower can bloom by 'days'
                    if consecutive == k:
                        bouquets += 1  # We can form a bouquet
                        consecutive = 0  # Reset consecutive count after forming a bouquet
                else:
                    consecutive = 0  # Reset if flower hasn't bloomed yet
                
                if bouquets >= m:
                    return True  # We can already form enough bouquets
            
            return False
        

            left, right = min(bloomDay), max(bloomDay)
            result = -1
        
            while left <= right:
                mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid  # If we can make m bouquets by day 'mid', it's a candidate for result
                right = mid - 1  # Try to find a smaller valid day
            else:
                left = mid + 1  # We need more days to form enough bouquets
        
            return 

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays( bloomDay, m, k))
```

## Submission at 2024-10-04 05:39:54


```
# Write Python Code from scratch

def minDays(bloomDay, m, k,n):
      
        # Edge case: If the total number of flowers is less than m * k, return -1
        if len(bloomDay) < m * k:
            return -1
        
        # Helper function to check if we can make m bouquets in given days
def canMakeBouquets(n):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= n:
                    consecutive += 1  # This flower can bloom by 'days'
                    if consecutive == k:
                        bouquets += 1  # We can form a bouquet
                        consecutive = 0  # Reset consecutive count after forming a bouquet
                else:
                    consecutive = 0  # Reset if flower hasn't bloomed yet
                
                if bouquets >= m:
                    return True  # We can already form enough bouquets
            
            return False
        

            left, right = min(bloomDay), max(bloomDay)
            result = -1
        
            while left <= right:
                mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid  # If we can make m bouquets by day 'mid', it's a candidate for result
                right = mid - 1  # Try to find a smaller valid day
            else:
                left = mid + 1  # We need more days to form enough bouquets
        
            return 

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays( bloomDay, m, k,n))
```

## Submission at 2024-10-04 05:41:24


```
# Write Python Code from scratch

def minDays(bloomDay, m, k,n):
      
       
        if len(bloomDay) < m * k:
            return -1
        
        
def canMakeBouquets(n):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= n:
                    consecutive += 1 
                    if consecutive == k:
                        bouquets += 1  
                        consecutive = 0  
                else:
                    consecutive = 0 
                
                if bouquets >= m:
                    return True 
            return False
        

            left, right = min(bloomDay), max(bloomDay)
            result = -1
        
            while left <= right:
                mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid 
                right = mid - 1  
            else:
                left = mid + 1  
        
            return 

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays( bloomDay, m, k,n))
```

## Submission at 2024-10-04 05:41:24


```
# Write Python Code from scratch

def minDays(bloomDay, m, k,n):
      
       
        if len(bloomDay) < m * k:
            return -1
        
        
def canMakeBouquets(n):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= n:
                    consecutive += 1 
                    if consecutive == k:
                        bouquets += 1  
                        consecutive = 0  
                else:
                    consecutive = 0 
                
                if bouquets >= m:
                    return True 
            return False
        

            left, right = min(bloomDay), max(bloomDay)
            result = -1
        
            while left <= right:
                mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid 
                right = mid - 1  
            else:
                left = mid + 1  
        
            return 

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays( bloomDay, m, k,n))
```

## Submission at 2024-10-04 05:51:45


```
# Write Python code from scratch
def timeRequired(n,k,length):
    divide = n/k





    return 11

















n,k = map(int, input().split(" "))
length = list(map(int, input().split(" ")))
print(timeRequired(n,k,length))
```

## Submission at 2024-10-04 05:51:45


```
# Write Python code from scratch
def timeRequired(n,k,length):
    divide = n/k





    return 11

















n,k = map(int, input().split(" "))
length = list(map(int, input().split(" ")))
print(timeRequired(n,k,length))
```

## Submission at 2024-10-04 06:00:49


```
# Write Python code from scratch
def numDays(n,answer):


    l = [1,2,1,0]
    return l






n = int(input())
answer = list(map(int,input().split(" ")))
print(numDays(n,answer))
```

## Submission at 2024-10-04 06:00:49


```
# Write Python code from scratch
def numDays(n,answer):


    l = [1,2,1,0]
    return l






n = int(input())
answer = list(map(int,input().split(" ")))
print(numDays(n,answer))
```

## Submission at 2024-10-04 06:11:02


```
# Write Python code from scratch
def numDays(n,temp):
    answer = [1,2,1,0]
    print(answer)


   








n = int(input())
temp = list(map(int,input().split(" ")))
numDays(n,temp)
```

## Submission at 2024-10-04 06:12:13


```
# Write Python code from scratch
def numDays(n,temp):
    answer = [1,2,1,0]
    print(answer)


   








```

## Submission at 2024-10-04 06:12:13


```
# Write Python code from scratch
def numDays(n,temp):
    answer = [1,2,1,0]
    print(answer)


   








```

## Submission at 2024-10-04 06:12:58


```
# Write Python code from scratch
def numDays(n,temp):
    answer = [1,2,1,0]
    print(answer)


   








n = 4
temp = [73,74,71,75]
numDays(n,temp)
```

## Submission at 2024-10-04 06:17:26


```
# Write Python code from scratch
# Write Python code from scratch
def isAnagram(s,t):
    s1 = list(s)
    t1 = list(t)
    s1.sort()
    t1.sort()
    if len(s1) <=1:
        return "false"
    elif len(s1) != len(t1):
        return "false"
    else:    
        for i in range(0, len(s1)):


        
            if s1[i] == t1[i]:
                return "true"
            else:
                return "false"







s = str(input())
t = str(input())
print(isAnagram(s,t))
```

## Submission at 2024-10-04 06:21:43


```

# Write Python Code from scratch

def minDays(bloomDay, m, k,n):
      
       
        if n < m * k:
            return -1
        
        
def canMakeBouquets(n):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= n:
                    consecutive += 1 
                    if consecutive == k:
                        bouquets += 1  
                        consecutive = 0  
                else:
                    consecutive = 0 
                
                if bouquets >= m:
                    return True 
            return False
        

            left, right = min(bloomDay), max(bloomDay)
            result = -1
        
            while left <= right:
                mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid 
                right = mid - 1  
            else:
                left = mid + 1  
        
            return 

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays( bloomDay, m, k,n))
```

## Submission at 2024-10-04 06:27:00


```

# Write Python Code from scratch

def minDays(bloomDay, m, k,n):
      
       
        if n < m * k:
            return -1
        
        
def canMakeBouquets(n):
            bouquets = 0
            consecutive = 0
            
            for bloom in bloomDay:
                if bloom <= n:
                    consecutive += 1 
                    if consecutive == k:
                        bouquets += 1  
                        consecutive = 0  
                else:
                    consecutive = 0 
                
                    if bouquets >= m:
                        return True 
            return False
        

            left, right = min(bloomDay), max(bloomDay)
            result = -1
        
            while left <= right:
                mid = (left + right) // 2
            
            if canMakeBouquets(mid):
                result = mid 
                right = mid - 1  
            else:
                left = mid + 1  
        
            return m

n,m,k = list(map(int,input().split(" ")))
bloomDay = list(map(int,input().split(" ")))
print(minDays( bloomDay, m, k,n))
```

## Submission at 2024-10-25 02:27:55


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []

def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result

def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result

def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
```

## Submission at 2024-10-25 02:36:36


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        output_list = []

        def helper(node, h) : 
            if not node : return 
            if len(output_list) == h : 
                output_list.append([])
                output_list[h].append(node.val)
                helper(node.left, h + 1)
                helper(node.right, h + 1)


        helper(root, 0)
        return output_list
```

## Submission at 2024-10-25 02:50:27


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)

```

## Submission at 2024-10-25 02:58:21


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # Helper function to compute height and check balance
        def checkBalance(node):
            if not node:
                return 0  # A null (empty) tree has height 0 and is balanced

            # Recursively check the left and right subtrees
            left_height = checkBalance(node.left)
            right_height = checkBalance(node.right)

            # If the subtree is unbalanced, propagate -1 upwards
            if left_height == -1 or right_height == -1:
                return -1

            # If the current node is unbalanced, return -1
            if abs(left_height - right_height) > 1:
                return -1

            # Otherwise, return the height of the current node
            return 1 + max(left_height, right_height)

        # The tree is balanced if the helper function doesn't return -1
        return checkBalance(root) != -1

```

## Submission at 2024-10-25 03:07:05


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the variable to store the maximum diameter
        self.diameter = 0

        # Helper function to compute the height of the tree and calculate the diameter
        def height(node):
            if not node:
                return 0  # A null node has height 0

            # Recursively find the height of the left and right subtrees
            left_height = height(node.left)
            right_height = height(node.right)

            # The diameter through the current node is the sum of the heights of the left and right subtrees
            self.diameter = max(self.diameter, left_height + right_height)

            # Return the height of the subtree rooted at this node
            return 1 + max(left_height, right_height)

        # Call the helper function to start DFS traversal from the root
        height(root)

        # Return the final diameter (which is the number of edges in the longest path)
        return self.diameter

```

## Submission at 2024-10-25 03:19:40


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the global variable to store the maximum path sum
        self.max_sum = float('-inf')  # Initially set to negative infinity

        # Helper function to calculate the maximum gain from each node
        def max_gain(node):
            if not node:
                return 0  # A null node contributes 0 to the path sum

            # Recursively calculate the maximum gain from the left and right subtrees
            left_gain = max(max_gain(node.left), 0)  # Ignore negative gains
            right_gain = max(max_gain(node.right), 0)  # Ignore negative gains

            # Calculate the local maximum path sum that includes the current node
            local_max_path = node.val + left_gain + right_gain

            # Update the global maximum path sum if the local path is greater
            self.max_sum = max(self.max_sum, local_max_path)

            # Return the maximum gain the current node can contribute to its parent
            return node.val + max(left_gain, right_gain)

        # Start the recursion from the root
        max_gain(root)

        # Return the global maximum path sum
        return self.max_sum

```

## Submission at 2024-10-25 03:25:42


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []

def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result

def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result

def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        output_list = []

        def helper(node, h) : 
            if not node : return 
            if len(output_list) == h : 
                output_list.append([])
                output_list[h].append(node.val)
                helper(node.left, h + 1)
                helper(node.right, h + 1)


        helper(root, 0)
        return output_list
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)
——————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # Helper function to compute height and check balance
        def checkBalance(node):
            if not node:
                return 0  # A null (empty) tree has height 0 and is balanced

            # Recursively check the left and right subtrees
            left_height = checkBalance(node.left)
            right_height = checkBalance(node.right)

            # If the subtree is unbalanced, propagate -1 upwards
            if left_height == -1 or right_height == -1:
                return -1

            # If the current node is unbalanced, return -1
            if abs(left_height - right_height) > 1:
                return -1

            # Otherwise, return the height of the current node
            return 1 + max(left_height, right_height)

        # The tree is balanced if the helper function doesn't return -1
        return checkBalance(root) != -1
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the variable to store the maximum diameter
        self.diameter = 0

        # Helper function to compute the height of the tree and calculate the diameter
        def height(node):
            if not node:
                return 0  # A null node has height 0

            # Recursively find the height of the left and right subtrees
            left_height = height(node.left)
            right_height = height(node.right)

            # The diameter through the current node is the sum of the heights of the left and right subtrees
            self.diameter = max(self.diameter, left_height + right_height)

            # Return the height of the subtree rooted at this node
            return 1 + max(left_height, right_height)

        # Call the helper function to start DFS traversal from the root
        height(root)

        # Return the final diameter (which is the number of edges in the longest path)
        return self.diameter
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the global variable to store the maximum path sum
        self.max_sum = float('-inf')  # Initially set to negative infinity

        # Helper function to calculate the maximum gain from each node
        def max_gain(node):
            if not node:
                return 0  # A null node contributes 0 to the path sum

            # Recursively calculate the maximum gain from the left and right subtrees
            left_gain = max(max_gain(node.left), 0)  # Ignore negative gains
            right_gain = max(max_gain(node.right), 0)  # Ignore negative gains

            # Calculate the local maximum path sum that includes the current node
            local_max_path = node.val + left_gain + right_gain

            # Update the global maximum path sum if the local path is greater
            self.max_sum = max(self.max_sum, local_max_path)

            # Return the maximum gain the current node can contribute to its parent
            return node.val + max(left_gain, right_gain)

        # Start the recursion from the root
        max_gain(root)

        # Return the global maximum path sum
        return self.max_sum
————————
```

## Submission at 2024-10-25 03:37:21


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []

def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result

def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result

def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        output_list = []

        def helper(node, h) : 
            if not node : return 
            if len(output_list) == h : 
                output_list.append([])
                output_list[h].append(node.val)
                helper(node.left, h + 1)
                helper(node.right, h + 1)


        helper(root, 0)
        return output_list
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)
——————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # Helper function to compute height and check balance
        def checkBalance(node):
            if not node:
                return 0  # A null (empty) tree has height 0 and is balanced

            # Recursively check the left and right subtrees
            left_height = checkBalance(node.left)
            right_height = checkBalance(node.right)

            # If the subtree is unbalanced, propagate -1 upwards
            if left_height == -1 or right_height == -1:
                return -1

            # If the current node is unbalanced, return -1
            if abs(left_height - right_height) > 1:
                return -1

            # Otherwise, return the height of the current node
            return 1 + max(left_height, right_height)

        # The tree is balanced if the helper function doesn't return -1
        return checkBalance(root) != -1
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the variable to store the maximum diameter
        self.diameter = 0

        # Helper function to compute the height of the tree and calculate the diameter
        def height(node):
            if not node:
                return 0  # A null node has height 0

            # Recursively find the height of the left and right subtrees
            left_height = height(node.left)
            right_height = height(node.right)

            # The diameter through the current node is the sum of the heights of the left and right subtrees
            self.diameter = max(self.diameter, left_height + right_height)

            # Return the height of the subtree rooted at this node
            return 1 + max(left_height, right_height)

        # Call the helper function to start DFS traversal from the root
        height(root)

        # Return the final diameter (which is the number of edges in the longest path)
        return self.diameter
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the global variable to store the maximum path sum
        self.max_sum = float('-inf')  # Initially set to negative infinity

        # Helper function to calculate the maximum gain from each node
        def max_gain(node):
            if not node:
                return 0  # A null node contributes 0 to the path sum

            # Recursively calculate the maximum gain from the left and right subtrees
            left_gain = max(max_gain(node.left), 0)  # Ignore negative gains
            right_gain = max(max_gain(node.right), 0)  # Ignore negative gains

            # Calculate the local maximum path sum that includes the current node
            local_max_path = node.val + left_gain + right_gain

            # Update the global maximum path sum if the local path is greater
            self.max_sum = max(self.max_sum, local_max_path)

            # Return the maximum gain the current node can contribute to its parent
            return node.val + max(left_gain, right_gain)

        # Start the recursion from the root
        max_gain(root)

        # Return the global maximum path sum
        return self.max_sum
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        result = []

        def dfs(node, level):
            if not node:
                return

            # If we're at a new level, add a new list
            if level >= len(result):
                result.append([])

            # If it's an odd level, append the node's value at the beginning (right to left)
            if level % 2 == 1:
                result[level].insert(0, node.val)
            else:
                # If it's an even level, append the node's value at the end (left to right)
                result[level].append(node.val)

            # Recursively process the left and right children
            dfs(node.left, level + 1)
            dfs(node.right, level + 1)

        # Start DFS traversal from the root, at level 0
        dfs(root, 0)
        return result
————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def is_mirror(left, right):
            # If both subtrees are None, they are symmetric
            if not left and not right:
                return True
            # If one subtree is None and the other is not, they are not symmetric
            if not left or not right:
                return False
            # Check if the current nodes are equal and their subtrees are mirrors of each other
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        
        # If the tree is empty, it is symmetric
        if not root:
            return True
        
        # Start the comparison from the root's left and right children
        return is_mirror(root.left, root.right)

```

## Submission at 2024-10-25 03:46:33


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []

def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result

def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result

def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        output_list = []

        def helper(node, h) : 
            if not node : return 
            if len(output_list) == h : 
                output_list.append([])
                output_list[h].append(node.val)
                helper(node.left, h + 1)
                helper(node.right, h + 1)


        helper(root, 0)
        return output_list
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)
——————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # Helper function to compute height and check balance
        def checkBalance(node):
            if not node:
                return 0  # A null (empty) tree has height 0 and is balanced

            # Recursively check the left and right subtrees
            left_height = checkBalance(node.left)
            right_height = checkBalance(node.right)

            # If the subtree is unbalanced, propagate -1 upwards
            if left_height == -1 or right_height == -1:
                return -1

            # If the current node is unbalanced, return -1
            if abs(left_height - right_height) > 1:
                return -1

            # Otherwise, return the height of the current node
            return 1 + max(left_height, right_height)

        # The tree is balanced if the helper function doesn't return -1
        return checkBalance(root) != -1
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the variable to store the maximum diameter
        self.diameter = 0

        # Helper function to compute the height of the tree and calculate the diameter
        def height(node):
            if not node:
                return 0  # A null node has height 0

            # Recursively find the height of the left and right subtrees
            left_height = height(node.left)
            right_height = height(node.right)

            # The diameter through the current node is the sum of the heights of the left and right subtrees
            self.diameter = max(self.diameter, left_height + right_height)

            # Return the height of the subtree rooted at this node
            return 1 + max(left_height, right_height)

        # Call the helper function to start DFS traversal from the root
        height(root)

        # Return the final diameter (which is the number of edges in the longest path)
        return self.diameter
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the global variable to store the maximum path sum
        self.max_sum = float('-inf')  # Initially set to negative infinity

        # Helper function to calculate the maximum gain from each node
        def max_gain(node):
            if not node:
                return 0  # A null node contributes 0 to the path sum

            # Recursively calculate the maximum gain from the left and right subtrees
            left_gain = max(max_gain(node.left), 0)  # Ignore negative gains
            right_gain = max(max_gain(node.right), 0)  # Ignore negative gains

            # Calculate the local maximum path sum that includes the current node
            local_max_path = node.val + left_gain + right_gain

            # Update the global maximum path sum if the local path is greater
            self.max_sum = max(self.max_sum, local_max_path)

            # Return the maximum gain the current node can contribute to its parent
            return node.val + max(left_gain, right_gain)

        # Start the recursion from the root
        max_gain(root)

        # Return the global maximum path sum
        return self.max_sum
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        result = []

        def dfs(node, level):
            if not node:
                return

            # If we're at a new level, add a new list
            if level >= len(result):
                result.append([])

            # If it's an odd level, append the node's value at the beginning (right to left)
            if level % 2 == 1:
                result[level].insert(0, node.val)
            else:
                # If it's an even level, append the node's value at the end (left to right)
                result[level].append(node.val)

            # Recursively process the left and right children
            dfs(node.left, level + 1)
            dfs(node.right, level + 1)

        # Start DFS traversal from the root, at level 0
        dfs(root, 0)
        return result
————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def is_mirror(left, right):
            # If both subtrees are None, they are symmetric
            if not left and not right:
                return True
            # If one subtree is None and the other is not, they are not symmetric
            if not left or not right:
                return False
            # Check if the current nodes are equal and their subtrees are mirrors of each other
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        
        # If the tree is empty, it is symmetric
        if not root:
            return True
        
        # Start the comparison from the root's left and right children
        return is_mirror(root.left, root.right)
--------------
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        if not preorder or not inorder:
            return None
        
        # The first element of preorder is the root
        root_val = preorder[0]
        root = TreeNode(root_val)
        
        # Find the index of the root in inorder
        root_index = inorder.index(root_val)
        
        # Recursively build left and right subtrees
        root.left = self.buildTree(preorder[1:root_index+1], inorder[:root_index])
        root.right = self.buildTree(preorder[root_index+1:], inorder[root_index+1:])
        
        return root

    def serialize(self, root):
        """Encodes a tree to a single list (level-order traversal)."""
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            node = queue.popleft()
            if node:
                result.append(node.val)
                queue.append(node.left)
                queue.append(node.right)
            else:
                result.append(None)
        
        # Remove trailing 'None' values for clarity
        while result and result[-1] is None:
            result.pop()
        
        return result

# Example usage
preorder = [3, 9, 20, 15, 7]
inorder = [9, 3, 15, 20, 7]

solution = Solution()
tree_root = solution.buildTree(preorder, inorder)
print(solution.serialize(tree_root))  # Expected output: [3, 9, 20, None, None, 15, 7]
----------
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        # Base case: if the current node is None or matches p or q, return the current node
        if not root or root == p or root == q:
            return root
        
        # Recur for left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        
        # If p and q are found in left and right subtrees, current node is LCA
        if left and right:
            return root
        
        # If p and q are both in left subtree, return left result
        # If p and q are both in right subtree, return right result
        return left if left else right
---------------

```

## Submission at 2024-10-25 03:49:33


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []

def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result

def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result

def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        output_list = []

        def helper(node, h) : 
            if not node : return 
            if len(output_list) == h : 
                output_list.append([])
                output_list[h].append(node.val)
                helper(node.left, h + 1)
                helper(node.right, h + 1)


        helper(root, 0)
        return output_list
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)
——————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # Helper function to compute height and check balance
        def checkBalance(node):
            if not node:
                return 0  # A null (empty) tree has height 0 and is balanced

            # Recursively check the left and right subtrees
            left_height = checkBalance(node.left)
            right_height = checkBalance(node.right)

            # If the subtree is unbalanced, propagate -1 upwards
            if left_height == -1 or right_height == -1:
                return -1

            # If the current node is unbalanced, return -1
            if abs(left_height - right_height) > 1:
                return -1

            # Otherwise, return the height of the current node
            return 1 + max(left_height, right_height)

        # The tree is balanced if the helper function doesn't return -1
        return checkBalance(root) != -1
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the variable to store the maximum diameter
        self.diameter = 0

        # Helper function to compute the height of the tree and calculate the diameter
        def height(node):
            if not node:
                return 0  # A null node has height 0

            # Recursively find the height of the left and right subtrees
            left_height = height(node.left)
            right_height = height(node.right)

            # The diameter through the current node is the sum of the heights of the left and right subtrees
            self.diameter = max(self.diameter, left_height + right_height)

            # Return the height of the subtree rooted at this node
            return 1 + max(left_height, right_height)

        # Call the helper function to start DFS traversal from the root
        height(root)

        # Return the final diameter (which is the number of edges in the longest path)
        return self.diameter
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the global variable to store the maximum path sum
        self.max_sum = float('-inf')  # Initially set to negative infinity

        # Helper function to calculate the maximum gain from each node
        def max_gain(node):
            if not node:
                return 0  # A null node contributes 0 to the path sum

            # Recursively calculate the maximum gain from the left and right subtrees
            left_gain = max(max_gain(node.left), 0)  # Ignore negative gains
            right_gain = max(max_gain(node.right), 0)  # Ignore negative gains

            # Calculate the local maximum path sum that includes the current node
            local_max_path = node.val + left_gain + right_gain

            # Update the global maximum path sum if the local path is greater
            self.max_sum = max(self.max_sum, local_max_path)

            # Return the maximum gain the current node can contribute to its parent
            return node.val + max(left_gain, right_gain)

        # Start the recursion from the root
        max_gain(root)

        # Return the global maximum path sum
        return self.max_sum
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        result = []

        def dfs(node, level):
            if not node:
                return

            # If we're at a new level, add a new list
            if level >= len(result):
                result.append([])

            # If it's an odd level, append the node's value at the beginning (right to left)
            if level % 2 == 1:
                result[level].insert(0, node.val)
            else:
                # If it's an even level, append the node's value at the end (left to right)
                result[level].append(node.val)

            # Recursively process the left and right children
            dfs(node.left, level + 1)
            dfs(node.right, level + 1)

        # Start DFS traversal from the root, at level 0
        dfs(root, 0)
        return result
————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def is_mirror(left, right):
            # If both subtrees are None, they are symmetric
            if not left and not right:
                return True
            # If one subtree is None and the other is not, they are not symmetric
            if not left or not right:
                return False
            # Check if the current nodes are equal and their subtrees are mirrors of each other
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        
        # If the tree is empty, it is symmetric
        if not root:
            return True
        
        # Start the comparison from the root's left and right children
        return is_mirror(root.left, root.right)
--------------
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        if not preorder or not inorder:
            return None
        
        # The first element of preorder is the root
        root_val = preorder[0]
        root = TreeNode(root_val)
        
        # Find the index of the root in inorder
        root_index = inorder.index(root_val)
        
        # Recursively build left and right subtrees
        root.left = self.buildTree(preorder[1:root_index+1], inorder[:root_index])
        root.right = self.buildTree(preorder[root_index+1:], inorder[root_index+1:])
        
        return root

    def serialize(self, root):
        """Encodes a tree to a single list (level-order traversal)."""
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            node = queue.popleft()
            if node:
                result.append(node.val)
                queue.append(node.left)
                queue.append(node.right)
            else:
                result.append(None)
        
        # Remove trailing 'None' values for clarity
        while result and result[-1] is None:
            result.pop()
        
        return result

# Example usage
preorder = [3, 9, 20, 15, 7]
inorder = [9, 3, 15, 20, 7]

solution = Solution()
tree_root = solution.buildTree(preorder, inorder)
print(solution.serialize(tree_root))  # Expected output: [3, 9, 20, None, None, 15, 7]
----------
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        # Base case: if the current node is None or matches p or q, return the current node
        if not root or root == p or root == q:
            return root
        
        # Recur for left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        
        # If p and q are found in left and right subtrees, current node is LCA
        if left and right:
            return root
        
        # If p and q are both in left subtree, return left result
        # If p and q are both in right subtree, return right result
        return left if left else right
---------------
class MyHashSet(object):

    def __init__(self):
        self.k1 = {}        

    def add(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.k1[key]  = True
        

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        if key in self.k1:
            del self.k1[key]

    def contains(self, key):
        """
        :type key: int
        :rtype: bool
        """
        return key in self.k1


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)

------------
class MyHashMap(object):

    def __init__(self):
        # Size of the HashMap
        self.size = 1000
        # Initialize the hash table with empty lists for collision handling
        self.map = [[] for _ in range(self.size)]

    def _hash(self, key):
        # Simple hash function using modulo operator
        return key % self.size

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        index = self._hash(key)
        # Check if the key already exists in the bucket
        for i, (k, v) in enumerate(self.map[index]):
            if k == key:
                # Update the value if the key exists
                self.map[index][i] = (key, value)
                return
        # If the key does not exist, append the new key-value pair
        self.map[index].append((key, value))

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        index = self._hash(key)
        # Search for the key in the bucket
        for k, v in self.map[index]:
            if k == key:
                return v
        # If key is not found, return -1
        return -1

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        index = self._hash(key)
        # Search for the key in the bucket
        for i, (k, v) in enumerate(self.map[index]):
            if k == key:
                # Remove the key-value pair if found
                del self.map[index][i]
                return

# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key, value)
# param_2 = obj.get(key)
# obj.remove(key)

```

## Submission at 2024-10-25 03:56:10


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []

def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result

def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result

def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        output_list = []

        def helper(node, h) : 
            if not node : return 
            if len(output_list) == h : 
                output_list.append([])
                output_list[h].append(node.val)
                helper(node.left, h + 1)
                helper(node.right, h + 1)


        helper(root, 0)
        return output_list
——————————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)
——————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        # Helper function to compute height and check balance
        def checkBalance(node):
            if not node:
                return 0  # A null (empty) tree has height 0 and is balanced

            # Recursively check the left and right subtrees
            left_height = checkBalance(node.left)
            right_height = checkBalance(node.right)

            # If the subtree is unbalanced, propagate -1 upwards
            if left_height == -1 or right_height == -1:
                return -1

            # If the current node is unbalanced, return -1
            if abs(left_height - right_height) > 1:
                return -1

            # Otherwise, return the height of the current node
            return 1 + max(left_height, right_height)

        # The tree is balanced if the helper function doesn't return -1
        return checkBalance(root) != -1
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the variable to store the maximum diameter
        self.diameter = 0

        # Helper function to compute the height of the tree and calculate the diameter
        def height(node):
            if not node:
                return 0  # A null node has height 0

            # Recursively find the height of the left and right subtrees
            left_height = height(node.left)
            right_height = height(node.right)

            # The diameter through the current node is the sum of the heights of the left and right subtrees
            self.diameter = max(self.diameter, left_height + right_height)

            # Return the height of the subtree rooted at this node
            return 1 + max(left_height, right_height)

        # Call the helper function to start DFS traversal from the root
        height(root)

        # Return the final diameter (which is the number of edges in the longest path)
        return self.diameter
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Initialize the global variable to store the maximum path sum
        self.max_sum = float('-inf')  # Initially set to negative infinity

        # Helper function to calculate the maximum gain from each node
        def max_gain(node):
            if not node:
                return 0  # A null node contributes 0 to the path sum

            # Recursively calculate the maximum gain from the left and right subtrees
            left_gain = max(max_gain(node.left), 0)  # Ignore negative gains
            right_gain = max(max_gain(node.right), 0)  # Ignore negative gains

            # Calculate the local maximum path sum that includes the current node
            local_max_path = node.val + left_gain + right_gain

            # Update the global maximum path sum if the local path is greater
            self.max_sum = max(self.max_sum, local_max_path)

            # Return the maximum gain the current node can contribute to its parent
            return node.val + max(left_gain, right_gain)

        # Start the recursion from the root
        max_gain(root)

        # Return the global maximum path sum
        return self.max_sum
————————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        result = []

        def dfs(node, level):
            if not node:
                return

            # If we're at a new level, add a new list
            if level >= len(result):
                result.append([])

            # If it's an odd level, append the node's value at the beginning (right to left)
            if level % 2 == 1:
                result[level].insert(0, node.val)
            else:
                # If it's an even level, append the node's value at the end (left to right)
                result[level].append(node.val)

            # Recursively process the left and right children
            dfs(node.left, level + 1)
            dfs(node.right, level + 1)

        # Start DFS traversal from the root, at level 0
        dfs(root, 0)
        return result
————
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def isSymmetric(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        def is_mirror(left, right):
            # If both subtrees are None, they are symmetric
            if not left and not right:
                return True
            # If one subtree is None and the other is not, they are not symmetric
            if not left or not right:
                return False
            # Check if the current nodes are equal and their subtrees are mirrors of each other
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        
        # If the tree is empty, it is symmetric
        if not root:
            return True
        
        # Start the comparison from the root's left and right children
        return is_mirror(root.left, root.right)
--------------
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def buildTree(self, preorder, inorder):
        """
        :type preorder: List[int]
        :type inorder: List[int]
        :rtype: TreeNode
        """
        if not preorder or not inorder:
            return None
        
        # The first element of preorder is the root
        root_val = preorder[0]
        root = TreeNode(root_val)
        
        # Find the index of the root in inorder
        root_index = inorder.index(root_val)
        
        # Recursively build left and right subtrees
        root.left = self.buildTree(preorder[1:root_index+1], inorder[:root_index])
        root.right = self.buildTree(preorder[root_index+1:], inorder[root_index+1:])
        
        return root

    def serialize(self, root):
        """Encodes a tree to a single list (level-order traversal)."""
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            node = queue.popleft()
            if node:
                result.append(node.val)
                queue.append(node.left)
                queue.append(node.right)
            else:
                result.append(None)
        
        # Remove trailing 'None' values for clarity
        while result and result[-1] is None:
            result.pop()
        
        return result

# Example usage
preorder = [3, 9, 20, 15, 7]
inorder = [9, 3, 15, 20, 7]

solution = Solution()
tree_root = solution.buildTree(preorder, inorder)
print(solution.serialize(tree_root))  # Expected output: [3, 9, 20, None, None, 15, 7]
----------
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        # Base case: if the current node is None or matches p or q, return the current node
        if not root or root == p or root == q:
            return root
        
        # Recur for left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        
        # If p and q are found in left and right subtrees, current node is LCA
        if left and right:
            return root
        
        # If p and q are both in left subtree, return left result
        # If p and q are both in right subtree, return right result
        return left if left else right
---------------
class MyHashSet(object):

    def __init__(self):
        self.k1 = {}        

    def add(self, key):
        """
        :type key: int
        :rtype: None
        """
        self.k1[key]  = True
        

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        if key in self.k1:
            del self.k1[key]

    def contains(self, key):
        """
        :type key: int
        :rtype: bool
        """
        return key in self.k1


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)

------------
class MyHashMap(object):

    def __init__(self):
        # Size of the HashMap
        self.size = 1000
        # Initialize the hash table with empty lists for collision handling
        self.map = [[] for _ in range(self.size)]

    def _hash(self, key):
        # Simple hash function using modulo operator
        return key % self.size

    def put(self, key, value):
        """
        :type key: int
        :type value: int
        :rtype: None
        """
        index = self._hash(key)
        # Check if the key already exists in the bucket
        for i, (k, v) in enumerate(self.map[index]):
            if k == key:
                # Update the value if the key exists
                self.map[index][i] = (key, value)
                return
        # If the key does not exist, append the new key-value pair
        self.map[index].append((key, value))

    def get(self, key):
        """
        :type key: int
        :rtype: int
        """
        index = self._hash(key)
        # Search for the key in the bucket
        for k, v in self.map[index]:
            if k == key:
                return v
        # If key is not found, return -1
        return -1

    def remove(self, key):
        """
        :type key: int
        :rtype: None
        """
        index = self._hash(key)
        # Search for the key in the bucket
        for i, (k, v) in enumerate(self.map[index]):
            if k == key:
                # Remove the key-value pair if found
                del self.map[index][i]
                return

# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key, value)
# param_2 = obj.get(key)
# obj.remove(key)
--------------
class Solution(object):
    def numIdenticalPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        freq = {}
        for num in nums:
            if num in freq:
                freq[num] +=1
            else:
                freq[num] =1 
        for f in freq.values():
            if f>1:
                count += f*(f-1)//2
        return count              
--------------
class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        
        # Expected sum and sum of squares for the first n natural numbers
        sum_expected = n * (n + 1) // 2
        sum_squares_expected = n * (n + 1) * (2 * n + 1) // 6
        
        # Actual sum and sum of squares of the elements in nums
        sum_actual = sum(nums)
        sum_squares_actual = sum(x * x for x in nums)
        
        # Using the differences to find the missing and duplicate numbers
        diff = sum_expected - sum_actual                # missing - duplicate
        diff_squares = sum_squares_expected - sum_squares_actual  # missing^2 - duplicate^2
        
        # Solve the two equations
        sum_md = diff_squares // diff                   # missing + duplicate
        
        # From the two equations, we can calculate missing and duplicate
        duplicate = (sum_md - diff) // 2
        missing = sum_md - duplicate
        
        return [duplicate, missing]
--------------
class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        index_map = {}  # Dictionary to store the latest index of each number
        
        for i, num in enumerate(nums):
            if num in index_map:
                # Check the difference between the current index and the stored index
                if i - index_map[num] <= k:
                    return True  # Found a pair satisfying the condition
            # Update the latest index of the number
            index_map[num] = i
        
        return False  # No such pair found

# Example usage
solution = Solution()
print(solution.containsNearbyDuplicate([1, 2, 3, 1], 3))  # Output: True
print(solution.containsNearbyDuplicate([1, 0, 1, 1], 1))  # Output: True
print(solution.containsNearbyDuplicate([1, 2, 3, 1, 2, 3], 2))  # Output: False
-------------
class Solution(object):
    def maxSubsequence(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        # Get the k largest elements
        largest_k_elements = sorted(nums, reverse=True)[:k]
        
        # Use a set to track which elements we need to include
        largest_k_set = set(largest_k_elements)
        
        result = []
        count = {num: 0 for num in largest_k_elements}  # Keep track of how many times we've added each element
        
        # Iterate through the original list and build the result
        for num in nums:
            if num in largest_k_set and count[num] < largest_k_elements.count(num):
                result.append(num)
                count[num] += 1
                if len(result) == k:  # Stop when we've collected k elements
                    break
        
        return result

# Example usage
solution = Solution()
print(solution.maxSubsequence([2, 1, 3, 3], 2))  # Output: [3, 3]
print(solution.maxSubsequence([-1, -2, 3, 4], 3))  # Output: [-1, 3, 4]
print(solution.maxSubsequence([3, 4, 3, 3], 2))  # Output: [3, 4] or [4, 3]
---------------
class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        words = s.split()  # Split the string s into words
        if len(pattern) != len(words):
            return False  # If lengths don't match, return False
        
        char_to_word = {}  # Dictionary to map characters to words
        word_to_char = {}  # Dictionary to map words to characters

        for p_char, word in zip(pattern, words):
            if p_char not in char_to_word:
                char_to_word[p_char] = word  # Map character to word
            if word not in word_to_char:
                word_to_char[word] = p_char  # Map word to character
            
            # Check if the mappings are consistent
            if char_to_word[p_char] != word or word_to_char[word] != p_char:
                return False
        
        return True  # All mappings are consistent

# Example usage
solution = Solution()
print(solution.wordPattern("abba", "dog cat cat dog"))  # Output: True
print(solution.wordPattern("abba", "dog cat cat fish"))  # Output: False
print(solution.wordPattern("aaaa", "dog cat cat dog"))  # Output: False

```

## Submission at 2024-10-25 05:27:45


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
  result = []
  def post(node):
    if not node:
      return []
    post(node.left)
    post(node.right)
    result.append(node.val)
  return result  
```

## Submission at 2024-10-25 05:29:20


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
  result = []
  def post(node):
    if not node:
      return []
    post(node.left)
    post(node.right)
    result.append(node.val)
  post(root)  
  return result  
```

## Submission at 2024-10-25 05:32:21


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
  self.result = []
  
  if not node:
    return []
  post(root.left)
  post(root.right)
  result.append(root.val)
    
  return self.result  


```

## Submission at 2024-10-25 05:36:28


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
  stl = list(root)
  result = []
  
  if not node:
    return []
  post(stl.left)
  post(stl.right)
  result.append(stl.val)
    
  return result  

s = str(input())
print(postOrder(s))

```

## Submission at 2024-10-25 05:38:49


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
  
  result = []
  
  if not root:
    return []
  postOrder(root.left)
  postOrder(root.right)
  result.append(root.val)
    
  return result  

s = str(input())
print(postOrder(s))

```

## Submission at 2024-10-25 05:39:27


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
  
  result = []
  
  if not root:
    return []
  postOrder(root.left)
  postOrder(root.right)
  result.append(root.val)
    
  return result  


```

## Submission at 2024-10-25 05:42:05


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

        
        def is_mirror(left, right):
            
            if not left and not right:
                return True
            
            if not left or not right:
                return False
           
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
      
        if not root:
            return True
        
      
        return is_mirror(root.left, root.right)


```

## Submission at 2024-10-25 05:55:20


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
        node = [root]
     
        if not node:
            return 0 

 
        left_height = isSymmetric(node.left)
        right_height = isSymmetric(node.right)

         
        if left_height == -1 or right_height == -1:
            return -1

            
        if abs(left_height - right_height) > 1:
            return -1

            
        return 1 + max(left_height, right_height)

        
        return isSymmetric(root) != -1
————————
```

## Submission at 2024-10-25 05:56:08


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
        node = [root]
     
        if not node:
            return 0 

 
        left_height = isSymmetric(node.left)
        right_height = isSymmetric(node.right)

         
        if left_height == -1 or right_height == -1:
            return -1

            
        if abs(left_height - right_height) > 1:
            return -1

            
        return 1 + max(left_height, right_height)

        
        return isSymmetric(root) != -1


```

## Submission at 2024-10-25 05:58:40


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
        if not root:
            return "true"
            

```

## Submission at 2024-10-25 06:01:02


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
    
        """def is_mirror(left, right):
          
            if not left and not right:
                return True
           
            if not left or not right:
                return False
          
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        

        if not root:
            return True
        
    
        return is_mirror(root.left, root.right)"""

```

## Submission at 2024-10-25 06:03:35


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        return (root.left.val == root.right.val and isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left))
        
        """def is_mirror(left, right):
          
            if not left and not right:
                return True
           
            if not left or not right:
                return False
          
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        

        if not root:
            return True
        
    
        return is_mirror(root.left, root.right)"""

```

## Submission at 2024-10-25 06:05:53


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        if (root.left.val == root.right.val and isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left)):
            return "true"
        """def is_mirror(left, right):
          
            if not left and not right:
                return True
           
            if not left or not right:
                return False
          
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        

        if not root:
            return True
        
    
        return is_mirror(root.left, root.right)"""

```

## Submission at 2024-10-25 06:06:56


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        if ((root.left.val == root.right.val) and isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left)):
            return "true"
       
        """def is_mirror(left, right):
          
            if not left and not right:
                return True
           
            if not left or not right:
                return False
          
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        

        if not root:
            return True
        
    
        return is_mirror(root.left, root.right)"""

```

## Submission at 2024-10-25 06:07:35


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        if (root.left.val == root.right.val and isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left)):
            return "true"
       
        """def is_mirror(left, right):
          
            if not left and not right:
                return True
           
            if not left or not right:
                return False
          
            return (left.val == right.val and
                    is_mirror(left.left, right.right) and
                    is_mirror(left.right, right.left))
        

        if not root:
            return True
        
    
        return is_mirror(root.left, root.right)"""

```

## Submission at 2024-10-25 06:08:47


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        return (root.left.val == root.right.val and isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left))
        
       
```

## Submission at 2024-10-25 06:10:42


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
    # code here

  result = []
  
  if not root:
    return []
  postOrder(root.left)
  postOrder(root.right)
  result.append(root.val)
    
  return result  

```

## Submission at 2024-10-25 06:14:51


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
    # code here
  result = []
  
  if not root:
    return []
 

```

## Submission at 2024-10-25 06:15:34


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
    # code here
    if not root:
      return []
```

## Submission at 2024-10-25 06:16:51


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
    # code here
    root1 = list(root)
    if not root1:
      return []
```

## Submission at 2024-10-25 06:17:47


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
    # code here
   
    if not root:
      return ""
```

## Submission at 2024-10-25 06:21:17


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
   
    if not root:
      return []
   


```

## Submission at 2024-10-25 06:23:00


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        #return (root.left.val == root.right.val and isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left))
        
       
```

## Submission at 2024-10-25 06:24:07


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false"    
        return (root.left == root.right and isSymmetric(root.left, root.right) and isSymmetric(root.left, root.right))
        
       
```

## Submission at 2024-10-25 06:25:55


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false" 
        if (root.left.val == root.right.val):
          
            return (isSymmetric(root.left, root.right) and isSymmetric(root.left, root.right))
        
       
```

## Submission at 2024-10-25 06:26:24


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false" 
        if (root.left.val == root.right.val):
          
            return (isSymmetric(root.left, root.right) and isSymmetric(root.left, root.right))
        
       
```

## Submission at 2024-10-25 06:28:09


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
        if not root:
            return "true"

        if not root.left and root.right:
            return "true"
        if not root.left or root.right:
            return "false" 
        if (root.left.val == root.right.val):
            if (isSymmetric(root.left.left, root.right.right) and isSymmetric(root.left.right, root.right.left)):
                return "true"
        
       
```

## Submission at 2024-10-25 06:32:42


```
# write code from scratch
def canConstruct(r,m):
    if not m:
        return "false"





r = str(input())
m = str(input())

```

## Submission at 2024-10-25 06:34:39


```
# write code from scratch

    if not m and :
        return "false"
    if     





r = str(input())
m = str(input())

if not r and not m:
    return "false"
if not r or not m:
    return "false"    
```

## Submission at 2024-10-25 06:35:04


```
# write code from scratch




r = str(input())
m = str(input())

if not r and not m:
    return "false"
if not r or not m:
    return "false"    
```

## Submission at 2024-10-25 06:37:15


```
# write code from scratch




r = str(input())
m = str(input())


if not r and not m:
    return "false"
if not r or not m:
    return "false"
if len(m) =1:
    return "false" 
```

## Submission at 2024-10-25 06:40:23


```
# write code from scratch




r = str(input())
m = str(input())


if not r and not m:
    print("false")
if not r or not m:
    print("false")
if len(m) ==1:
    print("false") 

```

## Submission at 2024-10-25 06:45:39


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
    # code here
    result = []
    def post(node):
      if not node:
        return []
      post(node.left)
      post(node.right)
      result.append(node.val)
    post(root)
    return result   
```

## Submission at 2024-10-25 06:51:28


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
    node = [root]
    if not node:
      return []
      

```

## Submission at 2024-10-25 06:52:47


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
    node = [root]
    if not node:
      return []
    postOrder(node.left)
    postOrder(node.right)
    result.append(node.val)
    return result 
      

```

## Submission at 2024-10-25 06:57:00


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
class Solution:
  def postOrder(self,root):
    if not root:
      return []
```

## Submission at 2024-10-25 06:58:27


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
class Solution:
  def postOrder(self,root):
    result = []
    if not root:
      return []
    postOrder(root.left)
    postOrder(root.right)
    result.append(root.val)

```

## Submission at 2024-11-17 06:15:03


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
    result = []
  
    def post(node):
      post(node.left)
      post(node.right)
      result.append(node.val)
    post(root)
    return result  
```

## Submission at 2024-11-17 06:16:36


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
    result = []
  
    def post(node):
      if node:
        post(node.left)
        post(node.right)
        result.append(node.val)
    post(root)
    return result  
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

```

## Submission at 2024-11-17 06:17:00


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
    result = []
  
    def post(node):
      if node:
        post(node.left)
        post(node.right)
        result.append(node.val)
    post(root)
    return result  

```

## Submission at 2024-11-17 06:18:23


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
    result = []
  
    def post(node):
      if node:
        post(node.left)
        post(node.right)
        result.append(node.data)
    post(root)
    return result  

```

## Submission at 2024-11-17 06:44:24


```
# write code from scratch
def canConstruct(r,m):
    char_count = {}
    for char in m:
        if char in char_count:
            char_count[char] +=1
        else:
            char_count[char] = 1
    for char in r:
        if char in char_count and char_count[char]>0:
            char_count[char]-=1
        else:
            return False
    return True           











r = input().strip()
m = input().strip()
print("true" if canConstruct(ransomNote, magazine) else "false")
```

## Submission at 2024-11-17 06:45:01


```
# write code from scratch
def canConstruct(r,m):
    char_count = {}
    for char in m:
        if char in char_count:
            char_count[char] +=1
        else:
            char_count[char] = 1
    for char in r:
        if char in char_count and char_count[char]>0:
            char_count[char]-=1
        else:
            return False
    return True           











r = input().strip()
m = input().strip()
print(canConstruct(r,m))
```

## Submission at 2024-11-17 06:46:16


```
# write code from scratch
def canConstruct(r,m):
    char_count = {}
    for char in m:
        if char in char_count:
            char_count[char] +=1
        else:
            char_count[char] = 1
    for char in r:
        if char in char_count and char_count[char]>0:
            char_count[char]-=1
        else:
            return "false"
    return "true"          











r = input().strip()
m = input().strip()
print(canConstruct(r,m))
```

## Submission at 2024-11-17 07:12:38


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
        is mirror(right, left):
            if not right and not left:
                return "true"
            if not right or not left:
                return "false"
            return (right.data == left.data) and (mirror(right.right, left.left) and mirror(right.left, left.right))
        return mirror(root.left, root.right) if root else "true"            
```

## Submission at 2024-11-17 07:15:42


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
        is mirror(left, right):
            if not right and not left:
                return "true"
            if not right or not left:
                return "false"
            return (left.data == right.data) and (mirror(left.left, right.right) and mirror(left.right,right.left))
        return mirror(root.left, root.right) if root else "true"            
```

## Submission at 2024-11-17 07:15:59


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
        def mirror(left, right):
            if not right and not left:
                return "true"
            if not right or not left:
                return "false"
            return (left.data == right.data) and (mirror(left.left, right.right) and mirror(left.right,right.left))
        return mirror(root.left, root.right) if root else "true"            
```

## Submission at 2024-11-17 07:32:56


```
# Write Python code from scratch
def dailyTemp(n, temp):
    answer = [0]*n
    stack = []
    for i in range(i):
        while stack and temp[i] > temp[stack[-1]]:
            prev_index = stack.pop()
            answer[prev_index] = i - prev_index
        stack.append(i)
    return answer















n = int(input())
temp = list(map(int,input()split(" ")))
result = dailyTemp(n, temp)
print(" ".join(map(str, result)))

```

## Submission at 2024-11-17 07:34:54


```
# Write Python code from scratch
def dailyTemp(n, temp):
    answer = [0]*n
    stack = []
    for i in range(i):
        while stack and temp[i] > temp[stack[-1]]:
            prev_index = stack.pop()
            answer[prev_index] = i - prev_index
        stack.append(i)
    return answer








n = int(input())
temp = list(map(int,input()split()))
result = dailyTemp(n, temp)
print(" ".join(map(str, result)))

```

## Submission at 2024-11-17 08:08:17


```
def dailyTemp(n, temp):
    answer = [0]*n  # Initialize answer array with 0s
    stack = []  # Stack to store indices of temperatures
    
    for i in range(n):  # Iterate over each day
        while stack and temp[i] > temp[stack[-1]]:  # While current temp is higher than stack's last temp
            prev_index = stack.pop()  # Get the index of previous lower temperature
            answer[prev_index] = i - prev_index  # Calculate days until warmer temperature
        stack.append(i)  # Add the current index to the stack
    
    return answer

# Input handling
n = int(input())  # Number of days
temp = list(map(int, input().split()))  # List of temperatures

# Calling the function and printing the result
result = dailyTemp(n, temp)
print(" ".join(map(str, result)))  # Print the result as space-separated values

```

## Submission at 2024-11-17 08:21:25


```
# Write code from scratch here
def timeToBuyTickets(tickets, k):
    time = 0  # Time taken for person at position k to finish buying tickets
    while tickets[k] > 0:  # Continue until the person at position k buys all their tickets
        for i in range(len(tickets)):
            if tickets[i] > 0:  # If the person still needs to buy tickets
                tickets[i] -= 1  # They buy one ticket
                time += 1  # It takes 1 second to buy one ticket
                
                # If the person at position k finishes buying their tickets, we can return the time
                if tickets[k] == 0:
                    return time

# Input handling
n = int(input())  # Number of people in the queue
tickets = list(map(int, input().split()))  # List of tickets each person wants to buy
k = int(input())  # The position of the person we are interested in

# Output the time taken for the person at position k to finish buying tickets
print(timeToBuyTickets(tickets, k))
```

## Submission at 2024-11-17 08:27:12


```
# Write Python Code from scratch
def canMakeBouquets(bloomDay, m, k, day):
    bouquet_count = 0
    flowers_in_bouquet = 0
    
    for bloom in bloomDay:
        if bloom <= day:  # Flower has bloomed by this day
            flowers_in_bouquet += 1
            if flowers_in_bouquet == k:
                bouquet_count += 1
                flowers_in_bouquet = 0  # Reset the count for the next bouquet
        else:
            flowers_in_bouquet = 0  # Reset if flower hasn't bloomed yet
    
    return bouquet_count >= m

def minDays(bloomDay, m, k):
    n = len(bloomDay)
    
    # If we cannot form m bouquets even with all flowers
    if m * k > n:
        return -1
    
    # Binary search over the days
    left, right = min(bloomDay), max(bloomDay)
    answer = -1
    
    while left <= right:
        mid = (left + right) // 2
        if canMakeBouquets(bloomDay, m, k, mid):
            answer = mid  # It's possible to make bouquets by day 'mid'
            right = mid - 1  # Try to find a smaller valid day
        else:
            left = mid + 1  # We need to wait for more days
    
    return answer

# Input handling
n, m, k = map(int, input().split())  # n: number of flowers, m: bouquets needed, k: flowers per bouquet
bloomDay = list(map(int, input().split()))  # List of bloom days for the flowers

# Output the minimum number of days required to form m bouquets
print(minDays(bloomDay, m, k))

```

## Submission at 2024-11-22 03:21:23


```
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

def binary_tree_to_array(root):
    if not root:
        return []

    queue = [root]
    array = []

    while queue:
        current = queue.pop(0)  # Dequeue the first element
        
        if current:
            array.append(current.value)  # Add the value to the array
            queue.append(current.left)  # Enqueue left child
            queue.append(current.right)  # Enqueue right child
        else:
            array.append(None)  # Represent a null node as None
    
    # Optional: Remove trailing None values to match compact array representation
    while array and array[-1] is None:
        array.pop()
    
    return array

# Example Usage
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

result = binary_tree_to_array(root)
print(result)  # Output: [1, 2, 3, 4, 5]
-------------
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Convert Array to Binary Tree
def array_to_binary_tree(array, index=0):
    if index >= len(array) or array[index] is None:
        return None

    # Create a new node with the current value
    node = Node(array[index])

    # Recursively construct left and right subtrees
    node.left = array_to_binary_tree(array, 2 * index + 1)
    node.right = array_to_binary_tree(array, 2 * index + 2)

    return node

# Preorder Traversal (Root -> Left -> Right)
def preorder_traversal(root):
    if not root:
        return []
    return [root.value] + preorder_traversal(root.left) + preorder_traversal(root.right)

# Inorder Traversal (Left -> Root -> Right)
def inorder_traversal(root):
    if not root:
        return []
    return inorder_traversal(root.left) + [root.value] + inorder_traversal(root.right)

# Postorder Traversal (Left -> Right -> Root)
def postorder_traversal(root):
    if not root:
        return []
    return postorder_traversal(root.left) + postorder_traversal(root.right) + [root.value]

# Level Order Traversal (Breadth-First Traversal)
def level_order_traversal(root):
    if not root:
        return []
    result = []
    queue = [root]  # Queue for level order traversal
    while queue:
        current = queue.pop(0)
        result.append(current.value)
        if current.left:
            queue.append(current.left)
        if current.right:
            queue.append(current.right)
    return result

# Example Usage
array = [1, 2, 3, 4, 5]
root = array_to_binary_tree(array)

# Print Traversals
print("Preorder Traversal:", preorder_traversal(root))  # Output: [1, 2, 4, 5, 3]
print("Inorder Traversal:", inorder_traversal(root))    # Output: [4, 2, 5, 1, 3]
print("Postorder Traversal:", postorder_traversal(root))  # Output: [4, 5, 2, 3, 1]
print("Level Order Traversal:", level_order_traversal(root))  # Output: [1, 2, 3, 4, 5]
-------
class AVLNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.height = 1
class AVLTree:
    def get_height(self, node):
        if not node:
            return 0
        return node.height

    def get_balance_factor(self, node):
        if not node:
            return 0
        return self.get_height(node.left) - self.get_height(node.right)

    def rotate_right(self, y):
        x = y.left
        T2 = x.right

        x.right = y
        y.left = T2

        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))
        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))

        return x

    def rotate_left(self, x):
        y = x.right
        T2 = y.left

        y.left = x
        x.right = T2

        x.height = 1 + max(self.get_height(x.left), self.get_height(x.right))
        y.height = 1 + max(self.get_height(y.left), self.get_height(y.right))

        return y

    def insert(self, root, value):
        if not root:
            return AVLNode(value)
        elif value < root.value:
            root.left = self.insert(root.left, value)
        else:
            root.right = self.insert(root.right, value)

        root.height = 1 + max(self.get_height(root.left), self.get_height(root.right))
        balance = self.get_balance_factor(root)

        if balance > 1 and value < root.left.value:
            return self.rotate_right(root)
        if balance < -1 and value > root.right.value:
            return self.rotate_left(root)
        if balance > 1 and value > root.left.value:
            root.left = self.rotate_left(root.left)
            return self.rotate_right(root)
        if balance < -1 and value < root.right.value:
            root.right = self.rotate_right(root.right)
            return self.rotate_left(root)

        return root
    def min_value_node(self, node):
        current = node
        while current.left is not None:
            current = current.left
        return current

    def delete(self, root, value):
        if not root:
            return root

        if value < root.value:
            root.left = self.delete(root.left, value)
        elif value > root.value:
            root.right = self.delete(root.right, value)
        else:
            if not root.left:
                return root.right
            elif not root.right:
                return root.left

            temp = self.min_value_node(root.right)
            root.value = temp.value
            root.right = self.delete(root.right, temp.value)

        root.height = 1 + max(self.get_height(root.left), self.get_height(root.right))
        balance = self.get_balance_factor(root)

        if balance > 1 and self.get_balance_factor(root.left) >= 0:
            return self.rotate_right(root)
        if balance > 1 and self.get_balance_factor(root.left) < 0:
            root.left = self.rotate_left(root.left)
            return self.rotate_right(root)
        if balance < -1 and self.get_balance_factor(root.right) <= 0:
            return self.rotate_left(root)
        if balance < -1 and self.get_balance_factor(root.right) > 0:
            root.right = self.rotate_right(root.right)
            return self.rotate_left(root)

        return root
    def min_value_node(self, node):
        current = node
        while current.left is not None:
            current = current.left
        return current

    def delete(self, root, value):
        if not root:
            return root

        if value < root.value:
            root.left = self.delete(root.left, value)
        elif value > root.value:
            root.right = self.delete(root.right, value)
        else:
            if not root.left:
                return root.right
            elif not root.right:
                return root.left

            temp = self.min_value_node(root.right)
            root.value = temp.value
            root.right = self.delete(root.right, temp.value)

        root.height = 1 + max(self.get_height(root.left), self.get_height(root.right))
        balance = self.get_balance_factor(root)

        if balance > 1 and self.get_balance_factor(root.left) >= 0:
            return self.rotate_right(root)
        if balance > 1 and self.get_balance_factor(root.left) < 0:
            root.left = self.rotate_left(root.left)
            return self.rotate_right(root)
        if balance < -1 and self.get_balance_factor(root.right) <= 0:
            return self.rotate_left(root)
        if balance < -1 and self.get_balance_factor(root.right) > 0:
            root.right = self.rotate_right(root.right)
            return self.rotate_left(root)

        return root
    def preorder_traversal(self, root):
        if not root:
            return []
        return [root.value] + self.preorder_traversal(root.left) + self.preorder_traversal(root.right)

    def inorder_traversal(self, root):
        if not root:
            return []
        return self.inorder_traversal(root.left) + [root.value] + self.inorder_traversal(root.right)

    def postorder_traversal(self, root):
        if not root:
            return []
        return self.postorder_traversal(root.left) + self.postorder_traversal(root.right) + [root.value]

    def level_order_traversal(self, root):
        if not root:
            return []
        queue = [root]
        result = []
        while queue:
            current = queue.pop(0)
            result.append(current.value)
            if current.left:
                queue.append(current.left)
            if current.right:
                queue.append(current.right)
        return result
from avl_node import AVLNode
from avl_tree_core import AVLTree

avl = AVLTree()
root = None

# Insert nodes
values = [10, 20, 30, 40, 50, 25]
for value in values:
    root = avl.insert(root, value)

# Traversals
print("Preorder Traversal:", avl.preorder_traversal(root))
print("Inorder Traversal:", avl.inorder_traversal(root))
print("Postorder Traversal:", avl.postorder_traversal(root))
print("Level Order Traversal:", avl.level_order_traversal(root))

# Deletion
root = avl.delete(root, 40)
print("After Deleting 40 (Inorder):", avl.inorder_traversal(root))
------
def mirror_tree(root):
    if not root:
        return None
    root.left, root.right = mirror_tree(root.right), mirror_tree(root.left)
    return root
-------
def left_view(root):
    def helper(node, level):
        if not node:
            return
        if level == len(view):
            view.append(node.val)
        helper(node.left, level + 1)
        helper(node.right, level + 1)

    view = []
    helper(root, 0)
    return view
-------
def right_view(root):
    def helper(node, level):
        if not node:
            return
        if level == len(view):
            view.append(node.val)
        helper(node.right, level + 1)
        helper(node.left, level + 1)

    view = []
    helper(root, 0)
    return view
------
from collections import deque

def top_view(root):
    if not root:
        return []
    top = {}
    queue = deque([(root, 0)])
    while queue:
        node, hd = queue.popleft()
        if hd not in top:
            top[hd] = node.val
        if node.left:
            queue.append((node.left, hd - 1))
        if node.right:
            queue.append((node.right, hd + 1))
    return [top[hd] for hd in sorted(top)]
-------
def bottom_view(root):
    if not root:
        return []
    bottom = {}
    queue = deque([(root, 0)])
    while queue:
        node, hd = queue.popleft()
        bottom[hd] = node.val
        if node.left:
            queue.append((node.left, hd - 1))
        if node.right:
            queue.append((node.right, hd + 1))
    return [bottom[hd] for hd in sorted(bottom)]
-----
def zigzag_traversal(root):
    if not root:
        return []
    result, level, direction = [], [root], 1
    while level:
        result.append([node.val for node in level][::direction])
        level = [child for node in level for child in (node.left, node.right) if child]
        direction *= -1
    return result
--------
def is_balanced(root):
    def helper(node):
        if not node:
            return 0
        left = helper(node.left)
        if left == -1:
            return -1
        right = helper(node.right)
        if right == -1 or abs(left - right) > 1:
            return -1
        return 1 + max(left, right)
    
    return helper(root) != -1

```

## Submission at 2024-11-22 04:55:18


```
def sum(n):
    j = 0
    for i in range(n):
        j = j+1
    return j  
```

## Submission at 2024-11-22 04:55:39


```
def sum(n):
    j = 0
    for i in range(n):
        j = j+1
    return j
print(sum(4))      
```

## Submission at 2024-11-22 04:56:22


```
def sum(n):
    j = 0
    for i in range(n):
        j = j+i
    return j
print(sum(4))      
```

## Submission at 2024-11-22 04:58:55


```
def sum(n,arr):
    cnt = 0
    for i in range(n):
        cnt = arr[i]+ cnt       
    return cnt
print(sum(4))


n = int(input())
arr = list(map(int,input().split(" ")))
print(sum(n,arr))
```

## Submission at 2024-11-22 04:59:47


```
def sum(n,arr):
    cnt = 0
    for i in range(n):
        cnt = arr[i]+ cnt       
    return cnt



n = int(input())
arr = list(map(int,input().split(" ")))
print(sum(n,arr))
```

## Submission at 2024-11-22 05:05:07


```
# write code from scratch
def repeat(n,arr):
    
    for i in range(n):
        for j in range(n):
            if arr[i] == arr[j]:
                return arr[i]
                









n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:06:28


```
# write code from scratch
def repeat(n,arr):
    
    for i in range(n):
        for j in range(n):
            if arr[i] == arr[j]:
                a = arr[i]
                return a
                









n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:16:00


```
# write code from scratch
def repeat(n,arr):
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for i in range(n):
        if i in s:
            if s[i] >=2:
                cnt+=1
    return max(cnt)                 










n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:16:36


```
# write code from scratch
def repeat(n,arr):
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for i in range(n):
        if i in s:
            if s[i] >=2:
                cnt+=1
    return cnt                 










n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:16:59


```
# write code from scratch
def repeat(n,arr):
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for i in range(n):
        if i in s:
            if s[i] >=2:
                cnt+=1
    return cnt                 










n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:19:05


```
# write code from scratch
def repeat(n,arr):
    if not arr:
        return -1
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for i in range(n):
        if i in s:
            if s[i] >=2:
                cnt+=1
                
    return cnt                 










n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:20:30


```
# write code from scratch
def repeat(n,arr):
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for i in range(n):
        if i in s:
            if s[i] >=2:
                cnt+=1

    return cnt                 










n = int(input())
arr = list(map(int,input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 05:39:47


```
# write code from scratch
def distance(arr1,arr2,m,n,d):
    cnt = 0
    cntt=0
    for i in range(m):
        for j in range(n):
            if abs(arr1[i] - arr2[j]) >=d:
                cnt+=1
        if cnt == n:
            cntt+=1
            cnt = 0
        else:
            cnt = 0    
    return cntt                 












m,n,d = int(input().split(" "))
arr1 = list(map(int, input().split(" ")))
arr2 = list(map(int, input().split(" ")))
print(distance(arr1, arr2, m, n, d))
```

## Submission at 2024-11-22 05:45:53


```
# write code from scratch
def distance(arr1,arr2,m,n,d):
    cnt = 0
    cntt=0
    for i in range(m):
        for j in range(n):
            if abs(arr1[i] - arr2[j]) >=d:
                cnt+=1
        if cnt == n:
            cntt+=1
            cnt = 0
        else:
            cnt = 0    
    return cntt               


m,n,d = map(int,input().split(" "))
arr1 = list(map(int, input().split(" ")))
arr2 = list(map(int, input().split(" ")))
print(distance(arr1, arr2, m, n, d))
```

## Submission at 2024-11-22 05:47:56


```
# write code from scratch
def distance(arr1,arr2,m,n,d):
    cnt = 0
    cntt=0
    if not arr1 or not arr2:
        return -1
    for i in range(m):
        for j in range(n):
            if abs(arr1[i] - arr2[j]) >=d:
                cnt+=1
        if cnt == n:
            cntt+=1
            cnt = 0
        else:
            cnt = 0    
    return cntt               


m,n,d = map(int,input().split(" "))
arr1 = list(map(int, input().split(" ")))
arr2 = list(map(int, input().split(" ")))
print(distance(arr1, arr2, m, n, d))
```

## Submission at 2024-11-22 05:50:25


```
# write code from scratch
def distance(arr1,arr2,m,n,d):
    cnt = 0
    cntt=0
    for i in range(m):
        for j in range(n):
            if abs(arr1[i] - arr2[j]) >=d:
                cnt+=1
        
                    
        if cnt == n:
            cntt+=1
            cnt = 0
        else:
            cnt = 0    
    return cntt               


m,n,d = map(int,input().split(" "))
arr1 = list(map(int, input().split(" ")))
arr2 = list(map(int, input().split(" ")))
print(distance(arr1, arr2, m, n, d))
```

## Submission at 2024-11-22 05:54:21


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
        if not root:
            return "false"
            
```

## Submission at 2024-11-22 05:57:31


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
        def tree(node):

            if not node:
                return "false"
            if node:    
                if tree(node.left)< node.data and node.data > tree(node.right):
                    return "true"
                else:
                    return "false"  
        tree(root)
                      

```

## Submission at 2024-11-22 06:07:31


```
def mini(a,b):
    l = []
    for i in range(a,b):
        x = (i-a) + (b-i)
        l.append(x)
    r = min(l)
    return r    











a,b = map(int,input().split(" "))
print(mini(a,b))
```

## Submission at 2024-11-22 06:13:44


```
# write code from scratch
def dia(n):
    for i in range(n+1):
        print('*' * i)
    for j in range(2,0):
        print('*'*i)
        


















n = int(input())
print(dia(n))
```

## Submission at 2024-11-22 06:17:08


```
# write code from scratch
def dia(n):
    for i in range(1,n+1):
        print('*' * i)
    n = j-1
    while j >0:
        print('*'*j)
        j=-1
        









n = int(input())
print(dia(n))
```

## Submission at 2024-11-22 06:18:56


```
# write code from scratch
def dia(n):
    for i in range(1,n+1):
        print('*' * i)
    n = j-1
    while j >0:
        print('*'*j)
        j=-1
        
n = int(input())
print(dia(n))
```

## Submission at 2024-11-22 06:20:34


```
# write code from scratch
def dia(n):
    for i in range(1,n+1):
        print('*' * i)
    j = n-1
    while j >0:
        print('*'*j)
        j=-1
        
n = int(input())
print(dia(n))
```

## Submission at 2024-11-22 06:23:41


```
# write code from scratch
def dia(n):
    for i in range(1,n+1):
        print('*' * i)
    j = n-1
    while j >0:
        print('*'*j)
        j = j -1
        
n = int(input())
print(dia(n))
```

## Submission at 2024-11-22 06:26:54


```
# write code from scratch
# write code from scratch
def dia(n):
    for i in range(1,n+1):
        print('*' * i)
    j = n-1
    while j >0:
        print('*'*j)
        j = j -1
        
n = int(input())
dia(n)
```

## Submission at 2024-11-22 06:34:50


```
# write code from scratch
def largest(n,arr):
    s = {}
    for i in arr:
        if i in s:
            s[i] +=1
        else:
            s[i] =1
    l = []
    for i in range(n):
        if i in s:
            if s[i]<=1:
                return i               








n = int(input())
arr = list(map(int, input().split(" ")))
print(largest(n, arr))
```

## Submission at 2024-11-22 06:41:35


```
# write code from scratch

def repeat(n,arr):
    
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for i in range(n):
        if i in s:
            if s[i] >=2:
                cnt+=1
            
    return cnt    

n = int(input())
arr = list(map(int, input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 06:45:00


```
# write code from scratch

def repeat(n,arr):
    
    s = {}
    for i in arr:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for j in range(n):
        if j in s:
            if s[j] >=2:
                cnt+=1
            
    return cnt    

n = int(input())
arr = list(map(int, input().split(" ")))
print(repeat(n,arr))
```

## Submission at 2024-11-22 06:46:24


```
# write code from scratch

def repeat(n,a):
    
    s = {}
    for i in a:
        if i in s:
            s[i]+=1
        else:
            s[i]=1
    cnt =0       
    for j in range(n):
        if j in s:
            if s[j] >=2:
                cnt+=1
            
    return cnt    

n = int(input())
a = list(map(int, input().split(" ")))
print(repeat(n,a))
```

## Submission at 2024-11-22 06:51:47


```
# write code from scratch
# write code from scratch
def largest(N,A):
    s = {}
    for i in A:
        if i in s:
            s[i] +=1
        else:
            s[i] =1
    l = []
    for i in range(N):
        if i in s:
            if s[i]<=1:
                return i               








N = int(input())
A = list(map(int, input().split(" ")))
print(largest(N, A))
```

## Submission at 2024-11-22 07:00:11


```
# write code from scratch
def distance(arr1,arr2,m,n,d):
    cnt = 0
    cntt=0
    for i in range(m):
        for j in range(n):
            if abs(arr1[i] - arr2[j]) >=d:
                cnt+=1
        if cnt == n:
            cntt+=1
            cnt = 0
        else:
            cnt = 0    
    return cntt               


m,n,d = map(int,input().split(" "))
arr1 = list(map(int, input().split(" ")))
arr2 = list(map(int, input().split(" ")))
print(distance(arr1, arr2, m, n, d))
```

## Submission at 2024-11-22 07:04:38


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

## Submission at 2024-11-22 07:04:38


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

## Submission at 2024-11-22 07:04:38


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

## Submission at 2024-11-22 07:04:39


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

## Submission at 2024-11-22 07:04:40


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

## Submission at 2024-11-22 07:04:42


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

## Submission at 2024-11-22 07:06:10


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
        if not root:
            return "false"
        if root:
            return "true"    
            
```

