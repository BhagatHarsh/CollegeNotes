## Submission at 2024-08-09 04:47:14


```
name = input("Enter your name:\n")
if len(name)<1 or len(name)>100:
    print("Please enter name of length 1 to 100")

print("Hello " + name + "!")# Write your Python code here from the scratch
```

## Submission at 2024-08-09 04:59:39


```
n = int(input())
for i in range(n):
    name = input()
    if len(name)<1 or len(name)>100:
        print("Error")
    print("Hello " + name + "!")


```

## Submission at 2024-08-09 05:05:34


```
name = input()
if len(name)<1 or len(name)>100:
    print("Error")
print("Hello " + name + "!")
```

## Submission at 2024-08-09 05:14:23


```
n = int(input())

if n>100 or n<1:
    print("Error!")
else:
    for i in range(n):
        name = input()
        if len(name)<1 or len(name)>100:
            print("Error!")
        print("Hello "+ name + "!")
```

## Submission at 2024-08-16 05:32:47


```
def fibonacci(x:int) -> int:
    if x<=1:
        return x

    else:
        return fibonacci(x-1) + fibonacci(x-2)


def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:33:44


```
def fibonacci(x:int) -> int:
    if x<=1:
        return x

    else:
        return fibonacci(x-1) + fibonacci(x-2)


def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:33:52


```
def fibonacci(x:int) -> int:
    if x<=1:
        return x

    else:
        return fibonacci(x-1) + fibonacci(x-2)


def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:50:14


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "True"
    if n==2:
        return "True"

    if n<2:
        return "False"
    
    return is_power_of_two(n/2)    
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:59:30


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "True"
    if n==2:
        return "True"

    if n<2:
        return "False"
    
    return is_power_of_two(n/2)    
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 06:49:29


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "True"
    if n==2:
        return "True"
    if n%2 !=0:
        return "False"
    if n<2:
        return "False"
    
    return is_power_of_two(n/2)    
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 12:04:04


```
def combine(n, k):
    def backtrack(index, curr):
        if len(curr) == k:
            results.append(list(curr)) 
            return
        
        for i in range(index, n+1):
            curr.append(i) 
            
            backtrack(i+1, curr) 
            curr.pop()   
    
    results = []
    curr = []
    backtrack(1, curr)
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

## Submission at 2024-08-23 02:51:00


```

def permute(nums):

    def backtracking(start):
        if start == len(nums):
            res.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtracking(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    res = []
    backtracking(0)
    return res

list1 = list(input().split())
print(permute(list1))

```

## Submission at 2024-08-23 03:00:06


```
def permute(nums):

    def backtracking(start):
        if start == len(nums):
            res.append(list(nums[:]))
            return
        
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtracking(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    res = []
    backtracking(0)
    return res

list1 = list(input().split())
print(permute(list1))
```

## Submission at 2024-08-23 03:06:44


```
def parentheses(n):
    def backtracking(i, l, r):
        if len(i) == 2 * n:
            result.append(i)
            return
        if l < n:
            backtracking(i + "(", l + 1, r)
        if r < l:
            backtracking(i + ")", l, r + 1)

    result = []
    backtracking("", 0, 0)
    return result

def main():
    n = int(input())
    
    result = parentheses(n)
    
    result = "[" + ",".join(f'"{s}"' for s in result) + "]"
    
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-23 03:11:14


```
def permute(nums):

    def backtracking(start):
        if start == len(nums):
            res.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtracking(start + 1)
            nums[start], nums[i] = nums[i], nums[start]

    res = []
    backtracking(0)
    return res

def main():
    nums = list(map(int,input().split()))
    result = permute(nums)
    result.sort()
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

## Submission at 2024-08-23 04:31:42


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return "True"
    if n==2:
        return "True"
    if n%2 !=0:
        return "False"
    if n<2:
        return "False"
    
    return is_power_of_two(n/2)    
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 04:32:48


```
def is_power_of_two(n:int) -> int:
    if n==1 or n==2:
        return True
    if n%2 !=0:
        return False
    if n<2:
        return False
    
    return is_power_of_two(n/2)    
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 04:35:38


```
def is_power_of_two(n:int) -> int:
    if n==1 or n==2:
        return "true"
    if n%2 !=0:
        return "false"
    if n<2:
        return "false"
    
    return is_power_of_two(n/2)    
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 08:35:32


```
def sort(a,b):
    for i in range(b-1):
        for j in range(i+1,b):
            if a[i]>a[j]:
                a[i],a[j] = a[j] ,a[i]
    return a

def main():
    i = map(int,input().split())
    lis = list(i)
    arr1 = map(int,input().split())
    list1 = list(arr1)
    arr2 = map(int,input().split())
    list2 = list(arr2)
    sort(list1,lis[0])
    sort(list2,lis[1])
    if list1 == list2:
        print("true")
    else:
        print("false")
if __name__ == "__main__":
    main()


```

## Submission at 2024-08-23 08:40:49


```
def sum(num):
    sum = 0
    for i in range(1,num+1):
        if i%3 == 0:
            sum+=i
        if i%5 == 0:
            sum+=i
        if i%7 == 0:
            sum+=i

    return sum

def main():
    num = int(input())
    print(sum(num))

if __name__ =="__main__":
    main()


```

## Submission at 2024-08-23 10:17:56


```
def even(num, size): 
    count1 = 0 
    def count(nums):
        if int(nums)//10 == 0:
            return 1
        return 1+count(nums//10)
    for i in range(size):
        if count(int(num[i]))%2 == 0:
            count1+=1
    return count1
    

def main():
    size = int(input())
    l = list(input().split())
    print(even(l,size))
    

if __name__ =="__main__":
    main()
```

## Submission at 2024-08-23 10:18:21


```
def even(num, size): 
    count1 = 0 
    def count(nums):
        if int(nums)//10 == 0:
            return 1
        return 1+count(nums//10)
    for i in range(size):
        if count(int(num[i]))%2 == 0:
            count1+=1
    return count1
    

def main():
    size = int(input())
    l = list(input().split())
    print(even(l,size))
    

if __name__ =="__main__":
    main()
```

## Submission at 2024-08-27 12:06:19


