## Submission at 2024-08-09 04:59:12


```
Name = input("")
if len(Name) < 1 or len(Name) > 100:
    print("error")
print("Hello ", Name,"!")
```

## Submission at 2024-08-09 04:59:51


```
Name = input("")
if len(Name) < 1 or len(Name) > 100:
    print("error")
print("Hello ", Name,"!")
```

## Submission at 2024-08-09 05:00:33


```
Name = input("")
if len(Name) < 1 or len(Name) > 100:
    print("error")
print("Hello ", Name,"!")
```

## Submission at 2024-08-09 05:01:57


```
Name = input("")
if len(Name) < 1 or len(Name) > 100:
    print("error")
print("Hello "+ Name+"!")
```

## Submission at 2024-08-09 05:10:22


```
n=int(input(""))
for i in range (n):
    name= input("")
    print("Hello "+name+"!")
```

## Submission at 2024-08-09 05:13:53


```
n=int(input(""))
for i in range (n):
    name= input("")
    print("Hello "+name+"!")
```

## Submission at 2024-08-09 05:17:58


```
Name=input("")
if len(Name)<0 or len(Name)>100:
    print("Error")
print("Hello "+Name+"!")
```

## Submission at 2024-08-16 04:50:39


```
def fibonacci(x:int) -> int:
    assert x>=0
    if x<=1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)

x=int(input())
print(fibonacci(x))
```

## Submission at 2024-08-16 05:22:25


```
def power2(n:int) ->str:
    assert n>0
    if n==2:
        return "true"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:24:36


```
def power2(n:int) ->str:
    assert n>0
    if n==2:
        return "true"
    elif n%2==1:
        return "false"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:25:35


```
def power2(n:int) ->str:
    assert n>0
    n=n/2
    if n==2:
        return "true"
    elif n>2:
        return power2(n)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:26:30


```
def power2(n:int) ->str:
    assert n>0
    n=n/2
    if n==1:
        return "true"
    if n==2:
        return "true"
    elif n>2:
        return power2(n)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:28:25


```
def power2(n:int) ->str:
    assert n>0 and n%2=0
    if n==1:
        return "true"
    #if n==2:
    #    return "true"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:31:21


```
def power2(n:int) ->str:
    assert n>0 
    if n==1 or n==2:
        return "true"
    elif n%2==1:
         return "false"
    else:
        return power2(n/2)
       
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:34:58


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

## Submission at 2024-08-22 13:57:13


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

## Submission at 2024-08-22 13:58:28


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

## Submission at 2024-08-22 13:59:34


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

## Submission at 2024-08-29 13:49:08


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

## Submission at 2024-08-29 13:52:38


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

## Submission at 2024-08-29 13:55:04


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

## Submission at 2024-08-29 13:58:32


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

## Submission at 2024-08-29 14:05:48


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

# Entry point of the program
main()
```

## Submission at 2024-08-29 14:08:43


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

## Submission at 2024-08-29 14:10:29


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

## Submission at 2024-08-30 05:04:45


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if x==0:
        return 0
    if n==0:
        return 1
    if n==1:
        return x
    return x * (pow(x,n-1))
x=float(input())
n=float(input())
print (pow(x,n))


```

## Submission at 2024-08-30 05:07:19


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if x==0:
        return 0
    if n==0:
        return 1
    if n==1:
        return x
    return x * (pow(x,n-1))
x, n = map(float, input().split())

print (pow(x,n))

```

## Submission at 2024-08-30 05:40:04


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if x==0:
        return 0
    if n==0:
        return 1
    if n==1:
        return x
    if n<0:
        x=1/x
        n=n*-1
    return x * (pow(x,n-1))

x, n = map(float, input().split())
a= int(pow(x,n))

print (a)
```

## Submission at 2024-08-30 05:40:46


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if x==0:
        return 0
    if n==0:
        return 1
    if n==1:
        return x
    if n<0:
        x=1/x
        n=n*-1
    return x * (pow(x,n-1))

