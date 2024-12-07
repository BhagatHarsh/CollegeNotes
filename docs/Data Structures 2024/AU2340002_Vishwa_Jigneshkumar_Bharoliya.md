## Submission at 2024-08-05 10:21:31


```
name = input()
print("Hello" ,name, "!")
```

## Submission at 2024-08-05 10:28:19


```
name = input()
print("Hello", name, "!")
```

## Submission at 2024-08-05 10:29:13


```
name = input()
print("Hello", name, "!")
```

## Submission at 2024-08-05 10:31:27


```
name = input()
if len(name) < 1 or len(name) > 100 
print("Hello", name, "!")

else
print("error")
```

## Submission at 2024-08-05 10:32:24


```
string name = input()
if len(name) < 1 or len(name) > 100 
print("Hello", name, "!")

else
print("error")
```

## Submission at 2024-08-05 10:52:25


```
n = int(input())
for i in range(n)
   name = input()
   print("Hello", name, "1")
```

## Submission at 2024-08-05 10:52:26


```
n = int(input())
for i in range(n)
   name = input()
   print("Hello", name, "1")
```

## Submission at 2024-08-05 10:52:57


```
n = int(input())
for i in range(n):
   name = input()
   print("Hello", name, "!")
```

## Submission at 2024-08-12 10:02:48


```
n = int(input())

def fibonacci(n):
    a = 0
    b = 1
    c = 0
    
    x = []
    
    for _ in range (n):
        x.append(a)

        c = a
        a = b
        b = a + c 

    return x

def main():

 if n>=1 or n<=30 :
   print(fibonacci(n))

 else:
   print("enter number between 1 and 30")


```

## Submission at 2024-08-12 10:30:06


```
def is_power_of_two(n:int) -> int:

    if n > 0 and (n & (n-1)) == 0 :
        return 1
    else:
        return 0   
      
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if is_power_of_two(n) == 1:
      print("is a power of two")
     
    else:
        print("is not a power of two")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:54:23


```
def subsets(nums):
    # Wrtie logic here
    result = [[]]

    for num in nums :
        new_subset = []
        for subset in result:
            new_subset.append(subset + [num])

            result.extend(new_subset)
            
    return result        

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

## Submission at 2024-08-21 06:45:24


```
from itertools import combinations


def combine(n, k):
    return [list(comb) for comb in combinations(range(1, n + 1), k)]

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

## Submission at 2024-08-21 06:53:39


```
from itertools import permutations

def get_permutations(nums):
    
    return sorted([list(p) for p in permutations(nums)])

def main():
    
    nums = list(map(int, input().split()))
    
    result = get_permutations(nums)
    
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 06:58:12


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        
        if len(s) == 2 * n:
            result.append(s)
            return
            
        if left < n:
            backtrack(s + "(", left + 1, right)
        
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    
    n = int(input())
    
    result = generate_parentheses(n)
    
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 10:19:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):

    if k == 1:
        return head.next
    
    i = head

    for i in range(k-2):
        i = i.next

    if i is not None and i.next is not None:
        i.next = i.next.next
    return head

  


```

## Submission at 2024-09-02 10:29:47


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

def traverse_linked_list(head):
    result = []
    i = head
    while i is not None:
        result.append(i.val)
        i = i.next
    
    return result

```

## Submission at 2024-09-02 10:39:47


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    if k == 1:
        return head

    i = head
    for _ in range(k):
        i = i.next

    if i is not None and i.next is not None:
        return i


    

```

## Submission at 2024-09-09 04:21:31


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    current = head
    prev = None
    
    if current != None and current.data == k:
        head = current.next
    else:
        while current != None:
         if current.data == k:
            prev.next = current.next
            break
         prev = current
         current = current.next

    
    tmp = head
    while tmp != None:
     print(tmp.data, end = " ")
     tmp = tmp.next


```

## Submission at 2024-09-09 05:06:01


```
class ListNode:
    def _init_(self, val=0, next=None):
         self.val = val
         self.next = next

def get_kth_node(head, k):
    
    current = head
    if current == None:
      print("empty list")
      return

    while current != None:
        if current.val == k:
          print(current.val)
          return
        current = current.next

    
    print("not found")
        
        
    

```

