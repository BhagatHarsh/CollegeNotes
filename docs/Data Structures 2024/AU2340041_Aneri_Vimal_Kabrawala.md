## Submission at 2024-08-09 04:50:19


```
# Write your Python code here from the scratch
name = input()
print("Hello ", name ,"!", sep="")
```

## Submission at 2024-08-09 04:55:52


```
# Write your Python code here from the scratch
name = input()

if len(name) >=1 and len(name) <= 100:
    print("Hello ", name ,"!", sep="")
```

## Submission at 2024-08-09 05:00:54


```
# Write your Python code here
n = int(input())
name = []

for i in range(n):
    nm = input()
    name.append(nm)

for i in range(n):
    if 1 <=n<= 100 and 1 <=len(name[i])<= 100:
        print("Hello ", name[i] ,"!", sep="")
```

## Submission at 2024-08-09 05:01:32


```
# Write your Python code here
n = int(input())
name = []

for i in range(n):
    nm = input()
    name.append(nm)

for i in range(n):
    if 1 <=n<= 100 and 1 <=len(name[i])<= 100:
        print("Hello ", name[i] ,"!", sep="")
```

## Submission at 2024-08-09 05:08:43


```
# Write your Python code here from the scratch
name = input()
print("Hello ", name, "!", sep="")
```

## Submission at 2024-08-09 05:10:15


```
# Write your Python code here from the scratch
name = input()

if 1 <= len(name) <= 100:
    print("Hello ", name, "!", sep="")
```

## Submission at 2024-08-09 05:16:35


```
n = int(input())
name = []

for i in range(n):
    nm = input()
    name.append(nm)

for i in range(n):
    print("Hello ", name[i], "!", sep="")

    
```

## Submission at 2024-08-09 05:20:09


```
n = int(input())
if  1 <= n <= 100:
    for i in range(n):
        nm = input() 
        if 1 <= len(nm) <= 100:
            print("Hello ", nm, "!", sep="")

    
```

## Submission at 2024-08-16 04:49:20


```
def fibonacci(x:int) -> int:
    # write your logic here
    if 0 <= x <= 10:
        if x == 0:
            n = 0
        if x == 1:
            n = 1
        if x > 1:
            n = fibonacci(x-1) + fibonacci(x-2)
        
    return n

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:49:21


```
def fibonacci(x:int) -> int:
    # write your logic here
    if 0 <= x <= 10:
        if x == 0:
            n = 0
        if x == 1:
            n = 1
        if x > 1:
            n = fibonacci(x-1) + fibonacci(x-2)
        
    return n

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:49:22


```
def fibonacci(x:int) -> int:
    # write your logic here
    if 0 <= x <= 10:
        if x == 0:
            n = 0
        if x == 1:
            n = 1
        if x > 1:
            n = fibonacci(x-1) + fibonacci(x-2)
        
    return n

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:50:47


```
def fibonacci(x:int) -> int:
    # write your logic here
    if 0 <= x <= 10:
        if x < 2:
            n = x
        else:
            n = fibonacci(x-1) + fibonacci(x-2)
        
    return n

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:53:41


```
def fibonacci(x:int) -> int:
    # write your logic here
    if 0 <= x <= 10:
        if x < 2:
            return x
        else:
            return fibonacci(x-1) + fibonacci(x-2)
        
    return n

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:16:14


```
def is_power_of_two(n:int) -> str:
    # Write your logic here

    result = "false"
    if (-2^31 <= n <= 2^31 - 1):
        if n%2 == 0:
            if n == 2:
                result = "true"
            else:
                return is_power_of_two(n/2)
    return result
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:18:15


```
def is_power_of_two(n:int) -> str:
    # Write your logic here

    result = "false"
    if (-2^31 <= n <= 2^31 - 1):
        if n%2 == 0:
            if n == 2:
                result = "true"
            else:
                return is_power_of_two(n/2)
    return result
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:22:12


```
def is_power_of_two(n:int) -> str:
    # Write your logic here

    result = "false"
    if ((-2^31) <= n <= (2^31 - 1)):
        if n<0:
            n = -n
        if n%2 == 0:
            if n == 2:
                result = "true"
            else:
                return is_power_of_two(n/2)
    return result
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:27:48


```
def is_power_of_two(n:int) -> str:
    # Write your logic here

    result = "false"
    if ((-2^31) <= n <= (2^31 - 1)):
        if n<=0:
           return result 
        elif n==1:
            result = "true"
            return result   
        elif n>1:
            if n%2 == 0:
                if n == 2:
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

## Submission at 2024-08-16 05:29:03


```
def is_power_of_two(n:int) -> str:
    # Write your logic here

    result = "false"
    if ((-2^31) <= n <= (2^31 - 1)):
        if n<=0:
           return result 
        elif n==1:
            return "true"   
        elif n>1:
            if n%2 == 0:
                if n == 2:
                    return "true"
                else:
                    return is_power_of_two(n/2)
    
    return result 
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 07:04:40


```
def combine(n, k):
    results = []
    def combinations(i, combination):
        if len(combination) == k:
            results.append(list(combination))
            return

        for j in range(i, n + 1):
            combination.append(j)
            combinations(j + 1, combination)
            combination.pop()

    combinations(1, [])
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

## Submission at 2024-08-22 07:15:04


```
def permute(List):
    if len(List) == 0:
        return [[]]

    else:
        permutations = []

        for i in range(len(List)):
            remaining = List[:i] + List[i+1:]
            permutations1 = permute(remaining)

            for j in permutations1:
                permutations.append([List[i]] + j)

        return permutations


numbers = list(map(int, input().split()))

permutations = permute(numbers)
print(permutations)
```

## Submission at 2024-08-22 12:08:20


```
def permute(List):
    if len(List) == 0:
        return [[]]

    else:
        permutations = []

        for i in range(len(List)):
            left = List[:i] + List[i+1:]
            permutations1 = permute(left)

            for j in permutations1:
                permutations.append([List[i]] + j)

        return permutations


numbers = list(map(int, input().split()))

permutations = permute(numbers)
print(permutations)
```

## Submission at 2024-08-22 12:08:51


```
def permute(List):
    if len(List) == 0:
        return [[]]

    else:
        permutations = []

        for i in range(len(List)):
            left = List[:i] + List[i+1:]
            permutations1 = permute(left)

            for j in permutations1:
                permutations.append([List[i]] + j)

        return permutations


numbers = list(map(int, input().split()))

permutations = permute(numbers)
print(permutations)
```

## Submission at 2024-08-22 12:10:23


```
def permute(List):
    if len(List) == 0:
        return [[]]

    else:
        permutations = []

        for i in range(len(List)):
            left = List[:i] + List[i+1:]
            permutations1 = permute(left)

            for j in permutations1:
                permutations.append([List[i]] + j)

        return permutations


