## Submission at 2024-08-12 09:51:17


```
def fibonacci(x):
    if x==0:
        return 0
    if x==1:
        return 1
 a, b = 0, 1
    
    for _ in range(2, x + 1):
        a, b = b, a + b
    
    return b


```

## Submission at 2024-09-02 10:09:02


```
class Node:
    def __init__(self,data):
        self.data = data
        self.ref = None

class LinkedList:
    def __init__(self):
        self.head = None

    def print_LL(self):
        if self.head is None:
            print('Linked List is empty !!')
        else:
            n = self.head
            while n is not None:
                print(n.data)
                n = n.ref
                
    def add_begin(self,data):
        new_node = Node(data)
        new_node.ref = self.head
        self.head = new_node

LL1 = LinkedList()
LL1.add_begin(1)
LL1.add_begin(2)
LL1.add_begin(3)
LL1.add_begin(4)
LL1.add_begin(5)
LL1.print_LL()
```

## Submission at 2024-09-02 10:15:08


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

## Submission at 2024-09-02 10:24:57


```
# Input reading
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

## Submission at 2024-09-02 10:40:22


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def reverseLinkedList(head):
    prev = None
    current = head

    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node
    
    return prev


```

## Submission at 2024-09-02 11:01:30


```
class Node:
    def __init__(self):
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
    
    return head
```

## Submission at 2024-09-02 11:05:14


```
# class Node:
#     def __init__(self):
#         self.data = None
#         self.next = None

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
    
    return head


```

## Submission at 2024-09-02 11:13:36


```
# class Node:
#     def __init__(self):
#         self.data = None
#         self.next = None

def delNode(head, k):
    # If head is to be deleted
    if k == 1:
        return head.next
    
    # Initialize pointers
    current = head
    count = 1
    prev = head
    while count < k:
        if current.next:
            prev = current
            current = current.next
            count = count + 1
    if current.next:
        prev.next=current.next
    else:
        prev.next=None

    return head

    


```

## Submission at 2024-09-02 11:15:45


```
# class Node:
#     def __init__(self):
#         self.data = None
#         self.next = None

def delNode(head, k):
    # If head is to be deleted
    if k == 1:
        return head.next
    
    # Initialize pointers
    current = head
    count = 1
    prev = head
    while count < k:
        if current.next:
            prev = current
            current = current.next
            count = count + 1
    if current.next:
        prev.next=current.next
    else:
        prev.next=None

    return head

    


```

## Submission at 2024-09-02 11:22:06


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    if head is None or k <= 0:
        return -1

    current = head
    count = 1  # 1-based index

    while current is not None:
        if count == k:
            return current.val  # Return the value of the k-th node
        current = current.next
        count += 1

    return -1

```

## Submission at 2024-09-05 11:22:08


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

## Submission at 2024-09-09 09:58:46


```
def power(n,int)-->bool:
    if n>0 and (n & (n-1)):
        return True
    else:
        return False

print(power(64,4))
```

## Submission at 2024-09-09 10:02:45


```
def power(n,int)-->bool:
    if n>0 and (n & (n-4)):
        return True
    else:
        return False

    print(power(64))
```

## Submission at 2024-09-09 10:08:38


```
def power(n):
    if n>0 and (n%4 == 0):
        return True
    else:
        return False

    print(power(64))

power(64)
```

## Submission at 2024-09-09 10:09:56


```
def power(n):
    if n>0 and (n%4 == 0):
        return True
    else:
        return False

    power(16)

power(16)
```

## Submission at 2024-09-09 10:10:13


```
def power(n):
    if n>0 and (n%4 == 0):
        return True
    else:
        return False

    power(16)

```

## Submission at 2024-09-09 10:11:47


```
def power(n):
    if n%4 ==0:
        return True
    else:
        return False

    power(16)

```

## Submission at 2024-09-09 10:17:27


```
def power(n,int)->bool:
    if n>0 and (n & (n-3)):
        return True
    else:
        return False
        
    power(16)
