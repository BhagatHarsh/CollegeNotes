## Submission at 2024-09-02 11:18:00


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

if __name__ == "__main__":
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)


    result_list = traverse_linked_list(head)
    print(*result_list) 

```

## Submission at 2024-09-09 10:03:40


```
# write code from scratch


def poweroffour(n):
   
    if n==1:
        return True
    else:
        return False

    if n<1 and n%4:
         return False
    else:
        return poweroffour(n/4)

n= int(input())
result = poweroffour(n)
if result == True:
    print('true')
else:
    print('False')
```

## Submission at 2024-09-09 10:22:45


```
'''  Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        temp1= num1
        temp2 = num2
        n1= []
        n2= []
        result= []
        while temp1 is None:
            n1.append(temp1.data)
            temp1 = temp1.next
        while temp2 is None:
            n2.append(temp2.data)
            temp2 = temp2.next


```

## Submission at 2024-09-09 10:35:56


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def removeDuplicates(head):
    current = head
    current.data = next
    current.next


```

## Submission at 2024-09-09 11:00:47


```
# write code from scratch
n = int(input())
n2 = input().split(' ')
n3 = []
for i in n:
    n2.append([int(i)])
len1 = len(n3)
result= []
for i in range(0, len1 - 1):
    result.append(n3[i] + n3[i +1])

len2 = len(result)
for i in range(0, len2):
    for j in result:
        if result[i]>j:
            count=1

print(count + 1)
```

## Submission at 2024-09-09 11:13:20


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
      result1 = []
      result2 = []
      arr1 = num1
      arr2 = num2
      
      while arr1:
        result1.append(result1.data)
        result1.data = next
      while arr2:
        result2.append(result2.data)
        result2.data = next

            
```

## Submission at 2024-10-07 10:08:10


```
# Write code from scratch
def main():
    for n in main:
        n = num
        num = int(2932)

```

## Submission at 2024-10-07 10:26:08


```
# Write code from scratch
def main():
    for n in main:
        n = num
        num = int[2932]
    return

new1 =[]
new2 =[]
split = (new1(num[:2]), new2(num[2:]))
print(split)

```

## Submission at 2024-11-25 10:05:51


```
# Write Python Code from scratch

n = 3
n1 = "Tony"
n2 = "Steve"
n3 = "Banner"

print("Hello", n1,"!"\d 
      "Hello", n2, "!"\d 
      "Hello", n3, "!"\d )      
```

## Submission at 2024-11-25 10:15:18


```
# Write Python Code from scratch
n = 3
n1 = "Tony"
n2 = "Steve"
n3 = "Banner"

print("Hello", n1,"!"
      \n"Hello", n2, "!"
      \n"Hello", n3, "!") 
```