numbers = list(map(int, input().split()))

result = permute(numbers)
print(result)
```

## Submission at 2024-08-22 12:50:38


```
import itertools

def permute(List):

    if len(List) == 0:
        return [[]]
    elif len(List) == 1:
        return [List]

    permutations = []
    for i in range(len(List)):
        left = List[:i] + List[i+1:]
        permutations1 = permute(left)
        for j in permutations1:
            permutations.append([List[i]] + j)

    return permutations

numbers = list(map(int, input().split()))

result = permute(numbers)
print(result)
```

## Submission at 2024-08-22 12:57:02


```
def permute(List):

    if len(List) == 0:
        return [[]]
    elif len(List) == 1:
        return [List]

    permutations = []
    for i in range(len(List)):
        left = List[:i] + List[i+1:]
        permutations1 = permute(left)
        for j in permutations1:
            permutations.append([List[i]] + j)

    return permutations

numbers = list(map(int, input().split()))

result = permute(numbers)
print(result)
```

## Submission at 2024-08-22 12:57:46


```
def parentheses_pattern(n):
    def parentheses(s, left, right, result):
        if len(s) == 2 * n:
            result.append(s)
            return

        if left > 0:
            parentheses(s + "(", left - 1, right, result)
        if right > left:
            parentheses(s + ")", left, right - 1, result)
        
    result = []
    parentheses("", n, n, result)
    return result

# Example usage:
n = 3
print(parentheses_pattern(n))
```

## Submission at 2024-08-22 13:13:39


```
def generateParenthesis(n, open, close, current, result):
    if len(current) == 2 * n:
        result.append(current)
        return
    
    if open < n:
        generateParenthesis(n, open + 1, close, current + '(', result)
    
    if close < open:
        generateParenthesis(n, open, close + 1, current + ')', result)

def generateParentheses(n):
    result = []
    generateParenthesis(n, 0, 0, "", result)
    return result

def main():
    n = int(input())

    combinations = generateParentheses(n)
    
    print("[", end="")
    for i in range(len(combinations)):
        print(f"\"{combinations[i]}\"", end="")
        if i < len(combinations) - 1:
            print(",", end="")
    print("]")

if __name__ == "_main_":
    main()
```

## Submission at 2024-08-22 13:21:01


```
def generateParenthesis(n, open, close, current, result):
    if len(current) == 2 * n:
        result.append(current)
        return
    
    if open < n:
        generateParenthesis(n, open + 1, close, current + '(', result)
    
    if close < open:
        generateParenthesis(n, open, close + 1, current + ')', result)

def generateParentheses(n):
    result = []
    generateParenthesis(n, 0, 0, "", result)
    return result

def main():
    n = int(input())

    # Generate combinations
    combinations = generateParentheses(n)
    
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

## Submission at 2024-08-22 13:22:16


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

## Submission at 2024-08-22 13:23:11


```
def Parenthesis_combinations(n, open, close, current, result):
    if len(current) == 2 * n:
        result.append(current)
        return
    
    if open < n:
        Parenthesis_combinations(n, open + 1, close, current + '(', result)
    
    if close < open:
        Parenthesis_combinations(n, open, close + 1, current + ')', result)

def Parentheses(n):
    result = []
    Parenthesis_combinations(n, 0, 0, "", result)
    return result

def main():
    n = int(input())

    combinations = Parentheses(n)
    
    print("[", end="")
    for i in range(len(combinations)):
        print(f"\"{combinations[i]}\"", end="")
        if i < len(combinations) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 13:23:25


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

## Submission at 2024-08-22 13:23:47


```
def permute(List):

    if len(List) == 0:
        return [[]]
    elif len(List) == 1:
        return [List]

    permutations = []
    for i in range(len(List)):
        left = List[:i] + List[i+1:]
        permutations1 = permute(left)
        for j in permutations1:
            permutations.append([List[i]] + j)

    return permutations

numbers = list(map(int, input().split()))

result = permute(numbers)
print(result)
```

## Submission at 2024-08-28 07:09:08


```
def equals(list1, list2):
    if len(list1) != len(list2):
        return False

    S_list1 = sorted(list1)
    S_list2 = sorted(list2)

    for i in range(len(S_list1)):
        if S_list1[i] != S_list2[i]:
            return False

    return True

#__main__
a, b= map(int, input().split())
l1 = list(map(int, input().split()))
l2 = list(map(int, input().split()))

if equals(l1, l2):
    print("true")
else:
    print("false")
```

## Submission at 2024-08-28 07:24:48


```
def divisible_357(n):
    Sum = 0
    if n > 0 and n <= 1000:
        for i in range(1,n+1):
            if i%3==0 or i%5==0 or i%7==0:
                Sum += i
    else:
        return False
    
    return Sum

#__main__
n = int(input())
ans = divisible_357(n) 
if ans:
    print(ans)
else:
    print()      
```

## Submission at 2024-08-28 07:27:08


```
def divisible_357(n):
    Sum = 0
    for i in range(1,n+1):
        if i%3==0 or i%5==0 or i%7==0:
            Sum += i
    
    return Sum

#__main__
n = int(input())

ans = divisible_357(n) 
print(ans)
    
```

## Submission at 2024-08-28 07:28:22


```
def divisible_357(n):
    Sum = 0
    for i in range(1,n+1):
        if i%3==0 or i%5==0 or i%7==0:
            Sum += i
    
    return Sum

#__main__
n = int(input())

ans = divisible_357(n) 
print(ans)
    
```

## Submission at 2024-08-28 07:58:17


```
def even_digits(list1):
    cnt = 0
    for i in list1:
        if len(str(i))%2 == 0:
            cnt += 1

    return cnt

#__main__
len_l = map(int, input().split())
l1 = list(map(int, input().split()))

print(even_digits(l1))
```

## Submission at 2024-08-28 08:48:28


```
def triangular_sum(arr):
    arr1 = []
    if len(arr) == 1:
        return arr[0]

    for i in range(len(arr)-1):
        arr1.append(arr[i]+arr[i+1])
    
    return triangular_sum(arr1)


#_main_
n = int(input())
arr = list(map(int, input().split()))

print(triangular_sum(arr))
```

## Submission at 2024-08-28 09:07:58


```
def missing_elem(arr, k):
    missing_list = []
    for i in range(arr[-1]):
        if i not in arr:
            missing_list.append(i)
    
    return missing_list[k]


#_main_
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr, k))
```

## Submission at 2024-08-28 09:24:15


```
def missing_elem(arr, k):
    cnt = 0
    for i in range(arr[-1]):
        if i not in arr:
            if cnt == k:
                return i
    
            cnt+=1


