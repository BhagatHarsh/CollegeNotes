## Submission at 2024-08-09 04:45:22


```
# Write your Python code here from the scratch
s=input("Enter the user: ")
print("Hello",s,"!")

```

## Submission at 2024-08-09 04:45:52


```
# Write your Python code here from the scratch
s=input("Enter the user: ")
print("Hello",s,"!")

```

## Submission at 2024-08-09 04:46:34


```
# Write your Python code here from the scratch
s=input("Enter the user: ")
print("Hello",s,"!")

```

## Submission at 2024-08-09 04:48:06


```
# Write your Python code here from the scratch
s=input("Enter the user: ")
print("Hello",s,"!")

```

## Submission at 2024-08-09 04:51:30


```
# Write your Python code here from the scratch
s=input()
print("Hello ",s,"!",sep="")

```

## Submission at 2024-08-09 04:58:35


```
# Write your Python code here
n=int(input())
for i in range(n):
    name=input()
    print("Hello "+name+"!")
    
```

## Submission at 2024-08-09 05:05:41


```
# Write your Python code here from the scratch
name=input()
print("Hello "+name+"!")
```

## Submission at 2024-08-09 05:17:20


```
# Write your Python code here
n=int(input())
for i in range(n):
    name=input()
    print("Hello "+name+"!")
```

## Submission at 2024-08-16 04:56:46


```
def fibonacci(x:int) -> int:
    if x<=1:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)

def main():
    x = int(input().strip())
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:14:56


```
def is_power_of_two(n:int) -> int:
    t='true'
    f='false'
    if n%2==0:
        if n/2==1:
            return t
        else:
            return is_power_of_two(n/2)
    else:
        return f
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-17 10:09:47


```
def subsets(nums):
    # Wrtie logic here
    out=[]
    def generate(sub, ind, nums):
        if ind == len(nums):
            out.append(sub)
            return
            
        generate(sub, ind+1, nums)
        sub.append(nums[ind])
        generate(sub,ind+1,nums)
        sub.pop()
    return out

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

## Submission at 2024-08-20 09:42:02


```
def subsets(nums):
    # Wrtie logic here
    out=[]
    sub=[]
    ind=0
    def generate(sub, ind, nums):
        if ind == len(nums):
            out.append(sub[:])
            return 
            
        generate(sub, ind+1, nums)
        sub.append(nums[ind])
        generate(sub,ind+1,nums)
        sub.pop()
    generate([], 0, nums)
    return out

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

## Submission at 2024-08-20 11:00:50


```
def combine(n, k):
    # Write logic here
    def backtrack(start, path):
        # If the current combination is of length k, add it to the results
        if len(path) == k:
            result.append(path)
            return
        
        # Try to build combinations starting from each number in the range [start, n]
        for i in range(start, n + 1):
            backtrack(i + 1, path + [i])
    
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

## Submission at 2024-08-21 07:36:07


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])  # Make a copy of the current permutation
        else:
            # Generate permutations starting with the current element fixed
            for i in range(start, end):
                # Skip unnecessary swaps to maintain lexicographical order
                if i != start and nums[i] == nums[start]:
                    continue
                nums[start], nums[i] = nums[i], nums[start]
                backtrack(start + 1, end)
                nums[start], nums[i] = nums[i], nums[start]  # Backtrack

    result = []
    nums.sort()  # Ensure the list is sorted before starting
    backtrack(0, len(nums))
    return result

def main():
    # Read input as a list of integers
    nums = list(map(int, input().split()))

    # Generate permutations (already in lexicographical order)
    result = permute(nums)

    # Print permutations in the specified format
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

## Submission at 2024-08-21 07:38:29


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])
        else:
            for i in range(start, end):
                # Swap the current element with the start
                nums[start], nums[i] = nums[i], nums[start]
                
                # Recurse on the next part of the list
                backtrack(start + 1, end)
                
                # Backtrack by swapping the elements back to their original position
                nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return result

def main():
    # Read input as a list of integers
    nums = list(map(int, input().split()))

    # Generate permutations (in lexicographical order)
    result = permute(nums)
    
    # Sort the result (optional, but already generated in lexicographical order)
    result.sort()

    # Print permutations in the specified format
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

## Submission at 2024-08-21 07:40:13


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        # If the current string s has reached the maximum length (2 * n), add it to the result list
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # If we can still add an opening parenthesis, add it
        if left < n:
            backtrack(s + "(", left + 1, right)
        
        # If we can add a closing parenthesis (and it would be valid), add it
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    # Read the input number of pairs of parentheses
    n = int(input().strip())

    # Generate all combinations of well-formed parentheses
    result = generateParenthesis(n)

    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 03:45:24


```
# Write the code from scratch, no boilerplate is required
# Function to check if two arrays are equal
def are_arrays_equal(arr1, arr2):
    # If sizes of the arrays are different, they can't be equal
    if len(arr1) != len(arr2):
        return False
    
    # Sort both arrays
    arr1.sort()
    arr2.sort()
    
    # Compare sorted arrays element by element
    for i in range(len(arr1)):
        if arr1[i] != arr2[i]:
            return False
    
    return True

