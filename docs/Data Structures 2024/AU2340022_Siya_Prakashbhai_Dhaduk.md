## Submission at 2024-08-09 04:45:06


```
x=str(input())
print("Hello "+x+"!")
```

## Submission at 2024-08-09 04:45:46


```
x=str(input())
print("Hello "+x+"!")
```

## Submission at 2024-08-09 04:52:44


```
n=int(input())
for i in range(0,n):
    name[i]=str(input())
for i in range(0,n):
    print(name[i])


```

## Submission at 2024-08-09 05:05:40


```
x=str(input())
print("Hello "+x+"!")

```

## Submission at 2024-08-09 05:16:25


```
n=int(input())
for i in range (0,n):
    g=input()
    print("Hello "+g+"!")
```

## Submission at 2024-08-16 04:42:29


```
def fibonacci(x:int) -> int:
    if x==0:
        return 0
    if x==1:
        return 1
    return (fibonacci(x-1)+fibonacci(x-2))

def main():
    x = int(input().strip())

    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:36:54


```
def is_power_of_two(n:int) -> int: 
    if n==1:
        return "true"
    if n<=0 or n%2!=0:
        return "false"
    return is_power_of_two(n/2)

    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 11:07:43


```
def combine(n, k):
    assert (n<=20 and n>=1) and (k>=1 and k<=n)
    result = []

    def backtrack(start, path):
        if len(path) == k:
            result.append(path[:])  
            return
        
        if start > n:
            return
        
        path.append(start)
        backtrack(start + 1, path)
        
        path.pop()
        backtrack(start + 1, path)
                     

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

## Submission at 2024-08-22 11:18:23


```
def permute(nums):
    assert len(nums)>=1 and len(nums)<=6
    if len(nums)==1:
        return [nums]
    result = []
    for i in range(len(nums)):
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([nums[i]] + p)
    return result

def main():

    nums= list(map(int, input().split()))
    
    if not all(-10 <= num <= 10 for num in nums):
        return

    result = permute(nums)

    result.sort(key=lambda x: (len(x), x if x else float('inf')))

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

# if _name_ == "_main_":
main()
```

## Submission at 2024-08-22 11:21:47


```
def combine(n):
    current=[]
    result=[]
    assert n>=1 and n<=8
    def recurse(f,b):
        if f==0 and b==0:
            result.append("".join(current))
        if f>0:
            current.append('(')
            recurse(f-1,b)
        if b>0 and f<b:
            current.append(')')
            recurse(f,b-1)
        if len(current)>0:
            current.pop()

    recurse(n,n)
    return result

