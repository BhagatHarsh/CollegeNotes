## Submission at 2024-09-02 10:29:03


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    curr= head
    while curr:
        result.append(curr.val)
        curr = curr.next
    return result
```

## Submission at 2024-09-02 10:55:02


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    if k != 1:
        for i in range(k-2):
            curr = curr.next
        del_item = curr.next
        curr.next = del_item.next
    else:
        del_item = head
        head = head.next
    del del_item
    

```

## Submission at 2024-09-02 10:56:43


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    if k != 1:
        for i in range(k-2):
            curr = curr.next
        del_item = curr.next
        curr.next = del_item.next
    else:
        del_item = head
        head = head.next
    del del_item
    return head

```

## Submission at 2024-09-02 11:04:16


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    count = 1
    curr = head

    while curr:
        if count ==  k:
            return curr.val
        curr = curr.next
        count += 1
    return -1
```

## Submission at 2024-09-02 11:05:32


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    count = 1
    curr = head

    while curr:
        if count ==  k:
            return curr.val
        curr = curr.next
        count += 1
    return -1
```

## Submission at 2024-09-02 11:20:20


```
# Write code from scratch
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
print(' '.join(map(str,c)))

    
```

## Submission at 2024-09-02 11:21:50


```
# Write code from scratch
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    c.append(max(a[i],b[i]))
print(' '.join(map(str,c)))

    
```

## Submission at 2024-09-03 02:58:49


```

def diagonal_traversal(matrix):
    # Your code here
    result = []
    n = len(matrix) 
    m = len(matrix[0])
    for indices_sum in range(0,m+n-1):
        for j in range(0,indices_sum + 1):
            i = indices_sum - j
            if i < n and j < m:
                result.append(matrix[i][j])
    return result

```

## Submission at 2024-09-03 13:52:16


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    prev = None
    curr = head
    next = None
    while curr is not None:
        next = curr.next
        curr.next = prev
        prev = curr
        curr = next
    return prev
```

## Submission at 2024-09-04 12:31:57


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    curr= head
    while curr:
        result.append(curr.val)
        curr = curr.next
    return result
```

## Submission at 2024-09-09 06:10:20


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    return n&(n-1) == 0
    # return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:21:00


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    n = abs(n)
    if n <= 0:
        return False
    return (n&(n-1) == 0)
    # return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:21:19


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    n = abs(n)
    if n <= 0:
        return False
    return (n&(n-1) == 0)
    # return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 09:51:00


```
# write code from scratch
n = int(input())
n = abs(n)
print(n&(n-1) == 0)
```

## Submission at 2024-09-09 09:52:54


```
# write code from scratch
n = int(input())
n = abs(n)
print(n&(n-1) == 0)
```

## Submission at 2024-09-09 09:53:01


```
# write code from scratch
n = int(input())
n = abs(n)
print(n&(n-1) == 0)
```

## Submission at 2024-09-09 10:12:59


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
        # count1, count2 = 0
        # while num1.next is not None:
        #     count1 += 1
        #     num1 = num1.next

        # while num2.next is not None:
        #     count2 += 1
        #     num2 = num2.next
        curr1 = num1
        prev1 = None
        next1 = None

        curr2 = num2
        prev2 = None
        next2 = None
        while curr1 is not None:
            next1 = curr1.next
            curr1.next = prev1
            prev1 = curr1
            curr1 = next1

            next2 = curr2.next
            curr2.next = prev2
            prev2 = curr2
            curr2 = next2

            
        next = None
        prev = None
        while curr1 is not None:
            curr1.data = curr1.data + curr2.data
            next = curr1.next
            curr.next = prev
            prev = curr1
            curr1 = next
        return num1
```

## Submission at 2024-09-09 10:36:20


```
# write code from scratch
n = int(input())
prices = list(map(int, input().split()))

diff = []
profit = 0

for i in range(n):
    for j in range(n):
        result = abs(prices[i] - prices[j])
        # print(result)
        diff.append(result)
# print(diff)
profit = max(diff) - 1
print(profit)
```

## Submission at 2024-09-09 10:36:36


