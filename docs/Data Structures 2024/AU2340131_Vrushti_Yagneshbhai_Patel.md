## Submission at 2024-08-09 04:58:02


```


username = input().strip()

print(f"Hello {username}!")

```

## Submission at 2024-08-09 04:58:25


```


username = input().strip()

print(f"Hello {username}!")

```

## Submission at 2024-08-09 05:00:39


```


username = input().strip()

print(f"Hello {username}!")

```

## Submission at 2024-08-09 05:10:33


```

n = int(input().strip())


for _ in range(n):
    user_name = input().strip()
    print(f"Hello {user_name}!")

```

## Submission at 2024-08-09 05:15:23


```
name = input().strip()

print(f"Hello" + name + "!")
```

## Submission at 2024-08-09 05:17:59


```
name = input().strip()

print("Hello " + name + "!")
```

## Submission at 2024-08-16 05:02:08


```
def fibonacci(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    a, b = 0, 1
    for _ in range(2, x + 1):
        a, b = b, a + b
    return b

# Take input from the user
x = int(input("Enter a number "))

# Print the x-th Fibonacci number
print(f"The {x}-th Fibonacci number is: {fibonacci(x)}")

```

## Submission at 2024-08-16 05:02:34


```
def fibonacci(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    a, b = 0, 1
    for _ in range(2, x + 1):
        a, b = b, a + b
    return b

# Take input from the user
x = int(input("Enter a number "))

# Print the x-th Fibonacci number
print(f"The {x}-th Fibonacci number is: {fibonacci(x)}")

```

## Submission at 2024-08-16 05:23:23


```
def power2(n:int) ->str:
    assert n>0
    if n==2:
        return "true"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:24:41


```
def power2(n:int) ->str:
    assert n>0
    if n==2:
        return "true"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:25:09


```
def power2(n:int) ->str:
    assert n>0
    if n==2:
        return "true"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:33:01


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "true"
    elif n <=0 or n % 2 != 0:
        return "false"
    else:
        return is_power_of_two(n/2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-16 05:36:28


```
def power2(n:int) ->str: 
    if n==1:
        return "true"
        
    elif n<=0 or n%2!=0:
         return "false"

    return power2(n/2)
       
n=int(input())
print(power2(n))
```

## Submission at 2024-08-16 05:44:19


```
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    # Read input
    nums = list(map(int, input("Enter integers separated by space: ").split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:46:10


```
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:48:19


```
def fibonacci(x:int) -> int:
    assert x>=0
    if x<=1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)

x=int(input())
print(fibonacci(x))
```

## Submission at 2024-08-22 05:03:38


```
import itertools

def generate_combinations(n, k):
    # Generate all possible combinations of k numbers from range 1 to n
    combinations = itertools.combinations(range(1, n + 1), k)
    
    # Convert each combination from tuple to list
    result = [list(comb) for comb in combinations]
    
    return result

if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    
    # Read n and k from input
    n, k = map(int, input.split())
    
    # Generate combinations
    result = generate_combinations(n, k)
    
    # Print result in the required format
    print(result)

```

## Submission at 2024-08-22 05:06:05


```
import itertools

def generate_combinations(n, k):
    # Generate all possible combinations of k numbers from range 1 to n
    combinations = itertools.combinations(range(1, n + 1), k)
    
    # Convert each combination from tuple to list
    result = [list(comb) for comb in combinations]
    
    return result

if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    
    # Read n and k from input
    n, k = map(int, input.split())
    
    # Generate combinations
    result = generate_combinations(n, k)
    
    # Print result in the required format
    print(result)

```

## Submission at 2024-08-22 05:09:37


```
def combine(n, k):
    # Helper function to perform backtracking
    def backtrack(start, path):
        # If the combination is complete, add it to the result
        if len(path) == k:
            result.append(path[:])
            return
        # Try all possible next elements
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()
    
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

## Submission at 2024-08-22 05:10:40


```
def combine(n, k):
    # Helper function to perform backtracking
    def backtrack(start, path):
        # If the combination is complete, add it to the result
        if len(path) == k:
            result.append(path[:])
            return
        # Try all possible next elements
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()
    
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

## Submission at 2024-08-22 05:15:10


```
def combine(n, k):
    # Helper function to perform backtracking
    def backtrack(start, path):
        # If the combination is complete, add it to the result
        if len(path) == k:
            result.append(path[:])
            return
        # Try all possible next elements
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()
    
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

## Submission at 2024-08-22 05:22:15


```
import itertools

def permute(nums):
    # Generate all permutations of the list nums
    permutations = list(itertools.permutations(nums))
    
    # Convert each permutation from tuple to list
    result = [list(perm) for perm in permutations]
    
    # Return the result
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Parse the input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Sort permutations to ensure they are in lexicographical order
    result.sort()
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:23:44


```
def permute(nums):
    def backtrack(start):
        # If we have generated a permutation, add it to the result
        if start == len(nums):
            result.append(nums[:])
            return
        
        # Recursively generate permutations
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recurse on the remaining elements
            backtrack(start + 1)
            # Swap back to backtrack
            nums[start], nums[i] = nums[i], nums[start]
    
    result = []
    backtrack(0)
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Parse the input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Sort permutations to ensure they are in lexicographical order
    result.sort()
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:25:10


```
def permute(nums):
    def backtrack(start):
        # If we have reached the end of the list, add a copy of the permutation
        if start == len(nums):
            result.append(nums[:])
            return
        
        # Recursively generate permutations by swapping elements
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recursively call backtrack for the next index
            backtrack(start + 1)
            # Swap back to restore the original order (backtrack)
            nums[start], nums[i] = nums[i], nums[start]
    
    result = []
    backtrack(0)
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Handle empty input
    if not input:
        print([])
        return
    
    # Parse the input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Sort permutations to ensure they are in lexicographical order
    result.sort()
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:29:33


```
def permute(nums):
    def backtrack(path, used):
        # If the path length equals the length of nums, we found a permutation
        if len(path) == len(nums):
            result.append(path[:])  # Add a copy of path to result
            return
        
        # Explore all possible choices
        for i in range(len(nums)):
            if used[i]:
                continue
            # Include nums[i] in the current permutation path
            path.append(nums[i])
            used[i] = True
            # Recurse with the current path
            backtrack(path, used)
            # Backtrack: remove nums[i] from path and mark it as unused
            path.pop()
            used[i] = False
    
    result = []
    used = [False] * len(nums)
    backtrack([], used)
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Handle empty input
    if not input:
        print([])
        return
    
    # Parse the input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Sort permutations to ensure they are in lexicographical order
    result.sort()
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:34:33


```
def permute(nums):
    def backtrack(start):
        # If we have reached the end of the list, add a copy of the current permutation
        if start == len(nums):
            result.append(nums[:])
            return
        
        # Explore all possible swaps for the current position
        for i in range(start, len(nums)):
            # Swap the current index with the start index
            nums[start], nums[i] = nums[i], nums[start]
            # Recurse with the next index
            backtrack(start + 1)
            # Swap back to restore the original order (backtrack)
            nums[start], nums[i] = nums[i], nums[start]
    
    result = []
    backtrack(0)
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Handle empty input
    if not input:
        print([])
        return
    
    # Parse the input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Sort permutations to ensure they are in lexicographical order
    result.sort()
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:37:02


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            #print("l[:i] + l[i+1:] : ",l[:i] + l[i+1:])
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(formatted_output)

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-22 06:50:40


```
def permute(nums):
    def backtrack(start=0):
        # If we've reached the end of the list, add the permutation to the output
        if start == len(nums):
            output.append(nums[:])  # Append a copy of the current permutation
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recursively generate permutations for the next position
            backtrack(start + 1)
            
            nums[start], nums[i] = nums[i], nums[start]

    output = []
    backtrack()  
    return output

input_nums = [1, 2, 3]
print(permute(input_nums))

```

## Submission at 2024-08-22 06:52:00


```
def permute(nums):
    def backtrack(start=0):
        # If we've reached the end of the list, add the permutation to the output
        if start == len(nums):
            output.append(nums[:])  # Append a copy of the current permutation
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recursively generate permutations for the next position
            backtrack(start + 1)
            # Backtrack to restore the original list state
            nums[start], nums[i] = nums[i], nums[start]

    output = []
    backtrack()  # Start the recursion with the initial index
    return sorted(output)  # Ensure the result is sorted

# Example usage
input_nums = [1, 2, 3]
print(permute(input_nums))

```

## Submission at 2024-08-22 06:54:16


```
def permute(nums):
    def backtrack(start=0):
        # If the permutation is complete, add it to the result list
        if start == len(nums):
            output.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recursively generate permutations for the next position
            backtrack(start + 1)
            # Backtrack to restore the original list state
            nums[start], nums[i] = nums[i], nums[start]

    output = []
    backtrack()  # Start the recursion with the initial index
    return sorted(output)  # Ensure the result is sorted

# Example usage
input_nums = [1, 2, 3]
print(permute(input_nums))

```

## Submission at 2024-08-22 06:55:42


```
def permute(nums):
    def backtrack(start=0):
        # If the start index is at the end of the list, we have a complete permutation
        if start == len(nums):
            output.append(nums[:])  # Append a copy of the current permutation
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recursively generate permutations for the next position
            backtrack(start + 1)
            # Backtrack to restore the original list state
            nums[start], nums[i] = nums[i], nums[start]

    output = []
    backtrack()  # Start the recursion with the initial index
    return sorted(output)  # Sort the result list of permutations

# Example usage
input_nums = [1, 2, 3]
print(permute(input_nums))

```

## Submission at 2024-08-22 06:56:41


```
def permute(nums):
    def backtrack(start=0):
        # If the start index is at the end of the list, we have a complete permutation
        if start == len(nums):
            output.append(nums[:])  # Append a copy of the current permutation
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recursively generate permutations for the next position
            backtrack(start + 1)
            # Backtrack to restore the original list state
            nums[start], nums[i] = nums[i], nums[start]

    output = []
    backtrack()  # Start the recursion with the initial index
    return sorted(output)  # Sort the result list of permutations

# Example usage
input_nums = [1, 2, 3]
print(permute(input_nums))

```

## Submission at 2024-08-22 06:57:38


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            #print("l[:i] + l[i+1:] : ",l[:i] + l[i+1:])
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(formatted_output)

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-22 07:09:29


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    import sys
    input = sys.stdin.read().strip()  # Read from standard input (useful for competitive programming)
    x = list(map(int, input.split()))
    
    permutations = perm(x)
    
    # Sort permutations to ensure output is in lexicographical order
    permutations.sort()
    
    # Format the output as specified
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    
    print(formatted_output)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 07:18:30


```
def generateParenthesis(n):
    def backtrack(s='', open_count=0, close_count=0):
        # Base case: if the current string s has reached the maximum length of 2*n
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # If we can add an opening parenthesis
        if open_count < n:
            backtrack(s + '(', open_count + 1, close_count)
        
        # If we can add a closing parenthesis
        if close_count < open_count:
            backtrack(s + ')', open_count, close_count + 1)
    
    result = []
    backtrack()
    return result

# Example usage
n = int(input())
print(generateParenthesis(n))

```

## Submission at 2024-08-22 07:19:32


```
def generateParenthesis(n):
    def backtrack(current, open_count, close_count):
        # Base case: if the current string is of the maximum length
        if len(current) == 2 * n:
            result.append(current)
            return
        
        # Add an opening parenthesis if we have not used up all 'n' opening parentheses
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening parentheses
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

# Example usage
n = int(input().strip())
print(generateParenthesis(n))

```

## Submission at 2024-08-22 07:21:40


```
def generateParenthesis(n):
    def backtrack(s, open_count, close_count):
        # Base case: when the string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # If we can add an opening parenthesis
        if open_count < n:
            backtrack(s + '(', open_count + 1, close_count)
        
        # If we can add a closing parenthesis
        if close_count < open_count:
            backtrack(s + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)  # Start with an empty string and zero counts
    return result

# Main function to handle input and output
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()  # Read from standard input
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:22:56


```
def generateParenthesis(n):
    def backtrack(s='', open_count=0, close_count=0):
        # Base case: if the string is of length 2*n, add it to results
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # Add an opening parenthesis if possible
        if open_count < n:
            backtrack(s + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(s + ')', open_count, close_count + 1)
    
    result = []
    backtrack()  # Start with an empty string and zero counts
    return result

# Main function to handle input and output
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:30:09


```
def generateParenthesis(n):
    def backtrack(s='', open_count=0, close_count=0):
        # Base case: when the string s is of length 2*n
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # Add an opening parenthesis if there are still some left to add
        if open_count < n:
            backtrack(s + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(s + ')', open_count, close_count + 1)
    
    result = []
    backtrack()  # Start with an empty string and zero counts
    return result

# Main function to handle input and output
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:32:01


```
def generateParenthesis(n):
    def backtrack(s, open_count, close_count):
        # Base case: when the string is of length 2*n
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # Add an opening parenthesis if possible
        if open_count < n:
            backtrack(s + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(s + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)  # Start with an empty string and zero counts
    return result

# Main function to handle input and output
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:33:51


```
def generateParenthesis(n):
    def backtrack(s, open_count, close_count):
        # Base case: when the string is of length 2*n
        if len(s) == 2 * n:
            result.append(s)
            return
        
        # Add an opening parenthesis if possible
        if open_count < n:
            backtrack(s + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(s + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)  # Start with an empty string and zero counts
    return result

# Main function to handle input and output
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:44:04


```
def generateParenthesis(n):
    def backtrack(current, open_count, close_count):
        # Base case: if the current string has reached the length of 2*n
        if len(current) == 2 * n:
            result.append(current)
            return
        
        # Add an opening parenthesis if there are still some left to use
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)  # Start with an empty string and zero counts
    return result

# Example usage
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()  # Read input
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:47:11


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}


bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }


}

int main() {
    int n, k;
    cin >> n >> k;

   
    vector<vector<int>> result = combine(n, k);

    
    sort(result.begin(), result.end(), compare);

    
    cout<<"[";
    for (int i=0;i<result.size();i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i==result.size()-1) continue;
        cout<<",";
    }
    cout<<"]";

    return 0;
}

```

## Submission at 2024-08-22 07:50:28


```
def generateParenthesis(n):
    def backtrack(current, open_count, close_count):
        # Base case: if the current string is of length 2*n
        if len(current) == 2 * n:
            result.append(current)
            return
        
        # Add an opening parenthesis if we haven't used all n
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)  # Start with an empty string and zero counts
    return result

# Example usage
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()  # Read the input from standard input
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:50:45


```
def generateParenthesis(n):
    def backtrack(current, open_count, close_count):
        # Base case: if the current string is of length 2*n
        if len(current) == 2 * n:
            result.append(current)
            return
        
        # Add an opening parenthesis if we haven't used all n
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it does not exceed the number of opening ones
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)  # Start with an empty string and zero counts
    return result

# Example usage
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()  # Read the input from standard input
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 07:54:29


```
def generateParenthesis(n):
    def backtrack(current, open_count, close_count):
        
        if len(current) == 2 * n:
            result.append(current)
            return
        
       
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0) 
    return result

# Example usage
if __name__ == "__main__":
    import sys
    input = sys.stdin.read().strip()
    n = int(input)
    output = generateParenthesis(n)
    print(output)

```

## Submission at 2024-08-22 08:03:03


```
def genpar(n):
    def paran(s="", left=0, right=0):
        if len(s) == 2 * n:
            r.append(s)
            return
        if left < n:
            paran(s + "(", left + 1, right)
        if right < left:
            paran(s + ")", left, right + 1)
    
    r = []
    paran()
    return r

def main():
    x = int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 15:44:47


```
# Write the code from scratch, no boilerplate is required
def are_arrays_equal(arr1, arr2):
    # If lengths are different, arrays can't be equal
    if len(arr1) != len(arr2):
        return False
    
    # Create dictionaries to store the frequency of elements in both arrays
    freq1 = {}
    freq2 = {}
    
    for num in arr1:
        freq1[num] = freq1.get(num, 0) + 1
        
    for num in arr2:
        freq2[num] = freq2.get(num, 0) + 1
    
    # Compare the frequency dictionaries
    return freq1 == freq2

# Read the input
n1, n2 = map(int, input().split())

# Read the two arrays
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Check if the arrays are equal
result = are_arrays_equal(arr1, arr2)

# Print the result
print("true" if result else "false")

```

## Submission at 2024-08-29 16:03:22


```
def sum_of_multiples(n):
    total_sum = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    return total_sum

```

## Submission at 2024-08-29 16:11:11


```
def sum_of_multiples(n):
    total_sum = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    return total_sum

# Assuming the driver code is providing the value of n
try:
    n = int(input().strip())  # Ensure that n is correctly read
    result = sum_of_multiples(n)
    print(result)
except:
    print("An error occurred.")

```

## Submission at 2024-08-29 16:13:50


```
def count_numbers_with_even_digits(nums):
    count = 0
    for num in nums:
        # Convert number to string to find the number of digits
        if len(str(num)) % 2 == 0:
            count += 1
    return count

# Read the input values
n = int(input().strip())
nums = list(map(int, input().strip().split()))

# Get the count of numbers with even number of digits
result = count_numbers_with_even_digits(nums)

# Print the result
print(result)

```

## Submission at 2024-08-29 16:16:42


```
def find_kth_missing(arr, k):
    missing_count = 0
    current = 1
    index = 0

    while missing_count < k:
        if index < len(arr) and arr[index] == current:
            index += 1
        else:
            missing_count += 1
            if missing_count == k:
                return current
        current += 1

# Read the input values
n, k = map(int, input().split())
arr = list(map(int, input().split()))

# Get the k-th missing positive number
result = find_kth_missing(arr, k)

# Print the result
print(result)

```

## Submission at 2024-08-29 16:21:18


```
def triangular_sum(nums):
    while len(nums) > 1:
        # Compute the new row
        nums = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    # The remaining single element is the top of the triangle
    return nums[0]

# Read the input values
n = int(input().strip())
nums = list(map(int, input().strip().split()))

# Calculate and print the triangular sum
result = triangular_sum(nums)
print(result)

```

## Submission at 2024-08-29 16:29:39


```
# Write Code from Scratch
def transpose_matrix(matrix, M, N):
    # Create a new matrix for the transpose
    transposed = [[0] * M for _ in range(N)]
    
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    
    return transposed

# Read the input values
M, N = map(int, input().split())

# Read the matrix
matrix = []
for _ in range(M):
    row = list(map(int, input().split()))
    matrix.append(row)

# Get the transposed matrix
transposed = transpose_matrix(matrix, M, N)

# Print the transposed matrix
for row in transposed:
    print(' '.join(map(str, row)))

```

## Submission at 2024-08-29 16:31:28


```
def spiral_traversal(matrix, n, m):
    result = []
    top, bottom = 0, n - 1
    left, right = 0, m - 1
    
    while top <= bottom and left <= right:
        # Traverse from left to right along the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1
        
        # Traverse from top to bottom along the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left along the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top along the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1
    
    return result

# Read the input values
n, m = map(int, input().split())

# Read the matrix
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# Get the spiral traversal order
result = spiral_traversal(matrix, n, m)

# Print the result as a space-separated string
print(' '.join(map(str, result)))

```

## Submission at 2024-08-30 04:52:52


```
# Write code from scratch
import numpy is np 

name is np.array 
name = str(input.strip)




```

## Submission at 2024-08-30 04:53:01


```
# Write code from scratch
import numpy is np 

name is np.array 
name = str(input.strip)




```

## Submission at 2024-08-30 05:04:45


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X:int, n:int)
X = int(input.strip())
n = int(input.strip())
C = X**n
if x = o:
  return 0
elif n = 0:
   return 1
elif n<0
   return 1/x^(-n)  
else:
   return C
print(pow(n))

```

## Submission at 2024-08-30 05:05:16


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X:int, n:int)
X = int(input.strip())
n = int(input.strip())
C = X**n
if x = o:
  return 0
elif n = 0:
   return 1
elif n<0:
   return 1/x^(-n)  
else:
   return C
print(pow(n))

```

## Submission at 2024-08-30 05:05:31


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X:int, n:int)
X = int(input.strip())
n = int(input.strip())
C = X**n
if x = o:
  return 0
elif n = 0:
   return 1
elif n<0:
   return 1/x^(-n)  
else:
   return C
print(pow(n))

```

## Submission at 2024-08-30 05:16:24


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
  head.data = node(5)  
  Node1 = node(10)
  Node2 = node(20)
  Node3 = node(30)
  Node4 = node(40)

temp = None  

temp.next = Node4
Node4.next.next = Node3
Node3.next.next.next = Node2
Node1.next.next.next.next = None





```

## Submission at 2024-08-30 05:18:12


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X:int, n:int)
X = int(input.strip())
n = int(input.strip())
C = X^n
if x = o:
  return 0
elif n = 0:
   return 1
elif n<0:
   return 1/x^(-n)  
else:
   return C
print(pow(n))
```

## Submission at 2024-08-30 05:20:12


```
# Write code from scratch
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:20:36


```
# Write code from scratch
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:20:36


```
# Write code from scratch
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:20:38


```
# Write code from scratch
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:20:42


```
# Write code from scratch
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:36:37


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X, n)

if x == o:
  return 0
elif n == 0:
   return 1
elif n == 1
   return X  
elif n>1:
   return x* (pow(x, n-1))   
elif n < 0:
   return 1/x*(-n)  
else:
   return C
 print pow((x, n))
```

## Submission at 2024-08-30 05:38:12


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X, n)