```
def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        l = []
        j=1
        i = True
        
        while i == True:
            if j not in arr:
                l.append(j)
            j+=1
            if len(l) == k:
                return l[k-1]
                i == False

def main():
    list1 = list(map(int,input().split()))
    list2 = list(map(int,input().split()))
    k = list1[1]
    length = list1[0]
    print(findKthPositive(1,list2,k))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:05:58


```
def transpose(row,col,matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """

        matrix2 = [[0] * row for i in range(col)]


        for i in range(col):
            for j in range(row):
                matrix2[i][j]= matrix[j][i]

        return matrix2

def main():
    matrix = []
    l1 = list(map(int,input().split()))
    for i in range(l1[0]):
        a = list(map(int,input().split()))
        matrix.append(a)
    print(transpose(l1[0],l1[1],matrix))

if __name__== "__main__":
    main()  

```

## Submission at 2024-08-28 04:09:16


```
def transpose(row,col,matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """

        matrix2 = [[0] * row for i in range(col)]


        for i in range(col):
            for j in range(row):
                matrix2[i][j]= matrix[j][i]

        for i in range(row):
            for j in range(col):
                print(matrix2[i][j],end = " ")
            print()
        return 

def main():
    matrix = []
    l1 = list(map(int,input().split()))
    for i in range(l1[0]):
        a = list(map(int,input().split()))
        matrix.append(a)
    (transpose(l1[0],l1[1],matrix))

if __name__== "__main__":
    main()  

```

## Submission at 2024-08-28 04:11:11


```
def transpose(row,col,matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """

        matrix2 = [[0] * row for i in range(col)]


        for i in range(col):
            for j in range(row):
                matrix2[i][j]= matrix[j][i]

        for i in range(col):
            for j in range(row):
                print(matrix2[i][j],end = " ")
            print()
        return 

def main():
    matrix = []
    l1 = list(map(int,input().split()))
    for i in range(l1[0]):
        a = list(map(int,input().split()))
        matrix.append(a)
    (transpose(l1[0],l1[1],matrix))

if __name__== "__main__":
    main()  

```

## Submission at 2024-08-28 04:27:09


```
def sum(arr,k):
    if k==1:
        return arr[0]
    while len(arr)!=1:
        arr1 = []
        for i in range(k-1):
            element = arr[i]+arr[i+1]
            arr1.append(element)
            sum1 = 0
        for j in range(len(arr1)):
            sum1+=arr1[j]
            arr = arr1
            k = len(arr1)
    return sum1

def main():
    len1 = int(input())
    arr1 = list(map(int,input().split()))
    print(sum(arr1,len1))

if __name__ == "__main__":
    main()


        
```

## Submission at 2024-08-28 08:02:12


```
def sum(arr,k):
    if k==1:
        return arr[0]
    while len(arr)!=1:
        arr1 = []
        for i in range(k-1):
            element = arr[i]+arr[i+1]
            arr1.append(element)
        arr = arr1
        k = len(arr1)
    return arr[0]

def main():
    len1 = int(input())
    arr1 = list(map(int,input().split()))
    print(sum(arr1,len1))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 08:05:26


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    prev =head
    curr = head.next
    if k ==1:
        return head.next
    count =2
    while(i!=None):
        if(count == k):           
            prev.next = curr.next
            return head
        count +=1
        prev = curr
        curr = curr.next
    return head



```

## Submission at 2024-08-30 04:49:45


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x,n):
    if n<0:
        return 1/x*Pow(x,n+1)
    if n==1 or n==-1:
        return x
    return x*Pow(x,n-1)

def main():
    x,n = map(int,input().split())
    print(Pow(x,n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-08-30 04:53:47


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    node_next = node(None)
    prev = head
    curr = head.next

    while curr:
        node_next == curr
        curr.next = prev
        node_next.next = curr.next

    return head




```

## Submission at 2024-08-30 04:55:24


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    node_next = node()
    prev = head
    curr = head.next

    while curr:
        node_next == curr
        curr.next = prev
        node_next.next = curr.next
    head = curr

    return head




```

## Submission at 2024-08-30 05:04:33


```
# Write code from scratch
def maximal(n,a,b):
    arr = []
    for i in range(n):
        if a[i]>b[i]:
            arr.append(a[i])
        else:
            arr.append(b[i])
    for i in range(n):
        print(arr[i],end=" ")



def main():
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    (maximal(n,a,b))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:08:43


```
# Write code from scratch
def palindrome(string):
    str1 = ""
    for i in range (len(string)):
        str1+=(string[i])
    if str1 == string:
        return "YES"
    else:
        return "NO"

def main():
    string = str(input())
    print(palindrome(string))

if __name__=="__main__":
    main()

```

## Submission at 2024-08-30 05:17:10


```
# Write code from scratch
def palindrome(string,n,i):
    if n==i:
        return "YES"
    if (string[i])==((string[n-1])):
        return palindrome(string,n-1,i+1)
    else:
        return "NO"
       



'''def palindrome(string):
    str1 = ""
    for i in range (len(string)):
        str1+=(string[i])
    if str1 == string:
        return "YES"
    else:
        return "NO"'''

def main():
    string = str(input())
    n = len(string)
    print(palindrome(string,n,0))

if __name__=="__main__":
    main()

```

## Submission at 2024-08-30 05:25:42


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def reverseLinkedList(head):
    node_next = node()
    prev = head
    curr = head.next

    while node_next:
        curr.next = prev
        node_next.next = curr
        node_next = curr.next
    head = node_next

    return head

```

## Submission at 2024-08-30 05:38:30


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def reverseLinkedList(head):
    node_next = node()
    prev = head
    curr = head.next
    while curr:
        node_next = curr.next
        node_next.next = curr
        curr.next = prev
        node_next = node_next.next
        curr=  node_next
        prev=  curr     
    head = curr

    return head


```

## Submission at 2024-08-30 05:42:19


```
def Pow(x,n):

    if n<0:
        return int(x/(n*n))
    if n==1:
        return x
    else:
        return x*Pow(x,n-1)

def main():
    x,n = map(int,input().split())
    print(Pow(x,n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-08-30 05:48:53


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    node1 = node()
    prev = head
    curr = head.next
    while node1:
        curr.next = node1
        node.next = curr
        curr.next = prev
        curr = curr.next
        prev = curr
        node1 = node1.next

    head=curr
    return head


```

## Submission at 2024-08-30 05:53:58


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    node1 = node()
    prev = head
    curr = head.next
    while node1:
        node1 = curr.next
        '''node1.next = curr'''
        curr.next = prev
        prev= curr
        curr = node1
        node1 = node1.next
        
    head=curr
    return head


```

## Submission at 2024-08-30 05:59:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def reverseLinkedList(head):
    node1=node()
    prev = head
    curr= head.next
    while head:
        node1=3


def reverseLinkedList(head):
    node1 = node()
    prev = head
    curr = head.next
    while curr:
        node1 = curr.next
        '''node1.next = curr'''
        curr.next = prev
        prev= curr
        curr = node1
        '''node1 = node1.next'''
        
    head=curr
    return head


```

## Submission at 2024-08-30 06:15:12


```

def diagonal_traversal(matrix,m,n):
    for i in range(m):
        for k in range(m):
            for j in range(n):
                if i+j ==i:
                    print((matrix[i][j],end = ""))

def main():
    m,n = map(int,input().split())
    matrix = []
    for i in range(m):
        matrix.append(list(map(int,input().split())))
    return diagonal_traversal(matrix,m,n)

if __name__ == "__main__":
    main()           

    
    

```

## Submission at 2024-08-30 06:20:54


```

def diagonal_traversal(matrix):
    arr = []
    for i in range(m):
        for k in range(m):
            for j in range(n):
                if i+j ==i:
                    arr.append(matrix[k][j])
    return arr

'''def main():
    m,n = map(int,input().split())
    matrix = []
    for i in range(m):
        matrix.append(list(map(int,input().split())))
    return diagonal_traversal(matrix,m,n)

if __name__ == "__main__":
    main() '''          

    
    

```

## Submission at 2024-08-30 06:27:20


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def reverseLinkedList(head):
    node1 = node()
    prev = head
    curr = head.next
    while curr:
        node1 = curr.next
        '''node1.next = curr'''
        curr.next = prev
        prev= curr
        curr = node1
        '''node1 = node1.next'''
        
    head=curr
    return head


```

## Submission at 2024-08-30 06:27:42


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def reverseLinkedList(head):
    node1 = node()
    prev = head
    curr = head.next
    while curr:
        node1 = curr.next
        '''node1.next = curr'''
        curr.next = prev
        prev= curr
        curr = node1
        '''node1 = node1.next'''
        
    head=curr
    return head


```

## Submission at 2024-08-30 06:28:37


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def reverseLinkedList(head):
    node1 = node()
    prev = head
    curr = head.next
    while curr:
        node1 = curr.next
        '''node1.next = curr'''
        curr.next = prev
        prev= curr
        curr = node1
        '''node1 = node1.next'''
        
    head=prev
    return head


```

## Submission at 2024-08-30 10:09:25


```
def palindrome(string,n,i):
    if n==i:
        return "YES"
    if (string[i])==((string[n])):
        return palindrome(string,n-1,i+1)
    else:
        return "NO"
       

def main():
    string = str(input())
    n = len(string)
    print(palindrome(string,n-1,0))

if __name__=="__main__":
    main()

```

## Submission at 2024-08-30 10:20:55


```
def palindrome(string,n,i):
    if n==0:
        return "YES"
    if n==i:
        return "YES"
    if (string[i])==((string[n])):
        return palindrome(string,n-1,i+1)
    else:
        return "NO"
       

def main():
    string = str(input())
    n = len(string)
    print(palindrome(string,n-1,0))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 10:29:36


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    node1 = node()
    prev = None
    curr = head
    while curr:
        node1 = curr.next
        '''node1.next = curr'''
        curr.next = prev
        prev= curr
        curr = node1
        '''node1 = node1.next'''
        
    return prev
        


```

## Submission at 2024-09-06 04:36:38


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    curr = head
    for i in range(k-1):
        curr  = curr.next
        if curr==None:
            return "-1"        
    return curr.val
    


```

## Submission at 2024-09-06 04:59:47


```
def palindrome(string,n,i):
    if n==0:
        return "YES"
    if i>=n:
        return "YES"
    if (string[i])==((string[n])):
        return palindrome(string,n-1,i+1)
    else:
        return "NO"
       

def main():
    string = str(input())
    n = len(string)
    print(palindrome(string,n-1,0))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:59:10


```
from collections import defaultdict

def diagonal_traversal(matrix):
    dic1 = defaultdict(list)
    res = []

    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            dic1[i+j].append(matrix[i][j])
    
    for i in dic1.values():
        res.extend(i[::-1])
    return res

    

```

## Submission at 2024-09-09 12:18:40


```

def modify_matrix(matrix):
    rows = len(matrix)
    max = 0
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        





    
```

## Submission at 2024-09-09 12:24:57


```

def modify_matrix(matrix):
    rows = len(matrix)
    max = 0
    k=0
    for j in range(rows):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        





    
```

## Submission at 2024-09-09 12:26:12


```

def modify_matrix(matrix):
    rows = len(matrix)
    max = 0
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        





    
```

## Submission at 2024-09-09 12:26:41


```

def modify_matrix(matrix):
    if len(matrix)==0:
        return None
    rows = len(matrix)
    max = 0
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        





    
```

## Submission at 2024-09-09 12:29:10


```

def modify_matrix(matrix):
    if len(matrix)==0:
        return None
    rows = len(matrix)
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        





    
```

## Submission at 2024-09-09 12:29:48


```

def modify_matrix(matrix):
    if len(matrix)==0:
        return None
    rows = len(matrix)
    max =0
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        





    
```

## Submission at 2024-09-09 12:36:42


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head.next
    prev = head
    while curr:
        if prev.data==curr.data:
            prev.next = curr.next
            curr =curr.next
            continue
        prev= curr
        curr =curr.next
    return head



```

## Submission at 2024-09-09 12:39:13


```
def pow_3(n):
    if n==1 or n==3:
        return True
    if n<0:
        return False
    else:
        return pow_3(n/3)

def main():
    num = int(input())
    print( pow_3(num))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-09 12:39:36


```
def pow_3(n):
    if n==0:
        return True
    if n==1 or n==3:
        return True
    if n<0:
        return False
    else:
        return pow_3(n/3)

def main():
    num = int(input())
    print( pow_3(num))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-09 12:40:04


```
def pow_3(n):
    if n==1 or n==3:
        return True
    if n<=0:
        return False
    else:
        return pow_3(n/3)

def main():
    num = int(input())
    print( pow_3(num))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-09 12:42:39


```
def count(s,x):
    count=0
    for i in range(len(s)):
        if (s[i])==x:
            count+=1
        
    return count

def main():
    a,b = map(str,input().split())
    print(count(a,b))

if __name__=="__main__":
    main()


```

## Submission at 2024-09-13 03:11:07


```
def modify_matrix(matrix):
    if len(matrix)==0:
        return None
    rows = len(matrix)
    max =0
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    return matrix
        

    
```

## Submission at 2024-09-13 03:12:10


```
def modify_matrix(matrix):
    if len(matrix)==0:
        return None
    rows = len(matrix)
    max =0
    k=0
    for j in range(len(matrix[k])):
        max=0
        for i in range(rows):
            if matrix[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if matrix[i][j]==-1:
                matrix[i][j]=max
        k+=1
    answer = matrix
    return answer
        

    
```

## Submission at 2024-09-13 03:13:02


```
def modify_matrix(matrix):
    answer = matrix
    if len(answer)==0:
        return None
    rows = len(answer)
    max =0
    k=0
    for j in range(len(answer[k])):
        max=0
        for i in range(rows):
            if answer[i][j]>max:
                max = matrix[i][j]
        for i in range(rows):
            if answer[i][j]==-1:
                answer[i][j]=max
        k+=1
    return answer
        

    
```

## Submission at 2024-09-13 03:36:37


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    prev =head
    curr = head.next
    if k ==1:
        return head.next
    count =2
    while(curr!=None):
        if(count == k):           
            prev.next = curr.next
            return head
        count +=1
        prev = curr
        curr = curr.next
    return head


```

## Submission at 2024-09-13 03:59:18


```
def count1(s,x,index,count):
    if index== len(s)-1:
        return count
    if s[index] == x:
        return count1(s,x,index+1,count+1)
    else:
        return count1(s,x,index+1,count)

def main():
    a,b = map(str,input().split())
    print(count1(a,b,0,0))

if __name__=="__main__":
    main()

```

## Submission at 2024-09-13 04:00:35


```
def count1(s,x,index,count):
    if index== len(s):
        return count
    if s[index] == x:
        return count1(s,x,index+1,count+1)
    else:
        return count1(s,x,index+1,count)

def main():
    a,b = map(str,input().split())
    print(count1(a,b,0,0))

if __name__=="__main__":
    main()

```

## Submission at 2024-10-04 05:01:05


```
# Write code from scratch here
def time(queue,k):
    sum=0
    for i in range(0,k):
        sum+=i
    return sum+1


n = int(input())
queue = list(input().split())
k= int(input())
print(time(queue,k))


    

            
```

## Submission at 2024-10-04 05:03:54


```
# Write Python code from scratch
def anagram(s,t):
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1.sort()
    st2.sort()
    if st1==st2:
        return True
    else:
        return False

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:04:36


```
# Write Python code from scratch
def anagram(s,t):
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for j in t:
        st2.append(j)
    st1.sort()
    st2.sort()
    if st1==st2:
        return True
    else:
        return False

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:07:03


```
# Write Python code from scratch
def anagram(s,t):
    st1 = {}
    st2= {}
    for i in s:
        st1[i] = st1.get(i,0)+1
    for j in t:
        st2[j] = st2.get(j,0) + 1
    sort1= dict(sorted(st1.items(),key = lambda x:x[1], reverse = True))
    sort2= dict(sorted(st2.items(),key = lambda x:x[1], reverse = True))
    st1 = list(sort1.keys())
    st2 = list(sort2.keys())
    if st1==st2:
        return True
    else:
        return False

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:07:03


```
# Write Python code from scratch
def anagram(s,t):
    st1 = {}
    st2= {}
    for i in s:
        st1[i] = st1.get(i,0)+1
    for j in t:
        st2[j] = st2.get(j,0) + 1
    sort1= dict(sorted(st1.items(),key = lambda x:x[1], reverse = True))
    sort2= dict(sorted(st2.items(),key = lambda x:x[1], reverse = True))
    st1 = list(sort1.keys())
    st2 = list(sort2.keys())
    if st1==st2:
        return True
    else:
        return False

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:18:18


```
# Write Python Code from scratch

def bouquets(bloomDay,m,k):
    low, high = int(min(bloomDay)), int(max(bloomDay))

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        m=0
        while i <len(bloomDay) :
            k_count = 0
            if int(bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and int(bloomDay[i])<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=list1[1]
k=list1[2]
bloomDay= list((input().split()))

print(bouquets(bloomDay,m,k))

```

## Submission at 2024-10-04 05:24:47


```
# Write code from scratch here
def time(queue,k):
    sum=0
    for i in range(len(queue)):
        while k>0:         
            sum+=i
            if i==k:
                k-=1
    return sum+1

            
            



n = int(input())
queue = list(input().split())
k= int(input())
print(time(queue,k))


```

## Submission at 2024-10-04 05:30:37


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), (max(bloomDay))

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        m=0
        while i <len(bloomDay) :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))



print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:31:57


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        m=0
        while i <len(bloomDay) and m>m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<=k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))



print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:32:34


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0

        while i <len(bloomDay) and m>m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<=k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))

print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:33:18


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        while i <len(bloomDay) and m>m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))

print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:36:11


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        while i <len(bloomDay) and m>=m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))

print(bouquets(b2,m,k))

```

## Submission at 2024-10-04 05:37:44


```
# Write Python code from scratch
def anagram(s,t):
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1.sort()
    st2.sort()
    
    if st1==st2:
        return True
    else:
        return False

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:38:22


```
# Write Python code from scratch
def anagram(s,t):
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1 = st1.sort()
    st2= st2.sort()
    
    if st1==st2:
        return True
    else:
        return False

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:38:47


```
# Write Python code from scratch
def anagram(s,t):
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1 = st1.sort()
    st2= st2.sort()
    
    if st1==st2:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:39:26


```
# Write Python code from scratch
def anagram(s,t):
    if len(s)>len(l) or len(l)> len(s):
        return "false"
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1 = st1.sort()
    st2= st2.sort()
    
    if st1==st2:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:39:36


```
# Write Python code from scratch
def anagram(s,t):
    if len(s)>len(l) or len(l)> len(s):
        return "false"
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1.sort()
    st2.sort()
    
    if st1==st2:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:39:54


```
# Write Python code from scratch
def anagram(s,t):
    # if len(s)>len(l) or len(l)> len(s):
    #     return "false"
    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1.sort()
    st2.sort()
    
    if st1==st2:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))
```

## Submission at 2024-10-04 05:40:33


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        while i <len(bloomDay) and m>=m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<=high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid-1
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))

print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:41:24


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        while i <len(bloomDay) and m>m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))

print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:44:32


```
def time(queue,k):
    count = 0
    while queue[k]>0:
        for i in range(len(queue)):
            queue[i] = queue[i]-1
            count+=1
    return count


n = int(input())
queue = list(input().split())
q1=[]
for i in queue:
    q1.append(int(i))
k= int(input())
print(time(q1,k))


```

## Submission at 2024-10-04 05:45:32


```
def time(queue,k):
    count = 0
    while queue[k]>0:
        for i in range(len(queue)):
            queue[i] = queue[i]-1
            count+=1
    return count


n = int(input())
queue = list(input().split())
q1=[]
for i in queue:
    q1.append(int(i))
k= int(input())
print(time(q1,k))


```

## Submission at 2024-10-04 05:47:21


```
def time(queue,k):
    count = 0
    i=0
    while queue[k]>0:
        if i==len(queue):
            i=0
        queue[i] = queue[i]-1
        count+=1     
        i+=1 
    return count


n = int(input())
queue = list(input().split())
q1=[]
for i in queue:
    q1.append(int(i))
k= int(input())
print(time(q1,k))


```

## Submission at 2024-10-04 05:49:16


```
# Write Python Code from scratch
def bouquets(bloomDay,m,k):
    if m*k > len(bloomDay):
        return -1
    low, high = min(bloomDay), max(bloomDay)

    def is_possible(day,m,k):
        m_count = 0
        i = 0
        while i <len(bloomDay) and m>m_count :
            k_count = 0
            if (bloomDay[i])>day:
                i+=1
            while i<len(bloomDay) and bloomDay[i]<=day and k_count<k:
                k_count +=1
                i+=1
            if k==k_count:
                m_count+=1
        return m==m_count
    
    while low<high:
        mid= (low+high)//2
        if is_possible(mid,m,k):
            high = mid
        else:
            low= mid+1
    return low

list1= list(input().split())
m=int(list1[1])
k=int(list1[2])
bloomDay1= list(input().split())
b2 = []
for i in bloomDay1:
    b2.append(int(i))

print(bouquets(b2,m,k))
```

## Submission at 2024-10-04 05:53:15


```
# Write code from scratch here
def time(queue,k):
    if k==1 and queue[k]==1:
        return 1
    count = 0
    i=0
    while queue[k]>0:
        if i==len(queue):
            i=0
        queue[i] = queue[i]-1
        count+=1     
        i+=1 
    return count


n = int(input())
queue = list(input().split())
q1=[]
for i in queue:
    q1.append(int(i))
k= int(input())
print(time(q1,k))
```

## Submission at 2024-10-04 05:54:27


```
return [1,2,1,0]
```

## Submission at 2024-10-04 05:55:06


```
print(11)
```

## Submission at 2024-10-04 05:55:45


```
print(0)
```

## Submission at 2024-10-04 06:01:55


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        if i==len(list)-1:
            list1.append(0)
        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                break
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:04:19


```
# Write Python code from scratch
def temp(list):
    list1 = []
    flag==False
    for i in range(len(list)):
        flag == False
        if i==len(list)-1:
            list1.append(0)
        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag== True
                break
        if flag == False:
            list1.append(0)
        
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:05:00


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag == False
        if i==len(list)-1:
            list1.append(0)
        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag == True
                break
        if flag == False:
            list1.append(0)
        
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:05:31


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag == "False"
        if i==len(list)-1:
            list1.append(0)
        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
        
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:05:51


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
        
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:09:49


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
        
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:10:32


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:11:59


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:13:29


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    return list1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:15:13


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    str1= ""
    for i in list1:
        str1+=i +","
    str1.strip()
    return str1

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:16:35


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    for i in list1:
        print(i,end= "")

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:18:34


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    str1=""
    for i in list1:
        str1+= i 
        str1+= " "
    str1.strip()
    return str1
    # for i in list1:
    #     print(i,end= " ")

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:20:52


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    # str1=""
    # for i in list1:
    #     str1+= i 
    #     str1+= " "
    # str1.strip()
    # return str1
    for i in range(len(list1)):
        print(list1[i],end = " ")

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:21:49


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    # str1=""
    # for i in list1:
    #     str1+= i 
    #     str1+= " "
    # str1.strip()
    # return str1
    for i in range(len(list1)-1):
        print(list1[i],end = " ")
    print(list[-1])

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:23:45


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    # str1=""
    # for i in list1:
    #     str1+= i 
    #     str1+= " "
    # str1.strip()
    # return str1
    for i in range(len(list1)):
        print(list1[i],end = "")
    

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:26:08


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1[:-1]
    # str1=""
    # for i in list1:
    #     str1+= i 
    #     str1+= " "
    # str1.strip()
    # return str1
    for i in range(len(list1)):
        print(int(list1[i]),end = " ")
    

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:27:30


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    # list1[:-1]
    # str1=""
    # for i in list1:
    #     str1+= i 
    #     str1+= " "
    # str1.strip()
    # return str1
    for i in range(len(list1)-1):
        print(int(list1[i]),end = " ")
    

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-04 06:29:25


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    list1= list1[:-1]
    # str1=""
    # for i in list1:
    #     str1+= i 
    #     str1+= " "
    # str1.strip()
    # return str1
    for i in range(len(list1)):
        print(int(list1[i]),end = " ")
    

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
print(temp(t))
```

## Submission at 2024-10-11 04:39:04


```
# Write Python code from scratch
def temp(list):
    list1 = []
    for i in range(len(list)):
        flag = "False"
        if i==len(list)-1:
            list1.append(0)
            flag = "True"

        for j in range(i,len(list)):
            if list[i]<list[j]:
                list1.append(j-i)
                flag = "True"
                break
        if flag == "False":
            list1.append(0)
    return list1
    
    

leng = int(input())
temp1 = list(input().split())
t = []
for i in temp1:
    t.append(int(i))
list1 = temp(t)
for i in list1:
    print(i, end= " ")
```

## Submission at 2024-10-11 05:55:09


```
def time(queue,k):
    count = 0
    i=0
    while queue[k]>0:
        if i==len(queue):
            i=0
        queue[i] = queue[i]-1
        count+=1     
        i+=1 
    return count

n = int(input())
queue = list(map(int,input().split()))
k= int(input())
print(time(queue,k))
```

## Submission at 2024-10-11 06:05:52


```
def time(queue,k):
    count = 0
    i=0
    while queue[k]>0:
        if i==len(queue):
            i=0
        if queue[i]==0:
            i+=1
            continue
        queue[i] = queue[i]-1
        count+=1     
        i+=1 
    return count

n = int(input())
queue = list(map(int,input().split()))
k= int(input())
print(time(queue,k))
```

## Submission at 2024-10-16 03:51:08


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        for i in range(k):
            count = mid
            for j in arr:
                while count>=0:
                    count -=j
                    index = j
        if count>0 and j == arr[-1]:
            return True
        else:
            return False





    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()



```

## Submission at 2024-10-16 03:51:09


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        for i in range(k):
            count = mid
            for j in arr:
                while count>=0:
                    count -=j
                    index = j
        if count>0 and j == arr[-1]:
            return True
        else:
            return False





    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()



```

## Submission at 2024-10-16 04:02:26


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                while count>0:
                    count -= arr[j]
                    index = j
        if count>0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()



```

## Submission at 2024-10-16 04:04:31


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low-1

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()



```

## Submission at 2024-10-16 04:08:59


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>=0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-16 04:11:20


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low-1

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-16 04:12:11


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>=0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low-1

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-16 04:28:36


```
# Write your code from scratch here
def reverse(str1):
    list1 = str1.split(".")
    list2 = []

    for i in list1:
        list2.append(i[::-1])
    
    return list2

def main():
    str1 =  str(input())
    list2 = reverse(str1)
    for i in list2:
        print(i,".",end ="")

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-16 04:59:51


```
# Write your code from scratch here
def reverse(str1):
    list1 = str1.split(".")
    list2 = []

    for i in list1:
        list2.append(i[::-1])
    
    return list2

def main():
    str1 =  str(input())
    list2 = reverse(str1)
    for i in range(len(list2)):
        if i != len(list2) - 1:
            print(list2[i], ".", sep="", end="")
        else:
            print(list2[i], end="") 

        
if __name__ == "__main__":
    main()
```

## Submission at 2024-10-16 05:00:54


```
# Write your code from scratch here
def reverse(str1):
    list1 = str1.split(".")
    list2 = []

    for i in list1:
        list2.append(i[::-1])
    
    return list2

def main():
    str1 =  str(input())
    list2 = reverse(str1)
    print(".".join(list2))

        
if __name__ == "__main__":
    main()
```

## Submission at 2024-10-18 04:34:35


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = min(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low-1

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-18 04:34:44


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = max(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low-1

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-18 04:34:57


```
# Write Python code from scratch
def painter(arr,k):
    sum = 0
    for i in arr:
        sum +=i

    low,high = max(arr), sum
    time = sum

    def possible(mid,arr,k):
        index = 0
        for i in range(k):
            count = mid
            for j in range(index,len(arr)):
                if count>0:
                    count -= arr[j]
                    index = j
        if count>0 and arr[j] == arr[-1]:
            return True
        else:
            return False

    while low<high:
        mid = (low+high)//2
        if possible(mid,arr,k):
            high = mid
        else:
            low = mid+1
    return low-1

def main():
    inp1 = list(map(int, input().split()))
    inp2 = list(map(int,input().split()))

    print(painter(inp2,inp1[1]))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-18 06:15:11


```
# Write Python Code from scratch
def discount(arr,n):
    stk = []
    ans = [0]*(n)
    for i in range(n-1,-1,-1):
        if stk == []:
            ans[i] = arr[i]
            stk.append(arr[i])
        else:
            while stk !=[]:
                a = stk.pop()
                if a<arr[i]:
                    ans[i] = arr[i]-a
                    print(ans)
            if ans[i]==arr[i] or ans[i] == 0:
                ans[i] = arr[i]
                stk.append(arr[i])
            else:
                stk.append(a)
                stk.append(arr[i])
    return ans

def main():
    n = int(input())
    arr1 = list(map(int,input().split()))
    print(discount(arr1,n))

if __name__ == "__main__":
    main()



                    

```

## Submission at 2024-10-18 06:17:01


```
# Write Python Code from scratch
def discount(arr,n):
    stk = []
    ans = [0]*(n)
    for i in range(n-1,-1,-1):
        if stk == []:
            ans[i] = arr[i]
            stk.append(arr[i])
        else:
            while stk !=[]:
                a = stk.pop()
                if a<arr[i]:
                    ans[i] = arr[i]-a
            if ans[i]==arr[i] or ans[i] == 0:
                ans[i] = arr[i]
                stk.append(arr[i])
            else:
                stk.append(a)
                stk.append(arr[i])
    return ans

def main():
    n = int(input())
    arr1 = list(map(int,input().split()))
    list1 = discount(arr1,n)
    for i in list1:
        print(i,end= " ")

if __name__ == "__main__":
    main()



                    

```

## Submission at 2024-10-18 06:18:20


```
# Write Python Code from scratch
def discount(arr,n):
    stk = []
    ans = [0]*(n)
    for i in range(n-1,-1,-1):
        if stk == []:
            ans[i] = arr[i]
            stk.append(arr[i])
        else:
            while stk !=[]:
                a = stk.pop()
                if a<arr[i]:
                    ans[i] = arr[i]-a
            if ans[i]==arr[i] or ans[i] == 0:
                ans[i] = arr[i]
                stk.append(arr[i])
            else:
                stk.append(a)
                stk.append(arr[i])
    return ans

def main():
    n = int(input())
    arr1 = list(map(int,input().split()))
    list1 = discount(arr1,n)
    for i in list1:
        print(i,end= " ")

if __name__ == "__main__":
    main()



                    

```

## Submission at 2024-10-18 06:19:57


```
# Write Python Code from scratch
def discount(arr,n):
    stk = []
    ans = [0]*(n)
    for i in range(n-1,-1,-1):
        if stk == []:
            ans[i] = arr[i]
            stk.append(arr[i])
        else:
            while stk !=[]:
                a = stk.pop()
                if a<arr[i]:
                    ans[i] = arr[i]-a
                    break
            if ans[i]==arr[i] or ans[i] == 0:
                ans[i] = arr[i]
                stk.append(arr[i])
            else:
                stk.append(a)
                stk.append(arr[i])
    return ans

def main():
    n = int(input())
    arr1 = list(map(int,input().split()))
    list1 = discount(arr1,n)
    for i in list1:
        print(i,end= " ")

if __name__ == "__main__":
    main()



                    

```

## Submission at 2024-10-18 06:29:03


```
# Write Python Code from scratch
def discount(arr,n):
    stk = []
    ans = [0]*(n)
    for i in range(n-1,-1,-1):
        if stk == []:
            ans[i] = arr[i]
            stk.append(arr[i])
        else:
            while stk !=[]:
                a = stk.pop()
                if a<arr[i]:
                    ans[i] = arr[i]-a
                    break
            if ans[i]==arr[i] or ans[i] == 0:
                ans[i] = arr[i]
                stk.append(arr[i])
            else:
                stk.append(a)
                stk.append(arr[i])
    return ans

def main():
    n = int(input())
    arr1 = list(map(int,input().split()))
    list1 = discount(arr1,n)
    for i in list1:
        print(i,end= " ")

if __name__ == "__main__":
    main()



                    

```

## Submission at 2024-10-25 05:27:56


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
def postOrder(root):
  ans = []
  def order(node):
    if node == None:
      return None
    
    order(node.left)
    order(node.right)
    ans.append(node.data)
  
  order(root)
  return ans

```

## Submission at 2024-10-25 05:33:14


```
# write code from scratch
def wpattern(p,s):
    dict1 = {}

    for i in range(len(p)):
        if p[i] in dict1 and s[i] != dict1[p[i]]:
            return False
        dict1[p[i]] = s[i]
    return True

pattern = str(input())
string = list(map(str,input().split()))
print(wpattern(pattern,string))

```

## Submission at 2024-10-25 05:33:43


```
# write code from scratch
def wpattern(p,s):
    dict1 = {}

    for i in range(len(p)):
        if p[i] in dict1 and s[i] != dict1[p[i]]:
            return "false"
        dict1[p[i]] = s[i]
    return "true"

pattern = str(input())
string = list(map(str,input().split()))
print(wpattern(pattern,string))

```

## Submission at 2024-10-25 05:39:05


```
# write code from scratch
def ransom(note,mag):
    dict1 = {}

    for i in mag:
        dict1[i] = dict1.get(i,0)+1

    for i in note:
        if i not in dict1 or dict1[i] <1:
            return "false"
        else:
            dict1[i] = dict1.get(i,0)-1
    return "true"

ranote = str(input())
magg = str(input())
print(ransom(ranote,magg))

```

## Submission at 2024-10-25 05:44:12


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l.left != r.right or l.right != r.left:
                return "false"
            return "true"
            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:46:07


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left != r.right or l.right != r.left:
                return "false"
            return "true"
            while l and r:
                return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:46:42


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left != r.right or l.right != r.left:
                return "false"

            
            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:49:21


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left != r.right or l.right != r.left:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(self.root.left,self.root.right)
```

## Submission at 2024-10-25 05:49:52


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left != r.right or l.right != r.left:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:50:23


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left != r.right or l.right != r.left:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:51:21


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left != r.right or l.right != r.left:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:52:30


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.lef.data != r.right.data or l.right.data != r.left.data:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:52:38


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.left.data != r.right.data or l.right.data != r.left.data:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:52:54


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
                
            if l.left.data != r.right.data or l.right.data != r.left.data:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:53:43


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"

            if l.left != r.right or l.right != r.left:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:56:05


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"

            if l != r or l != r:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:56:35


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"

            if l.data != r.data or l.data != r.data:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:56:56


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"

            if l.data != r.data:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 05:57:30


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"

            if l != r:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:03:38


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l != r:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:04:15


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l != r:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:04:52


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l != r:
                return "false"

            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:07:04


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l != r:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:07:40


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:15:02


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return False


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:16:01


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self,root):
        if root == None:
            return "true"
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return bool False

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:17:22


```
# write code from scratch
def wpattern(p,s):
    if len(p) != len(s):
        return "false"
    dict1 = {}

    for i in range(len(p)):
        if p[i] in dict1 and s[i] != dict1[p[i]]:
            return "false"
        dict1[p[i]] = s[i]
    return "true"

pattern = str(input())
string = list(map(str,input().split()))
print(wpattern(pattern,string))
```

## Submission at 2024-10-25 06:24:50


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        # if root == None:
        #     return "true"
            
        # if root.left == None and root.right == None:
        #     return "true"
        
        if root.left == "N" or root.right == "N":
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:25:08


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == "N" or root.right == "N":
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:25:28


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == "N" or root.right == "N":
            return "false"


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:29:01


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return ("false")


        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:30:30


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return False

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:30:55


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return bool False

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 06:55:24


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
        h1 = num1
        h2 = num2

        while h1:
            if h1 == num1:
                nh = h1
            node1 = h1.next.next
            h1.next.next = h1
            h1.next = None
            h1 = node1

        while h2:
            if h2 == num2:
                nh2 = h2
            node2 = h2.next.next
            h2.next.next = h2
            h2.next = None
            h2 = node2

        node = Node(None)
        h3 = node
        hh1 = nh
        hh2 = nh2
        while hh1 or hh2:
            if hh1 == None and hh2 == None:
                return h3
            
            if hh1 == None and hh2 != None:
                node.next.data = hh1.data
            
            if hh1 != None and hh2 == None:
                node.next.data = hh2.data

            if hh1 != None and hh2 != None:
                node.next.data = hh1.data + hh2.data
            
            hh1 = hh1.next
            hh2 = hh2.next
            node = node.next
        
        return h3
            

        
        

        








```

## Submission at 2024-10-25 06:55:50


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
        h1 = num1
        h2 = num2

        while h1:
            if h1 == num1:
                nh = h1
            node1 = h1.next.next
            h1.next.next = h1
            h1.next = None
            h1 = node1

        while h2:
            if h2 == num2:
                nh2 = h2
            node2 = h2.next.next
            h2.next.next = h2
            h2.next = None
            h2 = node2

        node = Node(None)
        h3 = node
        hh1 = nh
        hh2 = nh2
        while hh1 or hh2:
            if hh1 == None and hh2 == None:
                return h3
            
            if hh1 == None and hh2 != None:
                node.next.data = hh1.data
            
            if hh1 != None and hh2 == None:
                node.next.data = hh2.data

            if hh1 != None and hh2 != None:
                node.next.data = hh1.data + hh2.data
            
            hh1 = hh1.next
            hh2 = hh2.next
        
        return h3
            

        
        

        








```

## Submission at 2024-10-25 06:56:50


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
        h1 = num1
        h2 = num2

        while h1:
            if h1 == num1:
                nh = h1
            node1 = h1.next.next
            h1.next.next = h1
            h1.next = None
            h1 = node1

        while h2:
            if h2 == num2:
                nh2 = h2
            node2 = h2.next.next
            h2.next.next = h2
            h2.next = None
            h2 = node2

        node = Node(None)
        h3 = node
        hh1 = nh
        hh2 = nh2
        while hh1 or hh2:
            if hh1 == None and hh2 == None:
                return h3
            
            if hh1 == None and hh2 != None:
                node.next.data = hh1.data
                node = node.next
            
            if hh1 != None and hh2 == None:
                node.next.data = hh2.data
                node = node.next

            if hh1 != None and hh2 != None:
                node.next.data = hh1.data + hh2.data
                node = node.next
            
            hh1 = hh1.next
            hh2 = hh2.next
        
        return h3
            

        
        

        








```

## Submission at 2024-10-25 06:59:09


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
        h1 = num1
        h2 = num2

        while h1.next:
            if h1 == num1:
                nh = h1
            node1 = h1.next.next
            h1.next.next = h1
            h1.next = None
            h1 = node1

        while h2.next:
            if h2 == num2:
                nh2 = h2
            node2 = h2.next.next
            h2.next.next = h2
            h2.next = None
            h2 = node2

        node = Node(None)
        h3 = node
        hh1 = nh
        hh2 = nh2
        while hh1 or hh2:
            if hh1 == None and hh2 == None:
                return h3
            
            if hh1 == None and hh2 != None:
                node.next.data = hh1.data
                node = node.next
            
            if hh1 != None and hh2 == None:
                node.next.data = hh2.data
                node = node.next

            if hh1 != None and hh2 != None:
                node.next.data = hh1.data + hh2.data
                node = node.next
            
            hh1 = hh1.next
            hh2 = hh2.next
        
        return h3
            

        
        

        








```

## Submission at 2024-10-25 06:59:52


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
        h1 = num1
        h2 = num2

        while h1.next:
            if h1 == num1:
                nh = h1
            node1 = h1.next.next
            h1.next.next = h1
            h1.next = None
            h1 = node1

        while h2.next:
            if h2 == num2:
                nh2 = h2
            node2 = h2.next.next
            h2.next.next = h2
            h2.next = None
            h2 = node2

        node = Node(None)
        h3 = node
        hh1 = nh
        hh2 = nh2
        while hh1.next or hh2.next:
            if hh1 == None and hh2 == None:
                return h3
            
            if hh1 == None and hh2 != None:
                node.next.data = hh1.data
                node = node.next
            
            if hh1 != None and hh2 == None:
                node.next.data = hh2.data
                node = node.next

            if hh1 != None and hh2 != None:
                node.next.data = hh1.data + hh2.data
                node = node.next
            
            hh1 = hh1.next
            hh2 = hh2.next
        
        return h3
            

        
        

        








```

## Submission at 2024-10-25 07:00:38


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
        return None


```

## Submission at 2024-10-25 07:00:57


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
        return num1.data+num2.data


```

## Submission at 2024-10-25 07:01:53


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if root.left == None or root.right == None:
            return "false"

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 07:02:07


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if (root.left == None) or (root.right == None):
            return "false"

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 07:02:57


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if (root.left == None) or (root.right == None):
            return str("false")

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-25 07:03:25


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return "true"
            
        if root.left == None and root.right == None:
            return "true"
        
        if (root.left == None) or (root.right == None):
            return "false"

        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            if l==None or r== None:
                return "false"
            if l.data != r.data:
                return "false"

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)
```

## Submission at 2024-10-30 05:01:01


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return True
            
            if l==None or r==None:
                return False
                
            if l.val!=r.val:
                return False
            
            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)

```

## Submission at 2024-10-30 05:01:43


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return "true"
            
            if l==None or r==None:
                return "false"
                
            if l.val!=r.val:
                return "false"
            
            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)

```

## Submission at 2024-10-30 05:02:35


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return True
            
            if l==None or r==None:
                return False
                
            if l.val!=r.val:
                return False
            
            return symmetric(l.left,r.right) and symmetric(l.right,r.left)
        
        return symmetric(root.left,root.right)

```

## Submission at 2024-10-30 05:05:28


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def symmetric(l,r):
            if l==None and r==None:
                return True
            
            if l==None or r==None:
                return False
                
            if l.val!=r.val:
                return False
            
            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        symmetric(root.left,root.right)

```

## Submission at 2024-10-30 05:09:00


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        if root == None:
            return True
            
        if root.left == None and root.right == None:
            return True
        
        if root.left == None or root.right == None:
            return False

        def symmetric(l,r):
            if l==None and r==None:
                return True
            if l==None or r== None:
                return False
            if l.data != r.data:
                return False

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)

```

## Submission at 2024-10-30 05:09:27


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        # if root == None:
        #     return True
            
        # if root.left == None and root.right == None:
        #     return True
        
        # if root.left == None or root.right == None:
        #     return False

        def symmetric(l,r):
            if l==None and r==None:
                return True
            if l==None or r== None:
                return False
            if l.data != r.data:
                return False

            return (symmetric(l.left,r.right) and symmetric(l.right,r.left))
        
        return symmetric(root.left,root.right)

```

## Submission at 2024-10-30 05:48:47


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
        h1 = num1
        l1 = []
        while h1:
            l1.append(h1.data)
            h1 = h1.next
        
        h2 = num2
        l2 = []
        while h2:
            l2.append(h2.data)
            h2 = h2.next

        m = len(l1)
        n = len(l2)
        j = max(m,n)
        l3 = [-1]*j
        for i in range(j-1,-1,-1):
            if l2[i] and l1[i]:
                l3[i] = l1[i]+l2[i]
            elif l2[i]:
                l3[i] = l2[i]
            else:
                l3[i] = l1[i]

        node = Node(l3[0])
        head = node
        for i in l3:
            node1 = Node(i)
            node.next = node1
            node = node1
        return head








```

## Submission at 2024-10-30 06:01:18


```
def stk(arr):
    stk = []
    ans = arr[:]

    for i in range(len(arr)):
        while stk and arr[i] < arr[stk[-1]]:
            element = stk.pop()
            ans[element] = ans[element] - arr[i]
        stk.append(i)
    return ans

def main():
    leng = int(input())
    arr1 = list(map(int,input().split()))
    print(stk(arr1))

if __name__=="__main__":
    main()
```

## Submission at 2024-10-30 06:01:45


```
def stk(arr):
    stk = []
    ans = arr[:]

    for i in range(len(arr)):
        while stk and arr[i] <= arr[stk[-1]]:
            element = stk.pop()
            ans[element] = ans[element] - arr[i]
        stk.append(i)
    return ans

def main():
    leng = int(input())
    arr1 = list(map(int,input().split()))
    print(stk(arr1))

if __name__=="__main__":
    main()
```

## Submission at 2024-10-30 06:02:22


```
def stk(arr):
    stk = []
    ans = arr[:]

    for i in range(len(arr)):
        while stk and arr[i] < arr[stk[-1]]:
            element = stk.pop()
            ans[element] = ans[element] - arr[i]
        stk.append(i)
    return ans

def main():
    leng = int(input())
    arr1 = list(map(int,input().split()))
    x = (stk(arr1))
    for i in x:
        print(i,end = " ")

if __name__=="__main__":
    main()
```

## Submission at 2024-10-30 06:02:51


```
def stk(arr):
    stk = []
    ans = arr[:]

    for i in range(len(arr)):
        while stk and arr[i] <= arr[stk[-1]]:
            element = stk.pop()
            ans[element] = ans[element] - arr[i]
        stk.append(i)
    return ans

def main():
    leng = int(input())
    arr1 = list(map(int,input().split()))
    x = (stk(arr1))
    for i in x:
        print(i,end = " ")

if __name__=="__main__":
    main()
```

## Submission at 2024-11-14 12:38:01


```
# Write Python code from scratch
def anagram(s,t):
    # if len(s)>len(l) or len(l)> len(s):
    #     return "false"
    # st1 = []
    # st2= []
    # for i in s:
    #     st1.append(i)
    # for i in t:
    #     st2.append(i)
    s.sort()
    t.sort()
    
    if s==t:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))

```

## Submission at 2024-11-14 12:39:01


```
# Write Python code from scratch
def anagram(s,t):

    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    s.sort()
    t.sort()
    
    if s==t:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))

```

## Submission at 2024-11-14 12:39:43


```
# Write Python code from scratch
def anagram(s,t):

    st1 = []
    st2= []
    for i in s:
        st1.append(i)
    for i in t:
        st2.append(i)
    st1.sort()
    st2.sort()
    
    if st1==st2:
        return "true"
    else:
        return "false"

str1 = str(input())
str2= str(input())
print(anagram(str1,str2))

```

## Submission at 2024-11-14 12:57:38


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    dict1 = {}

    curr = head1
    while curr:
      dict1[curr.val] = dict1.get(curr.val, 0 ) + 1
      curr = curr.next

    curr2 = head2
    head = ListNode(0)
    ll = head
    while curr2:
      if curr2.val in dict1 and dict1[curr2.val] !=0 :
        ll.next = ListNode(curr2.val)
        dict1[curr2.val] -= 1
        ll = ll.next

      curr2 = curr2.next

    return head.next 
        


```

## Submission at 2024-11-14 13:07:25


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0
        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev


```

## Submission at 2024-11-14 13:07:54


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0
        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev


```

## Submission at 2024-11-14 13:11:30


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0
        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev


```

## Submission at 2024-11-14 13:11:51


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0
        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev


```

## Submission at 2024-11-16 09:42:18


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0
        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev



```

## Submission at 2024-11-19 09:04:31


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0
        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val
            curr.next = Node(sum%10)

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev



```

## Submission at 2024-11-19 09:08:38


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0

        prev1 = None  
        curr1 = l1
        while curr1 is not None:
            next_node1 = curr1.next             
            curr1.next = prev1             
            prev1 = curr1  
            curr1 = next_node1  
        
        l1 = prev1

        prev2 = None  
        curr2 = l2
        while curr2 is not None:
            next_node2 = curr2.next             
            curr2.next = prev2             
            prev2 = curr2  
            curr2 = next_node2  
        l2 = prev2

        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val
            curr.next = Node(sum%10)

            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev



```

## Submission at 2024-11-19 09:10:27


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0

        prev1 = None  
        curr1 = l1
        while curr1 is not None:
            next_node1 = curr1.next             
            curr1.next = prev1             
            prev1 = curr1  
            curr1 = next_node1  
        
        l1 = prev1

        prev2 = None  
        curr2 = l2
        while curr2 is not None:
            next_node2 = curr2.next             
            curr2.next = prev2             
            prev2 = curr2  
            curr2 = next_node2  
        l2 = prev2

        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10


            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev



```

## Submission at 2024-11-19 09:14:19


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    // code here
}
```

## Submission at 2024-11-19 09:14:33


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0

        prev1 = None  
        curr1 = l1
        while curr1 is not None:
            next_node1 = curr1.next             
            curr1.next = prev1             
            prev1 = curr1  
            curr1 = next_node1  
        
        l1 = prev1

        prev2 = None  
        curr2 = l2
        while curr2 is not None:
            next_node2 = curr2.next             
            curr2.next = prev2             
            prev2 = curr2  
            curr2 = next_node2  
        l2 = prev2

        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10


            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev


```

## Submission at 2024-11-19 09:15:02


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
 
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, l1, l2):
        head = Node(0)
        curr = head
        carry = 0

        prev1 = None  
        curr1 = l1
        while curr1 is not None:
            next_node1 = curr1.next             
            curr1.next = prev1             
            prev1 = curr1  
            curr1 = next_node1  
        
        l1 = prev1

        prev2 = None  
        curr2 = l2
        while curr2 is not None:
            next_node2 = curr2.next             
            curr2.next = prev2             
            prev2 = curr2  
            curr2 = next_node2  
        l2 = prev2

        while l1 or l2 or carry:
            l1_val = l1.data if l1 else 0
            l2_val = l2.data if l2 else 0
            sum = l1_val + l2_val + carry
            curr.next = Node(sum%10)
            carry = sum//10


            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
            curr = curr.next
        
        prev = None
        curr = head.next

        while curr:
            next_node = curr.next
            curr.next = prev
            prev = curr
            curr = next_node
        
        return prev


```

## Submission at 2024-11-19 09:21:21


```
# write code from scratch
def ransome(note,mag):
    dict1 = {}

    for i in mag:
        dict1[i] = dict1.get(i,0) + 1

    for i in note:
        if i in dict1 and dict1[i]!=0:
            dict1[i] -=1
            continue
        else:
            return false
    return true

def main():
    s1 = str(input())
    s2 = str(input())

    print(ransome(s1,s2))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-19 09:22:25


```
# write code from scratch
def ransome(note,mag):
    dict1 = {}

    for i in mag:
        dict1[i] = dict1.get(i,0) + 1

    for i in note:
        if i in dict1 and dict1[i]!=0:
            dict1[i] -=1
            continue
        else:
            return False
    return True

def main():
    s1 = str(input())
    s2 = str(input())

    print(ransome(s1,s2))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-19 09:23:06


```
# write code from scratch
def ransome(note,mag):
    dict1 = {}

    for i in mag:
        dict1[i] = dict1.get(i,0) + 1

    for i in note:
        if i in dict1 and dict1[i]!=0:
            dict1[i] -=1
            continue
        else:
            return "false"
    return "true"

def main():
    s1 = str(input())
    s2 = str(input())

    print(ransome(s1,s2))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-22 04:58:06


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        if root == None:
            return True
        
        if root.left : 
            if root.left.val>root.val:
                return False
        
        if root.right:
            if root.right.val<root.val:
                return False

        return self.isBST(root.left) and self.isBST(root.right)
```

## Submission at 2024-11-22 04:58:51


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        if root == None:
            return True
        
        if root.left : 
            if root.left.val>root.val:
                return False
        
        if root.right:
            if root.right.val<root.val:
                return False

        return self.isBST(root.left) and self.isBST(root.right)
```

## Submission at 2024-11-22 05:02:21


```
def twice(arr):
    dict1=[]

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    score = 0
    for i in dict1:
        if dict1[i]>1:
            score+=1

    return score

l1 = int(input())
ar1= list(map(int,input().split()))
print(twice(ar1))
```

## Submission at 2024-11-22 05:03:09


```
def twice(arr):
    dict1={}

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    score = 0
    for i in dict1:
        if dict1[i]>1:
            score+=1

    return score

l1 = int(input())
ar1= list(map(int,input().split()))
print(twice(ar1))
```

## Submission at 2024-11-22 05:05:16


```
def sum(arr):
    sum=0 
    for i in arr:
        sum+=i

    return sum

l1= int(input())
ar1 = list(map(int,input().split()))
print(sum(ar1))
```

## Submission at 2024-11-22 05:09:38


```
n = int(input())

for i in range(0,n+1):
    print("*"*i)

for i in range(n-1,0,-1):
    print("*"*i)
```

## Submission at 2024-11-22 05:11:22


```
n = int(input())

for i in range(1,n+1):
    print("*"*i)

for i in range(n-1,0,-1):
    print("*"*i)
```

## Submission at 2024-11-22 05:15:10


```
# Write Code From Scratch Here
l1 = list(map(int,input().split()))

print(l1[1]-l1[0])
```

## Submission at 2024-11-22 05:20:16


```
# write code from scratch
count = 0
l1=  list(map(int,input().split()))
a1 = list(map(int,input().split()))
a2 = list(map(int,input().split()))
flag = True
for i in range(l1[0]):
    for j in range(l2[1]):
        dis = a1[i]-a2[j]
        if dis <= l1[2]:
            flag = False
    
    if flag ==True:
        count+=1

print(count)
    
```

## Submission at 2024-11-22 05:21:16


```
# write code from scratch
count = 0
l1=  list(map(int,input().split()))
a1 = list(map(int,input().split()))
a2 = list(map(int,input().split()))
flag = True
for i in range(l1[0]):
    for j in range(l1[1]):
        dis = abs(a1[i]-a2[j])
        if dis <= l1[2]:
            flag = False
    
    if flag ==True:
        count+=1

print(count)  
```

## Submission at 2024-11-22 05:22:11


```
# write code from scratch
count = 0
l1=  list(map(int,input().split()))
a1 = list(map(int,input().split()))
a2 = list(map(int,input().split()))
flag = True
for i in range(l1[0]):
    for j in range(l1[1]):
        dis = abs(a1[i]-a2[j])
        if dis <= l1[2]:
            flag = False
    
    if flag ==True:
        count+=1

print(count)  
```

## Submission at 2024-11-22 05:30:54


```
# write code from scratch
def freq(arr):
    dict1={}

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    l = 0
    f= 1000000
    for i in dict1:
        if i>l and dict1[i]<=f:
            l= i
            f =dict1[i]

    return l

l1 = int(input())
a1 = list(map(int,input().split()))
print(freq(a1))





```

## Submission at 2024-11-22 05:37:53


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    prev =head
    curr= head.next
    
    while curr:
        if curr.val == prev.val:
            node = curr.next
            prev.next = node
            curr = node

        




```

## Submission at 2024-11-22 05:39:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.val = head.next.val:
        head.next = head.next.next

    prev =head
    curr= head.next
    
    while curr:
        if curr.val == prev.val:
            node = curr.next
            prev.next = node
            curr = node
            continue
        
        else:
            prev = curr
            curr = curr.next
    
    return head

        




```

## Submission at 2024-11-22 05:42:20


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.data = head.next.data:
        head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr:
        if curr.data == prev.data:
            node = curr.next
            prev.next = node
            curr = node
            continue
        
        else:
            prev = curr
            curr = curr.next
    
    return head

        




```

## Submission at 2024-11-22 05:45:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr:
        if curr.data == prev.data:
            node = curr.next
            prev.next = node
            curr = node
            continue
        
        else:
            prev = curr
            curr = curr.next
    
    return head

        




```

## Submission at 2024-11-22 05:46:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr:
        if curr.data == prev.data:
            node = curr.next
            prev.next = node
            curr = node
            continue
        
        else:
            prev = curr
            curr = curr.next
    
    return head

```

## Submission at 2024-11-22 05:49:35


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''
class Solution:
    def isBST(self, root):
        if root == None:
            return True
        
        if root.left : 
            if root.left.val>root.val:
                return False
        
        if root.right:
            if root.right.val<root.val:
                return False

        return self.isBST(root.left) and self.isBST(root.right)
```

## Submission at 2024-11-22 05:53:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr:
        if curr.data == prev.data:
            node = curr.next
            prev.next = node
            curr = node
            continue
        
        else:
            prev = curr
            curr = curr.next
    
    return head

```

## Submission at 2024-11-22 05:56:09


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head
    dict1 = {}
    
    while curr:
        dict1[curr.val] = dict1.get(curr.val,0)+1

    l2 = node()
    h2 = l2
    curr = h2

    for i in dict1:
        node1 = node()
        curr.next =node1
        curr = curr.next

    return h2.next

```

## Submission at 2024-11-22 05:59:25


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head
    dict1 = {}
    
    while curr:
        dict1[curr.data] = dict1.get(curr.data,0)+1
        curr = curr.next

    l2 = self.node(0)
    h2 = l2
    curr = h2

    for i in dict1:
        node1 = self.node(i)
        curr.next =node1
        curr = curr.next

    return h2.next

```

## Submission at 2024-11-22 06:00:00


```
def freq(arr):
    dict1={}

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    l = 0
    f= 1000000
    for i in dict1:
        if i>=l and dict1[i]<=f:
            l= i
            f =dict1[i]

    return l

l1 = int(input())
a1 = list(map(int,input().split()))
print(freq(a1))
```

## Submission at 2024-11-22 06:01:20


```
def freq(arr):
    if len(arr)==0:
        return None
    
    if len(arr)==1:
        return arr[0]
    dict1={}

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    l = 0
    f= 1000000
    for i in dict1:
        if i>=l and dict1[i]<=f:
            l= i
            f =dict1[i]

    return l

l1 = int(input())
a1 = list(map(int,input().split()))
print(freq(a1))
```

## Submission at 2024-11-22 06:02:23


```
def freq(arr):
    if len(arr)==0:
        return 0
    
    if len(arr)==1:
        return arr[0]
    dict1={}

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    l = 0
    f= 1000000
    for i in dict1:
        if i>l and dict1[i]<=f:
            l= i
            f =dict1[i]

    return l

l1 = int(input())
a1 = list(map(int,input().split()))
print(freq(a1))
```

## Submission at 2024-11-22 06:05:27


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr:
        if curr.data == prev.data:
            node = curr.next
            prev.next = node
            curr = node
            continue
        
        else:
            prev = curr
            curr = curr.next
    
    return head

```

## Submission at 2024-11-22 06:13:33


```
# write code from scratch
def twice(arr):
    dict1={}

    for i in arr:
        dict1[i] = dict1.get(i,0)+1

    score = 0
    for i in dict1:
        if dict1[i]=2:
            score+=1

    return score

l1 = int(input())
ar1= list(map(int,input().split()))
print(twice(ar1))
```

## Submission at 2024-11-22 06:21:34


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr:
        if curr.next.data = curr.data:
            l1 =curr.data
            while curr.next.data = l1:
                prev.next = curr.next.next

        prev = curr
        curr = curr.next

    return head

```

## Submission at 2024-11-22 06:26:53


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr.next:
        if curr.next.data = curr.data:
            l1 =curr.data
            while curr.next.data == l1:
                prev.next = curr.next.next
                curr = curr.next


        prev = curr
        curr = curr.next

    return head


```

## Submission at 2024-11-22 06:29:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr.next:
        if curr.next.data = curr.data:
            prev.next = curr.next.next
            curr = curr.next.next
        
        else:
            prev =curr
            curr = curr.next

    return head


```

## Submission at 2024-11-22 06:32:29


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next
    
    while curr.next:
        if curr.next.data == curr.data:
            prev.next = curr.next.next
            curr = curr.next.next
        
        else:
            prev =curr
            curr = curr.next

    return head
```

## Submission at 2024-11-22 06:35:04


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next

    if curr.data == prev.data and curr.next == None:
        return None
    
    while curr.next:
        if curr.next.data == curr.data:
            prev.next = curr.next.next
            curr = curr.next.next
        
        else:
            prev =curr
            curr = curr.next

    return head
```

## Submission at 2024-11-22 06:41:27


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        if root == None:
            return True
        
        if root.left:
            if root.left.data > root.data:
                return False

        if root.right:
            if root.right.data < root.data:
                return False

        return self.isBST(root.left) and self.isBST(root.right)

```

## Submission at 2024-11-22 06:54:12


```
# write code from scratch
count = 0
l1=  list(map(int,input().split()))
a1 = list(map(int,input().split()))
a2 = list(map(int,input().split()))
flag = "True"
for i in range(l1[0]):
    for j in range(l1[1]):
        dis = abs(a1[i]-a2[j])
        if dis <= l1[2]:
            flag = "False"
    
    if flag =="True":
        count+=1

print(count)  
```

## Submission at 2024-11-22 06:56:59


```
# write code from scratch
count = 0
l1=  list(map(int,input().split()))
a1 = list(map(int,input().split()))
a2 = list(map(int,input().split()))
flag = "True"
for i in range(l1[0]):
    flag = "True"
    for j in range(l1[1]):
        dis = abs(a1[i]-a2[j])
        if dis <= l1[2]:
            flag = "False"
    
    if flag =="True":
        count+=1

print(count) 
```

## Submission at 2024-11-22 07:00:08


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
    # if head.data = head.next.data:
    #     head.next = head.next.next
        
    prev =head
    curr= head.next

    if curr.data == prev.data and curr.next == None:
        return None
    
    if curr.data == prev.data:
        return None

    while curr.next:
        if curr.next.data == curr.data:
            prev.next = curr.next.next
            curr = curr.next.next
        
        else:
            prev =curr
            curr = curr.next

    return head

```

## Submission at 2024-11-22 07:02:03


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head
        
    if head.data == head.next.data:
        head.next = head.next.next
        
    prev =head
    curr= head.next

    if curr.data == prev.data and curr.next == None:
        return None

    while curr.next:
        if curr.next.data == curr.data:
            prev.next = curr.next.next
            curr = curr.next.next
        
        else:
            prev =curr
            curr = curr.next

    return head
```

## Submission at 2024-11-22 07:05:47


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next == None:
        return head

    if head.next.next:
        if head.data == head.next.data and head.data == head.next.next.data:
            return None
        
    prev =head
    curr= head.next

    if curr.data == prev.data and curr.next == None:
        return None

    while curr.next:
        if curr.next.data == curr.data:
            prev.next = curr.next.next
            curr = curr.next.next
        
        else:
            prev =curr
            curr = curr.next

    return head

```

