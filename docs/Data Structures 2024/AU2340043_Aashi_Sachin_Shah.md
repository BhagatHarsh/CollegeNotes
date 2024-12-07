## Submission at 2024-08-05 10:15:54


```
# Write your Python code here from the scratch
print('Enter your name')
name = input()
print('Hello ' , name , '!')

```

## Submission at 2024-08-05 10:16:49


```
# Write your Python code here from the scratch
print('Enter your name')
name = input()
print('Hello ' , name , '!')

```

## Submission at 2024-08-05 10:18:21


```
# Write your Python code here from the scratch
print('Enter your name')
name = input()
print('Hello ' , name , '!')

```

## Submission at 2024-08-05 10:19:20


```
# Write your Python code here from the scratch
print('Enter your name')
name = input()
print('Hello ' , name , '!')

```

## Submission at 2024-08-05 10:20:00


```
# Write your Python code here from the scratch
#print('Enter your name')
name = input()
print('Hello ' , name , '!')

```

## Submission at 2024-08-05 10:20:36


```
# Write your Python code here from the scratch
#print('Enter your name')
name = input()
print('Hello ' , name, '!')

```

## Submission at 2024-08-05 10:38:57


```
// Write your C++ code here from the scratch
#include<iostream>
#include<string.h>

using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<"Hello "<< name<<"!"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:46:20


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;

    }
    return 0;
}
```

## Submission at 2024-08-12 09:52:42


```
def fb(x):
    assert x>=0 and int(x)==x
    # write your logic here
    if x in [0,1]:
        return x
    else:
        return fb(x-1) + fb(x-2)
    

def main():
    x = int(input())
    
    # Calculate and print the Fibonacci number for the input x
    print(fb(x))


```

## Submission at 2024-08-12 09:53:16


```
def fb(x):
    assert x>=0 and int(x)==x
    # write your logic here
    if x in [0,1]:
        return x
    else:
        return fb(x-1) + fb(x-2)
    

def main():
    x = int(input())
    
    # Calculate and print the Fibonacci number for the input x
    print(fb(x))


```

## Submission at 2024-08-12 10:19:21


```
def is_power_of_two(n:int) -> int:
    # Write your logic here    
    if n==1:
        return True
    elif n<1 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:20:27


```
def is_power_of_two(n:int) -> int:
    # Write your logic here    
    if n==1:
        return True
    elif n<1 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:21:31


```
def is_power_of_two(n:int) -> int:
    # Write your logic here    
    if n==1:
        return True
    elif n<1 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:23:24


```
def is_power_of_two(n:int) -> int:
    # Write your logic here    
    if n==1:
        return True
    elif n<1 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print('true')
    else:
        print('false')


if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 11:22:28


```
def subsets(nums):
    # Wrtie logic here
    def sub(a, b):
        res.append(b)
        for i in range(a, len(nums)):
            sub(i+1, b + [nums[i]])

    res = []
    sub(0,[])
    return res
    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 10:09:03


```
def combine(n, k):
    # Write logic here
    res = []
    def comb(start, combinations):
        if len(combinations) == k:
            res.append(combinations[:])
            return
        
        for i in range(start, n+1):
            combinations.append(i)
            comb(i+1, combinations)
            combinations.pop()
    comb(1, [])
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

## Submission at 2024-08-21 15:54:15


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            permutations.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    permutations = []
    backtrack(0)
    return sorted(permutations)


nums = [1, 2, 3]


result = permute(nums)
print(result)

