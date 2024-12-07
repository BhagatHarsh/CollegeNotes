## Submission at 2024-08-09 04:48:06


```
name=str(input())
print("Hello "+name+"!")


```

## Submission at 2024-08-09 04:48:37


```
name=str(input())
print("Hello "+name+"!")


```

## Submission at 2024-08-09 04:50:18


```
name=str(input())
print("Hello "+name+"!")


```

## Submission at 2024-08-09 05:07:11


```
name=str(input())
print("Hello "+name+"!")

```

## Submission at 2024-08-16 04:47:38


```
def fibonacci(n:int) -> int:
    if n==0:
        return 0
        
    if n==1:
        return 1
        
    return fibonacci(n-1)+fibonacci(n-2)

def main():
    n=int(input().strip())
    print(fibonacci(n))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-16 04:48:54


```
def fibonacci(n:int) -> int:
    if n==0:
        return 0
        
    if n==1:
        return 1
        
    return fibonacci(n-1)+fibonacci(n-2)

def main():
    n=int(input().strip())
    print(fibonacci(n))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-16 05:36:37


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==1 :
       return "true"
    if n<=0 or n%2 !=0:
        return "false"
    return is_power_of_two(n/2)
    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 12:00:01


```
def combine(n):
    current=[]
    result=[]
    assert (n)>=1 and (n)<=8
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

if __name__ == "__main__":
   main()
```

## Submission at 2024-08-22 12:03:41


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

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 12:13:32


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

## Submission at 2024-08-30 02:13:06


```
def transpose(matrix,m,n):
    mat1=[[0] * m for _ in range(n)]
    for i in range(m):
        for j in range(n):
            mat1[j][i] = matrix[i][j]
    
    return mat1


def main():
    M,N=map(int,(input().split()))
    matrix=[]
    for _ in range(M):
        row = list(map(int, input().split()))
        matrix.append(row)
        assert len(row) == N

    assert len(matrix) == M   
    Transpose_Matrix=transpose(matrix,M,N)
    for row in Transpose_Matrix:
        print(' '.join(map(str, row)))
if __name__== "__main__":
    main()


```

## Submission at 2024-08-30 02:23:38