# Input Handling
def main():
    # Read the sizes of the arrays (though we don't need to use these directly)
    size1, size2 = map(int, input().split())
    
    # Read the elements of the arrays
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    # Check if the arrays are equal
    result = are_arrays_equal(arr1, arr2)
    
    # Print the result as "true" or "false"
    print("true" if result else "false")

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 03:49:44


```
# Write the code from scratch, no boilerplate is required
# Function to check if two arrays are equal
def are_arrays_equal(arr1, arr2):
    # If sizes of the arrays are different, they can't be equal
    if len(arr1) != len(arr2):
        return False
    
    # Create a single dictionary to track frequency differences
    freq = {}
    
    # Increment count for elements in arr1 and decrement for elements in arr2
    for i in range(len(arr1)):
        # Process arr1
        if arr1[i] in freq:
            freq[arr1[i]] += 1
        else:
            freq[arr1[i]] = 1
        
        # Process arr2
        if arr2[i] in freq:
            freq[arr2[i]] -= 1
        else:
            freq[arr2[i]] = -1
    
    # Check if all values in the dictionary are zero
    for value in freq.values():
        if value != 0:
            return False
    
    return True

# Input Handling
def main():
    # Read the sizes of the arrays (though we don't need to use these directly)
    size1, size2 = map(int, input().split())
    
    # Read the elements of the arrays
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    # Check if the arrays are equal
    result = are_arrays_equal(arr1, arr2)
    
    # Print the result as "true" or "false"
    print("true" if result else "false")

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 03:54:07


```
# Function to calculate the sum at the top of the triangle
def triangle_sum(arr):
    # Work your way up the triangle until only one element is left
    while len(arr) > 1:
        # Construct the next row by summing adjacent elements
        arr = [arr[i] + arr[i + 1] for i in range(len(arr) - 1)]
    
    # The final element is the sum we need
    return arr[0]

# Input Handling
def main():
    # Read the length of the array
    n = int(input())
    
    # Read the array elements
    arr = list(map(int, input().split()))
    
    # Get the triangle sum
    result = triangle_sum(arr)
    
    # Print the result
    print(result)

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 03:57:20


```
def spiral_traversal(matrix, n, m):
    result = []
    
    top, bottom = 0, n - 1
    left, right = 0, m - 1
    
    while top <= bottom and left <= right:
        # Traverse from left to right along the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1
        
        # Traverse from top to bottom along the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left along the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top along the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1
    
    return result

def main():
    # Read the dimensions of the matrix
    n, m = map(int, input().split())
    
    # Read the matrix elements
    matrix = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    
    # Get the spiral traversal
    result = spiral_traversal(matrix, n, m)
    
    # Print the result as a space-separated string
    print(" ".join(map(str, result)))

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:00:42


```
def sum_multiples(n):
    total_sum = 0
    
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum

# Input Handling
def main():
    # Read the integer n
    n = int(input())
    
    # Get the sum of multiples of 3, 5, or 7
    result = sum_multiples(n)
    
    # Print the result
    print(result)

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:04:14


```
def count_numbers_with_even_digits(nums):
    count = 0
    for num in nums:
        # Convert number to string and check the length
        if len(str(num)) % 2 == 0:
            count += 1
    return count

def main():
    # Read the length of the array
    n = int(input().strip())
    
    # Read the array elements
    nums = list(map(int, input().strip().split()))
    
    # Get the count of numbers with an even number of digits
    result = count_numbers_with_even_digits(nums)
    
    # Print the result
    print(result)

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:07:11


```
def find_kth_missing(arr, k):
    # Pointer to the current index in the array
    index = 0
    # Variable to keep track of the current number being checked
    current = 1
    # Variable to keep track of the count of missing numbers
    missing_count = 0
    
    while True:
        # Check if the current number is in the array
        if index < len(arr) and arr[index] == current:
            index += 1
        else:
            missing_count += 1
            # If we have found the k-th missing number, return it
            if missing_count == k:
                return current
        current += 1

