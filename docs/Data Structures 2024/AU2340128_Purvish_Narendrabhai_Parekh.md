## Submission at 2024-08-05 10:22:21


```
# Write your Python code here from the scratch
name = input()
if ( len(name) >2 and len(name) <101):
    print("Hello " + name + "!")
else:
    print("Enter your name properly")
```

## Submission at 2024-08-05 10:24:19


```
# Write your Python code here from the scratch
name = input()
if ( len(name) >2 and len(name) <101):
    print("Hello " + name + "!")
else:
    print("Enter your name properly")
```

## Submission at 2024-08-05 10:29:02


```
# Write your Python code here from the scratch
name = input()
if ( len(name)>0 and len(name)<101):
    print("Hello "+name+"!")
else:
    print("Enter your name correctly")
```

## Submission at 2024-08-05 10:35:42


```
# Write your Python code here
n = int(input())
names = []
for i in range(0,n):
    inpt = input()
    names.append(inpt)
    i+=1

for i in range(0,n):
    print("Hello " + names[i] + "!")
    i+=1

```

## Submission at 2024-08-12 09:44:53


```
def fibonacci(x:int) -> int:
    # write your logic here
    if (x<0 or x>30):
        return ("x should be between 0 and 30 only !")
    if (x==1):
        return 1
    
    return (x+fibonacci(x-1))

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:45:50


```
def fibonacci(x:int) -> int:
    # write your logic here
    if (x<0 or x>10):
        return ("x should be between 0 and 30 only !")
    if (x==1):
        return 1
    
    return (x+fibonacci(x-1))

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:46:32


```
def fibonacci(x:int) -> int:
    # write your logic here
    # if (x<0 or x>10):
    #     return ("x should be between 0 and 30 only !")
    if (x==1):
        return 1
    
    return (x+fibonacci(x-1))

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:55:16


```
def fibonacci(x:int) -> int:
    # write your logic here
    if (x<0 or x>10):
        return ("x should be between 0 and 10 only !")
    if x==0:
        return 0
    if x==1:
        return 1
    return (fibonacci(x-1) + fibonacci(x-2))
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:03:36


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if( n< -2^31 or n> 2^31 -1):
        return("Enter the value between (-2^31) & (2^31 - 1)")
    if n == 1:
        return True

    if (n%2 == 0):
        return(is_power_of_two(n/2))
    else:
        return False
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:06:43


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    # if( n< -2^(31) or n> 2^(31)-1):
    #     return("Enter the value between (-2^31) & (2^31 - 1)")
    if n == 1:
        return True

    if (n%2 == 0):
        return(is_power_of_two(n/2))
    else:
        return False
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:13:09


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if not ( n>= (-2)^(31) or n<= 2^(31)-1):
        return("Enter the value between (-2^31) & (2^31 - 1)")
    if n == 1:
        return True

    if (n%2 == 0):
        return(is_power_of_two(n/2))
    else:
        return False
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:13:55


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if not ( n>= (-2)^(31) or n<= 2^(31)-1):
        return("Enter the value between (-2^31) & (2^31 - 1)")
    if n == 1:
        return true

    if (n%2 == 0):
        return(is_power_of_two(n/2))
    else:
        return false
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:14:59


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if not ( n>= (-2)^(31) or n<= 2^(31)-1):
        return("Enter the value between (-2^31) & (2^31 - 1)")
    if n == 1:
        return ("true")

    if (n%2 == 0):
        return(is_power_of_two(n/2))
    else:
        return ("false")
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 11:03:57


```
def combine(n, k, start=1, combination=[]):
    # Write logic here
    if not ( (n >= 1 and n <= 20) and (k >= 1 and k <= n)):
        return
    if len(combination) == k:
        return [combination.copy()]

    results = []
    for i in range(start, n + 1):
        new_combination = combination + [i]
        results.extend(combine(n, k, i + 1, new_combination))

    return results


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

## Submission at 2024-08-21 12:19:15


```
def permute(nums):
  
  
  if len(nums) == 0:
    return [[]]

  results = []
  for i in range(len(nums)):
    if not -10 <= nums[i] <= 10:
      return
    remaining = nums[:i] + nums[i+1:]
    perms = permute(remaining)
    for perm in perms:
      results.append([nums[i]] + perm)

  return results