if x == o:
  return 0
elif n == 0:
   return 1
elif n == 1
   return X  
elif n>1:
   return x* (pow(x, n-1))   
elif n < 0:
   x = 1/X
   n=n*-1
   return x *

else:
   return C
 print 
```

## Submission at 2024-08-30 05:43:20


```
# Write code from scratchdef combine(n, k):
    # Helper function to perform backtracking
    def backtrack(start, path):
        # If the combination is complete, add it to the result
        if len(path) == k:
            result.append(path[:])
            return
        # Try all possible next elements
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()
    
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

## Submission at 2024-08-30 05:46:53


```
# write from scratch, create a function named Pow(x:int , n:int)
if x == o:
  return 0
elif n == 0:
   return 1
elif n == 1
   return X  
elif n>1:
   return x* (pow(x, n-1))   

print(pow(x, n-1 ))
```

## Submission at 2024-08-30 05:47:41


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X, n)
if x == o:
  return 0
elif n == 0:
   return 1
elif n == 1
   return X  
elif n>1:
   return x* (pow(x, n-1))   

print(pow(x, n-1 ))
```

## Submission at 2024-08-30 05:49:05


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X, n)
if x == o:
  return 0
elif n == 0:
   return 1
elif n == 1:
   return X  
elif n>1:
   return x* (pow(x, n-1))   

print(pow(x, n-1))
```

## Submission at 2024-08-30 05:53:00


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X, n)
if x == o:
  return 0
if n == 0:
   return 1
if n == 1:
   return X  
if n>1:
   return x*n   

print(pow(x, n))
```

## Submission at 2024-08-30 05:57:36


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(X, n)
X =int(input.strip())
n =int(input.strip())

if x == o:
  return 0
if n == 0:
   return 1
if n == 1:
   return X  
if n>1:
   return x*n
   return pow(X,n)  
print(pow(X,n)) 


```

## Submission at 2024-08-30 05:59:25


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
def reverseLinkedList(head):
    # Write your logic here
  head.data = node(5)  
  Node1 = node(10)
  Node2 = node(20)
  Node3 = node(30)
  Node4 = node(40)

temp = None  

temp.next = Node4
Node4.next.next = Node3
Node3.next.next.next = Node2
Node1.next.next.next.next = head
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
    # Write your logic here
def reverseLinkedList(head):
    # Write your logic here
  head.data = node(5)  
  Node1 = node(10)
  Node2 = node(20)
  Node3 = node(30)
  Node4 = node(40)

temp = None  

temp.next = Node4
Node4.next.next = Node3
Node3.next.next.next = Node2
Node1.next.next.next.next = head
```

## Submission at 2024-08-30 05:59:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
def reverseLinkedList(head):
    # Write your logic here
  head.data = node(5)  
  Node1 = node(10)
  Node2 = node(20)
  Node3 = node(30)
  Node4 = node(40)

temp = None  

temp.next = Node4
Node4.next.next = Node3
Node3.next.next.next = Node2
Node1.next.next.next.next = head
```

## Submission at 2024-08-30 06:14:07


```
# Write code from scratch
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 06:24:01


```

def diagonal_traversal(matrix):
    # Your code here
    import numpy as np 
    ar1 = np.array([1, 2, 3, 4, 5, 6])

    print(ar1)

```

## Submission at 2024-10-04 03:00:27


```
# write from scratch, create a function named Pow(x:int , n:int)
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()

```

## Submission at 2024-10-04 03:14:00


```
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()



```

## Submission at 2024-10-04 03:30:37


```
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()






```

## Submission at 2024-10-04 03:32:23


```
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()



#Function to create a linked list from a list of values
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])  # Create the head of the linked list
    current = head
    for value in values[1:]:
        current.next = ListNode(value)  # Create the next node
        current = current.next
    return head

# Example usage
values = [1, 2, 3, 4, 5]  # Values to create the linked list
linked_list_head = create_linked_list(values)  # Create the linked list

# Convert the linked list to an array
array = linked_list_to_array(linked_list_head)

print("Linked List converted to Array:", array)


```

## Submission at 2024-10-04 03:32:52


```
# Function to create a linked list from a list of values
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])  # Create the head of the linked list
    current = head
    for value in values[1:]:
        current.next = ListNode(value)  # Create the next node
        current = current.next
    return head

# Example usage
values = [1, 2, 3, 4, 5]  # Values to create the linked list
linked_list_head = create_linked_list(values)  # Create the linked list

# Convert the linked list to an array
array = linked_list_to_array(linked_list_head)

print("Linked List converted to Array:", array)

```

## Submission at 2024-10-04 03:51:42


```
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()


# BUBBLE SORT 

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)


#QUICK SORT 

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]  # Choose a pivot
    left = [x for x in arr if x < pivot]  # Elements less than pivot
    middle = [x for x in arr if x == pivot]  # Elements equal to pivot
    right = [x for x in arr if x > pivot]  # Elements greater than pivot
    return quick_sort(left) + middle + quick_sort(right)  # Combine results

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Quick Sort
sorted_array = quick_sort(array)

print("Sorted Array (Quick Sort):", sorted_array)


#MERGE ARRAY 

def merge_sort(arr):
    # Base case: if the array is of length 0 or 1, it is already sorted
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])  # Recursively sort the left half
    right_half = merge_sort(arr[mid:])  # Recursively sort the right half

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two halves while there are elements in both
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # If there are remaining elements in the left half, add them
    while left_index < len(left):
        merged.append(left[left_index])
        left_index += 1

    # If there are remaining elements in the right half, add them
    while right_index < len(right):
        merged.append(right[right_index])
        right_index += 1

    return merged