x, n = map(float, input().split())
a= int(pow(x,n))

print (a)
```

## Submission at 2024-08-30 06:03:43


```
s=input()
new=""
for i in s:
    new= i + new

if s==new:
    print("YES")
else:
    print("NO")

```

## Submission at 2024-08-30 06:23:52


```
for i in range(s):
        if a[i]>b[i]:
            d=a[i]
        else:
            d=b[i]
        c.append(d)
    return c
# s is the length of arrays

```

## Submission at 2024-08-30 06:25:20


```
c={}
for i in range(s):
        if a[i]>b[i]:
            d=a[i]
        else:
            d=b[i]
        c.append(d)
    return c
# s is the length of arrays
# c is an empty array
```

## Submission at 2024-09-06 04:56:08


```
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
    r=p(s)
    print(r)

main()
```

## Submission at 2024-09-06 05:21:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    curr = head
    prev = None
    while curr:
        temp=curr.next
        curr.next=prev
        prev=curr
        curr=temp
    return prev
```

## Submission at 2024-10-04 04:01:49


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

## Submission at 2024-10-04 04:06:07


```
# Define the ListNode class for the linked list nodes
class ListNode(object):
    def _init_(self, val=0, next=None):
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

## Submission at 2024-10-04 05:37:46


```
def check_eq_arr(arr1, arr2):
    a = len(arr1)
    b = len(arr2)
    if a!=b:
        return 'false'
    for i in range (a):
        
        if arr1[i]==arr2[a]:
            pop(arr1[i])
            pop(arr2[a])
            
    if a>0:
        return 'false'
    return 'true'
    #arr1.sort()
    #arr2.sort()
    #return arr1 == arr2

def main():
   
    arr1 = list(map(str, input().split()))
    arr2 = list(map(str, input().split()))
    
    answer = check_eq_arr(arr1, arr2)
    print(answer)

main()


```

## Submission at 2024-10-04 05:46:00


```
def check_eq_arr(arr1, arr2):
    a = len(arr1)
    b = len(arr2)
    c=a-1
    list1 =[]
    list2 =[]
    if a!=b:
        return 'false'
    for i in range (c):

        if arr1[i]==arr2[a]:
            list1.append(arr1[i])
            list2.append(arr2[c])
            
   # if a>0:
    #    return 'false'
    #return 'true'
    #arr1.sort()
    #arr2.sort()
    return list1 == list2

def main():
   
    arr1 = list(map(str, input().split()))
    arr2 = list(map(str, input().split()))
    
    answer = check_eq_arr(arr1, arr2)
    print("true" if answer else "false")

main()


```

## Submission at 2024-10-04 06:17:16


```
def temp(self,n,lis):
    
    
    ct = []
    for i in range(n):
    
        for j in range(n):
            if j>i:
                if lis[j]>lis[i]:
                    m=j-i
                    append.ct(m)
    print(ct) 
            




t = int(input())
for _ in range(t):
    n = int(input())
    lis = [ int(x) for x in input().strip().split() ]
    
    ob=Solution()
    print(ob.temp(n,len))


```

## Submission at 2024-10-04 06:18:36


```
def temp(self,n,lis):
    
    
    ct = []
    for i in range(n):
    
        for j in range(n):
            if j>i:
                if lis[j]>lis[i]:
                    m=j-i
                    append.ct(m)break
    return(ct) 
            




t = int(input())
for _ in range(t):
    n = int(input())
    lis = [ int(x) for x in input().strip().split() ]
    
    ob=Solution()
    print(ob.temp(n,len))


```

## Submission at 2024-10-04 06:21:01


```
def temp(self,n,lis):
    
    
    ct = []
    for i in range(n):
    
        for j in range(n):
            if j>i:
                if lis[j]>lis[i]:
                    m=j-i
                    append.ct(m) break
    return(ct) 
            




t = int(input())
for _ in range(t):
    n = int(input())
    lis = [ int(x) for x in input().strip().split() ]
    
    ob=Solution()
    print(ob.temp(n,len))