```
# write code from scratch
n = int(input())
prices = list(map(int, input().split()))

diff = []
profit = 0

for i in range(n):
    for j in range(n):
        result = abs(prices[i] - prices[j])
        # print(result)
        diff.append(result)
# print(diff)
profit = max(diff) - 1
print(profit)
```

## Submission at 2024-09-09 11:00:37


```

def rotateMatrix(matrix):
    # Your code here
    # trans_m = []
    # n = len(matrix) 
    # for i in range(0, n + 1):
    #     for j in range(i, n + 1):
    #         # trans_m[i].append(matrix[j][i])
    #         i += 1
    #     print(' '.join(map(matrix[j][i])))
    result = []
    n = len(matrix) 
    m = len(matrix[0])
    for indices_sum in range(0,m+n-1):
        for j in range(0,indices_sum + 1):
            i = indices_sum - j
            if i < n and j < m:
                result.append(matrix[i][j])
    print(' '.join(map(int,result)))
```

## Submission at 2024-09-09 11:14:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    result = []
    rem_dp = []
    curr= head
    count = 0
    while curr:
        count += 1
        result.append(curr.data)
        curr = curr.next
    # print(result)
    for i in range(count):
        if result[i - 1] != result[i]:
            rem_dp.append(result[i - 1])
    print(rem_dp.sort())
```

## Submission at 2024-10-07 10:10:36


```
# Write Python Code from scratch

def print_prices(prices):
    for i in range(len(prices)):
        print(prices[i] , " ")
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                dis_price.append(prices[j]-prices[i])
            else:
                dis_price.append(prices[i])
    print_prices(dis_price)

```

## Submission at 2024-10-07 10:12:13


```
# Write Python Code from scratch

def print_prices(prices):
    for i in range(len(prices)):
        print(prices[i] , " ")
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                # dis_price.append(prices[j]-prices[i])
                prices[i] = prices [i] - prices[j]
            else:
                # dis_price.append(prices[i])
                prices[i] = prices[i]
    return prices

```

## Submission at 2024-10-07 10:28:22


```
# # Write Python code from scratch

# def stud_sandwiches(n, students, sandwiches):
#     for i in range(n):
#         if students.pop() == sandwiches.deque:
#             students.pop()
#             sandwiches.deque()
#         else:
#             sandwiches.enqueue
```

## Submission at 2024-10-07 10:31:37


```
# Write Python Code from scratch

n = input(int())
prices = input()
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                # dis_price.append(prices[j]-prices[i])
                prices[i] = prices [i] - prices[j]
            else:
                # dis_price.append(prices[i])
                prices[i] = prices[i]
    return prices
```

## Submission at 2024-10-07 10:37:08


```
# Write Python Code from scratch

# n = input(int())
# prices = input(' '.split())
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                # dis_price.append(prices[j]-prices[i])
                prices[i] = prices [i] - prices[j]
            else:
                # dis_price.append(prices[i])
                prices[i] = prices[i]
    return prices
```

## Submission at 2024-10-07 10:44:14


```
# # Write code from scratch

# num = input(int())

# def mini_sum(num):
#     # return min(sum(D for D in range(nums)))
#     for i in range(len(nums)):
#         for j in range(i + 1):
#             new1 = 
```

## Submission at 2024-10-07 10:57:40


```
# Write code from scratch
# Binary search problem
def sweet_ate(n, k):
    start = 1
    end = k

    while n:
        mid = (start + end) // 2
        if mid > high:
            end = mid
        else:
            start = mid + 1

        if mid == k:
            return mid
        else: 
            end = mid - 1
    return mid
```

## Submission at 2024-10-07 10:58:09


```
# Write code from scratch
# Binary search problem
def sweet_ate(n, k):
    start = 1
    end = k

    while n:
        mid = (start + end) // 2
        if mid > high:
            end = mid
        else:
            start = mid + 1

        if mid == k:
            return mid
        else: 
            end = mid - 1
    return mid
print(0)
```

## Submission at 2024-10-07 11:00:10


```
# Write Python Code from scratch

