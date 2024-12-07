## Submission at 2024-08-09 04:43:54


```
# Write your Python code here from the scratch
n = input()
print("Hello",n,"!")
```

## Submission at 2024-08-09 04:49:48


```
# Write your Python code here from the scratch
n = input()
print("Hello ",n,"!",sep="")
```

## Submission at 2024-08-09 05:05:38


```
# Write your Python code here
n = int(input())
name = []

for i in range(n):
    n1 = input()
    name.append(n1)

for i in range(n):
    if(1<=n<=100 and 1<=len(name[i])<=100):
        print("Hello ",name[i],"!",sep="")
```

## Submission at 2024-08-09 05:09:02


```
# Write your Python code here from the scratch
n = input()
if 1 <= len(n) <= 100:
    print("Hello ",n,"!",sep="")
```

## Submission at 2024-08-09 05:17:58


```
# Write your Python code here
n  = int(input())


for i in range(n):
    n1 = input()
    if 1 <= n <= 100 and 1 <= len(n1) <= 100:
        print("Hello ",n1,"!",sep="")
    

```

## Submission at 2024-08-16 04:49:21


```
def fibonacci(x:int) -> int:
    # write your logic here
    if 0 <= x <= 10:
        if x<2:
            n = x
        else:
            n = fibonacci(x-1)+fibonacci(x-2)

    return n

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:56:12


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    int n;
    if (0 <= x <= 10){
        if (x<2){
            n = x;
        }
        else{
            n = fibonacci(x-1)+fibonacci(x-2);
        }
    }
    return n;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:15:59


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if -2^31 <= n <= 2^31-1:
        result = "false"
        if n%2==0:  
            if n<=2:
                if n%2 == 0:
                    result = "true"
                else:
                    result = "false"
            else:
                return(is_power_of_two(n/2))

    return result
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:17:49


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if -2^31 <= n <= 2^31-1:
        result = "false"
        if n%2==0:  
            if n<=2:
                if n%2 == 0:
                    result = "true"
                else:
                    result = "false"
            else:
                return(is_power_of_two(n/2))

    return result
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:19:39


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if -2^31 <= n <= 2^31-1:
        result = "false"
        if n%2==0:  
            if n<=2:
                if n%2 == 0:
                    result = "true"
            else:
                return(is_power_of_two(n/2))

    return result
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:22:04


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if -2^31 <= n <= 2^31-1:
        result = "false"
        if n%2==0:  
            if -2<=n<=2:
                if n%2 == 0:
                    result = "true"
            else:
                return(is_power_of_two(n/2))

    return result
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:25:25


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if -2^31 <= n <= 2^31-1:
        result = "false"
        if n%2==0:  
            if -2<=n<=2:
                if n!=0:
                    result = "true"
            else:
                return(is_power_of_two(n/2))

    return result
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:34:12


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    result = "false"
    if -2^31 <= n <= 2^31-1:
        if (n==1):
            return "true"
        if n%2!=0 or n<=0:  
            return "false"
        else:
            return(is_power_of_two(n/2))

    return result
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:12:27


```
def Parentheses(n, start=0, end=0, current="", ans=None):
    if ans is None:
        ans = []
    
    if len(current) == 2 * n:
        ans.append(current)
        return
    
    if start < n:
        Parentheses(n, start + 1, end, current + '(', ans)
    
    if end < start:
        Parentheses(n, start, end + 1, current + ')', ans)
    return ans


def main():
    n = int(input())

    # Generate combinations
    combinations = Parentheses(n)
    
    # Print the combinations
    print("[", end="")
    for i in range(len(combinations)):
        print(f"\"{combinations[i]}\"", end="")
        if i < len(combinations) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 13:32:50


```
def combine(n, k):
    def combine_1(start, current, ans):
        if len(current) == k:  # base case
            ans.append(current[:])
            return

        for i in range(start, n + 1):
            current.append(i)  # Adding the current number to the combination
            combine_1(i + 1, current, ans)  # Recurse with the next number
            current.pop()  # Removing the last number

    ans = []
    combine_1(1, [], ans)
    return ans 

def main():
    n, k = map(int, input().split())

    result = combine(n, k)

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

## Submission at 2024-08-22 13:33:36


```
def combine(n, k):
    def combine_1(start, current, ans):
        if len(current) == k:  
            ans.append(current[:])
            return

        for i in range(start, n + 1):
            current.append(i)  
            combine_1(i + 1, current, ans)  
            current.pop()  

    ans = []
    combine_1(1, [], ans)
    return ans 

