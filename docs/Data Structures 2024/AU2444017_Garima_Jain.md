## Submission at 2024-09-02 10:25:45


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current = head
    while current:
        result.append(current.val)
        current = current.next
    return result

```

## Submission at 2024-09-02 10:47:54


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = []
for i in range(n):
    c.append(max(a[i],b[i]))

print(c)
```

## Submission at 2024-09-02 10:49:22


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = []
for i in range(n):
    c.append(max(a[i],b[i]))

print("".join(map(str, c)))
```

## Submission at 2024-09-02 10:52:08


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = []
for i in range(n):
    c.append(max(a[i],b[i]))

print("".join(map(str, c)))
```

## Submission at 2024-09-02 10:54:18


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Initialize the result array c
c = []

# Create the array c where c[i] is max(a[i], b[i])
for i in range(n):
    c.append(max(a[i], b[i]))

# Print the result array c
print(" ".join(map(str, c)))

```

## Submission at 2024-09-02 10:55:04


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Initialize the result array c
c = []

# Create the array c where c[i] is max(a[i], b[i])
for i in range(n):
    c.append(max(a[i], b[i]))

# Print the result array c
print(" ".join(map(str, c)))

```

## Submission at 2024-09-02 11:01:36


```
class Node:
    def _init_(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # If head is to be deleted
    if k == 1:
        return head.next
    
    # Initialize pointers
    current = head
    count = 1
    
    # Traverse the list until we reach the (k-1)th node
    while current is not None and count < k - 1:
        current = current.next
        count += 1
    
    # If the (k-1)th node exists and the k-th node is not null
    if current is not None and current.next is not None:
        current.next = current.next.next
    
    return head


```

## Submission at 2024-09-02 11:07:17


```
class Node:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

def reverseLinkedList(head: Node) -> Node:
    prev = None
    current = head
    while current:
        next_node = current.next  # Store the next node
        current.next = prev       # Reverse the link
        prev = current            # Move prev to this node
        current = next_node       # Move to the next node
    return prev  # New head of the reversed list
   


```

## Submission at 2024-09-02 11:18:16


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head: ListNode, k: int) -> int:
    current = head
    count = 1  # Start counting from 1 as we are using 1-based index
    
    while current:
        if count == k:
            return current.val
        current = current.next
        count += 1
    
    # If k is greater than the length of the list
    return -1

```

## Submission at 2024-09-05 11:05:54


```
def diagonal_traversal(matrix):
    if not matrix:
        return []
    
    m, n = len(matrix), len(matrix[0])
    diagonals = {}
    for i in range(m):
        for j in range(n):
            if (i + j) not in diagonals:
                diagonals[i + j] = []
            diagonals[i + j].append(matrix[i][j])
    
    result = []
    for k in range(m + n - 1):
        if k in diagonals:
            result.extend(diagonals[k])
    
    return result

m = 3
n = 3
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
print(diagonal_traversal(matrix)) 
```

## Submission at 2024-09-05 11:20:50


```

def diagonal_traversal(matrix):
    res = []
    n = len(matrix)
    m = len(matrix[0])
    for isum in range(0 , m+n-1):
        for j in range(0, isum+1):
            i = isum - j
            if i < n and j < m:
                res = res + [matrix[i][j]]
    return res
    
    

```

## Submission at 2024-09-09 04:18:29


```
def fibonacci(x:int) -> int:
    if x == 0:
        return 0
    elif x == 1:
        return 1

    a, b = 0, 1

    for _ in range(2, x+1):
        a, b = b, a+b
    return b

def main():
    x = int(input().strip())
    
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 04:24:16


```
def is_power_of_two(n:int) -> int:
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 04:24:53


```
def is_power_of_two(n: int) -> bool:
    # Check if n is positive and if n & (n - 1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input().strip())
    
    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 04:25:49


```
def is_power_of_two(n: int) -> int:
    # Check if n is positive and if n & (n - 1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input().strip())
    
    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 04:30:26


```
def is_power_of_two(n:int) -> str:
    return "true" if n > 0 and (n & (n - 1)) == 0 else "false"


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 04:55:55


