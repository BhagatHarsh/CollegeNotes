## Submission at 2024-08-09 04:56:05


```
# Write your Python code here from the scratch
name=input()
if len(name)>1 and len(name)<100:
    print("Hello",name," !")



```

## Submission at 2024-08-09 04:58:15


```
# Write your Python code here from the scratch
name=input()
if len(name)>1 and len(name)<100:
    print("Hello",name)



```

## Submission at 2024-08-09 04:59:29


```
# Write your Python code here from the scratch
name=input()
if len(name)>1 and len(name)<100:
    print("Hello "+name+"!")



```

## Submission at 2024-08-09 05:07:23


```
# Write your Python code here from the scratch
name= input()
if len(name)>1 and len(name)<100:
    print("Hello "+name+"!")
    
```

## Submission at 2024-08-09 05:16:38


```
# Write your Python code here
n=int(input())
if n>1 and n<100:
    for i in range (0,n):
        name= input()
        if len(name)>1 and len(name)<100:
            print ("Hello "+name+"!")
    


```

## Submission at 2024-08-16 04:58:59


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<=1:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)


def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:24:16


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n<=0 or  n%2!=0):
        return"false"
    elif (n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:34:27


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n==1):
        return "true"
    elif (n<=0 or  n%2!=0):
        return "false"
    
    else:
        return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:34:52


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n==1):
        return "true"
    elif (n<=0 or  n%2!=0):
        return "false"
    
    else:
        return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 02:31:49


```
def parenthesis(S='', l=0, r=0):
  if len(S) == 2 * n:
    result.append(S)
    return
  if left < n:
    parenthesis(S + '(', left + 1, right)
  if right < left:
    parenthesis(S + ')', left, right + 1)

result = []
parenthesis()
return result
```

## Submission at 2024-08-21 02:48:41


```
def Permutation(lst1, current=[]):
  if len(lst1) == len(current):
    return [list(current)]
  result = []
  for e in lst:
    if e not in current:
      current.append(e)
      result.extend(Permutation(lst, current))
      current.pop()
  return result

line = input().strip()
lst = list(map(int, line.split())) 
print(Permutation(lst))
```

## Submission at 2024-08-21 03:15:40


```
def Permutation(nums, current=[]):
  if len(nums)<6 and len(nums)>1:
    if len(nums) == len(current):
      return [list(current)]
    result = []
    for e in nums:
      if e not in current:
        current.append(e)
        result.extend(Permutation(nums, current))
        current.pop()
    return result

line = input().strip()
nums = list(map(int, line.split()))
for i in range (0,len(nums)):
  if nums[i] >10 or nums[i]<-10:
    break

print(Permutation(nums))
```

## Submission at 2024-08-21 03:20:10


```
def Permutation(nums, current=[]):
  if len(nums)<6 and len(nums)>1:
    if len(nums) == len(current):
      return [list(current)]
    result = []
    for e in nums:
      if e not in current:
        current.append(e)
        result.extend(Permutation(nums, current))
        current.pop()
    return result
def main():
  line = input().strip()
  nums = list(map(int, line.split()))
  for i in range (0,len(nums)):
    if nums[i] >10 or nums[i]<-10:
      break

  result=Permutation(nums)
  result.sort(key=lambda x: (len(x), x if x else float('inf')))
  print(result)
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 04:24:05


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)  # Recurse
            nums[start], nums[i] = nums[i], nums[start]  # Swap back

    result = []
    backtrack(0)
    return result


line = input().strip()
nums = list(map(int, line.split()))

print(permute(nums))


```

## Submission at 2024-08-21 07:49:04


```
def generate_parentheses(n):
    def backtrack(s, open_p, close_p):
        if len(s) == 2 * n:
            result.append(s )
            return
        if open_p < n:
            backtrack(s + "(", open_p + 1, close_p)
        if close_p < open_p:
            backtrack(s + ")", open_p, close_p + 1)
    n= int(input())
    result = []
    backtrack("", 0, 0)
    return result

```

## Submission at 2024-08-21 08:04:21


```
def parentheses(n):
    def backtrack(s, open_p, close_p):
            if len(s) == 2 * n:
                result.append(s )
                return
            if open_p < n:
                backtrack(s + "(", open_p + 1, close_p)
            if close_p < open_p:
                backtrack(s + ")", open_p, close_p + 1)
        
    result = []
    backtrack("", 0, 0)
    return result

n= int(input())
print(parentheses(n))
```

## Submission at 2024-08-21 08:14:50


```
def parentheses(n):
    if n < 1 or n > 8:
        return ""
        def backtrack(s, open_p, close_p):
        
            if len(s) == 2 * n:
                result.append(s )
                return
            if open_p < n:
                backtrack(s + "(", open_p + 1, close_p)
            if close_p < open_p:
                backtrack(s + ")", open_p, close_p + 1)
        
    result = []
    backtrack("", 0, 0)
    return result

n= int(input())

print(parentheses(n))
```

## Submission at 2024-08-21 08:22:18


```
def parentheses(n):
    def backtrack(s, open_p, close_p):
        if len(s) == 2 * n:
                result.append(s )
                return
        if open_p < n:
                backtrack(s + "(", open_p + 1, close_p)
        if close_p < open_p:
                backtrack(s + ")", open_p, close_p + 1)
    result=[]  
    backtrack("", 0, 0)
    return result

n= int(input())

print(parentheses(n))
```