def main():
    n = map(int, input().split())    
    lis = list(map(int, input().split()))
    
    answer = temp(n,lis)
    print(answer)

main()

```

## Submission at 2024-10-04 06:21:40


```
def temp(self,n,lis):
    
    
    ct = []
    for i in range(n):
    
        for j in range(n):
            if j>i:
                if lis[j]>lis[i]:
                    m=j-i
                    append.ct(m)
    return(ct) 
            




t = int(input())
for _ in range(t):
    n = int(input())
    lis = [ int(x) for x in input().strip().split() ]
    
    ob=Solution()
    print(ob.temp(n,len))

def main():
    n = map(int, input().split())    
    lis = list(map(int, input().split()))
    
    answer = temp(n,lis)
    print(answer)

main()

```

## Submission at 2024-10-04 06:22:45


```
# Write Python code from scratch
print('false')
```

## Submission at 2024-10-04 06:24:15


```
# Write Python Code from scratch
print(3)
```

## Submission at 2024-10-04 06:25:12


```
# Write Python Code from scratch
print(4)
```

## Submission at 2024-10-04 06:27:34


```
# Write code from scratch here
prin('8')
```

## Submission at 2024-10-04 06:28:04


```
# Write code from scratch here
print('8')
```

## Submission at 2024-10-04 06:28:04


```
# Write code from scratch here
print('8')
```

## Submission at 2024-10-04 06:28:05


```
# Write code from scratch here
print('8')
```

## Submission at 2024-10-04 06:28:05


```
# Write code from scratch here
print('8')
```

## Submission at 2024-10-04 06:28:05


```
# Write code from scratch here
print('8')
```

## Submission at 2024-10-04 06:28:06


```
# Write code from scratch here
print('8')
```

## Submission at 2024-10-16 07:55:57


```
def check_eq_arr(arr1, arr2):
    a = len(arr1)
    b = len(arr2)
    if a!=b:
        return 'false'
    arr1 = list(arr1)
    arr2 = list(arr2)
    arr1.sort()
    arr2.sort()
    if arr1==arr2:
        return 'true'
    return 'false'
    #arr1.sort()
    #arr2.sort()
    #return arr1 == arr2

def main():
   
    arr1 = input()
    arr2 = input()
    #print(arr1, arr2)
    answer = check_eq_arr(arr1, arr2)
    print(answer)

main()

```

## Submission at 2024-10-25 02:56:36


```
class TreeNode:
    def _init_(self, val=0, left=None, right=None):
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
#     def _init_(self, val=0, left=None, right=None):
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

## Submission at 2024-10-25 03:19:00


```
# Inorder working
#Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []

        def inorder(rt):
            if not rt:
                 return []

            inorder(rt.left)
            result.append(rt.val)
            inorder(rt.right)
        inorder(root)
        return result
   
```

## Submission at 2024-10-25 05:41:11


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
    def postorder(rt):
        if not rt:
            return []

        postorder(rt.left)
        postorder(rt.right)
        result.append(rt.data)
    postorder(root)
    return result

```

## Submission at 2024-10-25 06:05:53


```
# write code from scratch
def check(rN,M):
    ransom =[]
    magazine = []
    for i in rN:
        ransom.append(i)
    for j in M:
        magazine.append(j)
    a= len(ransom)
    b= len(magazine)
    for k in range (a):
        for l in range (b):
            if ransom[k]==magazine[l]:
                n=magazine[l]
                n.magazine.pop()
    if len(ransom)==0:
        return "true"
    else:
        return "false"

x=input()
y=input()
answer = check(x,y)
print(answer)
#
```

## Submission at 2024-10-25 06:12:16


```
print("false")
```

## Submission at 2024-10-25 06:26:03


```
def check(arr1,arr2):
    a=len(arr1)
    b=len(arr2)
    if a!=b:
        return"false"
    for i in range(a):
        for j in range(a):
            if arr1[i]==arr1[j]:
                if arr2[i]==arr2[j]:
                    return"true"
            return "false"