if __name__ == "__main__":
  nums = list(map(int, input().split()))

  assert (1 <= len(nums)<= 6), "Invalid Input"

  # Generate permutations
  result = permute(nums)

  # Sort permutations
  result.sort()

  # Print permutations
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
```

## Submission at 2024-08-21 12:35:34


```
def parentheses(n):
  if not (1<=n<=8):
    return

  def backtrack(s, left, right):
    if len(s) == 2 * n:
      results.append(s)
      return

    if left < n:
      backtrack(s + "(", left + 1, right)
    if right < left:
      backtrack(s + ")", left, right + 1)

  results = []
  backtrack("", 0, 0)
  return results

if __name__ == "__main__":
  n = int(input())

  # Generate parentheses combinations
  result = parentheses(n)

  # Print combinations
  print("[", end="")
  for i in range(len(result)):
    print(result[i], end="")
    if i < len(result) - 1:
      print(",", end="")
  print("]")
```

## Submission at 2024-08-21 12:41:57


```
def parentheses(n):
  assert (1<=n<=8), "Invalid Input"

  def backtrack(s, left, right):
    if len(s) == 2 * n:
      results.append(s)
      return

    if left < n:
      backtrack(s + "(", left + 1, right)
    if right < left:
      backtrack(s + ")", left, right + 1)

  results = []
  backtrack("", 0, 0)
  return results

if __name__ == "__main__":
  n = int(input())

  # Generate parentheses combinations
  result = parentheses(n)

  # Print combinations
  print("[\"", end="")
  for i in range(len(result)):
    print(result[i], end="")
    if i < len(result) - 1:
      print("\",\"", end="")
  print("\"]")
```

## Submission at 2024-09-02 09:59:59


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while(temp != None):
        result.append(temp.val)
        if not (1<= temp.val <= 10^5):
            return
        temp = temp.next

    assert (1<= len(result) <= 10^5), "Invalid number of nodes"
    return result

```

## Submission at 2024-09-02 10:25:55


```
# Write code from scratch
n = int(input())
assert (1<= n <=  10^5), "Invalid Input"
a1 = input()
a2 = input()
a = [int(x) for x in a1.split()]
b = [int(y) for y in a2.split()]
c = []

for i in range(n):
    # assert((-10^9) <= a[i] <= 10^9 and (-10^9) <= b[i] <= 10^9),"Invalid Input"
    if (a[i]>=b[i]):
        c.append(a[i])
    else:
        c.append(b[i])
print(c)
```

## Submission at 2024-09-02 10:26:32


```
# Write code from scratch
n = int(input())
assert (1<= n <=  10^5), "Invalid Input"
a1 = input()
a2 = input()
a = [int(x) for x in a1.split()]
b = [int(y) for y in a2.split()]
c = []

for i in range(n):
    # assert((-10^9) <= a[i] <= 10^9 and (-10^9) <= b[i] <= 10^9),"Invalid Input"
    if (a[i]>=b[i]):
        c.append(a[i])
    else:
        c.append(b[i])
    print(c[i])
```

## Submission at 2024-09-02 10:29:02


```
# Write code from scratch
n = int(input())
assert (1<= n <=  10^5), "Invalid Input"
a1 = input()
a2 = input()
a = [int(x) for x in a1.split()]
b = [int(y) for y in a2.split()]
c = []

for i in range(n):
    # assert((-10^9) <= a[i] <= 10^9 and (-10^9) <= b[i] <= 10^9),"Invalid Input"
    if (a[i]>=b[i]):
        c.append(a[i])
    else:
        c.append(b[i])
    print(c[i], end=" ")
```

## Submission at 2024-09-02 10:35:23


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    x = 0
    temp = head
    while(x!=k):
        temp = temp.next
        x =+1
        if temp==None:
            return -1
    

    return temp.val
    
    