```
# Write the code from scratch, no boilerplate is required
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

## Submission at 2024-08-30 02:24:57


```
def sum_divisible(n):
    return sum(i for i in range(1, n+1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)

n = int(input())
print(sum_divisible(n))
```

## Submission at 2024-08-30 02:25:43


```
def count_even_digits(nums):
    return sum(1 for num in nums if len(str(num)) % 2 == 0)

n = int(input())
nums = list(map(int, input().split()))
print(count_even_digits(nums))
```

## Submission at 2024-08-30 02:26:33


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

## Submission at 2024-08-30 02:28:36


```
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

if __name__== "main_":
    main()
```

## Submission at 2024-08-30 02:34:21


```
# Write Code from Scratch
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

## Submission at 2024-08-30 02:35:18


```
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

if __name__== "__main__":
    main()
```

## Submission at 2024-08-30 02:35:59


```
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

if __name__== "__main__":
    main()
```

## Submission at 2024-08-30 02:37:06


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

## Submission at 2024-08-30 04:52:57


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=int(input())
    arr=list(map(int,input.split()))
    isPalindrome(0,n,arr)
    


```

## Submission at 2024-08-30 05:00:40


```
# Write code from scratch
def isPalindrome(i,n,arr):
    for i in range (n-1): 
        if i==n-1-i:
            return True
        
        if arr[i]==[n-i-1]:
            return True
        else:
            return False
    isPalindrome(i+1,n,arr)



def main():
    arr=list(map(int,input.split()))
    n=len(arr)
    ans=isPalindrome(0,n,arr)
    if ans==True:
        print("YES")
    else:
        print("NO")

if __name__=="__main__":
    main()

    


```

## Submission at 2024-08-30 05:02:54


```
# Write code from scratch
def isPalindrome(i,n,arr):
    for i in range (n-1): 
        if i==n-1-i:
            return True
        
        if arr[i]==[n-i-1]:
            return True
        else:
            return False
    isPalindrome(i+1,n,arr)



def main():
    arr=list(map(str,input))
    n=len(arr)
    ans=isPalindrome(0,n,arr)
    if ans==True:
        print("YES")
    else:
        print("NO")

if __name__=="__main__":
    main()

    


```

## Submission at 2024-08-30 05:16:34


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==0:
        return 1
    if n==1:
        return x

    xpow=x*pow(x,n-1)
    return xpow

def main():
    n=(map(int,input.split()))
    print(pow(x,n))
if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 05:28:51


```
# Write code from scratch
def maximalarr(n,a,b):
    c=[]
    for i in range(n):
        if a[i]>b[i]:
            c[i]=a[i]
        else:
            c[i]=b[i]

    return c[i]

def main():
    n=int(input())
    
    a=list(map(int,input.split()))
    b=list(map(int,input.split()))
    for i in range (n):
        print(maximalarr(n,a,b))
if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 05:28:51


```
# Write code from scratch
def maximalarr(n,a,b):
    c=[]
    for i in range(n):
        if a[i]>b[i]:
            c[i]=a[i]
        else:
            c[i]=b[i]

    return c[i]

def main():
    n=int(input())
    
    a=list(map(int,input.split()))
    b=list(map(int,input.split()))
    for i in range (n):
        print(maximalarr(n,a,b))
if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 05:47:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    
    while curr!=None:
        prev=None
        curr=head
        temp=head
        curr=curr.next
        prev=curr
    return prev
def list(a,n,head):
        head=a[i]
def main():
    n=int(input())
    a=list(map(int,input.split()))
    for i in range(n):
        list(a,n,head)
        i+=1
        list(a,n,head.next)
    print(reverseLinkedList(head))
if __name__=="__main__":
    main()
        

```

## Submission at 2024-08-30 05:55:22


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    
    while curr!=None:
        prev=None
        curr=head
        temp=head
        curr=curr.next
        prev=curr
    return prev
def list(a,n,head):
        head=a[i]
def main():
    n=int(input())
    
    a=list(map(int,input.split()))
    for i in range(n):
        list(a,n,head)
        i+=1
        list(a,n,head.next)
    print(reverseLinkedList(head))
if __name__=="__main__":
    main()
        

```

## Submission at 2024-08-30 05:55:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    
    while curr!=None:
        prev=None
        curr=head
        temp=head
        curr=curr.next
        prev=curr
    return prev
def list(a,n,head):
        head=a[i]
def main():
    n=int(input())
    
    a=list(map(int,input.split()))
    for i in range(n):
        list(a,n,head)
        i+=1
        list(a,n,head.next)
    print(reverseLinkedList(head))
if __name__=="__main__":
    main()
        

```

## Submission at 2024-08-30 06:09:14


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=int(input())
    arr=list(map(int,input.split()))
    isPalindrome(0,n,arr)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 06:09:46


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=int(input())
    arr=list(map(str,input.split()))
    isPalindrome(0,n,arr)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 06:12:31


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=int(input())
    arr=list(map(str,input.split()))
    isPalindrome(0,n,arr)
    
if __name__=="__main__":
    main()

```

## Submission at 2024-08-30 06:12:32


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=int(input())
    arr=list(map(str,input.split()))
    isPalindrome(0,n,arr)
    
if __name__=="__main__":
    main()

```

## Submission at 2024-08-30 06:22:58


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=map(int,input.split())
    arr=list(map(str,input.split()))
    isPalindrome(0,n,arr)
    
if __name__=="__main__":
    main()

```

## Submission at 2024-08-30 06:23:06


```
# Write code from scratch
def isPalindrome(i,n,arr):
    if i==n-1-i:
        print("YES")
    
    if arr[i]==[n-i-1]:
        print("YES")
    else:
        print("NO")
    isPalindrome(i+1,n,arr)


def main():
    n=map(int,input.split())
    arr=list(map(str,input.split()))
    isPalindrome(0,n,arr)
    
if __name__=="__main__":
    main()

```

## Submission at 2024-09-06 05:10:37


```
# Write code from scratch
# Write code from scratch
def isPalindrome(i,n,arr):
    if i>=n-1-i:
        print("YES")
        
    if arr[i]==[n-i-1]:
        isPalindrome(i+1,n,arr)
    else:
        print("NO")
        return
    


def main():
    
    arr=list(map(str,input().split()))
    n=len(arr)
    isPalindrome(0,n,arr)


if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 06:23:12


```
# Write code from scratch
# Write code from scratch
# Write code from scratch
def isPalindrome(i,n,arr):
    if i>=n/2:
        print("YES")
        return

    if arr[i]!=arr[n-1-i]:
        print("NO")
        return
        
    isPalindrome(i+1,n,arr)
      

def main():
    
    arr=input()
    n=len(arr)
    isPalindrome(0,n,arr)


if __name__=="__main__":
    main()
```

## Submission at 2024-10-04 05:09:18


```
# Write Python code from scratch

def isAnagram(s,t):
    flag=False
    n=len(s)
    for i in range(n):
        for j in range(n):
            if s[i] ==t[j]:
                flag=True
            else:
                flag=False
    return flag


def main():
    s=list(map(str,input()))
    t=list(map(str,input()))
    ans=isAnagram(s,t)
    print(ans)

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-04 05:11:11


```
# Write Python code from scratch

def isAnagram(s,t):
    j=0
    flag=False
    n=len(s)
    for i in s:
        while j in t:
            if i == j:
                flag=True
            else:
                flag=False
            
    return flag


def main():
    s=list(map(str,input()))
    t=list(map(str,input()))
    ans=isAnagram(s,t)
    print(ans)

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-04 05:20:56


```
# Write Python code from scratch
def warmerTemp(n,temp):
    output=n*[0]
    for i in range(n):
        for j in range(i+1,n,1):
            if temp[j]>temp[i]:
                output[i]=(j-i)
                break
            
            
            

    return output

def main():
    n=int(input())
    temp=list(map(int,input().split()))
    ans=warmerTemp(n,temp)
    print(ans)

if __name__ =="__main__":
    main()

```

## Submission at 2024-10-04 05:49:43


```
# Write Python Code from scratch
def bloom(bloomDay,low,high,mid,m):
    flower=0
    bouquet=0
    for i in range(0,bloomDay):
        if i==mid:
            flower+=1
        if flower==k:
            flower=0
            bouquet+=1
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=min(bloomDay)
    high=max(bloomDay)
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,low,high,mid,m):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-04 05:52:47


```
# Write Python code from scratch
def warmerTemp(n,temp):
    output=n*[0]
    for i in range(n):
        for j in range(i+1,n,1):
            if temp[j]>temp[i]:
                output[i]=(j-i)
                break
    return output

def main():
    n=int(input())
    temp=list(map(int,input().split()))
    ans=warmerTemp(n,temp)
    print(ans)

if __name__ =="__main__":
    main()
```

## Submission at 2024-10-04 06:04:30


```
def isAnagram(s,t):
    stack1=[]
    
    j=0
    
    n=len(s)
    for i in s:
        stack1.append(i)
    
        while j in t:
            if stack[-1]==j:
                t.remove(j)
                stack1.pop()
                break
            
            
    return len(stack1)==0


def main():
    s=list(map(str,input()))
    t=list(map(str,input()))
    ans=isAnagram(s,t)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-04 06:11:13


```
# Write Python Code from scratch
def bloom(bloomDay,mid,m,k):
    flower=0
    bouquet=0

    for i in (0,bloomDay):
        if i==mid:
            flower+=1
        if flower==k:
            flower=0
            bouquet+=1
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=min(bloomDay)
    high=max(bloomDay)
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,mid,m,k):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-04 06:13:10


```
# Write Python Code from scratch
def bloom(bloomDay,mid,m,k):
    flower=0
    bouquet=0

    for i in (0,bloomDay):
        if i==mid:
            flower+=1
        if flower==k:
            flower=0
            bouquet+=1
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=0
    high=n-1
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,mid,m,k):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-04 06:16:50