#_main_
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr, k))
```

## Submission at 2024-08-28 10:30:55


```
def missing_elem(arr, k):
    cnt = 1
    for i in range(1, arr[-1]):
        if i not in arr:
            if cnt == k:
                return i
    
            cnt+=1


#_main_
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr, k))
```

## Submission at 2024-08-28 10:33:32


```
def missing_elem(arr, k):
    cnt = 1
    for i in range(1, arr[-1]):
        if i not in arr:
            if cnt == k:
                return i
    
            cnt+=1
    
    return 0


#_main_
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr, k))
```

## Submission at 2024-08-28 10:38:27


```
def missing_elem(arr, k):
    cnt = k
    for i in range(1, arr[-1]+1):
        if i not in arr:
            cnt-=1
            if cnt == 0:
                return i

    return 0
    
#_main_
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr, k))
```

## Submission at 2024-08-28 10:42:56


```
def missing_elem(arr, k):
    cnt = k
    for i in range(1, arr[-1]+1):
        if i not in arr:
            cnt-=1
            if cnt == 0:
                return i

    return 0
    
#_main_
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr, k))
```

## Submission at 2024-08-28 11:07:29


```
def transpose_matrix(Matrix, N, M):
    T_Matrix = Matrix.copy()
    for i in range(N):
        for j in range(M):
            T_Matrix[j][i] = Matrix[i][j]

    return T_Matrix



#_main_
n, m = map(int, input().split())
r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

matrix = [r1, r2, r3]

Transpose = transpose_matrix(matrix, n, m)
for i in Transpose:
    print(*i)
```

## Submission at 2024-08-28 11:34:45


```
def transpose_matrix(matrix, n, m):
    transpose = [[0] * n for _ in range(m)]
    for i in range(n):
        for j in range(m):
            transpose[j][i] = matrix[i][j]
    return transpose

# Main code
n, m = map(int, input().split())

r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

matrix = [r1, r2, r3]

transpose = transpose_matrix(matrix, n, m)
for i in transpose:
    print(*i)
```

## Submission at 2024-08-28 11:37:22


```
def transpose_matrix(matrix, n, m):
    transpose = [[0] * n for _ in range(m)]
    for i in range(n):
        for j in range(m):
            transpose[j][i] = matrix[i][j]
    return transpose

# Main code
n, m = map(int, input().split())

r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

matrix = [r1, r2, r3]

transpose = transpose_matrix(matrix, n, m)
for i in transpose:
    print(*i)
```

## Submission at 2024-08-28 11:37:43


```
def transpose_matrix(matrix, n, m):
    transpose = [[0] * n for _ in range(m)]
    for i in range(n):
        for j in range(m):
            transpose[j][i] = matrix[i][j]
    return transpose

#__main__
n, m = map(int, input().split())

if n != 3 or m != 3:
    print("Invalid matrix dimensions. Please enter a 3x3 matrix.")
    exit()

r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

if len(r1) != m or len(r2) != m or len(r3) != m:
    print("Invalid row length. Please enter 3 elements per row.")
    exit()

matrix = [r1, r2, r3]

transpose = transpose_matrix(matrix, n, m)
for i in transpose:
    print(*i)
```

## Submission at 2024-08-29 06:03:38


```
def missing_elem(arr, k):
    cnt = k
    i = 1
    while i in range(1, arr[-1]+1):
        if i not in arr:
            cnt-=1
            if cnt == 0:
                return i
        i+=1

    return 0
    
#main
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr,k))
```

## Submission at 2024-08-29 06:09:38


```
def transpose_matrix(matrix):
    rows = len(matrix)
    cols = len(matrix[0])

    transpose = [[0] * rows for i in range(cols)]

    for i in range(rows):
        for j in range(cols):
            transpose[j][i] = matrix[i][j]

    return transpose

#__main__
n, m = map(int, input().split())
matrix = []

for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

T_matrix = transpose_matrix(matrix)
for row in T_matrix:
  print(*row)
```

## Submission at 2024-08-29 12:06:50


```
def missing_elem(arr, k):
    cnt = k
    i = 1
    missing = []
    while True:
        if i not in arr:
            missing.append(i)
            cnt-=1
            if cnt == 0:
                return missing[k-1]
        i+=1
        
    return 0
    
#__main__
n, k = map(int, input().split())
arr = list(map(int, input().split()))

print(missing_elem(arr,k))
```

## Submission at 2024-08-29 12:23:17


```
def Spiral_Traversel(arr):
    l = len(arr)
    Spiral_Array = []
    for i in range(l):
        if i%2==0:
            for j in range(len(arr[i])):
                Spiral_Array.append(arr[i][j])
        else: 
            for j in range(len(arr[i])-1, -1, -1):
                Spiral_Array.append(arr[i][j])
    return  Spiral_Array
    
#__main__
n, m = map(int, input().split())
matrix = []

for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

print(*Spiral_Traversel(matrix))
```

## Submission at 2024-08-29 12:38:27


```
def Spiral_Traversel(arr):
    l = len(arr)
    Spiral_Array = []
    for i in range(l):
        if i%2==0:
            for j in range(len(arr[i])):
                Spiral_Array.append(arr[i][j])
        else: 
            for j in range(len(arr[i])-1, -1, -1):
                Spiral_Array.append(arr[i][j])
    return  Spiral_Array
    
#__main__
n, m = map(int, input().split())
matrix = []

for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

print(*Spiral_Traversel(matrix))
```

## Submission at 2024-08-29 13:05:01


```
def triangular_sum(arr):
    arr1 = []
    for i in range(len(arr)-1):
        arr1.append(arr[i]+arr[i+1])

    if len(arr1) == 1:
        return arr1[0]
    
    return triangular_sum(arr1)


#_main_
n = int(input())
arr = list(map(int, input().split()))

print(triangular_sum(arr))
```

## Submission at 2024-08-30 02:32:37


```
def Spiral_Traversal(matrix):
    S_matrix = []
    while matrix:
        S_matrix += matrix.pop(0)  #adding 1st row
        
        if matrix and matrix[0]:  #Adding last elements of each row
            for row in matrix:
                S_matrix.append(row.pop())
        
        if matrix: # Adding the last row in reverse
            S_matrix += matrix.pop()[::-1]

        
        if matrix and matrix[0]:  # Adding the 1st element of each remaining row in reverse order
            for row in matrix[::-1]:
                S_matrix.append(row.pop(0))
    return S_matrix

#__main__
n, m = map(int, input().split())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

Spiral_Matrix = Spiral_Traversal(matrix)

print(*Spiral_Matrix)
```

## Submission at 2024-08-30 04:57:30


```
def palindrome(s):
    s_list = list(s)
    result = True

    for i in range(len(s_list)):
        for j in range(len(s_list)-1,0,-1):
            if s_list[i] != s_list[j]:       
                result = False
    
    return result
    