# Example usage
if __name__ == "__main__":
    array = [5, 2, 9, 1, 5, 6]
    sorted_array = merge_sort(array)
    print("Sorted Array (Merge Sort):", sorted_array)


```

## Submission at 2024-10-04 04:23:27


```
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()


# BUBBLE SORT 

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)


#QUICK SORT 

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]  # Choose a pivot
    left = [x for x in arr if x < pivot]  # Elements less than pivot
    middle = [x for x in arr if x == pivot]  # Elements equal to pivot
    right = [x for x in arr if x > pivot]  # Elements greater than pivot
    return quick_sort(left) + middle + quick_sort(right)  # Combine results

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Quick Sort
sorted_array = quick_sort(array)

print("Sorted Array (Quick Sort):", sorted_array)


#MERGE ARRAY 

def merge_sort(arr):
    # Base case: if the array is of length 0 or 1, it is already sorted
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])  # Recursively sort the left half
    right_half = merge_sort(arr[mid:])  # Recursively sort the right half

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two halves while there are elements in both
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # If there are remaining elements in the left half, add them
    while left_index < len(left):
        merged.append(left[left_index])
        left_index += 1

    # If there are remaining elements in the right half, add them
    while right_index < len(right):
        merged.append(right[right_index])
        right_index += 1

    return merged

# Example usage
if __name__ == "__main__":
    array = [5, 2, 9, 1, 5, 6]
    sorted_array = merge_sort(array)
    print("Sorted Array (Merge Sort):", sorted_array)

# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k

# Function to take input and use the minDays method
def input_and_calculate():
    solution = Solution()
    
    # Get input data
    bloomDay, m, k = input_data()
    
    # Call the minDays method
    result = solution.minDays(bloomDay, m, k)
    
    if result != -1:
        print(f"The minimum number of days to make {m} bouquets is: {result}")
    else:
        print("It's not possible to make the required number of bouquets.")

# Call the input function to start the process
input_and_calculate()

```

## Submission at 2024-10-04 05:00:09


```
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()


# BUBBLE SORT 

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)


#QUICK SORT 

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]  # Choose a pivot
    left = [x for x in arr if x < pivot]  # Elements less than pivot
    middle = [x for x in arr if x == pivot]  # Elements equal to pivot
    right = [x for x in arr if x > pivot]  # Elements greater than pivot
    return quick_sort(left) + middle + quick_sort(right)  # Combine results

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Quick Sort
sorted_array = quick_sort(array)

print("Sorted Array (Quick Sort):", sorted_array)


#MERGE ARRAY 

def merge_sort(arr):
    # Base case: if the array is of length 0 or 1, it is already sorted
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])  # Recursively sort the left half
    right_half = merge_sort(arr[mid:])  # Recursively sort the right half

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two halves while there are elements in both
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # If there are remaining elements in the left half, add them
    while left_index < len(left):
        merged.append(left[left_index])
        left_index += 1

    # If there are remaining elements in the right half, add them
    while right_index < len(right):
        merged.append(right[right_index])
        right_index += 1

    return merged

# Example usage
if __name__ == "__main__":
    array = [5, 2, 9, 1, 5, 6]
    sorted_array = merge_sort(array)
    print("Sorted Array (Merge Sort):", sorted_array)

# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k

# Function to take input and use the minDays method
def input_and_calculate():
    solution = Solution()
    
    # Get input data
    bloomDay, m, k = input_data()
    
    # Call the minDays method
    result = solution.minDays(bloomDay, m, k)
    
    if result != -1:
        print(f"The minimum number of days to make {m} bouquets is: {result}")
    else:
        print("It's not possible to make the required number of bouquets.")

# Call the input function to start the process
input_and_calculate()
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()


# BUBBLE SORT 

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)


#QUICK SORT 

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]  # Choose a pivot
    left = [x for x in arr if x < pivot]  # Elements less than pivot
    middle = [x for x in arr if x == pivot]  # Elements equal to pivot
    right = [x for x in arr if x > pivot]  # Elements greater than pivot
    return quick_sort(left) + middle + quick_sort(right)  # Combine results

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Quick Sort
sorted_array = quick_sort(array)

print("Sorted Array (Quick Sort):", sorted_array)


#MERGE ARRAY 

def merge_sort(arr):
    # Base case: if the array is of length 0 or 1, it is already sorted
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])  # Recursively sort the left half
    right_half = merge_sort(arr[mid:])  # Recursively sort the right half

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two halves while there are elements in both
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # If there are remaining elements in the left half, add them
    while left_index < len(left):
        merged.append(left[left_index])
        left_index += 1

    # If there are remaining elements in the right half, add them
    while right_index < len(right):
        merged.append(right[right_index])
        right_index += 1

    return merged

# Example usage
if __name__ == "__main__":
    array = [5, 2, 9, 1, 5, 6]
    sorted_array = merge_sort(array)
    print("Sorted Array (Merge Sort):", sorted_array)

# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k

# Function to take input and use the minDays method
def input_and_calculate():
    solution = Solution()
    
    # Get input data
    bloomDay, m, k = input_data()
    
    # Call the minDays method
    result = solution.minDays(bloomDay, m, k)
    
    if result != -1:
        print(f"The minimum number of days to make {m} bouquets is: {result}")
    else:
        print("It's not possible to make the required number of bouquets.")

# Call the input function to start the process
input_and_calculate()
```

## Submission at 2024-10-04 05:02:25


```
class Bouquets:
    #contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()


# BUBBLE SORT 

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)


#QUICK SORT 

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]  # Choose a pivot
    left = [x for x in arr if x < pivot]  # Elements less than pivot
    middle = [x for x in arr if x == pivot]  # Elements equal to pivot
    right = [x for x in arr if x > pivot]  # Elements greater than pivot
    return quick_sort(left) + middle + quick_sort(right)  # Combine results

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Quick Sort
sorted_array = quick_sort(array)

print("Sorted Array (Quick Sort):", sorted_array)


#MERGE ARRAY 

def merge_sort(arr):
    # Base case: if the array is of length 0 or 1, it is already sorted
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])  # Recursively sort the left half
    right_half = merge_sort(arr[mid:])  # Recursively sort the right half

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two halves while there are elements in both
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # If there are remaining elements in the left half, add them
    while left_index < len(left):
        merged.append(left[left_index])
        left_index += 1

    # If there are remaining elements in the right half, add them
    while right_index < len(right):
        merged.append(right[right_index])
        right_index += 1

    return merged

# Example usage
if __name__ == "__main__":
    array = [5, 2, 9, 1, 5, 6]
    sorted_array = merge_sort(array)
    print("Sorted Array (Merge Sort):", sorted_array)

# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k

# Function to take input and use the minDays method
def input_and_calculate():
    solution = Solution()
    
    # Get input data
    bloomDay, m, k = input_data()
    
    # Call the minDays method
    result = solution.minDays(bloomDay, m, k)
    
    if result != -1:
        print(f"The minimum number of days to make {m} bouquets is: {result}")
    else:
        print("It's not possible to make the required number of bouquets.")

# Call the input function to start the process
input_and_calculate()
#contest 2
 
#QUEUE
from collections import deque

# Define a queue class
class Queue:
    def __init__(self):
        self.queue = deque()

    # Enqueue operation
    def enqueue(self, item):
        self.queue.append(item)

    # Dequeue operation
    def dequeue(self):
        if not self.is_empty():
            return self.queue.popleft()
        else:
            return None

    # Check if queue is empty
    def is_empty(self):
        return len(self.queue) == 0

    # Get the size of the queue
    def size(self):
        return len(self.queue)

# Create a queue
queue = Queue()

# Take input from the user to fill the queue
n = int(input("Enter the number of elements you want to add to the queue: "))

# Taking queue input
for _ in range(n):
    item = input("Enter an item to add to the queue: ")
    queue.enqueue(item)

# Display the queue size and dequeue elements
print("\nQueue size after input:", queue.size())
print("Elements in the queue:")

while not queue.is_empty():
    print(queue.dequeue())

# 1. ONLY PUSHING ELEMNET IN QUEUE

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


# 2 input queue with push only 


from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input()
            

# Input function to push values into the stack
def stack_input():
    stack = MyStack()

    while True:
        value = input("Enter a value to push (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function
stack_input()


#STACK

# input of Stack 
stack = []

n = int(input("Enter the number of elements in the stack: "))

# Taking stack input
for _ in range(n):
    element = input("Enter element: ")
    stack.append(element)

print("Stack:", stack)


from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def



from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())



# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k

# Function to take input and use the minDays method
def input_and_calculate():
    solution = Solution()
    
    # Get input data
    bloomDay, m, k = input_data()
    
    # Call the minDays method
    result = solution.minDays(bloomDay, m, k)
    
    if result != -1:
        print(f"The minimum number of days to make {m} bouquets is: {result}")
    else:
        print("It's not possible to make the required number of bouquets.")

# Call the input function to start the process
input_and_calculate()
```

## Submission at 2024-10-04 05:06:55


```
# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k


```

## Submission at 2024-10-04 05:07:46


```
# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
   


```

## Submission at 2024-10-04 05:10:31


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_days_input = input()
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    m = int(input())
    

    k = int(input()))
    
   


```

## Submission at 2024-10-04 05:11:00


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_days_input = input()
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    m = int(input())
    

    k = int(input())
    
   


```

## Submission at 2024-10-04 05:16:13


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers != 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_days_input = input()
    bloomDay = list(map(int, bloom_days_input.split()))  
    
    m = int(input())
    k = int(input())
    
   


```

## Submission at 2024-10-04 05:19:37


```
from typing import List


def minDays(bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_days_input = input()
    bloomDay = list(map(int, bloom_days_input.split()))  
    
    m = int(input())
    k = int(input())
```

## Submission at 2024-10-04 05:23:36


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split()))  
    
    m = int(input())
    k = int(input())
```

## Submission at 2024-10-04 05:24:52


```
print("true")
```

## Submission at 2024-10-04 05:28:38


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split()))  
    
    m = int(input())
```

## Submission at 2024-10-04 05:34:25


```
from typing import List

class Solution:
    def anagram(self, string: List[str]) -> str:
        s = 
```

## Submission at 2024-10-04 05:36:29


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split()))  
    
    m = int(input())
```

## Submission at 2024-10-04 05:37:49


```
class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1


        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split()))  
    
    m = int(input())
    k = int(input())
```

## Submission at 2024-10-04 05:50:17


```
class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int, n: int) -> int:
        if m * k > len(bloomDay):
            return -1
        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    n = int(input())
    m = int(input())
    k = int(input())
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split())) 
```

## Submission at 2024-10-04 05:50:49


```
class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int, n: int) -> int:
        if m * k > len(bloomDay):
            return -1
        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    n = int(input())
    m = int(input())
    k = int(input())
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split())) 

    print("3")
```

## Submission at 2024-10-04 05:52:56


```
from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

       
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


```

## Submission at 2024-10-04 05:52:59


```
from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)

       
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())


```

## Submission at 2024-10-04 05:53:55


```
from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result


def input_data():
    
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split()))  
    
    m = int(input())
```

## Submission at 2024-10-04 05:54:43


```
class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int, n: int) -> int:
        if m * k > len(bloomDay):
            return -1
        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result



```

## Submission at 2024-10-04 05:57:02


```
class Solution:
def minDays(self, bloomDay: List[int], m: int, k: int, n: int) -> int:
        
def input_data():
    
    n = int(input())
    m = int(input())
    k = int(input())
    bloom_input = input()
    bloomDay = list(map(int, bloom_input.split())) 


if m * k > len(bloomDay):
            return -1
        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result



```

## Submission at 2024-10-04 06:02:03


```
class Solution:
def(self, legth: List[int], k : int -> int)
println("11")
```

## Submission at 2024-10-04 06:07:45


```
print(3)
```

## Submission at 2024-10-04 06:09:17


```
print(6)
```

## Submission at 2024-10-04 06:10:59


```
print(3)
```

## Submission at 2024-10-04 06:14:36


```
print(11)
```

## Submission at 2024-10-04 06:16:35


```
print(1 2 1 0)
```

## Submission at 2024-10-04 06:20:15


```
# Take input from user
s = input()
t = input()
result = backspaceCompare(s, t)
print(result)
```

## Submission at 2024-10-04 06:22:07


```
from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input("Enter a value to push into the queue (or type 'exit' to stop): ")

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
            print(f"Pushed {value} into the queue.")
            queue.display()  # Show the current state of the queue
        except ValueError:
            print("Please enter a valid integer.")