```

## Submission at 2024-09-09 10:19:53


```
def power(n,int)->bool:
    if n>0 and (n & (n-2)):
        return True
    else:
        return False
        
    power(16)
```

## Submission at 2024-09-09 10:20:33


```
def power(n)->bool:
    if n>0 and (n & (n-2)):
        return True
    else:
        return False
        
    power(16)
```

## Submission at 2024-09-09 10:20:53


```
def power(n)->bool:
    if n>0 and (n & (n-3)):
        return True
    else:
        return False
        
    power(16)
```

## Submission at 2024-09-09 10:29:27


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    a = self.head

    if a and a.next == a:
        return self.head
    else:
        return a.next


```

## Submission at 2024-09-09 10:30:34


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    
    if self.head and self.head.next == self.head:
        return self.head
    else:
        return self.head.next

removeDuplicates(1)


```

## Submission at 2024-09-09 10:32:04


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    
    def __init__(self):
        self.data = None

        if self.head and self.head.next == self.head:
            return self.head
        else:
            return self.head.next

removeDuplicates(5)


```

## Submission at 2024-09-09 10:34:42


```
class node:
    def __init__(self):
        self.data = data
        self.next = None

def removeDuplicates(head):
    
    def __init__(self):
        self.head = None
    
    a = self.head
    for i in range(a):
        if a == a.next:
            return a
        else:
            return a.next

removeDuplicates(5)


```

## Submission at 2024-09-09 10:35:07


```
class node:
    def __init__(self):
        self.data = data
        self.next = None

def removeDuplicates(head):
    
    def __init__(self):
        self.head = None
    
    a = self.head
    for i in range(a):
        if a == a.next:
            return a
        else:
            return a.next

removeDuplicates(5)


```

## Submission at 2024-09-09 10:44:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    a = self.head
    if a == self.head.next:
        return a
    else:
        return a.next
    
removeDuplicates(1)



```

## Submission at 2024-09-09 10:55:01


```
def power(n)->bool:
    if n>=0 and (n & (n-2)):
        return True
    else:
        return False
        
    print(power(16))

power(16)
```

## Submission at 2024-09-09 10:56:32


```
def power(n)->bool:
    if n>=0 and (n & (n-3)==0):
        return True
    else:
        return False
        
    print(power(16))

power(16)
```

## Submission at 2024-09-09 10:57:39


```
def power(n)->bool:
    if n>=0 and (n & (n-3)==0):
        return True
    else:
        return False
        
    power(16)

power(16)
```

## Submission at 2024-09-09 10:59:13


```
def power(n,int)->bool:
    if n>=0 and (n & (n-3)==0):
        return True
    else:
        return False
        
    power(16,4)

power(16,4)
```

## Submission at 2024-09-09 11:10:27


```
def power(n,int)->bool:
    if n>=0 and (n & (n-3)==0):
        return True
    else:
        return False
        
    power(16,4)

power(16,4)
```

## Submission at 2024-09-10 03:04:42


```
n = int(input("enter the n : "))
def fibo(n):
    if n==1:
        return 0
    if n==2:
        return 1
    else:
        return fibo(n-1) + fibo(n-2)

for i in range(1,n+1):
    print(fibo(i))

```

## Submission at 2024-09-10 03:08:22


```
def fibonacci(x:int) -> int:
    if x==1:
        return 0
    if x==2:
        return 1
    else:
        return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(4))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-10 03:12:35


```
def is_power_of_two(n:int) -> bool:
    if n> and (n & (n-1)==0):
        return True
    else:
        return False


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:13:22


```
def is_power_of_two(n:int) -> bool:
    if n>0 and (n & (n-1)==0):
        return True
    else:
        return False


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:14:27