## Submission at 2024-08-21 08:28:43


```
def combine(n, k):
    # Write logic here
    def backtrack(start, path):
        if len(path) == k:
            result.append(path)
            return
        for i in range(start, n + 1):
            backtrack(i + 1, path + [i])

    result = []
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

## Submission at 2024-08-22 04:41:02


```
def process(n):
    def parenthesis(S='', l=0, r=0):
        if len(S) == 2 * n:
            result.append(S)
            return
        if l < n:
            parenthesis(S + '(', l + 1, r)
        if r < l:
            parenthesis(S + ')', l, r + 1)

    result = []
    parenthesis()
    return result

def main():
    n= int(input())
    result= process(n)
    print(result)
    return result

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 04:53:38


```
def process(n):
    def parenthesis(S='', l=0, r=0):
        if len(S) == 2 * n:
            result.append(S)
            return
        if l < n:
            parenthesis(S + '(', l + 1, r)
        if r < l:
            parenthesis(S + ')', l, r + 1)

    result = []
    parenthesis()
    return result
    

def main():
    n= int(input())
    if 1 <= n <= 8:
        res= process(n)
        print(res)
    

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 04:57:21


```
def process(n):
    def parenthesis(S='', l=0, r=0):
        if len(S) == 2 * n:
            result.append(S)
            return
        if l < n:
            parenthesis(S + '(', l + 1, r)
        if r < l:
            parenthesis(S + ')', l, r + 1)

    result = []
    parenthesis()
    return result
    

def main():
    n= int(input().strip())
    if 1 <= n <= 8:
        res= process(n)
        print(res)
    

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:05:03


```
def process(n):
    def parenthesis(S='', l=0, r=0):
        if len(S) == 2 * n:
            result.append(S)
            return
        if l < n:
            parenthesis(S + '(', l + 1, r)
        if r < l:
            parenthesis(S + ')', l, r + 1)

    result = []
    parenthesis()
    return result
    

def main():
    n_= input().strip()
    if n_: 
        n = int(user_input)
        if 1 <= n <= 8:
            res= process(n)
            print(res)
    

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:32:47


```
def permute(nums):
    def backtrack(start,end):
        if start==end:
            result.append(nums[:])
        for i in range(start,end):
            nums[start],nums[i]=nums[i],nums[start]
            backtrack(start+1,end)
            nums[start],nums[i]=nums[i],nums[start]
    result=[]
    backtrack(0,len(nums))
    return result