def main():
    n, k = map(int, input().split())

    result = combine(n, k)

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

## Submission at 2024-08-22 13:42:06


```
def permute(n):
    ans = []
    
    def pemute_1(start=0):
        if start == len(n):
            ans.append(n[:])
        else:
            for i in range(start, len(n)):
                n[start], n[i] = n[i], n[start]  
                pemute_1(start + 1)  
                n[start], n[i] = n[i], n[start] 
    
    pemute_1()
    return ans

def main():
    
    n = list(map(int, input().split()))

    
    result = permute(n)

   
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

## Submission at 2024-08-29 12:14:45


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is required
def equal_arr(n,n2,arr1,arr2):
    if (n1!=n2):
        return False
    arr1.sort()
    arr2.sort()
    for i in range(n1):
        if arr1[i]!=arr2[i]:
            return False
        return True
        
if __name__=="__main__":
    n1,n2 = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    if equal_arr(n1,n2,arr1,arr2):
        print("true")
    else:
        print("false")
```

## Submission at 2024-08-29 12:21:15


```
def sum_multiple(n):
    cnt=0
    for i in range(n+1):
        if i%3==0 or i%5==0 or i%7==0:
            cnt+=i
    return cnt

if __name__=="__main__":
    n = int(input())
    print(sum_multiple(n))
```

## Submission at 2024-08-29 12:31:19


```
def find_even(n,arr):
    cnt=0
    for i in range(n):
        if len(str(arr[i]))%2==0:
            cnt+=1
    return cnt

if __name__=="__main__":
    n= int(input())
    arr = list(map(int, input().split()))
    print(find_even(n,arr))


```

## Submission at 2024-08-29 12:31:39


```
def find_even(n,arr):
    cnt=0
    for i in range(n):
        if len(str(arr[i]))%2==0:
            cnt+=1
    return cnt

if __name__=="__main__":
    n= int(input())
    arr = list(map(int, input().split()))
    print(find_even(n,arr))


```

## Submission at 2024-08-29 12:44:38


```
def missing_num(arr,k):
    cnt = k
    i = 1
    missing_arr=[]
    while True:
        if i not in arr:
            missing_arr.append(i)
            cnt-=1
        if cnt==0:
            return missing_arr[k-1]
        i+=1
    return 0

if __name__=="__main__":
    n,k= map(int, input().split())
    arr=list(map(int, input().split()))

    print(missing_num(arr,k))
```

## Submission at 2024-08-29 12:58:48


```
def triangular_sum(arr):
    sum_arr=[]
    for i in range(len(arr)-1) :
        sum_arr.append(arr[i]+arr[i+1])
    if len(sum_arr)==1:
        return sum_arr[0]
    return triangular_sum(sum_arr)

if __name__=="__main__":
    n=int(input())
    arr=list(map(int, input().split()))

    print(triangular_sum(arr))
```

## Submission at 2024-08-29 13:01:31


```
def triangular_sum(arr):
    sum_arr=[]
    if len(sum_arr)==1:
        return sum_arr[0]
    for i in range(len(arr)-1) :
        sum_arr.append(arr[i]+arr[i+1])
    
    return triangular_sum(sum_arr)


n=int(input())
arr=list(map(int, input().split()))

print(triangular_sum(arr))
```

## Submission at 2024-08-29 13:03:56


```
def triangular_sum(arr):
    sum_arr=[]
    if len(arr)==1:
        return arr[0]
    for i in range(len(arr)-1) :
        sum_arr.append(arr[i]+arr[i+1])
    
    return triangular_sum(sum_arr)


n=int(input())
arr=list(map(int, input().split()))

print(triangular_sum(arr))
```

## Submission at 2024-08-29 13:04:25


```
def triangular_sum(arr):
    sum_arr=[]
    
    for i in range(len(arr)-1) :
        sum_arr.append(arr[i]+arr[i+1])
    if len(arr)==1:
        return arr[0]
    return triangular_sum(sum_arr)


n=int(input())
arr=list(map(int, input().split()))

print(triangular_sum(arr))
```

## Submission at 2024-08-29 13:30:58


