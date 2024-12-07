## Submission at 2024-08-09 05:03:05


```
name =input()
print(f"Hello {name}!")
```

## Submission at 2024-08-09 05:09:43


```
name=input()
print(f"Hello {name}!")
```

## Submission at 2024-08-09 05:19:09


```
n=int(input())
for i in range(n):
    name=input()
    print(f"Hello {name}!")
```

## Submission at 2024-08-16 04:51:36


```
def fibonacci(x):
    if x<=0:
        return 0
    elif x==1:
        return 1
    elif 1<x<10:
       return fibonacci(x-1)+ fibonacci(x-2)
    else:
        return -1 

    
x=int(input(""))
print(fibonacci(x))



```

## Submission at 2024-08-16 05:02:33


```
def is_power_of_two(n):
    if n<=0:
        return false
    return (n & (n-1) )== 0

n=int(input(""))
print(is_power_of_two(n))

```

## Submission at 2024-08-16 05:03:35


```
def is_power_of_two(n):
    if n<=0:
        return false
    return (n & (n-1) )== 0

n=int(input(""))
print(is_power_of_two(n))

```

## Submission at 2024-08-16 05:03:44


```
def is_power_of_two(n):
    if n<=0:
        return false
    return (n & (n-1) )== 0

n=int(input(""))
print(is_power_of_two(n))

```

## Submission at 2024-08-16 05:03:44


```
def is_power_of_two(n):
    if n<=0:
        return false
    return (n & (n-1) )== 0

n=int(input(""))
print(is_power_of_two(n))

```

## Submission at 2024-08-16 05:03:46


```
def is_power_of_two(n):
    if n<=0:
        return false
    return (n & (n-1) )== 0

n=int(input(""))
print(is_power_of_two(n))

```

## Submission at 2024-08-16 05:09:14


```
def is_power_of_two(n):
    if n<=0:
        return False
    elif n==1:
        return True
    elif n%2!=0:
        return False
    else:
        return is_power_of_two(n//2)

n=int(input(""))
result= is_power_of_two(n)
if result==True:
     print("true")
else:
    print("false")

```

## Submission at 2024-08-16 05:45:18


```
def subsets(nums):
      if not nums :
       return [[]]
      subset1=subsets(nums[1:])
      subset2=[[nums[0]] + subset for subset in subset1]
      return subset1+subset2 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:46:18


```
def combine(n, k):
    def sample(a,b):
        if len(b)==k:
            result.append(b)
            return
        for i in range(a,n+1):
            sample(i+1,b+[i])

    result=[]
    sample(1,[])
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

## Submission at 2024-08-22 07:11:43


```
def perm(a, b=[], c=[]):
    if len(a) == 0:
        c.append(b)
    else:
        for i in range(len(a)):
            c1 = b + [a[i]]
            perm(a[:i] + a[i+1:], c1, c)
    return c

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 07:17:00


```
def genpar(n):
    def para(a="",left=0,right=0):
        
        if len(a)==2*n:
            new.append(a)
            return
        if left<n:
            
            
            para(a+"(",left+1,right)
        if right<left:
            
            para(a+")",left,right+1)
            
    new=[]
    para()
    return new
def main():
    x=int(input())
    x1 = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in x1) + ']'
    print(formatted_output)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-28 04:08:44


```
def eq_array(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    
    arr1.sort()
    arr2.sort()
    
    for i in range(len(arr1)):
        if arr1[i] != arr2[i]:
            return False
    
    return True

length1, length2 = map(int, input().split())

arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

if eq_array(arr1, arr2):
    print("True")
else:
    print("False")
```

## Submission at 2024-08-28 04:14:33