def main():
    nums=list(map(int,input().split()))
    result= permute(nums)
    result.sort()
    print("["+",".join("["+",".join(map(str,p))+"]" for p in result)+"]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 05:55:19


```
def process(n):
    def parenthesis(S="", l=0, r=0):
        if len(S) == 2 * n:
            result.append(S)
            return
        if l < n:
            parenthesis(S+"(", l + 1, r)
        if r < l:
            parenthesis(S+")", l, r + 1)

    result = []
    parenthesis()
    result= [x.strip(' ') for x in result]
    return result
    

def main():
    n= int(input().strip())
    result= process(n)
    result.sort()
    print(",".join("[".join(map(str,p))+"]" for p in result))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:16:02


```
def process(n):
    def parenthesis(S="", l=0, r=0):
        if len(S) == 2 * n:
            result.append(S)
            return
        if l < n:
            parenthesis(S+"(", l + 1, r)
        if r < l:
            parenthesis(S+")", l, r + 1)

    result = []
    parenthesis()
    
    return result
    

def main():
    n= int(input().strip())
    result= process(n)
    result.sort()
    print("[" + ",".join(f'"{p.strip()}"' for p in result) + "]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 04:40:40


```
def combine(n, k):
    # Write logic here
    def backtrack(start, comb):
        
        if len(comb) == k:
            result.append(comb[:]) 
            return
        
       
        for i in range(start, n + 1):
            comb.append(i) 
            backtrack(i + 1, comb)  
            comb.pop()  
            
    result = []
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

## Submission at 2024-08-24 09:23:25


```
# Write the code from scratch, no boilerplate is required
def equallist(arr1,arr2):
    if len(arr1)==len(arr2):
        if sorted(arr1)==sorted(arr2):
            print("true")
    
   
    
def main():
    m,n = map(int, input().split())  
    arr1 = list(map(int, input().split()))  
    arr2 = list(map(int, input().split()))
    if len(arr1)==m and len(arr1)==n:
        equallist(arr1,arr2)


if __name__== "__main__":
    main()
```

## Submission at 2024-08-24 09:29:41


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return("true" if sorted(arr1) == sorted(arr2))

# Input
n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if arrays are equal
if are_arrays_equal(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:31:38


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

# Input
m,n = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if arrays are equal
if equalarray(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:32:06


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

# Input
m,n = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if arrays are equal
if equalarray(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:32:21


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

# Input
m,n = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if arrays are equal
if equalarray(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:32:37


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

# Input
m,n = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if arrays are equal
if equalarray(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:33:03


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

# Input
m,n = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if arrays are equal
if equalarray(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:34:27


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return (arr1) == (arr2)

# Input
m,n = map(int, input().split())
arr11 = list(map(int, input().split()))
arr22 = list(map(int, input().split()))
arr1= arr11.sort()
arr2= arr22.sort()

# Check if arrays are equal
if equalarray(arr1, arr2):
    print("true")






```

## Submission at 2024-08-24 09:37:51


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return (arr1)==(arr2)

def main():
    m,n = map(int, input().split())
    arr11 = list(map(int, input().split()))
    arr22 = list(map(int, input().split()))
    arr1= arr11.sort()
    arr2= arr22.sort()
    if equalarray(arr1, arr2):
        print("true")
if __name__== "__main__":
    main()






```

## Submission at 2024-08-24 09:41:54


```
def divisible(n):
    return sum(i for i in range(1, n+1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)

n = int(input())
print(divisible(n))
```

## Submission at 2024-08-24 09:55:01


```
def isEvenCount(nums):
    return sum(1 for num in nums if len(str(num)) % 2 == 0)        


def main():
    n= int(input())
    nums= list(map(int, input().split()))
    print(isEvenCount(nums))

if __name__== "__main__":
    main()


```

## Submission at 2024-08-24 10:02:03


```
// Write the code from scratch, no boilerplate is required
def are_arrays_equal(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

n1, n2 = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

if are_arrays_equal(arr1, arr2):
    print("true")
```

## Submission at 2024-08-24 10:03:14


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

n, m = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

if equalarray(arr1, arr2):
    print("true")
```

## Submission at 2024-08-24 10:03:30


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

n, m = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

if equalarray(arr1, arr2):
    print("true")
```

## Submission at 2024-08-24 10:06:53


```
def find_kth_missing(arr, k):
    expected = 1
    missing_count = 0
    i = 0

    while missing_count < k:
        if i < len(arr) and arr[i] == expected:
            i += 1

    return expected - 1

n, k = map(int, input().split())
arr = list(map(int, input().split()))
print(find_kth_missing(arr, k))
```

## Submission at 2024-08-24 10:10:23


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

    if missing_count == k:
        print(expected - 1)

n, k = map(int, input().split())
arr = list(map(int, input().split()))
find_kth_missing(arr, k)
```

## Submission at 2024-08-24 10:15:31


```
def kth_missing(arr, k):
    exp = 1
    missing_c = 0
    i = 0

    while missing_c < k:
        if i < len(arr) and arr[i] == exp:
            i += 1
        else:
            missing_c += 1
        exp += 1

    if missing_c == k:
        print(exp - 1)

n, k = map(int, input().split())
arr = list(map(int, input().split()))
kth_missing(arr, k)
```

## Submission at 2024-08-24 10:19:51


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

n, m = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
if len(arr1)!=n or len(arr2)!=m:
    print("false")
else:
    if equalarray(arr1, arr2):
        print("true")
```

## Submission at 2024-08-24 10:20:30


```
# Write the code from scratch, no boilerplate is required
def equalarray(arr1, arr2):
    return sorted(arr1) == sorted(arr2)

n, m = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
if len(arr1)!=n or len(arr2)!=m:
    print("false")
else:
    if equalarray(arr1, arr2):
        print("true")
    else:
        print("false")
```

## Submission at 2024-08-28 02:36:01


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

## Submission at 2024-08-28 02:36:28


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

if __name__== "__main__":
    main()
```

## Submission at 2024-08-28 08:25:35


```
# Write Code from Scratch
def main():
        m, n = map(int, input().split())
        matrix=[]
        transpose=[]
#to get a matrix
        for i in range(m):
                row = []
                for j in range(n):
                        row.append(0)
                matrix.append(row)

    
        for i in range(m):
                row = list(map(int, input().split()))
                for j in range(n):
                        matrix[i][j] = row[j]

#for transpose
        for i in range(m):
                row = []
                for j in range(n):
                        row.append(0)
                transpose.append(row)     

        for i in range(m):
                for j in range(n):
                        transpose[j][i] = matrix[i][j]

    # to print the transpose matrix
        for i in range(n):
                for j in range(m):
                        print(transpose[i][j], end=" ")
                print()
        
if __name__== "__main__":
    main()
```

## Submission at 2024-08-28 08:39:02


```
# Write Code from Scratch

M, N = map(int, input().split())
matrix = []
for i in range(M):
    matrix.append(list(map(int, input().split())))

transpose = [[0 for _ in range(M)] for _ in range(N)]


for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

for i in range(N):
    for j in range(M):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-28 08:43:02


```
# Write Code from Scratch

M, N = map(int, input().split())
matrix = []
for i in range(M):
    matrix.append(list(map(int, input().split())))

#transpose = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    row = []
    for j in range(M):
        row.append(0)
    matrix.append(row)

for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

for i in range(N):
    for j in range(M):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-28 08:43:30


```
# Write Code from Scratch

M, N = map(int, input().split())
matrix = []
transpose=[]
for i in range(M):
    matrix.append(list(map(int, input().split())))

#transpose = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    row = []
    for j in range(M):
        row.append(0)
    matrix.append(row)

for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

for i in range(N):
    for j in range(M):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-28 08:43:56


```
# Write Code from Scratch

M, N = map(int, input().split())
matrix = []
transpose=[]
for i in range(M):
    matrix.append(list(map(int, input().split())))

#transpose = [[0 for _ in range(M)] for _ in range(N)]
for i in range(N):
    row = []
    for j in range(M):
        row.append(0)
    matrix.append(row)

for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

for i in range(N):
    for j in range(M):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-28 08:44:42


```
# Write Code from Scratch

M, N = map(int, input().split())
matrix = []
transpose=[]
for i in range(M):
    matrix.append(list(map(int, input().split())))

transpose = [[0 for _ in range(M)] for _ in range(N)]

for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

for i in range(N):
    for j in range(M):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-29 03:08:12


```

def spiral(n,m,matrix):
    
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
def main():
    m, n = map(int, input().split())
    matrix = []
    for i in range(m):
        matrix.append(list(map(int, input().split())))
    print(spiral(n,m,matrix))

if __name__== "__main__":
    main()
```

## Submission at 2024-08-29 03:09:53


```

def spiral(n,m,matrix):
    
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

n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]
print(spiral_matrix_traversal(n, m, matrix))


```

## Submission at 2024-08-29 03:11:27


```

def spiral(n,m,matrix):
    
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

n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]
print(spiral(n, m, matrix))


```

## Submission at 2024-08-30 05:10:44


```

def Pow(x,n):
    if n>=0:
        x=x*x 
        n=n-1 
        return Pow(x,n)


def main():
    x,n= map(int,input().split())
    print(Pow(x,n))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 05:43:30


```
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test+=str1[i]
            i==i+1
            test(i)
        
    if test1=str1:
        return("YES")
    else :
        return("NO")

        
        


str1=input().split()
print(ispalindrome(str1))

```

## Submission at 2024-08-30 05:45:27


```
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test+=str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))

```

## Submission at 2024-08-30 05:52:51


```
# Write code from scratch
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test+=str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))
```

## Submission at 2024-08-30 05:58:03


```


# write from scratch, create a function named Pow(x:int , n:int)
import math

def Pow(x,n):
    return (pow(x,n))

def main():
    x,n= map(int,input().split())
    print(Pow(x,n))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 06:07:31


```
# Write code from scratch
n= int(input())
a= list(map(int,input().split()))
b= list(map(int,input().split()))
c=[]
for i in range (0,n):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])