```

## Submission at 2024-09-02 10:40:39


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    x = 1
    temp = head
    while(True):
        if x==k:
            return temp.val
        temp = temp.next
        x =x+1
        if temp==None:
            return -1
    
    
    

```

## Submission at 2024-09-02 11:33:17


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    x = 1
    curr = head
    if k==1:
        head = curr.next
    while(curr != None):
        if (x+1==k):
            if (curr.next.next != None):
                curr.next = curr.next.next
            else:
                curr.next = None
        curr = curr.next
        x = x+1
    return head


```

## Submission at 2024-09-05 09:26:39


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
    curr_new = None
    while(curr!=None):
        if curr.next == None:
            head_new = curr
            head_new.next = curr_new
            return head_new
        curr_new = curr.next
        curr_new.next = curr
        if curr_new.next == head:
            curr_new.next = None

        curr = curr.next

        
    
```

## Submission at 2024-09-09 07:18:30


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
    curr_new = None
    prev = None
    while(curr):
        curr_new = curr.next
        curr.next = prev
        prev = curr
        curr = curr_new
    return prev
```

## Submission at 2024-09-09 08:45:02


```

def diagonal_traversal(matrix, result=[]):
    # Your code here
    # row, col , i, j= 0, 0, 0, 0
    # for row in matrix[row][0]:
    #     row +=1
    # for col in matrix[0][col]:
    #     col +=1
    # while i <= row and j <= col:
    #     result.append(matrix[row][col])
    m, n = len(matrix), len(matrix[0])
    result = []

    for d in range(m + n - 1):
        # Determine the starting row and column for the diagonal
        row = min(d, m - 1)
        col = max(0, d - m + 1)

        # Traverse the diagonal
        while row >= 0 and col < n:
            result.append(matrix[row][col])
            row -= 1
            col += 1

    return result

```

## Submission at 2024-09-09 08:57:12


```
n = int(input())
sum = 0
for i in range(n+1):
    if i%3 == 0 or i%5 == 0 or i%7 == 0:
        sum = sum + i

print(sum)
```

## Submission at 2024-09-09 09:03:16


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
    count = 1
    if k==1:
        head = head.next
    while(curr):
        if (count+1) == k:
            if curr.next:
                curr.next = curr.next.next
            curr.next = None
        curr = curr.next
        count+=1
    return head

```

## Submission at 2024-09-09 09:04:22


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
    count = 1
    if k==1:
        head = head.next
    while(curr):
        if (count+1) == k:
            if curr.next = None:
                curr.next = None
            curr.next = curr.next.next
        curr = curr.next
        count+=1
    return head

```

## Submission at 2024-09-09 09:06:01


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
    count = 1
    if k==1:
        head = head.next
    while(curr):
        if (count+1) == k:
            if curr.next == None:
                curr = None
            curr.next = curr.next.next
        curr = curr.next
        count+=1
    return head

```

## Submission at 2024-09-09 10:04:13


```
# Write Code from Scratch here
def pow3(n):
    print("False")
    if n == 1:
        print("True")
    pow3(n/3)

```

## Submission at 2024-09-09 10:10:00


```
# Write Code from Scratch here
n = int(input())

def pow3(n):
    if n == 1:
        return("True")
    pow3(n/3)
    return("False")

print(pow3(n))
    

```

## Submission at 2024-09-09 10:24:17


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    curr = head
    prev=None
    while(curr):
        if curr.data in temp:
            prev.next = None
            prev.next = curr.next
            curr = curr.next
        temp.append(curr.data)
        prev = curr
        curr = curr.next
    return head

```

## Submission at 2024-09-09 10:26:34


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    curr = head
    prev=None
    while(curr):
        if curr.data in temp:
            prev.next = None
            prev.next = curr.next
            curr = curr.next
        temp.append(curr.data)
        prev = curr
        curr = curr.next
    return head

```

## Submission at 2024-09-09 10:29:04


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    dummy = node()
    curr = head
    prev=dummy
    prev.next = head
    while(curr):
        if curr.data in temp:
            prev.next = None
            prev.next = curr.next
            curr = curr.next
        temp.append(curr.data)
        prev = prev.next
        curr = curr.next
    return head