```
# Write Python Code from scratch
def bloom(bloomDay,mid,m,k):
    flower=0
    bouquet=0

    for i in (0,bloomDay):
        if i==mid:
            flower+=1
        if flower==k:
            flower=0
            bouquet+=1
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=min(bloomDay)
    high=max(bloomDay)
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,mid,m,k):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-04 06:17:31


```
# Write Python Code from scratch
def bloom(bloomDay,mid,m,k):
    flower=0
    bouquet=0

    for i in (0,bloomDay):
        if i==mid:
            flower+=1
        if flower==k:
            flower=0
            bouquet+=1
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=min(bloomDay)
    high=max(bloomDay)
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,mid,m,k):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-11 04:42:11


```
# Write Python code from scratch
def warmerTemp(n,temp):
    output=n*[0]
    for i in range(n):
        for j in range(i+1,n,1):
            if temp[j]>temp[i]:
                output[i]=(j-i)
                break
    return output

def main():
    n=int(input())
    temp=list(map(int,input().split()))
    ans=warmerTemp(n,temp)
    for i in range(len(ans)):
        print(ans[i],end=" ")

if __name__ =="__main__":
    main()

```

## Submission at 2024-10-16 08:16:16


```
# Write Python code from scratch
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[]
    j=0
    arr[j]=0
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        
```

