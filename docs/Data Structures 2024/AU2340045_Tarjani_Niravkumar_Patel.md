## Submission at 2024-08-09 04:53:40


```
# Write your Python code here from the scratch
user_name = input()
print("Hello "+user_name+"!") 


```

## Submission at 2024-08-09 05:16:44


```
# Write your Python code here from the scratch
user_name = input()
print("Hello "+user_name+"!")


```

## Submission at 2024-08-09 05:21:57


```
# Write your Python code here
n = int(input())
for i in range(0,n):
    name = input()
    print("Hello "+name+"!")

    
```

## Submission at 2024-08-09 05:26:26


```
# Write your Python code here
n = int(input())
for i in range(0,n):
 name = input()
 print("Hello "+name+"!")





```

## Submission at 2024-08-16 04:57:39


```
def fibonacci(x:int) -> int:
    if x<=1:
     return x
    else:
        return fibonacci(x-2) + fibonacci(x-1)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()

    


```

## Submission at 2024-08-16 05:39:50


```

def is_power_of_two(n:int) -> int:
    if n==1:
         return "true"
    elif (n<1 or n%2!= 0 ):
        return "false"
    
    return is_power_of_two(n/2)
               
        
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:40:25


```

def is_power_of_two(n:int) -> int:
    if n==1:
         return "true"
    elif (n<1 or n%2!= 0 ):
        return "false"
    
    return is_power_of_two(n/2)
               
        
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 09:27:52


```
def subsets(nums):
    out = []
    sub = []
    index=0

    def generate(sub, index, nums):    
        if index == len(nums):
            out.append(sub.copy()) 
            return     
        
        generate(sub, index + 1, nums) 

        sub.append(nums[index])
        generate(sub, index + 1, nums) 
        sub.pop()

    generate(sub, index, nums)
    return out

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

## Submission at 2024-08-16 09:28:28


```
def subsets(nums):
    out = []
    sub = []
    index=0

    def generate(sub, index, nums):    
        if index == len(nums):
            out.append(sub.copy()) 
            return     
        
        generate(sub, index + 1, nums) 

        sub.append(nums[index])
        generate(sub, index + 1, nums) 
        sub.pop()

    generate(sub, index, nums)
    return out

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

## Submission at 2024-08-22 06:32:20


```
def Parentheses_combination(n: int):
  result = []
  string = []

  def combination(o_bracket, c_bracket,string, result):
      if o_bracket == n and c_bracket == n:
          result.append(string)
          return
      
      if o_bracket < n:
          combination(o_bracket + 1, c_bracket, string + '(', result)
      
      if c_bracket < o_bracket:
          combination(o_bracket, c_bracket + 1, string + ')', result)

  combination(0, 0, '', result)
  return result


n = int(input())
result = Parentheses_combination(n)
print(result)
```

## Submission at 2024-08-22 06:34:29


```
def Parentheses_combination(n: int):
  result = []
  string = []

  def combination(o_bracket, c_bracket,string, result):
      if o_bracket == n and c_bracket == n:
          result.append(string)
          return
      
      if o_bracket < n:
          combination(o_bracket + 1, c_bracket, string + '(', result)
      
      if c_bracket < o_bracket:
          combination(o_bracket, c_bracket + 1, string + ')', result)

  combination(0, 0, '', result)
  return result


n = int(input())
result = Parentheses_combination(n)
print(result)
```

## Submission at 2024-08-22 06:44:59


```
def Parentheses_combination(n: int):
    result = []
    string = []

    def combination(o_bracket, c_bracket,string, result):
        if o_bracket == n and c_bracket == n:
            result.append(string)
            return
        
        if o_bracket < n:
            combination(o_bracket + 1, c_bracket, string + '(', result)
        
        if c_bracket < o_bracket:
            combination(o_bracket, c_bracket + 1, string + ')', result)

    combination(0, 0, '', result)
    return result


n = int(input())
if n>1 and n<8:
    result = Parentheses_combination(n) 
    print(result)
else:
    print("Enter valid integer") 
```

## Submission at 2024-08-22 07:13:02


```
def combine(n, k):
    result = []   
    if not ((n < 1 or n > 20) or (k<1 or n<k)):
        return        
    def backtrack(start, combination): 
        if len(combination) == k:
            result.append(combination.copy())
            return

        for i in range(start, n + 1):
            combination.append(i)
            backtrack(i + 1, combination)
            combination.pop()

    
    backtrack(1, []) # Also re-indent this call
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

if __name__ == "_main_":
    main()
```

## Submission at 2024-08-22 07:14:02