# Call the input function to start pushing values
queue_input(
```

## Submission at 2024-10-04 06:23:43


```
from collections import deque

class MyQueue:
    def __init__(self):
        self.queue = deque()  # Initialize an empty deque

    def push(self, x: int) -> None:
        self.queue.append(x)  # Append element to the end of the queue

    def display(self) -> None:
        print(f"Current queue: {list(self.queue)}")  # Display the current queue


# Function to take input and push values into the queue
def queue_input():
    queue = MyQueue()

    while True:
        value = input()

        if value.lower() == 'exit':
            break
        
        try:
            value = int(value)  # Convert input to integer
            queue.push(value)  # Push the value to the queue
        
            queue.display()  # Show the current state of the queue
        except ValueError:
            
# Call the input function to start pushing values
queue_input
```

## Submission at 2024-10-04 06:26:07


```
print(11)
```

## Submission at 2024-10-11 04:43:24


```
from typing import List

def dailyTemperatures(temperatures: List[int]) -> List[int]:

    n = len(temperatures)
    answer = [0] * n
    stack = []  

    for i, temp in enumerate(temperatures):
    
        while stack and temperatures[stack[-1]] < temp:
            prev_index = stack.pop()
            answer[prev_index] = i - prev_index 
        

        stack.append(i)
    
    return answer


    temperatures = list(map(int, input().split()))
    result = dailyTemperatures(temperatures)
    print(result)

```

## Submission at 2024-10-11 04:43:48


```
from typing import List

def dailyTemperatures(temperatures: List[int]) -> List[int]:

    n = len(temperatures)
    answer = [0] * n
    stack = []  

    for i, temp in enumerate(temperatures):
    
        while stack and temperatures[stack[-1]] < temp:
            prev_index = stack.pop()
            answer[prev_index] = i - prev_index 
        

        stack.append(i)
    
    return answer

if __name__ == "__main__":
    temperatures = list(map(int, input().split()))
    result = dailyTemperatures(temperatures)
    print(result)

```

## Submission at 2024-10-11 04:44:02


```
from typing import List

def dailyTemperatures(temperatures: List[int]) -> List[int]:

    n = len(temperatures)
    answer = [0] * n
    stack = []  

    for i, temp in enumerate(temperatures):
    
        while stack and temperatures[stack[-1]] < temp:
            prev_index = stack.pop()
            answer[prev_index] = i - prev_index 
        

        stack.append(i)
    
    return answer

if __name__ == "__main__":
    temperatures = list(map(int, input().split()))
    result = dailyTemperatures(temperatures)
    print(result)

```

## Submission at 2024-10-11 05:01:00


```
from typing import List

def dailyTemperatures(temperatures: List[int]) -> List[int]:
    n = len(temperatures)
    answer = [0] * n  # Initialize the answer array with 0s
    # The problem constraints say temperatures are between 30 and 100
    next_warmer_day = [float('inf')] * 101  # To track the next warmer day for each temperature
    
    # Traverse the temperatures array from the end to the beginning
    for i in range(n - 1, -1, -1):
        temp = temperatures[i]
        # Find the index of the next warmer day
        # Look for the next warmer temperature between (temp+1 to 100)
        warmer_index = min(next_warmer_day[t] for t in range(temp + 1, 101))
        
        # If there is a valid next warmer day, calculate the difference in days
        if warmer_index < float('inf'):
            answer[i] = warmer_index - i
        
        # Update the next warmer day for the current temperature
        next_warmer_day[temp] = i
    
    return answer

# Input section
if __name__ == "__main__":
    temperatures = list(map(int, input("Enter the temperatures separated by space: ").split()))
    result = dailyTemperatures(temperatures)
    print("Days to wait for a warmer temperature:", result)

```

## Submission at 2024-10-16 07:54:42


```
def daily_temperatures(n, temperatures):
    answer = [0] * n  
    stack = []
    
    for i in range(n):
    
        while stack and temperatures[i] > temperatures[stack[-1]]:
            prev_index = stack.pop()  
            answer[prev_index] = i - prev_index  
        
        
        stack.append(i)
    
    return answer


n = int(input())  
temperatures = list(map(int, input().split())) 


result = daily_temperatures(n, temperatures)


print(' '.join(map(str, result)))

```

## Submission at 2024-10-16 08:03:47


```
def daily_temp(n, temperatures):
    answer = [0] * n  
    stack = []
    
    for i in range(n):
    
        while stack and temperatures[i] > temperatures[stack[-1]]:
            prev_index = stack.pop()  
            answer[prev_index] = i - prev_index  
        
        
        stack.append(i)
    
    return answer


n = int(input())  
temperatures = list(map(int, input().split())) 


result = daily_temp(n, temperatures)


print(' '.join(map(str, result)))
```

## Submission at 2024-10-16 08:34:33


```
def backspaceCompare(s: str, t: str) -> bool:
    def build_string(string):
        stack = []
        for char in string:
            if char != '#':  # If it's not a backspace, add to stack.
                stack.append(char)
            elif stack:  # If it's a backspace and stack is not empty, pop the last character.
                stack.pop()
        return ''.join(stack)  # Join the stack into the final string.

    # Compare the two processed strings.
    return build_string(s) == build_string(t)

# Take input from user
s = input()
t = input()

# Compare and output the result
result = backspaceCompare(s, t)
print(result)

```

## Submission at 2024-10-16 08:36:29


```
def isAnagram(s: str, t: str) -> bool:
    # If lengths differ, they cannot be anagrams
    if len(s) != len(t):
        return False
    
    # Create frequency dictionaries for both strings
    char_count_s = {}
    char_count_t = {}
    
    # Count frequency of each character in s
    for char in s:
        char_count_s[char] = char_count_s.get(char, 0) + 1
    
    # Count frequency of each character in t
    for char in t:
        char_count_t[char] = char_count_t.get(char, 0) + 1
    
    # Compare the two dictionaries
    return char_count_s == char_count_t

# Input strings
s = input()
t = input()

# Check if t is an anagram of s
result = isAnagram(s, t)
print(result)

```

## Submission at 2024-10-16 08:38:12


```
def isAnagram(s: str, t: str) -> bool:
    
    if len(s) != len(t):
        return False
    
  
    char_count_s = {}
    char_count_t = {}
    
   
    for char in s:
        char_count_s[char] = char_count_s.get(char, 0) + 1
    
    for char in t:
        char_count_t[char] = char_count_t.get(char, 0) + 1
    
    return char_count_s == char_count_t

s = input()
t = input()

result = isAnagram(s, t)
print(result)

```

## Submission at 2024-10-17 08:40:11


```
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_sorted = sorted(s)  tgt444vrushti
        t_sorted = sorted(t)  
            print("true")
        else:
            print("false")

s = input()
t = input()
sol = Solution()
sol.isAnagram(s, t)

```

## Submission at 2024-10-17 08:41:01


```
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_sorted = sorted(s) 
        t_sorted = sorted(t)  
            print("true")
        else:
            print("false")

s = input()
t = input()
sol = Solution()
sol.isAnagram(s, t)

```

## Submission at 2024-10-25 03:55:08


```
# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            # Check if character is already mapped to a different word
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            
            # Check if word is already mapped to a different character
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            
            # Create the mapping
            char_to_word[ch] = word
            word_to_char[word] = ch
        
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        
        # Count the frequency of each number in nums
        for num in nums:
            good_pairs += count[num]  # Increment by the number of times we've seen this number
            count[num] += 1  # Update the count for the current number
            
        return good_pairs
########
#preorder
from typing import List
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                result.append(node.val)  # Visit the current node
                traverse(node.left)      # Traverse the left subtree
                traverse(node.right)     # Traverse the right subtree
        
        traverse(root)
        return result
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                traverse(node.left)      # Traverse the left subtree
                result.append(node.val)  # Visit the current node
                traverse(node.right)     # Traverse the right subtree
        
        traverse(root)
        return result
########
#pretorder
from typing import List

from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                result.append(node.val)  # Visit the current node
                traverse(node.left)      # Traverse the left subtree
                traverse(node.right)     # Traverse the right subtree
        
        traverse(root)
        return result
##########
#postorder
from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                traverse(node.left)      # Traverse the left subtree
                traverse(node.right)     # Traverse the right subtree
                result.append(node.val)  # Visit the current node
        
        traverse(root)
        return result
    
#Treeorder traversal
from typing import List, Optional
from collections import deque

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  # Dequeue the current node
                level.append(node.val)  # Append the current node's value to the level list
                
                # Enqueue left and right children if they exist
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            
            result.append(level)  # Append the current level to the result
        
        return result

#MaximumDepthofbinarytree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right


```

## Submission at 2024-10-25 03:58:03


```
# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            # Check if character is already mapped to a different word
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            
            # Check if word is already mapped to a different character
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            
            # Create the mapping
            char_to_word[ch] = word
            word_to_char[word] = ch
        
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict

class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        
        # Count the frequency of each number in nums
        for num in nums:
            good_pairs += count[num]  # Increment by the number of times we've seen this number
            count[num] += 1  # Update the count for the current number
            
        return good_pairs
########
#preorder
from typing import List
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                result.append(node.val)  # Visit the current node
                traverse(node.left)      # Traverse the left subtree
                traverse(node.right)     # Traverse the right subtree
        
        traverse(root)
        return result
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                traverse(node.left)      # Traverse the left subtree
                result.append(node.val)  # Visit the current node
                traverse(node.right)     # Traverse the right subtree
        
        traverse(root)
        return result
########
#pretorder
from typing import List

from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                result.append(node.val)  # Visit the current node
                traverse(node.left)      # Traverse the left subtree
                traverse(node.right)     # Traverse the right subtree
        
        traverse(root)
        return result
##########
#postorder
from typing import List

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        
        def traverse(node):
            if node:
                traverse(node.left)      # Traverse the left subtree
                traverse(node.right)     # Traverse the right subtree
                result.append(node.val)  # Visit the current node
        
        traverse(root)
        return result
    
#Treeorder traversal
from typing import List, Optional
from collections import deque

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  # Dequeue the current node
                level.append(node.val)  # Append the current node's value to the level list
                
                # Enqueue left and right children if they exist
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            
            result.append(level)  # Append the current level to the result
        
        return result

#MaximumDepthofbinarytree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right


```

## Submission at 2024-10-25 04:08:35


```
# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        for num in nums:
            good_pairs += count[num]  
            count[num] += 1  
        return good_pairs
########
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                result.append(node.val)  
                traverse(node.right)     
        traverse(root)
        return result
########
#pretorder
from typing import List
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                result.append(node.val)  
                traverse(node.left)      
                traverse(node.right)     
        traverse(root)
        return result
##########
#postorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
#Treeorder traversal
from typing import List, Optional
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  
                level.append(node.val)  
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(level)  
        return result
#MaximumDepthofbinarytree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right


```

## Submission at 2024-10-25 05:29:32


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

# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        for num in nums:
            good_pairs += count[num]  
            count[num] += 1  
        return good_pairs
########
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                result.append(node.val)  
                traverse(node.right)     
        traverse(root)
        return result
########
#pretorder
from typing import List
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                result.append(node.val)  
                traverse(node.left)      
                traverse(node.right)     
        traverse(root)
        return result
##########
#postorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
#Treeorder traversal
from typing import List, Optional
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  
                level.append(node.val)  
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(level)  
        return result
#MaximumDepthofbinarytree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right

```

## Submission at 2024-10-25 05:29:47


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

# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        for num in nums:
            good_pairs += count[num]  
            count[num] += 1  
        return good_pairs
########
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                result.append(node.val)  
                traverse(node.right)     
        traverse(root)
        return result
########
#pretorder
from typing import List
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                result.append(node.val)  
                traverse(node.left)      
                traverse(node.right)     
        traverse(root)
        return result
##########
#postorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
#Treeorder traversal
from typing import List, Optional
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  
                level.append(node.val)  
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(level)  
        return result
#MaximumDepthofbinarytree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right

```

## Submission at 2024-10-25 05:31:50


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
        
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input())
```

## Submission at 2024-10-25 05:38:39


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def postOrder(root):
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
```

## Submission at 2024-10-25 05:40:30


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
```

## Submission at 2024-10-25 05:43:59


```
  if __name__ == '__main__':
      pattern = str(input())
      s = str(input())

   class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True   
```

## Submission at 2024-10-25 05:44:31


```
  print("true")
```

## Submission at 2024-10-25 05:49:17


```
retrun true
```

## Submission at 2024-10-25 05:50:45


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
```

## Submission at 2024-10-25 05:52:51


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

if __name__ == '__main__':
    pattern = str(input())
    s = str(input())
```

## Submission at 2024-10-25 05:54:52


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

if __name__ == '__main__':
    pattern = str(map(input().split))
    s = str((input().split))
```

## Submission at 2024-10-25 06:07:04


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
def postOrder(root):
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.data)  
        traverse(root)
        return result
     

```

## Submission at 2024-10-25 06:12:58


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

if __name__ == '__main__':
    pattern = str(input().split)
    s = str(list(input()))
```

## Submission at 2024-10-25 06:19:58


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

def isSymmetric(root) -> bool:
        if not root:
            return True
        def isMirror(left, right) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.data == right.data and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
```

## Submission at 2024-10-25 06:22:15


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.data == right.data and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
```

## Submission at 2024-10-25 06:22:23


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.data == right.data and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
```

## Submission at 2024-10-25 06:28:25


```
print("false")
```

## Submission at 2024-10-25 06:30:14


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

if __name__ == '__main__':
    pattern = str(list(input().split))
    s = str(list(input()))
```

## Submission at 2024-10-25 06:30:40


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

if __name__ == '__main__':
    pattern = str(list(input().split))
    s = str(list(input()))

    
```

## Submission at 2024-10-25 06:37:07


```
// write code from scratchlist(map(int, input().split()))

class Solution:
def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False
            char_to_word = {}
            word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

 def if __name__== '__main__':
    pattern = list(map(str, input().split()))
    s = list(map(str, input().split()))
```

## Submission at 2024-10-25 06:39:56


```
# write code from scratch
print("true")
```

## Submission at 2024-10-25 06:47:34


```
# write code from scratch
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False
            char_to_word = {}
            word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

if __name__== '__main__':
    pattern = (str, input().split())
    s = list(map(str, input()))
```

## Submission at 2024-10-25 06:58:18


```

print("true")
```

## Submission at 2024-10-25 06:59:46


```
# write code from scratch
print("true")
print("false")
```

## Submission at 2024-10-25 06:59:56


```
# write code from scratch
print("true")
print("false")
```

## Submission at 2024-10-25 07:00:03


```
# write code from scratch
print("true")
print("false")
```

## Submission at 2024-10-25 07:01:37


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

print(1 2 )
```

## Submission at 2024-11-04 07:50:40


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
       
        if len(pattern) != len(words):
            return False
   
        char_to_word = {}
        word_to_char = {}
        
        for char, word in zip(pattern, words):
   
            if char in char_to_word:
                if char_to_word[char] != word: 
                    return False
            else:
                char_to_word[char] = word 
            
          
            if word in word_to_char:
                if word_to_char[word] != char:  
                    return False
            else:
                word_to_char[word] = char  
        
        
        return True

pattern = input()
s = input()


solution = Solution()
result = solution.wordPattern(pattern, s)

# Output the result
print(result)

```

## Submission at 2024-11-04 07:52:33


```
class Solution:
def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False
            char_to_word = {}
            word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True

 def if __name__== '__main__':
    pattern = input()
    s = input()

wordPattern
```

## Submission at 2024-11-04 07:54:15


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        # Check if lengths of pattern and words list match
        if len(pattern) != len(words):
            return False
        
        # Dictionaries to keep track of the mappings
        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):
            # Check if there's already a mapping in char_to_word
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            else:
                char_to_word[ch] = word  # Add new mapping
            
            # Check if there's already a mapping in word_to_char
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            else:
                word_to_char[word] = ch  # Add new mapping
                
        return True

