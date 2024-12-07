## Submission at 2024-08-05 10:24:12


```
# Write your Python code here from the scratch

s = input()
if (len(s)>=100 or len(s)<=1):
    print("Enter your name.")
else:
    print("Hello "+s+"!")

```

## Submission at 2024-08-05 10:29:45


```
# Write your Python code here from the scratch
s = input()

if (len(s)>=1 or len(s)<=100):
    print("Hello "+s+"!")
else:
    print("Please enter your name.")
```

## Submission at 2024-08-05 10:48:03


```
# Write your Python code here
n = int(input ())
names = []
if (n>=1 and n<=100):
    for i in range(0, n):
        name = input()
        if (len(name)>=1 and len(name)<=100):
            names.append(name)
            print("Hello "+names[i]+"!")
            i+=1
        else:
            print("Enter names.")
else:
    print("Enter less than 100 names.")

    
```

## Submission at 2024-08-21 11:09:24


```
def combine(n, k):
    # Write logic here
    if not ((n >=1 and n <=20) and (k>=1 and n>=k)):
        return        
    def backtrack(start, combination):
        if len(combination) == k:
            result.append(combination.copy())
            return

        for i in range(start, n + 1):
            combination.append(i)
            backtrack(i + 1, combination)
            combination.pop()

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

## Submission at 2024-08-21 12:13:38


```
def permute(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permutations = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return
            # Fix the current element
            fixed_element = nums[i]
            remaining_nums = nums[:i] + nums[i+1:]
            # Generate permutations for the remaining elements
            remaining_permutations = permute(remaining_nums)
            # Combine the fixed element with each permutation
            for perm in remaining_permutations:
                permutations.append([fixed_element] + perm)
        return permutations

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Invalid Input"
    # Generate permutations
    result = permute(nums)

    # Sort permutations based on first element
    result.sort(key=lambda x: x[0])

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

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 12:51:25


```
def parentheses(n):
  assert (1<=n<=8), "Invalid Input"

  def backtrack(s, x, y):
    if len(s) == 2 * n:
      results.append(s)
      return

    if x < n:
      backtrack(s + "(", x + 1, y)
    if y < x:
      backtrack(s + ")", x, y + 1)

  results = []
  backtrack("", 0, 0)
  return results

if __name__ == "__main__":
  n = int(input())

  result = parentheses(n)

  print("[\"", end="")
  for i in range(len(result)):
    print(result[i], end="")
    if i < len(result) - 1:
      print("\",\"", end="")
  print("\"]")
```

## Submission at 2024-08-31 11:35:07


```
# Write code from scratch
n = input()
s = list(n)
i=0
def palindrome (n):
    # assert (0 <= i < len(s)), "Invalid"
    if (len(s)<=1):
        return True
    if s[0]==s[len(s)-1]:
        s.pop(0)
        s.pop(len(s)-1)
        return palindrome(s)
    else:
        return False

if palindrome(n) == True:
    print("YES")
else:
    print("NO")




```

## Submission at 2024-08-31 12:25:15


```
# write from scratch, create a function named Pow(x:int , n:int)
ip = input()
arr = [float(p) for p in ip.split()]
x = arr[0]
n = int(arr[1])
y = 1

assert ((-100.0 < x < 100.0) and (-1000 <= n <= 1000)), "Enter valid input"

def Pow(x:int, n:int):
    global y
    if (n<0):
        return int ((1/Pow(x, -n))//1)

    y = x*y
    
    if(n==1):
        # return int (y//1)
        return int (y//1)
    else:
        return Pow(x, n-1)
        
temp = Pow(x, n)        
if (-10000.0 <= temp <= 10000.0):        
    print(temp)
else:
    print("Invalid")
```

## Submission at 2024-09-02 09:58:34


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    current = head
    while(current != None):
        result.append(current.val)
        if (1 <= current.val <= 10^5):
            current = current.next

    assert(1 <= len(result)  <= 10^5), "Invalid"
    return result

```

## Submission at 2024-09-02 10:25:36


```
# Write code from scratch
n = int(input())
a1 = input()
arr1 = [int(x) for x in str.split(a1)]
a2 = input()
arr2 = [int(y) for y in str.split(a2)]
result = []

assert(1 <= n <= 10^5), "Invalid"

for i in range(0, n):
    if (arr1[i]>arr2[i]):
        result.append(arr1[i])
    else:
        result.append(arr2[i])
    # assert((-10)^9 <= arr1[i] <= 10^9) and (-10^9 <= arr2[i] <= 10^9), "Invalid"
print (result)

```

## Submission at 2024-09-02 10:27:26


```
# Write code from scratch
n = int(input())
a1 = input()
arr1 = [int(x) for x in str.split(a1)]
a2 = input()
arr2 = [int(y) for y in str.split(a2)]
result = []

assert(1 <= n <= 10^5), "Invalid"

for i in range(0, n):
    if (arr1[i]>arr2[i]):
        result.append(arr1[i])
    else:
        result.append(arr2[i])
    print(result[i], end=" ")
    # assert((-10)^9 <= arr1[i] <= 10^9) and (-10^9 <= arr2[i] <= 10^9), "Invalid"


```

## Submission at 2024-09-02 10:33:35


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    current = head
    i = 1
    while(i != k):
        current = current.next
        i=i+1
    return current.val
    
    

```

## Submission at 2024-09-02 10:38:25


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    assert(1 <= k <= 10^5), "Invalid"

    current = head

    i = 1
    while(i != k):
        current = current.next
        i=i+1
        assert(1 <= current.val <= 10^5), "Invalid"
        # if current == None:
        #     return -1

    return current.val
    
    

```

## Submission at 2024-09-02 10:39:16


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    assert(1 <= k <= 10^5), "Invalid"

    current = head

    i = 1
    while(i != k):
        current = current.next
        i=i+1
        assert(1 <= current.val <= 10^5), "Invalid"
        if current == None:
            return -1

    return current.val
    
    

```

## Submission at 2024-09-02 10:46:26


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here

    current = head

    i = 1
    while(i != k):
        current = current.next
        i = i+1
        
        
        if current == None:
            return -1

    return current.val
    
    

```

## Submission at 2024-09-02 11:13:57


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    current = head
    i = 1
    while(i!=k-1):
        current = current.next
        if (current == None):
            return -1
    
    temp = current.next
    current.next = temp.next

    i = 1
    current = head
    while(i != None):
        print(current.data)
        current = current.next
        
    return head


```

## Submission at 2024-09-02 11:17:43


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    current = head
    i = 1
    while(i!=k-1):
        current = current.next
        if (current == None):
            return -1
    
    temp = current.next
    current.next = temp.next

    i = 1
    current = head
    # while(current != None):
    #     # if(current.data != None):
    #         print(current.data)
    #         current = current.next
        
    return head


```

## Submission at 2024-09-02 11:27:24


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    current = head
    i = 1

    if (k == 1):
        current.next = head
    while(i != k-1):
        if (current.next == None):
            current = head
        current = current.next
    
    temp = current.next
    current.next = temp.next

    i = 1
    current = head
    # whi le(current != None):
    #     # if(current.data != None):
    #         print(current.data)
    #         current = current.next
        
    return head


```

## Submission at 2024-09-05 04:55:18


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    current = head
    i = 1
    
    if (i == k):
        current.next = head
    else:
        while(i!=k-1):
            if (current.next.next == None):
                current.next = None
                
            current = current.next
            i=i+1
            
        temp = current.next
        current.next = temp.next
        

    i = 1
    current = head
    # while(current != None):
    #     # if(current.data != None):
    #         print(current.data)
    #         current = current.next

    return head


```

## Submission at 2024-09-05 04:58:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    current = head
    i = 1
    
    if (i == k):
        head = current.next
    else:
        while(i!=k-1):
            if (current.next.next == None):
                current.next = None
                
            current = current.next
            i=i+1
            
        temp = current.next
        current.next = temp.next
        

    i = 1
    current = head
    # while(current != None):
    #     # if(current.data != None):
    #         print(current.data)
    #         current = current.next

    return head


```

## Submission at 2024-09-08 09:42:03


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
        
    while(curr != None):
        nxt = curr.next
        curr.next = prev
        prev = curr
        curr = nxt
    
    return prev


```

## Submission at 2024-09-08 11:25:53


```
# write from scratch, create a function named Pow(x:int , n:int)
ip = input()
arr = [float(p) for p in ip.split()]
x = arr[0]
n = int(arr[1])

y = 1
def Pow(x:int, n:int):
    global y
    if(n == 0):
        return 1
    elif (n<0):
        return int ((1/Pow(x, -n))//1)
    y = x*y
    elif(n==1):
        return int (y//1)
    else:
        return Pow(x, n-1)
        
temp = Pow(x, n)        
print(temp)
```

## Submission at 2024-09-08 11:32:21


```
# write from scratch, create a function named Pow(x:int , n:int)
ip = input()
arr = [float(p) for p in ip.split()]
x = arr[0]
n = int(arr[1])

y = 1
def Pow(x:int, n:int):
    global y
    if(n == 0):
        return 1
    elif (n<0):
        return int ((1/Pow(x, -n))//1)
    elif (n==1):
        y = x*y
        return int (y//1)
    else:
        y = x*y
        return Pow(x, n-1)
        
temp = Pow(x, n)        
print(temp)
```

## Submission at 2024-09-09 09:54:48


```
# Write Code from Scratch here
n = int(input())
i = 0

def pow(n):
    global i
    if (n%3 == 0):
        i = i + 1
        return pow(n/3)
    elif (n == 1):
        return True
    elif (n%3 == 0):
        i = i + 1
        pow(n/3)
    elif ((n < 3) and (n != 1)):
        return False
        
if pow(n):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-09 09:58:51


```
# Write Code from Scratch here
n = int(input())
i = 0

def pow(n):
    global i
    if (n == 0):
        return False
    if (n%3 == 0):
        i = i + 1
        return pow(n/3)
    elif (n == 1):
        return True
    elif (n%3 == 0):
        i = i + 1
        pow(n/3)
    elif ((n < 3) and (n != 1)):
        return False
        
if pow(n):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-09 10:28:58


```
# Write code from scratch here
temp1 = input()
temp2 = [str(q) for q in temp1.split()]
y = temp2[0]
n = temp2[1]
l = list(y)
i = 0

# print(l)
# print(l.pop(5))

def freq(l, n):
    global i

    if (len(l) == 0):
        print (i)
        
    elif (int(l.pop(0)) == int(n)):
        i = i + 1
        l.pop(0)
        return freq(l, n)

freq(l, n)

```

## Submission at 2024-09-09 10:48:12


```

class Solution:
    def isPalindrome(self, head):
        #code here
        if(head.next == None):
          return True

        curr = head
        temp = head
        tail = None

        while(curr.next.next != None):
          curr = curr.next
        tail = curr.next

        if (head.data == tail.data):
          head = temp.next
          curr.next = None
          return self.isPalindrome(head) 
        else:
          return False






        # curr = head

        # while(curr.next != None):
        #   curr = curr.next

        # tail = curr
        # curr = head

        # while(curr.next != tail):
        #   curr = curr.next
        
        # if (curr.next == head):
        #   tail = curr
        #   curr = head
        #   head = curr.next
        #   curr = head
        #   return True




```

## Submission at 2024-09-09 10:59:36


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
    temp = head

    while(curr.next != None):
        if (curr.data == curr.next.data):
            curr.next = curr.next.next
            curr = curr.next
        else:
            head = curr.next

    return temp    
        # return removeDuplicates(head)





```

## Submission at 2024-09-09 11:04:48


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
    temp = head

    while(curr.next != None):
        if (curr.data == curr.next.data):
            curr.next = curr.next.next
            curr = curr.next
        else:
            head = curr.next
            curr = head

    return temp    
        # return removeDuplicates(head)


```

## Submission at 2024-09-09 11:10:34


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
    temp = head
    
    # if head == None:
    #     return temp

    while(curr.next != None):
        if (curr.data == curr.next.data):
            curr.next = curr.next.next
            curr = curr.next
        else:
            head = curr.next
            curr = head

    return temp    
    # return removeDuplicates(head)


```

## Submission at 2024-09-16 08:02:50


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

## Submission at 2024-09-16 08:11:03


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

## Submission at 2024-09-16 08:17:12


```
def count_frequency(s, x, index=0):

  if index >= len(s):
    return 0

  if s[index] == x:
    return 1 + count_frequency(s, x, index + 1)
  else:
    return count_frequency(s, x, index + 1)

if _name_ == "_main_":
  s, x = input().split()

  # Count the frequency of the digit
  result = count_frequency(s, x)

  # Print the result
  print(result)
```

## Submission at 2024-10-07 09:51:04


```
from collections import deque # Don't touch this line
y = input()

l = input()

arr = [int(x) for x in l.split()]
print(arr)
# def rev(q):
#     # Write your code here
#     temp = []
#     while len(q) != 0:
#         temp.append(deque(q))
#     return temp
    

```

## Submission at 2024-10-07 10:07:55


```
# Write your code from scratch here
n = input()
l = [int(x) for x in n.split("+")]

def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr)//2

        sub_arr1 = arr[:mid]
        sub_arr2 = arr[mid:]

        mergesort(sub_arr1)
        mergesort(sub_arr2)

        i = j = k = 0

        while i < len(sub_arr1) and j < len(sub_arr2):
            if sub_arr1[i] < sub_arr2[j]:
                arr[k] = sub_arr1[i]
                i += 1
            else:
                arr[k] = sub_arr2[j]
                j += 1
            k += 1
            
        while i < len(sub_arr1):
            arr[k] = sub_arr1[i]
            i += 1
            k += 1

        while j < len(sub_arr2):
            arr[k] < sub_arr2[j]
            j += 1
            k += 1

mergesort(l)
s = ""
for i in range(len(l) - 1):
    s = s + str(l[i])+"+"
s = s + str(l[len(l)-1])

print(s)
    
```

## Submission at 2024-10-07 10:22:40


```
# Write your code from scratch her
l = input()
s = list(l)

arr = []
ans = []

for char in s:
    if char != ".":
        arr.append(char)

    elif char == ".":
        for x in range(len(arr)):
            ans.append(arr.pop())
        ans.append(".")
        arr = []

    elif char == " ":
        for x in range(len(arr) - 1):
            ans.append(arr.pop())
        
h = ""
for char in ans:
    h = h + char
print(h)

```

## Submission at 2024-10-07 10:24:34


```
# Write your code from scratch her
l = input()
s = list(l)

arr = []
ans = []

for char in s:
    if char != ".":
        arr.append(char)

    elif char == ".":
        for x in range(len(arr)):
            ans.append(arr.pop())
        ans.append(".")
        arr = []

for x in range(len(arr)):
    ans.append(arr.pop())
    
        
        
h = ""
for char in ans:
    h = h + char
print(h)

```

## Submission at 2024-10-07 10:41:10


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    arr = []
    l = [int(x) for x in q]

    while len(l) != 0:
        arr.append(l.pop())
    
    print(arr)



```

## Submission at 2024-10-07 10:42:09


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    arr = []
    l = [int(x) for x in q]

    while len(l) != 0:
        arr.append(l.pop())
    
    for char in arr:
        print(char, end = " ")



```

## Submission at 2024-10-07 10:44:59


```
# Write your code from scratch here
n = input()
l = [int(x) for x in n.split("+")]

def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr)//2

        sub_arr1 = arr[:mid]
        sub_arr2 = arr[mid:]

        mergesort(sub_arr1)
        mergesort(sub_arr2)

        i = j = k = 0

        while i < len(sub_arr1) and j < len(sub_arr2):
            if sub_arr1[i] < sub_arr2[j]:
                arr[k] = sub_arr1[i]
                i += 1
            else:
                arr[k] = sub_arr2[j]
                j += 1
            k += 1
            
        while i < len(sub_arr1):
            arr[k] = sub_arr1[i]
            i += 1
            k += 1

        while j < len(sub_arr2):
            arr[k] < sub_arr2[j]
            j += 1
            k += 1

mergesort(l)

s = ""
for i in range(len(l) - 1):
    s = s + str(l[i])+"+"
s = s + str(l[len(l)-1])

print(s)
```

## Submission at 2024-10-07 10:58:03


```
# Write Python code from scratch
n = int(input())
s = input()
l = [int(x) for x in s.split()]


def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr)//2

        sub_arr1 = arr[:mid]
        sub_arr2 = arr[mid:]

        mergesort(sub_arr1)
        mergesort(sub_arr2)

        i = j = k = 0

        while i < len(sub_arr1) and j < len(sub_arr2):
            if sub_arr1[i] < sub_arr2[j]:
                arr[k] = sub_arr1[i]
                i += 1
            else:
                arr[k] = sub_arr2[j]
                j += 1
            k += 1
            
        while i < len(sub_arr1):
            arr[k] = sub_arr1[i]
            i += 1
            k += 1

        while j < len(sub_arr2):
            arr[k] < sub_arr2[j]
            j += 1
            k += 1

mergesort(l)
summ = 0
for i in range(len(l)):
    summ = summ + l[i]

gold = l[((len(l))//2)]*2*n - summ
print(gold + 1)
```

## Submission at 2024-10-28 10:12:23


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
        arr = []
        def trv(root):
            nonlocal arr
            if root != None:
                arr.append(root.data)
                trv(root.left)
                trv(root.right)
        
        trv(root)
        return min(arr)
            
            


```

## Submission at 2024-10-28 10:30:09


```
a = input()
b = input()
p = [int(x) for x in a.split()]
q = [int(y) for y in b.split()]

map = {}

for i in q:
    map[i] = map.get(i, 0) + 1
# print(map)

for i in q:
    if map[i] >= p[1]:
        print(i)
        break
    else:
        return -1
    

```

## Submission at 2024-10-28 10:34:28


```
a = input()
b = input()
p = [int(x) for x in a.split()]
q = [int(y) for y in b.split()]

map = {}

for i in q:
    map[i] = map.get(i, 0) + 1
# print(map)

for i in q:
    if map[i] >= p[1]:
        print(i)
        break
for i in q:
    if map[i] < p[1]:
        flag = True
    else:
        flag = False

if flag:
    print(-1)


        
    
   

```

## Submission at 2024-10-28 11:26:41


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    curr1 = head1
    curr2 = head2

    while curr1 != None:
      if curr1.val == curr2.val:
        head3 = curr2
        curr3 = head3
        break
      if curr2.next == None:
        curr1 = curr1.next
        curr2 = head2
      else:
        curr2 = curr2.next


    while curr1 != None:
      if curr1.val == curr2.val:
        curr3.next = curr2
        curr3 = curr3.next
        curr1 = curr1.next
        curr2 = curr2.next
      if curr2.next == None:
        curr1 = curr1.next
        curr2 = head2
      else:
        curr2 = curr2.next  

    return head3.next




```

## Submission at 2024-10-28 11:27:29


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    if head1 == None or head2 == None:
      return None




```

## Submission at 2024-11-17 04:54:27


```
a = input()
a = a.split()
order = a[0]
s = a[1]

arr = [-1]*len(order)
i = 0
for char in order:
    arr[i] = char
    i += 1
p = " "

i = 0
for char in s:
    if char in arr:
        p = p + arr[i]
        i += 1
    else:
        p = p + char

print(p)

```

## Submission at 2024-11-17 04:55:19


```
a = input()
a = a.split()
order = a[0]
s = a[1]

arr = [-1]*len(order)
i = 0
for char in order:
    arr[i] = char
    i += 1
p = " "

i = 0
for char in s:
    if char in arr:
        p = p + arr[i]
        i += 1
    else:
        p = p + char

return p

```

## Submission at 2024-11-17 04:57:51


```
a = input()
a = a.split()
order = a[0]
s = a[1]

arr = [-1]*len(order)
i = 0
for char in order:
    arr[i] = char
    i += 1
p = ""

i = 0
for char in s:
    if char in arr:
        p = p + arr[i]
        i += 1
    else:
        p = p + char

print(p)

```

## Submission at 2024-11-17 05:13:30


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
    ans = 0
    def trv(root, s):
      nonlocal ans
      if not root:
        return
      if root.right == None and root.left == None:
        ans = ans + 10*s + root.data
      s = 10*s + root.data
      trv(root.left, s)
      trv(root.right, s)
    trv(root, 0)

    return ans
    
```

## Submission at 2024-11-17 05:13:30


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
    ans = 0
    def trv(root, s):
      nonlocal ans
      if not root:
        return
      if root.right == None and root.left == None:
        ans = ans + 10*s + root.data
      s = 10*s + root.data
      trv(root.left, s)
      trv(root.right, s)
    trv(root, 0)

    return ans
    
```

## Submission at 2024-11-17 06:30:55


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    x, y = head1, head2
    z = ListNode(0)
    head3 = z
    while x and y:
      if x.val < y.val:
        x = x.next
      elif y.val < x.val:
        y = y.next
      else:
        z.next = ListNode(y.val)
        z = z.next
        x = x.next
        y = y.next
    
    return head3.next
        

```

## Submission at 2024-11-17 06:59:25


```
a = input()
a = [int(x) for x in a.split()]
b = input()
b = [int(x) for x in b.split()]

n = a[0]
k = a[1]

def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr)//2
        
        x = arr[:mid]
        y = arr[mid:]

        mergesort(x)
        mergesort(y)

        i = j = k = 0

        while i < len(x) and j < len(y):
            if x[i] < y[j]:
                arr[k] = x[i]
                i += 1
            else:
                arr[k] = y[j]
                j += 1
            k += 1
        
        while i < len(x):
            arr[k] = x[i]
            i += 1
            k += 1
        while j < len(y):
            arr[k] = y[j]
            j += 1
            k += 1

mergesort(b)
x = {}

for num in b:
    x[num] = num - k - 1

ans = 0
for num in b:
    if x[num] > 0:
        ans = ans + x[num]
print(ans)
```

## Submission at 2024-11-17 07:10:15


```
a = input()
a = [int(x) for x in a.split()]
b = input()
b = [int(x) for x in b.split()]

n = a[0]
k = a[1]

x = {}
M = min(b)

for num in b:
    x[num] = num - M

ans = 0
for num in b:
    if x[num] > k:
        ans = ans + x[num] - k
print(ans)
```

## Submission at 2024-11-25 09:48:54


```
n = int(input())
a = input()
a = [int(x) for x in a.split()]

flag = True
for i in range(len(a) - 1):
    if a[i] > a[i + 1]:
        flag = False

if flag:
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 09:54:21


```
n = input()
n = [int(x) for x in n.split()]
a = input()
a = [int(x) for x in a.split()]

a.sort()
target = n[1]

res = []
for i in range(0, len(a)):
    if a[i] == target:
        res.append(i)

res.sort()
for i in res:
    print(i, end=" ")
```

## Submission at 2024-11-25 09:56:11


```
n = input()

x = 0
y = 0

for char in n:
    if char == "a":
        x += 1
    else:
        y += 1

if x>y:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 10:09:45


```
n = int(input())
a = input()
a = [int(x) for x in a.split()]

d = a[1] - a[0]

S = (n*(2*a[0] + (n-1)*d))/2
M = 0
for i in a:
    M = M + i


# flag = True
# for i in range(0, len(a) - 1):
#     if a[i + 1] - a[i] != d:
#         flag == False
#         break
#     else:
#         continue

if M != S:
    print("false")
else:
    print("true")

```

## Submission at 2024-11-25 10:16:54


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
    arr = []

    def trv(root):
        if not root:
            return
        trv(root.left)
        if root.data <= n:
            arr.append(root.data)
        trv(root.right)
    
    trv(root)
    if len(arr) == 0:
        return -1
    else:
        return arr.pop()
```

## Submission at 2024-11-25 10:30:21


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
        arr1 = []
        arr2 = []

        curr = head1
        while curr != None:
          arr1.append(curr.data)
          curr = curr.next

        curr = head2
        while curr != None:
          arr2.append(curr.data)
          curr = curr.next
        
        for i in arr1:
          if i in arr2:
            node = i
            break
        
        curr = head1
        while curr.data != node and curr != None:
          curr = curr.next
        
        if curr != None:
          return node
        else:
          return -1




```

## Submission at 2024-11-25 10:34:15


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
        arr1 = []
        arr2 = []

        curr = head1
        while curr != None:
          arr1.append(curr.data)
          curr = curr.next

        curr = head2
        while curr != None:
          arr2.append(curr.data)
          curr = curr.next
        
        for i in arr1:
          if i in arr2:
            node = i
            break
        
        curr = head1
        while curr.data != node and curr != None:
          curr = curr.next
        
        if curr != None:
          return curr
        else:
          return -1




```

## Submission at 2024-11-25 11:04:02


```
n1 = input()
n1 = [int(x) for x in n1.split()]

n = n1[0] #shelves
k = n1[1] #bottles

arr = []

for i in range(k):
    a = input()
    a = [int(x) for x in a.split()]
    arr.append(a)

d = {}

for i in range(len(arr)):
    if arr[i][0] not in d:
        d[arr[i][0]] = arr[i][1]
    else:
        d[arr[i][0]] += arr[i][1]

res = []
for b, c in d.items():
    res.append(c)

res.sort()
i = 0

while n and len(res) != 0:
    i += res.pop()
    n -= 1
print(i)
```

## Submission at 2024-11-25 11:10:27


```
n = int(input())

for i in range(1, n + 1):
    for j in range(1, i + 1):
        print("*", end="")
    print("\n")

```

## Submission at 2024-11-25 11:12:15


```
n = int(input())

for i in range(1, n + 1):
    s = ""
    for j in range(1, i + 1):
        s = s + "*"
    print(s)

```

## Submission at 2024-11-25 11:14:31


```
n = int(input())
a = input()
a = [int(x) for x in a.split()]

d = a[1] - a[0]

S = (n*(2*a[0] + (n-1)*d))/2
M = 0
for i in a:
    M = M + i


# flag = True
# for i in range(0, len(a) - 1):
#     if a[i + 1] - a[i] != d:
#         flag == False
#         break
#     else:
#         continue

if M != S:
    print("false")
else:
    print("true")
```