for i in range(0,n):
    print(c[i],end=' ')
```

## Submission at 2024-08-30 06:14:21


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x,n):
    if n>=0:
        return (pow(x,n))
    else:
        return (pow(x,n)).floor()

def main():
    x,n= map(int,input().split())
    print(Pow(x,n))

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 06:17:06


```
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test+=str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))
```

## Submission at 2024-08-30 06:18:23


```
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test+=str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))
```

## Submission at 2024-08-30 06:20:11


```
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test+=str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))
```

## Submission at 2024-08-30 06:27:20


```
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test1=test1+str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))
```

## Submission at 2024-09-06 04:47:32


```
# Write code from scratch
n=int(input())
a= list(map(int,input().split()))
b= list(map(int,input().split()))
c=[]

for i in range (0,n):
    if a[i]>b[i]:
       c.append(a[i])
    else:
        c.append(b[i])
 
for i in range(0,n):
    print(c[i],end=' ')
```

## Submission at 2024-09-06 04:49:20


```
# Write code from scratch
# Write code from scratch
# Write code from scratch
def ispalindrome(str1):
    i=0
    test1=()
    def test(i):
        if str1[i]==str1[-i-1]:
            test1+=str1[i]
            i==i+1
            test(i)
        
    if test1==str1:
        return("YES")
    else :
        return("NO")

str1=input()
print(ispalindrome(str1))
```

## Submission at 2024-09-06 04:53:44


```
def palindrome(s):
    while len(s)>1:
        if s[0]==s[-1]:
            s.pop(-1)
            s.pop(0)
            palindrome(s)
        else:
            return "NO"
    return "YES"
s= list(input())
r= palindrome(s)
print(r)

```

## Submission at 2024-09-06 04:53:48


```
def palindrome(s):
    while len(s)>1:
        if s[0]==s[-1]:
            s.pop(-1)
            s.pop(0)
            palindrome(s)
        else:
            return "NO"
    return "YES"
s= list(input())
r= palindrome(s)
print(r)

```

## Submission at 2024-09-06 04:56:54


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x,n):
    if n==0:
        return 1
    return x*Pow(x,n-1)


def main():
    x,n= map(int,input().split())
    print(Pow(x,n))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:03:35


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n==0:
        return 1
    return math.floor(x*Pow(x,n-1))


def main():
    x,n= map(int,input().split())
    print(Pow(x,n))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:05:17


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n==0:
        return 1
    return (x*Pow(x,n-1))


def main():
    x,n= map(int,input().split())
    print(math.floor(Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:08:07


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n==0:
        return 1
    elif n<0:
        return (x*Pow(x,-n-1))
    else:
        return (x*Pow(x,n-1))



def main():
    x,n= map(int,input().split())
    print(math.floor(Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:13:18


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n==0:
        return 1
    elif n<0:
        return (x*Pow(x,-n-1))
    else:
        return (x*Pow(x,n-1))



def main():
    x,n= map(int,input().split())
    print(math.floor(Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:13:41


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n==0:
        return 1
    elif n<0:
        return (x*Pow(x,n+1))
    else:
        return (x*Pow(x,n-1))



def main():
    x,n= map(int,input().split())
    print(math.floor(Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:14:24


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n==0:
        return 1
    elif n<0:
        return math.floor(x*Pow(x,-n+1))
    else:
        return (x*Pow(x,n-1))



def main():
    x,n= map(int,input().split())
    print((Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:17:13


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    elif n < 0:
        return Pow(1 // x, -n)
    elif n % 2:
        return x * Pow(x, n - 1)
    else:
        return Pow(x * x, n // 2)


def main():
    x,n= map(int,input().split())
    print((Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-06 05:18:02


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def Pow(x,n):
    if n == 0:
        return 1
    elif n < 0:
        return Pow(1 // x, -n)
    elif n % 2:
        return x * Pow(x, n - 1)
    else:
        return Pow(x * x, n // 2)


def main():
    x,n= map(int,input().split())
    print((Pow(x,n)))

if __name__=="__main__":
    main()
```