```
# Write Code from Scratch
def transpose(matrix):
    # M for rows, N for cols
    M = len(matrix)
    N = len(matrix[0])

    transpose_matrix = [[0] * M for i in range(N)]

    for i in range(M):
        for j in range(N):
            transpose_matrix[i][j] = matrix[j][i]
    return transpose_matrix

if __name__ == "__main__":
    m,n = map(int, input().split())
    matrix=[]

    for i in range(m):
        row = list(map(int, input().split()))
        matrix.append(row)

    Tmatrix = transpose(matrix) 
    for row in Tmatrix:
        print(*row)

```

## Submission at 2024-08-29 13:32:22


```
# Write Code from Scratch
def transpose(matrix):
    # M for rows, N for cols
    M = len(matrix)
    N = len(matrix[0])

    transpose_matrix = [[0] * M for i in range(N)]

    for i in range(M):
        for j in range(N):
            transpose_matrix[i][j] = matrix[j][i]
    return transpose_matrix


m,n = map(int, input().split())
matrix=[]

for i in range(m):
    row = list(map(int, input().split()))
    matrix.append(row)

Tmatrix = transpose(matrix) 
for row in Tmatrix:
    print(*row)

```

## Submission at 2024-08-29 13:34:25


```
# Write Code from Scratch
def transpose(matrix):
    # M for rows, N for cols
    M = len(matrix)
    N = len(matrix[0])

    transpose_matrix = [[0] * M for i in range(N)]

    for i in range(M):
        for j in range(N):
            transpose_matrix[i][j] = matrix[j][i]
    return transpose_matrix


n, m = map(int, input().split())
matrix=[]

for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

Tmatrix = transpose(matrix) 
for row in Tmatrix:
    print(*row)

```

## Submission at 2024-08-29 13:36:47


```
# Write Code from Scratch
def transpose(matrix):
    # M for rows, N for cols
    M = len(matrix)
    N = len(matrix[0])

    transpose_matrix = [[0] * M for i in range(N)]

    for i in range(M):
        for j in range(N):
            transpose_matrix[j][i] = matrix[i][j]
    return transpose_matrix

if __name__=="__main__"
    m,n = map(int, input().split())
    matrix=[]

    for i in range(m):
        row = list(map(int, input().split()))
        matrix.append(row)

    Tmatrix = transpose(matrix) 
    for row in Tmatrix:
        print(*row)

```

## Submission at 2024-08-29 13:38:26


```
# Write Code from Scratch
def transpose(matrix):
    # M for rows, N for cols
    M = len(matrix)
    N = len(matrix[0])

    transpose_matrix = [[0] * M for i in range(N)]

    for i in range(M):
        for j in range(N):
            transpose_matrix[j][i] = matrix[i][j]
    return transpose_matrix

if __name__=="__main__":
    m,n = map(int, input().split())
    matrix=[]

    for i in range(m):
        row = list(map(int, input().split()))
        matrix.append(row)

    Tmatrix = transpose(matrix) 
    for row in Tmatrix:
        print(*row)

```

## Submission at 2024-08-29 13:46:02


```
def Spiral(matrix):
    n = len(matrix)
    Spiral_Array = []
    for i in range(n):
        if i%2==0:
            for j in range(len(matrix[i])):
                Spiral_Array.append(matrix[i][j])
        else: 
            for j in range(len(matrix[i])-1, -1, -1):
                Spiral_Array.append(matrix[i][j])
    return  Spiral_Array
    
if __name__=="__main__":
    m,n = map(int, input().split())
    matrix = []

    for i in range(m):
        row = list(map(int, input().split()))
        matrix.append(row)

    print(*Spiral(matrix))
```

## Submission at 2024-08-29 13:52:43


```
def Spiral(matrix):
    Spiral_Array = []
    
    if not matrix:
        return Spiral_Array
    
    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        for i in range(left, right + 1):
            Spiral_Array.append(matrix[top][i])
        top += 1

        for i in range(top, bottom + 1):
            Spiral_Array.append(matrix[i][right])
        right -= 1

        if top <= bottom:
            for i in range(right, left - 1, -1):
                Spiral_Array.append(matrix[bottom][i])
            bottom -= 1

        if left <= right:
            for i in range(bottom, top - 1, -1):
                Spiral_Array.append(matrix[i][left])
            left += 1

    return Spiral_Array
    
if __name__=="__main__":
    m,n = map(int, input().split())
    matrix = []

    for i in range(m):
        row = list(map(int, input().split()))
        matrix.append(row)

    print(*Spiral(matrix))

```

