## Submission at 2024-08-12 09:42:48


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<2:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)
    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-09-02 10:54:59


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
    if k==1:
        return head.next

    i = 1 
    while temp.next != None:
        if i+1 == k:
            temp.next = temp.next.next
            return head
        
        temp=temp.next
        i+=1
```

## Submission at 2024-09-02 11:00:19


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
    if k==1:
        head = head.next
        return head

    i = 1 
    while temp.next != None:
        if i+1 == k:
            temp.next = temp.next.next
            return head
        temp=temp.next
        i = i+1
```

## Submission at 2024-09-02 11:04:10


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp = head
    # Your code here
    while temp.next != None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:08:03


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp = head
    # Your code here
    while temp.next != None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:10:31


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
    if k==1:
        head = head.next
        return head

    i = 1 
    while temp.next != None:
        if i+1 == k:
            temp.next = temp.next.next
            return head
        temp=temp.next
        i = i+1
    return head

```

## Submission at 2024-09-02 11:11:39


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp = head
    # Your code here
    while temp.next != None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:13:25


```
'''
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
'''

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while temp.next != None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:13:59


```
'''
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
'''

def traverse_linked_list(head):
    result = []
    # Your code here
    temp = head
    while temp != None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-02 11:26:36


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp = head
    count = 1

    while temp!=None:
        if count==k:
            return temp.val
        temp = temp.next
        count +=1

    return -1        


```

## Submission at 2024-09-02 11:27:33


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp = head
    count = 1

    while temp!=None:
        if count==k:
            return temp.val
        temp = temp.next
        count +=1

    return -1        


```

## Submission at 2024-09-03 08:14:55


```
# Write code from scratch
def maximal_array(l1,l2):
    result_list= []
    for i in range(len(l1)):
        if int(l1[i])<int(l2[i]):
            result_list.append(int(l2[i]))
        else:
            result_list.append(int(l1[i]))
    return result_list

n=int(input())
a = input().split()
b = input().split()
c = maximal_array(a,b)
for i in c:
    print(i,end=" ")
```

## Submission at 2024-09-04 11:10:32


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
    while curr !=None:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
    return prev

        




```

## Submission at 2024-09-04 11:28:40


```

def diagonal_traversal(matrix):
    # Your code here
    result = []
    for start_row in range(len(matrix)):
        i, j = start_row, 0
        diagonal = []
        while i >= 0 and j < len(matrix):
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    for start_col in range(1, len(matrix)):
        i, j = len(matrix) - 1, start_col
        diagonal = []
        while i >= 0 and j < len(matrix):
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    return result

```

## Submission at 2024-09-04 11:39:56


```

def diagonal_traversal(matrix):
    # Your code here
    m = len(matrix)
    n = len(matrix[0])
    result = []
    for start_row in range(m):
        i, j = start_row, 0
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    # Traverse diagonals starting from the first row (excluding the first element)
    for start_col in range(1, n):
        i, j = m - 1, start_col
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    return result

```

## Submission at 2024-09-04 12:06:14


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    answer = False
    for i in range(0,32):
            if 2** i == n:
                answer = True
    return answer
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-04 12:07:23


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    answer = False
    for i in range(0,32):
            if 2** i == n:
                return True
            return False

    return n
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-04 12:10:52


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return 0
    
    log_val = math.log2(n)
    
    # Check if the logarithm value is an integer
    if log_val.is_integer():
        return 1
    else:
        return 0
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-04 12:11:44


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return 0
    
    log_val = math.log2(n)
    
    # Check if the logarithm value is an integer
    if log_val.is_integer():
        return 1
    else:
        return 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-04 12:12:16


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    
    log_val = math.log2(n)
    
    # Check if the logarithm value is an integer
    if log_val.is_integer():
        return True
    else:
        return False

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-04 12:12:37


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    
    log_val = math.log2(n)
    
    # Check if the logarithm value is an integer
    if log_val.is_integer():
        return True
    else:
        return False

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-04 12:16:05


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    
    # Check if log2(n) is an integer
    return math.log2(n).is_integer()

    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-04 12:27:03


```
def subsets(nums):
    # Wrtie logic here
    result = []
    n = len(nums)
    
    # Iterate over all possible combinations (2^n combinations)
    for i in range(2**n):
        subset = []
        for j in range(n):
            # Check if j-th bit in i is set
            if i & (1 << j):
                subset.append(nums[j])
        result.append(subset)
    
    return result


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

## Submission at 2024-09-04 12:29:27


```
def subsets(nums):
    # Wrtie logic here
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

## Submission at 2024-09-09 04:26:57