```
def is_power_of_two(n:int) -> bool:
    if n>0 and (n & (n-1)) ==0:
        return True
    else:
        return False


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:14:57


```
def is_power_of_two(n: int) -> bool:
    # Check if n is greater than 0 and n & (n-1) equals 0
    return n > 0 and (n & (n - 1)) == 0


def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))


if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:15:50


```
def is_power_of_two(n: int) -> bool:
    # Check if n is greater than 0 and n & (n-1) equals 0
    return True if n > 0 and (n & (n - 1)) == 0 else False


def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))


if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:17:02


```
def is_power_of_two(n: int) -> bool:
    # A power of two must be positive and satisfy n & (n-1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:17:36


```
def is_power_of_two(n: int) -> bool:
    # A power of two must be positive and satisfy n & (n-1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:18:14


```
def is_power_of_two(n: int) -> bool:
    # A power of two must be positive and satisfy n & (n-1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(2))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:18:47


```
def is_power_of_two(n: int) -> bool:
    # A power of two must be positive and satisfy n & (n-1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(2))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:20:12


```
def is_power_of_two(n: int) -> bool:
    # A power of two must be positive and satisfy n & (n-1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16,2))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:23:04


```
def is_power_of_two(n: int) -> str:
    if n > 0 and (n & (n - 1)) == 0:
        return True
    else:
        return False
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:23:59


```
def is_power_of_two(n: int) -> :
    if n > 0 and (n & (n - 1)) == 0:
        return "True"
    else:
        return "False"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 03:24:16


```
def is_power_of_two(n: int) -> str :
    if n > 0 and (n & (n - 1)) == 0:
        return "True"
    else:
        return "False"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 05:29:49


```
def is_power_of_two(n: int) -> str :
    if n > 0 and (n & (n - 1)) == 0:
        return "True"
    else:
        return "False"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-10 05:30:40


```
def is_power_of_two(n: int) -> str :
    if n > 0 and (n & (n - 1)) == 0:
        return "True"
    else:
        return "False"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-10 05:34:21


```
def is_power_of_two(n: int) -> bool:
    # Base case: 1 is a power of two (2^0)
    if n == 1:
        return True
    # If n is less than 1 or n is not divisible by 2, it's not a power of two
    elif n < 1 or n % 2 != 0:
        return False
    # Recursive case: check if n/2 is a power of two
    else:
        return is_power_of_two(n // 2)

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 05:34:59


```
def is_power_of_two(n: int) -> bool:
    # Base case: 1 is a power of two (2^0)
    if n == 1:
        return 'true'
    # If n is less than 1 or n is not divisible by 2, it's not a power of two
    elif n < 1 or n % 2 != 0:
        return 'false'
    # Recursive case: check if n/2 is a power of two
    else:
        return is_power_of_two(n // 2)

def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-10 05:35:46


```
def is_power_of_two(n: int) -> :
    if n > 0 and (n & (n - 1)) == 0:
        return "true"
    else:
        return "false"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(16))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-10 05:35:59


```
def is_power_of_two(n: int) -> :
    if n > 0 and (n & (n - 1)) == 0:
        return "true"
    else:
        return "false"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-10 05:36:06


```
def is_power_of_two(n: int) -> :
    if n > 0 and (n & (n - 1)) == 0:
        return "true"
    else:
        return "false"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-10 05:36:19


```
def is_power_of_two(n: int) ->bool :
    if n > 0 and (n & (n - 1)) == 0:
        return "true"
    else:
        return "false"
   
def main():
    # Input: a single integer n
    n = int(input().strip())

    # Output: true or false based on whether n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-10 05:50:21


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    prev = self.head
        a = self.head.next
        for i in range(1,k-1):
            a = a.next
            prev = prev.next
        prev.next = a.next
        a.next = None

LL.delete_specify(3)


```

## Submission at 2024-09-10 05:50:42