## Submission at 2024-10-16 08:23:08


```
def painter(n, k, s):
    value = n // k  # Number of elements per painter
    counter = 0
    arr = [0] * k  # Initialize array with k painters
    j = 0  # Index for which painter we are on
    
    for i in range(len(s)):
        arr[j] += s[i]  # Add work for current painter
        counter += 1
        if counter == value and j < k - 1:  # Move to next painter if counter matches
            j += 1
            counter = 0  # Reset counter for the next painter
    
    return max(arr)  # Return max work load among the painters

def main():
    n, k = map(int, input().split())  # n: total work units, k: painters
    s = list(map(int, input().split()))  # Work to be done by each painter
    ans = painter(n, k, s)
    print(ans)

if __name__ == '__main__':
    main()

```

## Submission at 2024-10-16 08:24:35


```
 # Write Python code from scratch
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:29:48


```
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:30:15


```
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:30:40


```
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:31:01


```
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:31:45


```
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:35:44


```
def painter(n,k,s):
    value=n//k
    counter=0
    arr=[0]*k
    j=0
    
    for i in range(len(s)):
        arr[j]+=s[i]
        counter+=1
        if counter==n-value:
            j+=1
            counter=0
    return max(arr)

def main():
    n,k = map(int,input().split())
    s = list(map(int,input().split()))
    ans=painter(n,k,s)
    print(ans)
if __name__ == '__main__':
    main()        

```

## Submission at 2024-10-16 08:53:30


```
def isPossible(boards, n, k, mid):
    curr_sum = 0
    painters = 1  # Start counting from the first painter
    for i in range(n):
        if curr_sum + boards[i] > mid:
            painters += 1  # We need an additional painter
            curr_sum = boards[i]
            if painters > k:
                return False
        else:
            curr_sum += boards[i]
    return True

def painterproblem(boards, n, k):
    low = max(boards)
    high = sum(boards)
    result = high
    while low <= high:
        mid = (low + high) // 2  # Calculate the middle point
        if isPossible(boards, n, k, mid):
            result = mid  # Try for a smaller max time
            high = mid - 1
        else:
            low = mid + 1
    
    return result

def main():
    n, k = map(int, input().split())  # n: number of boards, k: number of painters
    boards = list(map(int, input().split()))  # Length of each board
    print(painterproblem(boards, n, k))

if __name__ == '__main__':
    main()

```

## Submission at 2024-10-25 05:31:30


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
ans=[]
def postOrder(root):

    # code here
    node=root
    if node is None:
      return
    
    postOrder(node.left)
    postOrder(node.right)
    ans.append(node.data)
    return ans
```

## Submission at 2024-10-25 05:35:52


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    if len(s)!=len(a):
        return False
    if s!=a:
        return False
    else:
        return True
    
def main():
    s=input()
    a=input()
    ans=ransomNote(s,a)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 05:39:36


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    if len(s)!=len(a):
        return False
    if s!=a:
        return False
    else:
        return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 05:40:38


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    if len(s)!=len(a):
        return False
    if s!=a:
        return False
    else:
        return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 05:48:24


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
    

```

## Submission at 2024-10-25 05:49:40


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
    

```

## Submission at 2024-10-25 05:50:59


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
    

```

## Submission at 2024-10-25 05:52:16


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()

    if len(pattern)!=len(words):
        return False
    
    for i in range(len(pattern)):

        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        
        else:
            hashmap[i]=words[i]


    for j in range(len(words)):
        if words[j] in wordmap:
            if wordmap[j]!=pattern[j]:
                return False
        else:
            wordmap[j]=pattern[j]
    return True