```
def combine(n, k):
    result = []   
    if  ((n < 1 or n > 20) or (k<1 or n<k)):
        return        
    def backtrack(start, combination): 
        if len(combination) == k:
            result.append(combination.copy())
            return

        for i in range(start, n + 1):
            combination.append(i)
            backtrack(i + 1, combination)
            combination.pop()

    
    backtrack(1, []) # Also re-indent this call
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

if __name__ == "_main_":
    main()
```

## Submission at 2024-08-22 07:20:59


```
def combine(n, k):
    if not ((n >=1 and n <=20) and (k>=1 and n>=k)):
        return        
    def backtrack(start, combination): # Make sure this line is indented with 4 spaces
        if len(combination) == k:
            result.append(combination.copy())
            return

        for i in range(start, n + 1):
            combination.append(i)
            backtrack(i + 1, combination)
            combination.pop()

    result = [] # Initialize result within the combine function
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

## Submission at 2024-08-22 07:30:16


```
def Parenthesis(n):
    
    def combination(string, open, close):
        if open==close and open==n:
            result.append(string)
            return
        if open < n:
            combination(string + '(', open + 1, close)
        if close < open:
            combination(string + ')', open, close + 1)

    result = []
    combination('', 0, 0)
    return result

n = int(input())
result = Parenthesis(n)
print(result)
```

## Submission at 2024-08-22 07:32:19


```
def Parenthesis(n):
    
    def combination(string, open, close):
        if len(string) == 2 * n:
            result.append(string)
            return
        if open < n:
            combination(string + '(', open + 1, close)
        if close < open:
            combination(string + ')', open, close + 1)

    result = []
    combination('', 0, 0)
    return result

n = int(input())
result = Parenthesis(n)
print(result)
```

## Submission at 2024-08-22 07:32:39


```
def Parenthesis(n):
    
    def combination(string, open, close):
        if len(string) == 2 * n:
            result.append(string)
            return
        if open < n:
            combination(string + '(', open + 1, close)
        if close < open:
            combination(string + ')', open, close + 1)

    result = []
    combination('', 0, 0)
    return result


```

## Submission at 2024-08-22 07:33:09


```
def Parenthesis(n):
    
    def combination(string, open, close):
        if len(s) == 2 * n:
            result.append(s)
            return
        if open < n:
            combination(s + '(', open + 1, close)
        if close < open:
            combination(s + ')', open, close + 1)

    result = []
    combination('', 0, 0)
    return result


```

## Submission at 2024-08-22 07:36:32


```
def Parenthesis(n):
    
    def combination(string, open, close):
        if open==close and open==n:
            result.append(string)
            return
        if open < n:
            combination(string + '(', open + 1, close)
        if close < open:
            combination(string + ')', open, close + 1)

    result = []
    combination('', 0, 0)
    return result

n = int(input())
result = Parenthesis(n)
print(result)


```

## Submission at 2024-08-22 07:37:06


```

def generateParenthesis(n):
    def backtrack(s, open, close):
        if len(s) == 2 * n:
            result.append(s)
            return
        if open < n:
            backtrack(s + '(', open + 1, close)
        if close < open:
            backtrack(s + ')', open, close + 1)

    result = []
    backtrack('', 0, 0)
    return result
```

## Submission at 2024-08-22 07:48:19


```
def Parenthesis(n):
    def generate(s, open, close):
        if (open == close) and (open == n):
            result.append(s)
            return
        
        if open < n:
            generate(s + '(', open + 1, close)
        if close < open:
            generate(s + ')', open, close + 1)

    result = []
    generate('', 0, 0)
    return result

def main():
    n = int(input())
    result = Parenthesis(n)
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 07:52:04


```
def Parenthesis(n):
    result = []
    
    def generate(s, open, close):
        if len(s) == 2 * n:
            result.append(s)
            return

        if open < n:
            generate(s + "(", open + 1, close)
        if close < open:
            generate(s + ")", open, close + 1)

    generate("", 0, 0)
    return result

n = int(input())
print(Parenthesis(n))
```

## Submission at 2024-08-22 07:52:41


```
def Parenthesis(n):
    result = []
    
    def generate(s, open, close):
        if (open==close) and (open==n):
            result.append(s)
            return

        if open < n:
            generate(s + "(", open + 1, close)
        if close < open:
            generate(s + ")", open, close + 1)

    generate("", 0, 0)
    return result

n = int(input())
print(Parenthesis(n))
```

## Submission at 2024-08-22 07:53:47