## Submission at 2024-09-13 04:45:34


```

def modify_matrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == -1:
                matrix[i][j] = max(col[j] for col in matrix if col[j] != -1)
    return matrix

    
```

## Submission at 2024-09-13 04:46:04


```

def modify_matrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == -1:
                matrix[i][j] = max(col[j] for col in matrix if col[j] != -1)
    return matrix

    
```

## Submission at 2024-09-13 04:46:17


```

def modify_matrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == -1:
                matrix[i][j] = max(col[j] for col in matrix if col[j] != -1)
    return matrix

    
```

## Submission at 2024-09-13 04:50:21


```

def modify_matrix(matrix):
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            if matrix[i][j] == -1:
                for col in matrix:
                    if col[j] != -1:
                        matrix[i][j]=max(col[j],-1)

                #matrix[i][j] = max(col[j] for col in matrix if col[j] != -1)
    return matrix

    
```

## Submission at 2024-10-04 05:01:59


```
# Write Python code from scratch
def anagram(s,t):
    lst1= list(s)
    lst2= list(t)
    if lst1.sort()== lst2.sort():
        return "true"
    else:
        return "false"
    
    
s= input()
t= input()
print(anagram(s,t))
```

## Submission at 2024-10-04 05:02:24


```
# Write Python code from scratch
def anagram(s,t):
    lst1= list(s)
    lst2= list(t)
    if lst1.sort()== lst2.sort():
        return "true"
    else:
        return "false"
    
    
s= input()
t= input()
print(anagram(s,t))
```

## Submission at 2024-10-04 05:03:23


```
# Write Python code from scratch
def anagram(s,t):
    lst1= list(s)
    lst2= list(t)
    ''' if lst1.sort()== lst2.sort():
        return "true"
    else:
        return "false" '''
    return sorted(lst1)==sorted(lst2)
    
    
s= input()
t= input()
print(anagram(s,t))
```

## Submission at 2024-10-04 05:05:05


```
# Write Python code from scratch
def anagram(s,t):
    lst1= list(s)
    lst2= list(t)
    ''' if lst1.sort()== lst2.sort():
        return "true"
    else:
        return "false" '''
    return sorted(lst1)==sorted(lst2)
    
    
s= input()
t= input()

st=(anagram(s,t))
if st:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 05:21:07


```
# Write Python code from scratch
def temperature(n,arrn):
    answer=[]
    count=0
    for i in range(0,n):
        if i+1<n:
            if arrn[i]<arrn[i+1]:
                count+=1
                answer.append(count)
        else:
            count=0
            answer.append(count)
            
    return answer

n= int(input())
arrn= list(map(int,input().split()))
print(temperature(n,arrn))
```

## Submission at 2024-10-04 05:28:45


```
# Write Python code from scratch
def temperature(n,arrn):
    answer=[]
    count=0
    for i in range(0,n):
        if i==n-1:
            count=0
            answer.append(count)
        while i+1<n:
            if arrn[i]<arrn[i+1]:
                count+=1
                answer.append(count)
            else: 
                i=i+1
                count+=1
            
    return answer

n= int(input())
arrn= list(map(int,input().split()))
print(temperature(n,arrn))
```

## Submission at 2024-10-04 05:40:23


```

def temperature(n,arrn):
    answer=[]
    count=0
    for i in range(0,n):
        if i==n-1:
            count=0
            answer.append(count)
        if i!=n-1:
            if arrn[i]>arrn[i+1]:
                count+=1
                answer.append(count)
            else:
                count+=1
                i=i+1
                answer.append(count)
            

            
    return answer

n= int(input())
arrn= list(map(int,input().split()))
print(temperature(n,arrn))
```

## Submission at 2024-10-04 05:52:54


```
# Write Python code from scratch

def temperature(n,arrn):
    answer=[]
    count=0
    for i in range(0,n):
        if i!=n-1:
            if arrn[i]>arrn[i+1]:
                count+=1
                answer.append(count)
            else:
                count+=1
                i=i+1
                answer.append(count)
        else:
            count=0
            answer.append(count) 
    return answer

n= int(input())
arrn= list(map(int,input().split()))
ans= temperature(n,arrn)
for i in range(len(ans)):
    print(ans[i],end=" ")
```

## Submission at 2024-10-04 05:53:15


```
# Write Python code from scratch

def temperature(n,arrn):
    answer=[]
    count=0
    for i in range(0,n):
        if i!=n-1:
            if arrn[i]>arrn[i+1]:
                count+=1
                answer.append(count)
            else:
                count+=1
                i=i+1
                answer.append(count)
        else:
            count=0
            answer.append(count) 
    return answer

n= int(input())
arrn= list(map(int,input().split()))
ans= temperature(n,arrn)
for i in range(len(ans)):
    print(ans[i],end=" ")
```

## Submission at 2024-10-04 06:00:52


```
# Write code from scratch here

def ticket(n,arrn,k):
    time=n*k
    
    return time