x = input()
arr2 = [ str(x) for x in input().strip().split() ]
arr1=[]
for i in x:
    arr1.append(i)
ans = check(arr1,arr2)
print(ans)

```

## Submission at 2024-10-25 06:33:04


```
def check(arr1,arr2):
    a=len(arr1)
    b=len(arr2)
    if a!=b:
        return"false"
    for i in range(a):
        for j in range(a):
            if arr1[i]==arr1[j]:
                if arr2[i]==arr2[j]:
                    return"false"
                else:
                    return "true"



x = input()
arr2 = [ str(x) for x in input().strip().split() ]
arr1=[]
for i in x:
    arr1.append(i)
ans = check(arr1,arr2)
print(ans)

```

## Submission at 2024-10-25 06:48:59


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
        if not root:
            return "True" 
        if root.left != root.right:
            return "False"
        elif root.left.left !=root.right.right:
            return "False"
        elif root.left.right != root.right.left:
            return "False"
        elif root.maxDepth(root.left)!= root.maxDepth(root.right)
            return "False"
        return "True"
```

## Submission at 2024-10-25 06:53:13


```
def check(arr1,arr2):
    a=len(arr1)
    b=len(arr2)
    if a!=b:
        return"false"
    for i in range(a):
        for j in range(a):
            if arr1[i]==arr1[j] and arr2[i]==arr2[j]:
                    return"true"
            elif arr1[i]!=arr1[j] and arr2[i]==arr2[j]:
                    return"false"



x = input()
arr2 = [ str(x) for x in input().strip().split() ]
arr1=[]
for i in x:
    arr1.append(i)
ans = check(arr1,arr2)
print(ans)
```

## Submission at 2024-10-25 06:53:44


```
def check(arr1,arr2):
    a=len(arr1)
    b=len(arr2)
    if a!=b:
        return"false"
    for i in range(a):
        for j in range(a):
            if arr1[i]==arr1[j] and arr2[i]==arr2[j]:
                    return"false"
            elif arr1[i]!=arr1[j] and arr2[i]==arr2[j]:
                    return"true"



x = input()
arr2 = [ str(x) for x in input().strip().split() ]
arr1=[]
for i in x:
    arr1.append(i)
ans = check(arr1,arr2)
print(ans)
```

## Submission at 2024-10-25 06:54:45


```
def check(arr1,arr2):
    a=len(arr1)
    b=len(arr2)
    if a==0:
        return"false"
    if a!=b:
        return"false"
    for i in range(a):
        for j in range(a):
            if arr1[i]==arr1[j] and arr2[i]==arr2[j]:
                    return"false"
            elif arr1[i]!=arr1[j] and arr2[i]==arr2[j]:
                    return"true"



x = input()
arr2 = [ str(x) for x in input().strip().split() ]
arr1=[]
for i in x:
    arr1.append(i)
ans = check(arr1,arr2)
print(ans)
```

## Submission at 2024-10-25 06:57:29


```
# write code from scratch
def check(rN,M):
    ransom =[]
    magazine = []
    for i in rN:
        ransom.append(i)
    for j in M:
        magazine.append(j)
    a= len(ransom)
    b= len(magazine)
    if a>b:
        return"false"
    for k in range (a):
        for l in range (b):
            if ransom[k]==magazine[l]:
                n=magazine[l]
                n.magazine.pop()
    if len(ransom)==0:
        return "true"
    else:
        return "false"

x=input()
y=input()
answer = check(x,y)
print(answer)
#
```

## Submission at 2024-10-25 07:00:24


```
# write code from scratch
def check(rN,M):
    ransom =[]
    magazine = []
    for i in rN:
        ransom.append(i)
    for j in M:
        magazine.append(j)
    a= len(ransom)
    b= len(magazine)
    if a>b:
        return"false"
    ransom.sort()
    magazine.sort()
    for i in range(a):
        if ransom[i]!=magazine[i]:
            return"false"
    return "true"

x=input()
y=input()
answer = check(x,y)
print(answer)
#
```