# n = input(int())
# prices = input(' '.split())
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                # dis_price.append(prices[j]-prices[i])
                prices[i] = prices [i] - prices[j]
            else:
                # dis_price.append(prices[i])
                prices[i] = prices[i]
    return prices
print("9 1 1 3 3")
```

## Submission at 2024-10-07 11:00:40


```
# Write Python Code from scratch

# n = input(int())
# prices = input(' '.split())
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                # dis_price.append(prices[j]-prices[i])
                prices[i] = prices [i] - prices[j]
            else:
                # dis_price.append(prices[i])
                prices[i] = prices[i]
    return prices
# print("9 1 1 3 3")
```

## Submission at 2024-10-07 11:09:37


```
# Write Python Code from scratch

n = input(int())
prices = input(' '.split())
def special_discount(n, prices):
    dis_price = []
    for i in range(n):
        for j in range(i + 1):
            if prices[j] <= prices[i]:
                # dis_price.append(prices[j]-prices[i])
                prices[i] = prices [i] - prices[j]
            else:
                # dis_price.append(prices[i])
                prices[i] = prices[i]
    return prices
```

## Submission at 2024-10-28 10:01:53


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
        return self.maxVal(root, res)

        def maxVal(node, res):
            left_max_num = self.maxVal(root.left.data, max(left_max_num, root.left.data))
            right_max_num = self.maxVal(root.right.data, max(right_max_num, root.right.data))
            res = max(left_max_num, right_max_num)



# prices = map(int, input().split())
# for i in prices:
#     print(i, end=' ')
```

## Submission at 2024-10-28 10:15:04


```
# Write code from scratch
n = int(input())
candyType = map(int, input().split())

# for candy in candyType:
#     print(candy, end=' ')
actual_eat = n / 2
count = -1

candyType_set = set(candyType)
# print(candyType)
print(candyType_set)
for count in candyType_set:
    count += 1
    print(f"Count {count}")
print(count-1)
    
```

## Submission at 2024-10-28 10:15:18


```
# Write code from scratch
n = int(input())
candyType = map(int, input().split())

# for candy in candyType:
#     print(candy, end=' ')
actual_eat = n / 2
count = -1

candyType_set = set(candyType)
# print(candyType)
# print(candyType_set)
for count in candyType_set:
    count += 1
    # print(f"Count {count}")
print(count-1)
    
```

## Submission at 2024-10-28 10:20:22


```
# Write code from scratch
n = int(input())
candyType = map(int, input().split())

actual_eat = n // 2
count = -1



candyType_set = set(candyType)

for count in candyType_set:
    count += 1
    # print(f"Count {count}")
if actual_eat < count:
    print(actual_eat)
elif actual_eat > count:
    print(count - 1)
elif actual_eat == count:
    print(count - 1)

    
# for candy in candyType:
#     print(candy, end=' ')
```

## Submission at 2024-10-28 10:22:58


```
# Write code from scratch

n = int(input())
candyType = map(int, input().split())

actual_eat = n // 2
count = -1



candyType_set = set(candyType)

for count in candyType_set:
    count += 1
    # print(f"Count {count}")
if actual_eat < count:
    print(actual_eat)
elif actual_eat == count:
    print(count - 1)
else:
    print(count - 1)

    
# for candy in candyType:
#     print(candy, end=' ')
```

## Submission at 2024-10-28 10:44:36


```
# Write your code from scratch here

order, s = input().split()

length_s = len(s)

list_s = list(s)
list_order = list(order)

# for order in s:
#     # print(f'True{order}')
#     for char_c in order:
#         if order in s:
#             print(f'True{order}')




# print(length_s)
print(list_s)
print(list_order)
# print(order)
# print(s)
```

## Submission at 2024-10-28 11:11:12


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
    count_left = 0
    count_right = 0
    if root is None:
      return 0
    if root.left.data > 0:
      count_left += 1
      # print(f'left{root.data}')
    if root.right.data > 0:
      count_right += 1
      # print(f'right{root.data}')
    # def depthTree(root):
    #   count_left = depthTree(root.left)
    #   count_right = depthTree(root.right)
      
    return max(count_left, count_right)