#__main__
s = input()
if palindrome(s):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-08-30 05:09:52


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return (x**n)//1

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))

```

## Submission at 2024-08-30 05:16:52


```
def Maximal_Array(arr1, arr2, n):
    max_arr = []
    for i in range(n):
        if arr1[i]>arr2[i]:
            max_arr.append(arr1[i])
        else: 
            max_arr.append(arr2[i])
    
    return max_arr

#__main__
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = Maximal_Array(a, b, n)
print(*c)
```

## Submission at 2024-08-30 05:25:03


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    arr = []
    while a.next:
        arr.append(a)
        a = a.next

    head = a
    for i in range(len(arr)-1,0,-1):
        print(i)
        a.next = arr[i]
        a = a.next

    return head


```

## Submission at 2024-08-30 05:46:22


```
def diagonal_traversal(matrix):
    diagonal_array = []

    N = len(matrix)
    M = len(matrix[0])

    while len(diagonal_array)!= (N*M):
        for k in range(M):
            for i in range(N):
                for j in range(M):
                    if (i+j) == k:
                        diagonal_array.append(matrix[i][j])

    return diagonal_array        


    
#__main__
m, n = map(int, input().split())

r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

matrix = [r1, r2, r3]

print(*diagonal_traversal(matrix))
```

## Submission at 2024-08-30 05:52:57


```
def palindrome(s):
    s_list = list(s)
    r_list = []

    for i in range(len(s_list)-1,-1,-1):
        r_list.append(s_list[i])
    
    for j in range(len(s_list)):
        if r_list[j] != s_list[j]:
            return False

    return True
    
#__main__
s = input()
if palindrome(s):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-08-30 05:53:58


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return (x^n)//1

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-08-30 05:54:55


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return (x**n)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-08-30 05:56:27


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return math.floor(x**n)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-08-30 06:06:01


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    while a.next:
        a = a.next

    head = a

    while a.prev:
        head.next = a.prev
        a = a.prev
        head = head.next
        
        

```

## Submission at 2024-08-30 06:06:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    while a.next:
        a = a.next

    head = a

    while a.prev:
        head.next = a.prev
        a = a.prev
        head = head.next
    
    return head
        
        

```

## Submission at 2024-08-30 06:06:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    while a.next:
        a = a.next

    head = a

    while a.prev:
        head.next = a.prev
        a = a.prev
        head = head.next
    
    return head
        
        

```

## Submission at 2024-08-30 06:07:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    while a.next:
        a = a.next

    head = a

    while a.prev:
        head.next = a.prev
        a = a.prev
        head = head.next

    while head.prev:
        head=head.prev
    
    return head
        
        

```

## Submission at 2024-08-30 06:08:14


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    while a.next:
        a = a.next

    head = a

    while a.prev:
        head.next = a.prev
        a = a.prev
        head = head.next

    while head.prev:
        head=head.prev
    
    return head
        
    
```

## Submission at 2024-08-30 06:10:44


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    a = head
    arr = []
    while a.next:
        arr.append(a)
        a = a.next

    head = a
    for i in range(len(arr)-1,0,-1):
        print(i)
        a.next = arr[i]
        a = a.next

    return head
```

## Submission at 2024-08-30 06:17:23


```
def diagonal_traversal(matrix):
    diagonal_array = []

    N = len(matrix)
    M = len(matrix[0])
    cnt = 0
    
    while len(diagonal_array)!= (N*M):
        for i in range(N):
            for j in range(M):
                if (i+j) == cnt:
                    diagonal_array.append(matrix[i][j])
        cnt+=1

    return diagonal_array        
  
#__main__
M, N = map(int, input().split())
r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

matrix = [r1, r2, r3]

print(*diagonal_traversal(matrix))
```

## Submission at 2024-08-30 06:20:48


```
def diagonal_traversal(matrix):
    diagonal_array = []

    N = len(matrix)
    M = len(matrix[0])
    cnt = 0
    
    while len(diagonal_array)!= (N*M):
        for i in range(M):
            for j in range(N):
                if (i+j) == cnt:
                    diagonal_array.append(matrix[j][i])
        cnt+=1

    return diagonal_array        
  
#__main__
M, N = map(int, input().split())
r1 = list(map(int, input().split()))
r2 = list(map(int, input().split()))
r3 = list(map(int, input().split()))

matrix = [r1, r2, r3]

print(*diagonal_traversal(matrix))
```

## Submission at 2024-08-30 06:23:24


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return (x**n)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n)
```