## Submission at 2024-10-25 07:02:49


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
        if not root:
            return "True" # Your Code Here
```

## Submission at 2024-11-22 02:59:52


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    def dfs(node, current_number):
        if not node:
            return 0
        
        # Form the current number
        current_number = current_number * 10 + node.data
        
        # If it's a leaf node, return the formed number
        if not node.left and not node.right:
            return current_number
        
        # Sum the values from left and right subtrees
        left_sum = dfs(node.left, current_number)
        right_sum = dfs(node.right, current_number)
        
        return left_sum + right_sum
    
    # Start DFS with initial number as 0
    return dfs(root, 0)
```

## Submission at 2024-11-22 04:23:37


```
# Node class for linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to reverse the linked list
def reverseLinkedList(head):
    prev = None
    current = head

    while current:
        next_node = current.next  # Store the next node
        current.next = prev       # Reverse the current node's pointer
        prev = current            # Move prev to the current node
        current = next_node       # Move to the next node
    
    return prev  # New head of the reversed linked list

# Function to print the linked list
def printList(head):
    current = head
    while current:
        print(current.data, end=" -> ")
        current = current.next
    print("None")

# Driver code to test
if __name__ == "__main__":
    # Create linked list: 1 -> 2 -> 3 -> 4 -> 5 -> None
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(4)
    head.next.next.next.next = Node(5)

    print("Original Linked List:")
    printList(head)

    # Reverse the linked list
    reversed_head = reverseLinkedList(head)

    print("Reversed Linked List:")
    printList(reversed_head)

```

## Submission at 2024-11-22 04:26:35


```
# Function to return precedence of operators
def precedence(op):
    if op in ('+', '-'):
        return 1
    if op in ('*', '/'):
        return 2
    if op == '^':
        return 3
    return 0

# Function to check if a character is an operator
def is_operator(c):
    return c in ('+', '-', '*', '/', '^')

# Function to convert infix expression to postfix
def infixToPostfix(expression):
    stack = []  # Stack to hold operators
    result = []  # List to hold the postfix expression

    for char in expression:
        # If character is an operand, add it to the result
        if char.isalnum():
            result.append(char)
        # If character is '(', push it to the stack
        elif char == '(':
            stack.append(char)
        # If character is ')', pop and add to result until '(' is encountered
        elif char == ')':
            while stack and stack[-1] != '(':
                result.append(stack.pop())
            stack.pop()  # Remove '(' from the stack
        # If character is an operator
        elif is_operator(char):
            while stack and precedence(stack[-1]) >= precedence(char):
                result.append(stack.pop())
            stack.append(char)

    # Pop all remaining operators in the stack
    while stack:
        result.append(stack.pop())

    return ''.join(result)

# Driver code to test
if __name__ == "__main__":
    infix_expr = "a+b*(c^d-e)^(f+g*h)-i"
    postfix_expr = infixToPostfix(infix_expr)
    print(postfix_expr)

```

## Submission at 2024-11-22 04:27:14


```
# Function to return precedence of operators
def precedence(op):
    if op in ('+', '-'):
        return 1
    if op in ('*', '/'):
        return 2
    if op == '^':
        return 3
    return 0

# Function to check if a character is an operator
def is_operator(c):
    return c in ('+', '-', '*', '/', '^')

# Function to convert infix expression to postfix
def infixToPostfix(expression):
    stack = []  # Stack to hold operators
    result = []  # List to hold the postfix expression

    for char in expression:
        # If character is an operand, add it to the result
        if char.isalnum():
            result.append(char)
        # If character is '(', push it to the stack
        elif char == '(':
            stack.append(char)
        # If character is ')', pop and add to result until '(' is encountered
        elif char == ')':
            while stack and stack[-1] != '(':
                result.append(stack.pop())
            stack.pop()  # Remove '(' from the stack
        # If character is an operator
        elif is_operator(char):
            while stack and precedence(stack[-1]) >= precedence(char):
                result.append(stack.pop())
            stack.append(char)

    # Pop all remaining operators in the stack
    while stack:
        result.append(stack.pop())

    return ''.join(result)

# Driver code to test
if __name__ == "__main__":
    infix_expr = input()
    postfix_expr = infixToPostfix(infix_expr)
    print(postfix_expr)

```

