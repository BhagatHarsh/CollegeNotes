## Submission at 2024-09-02 10:16:44


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    for i in range(k-1):
        curr = curr.next
    to_del = curr.next
    curr.next = to_del.next
    del to_del
    return head



```

## Submission at 2024-09-02 10:20:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    for i in range(k-2):
        curr = curr.next
    to_del = curr.next
    curr.next = to_del.next
    del to_del
    return head

```

## Submission at 2024-09-02 10:28:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    if k!=1:
        for i in range(k-2):
            curr = curr.next
        to_del = curr.next
        curr.next = to_del.next
    else:
        to_del = head
        head = head.next
    del to_del
    return head

```

## Submission at 2024-09-02 10:38:58


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    curr = head
    while curr != None:
        result =  result + [curr.val]
        curr = curr.next
    return result

```

## Submission at 2024-09-02 10:53:23


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    cnt = 1
    curr = head
    while curr:
        if cnt == k:
            return curr.val
        curr = curr.next
        cnt = cnt + 1
    return -1 

```

## Submission at 2024-09-02 11:58:10


```
def diagonal_traversal(matrix):
    res = []
    n = len(matrix)
    m = len(matrix[0])
    for indsum in range(0,m+n-1):
        for j in range(0,indsum+1):
            i = indsum - j
            if i < n and j < m:
                res = res + [matrix[i][j]]
    return res
```

## Submission at 2024-09-02 12:00:48


```
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

result = []

for i in range(n):
    result = result + [a[i]+b[i]]

print(result)

```

## Submission at 2024-09-02 12:06:38


```
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

result = []

for i in range(n):
    result = result + [a[i]+b[i]]

print(' '.join(map(str, result)))print("".join(result))
```

## Submission at 2024-09-02 12:07:03


```
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

result = []

for i in range(n):
    result = result + [a[i]+b[i]]

print(' '.join(map(str, result)))
```

## Submission at 2024-09-02 12:10:15


```
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

result = []

for i in range(n):
    g = b[i]
    if a[i] > b[i]:
        g = a[i]
    result = result + [g]

print(' '.join(map(str, result)))
```

## Submission at 2024-09-02 12:22:06


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    curr = head
    prev = None
    while curr:
        next_ = curr.next
        curr.next = prev
        prev = curr
        curr = next_
    return prev

```

## Submission at 2024-09-09 09:50:41


```
n = input()

def pof(n):
    if n == 1:
        return True
    elif n == 2 or n ==3:
        return False
    if n%4 == 0:
        pof(n//4)
    else:
        return False
```

## Submission at 2024-09-09 09:52:23


```
n = input()

def pof(n):
    if n == 1:
        print('True')
        return True
    elif n == 2 or n ==3:
        print('False')
        return False
    if n%4 == 0:
        pof(n//4)
    else:
        print('False')
        return False

pof(n)
```

## Submission at 2024-09-09 09:59:43


```
n = int(input())

def pof(n):
    if n == 1:
        print('True')
        return True
    # elif n == 2 or n ==3:
    #     print('False')
    #     return False
    if n%4 == 0:
        pof(n//4)
    else:
        print('False')
        return False

pof(n)
```

## Submission at 2024-09-09 10:00:03


```
n = int(input())

def pof(n):
    if n == 1:
        print('True')
        return True
    # elif n == 2 or n ==3:
    #     print('False')
    #     return False
    if n%4 == 0:
        pof(n//4)
    else:
        print('False')
        return False

pof(n)
```

## Submission at 2024-09-09 10:26:36


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
        n1 = 0
        n2 = 0
        curr = num1
        while curr:
            n1 = 10 * n1 + curr.data
            curr = curr.next
        # print(n1)
        curr = num2
        while curr:
            n2 = 10 * n2 + curr.data
            curr = curr.next
        # print(n2)
        sum_ = n1 + n2
        
        dig = 0
        while sum_ // 10**dig != 0:
            dig = dig + 1;
        # print(dig)

        head = Node(0)
        curr = head

        for i in range(dig):
            curr.data = sum_ // 10**(dig-i-1)
            if i != dig-1:
                curr.next = Node(0)
            else:
                curr.next = None
            curr = curr.next
        return head
        # return head of sum list