```
import itertools
def subsets(nums):
    # Wrtie logic here
    result = []
    for r in range(len(nums) + 1):
        for combination in itertools.combinations(nums, r):
            result.append(list(combination))
    return result
    

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

## Submission at 2024-09-09 05:07:57


```
import itertools 
def combine(n, k):
    # Write logic here
    assert k <= n
    if k ==1 :
        return [[i] for i in range(1,n+1)]
    else:
        x = list(itertools.combinations((1,n+1),k))
        for i in range(len(x)):
            x[i] = list(x[i])
            return x
        
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

## Submission at 2024-09-09 05:11:16


```
import itertools 
def combine(n, k):
    # Write logic here
    combinations = list(itertools.combinations(range(1, n + 1), k))
    
    # Convert tuples into lists as required
    return [list(comb) for comb in combinations]
        
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

## Submission at 2024-09-09 05:18:46


```
def find_numbers_with_even_digits(nums):
    count = 0
    
    # Loop through each number in the array
    for num in nums:
        # Convert number to string and check if the number of digits is even
        if len(str(num)) % 2 == 0:
            count += 1
    
    return count

def main():
    # Input length of the array
    n = int(input())
    
    # Input space-separated array elements
    nums = list(map(int, input().split()))
    
    # Find the count of numbers with an even number of digits
    result = find_numbers_with_even_digits(nums)
    
    # Output the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 09:48:24


```
# write code from scratch

def poweroffour(n):

    if n==1:
        return True
    if n<1 and n % 4 !=0:
        return False

    return poweroffour(n//4)

n = int(input())
result = poweroffour(n)
```

## Submission at 2024-09-09 09:57:07


```
# write code from scratch
def poweroffour(n):
    if n ==1 :
        return True
    if n<1 and n%4!=0:
        return False
    
    return poweroffour(n//4)



n = int(input())
result = poweroffour(n)
if result == True:
    print('true')
else:
    print('false')
```

## Submission at 2024-09-09 09:57:49


```
# write code from scratch
def poweroffour(n):
    if n ==1 :
        return True
    if n<1 and n%4!=0:
        return False
    else:
        return poweroffour(n//4)



n = int(input())
result = poweroffour(n)
if result == True:
    print('true')
else:
    print('false')
```

## Submission at 2024-09-09 09:58:45


```
# write code from scratch
def poweroffour(n):
    if n ==1 :
        return True
    if n<1 or n%4!=0:
        return False
    else:
        return poweroffour(n//4)



n = int(input())
result = poweroffour(n)
if result == True:
    print('true')
else:
    print('false')
```

## Submission at 2024-09-09 09:59:27


```
# write code from scratch
def poweroffour(n):
    if n ==1 :
        return True
    if n<1 or n%4!=0:
        return False
    else:
        return poweroffour(n//4)



n = int(input())
result = poweroffour(n)
print(result)
```

## Submission at 2024-09-09 10:00:06


```
# write code from scratch
def poweroffour(n):
    if n ==1 :
        return True
    if n<1 or n%4!=0:
        return False
    else:
        return poweroffour(n//4)



n = int(input())
result = poweroffour(n)
print(result)
```

## Submission at 2024-09-09 10:03:00


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
    while temp.next != None:
        if temp.data == temp.next.data:
            temp.next = temp.next.next
        else:
            temp = temp.next
    return head
```

## Submission at 2024-09-09 10:22:04


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
        # return head of sum list
        temp1 = num1
        temp2 = num2
        n1 = []
        n2 = []
        result = []
        while temp1 != None:
            n1.append(temp1.data)
            temp1 = temp1.next
        while temp2 != None:
            n2.append(temp2.data)
            temp2 = temp2.next

        n1
        



        

```

## Submission at 2024-09-09 11:09:22


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
        # return head of sum list
        temp1 = num1
        temp2 = num2
        n1 = []
        n2 = []
        result = []
        while temp1 != None:
            n1.append(temp1.data)
            temp1 = temp1.next
        while temp2 != None:
            n2.append(temp2.data)
            temp2 = temp2.next
        n1 = n1[::-1]
        n2 = n2[::-1]
        if len(n1) > len(n2):
            for i in range(len(n1)-1):
                n2.append(0*i)
        else:
            for i in range(len(n2)-1):
                n1.append(0*i)

        for i in range(len(n1)):
            result.append(n1[i]+n2[i])
            
        result = result[::-1]

        
