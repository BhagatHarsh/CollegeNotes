## Submission at 2024-08-05 10:29:44


```
user = input()
print("Hello " + user + "!")

```

## Submission at 2024-08-05 10:36:44


```
n = int(input())
for n in range(1, n+1):
    user = input()
    print("Hello " + user + "!")
    n = n+1

```

## Submission at 2024-08-12 09:52:28


```
def fibonacci(x:int) -> int:
    if x<0:
        print("incorrect input")

    elif x==0:
        return 0
    
    elif x==1:
        return 1
    else:
        return fibonacci(x-1) + fibonacci(x-2) 

    return x

def main():
    x = int(input().strip())
    fibonacci(x)
    
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:53:16


```
def is_power_of_two(n:int) -> bool:
    if n==1:
        return True
    else:
        if int(n)%2!=0:
            return False
        else:
            return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    if is_power_of_two(n)==True:
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:54:02


```
def is_power_of_two(n:int) -> bool:
    if n==1:
        return True
    else:
        if int(n)==0:
            return False
        else:
            return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    if is_power_of_two(n)==True:
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 10:05:18


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    temp = head;   
    if (head == None or k <= 0):
        return head;    
    

    if k == 1:
        return head;
    
    temp = head
    count = 1
    while(count <= 1):
        temp = temp.next;
        count += 1

    if temp == None or temp.next == None:
        return head;

    temp.next = temp.next.next
    return head;
    

```

## Submission at 2024-09-02 11:03:47


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    temp = head
    count = 1
    while (temp != None):
        if (count == k):
            return temp.val
        temp=temp.next
        count += 1
    return -1 
   
   

    

```

## Submission at 2024-09-02 11:21:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    temp = head
    prev = None
    count = 1

    if (temp == None):
        return head

    if k == 1:
        head = temp.next
        return head

    while (count <= k):
        prev = temp
        temp = temp.next
        if temp is None:
            return head

        if temp is not None:
            prev.next = temp.next

        return head


```

## Submission at 2024-09-05 07:51:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    temp = head
    prev = None
    while temp is not None:
        new_node = temp.next
        temp.next = prev

        prev = temp
        temp = new_node
    return prev


```

## Submission at 2024-09-05 08:24:07


```
def maxarray(a, b):
    n = len(a)

    c = [0] * n

    for i in range (n):
        c[i] = max(a[i], b[i])
        i += 1
    return c
n = 5
a = [1, 3, 6, 7, 10]
b = [2, 4, 5, 8, 9]

c = maxarray(a, b)
print(c)
```

## Submission at 2024-09-05 12:01:31


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp = head
    while temp is not None:
        print(temp.val, end = " ")
        temp = temp.next
        
    return result

```

## Submission at 2024-09-06 11:43:23


```
# Read the size of the arrays
n = int(input())

# Read array a
a = array(map(int, input().split()))

# Read array b
b = array(map(int, input().split()))

# Create array c by taking the maximum of corresponding elements from a and b
c = [max(a[i], b[i]) for i in range(n)]

# Output the maximal array c
print(" ".join(map(str, c)))

```

## Submission at 2024-09-06 11:49:15


```
# Read input values
n = int(input())               # Size of the arrays
a = list(map(int, input().split()))  # Array a
b = list(map(int, input().split()))  # Array b

# Initialize and populate array c
c = []
for i in range(n):
    c.append(max(a[i], b[i]))   # Store the maximum of a[i] and b[i] in c

# Output the result
print(*c)

```

## Submission at 2024-09-09 03:50:53


```
def palindrome(array):
    n = len(array)
    i = 0
    for i in range (0, n):
        if array[i] != array[n-i-1]:
            return ("NO");
        i += 1
    print("YES")
        

user_input = input()
arr = list(user_input)

print(palindrome(arr))
```

## Submission at 2024-09-09 03:50:55


```
def palindrome(array):
    n = len(array)
    i = 0
    for i in range (0, n):
        if array[i] != array[n-i-1]:
            return ("NO");
        i += 1
    print("YES")
        

user_input = input()
arr = list(user_input)

print(palindrome(arr))
```

## Submission at 2024-09-09 09:51:50


```
def power_of_three(int(n)):
    if n == 1:
        return ("True")
    while (n != 1):
        return(power_of_three(n/2))

user_input = int(input())
print(power_of_three(user_input))

```

## Submission at 2024-09-09 09:57:10


```
def power_of_three(n):
    if n == 1:
        return ("True")
    elif n != 1:
        while (n != 1):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))

```

## Submission at 2024-09-09 10:04:07


```
def frequency(s, x):
    count = 0
    n = len(s)
    for x in range (0, n):
        if x == n:
            count += 1
    return count

s = int(input())
x = input()

print(frequency(s, x))
```

## Submission at 2024-09-09 10:09:01