n=int(input())
arrn= list(map(int,input().split()))
k=int(input())
print(ticket(n,arrn,k))
```

## Submission at 2024-10-04 06:06:26


```
# Write code from scratch here

def ticket(n,arrn,k):
    time=0
    for num in arrn:
        if num==arrn[k]:
            time+=num
        elif num> arrn[k]:
            time+=arrn[k]
        else:
            time+=num    
    return time
n=int(input())
arrn= list(map(int,input().split()))
k=int(input())
print(ticket(n,arrn,k))
```

## Submission at 2024-10-25 05:31:04


```
# write code from scratch
def wordpattern(pattern,s):
    s=s.split()
    return len(set(pattern))==len(set(s))==(zip(pattern,s))

pattern=input()
s= input()
if wordpattern(pattern,s):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 05:41:21


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
  if root==None:
    return root
  A=[]
  node=root
  if node.left:
    A.extend(postOrder(node.left))
  if node.right:
    A.extend(postOrder(node.right))
  
  A.append(node.data)

  return A


```

## Submission at 2024-10-25 05:54:16


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
        if root==None:
            return root
        return self.helper(root)
    def helper(self,root):
        if root.left:
            l= self.isSymmetric(root.left) 
        if root.right:
            r= self.isSymmetric(root.right)
        return (l.data==r.data) and (l.right==r.left) and (l.left==r.right)

```

## Submission at 2024-10-25 06:08:05


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
        if root==None:
            return root
        return self.helper(root)
    def helper(self,root):
        l= root.left 
        r= root.right
        return (l.data==r.data) and (l.right==r.left) and (l.left==r.right)
```

## Submission at 2024-10-25 06:10:00


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
        if root==None:
            return root
        return self.helper(root)
    def helper(self,root):
        l= root.left 
        r= root.right
        l.right= self.helper(l.right)
        r.left= self.helper(r.left)
        
        return (l.data==r.data) and (l.right==r.left) and (l.left==r.right)
```

## Submission at 2024-10-25 06:13:04


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
        if root==None:
            return root
        return self.helper(root)
    def helper(self,root):
        l= root.left 
        r= root.right

        return (l.data==r.data) and (l.right==r.left) and (l.left==r.right)
```

## Submission at 2024-10-25 06:13:31


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
        if root==None:
            return root
        return self.helper(root)
    def helper(self,root):
        l= root.left 
        r= root.right

        return (l.data==r.data) and (l.right==r.left) and (l.left==r.right)
```

## Submission at 2024-10-25 06:13:58


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
        if root==None:
            return root
        return self.helper(root)
    def helper(self,root):
        l= root.left 
        r= root.right

        return (l.data==r.data) and (l.right==r.left) and (l.left==r.right)
```

## Submission at 2024-10-25 06:44:00


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic1:
            dic2[j]+=1
        else:
            dic2[j]=1
    for k in dic2:
        if dic2<=dic1:
            return True
    return False

ransomNote= input()
magazine=input()
if ransom(ransomNote,magazine):
    print("true")
else:
    print("false")



    
    

```

## Submission at 2024-10-25 06:44:29


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic1:
            dic2[j]+=1
        else:
            dic2[j]=1
    for k in dic2:
        if dic2==dic1:
            return True
    return False

ransomNote= input()
magazine=input()
if ransom(ransomNote,magazine):
    print("true")
else:
    print("false")



    
    

```

## Submission at 2024-10-25 06:45:06


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic1:
            dic2[j]+=1
        else:
            dic2[j]=1
    for k in dic2:
        if dic2==dic1:
            return True
    return False

ransomNote= input()
magazine=input()
if ransom(ransomNote,magazine):
    print("true")
else:
    print("false")



    
    

```

## Submission at 2024-10-25 06:45:40


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic1:
            dic2[j]+=1
        else:
            dic2[j]=1
    ''' for k in dic2:
        if dic2==dic1:
            return True '''
    return False

ransomNote= input()
magazine=input()
if ransom(ransomNote,magazine):
    print("true")
else:
    print("false")



    
    

```

## Submission at 2024-10-25 06:47:04


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic1:
            dic2[j]+=1
        else:
            dic2[j]=1
    ''' for k in dic2:
        if dic2==dic1:
            return True '''
    return False

ransomNote= input()
magazine=input()
print(ransom(ransomNote,magazine))



    
    

```

## Submission at 2024-10-25 06:49:31


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic2:
            dic2[j]+=1
        else:
            dic2[j]=1
    for k in dic2:
        if dic2==dic1:
            return "true" 
    return "false"

ransomNote= input()
magazine=input()
print(ransom(ransomNote,magazine))




    
    

```

## Submission at 2024-10-25 06:52:23


```
# write code from scratch
def ransom(ransomNote,magazine):
    dic1= {}
    dic2={}
    for i in magazine:
        if i in dic1:
            dic1[i]+=1
        else:
            dic1[i]=1
    for j in ransomNote:
        if j in dic2:
            dic2[j]+=1
        else:
            dic2[j]=1
    for k in dic2:
        if dic2[k]<=dic1[k]:
            return "true" 
    return "false"

ransomNote= input()
magazine=input()
print(ransom(ransomNote,magazine))
```

## Submission at 2024-10-25 06:55:09


```
# write code from scratch
def wordpattern(pattern,s):
    s=s.split()
    if len(set(pattern))==len(set(s))==(zip(pattern,s))
        return "true"
    else:
        return "false"