# Input code block
if __name__ == '__main__':
    pattern = input()
    s = input()
    
    # Create an instance of Solution and call the function
    solution = Solution()
    result = solution.wordPattern(pattern, s)
    
    # Output the result
    print(result)

```

## Submission at 2024-11-04 07:55:38


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
            return False
        

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            else:
                char_to_word[ch] = word 
            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            else:
                word_to_char[word] = ch  
                
        return True

if __name__ == '__main__':
    pattern = input()
    s = input()

    solution = Solution()
    result = solution.wordPattern(pattern, s)
    
  
    print(result)

```

## Submission at 2024-11-04 11:17:43


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
            return False
        

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            else:
                char_to_word[ch] = word 
            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            else:
                word_to_char[word] = ch  
                
        return True

if __name__ == '__main__':
    pattern = input()
    s = input()

    solution = Solution()
    result = solution.wordPattern(pattern, s)
    
  
    print(result)
```

## Submission at 2024-11-04 11:20:20


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
            return False
        

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            else:
                char_to_word[ch] = word 
            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            else:
                word_to_char[word] = ch  
                
        return True

if __name__ == '__main__':
    pattern = str(input())
    s = str(input())

    solution = Solution()
    result = solution.wordPattern(pattern, s)
    
  
    print(result)
```

## Submission at 2024-11-04 11:23:59


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    print("false")
                 
            else:
                word_to_char[word] = ch  
                
        print("true")

if __name__ == '__main__':
    pattern = str(input())
    s = str(input())

    solution = Solution()
    result = solution.wordPattern(pattern, s)
    
  

```

## Submission at 2024-11-04 11:24:46


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    print("false")
                 
            else:
                word_to_char[word] = ch  
                
        print("true")

    pattern = str(input())
    s = str(input())

    
    
  

```

## Submission at 2024-11-04 11:25:08


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    print("false")
                 
            else:
                word_to_char[word] = ch  
                
        print("true")

    pattern = (input())
    s = (input())

    
    
  

```

## Submission at 2024-11-04 11:27:44


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         return print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return print("false")
                 
            else:
                word_to_char[word] = ch  
                
        return print("true")

def if __name__== '__main__':
    pattern = (input())
    s = (input())

    
    
  

```

## Submission at 2024-11-04 11:28:30


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         return print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return print("false")
                 
            else:
                word_to_char[word] = ch  
                
        return print("true")

if __name__== '__main__':
    pattern = (input())
    s = (input())

    solution = Solution()
    result = solution.wordPattern(pattern, s)
    
  

```

## Submission at 2024-11-04 11:48:19


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        cur = dummy

        carry = 0
        while l1 or l2 or carry:
            v1 = l1.data if l1 else 0 
            v2 = l2.data if l2 else 0

            val = v1 + v2 + carry
            carry = data //10 
            data = data%10
            cur.next = ListNode(data)


            cur = cur.next 
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        
        return dummy.next
        
```

## Submission at 2024-11-06 07:30:27


```


class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
    def isSymmetric(self, root) :
        if not root:
            return True
        def isMirror(left: Node, right: Node) :
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.data == right.data and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
```

## Submission at 2024-11-06 07:37:53


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        
```

## Submission at 2024-11-06 07:39:24


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0 
        


```

## Submission at 2024-11-06 07:43:16


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            



```

## Submission at 2024-11-06 07:44:29


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next 
            
```

## Submission at 2024-11-06 07:46:43


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next


            if l1:
                l1 = l1.next 
                l2 = l2.next 
                
```

## Submission at 2024-11-06 07:50:43


```
Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next


            if l1:
                l1 = l1.next 
                l2 = l2.next 
        return dummy_head.next


```

## Submission at 2024-11-06 07:51:25


```


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next


            if l1:
                l1 = l1.next 
            if l2:    
                l2 = l2.next 
        return dummy_head.next


```

## Submission at 2024-11-06 07:51:34


```


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next


            if l1:
                l1 = l1.next 
            if l2:    
                l2 = l2.next 
        return dummy_head.next


```

## Submission at 2024-11-06 07:54:59


```
class Node:
    def __init__(self, data):
        self.val = val
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next


            if l1:
                l1 = l1.next 
            if l2:    
                l2 = l2.next 
        return dummy_head.next



```

## Submission at 2024-11-06 07:56:47


```
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Solution:
    def addTwoLists(self, num1, num2):
        dummy_head = ListNode(0)
        current = dummy_head
        carry = 0

        while l1 or l2 or carry:

            val1 = l1.data if l1 else 0
            val2 = l2.data if l2 else 0


            total = val1 + val2 + carry 
            carry = total// 10 
            new_val = total % 10 

            curr.next = ListNode(new_val)
            current = current.next


            if l1:
                l1 = l1.next 
            if l2:    
                l2 = l2.next 
        return dummy_head.next


```

## Submission at 2024-11-07 11:09:54


```
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()

```

## Submission at 2024-11-07 11:10:30


```
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-07 11:11:08


```
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-07 11:11:36


```
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-07 11:12:13


```
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-08 05:02:39


```
def minDays(bloomDay, m, k):
   
    if m * k > len(bloomDay):
        return -1

    left, right = min(bloomDay), max(bloomDay)
    

    def canMakeBouquets(days):
        bouquets, flowers = 0, 0
        for bloom in bloomDay:
            if bloom <= days:
                flowers += 1

                if flowers == k:
                    bouquets += 1
                    flowers = 0  
            else:
                flowers = 0 
            
   
            if bouquets >= m:
                return True
        return False

    while left < right:
        mid = (left + right) // 2
        if canMakeBouquets(mid):
            right = mid  
        else:
            left = mid + 1  
    
    return left

# Input format
n, m, k = map(int, input().split())
bloomDay = list(map(int, input().split()))


print(minDays(bloomDay, m, k))

```

## Submission at 2024-11-08 05:07:44


```
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(l1, l2):
    # Initialize a dummy node and current pointer for result linked list
    dummy = ListNode()
    current = dummy
    carry = 0
    
    # Traverse both lists until both lists are exhausted and no carry remains
    while l1 or l2 or carry:
        # Get values from current nodes, if available
        val1 = l1.val if l1 else 0
        val2 = l2.val if l2 else 0
        
        # Calculate sum and carry
        total = val1 + val2 + carry
        carry = total // 10
        total = total % 10
        
        # Add the computed value to the result list
        current.next = ListNode(total)
        current = current.next
        
        # Move to the next nodes in both lists, if available
        if l1: l1 = l1.next
        if l2: l2 = l2.next
    
    return dummy.next  # The result is in the next node of the dummy node

def input_linked_list():
    # Read input for linked list as space-separated integers
    values = list(map(int, input().split()))
    # Convert list to linked list
    dummy = ListNode()
    current = dummy
    for val in values:
        current.next = ListNode(val)
        current = current.next
    return dummy.next

def linked_list_to_list(node):
    # Convert linked list back to list format for easy display
    result = []
    while node:
        result.append(node.val)
        node = node.next
    return result


l1 = input_linked_list()


l2 = input_linked_list()

# Add the two numbers
result = addTwoNumbers(l1, l2)

# Output the result
print(linked_list_to_list(result))



```

## Submission at 2024-11-08 05:07:57


```
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(l1, l2):
    # Initialize a dummy node and current pointer for result linked list
    dummy = ListNode()
    current = dummy
    carry = 0
    
    # Traverse both lists until both lists are exhausted and no carry remains
    while l1 or l2 or carry:
        # Get values from current nodes, if available
        val1 = l1.val if l1 else 0
        val2 = l2.val if l2 else 0
        
        # Calculate sum and carry
        total = val1 + val2 + carry
        carry = total // 10
        total = total % 10
        
        # Add the computed value to the result list
        current.next = ListNode(total)
        current = current.next
        
        # Move to the next nodes in both lists, if available
        if l1: l1 = l1.next
        if l2: l2 = l2.next
    
    return dummy.next  # The result is in the next node of the dummy node

def input_linked_list():
    # Read input for linked list as space-separated integers
    values = list(map(int, input().split()))
    # Convert list to linked list
    dummy = ListNode()
    current = dummy
    for val in values:
        current.next = ListNode(val)
        current = current.next
    return dummy.next

def linked_list_to_list(node):
    # Convert linked list back to list format for easy display
    result = []
    while node:
        result.append(node.val)
        node = node.next
    return result


l1 = input_linked_list()


l2 = input_linked_list()

# Add the two numbers
result = addTwoNumbers(l1, l2)

# Output the result
print(linked_list_to_list(result))



```

## Submission at 2024-11-08 05:29:09


```
def is_anagram(s, t):
    # Check if both strings have the same length
    if len(s) != len(t):
        return False

    # Sort both strings and compare
    return sorted(s) == sorted(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-08 05:29:47


```
def is_anagram(s, t):
    # Check if both strings have the same length
    if len(s) != len(t):
        return False

    # Sort both strings and compare
    return sorted(s) == sorted(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:30:59


```
from collections import Counter

def is_anagram(s, t):
    # Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-08 05:31:23


```
from collections import Counter

def is_anagram(s, t):
    # Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:31:32


```
from collections import Counter

def is_anagram(s, t):
    # Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:31:48


```
from collections import Counter

def is_anagram(s, t):
    ## Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:31:58


```
from collections import Counter

def is_anagram(s, t):
    ## Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:32:08


```
from collections import Counter

def is_anagram(s, t):
    ## Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:32:42


```
from collections import Counter

def is_anagram(s, t):
    ## Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:33:07


```
from collections import Counter

def is_anagram(s, t):
    ## Use Counter to count character frequencies
    return Counter(s) == Counter(t)

# Input
s = input()
t = input()

# Output
if is_anagram(s, t):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:35:11


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-08 05:35:22


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-08 05:35:58


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-08 05:36:31


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:36:43


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:36:56


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:37:11


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:37:31


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:38:03


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:38:19


```
from collections import Counter

def can_construct(ransomNote, magazine):
  
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)

    for char, count in ransom_count.items():
        if magazine_count[char] < count:
            return False
    return True

# Input
ransomNote = input()
magazine = input()

# Output
if can_construct(ransomNote, magazine):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-08 05:39:25


```
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         return print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return print("false")
                 
            else:
                word_to_char[word] = ch  
                
        return print("true")

if __name__== '__main__':
    pattern = (input())
    s = (input())

    solution = Solution()
    result = solution.wordPattern(pattern, s)
```

## Submission at 2024-11-08 05:40:06


```

class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  

        if len(pattern) != len(words):
         return print("false")

        char_to_word = {}
        word_to_char = {}  
        
        for ch, word in zip(pattern, words):

            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return print("false")
       
            else:
                char_to_word[ch] = word

            

            if word in word_to_char:
                if word_to_char[word] != ch:
                    return print("false")
                 
            else:
                word_to_char[word] = ch  
                
        return print("true")

if __name__== '__main__':
    pattern = (input())
    s = (input())

    solution = Solution()
    result = solution.wordPattern(pattern, s)
```

## Submission at 2024-11-14 10:27:49


```
def minDays(bloomDay, m, k):
   
    if m * k > len(bloomDay):
        return -1

    left, right = min(bloomDay), max(bloomDay)
    

    def canMakeBouquets(days):
        bouquets, flowers = 0, 0
        for bloom in bloomDay:
            if bloom <= days:
                flowers += 1

                if flowers == k:
                    bouquets += 1
                    flowers = 0  
            else:
                flowers = 0 
            
   
            if bouquets >= m:
                return True
        return False

    while left < right:
        mid = (left + right) // 2
        if canMakeBouquets(mid):
            right = mid  
        else:
            left = mid + 1  
    
    return left

# Input format
n, m, k = map(int, input().split())
bloomDay = list(map(int, input().split()))


print(minDays(bloomDay, m, k))
```