```
def Parenthesis(n):
    result = []
    
    def generate(s, open, close):
        if (open==close) and (open==n):
            result.append(s)
            return

        if open < n:
            generate(s + "(", open + 1, close)
        if close < open:
            generate(s + ")", open, close + 1)

    generate("", 0, 0)
    return result

n = int(input())
print(Parenthesis(n))
```

## Submission at 2024-08-22 08:08:20


```
def permute(nums):
    result = []

    def generate(list):
        if len(list) == len(nums):
            result.append(list[:])  
            return

        for num in nums:
            if num not in list:
                list.append(num)
                generate(list)
                list.pop()  

    generate([])
    result.sort()  
    return result


nums = list(map(int, input().split()))
if len(nums) < 1 or len(nums) > 6:
    print("Error")
    exit()

for num in nums:
    if num < -10 or num > 10:
        print("Error")
        exit()

if len(set(nums)) != len(nums):
    print("Error")
    exit()

permutations = permute(nums)
print(permutations)
```

## Submission at 2024-08-22 08:19:12


```
def permute(nums):
    def backtrack(first = 0):
        if first == n:  
            output.append(nums[:])
        for i in range(first, n):
            if i != first and nums[i] in nums[first:i]:  # skip duplicates
                continue
            nums[first], nums[i] = nums[i], nums[first]
            backtrack(first + 1)
            nums[first], nums[i] = nums[i], nums[first]

    n = len(nums)
    output = []
    backtrack()
    return output

# Test the function
nums = list(map(int, input().split()))
if 1 <= len(nums) <= 6 and all(-10 <= x <= 10 for x in nums) and len(set(nums)) == len(nums):
    print(permute(nums))
else:
    print("Invalid input")
```

## Submission at 2024-08-22 08:33:04


```
def generateparenthesis(n):
    def paranthesis(s="", open=0, close=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if open < n:
            paranthesis(s + "(", open + 1, close)
        if close < open:
            paranthesis(s + ")", open, close + 1)
    
    result = []
    paranthesis()
    return result


if __name__ == "__main__":
  n = int(input())

  result = generateparenthesis(n)

  print("[\"", end="")
  for i in range(len(result)):
    print(result[i], end="")
    if i < len(result) - 1:
      print("\",\"", end="")
  print("\"]")   
```

## Submission at 2024-08-22 08:59:32


```
def generate_permutations(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permute = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return

            if not(len(nums)== len(set(nums))): 
               return
            # Fixed element
            c_element = nums[i]
            other_nums = nums[:i] + nums[i+1:]
            # Generating permutations for the elements that are left
            left_permutations = generate_permutations(other_nums)
            # Combining the fixed element with each permutation
            for _perm_ in left_permutations:
                permute.append([c_element] + _perm_)
        return permute

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Enter valid input"
   
    result = generate_permutations(nums)

    # Sort permutations based on first element
    result.sort(key=lambda x: x[0])
    
    # Print permutations
    formatted_output = '[' + ','.join(f'{item}' for item in result) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

    
```

## Submission at 2024-08-22 09:00:58


```
def generate_permutations(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permute = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return

            
            # Fixed element
            c_element = nums[i]
            other_nums = nums[:i] + nums[i+1:]
            # Generating permutations for the elements that are left
            left_permutations = generate_permutations(other_nums)
            # Combining the fixed element with each permutation
            for _perm_ in left_permutations:
                permute.append([c_element] + _perm_)
        return permute

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Enter valid input"
   
    result = generate_permutations(nums)

    # Sort permutations based on first element
    result.sort(key=lambda x: x[0])
    
    # Print permutations
    formatted_output = '[' + ','.join(f'{item}' for item in result) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

    
```

## Submission at 2024-08-22 09:02:45