def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
    

```

## Submission at 2024-10-25 05:53:35


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:09:05


```
# write code from scratch
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    if len(s)!=len(a):
        return False
    for i in range(len(s)):
        if s[i]!=a[i]:
            return False
    # if s!=a:
    #     return False
    # else:
    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:14:06


```
# write code from scratch
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:16:07


```
# write code from scratch
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
        
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:16:26


```
# write code from scratch
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:17:04


```
# write code from scratch
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]
    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:17:24


```
# write code from scratch
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]
            
    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:17:49


```
# write code from scratch
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:22:48


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
        # Your Code Here
        if root is None:
            return True
        t1=root.left
        t2=root.right

        def isMirror(root):
            isMirror(root.left)
            isMirror(root.right)
            return root.left and root.right

        return (t1.data==t2.data) and isMirror(t1) and isMirror(t2)
```

## Submission at 2024-10-25 06:23:41


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:24:40


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:25:15


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]
    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True 
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:26:14


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()

    if len(pattern)!=len(words):
        return False

    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True 
    
def main():
    pattern=list(input())
    s=str(input())
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:27:02


```
# write code from scratch

# write code from scratch
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    if len(s)!=len(a):
        return False
    for i in range(len(s)):
        if s[i]!=a[i]:
            return False
    # if s!=a:
    #     return False
    # else:
    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:29:37


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
        # Your Code Here
        if root is None:
            return True
        t1=root.left
        t2=root.right

        def isMirror(node):
            isMirror(node.left)
            isMirror(node.right)
            return node.left and node.right

        return (t1.data==t2.data) and isMirror(t1) and isMirror(t2)
```

## Submission at 2024-10-25 06:38:07


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    if len(s)!=len(a):
        return False
    for i in range(len(s)):
        if s[i]!=a[i]:
            return False
        else:
            continue
    # if s!=a:
    #     return False
    # else:
    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:39:06


```
# write code from scratch
def ransomNote(s,a):
    s.sort(s)
    a.sort(a)
    if len(s)!=len(a):
        return False
    for i in range(len(s)):
        if s[i]!=a[i]:
            return False
        else:
            continue
    # if s!=a:
    #     return False
    # else:
    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    

if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:43:25


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    
    if len(s)!=len(a):
        return False
    for i in range(len(s)):
        if s[i]!=a[i]:
            return False

    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:45:23


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    
    if len(s)!=len(a):
        return False
    hashmap={}
    for i in range(len(s)):
        if s[i] in hashmap:
            hashmap[s[i]]+=1
        else:
            hashmap[s[i]]=1
    
    for i in range(len(s)):
        if s[i]!=a[i]:
            return False
        else:
            hashmap[s[i]]-=1

    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:46:59


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    
    if len(s)!=len(a):
        return False
    hashmap={}
    # for i in range(len(s)):
    #     if s[i] in hashmap:
    #         hashmap[s[i]]+=1
    #     else:
    #         hashmap[s[i]]=1
    
    # for i in range(len(s)):
    #     if s[i]!=a[i]:
    #         return False
    #     else:
    #         hashmap[s[i]]-=1
    if s!=a:
        return False

    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:47:26


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    
    if len(s)!=len(a):
        return False
    hashmap={}
    # for i in range(len(s)):
    #     if s[i] in hashmap:
    #         hashmap[s[i]]+=1
    #     else:
    #         hashmap[s[i]]=1
    
    # for i in range(len(s)):
    #     if s[i]!=a[i]:
    #         return False
    #     else:
    #         hashmap[s[i]]-=1
    if s!=a:
        return False

    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("True")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:47:49


```
# write code from scratch
def ransomNote(s,a):
    s=sorted(s)
    a=sorted(a)
    
    if len(s)!=len(a):
        return False
    hashmap={}
    # for i in range(len(s)):
    #     if s[i] in hashmap:
    #         hashmap[s[i]]+=1
    #     else:
    #         hashmap[s[i]]=1
    
    # for i in range(len(s)):
    #     if s[i]!=a[i]:
    #         return False
    #     else:
    #         hashmap[s[i]]-=1
    if s!=a:
        return False

    return True
    
def main():
    s=str(input())
    a=str(input())
    ans=ransomNote(s,a)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-10-25 06:50:41


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()

    if len(pattern)!=len(words):
        return False

    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
            
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()

```