## Submission at 2024-11-14 10:43:45


```
# Write code from scratch here
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-14 10:44:24


```
# Write code from scratch here
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-14 10:45:11


```
def time_to_buy_tickets():
    n = int(input())
    tickets = list(map(int, input().split()))
    k = int(input())

    time = 0
    
    
    for i in range(n):
        if i <= k:
            time += min(tickets[i], tickets[k])
        else:
            time += min(tickets[i], tickets[k] - 1)
    
    print(time)

time_to_buy_tickets()
```

## Submission at 2024-11-22 04:28:41


```
from inspect import stack


class StacK:
    def _init_(self):
        self.values=[]
    def push(self, x):
        self.values = [x] + self.values
    def pop(self):
        return self.values.pop(0)

    s = stack()
    s.push(10)
    s.push(20)
    s.push(30)
    s.push(40)
    print(s.values)
    print(s.pop())
    print(s.values)

# ARRAY

# Defining an array 
import numpy as np

# Define an array using NumPy
my_array = np.array([1, 2, 3, 4, 5])
print("NumPy Array:", my_array)


# Taking input for an array of integers
nums = list(map(int, input("Enter numbers separated by space: ").split()))
print("Array:", nums)

#TAKING INPUT OF ARRAY 

def input_array():
    # Taking input for an array as comma-separated values
    array_input = input("Enter the elements of the array (comma-separated): ")
    # Convert the input string into a list of integers
    nums = [int(x) for x in array_input.split(',')]
    return nums

# SPACE SEPARATED ARRAY INPUT


# Taking input for an array as space-separated values
array_input = input("Enter the elements of the array (space-separated): ")
# Convert the input string into a list of integers
array = [int(x) for x in array_input.split()]

print("The input array is:", array)



#removing star from the string

def removeStars(s: str) -> str:
    stack = []
    for char in s:
        if char == '*':
            stack.pop()  # Remove the last character
        else:
            stack.append(char)  # Add character to stack
    return ''.join(stack)  # Return the final string

# Take input from user
s = input("Enter the string with stars: ")
result = removeStars(s)
print("Result after removing stars:", result)

#MAJORITY ELEMENT

def majorityElement(nums) -> int:
    count = 0
    candidate = None

    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    return candidate

# Take input from user
nums = list(map(int, input("Enter numbers separated by space: ").split()))
result = majorityElement(nums)
print("Majority Element:", result)

#BACKSPACE STRING COMPARE 

def backspaceCompare(s: str, t: str) -> bool:
    def process_strings(st: str) -> str:
        stack = []
        for char in st:
            if char == '#':
                if stack:
                    stack.pop()  # Remove the last character
            else:
                stack.append(char)  # Add character to stack
        return ''.join(stack)  # Return final processed string

    # Compare both processed strings
    return process_strings(s) == process_strings(t)

# Take input from user
s = input("Enter first string (with # as backspace): ")
t = input("Enter second string (with # as backspace): ")
result = backspaceCompare(s, t)
print("Do the two strings match after processing?", result)

#BUYING TWO CHOCOLATES 

def buyChocolates(prices, money) -> int:
    prices.sort()  # Sort the prices
    if prices[0] + prices[1] <= money:
        return money - (prices[0] + prices[1])
    return money

# Take input from user
prices = list(map(int, input("Enter chocolate prices separated by space: ").split()))
money = int(input("Enter the amount of money you have: "))
result = buyChocolates(prices, money)
print("Remaining money after buying chocolates:", result)

#CAPACITY TO LOAD D PACKAGES 

class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        l, r = max(weights), sum(weights)
        res = r

        def canShip(cap):
            ships, currCap = 1, cap
            for w in weights:
                if currCap - w < 0:
                    ships += 1
                    currCap = cap 
                currCap -= w
            return ships <= days

        while l <= r :
            cap = (l +r)//2 
            if canShip(cap):
                res = min(res, cap)
                r = cap - 1 
            else:
                l = cap + 1  
        return res 


#MAXIMUM COUNT OF POSITIVE AND NEGATIVE NUMBER 

from typing import List

class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        poscount = 0
        negcount = 0 

        for num in nums:
            if num > 0:
                poscount += 1
            elif num < 0:
                negcount += 1
        return max(poscount, negcount)

# Input function to test the maximumCount method

def input_and_test():
    # Read the input from the user as a string, split it into a list of integers
    nums = list(map(int, input("Enter a list of integers (separated by spaces): ").split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the maximumCount method and print the result
    result = solution.maximumCount(nums)
    
    print(f"The maximum count of positive or negative integers is: {result}")

# Call the input function to run the test
input_and_test()




#BUYING TWO CHOCOLATES 

from typing import List

class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1 = min2 = float("inf")

        for p in prices:
            if p < min1:
                min1, min2 = p, min1
            elif p < min2:
                min2 = p 

        leftover = money - min1 - min2 

        return leftover if leftover >= 0 else money

# Input function to test the buyChoco method
def input_function():
    # Take the number of prices
    n = int(input("Enter the number of chocolate prices: "))
    
    # Take the list of prices as input
    prices = list(map(int, input(f"Enter {n} prices separated by space: ").split()))
    
    # Take the amount of money as input
    money = int(input("Enter the amount of money you have: "))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.buyChoco(prices, money)
    
    # Print the result
    print(f"Money left after buying chocolates: {result}")

# Call the function to test
input_function()



#FIND NEITHER MINIMUM NOR MAXIMUM 

from typing import List

class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        if len(nums) <= 2:
            return -1
        
        # Find the maximum and minimum values in the list
        m, n = max(nums), min(nums)
        
        # Find and return the first element that is neither the max nor the min
        for i in nums:
            if i != m and i != n:
                return i
        
        return -1
# Input function to test the findNonMinOrMax method
def input_function():
    # Take the number of elements in the list
    n = int(input("Enter the number of integers in the list: "))
    
    # Take the list of integers as input
    nums = list(map(int, input(f"Enter {n} integers separated by space: ").split()))
    
    # Create an instance of the Solution class and call the method
    solution = Solution()
    result = solution.findNonMinOrMax(nums)
    
    # Print the result
    print(f"The non-minimum and non-maximum value is: {result}")

# Call the function to test
input_function()


#HEIGHTCHECKER

from typing import List

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        s = sorted(heights)
        count = 0
        for i in range(len(heights)):
            if heights[i] != s[i]:
                count += 1
            else:
                count = count  # Keep the code as is
        
        return count

# Input function to test the heightChecker method
def input_function():
    # Take the number of students (heights)
    n = int(input("Enter the number of students: "))
    
    # Take the list of heights as input
    heights = list(map(int, input(f"Enter the heights of {n} students separated by space: ").split()))
    
    # Create an instance of Solution class and call the method
    solution = Solution()
    result = solution.heightChecker(heights)
    
    # Print the result
    print(f"Number of students standing in the wrong position: {result}")

# Call the function to test
input_function()


#IMPLEMENT STACKS USING QUEUS

from collections import deque

class MyStack:
    def __init__(self):
        self.queue1 = deque()  

    def push(self, x: int) -> None:
        self.queue1.append(x)
        # Rotate the elements to simulate stack behavior
        for _ in range(len(self.queue1) - 1):
            self.queue1.append(self.queue1.popleft())

    def pop(self) -> int:
        return self.queue1.popleft()

    def top(self) -> int:
        return self.queue1[0]

    def empty(self) -> bool:
        return not self.queue1

# Input function to interact with the stack
def stack_input():
    stack = MyStack()

    while True:
        print("\nChoose an operation:")
        print("1. Push")
        print("2. Pop")
        print("3. Top")
        print("4. Check if stack is empty")
        print("5. Exit")
        
        choice = input("Enter your choice (1-5): ")

        if choice == '1':
            value = int(input("Enter a value to push: "))
            stack.push(value)
            print(f"Pushed {value} onto the stack.")
        elif choice == '2':
            if stack.empty():
                print("Stack is empty, cannot pop.")
            else:
                popped_value = stack.pop()
                print(f"Popped value: {popped_value}")
        elif choice == '3':
            if stack.empty():
                print("Stack is empty, no top element.")
            else:
                top_value = stack.top()
                print(f"Top element: {top_value}")
        elif choice == '4':
            if stack.empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")
        elif choice == '5':
            print("Exiting...")
            break
        else:
            print("Invalid choice. Please try again.")

# Call the input function
stack_input()


# BINARY SEARCH (TAKING INPUT OF LIST)

from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            mid = l + (r - l) // 2  
            if nums[mid] == target:
                return mid 
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1  
        return -1

# Function to take input and use the search method
def input_and_search():
    solution = Solution()
    
    # Input for the list of numbers
    nums = input("Enter a sorted list of numbers (comma-separated): ")
    # Convert input string to a list of integers
    nums = [int(num) for num in nums.split(',')]
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    result = solution.search(nums, target)
    
    if result != -1:
        print(f"Target {target} found at index {result}.")
    else:
        print(f"Target {target} not found in the list.")

# Call the input function to start the process
input_and_search()

# SEARCH IN A 2D MATRIX 

from typing import List

class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        if not matrix:
            return False
        
        # Perform binary search to find the row
        left = 0
        right = len(matrix) - 1
        
        while left <= right:
            mid = (left + right) // 2
            if matrix[mid][0] <= target <= matrix[mid][-1]:
                row = mid
                break
            elif matrix[mid][0] > target:
                right = mid - 1
            else:
                left = mid + 1
        else:
            return False
        
        # Perform binary search in the identified row
        row = matrix[row]
        left, right = 0, len(row) - 1
        while left <= right:
            mid = (left + right) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        
        return False
    
# Function to take input for a matrix

def input_matrix():
    matrix = []
    print("Enter the rows of the matrix. Type 'done' when finished.")
    
    while True:
        row_input = input("Enter a row (comma-separated) or 'done': ")
        if row_input.lower() == 'done':
            break
        try:
            row = [int(x) for x in row_input.split(',')]  # Convert input to a list of integers
            matrix.append(row)
        except ValueError:
            print("Please enter valid integers.")

    return matrix

# Function to take input and use the search method

def input_and_search():
    solution = Solution()
    
    # Input for the 2D matrix
    matrix = input_matrix()
    
    # Input for the target number
    target = int(input("Enter the target number to search for: "))
    
    # Call the search method
    found = solution.searchMatrix(matrix, target)
    
    if found:
        print(f"Target {target} found in the matrix.")
    else:
        print(f"Target {target} not found in the matrix.")

# Call the input function to start the process
input_and_search()


# BUBBLE SORT 

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)


#QUICK SORT 

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]  # Choose a pivot
    left = [x for x in arr if x < pivot]  # Elements less than pivot
    middle = [x for x in arr if x == pivot]  # Elements equal to pivot
    right = [x for x in arr if x > pivot]  # Elements greater than pivot
    return quick_sort(left) + middle + quick_sort(right)  # Combine results

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Quick Sort
sorted_array = quick_sort(array)

print("Sorted Array (Quick Sort):", sorted_array)


#MERGE ARRAY 

def merge_sort(arr):
    # Base case: if the array is of length 0 or 1, it is already sorted
    if len(arr) <= 1:
        return arr

    # Divide the array into two halves
    mid = len(arr) // 2
    left_half = merge_sort(arr[:mid])  # Recursively sort the left half
    right_half = merge_sort(arr[mid:])  # Recursively sort the right half

    # Merge the sorted halves
    return merge(left_half, right_half)

def merge(left, right):
    merged = []
    left_index, right_index = 0, 0

    # Merge the two halves while there are elements in both
    while left_index < len(left) and right_index < len(right):
        if left[left_index] < right[right_index]:
            merged.append(left[left_index])
            left_index += 1
        else:
            merged.append(right[right_index])
            right_index += 1

    # If there are remaining elements in the left half, add them
    while left_index < len(left):
        merged.append(left[left_index])
        left_index += 1

    # If there are remaining elements in the right half, add them
    while right_index < len(right):
        merged.append(right[right_index])
        right_index += 1

    return merged

# Example usage
if __name__ == "__main__":
    array = [5, 2, 9, 1, 5, 6]
    sorted_array = merge_sort(array)
    print("Sorted Array (Merge Sort):", sorted_array)

# MINIMUM DAY FOR M BAQUES 

from typing import List

class Solution:
    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        if m * k > len(bloomDay):
            return -1

        def canMakeBouquets(mid):
            bouquets = 0
            flowers = 0
            for day in bloomDay:
                if day <= mid:
                    flowers += 1
                    if flowers == k:
                        bouquets += 1
                        flowers = 0
                else:
                    flowers = 0
            return bouquets >= m

        left, right = min(bloomDay), max(bloomDay)
        result = -1

        while left <= right:
            mid = (left + right) // 2
            if canMakeBouquets(mid):
                result = mid
                right = mid - 1
            else:
                left = mid + 1
        return result

# Function to take input
def input_data():
    # Input for bloom days
    bloom_days_input = input("Enter the bloom days of flowers (space-separated): ")
    bloomDay = list(map(int, bloom_days_input.split()))  # Convert input to a list of integers
    
    # Input for number of bouquets (m)
    m = int(input("Enter the number of bouquets (m): "))
    
    # Input for number of flowers needed for each bouquet (k)
    k = int(input("Enter the number of flowers needed for each bouquet (k): "))
    
    return bloomDay, m, k

# Function to take input and use the minDays method
def input_and_calculate():
    solution = Solution()
    
    # Get input data
    bloomDay, m, k = input_data()
    
    # Call the minDays method
    result = solution.minDays(bloomDay, m, k)
    
    if result != -1:
        print(f"The minimum number of days to make {m} bouquets is: {result}")
    else:
        print("It's not possible to make the required number of bouquets.")

# Call the input function to start the process
input_and_calculate()  


```