## Submission at 2024-08-30 04:57:31


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

    while curr:
        Next=curr.next
        curr.next=prev

        prev = curr
        curr = next

    return curr

```

## Submission at 2024-08-30 05:01:00


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

    while curr:
        Next=curr.next
        curr.next=prev

        
        curr = Next
        prev = curr
        
    return curr

```

## Submission at 2024-08-30 05:20:32


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n,):
    cnt = 1
    if n==0:
        return cnt
    
    if n<0:
        cnt = cnt*1/x
        pow(x,n+1)

    cnt = cnt*x
    pow(x,n-1)

    return cnt

x,n = map(int, input().split())
ans=pow(x,n,1)
print(ans)

    

    
        
```

## Submission at 2024-08-30 05:27:51


```
# Write code from scratch
def maximal(n,a,b):
    c=[]
    for i in range(n):
        if a[i]>b[i]:
            c.append(a[i])
        else:
            c.append(b[i])

    return(c)


if __name__=="__main__":
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    ans=maximal(n,a,b)
    for i in range(n):
        print(ans[i],end=" ")
```

## Submission at 2024-08-30 05:41:21


```
# Write code from scratch
def palindrome(s,i,j):
    
    if i==j:
        return True

    
    if s[i] is not s[j]:
        return False

    palindrome(s,i+1,j-1)
    return True

if __name__=="__main__":
    s=input()
    if palindrome(s,0,len(s)):
        print("YES")
    else:
        print("NO")
    
```

## Submission at 2024-08-30 05:47:11


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

    while curr.next:
        Next=curr.next
        curr.next=prev

        
        curr = Next
        prev = curr
        Next=Next.next
        
    return curr

```

## Submission at 2024-08-30 05:53:04


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
    Next = head
    prev = None

    while Next:
        Next=curr.next
        curr.next=prev

        prev = curr
        curr = Next
           
    return curr

```

## Submission at 2024-08-30 05:57:37


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
    Next = head
    prev = None

    while curr:
        Next=curr.next
        curr.next=prev

        prev = curr
        curr = Next

    
           
    return curr

```

## Submission at 2024-08-30 05:58:49


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

    while curr.next:
        Next=curr.next
        curr.next=prev

        
        curr = Next
        prev = curr
        Next=Next.next
        
    return curr

```

## Submission at 2024-08-30 06:03:27


```
# Write code from scratch
# Write code from scratch
def palindrome(s,i,j):
    
    if i==j:
        return True

    a = s[i]
    b = s[j]
    
    if a.equal(b):
        palindrome(s,i+1,j-1)

    
    return False

if __name__=="__main__":
    s=input()
    if palindrome(s,0,len(s)-1):
        print("YES")
    else:
        print("NO")
    
```

## Submission at 2024-08-30 06:07:10


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n,cnt):
    
    if n==0:
        return cnt
    
    if n<0:
        pow(x,n+1,cnt*1/x)

    pow(x,n-1,cnt*x)

    return cnt

x,n = map(int, input().split())
ans=pow(x,n,1)
print(ans)

    
```

## Submission at 2024-08-30 06:10:46


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n,cnt):
    
    if n==0:
        return cnt
    
    if n<0:
        cnt = cnt*1/x
        pow(x,n+1,cnt)

    cnt = cnt*x
    pow(x,n-1,cnt)

    return cnt

x,n = map(int, input().split())
ans=pow(x,n,1)
print(ans)

```

## Submission at 2024-08-30 06:12:08


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n,cnt):
    
    if n==0:
        return cnt
    
    if n<0:
        cnt = cnt*1/x
        pow(x,n+1,cnt)

    cnt = cnt*x
    return pow(x,n-1,cnt)



x,n = map(int, input().split())
ans=pow(x,n,1)
print(ans)

```

## Submission at 2024-08-30 06:12:50


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n,cnt):
    
    if n==0:
        return cnt
    
    if n<0:
        cnt = cnt*(1/x)
        pow(x,n+1,cnt)

    cnt = cnt*x
    return pow(x,n-1,cnt)



x,n = map(int, input().split())
ans=pow(x,n,1)
print(ans)