```
def frequency(s, x):
    count = 0
    arr = x.array
    n = len(arr)
    for x in range (0, n):
        if x == arr[n]:
            count += 1
    return count

s = int(input())
x = input()

print(frequency(s, x))
```

## Submission at 2024-09-09 10:09:01


```
def frequency(s, x):
    count = 0
    arr = x.array
    n = len(arr)
    for x in range (0, n):
        if x == arr[n]:
            count += 1
    return count

s = int(input())
x = input()

print(frequency(s, x))
```

## Submission at 2024-09-09 10:12:25


```
def frequency(s, x):
    count = 0
    arr = x.array
    n = len(arr)
    for x in range (0, n):
        if x == arr[n]:
            count += 1
    return count

user_input = input(s, x)

print(frequency(s, x))
```

## Submission at 2024-09-09 10:28:09


```

class Solution:
    def isPalindrome(self, head):
      curr = head
      prev = None
      tail = -1
      if curr == None:
        return head
      while curr != None:
        new_curr = curr
        curr = curr.next
        prev = curr
      return new_curr
      if curr.val == new_curr.val:
        return true
      else:
        return false
          



```

## Submission at 2024-09-09 10:28:25


```

class Solution:
    def isPalindrome(self, head):
      curr = head
      prev = None
      tail = -1
      if curr == None:
        return head
      while curr != None:
        new_curr = curr
        curr = curr.next
        prev = curr
      return new_curr
      if curr.val == new_curr.val:
        return true
      else:
        return false
          



```

## Submission at 2024-09-09 10:37:22


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp = head
    prev = None

    if temp == None:
        return head
    
    while temp != None:
        if temp == temp.next:
            new_temp = prev
            prev = temp.next
    return prev
            

```

## Submission at 2024-09-09 10:38:17


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp = head
    prev = None

    if temp == None:
        return head
    
    while temp != None:
        if temp == temp.next:
            new_temp = prev
            prev = temp.next
    return prev
            

```

## Submission at 2024-09-09 10:44:20


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp = head
    prev = None

    if temp == None:
        return head
    
    while temp != None:
        if temp == temp.next:
            prev = temp.next
            prev.next = temp
            temp = temp.next.next
    return temp
            

```

## Submission at 2024-09-09 10:44:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp = head
    prev = None

    if temp == None:
        return head
    
    while temp != None:
        if temp == temp.next:
            prev = temp.next
            prev.next = temp
            temp = temp.next.next
    return temp
            

```

## Submission at 2024-09-09 10:44:36


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp = head
    prev = None

    if temp == None:
        return head
    
    while temp != None:
        if temp == temp.next:
            prev = temp.next
            prev.next = temp
            temp = temp.next.next
    return temp
            

```

## Submission at 2024-09-09 10:46:29


```
def power_of_three(n):
    if n == 1:
        return ("True")
    elif n != 1:
        while (n !=  && n % 3 = 0):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:47:58


```
def power_of_three(n):
    if n % 3 != 0:
        return ("False")
    if n == 1:
        return ("True")
    elif n != 1:
        while (n != 0):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:47:58


```
def power_of_three(n):
    if n % 3 != 0:
        return ("False")
    if n == 1:
        return ("True")
    elif n != 1:
        while (n != 0):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:48:27


```
def power_of_three(n):

    if n == 1:
        return ("True")
    elif n != 1:
        while (n != 0):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:48:27


```
def power_of_three(n):

    if n == 1:
        return ("True")
    elif n != 1:
        while (n != 0):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:48:52


```
def power_of_three(n):
    if n == 1:
        return ("True")
    elif n != 1:
        while (n != 0):
            return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:51:08


```
def power_of_three(n):
    while n % 3 = 0:
        if n == 1:
            return ("True")
        elif n != 1:
            while (n != 0):
                return(power_of_three(n/3))
        else:
            return ("False")
    return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:51:09


```
def power_of_three(n):
    while n % 3 = 0:
        if n == 1:
            return ("True")
        elif n != 1:
            while (n != 0):
                return(power_of_three(n/3))
        else:
            return ("False")
    return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:51:09


```
def power_of_three(n):
    while n % 3 = 0:
        if n == 1:
            return ("True")
        elif n != 1:
            while (n != 0):
                return(power_of_three(n/3))
        else:
            return ("False")
    return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:52:05


```
def power_of_three(n):
    if n % 3 == 0:
        if n == 1:
            return ("True")
        elif n != 1:
            while (n != 0):
                return(power_of_three(n/3))
        else:
            return ("False")
    return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:52:06


```
def power_of_three(n):
    if n % 3 == 0:
        if n == 1:
            return ("True")
        elif n != 1:
            while (n != 0):
                return(power_of_three(n/3))
        else:
            return ("False")
    return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:52:07