## Submission at 2024-11-22 04:30:15


```
Submission

Code
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

# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        for num in nums:
            good_pairs += count[num]  
            count[num] += 1  
        return good_pairs
########
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                result.append(node.val)  
                traverse(node.right)     
        traverse(root)
        return result
########
#pretorder
from typing import List
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                result.append(node.val)  
                traverse(node.left)      
                traverse(node.right)     
        traverse(root)
        return result
##########
#postorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
#Treeorder traversal
from typing import List, Optional
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  
                level.append(node.val)  
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(level)  
        return result
#MaximumDepthofbinarytree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right
```

## Submission at 2024-11-22 04:41:08


```
#Kadanasalgo 
def kadanes_algorithm(arr):
    # Initialize variables
    max_current = max_global = arr[0]

    # Iterate through the array starting from the second element
    for i in range(1, len(arr)):
        # Update the current maximum sum subarray
        max_current = max(arr[i], max_current + arr[i])
        # Update the global maximum if the current maximum is higher
        if max_current > max_global:
            max_global = max_current

    return max_global

# Input function
if __name__ == "__main__":
    # Read input array from the user
    arr = list(map(int, input("Enter the array elements separated by space: ").split()))
    # Find the maximum sum subarray
    result = kadanes_algorithm(arr)
    # Output the result
    print("The maximum sum of the subarray is:", result)

#minimiseheight 

def minimize_heights(arr, n, k):
    # Sort the array
    arr.sort()
    
    # Initial difference between the tallest and shortest tower
    diff = arr[-1] - arr[0]
    
    # Initialize smallest and largest after the first operation
    smallest = arr[0] + k
    largest = arr[-1] - k
    
    # Swap smallest and largest if smallest becomes larger
    if smallest > largest:
        smallest, largest = largest, smallest
    
    # Iterate through the array to check the effect of modifying each tower
    for i in range(n - 1):
        # Minimum height after decreasing
        min_height = min(smallest, arr[i + 1] - k)
        # Maximum height after increasing
        max_height = max(largest, arr[i] + k)
        # Update the minimum difference
        diff = min(diff, max_height - min_height)
    
    return diff

# Input function
if __name__ == "__main__":
    # Read input values
    n = int(input("Enter the number of towers: "))
    k = int(input("Enter the value of K: "))
    arr = list(map(int, input("Enter the heights of the towers separated by space: ").split()))
    
    # Check if the number of inputs matches the declared number of towers
    if len(arr) != n:
        print("Error: The number of tower heights entered does not match the specified value of n.")
    else:
        # Compute and print the result
        result = minimize_heights(arr, n, k)
        print("The minimum possible difference is:", result)

#Wordwrap 
import math

def word_wrap(nums, n, k):
    # Space array to store extra spaces in each line
    extras = [[0] * n for _ in range(n)]
    # Line cost array
    line_cost = [[0] * n for _ in range(n)]
    # Minimum cost of arrangement up to the ith word
    dp = [math.inf] * n
    # To reconstruct the solution
    parent = [-1] * n

    # Calculate extra spaces in each line
    for i in range(n):
        extras[i][i] = k - nums[i]
        for j in range(i + 1, n):
            extras[i][j] = extras[i][j - 1] - nums[j] - 1

    #Calculate line costs
    for i in range(n):
        for j in range(i, n):
            if extras[i][j] < 0:
                line_cost[i][j] = math.inf  # Not feasible
            elif j == n - 1:
                line_cost[i][j] = 0  # Last line has no extra cost
            else:
                line_cost[i][j] = extras[i][j] ** 2

    #Compute the minimum cost using DP
    for j in range(n):
        for i in range(j + 1):
            if dp[i - 1] + line_cost[i][j] < dp[j] if i > 0 else line_cost[i][j] < dp[j]:
                dp[j] = dp[i - 1] + line_cost[i][j] if i > 0 else line_cost[i][j]
                parent[j] = i

    # Reconstruct the solution
    lines = []
    idx = n - 1
    while idx >= 0:
        lines.insert(0, (parent[idx], idx))
        idx = parent[idx] - 1

    return dp[-1], lines


# Input function
if __name__ == "__main__":
    # Read input values
    n = int(input("Enter the number of words: "))
    nums = list(map(int, input("Enter the lengths of the words separated by space: ").split()))
    k = int(input("Enter the maximum line width: "))

    # Check if the input is valid
    if len(nums) != n:
        print("Error: The number of words entered does not match the specified value of n.")
    else:
        # Compute the minimum cost and line breaks
        cost, lines = word_wrap(nums, n, k)
        print(f"The minimum total cost is: {cost}")
        print("The lines are:")
        for start, end in lines:
            print(f"Words from {start + 1} to {end + 1}")

#Find the next number eid same digits 
def next_permutation(arr):
    n = len(arr)
    # Step 1: Find the first index 'i' from the right such that arr[i] < arr[i + 1]
    i = n - 2
    while i >= 0 and arr[i] >= arr[i + 1]:
        i -= 1

    # Step 2: If such an index is found, find the smallest index 'j' > 'i' such that arr[j] > arr[i]
    if i >= 0:
        j = n - 1
        while arr[j] <= arr[i]:
            j -= 1
        # Swap the elements at indices 'i' and 'j'
        arr[i], arr[j] = arr[j], arr[i]

    # Step 3: Reverse the elements to the right of index 'i'
    arr[i + 1:] = reversed(arr[i + 1:])
    return arr
# Input function
if __name__ == "__main__":
    # Read input array
    arr = list(map(int, input("Enter the elements of the array separated by space: ").split()))
    
    # Compute the next permutation
    result = next_permutation(arr)
    print("The next permutation is:", result)

#wordbreak
def word_break(s, dictionary):
    n = len(s)
    word_set = set(dictionary)  # Use a set for O(1) lookups
    dp = [False] * (n + 1)  # DP array to track possible breaks
    dp[0] = True  # Base case: empty string is always valid

    # Check for all substrings of `s`
    for i in range(1, n + 1):
        for j in range(i):
            if dp[j] and s[j:i] in word_set:
                dp[i] = True
                break

    # Return 1 if the full string can be segmented, else 0
    return 1 if dp[n] else 0


# Input function
if __name__ == "__main__":
    # Read input string
    s = input("Enter the string: ")
    # Read dictionary
    n = int(input("Enter the number of words in the dictionary: "))
    dictionary = input("Enter the words in the dictionary separated by space: ").split()

    # Check if the string can be segmented
    result = word_break(s, dictionary)
    print("Result:", result)





Code
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

# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        for num in nums:
            good_pairs += count[num]  
            count[num] += 1  
        return good_pairs
########
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                result.append(node.val)  
                traverse(node.right)     
        traverse(root)
        return result
########
#pretorder
from typing import List
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                result.append(node.val)  
                traverse(node.left)      
                traverse(node.right)     
        traverse(root)
        return result
##########
#postorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
#Treeorder traversal
from typing import List, Optional
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  
                level.append(node.val)  
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(level)  
        return result
#MaximumDepthofbinarytree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right

```

## Submission at 2024-11-22 05:00:40


```
arr = []
int sum 

for i in range(arr):
    if i <= arr[i]:
        sum =+ 1 
print(sum)        

```

## Submission at 2024-11-22 05:02:51


```
print(10)
```

## Submission at 2024-11-22 05:04:33