## Submission at 2024-10-25 06:58:19


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(pattern)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
	
```

## Submission at 2024-10-25 06:58:43


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
	
```

## Submission at 2024-10-25 06:59:18


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    # if len(pattern)!=len(words):
    #     return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
	
```

## Submission at 2024-10-25 07:00:23


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    # if len(pattern)!=len(words):
    #     return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
            else:
                continue
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
            else:
                continue
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
	
```

## Submission at 2024-10-25 07:00:51


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    # if len(pattern)!=len(words):
    #     return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
            
        else:
            hashmap[i]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
            
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
	
```

## Submission at 2024-11-13 08:37:20


```
# write code from scratch
def wordPattern(pattern, s):
    hashmap = {}
    wordmap = {}
    words = s.split()
    
    if len(pattern) != len(words):
        return False

    for i in range(len(pattern)):
        # Check if pattern character is in hashmap
        if pattern[i] in hashmap:
            if hashmap[pattern[i]] != words[i]:
                return False
        else:
            hashmap[pattern[i]] = words[i]

        # Check if word is in wordmap
        if words[i] in wordmap:
            if wordmap[words[i]] != pattern[i]:
                return False
        else:
            wordmap[words[i]] = pattern[i]
    
    return True

def main():
    pattern = input()
    s = input()
    
    ans = wordPattern(pattern, s)
    if ans:
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-13 08:44:25


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[i]=words[i]

   
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[i]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()

```

## Submission at 2024-11-13 08:46:29


```
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[i]!=words[i]:
                return False
        else:
            hashmap[pattern[i]]=words[i]

   
        if words[i] in wordmap:
            if wordmap[i]!=pattern[i]:
                return False
        else:
            wordmap[words[i]]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()

```

## Submission at 2024-11-15 05:10:13


```
# write code from scratch
def wordPattern(pattern,s):
    hashmap={}
    wordmap={}
    words=s.split()
    if len(pattern)!=len(words):
        return False
    for i in range(len(pattern)):
        if pattern[i] in hashmap:
            if hashmap[pattern[i]]!=words[i]:
                return False
        else:
            hashmap[pattern[i]]=words[i]

    for i in range(len(words)):
        if words[i] in wordmap:
            if wordmap[words[i]]!=pattern[i]:
                return False
        else:
            wordmap[words[i]]=pattern[i]
    return True
    
def main():
    pattern=list(input())
    s=str(input())
    
    ans=wordPattern(pattern,s)
    if ans==True:
        print("true")
    else:
        print("false")
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:12:51


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
ans=[]
def postOrder(root):

    # code here
    node=root
    if node is None:
      return
    
    postOrder(node.left)
    postOrder(node.right)
    ans.append(node.data)
    return ans
```

## Submission at 2024-11-15 05:24:54


```
# write code from scratch
def ransomNote(ransom,magazine):
    s=sorted(ransom)
    a=sorted(magazine)
    
    
    hashmap={}
    
    for i in range(len(magazine)):
        if magazine[i] in hashmap:
            hashmap[magazine[i]]+=1
        else:
            hashmap[magazine[i]]=1
    for i in range(len(ransom)):
        if ransom[i] in hashmap:
            hashmap[ransom[i]]-=1
        else:
            return False
    return True
def main():
    ransom=str(input())
    magazine=str(input())
    ans=ransomNote(ransom,magazine)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:28:34


```
# write code from scratch
def ransomNote(ransom,magazine):
    s=sorted(ransom)
    a=sorted(magazine)
    
    
    hashmap={}
    
    for i in range(len(magazine)):
        if magazine[i] in hashmap and hashmap[magaziane[i]]>0:
            hashmap[magazine[i]]+=1
        else:
            hashmap[magazine[i]]=1
    for i in range(len(ransom)):
        if ransom[i] in hashmap:
            hashmap[ransom[i]]-=1
        else:
            return False
    return True
def main():
    ransom=str(input())
    magazine=str(input())
    ans=ransomNote(ransom,magazine)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:29:03


```
# write code from scratch
def ransomNote(ransom,magazine):
   
    
    hashmap={}
    
    for i in range(len(magazine)):
        if magazine[i] in hashmap and hashmap[magaziane[i]]>0:
            hashmap[magazine[i]]+=1
        else:
            hashmap[magazine[i]]=1
    for i in range(len(ransom)):
        if ransom[i] in hashmap:
            hashmap[ransom[i]]-=1
        else:
            return False
    return True