```
class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None


def delNode(head: Node, k: int) -> Node:
    # Edge case: if the head is None, return None
    if head is None:
        return None
    
    # Special case: if we need to delete the first node (k == 1)
    if k == 1:
        new_head = head.next
        head.next = None
        return new_head
    
    # Initialize two pointers: prev and current
    prev = None
    current = head
    
    # Traverse the list to find the k-th node
    for i in range(1, k):
        prev = current
        current = current.next
        if current is None:
            # If k is greater than the number of nodes, no node is deleted
            return head
    
    # Remove the k-th node by adjusting the pointers
    prev.next = current.next
    current.next = None
    
    return head


# Helper function to print the list (for testing)
def printList(head: Node):
    current = head
    while current:
        print(current.data, end=" -> ")
        current = current.next
    print("None")


# Example usage:
if __name__ == "__main__":
    # Create a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> None
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(4)
    head.next.next.next.next = Node(5)
    
    # Print original list
    print("Original List:")
    printList(head)
    
    # Delete the 3rd node
    head = delNode(head, 3)
    
    # Print updated list
    print("\nUpdated List after deleting 3rd node:")
    printList(head)

```

## Submission at 2024-09-10 05:51:36


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
     if head is None:
        return None
    
    # Special case: if we need to delete the first node (k == 1)
    if k == 1:
        new_head = head.next
        head.next = None
        return new_head
    
    # Initialize two pointers: prev and current
    prev = None
    current = head
    
    # Traverse the list to find the k-th node
    for i in range(1, k):
        prev = current
        current = current.next
        if current is None:
            # If k is greater than the number of nodes, no node is deleted
            return head
    
    # Remove the k-th node by adjusting the pointers
    prev.next = current.next
    current.next = None
    
    return head


# Helper function to print the list (for testing)
def printList(head: Node):
    current = head
    while current:
        print(current.data, end=" -> ")
        current = current.next
    print("None")


# Example usage:
if __name__ == "__main__":
    # Create a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> None
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(4)
    head.next.next.next.next = Node(5)
    
    # Print original list
    print("Original List:")
    printList(head)
    
    # Delete the 3rd node
    head = delNode(head, 3)
    
    # Print updated list
    print("\nUpdated List after deleting 3rd node:")
    printList(head)