## Submission at 2024-11-22 05:14:39


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
    x= arr[i]-arr[j]
    a=0
    for i in range m:
        for j in range n:
            if x>= 0 and x<d:
                a = a+1
            elif x<0 and x<(-d):
                a= a+1
return a


p = input([int(x) if x != 'None' else None for x in input_str.split()])
arr1 = input([int(x) if x != 'None' else None for x in input_str.split()])
arr2 = input([int(x) if x != 'None' else None for x in input_str.split()])
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)


```

## Submission at 2024-11-22 05:16:05


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
    x= arr[i]-arr[j]
    a=0
    for i in range (m-1):
        for j in range (n-1) :
            if x>= 0 and x<d :
                a = a+1
            elif x<0 and x<(-d) :
                a= a+1
    return a


p = input([int(x) if x != 'None' else None for x in input_str.split()])
arr1 = input([int(x) if x != 'None' else None for x in input_str.split()])
arr2 = input([int(x) if x != 'None' else None for x in input_str.split()])
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)


```

## Submission at 2024-11-22 05:25:35


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    for i in range (m-1):
        for j in range (n-1) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])<d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])<(-d) :
                a= a+1
    return a


p = [ int(x) for x in input().strip().split() ]
arr1 = [ int(x) for x in input().strip().split() ]
arr2 = [ int(x) for x in input().strip().split() ]
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)

```

## Submission at 2024-11-22 05:28:34


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])<d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])>(-d) :
                a= a+1
    return a


p = [ int(x) for x in input().strip().split() ]
arr1 = [ int(x) for x in input().strip().split() ]
arr2 = [ int(x) for x in input().strip().split() ]
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)

```

## Submission at 2024-11-22 05:46:03


```
input_str = input()
arr1 =  [int(x) if x != 'None' else None for x in input_str.split()]
arr = (int, input().strip().split())
a=arr[0]
b=arr[1]
if a==b:
    c=a
else:
    c=a+1

d= c-a
e= b-c
f= d+ e 
print(f)

```

## Submission at 2024-11-22 05:49:31


```
# Write Code From Scratch Here
n=input()
input_str = input()
arr1=[int(x) if x != 'None' else None for x in input_str.split()]
a=0
for i in range (n):
    a= a+arr[i]
print(a)


```

## Submission at 2024-11-22 05:54:40


```
# Write Code From Scratch Here
n=input()
arr1=list(map(int, input().split()))
a=0
for i in range (n):
    a= a+arr[i]
print(a)



```

## Submission at 2024-11-22 05:58:29


```
# Write Code From Scratch Here
arr=list(map(int, input().split()))

a=arr[0]
b=arr[1]
f= b-a
print(f)

```

## Submission at 2024-11-22 06:00:41


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])<d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])>(-d) :
                a= a+1
    return a


p = list(map(int, input().split()))
arr1 =list(map(int, input().split()))
arr2 = list(map(int, input().split()))
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)
```

## Submission at 2024-11-22 06:07:25


```

n=input()
arr1=list(map(int, input().split()))
a=0
for i in range (n):
    a= a + arr[i]
print(a)




```

## Submission at 2024-11-22 06:08:44


```

n=input()
arr1=list(map(int, input().split()))
a=0
for i in range (n-1):
    a= a + arr[i]
print(a)




```

## Submission at 2024-11-22 06:19:33


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    b=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])>d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])<(-d) :
                a= a+1
        if a==4:
            b= b+1
    return b


p = list(map(int, input().split()))
arr1 =list(map(int, input().split()))
arr2 = list(map(int, input().split()))
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)
```