def main():
    ransom=str(input())
    magazine=str(input())
    ans=ransomNote(ransom,magazine)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:31:58


```
# write code from scratch
def ransomNote(ransom,magazine):
   
    
    hashmap={}
    
    for i in range(len(magazine)):
        if magazine[i] in hashmap and hashmap[magazine[i]]>0:
            hashmap[magazine[i]]+=1
        else:
            hashmap[magazine[i]]=1
    for i in range(len(ransom)):
        if ransom[i] in hashmap:
            hashmap[ransom[i]]-=1
        else:
            return False
    return True
def main():
    ransom=str(input())
    magazine=str(input())
    ans=ransomNote(ransom,magazine)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:33:36


```
# write code from scratch
def ransomNote(ransom,magazine):
   
    
    hashmap={}
    
    for i in range(len(magazine)):
        if magazine[i] in hashmap :
            hashmap[magazine[i]]+=1
        else:
            hashmap[magazine[i]]=1
    for i in range(len(ransom)):
        if ransom[i] in hashmap and hashmap[magazine[i]]>0:
            hashmap[ransom[i]]-=1
        else:
            return False
    return True
def main():
    ransom=str(input())
    magazine=str(input())
    ans=ransomNote(ransom,magazine)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:34:16


```
# write code from scratch
def ransomNote(ransom,magazine):
   
    
    hashmap={}
    
    for i in range(len(magazine)):
        if magazine[i] in hashmap :
            hashmap[magazine[i]]+=1
        else:
            hashmap[magazine[i]]=1
    for i in range(len(ransom)):
        if ransom[i] in hashmap and hashmap[ransom[i]]>0:
            hashmap[ransom[i]]-=1
        else:
            return False
    return True
def main():
    ransom=str(input())
    magazine=str(input())
    ans=ransomNote(ransom,magazine)
    if ans==False:
        print("false")
    else:
        print("true")
    
if __name__=="__main__":
    main()
```

## Submission at 2024-11-15 05:43:32


```
# Write Python code from scratch
def anagram(s,t):
    s=sorted(s)
    t=sorted(t)
    if len(s)!=len(t):
        return False
    if s!=t:
        return False
    return True
    
def main():
    s=str(input())
    t=str(input())
    ans=anagram(s,t)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-11-15 05:44:22


```
# Write Python code from scratch
def anagram(s,t):
    s=sorted(s)
    t=sorted(t)
    if len(s)!=len(t):
        return False
    if s!=t:
        return False
    return True
    
def main():
    s=str(input())
    t=str(input())
    ans=anagram(s,t)
    if ans:
        print('true')
    else:
        print('false')

if __name__ == "__main__":
    main()
```

## Submission at 2024-11-16 04:26:45


```
# Write Python Code from scratch
def bloom(bloomDay,mid,m,k):
    flower=0
    bouquet=0

    for i in range(len(bloomDay)):
        if bloomDay[i]<=mid:
            flower+=1
            if flower==k:
                bouquet+=1
                flower=0
            else:
                flower=0            
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=min(bloomDay)
    high=max(bloomDay)
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,mid,m,k):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-11-16 04:28:19


```
# Write Python Code from scratch
def bloom(bloomDay,mid,m,k):
    flower=0
    bouquet=0

    for i in range(len(bloomDay)):
        if bloomDay[i]<=mid:
            flower+=1
            if flower==k:
                bouquet+=1
                flower=0
            else:
                flower=0            
    if bouquet>=m:
        return m 

def mindays(n,m,k,bloomDay):
    low=min(bloomDay)
    high=max(bloomDay)
    if m*k>n:
        return -1
    while low<=high:
        mid=(low+high)//2
        if bloom(bloomDay,mid,m,k):
            high=mid-1
        else:
            low=mid+1
    return mid

def main():
    n,m,k=map(int,input().split())
    bloomDay=list(map(int,input().split()))
    ans=mindays(n,m,k,bloomDay)
    print(ans)

if __name__=="__main__":
    main()
```