```

## Submission at 2024-08-30 06:20:35


```
# Write code from scratch
def palindrome(s,i,j):
    
    if i==j:
        return True

    a = s[i]
    b = s[j]
    
    if isequal(a,b)==False:
       return False

    return palindrome(s,i+1,j-1)

    


if __name__=="__main__":
    s=input()
    if palindrome(s,0,len(s)-1):
        print("YES")
    else:
        print("NO")
    
```

## Submission at 2024-09-06 05:06:30


```
# Write code from scratch
def palindrome(s,i,j):
    if i<j:
        if s[i]==s[j]:
            return palindrome(s,i+1,j-1)
        else: 
            return False
    return True

s=input()
if palindrome(s,0,len(s)-1):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-13 04:43:27


```
# write from scratch, create a function named Pow(x:int , n:int)
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n,cnt):
    
    if n==0:
        return cnt
    
    if n<0:
        cnt = cnt*(1/x)
        return pow(x,n+1,cnt)

    cnt = cnt*x
    return pow(x,n-1,cnt)



x,n = map(int, input().split())
ans=pow(x,n,1)
print(ans)
```

## Submission at 2024-09-13 04:44:07


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n, cnt):
    
    if n == 0:
        return cnt
    
    if n < 0:
        cnt = cnt * (1 / x)
        return pow(x, n + 1, cnt)

    cnt = cnt * x
    return pow(x, n - 1, cnt)

x, n = map(int, input().split())
ans = pow(x, n, 1)
print(ans)

```

## Submission at 2024-09-13 04:46:04


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n < 0:
        return 1 / pow(x, -n)
    return x * pow(x, n - 1)

x, n = map(int, input().split())
ans = pow(x, n)
print(ans)
```

## Submission at 2024-09-13 04:47:36


```
def pow(x, n):
    # Handle the case when x is 0 and n is 0 or negative
    if x == 0 and n <= 0:
        raise ValueError("Undefined result for 0 raised to 0 or negative power")
    if n == 0:
        return 1
    if n < 0:
        return 1 / pow(x, -n)
    return x * pow(x, n - 1)

x, n = map(int, input().split())
try:
    ans = pow(x, n)
    print(ans)
except ValueError as e:
    print(e)
```

## Submission at 2024-10-04 05:21:28


```
# Write Python code from scratch
def daily_temp(temp):
    ans=[]
    for i in range(len(temp)):
        cnt=0
        for j in range(i,len(temp)):
            cnt+=1
            if temp[i]<len[j]:
                break
        ans.append(cnt)

    return ans

n = int(input())
temp = []
for i in range(n):
   n1=int(input())
   temp.append(n1)
print(daily_temp(temp))
        
```

## Submission at 2024-10-04 05:46:47


```
# Write Python code from scratch
def anagram(s,t):
    if len(s)!=len(t):
            return False
    s1=[]
    t1=[]
    for i in s:
        s1.append(i)
    for j in t:
        t1.append(j)
    n=len(s)
    s1.sort()
    t1.sort()

    for i in range(n):
        if s1[i]!=t1[i]:
            return False

    return True

s=input()
t=input()
if anagram(s,t):
    print("true")
else:
    print("false")
                

```

## Submission at 2024-10-04 05:54:21


```
# Write Python code from scratch
def daily_temp(temp):
    ans=[]
    for i in range(len(temp)):
        cnt=0
        for j in range(i,len(temp)):
            cnt+=1
            if temp[i]<len[j]:
                break
        ans.append(cnt)

    return ans

n = int(input())
temp = map(int,input())
print(daily_temp(temp))
        

```

## Submission at 2024-10-16 08:02:37


```
# Write Python code from scratch
def daily_temp(temp):
    ans = []
    for i in range(len(temp)):
        cnt = 0
        found_warmer = False
        for j in range(i + 1, len(temp)):  # Start checking from the next day
            cnt += 1
            if temp[j] > temp[i]:
                found_warmer = True
                break
        if not found_warmer:
            cnt = 0
        ans.append(cnt)

    return ans

n = int(input())
temp =list(map(int, input().split()))
print(" ".join(map(str, daily_temp(temp))))
        
```

## Submission at 2024-10-16 08:03:39