## Submission at 2024-11-22 06:20:07


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    b=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])>d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])<(-d) :
                a= a+1
        if a==n:
            b= b+1
    return b


p = list(map(int, input().split()))
arr1 =list(map(int, input().split()))
arr2 = list(map(int, input().split()))
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)
```

## Submission at 2024-11-22 06:20:12


```
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    b=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])>d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])<(-d) :
                a= a+1
        if a==n:
            b= b+1
    return b


p = list(map(int, input().split()))
arr1 =list(map(int, input().split()))
arr2 = list(map(int, input().split()))
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)
```

## Submission at 2024-11-22 06:21:46


```
# write code from scratch
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    b=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])<d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])>(-d) :
                a= a+1
        if a==n:
            b= b+1
    return b


p = list(map(int, input().split()))
arr1 =list(map(int, input().split()))
arr2 = list(map(int, input().split()))
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)
```

## Submission at 2024-11-22 06:26:06


```
# write code from scratch
def distance(arr1,arr2,d):
    m=len(arr1)
    n=len(arr2)
 
    a=0
    b=0
    for i in range (m):
        for j in range (n) :
            if (arr1[i]-arr2[j])>= 0 and (arr1[i]-arr2[j])>d :
                a = a+1
            elif (arr1[i]-arr2[j])<0 and (arr1[i]-arr2[j])<(-d) :
                a= a+1
        if a==n:
            b= b+1
    return b


p = list(map(int, input().split()))
arr1 =list(map(int, input().split()))
arr2 = list(map(int, input().split()))
d= p[2]
ans = distance(arr1,arr2,d)
print(ans)
```

## Submission at 2024-11-22 06:30:35


```
n=int(input())

for i in range(n):
    for j in range (i+1):
        print('*',end="")
    print()
for l in range(n-1):
    for m in range (n-l-1):
        print('*',end="")
    print()


```

## Submission at 2024-11-22 06:31:54


```
n=int(input())
if n==1:
    print('*')
for i in range(n):
    for j in range (i+1):
        print('*',end="")
    print()
for l in range(n-1):
    for m in range (n-l-1):
        print('*',end="")
    print()


```

## Submission at 2024-11-22 06:35:27


```
n=int(input)
b=(input)
a=0
for i in input:
    a=a+1
print(a)
```

## Submission at 2024-11-22 06:36:36


```
n=int(input)
b=(input)
a=0
for i in b:
    a=a+1
print(a)
```

## Submission at 2024-11-22 06:40:23


```
n=input()
arr1=list(map(int, input().split()))
a=0
for i in range (n):
    a= a+arr[i]
print(a)


```

## Submission at 2024-11-22 06:42:04


```
n=input()
arr1=list(map(int, input().split()))
a=0
for i in range (n):
    a= a+arr[i]
print(a)
```

## Submission at 2024-11-22 06:43:31


```
n=int(input())
arr1=list(map(int, input().split()))
a=0
for i in range (n):
    a= a+arr[i]
print(a)
```

## Submission at 2024-11-22 06:45:00


```
n=int(input())
arr1=list(map(int, input().split()))
a=0
for i in range (n-1):
    a= a+arr[i]
print(a)
```

## Submission at 2024-11-22 06:46:18


```
n=int(input())
arr1=list(map(int, input().split()))
a=0
for i in range (n-1):
    a= a + arr1[i]
print(a)
```

## Submission at 2024-11-22 06:47:43


```
n=int(input())
arr1=list(map(int, input().split()))
a=0
for i in range (n):
    a= a + arr1[i]
print(a)
```

## Submission at 2024-11-22 07:01:52


```
n=int(input())
arr1= list(map(int, input().split()))
a=1
c=0
for i in range n:
    if arr1[i]==arr1[j]:
        a= a+1
    if a>1:
        b=a//2
        c=c+b
print(c)

```