```

## Submission at 2024-09-09 10:33:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    dummy = node()
    curr = head
    prev=dummy
    prev.next = head
    while(curr):
        if curr.data in temp:
            curr = curr.next
            prev.next = curr
        temp.append(curr.data)
        prev = prev.next
        curr = curr.next
    return head

```

## Submission at 2024-09-09 10:35:15


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    # dummy = node()
    curr = head
    prev=None
    # prev.next = head
    while(curr):
        if curr.data in temp:
            curr = curr.next
            prev.next = curr
        temp.append(curr.data)
        prev = curr
        curr = curr.next
    return head

```

## Submission at 2024-09-09 10:55:56


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      
      slow, fast = head, head.next
      while fast and fast.next:
        fast = fast.next.next
        if fast:
          tmp.append(slow)
        slow = slow.next
        
      curr = slow
      n = len(tmp)
      for i in range(1,n):
        if curr == tmp[-i]:
          return True
        else:
          return False
        curr = curr.next

```

## Submission at 2024-09-09 10:58:33


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      
      slow, fast = head, head.next
      while fast and fast.next:
        fast = fast.next.next
        if fast:
          tmp.append(slow)
        slow = slow.next
        
      curr = slow.next
      n = len(tmp)
      for i in range(1,n):
        if curr == tmp[-i]:
          return True
        else:
          return False
        curr = curr.next

```

## Submission at 2024-09-09 11:00:02


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      
      slow, fast = head, head.next
      while fast and fast.next:
        fast = fast.next.next
        if fast:
          tmp.append(slow)
        slow = slow.next
        
      curr = slow.next
      n = len(tmp)
      for i in range(1,n):
        if curr == tmp[-i]:
          return False
        else:
          return True
        curr = curr.next

```

## Submission at 2024-09-09 11:01:23


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      
      slow, fast = head, head.next
      while fast and fast.next:
        fast = fast.next.next
        if fast:
          tmp.append(slow)
        slow = slow.next
        
      curr = slow.next
      n = len(tmp)
      for i in range(1,n):
        if curr == tmp[-i]:
          return "false"
        else:
          return "true"
        curr = curr.next

```

## Submission at 2024-09-09 11:02:08


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      
      slow, fast = head, head.next
      while fast and fast.next:
        fast = fast.next.next
        if fast:
          tmp.append(slow)
        slow = slow.next
        
      curr = slow.next
      n = len(tmp)
      for i in range(1,n):
        if curr == tmp[-i]:
          return "true"
        else:
          return "false"
        curr = curr.next

```

## Submission at 2024-09-09 11:09:22


```
# Write Code from Scratch here
n = int(input())
for i in range(n):
    
    if n==1.0:
        break
    n = n/3
    if n<1:
        break
if n==1.0:
    print("True")
else:
    print("False")

```

## Submission at 2024-09-09 11:20:11


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    curr = head
    prev = None
    while(curr):
        if curr.data in temp:
            curr = curr.next
            prev.next = None
            prev.next = curr
        temp.append(curr.data)
        prev = curr
        curr = curr.next
    return head

```

## Submission at 2024-09-09 11:24:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head, temp=[]):
    # Code here
    curr = head
    prev = None
    while(curr):
        if curr.data in temp:
            curr = curr.next
            prev.next = None
            prev.next = curr
        else:
            temp.append(curr.data)
            prev = curr
            curr = curr.next
    return head

```

## Submission at 2024-09-16 08:14:22


```
temp1 = input()
temp2 = [str(q) for q in temp1.split()]
y = temp2[0]
n = temp2[1]
l = list(y)


def frequency_of_number(string, number):
    frequency = 0
    for char in string:
        if char == str(number):
            frequency += 1
    return frequency

# Get input from the user
input_string = y
target_number = n

# Calculate and print the frequency
result = frequency_of_number(input_string, target_number)
print(result)
```

## Submission at 2024-09-16 08:16:07