def main():

    n= int(input())

    result = combine(n)

    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    print("[", end="")
    for i in range(len(result)):
        print('"', end="")
        for j in range(len(result[i])):
            print(result[i][j], end="")
            if j < len(result[i]) - 1:
                print("", end="")
        print('"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

# if _name_ == "_main_":
main()
```

## Submission at 2024-08-30 02:12:19


```

def check(Len1,Len2,L1,L2):
    check1 = True
    L1.sort()
    L2.sort()
    if Len1 != len(L1) or Len2 != len(L2) or Len1 != Len2 or len(L1) != len(L2):
        check1 = False
    else:
        for i in range(len(L1)):
            if L1[i] != L2[i]:
                check1=False
    return check1
def main():
    Len1, Len2 = map(int,(input().split()))
    L1= list(map(int ,(input().split())))
    L2= list(map(int ,(input().split())))
    print(check(Len1,Len2,L1,L2))

if __name__ == "__main__":
    main()   



```

## Submission at 2024-08-30 02:23:24


```
n, k = map(int, input().split())


arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

if len(arr1) != n or len(arr2) != k:
    print("false")
else:
 
    if sorted(arr1) == sorted(arr2):
        print("true")
    else:
        print("false")
```

## Submission at 2024-08-30 02:24:45


```
def sum_divisible(n):
    return sum(i for i in range(1, n+1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)

n = int(input())
print(sum_divisible(n))
```

## Submission at 2024-08-30 02:25:35


```
def count_even_digits(nums):
    return sum(1 for num in nums if len(str(num)) % 2 == 0)

n = int(input())
nums = list(map(int, input().split()))
print(count_even_digits(nums))
```

## Submission at 2024-08-30 02:26:00


```
def find_kth_missing(arr, k):
    expected = 1
    missing_count = 0
    i = 0

    while missing_count < k:
        if i < len(arr) and arr[i] == expected:
            i += 1
        else:
            missing_count += 1
        expected += 1

    return expected - 1

n, k = map(int, input().split())
arr = list(map(int, input().split()))
print(find_kth_missing(arr, k))
```

## Submission at 2024-08-30 02:27:00


```
#Triangular sum of arrays
def triangularSum(n,nums):
        while n>0:
            for i in range(n-1):
                nums[i]= (nums[i]+nums[i+1])%10
            n-=1
        return nums[0]

def main():
    n= int(input())
    nums = list(map(int, input().split()))
    if len(nums)==n:
        print (triangularSum(n,nums))

if _name== "main_":
    main()
```

## Submission at 2024-08-30 02:27:38


```
#Triangular sum of arrays
def triangularSum(n,nums):
        while n>0:
            for i in range(n-1):
                nums[i]= (nums[i]+nums[i+1])
            n-=1
        return nums[0]

def main():
    n= int(input())
    nums = list(map(int, input().split()))
    if len(nums)==n:
        print (triangularSum(n,nums))

if _name== "main_":
    main()
```

## Submission at 2024-08-30 02:31:35


```
def spiral_matrix_traversal(n, m, matrix):
    result = []
    top, bottom, left, right = 0, n-1, 0, m-1
    direction = 0  # 0: right, 1: down, 2: left, 3: up

    while top <= bottom and left <= right:
        if direction == 0:
            for i in range(left, right+1):
                result.append(matrix[top][i])
            top += 1
        elif direction == 1:
            for i in range(top, bottom+1):
                result.append(matrix[i][right])
            right -= 1
        elif direction == 2:
            for i in range(right, left-1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        elif direction == 3:
            for i in range(bottom, top-1, -1):
                result.append(matrix[i][left])
            left += 1
        direction = (direction + 1) % 4

    return ' '.join(map(str, result))

# Example usage
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]
print(spiral_matrix_traversal(n, m, matrix))
```

## Submission at 2024-08-30 02:32:09


```
M, N = map(int, input().split())
matrix = []
for i in range(M):
    matrix.append(list(map(int, input().split())))

# Create a new matrix for transpose
transpose = [[0 for _ in range(M)] for _ in range(N)]

# Fill the transpose matrix
for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

# Print the transpose matrix
for i in range(N):
    for j in range(M):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-30 02:33:04


```
def triangularSum(n,nums):
        while n>0:
            for i in range(n-1):
                nums[i]= (nums[i]+nums[i+1])
            n-=1
        return nums[0]

def main():
    n= int(input())
    nums = list(map(int, input().split()))
    if len(nums)==n:
        print (triangularSum(n,nums))

if _name__ == "main_":
    main()
```

## Submission at 2024-08-30 02:33:46


```
def triangularSum(n,nums):
        while n>0:
            for i in range(n-1):
                nums[i]= (nums[i]+nums[i+1])
            n-=1
        return nums[0]

def main():
    n= int(input())
    nums = list(map(int, input().split()))
    if len(nums)==n:
        print (triangularSum(n,nums))

if __name__ == "main_":
    main()
```

## Submission at 2024-08-30 02:34:45


```
def triangularSum(n,nums):
        while n>0:
            for i in range(n-1):
                nums[i]= (nums[i]+nums[i+1])
            n-=1
        return nums[0]

def main():
    n= int(input())
    nums = list(map(int, input().split()))
    if len(nums)==n:
        print (triangularSum(n,nums))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 04:57:35


```
def power(x,n):
    if n>0:
        return n*n
    if n==0:
        return 
    return power(x,n-1)

def main():
    x,n=map(int,input().split())
    print(power(x,n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:05:07


```
def new(n,a,b):
    c=[]
    for i in range(n):
        if a[i]>=b[i]:
            k=a[i]
        else:
            k=b[i]
        c.append(k)
    return c



def main():
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans=new(n,a,b)
    for i in ans:
        print(i,end=" ")
if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 05:46:54


```
def power(x,n):
    if n>0:
        return n*n
    return power(x,n-1)

def main():
    x,n=map(int,input().split())
    print(power(x,n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:48:10


```
def power(x,n):
    if n>0:
        return n*n
    if n==0:
        return 1
    return power(x,n-1)

def main():
    x,n=map(int,input().split())
    print(power(x,n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:50:48


```
def power(x,n):
    if n==2:
        return x
    return power(x*x,n-1)

def main():
    x,n=map(int,input().split())
    print(power(x,n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 06:07:17


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    prev=head
    temp=head.next
    while(temp.next!=None):
        temp.next=prev
        prev=prev.next
        temp=temp.next
    return temp

```

## Submission at 2024-09-06 05:00:15


```
def p(s):
    while len(s)>1:
        if s[0]==s[-1]:
            s.pop(-1)
            s.pop(0)
            p(s)
        else:
            return "NO"
    return "YES"

def main():
    s=list(map(str, input()))
    r=p(s)
    print(r)

if __name__=="__main__":
    main()
    
```

## Submission at 2024-09-06 05:10:45


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    curr = head
    prev= None
    while curr:
        temp=curr.next
        curr.next=prev
        prev=curr
        curr=temp
    return prev
    
```

## Submission at 2024-09-06 05:45:14


```

def diagonal_traversal(matrix):
    rowcount=0
    ans=[]
    n=len(matrix)
    m=len(matrix[0])
    while rowcount<n:
        colcount=0
        count=0
        while colcount<m  and rowcount-count>=0:
            ans.append(matrix[rowcount-count][colcount])
            count=count+1;
            colcount=colcount+1;

        rowcount=rowcount+1

    colcount2=1
    while colcount2<m:
        rowcount2=n-1
        count=0
        while rowcount2>=0 and colcount2+count<m:
            ans.append(matrix[rowcount2][colcount2+count])
            count=count+1;
            rowcount2=rowcount2-1;
        colcount2=colcount2+1



    return ans   
    

```

## Submission at 2024-10-04 05:11:43


```
def temp(arr,n):
    arr1=[]
    for i in range (n):
        count = 1
        k = 0
        for j in range (i+1,n):
            if arr[j]>arr[i]:
                arr1.append(count)
                k = -1
                break
            else:
                count = count+1
        if k != -1:
            arr1.append(0)

    return arr1
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    s = temp(arr,n)
    for i in range(n):
        print(s[i],end=' ')
if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 05:26:53


```
def time(n,arr,k,t,i):
    if arr[k]==0:
        return t
    else:
        arr[i]=arr[i]-1
        if i < n-1:
            i = i+1
        else:
            i = 0
    return time(n,arr,k,t+1,i)
    # while i != -1:
    #     s = 0
    #     arr[i] = arr[i]-1
    #     t = t+1
    #     i = i+1
    #     if i == (n-1):
    #         i = 0
    #     if arr[k]==0:
    #         return t 
    #         i = -1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k,t,i))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 05:29:31


```
def time(n,arr,k):
    # if arr[k]==0:
    #     return t
    # else:
    #     arr[i]=arr[i]-1
    #     if i < n-1:
    #         i = i+1
    #     else:
    #         i = 0
    # return time(n,arr,k,t+1,i)
    i = 0
    t = 0
    while i != -1:
        s = 0
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (n-1):
            i = 0
        if arr[k]==0:
            return t 
            i = -1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 05:30:55


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (n):
            i = 0
        if arr[k]==0:
            return t 
            i = -1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 05:32:34


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        if arr[i]!=0:
            arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (n):
            i = 0
        if arr[k]==0:
            return t 
            i = -1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 05:42:29


```
def unit(n,arr,k):
    def time(arr1):
        sum=0
        for i in range(len(arr1)):
            sum = sum+arr1[i]
        return sum
    low =0
    high = n
    m = (low+high)//2
    left = arr[:m]
    right = arr[m:]
    l = time(left)
    r = time(right)
    return max(l,r)
def main():
    n,k = map(int,input().split())
    arr = list(map(int, input().split()))
    print(unit(n,arr,k))
if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:01:34


```
def check(s,t):
    if len(s)!=len(t):
        return "false"
    s1=list(s)
    s1.sort()
    s2=list(t)
    s2.sort()
    for i in range(len(s1)):
        if s1[i]!=s2[i]:
            return "false"
    return "true"
def main():
    s = str(input())
    t = str(input())
    print(check(s,t))
if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:04:23


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (len(arr)):
            i = 0
        if arr[k]==0:
            return t 
            i = -1
        if arr[i]==0 and i!=k:
            arr.pop(i)
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:10:58


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        if arr[i]==0 and i!=k:
            continue
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (len(arr)):
            i = 0
        if arr[k]==0:
            return t 
            i = -1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:13:45


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        if arr[i]==0 and i!=k:
            continue
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (len(arr)):
            i = 0
        if arr[k]==0:
            return t 
            i=-1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    t = 0
    i=0
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:17:40


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        if arr[i]==0 and i!=k:
            continue
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i == (len(arr)):
            i = 0
        if arr[k]==0:
            return t 
            i=-1
    
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:19:32


```
def time(n,arr,k):
    i = 0
    t = 0
    while i != -1:
        if arr[i]==0 and i!=k:
            continue
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i > (len(arr)-1):
            i = 0
        if arr[k]==0:
            return t 
            i=-1  
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:20:34


```
def time(n,arr,k):
    i = 0
    t = 0
    while arr:
        if arr[i]==0 and i!=k:
            continue
        arr[i] = arr[i]-1
        t = t+1
        i = i+1
        if i > (len(arr)-1):
            i = 0
        if arr[k]==0:
            return t 
            break 
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    print(time(n,arr,k))

if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:28:43


```
def unit(n,m,arr,k):
    def time(arr1,a):
        sum=0
        for i in range(len(arr1)):
            if arr[i]<=a:
                sum=sum+1
        return sum
    low =0
    high = n
    a = m//k
    m = (low+high)//2
    left = arr[:m]
    right = arr[m:]
    l = time(left,a)
    r = time(right,a)
    return (l+r)

def main():
    n,m,k = map(int,input().split())
    arr = list(map(int, input().split()))
    print(unit(n,m,arr,k))
if __name__ == '__main__':
    main()
```

## Submission at 2024-10-04 06:28:58


```
def unit(n,m,arr,k):
    def time(arr1,a):
        sum=0
        for i in range(len(arr1)):
            if arr[i]<=a:
                sum=sum+1
        return sum
    low =0
    high = n
    a = m//k
    m = (low+high)//2
    left = arr[:m]
    right = arr[m:]
    l = time(left,a)
    r = time(right,a)
    return (l+r)

def main():
    n,m,k = map(int,input().split())
    arr = list(map(int, input().split()))
    print(unit(n,m,arr,k))
if __name__ == '__main__':
    main()
```

## Submission at 2024-10-25 05:29:14


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
    if root is None:
      return None
    ans = []
    def post(node):
      if node is None:
        return None
      if node.left:
        post(node.left)
      if node.right:
        post(node.right)
      ans.append(node.data)
    post(root)
    return ans
```

## Submission at 2024-10-25 05:33:59


```
def check(r,m):
    if len(r)>len(m):
        return "false"
    hashmap={}
    for i in range(len(m)):
        hashmap[m[i]]=1
    for i in range(len(r)):
        if r[i] not in hashmap:
            return "false"
    return "true"
def main():
    r = str(input())
    m = str(input())
    print(check(r,m))
if __name__=='__main__':
    main()

```

## Submission at 2024-10-25 05:38:44


```
def check(r,m):
    if len(r)>len(m):
        return "false"
    hashmap={}
    for i in range(len(m)):
        if m[i] not in hashmap:
            hashmap[m[i]]=1
        else:
            hashmap[m[i]]=hashmap[m[i]]+1
    for i in range(len(r)):
        if r[i] not in hashmap:
            return "false"
        else:
            hashmap[m[i]]=hashmap[m[i]]-1
        if r[i] in hashmap and hashmap[r[i]]<1:
            return "false"
    return "true"
def main():
    r = str(input())
    m = str(input())
    print(check(r,m))
if __name__=='__main__':
    main()

```

## Submission at 2024-10-25 05:45:42


```
def check(p,s):

    s1 = (s.split())
    p={} #patt
    w={}#str
    for w1,si in zip(p,s1):
        if w1 not in hashmap:
            p[w1]=si
        elif w1 in hashmap and w1!=si:
            return "false"
        if si not in hashmap:
            w[si]=w1
        elif si in hashmap and si!=w1:
            return "false"
    return "true"
def main():
    p = str(input())
    s = str(input())
    print(check(p,s))
if __name__=='__main__':
    main()
```

## Submission at 2024-10-25 05:50:16


```
def check(p,s):
    if p==None or s==None:
        return "false"
    s1 = (s.split())
    p1  = p.split()
    ph={} #patt
    sh={}#str
    for w1,si in zip(p1,s1):
        if w1 not in ph:
            ph[w1]=si
        elif w1 in ph and ph[w1]!=si:
            return "false"
        if si not in sh:
            sh[si]=w1
        elif si in sh and sh[si]!=w1:
            return "false"
    return "true"
def main():
    p = str(input())
    s = str(input())
    print(check(p,s))
if __name__=='__main__':
    main()
```

## Submission at 2024-10-25 06:02:07


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
        if root is None:
            return "true"
        if root.left is None and root.right:
            return "false"
        if root.right is None and root.left:
            return "false"
        left = root.left
        right = root.right
        
        ansl = []
        ansr=[]
        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post(node.right) 
            if node.left:
                post(node.left)
              
        post(left)
        post2(right)
        if len(ansl)!=len(ansr):
            return "false"
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return "false"


        return "true"
```

## Submission at 2024-10-25 06:33:03


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
        l1=[]
        l2=[]
        r=num1
        r2=num2
        while r:
            l1.append(r.data)
            r=r.next
        while r2:
            l2.append(r2.data)
            r2=r2.next
        n1=0
        n2=0
        for i in range(len(l1)-1,-1,-1):
            n1 = n1 + (l1[i]*(pow(10,i)))
        for i in range(len(l2)-1,-1,-1):
            n2 = n2+(l2[i]*(pow(10,i)))    
        sum = n1+n2
        s1 = Node.__init__(self,None)

        while sum:
            m1 = sum//10
            s1.data = m1
            s1=s1.next
            sum =sum%10
        return s1
        
        
        
        


```

## Submission at 2024-10-25 06:49:25


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            
            if node.left:
                post(node.left)
            ansl.append(node.data)
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            if node.right:
                post2(node.right) 
            ansr.append(node.data)
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:11


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
                ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:19


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:19


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:20


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:20


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:22


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:23


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:27


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:50:44


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return True


        return True
```

## Submission at 2024-10-25 06:57:40


```
def check(p,s):
    if p==None and s!=None:
        return "false"
    if p!=None and s==None:
        return "false"
    s1 = s.split()
    p1  = []
    for i in range(len(p)):
        p1.append(p[i])
    ph={} #patt
    sh={}#str
    for pi,si in zip(p1,s1):
        if pi not in ph:
            ph[pi]=si
        elif pi in ph and ph[pi]!=si:
            return "false"
        if si not in sh:
            sh[si]=pi
        elif si in sh and sh[si]!=pi:
            return "false"

    return "true"
def main():
    p = str(input())
    s = str(input())
    print(check(p,s))
if __name__=='__main__':
    main()
```

## Submission at 2024-11-15 05:29:24


```
def check(r,m):
    if len(r)>len(m):
        return "false"
    hashmap={}
    for char in m:
        hashmap[char] = hashmap.get(char, 0) + 1
    for char in r:
        if char not in hashmap or hashmap[char] == 0:
            return "false"
        hashmap[char] -= 1
    return "true"
def main():
    r = str(input())
    m = str(input())
    print(check(r,m))
if __name__=='__main__':
    main()
```

## Submission at 2024-11-15 05:33:07


```
def check(r,m):
    if len(r)>len(m):
        return "false"
    hashmap={}
    for char in m:
        hashmap[char] = hashmap.get(char, 0) + 1
    for char in r:
        if char not in hashmap or hashmap[char] == 0:
            return "false"
        hashmap[char] -= 1
    return "true"
def main():
    r = str(input())
    m = str(input())
    print(check(r,m))
if __name__=='__main__':
    main()
```

## Submission at 2024-11-15 05:40:12


```
def temp(arr,n):
    arr1=[]
    for i in range (n):
        count = 1
        k = 0
        for j in range (i+1,n):
            if arr[j]>arr[i]:
                arr1.append(count)
                break
            else:
                count = count+1
        
        arr1.append(0)

    return arr1
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    s = temp(arr,n)
    for i in range(n):
        print(s[i],end=' ')
if __name__ == '__main__':
    main()
Submission ID
```

## Submission at 2024-11-15 05:40:52


```
def temp(arr,n):
    arr1=[]
    for i in range (n):
        count = 1
        k = 0
        for j in range (i+1,n):
            if arr[j]>arr[i]:
                arr1.append(count)
                k = -1
                break
            else:
                count = count+1
        if k!= -1:
            arr1.append(0)

    return arr1
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    s = temp(arr,n)
    for i in range(n):
        print(s[i],end=' ')
if __name__ == '__main__':
    main()
Submission ID
```

## Submission at 2024-11-15 05:41:20


```
def temp(arr,n):
    arr1=[]
    for i in range (n):
        count = 1
        k = 0
        for j in range (i+1,n):
            if arr[j]>arr[i]:
                arr1.append(count)
                k = -1
                break
            else:
                count = count+1
        if k != -1:
            arr1.append(0)

    return arr1
def main():
    n = int(input())
    arr = list(map(int, input().split()))
    s = temp(arr,n)
    for i in range(n):
        print(s[i],end=' ')
if __name__ == '__main__':
    main()

```

## Submission at 2024-11-15 08:45:36


```
def least(n,arr,k):
    hashmap={}
    ans=[]
    for i in range(n):
        if arr[i] not in hashmap:
            hashmap[arr[i]]=0
        else:
            hashmap[arr[i]]+=1
    for i in hashmap:
        if hashmap[i]>=k:
            ans.append(i)
    return ans
def main():
    n,k = map(int,input().split())
    arr = list(map(int, input().split()))
    anss=least(n,arr,k)
    for i in range(len(anss)):
        print(anss[i],end='')
if __name__ == '__main__':
    main()
```

## Submission at 2024-11-15 08:47:55


```
def least(n,arr,k):
    hashmap={}
    ans=[]
    for i in range(n):
        if arr[i] not in hashmap:
            hashmap[arr[i]]=0
        else:
            hashmap[arr[i]]+=1
    for i in hashmap:
        if hashmap[i]>=k:
            return i
    return -1
def main():
    n,k = map(int,input().split())
    arr = list(map(int, input().split()))
    anss=least(n,arr,k)
    print(anss)
if __name__ == '__main__':
    main()
```

## Submission at 2024-11-15 08:50:59


```
def least(n,arr,k):
    hashmap={}
    ans=[]
    for i in range(n):
        if arr[i] not in hashmap:
            hashmap[arr[i]]=1
        else:
            hashmap[arr[i]]+=1
    for i in hashmap:
        if hashmap[i]>=k:
            return i
    return -1
def main():
    n,k = map(int,input().split())
    arr = list(map(int, input().split()))
    anss=least(n,arr,k)
    print(anss)
if __name__ == '__main__':
    main()
```

## Submission at 2024-11-16 02:48:11


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
        if root is None:
            return True
        if root.left is None and root.right:
            return False
        if root.right is None and root.left:
            return False

        left = root.left
        right = root.right
        ansl=[]
        ansr=[]

        def post(node):
            if node is None:
                return None
            ansl.append(node.data)
            if node.left:
                post(node.left)
            
            if node.right:
                post(node.right)
        def post2(node):
            if node is None:
                return None
            ansr.append(node.data)
            if node.right:
                post2(node.right) 
            
            if node.left:
                post2(node.left)
              
        post(left)
        post2(right)

        if len(ansl)!=len(ansr):
            return False
        else:
            for i in range(len(ansr)):
                if ansr[i]!=ansl[i]:
                    return False


        return True
```

## Submission at 2024-11-16 02:49:11


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
        if root is None:
            return True

        def isMirror(left, right):
            if left is None and right is None:
                return True
            if left is None or right is None:
                return False
            return (
                left.data == right.data
                and isMirror(left.left, right.right)
                and isMirror(left.right, right.left)
            )

        return isMirror(root.left, root.right)

```

## Submission at 2024-11-22 05:15:56


```
def dist(m,n,d,arr1,arr2):
    s=0
    for i in range(m):
        for j in range(n):
            n1 = abs(arr1[i]-arr2[j])
            if n1<0:
                n1 = +abs(arr1[i]-arr2[j])
            if n1<=d:
                s+=1
    print(s)

def main():
    m,n,d = map(int,input().split())
    arr1 = list(map(int,input().split()))
    arr2 = list(map(int,input().split()))
    dist(m,n,d,arr1,arr2)
if __name__=='__main__':
    main()


```

## Submission at 2024-11-22 05:27:41


```
def fre(n,arr):
    h={}
    ans=[]
    for i in range(n):
        if arr[i] in h:
            h[arr[i]]+=1
        else:
            h[arr[i]]=1
    min1 = float('inf')  
    for a in h:
        min1 = min(h[a],min1)
    for a in h:
        if h[a]==min1:
            ans.append(a)
    ans.sort()
    print(ans[-1])
     

def main():
    n = int(input())
    arr1 = list(map(int,input().split()))
    fre(n,arr1)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 05:34:30


```
def dist(m,n,d,arr1,arr2):
    ans=0
    for i in range(m):
        s=0
        for j in range(n):
            if abs(arr1[i]-arr2[j])<=d:
                s+=1
        if s==0:
            ans+=1
            
    print(ans)

def main():
    m,n,d = map(int,input().split())
    arr1 = list(map(int,input().split()))
    arr2 = list(map(int,input().split()))
    dist(m,n,d,arr1,arr2)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:01:49


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    s=[]
    temp=head
    while temp!=None:
        a = temp.data
        if a not in s:
            s.append(a)
        elif a in s:
            s.pop()
        temp=temp.next
    temp1=head
    temp1.data=s[0]
    for i in range(1,len(s)):
        temp1.next.data = s[i]
        temp1=temp1.next
    temp1.next=None
    return head


```

## Submission at 2024-11-22 06:09:28


```
def star(n):
    m=(2*n)-1
    for i in range(m):
        for j in range(i):
            print('*',end='')
        print()

def main():
    n=int(input())
    star(n)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:10:48


```
def star(n):
    m=(2*n)-1
    for i in range(m):
        for j in range(i):
            print('*',end='')
        print()

def main():
    n=int(input())
    star(n)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:14:27


```
def star(n):
    m=(2*n)-1
    for i in range(1,m+1):
        for j in range(i):
            print('*',end='')
        print()

def main():
    n=int(input())
    star(n)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:17:21


```
def star(n):
    m=(2*n)-1
    for i in range(1,m+1):
        for j in range(1,i+1):
            print('*',end='')
        print()

def main():
    n=int(input())
    star(n)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:26:49


```
def add(n,arr):
    sum=0
    for i in range(n):
        sum=sum+arr[i]
    print(sum)
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    add(n,arr)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:27:22


```
def add(n,arr):
    sum=0
    for i in range(n):
        sum=sum+arr[i]
    print(sum)
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    add(n,arr)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:33:18


```
def add(a,b):
    m1=float('inf')
    t=0
    for i in range(a,b+1):
        t=(i-a)+(b-i)
        m1=min(m1,t)
    print(m1)
def main():
    a,b=map(int,input().split())
    add(a,b)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:39:21


```
def add(n,arr):
    s=0
    f=[0]*n
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]==arr[j] and f[j]!=-1:
                s=s+1
                f[j]=-1
    print(s)
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    add(n,arr)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:45:07


```
def star(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print('*',end='')
        print()
    m=(2*n)-1
    s=m-n
    for i in range(s,0,-1):
        for j in range(1,i+1):
            print('*',end='')
        print()

def main():
    n=int(input())
    star(n)
if __name__=='__main__':
    main()
```

## Submission at 2024-11-22 06:54:20


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
        if root.data==None:
            return True
        def check(node):
            if node.left.data==None or node.righ.data==None:
                return True
            if node.left.data<node.data:
                check(node.left)
            elif node.right.data>node.data:
                check(node.right)
            else:
                return False
            return True
        return check(root)
            
```

## Submission at 2024-11-22 06:58:10


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head.next==None:
        return head
    s=[]
    temp=head
    while temp!=None:
        a = temp.data
        if a not in s:
            s.append(a)
        elif a in s:
            s.pop()
        temp=temp.next
    temp1=head
    temp1.data=s[0]
    for i in range(1,len(s)):
        temp1.next.data = s[i]
        temp1=temp1.next
    temp1.next=None
    return head
```

## Submission at 2024-11-22 07:07:25


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
        if root.data==None:
            return True
        def check(node):
            if node.left.data==None and node.righ.data==None:
                return True
            if node.left.data==None and node.right.data!=None:
                if node.right.data>node.data:
                    check(node.right)
                else:
                    return False
            if node.left.data!=None and node.right.data==None:
                if node.left.data<node.data:
                    check(node.left)
                else:
                    return False
            if node.left.data<node.data:
                check(node.left)
            elif node.right.data>node.data:
                check(node.right)
            elif node.right.data<=node.data or node.left.data>=node.data:
                return False
        return check(root)
```