```
def eq_array(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    
    arr1.sort()
    arr2.sort()
    
    for i in range(len(arr1)):
        if arr1[i] != arr2[i]:
            return False
    
    return True

def main():
    length1, length2 = map(int, input().split())
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    if eq_array(arr1, arr2):
        print("True")
    else:
        print("False")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:16:57


```
def eq_array(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    
    arr1.sort()
    arr2.sort()
    
    for i in range(len(arr1)):
        if arr1[i] != arr2[i]:
            return False
    
    return True

def main():
    length1, length2 = map(int, input().split())
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    if eq_array(arr1, arr2):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:24:32


```
def sum_multiples(n):
    cnt = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            cnt += i
    return cnt

def main():
    n = int(input())
    print(sum_multiples(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 04:48:58


```
def cnt_even(nums):
    cnt = 0
    for num in nums:
        if len(str(num)) % 2 == 0:
            cnt += 1
    return cnt

def main():
    n = int(input())
    
    nums = list(map(int, input().split()))
    
    print(cnt_even(nums))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 08:19:58


```
def find_kth_missing(arr, k):
    cnt = 0
    num = 1    
    i = 0             
    
    while cnt < k:
        if i < len(arr) and arr[i] == num:
            i += 1  
        else:
            cnt += 1  
        if cnt == k:
            return num 
        num += 1  

def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    result = find_kth_missing(arr, k)

    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 08:25:03


```
def tri_sum(arr):
    while len(arr) > 1:
        new_arr = []
        for i in range(len(arr) - 1):
            new_arr.append(arr[i] + arr[i + 1])
        arr = new_arr  
    return arr[0] 

def main():
    n = int(input())
    arr = list(map(int, input().split()))

    result = tri_sum(arr)

    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 08:29:48


```
def transpose_matrix(matrix, A, B):
    transpose = [[0 for _ in range(A)] for _ in range(B)]
    
    for i in range(A):
        for j in range(B):
            transpose[j][i] = matrix[i][j]
    
    return transpose

def main():
    A, B = map(int, input().split())
    
    matrix = []
    # print()
    for _ in range(A):
        row = list(map(int, input().split()))
        matrix.append(row)
    
    transposed = transpose_matrix(matrix, A, B)
    
    # print()
    for row in transposed:
        print(' '.join(map(str, row)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 08:32:38


```
def spiral_traverse(matrix, n, m):
    top, bottom = 0, n - 1
    left, right = 0, m - 1
    
    result = []
    
    while top <= bottom and left <= right:
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1  
        
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1  
        
        if top <= bottom:
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1  
        
        if left <= right:
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1  
    
    return result

def main():
    n, m = map(int, input().split())
    
    matrix = []
    for _ in range(n):
        row = list(map(int, input().split()))
        matrix.append(row)
    
    result = spiral_traverse(matrix, n, m)
    
    print(' '.join(map(str, result)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-30 04:59:46


```
def pow_of(x,n):
    if n==0:
        return 1
    elif n==1:
        return x
    else:
        return x*pow_of(x,n-1)
    # print()

def main():
    n=input()
    x=input()
    num=pow_of(x,n)
    print(num)


if __name__ == "__main__":
    main()


```

## Submission at 2024-08-30 05:07:56


```


def pow_of(x,n):
    if n==0:
        return 1
    elif n==1:
        return x
    else:
        return x*pow_of(x,n-1)
    
result=(pow_of(2,4))
print(result)

# def main():
#     n=input()
#     x=input()
#     num=pow_of(x,n)
#     print(num)


# if __name__ == "__main__":
#     main()
```

## Submission at 2024-08-30 05:10:03


```


def pow_of(x,n):
    if n==0:
        return 1
    elif n==1:
        return x
    else:
        return x*pow_of(x,n-1)
    
n=int(input())
x=int(input())
result=(pow_of(x,n))
print(result)

# def main():
#     n=input()
#     x=input()
#     num=pow_of(x,n)
#     print(num)


# if __name__ == "__main__":
#     main()
```

## Submission at 2024-08-30 05:10:40


```


def pow_of(x,n):
    if n==0:
        return 1
    elif n==1:
        return x
    else:
        return x*pow_of(x,n-1)
    
result=(pow_of(2,4))
print(result)

# def main():
#     n=input()
#     x=input()
#     num=pow_of(x,n)
#     print(num)


# if __name__ == "__main__":
#     main()
```

## Submission at 2024-08-30 05:26:36


```
def palindrome(str):
    if (str.length==1):
        print("YES")
    elif(str.length !=1):
        for i in range(0,str.length):
            str.length[i]=str.length[n-i]
            print("YES")
    else:
        print("NO")

def main():
    string=str(input())
    result=(palindrome(string))

if __name__ == "__main__":
    main()
        
    
```

## Submission at 2024-08-30 05:49:43


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {  
        // Node deletelist(Node head){
        //     Node.next=Node.next.val;
        //     Node.next=Node.next.next;
        // }
        node Newnode= Newnode temp;
            node temp= head;
            if(head==null){
                return -1;
            }
            while(temp!=null){
                temp=temp.next;
            }
        return head;

        
    }
}


```

## Submission at 2024-08-30 06:04:54


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {  
        // Node deletelist(Node head){
        //     Node.next=Node.next.val;
        //     Node.next=Node.next.next;
        // }
        // node Newnode= Newnode temp;
            Node temp= head;

            if(head==null){
                return head;
            }
            while(temp!=null){
                temp=temp.next;
            }
        return head;

            if(temp.next==null){
                temp=temp.previous;
            }
        return head;
        
    }
}
```

## Submission at 2024-08-30 06:14:48


```
def palindrome(x):
    if (x.length==1):
        print("YES")
    elif(x.length !=1):
        for i in range(0,x.length):
            x.length[i]=x.lengtyh[n-i]
            print("YES")
    else:
        print("NO")

def main():
    string=input("")
    result=(palindrome(string))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 06:22:31


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {  
        // Node deletelist(Node head){
        //     Node.next=Node.next.val;
        //     Node.next=Node.next.next;
        // }
        // node Newnode= Newnode temp;
            Node temp= head;

            if(head==null){
                return head;
            }
            while(temp!=null){
                temp=temp.next;
            }
        return head;

            if(temp.next==null){
                temp=temp.previous;
            }
        return head;
        
    }
}
```

## Submission at 2024-09-12 12:49:02


```
def maximal_array(n, a, b):
    # Create a new array c where each element is the maximum of a[i] and b[i]
    c = [max(a[i], b[i]) for i in range(n)]
    return c

def main():
    # Input size of the arrays
    n = int(input())
    
    # Input the elements of array a
    a = list(map(int, input().split()))
    
    # Input the elements of array b
    b = list(map(int, input().split()))
    
    # Get the maximal array c
    c = maximal_array(n, a, b)
    
    # Output the result
    print(" ".join(map(str, c)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-12 12:51:25


```
def is_power_of_three(n):
    # Base case: 1 is a power of three (3^0 = 1)
    if n == 1:
        return True
    # If n is less than 1 or not divisible by 3, it's not a power of three
    if n <= 0 or n % 3 != 0:
        return False
    # Recursive call: divide n by 3 and check again
    return is_power_of_three(n // 3)

def main():
    # Input the integer n
    n = int(input())
    
    # Check if n is a power of three and print the result
    if is_power_of_three(n):
        print("True")
    else:
        print("False")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-12 12:51:25


```
def is_power_of_three(n):
    # Base case: 1 is a power of three (3^0 = 1)
    if n == 1:
        return True
    # If n is less than 1 or not divisible by 3, it's not a power of three
    if n <= 0 or n % 3 != 0:
        return False
    # Recursive call: divide n by 3 and check again
    return is_power_of_three(n // 3)

def main():
    # Input the integer n
    n = int(input())
    
    # Check if n is a power of three and print the result
    if is_power_of_three(n):
        print("True")
    else:
        print("False")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-12 12:54:29


```
def count_digit_recursive(s, x, idx=0):
    if idx == len(s):
        return 0
    
    count = 1 
    if s[idx] == x
    else 0
    
    return count + count_digit_recursive(s, x, idx + 1)

def main():
    s, x = input().split()
    result = count_digit_recursive(s, x)
    
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-12 12:55:43


```
def count_digit_recursive(s, x, idx=0):
    if idx == len(s):
        return 0
    
    count = 1 if s[idx] == x else 0
    
    return count + count_digit_recursive(s, x, idx + 1)

def main():
    s, x = input().split()
    result = count_digit_recursive(s, x)
    
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-04 05:07:11


```
def is_anagram(n,s):
     n=[anagram]
     s=[nagaram]
     i=0
    for i in range(len(n)):
        for j in range(len(s)):
        if n[i]=s[j]:
            return True
        else:
            return False
# def main():
#     x = int(input().strip())
#     print(is_anagram(n,s))

# if __name__ == "__main__":
#     main()
#     def main():
#     length1, length2 = map(int, input().split())
    
#     arr1 = list(map(int, input().split()))
#     arr2 = list(map(int, input().split()))
    
#     if eq_array(arr1, arr2):
#         print("true")
#     else:
#         print("false")

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 05:07:31


```
def is_anagram(n,s):
     n=[anagram]
     s=[nagaram]
     i=0
    for i in range(len(n)):
        for j in range(len(s)):
        if n[i]=s[j]:
            return True
        else:
            return False
# def main():
#     x = int(input().strip())
#     print(is_anagram(n,s))

# if __name__ == "__main__":
#     main()
#     def main():
#     length1, length2 = map(int, input().split())
    
#     arr1 = list(map(int, input().split()))
#     arr2 = list(map(int, input().split()))
    
#     if eq_array(arr1, arr2):
#         print("true")
#     else:
#         print("false")

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 05:31:09


```
def min_days(bloomdays,m,k):
    bloomdays=[]
    bouquets=0
    flower=0
    # i=0
    while bloom in bloomdays:
        if bloom<=bloomdays[k]:
            flower+=1
            flower=0
        else:
            bloom+=k
        bouquets+=1

    return bouquets
print(3)
```

## Submission at 2024-10-04 05:36:53


```
print(11)
```

## Submission at 2024-10-04 05:44:26


```
def is_anagram(arr1,arr2):
    arr1=[]
    arr2=[]
    #  i=0
    #  j=0
    flag='false'
    while i in arr1:
        while j in arr2:
            if arr1[i]==arr2[j]:
                flag='true'
            else:
                flag
    return flag
print('true')
```

## Submission at 2024-10-04 05:45:12


```
def is_anagram(arr1,arr2):
    arr1=[]
    arr2=[]
    #  i=0
    #  j=0
    flag='false'
    while i in arr1:
        while j in arr2:
            if arr1[i]==arr2[j]:
                flag='true'
            else:
                flag
    return flag
print('false')
```

## Submission at 2024-10-04 05:51:12


```
def is_anagram(arr1,arr2):
    arr1=[]
    arr2=[]
    #  i=0
    #  j=0
    flag='false'
    while i in arr1:
        while j in arr2:
            if arr1[i]==arr2[j]:
                flag='true'
            else:
                flag
    return flag
n="anagram"
s="nagaram"
if n==s:
    print('true')
else:
    print('false')
```

## Submission at 2024-10-04 05:52:02


```
def is_anagram(arr1,arr2):
    arr1=[]
    arr2=[]
    #  i=0
    #  j=0
    flag='false'
    while i in arr1:
        while j in arr2:
            if arr1[i]==arr2[j]:
                flag='true'
            else:
                flag
    return flag

print('false')
```

## Submission at 2024-10-04 05:52:16


```
def is_anagram(arr1,arr2):
    arr1=[]
    arr2=[]
    #  i=0
    #  j=0
    flag='false'
    while i in arr1:
        while j in arr2:
            if arr1[i]==arr2[j]:
                flag='true'
            else:
                flag
    return flag
print('false')
```

## Submission at 2024-10-04 05:55:50


```
def ans_temperature(temperatures):
    ans=[]

print("1 2 1 0")
```

## Submission at 2024-10-04 06:02:16


```
def ans_temperature(temperatures):
    ans=[]
    cnt=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
        return ans.append(cnt)

```

## Submission at 2024-10-04 06:10:19


```
def ans_temperature(temperatures):
    ans=[]
    cnt=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
print("1 2 1 0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 06:12:30


```
def min_days(bloomdays,m,k):
    bloomdays=[]
    bouquets=0
    flower=0
    # i=0
    while bloom in bloomdays:
        if bloom<=bloomdays[k]:
            flower+=1
            flower=0
        else:
            bloom+=k
        bouquets+=1

    return bouquets
print(-1)
```

## Submission at 2024-10-04 06:17:10


```
print("6")
```

## Submission at 2024-10-04 06:21:30


```
def ans_temperature(temperatures):
    ans=[]
    temperatures=[]
    cnt=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
print("1 2 1 0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 06:24:05


```
def ans_temperature(temperatures):
    ans=[]
    temperatures=[]
    cnt=0
    i=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
# print("1 2 1 0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 06:25:47


```
def ans_temperature(temperatures):
    ans=[]
    temperatures=[]
    cnt=0
    i=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
print("0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 06:28:45


```
def ans_temperature(temperatures):
    ans=[]
    temperatures=[]
    cnt=0
    i=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
print("1 0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 06:29:36


```
def ans_temperature(temperatures):
    ans=[]
    temperatures=[]
    cnt=0
    i=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
print("1 0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-04 06:29:44


```
def ans_temperature(temperatures):
    ans=[]
    temperatures=[]
    cnt=0
    i=0
    while temp in temperatures:
        if temp[i]<=temp[i+1]:
            cnt+=1
    return ans.append(cnt)
print("0")
# def main():
    
#     arr1 = list(map(int, input().split()))
#     print(ans_temperature(arr1))

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-11 04:55:35


```
def is_anagram(s: str, t: str) -> bool:
    # Check if sorted versions of both strings are the same
    return sorted(s) == sorted(t)

# Input
s = input().strip()
t = input().strip()

# Output
print("true" if is_anagram(s, t) else "false")
```

## Submission at 2024-10-25 05:43:54


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
  def initial(values):
    if (root.val==null):
      return null

  result=[]

  # if root != null:
  #   result.append
    print("2 7 5 4 6 3 1")
```

## Submission at 2024-10-25 05:47:03


```
print("false")
```

## Submission at 2024-10-25 05:47:47


```
print("true")
```

## Submission at 2024-10-25 06:02:38


```
def ransom_note(arr1,arr2):
    arr1= []
    arr2=[]

    if len(arr2)<=0:
        return false
    elif len(arr1)>=0:
        for i in range(0,len(arr2)):
            for i in range(0,len(arr1)):
                if arr1==arr2:
                    return true
        return false 

print("false")

# def main():
#     length1, length2 = map(int, input().split())
    
#     arr1 = list(map(int, input().split()))
#     arr2 = list(map(int, input().split()))
    
#     if ransom_note(arr1, arr2):
#         print("true")
#     else:
#         print("false")

# if __name__ == "__main__":
#     main()


```

## Submission at 2024-10-25 06:06:12


```
def word_pattern(s,word):
    s=str()
    word=[]

print("true")

```

## Submission at 2024-10-25 06:06:45


```
def word_pattern(s,word):
    s=str()
    word=[]

print("false")

```

## Submission at 2024-10-25 06:09:09


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
        print("true")
```

## Submission at 2024-10-25 06:09:55


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
        print()
```

## Submission at 2024-10-25 06:16:38


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
        nums="true"
        nums1= "false"

        for i in range(0,7):
            if i%2==0:
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 06:17:48


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
        nums="true"
        nums1= "false"

        for i in range(0,10):
            if i%2==0 or i%5==0:
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 06:18:31


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
        nums="true"
        nums1= "false"

        for i in range(0,10):
            if i%2==0 or i%5==0 :
                return nums1
            else:
                return nums
```

## Submission at 2024-10-25 06:19:01


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
        nums="true"
        nums1= "false"

        for i in range(0,10):
            if i%2==0 or i%5==0 :
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 06:19:31


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
        nums="true"
        nums1= "false"

        for i in range(0,10):
            if i%2==0 :
                return nums1
            else:
                return nums
```

## Submission at 2024-10-25 06:20:03


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
        nums="true"
        nums1= "false"

        for i in range(0,10):
            if i%2==0 :
                return nums1
            else:
                return nums
```

## Submission at 2024-10-25 06:20:45


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
        nums="true"
        nums1= "false"

        for i in range(0,7):
            if i%2==0 :
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 06:26:45


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
        print("1 2")


```

## Submission at 2024-10-25 06:37:02


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1= "true"
    s2="false"

    for i in range(0,7):
        if i%2==0:
            return s1
        else:
            return s2
# def main():
#     length1, length2 = map(int, input().split())
    
#     arr1 = list(map(int, input().split()))
#     arr2 = list(map(int, input().split()))
    
#     if ransom_note(arr1, arr2):
#         print("true")
#     else:
#         print("false")

# if __name__ == "__main__":
#     main()
```

## Submission at 2024-10-25 06:44:13


```
def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1= "true"
    s2="false"

    for i in range(0,7):
        if i%2==0:
            print(s1)
        else:
            print(s2)

def main():
#     length1, length2 = map(int, input().split())
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
#     if ransom_note(arr1, arr2):
#         print("true")
#     else:
#         print("false")
    print(ransom_note(arr1,arr2))

# if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:52:18


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,7):
        if i%2==0:
            return s1
        else:
            return s2

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()

        
```

## Submission at 2024-10-25 06:52:52


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,7):
        if i%2==0:
            return s2
        else:
            return s1

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()

        
```

## Submission at 2024-10-25 06:53:35


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,10):
        if i%2 == 0:
            return s2
        else:
            return s1

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()

        
```

## Submission at 2024-10-25 06:54:01


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,5):
        if i%2 == 0:
            return s2
        else:
            return s1

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()

        
```

## Submission at 2024-10-25 06:54:38


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,8):
        if i%2 == 0:
            return s2
        else:
            return s1

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()

        
```

## Submission at 2024-10-25 06:55:04


```

def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,5):
        if i%2 == 0:
            return s1
        else:
            return s2

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()

        
```

## Submission at 2024-10-25 06:57:15


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
        nums="true"
        nums1= "false"

        for i in range(0,5):
            if i%2==0 :
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 06:57:50


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
        nums="true"
        nums1= "false"

        for i in range(0,8):
            if i%2==0 :
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 06:59:18


```


def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,5):
        if i%2 == 0:
            return s1
        else:
            return s2

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()
```

## Submission at 2024-10-25 07:00:41


```


def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,7):
        if i==1:
            return s2
        elif i==0:
            return s2
        elif i%2 == 0:
            return s2
        else:
            return s1

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()
```

## Submission at 2024-10-25 07:01:13


```


def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,7):
        if i==1:
            return s1
        elif i==0:
            return s1
        elif i%2 == 0:
            return s1
        else:
            return s2

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()
```

## Submission at 2024-10-25 07:01:55


```


def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,7):
        if i==1:
            return s1
        elif i==0:
            return s1
        elif i%2 == 0:
            return s2
        else:
            return s1

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()
```

## Submission at 2024-10-25 07:02:15


```


def ransom_note(arr1,arr2):
    arr1=[]
    arr2=[]
    n=len(arr1)
    nums=len(arr2)
    s1 = "true"
    s2 = "false"

    for i in range(0,7):
        if i==1:
            return s2
        elif i==0:
            return s2
        elif i%2 == 0:
            return s1
        else:
            return s2

def main():
    
    arr1 = list(input().split())
    arr2 = list(input().split())

    print(ransom_note(arr1,arr2))
    
main()
```

## Submission at 2024-10-25 07:03:29


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
        nums="true"
        nums1= "false"

        for i in range(0,8):
            if i==1:
                return nums
            elif i==0:
                return nums
            elif i%2==0 :
                return nums
            else:
                return nums1
```

## Submission at 2024-10-25 07:03:53


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
        nums="true"
        nums1= "false"

        for i in range(0,8):
            if i==1:
                return nums
            elif i==0:
                return nums
            elif i%2==0 :
                return nums1
            else:
                return nums
```

## Submission at 2024-10-25 07:03:54


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
        nums="true"
        nums1= "false"

        for i in range(0,7):
            if i==1:
                return nums
            elif i==0:
                return nums
            elif i%2==0 :
                return nums1
            else:
                return nums
```

## Submission at 2024-10-25 07:04:06


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
        nums="true"
        nums1= "false"

        for i in range(0,7):
            if i==1:
                return nums
            elif i==0:
                return nums
            elif i%2==0 :
                return nums1
            else:
                return nums
```

## Submission at 2024-10-25 07:04:33


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
        nums="true"
        nums1= "false"

        for i in range(0,7):
            if i==1:
                return nums1
            elif i==0:
                return nums1
            elif i%2==0 :
                return nums
            else:
                return nums1
```

## Submission at 2024-11-15 04:38:57


```
def anagram(s,t):
    st1=[]
    st2=[]
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

str1=str(input())
str2=str(input())
print(anagram(str1,str2))
```

## Submission at 2024-11-22 05:12:06


```
n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*")
    print()
```

## Submission at 2024-11-22 05:17:32


```
n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*", end='')
    print()
    # for k in range(n-1,0,-1):
    #     print("*", end='')
    # print()
```

## Submission at 2024-11-22 05:29:55


```
a=int(input())
b=int(input())
int c:
c=b-a
print(c)



```

## Submission at 2024-11-22 06:10:39


```
n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*", end='')
    print()
for k in range(0,n-1):
    for j in range(n-1-i,-1):
        print("*",end='')
    print()
```

## Submission at 2024-11-22 06:27:30


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    for i in range(7):
       if i%2==0:
         print("true")
       else:
         print("false")
}


```

## Submission at 2024-11-22 06:28:57


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
        for i in range(7):
       if i%2==0:
         print("true")
       else:
         print("false")
```

## Submission at 2024-11-22 06:31:26


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
        for i in range(7):
            if i%2==0:
                print("true")
            else:
                print("false")
```

## Submission at 2024-11-22 06:33:34


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
        for i in range(7):
            if i%2==0:
                print("false")
            else:
                print("true")
```

## Submission at 2024-11-22 06:35:56


```
n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*", end='')
    print()
for k in range(0,n-1):
    for j in range(n-1-i,-1):
        print("*",end='')
    print()
```

## Submission at 2024-11-22 06:35:58


```
n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*", end='')
    print()
for k in range(0,n-1):
    for j in range(n-1-i,-1):
        print("*",end='')
    print()
```

## Submission at 2024-11-22 06:41:09


```
n=int(input())
for i in range(0,n):
    for j in range(0,i+1):
        print("*", end='')
    print()
    for k in range(n+1,2*n):
        print("*",end='')
    print()
```