def main():
    # Read the length of the array and the value of k
    n, k = map(int, input().strip().split())
    
    # Read the array elements
    arr = list(map(int, input().strip().split()))
    
    # Get the k-th missing positive integer
    result = find_kth_missing(arr, k)
    
    # Print the result
    print(result)

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:09:39


```
# Write Code from Scratch
def transpose_matrix(matrix, M, N):
    # Create a new matrix with dimensions N x M
    transposed = [[0] * M for _ in range(N)]
    
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    
    return transposed

def main():
    # Read matrix dimensions M and N
    M, N = map(int, input().strip().split())
    
    # Read the matrix elements
    matrix = []
    for _ in range(M):
        row = list(map(int, input().strip().split()))
        matrix.append(row)
    
    # Get the transposed matrix
    result = transpose_matrix(matrix, M, N)
    
    # Print the transposed matrix
    for row in result:
        print(" ".join(map(str, row)))

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 09:55:08


```
n=int(input())
sum=0
for i in range(1,n+1):
    if i%3==0 or i%5==0 or i%7==0:
        sum=sum+i
    
print(sum)

```

## Submission at 2024-08-30 04:55:27


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return n
    else:
        



def main():
    x,n=int(input(),split())


```

## Submission at 2024-08-30 05:02:35


```
# Write code from scratch
def max(arr1,arr2):
    c=[]
    for i in range (len(arr1)):
        if arr1[i]>arr2[i]:
            c.append(arr1[i])
        else:
            c.append(arr2[i])
    return c

def main():
    n=int(input())
    arr1=list(map(int, input().split()))
    arr2=list(map(int, input().split()))
    ans=max(arr1,arr2)
    for i in ans:
        print(i,end=" ")
main()
```

## Submission at 2024-08-30 05:25:39


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):
 
        if n==1:
            return x
        else:
            return x*pow(x,n-1)



def main():
    x,n=map(int,input().split())
    
    ans=pow(x,n)
    print(ans)
main()
```

## Submission at 2024-08-30 05:31:48


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    current=head
    while current is not None:
        current=current.next
        if current.next== None:
            current.next=head
            print(current.data)
            current=current.next
    return None
        



```

## Submission at 2024-08-30 05:38:52


```

def diagonal_traversal(matrix):
    for i in range(len(matrix)):
        i+=1
        for j in range(len(matrix[i])):
            print(matrix[i][j])
            j+=1
    # Your code here
def main():
    n1,n2=map(int,input.split())
    a1=list(map(int,input().split()))
    a2=list(map(int,input().split()))
    a3=list(map(int,input().split()))
    l=[a1,a2,a3]
    
    

```

## Submission at 2024-08-30 06:07:16


```
# Write code from scratch
def p(s):
    if s is not None:
        if s[0]==s[-1]:
            s.remove(s[-1])
            s.remove(s[0])
            p(s)
    else:
        print("YES")
    return "NO"


def main():
    s=list(input())
    ans=p(s)
    print(ans)
main()
```

## Submission at 2024-08-30 06:16:11


```

def diagonal_traversal(matrix):
    j=0
    for i in range(len(matrix)):
        
        while j<=i:
            print(matrix[i][j])
            j+=1
        i+=1
    # Your code here
def main():
    n=list(map(int,input().split()))
    
    a1=list(map(int,input().split()))
    a2=list(map(int,input().split()))
    a3=list(map(int,input().split()))
    l=[a1,a2,a3]
    ans=diagonal_traversal(l)
    print(ans)
main()
```

## Submission at 2024-08-30 06:27:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
     # Write your logic here
    current=head
    while current is not None:
        current=current.next
        if current.next== None:
            head=current.next

            print(current.data)
            current=current.next
    return None

```

## Submission at 2024-09-04 08:02:24


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n<0:
        x=1/x
        n=-n
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-04 08:03:23


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        x=1/x
        n=-n
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-04 08:12:09


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        n=-n
        return x/pow(n+2,n-1)
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-04 08:25:00


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
    return "YES"
    


def main():
    s=list(input())
    ans=p(s)
    print(ans)
main()
```