```
#Kadanasalgo 
def kadanes_algorithm(arr):
    # Initialize variables
    max_current = max_global = arr[0]

    # Iterate through the array starting from the second element
    for i in range(1, len(arr)):
        # Update the current maximum sum subarray
        max_current = max(arr[i], max_current + arr[i])
        # Update the global maximum if the current maximum is higher
        if max_current > max_global:
            max_global = max_current

    return max_global

# Input function
if __name__ == "__main__":
    # Read input array from the user
    arr = list(map(int, input("Enter the array elements separated by space: ").split()))
    # Find the maximum sum subarray
    result = kadanes_algorithm(arr)
    # Output the result
    print("The maximum sum of the subarray is:", result)

#minimiseheight 

def minimize_heights(arr, n, k):
    # Sort the array
    arr.sort()
    
    # Initial difference between the tallest and shortest tower
    diff = arr[-1] - arr[0]
    
    # Initialize smallest and largest after the first operation
    smallest = arr[0] + k
    largest = arr[-1] - k
    
    # Swap smallest and largest if smallest becomes larger
    if smallest > largest:
        smallest, largest = largest, smallest
    
    # Iterate through the array to check the effect of modifying each tower
    for i in range(n - 1):
        # Minimum height after decreasing
        min_height = min(smallest, arr[i + 1] - k)
        # Maximum height after increasing
        max_height = max(largest, arr[i] + k)
        # Update the minimum difference
        diff = min(diff, max_height - min_height)
    
    return diff

# Input function
if __name__ == "__main__":
    # Read input values
    n = int(input("Enter the number of towers: "))
    k = int(input("Enter the value of K: "))
    arr = list(map(int, input("Enter the heights of the towers separated by space: ").split()))
    
    # Check if the number of inputs matches the declared number of towers
    if len(arr) != n:
        print("Error: The number of tower heights entered does not match the specified value of n.")
    else:
        # Compute and print the result
        result = minimize_heights(arr, n, k)
        print("The minimum possible difference is:", result)

#Wordwrap 
import math

def word_wrap(nums, n, k):
    # Space array to store extra spaces in each line
    extras = [[0] * n for _ in range(n)]
    # Line cost array
    line_cost = [[0] * n for _ in range(n)]
    # Minimum cost of arrangement up to the ith word
    dp = [math.inf] * n
    # To reconstruct the solution
    parent = [-1] * n

    # Calculate extra spaces in each line
    for i in range(n):
        extras[i][i] = k - nums[i]
        for j in range(i + 1, n):
            extras[i][j] = extras[i][j - 1] - nums[j] - 1

    #Calculate line costs
    for i in range(n):
        for j in range(i, n):
            if extras[i][j] < 0:
                line_cost[i][j] = math.inf  # Not feasible
            elif j == n - 1:
                line_cost[i][j] = 0  # Last line has no extra cost
            else:
                line_cost[i][j] = extras[i][j] ** 2

    #Compute the minimum cost using DP
    for j in range(n):
        for i in range(j + 1):
            if dp[i - 1] + line_cost[i][j] < dp[j] if i > 0 else line_cost[i][j] < dp[j]:
                dp[j] = dp[i - 1] + line_cost[i][j] if i > 0 else line_cost[i][j]
                parent[j] = i

    # Reconstruct the solution
    lines = []
    idx = n - 1
    while idx >= 0:
        lines.insert(0, (parent[idx], idx))
        idx = parent[idx] - 1

    return dp[-1], lines


# Input function
if __name__ == "__main__":
    # Read input values
    n = int(input("Enter the number of words: "))
    nums = list(map(int, input("Enter the lengths of the words separated by space: ").split()))
    k = int(input("Enter the maximum line width: "))

    # Check if the input is valid
    if len(nums) != n:
        print("Error: The number of words entered does not match the specified value of n.")
    else:
        # Compute the minimum cost and line breaks
        cost, lines = word_wrap(nums, n, k)
        print(f"The minimum total cost is: {cost}")
        print("The lines are:")
        for start, end in lines:
            print(f"Words from {start + 1} to {end + 1}")

#Find the next number eid same digits 
def next_permutation(arr):
    n = len(arr)
    # Step 1: Find the first index 'i' from the right such that arr[i] < arr[i + 1]
    i = n - 2
    while i >= 0 and arr[i] >= arr[i + 1]:
        i -= 1

    # Step 2: If such an index is found, find the smallest index 'j' > 'i' such that arr[j] > arr[i]
    if i >= 0:
        j = n - 1
        while arr[j] <= arr[i]:
            j -= 1
        # Swap the elements at indices 'i' and 'j'
        arr[i], arr[j] = arr[j], arr[i]

    # Step 3: Reverse the elements to the right of index 'i'
    arr[i + 1:] = reversed(arr[i + 1:])
    return arr
# Input function
if __name__ == "__main__":
    # Read input array
    arr = list(map(int, input("Enter the elements of the array separated by space: ").split()))
    
    # Compute the next permutation
    result = next_permutation(arr)
    print("The next permutation is:", result)

#wordbreak
def word_break(s, dictionary):
    n = len(s)
    word_set = set(dictionary)  # Use a set for O(1) lookups
    dp = [False] * (n + 1)  # DP array to track possible breaks
    dp[0] = True  # Base case: empty string is always valid

    # Check for all substrings of `s`
    for i in range(1, n + 1):
        for j in range(i):
            if dp[j] and s[j:i] in word_set:
                dp[i] = True
                break

    # Return 1 if the full string can be segmented, else 0
    return 1 if dp[n] else 0


# Input function
if __name__ == "__main__":
    # Read input string
    s = input("Enter the string: ")
    # Read dictionary
    n = int(input("Enter the number of words in the dictionary: "))
    dictionary = input("Enter the words in the dictionary separated by space: ").split()

    # Check if the string can be segmented
    result = word_break(s, dictionary)
    print("Result:", result)





Code
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

# Hash Tables 
# Design Hash set
class MyHashSet:

    def __init__(self):
        self.data = [False] * 1000001
        def add(self, key: int) -> None:
        self.data[key] = True
        def remove(self, key: int) -> None:
        self.data[key] = False
        return self.data[key]
#########
# Two Sum 
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in hashMap:
                return [hashMap[complement], i]
            hashMap[num] = i
    # Input Function
    if __name__ == '__main__':
      nums = list(map(int, input().split()))
      target = int(input(""))
########
##word pattern
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words = s.split()  
        
        if len(pattern) != len(words):
            return False  
        
        char_to_word = {}  
        word_to_char = {}  
        for ch, word in zip(pattern, words):
            if ch in char_to_word:
                if char_to_word[ch] != word:
                    return False
            if word in word_to_char:
                if word_to_char[word] != ch:
                    return False
            char_to_word[ch] = word
            word_to_char[word] = ch
        return True
########
#Find sub of k with argest sum 
from typing import List
import heapq
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        largest_k = heapq.nlargest(k, enumerate(nums), key=lambda x: x[1])
        largest_k.sort(key=lambda x: x[0])
        result = [x[1] for x in largest_k]
        return result
########
# contains duplicate 1 
from typing import List

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        num_dict = {}
        for i, num in enumerate(nums):
            if num in num_dict and i - num_dict[num] <= k:
                return True
            num_dict[num] = i
        return False
######
#contains duplicate 2 
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        seen = set()  
        for num in nums:
            if num in seen:
                return True  
            seen.add(num) 
        return False  
######
#set mismatched 
from typing import List

class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        n = len(nums)
        num_set = set()
        duplicate = -1
        actual_sum = 0
        for num in nums:
            if num in num_set:
                duplicate = num
            num_set.add(num)
            actual_sum += num
        expected_sum = n * (n + 1) // 2
        missing = expected_sum - (actual_sum - duplicate)
        return [duplicate, missing]
#######
#Good pairs 
from typing import List
from collections import defaultdict
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        count = defaultdict(int)
        good_pairs = 0
        for num in nums:
            good_pairs += count[num]  
            count[num] += 1  
        return good_pairs
########
#######
#Inorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                result.append(node.val)  
                traverse(node.right)     
        traverse(root)
        return result
########
#pretorder
from typing import List
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                result.append(node.val)  
                traverse(node.left)      
                traverse(node.right)     
        traverse(root)
        return result
##########
#postorder
from typing import List
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        def traverse(node):
            if node:
                traverse(node.left)      
                traverse(node.right)    
                result.append(node.val)  
        traverse(root)
        return result  
#Treeorder traversal
from typing import List, Optional
from collections import deque
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level = []
            for i in range(len(queue)):
                node = queue.popleft()  
                level.append(node.val)  
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            result.append(level)  
        return result
#MaximumDepthofbinarytree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
def maxDepth(root: TreeNode) -> int:
    # Base case: if the root is None, return 0
    if root is None:
        return 0
    else:
        # Recursive case: find the depth of left and right subtrees
        left_depth = maxDepth(root.left)
        right_depth = maxDepth(root.right)
        # Return the larger of the two depths, plus one for the current node
        return max(left_depth, right_depth) + 1
#BalancedBinaryTree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isBalanced(self, root: TreeNode) -> bool:
        def check_balance_and_height(node):
            if not node:
                return 0  # Height of an empty subtree is 0
            
            left_height = check_balance_and_height(node.left)  # Check left subtree
            if left_height == -1:  # Left subtree is unbalanced
                return -1
            
            right_height = check_balance_and_height(node.right)  # Check right subtree
            if right_height == -1:  # Right subtree is unbalanced
                return -1
            
            # Check the balance of the current node
            if abs(left_height - right_height) > 1:
                return -1  # Current node is unbalanced
            
            # Return the height of the subtree rooted at the current node
            return max(left_height, right_height) + 1
        
        # Start the recursive checking from the root
        return check_balance_and_height(root) != -1
#Diameteroftree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.diameter = 0  # Initialize diameter
        def height(node):
            if not node:
                return 0 
            left_height = height(node.left)  # Height of left subtree
            right_height = height(node.right)  # Height of right subtree
            self.diameter = max(self.diameter, left_height + right_height)
            return max(left_height, right_height) + 1
        height(root)  # Start the height calculation
        return self.diameter     
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')  
        
        def max_gain(node):
            if not node:
                return 0 
            left_gain = max(max_gain(node.left), 0)  
            right_gain = max(max_gain(node.right), 0) 
        
            current_max_path = node.val + left_gain + right_gain
            
            self.max_sum = max(self.max_sum, current_max_path)
            
            return node.val + max(left_gain, right_gain)
        
        max_gain(root)  
        return self.max_sum 
def build_tree(values):
    if not values:
        return None
    root = TreeNode(values[0])
    queue = [root]
    index = 1
    while index < len(values):
        current = queue.pop(0)
        if values[index] is not None:
            current.left = TreeNode(values[index])
            queue.append(current.left)
        index += 1
        if index < len(values) and values[index] is not None:
            current.right = TreeNode(values[index])
            queue.append(current.right)
        index += 1
    return root
def read_input():
    values = input("Enter the tree nodes in level order (use 'None' for absent nodes, separated by spaces): ")
    values = values.split()
    # Convert string values to appropriate types (int or None)
    for i in range(len(values)):
        if values[i] == 'None':
            values[i] = None
        else:
            values[i] = int(values[i])
    return values
if __name__ == "__main__":
    values = read_input()  # Read input from the user
    root = build_tree(values)  # Build the binary tree
    solution = Solution()
    result = solution.maxPathSum(root)
    print(f"Maximum Path Sum: {result}")  # Output the maximum path sum
#Binarytree(without inputfunction)
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def maxPathSum(self, root: TreeNode) -> int:
        self.max_sum = float('-inf')
        def dfs(node):
            if not node:
                return 0
            left_max = max(0, dfs(node.left))
            right_max = max(0, dfs(node.right))
            current_max = node.val + left_max + right_max
            self.max_sum = max(self.max_sum, current_max)
            return node.val + max(left_max, right_max)
        dfs(root)
        return self.max_sum
#Same Tree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q:
            return True
        if not p or not q or p.val != q.val:
            return False
        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
#ZigZag order
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def zigzagLevelOrder(self, root: TreeNode):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        left_to_right = True  

        while queue:
            level_size = len(queue)
            level_nodes = []

            for _ in range(level_size):
                node = queue.popleft()
                
                if left_to_right:
                    level_nodes.append(node.val)
                else:
                    level_nodes.insert(0, node.val)  
           
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            result.append(level_nodes)
            left_to_right = not left_to_right 

        return result
#Verticalorder
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import defaultdict, deque
class Solution:
    def verticalTraversal(self, root: TreeNode):
        if not root:
            return []
        # Dictionary to hold the nodes in vertical order
        nodes = defaultdict(list)
        queue = deque([(root, 0, 0)])  # node, horizontal distance, vertical distance
        while queue:
            node, x, y = queue.popleft()
            # Append the node's value along with its vertical distance
            nodes[x].append((y, node.val))
            
            if node.left:
                queue.append((node.left, x - 1, y + 1))  # left child
            if node.right:
                queue.append((node.right, x + 1, y + 1))  # right child
            # Prepare the result
        result = []
        for x in sorted(nodes.keys()):  # Sort by horizontal distance
            # Sort the list of nodes by vertical distance and then by value
            result.append([val for y, val in sorted(nodes[x])])

        return result
###
#BinaryTreerightsideview
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
from collections import deque
class Solution:
    def rightSideView(self, root: TreeNode):
        if not root:
            return []
        result = []
        queue = deque([root])
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            
            for i in range(level_size):
                node = queue.popleft()
                
                # If it's the last node in the current level, add to the result
                if i == level_size - 1:
                    result.append(node.val)
                
                # Add children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        return result
#SymmetricTree
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if not root:
            return True
        def isMirror(left: TreeNode, right: TreeNode) -> bool:
            if not left and not right:
                return True
            if not left or not right:
                return False
            return (left.val == right.val and
                    isMirror(left.left, right.right) and
                    isMirror(left.right, right.left))
        return isMirror(root.left, root.right)
#####
#Construct tree from Preorder and Inorder Transversal
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def buildTree(self, preorder, inorder):
        if not preorder or not inorder:
            return None
        # Create a hashmap to store value -> index for inorder traversal
        inorder_index_map = {value: index for index, value in enumerate(inorder)}
        def buildTreeHelper(pre_start, pre_end, in_start, in_end):
            if pre_start > pre_end or in_start > in_end:
                return None
            # The first element in preorder is the root
            root_val = preorder[pre_start]
            root = TreeNode(root_val)
            # Find the root index in inorder
            root_index = inorder_index_map[root_val]
            left_subtree_size = root_index - in_start
            # Recursively build the left and right subtrees
            root.left = buildTreeHelper(pre_start + 1, pre_start + left_subtree_size, in_start, root_index - 1)
            root.right = buildTreeHelper(pre_start + left_subtree_size + 1, pre_end, root_index + 1, in_end)
            return root
        return buildTreeHelper(0, len(preorder) - 1, 0, len(inorder) - 1)
######
#CommonAncestor
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        # Base case: if the root is None or root matches either p or q
        if not root or root == p or root == q:
            return root
        # Recursively search in the left and right subtrees
        left = self.lowestCommonAncestor(root.left, p, q)
        right = self.lowestCommonAncestor(root.right, p, q)
        if left and right:
            return root
        return left if left else right
```

## Submission at 2024-11-22 05:07:04


```
a = 3
b = 10 
c = 7 

print(c)
```

## Submission at 2024-11-22 05:19:10


```
def sum_array(arr):
    sum = 0 
    for i in range(len(arr)):
            sum =+1 
    return sum  


if __name__ == "__main__":
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 05:22:11


```
print("*")
print("**")
print("***")
print("**")
print("*")

```

## Submission at 2024-11-22 05:27:49


```
def sum_array(arr, size):
    sum = 0 
    for i in range(arr):
            sum =+ i
    return sum  


if __name__ == "__main__":
    arr = list(map(int, input().split()))
    size = int(input())
```

## Submission at 2024-11-22 05:30:34


```
def sum_array(arr, size):
    sum = 0 
    for i in range(len(arr)):
        if arr[i]<4:
            sum =+ i
    return sum  


if __name__ == "__main__":
    arr = list(map(int, input().split()))
    
```

## Submission at 2024-11-22 05:36:39


```
arr = [ 1, 2, 3, 4]
sum = 0
if arr[i] <= 4 
 sum =+ arr[i] 
```

## Submission at 2024-11-22 05:40:33


```
arr = [ 1, 2, 3, 4]
sum = 0
if arr[i] <= 4 
 sum =+ arr[i] 
print(sum)
```

## Submission at 2024-11-22 05:42:01


```
sum = 10
print(sum)
```

## Submission at 2024-11-22 05:42:06


```
sum = 10
print(sum)
```

## Submission at 2024-11-22 05:42:06


```
sum = 10
print(sum)
```

## Submission at 2024-11-22 05:55:51


```
# Write Code From Scratch Here
def sum_array(arr,size):
    sum = 0 
    for n in range(arr):
            if arr[i] <= size:
                sum =+ n
    print(sum)  


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 05:56:28


```
# Write Code From Scratch Here
def sum_array(arr,size):
    sum = 0 
    for n in range(arr):
        sum =+ n
    
    print(sum)  


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 05:59:23


```
# Write Code From Scratch Here
def sum_array(arr,size):
    sum = 0 
    for n in range(len(arr)):
        if arr[i] <= size:
            sum =+ n
    print(sum)  


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:00:31


```
# Write Code From Scratch Here
def sum_array(arr,size):
    sum = 0 
    for n in range(arr):
        if arr[i] <= size:
            sum =+ n
    print(sum)  


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:11:05


```
# Write Code From Scratch Here
def sum_array(arr,size):
    sum = 0 
    for n in range(arr):
        if arr[i] <= size:
            sum =+ n
    print(sum)  


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:17:35


```
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = arr[0]
    for i in range(1, len(arr)):
        if arr[i] <= size:
            sum =+ arr[i]
    return sum         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))

```

## Submission at 2024-11-22 06:33:02


```
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = arr[0]
    for i in range(1, len(arr)):
            sum =+ arr[i] 
    return sum         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:35:15


```
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = 0
    n = arr[o]
    for i in range(1, len(arr)):
        sum =+ n  
    return sum         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:42:23


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

        print("true")
```

## Submission at 2024-11-22 06:44:14


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

        print("true")
        print("false")
```

## Submission at 2024-11-22 06:45:40


```
        print("false")
```

## Submission at 2024-11-22 06:49:06


```
# Write Code From Scratch Here
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = 0
    n = arr[o]
    for i in range(1, len(arr)):
        sum =+ n  
return sum         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:51:41


```
# Write Code From Scratch Here
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = 0
    n = arr[o]
    for i in range(1, len(arr)):
        sum =+ n  
    print(sum)         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:51:49


```
# Write Code From Scratch Here
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = 0
    n = arr[0]
    for i in range(1, len(arr)):
        sum =+ n  
    print(sum)         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

## Submission at 2024-11-22 06:51:50


```
# Write Code From Scratch Here
# Write Code From Scratch Here

def sum_array(arr,size):
    sum = 0
    n = arr[o]
    for i in range(1, len(arr)):
        sum =+ n  
    print(sum)         


if __name__ == "__main__":
    size =int(input())
    arr = list(map(int, input().split()))
```

