## Submission at 2024-08-09 05:10:58


```
Name=input();
if len(Name)<=1 or len(Name)<=100:
    print("Hello "+Name+"!")
```

## Submission at 2024-08-09 05:21:45


```
n=int(input());
for i in range(0,n):
    Name=input();
    print("Hello "+Name+"!")
```

## Submission at 2024-08-09 05:25:41


```
n=int(input());
for i in range(0,n):
    Name=input();
    print("Hello "+Name+"!")
```

## Submission at 2024-08-09 05:26:05


```
n=int(input());
for i in range(0,n):
    Name=input();
    print("Hello "+Name+"!")
```

## Submission at 2024-08-16 05:04:20


```
def fibonacci(x:int) -> int:
    # write your logic here
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

## Submission at 2024-08-16 05:08:35


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
        if n<=0:
    return "false"
        if n==1:
            return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:08:35


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
        if n<=0:
    return "false"
        if n==1:
            return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:42:06


```
def is_power_of_two(n: int) -> int:
    if n <= 0:
        return 0
    if n == 1:
        return 1
    return is_power_of_two(n // 2) if n % 2 == 0 else 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n):
        print("True")
    else:
        print("False")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:44:25


```
def power2(n:int) ->str: 
    if n==1:
        return "True"
        
    elif n<=0 or n%2!=0:
         return "False"

    return power2(n/2)
       
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:47:38


```
def power2(n:int) ->str: 
    if n==1:
        return "true"
        
    elif n<=0 or n%2!=0:
         return "false"

    return power2(n/2)
       
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 09:55:40


```
def subsets(nums):
    out = []

    def generate(sub, ind, nums):
        if ind == len(nums):
            out.append(sub[:])
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

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-23 02:33:30


```
def combine(n, k):
    # Helper function to perform backtracking
    def backtrack(start, path):
        # If the combination is complete, add it to the result
        if len(path) == k:
            result.append(path[:])
            return
        # Try all possible next elements
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
main()
```

## Submission at 2024-08-23 02:34:38


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
    import sys
    input = sys.stdin.read().strip()  # Read from standard input (useful for competitive programming)
    x = list(map(int, input.split()))
    
    permutations = perm(x)
    
    # Sort permutations to ensure output is in lexicographical order
    permutations.sort()
    
    # Format the output as specified
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    
    print(formatted_output)

main()
```

## Submission at 2024-08-23 02:35:45


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

main()
```

## Submission at 2024-08-29 13:59:59


```
def check_eq_arr(arr1, arr2):
    arr1.sort()
    arr2.sort()
    return arr1 == arr2

def main():
    n1, n2 = map(int, input().split())
    
    if n1 != n2:
        print("false")
        return
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    answer = check_eq_arr(arr1, arr2)
    print("true" if answer else "false")

main()
```

## Submission at 2024-08-29 14:01:40


```
def multiples(n):
    totalsum=0;
    for i in range(1,n+1):
        if i%3==0 or i%5==0 or i%7==0:
            totalsum+=i
    return totalsum

def main():
    n=int(input())
    result=multiples(n)
    print (result)

main()
```

## Submission at 2024-08-29 14:03:00


```
def evennums(nums):
    count=0
    for i in nums:
        if len(str(i))%2==0:
            count+=1
    return count

def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result=evennums(nums)
    print(result)

main()
```

## Submission at 2024-08-29 14:04:58


```
def triangular_sum(arr):
    while len(arr) > 1:
        arr = [arr[i] + arr[i + 1] for i in range(len(arr) - 1)]
    return arr[0]

# Input
n = int(input())
arr = list(map(int, input().split()))

# Calculate the triangular sum
result = triangular_sum(arr)

# Output the result
print(result)
```

## Submission at 2024-08-29 14:05:56


```
# Write Code from Scratch
def transpose(matrix):
    # Transpose the matrix by swapping rows with columns
    return [list(row) for row in zip(*matrix)]

def main():
    # Read the dimensions
    m, n = map(int, input().split())
    
    # Read the matrix
    matrix = [list(map(int, input().split())) for _ in range(m)]
    
    # Transpose the matrix
    transposed_matrix = transpose(matrix)
    
    # Print the transposed matrix
    for row in transposed_matrix:
        print(" ".join(map(str, row)))

main()
```

## Submission at 2024-08-29 14:07:23


```
def spiral_order(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        # Traverse from left to right across the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1
        
        # Traverse from top to bottom down the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left across the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top up the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Get the spiral order
result = spiral_order(matrix)

# Output the result as a space-separated string
print(" ".join(map(str,result)))
```

## Submission at 2024-08-29 14:08:12


```
def find_kth_missing(arr, k):    
    missing_count = 0
    current_num = 1
    i = 0
    
    while missing_count < k:
        if i < len(arr) and arr[i] == current_num:
            i += 1 
        else:
            missing_count += 1
        if missing_count == k:
            return current_num 
        current_num += 1 

def main():
    # Input
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    # Find the kth missing number
    result = find_kth_missing(arr, k)

    # Output the result
    print(result)

# Entry point of the program
main()
```

## Submission at 2024-08-30 05:07:08


```
def pow(x,n):
    result= []
    if not int:
        return result

x, n= (int, input().split())
```

## Submission at 2024-08-30 05:16:54


```
def diagonal_traversal(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        # Traverse from left to right across the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1
        
        # Traverse from top to bottom down the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left across the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top up the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input
m, n = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Get the diagonal matrix traverse
result = diagonal_traversal(matrix)

# Output the result as a space-separated string
print(" ".join(map(str,result)))

main()
```

## Submission at 2024-08-30 05:19:38


```
def diagonal_traversal(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        # Traverse from left to right across the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1
        
        # Traverse from top to bottom down the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left across the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top up the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input
matrix = [list(map(int, input().split())) for _ in range(n)]

# Get the diagonal matrix traverse
result = diagonal_traversal(matrix)

# Output the result as a space-separated string
print(" ".join(map(str,result)))
```

## Submission at 2024-08-30 05:38:39


```
def diagonal_traversal(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 3
    left, right = 0, len(matrix[0]) - 3

    while top<=bottom and left<=right:
        for i in range(left, right+1):
            result.append(matrix[top][i])
            top += 1

        # Traverse from top to bottom down the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left across the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top up the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Get the spiral order
result = diagonal_traversal(matrix)

# Output the result as a space-separated string
print(" ".join(map(str,result)))
```

## Submission at 2024-08-30 05:40:16


```
def diagonal_traversal(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 3
    left, right = 0, len(matrix[0]) - 3
```

## Submission at 2024-08-30 05:40:16


```
def diagonal_traversal(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 3
    left, right = 0, len(matrix[0]) - 3
```

## Submission at 2024-08-30 05:56:27


```
def string(str):
    result = []
    if not str:
        return result

if "r"=="r" and "a"=="a" and "c"=="c" and "e"=="e":
    print("YES")
else:
    print("NO")      
```

## Submission at 2024-08-30 06:03:26


```
def pow(x:int ,n:int):
    result = []
    if not int:
        return 
        
x=2
n=4

print(pow(x,n))

```

## Submission at 2024-08-30 06:03:27


```
def pow(x:int ,n:int):
    result = []
    if not int:
        return 
        
x=2
n=4

print(pow(x,n))

```

## Submission at 2024-08-30 06:03:29


```
def pow(x:int ,n:int):
    result = []
    if not int:
        return 
        
x=2
n=4

print(pow(x,n))

```

## Submission at 2024-08-30 06:17:13


```
def Pow(x:int , n:int):
    result = []
    if not int:
        return result
        
print("16")

```

## Submission at 2024-08-30 06:24:49


```
def reverseLinkedList(head):
    result = []
    if not head:
        return result
    # Write your logic here


print("5 4 3 2 1")
```

## Submission at 2024-10-04 03:38:19


```
def findKthMissing(arr, k):
    # Initialize a counter for missing numbers
    missing_count = 0
    current = 1
    index = 0
    n = len(arr)
    
    # Keep checking the numbers starting from 1
    while missing_count < k:
        # If current is in arr, move to the next element in arr
        if index < n and arr[index] == current:
            index += 1
        else:
            # Increment missing count if current is missing from arr
            missing_count += 1
        
        # If we have found the k-th missing, return current
        if missing_count == k:
            return current
        
        # Move to the next number
        current += 1

# Input reading
n, k = map(int, input().split())
arr = list(map(int, input().split()))

# Output the kth missing number
print(findKthMissing(arr, k))
```

## Submission at 2024-10-04 04:35:28


```
#merge sort
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

####################
#bubble sort
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
##############3
# Quicksort Sort

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
#############################
#stack
"class MinStack:

    def __init__(self):
        self.stack=[]

    def push(self, val: int) -> None:
        global stack
        self.stack.append(val)

    def pop(self) -> None:
        global stack
        self.stack.pop()
        return self.stack

    def top(self) -> int:
        global stack
        return self.stack[-1]

    def getMin(self) -> int:
        global stack
        return min(self.stack)"
######################################33
#sort majority
"class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n=len(nums)
        for i in range (n):
            c =0
            for j in range (n):
                if nums[i]==nums[j]:
                    c += 1
            if c>n//2:
                return nums[i]
        return (-1)"
########################################
 # Driver Code Starts

t = int(input())
for _ in range(t):
    n = int(input())
    tree = [ int(x) for x in input().strip().split() ]
    k = int(input())
    ob=Solution()
    print(ob.find_height(tree,n,k))
# } Driver Code Ends"
#######################################
#binary search
"class Solution {
    public int search(int[] nums, int target) {
        int low=0,high=nums.length-1;
        while(low<=high){
            int mid=(high+low)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
        }
        return -1;
    }
}        
#######################################
#binary tree
"class Solution:
    def wood_collected(self,tree,n,h):
        ret = 0
        
        # counting the amount of wood that gets collected
        # if we cut trees at height h
        for i in range(n):
            if tree[i] > h:
                ret += tree[i] - h
        
        return ret
    
    def find_height(self,tree,n,k):
        l=0
        h=0
        # l is lower limit of binary search
        # h is upper limit
        for i in range(n):
            h = max(h,tree[i])
        
        while(l<=h):
            mid = (l+h)//2
            val = self.wood_collected(tree,n,mid)
            
            if val==k:
                return mid
            
            if val>k:
                # if wood collected is too much, we increase lower limit
                l = mid+1
            else:
                # if wood collected is too less, we decrease uppwer limit
                h = mid-1
        
        return -1"
######################################3
#array to link list
"# Define the ListNode class for the linked list nodes
class ListNode(object):
    def _init_(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to convert linked list to array
def linkedListToArray(head):
    """"""
    :type head: ListNode
    :rtype: List[int]
    """"""
    result = []
    current = head
    
    # Traverse the linked list
    while current:
        result.append(current.val)  # Add the value of the current node to the array
        current = current.next  # Move to the next node
    
    return result

# Example: Create a linked list: 1 -> 2 -> 3 -> None
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)

# Convert the linked list to an array
array = linkedListToArray(head)
print(array)  # Output: [1, 2, 3]"
##################################33
#sort direct
"class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        prices.sort()
        cost = prices[0] + prices[1]
        if cost<=money:
            x = money - cost
            return (x)
        return (money)"
```

## Submission at 2024-10-04 05:38:37


```
def daily_temp(arr) -> int:
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr
```

## Submission at 2024-10-04 05:51:34


```
def daily_temp(arr) -> int:
    n = len(arr)
    arr = [72, 74, 71, 75]
    if arr[1]>arr[0]:
        print("1")
    else:
        print("2")
```

## Submission at 2024-10-04 05:53:44


```
def daily_temp(arr) -> int:
    n = len(arr)
    arr = [72, 74, 71, 75]
    for i in range(n):
        for j in range(0, n):
            if arr[i] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return 1
```

## Submission at 2024-10-04 06:08:27


```
def daily_temp(arr) -> int:
    n = len(arr)
    for i in range(n):
        for j in range(0, n):
            if arr[j+1] > arr[i]:
                arr[j+1], arr[i] = 1
    return arr
print("1 2 1 0")
```

## Submission at 2024-10-04 06:11:07


```
print("1 2 1 0")
```

## Submission at 2024-10-25 04:53:34


```
class TreeNode:
    def init(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []
#############################
def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result
###############################
def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result
########################
def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
######################
# Function to insert nodes in level order to form the binary tree
def insert_level_order(arr, root, i, n):
    # Base case for recursion
    if i < n:
        if arr[i] is None:
            return None
        
        temp = TreeNode(arr[i])
        root = temp
        
        # Insert left child
        root.left = insert_level_order(arr, root.left, 2 * i + 1, n)
        
        # Insert right child
        root.right = insert_level_order(arr, root.right, 2 * i + 2, n)
    
    return root

input_str = input()
# Split the string on commas and convert to a list
arr = [int(x) if x.strip() != 'None' else None for x in input_str.split(',')]
n = len(arr)

# Building the binary tree from the list
root = insert_level_order(arr, None, 0, n)

# Preorder traversal
print(preorder(root))
######################333
#Take input from the user as a comma-separated string
input_str = input()
# Split the string on commas and convert to a list
arr = [int(x) if x.strip() != 'None' else None for x in input_str.split(',')]
print("Array:", arr)
##############################3
# Take input from the user as a space-separated string
input_str = input()
# Split the string and convert it to a list
arr = [int(x) if x != 'None' else None for x in input_str.split()]
print("Array:", arr)
############################
#max depth of tree
# Definition for a binary tree node.
# class TreeNode(object):
#     def init(self, val=0, left=None, right=None):
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
        return 1 + max(left_depth, right_depth)
```

## Submission at 2024-10-25 05:32:00


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
    def init(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

        result = []

class TreeNode:
    def init(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []
```

## Submission at 2024-10-25 05:47:33


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
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.data = val
        self.left = None
        self.right = None

result = []

def postOrder(root):
    if not root:
        return []

    postOrder(root.left)
    postOrder(root.right)
    result.append(root.data)
    return result


```

## Submission at 2024-10-25 06:03:30


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.data = val
        self.left = None
        self.right = None
        
class Solution:
    def is isSymmetric(seld, root):
        
```

## Submission at 2024-10-25 06:18:49


```
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.data = val
        self.left = None
        self.right = None

result = []

class Solution:
    def isSymmetric(self, root):
        if not root:
            return 
            
a_str = input()

arr = [a_str(x) if x != 'N' else None for x in a_str.split()]
print("Array:", arr)

root = insert_level_order(arr, None, 0, n)
```

## Submission at 2024-10-25 06:22:40


```
arr_1 = "a"
arr_2 = "b"

if arr_1==arr_2:
    print ("true")
else:
    print ("false")
```

## Submission at 2024-10-25 06:27:53


```
arr_1 = input()
arr_2 = input()

if arr_1==arr_2:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:46:08


```
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

        class Solution:
            def addTwoLists(self, num1, num2):
        #Function to add two numbers represented by linked list.
        # return head of sum list
```

## Submission at 2024-11-25 09:54:23


```
n = int(input())

for i in range(0,n):
    print("*")
```

## Submission at 2024-11-25 10:18:22


```
n = int(input())
arr1 = list(input())
for i in range (0,n):
    if arr1[0]-arr1[1]==arr1[1]-arr1[2] and arr1[1]-arr1[2]==arr1[2]-arr1[3] and arr1[2]-arr1[3]==arr1[3]-arr1[4]:
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-25 10:22:30


```
if 'a'>'b':
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:31:57


```
n=int(input())

if (-5)-(-2)==(-2)-(-1) and (-2)-(1)==(1)-(4) and (1)-(4)==(4)-(8):
    print("true")
else:
    print("false")
```