```

## Submission at 2024-09-09 10:30:21


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
        n1 = 0
        n2 = 0
        curr = num1
        while curr:
            n1 = 10 * n1 + curr.data
            curr = curr.next
        # print(n1)
        curr = num2
        while curr:
            n2 = 10 * n2 + curr.data
            curr = curr.next
        # print(n2)
        sum_ = n1 + n2
        
        dig = 0
        while sum_ // 10**dig != 0:
            dig = dig + 1;
        # print(dig)

        head = Node(0)
        curr = head

        for i in range(dig):
            curr.data = sum_ // 10**(dig-i-1)
            sum_ = sum_ - curr.data * 10**(dig-i-1)
            if i != dig-1:
                curr.next = Node(0)
            else:
                curr.next = None
            curr = curr.next
        return head
        # return head of sum list

```

## Submission at 2024-09-09 10:40:15


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    res = node()
    curr = head
    prev = res
    prev.next = head
    while curr:
        if curr.data == prev.data:
            curr = curr.next
        else:
            prev.next = curr
            prev = curr
            curr = curr.next
    return head



```

## Submission at 2024-09-09 10:43:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    res = node()
    curr = head
    prev = res
    prev.next = head
    while curr:
        if curr.data == prev.data:
            prev.next = curr.next
            curr = curr.next
        else:
            prev.next = curr
            prev = curr
            curr = curr.next
    return head



```

## Submission at 2024-09-09 10:53:35


```
# write code from scratch
n = input()
prices = list(map(int, input().split(' ')))

start = 0
end = 0
value = 0

for i in range(len(prices)):
        for j in range(i,len(prices)):
            if (prices[j]-prices[i]) > value:
                start = prices[i]
                end = prices[j]
                value = end - start

print(value)
```

## Submission at 2024-10-07 10:34:26


```
n = int(input())

digs = []

for i in range(0,4):
    digs = digs + [int(n%10)]
    n = (n - n%10)/10

digscopy = digs.copy()
sortdigs = []

while(len(digscopy)!=0):
    # print(digscopy)
    temp = min(digscopy)
    sortdigs = sortdigs + [temp]
    cnt = 1
    tmp = []
    for i in range(len(digscopy)):
        if digscopy[i] != temp:
            tmp = tmp + [digscopy[i]]
        else:
            if cnt == 1:
                cnt = 0
            else:
                tmp = tmp + [digscopy[i]]
    digscopy = tmp

print(sortdigs)

new1 = sortdigs[0]*10 + sortdigs[2]
new2 = sortdigs[1]*10 + sortdigs[3]

print(abs(new1+new2))



```

## Submission at 2024-10-07 10:35:13


```
n = int(input())

digs = []

for i in range(0,4):
    digs = digs + [int(n%10)]
    n = (n - n%10)/10

digscopy = digs.copy()
sortdigs = []

while(len(digscopy)!=0):
    # print(digscopy)
    temp = min(digscopy)
    sortdigs = sortdigs + [temp]
    cnt = 1
    tmp = []
    for i in range(len(digscopy)):
        if digscopy[i] != temp:
            tmp = tmp + [digscopy[i]]
        else:
            if cnt == 1:
                cnt = 0
            else:
                tmp = tmp + [digscopy[i]]
    digscopy = tmp

# print(sortdigs)

new1 = sortdigs[0]*10 + sortdigs[2]
new2 = sortdigs[1]*10 + sortdigs[3]

print(abs(new1+new2))



```

## Submission at 2024-10-07 10:59:26


```
n_items = input()
stud_pref = list(map(int, input().split(" ")))
sand_stk = list(map(int, input().split(" ")))

# print(stud_pref)
# print(sand_stk)

while sand_stk[0] in stud_pref:
    if stud_pref[0] == sand_stk[0]:
        stud_pref.pop(0)
        sand_stk.pop(0)
    else:
        stud_pref = stud_pref + [stud_pref[0]]
        stud_pref.pop(0)
print(len(stud_pref))
```

## Submission at 2024-10-07 11:00:30


```
n_items = input()
stud_pref = list(map(int, input().split(" ")))
sand_stk = list(map(int, input().split(" ")))

# print(stud_pref)
# print(sand_stk)

while sand_stk[0] in stud_pref:
    if stud_pref[0] == sand_stk[0]:
        stud_pref.pop(0)
        sand_stk.pop(0)
    else:
        stud_pref = stud_pref + [stud_pref[0]]
        stud_pref.pop(0)
print(len(stud_pref))
```

## Submission at 2024-10-07 11:01:14