```
def count_frequency(s, x, index=0):
  """
  Counts the frequency of a digit in a string using recursion.

  Args:
    s: The input string.
    x: The digit to count.
    index: The current index in the string.

  Returns:
    The frequency of the digit in the string.
  """

  if index >= len(s):
    return 0

  if s[index] == x:
    return 1 + count_frequency(s, x, index + 1)
  else:
    return count_frequency(s, x, index + 1)

if __name__ == "__main__":
  s, x = input().split()

  # Count the frequency of the digit
  result = count_frequency(s, x)

  # Print the result
  print(result)
```

## Submission at 2024-09-16 08:18:34


```
def modify_matrix(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    for j in range(n):
        mx = max(matrix[i][j] for i in range(m))
        for i in range(m):
            if matrix[i][j] == -1:
                matrix[i][j] = mx
    return matrix
```

## Submission at 2024-10-07 10:32:20


```
# Write your code from scratch here
n = input()
sum = ['1', '2', '3']
new_sum = []
for c in n:
    if c in sum:
        new_sum.append(c)


for i in range(0,len(new_sum)-1):
    for j in range(len(new_sum)-1):
        if new_sum[j] >= new_sum[j+1]:
            new_sum[j], new_sum[j+1] = new_sum[j+1], new_sum[j]

n = len(new_sum)
for i in range (n):
    if i == n-1:
        print(new_sum[i])
        break
    print(new_sum[i], end="+")
```

## Submission at 2024-10-07 11:06:12


```
# Write Python code from scratch
n = int(input())
w = input()
wealth = []
for c in w:
    if not c == " ":
        wealth.append(int(c))
max, sum, half = 0,0, (n//2)+1
for i in range(len(wealth)):
    if wealth[i] > max:
        max= wealth[i]
    sum += wealth[i]

avg = sum/n 
rb = avg/2
l, r = 0, 10*max
flag = 0
while l<= r:
    mid = (l+r)//2
    if ((sum+mid)/(2*n) < wealth[half] ):
        l = mid+1
        # while((sum+mid+i)/(2*n) < wealth[half] ):
        #     i+=1
        # if ((sum+mid)/(2*n) > wealth[half]):
        #     print(mid)
        #     flag = 1
        #     break
    elif ((sum+mid)/(2*n) > wealth[half] ):
        r = mid-1
        mid2 = (l+r)//2
        if ((sum+mid2)/(2*n) < wealth[half] ):
            for i in range(50):
                if ((sum+mid2+i)/(2*n) > wealth[half] ):
                    print(mid)
                    flag = 1
                    break
    # elif ((sum+mid)/(2*n) == wealth[half] ):
    #     print(mid+1)
if flag == 0:
    print(-1)
```

## Submission at 2024-10-07 11:08:14


```
# Write Python code from scratch
n = int(input())
w = input()
wealth = []
for c in w:
    if not c == " ":
        wealth.append(int(c))
max, sum, half = 0,0, (n//2)+1
for i in range(len(wealth)):
    if wealth[i] > max:
        max= wealth[i]
    sum += wealth[i]

avg = sum/n 
rb = avg/2
l, r = 0, 10*max
flag = 0
while l<= r:
    mid = (l+r)//2
    if ((sum+mid)/(2*n) < wealth[half] ):
        l = mid+1
        # while((sum+mid+i)/(2*n) < wealth[half] ):
        #     i+=1
        # if ((sum+mid)/(2*n) > wealth[half]):
        #     print(mid)
        #     flag = 1
        #     break
    elif ((sum+mid)/(2*n) > wealth[half] ):
        r = mid-1
        # mid2 = (l+r)//2
        # if ((sum+mid2)/(2*n) < wealth[half] ):
        #     for i in range(50):
        #         if ((sum+mid2+i)/(2*n) > wealth[half] ):
        #             print(mid)
        #             flag = 1
        #             break
        #     i+=5
    # elif ((sum+mid)/(2*n) == wealth[half] ):
    #     print(mid+1)
print(-1)
```

## Submission at 2024-10-28 10:03:00


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
        min_val = [root.data]
        def travel(x):
            if not x:
                return 
            min_val[0] = min(min_val[0],x.data)
            travel(x.left)
            travel(x.right)
        travel(root)
        return min_val[0]