pattern=input()
s= input()
print(wordpattern(pattern,s))

```

## Submission at 2024-10-25 06:55:47


```
# write code from scratch
def wordpattern(pattern,s):
    s=s.split()
    if len(set(pattern))==len(set(s))==(zip(pattern,s)):
        return "true"
    else:
        return "false"
pattern=input()
s= input()
print(wordpattern(pattern,s))

```

## Submission at 2024-10-25 06:56:46


```
# write code from scratch
def wordpattern(pattern,s):
    s=s.split()
    if len(set(pattern))==len(set(s))==(zip(pattern,s)):
        return "true"
    else:
        return "false"
pattern=input()
s= input()
print(wordpattern(pattern,s))

```

## Submission at 2024-10-25 07:01:55


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
        sum1= 0
    def helper(self,num1,num2):
        while num1.next==None and num2.next==None:
            sum1+=num1.data+num2.data
        return sum1


```

## Submission at 2024-11-15 06:06:43


```
# Write code from scratch here
def ticket(n,arrn,k):
    time=0
    for num in arrn:
        if num==arrn[k]:
            time+=num
        elif num> arrn[k]:
            time+=arrn[k]
        else:
            time+=num    
    return time
n=int(input())
arrn= list(map(int,input().split()))
k=int(input())
print(ticket(n,arrn,k))
```

## Submission at 2024-11-15 06:11:34


```
# Write code from scratch here
def ticket(n,arrn,k):
    time=0
    for num in arrn:
        if num==arrn[k]:
            time+=num
        elif num> arrn[k]:
            time+=arrn[k]
        else:
            time+=num    
    return time
n=int(input())
arrn= list(map(int,input().split()))
k=int(input())
if k<= len(arrn):
    print(ticket(n,arrn,k))
```

## Submission at 2024-11-15 06:13:35


```
# Write code from scratch here
def ticket(n,arrn,k):
    time=0
    for num in arrn:
        if num<=arrn[k]:
            time+=num
        else:
            time+=arrn[k]
       
    return time
n=int(input())
arrn= list(map(int,input().split()))
k=int(input())
if k<= len(arrn):
    print(ticket(n,arrn,k))
```

## Submission at 2024-11-15 06:15:36


```
# Write code from scratch here
def ticket(n,arrn,k):
    time=0
    for num in arrn:
        if num<=arrn[k]:
            time+=num
        else:
            time+=arrn[k]
       
    return time
n=int(input())
arrn= list(map(int,input().split()))
k=int(input())
if k< len(arrn) and k>=0:
    print(ticket(n,arrn,k))
```

## Submission at 2024-11-22 05:04:59


```
# Write Code From Scratch Here
def sumArray(arr):
    s=0
    l= len(arr)
    for i in range(0,l):
        s+=arr[i]
    return s


n=int(input())
for i in range(0,n):
    arr=int(input(), end=" ")
if len(arr)==n:
    print(sumArray(arr))
```

## Submission at 2024-11-22 05:06:07


```
# Write Code From Scratch Here
def sumArray(arr):
    s=0
    l= len(arr)
    for i in range(0,l):
        s+=arr[i]
    return s


n=int(input())
arr=list(map(int,input().split()))
if len(arr)==n:
    print(sumArray(arr))
```

## Submission at 2024-11-22 05:15:10


```
# write code from scratch
val=0
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
for i in range (0,len(arr1)):
    for j in range(0,len(arr2)):
        if abs(arr1[i]-arr2[j])<=d:
            val+=1

print(val)
        

```

## Submission at 2024-11-22 05:17:13


```
# write code from scratch
val=0
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
for i in range (0,len(arr1)):
    for j in range(0,len(arr2)):
        if abs(arr1[i]-arr2[j])<d:
            val+=1

print(val)
        

```

## Submission at 2024-11-22 05:19:34


```
# write code from scratch
val=0
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
for i in range (0,len(arr1)):
    for j in range(0,len(arr2)):
        if abs(arr1[i]-arr2[j])<=d:
            val+=1

print(val)
        

```

## Submission at 2024-11-22 05:23:16


```
# write code from scratch
def findDist(arr1,arr2,d):
    val=0
    for i in range (0,len(arr1)):
        for j in range(0,len(arr2)):
            if abs(arr1[i]-arr2[j])<=d:
                val+=1
    return val
    
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
if len(arr1)==m and len(arr2)==n:
    print(findDist(arr1,arr2,d))

        

```

## Submission at 2024-11-22 05:26:51


```
# write code from scratch
def findDist(arr1,arr2,d):
    val=0
    for i in range (0,len(arr1)):
        for j in range(0,len(arr2)):
            if abs(arr1[i]-arr2[j])>d:
                val+=1
    return val
    
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
if len(arr1)==m and len(arr2)==n:
    print(findDist(arr1,arr2,d))
```

## Submission at 2024-11-22 05:29:55


```
# write code from scratch
def findDist(arr1,arr2,d):
    val=0
    for i in range (0,len(arr1)):
        for j in range(0,len(arr2)):
            if abs(arr1[i]-arr2[j])>d:
                val+=arr[i]
    return len(set(val))
    
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
if len(arr1)==m and len(arr2)==n:
    print(findDist(arr1,arr2,d))
```

## Submission at 2024-11-22 05:32:07