```
n_items = input()
stud_pref = list(map(int, input().split(" ")))
sand_stk = list(map(int, input().split(" ")))

# print(stud_pref)
# print(sand_stk)

while (sand_stk[0] in stud_pref) or len(sand_stk)==0:
    if stud_pref[0] == sand_stk[0]:
        stud_pref.pop(0)
        sand_stk.pop(0)
    else:
        stud_pref = stud_pref + [stud_pref[0]]
        stud_pref.pop(0)
print(len(stud_pref))
```

## Submission at 2024-10-07 11:03:26


```
n,k = map(int, input().split(" "))
print(n)
print(k)
```

## Submission at 2024-10-07 11:11:02


```
n,k = map(int, input().split(" "))

for i in range(0,n+1):
    n_adds = i
    n_eats = n-i

    candyin = int(n_adds*(n_adds+1)/2) - n_eats

    if candyin == k:
        print(n_eats)
        break
```

## Submission at 2024-10-07 11:12:01


```
n,k = map(int, input().split(" "))

for i in range(0,n+1):
    n_adds = i
    n_eats = n-i

    candyin = int(n_adds*(n_adds+1)/2) - n_eats

    if candyin == k:
        print(n_eats)
```

## Submission at 2024-10-28 10:01:13


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def fun(root):
    if root is None:
        return 0
    
    lht = fun(root.left)
    rht = fun(root.right)

    return 1 + max(lht,rht)

#Function to return a list containing the postorder traversal of the tree.
def maxDepth(root):
    return fun(root)
```

## Submission at 2024-10-28 10:15:54


```
order, s = input().split(" ")
charlist = [ch for ch in order]
charlist_ = [ch for ch in order]
finstr = ""

for i, ch in enumerate(s):
    # print("Char is "+str(ch))
    # print("Charlist is "+str(charlist))
    if ch not in charlist_:
        finstr += ch
    else:
        finstr += charlist[0]
        charlist.pop(0)

print(finstr)

```

## Submission at 2024-10-28 10:17:57


```
order, s = input().split(" ")
charlist = [ch for ch in order]
charlist_ = set([ch for ch in order])
finstr = ""

for i, ch in enumerate(s):
    # print("Char is "+str(ch))
    # print("Charlist is "+str(charlist))
    if ch not in charlist_:
        finstr += ch
    else:
        finstr += charlist[0]
        charlist.pop(0)

print(finstr)

```

## Submission at 2024-10-28 10:24:20


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
    def fun(self,root):
        if root is None:
            return 0
        
        lmax = self.fun(root.left)
        rmax = self.fun(root.right)

        return max(lmax,rmax,root.data)

    def findMax(self,root):
        return self.fun(root)


```

## Submission at 2024-10-28 10:33:00


```
n = int(input())
candyType = list(map(int,input().split(" ")))

print(max(len(set(candyType)),n/2))
```

## Submission at 2024-10-28 10:33:48


```
n = int(input())
candyType = list(map(int,input().split(" ")))

print(min(len(set(candyType)),n/2))
```

## Submission at 2024-10-28 10:34:05


```
n = int(input())
candyType = list(map(int,input().split(" ")))

print(min(len(set(candyType)),n//2))
```

## Submission at 2024-10-28 11:03:26


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
        n1 = 0
        n2 = 0
        ptr1 = num1
        ptr2 = num2

        while ptr1:
            n1 = 10*n1 + ptr1.data
            ptr1 = ptr1.next

        while ptr2:
            n2 = 10*n2 + ptr2.data
            ptr2 = ptr2.next

        nsum = n1+n2
        digsum = [int(ch) for ch in str(nsum)]
        lensum = len(digsum)

        ptrf = Node(0,None)
        ret = prtf

        for i in range(lensum):
            nxt = Node(0,None)
            ptrf.data = digsum[i]

            if i != lensum - 1:
                ptrf.next = nxt
                ptrf = nxt
            if i == lensum - 1:
                ptrf.next = None

        return ret
```

## Submission at 2024-10-28 11:05:32


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
        n1 = 0
        n2 = 0
        ptr1 = num1
        ptr2 = num2

        while ptr1:
            n1 = 10*n1 + ptr1.data
            ptr1 = ptr1.next

        while ptr2:
            n2 = 10*n2 + ptr2.data
            ptr2 = ptr2.next

        nsum = n1+n2
        digsum = [int(ch) for ch in str(nsum)]
        lensum = len(digsum)

        ptrf = Node(0)
        ret = ptrf

        for i in range(lensum):
            nxt = Node(0)
            ptrf.data = digsum[i]

            if i != lensum - 1:
                ptrf.next = nxt
                ptrf = nxt
            if i == lensum - 1:
                ptrf.next = None

        return ret
```