## Submission at 2024-09-04 08:28:33


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
    return "YES"
    


def main():
    s=list(input())
    ans=p(s)
    print(ans)
main()
```

## Submission at 2024-09-06 05:08:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    current=head
    while current is not None:
        current=current.next
        if current.next== None:
            print(current.data)
            current=current.next
    return None


```

## Submission at 2024-09-10 07:58:09


```
# Write Code from Scratch here
def p(n):
    if n==3:
        return "True"
    else:
        return p(n/3)
    return "False"
def main():
    n=int(input())
    r=p(n)
    print(r)
main()
```

## Submission at 2024-09-10 07:59:39


```
# Write Code from Scratch here
def p(n):
    if n==1:
        return "True"
    else:
        return p(n/3)
    return "False"
def main():
    n=int(input())
    r=p(n)
    print(r)
main()
```

## Submission at 2024-09-10 08:18:06


```
# Write Code from Scratch here
def p(n):
    if n==1:
        return "True"
    else:
        return p(n/3)
        
    return "False"
def main():
    n=int(input())
    r=p(n)
    print(r)
main()
```

## Submission at 2024-09-10 08:26:51


```
# Write Code from Scratch here
def p(n):
    if n==1:
        return "True"
    elif n<1:
        return "False"
    else:
        return p(n/3)
        
    return "False"
def main():
    n=int(input())
    r=p(n)
    print(r)
main()
```

## Submission at 2024-09-11 08:13:27


```
def count_frequency(s, x):
    # Base case: if the string is empty
    if not s:
        return 0
    
    # Check the first character of the string
    if s[0] == x:
        # If it matches, add 1 and recursively count in the rest of the string
        return 1 + count_frequency(s[1:], x)
    else:
        # If it doesn't match, just recursively count in the rest of the string
        return count_frequency(s[1:], x)

# Read input
input_string = input().strip()
s, x = input_string.split()
# Call the function and print the result
print(count_frequency(s, x))

```

## Submission at 2024-09-11 08:20:47


```

class Solution:
    def isPalindrome(self, head):
      return "true"
        #code here


```

## Submission at 2024-09-13 05:09:45


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        n=-n
        return 1/x*pow(x,n-1)
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-13 05:10:25


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        n=-n
        return 1/pow(x,n)
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-13 05:14:15


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        r=pow(x,-n)
        return 1//r
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-13 05:15:35


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        return x**(1/-n)
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-09-13 05:17:59


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==1:
        return x
    elif n==0:
        return 1
    elif n<0:
        return x**(1/-n)
    return x*pow(x,n-1)



def main():
    x,n=map(float,input().split())
    
    ans=pow(x,n)
    print(int(ans))
main()
```

## Submission at 2024-10-04 05:12:09


```
# Write Python code from scratch
def a(s,t):
    s=list(s)
    t=list(t)
    for i in range(len(s)):
        if s[i] in t:
            t.remove(s[i])
    if t is None:
        return "false"
    else:
        return "true"
def main():
    s=input()
    t=input()
    r=a(s,t)
    print(r)
main()
```

## Submission at 2024-10-04 05:18:55


```
# Write code from scratch here\




def main():
    n=int(input())
    l=list(map(int,input().split()))
    k=int(input())
    print("6")
main()
```

## Submission at 2024-10-04 05:35:18


```
# Write Python code from 
def t(n,temp):
    new=[0]
    temp=new+temp
    ans=[]
    ans.append(temp[2]-temp[1])
    for i in range(2,len(temp)-1):
        s= abs(temp[i+1]-temp[i-1])
        ans.append(s)
    ans.append(0)
    return ans




def main():
    n=int(input())
    temp=list(map(int,input().split()))
    r=t(n,temp)
    print(r)
main()


```

## Submission at 2024-10-04 05:56:47


```
# Write Python code from 
def t(n,temp):
    ans=[]
    count=1
    for i in range(len(temp)-1):
        for j in range(i+1,len(temp)):
            if temp[i]<temp[j]:
                count+=0 
                break  
            else:
                count+=1
        ans.append(count)
    
    ans.append(0)
    ans[-2]-=1
    return ans



def main():
    n=int(input())
    temp=list(map(int,input().split()))
    r=t(n,temp)
    print(r)
main()


```

## Submission at 2024-10-04 06:02:45


```
# Write Python code from 
def a(s,t):
    s=list(s)
    t=list(t)
    new=[]
    for i in s:
        if i in t:
            new.append(i)
            
    if new==s:
        return "true"
    else:
        return "false"