## Submission at 2024-08-30 06:24:47


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return ((x**n)//1)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n)
```

## Submission at 2024-08-30 06:25:01


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return ((x**n)//1)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n)
```

## Submission at 2024-08-30 06:25:01


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return ((x**n)//1)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n)
```

## Submission at 2024-08-30 06:25:01


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return ((x**n)//1)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n)
```

## Submission at 2024-08-30 06:25:17


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return ((x**n)//1)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n)
```

## Submission at 2024-09-06 04:56:20


```
def palindrome(s):
    s_list = list(s)
    r_list = s_list[::-1]

    if r_list == s_list:
        return True
    else:
        return False
    
#__main__
s = input()
if palindrome(s):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-06 05:03:48


```
def palindrome(s_list):

    if len(s_list) <= 1:
        return True
    else:
        if s_list[0] == s_list[-1]:
            s_list.pop(0)
            s_list.pop()
            return palindrome(s_list)
        else:
            return False
    
#__main__
s = input()
if palindrome(list(s)):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-06 05:23:28


```
def palindrome(s, i, j):
    if i < j:
        if s[i] == s[j]:
            return palindrome(s, i+1, j-1)
        else:
            return False
    
    return True
    
#__main__
s = input()
if palindrome(s,0,len(s)-1):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-14 03:24:27


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return math.floor(x**(-n))

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-09-14 03:25:47


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return 1/x**(-n)

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-09-14 03:26:37


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n == 0:
        return 1
    elif n > 0:
        return x**n
    else:
        return int(1 / x**(-n))

# __main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-09-14 03:27:51


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x, n):
    if n==0:
        return 1
    elif n>0:
        return x**n
    else:
        return (x**n)//1

#__main__
import math

x, n = map(int, input().split())
print(Pow(x, n))
```

## Submission at 2024-10-04 05:02:22


```
def validAnagram(s,t):
    if len(s)!=len(t):
        print("false")
        return False
    
    for i in s:
        if i not in t:
            print("false")
            return False
    
    print("true")
    return True
    
#__main__
s1 = input()
s2 = input()

validAnagram(s1, s2)
```

## Submission at 2024-10-04 05:25:44


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time-1
        tickets[0] -= 1
        time += 1
        a = tickets[0]

        for i in range(len(tickets)-1):
            tickets[i] = tickets[i+1]
        tickets[-1] = a
        
        k-=1
        if k<0:
            k = len(tickets)-1 



#__main__
n = int(input())
t = input()
tickets = []
for i in range(0,len(t),2):
    tickets.append(int(t[i]))

k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-04 05:25:45


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time-1
        tickets[0] -= 1
        time += 1
        a = tickets[0]

        for i in range(len(tickets)-1):
            tickets[i] = tickets[i+1]
        tickets[-1] = a
        
        k-=1
        if k<0:
            k = len(tickets)-1 



#__main__
n = int(input())
t = input()
tickets = []
for i in range(0,len(t),2):
    tickets.append(int(t[i]))

k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-04 05:26:41


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time
        
        tickets[0] -= 1
        time += 1
        a = tickets[0]

        for i in range(len(tickets)-1):
            tickets[i] = tickets[i+1]
        tickets[-1] = a
        
        k-=1
        if k<0:
            k = len(tickets)-1 



#__main__
n = int(input())
t = input()
tickets = []
for i in range(0,len(t),2):
    tickets.append(int(t[i]))

k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-04 05:26:41


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time
        
        tickets[0] -= 1
        time += 1
        a = tickets[0]

        for i in range(len(tickets)-1):
            tickets[i] = tickets[i+1]
        tickets[-1] = a
        
        k-=1
        if k<0:
            k = len(tickets)-1 



#__main__
n = int(input())
t = input()
tickets = []
for i in range(0,len(t),2):
    tickets.append(int(t[i]))

k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-04 05:30:55


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time-1
        
        else:
            tickets[0] -= 1
            time += 1
            a = tickets[0]

            for i in range(len(tickets)-1):
                tickets[i] = tickets[i+1]
            tickets[-1] = a
        
            k-=1
            if k<0:
                k = len(tickets)-1 



#__main__
n = int(input())
t = input()
tickets = []
for i in range(0,len(t),2):
    tickets.append(int(t[i]))

k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-04 05:30:57


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time-1
        
        else:
            tickets[0] -= 1
            time += 1
            a = tickets[0]

            for i in range(len(tickets)-1):
                tickets[i] = tickets[i+1]
            tickets[-1] = a
        
            k-=1
            if k<0:
                k = len(tickets)-1 



#__main__
n = int(input())
t = input()
tickets = []
for i in range(0,len(t),2):
    tickets.append(int(t[i]))

k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-04 05:41:58


```
def warmerDays(temperatures):
    n = len(temperatures)
    ans = [0]*n
    for i in range(n):
        for j in range(i, n):
            if temperatures[j]>temperatures[i]:
                ans[i] = j-i
                break
    
    return ans


#__main__
n = int(input())
t = input()
temperatures = []
for i in range(0,len(t),3):
    temperatures.append(int(t[i:i+2]))

print(warmerDays(temperatures))

```

## Submission at 2024-10-04 05:41:59


```
def warmerDays(temperatures):
    n = len(temperatures)
    ans = [0]*n
    for i in range(n):
        for j in range(i, n):
            if temperatures[j]>temperatures[i]:
                ans[i] = j-i
                break
    
    return ans


#__main__
n = int(input())
t = input()
temperatures = []
for i in range(0,len(t),3):
    temperatures.append(int(t[i:i+2]))

print(warmerDays(temperatures))

```

## Submission at 2024-10-04 06:00:14


```
def bloom(bloomDay, m, k):
    cnt = 0
    buq = 0
    days = 0

    days_b = bloomDay.sorted()

    for i in days_b:
        cnt += 1
        if cnt >= k:
            cnt = 0
            buq += 1
            
        if buq == m:
            return days_b[i]
             
#__main__



```

## Submission at 2024-10-04 06:00:17


```
def bloom(bloomDay, m, k):
    cnt = 0
    buq = 0
    days = 0

    days_b = bloomDay.sorted()

    for i in days_b:
        cnt += 1
        if cnt >= k:
            cnt = 0
            buq += 1
            
        if buq == m:
            return days_b[i]
             
#__main__



```

## Submission at 2024-10-04 06:07:42


```
def warmerDays(temperatures):
    n = len(temperatures)
    ans = [0]*n
    for i in range(n):
        for j in range(i, n):
            if temperatures[j]>temperatures[i]:
                ans[i] = j-i
                break
    
    return ans

#__main__
n = int(input())
t = input()
temp = input.split()
temperatures = 0

for i in temp:
    temperatures.append(int(temp))

print(warmerDays(temperatures))
```

## Submission at 2024-10-04 06:15:24


```
def warmerDays(temperatures):
    n = len(temperatures)
    ans = [0]*n
    for i in range(n):
        for j in range(i, n):
            if temperatures[j]>temperatures[i]:
                ans[i] = j-i
                break
    
    return ans

#__main__
n = int(input())
temp = input().split(" ")
temperatures = []

for i in temp:
    temperatures.append(int(i))

print(warmerDays(temperatures))
```

## Submission at 2024-10-04 06:15:24


```
def warmerDays(temperatures):
    n = len(temperatures)
    ans = [0]*n
    for i in range(n):
        for j in range(i, n):
            if temperatures[j]>temperatures[i]:
                ans[i] = j-i
                break
    
    return ans

#__main__
n = int(input())
temp = input().split(" ")
temperatures = []

for i in temp:
    temperatures.append(int(i))

print(warmerDays(temperatures))
```

## Submission at 2024-10-04 06:19:45


```
def bloom(bloomDay, m, k):
    cnt = 0
    buq = 0
    days = 0

    days_b = bloomDay.sorted()

    for i in days_b:
        cnt += 1
        if cnt >= k:
            cnt = 0
            buq += 1
            
        if buq == m:
            return days_b[i]
             
#__main__
[n, m, k] = input().split(" ")
b = input().split(" ")
bloomDay = []
for i in b:
    bloomDay.append(int(i))

print(bloom(bloomDay, m, k))

```

## Submission at 2024-10-04 06:29:43


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time
        
        else:
            tickets[0] -= 1
            time += 1
            a = tickets[0]

            for i in range(len(tickets)-1):
                tickets[i] = tickets[i+1]
            if a==0:
                tickets.pop() 
            else:
                tickets[-1] = a
        
            k-=1
            if k<0:
                k = len(tickets)-1

            

#__main__
n = int(input())
t = input().split(" ")
tickets = []
for i in t:
    tickets.append(int(i))

k = int(input())

print(ticketTime(tickets, n, k))

```

## Submission at 2024-10-04 06:29:48


```
def ticketTime(tickets, n, k):
    time = 0
    while True:
        if tickets[k] == 1:
            return time
        
        else:
            tickets[0] -= 1
            time += 1
            a = tickets[0]

            for i in range(len(tickets)-1):
                tickets[i] = tickets[i+1]
            if a==0:
                tickets.pop() 
            else:
                tickets[-1] = a
        
            k-=1
            if k<0:
                k = len(tickets)-1

            

#__main__
n = int(input())
t = input().split(" ")
tickets = []
for i in t:
    tickets.append(int(i))

k = int(input())

print(ticketTime(tickets, n, k))

```

## Submission at 2024-10-16 08:08:45


```
def ticketTime(tickets, n, k):
    time = 0
    while tickets[k] > 0:
        tickets[0] -= 1
        time += 1
        
        # Shift elements to the right, removing the first element
        for i in range(1, len(tickets)):
            tickets[i-1] = tickets[i]
        tickets.pop()  # Remove the last element
        
        # Check for empty list before modulo
        if len(tickets) == 0:
            return time  # All tickets purchased, return time
        
        k = (k - 1) % len(tickets)
    
    return time

# Main program
n = int(input())
tickets = list(map(int, input().split()))
k = int(input())

print(ticketTime(tickets, n, k))
```

## Submission at 2024-10-25 05:31:19


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def equal(self, p, q):
            if p!= and not q:
                return True
            elif not p or not q:
                return False
            
            if p.val == q.val:
                return (self.equal(p.left, q.right) and self.equal(p.right, q.left))

            return False 

    def isSymmetric(self, root):   
        return (self.equal(root.left, root.right))
```

## Submission at 2024-10-25 05:49:13


```
def construct(ransomNote, magazine):
    res = "true"
    m = []

    if len(ransomNote)>len(magazine):
        return 'false'

    for i in magazine:
        m.append(i)

    for j in ransomNote:
        if j not in m:
            return 'false'
        else: 
            m.remove(j)

    return "false"

#__main__
a = input()
b = input()
print(construct(a,b))
```

## Submission at 2024-10-25 05:50:01


```
def construct(ransomNote, magazine):
    res = "true"
    m = []

    #if len(ransomNote)>len(magazine):
        #return 'false'

    for i in magazine:
        m.append(i)

    for j in ransomNote:
        if j not in m:
            return 'false'
        else: 
            m.remove(j)

    return "false"

#__main__
a = input()
b = input()
print(construct(a,b))
```

## Submission at 2024-10-25 05:50:01


```
def construct(ransomNote, magazine):
    res = "true"
    m = []

    #if len(ransomNote)>len(magazine):
        #return 'false'

    for i in magazine:
        m.append(i)

    for j in ransomNote:
        if j not in m:
            return 'false'
        else: 
            m.remove(j)

    return "false"

#__main__
a = input()
b = input()
print(construct(a,b))
```

## Submission at 2024-10-25 05:51:05


```
def construct(ransomNote, magazine):
    m = []

    if len(ransomNote)>len(magazine):
        return 'false'

    for i in magazine:
        m.append(i)

    for j in ransomNote:
        if j not in m:
            return 'false'
        else: 
            m.remove(j)

    return 'true'

#__main__
a = input()
b = input()
print(construct(a,b))
```

## Submission at 2024-10-25 05:54:22


```
def match(pattern, s):
    P = pattern.split()
    if len(P)!= len(s):
        return 'false'

    return 'true'

#__main__
a = input()
b = input()
print(match(b,a))
```

## Submission at 2024-10-25 05:55:32


```
def match(pattern, s):
    P = map(pattern.split())
    if len(P)!= len(s):
        return 'false'

    return 'true'

#__main__
a = input()
b = input()
print(match(b,a))
```

## Submission at 2024-10-25 06:00:52


```
def match(pattern, S):
    P = set(pattern.split())
    
    s = []
    for i in S:
        s.append(i)
    
    s = set(s)

    if len(P)!= len(s):
        return 'false'

    return 'true'

#__main__
a = input()
b = input()
print(match(b,a))
```

## Submission at 2024-10-25 06:00:53


```
def match(pattern, S):
    P = set(pattern.split())
    
    s = []
    for i in S:
        s.append(i)
    
    s = set(s)

    if len(P)!= len(s):
        return 'false'

    return 'true'

#__main__
a = input()
b = input()
print(match(b,a))
```

## Submission at 2024-10-25 06:18:23


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 0

        head.data = res//(10**max(i,j))
        S = head.data
        head.next = None
        H = head

        for i in range(max(i,j)-1):
            k+=1
            n1.data = S - res//(10**(max(i,j)-k))
            s += n1.data

            head.next = n1
            head = head.next

        return H

            

```

## Submission at 2024-10-25 06:18:25


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 0

        head.data = res//(10**max(i,j))
        S = head.data
        head.next = None
        H = head

        for i in range(max(i,j)-1):
            k+=1
            n1.data = S - res//(10**(max(i,j)-k))
            s += n1.data

            head.next = n1
            head = head.next

        return H

            

```

## Submission at 2024-10-25 06:22:09


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def equal(self, p, q):
            if p=='N' and q=='N':
                return True
            elif p=='N' or q=='N':
                return False
            
            if p == q:
                return (self.equal(p.left, q.right) and self.equal(p.right, q.left))

            return False 

    def isSymmetric(self, root):   
        return (self.equal(root.left, root.right))

```

## Submission at 2024-10-25 06:23:28


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
```

## Submission at 2024-10-25 06:23:31


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
```

## Submission at 2024-10-25 06:42:26


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num1.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        num1 = head
        num1 = num1.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num1.data = (res - res%(10**x))//(10**x)
            res -= num1.data

            num1 = num1.next


            




        
        
        
        
        
        
        
        
        
        
        
        
        '''
        k = 0

        head.data = res//(10**max(i,j))
        S = head.data
        head.next = None
        H = head

        for i in range(max(i,j)-1):
            k+=1
            n1.data = S - res//(10**(max(i,j)-k))
            s += n1.data

            head.next = n1
            head = head.next

        return H'''
```

## Submission at 2024-10-25 06:42:28


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num1.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        num1 = head
        num1 = num1.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num1.data = (res - res%(10**x))//(10**x)
            res -= num1.data

            num1 = num1.next


            




        
        
        
        
        
        
        
        
        
        
        
        
        '''
        k = 0

        head.data = res//(10**max(i,j))
        S = head.data
        head.next = None
        H = head

        for i in range(max(i,j)-1):
            k+=1
            n1.data = S - res//(10**(max(i,j)-k))
            s += n1.data

            head.next = n1
            head = head.next

        return H'''
```

## Submission at 2024-10-25 06:49:13


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num1.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        num1 = head
        num1 = num1.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num1.data = (res - res%(10**x))//(10**x)
            res -= num1.data

            num1 = num1.next

        return head


            




        
        
        
        
        
        
        
        
        
        
```

## Submission at 2024-10-25 06:49:13


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num1.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        num1 = head
        num1 = num1.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num1.data = (res - res%(10**x))//(10**x)
            res -= num1.data

            num1 = num1.next

        return head


            




        
        
        
        
        
        
        
        
        
        
```

## Submission at 2024-10-25 06:49:48


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num1.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        head = num1 
        num1 = num1.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num1.data = (res//(10**x)
            res -= num1.data

            num1 = num1.next

        return head


            




        
        
        
        
        
        
        
        
        
        
```

## Submission at 2024-10-25 06:53:23


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num2.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        head = num2 
        num2 = num2.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num2.data = (res//(10**x))
            res = res - num2.data

            num2 = num2.next

        return head


            




        
        
        
        
        
        
        
        
        
        
```

## Submission at 2024-10-25 06:53:25


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
        i = 0
        j = 0

        sum1 = 0
        sum2 = 0

        c1 = num1
        c2 = num2

        while c1:
            sum1 += c1.data*(10**i)
            c1 = c1.next
            i+=1

        while c2:
            sum2 += c2.data*(10**j)
            c2 = c2.next
            j+=1

        res = sum1+sum2
        k = 1

        num2.data = (res - res%(10**(max(i,j))))//(10**(max(i,j)))
        head = num2 
        num2 = num2.next
        
        while res>0:
            x = (max(i,j)-k)
            k+=1

            num2.data = (res//(10**x))
            res = res - num2.data

            num2 = num2.next

        return head


            




        
        
        
        
        
        
        
        
        
        
```

## Submission at 2024-10-25 06:59:07


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
    r = []
    r = root
    while not r.right and not r.left:
        ans.append(r)

    return ans
```

## Submission at 2024-10-25 06:59:46


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
    r = []
    r = root
    if not r.right and not r.left:
        ans.append(r)
        

    return ans
```

## Submission at 2024-11-15 05:05:54


```
def warmerDays(temperatures):
    n = len(temperatures)
    ans = [0]*n
    for i in range(n):
        for j in range(i, n):
            if temperatures[j]>temperatures[i]:
                ans[i] = j-i
                break
    
    return ans

#__main__
n = int(input())
temp = input().split(" ")
temperatures = []

for i in temp:
    temperatures.append(int(i))

ans = warmerDays(temperatures)
for i in ans:
    print(i, end=' ')
```

## Submission at 2024-11-15 05:36:44


```
def bloom(bloomDay, m, k):
    cnt = 0
    buq = 0

    days_b = bloomDay
    days_b.sort()

    for i in days_b:
        cnt += 1
        if cnt >= k:
            cnt = 0
            buq += 1
            
        if buq == m:
            return i
             
#__main__
n, m, k = map(int, input().split())  
b = map(int, input().split())
bloomDay = list(b)

ans = bloom(bloomDay, m, k)
print(ans)
```

## Submission at 2024-11-15 06:17:33


```
def ticketTime(tickets, n, k):
    time = 0
    position = 0

    while tickets[k] > 0:
        if tickets[position] > 0:  # Only decrement if the person has tickets left
            tickets[position] -= 1
            time += 1

            if tickets[k] == 0 and position == k:
                return time

        # Move to the next person in line
        position = (position + 1) % n

    return time

# Main program
n = int(input())
tickets = list(map(int, input().split()))
k = int(input())

print(ticketTime(tickets, n, k))

```

## Submission at 2024-11-22 04:57:26


```
def printStars(n):
    for i in range(n):
        print("*"*i)

    for j in range(n):
        print("*"*(n-j))

#__main__
n = int(input())
printStars(n)
```

## Submission at 2024-11-22 05:01:31


```
def printStars(n):
    for i in range(n):
        print("* "*i)

    for j in range(n):
        print("* "*(n-j))

#__main__
n = int(input())
printStars(n)
```

## Submission at 2024-11-22 05:02:21


```
def printStars(n):
    for i in range(n):
        print("*"*i)

    for j in range(n):
        print("*"*(n-j))

#__main__
n = int(input())
printStars(n)
```

## Submission at 2024-11-22 05:08:45


```
def sumArray(arr):
    return sum(arr)

#__main__
n = int(input())
st = input()
for i in range(len(st)):
    
print(sumArray(arr))
```

## Submission at 2024-11-22 05:14:39


```
def sumArray(arr):
    return sum(arr)

#__main__
n = int(input())
st = input().split(" ")
print(st)
arr = []
for i in st:
    arr.append(int(i))
    
print(sumArray(arr))
```

## Submission at 2024-11-22 05:15:28


```
def sumArray(arr):
    return sum(arr)

#__main__
n = int(input())
st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))
    
print(sumArray(arr))
```

## Submission at 2024-11-22 05:15:29


```
def sumArray(arr):
    return sum(arr)

#__main__
n = int(input())
st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))
    