```

## Submission at 2024-09-09 11:13:58


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
        # return head of sum list
        temp1 = num1
        temp2 = num2
        n1 = []
        n2 = []
        result = []
        while temp1 != None:
            n1.append(temp1.data)
            temp1 = temp1.next
        while temp2 != None:
            n2.append(temp2.data)
            temp2 = temp2.next
        n1 = n1[::-1]
        n2 = n2[::-1]
        if len(n1) > len(n2):
            for i in range(len(n1)-1):
                n2.append(0*i)
        else:
            for i in range(len(n2)-1):
                n1.append(0*i)

        for i in range(len(n1)):
            result.append(n1[i]+n2[i])
            
        result = result[::-1]

        dummy = num1(0)
        curr = dummy 
        
            
```

## Submission at 2024-10-07 09:50:42


```
# Write code from scratch
def minsum(num):
    digit = [int(digit) for digit in str(num)]
    print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[1]*10 + digit[3]

    return num1+num2

minsum(2932)
```

## Submission at 2024-10-07 09:56:02


```
# Write code from scratch
def minsum(num):
    digit = [int(digit) for digit in str(num)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    return (num1+num2)
    

minsum(2932)
```

## Submission at 2024-10-07 09:56:29


```
# Write code from scratch
def minsum(num):
    digit = [int(digit) for digit in str(num)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    return (num1+num2)
    
minsum(2932)

```

## Submission at 2024-10-07 09:57:19


```
# Write code from scratch
def minsum(num):
    digit = [int(digit) for digit in str(num)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    return num1+num2
    
result=minsum(2932)

```

## Submission at 2024-10-07 09:59:15


```
# Write code from scratch
def minsum():
    s= 2932
    digit = [int(digit) for digit in str(s)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    return num1+num2
```

## Submission at 2024-10-07 10:03:12


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    return num1+num2
```

## Submission at 2024-10-07 10:05:22


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(type(num1+num2))
    return num1+num2

minsum(2932)
```

## Submission at 2024-10-07 10:38:17


```
# Write Python Code from scratch
n=5
prices = [10,1,1,6,3]
answer = []
def disc(prices):
    for i in range(n-1):
        # print(prices[i])
        j=i+1
        # print(prices[j])
        if j>i and prices[j]<prices[i]:
            prices[i]=prices[i]-prices[j]
        else:
            prices[i]=prices[i]
        if j==n:
            prices.append(prices[n])
        print(prices[i])

        


disc(prices)
```

## Submission at 2024-10-07 10:49:57


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(num1+num2)
    return num1+num2

minsum(2932)

```

## Submission at 2024-10-07 10:50:21


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(num1+num2)
    return num1+num2
minsum(2932)

```

## Submission at 2024-10-07 10:51:57


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(num1+num2)
    return num1+num2
n = input()
minsum(n)

```

## Submission at 2024-10-07 10:52:22


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(num1+num2)
    return num1+num2
n = input()
minsum(n)
```

## Submission at 2024-10-07 10:52:55


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(num1+num2)
    return num1+num2
    
n = input()
minsum(n)
```

## Submission at 2024-10-07 10:53:24


```
# Write code from scratch
def minsum(n):
    digit = [int(digit) for digit in str(n)]
    # print(digit)
    num1 = digit[0]*10 + digit[2]
    num2 = digit[3]*10 + digit[1]
    print(num1+num2)
    return num1+num2
    
n = input()
minsum(n)

```

## Submission at 2024-10-07 10:55:20


```
# Write Python Code from scratch
n=int(input())
prices = n*[0]
print(prices)
answer = []
# def disc(prices):
#     for i in range(n-1):
#         # print(prices[i])
#         j=i+1
#         # print(prices[j])
#         if j>i and prices[j]<prices[i]:
#             prices[i]=prices[i]-prices[j]
#         else:
#             prices[i]=prices[i]
#         if j==n:
#             prices.append(prices[n])
#         print(prices[i])

        


# disc(prices)
```

## Submission at 2024-10-07 11:06:48


```
# Write Python Code from scratch
n=int(input())
prices = [10,1,1,6,3]

# print(prices)
answer = n*[-1]

def disc(prices):
    j = 1
    for i in range(n):
        # print(prices[i])
        # print(prices[j])
        if j>i and prices[j]<prices[i]:
            answer[i]=prices[i]-prices[j]
            j+=1
        else:
            answer[i]=prices[i]
    return answer

        

    
disc(prices)
```

## Submission at 2024-10-07 11:07:34


```
# Write Python Code from scratch
n=int(input())
prices = [10,1,1,6,3]

# print(prices)
answer = n*[-1]

def disc(prices):
    j = 1
    for i in range(n):
        # print(prices[i])
        # print(prices[j])
        if j>i and prices[j]<prices[i]:
            answer[i]=prices[i]-prices[j]
            j+=1
        else:
            answer[i]=prices[i]
    return answer 
 