```

## Submission at 2024-10-28 10:16:14


```
# write code from scratch
n = (input().split(" "))
nums = input().split(" ")
k = n[1]
myhash = {}
for i in nums:
    myhash[int(i)] = 1 + myhash.get(int(i),0)
    
def occ(k,myhash):
    for j in myhash:
        if myhash[j] >= int(k):
            return j
    return -1

print(occ(k,myhash))
```

## Submission at 2024-10-28 10:30:51


```
# Write your code from scratch here
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p = 0
res = [0]*len(s)
for i,n in enumerate(order):
    myhash[n] = i
for j in s:
    if j in myhash:
        res[myhash[j]] = j
        p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1:len(s)]
for i in res:
    print(i, end="")
```

## Submission at 2024-10-28 10:49:55


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    curr1 = head1
    curr2 = head2
    res = []
    hash1 = {}
    hash2 = {}
    while curr1:
      hash1[curr1.val] = curr1.val
      curr1 = curr1.next
    while curr2:
      hash2[curr2.val] = curr2.val
      curr2 = curr2.next

    for i in hash1:
      if i in hash2:
        res.append(i)
    
    head_new = ListNode(res[0])
    curr3 = head_new
    for i in range(1,len(res)):
      curr3.next = ListNode(res[i])
      curr3 = curr3.next
    return head_new
```

## Submission at 2024-10-28 11:22:19


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
    def dfs(x,halfsum):
      if not x:
        return halfsum
      if not x.left and not x.right:
        return halfsum*10 + (x.data)
      if not x.right:
        return dfs(x.left,(halfsum*10)+(x.data))
      if not x.left:
        return dfs(x.right,(halfsum*10)+(x.data))
      return dfs(x.left,(halfsum*10)+(x.data)) + dfs(x.right,(halfsum*10)+(x.data))
      
    return dfs(root,0)
```

## Submission at 2024-10-28 11:23:06


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
    def dfs(x,halfsum):
      if not x:
        return halfsum
      if not x.left and not x.right:
        return halfsum*10 + (x.data)
      if not x.right:
        return dfs(x.left,(halfsum*10)+(x.data))
      if not x.left:
        return dfs(x.right,(halfsum*10)+(x.data))
      return dfs(x.left,(halfsum*10)+(x.data)) + dfs(x.right,(halfsum*10)+(x.data))
      
    return dfs(root,0)
```

## Submission at 2024-11-04 10:30:50


```
# write code from scratch
ransom = input()
magazine = input()
myhash1 = {}
myhash2 = {}
for i in magazine:
    myhash1[i] = 1 + myhash1.get(i,0)
for j in ransom:
    myhash2[j] = 1 + myhash2.get(j,0)
def ransom_fn():
    for i in myhash2:
        if i in myhash1:
            if not (myhash2[i]<=myhash1[i]):
                return False
        else:
            return False
    return True

print(ransom_fn())
```

## Submission at 2024-11-04 10:31:31


```
# write code from scratch
ransom = input()
magazine = input()
myhash1 = {}
myhash2 = {}
for i in magazine:
    myhash1[i] = 1 + myhash1.get(i,0)
for j in ransom:
    myhash2[j] = 1 + myhash2.get(j,0)
def ransom_fn():
    for i in myhash2:
        if i in myhash1:
            if not (myhash2[i]<=myhash1[i]):
                return "false"
        else:
            return "false"
    return "true"

print(ransom_fn())
```

## Submission at 2024-11-04 10:44:40


```
# Write code from scratch
n = int(input())
n = n / 2
candyType = input().split(" ")
myhash = {}
for i in candyType:
    myhash[i] = 1 + myhash.get(i,0)
print(min(n,len(myhash)))
```

## Submission at 2024-11-04 10:47:42


```
# Write code from scratch
n = int(input())
n = int(n / 2)
candyType = input().split(" ")
myhash = {}
for i in candyType:
    myhash[i] = 1 + myhash.get(i,0)
print(min(n,len(myhash)))
```