print(sumArray(arr))
```

## Submission at 2024-11-22 05:15:35


```
def sumArray(arr):
    return sum(arr)

#__main__
n = int(input())
st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))
    
print(sumArray(arr))
```

## Submission at 2024-11-22 05:15:43


```
def sumArray(arr):
    return sum(arr)

#__main__
n = int(input())
st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))
    
print(sumArray(arr))
```

## Submission at 2024-11-22 05:20:54


```
def minimumVal(a,b):
    return (b-a)

l = input().split(" ")
a = int(l[0])
b = int(l[1])

print(minimumVal(a,b))
```

## Submission at 2024-11-22 05:21:29


```
def minimumVal(a,b):
    return (b-a)

l = input().split(" ")
a = int(l[0])
b = int(l[1])

print(minimumVal(a,b))
```

## Submission at 2024-11-22 05:32:05


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1

    for j in d:
        if d[j] !=1:
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

## Submission at 2024-11-22 05:35:41


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
            sc+=1

        if d[j] !=1:
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

## Submission at 2024-11-22 05:36:04


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

## Submission at 2024-11-22 05:36:19


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

## Submission at 2024-11-22 05:38:46


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d:
            d[i]=1
        else:
            d[i]=0
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

## Submission at 2024-11-22 05:38:49


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d:
            d[i]=1
        else:
            d[i]=0
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

## Submission at 2024-11-22 05:46:27


```
def Distance(arr1,arr2,d):
    cnt = 0
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j]<= d:
                cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:48:17