```
# Write Python code from scratch
def daily_temp(temp):
    ans = []
    for i in range(len(temp)):
        cnt = 0
        found_warmer = False
        for j in range(i + 1, len(temp)):  # Start checking from the next day
            cnt += 1
            if temp[j] > temp[i]:
                found_warmer = True
                break
        if not found_warmer:
            cnt = 0
        ans.append(cnt)

    return ans

n = int(input())
temp =list(map(int, input().split()))
print(" ".join(map(str, daily_temp(temp))))
        
```

## Submission at 2024-10-25 05:36:16


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
res=[]
def postOrder(root):
    # code here
    

    def postorder(root):
      if not root:
        return []
      
      postorder(root.left)
      postorder(root.right)
      res.append(root.val)
      return res

    res = postorder(root)
    return res

```

## Submission at 2024-10-25 06:03:18


```
# write code from scratch
def ransom(s1,s2):
    a1=[]
    a2=[]

    for i in s1:
        a1.append(i)

    for j in s2:
        a2.append(j)

    for i in a1:
        for j in a2:
            if i==j:
                a1.pop(i)
                a2.pop(j)
    
    if a1==None:
        return True
    else:
        return False

    '''h1 = [0]*200
    for i in s1:
        h1[s1] +=1

    h2 = [0]*200
    for j in s2:
        h2[s2] +=1

    for i in range(26):
        if h1[i]!=0 and h2[i]==0:
            return false
        
        if h1[i] > h2[i]:
            return false

    return true'''

s1=input()
s2=input()
if ransom(s1,s2):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:04:03


```
# write code from scratch
def ransom(s1,s2):
    a1=[]
    a2=[]

    for i in s1:
        a1.append(i)

    for j in s2:
        a2.append(j)

    for i in a1:
        for j in a2:
            if i==j:
                a1.pop(i)
                a2.pop(j)
    
    if a1==None:
        return True
    else:
        return False
    

s1=input()
s2=input()
if ransom(s1,s2):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:05:19


```
# write code from scratch
def ransom(s1,s2):
    a1=[]
    a2=[]

    for i in s1:
        a1.append(i)

    for j in s2:
        a2.append(j)

    for i in a1:
        for j in a2:
            if i==j:
                a1.pop(i)
                a2.pop(j)
    
    if a1==[]:
        return True
    
    return False
    

s1=input()
s2=input()
if ransom(s1,s2):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:13:58


```
# write code from scratch

def ransom(s1,s2):
    a1=[]
    a2=[]

    for i in s1:
        a1.append(i)

    for j in s2:
        a2.append(j)

    for i in range(len(a1)):
        for j in range(len(a2)):
            if a1[i]==0 or a2[j]==0:
                continue
            if a1[i]==a2[j]:
                a1[i]=0
                a2[j]=0
    
    for i in a1:
        if i!=0:
            return False
    return True
    

s1=input()
s2=input()
if ransom(s1,s2):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:19:10


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
    # code here
    if root == None:
      return []

    ans=[]

    def postorder(root):
      postorder(root.left)
      postorder(root.right)
      ans.append(root)
      return ans

    postorder(root)
    return ans
```

## Submission at 2024-10-25 06:35:08


```
# write code from scratch
def patternCheck(pattern,string):
    p=len(pattern)
    s=len(string)

    for i in range(p):
        for j in range(s):
            if pattern[i]==pattern[j]:
                if string[i]==string[j]:
                    return True
    
    return False

pattern=list(map(str,input().split()))
string=list(map(str,input().split()))
if patternCheck(pattern,string):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:39:51


```
# write code from scratch
def patternCheck(pattern,string):
    p=len(pattern)
    s=len(string)

    for i in range(p):
        for j in range(p):
            if pattern[i]==pattern[j]:
                if string[i]!=string[j]:
                    return False
    
    return True

pattern=list(map(str,input().split()))
string=list(map(str,input().split()))
if patternCheck(pattern,string):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:57:39


```
# write code from scratch
def patternCheck(pattern,string):
    p=len(pattern)
    s=len(string)

    for i in range(p):
        for j in range(p):
            if pattern[i]==pattern[j]:
                if string[i]!=string[j]:
                    return False
    
    return True

pattern=list(map(str,input().split()))
string=list(map(str,input().split()))
if patternCheck(pattern,string):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:58:05


```
# write code from scratch
def patternCheck(pattern,string):
    p=len(pattern)
    s=len(string)

    for i in range(p):
        for j in range(p):
            if pattern[i]==pattern[j]:
                if string[i]!=string[j]:
                    return False
    
    return True