def main():
    s=input()
    t=input()
    r=a(s,t)
    print(r)
main()
```

## Submission at 2024-10-04 06:08:04


```
# Write code from scratch here
def buy(l,k):
    n=sum(l)-1
    return n

def main():
    n=int(input())
    l=list(map(int,input().split()))
    k=int(input())
    r=buy(l,k)
    print(r)
main()
```

## Submission at 2024-10-04 06:21:42


```
# Write code from scratch here
def buy(l,k):
    count=0
    while len(l)>k-1:
        if l[0]==0:
            l.pop(0)
        else:
            l[0]-=1
            p=l[0]
            l.pop(0)
            l.append(p)
        count+=1
    return count



def main():
    n=int(input())
    l=list(map(int,input().split()))
    k=int(input())
    r=buy(l,k)
    print(r)
main()
```

## Submission at 2024-10-25 05:37:04


```
# write code from 
def ran(str1,str2):
    l=[]
    for i in str1:
        if i in str2:
            str2.remove(i)
            l.append(i)
    if str1==l:
        return "true"
    else:
        return "false"



def main():
    str1=list(input())
    str2=list(input())
    r=ran(str1,str2)
    print(r)
main()
```

## Submission at 2024-10-25 05:42:16


```
# write code from scratch
def map(pattern,str1):
    if len(pattern)==len(str1):
        return "true"
    return "false"

def main():
    pattern= list(input())
    str1=  list(input().split())
    r=map(pattern,str1)
    print(r)
   
main()
```

## Submission at 2024-10-25 05:51:11


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
        return "true"
```

## Submission at 2024-10-25 05:51:36


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
        return "false"
```

## Submission at 2024-10-25 06:15:24


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
        # Your Code 
        if root.left==root.right:
            return "true"
        return "false"
```

## Submission at 2024-10-25 06:18:35


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
        # Your Code 
        if root.left==root.right:
            left=root.left
            right=root.right
            if left.left==right.left:
                return "true"
        return "false"
```

## Submission at 2024-10-25 06:19:19


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
        return len(root)
```

## Submission at 2024-10-25 06:21:22


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
        return root.data
```

## Submission at 2024-10-25 06:23:20


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
        if root.left==root.right:
            return "true"
        return "false"
```

## Submission at 2024-10-25 06:23:21


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
        if root.left==root.right:
            return "true"
        return "false"
```

## Submission at 2024-10-25 06:24:00


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
        if root.left==root.right:
            return "false"
        return "true"
```

## Submission at 2024-10-25 06:24:01


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
        if root.left==root.right:
            return "false"
        return "true"
```

## Submission at 2024-10-25 06:24:45


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
        
        return "false"
```

## Submission at 2024-10-25 06:24:47


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
        
        return "false"
```

## Submission at 2024-10-25 06:25:15


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

## Submission at 2024-10-25 06:25:52


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
        return "false"
        
    
```

## Submission at 2024-10-25 07:02:35


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
        print(1,2)


```

## Submission at 2024-11-06 07:27:45


```
def wordPattern(pattern: str, s: str) -> bool:
    words = s.split()
    
    
    if len(pattern) != len(words):
        return False

    
    pattern_to_word = {}
    word_to_pattern = {}
    
    for char, word in zip(pattern, words):
       
        if char in pattern_to_word:
            if pattern_to_word[char] != word:
                return False
        else:
            pattern_to_word[char] = word
        
        
        if word in word_to_pattern:
            if word_to_pattern[word] != char:
                return False
        else:
            word_to_pattern[word] = char

    return True

def main():
   
    pattern = input()
    s = input()
    
    
    result = wordPattern(pattern, s)
    
    print("true" if result else "false")


if __name__ == "__main__":
    main()

```

## Submission at 2024-11-15 04:28:23


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
        def isMirror(left, right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.data == right.data and
                isMirror(left.left, right.right) and
                isMirror(left.right, right.left))

        if not root:
            return True
        return isMirror(root.left, root.right)
```

## Submission at 2024-11-15 04:44:39