```

## Submission at 2024-09-10 05:53:29


```
def sum_of_divisibles(n: int) -> int:
    # Initialize a variable to store the sum
    total_sum = 0
    
    # Loop through numbers from 1 to n
    for i in range(1, n + 1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    # Return the total sum
    return total_sum


# Example usage:
if __name__ == "__main__":
    # Input: an integer n
    n = int(input("Enter the value of n: ").strip())
    
    # Output: the sum of integers divisible by 3, 5, or 7
    result = sum_of_divisibles(n)
    print(result)

```

## Submission at 2024-09-10 05:59:31


```
def sum_of_multiples(n: int) -> int:
    total_sum = 0  # Initialize the sum
    
    # Loop through numbers from 1 to n
    for i in range(1, n + 1):
        # Check if i is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum

# Example usage
if __name__ == "__main__":
    # Input: a single integer n
    n = int(input().strip())
    
    # Output: the sum of all integers divisible by 3, 5, or 7
    print(sum_of_multiples(n))

```

## Submission at 2024-09-10 06:02:33


```
def power(n)->bool:
    if n>0 and (n & (n-1))==0 and (n-1)%2==0:
        return "True"
    else:
        return "False"

def main():
    n = int(input())
```

## Submission at 2024-09-10 06:04:26


```
def is_power_of_three_recursive(n: int) -> bool:
    # Base case: If n equals 1, it's a power of three
    if n == 1:
        return True
    # If n is less than 1 or not divisible by 3, return False
    if n < 1 or n % 3 != 0:
        return False
    # Recursively divide n by 3 and check if it's a power of three
    return is_power_of_three_recursive(n // 3)

# Example usage:
if __name__ == "__main__":
    n = int(input().strip())  # Input integer n
    
    # Print True if n is a power of three, else print False
    if is_power_of_three_recursive(n):
        print("True")
    else:
        print("False")

```

## Submission at 2024-09-10 06:06:49


```
def power(n,p):
    if p==0:
        return 1
    else:
        return power(n,p-1)

power(2,4)
```

## Submission at 2024-09-10 06:07:30


```
def power(n,p):
    if p==0:
        return 1
    else:
        return n*power(n,p-1)

power(2,4)
```

## Submission at 2024-09-10 06:08:23


```
def power(x,n):
    if n==0:
        return 1
    else:
        return x*power(x,n-1)

power(2,4)
```

## Submission at 2024-09-10 06:08:49


```
def power(x,n):
    if n==0:
        return 1
    else:
        return x*power(x,n-1)

power(2,4)
```

## Submission at 2024-09-10 06:10:25


```
def power(x,n):
    if n==0:
        return 1
    if n < 0:
        return 1 // pow_recursive(x, -n)

    return x*power(x,n-1)

if __name__ == "__main__":
    # Input: two space-separated numbers x and n
    x, n = map(int, input().strip().split())
    
    # Output: x raised to the power n
    print(pow_recursive(x, n))
```

## Submission at 2024-09-10 06:10:38


```
def power(x,n):
    if n==0:
        return 1
    if n < 0:
        return 1 // pow_recursive(x, -n)

    return x*power(x,n-1)

if __name__ == "__main__":
    # Input: two space-separated numbers x and n
    x, n = map(int, input().strip().split())
    
    # Output: x raised to the power n
    print(pow_recursive(x, n))
```

## Submission at 2024-09-10 06:11:04


```
def power(x,n):
    if n==0:
        return 1
    if n < 0:
        return 1 // pow_recursive(x, -n)

    return x*power(x,n-1)

if __name__ == "__main__":
    # Input: two space-separated numbers x and n
    x, n = map(int, input().strip().split())
    
    # Output: x raised to the power n
    print(pow_recursive(2, 4))
```

## Submission at 2024-09-10 06:12:24


```
def power(x,n):
    if n==0:
        return 1
    if n < 0:
        return 1 // power(x, -n)

    return x*power(x,n-1)

if __name__ == "__main__":
    # Input: two space-separated numbers x and n
    x, n = map(int, input().strip().split())
    
    # Output: x raised to the power n
    print(power(2, 4))
```

## Submission at 2024-10-07 09:56:47


```
import heapq
class Solution:
    def minimumsum(self,num:list[int])->int:
        digits = [value for value ,for value in enumerate(num)]
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        
        return new1+new2
```

## Submission at 2024-10-07 09:57:19


```
import heapq
class Solution:
    def minimumsum(self,num:list[int])->int:
        digits = []
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        
        return new1+new2
```

## Submission at 2024-10-07 10:01:53


```
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(map(str,int(num)))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:02:31


```
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(map(str,int(num)))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:07:39


```
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(split(map(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:14:15


```
import heapq
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(split(map(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:19:33


```
import heapq
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(strip(map(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:22:22


```
import heapq
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(map(strip(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:23:07


```
import heapq
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(map(split(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
            
        return new1+new2
```

## Submission at 2024-10-07 10:24:37


```
def minsum(num:int)->int:
    digits = list(map(split(str,int(num))))
    digits.sort()
    new1 = digits[0]*10 + digits[2]
    new2 = digits[1]*10 + digits[3]
            
    return new1+new2
```

## Submission at 2024-10-07 10:26:37


```
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(map(strip(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        
        return new1 + new2
```

## Submission at 2024-10-07 10:27:50


```
class Solution:
    def minimumsum(self,num:int)->int:
        digits = list(map(str,int(num)))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]

        return new1 + new2
```

## Submission at 2024-10-07 10:34:22


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:34:46


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(split(map(str,int(num)))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:46:14


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(map(str,int(num)))
        digits = digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:47:53


```
class Solution:
    def minsum(self,num:int)->int:
        digits = split(list(map(str,int(num))))
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:56:33


```
class Solution:
    def minsum(self,num:int)->int:
        digits = (list(map(str,int(num)))).split()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:56:57


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(map(str,int(num))).split()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:57:33


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(map(str,int(num))).strip()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:58:32


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(str,int(num)))).strip()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:59:08


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(int(num)))).strip()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 10:59:49


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(int(num)))).split()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 11:00:45


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(str,num(int)))).split()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 11:01:44


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(str,num[int]))).split()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-07 11:03:28


```
class Solution:
    def minsum(self,num:int)->int:
        digits = list(str(map(str,num[int]))).split()
        digits.sort()
        new1 = digits[0]*10 + digits[2]
        new2 = digits[1]*10 + digits[3]
        return new1 + new2
```

## Submission at 2024-10-28 09:59:59


```
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None

#Function to return a list containing the postorder traversal of the tree.
def maxDepth(root):
    if not root:
      return 0
    return 1 + max(maxDepth(root.left),maxDepth(root.right))
    
```

## Submission at 2024-10-28 10:08:48


```
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
class Solution:
    def findMax(self,root):
        max_num = float('-inf')
        def dfs(node):
            if not root:
                return 0
            elif root.left > max_num:
                max_num = root.left
            else:
                max_num = root.right
            
        return max_num


```

## Submission at 2024-10-28 10:18:28


```
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
class Solution:
    def findMax(self,root):
        max_num = float('-inf')
        def dfs(node):
            if not root:
                return 0
            left = dfs(node.left)
            right = dfs(node.right)
        
        return findMax(left,right)


```

## Submission at 2024-10-28 10:23:37


```
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
class Solution:
    def findMax(self,root):
        max_num = float('-inf')
        def dfs(node):
            if not root:
                return 0
            left = dfs(node.left)
            right = dfs(node.right)
        
            return max(left,right)


```

## Submission at 2024-10-28 10:26:12


```
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
class Solution:
    def findMax(self,root):
        max_num = float('-inf')
        def dfs(node):
            if not root:
                return 0
            left = dfs(node.left)
            right = dfs(node.right)
            return max(left,right)
        return 3


```

## Submission at 2024-10-28 10:48:32


```
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
class Solution:
    def findMax(self,root):
        max_num = 0
        def dfs(node,left,right):
            if not root:
                return 0
            left = dfs(node.left)
            right = dfs(node.right)
            return max(node,left,right)
        
    return findMax(root)
```

## Submission at 2024-11-23 10:01:19


```
def fibonacci(x:int) -> int:
    if x==0:
        return 0
    if x==1:
        return 1
    a, b = 0, 1
    for _ in range(2, x + 1):
        a, b = b, a + b
    return b

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-11-23 10:06:17


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    return n>0 and (n&(n-1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:07:30


```
def is_power_of_two(n:int) -> bool:
    # Write your logic here
    
    return n>0 and (n&(n-1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:07:57


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    return n>0 and (n&(n-1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:08:47


```
def is_power_of_two(n: int) -> bool:
    """
    Determine if the given integer is a power of two.

    Parameters:
    n (int): The input integer.

    Returns:
    bool: True if n is a power of two, otherwise False.
    """
    # Check if n is positive and a power of two
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input("Enter an integer: ").strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:10:33


```
def is_power_of_two(n: int) -> bool:
    """
    Determine if the given integer is a power of two.

    Parameters:
    n (int): The input integer.

    Returns:
    bool: True if n is a power of two, otherwise False.
    """
    # Check if n is positive and a power of two
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input("Enter an integer: ").strip())
 
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:11:22


```
def is_power_of_two(n: int) -> int:
    """
    Determine if the given integer is a power of two.

    Parameters:
    n (int): The input integer.

    Returns:
    bool: True if n is a power of two, otherwise False.
    """
    # Check if n is positive and a power of two
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input("Enter an integer: ").strip())
 
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:12:17


```
def is_power_of_two(n: int) -> int:
    
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input("Enter an integer: ").strip())
 
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:14:25


```
def is_power_of_two(n: int) -> int:
    
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input("Enter an integer: ").strip())
 
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:17:06


```
def is_power_of_two(n: int) -> bool:
    
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input("Enter an integer: ").strip())
 
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-23 10:25:24


```
from collections import Counter

def are_arrays_equal(arr1, arr2):
    return Counter(arr1) == Counter(arr2)

def main():
    size1, size2 = map(int, input().strip().split())
    
    # Read arrays
    arr1 = list(map(int, input().strip().split()))
    arr2 = list(map(int, input().strip().split()))
    
    # Check if sizes are the same and if arrays are equal
    if size1 != size2:
        print("false")
    else:
        print("true" if are_arrays_equal(arr1, arr2) else "false")

if __name__ == "__main__":
    main()
```

## Submission at 2024-11-23 10:31:25


```
from collections import Counter

def are_arrays_equal(arr1, arr2):
    return Counter(arr1) == Counter(arr2)

def main():
    size1, size2 = map(int, input().strip().split())
    
    # Read arrays
    arr1 = list(map(int, input().strip().split()))
    arr2 = list(map(int, input().strip().split()))
    
    # Check if sizes are the same and if arrays are equal
    if size1 != size2:
        print("false")
    else:
        print("true" if are_arrays_equal(arr1, arr2) else "false")

if __name__ == "__main__":
    main()
```

## Submission at 2024-11-25 09:51:55


```
def odd_even(arr):
    odd_count = 0
    even_count = 0
    for i in arr:
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 09:53:42


```
def odd_even(arr):
    
    for i in arr:
        odd_count = 0
        even_count = 0
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 09:55:01


```
def odd_even(n,arr):
    
    for i in len(arr):
        odd_count = 0
        even_count = 0
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 09:55:41


```
def odd_even(arr):
    odd_count = 0
    even_count = 0
    for i in len(arr):
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 10:11:20


```
n = int(input("Enter the number : "))
for i in range(0,n-1):
    for j in range(1,i-1):
        print("*",end=" ")
```

## Submission at 2024-11-25 10:16:50


```
n = int(input())
for i in range(0,n-1):
    for j in range(1,i-1):
        print("*",end=" ")
```

## Submission at 2024-11-25 10:17:04


```
n = int(input())
for i in range(0,n-1):
    for j in range(1,i-1):
        print("*",end=" ")
```

## Submission at 2024-11-25 10:20:31


```
def odd_even(arr):
    odd_count = 0
    even_count = 0
    for i in len(arr):
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 10:22:00


```
def odd_even(n,arr):
    n = int(input())
    odd_count = 0
    even_count = 0
    for i in len(arr):
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 10:26:55


```
n = int(input())
def odd_even(arr):
    odd_count = 0
    even_count = 0
    for i in len(arr):
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

## Submission at 2024-11-25 10:36:11


```
n = int(input())
for i in range(1,n-1):
    for j in range(0,n-i+1):
        print("*",end=" ")
    print()
```

## Submission at 2024-11-25 10:52:51


```
n = int(input())
for i in range(0,n-1):
    for j in range(1,n-i):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:01:33


```
n = int(input())
for i in range(0,n):
    n1 = input()
    print("Hello "+n1+"!")
```

## Submission at 2024-11-25 11:04:38


```
n = int(input())
for i in range(0,n-1):
    for j in range(1,n-i):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:10:25


```
n = int(input())
for i in range(0,n):
    for j in range(1,n-i+1):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:18:50


```
def odd_even(arr):
    odd_count = 0
    even_count = 0
    for i in len(arr):
        if i%2 == 0:
            even_count+= 1
        else:
            odd_count+= 1
    return odd_count,even_count
```