```
def Distance(arr1,arr2,d):
    cnt = 0
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] > d:
                cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:48:18


```
def Distance(arr1,arr2,d):
    cnt = 0
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] > d:
                cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:50:47


```
def Distance(arr1,arr2,d):
    cnt = 0
    flag = False
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] > d:
                flag = True
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:50:47


```
def Distance(arr1,arr2,d):
    cnt = 0
    flag = False
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] > d:
                flag = True
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:50:49


```
def Distance(arr1,arr2,d):
    cnt = 0
    flag = False
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] > d:
                flag = True
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:50:54


```
def Distance(arr1,arr2,d):
    cnt = 0
    flag = False
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] > d:
                flag = True
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 05:59:04


```
def Freq(arr):
    d = {}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: 
            d[i] += 1

    max_ = 0
    min_f = 100
     for j in d:
    if j>max_ or d[j]==1:
            max_ = j

    return max_
        

#__main__
N = int(input())

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

Freq(arr)
```

## Submission at 2024-11-22 06:00:20


```
def Freq(arr):
    d = {}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: 
            d[i] += 1

    max_ = 0
    min_f = 100
    for j in d:
        if j>max_ or d[j]==1:
            max_ = j

    return max_
        

#__main__
N = int(input())

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

Freq(arr)
```