```
def power_of_three(n):
    if n % 3 == 0:
        if n == 1:
            return ("True")
        elif n != 1:
            while (n != 0):
                return(power_of_three(n/3))
        else:
            return ("False")
    return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:54:15


```
def power_of_three(n):
    if n == 1:
            return ("True")
            if n % 3 == 0:
                elif n != 1:
                    while (n != 0):
                        return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:54:55


```
def power_of_three(n):
    if n == 1:
            return ("True")
        if n % 3 == 0:
            elif n != 1:
                while (n != 0):
                    return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 10:54:57


```
def power_of_three(n):
    if n == 1:
            return ("True")
        if n % 3 == 0:
            elif n != 1:
                while (n != 0):
                    return(power_of_three(n/3))
    else:
        return ("False")
    

user_input = int(input())
print(power_of_three(user_input))
```

## Submission at 2024-09-09 11:01:31


```
def freq_count(s, x):
    count = 0
    len_s = len(s)
    for i in range (len_s):
        if a[i] == x:
            count += 1
        i += 1
    return count

user_input = input().split()

```

## Submission at 2024-09-09 11:01:31


```
def freq_count(s, x):
    count = 0
    len_s = len(s)
    for i in range (len_s):
        if a[i] == x:
            count += 1
        i += 1
    return count

user_input = input().split()

```

## Submission at 2024-09-09 11:02:57


```
def freq_count(s, x):
    count = 0
    len_s = len(s)
    for i in range (len_s):
        if a[i] == x:
            count += 1
        i += 1
    return count

user_s = input()
user_x = input()

print(freq_count(user_s, user_x))
```

## Submission at 2024-09-09 11:02:58


```
def freq_count(s, x):
    count = 0
    len_s = len(s)
    for i in range (len_s):
        if a[i] == x:
            count += 1
        i += 1
    return count

user_s = input()
user_x = input()

print(freq_count(user_s, user_x))
```

## Submission at 2024-09-09 11:07:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    if temp == temp.next:
        prev = temp
        temp = temp.next
        prev.next = temp
        return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:07:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:08:03


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:08:06


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:08:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next
        prev = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:09:59


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:10:27


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:10:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:10:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:10:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:11:02


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None:
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:11:04


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None:
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:11:05


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None:
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
        prev.next = temp
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:11:58


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None:
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next.next
    return temp

print(removeDuplicates)

```

## Submission at 2024-09-09 11:12:45


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    temp = head
    prev = None
    if temp == None:
        return head
    while temp != None:
        if temp == temp.next:
            prev = temp
            temp = temp.next
            prev.next = temp
        temp = temp.next
    return temp

print(removeDuplicates)

```

## Submission at 2024-10-07 09:52:18


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        for i in q:
            q[low], q[high] = q[high], q[low]
            low += 1
            high -= 1
            return q

```

## Submission at 2024-10-07 10:09:15


```
def piles(n, k, arr):
    coins = 0
    if n < 2:
        return "error"
    while n:
        mid = (low + high)//2
        for i in n:
            if arr[i] + k == arr[i+1]:
                i += 1
            elif arr[i] - k == arr[i+1]:
                i += 1
            else:
                coins = coins + (arr[i+1] - arr[i] - k)
                i += 1
            return coins

user_input = input()
print(piles(user_input))
```

## Submission at 2024-10-07 10:18:13


```
def piles(n, k, arr):
    coins = 0
    if n < 2:
        return "error"
    for i in range(n):
        if arr[i] + k == arr[i+1]:
            i += 1
        elif arr[i] - k == arr[i+1]:
            i += 1
        else:
            if (arr[i+1] - arr[i] - k)<0:
                coins = coins + (-(arr[i+1] - arr[i] - k))
            else:
                coins = coins + (arr[i+1] - arr[i] - k)
            i += 1
        return coins
    
print(piles(n, k, arr))

```

## Submission at 2024-10-07 10:21:22


```
def piles(n, k, arr):
    coins = 0
    for i in range(n):
        if arr[i] + k == arr[i+1]:
            i += 1
        elif arr[i] - k == arr[i+1]:
            i += 1
        else:
            if (arr[i+1] - arr[i] - k)<0:
                coins = coins + (-(arr[i+1] - arr[i] - k))
            else:
                coins = coins + (arr[i+1] - arr[i] - k)
            i += 1
        return coins
    
n = input()
k = input()

```

## Submission at 2024-10-07 10:22:14


```
def piles(n, k, arr):
    coins = 0
    if i == 1:
        return i
    for i in range(n):
        if arr[i] + k == arr[i+1]:
            i += 1
        elif arr[i] - k == arr[i+1]:
            i += 1
        else:
            if (arr[i+1] - arr[i] - k)<0:
                coins = coins + (-(arr[i+1] - arr[i] - k))
            else:
                coins = coins + (arr[i+1] - arr[i] - k)
            i += 1
        return coins
    
n = input()
k = input()

```

