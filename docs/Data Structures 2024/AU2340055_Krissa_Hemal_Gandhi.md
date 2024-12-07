## Submission at 2024-08-05 10:10:30


```
print"Hello!"

```

## Submission at 2024-08-05 10:12:19


```
user = input ("Enter your name.")
print ("Hello" + user)
```

## Submission at 2024-08-05 10:21:31


```
user = input ()
print ("Hello" + user + "!")
```

## Submission at 2024-08-05 10:28:02


```
user = input ()
print ("Hello" + user + "!")

```

## Submission at 2024-08-05 10:40:29


```
n = int(input())
for n in range(1, n+1):
    user = input()
    print ("Hello " + user + "!") 
    n = n + 1
    

```

## Submission at 2024-08-05 10:42:49


```
user = input()
print ("Hello " + user + "!")

```

## Submission at 2024-08-12 10:12:31


```
def fibonacci(x:int) -> int:
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x-1) + fibonacci(x-2)
    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:29:25


```
def is_power_of_two(n:int) -> bool:
    if n <= 0:
        print("Undefine")
    return (n & (n-1)) == 0
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 11:16:13


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

int getKthNode(Node* head, int k) {
    // Write your logic here
    Node* tmpNode = head;
    int currIndex = 1;
    while(currIndex < k){
        if(tmpNode->next){
            tmpNode = tmpNode->next;
            currIndex++;
        }else{
            return -1;
        }
    }
    return tmpNode->data;

}

```

## Submission at 2024-09-09 09:53:41


```
class solution:
    def is_power_of_three (self, n):
        if n<1:
            return False;
        while n % 3 == 0:
            n //= 3
            return n==1;
```

## Submission at 2024-09-09 10:01:36


```
def is_power_of_three(n):
    if n<1:
        return 'False';
    while n % 3 == 0:
        n //= 3
        print('True');
        return n==1;

```

## Submission at 2024-09-09 10:03:00


```
def is_power_of_three(n):
    if n<1:
        return 'False';
    while n % 3 == 0:
        n //= 3
        return n==1;

```

## Submission at 2024-09-09 10:14:16


```
def is_power_of_three(n):
    if n==3:
        return True
    if n == 0 or n%3 != 0:
        return False
    return is_power_of_three(n//3);
```

## Submission at 2024-09-09 10:37:30


```
def count_of_char(s,char):
    if not s:
        return 0;
    if s[0] == char:
        return 1 + count_of_char(s[1:], char);
        return count_of_char(s[1:], char);

```

## Submission at 2024-09-09 10:37:58


```
def count_of_char(s,char):
    if not s:
        return 0;
    if s[0] == char:
        return 1 + count_of_char(s[1:], char);
    return count_of_char(s[1:], char);

```

## Submission at 2024-09-09 10:52:35


```
def is_power_of_three(n):
    if n<1:
        print("false")
        return;
    while n % 3==0:
        n //= 3
        return n==1;
        print("true")


is_power_of_three(int(input()))
```

## Submission at 2024-09-09 11:09:26


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def removeDuplicates(head):
    if not head:
        return head

        current = head
        prev = None
        seen_values = set()

        while current:
            if current.values in seen_values:
                prev.next = current.next
            else:
                seen_values.add(current.values)
                prev = current
                current = current.next
                return head
    

    # Code here


```

## Submission at 2024-10-07 10:16:23


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    stack = []
    while len(q):
        stack.append(q.popleft())
    while len(stack):
        q.append(stack.pop())
    return q

```

## Submission at 2024-10-07 10:16:48


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    stack = []
    while len(q):
        stack.append(q.popleft())
    while len(stack):
        q.append(stack.pop())
    return q

```

## Submission at 2024-10-07 10:27:02


```
# Write your code from scratch here
s = input()
numbers = s.split('+')
numbers.sort()
result = '+'.join(numbers)
print(result)
```

## Submission at 2024-10-07 10:54:12


```
# Write your code from scratch here
s = input()
words = s.split('.')
rev_words = [word[::-1] for word in words]
result = '.'.join(rev_words)
print(rev_words)
```

## Submission at 2024-10-07 11:04:56


```
# Write your code from scratch here
s = input()
words = s.split('.')
rev_words = [word[::-1] for word in words]
result = '.'.join(rev_words)
print(rev_words)
```

## Submission at 2024-10-07 11:14:43


```
# Write your code from scratch here
s = input()
words = s.split('.')
rev_words = [word[::-1] for word in words]
result = '.'.join(rev_words)
print(result)
```

## Submission at 2024-10-28 10:56:03


```
# write code from scratch
def least_k_occurrence(n, k):
    frequency = {}
    for num in n:
        frequency[num] = frequency.get(num, 0) + 1

    return [num for num, count in frequency.items() if count >= k]
print("4")
```

## Submission at 2024-10-28 11:25:28


```
# write code from scratch
def at_least_k_occ(n,k):
    frequency = {}
    for num in n:
        frequency[num] = frequency.get(num, 0) + 1
    return [num for num, count in frequency.items() if count >= k]

         




```

## Submission at 2024-10-28 11:26:24


```

class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        if root is None:
            return float('inf')
            
        leftMin = self.findMin(root.left)
        rightMin = self.findMin(root.right)

        return Min (root.data, leftMin, rightMin)
```

## Submission at 2024-11-25 10:08:54


```
n = 5
for i in range(1, n+1):
    print("*" * i)
```

## Submission at 2024-11-25 10:11:26


```
n = 5
for i in range(1, n+1):
    print("*" * i)
```

## Submission at 2024-11-25 10:17:39


```
n = int(input())
for i in range(1, n+1):
    print("*" * i)
```

## Submission at 2024-11-25 10:51:26


```
def arithmetic_progression(arr):
    arr = int(input[])
    if len(arr) < 2:
        return True
    common_diff = arr[1] - arr[0]
    for i in range (2, len(arr)):
        if arr[i] - arr[i-1] != common_diff:
            return False
    return True
```

## Submission at 2024-11-25 10:51:29


```
def arithmetic_progression(arr):
    arr = int(input[])
    if len(arr) < 2:
        return True
    common_diff = arr[1] - arr[0]
    for i in range (2, len(arr)):
        if arr[i] - arr[i-1] != common_diff:
            return False
    return True
```

## Submission at 2024-11-25 10:51:29


```
def arithmetic_progression(arr):
    arr = int(input[])
    if len(arr) < 2:
        return True
    common_diff = arr[1] - arr[0]
    for i in range (2, len(arr)):
        if arr[i] - arr[i-1] != common_diff:
            return False
    return True
```

## Submission at 2024-11-25 11:04:15


```
def frequency():
    count_a = 0
    count_b = 0
    for char in frequency:
        if char == 'a':
            count_a += 1
        elif char == 'b':
            count_b += count_a
        return count_b
```

## Submission at 2024-11-25 11:31:11


```
class Node:
    def _init_ (self,key):
        self.left = None
        self.right = None
        self.val = key

    def BST (root, left, right):
        if root is None:
            return True
        if root.val <= left or root.val >= right:
            return False
    return (BST[n](root.left, left, root.val) and BST[n](root.right, root.val, right))

    def BST(root):
    return (BST[n](root, float ("-inf"), float("inf")))
    
    root = Node (3)
    root.left = Node(2)
    root.right = Node(4)
    root.left = Node(5)

    if BST(root):
        print("YES")
    else:
        print("NO")
```