```
def generate_permutations(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permute = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return

            
            # Fixed element
            c_element = nums[i]
            other_nums = nums[:i] + nums[i+1:]
            # Generating permutations for the elements that are left
            left_permutations = generate_permutations(other_nums)
            # Combining the fixed element with each permutation
            for _perm_ in left_permutations:
                permute.append([c_element] + _perm_)
        return permute

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Enter valid input"
   
    result = generate_permutations(nums)

    # Sort permutations based on first element
    result.sort(key=lambda x: x[0])
    
        # Print permutations
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

## Submission at 2024-08-22 09:05:00


```
def generate_permutations(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permute = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return

            if not(len(nums)== len(set(nums))): 
               return
            # Fixed element
            c_element = nums[i]
            other_nums = nums[:i] + nums[i+1:]
            # Generating permutations for the elements that are left
            left_permutations = generate_permutations(other_nums)
            # Combining the fixed element with each permutation
            for _perm_ in left_permutations:
                permute.append([c_element] + _perm_)
        return permute

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Enter valid input"
   
    result = generate_permutations(nums)

    # Sort permutations based on first element
    result.sort(key=lambda x: x[0])

        # Print permutations
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

## Submission at 2024-08-29 06:27:59


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return False
        return True
    else: 
        return False  

print(compareArrays(A1,A2))



```

## Submission at 2024-08-29 06:29:37


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return False
        return True
    else: 
        return False  

print(compare(A1,A2))



```

## Submission at 2024-08-29 06:34:32


```
def sum_multiple(n):
    assert n>=1 and n<=1000
    sum=0
    for i in range(1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            sum+=i
    return sum



def main():
    n = int(input())
    print(sum_multiple(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 06:40:51


```
len1=map(int, input().split())
arr1=list(map(int,input().split()))

def count_even(array):
    count=0
    for i in arr1:
        strnum=str(i)
        if len(strnum)%2==0:
            count+=1
    return count


def main():
  print(count_even(arr1))

if __name__ == "__main__":
  main()


```

## Submission at 2024-08-29 06:46:41


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return False
        return True
    else: 
        return False  

def main():
  print(compare(A1,A2))

if __name__ == "__main__":
  main()



```

## Submission at 2024-08-29 06:48:16


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return False
        return True
    else: 
        return False  


  
  
print(compare(A1,A2))





```

## Submission at 2024-08-29 06:49:52


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return "false"
        return "true"
    else: 
        return "false"  


  
  
print(compare(A1,A2))





```

## Submission at 2024-08-29 06:51:24


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return "false"
        return "true"
    else: 
        return "false"  

def main():
  print(compare(A1,A2))

if __name__ == "__main__":
  main()







```

## Submission at 2024-08-29 06:51:58


```
# Write the code from scratch, no boilerplate is required
x,y =map(int, input().split())
A1=list(map(int,input().split()))
A2=list(map(int,input().split()))

def compare(A1,A2):
    if(len(A1)==len(A2)):
        A1.sort()
        A2.sort()
        for i in range(0,len(A1)):
            if(A1[i]!=A2[i]):
                return "false"
        return "true"
    else: 
        return "false"  

def main():
  print(compare(A1,A2))

if __name__ == "__main__":
  main()







```

## Submission at 2024-08-30 05:00:50


```
# write from scratch, create a function named Pow(x:int , n:int)

x,n= map(int,input().split())



def pow(x,n):
    ans =x**n
    return ans
    
    

print(pow(x,n))

```

## Submission at 2024-08-30 05:02:16


```
# write from scratch, create a function named Pow(x:int , n:int)

x,n= map(int,input().split())



def pow(x,n):
    if n<=0:
        return 0
    else:
        ans =x**n
        return ans
    
    

print(pow(x,n))

```

## Submission at 2024-08-30 05:06:22


```
# write from scratch, create a function named Pow(x:int , n:int)

x,n = map(float,input().split())


x = int(x)
n = int(n)

def pow(x,n):
ans =x**n
return ans
    
    

print(pow(x,n))

```

## Submission at 2024-08-30 05:08:19


```
# write from scratch, create a function named Pow(x:int , n:int)

x,n = map(float,input().split())


x = int(x)
n = int(n)

def pow(x,n):
 ans =x**n
 if ans<=1:
    return 0
 else:
    return ans
 
    
    

print(pow(x,n))

```

## Submission at 2024-08-30 05:23:00


```
# Write code from scratch
n = (int,input().strip())
a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))


def max_arr(a1,a2,n):
 for i in range(0,len(a1)):
     if a1[i] > a2[i]:
         a1[i] = a1[i]
     else:
         a1[i] = a2[i]

 return a1
 
def main():
    print(max_arr(a1,a2,n))

if __name__ == "__main__":
 main()
  


```

## Submission at 2024-08-30 05:23:47


```
# Write code from scratch
n = (int,input().strip())
a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))


def max_arr(a1,a2,n):
    c1 = []
 for i in range(0,len(a1)):
     if a1[i] > a2[i]:
         c1[i] = a1[i]
     else:
         c1[i] = a2[i]

 return c1
 
def main():
    print(max_arr(a1,a2,n))

if __name__ == "__main__":
 main()
  


```

## Submission at 2024-08-30 05:32:31


```
# Write code from scratch
n = (int,input().strip())
a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))


def max_arr(a1,a2,n):
 c1 = []
 for i in range(0,len(a1)): 
    if a1[i] > a2[i]:
     a1[i] = a1[i]
    else:
     a1[i] = a2[i]
    
    return a1


 

print(max_arr(a1,a2,n))