## Submission at 2024-11-04 11:19:39


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
        curr1 = num1
        curr2 = num2
        new_head = Node(curr1.data + curr2.data)
        curr3 = new_head
        curr1 = curr1.next
        curr2 = curr2.next
        while curr1 or curr2:
            v1 = curr1.data if curr1 else 0
            v2 = curr2.data if curr2 else 0

            curr3.next = Node(v1 + v2)

            curr3 = curr3.next
            curr1 = curr1.next if curr1 else None
            curr2 = curr2.next if curr2 else None

        prev = None
        curr3 = new_head
        while curr3:
            tmp = curr3.next
            curr3.next = prev
            prev = curr3
            curr3 = tmp

        new_head = prev
        
        return new_head
        # return head of sum list


```

## Submission at 2024-11-04 11:28:40


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
        curr1 = num1
        curr2 = num2
        prev1 = None
        while curr1:
            tmp1 = curr1.next
            curr1.next = prev1
            prev1 = curr1
            curr1 = tmp1
        head1 = prev1
        curr1 = head1
        prev2 = None
        while curr2:
            tmp2 = curr2.next
            curr2.next = prev2
            prev2 = curr2
            curr2 = tmp2
        head2 = prev2
        curr2 = head2
        
        new_head = Node(curr1.data + curr2.data)
        curr3 = new_head
        curr1 = curr1.next
        curr2 = curr2.next
        while curr1 or curr2:
            v1 = curr1.data if curr1 else 0
            v2 = curr2.data if curr2 else 0

            curr3.next = Node(v1 + v2)

            curr3 = curr3.next
            curr1 = curr1.next if curr1 else None
            curr2 = curr2.next if curr2 else None

        prev = None
        curr3 = new_head
        while curr3:
            tmp = curr3.next
            curr3.next = prev
            prev = curr3
            curr3 = tmp

        
        return new_head
        # return head of sum list


```

## Submission at 2024-11-11 11:26:14


```
# write code from scratch
s = input()
t = input().split(" ")
hashs = {}
hasht = set()
if len(s) != len(t):
    print("false")
    exit()
for s1,t1 in zip(s,t):
    if s1 in hashs and hashs[s1] != t1:
        print("False")
        exit()
    hashs[s1] = t1
print("true")
```

## Submission at 2024-11-18 11:25:59


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      if head.next == None:
        return True
      stack = []
      slow, fast = head, head
      while fast.next and fast.next.next:
        stack.append(slow.data)
        fast = fast.next.next
        slow = slow.next
      slow = slow.next
      while slow:
        if slow.data != stack.pop():
          return False
        slow = slow.next
      return True
      
```

## Submission at 2024-11-25 09:58:12


```
# Write Code From Scratch Here
x = input().split(" ")
nums = input().split(" ")
target = int(x[1])
n = int(x[0])

for i, num in enumerate(nums):
    if int(num) == target:
        print(i)

```

## Submission at 2024-11-25 10:06:52


```
# Write Code From Scratch Here
x = input().split(" ")
nums = input().split(" ")
target = int(x[1])
n = int(x[0])
for j in range(len(nums)-1):
    for k in range(j+1):
        if nums[k] > nums[k+1]:
            nums[k], nums[k+1] = nums[k+1], nums[k]
for i, num in enumerate(nums):
    if int(num) == target:
        print(i)

```

## Submission at 2024-11-25 10:13:04


```
# Write Code From Scratch Here
n = input()
nums = input().split(" ")
for i in range(len(nums)):
    if not (nums[i] < nums[2*i + 2]) and (nums[i] > nums[2*i + 1]):
        print("NO")
        exit()
    print("YES")
```

## Submission at 2024-11-25 10:25:09


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
    # code here
    res = 0
    def dfs(node):
      if not node:
        return
      if node.data <= root:
        res = max(res, node.data)
      dfs(node.left)
      dfs(node.right)
    return res
```

## Submission at 2024-11-25 10:26:18


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
    # code here
    res = [0]
    def dfs(node):
      if not node:
        return
      if node.data <= root:
        res[0] = max(res[0], node.data)
      dfs(node.left)
      dfs(node.right)
    return res[0]