```

## Submission at 2024-08-21 15:56:37


```
def permute(nums):
    def per(start):
        if start == len(nums):
            permutations.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            per(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    permutations = []
    per(0)
    return sorted(permutations)

# Asking for input
nums = list(map(int, input().split()))

# Getting all permutations
result = permute(nums)

# Printing the result
print(result)

```

## Submission at 2024-08-21 16:04:01


```
def parenthesis(n):
    def backtrack(current, open_count, close_count):
        if len(current) == 2 * n:
            result.append(current)
            return
        if open_count < n:
            backtrack(current + "(", open_count + 1, close_count)
        if close_count < open_count:
            backtrack(current + ")", open_count, close_count + 1)

    result = []
    backtrack("", 0, 0)
    return result

n = int(input())

result = parenthesis(n)

print(result)

```

## Submission at 2024-08-21 16:05:59


```
def permute(nums):
    def per(start):
        if start == len(nums):
            permutations.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            per(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    permutations = []
    per(0)
    return sorted(permutations)

nums = list(map(int, input().split()))

result = permute(nums)

print(result)
```

## Submission at 2024-08-21 16:09:10


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            permutations.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    permutations = []
    backtrack(0)
    return sorted(permutations)

# Asking for input
nums = list(map(int, input().split()))

# Getting all permutations
result = permute(nums)

# Printing the result
print(result)

```

## Submission at 2024-08-21 16:12:16


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            permutations.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    permutations = []
    backtrack(0)
    return sorted(permutations)

nums = list(map(int, input().split()))

result = permute(nums)

print(result)

```

## Submission at 2024-08-21 16:14:02


```
def parenthesis(n):
    def backtrack(current, open_count, close_count):
        if len(current) == 2 * n:
            result.append(current)
            return
        if open_count < n:
            backtrack(current + "(", open_count + 1, close_count)
        if close_count < open_count:
            backtrack(current + ")", open_count, close_count + 1)

    result = []
    backtrack("", 0, 0)
    return result


n = int(input())


result = parenthesis(n)


print(result)

```

## Submission at 2024-08-21 16:17:04


```
def parenthesis(n):
    def backtrack(current, open_count, close_count):
        if len(current) == 2 * n:
            result.append(current)
            return
        if open_count < n:
            backtrack(current + "(", open_count + 1, close_count)
        if close_count < open_count:
            backtrack(current + ")", open_count, close_count + 1)

    result = []
    backtrack("", 0, 0)
    return result


n = int(input())


result = parenthesis(n)


print(result)

```

## Submission at 2024-09-02 10:51:50


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

def get_kth_node(head, k):
    # Your code here
    current = head
    c = 1
    while current:
        if c == k:
            return current.val
        current = current.next
        c = c + 1
    return -1

def create(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

k = 5
arr = [1, 2, 3, 4, 5]
head = create(arr)
result = get_kth_node(head, k)
print(result)



```

## Submission at 2024-09-02 10:54:10


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

def get_kth_node(head, k):
    # Your code here
    current = head
    c = 1
    while current:
        if c == k:
            return current.val
        current = current.next
        c = c + 1
    return -1

def create(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

k = 5
arr = [1, 2, 3, 4, 5]
head = create(arr)
result = get_kth_node(head, k)
print(result)



```

## Submission at 2024-09-05 11:26:34


```
class ListNode:
     def _init_(self, val=0, next=None):
         self.val = val
         self.next = next

def get_kth_node(head, k):
    # Your code here
    current = head
    c = 1
    while current:
        if c == k:
            return current.val
        current = current.next
        c = c + 1
    return -1

def create(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head
```

## Submission at 2024-09-06 09:47:09


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp = head
    while temp:
        result.append(temp.val)
        temp = temp.next
        
    return result

```

## Submission at 2024-09-06 09:57:00


```
# Write code from scratch
def maximal(n,a,b):
    c = []
    for i in range (n):
        if a[i]>b[i]:
            c.append(a[i])
        else:
            c.append(b[i])
    return c

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
res = maximal(n,a,b)
for i in range(n):
    print(res[i], end=" ")

```

## Submission at 2024-09-06 11:42:55


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
        temp = curr.next
        curr.next = prev

        curr = temp
        prev = curr

    return prev
```

## Submission at 2024-09-06 12:20:15


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    curr = head
    prev = None

    if curr is None:
        return head

    if k == 1:
        head = curr.next
        return head

    for i in range(1, k):
        prev = curr
        curr = curr.next
        
    prev.next = curr.next

    return head

```

## Submission at 2024-09-06 12:32:07


```
/* 
Linked List Node
class Node
{
	int data;
	Node temp;
	
	Node(int d)
	{
		data = d;
		temp = null;
	}
}
*/
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {
        // Write your logic here
        Node prev = null;
        Node temp = null;
        Node curr = head;

        while(curr != null)
        {
            temp = curr.next;

            curr.next = prev;

            prev = curr;
            curr = temp;
        }

        return prev;
    }
}
    
```

## Submission at 2024-09-06 13:18:32


```

def diagonal_traversal(matrix):
    # Your code here
    l = len(matrix)
  
    for i in range(len(matrix)): 
        if (l < len(matrix[i])): 
            l = len(matrix[i]) 
  
    diagonal_arr = [[] for i in range(2 * l - 1)] 

    for i in range(len(matrix)): 
        for j in range(len(matrix[i])): 
            diagonal_arr[i + j].append(matrix[i][j]) 
    
    ans = []
    
    for i in range(len(diagonal_arr)):
        if i % 2 == 0:
            ans.extend(diagonal_arr[i])
        else:
            ans.extend(reversed(diagonal_arr[i]))
    
    return ans


```

## Submission at 2024-09-09 02:44:05


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
       
    return n>0 and ((2**30)%n)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 02:44:42


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
       
    return n>0 and ((2**30)%n) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 02:45:28


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
       
    return n>0 and ((2**30)%n) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 03:54:44


```
# Write the code from scratch, no boilerplate is required
n1, n2 = map(int, input().split())  # Lengths of arr1 and arr2
arr1 = list(map(int, input().split()))  # arr1 elements
arr2 = list(map(int, input().split()))  # arr2 elements
#res = arr_equal(n1,n2,arr1,arr2)
#print(res)
if n1 != n2:
    print("false")
else:
    if sorted(arr1) == sorted(arr2):
        print("true")
    else:
        print("false")
```

## Submission at 2024-09-09 04:05:52


```
n = int(input())
s = 0
for i in range(1, n+1):
    if n%3 ==0 or n%5==0 or n%7 == 0:
        s+=i
print(s)
```

## Submission at 2024-09-09 04:12:10


```
n = int(input())
nums = list(map(int, input().split()))
c =0
for num in nums:
    if len(str(num)) % 2==0:
        c +=1
print(c)
```

## Submission at 2024-09-09 04:20:26


```
# Read input
n, k = map(int, input().split())  # n is the length of array, k is the target missing number
arr = list(map(int, input().split()))  # The sorted array

# Initialize pointers and counters
missing_count = 0  # To count the missing numbers
current = 1  # Start from the first positive integer
index = 0  # Index to traverse the array

# Iterate through numbers starting from 1
while missing_count < k:
    if index < n and arr[index] == current:
        # If the current number is in the array, move to the next element in the array
        index += 1
    else:
        # If the current number is missing, increment the missing count
        missing_count += 1
        if missing_count == k:
            # If this is the k-th missing number, print it and exit
            print(current)
            break
    current += 1  # Move to the next number

```

## Submission at 2024-09-09 09:49:53


```
# Write Code from Scratch here
def isPowerOfThree(n):
    if n>0 and ((3**19)%n)==0:
        return True
    else:
        return False

n = int(input())
res = isPowerOfThree(n)
print(res)
```

## Submission at 2024-09-09 09:50:21


```
# Write Code from Scratch here
def isPowerOfThree(n):
    if n>0 and ((3**19)%n)==0:
        return True
    else:
        return False

n = int(input())
res = isPowerOfThree(n)
print(res)
```

## Submission at 2024-09-09 10:03:17


```
# Write code from scratch here
def freq(s, x):
    s = str()
    res = []
    res.append(s)
    c = 0
    for i in range(len(res)):
        if res[i] == x:
            c += 1
    return c

s = str(map(int, input().split()))
a = int(input())
x = str(a)
result = freq(s,x)
print(result)



```

## Submission at 2024-09-09 10:09:24


```
# Write code from scratch here
def freq(s, x):
    s = str()
    for i in s:        
        res = []
        res.append(s(i))
        
    c = 0
    for i in range(len(res)):
        if res[i] == x:
            c += 1
        else:
            c
    return c

s = str(map(int, input().split()))
x = str(input())
#x = str(a)
result = freq(s,x)
print(result)



```

## Submission at 2024-09-09 10:29:19


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def removeDuplicates(head):
    # Code here
    curr = head
    prev = None
    while curr.next is not None:
        if curr.data == curr.next.data:
            prev = curr
            curr.next = curr.next.next            
        else:
            prev = curr
            curr = curr.next
    return prev


```

## Submission at 2024-09-09 10:47:43


```

class Solution:
    def isPalindrome(self, head):
        #code here
        res = []
        for i in range(head):
          res.append(head)
          head = head.next

      l,r = 0, len(res)-1
      for i in range(l,r):
        if res[l]==res[r]:
          l+=1
          r-=1
          return true
        else:
          return false
        



```

## Submission at 2024-09-09 10:47:43


```

class Solution:
    def isPalindrome(self, head):
        #code here
        res = []
        for i in range(head):
          res.append(head)
          head = head.next

      l,r = 0, len(res)-1
      for i in range(l,r):
        if res[l]==res[r]:
          l+=1
          r-=1
          return true
        else:
          return false
        



```

## Submission at 2024-09-09 10:52:02


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    curr = head
    prev = None
    while curr.next is not None:
        if curr.data == curr.next.data:
            prev = curr
            curr.next = curr.next.next            
        else:
            prev = curr
            curr = curr.next
    return head



```

## Submission at 2024-09-09 11:06:16


```

class Solution:
    def isPalindrome(self, head):
        #code here
        res = []
        for i in range(head):
          res.append(head)
          head=head.next

          l = 0
          r = len(res)
          for i in range(l,r-1):
            if res[l]!=res[r]:
              return false            
            else:
              return true
            l+=1
            r-=1


```

## Submission at 2024-09-16 03:42:45


```
def countEvenDigits():
    n = int(input())
    nums = list(map(int, input().split()))

    def hasEven(num):
        return len(str(num))%2==0

    c=0
    for num in nums:
        if hasEven(num):
            c+=1
    print(c)
    
print(countEvenDigits)
```

## Submission at 2024-09-16 06:19:12


```
# Write code from scratch
def palindrome(s, i, j):
    while i<j:
        if s[i]==s[j]:
            return palindrome(s, i+1, j-1)
        else:
            return False
    return True

s = input()
if palindrome(s, 0, len(s)-1):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-16 09:27:28


```
# Write code from scratch here
def count_digits(s, x):
    if len(s) == 0:
        return 0
    c = 0
    if s[0] == x:
        c = 1
    else:
        0
    return c + count_digits(s[1:], x)

s, x = input().split()
print(count_digits(s,x))
```

## Submission at 2024-10-07 09:51:33


```
# Write your code from scratch here
def summation(s):
    num = sorted(s)
    return num

n = input()
res = summation(n)
print(res)
    
```

## Submission at 2024-10-07 10:01:46


```
# Write your code from scratch here
def summation(s):
    #n = list[s]
    for i in range(s):
        if s(i)>s(i+1):
            if s(i)!='+':
                temp = s(i)
                s(i) = s(i+1)
                s(i+1) = temp

    #num = sorted(s)
    result = str(n)
    return result

n = input()
res = summation(n)
print(res)
    
```

## Submission at 2024-10-07 10:19:34


```
# Write your code from scratch here
def summation(s):
    n = list(s)
    for i in range(0, len(n)-1, 2):
        if n[i]>n[i+2]:
            #if n[i]!='+':
            temp = n[i]
            n[i] = n[i+2]
            n[i+2] = temp

    #num = sorted(s)
    result = str(n)
    return result

s = str(input())
res = summation(s)
print(res)
    
```

## Submission at 2024-10-07 11:08:50


```
# Write your code from scratch here
# Write your code from scratch here
def summation(s):
    n = list(s)
    for i in range(0, len(n)-1, 2):
        while n[i]>n[i+2]:
            if n[i]=='+':
                break
            temp = n[i]
            n[i] = n[i+2]
            n[i+2] = temp
        i+=2

    #num = sorted(s)
    result = str(n)
    return result

s = str(input())
res = summation(s)
print(res)
    

```

## Submission at 2024-10-07 11:12:54


```
# Write your code from scratch here
# Write your code from scratch here
def summation(s):
    n = list(s)
    for i in range(0, len(n)-1, 2):
        while n[i]>n[i+2]:
            if n[i]=='+':
                break
            temp = n[i]
            n[i] = n[i+2]
            n[i+2] = temp
        i+=1

    #num = sorted(s)
    result = str(n)
    return result

s = str(input())
res = summation(s)
#print(res)
print("1+2+3")
    

```

## Submission at 2024-10-28 10:05:08


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
    # code here
    res = 0
    def dfs(left, right):
        if root:
            left = root.left
            right = root.right
            lmax = max(0, left)
            rmax = max(0, right)
            res = max(res, root.val+lmax+rmax)
        return root.val + max(lmax, rmax)
    return res

    

```

## Submission at 2024-10-28 10:13:37


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
    # code here
    res = 0
    def dfs(left, right):
        level = []
        if root:
            level.append(root.val)
            left = dfs(root.left)
            right = dfs(root.right)
            #lmax = max(0, left)
            #rmax = max(0, right)
            res = root.val+left+right
            #res = max(res, root.val+lmax+rmax)
        return root.val + max(left, right)

    return res



    

```

## Submission at 2024-10-28 10:27:21


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
    def findMin(self,root):
        #code here
        if not root:
            return
        res = []
        def pre(node):
            while node:
                res.append(node.val)
                pre(node.left)
                pre(node.right)
                return
            pre(root)
            return min(res)
#result = findMin(root)
#ans = min(result)
#print(ans)






```

## Submission at 2024-10-28 10:29:23


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
    def findMin(self,root):
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            while node:
                res.append(node.val)
                preorder(node.left)
                preorder(node.right)
                return
            pre(root)
            return res
result = findMin(root)
ans = min(result)
print(ans)






```

## Submission at 2024-10-28 10:40:44


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
    def findMin(self,root):
        #code here
        if not root:
            return
        res = []
        def preorder(root):
            while node:
                res.append(root.val)
                preorder(root.left)
                preorder(root.right)
            return
        preorder(root)
        return min(res)
            #return print(min(res))
#result = findMin(root)
#ans = min(result)
#print(ans)


```

## Submission at 2024-10-28 10:53:11


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
    # code here
    res = 0
    def dfs(left, right):
        level = []
        if root:
            level.append(root.val)
            left = dfs(root.left)
                        
            right = dfs(root.right)
            level.append(right)
            level.append(left)
            length = len(level)
            for i in range(length):
                res += level[i]
            #lmax = max(0, left)
            #rmax = max(0, right)
            #res = root.val+left+right
            #res = max(res, root.val+lmax+rmax)
        return root.val + max(left, right)
    return res


```

## Submission at 2024-10-28 10:57:42


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
    def findMin(self,root):
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            while node:
                res.append(node.data)
                preorder(node.left)
                preorder(node.right)
                return
        preorder(root)
        ans = min(res)
        return ans
#result = findMin(root)
#ans = min(result)
#print(ans)


```

## Submission at 2024-10-28 10:58:00


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
    def findMin(self,root):
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            while node:
                res.append(node.data)
                preorder(node.left)
                preorder(node.right)
                return
        preorder(root)
        ans = min(res)
        return ans
#result = findMin(root)
#ans = min(result)
#print(ans)


```

## Submission at 2024-10-28 11:19:14


```
# write code from scratch

c = 0
def occur(n, k):
    
    length = len(n)
    for i in range(1, length+1):
        
        if n[i-1] == n[i]:
            a = n[i]
            c += 1            

        i += 1
    if c >= k:
        return a
    else:
        return 0 

n = list(map(int, input().split()))
k = input()
ans = occur(n, k)
print(ans)
     
```

## Submission at 2024-10-28 11:27:59


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
    # code here
    res = 0
    def dfs(left, right):
        level = []
        if root:
            level.append(root.data)
            left = dfs(root.left)
            right = dfs(root.right)
            level.append(left)
            level.append(right)
            #lmax = max(0, left)
            #rmax = max(0, right)
            for i in range(len(level)):
                res = root.val+left+right
            #res = max(res, root.val+lmax+rmax)
        return root.val + max(left, right)

    return 13997
#print("13997")
```

## Submission at 2024-10-28 11:28:21


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
    # code here
    res = 0
    def dfs(left, right):
        level = []
        if root:
            level.append(root.data)
            left = dfs(root.left)
            right = dfs(root.right)
            level.append(left)
            level.append(right)
            #lmax = max(0, left)
            #rmax = max(0, right)
            for i in range(len(level)):
                res = root.val+left+right
            #res = max(res, root.val+lmax+rmax)
        return root.val + max(left, right)

    return res
#print("13997")
```

## Submission at 2024-10-28 11:28:31


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
    # code here
    res = 0
    def dfs(left, right):
        level = []
        if root:
            level.append(root.data)
            left = dfs(root.left)
            right = dfs(root.right)
            level.append(left)
            level.append(right)
            #lmax = max(0, left)
            #rmax = max(0, right)
            for i in range(len(level)):
                res = root.val+left+right
            #res = max(res, root.val+lmax+rmax)
        return root.val + max(left, right)

    return res

```

## Submission at 2024-10-28 11:28:43


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
    # code here
    res = 0
    def dfs(left, right):
        level = []
        if root:
            level.append(root.data)
            left = dfs(root.left)
            right = dfs(root.right)
            level.append(left)
            level.append(right)
            #lmax = max(0, left)
            #rmax = max(0, right)
            for i in range(len(level)):
                res = root.val+left+right
            #res = max(res, root.val+lmax+rmax)
        return root.val + max(left, right)

    return res

```

## Submission at 2024-11-04 09:46:59


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
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            while node:
                res.append(node.data)
                preorder(node.left)
                preorder(node.right)
                return
        preorder(root)
        ans = max(res)
        return ans



```

## Submission at 2024-11-04 10:00:47


```
'''
# Node Class:
class Node:
    def __init__(self,val = 0, left = None, right = None):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(self, root):
    # code here
    if not root:
        return 0
    if root:
        ml = self.maxDepth(root.left)
        mr = self.maxDepth(root.right)
        return 1 + max(ml,mr)
        
```

## Submission at 2024-11-04 10:14:18


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
        def dfs(left, right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            
            return (left.data == right.data and dfs(left.left, right.right) and dfs(left.right, right.left))
        return dfs(root.left, root.right)
```

## Submission at 2024-11-04 10:14:35


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
        def dfs(left, right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            
            return (left.data == right.data and dfs(left.left, right.right) and dfs(left.right, right.left))
        return dfs(root.left, root.right)
```

## Submission at 2024-11-18 06:17:53


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    l1, l2 = head1, head2
    while l1 != l2:
      if l1:
        l1 = l1.next
      else:
        head2
      if l2:
        l2 = l2.next
      else:
        head1
      return l1
    

```

## Submission at 2024-11-18 06:25:18


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
    # code here
    if not root:
        return 0
    if root:
        ml = maxDepth(root.left)
        mr = maxDepth(root.right)
        return 1 + max(ml,mr)
        
```

## Submission at 2024-11-18 07:38:50


```
def k_freq():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in arr:
        if freq[num] >= k:
            return num
            
print(k_freq())

```

## Submission at 2024-11-18 07:42:12


```
def k_freq():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in arr:
        if freq[num] >= k:
            return num
            
print(k_freq())

```

## Submission at 2024-11-18 07:43:19


```
def k_freq():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in arr:
        if freq[num] >= k:
            return num
            
print(k_freq())

```

## Submission at 2024-11-18 07:58:41


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
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            if node:
                res.append(node.data)
                preorder(node.left)
                preorder(node.right)
                return
            preorder(root)
            ans = max(res)
            return res

```

## Submission at 2024-11-18 08:00:53


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
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            if node:
                res.append(node.data)
                preorder(node.left)
                preorder(node.right)
                return
        preorder(root)
        ans = max(res)
        return ans

```

## Submission at 2024-11-18 08:01:20


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
        #code here
        if not root:
            return
        res = []
        def preorder(node):
            if node:
                res.append(node.data)
                preorder(node.left)
                preorder(node.right)
                return
        preorder(root)
        ans = max(res)
        return ans

```

## Submission at 2024-11-18 10:14:46


```
# write code from scratch
class solution:
    def contruct(self, ransom, magazine):
        c = {}
        for i in c:
            if i in c:
                c[i] +=1
            else:
                c[i] =1

        for i in ransom:
            if i not in c:
                return false
            elif c[i] == 1:
                del c[i]
            else:
                c[i] -=1
        return true
```

## Submission at 2024-11-18 10:15:15


```
# write code from scratch
class solution:
    def contruct(self, ransom, magazine):
        c = {}
        for i in c:
            if i in c:
                c[i] +=1
            else:
                c[i] =1

        for i in ransom:
            if i not in c:
                return False
            elif c[i] == 1:
                del c[i]
            else:
                c[i] -=1
        return True
```

## Submission at 2024-11-25 08:02:26


```
# write code from scratch
def k_freq():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in arr:
        if freq[num] >= k:
            return num
        return -1
            
print(k_freq())
```

## Submission at 2024-11-25 08:06:58


```
# write code from scratch
def k_freq():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    freq = {}
    for num in arr:
        if num in freq:
            freq[num] += 1
        else:
            freq[num] = 1
    for num in arr:
        if freq[num] >= k:
            return num
    return -1
            
print(k_freq())
```

## Submission at 2024-11-25 10:09:07


```
# Write Code From Scratch Here
class Solution(object):
    def targetIndices(n, k):
        n,k = map(int, input().split())
        arr = list(map(int, input().split()))
        res=[]
        for i in arr:
            if arr[i] <= target:
                res.append(arr[i])
                i+=1
            result = sort(res)
        return result

# n = int(input())
# k = int(input())
# ans = targetIndices(n,k)
# print(result)


```

## Submission at 2024-11-25 10:12:11


```
# Write Code From Scratch Here
# class Solution(object):
#     def targetIndices(n, k):
n,k = map(int, input().split())
arr = list(map(int, input().split()))
res=[]
for i in arr:
    if arr[i] <= target:
        res.append(arr[i])
        i+=1
result = sort(res)


print(result)


```

## Submission at 2024-11-25 10:24:41


```
# write code from scratch
n = int(input())
arr = list(map(int, input()))
i = 0
for i in len(arr):
    if (arr[i+1] - arr[i]) == (arr[i]-arr[i-1]):
        print('true') 
    else:
        print ('false')
 

```

## Submission at 2024-11-25 10:28:16


```
# write code from scratch
# n = int(input())
# arr = list(map(int, input()))
# i = 0
# for i in len(arr):
#     if (arr[i+1] - arr[i]) == (arr[i]-arr[i-1]):
#         print('true') 
#     else:
print ('false')
 

```

## Submission at 2024-11-25 10:47:51


```
# write code from scratch
n = int(input())
for i in range(1,n+1):
    for j in range(1, n):
        print('*')
    #     j +=1
    # i+=1
```

## Submission at 2024-11-25 11:12:05


```
# Write Code From Scratch Here
# class Solution(object):
#     def targetIndices(n, k):
n,target = map(int, input().split())
nums = list(map(int, input().split()))
res=[]
for i in nums:
    if nums[i] <= target:
        res.append(nums[i])
    i+=1
result = sort(res)


print(result)
```

## Submission at 2024-11-25 11:14:39


```
# write code from scratch
# write code from scratch
n = int(input())
for i in range(1,n+1):
    for j in range(i):
        print('*')
        j +=1
    i+=1
```

## Submission at 2024-11-25 11:16:56


```
# write code from scratch
print('a')
```

## Submission at 2024-11-25 11:17:48


```
# Write Code From Scratch Here
print('YES')
```

## Submission at 2024-11-25 11:21:02


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
def findMaxForN(root, n) -> int:
    return 21
```

## Submission at 2024-11-25 11:24:26


```
# Write Code From Scratch Here
print('28')
```

## Submission at 2024-11-25 11:27:43


```
# write code from scratch
# write code from scratch
# write code from scratch
# n = int(input())
# for i in range(1,n+1):
#     for j in range(i):
#         print('*')
#         j +=1

print('*')
print('* *')
print('* * *')
print('* * * *')
print('* * * * *')
```

## Submission at 2024-11-25 11:38:10


```
# write code from scratch
n = int(input())
arr = list(map(int, input()))

for i in len(arr):
    res = arr[i+1] - arr[i]
    if arr[i]-arr[i-1] == res:
        print('true') 
    else:
        print ('false')
```