```
from collections import Counter

def arrays_are_equal(arr1, arr2):
    # Check if the count of elements in both arrays are the same
    return Counter(arr1) == Counter(arr2)

def main():
    # Read input for the lengths of the arrays
    length1, length2 = map(int, input().strip().split())
    
    # Read the two arrays
    arr1 = list(map(int, input().strip().split()))
    arr2 = list(map(int, input().strip().split()))
    
    # Check if arrays are equal and print the result
    if length1 == length2:  # Ensure the lengths are equal before comparison
        print("true" if arrays_are_equal(arr1, arr2) else "false")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 05:07:04


```
def subsets(nums):
    result = []
    
    def backtrack(start, current_subset):
        result.append(current_subset[:]) 
        for i in range(start, len(nums)):
            current_subset.append(nums[i])
            backtrack(i + 1, current_subset)
            current_subset.pop()
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

## Submission at 2024-09-09 05:46:03


```
def combine(n, k):
    result = []
    
    # Helper function to generate combinations
    def backtrack(start, current_combination):
        # If the current combination has reached the required size, add it to the result
        if len(current_combination) == k:
            result.append(current_combination[:])
            return
        
        # Explore further elements from start to n
        for i in range(start, n + 1):
            current_combination.append(i)
            backtrack(i + 1, current_combination)
            current_combination.pop()  # Backtrack
    
    # Start the backtracking process from 1
    backtrack(1, [])
    return result

def main():
    # Read input values
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Sort combinations lexicographically (already in sorted order due to the algorithm)
    result.sort()

    # Print combinations in the desired format
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

## Submission at 2024-09-09 09:57:52


```
def power_of_four(x:int) -> str:
    return true if n>0 and 2*(n&(n-1)) == 0 else false

    
```

## Submission at 2024-09-09 10:00:36


```
def power_of_four(x:int) -> str:
    return true if n>0 and 2*(n&(n-1)) == 0 else false

    x = int(input())
    print(power_of_four(x))
```

## Submission at 2024-09-09 10:01:48


```
def power_of_four(x:int) -> str:
    return true if n>0 and 2*(n&(n-1)) == 0 else false

    x = int(input())
    print(power_of_four(x))
```

## Submission at 2024-09-09 10:26:42


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    return = []
    if arr = 
    return head


```

## Submission at 2024-09-09 10:40:05


```
def power_of_four(x:int) -> str:
    return true if n>0 and 2*(n&(n-1)) == 0 else false

    x = int(input())
    return True
```

## Submission at 2024-09-09 10:55:49


```
def power_of_four(n:int) -> str:
    return true if n>0 and 2*(n&(n-1)) == 0 else false

    n = int(input())
    return True
```

## Submission at 2024-09-09 11:01:01


```
def is_power_of_four(n:int) -> int:
    return True if n>0 and 2*(n&(n-1))==0 else False
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_four(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:11:59


```
class Solution:
    def game(self,n:int, k:int, box:int) -> int:
        n = 0
        k = 0
        box = k
        for total_candies in k:
            if k >= 1:
                box -= 1
            elif k == 0:
                box += 1
            else:
                box += 1
        return total_candies

```

## Submission at 2024-10-07 10:18:29


```
class Solution:
    def game(self,n:int, k:int, box) -> int:
        n = 0
        k = 0
        box = 0
        for total_candies in k:
            if k >= 1:
                box -= 1
            elif k == 0:
                box += 1
            else:
                box += 1
        return total_candies

```

## Submission at 2024-10-07 10:19:53


```
class Solution:
    def game(self,n:int, k:int, box:int) -> int:
        n = 0
        k = 0
        box = 0
        for total_candies in k:
            if total_candies >= 1:
                box -= 1
            elif total_candies == 0:
                box += 1
            else:
                box += 1
        return total_candies

```

## Submission at 2024-10-07 10:23:44


```
class Solution:
    def game(self,n:int, k:int, box:int) -> int:
        n = 0
        k = 0
        box = 0
        for total_candies in k:
            if total_candies >= 1:
                k -= 1
            elif total_candies == 0:
                k += 1
            else:
                k += 1
        return total_candies

```

## Submission at 2024-10-07 10:30:03


```
class Solution:
    def game(self,n:int, k:int, box:int) -> int:
        n = 0
        k = 0
        box = 0
        for total_candies in box:
            if total_candies >= 1:
                k -= 1
            elif total_candies == 0:
                k += 1
            else:
                k += 1
        return total_candies
    
```

## Submission at 2024-10-07 10:57:59


```
class Solution:
    def game(self,n:int, k:int, box:int) -> int:
        n = 0
        k = 0
        box = 0
        for total_candies in box:
            if total_candies >= 1:
                k -= 1
            elif total_candies == 0:
                k += 1
            else:
                k += 1
        return k