## Submission at 2024-09-09 05:18:19


```
class ListNode:
    def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

def get_kth_node(head, k):
    
    current = head
    if current == None:
      print("empty list")
      return
      

    while current != None:
        if current.val == k:
          print(current.val)
          return
          
        current = current.next

    else:
      print("not found")

    

```

## Submission at 2024-09-09 05:28:52


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current = head

    while current != None:
     result.append(current.val)
     current = current.next



    return result

```

## Submission at 2024-09-09 05:51:52


```
def fibonacci(x:int) -> int:
    assert x >= 0 and int(x) == x
    if x in [0,1]:
        return x
    else:
        return (fibonacci(x-1) + fibonacci(x-2))
            


def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 06:03:17


```
def is_power_of_two(n:int) -> int:
    assert n >= 0 and int(n) == n
    if n == 0:
      return False
     

    while n % 2 == 0:
      n //= 2
      
    return n == 1 
       
   

def main():
    n = int(input().strip())

    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 10:05:12


```
def isPowerOfThree(n):

 assert n >= 0 and int(n) == n
 if n == 0:
   return 1
   
 else:
  while n % 3 == 0:
    n //= 3
  return n == 1

  

def main():

 print(isPowerOfThree())




```

## Submission at 2024-09-09 10:30:46


```
def countFreq(s, x):

    count = 0
    i = 0

    if i <= s.length:
        while x in s:
            count = count + 1
            i = i + 1
        

    return count

def main():
    print(countFreq(s, x))


    
```

## Submission at 2024-09-09 10:38:26


```
def isPowerOfThree(n):

 assert n >= 0 and int(n) == n
 if n == 0:
   result = True
   return
  
   
 else:
  while n % 3 == 0:
    n //= 3
    if n == 1:
     result = True
    break
 return result
 print(result)

  

def main():

 isPowerOfThree()




```

## Submission at 2024-09-09 10:50:18


```
class solution:
 def isPowerOfThree(n):

  assert n >= 0 and int(n) == n
  
  if n == 0:
    return 1

  while n % 3 == 0:
     n //= 3
  return n == 1

  
 def main():

  isPowerOfThree()
```

## Submission at 2024-09-09 11:05:30


```
class solution:
    def countFreq(s, x):

     count = 0
     i = 0
     s = []

     if i <= s.length:
        while x == s[i]:
            count = count + 1
            i = i + 1
     

def main():
    countFreq()


    