```

## Submission at 2024-08-30 05:50:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
   
    
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(4)
    head.next.next.next.next = Node(5)

    curr = head
    prev = none

    if curr.next is None:
        return head
    else:
    
     new_node = curr
     curr.next = prev

     while curr:
         prev = curr
         curr = new_node
    return head

#print list 
while head is not None:
    print(head.data, end = " ")
    head = head.next





```

## Submission at 2024-08-30 06:22:10


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n= map(int,input().split())



def pow(x,n):
 ans =x  
 if n==0 or n<1:
   return 0
elif n == 1:
   return   

    
    
else:

   ans=ans * x
     
return pow(ans,n-1) 

    
    

print(pow(x,n))
```

## Submission at 2024-08-30 06:22:33


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n= map(int,input().split())



def pow(x,n):
 ans =x  
 if n==0 or n<1:
   return 0
 elif n == 1:
   return   

    
    
 else:

   ans=ans * x
     
return pow(ans,n-1) 

    
    

print(pow(x,n))
```

## Submission at 2024-08-30 06:24:32


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n= map(int,input().split())



def pow(x,n):
 ans =x  
 if n==0 or n<1:
   return 0
 elif n == 1:
   return   

    
    
 else:

   ans=ans * x
     
 return pow(ans,n-1)

print(pow(x,n))
```

## Submission at 2024-09-06 04:52:46


```
# Write code from scratch
def palin(s):
    while len(s)>1:
        if s[0] == s[-1]:
            s.pop(-1)
            s.pop(0)
            palin(s)
        else:
            return "NO"
    return "YES"

def main():
    s = list(input())
    print(palin(s))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-06 04:59:41


```


def pow(x, n):
    ans = 1  # Initialize ans to 1
    if n == 0:
        return 1  # Any number to the power of 0 is 1
    elif n < 0:
        return 1 / pow(x, -n)  # Handle negative exponents
    else:
        for _ in range(n):
            ans *= x  # Multiply ans by x, n times
        return ans


def main():
    x, n = map(int, input().split())
    print(pow(x,n))

if __name__ == "__main__":
    main()






```

## Submission at 2024-09-06 05:00:34


```


def pow(x, n):
    ans = 1  # Initialize ans to 1
    if n == 0:
        return 1  # Any number to the power of 0 is 1
    elif n < 0:
        return 0  # Handle negative exponents
    else:
        for _ in range(n):
            ans *= x  # Multiply ans by x, n times
        return ans


def main():
    x, n = map(int, input().split())
    print(pow(x,n))

if __name__ == "__main__":
    main()






```

## Submission at 2024-09-06 05:03:03


```


def pow(x, n):
    ans = 1  # Initialize ans to 1
    if n == 0:
        return 1  # Any number to the power of 0 is 1
    elif n < 0:
        return 0  # Handle negative exponents
    else:
        for _ in range(n):
            ans *= x  # Multiply ans by x, n times
        return ans


def main():
    x, n = map(int, input().split())
    print(pow(x,n))

if __name__ == "__main__":
    main()






```

## Submission at 2024-09-11 07:58:13


```
# Write Code from Scratch here
def power_three(n):
    if n==1:
        return "true"
    elif n<1:
        return "false"
    else:
        n=n/3
        return power_three(n)


def main():
    n = int(input())
    print(power_three(n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-09-11 08:00:17


```
# Write Code from Scratch here
def power_three(n):
    if n==1:
        return "true"
    elif (n<1) or (n%3!=0):
        return "false"
    else:
        
        return power_three(n/3)