disc(prices)

```

## Submission at 2024-10-07 11:08:19


```
# Write Python Code from scratch
n=int(input())
prices = [10,1,1,6,3]

# print(prices)
answer = n*[-1]

def disc(prices):
    j = 1
    for i in range(n):
        if j>i and prices[j]<prices[i]:
            answer[i]=prices[i]-prices[j]
            j+=1
        else:
            answer[i]=prices[i]
    return answer 
 
disc(prices)

```

## Submission at 2024-10-07 11:08:58


```
n=int(input())
prices = [10,1,1,6,3]

# print(prices)
answer = n*[-1]

def disc(prices):
    j = 1
    for i in range(n):
        if j>i and prices[j]<prices[i]:
            answer[i]=prices[i]-prices[j]
            j+=1
        else:
            answer[i]=prices[i]
    return answer 
 
disc(prices)

```

## Submission at 2024-10-28 10:09:50


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
def maxDepth(root):
    # code here
    depth = 0
    result = []
    q = []
    q.append(root)
    while q:
      l = len(q)
      val = 0
      for i in range(l):
        r = q.pop(0)
        val = r.data
        if r.left:
          q.append(r.left)
        if r.right:
          q.append(r.right)
      depth +=1
      result.append(val)
    return len(result)

# n = input()
# n = n.split()
# print(n)
# for i in range(len(n)):
#   if n[i]=='N':
#     n[i]=0
#   n[i]=int(n[i])

```

## Submission at 2024-10-28 10:10:22


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
def maxDepth(root):
    # code here
    depth = 0
    result = []
    q = []
    q.append(root)
    while q:
      l = len(q)
      val = 0
      for i in range(l):
        r = q.pop(0)
        val = r.data
        if r.left:
          q.append(r.left)
        if r.right:
          q.append(r.right)
      depth +=1
      result.append(val)
    return len(result)

# n = input()
# n = n.split()
# print(n)
# for i in range(len(n)):
#   if n[i]=='N':
#     n[i]=0
#   n[i]=int(n[i])

```

## Submission at 2024-10-28 10:20:22


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
            return 0
        result = []
        def inorder(root):
            if not root:
                return 0
            inorder(root.left)
            result.append(root.data)
            inorder(root.right)

        inorder(root)
        ans = max(result)
        return ans
```

## Submission at 2024-10-28 10:35:39


```
# Write code from scratch
n = int(input())
str1 = input()
str1 = str1.split()

for i in range(len(str1)):
    str1[i] = int(str1[i])

# dict1 = {}
# for i in range(len(str1)):
#     if str1[i] not in dict1:
#         dict1[i] = 1
#     else:
#         dict1[i] += 1

# print(dict1)

diff = set(str1) 
print(len(diff))
```

## Submission at 2024-10-28 10:41:51


```
# Write code from scratch
n = int(input())
str1 = input()
str1 = str1.split()

for i in range(len(str1)):
    str1[i] = int(str1[i])

# dict1 = {}
# for i in range(len(str1)):
#     if str1[i] not in dict1:
#         dict1[i] = 1
#     else:
#         dict1[i] += 1

# print(dict1)

diff = list(set(str1))
a = len(diff)
b = len(str1)//2
if a == b:
    print(a)
else:
    print(len(diff[:b])-1)

```

## Submission at 2024-10-28 10:47:52


```
# Write code from scratch
n = int(input())
str1 = input()
str1 = str1.split()

for i in range(len(str1)):
    str1[i] = int(str1[i])

dict1 = {}
for i in range(len(str1)):
    if str1[i] not in dict1:
        dict1[str1[i]] = 1
    else:
        dict1[str1[i]] += 1

print(dict1)

keys = list(dict1.keys())
idx = len(str1)//2
k1 = keys[:idx]
print(k1)


```

## Submission at 2024-10-28 10:48:40


```
# Write code from scratch
n = int(input())
str1 = input()
str1 = str1.split()

for i in range(len(str1)):
    str1[i] = int(str1[i])

dict1 = {}
for i in range(len(str1)):
    if str1[i] not in dict1:
        dict1[str1[i]] = 1
    else:
        dict1[str1[i]] += 1

# print(dict1)

keys = list(dict1.keys())
idx = len(str1)//2
k1 = keys[:idx]
print(len(k1))


```

## Submission at 2024-10-28 10:55:40


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
        if num1 is None or num2 is None:
            return 0
        num1_list = []
        num2_list = []
        while num1!=None:
            num1_list.append(num1.data)
        while num2!=None:
            num2_list.append(num2.data)

        print(num1_list)
        print(num2_list)
        # return head of sum list