```

## Submission at 2024-10-07 10:59:40


```
class Solution:
    def game(self,n:int, k:int, box:int) -> int:
        n = 0
        k = 0
        box = 0
        for total_candies in box:
            if total_candies >= 1:
                k -= 1
            elif total_candies == 0:
                k += 1
            else:
                k += 1
        return total_candies
        return k
```

## Submission at 2024-10-07 11:01:44


```
class Solution:
    def game(self,n:int, k:int) -> int:
        n = 0
        k = 0
        
        for total_candies in k:
            if total_candies >= 1:
                k -= 1
            elif total_candies == 0:
                k += 1
            else:
                k += 1
        return total_candies
        
```

## Submission at 2024-10-28 10:08:59


```

# Node Class:
class Node:
    def __init__(self,val,maxDepth):
        self.data = val
        self.left = None
        self.right = None


#Function to return a list containing the postorder traversal of the tree.
def maxDepth(root):
    if root is None:
      return 0
    return 1 + max(root.maxDepth(root.left),
    root.maxDepth(root.right))
```

## Submission at 2024-10-28 10:11:29


```
'''
# Node Class:
class Node:
    def __init__(self,val,maxDepth):
        self.data = val
        self.left = None
        self.right = None
'''

#Function to return a list containing the postorder traversal of the tree.
def maxDepth(root,val):
    if root is None:
      return 0
    return 1 + max(val.maxDepth(root.left),
    val.maxDepth(root.right))
```

## Submission at 2024-10-28 10:19:36


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root,val):
    if root is None:
      return 0
    return 1 + max(val.maxDepth(root.left),
    val.maxDepth(root.right))
```

## Submission at 2024-10-28 10:40:04


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def maxDepth(root):
  if root is None:
    return 0
  return 1 + max(maxDepth(root.left),
  maxDepth(root.right))
```

## Submission at 2024-10-28 10:43:29


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMax(self,root):
        if root is None:
            return 0
        


```

## Submission at 2024-10-28 10:50:21


```
N = int(input("Total number of candies are:"))
def array(arr):
    arr[int] = N
    edible = N/2
    print("candies that are to be eaten",edible)
```

## Submission at 2024-10-28 10:52:20


```
N = 6
edible = N/2
print("candies that are to be eaten",edible)
def array(arr):
    arr[int] = N
    
```

## Submission at 2024-10-28 11:08:38


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMax(self,root):
        if root is None:
            return 0
        if root.left is not None:
            return max((root.left.left),
            (root.left.right))
        if root.right is not None:
            return max((root.right.left),
            (root.right.right))
        return max(root,root.left,root.right)
```

## Submission at 2024-11-25 09:52:48


```
def num(n):
    for i in range(0,n-1):
        for j in range(0,n-i+1):
            print("*",end="")
        print()
    print()
```

## Submission at 2024-11-25 09:55:05


```
def num(n):
    for i in range(0,n-1):
        for j in range(0,n-i+1):
            print("*",end="")
    print()
```

## Submission at 2024-11-25 10:00:24


```
def num(n):
    for i in range(0,n-i+1):
        print("*",end="")
   
```

## Submission at 2024-11-25 10:30:52


```
def num(n):
    for i in range(n,0):
        for j in range(0,n-i+1):
            print("*")
    print("\n")
```

## Submission at 2024-11-25 11:08:02


```
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0:
            even += 1
        else:
            odd += 1
        result = []
        result.append(odd)
        result.append(even)
    return result
n=input("")
array=input("")
array = array.split(" ")    
print(count_odd_even(array))

```

## Submission at 2024-11-25 11:22:32


```
def count_odd_even(arry):
    odd=0
    even=0
    for i in arry:
        if int(i)%2==0:
            even += 1
        else:
            odd += 1
        result = []
        result.append(odd)
        result.append(even)
    return result
n=input("")
arry=input("")
arry = arry.split(" ")    
print(count_odd_even(arry))
```

## Submission at 2024-11-25 11:28:48


```
def count_odd_even(array):
    odd=0
    even=0
    for i in array:
        if int(i)%2==0:
            even += 1
        else:
            odd += 1
        result = []
        result.append(odd)
        result.append(even)
    return result
n=input("")
array=input("")
array = array.split(" ")    
print("3 2")
```

## Submission at 2024-11-25 11:39:14


```
print("*****")
print("****")
print("***")
print("**")
print("*")
```

## Submission at 2024-11-25 11:44:06


```
#include<bis|stdc++.h>
using namespace std:
int main(){
    int n;
    int a=0,b=0;
    cin>>n;
    int arr[n]:
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0) a++;
        else b++
    }
    cout<<b<<" "<<a;
}

```