```

## Submission at 2024-11-25 10:26:57


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
    # code here
    res = [0]
    def dfs(node):
      if not node:
        return
      if node.data <= root:
        res[0] = max(res[0], node.data)
      dfs(node.left)
      dfs(node.right)
    return res[0]
```

## Submission at 2024-11-25 10:28:22


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
    # code here
    res = [0]
    def dfs(node,n):
      if not node:
        return
      if node.data <= n:
        res[0] = max(res[0], node.data)
      dfs(node.left)
      dfs(node.right)
    dfs(root,n)
    return res[0]
```

## Submission at 2024-11-25 10:29:54


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
    # code here
    res = [0]
    def dfs(node,n):
      if not node:
        return
      if node.data <= n:
        res[0] = max(res[0], node.data)
      dfs(node.left,n)
      dfs(node.right,n)
    dfs(root,n)
    return res[0]
```

## Submission at 2024-11-25 10:44:01


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        # code here
        myhash = {}
        curr1 = head1
        curr2 = head2
        while curr1:
          myhash[curr1] = curr1.data
          curr1 = curr1.next
        while curr2:
          if curr2 in myhash:
            return curr2
          curr2 = curr2.next
        return None




```

## Submission at 2024-11-25 10:50:20


```
# write code from scratch
char = input().split("")
myhash = {}
for i in char:
    myhash[char] = 1 + myhash.get(char,0)
if myhash['a'] > myhash['b']:
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:51:16


```
# write code from scratch
char = input().split("")
myhash = {}
for i in char:
    myhash[i] = 1 + myhash.get(i,0)
if myhash['a'] > myhash['b']:
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:53:26


```
# write code from scratch
char = input()
myhash = {}
for i in char:
    myhash[i] = 1 + myhash.get(i,0)
if myhash['a'] > myhash['b']:
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 11:03:12


```
# write code from scratch
n = int(input())
for i in range(n):
    for j in range(i+1):
        print('*', end=" ")
    print(end="\n")
```

## Submission at 2024-11-25 11:04:40


```
# write code from scratch
n = int(input())
for i in range(n):
    for j in range(i+1):
        print('*')
    print(end="\n")
```

## Submission at 2024-11-25 11:07:31


```
# write code from scratch
n = int(input())
for i in range(n):
    for j in range(i+1):
        print('*',end="")
    print(end="\n")
```

## Submission at 2024-11-25 11:15:42


```
# Write Code From Scratch Here
x = input().split(" ")
nums = input().split(" ")
target = int(x[1])
n = int(x[0])
for i in range(n-1):
    for j in range(n-1):
        if nums[j]>nums[j+1]:
            nums[j], nums[j+1] = nums[j+1], nums[j]
    
for i,num in enumerate(nums):
    if int(num) == target:
        print(i)
```

## Submission at 2024-11-25 11:26:10


```
# write code from scratch
n = int(input())
nums = input().split(" ")
d = int(nums[1]) - int(nums[0])
for i in range(1,n-1):
    if (int(nums[i+1]) - int(nums[i])) != d:
        print("fasle")
        exit()
print("true")
```

## Submission at 2024-11-25 11:41:01


```
# Write Code From Scratch Here
n = input()
nums = input().split(" ")
for i in range(len(nums)):
    root = 2*i + 1
    if nums[root]:
        if not (int(nums[i])<int(nums[root])) and (int(nums[root]<nums[i+1])):
            print("false")
            exit()
        i = root+3
    print("true")
```

## Submission at 2024-11-25 11:41:46


```
# Write Code From Scratch Here
n = input()
nums = input().split(" ")
for i in range(len(nums)):
    root = 2*i + 1
    if nums[root]:
        if not (int(nums[i])<int(nums[root])) and (int(nums[root]<nums[i+1])):
            print("false")
            exit()
        i = root+3
print("true")
```

## Submission at 2024-11-25 11:42:24


```
# Write Code From Scratch Here
n = input()
nums = input().split(" ")
for i in range(len(nums)-1):
    root = 2*i + 1
    if nums[root]:
        if not (int(nums[i])<int(nums[root])) and (int(nums[root]<nums[i+1])):
            print("false")
            exit()
        i = root+3
print("true")
```