## Submission at 2024-11-22 06:00:40


```
def Freq(arr):
    d = {}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: 
            d[i] += 1

    max_ = 0
    min_f = 100
    for j in d:
        if j>max_ and d[j]==1:
            max_ = j

    return max_
        

#__main__
N = int(input())

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

Freq(arr)
```

## Submission at 2024-11-22 06:00:40


```
def Freq(arr):
    d = {}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: 
            d[i] += 1

    max_ = 0
    min_f = 100
    for j in d:
        if j>max_ and d[j]==1:
            max_ = j

    return max_
        

#__main__
N = int(input())

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

Freq(arr)
```

## Submission at 2024-11-22 06:01:03


```
def Freq(arr):
    d = {}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: 
            d[i] += 1

    max_ = 0
    min_f = 100
    for j in d:
        if j>max_ and d[j]==1:
            max_ = j

    return max_
        

#__main__
N = int(input())

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

Freq(arr)
```

## Submission at 2024-11-22 06:02:08


```
def Freq(arr):
    d = {}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: 
            d[i] += 1

    max_ = 0
    min_f = 100
    for j in d:
        if j>max_ and d[j]==1:
            max_ = j

    return max_
        

#__main__
N = int(input())

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(Freq(arr))
```

## Submission at 2024-11-22 06:08:34


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
        flag = True

        if root.left.data > root.data:
            flag = False
        elif root.right.data < root.data:
            flag = False
                
        flag = (self.isBST(root.left) and self.isBST(root.right)) 
        
        return flag

```

## Submission at 2024-11-22 06:16:06


```
def printStars(n):
    for i in range(1,n):
        print("*"*i)

    for j in range(n):
        print("*"*(n-j))

#__main__
n = int(input())
printStars(n)
```

## Submission at 2024-11-22 06:24:21


```
def Distance(arr1,arr2,d):
    cnt = 0
    flag = True
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] <= d:
                flag = False
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 06:24:21


```
def Distance(arr1,arr2,d):
    cnt = 0
    flag = True
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] <= d:
                flag = False
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 06:26:11


```
def Distance(arr1,arr2,d):
    cnt = 0
    
    for i in range(len(arr1)):
        flag = True
        for j in range(len(arr2)):
            if arr1[i]-arr2[j] <= d:
                flag = False
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 06:30:31


```
def Distance(arr1,arr2,d):
    cnt = 0
    
    for i in arr1:
        flag = True
        for j in arr2:
            if i-j <= d or j-i <= d:
                flag = False
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 06:32:31


```
def Distance(arr1,arr2,d):
    cnt = 0
    
    for i in arr1:
        flag = True
        for j in arr2:
            if i-j <= d:
                flag = False
            elif j-i <= d:
                flag = False
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 06:36:19


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
        flag = True

        if root.left.data > root.data:
            flag = False
        elif root.right.data < root.data:
            flag = False
                
        flag = (self.isBST(root.left) and self.isBST(root.right)) 
        
        if flag:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 06:40:30


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
        flag = True
        node = root

        if node.left.data > node.data:
            flag = False
        elif node.right.data < node.data:
            flag = False
                
        flag = (self.isBST node.left) and self.isBST node.right)) 
        
        if flag:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 06:40:33


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
        flag = True
        node = root

        if node.left.data > node.data:
            flag = False
        elif node.right.data < node.data:
            flag = False
                
        flag = (self.isBST node.left) and self.isBST node.right)) 
        
        if flag:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 06:41:53


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
        flag = True
        node = root

        if node.left.data > node.data:
            flag = False
        elif node.right.data < node.data:
            flag = False
                
        flag = (self.isBST(node.left)) and (self.isBST(node.right)) 
        
        if flag:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 06:42:04


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
        flag = True
        node = root

        if node.left.data > node.data:
            flag = False
        elif node.right.data < node.data:
            flag = False
                
        flag = (self.isBST(node.left)) and (self.isBST(node.right)) 
        
        if flag:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 06:48:05


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head
    nex = curr.next
    while curr:
        if curr.data == nex.data:
            curr.next = nex.next
        curr = nex
        nex = curr.next
        
    return head
```

## Submission at 2024-11-22 06:48:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head
    nex = curr.next
    while curr:
        if curr.data == nex.data:
            curr.next = nex.next
        curr = nex
        nex = curr.next
        
    return head
```

## Submission at 2024-11-22 06:52:01


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head
    nex = curr.next
    while curr:
        if curr.next == nex.next:
            curr.next = nex.next.next
        curr = curr.next
        nex = curr.next
        
    return head
```

## Submission at 2024-11-22 06:56:50


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
        flag = True
        node = root

        if node.left > node:
            flag = False
        elif node.right < node:
            flag = False
                
        flag = (self.isBST(node.left)) and (self.isBST(node.right)) 
        
        if flag:
            print("true")
        else:
            print("false")
```

## Submission at 2024-11-22 07:01:58


```
def Distance(arr1,arr2,d):
    cnt = 0
    
    for i in range(len(arr1)):
        flag = True
        for j in range(len(arr2)):
            if abs(arr1[i]-arr2[j]) <= d:
                flag = False
        if flag:
            cnt+=1
    return cnt



st = input().split(" ")
arr1 = []
for i in st:
    arr1.append(int(i))
d = arr1[2]
    
st = input().split(" ")
arr2 = []
for i in st:
    arr2.append(int(i))
    
st = input().split(" ")
arr3 = []
for i in st:
    arr3.append(int(i))

print(Distance(arr2, arr3, d))
```

## Submission at 2024-11-22 07:04:52


```
def score(arr):
    sc = 0
    d = {}

    for i in arr:
        if i not in d or d[i]==0:
            d[i]=1
        else:
            d[i]=0
            sc+=1

    return sc

st = input().split(" ")
arr = []
for i in st:
    arr.append(int(i))

print(score(arr))
```