```
# write code from scratch
def findDist(arr1,arr2,d):
    val=[]
    for i in range (0,len(arr1)):
        for j in range(0,len(arr2)):
            if abs(arr1[i]-arr2[j])>d:
                val.append(arr1[i])
    return len(set(val)
    
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
if len(arr1)==m and len(arr2)==n:
    print(findDist(arr1,arr2,d))
```

## Submission at 2024-11-22 05:35:06


```
# write code from scratch
def findDist(arr1,arr2,d):
    val=[]
    for i in range (0,len(arr1)):
        for j in range(0,len(arr2)):
            if abs(arr1[i]-arr2[j])<=d:
                val.append(arr1[i])
    return abs(len(arr1)-len(set(val)))
    
m,n,d= map(int,input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
if len(arr1)==m and len(arr2)==n:
    print(findDist(arr1,arr2,d))
```

## Submission at 2024-11-22 05:41:58


```
# write code from scratch
def repeat(arr,n):
    d={}
    for num in arr:
        if num in d:
            d[num]+=1
        else:
            d[num]=1
        if d[num]==2:
            return num

n= int(input())
arr= list(map(int,input().split()))
if len(arr)==n:
    print(repeat(arr,n))

```

## Submission at 2024-11-22 05:47:38


```
# write code from scratch
def repeat(arr,n):
    d={}
    arr=[]
    for num in arr:
        if num in d:
            d[num]+=1
        else:
            d[num]=1
    for key in d:
        if d[key]==2:
            arr.append(key)
    return len(arr)
            

n= int(input())
arr= list(map(int,input().split()))
if len(arr)==n:
    print(repeat(arr,n))

```

## Submission at 2024-11-22 05:55:03


```
# write code from scratch
def diamonds(n):
    for i in range(0,n):
        for j in range(i,n):
            print("*",end="")
    for i in range(n-1,-1,-1):
        for j in range(i,-1,-1):
            print("*",end="")

n= int(input()):
print(diamonds(n))
```

## Submission at 2024-11-22 05:55:17


```
# write code from scratch
def diamonds(n):
    for i in range(0,n):
        for j in range(i,n):
            print("*",end="")
    for i in range(n-1,-1,-1):
        for j in range(i,-1,-1):
            print("*",end="")

n= int(input())
print(diamonds(n))
```

## Submission at 2024-11-22 06:20:11


```
# write code from scratch# write code from scratch
def freq(A,N):
    d={}
    for num in A:
        if num in d:
            d[num]+=1
        else:
            d[num]=1
    minm=d[max(A)]
    result=0
    for key in d:
        if d[key]< minm and key<max(A):
            return key

N=int(input())
A= list(map(int,input().split()))
if len(A)==N:
    print(freq(A,N))

        
```

## Submission at 2024-11-22 06:33:16


```
# write code from scratch
# write code from scratch
def repeat(arr,n):
    d={}
    arr=[]
    for num in arr:
        if num in d:
            d[num]+=1
        else:
            d[num]=1
    score=0
    for key in d:
        if d[key]%2==0:
            score+=d[key]//2
    return score
            
n= int(input())
arr= list(map(int,input().split()))
if len(arr)==n:
    print(repeat(arr,n))

```

## Submission at 2024-11-22 06:35:15


```
# write code from scratch
# write code from scratch
def repeat(arr,n):
    d={}
    arr=[]
    for num in arr:
        if num in d:
            d[num]+=1
        else:
            d[num]=1
    score=0
    for key in d:
        if d[key]%2==0:
            score+=d[key]//2
    return score
            
n= int(input())
arr= list(map(int,input().split()))
if len(arr)==n:
    print(repeat(arr,n))

```

## Submission at 2024-11-22 06:44:31


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
        if not root:
            return root
        if root.left and root.left.data<root.data:
            return self.isBST(root.left)
        if root.right and root.right.data>root.data:
            return self.isBST(root.right)
        
        return "true"
        

```

## Submission at 2024-11-22 06:45:50


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
        if not root:
            return root
        if root.left and root.left.data<root.data:
            return self.isBST(root.left)
        if root.right and root.right.data>root.data:
            return self.isBST(root.right)
        
        return "true"
        

```

## Submission at 2024-11-22 06:55:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here

def removeDuplicates(head):
    # Code here
    New_node=head
    result=New_node
    arr=[]
    if head is not None:
        arr.append(head):
        head=head.next

    arr=sorted(set(arr))

    for node in arr:
        New_node.data= node
        New_node=New_node.next

    return New_node
```

## Submission at 2024-11-22 06:57:04


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def removeDuplicates(head):
    # Code here
    New_node=head
    result=New_node
    arr=[]
    if head is not None:
        arr.append(head.data):
        head=head.next

    arr=sorted(set(arr))

    for node in arr:
        New_node.data= node
        New_node=New_node.next

    return New_node


```

## Submission at 2024-11-22 07:00:13


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
def removeDuplicates(head):
    # Code here
    New_node=head
    result=New_node
    arr=[]

    if head is not None:
        arr.append(head.data)
        head=head.next

    arr=sorted(set(arr))

    for node in arr:
        New_node.data= node
        New_node=New_node.next

    return result


```

## Submission at 2024-11-22 07:05:45


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    New_node=head
    result=New_node
    arr=[]

    if head is not None:
        arr.append(head.data)
        head=head.next

    arr=sorted(set(arr))

    for node in arr:
        head.data=node
        head=head.next

    return result



```