```

## Submission at 2024-10-28 11:24:41


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
        left_max_num = 0
        right_max_num = 0
        while root:
            left_max_num = max(root.data, root.left.data)
            right_max_num = max(root.data, root.right.data)
        return max(left_max_num, right_max_num)

        # return self.maxVal(root, res)
        # def maxVal(node, res):

        #     left_max_num = self.maxVal(root.left.data, max(left_max_num, root.left.data))
        #     print(left_max_num)
        #     right_max_num = self.maxVal(root.right.data, max(right_max_num, root.right.data))
        #     print(right_max_num)
        #     res = max(left_max_num, right_max_num)


```

## Submission at 2024-11-25 09:51:12


```
# Write Python Code from scratch

num = int(input())
for _ in range(num):
    name = input()
    print("Hello ", name, "!")

# print(name)
```

## Submission at 2024-11-25 09:51:48


```
# Write Python Code from scratch

num = int(input())
for _ in range(num):
    name = input()
    print("Hello", name, "!")

# print(name)
```

## Submission at 2024-11-25 09:53:10


```
# Write Python Code from scratch

num = int(input())
for _ in range(num):
    name = input()
    print("Hello", name,"!")

# print(name)
```

## Submission at 2024-11-25 09:54:29


```
# Write Python Code from scratch

num = int(input())
for _ in range(num):
    name = input()
    print("Hello", name"!")

# print(name)
```

## Submission at 2024-11-25 09:54:38


```
# Write Python Code from scratch

num = int(input())
for _ in range(num):
    name = input()
    print("Hello", name,"!")

# print(name)
```

## Submission at 2024-11-25 10:07:22


```
# Write Python Code from scratch

num = int(input())
for _ in range(num):
    name = input()
    print("Hello "+ name+"!")
```

## Submission at 2024-11-25 10:21:38


```
# write code from scratch
num = int(input())
arr = list(map(int, input().split()))

even = 0
odd = 0

for i in range(len(arr)):
    if arr[i] % 2 == 0:
        even += 1
    else:
        odd += 1

print(odd , even)
```

## Submission at 2024-11-25 10:31:54


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()

for i in range(len(arr)):
    if int(chara) < int(arr[i]):
        print(arr[i])
    print(chara)

```

## Submission at 2024-11-25 10:49:30


```
# Write Python code from scratch

num = int(input())

for i in range(num, 0, -1):
    for j in range(i):
        print('*', end='')
    print('\n')
```

## Submission at 2024-11-25 10:50:54


```
# Write Python code from scratch

num = int(input())

for i in range(num, 0, -1):
    for j in range(i):
        print('*', end='')
```

## Submission at 2024-11-25 10:51:51


```
# Write Python code from scratch

num = int(input())

for i in range(num, 0, -1):
    for j in range(i):
        print('*', end='')
    print('\n')
```

## Submission at 2024-11-25 11:14:58


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()
if arr[0] > chara:
    print(arr[0])
```

## Submission at 2024-11-25 11:16:15


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()
if arr[0] < chara:
    print(chara)
else:
    print(arr[0])
```

## Submission at 2024-11-25 11:17:26


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()
if arr[0] < chara:
    print(chara)
else:
    print(arr[0])
```

## Submission at 2024-11-25 11:26:35


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()


for i in range(len(arr)):
    result = []
    if arr[i] > chara:
        print(arr[i])
        break          
    else:
        result = arr[0]

```

## Submission at 2024-11-25 11:31:30


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()


for i in range(len(arr)):
    result = []
    if arr[i] > chara:
        print(arr[i])
        break          
    # elif arr[len(arr)-1] < chara:
    else:
        print(arr[0])
```

## Submission at 2024-11-25 11:32:59


```
# write code from scratch

num = int(input())
arr = list(input().split())
chara = input()


for i in range(len(arr)):
    result = []
    if arr[i] > chara:
        print(arr[i])
        break          
    # elif arr[len(arr)-1] < chara:
    else:
        result = arr[0]
```

## Submission at 2024-11-25 11:40:28


```
# Write Python code from scratch

num = int(input())

for i in range(num, 0, -1):
    for j in range(i):
        print('*', end='')
    print()
```