## Submission at 2024-10-28 11:09:32


```
order, s = input().split(" ")

charlist = [ch for ch in order if ch in s]

charlist_ = set([ch for ch in order if ch in s])

# print(charlist_)

finstr = ""



for i, ch in enumerate(s):

    # print("Char is "+str(ch))

    # print("Charlist is "+str(charlist))

    if ch not in charlist_:

        finstr += ch

    else:

        finstr += charlist[0]

        charlist.pop(0)



print(finstr)
```

## Submission at 2024-11-25 09:50:42


```
for i in range(int(input())):
    print('Hello '+ str(input()) + '!')
```

## Submission at 2024-11-25 09:54:54


```
n = int(input())
for i in range(n):
    print('*'*(n-i))
```

## Submission at 2024-11-25 10:04:59


```
n = int(input())
arr = list(map(int,input().split(" ")))

cntodd = 0
cnteven = 0

for i in arr:
    if i%2 == 1:
        cntodd += 1
    else:
        cnteven += 1

print(str(cntodd) + ' ' + str(cnteven))
```

## Submission at 2024-11-25 10:41:45


```
n = int(input())
arr = list(map(str,input().split(' ')))
tgt = str(input())

ab = list('a b c d e f g h i j k l m n o p q r s t u v w x y z'.split(" "))
d = {}

for i in range(len(ab)):
    d[ab[i]] = i

# print(d)

fnd = 0

for l in arr:
    if d[l]>d[tgt]:
        fnd = 1
        print(l)
        break

if fnd ==0:
    print(arr[0])
```

## Submission at 2024-11-25 10:54:18


```
s = list(input())
r = s.copy()
n = len(s)

for i in range(n):
    r[i] = s[n-1-i]

r = list(set(r))
print(r)

ret = ''

for i in range(len(r)):
    ret = ret + r[i]

print(ret)
```

## Submission at 2024-11-25 11:01:14


```
s = list(input())
r = s.copy()
n = len(s)

for i in range(n):
    r[i] = s[n-1-i]

ret = ''
added = []

for i in range(len(r)):
    if r[i] not in added:
        added = added + [r[i]]
        ret = ret + r[i]

print(ret)
```

## Submission at 2024-11-25 11:11:37


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
def minElementInBST(root) -> int:
    
    if self.left is not None and self.right is not None:
        return min(self.data,minElementInBST(self.left),minElementInBST(self.right))
    if self.left is not None:
        return min(self.data,minElementInBST(self.left))
    if self.right is not None:
        return min(self.data,minElementInBST(self.right))
    return self.data
```

## Submission at 2024-11-25 11:12:13


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
def minElementInBST(root) -> int:
    
    if root.left is not None and root.right is not None:
        return min(root.data,minElementInBST(root.left),minElementInBST(root.right))
    if root.left is not None:
        return min(root.data,minElementInBST(root.left))
    if root.right is not None:
        return min(root.data,minElementInBST(root.right))
    return root.data
```

## Submission at 2024-11-25 11:38:28


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node: 2 1 1
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        heads1 = []
        heads2 = []
        ptr1 = head1
        ptr2 = head2

        while ptr1.next:
            heads1 = heads1 + [ptr1]
        while ptr2.next:
            heads2 = heads2 + [ptr2]
        
        ret = None

        l1 = len(heads1)
        l2 = len(heads2)

        for i in range(min(l1,l2)):
            if heads1[l1-1-i] == heads2[l2-1-i]:
                ret = heads1[l1-1-i]

        return ret


```

## Submission at 2024-11-25 11:41:40


```
n = int(input())
arr = list(map(int,input().split(" ")))

# for i in range(len())
# bkpt = []

return 3
```

## Submission at 2024-11-25 11:41:57


```
n = int(input())
arr = list(map(int,input().split(" ")))

for i in range(len(arr)):

bkpt = []

return 0
```

## Submission at 2024-11-25 11:42:11


```
n = int(input())
arr = list(map(int,input().split(" ")))

for i in range(len(arr)):



return 1
```