## Submission at 2024-10-07 10:31:37


```
i = 0
stack = []
char = input()

for i in char:
    stack.append(i)
    i += 1

for i in stack:
    newchar = stack.pop(i)
    i = i - 1
    print(newchar)
    

```

## Submission at 2024-10-07 10:49:04


```
unhappy = 0
a[j] = max(a)
avg_wealth = sum(a)/n
n = input()
a = input()
if unhappy < n/2:
    return -1
x = (a[j]*n) - sum(a)
for i in range(a):
    if i < avg_wealth:
        unhappy += 1
    
if unhappy > n/2:
    return x
else:
    return - 1
```

## Submission at 2024-10-07 11:01:06


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            return q
    else:
        low, high = 0, n-1
        while low + n/2 == high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q
    
        
        
 
```

## Submission at 2024-10-07 11:01:56


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 == high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q
    
        
        
 
```

## Submission at 2024-10-07 11:02:25


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q
    
        
        
 
```

## Submission at 2024-10-07 11:03:02


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low == high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q
    
        
        
 
```

## Submission at 2024-10-07 11:03:58


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q
    
        
        
 
```

## Submission at 2024-10-07 11:04:42


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q
    
        
        
 
```

## Submission at 2024-10-07 11:07:59


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q

for num in range (n):
    low, high = 0, n-1
    q[num], q[high] = q[high], q[num]
    return q
    
        
        
 
```

## Submission at 2024-10-07 11:08:47


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q

for num in range (n):
    low, high = 0, n-1
    q[num], q[high] = q[high], q[num]
    high = high -1
    return q
    
        
        
 
```

## Submission at 2024-10-07 11:09:26


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q

    
        
        
 
```

## Submission at 2024-10-07 11:09:29


```
from collections import deque # Don't touch this line

def rev(q):
    if n % 2 == 0:
        low, high = 0, n-1
        while low != high:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            low = low + 1
            high = high -1
            return q
    else:
        low, high = 0, n-1
        while low + n/2 != high - n/2:
            q[low], q[high] = q[high], q[low]
            q[low + 1], q[high-1] = q[high-1], q[low+1]
            q[low+2], q[high-2] = q[high-2], q[low+2]
            high = high -1
            low = low+1
            return q

    
        
        
 
```

## Submission at 2024-10-07 11:14:49


```
s = input()
def math(s):
    for i in s:
        if int(i)>int(i+2)
        int(i), int(i+2) = int(i+2), int(i)
        i += 2
        return i        
 
```

## Submission at 2024-11-25 09:53:52


```
n = int(input())
for i in range (n-1):
    for j in range (n):
        print('*')
        
```

## Submission at 2024-11-25 10:00:52


```
n = int(input())
for i in range (n):
    for j in range (1, n):
        print('*')
        
```

## Submission at 2024-11-25 10:05:12


```
n = int(input())
for i in range (n):
    for j in range (i):
        print('*')
        
```

## Submission at 2024-11-25 10:10:08


```
# n = int(input())
# for i in range (n):
#     for j in range (i):
print('*')
print('**')        
print('***')
print('****')
print('*****')
```

## Submission at 2024-11-25 10:29:41


```
n = int(input())
for i in range (n):
        for j in range(i+1):
                print('*')
```

## Submission at 2024-11-25 10:46:04


```
n = input()
if 'a' > 'b':
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:46:07


```
n = input()
if 'a' > 'b':
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:50:41


```
n = int(input())
for i in range (n-1):
    for j in range (i+1):
        print('*')
```

## Submission at 2024-11-25 10:57:27


```
n = int(input())
for i in range (n):
    print('*')
```

## Submission at 2024-11-25 11:03:46


```
n = int(input())
for i in range (n,0,+1):
        print('*')
```

## Submission at 2024-11-25 11:08:50


```
n = int(input())
for i in range (n, 0, +1):
        print('*' * i)
```

## Submission at 2024-11-25 11:10:55


```
n = int(input())
for i in range (1,n,+1):
        print('*' * i)
```

## Submission at 2024-11-25 11:10:57


```
n = int(input())
for i in range (1,n,+1):
        print('*' * i)
```

## Submission at 2024-11-25 11:11:26


```
n = int(input())
for i in range (1,n+1,+1):
        print('*' * i)
```

## Submission at 2024-11-25 11:11:47


```
n = int(input())
for i in range (1,n+1,+1):
        print('*' * i)
```

## Submission at 2024-11-25 11:29:22


```
n = input()
target = input()
list = []
def sort():
    for i in range (n):
        if nums[i] > nums[i+1]:
            nums[i], nums[i+1] = nums[i+1], nums[i]
    return list.append(nums[i])

for i in range (n):
    if nums[i] == target:
        return i



```