pattern=list(map(str,input().split()))
string=list(map(str,input().split()))
if patternCheck(pattern,string):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:59:36


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
    # code here
    if root == None:
      return []

    ans=[]

    def postorder(root):
      while root:
        postorder(root.left)
        postorder(root.right)
        ans.append(root)
      return ans

    postorder(root)
    return ans
```

## Submission at 2024-10-25 07:03:08


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
    # code here
    if not root:
      return []

    ans=[]

    def postorder(root):
      while root:
        postorder(root.left)
        postorder(root.right)
        ans.append(root)
      return ans

    postorder(root)
    return ans
```

## Submission at 2024-11-15 04:28:24


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
    #Function to return a list containing the postorder traversal of the tree.
def postOrder(root):
    # code here
    

    ans=[]

    def postorder(root):
      if root:
        postorder(root.left)
        postorder(root.right)
        ans.append(root.data)
      

    postorder(root)
    return ans
```

## Submission at 2024-11-22 05:11:21


```
# write code from scratch
n=int(input())

for i in range(n):
    for j in range(i+1):
        print('*',end="")
    print()

for p in range(n-1,1):
    for q in range(p):
        print('*',end="")
    print()
```

## Submission at 2024-11-22 05:17:12


```
# Write Code From Scratch Here
n=int(input())
arr=list(map(int,input().split()))

sum=0
for i in range(n):
    sum+=arr[i] 

print(sum)
```

## Submission at 2024-11-22 05:22:20


```
# Write Code From Scratch Here
a,b=map(int,input().split())

#by simplifying the equation
min_ans = b-a
print(min_ans)
```

## Submission at 2024-11-22 05:55:39


```
# write code from scratch
n=int(input())
arr=list(map(int,input().split()))

hash_arr=[0]*n

for i in arr:
    hash_arr[i]+=1

cnt=0
for i in hash_arr:
    if i>=2:
        cnt+=(hash_arr[i]-1)

print(cnt)
```

## Submission at 2024-11-22 05:56:24


```
# write code from scratch
n=int(input())
arr=list(map(int,input().split()))

hash_arr=[0]*50

for i in arr:
    hash_arr[i]+=1

cnt=0
for i in hash_arr:
    if i>=2:
        cnt+=(hash_arr[i]-1)

print(cnt)
```

## Submission at 2024-11-22 05:57:31


```
# write code from scratch
n=int(input())
arr=list(map(int,input().split()))

hash_arr=[0]*100

for i in arr:
    hash_arr[i]+=1

cnt=0
for i in hash_arr:
    if i>=2:
        cnt+=(hash_arr[i]-1)

print(cnt)
```

## Submission at 2024-11-22 05:59:30


```
# write code from scratch
n=int(input())
arr=list(map(int,input().split()))

hash_arr=[0]*20

for i in arr:
    hash_arr[i]+=1

cnt=0
for i in hash_arr:
    if i>=2:
        cnt+=(hash_arr[i]-1)

print(cnt)
```

## Submission at 2024-11-22 06:08:07


```
# write code from scratch
n=int(input())

for i in range(n):
    for j in range(i+1):
        print('*',end="")
    print()

for p in range(n-1):
    for q in range(n-p-1):
        print('*',end="")
    print()
```

## Submission at 2024-11-22 06:31:49


```
# write code from scratch
# write code from scratch
m,n,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

cnt=0

for i in arr1:
    for j in arr2:
        if i>=j:
            if (i-j)<=d:
                cnt+=1 
        else:
            if (j-i)<=d:
                cnt+=1

print(cnt)
```

## Submission at 2024-11-22 06:34:34


```
# write code from scratch
n=int(input())

if n==0:
    print()
    
for i in range(n):
    for j in range(i+1):
        print('*',end="")
    print()

for p in range(n-1):
    for q in range(n-p-1):
        print('*',end="")
    print()
```

## Submission at 2024-11-22 06:59:34


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
        # Your Code Here
        def isBSTutil(root):
            if root is None:
                return

            if root.left :
                if root.data>root.left.data:
                    return(isBSTutil(root.left))
                else:
                    retrun False
            
            if root.right :
                if root.data<root.right.data:
                    return(isBSTutil(root.right))
                else:
                    return False
            return True

        return(isBSTutil(root))
```