def main():
    n = int(input())
    print(power_three(n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-09-11 08:03:06


```
# Write Code from Scratch here
def power_three(n):
    if n==1:
        return "True"
    elif (n<1) or (n%3!=0):
        return "false"
    else:
        
        return power_three(n/3)


def main():
    n = int(input().strip())
    print(power_three(n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-09-11 08:08:42


```
# Write Code from Scratch here
from ast import Pow
def power_three(n):
    assert n >= -pow(2, 31) and n <= pow(2, 31) - 1  # Corrected the bounds for a 32-bit signed integer
    if n==1:
        return "True"
    elif (n<1) or (n%3!=0):
        return "false"
    else:
        
        return power_three(n/3)


def main():
    n = int(input().strip())
    print(power_three(n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-09-11 08:09:01


```
# Write Code from Scratch here
from ast import Pow
def power_three(n):
    assert n >= -pow(2, 31) and n <= pow(2, 31) - 1  # Corrected the bounds for a 32-bit signed integer
    if n==1:
        return "True"
    elif (n<1) or (n%3!=0):
        return "false"
    else:
        
        return power_three(n/3)


def main():
    n = int(input().strip())
    print(power_three(n))

if __name__ =="__main__":
    main()
```

## Submission at 2024-09-11 08:10:36


```
# Write Code from Scratch here
class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <= 0:
            return "False"
        import math
        x = math.log10(n) / math.log10(3)
        return x == int(x)
```

## Submission at 2024-10-04 05:35:07


```
# Write Python code from scratch
def daily_temp(n,arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(i+1,len(arr)):
            def recur_(j,min_index):
                if arr[j]>arr[min_index]:

                     arr[i] = arr[j] - arr[min_index]
                     return arr[i]
                elif arr[j] < arr[min_index]:
                    j = j+1
                    return recur_(j,min_index)
                if j == len(arr)-1:
                    arr[i] = 0



    return arr
   
    

n = map(int,input().strip())
arr = list(map(int,input().split()))
print(daily_temp(n,arr))

for i in range(len(arr)):
    print(arr[i], end = ' ')



```

## Submission at 2024-10-04 05:47:18


```
# Write Python code from scratch

s= str(input())
t = str(input())

print"true"

```

## Submission at 2024-10-23 03:23:03


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow_(x,n):
    if x==0:
        return 1
    else:
        ans = pow(x,int(n))
        return int(ans)



def main():
    x,n = map(float,input().split())

    print(pow_(x,n))


if __name__ == "__main__":
    main()
```

## Submission at 2024-10-23 03:26:35


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow_(x,n):
    if n==0:
        return 1
    else:
        ans = pow(x,n)
        return int(ans)



def main():
    x,n = map(float,input().split())

    print(pow_(x,n))


if __name__ == "__main__":
    main()
```

## Submission at 2024-10-23 03:31:10


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow_(x,n):
    if n==0:
        return 1
    else:
        ans = pow(x,n)
        return int(ans)



def main():
    x,n = map(float,input().split())

    print(pow_(x,n))


if __name__ == "__main__":
    main()
```

## Submission at 2024-10-23 08:45:12


```
# Write Code from Scratch here
def three_pow(n):
    if n<0:
        return "False"
    if n == 1:
        return "True"
    else:
        return three_pow(n/3)


def main():
    n = int(input())
    print(three_pow(n))

if __name__ == "__main__":
    main()
    
```

## Submission at 2024-10-23 08:53:12


```
# Write Code from Scratch here
def three_pow(n):
    if n<0:
        return "False"
    if n == 1:
        return "True"
    if n%3==0:
        return three_pow(n/3)
    else:
        return "False"


def main():
    n = int(input())
    print(three_pow(n))

if __name__ == "__main__":
    main()
    
```

## Submission at 2024-10-23 11:18:10


```
# Write code from scratch
def palin(s):
    while len(s)>1:
        if s[0] == s[-1]:
            s.pop(-1)
            s.pop(0)
            palin(s)
        else:
            return "NO"
        return "YES"

def main():
    s = list(input())
    print(palin(s))

if __name__ =="__main__":
    main()

        
            
```

## Submission at 2024-10-23 11:28:00


```
def maxim(a,b,n):
    c=[]
    for i in range(0,n):
      if a[i]>b[i]:
        c.append(a[i])
      else:
        c.append(b[i])
          
          
           
    
        
    for i in range(0,len(c)):
        print(c[i],end="  ")
    

        
def main():
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    n = int(input())

    maxim(a,b,n)


if __name__ == "__main__":
  main()


            



```

## Submission at 2024-10-23 11:31:17


```
def maxim(a,b,n):
    c=[]
    for i in range(0,n):

        if a[i]>b[i]:
          c.append(a[i])
        else:
          c.append(b[i])
  
          
          
           
    
        
    for i in range(0,len(c)):
        print(c[i],end="  ")
    

        
def main():
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    n = int(input())

    maxim(a,b,n)


if __name__ == "__main__":


            



```

## Submission at 2024-10-23 11:34:33


```
def maxim(a,b,n):
    c=[]
    for i in range(0,n):
        if a[i]>b[i]:
          c.append(a[i])
        else:
          c.append(b[i])

    for i in range(0,len(c)):
      print(c[i], end ="  ")

     
def main():
    n = int(input())

    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    

    maxim(a,b,n)


if __name__ == "__main__":
  main()


            



```

## Submission at 2024-10-23 11:35:27


```
def maxim(a,b,n):
    c=[]
    for i in range(0,n):
        c.append(max(a[i],b[i]))

    for i in range(0,len(c)):
      print(c[i], end ="  ")

     
def main():
    n = int(input())

    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    

    maxim(a,b,n)


if __name__ == "__main__":
  main()


            



```

## Submission at 2024-10-23 11:35:49


```
def maxim(a,b,n):
    c=[]
    for i in range(0,n):
        c.append(max(a[i],b[i]))

    for i in range(0,len(c)):
      print(c[i], end ="  ")

     
def main():
    n = int(input())

    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    

    maxim(a,b,n)


if __name__ == "__main__":
  main()


            



```

## Submission at 2024-10-23 11:36:21


```
def maxim(a,b,n):
    c=[]
    for i in range(0,n):
        c.append(max(a[i],b[i]))

    for i in range(0,len(c)):
      print(c[i], end =" ")

     
def main():
    n = int(input())

    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    

    maxim(a,b,n)


if __name__ == "__main__":
  main()


            



```

## Submission at 2024-10-25 05:31:23


```
# write code from scratch
def ransom_note(ransomNote,magazine):
    r_sorted = sorted(ransomNote)
    m_sorted = sorted(magazine)

    if r_sorted == m_sorted:
        return "true"
    else:
        return "false"
def main():
    ransomNote= list(input())
    magazine = list(input())
    print(ransom_note(ransomNote,magazine))

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-25 05:37:37


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
  node = root
  def traversal(node):
    if node is None:
      return []
    traversal(node.left)
    traversal(node.right)
    ans.append(node.data)
  traversal(root)
  return ans
  
  
    # code here
```

## Submission at 2024-10-25 05:39:52


```
# write code from scratch
def ransom_note(ransomNote,magazine):
    r_sorted = sorted(ransomNote)
    m_sorted = sorted(magazine)

    if r_sorted == m_sorted:
        return "true"
    else:
        return "false"
def main():
    ransomNote= list(input())
    magazine = list(input())
    print(ransom_note(ransomNote,magazine))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 05:41:04


```
# write code from scratch
#write code from scratch
def ransom_note(ransomNote,magazine):
    r_sorted = sorted(ransomNote)
    m_sorted = sorted(magazine)

    if r_sorted == m_sorted:
        return "true"
    else:
        return "false"
def main():
    ransomNote= list(input())
    magazine = list(input())
    print(ransom_note(ransomNote,magazine))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:09:10


```
def word_pattern(pattern,s):
    chars={}
    words = {}

    pattern.split()

    for x in pattern:
        chars.add(x)

    for y in words:
        words.add(y)

    for x,y in zip(chars,words):
        if((x is not None and chars[x]== y) and (y is not None and words[y]== x):
            return True
        return False

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-25 06:11:01


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
        return True
        # Your Code Here
```

## Submission at 2024-10-25 06:11:36


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
        return False
        # Your Code Here
```

## Submission at 2024-10-25 06:44:29


```
# write code from scratch

def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x in pattern and chars[x]== y) and (y in s and words[y]== x)):
            return True
        return False

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:45:49


```
# write code from scratch

def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x in pattern and chars[x]== y) and (y in s and words[y]== x)):
            return "false"
        return "true"

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:49:16


```
# write code from scratch

def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x in chars and chars[x]!= y) or ( y in words and words[y]!= x)):
            return "false"
        return "true"

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:55:00


```
# write code from scratch
def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x is not None and chars[x]!= y) or ( y is not None and words[y]!= x)):
            return "false"
        return "true"

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:58:11


```
# write code from scratch
def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x is not None and chars[x]!= y) or ( y is not None and words[y]!= x)):
            return "false"
        elif (x is None and y is None):
            return "true"
        else:
            return "true"

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

if __name__ == "__main__":
    main()


        


```

## Submission at 2024-10-25 06:58:47


```

# write code from scratch
def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x is not None and chars[x]!= y) or ( y is not None and words[y]!= x)):
            return "false"
        return "true"

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))

```

## Submission at 2024-10-25 06:59:39


```
# write code from scratch

def word_pattern(pattern,s):
    chars={}
    words = {}

    for x in pattern:
        if x in chars:
            chars[x].append(pattern)
        else:
            chars[x] = [pattern]


    for y in s:
        if y in words:
            words[y].append(s)
        else:
            words[y] = [s]



        

    for x,y in zip(chars,words):
        if((x is not None and chars[x]!= y) or ( y is not None and words[y]!= x)):
            return "false"
        return "true"

def main():
    pattern = list(input())
    s = list(input())
    print(word_pattern(pattern,s))
```

## Submission at 2024-11-22 05:04:51


```
# Write Code From Scratch Here
def sum_arr(arr,n):
    sum_a=0
    for i in range(0,n):
        sum_a+=arr[i]
        print(sum_a)


    
    
n = int(input())
arr =map(int, input().split())
sum_arr(arr,n)


```

## Submission at 2024-11-22 05:19:28


```
# Write Code From Scratch Here
# Write Code From Scratch Here
# Write Code From Scratch Here
def sum_arr(arr,n):
    sum_a=0
    for i in range(0,n):
        sum_a+=arr[i]
    print(sum_a)
  
n = int(input())
arr =list(map(int, input().split()))
sum_arr(arr,n)
```

## Submission at 2024-11-22 05:28:54


```
# write code from scratch
# write code from scratch
def print_diam(n):
    if n<=0:
        return 
    elif n==3:
        print("*",\n"**",\n"***",\n"**",\n"*")
    else:
        return None

n = int(input())
print_diam(n)
```

## Submission at 2024-11-22 05:37:53


```
# Write Code From Scratch Here
def minim(a,b):
    print(b-a)


a,b = map(int,input().split())
minim(a,b)
```

## Submission at 2024-11-22 06:02:11


```
# write code from scratch
# write code from scratch
def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                break
                print(arr[i])
            return None
            
n = int(input())
arr = list(map(int,input().split()))
twice(arr,n)
```

## Submission at 2024-11-22 06:05:06


```
# write code from scratch
# write code from scratch
def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                print(arr[i])
            return None
            
n = int(input())
arr = list(map(int,input().split()))
twice(arr,n)
```

## Submission at 2024-11-22 06:08:27


```
# write code from scratch
# write code from scratch
def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                print(arr[i])
            return None
            
n = int(input())
arr = list(map(int,input().split()))
twice(arr,n)
```

## Submission at 2024-11-22 06:17:55


```
# write code from scratch
# write code from scratch
def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
        print(count)
            
            
n = int(input())
arr = list(map(int,input().split()))
twice(arr,n)
```

## Submission at 2024-11-22 06:28:28


```

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                return count 
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 06:30:24


```

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                return count 
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 06:31:33


```
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                return count 
            else:
                return 0
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 06:33:16


```
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
                return count 
            else:
                return 0
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 06:43:46


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
        def dfs(node):
            if root is None:
                return True,float'-inf',float'inf'

        [left_size,left_min,left_max]=dfs(root.left)
        [right_size,right_min,right_max]=dfs(root.right)

        if left_min<node.data and right_max>node.data:
            return True
        else:
            return False


    root=int(input())

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
        def dfs(node):
            if root is None:
                return True,float'-inf',float'inf'

        [left_min,left_max]=dfs(root.left)
        [right_min,right_max]=dfs(root.right)

        if left_min<node.data and right_max>node.data:
            return True
        else:
            return False


    root=int(input())
```

## Submission at 2024-11-22 06:58:19


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
        def dfs(node):
            if root is None:
                return True
            
            elif root.left<root.data and root.right>root.data:
                return True
            else:
                return False

        


    root=int(input())
```

## Submission at 2024-11-22 06:58:19


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
        def dfs(node):
            if root is None:
                return True
            
            elif root.left<root.data and root.right>root.data:
                return True
            else:
                return False

        


    root=int(input())
```

## Submission at 2024-11-22 06:58:25


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
        def dfs(node):
            if root is None:
                return True
            
            elif root.left<root.data and root.right>root.data:
                return True
            else:
                return False

        


    root=int(input())
```

## Submission at 2024-11-22 06:59:29


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
        def dfs(node):
            if root is None:
                return True
            
            elif root.left<root.data and root.right>root.data:
                return True
            else:
                return False

        


    root=int(input())
```

## Submission at 2024-11-22 06:59:31


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
        def dfs(node):
            if root is None:
                return True
            
            elif root.left<root.data and root.right>root.data:
                return True
            else:
                return False

        


    root=int(input())
```

## Submission at 2024-11-22 07:00:40


```
# write code from scratch
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
        return count
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 07:00:50


```
# write code from scratch
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
        return count
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 07:00:56


```
# write code from scratch
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
        return count
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 07:00:57


```
# write code from scratch
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
        return count
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 07:02:31


```
# write code from scratch
# write code from scratch
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
        return count
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 07:05:45


```
# write code from scratch
# write code from scratch
# write code from scratch

def twice(arr,n):
    count=0
    for i in range(0,n):
        for j in range(i,n):
            if arr[i]==arr[j]:
                count+=1
            return count
            
            
            
n = int(input())
arr = list(map(int,input().split()))
print(twice(arr,n))
```

## Submission at 2024-11-22 07:09:42


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
        return True

        


    root=int(input())
    print(isBST(root))
 #code to check input
```