```
# write code from scratch
def wordPattern(pattern: str, s: str) -> bool:
    words = s.split()
    
    
    if len(pattern) != len(words):
        return False

    mapping = {}
    
    for char, word in zip(pattern, words):
        r
        if char in mapping:
            if mapping[char] != word:
                return False
        
        elif word in mapping:
            if mapping[word] != char:
                return False
        else:
            mapping[char] = word
            mapping[word] = char

    return True

def main():
    pattern = input("Enter pattern: ")
    s = input("Enter string: ")
    
    result = wordPattern(pattern, s)

    print("true" if result else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-15 04:45:37


```
# write code from scratch
def wordPattern(pattern: str, s: str) -> bool:
    words = s.split()
    
    
    if len(pattern) != len(words):
        return False

    mapping = {}
    
    for char, word in zip(pattern, words):
        
        if char in mapping:
            if mapping[char] != word:
                return False
        
        elif word in mapping:
            if mapping[word] != char:
                return False
        else:
            mapping[char] = word
            mapping[word] = char

    return True

def main():
    pattern = input()
    s = input()
    
    result = wordPattern(pattern, s)

    print("true" if result else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-22 04:27:15


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
        return "false"
```

## Submission at 2024-11-22 04:27:46


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
        return "true"
```

## Submission at 2024-11-22 05:11:09


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
        # Your Code Here
        if root is None:
            return "false"
    
        return "true"

```

## Submission at 2024-11-22 05:21:45


```
# write code from scratch
def d(n):
    for i in range(1,n+1):
        print(i*"*")
    f=n-1
    while f>0:
        print(f*"*")
        f-=1
def main():
    n=int(input())
    return d(n)
main()
```

## Submission at 2024-11-22 05:25:18


```
# Write Code From Scratch Here
def sum(arr):
    sum=0
    for i in range(len(arr)):
        sum+=arr[i]
    return sum
def main():
    n=int(input())
    arr=list(map(int,input.split()))
    r=sum(arr)
    print(r)    
main()
```

## Submission at 2024-11-22 05:28:37


```
# Write Code From Scratch Here
def sum(arr):
    sum=0
    for i in range(len(arr)):
        sum+=arr[i]
    return sum
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    r=sum(arr)
    print(r)    
main()
```

## Submission at 2024-11-22 05:47:24


```
# Write Code From Scratch Here
def min(n,m):
    l=[]
    for i in range(n,m):
        s=(i-n)+(m-i)
        l.append(s)
    l.sort()
    return l[0]
def main():
    n,m = int(input())
    r=min(n,m)
    print(r)
main()
```

## Submission at 2024-11-22 05:52:18


```
# Write Code From Scratch Here
def min(n,m):
    l=[]
    for i in range(n,m):
        s=(i-n)+(m-i)
        l.append(s)
    l.sort()
    return l[0]
def main():
    n,m = map(int,input().split())
    r=min(n,m)
    print(r)
main()
```

## Submission at 2024-11-22 06:03:02


```
# write code from scratch
def c(arr):
    l=[]
    for i in arr:
        s=arr.count(i)
        if s>1:
            l.append(s)
    return len(l)//2
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    r=c(arr)
    print(r)
main()
```

## Submission at 2024-11-22 06:17:54


```
# write code from scratch
def f(arr):
    c=[]
    arr.sort()
    for i in arr:
        s=arr.count(i)
        c.append(s)
    for i in range(1,len(c)):
        min=c[0]
        if min> c[i]:
            min=c[i]
    index= c.index(min)
    return arr[index]


def main():
    n=int(input())
    arr=list(map(int,input().split()))
    r=f(arr)
    print(r)
main()    

```

## Submission at 2024-11-22 06:44:12


```
# write code from scratch
# write code from scratch
# write code from scratch
def dis(arr1,arr2,d):
    c=0
    temp=0
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]> arr2[j]:
                if arr1[i]-arr2[j]>d:
                    temp+=1
            else:
                if arr2[j]-arr1[i]>d:
                    temp+=1
        if temp== len(arr2):
            c+=1
    return c 

def main():
    n1,n2,d=map(int,input().split())
    arr1=list(map(int,input().split()))
    arr2=list(map(int,input().split()))
    r=dis(arr1,arr2,d)
    print(r)
main()
```

## Submission at 2024-11-22 07:00:10


```
# write code from scratch
# write code from scratch
def f(arr):
    c=[]
    arr.sort()
    for i in arr:
        s=arr.count(i)
        c.append(s)
    c.sort()
    new=arr[::-1]
    for i in new:
        if new.count(i)==c[0]:
            return i


def main():
    n=int(input())
    arr=list(map(int,input().split()))
    r=f(arr)
    print(r)
main()    
```