```

## Submission at 2024-09-16 03:47:14


```
def is_power_of_three(n):
    # Base case: if n is less than 1, it can't be a power of three
    if n < 1:
        return False
    # Base case: if n is 1, it's a power of three (3^0 = 1)
    if n == 1:
        return True
    # Recursively divide n by 3 and check if the result is still a power of three
    if n % 3 == 0:
        return is_power_of_three(n // 3)
    else:
        return False

n = int(input())
# Output
if is_power_of_three(n):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-16 03:56:08


```
# Write code from scratch here
def count_frequency(s, x, index=0):
    # Base case: if the index reaches the length of the string, return 0
    if index == len(s):
        return 0
    # Recursive case: check the current character and add 1 if it matches x, otherwise add 0
    return (1 if s[index] == x else 0) + count_frequency(s, x, index + 1)

# Input
s, x = input().split()

# Output
print(count_frequency(s, x))

```

## Submission at 2024-10-07 10:48:51


```
def mathexpression(s):
    

    nums = []
    nums[i] = s.split()
    nums.sort()

    if nums[i] not in range[4]:
      print("cannot calculate")
      
    for num in nums:
        if i < len(nums):
         print(nums[i],"+")
         
mathexpression()


```

## Submission at 2024-10-28 10:23:07


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

      def min(self, root ,result):
        
        if root:

         result.append(root.val)
         min(self.root.left, result)
         min(self.root.right, result)
         
         result = []
         min(self.root , result)
         return result

            
        #code here


```

## Submission at 2024-10-28 10:59:15


```
n, k = 7, 2
arr = [1, 2, 3, 4, 4, 4, 4]

def koccurences(n, k, arr):
    
    
    curr = 0
    count = 0

    while i in range(n):

        if arr[i] == curr:
            count += 1

        if count < k:
            curr += 1

        return curr

    print(curr)
```

## Submission at 2024-10-28 11:20:14


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

      def minimum(root ,result):
        
        if root.val <= root.left.val & root<= root.right.val:
          answer = root

        elif root.left.val <= root.right.val:
          answer = root.left.val

        else:
          answer = root.right.val

        return answer

         
      

```

## Submission at 2024-11-25 10:24:56


```
def findmax():

  arr = list(map(str,input().split()))

  counta = 0
  countb = 0
  freq


  for i in range(arr.length):
    if arr[i] == a:
        counta += 1
    else:
        countb += 1
        
  if counta > countb:
    freq = a
  else:
    freq = b

print freq
```

## Submission at 2024-11-25 10:26:27


```
def findmax():

  arr = list(map(str,input().split()))

  counta = 0
  countb = 0
  freq


  for i in range(arr.length):
    if arr[i] == a:
        counta += 1
    else:
        countb += 1
        
  if counta > countb:
    freq = a
  else:
    freq = b

  print(freq)
```

## Submission at 2024-11-25 10:26:35


```
def findmax():

  arr = list(map(str,input().split()))

  counta = 0
  countb = 0
  freq


  for i in range(arr.length):
    if arr[i] == a:
        counta += 1
    else:
        countb += 1
        
  if counta > countb:
    freq = a
  else:
    freq = b

  print(freq)
```

## Submission at 2024-11-25 10:56:21


```
def findmax():

  arr = list(map(str,input().split()))

  counta = 0
  countb = 0
  freq = ''


  for i in range(len(arr)):
    if arr[i] == 'a':
        counta += 1
    else:
        countb += 1
        
  if counta > countb:
    freq = 'a'
  else:
    freq = 'b'

  print(freq)

findmax()

```

## Submission at 2024-11-25 10:58:43


```
def findmax():

  arr = list(map(str,input().split()))

  counta = 0
  countb = 0
  freq = ''


  for i in range(len(arr)):
    if arr[i] == 'a':
        counta += 1
    else:
        countb += 1
        
  if counta > countb:
    freq = 'a'
  else:
    freq = 'b'

  print(freq)

findmax()

```

## Submission at 2024-11-25 11:14:44


```
rows = int(input())

for i in range(0,rows):
    for j in range(0, i+1):
        print("*", end ='')
print(" ", end='')
```

## Submission at 2024-11-25 11:19:43


```
rows = int(input())

for i in range(0,rows):
    for j in range(0, i+1):
        print("*", end =" ")
print(" ", end="")
```

## Submission at 2024-11-25 11:30:06


```
n = int(input())
arr = list(map(int,input().split()))

diff = arr[1] - arr[0]

for i in range(0, n-1):
    if arr[i+1] - arr[i] == diff:
        print("true")
    else:
        print("false")

```

## Submission at 2024-11-25 11:31:47


```
n = int(input())
arr = list(map(int,input().split()))

diff = arr[1] - arr[0]
val = ''

for i in range(0, n-1):
    if arr[i+1] - arr[i] == diff:
        val = 'true'
    else:
        val = 'false'

print(val)

```

## Submission at 2024-11-25 11:36:42


```
arr = list(map(str,input().split()))

counta = 0
countb = 0
freq = ''


for i in range(len(arr)):
if arr[i] == 'a':
     counta += 1
else:
    countb += 1
        
if counta > countb:
    freq = 'a'
else:
    freq = 'b'

print(freq)


```

## Submission at 2024-11-25 11:38:57


```
arr = list(map(str,input().split()))

counta = 0
countb = 0
freq = ''


for i in range(len(arr)):
 if arr[i] == 'a':
     counta += 1
 else:
    countb += 1
        
if counta <= countb:
    freq = 'a'
else:
    freq = 'b'

print(freq)


```

## Submission at 2024-11-25 11:41:44


```
rows = int(input())

for i in range(0,rows):
    for j in range(0, i+1):
        print("*")
print(" ", '')

```

## Submission at 2024-11-25 11:44:26


```
rows = int(input())

for i in range(0,rows):
    for j in range(0, i+1):
        print("*")
print('')


```