```

## Submission at 2024-10-28 11:04:48


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
        sum_val = []
        if num1 is None or num2 is None:
            return 0
        num1_list = []
        num2_list = []
        while num1!=None:
            num1_list.append(num1.data)
            num1 = num1.next
        while num2!=None:
            num2_list.append(num2.data)
            num2 = num2.next

        reve_num1 = num1_list[::-1]
        reve_num2 = num2_list[::-1]

        if len(reve_num1) != len(reve_num2):
            if len(reve_num1)>len(reve_num2):
                reve_num2.append(0)
            else:
                reve_num1.append(0)
        
        for i in range(len(reve_num1)):
            sum_val.append(reve_num1[i]+reve_num2[i])

        sum_val = sum_val[::-1]
        for i in sum_val:
            print(i,end=" ")
        # return head of sum list


```

## Submission at 2024-10-28 11:21:17


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
        sum_val = []
        if num1 is None or num2 is None:
            return 0
        num1_list = []
        num2_list = []
        while num1!=None:
            num1_list.append(num1.data)
            num1 = num1.next
        while num2!=None:
            num2_list.append(num2.data)
            num2 = num2.next

        reve_num1 = num1_list[::-1]
        reve_num2 = num2_list[::-1]

        if len(reve_num1) != len(reve_num2):
            if len(reve_num1)>len(reve_num2):
                reve_num2.append(0)
            else:
                reve_num1.append(0)
        
        for i in range(len(reve_num1)):
            sum_val.append(reve_num1[i]+reve_num2[i])

        sum_val = sum_val[::-1]

        dummy = Node(0)
        curr = dummy
        
        for i in range(len(sum_val)):
            curr = curr.next
            curr = sum_val[i]

        # print(dummy)

        # for i in sum_val:
        #     print(i,end=" ")
        # return head of sum list

```

## Submission at 2024-10-28 11:29:12


```
# Write your code from scratch here
str1 = input()

str1 = str1.split()
print(str1)

print("cbajkl")
```

## Submission at 2024-10-28 11:29:43


```
# Write your code from scratch here
str1 = input()

str1 = str1.split()
print(str1)


```

## Submission at 2024-11-25 10:13:36


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
odd = 0
even = 0
for i in range(len(arr)):
    if (arr[i])%2==0:
        even +=1
    else:
        odd +=1

print(odd," ",even)

        
```

## Submission at 2024-11-25 10:32:22


```
# Write Python code from scratch
s = input()
s1 = s[::-1]
u1 = list(set(s1))
result = []
for i in range(len(s)):
    if s1[i] in u1:
        # print(s1[i])
        pass
    else:
        result.append(s1[i])

print(result)
```

## Submission at 2024-11-25 11:17:46


```
# Write Python code from scratch
n = int(input())
for i in range(1,n+1):
    for j in range(n-i+1):
        print("*",end="")
    print("")
```

## Submission at 2024-11-25 11:20:16


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
odd = 0
even = 0
for i in range(len(arr)):
    if (arr[i])%2==0:
        even +=1
    else:
        odd +=1

print(odd,"",even)
```

## Submission at 2024-11-25 11:24:07


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
odd = 0
even = 0
for i in range(len(arr)):
    if (arr[i])%2==0:
        even +=1
    else:
        odd +=1


print(str(odd),"",str(even))
```

## Submission at 2024-11-25 11:25:03


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
odd = 0
even = 0
for i in range(len(arr)):
    if (arr[i])%2==0:
        even +=1
    else:
        odd +=1


print(str(odd)," ",str(even))
```

## Submission at 2024-11-25 11:27:12


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
odd = 0
even = 0
for i in range(len(arr)):
    if (arr[i])%2==0:
        even +=1
    else:
        odd +=1


print(str(odd),"",str(even))
```

## Submission at 2024-11-25 11:29:48


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
odd = 0
even = 0
for i in range(len(arr)):
    if (arr[i])%2==0:
        even +=1
    else:
        odd +=1


print(str(odd),str(even))
```

## Submission at 2024-11-25 11:41:40


```
# Write Python Code from scratch
n= int(input())
for i in range(n):
    user = input()
    print("Hello",user,"!")
# for i in range(n):
#     print("Hello",users,"!")
```

## Submission at 2024-11-25 11:43:49


```
# Write Python Code from scratch
n= int(input())
for i in range(n):
    user = input()
    print("Hello",user+"!")
# for i in range(n):
#     print("Hello",users,"!")
```