## Submission at 2024-11-22 05:06:15


```
# write code from scratch
def halfDiamond(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print("*",end="")
        print()
    for i in range(n-1,0,-1):
        for j in range(i,0,-1):
            print("*",end="")
        print()

def main():
    n=int(input())
    halfDiamond(n)

if __name__=="__main__":
    main()
```

## Submission at 2024-11-22 05:19:02


```
# Write Code From Scratch Here
def sumArr(n,arr):
    sum=0
    for i in range(0,n):
        sum+=arr[i]
    print(sum)

def main():
    n=int(input())
    arr=list(map(int,input().split()))
    ans=sumArr(n,arr)
    

if __name__=="main":
    main()
```

## Submission at 2024-11-22 05:43:07


```
# Write Code From Scratch Here
def minimize(a,b):
    mini=0
    val=0
    c=0
    for i in range(a,b+1):
        val=(i-a)+(b-i)
        mini=min(mini,val)
        if mini==val:
            c=i
            
    return c

def main():
    a,b=map(int,input().split())
    ans=minimize(a,b)
    print(ans)
if __name__=="__main__":
    main()

```

## Submission at 2024-11-22 05:54:58


```
# Write Code From Scratch 
def sumArray(n,arr):
    sumA=0
    for i in range(0,n):
        sumA+=arr[i]
    return sumA

def main():
    n=int(input())
    arr=list(map(int,input().split()))
    ans=sumArray(n,arr)
    print(ans)
if __name__=="__main__":
    main()
```

## Submission at 2024-11-22 06:03:49


```
# write code from scratch
def occurrence(n,arr):
    for i in range(0,n):
        for j in range(i,n):
            if arr[j]==arr[i]:
                return i+1
def main():
    n=int(input())
    arr=list(map(int,input().split()))
    ans=occurrence(n,arr)
    print(ans)
if __name__=="__main__":
    main()
```

## Submission at 2024-11-22 06:45:26


```
# write code from scratch
def freqGame(n,A):
    hashmap={}
    for i in A:
        if i in hashmap:
            hashmap[i]+=1
        else:
            hashmap[i]=1
    arr=[]
    for j in hashmap:
        if hashmap[j]==1:
            arr.append(i)
    mini=arr[0]
    for i in range(0,len(arr)):
        mini=max(mini,arr[i])
    return mini

def main():
    n=int(input())
    A=list(map(int,input().split()))
    ans=freqGame(n,A)
    print(ans)
if __name__=="__main__":
    main()
```

## Submission at 2024-11-22 06:57:08


```
# Write Code From Scratch Here
def minimize(a,b):
    return ((a+b)/2)+1
def main():
    a,b=map(int,input().split())
    ans=minimize(a,b)
    print(ans)
if __name__=="__main__":
    main()

```

## Submission at 2024-11-22 07:05:41


```
# write code from scratch
def findDistance(m,n,d,arr1,arr2):
    arr=[]
    for i in range(0,m):
        for j in range(0,n):
            if (abs(arr1[i]-arr2[j]))>d and arr1[i] not in arr:
                arr.append(arr1[i])
            else if(abs(arr1[i]-arr2[j]))<=d and arr1[i] in arr:
                arr.remove(arr1[i])
    return len(arr)

def main():
    m,n,d=map(int,input().split)
    arr1=map(list(int,input().split()))
    arr2=map(list(int,input().split()))
    print(findDistance(m,n,d,arr1,arr2))
if __name__=="__main__":
    main()
```

## Submission at 2024-11-22 07:06:16


```
# write code from scratch
def findDistance(m,n,d,arr1,arr2):
    arr=[]
    for i in range(0,m):
        for j in range(0,n):
            if (abs(arr1[i]-arr2[j]))>d and arr1[i] not in arr:
                arr.append(arr1[i])
            else (abs(arr1[i]-arr2[j]))<=d and arr1[i] in arr:
                arr.remove(arr1[i])
    return len(arr)

def main():
    m,n,d=map(int,input().split)
    arr1=map(list(int,input().split()))
    arr2=map(list(int,input().split()))
    print(findDistance(m,n,d,arr1,arr2))
if __name__=="__main__":
    main()
```

