## Submission at 2024-08-12 09:59:00


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());
        int p = 1;
        int s = 0;
        if (x == 0){
            System.out.println("fibonacci(x):"");
            System.out. println("0,");
        } else if (x == 1){
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1");
        } else {
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1,");
            for(int i = 2; i<x; i++ ){
                s=p;
                p=
            }
        }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
    }
}

```

## Submission at 2024-08-12 10:01:35


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());
        int p = 1;
        int s = 0;
        if (x == 0){
            System.out.println("fibonacci(x):"");
            System.out. println("0,");
        } else if (x == 1){
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1");
        } else {
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1,");
            for(int i = 2; i<x; i++ ){
                int f= s +p;
                System.out.println(f);
                s=p;
                p=f;
            }
        }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
    }
}

```

## Submission at 2024-08-12 10:02:52


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());
        int p = 1;
        int s = 0;
        if (x == 0){
            System.out.println("fibonacci(x):"");
            System.out. println("0,");
        } else if (x == 1){
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1");
        } else {
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1,");
            for(int i = 2; i<x; i++ ){
                int f= s +p;
                System.out.println(f);
                s=p;
                p=f;
            }
        }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
    }
}

```

## Submission at 2024-08-12 10:06:26


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());
        int p = 1;
        int s = 0;
        if (x == 0){
            System.out.println("fibonacci(x):"");
            System.out. println("0,");
        } else if (x == 1){
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1");
        } else {
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1,");
            for(int i = 2; i<x; i++ ){
                int f= s +p;
                System.out.println(f);
                s=p;
                p=f;
            }
        }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
    }
}

```

## Submission at 2024-08-12 10:07:33


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());
        int p = 1;
        int s = 0;
        if (x == 0){
            System.out.println("fibonacci(x):"");
            System.out. println("0,");
        } else if (x == 1){
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1");
        } else {
            System.out.println("fibonacci(x):"");
            System.out. println("0, 1,");
            for(int i = 2; i<x; i++ ){
                int f= s +p;
                System.out.println(f);
                s=p;
                p=f;
            }
        }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
    }
}

```

## Submission at 2024-08-21 06:48:15


```
def combine(n, k):
    # Write logic here
    def backtrack(start, path):
        if len(path) == k:
            result.append(path[:])
            return
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

## Submission at 2024-08-21 07:09:41


```
def permute(nums):
    def backtrack(first = 0):
        # if all integers are used up
        if first == n:  
            output.append(nums[:])
        for i in range(first, n):
            # place i-th integer first 
            # in the current permutation
            nums[first], nums[i] = nums[i], nums[first]
            # use next integers to complete the permutations
            backtrack(first + 1)
            # backtrack
            nums[first], nums[i] = nums[i], nums[first]

    n = len(nums)
    output = []
    backtrack()
    return output

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 07:14:40


```
import java.util.*;

public class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        backtrack(result, "", 0, 0, n);
        return result;
    }

    private void backtrack(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max);
        }

        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max);
        }
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int n = 3;
        List<String> result = solution.generateParenthesis(n);
        System.out.println(result);
    }
}
```

## Submission at 2024-08-21 07:24:32


```
def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input(1,2,3).split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:25:45


```
def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input(123).split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:27:22


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input(123).split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:27:49


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input().split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:29:55


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    list= [1,2,3]
    nums = list(map(int, input().split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:32:01


```
from itertools import permutations
import numpy

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    
    nums = numpy.arry([1,2,3])
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:32:44


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    
    nums = [1,2,3]
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:34:49


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    
    # Get the well-formed parentheses combinations
    result = generate_parentheses(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:35:21


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = 3
    
    # Get the well-formed parentheses combinations
    result = generate_parentheses(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:35:45


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = 3;
    
    # Get the well-formed parentheses combinations
    result = generate_parentheses(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:36:16


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = 3,
    
    # Get the well-formed parentheses combinations
    result = generate_parentheses(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:37:59


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    if 1 <= n & n<=8:
    # Get the well-formed parentheses combinations
    result = generate_parentheses(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:38:57


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    if n<=8:
    # Get the well-formed parentheses combinations
    result = generate_parentheses(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:54:55


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(1,2,3)
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:56:02


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list[1,2,3]
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:58:12


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    list=[1,2,3]

    for j in range (3);
    num = list[j]
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:58:27


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    list=[1,2,3]

    for j in range (3);
    num = list[j]
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:58:27


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    list=[1,2,3]

    for j in range (3);
    num = list[j]
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 07:59:21


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input().split()))

    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 08:25:52


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input().split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 08:27:43


```
def generate_parenth(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    
    # Get the well-formed parentheses combinations
    result = generate_parenth(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 08:34:22


```
def generate_parenth(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    
    # Get the well-formed parentheses combinations
    result = generate_parenth(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
main()
```

## Submission at 2024-08-21 08:36:32


```
def generate_parenth(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    
    # Get the well-formed parentheses combinations
    result = generate_parenth(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _main_:
    main()
```

## Submission at 2024-08-21 08:37:37


```
def generate_parenth(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    
    # Get the well-formed parentheses combinations
    result = generate_parenth(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":

    main()
```

## Submission at 2024-08-21 08:38:59


```
def generate_parenth(n):
    def backtrack(s="", left=0, right=0):
        # If the current string is of length 2*n, it's a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If the number of left parentheses is less than n, we can add a '('
        if left < n:
            backtrack(s + "(", left + 1, right)
        # If the number of right parentheses is less than left, we can add a ')'
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

def main():
    # Read the input
    n = int(input())
    
    # Get the well-formed parentheses combinations
    result = generate_parenth(n)
    
    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":

    main()
```

## Submission at 2024-08-21 08:42:47


```
def permute(nums):
    def backtrack(first = 0):
        # if all integers are used up
        if first == n:  
            output.append(nums[:])
        for i in range(first, n):
            # place i-th integer first 
            # in the current permutation
            nums[first], nums[i] = nums[i], nums[first]
            # use next integers to complete the permutations
            backtrack(first + 1)
            # backtrack
            nums[first], nums[i] = nums[i], nums[first]

    n = len(nums)
    output = []
    backtrack()
    return output

# Test the function
nums = [1, 2, 3]
print(permute(nums))
```

## Submission at 2024-08-21 08:48:54


```
from itertools import permutations

def get_permutations(nums):
    # Generate all permutations and convert them to a sorted list
    return sorted([list(p) for p in permutations(nums)])

def main():
    # Read the input as a list of integers
    nums = list(map(int, input().split()))
    
    # Get the result from the get_permutations function
    result = get_permutations(nums)
    
    # Print permutations in the required format
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-21 08:55:27


```
from itertools import permutations

def get_permutations(nums):
    
    return sorted([list(p) for p in permutations(nums)])

def main():
    
    nums = list(map(int, input().split()))
    
    result = get_permutations(nums)
    
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        print(",".join(map(str, result[i])), end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "_main_":
    main()
```

## Submission at 2024-09-02 10:18:17


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

int getKthNode(Node* head, int d) {
    // Write your logic here
    class Node {
    public:
        int data;
        Node* next;

        Node(int d) {
            data = d;
            next = nullptr;
        }
    };
}

```

## Submission at 2024-09-02 10:19:01


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

int getKthNode(Node* head, int k) {
    // Write your logic here
    class Node {
    public:
        int data;
        Node* next;

        Node(int d) {
            data = d;
            next = nullptr;
        }
    };
}

```

## Submission at 2024-09-09 03:57:21


```
import re

def is_palindrome(s):
    # Removing non-alphanumeric characters and converting to lowercase
    s = re.sub(r'[^A-Za-z0-9]', '', s).lower()
    
    # Recursive function to check if a string is a palindrome
    def check_palindrome(s, start, end):
        if start >= end:
            return True
        if s[start] != s[end]:
            return False
        return check_palindrome(s, start + 1, end - 1)

    return check_palindrome(s, 0, len(s) - 1)

# Input
s = input().strip()

# Output result in uppercase
if is_palindrome(s):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-09-09 04:01:44


```
def is_palindrome(s):
    # Manually filtering out non-alphanumeric characters and converting to lowercase
    cleaned_s = ''.join([char.lower() for char in s if char.isalnum()])
    
    # Recursive function to check if a string is a palindrome
    def check_palindrome(cleaned_s, start, end):
        if start >= end:
            return True
        if cleaned_s[start] != cleaned_s[end]:
            return False
        return check_palindrome(cleaned_s, start + 1, end - 1)

    return check_palindrome(cleaned_s, 0, len(cleaned_s) - 1)

# Input
s = input().strip()

# Output result in uppercase
if is_palindrome(s):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-09-09 04:06:22


```
def is_palindrome(s):
    # Manually filtering out non-alphanumeric characters and converting to lowercase
    cleaned_s = ''.join([char.lower() for char in s if char.isalnum()])
    
    # Recursive function to check if a string is a palindrome
    def check_palindrome(cleaned_s, start, end):
        if start >= end:
            return True
        if cleaned_s[start] != cleaned_s[end]:
            return False
        return check_palindrome(cleaned_s, start + 1, end - 1)

    return check_palindrome(cleaned_s, 0, len(cleaned_s) - 1)

# Input
s = input().strip()

# Output result in uppercase
if is_palindrome(s):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-09-09 04:22:12


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:
        return (result)
    else:
        return (x*result)

power(2,4)
print (power(2,4))

```

## Submission at 2024-09-09 04:23:00


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:
        return (result)
    else:
        return (x*result)


x, n = map(float, input().split())

# Calculate result
result = power(int(x), int(n))

# Output result
print(result)
```

## Submission at 2024-09-09 04:24:56


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:
        return (result)
    else:
        return (x*result)


x, n = map(float, input().split())
print(power(int x,int n))
```

## Submission at 2024-09-09 04:25:22


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:
        return (result)
    else:
        return (x*result)


x, n = map(float, input().split())
result = power(int(x), int(n))
print(result)
```

## Submission at 2024-09-09 04:25:43


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:
        return (result)
    else:
        return (x*result)

```

## Submission at 2024-09-09 04:27:03


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:{
        return (result)
        print (result)
    }
        
    else:{
        return (x*result)
        print(x*result)
    }

power(2,4)
```

## Submission at 2024-09-09 04:27:48


```
def power(x,n):
    if n==0:
        return 1
    result = power(x*x, n//2)
    if n%2==0:
        return (result)
    else:
        return (x*result)


x, n = map(float, input().split())
result = power(int(x), int(n))
print(result)
```

## Submission at 2024-09-09 04:46:51


```
/*You are required to complete below method*/

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def delete_node(head: ListNode, x: int) -> ListNode:
    # Edge case: if we need to delete the head of the list
    if x == 1:
        return head.next
    
    # Traverse to the node just before the x-th node
    current = head
    for _ in range(x - 2):
        current = current.next
    
    # Skip the x-th node
    current.next = current.next.next
    
    return head

# Helper function to convert list to linked list
def list_to_linkedlist(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper function to print linked list
def print_linkedlist(head):
    current = head
    result = []
    while current:
        result.append(str(current.val))
        current = current.next
    print(" -> ".join(result))

# Sample input
arr = [1, 2, 3, 4, 5]
x = 2

# Convert list to linked list
head = list_to_linkedlist(arr)

# Delete the x-th node
new_head = delete_node(head, x)

# Print the updated linked list
print_linkedlist(new_head)


```

## Submission at 2024-09-09 04:47:29


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def delete_node(head: ListNode, x: int) -> ListNode:
    # Edge case: if we need to delete the head of the list
    if x == 1:
        return head.next
    
    # Traverse to the node just before the x-th node
    current = head
    for _ in range(x - 2):
        current = current.next
    
    # Skip the x-th node
    current.next = current.next.next
    
    return head

# Helper function to convert list to linked list
def list_to_linkedlist(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper function to print linked list
def print_linkedlist(head):
    current = head
    result = []
    while current:
        result.append(str(current.val))
        current = current.next
    print(" -> ".join(result))

# Sample input
arr = [1, 2, 3, 4, 5]
x = 2

# Convert list to linked list
head = list_to_linkedlist(arr)

# Delete the x-th node
new_head = delete_node(head, x)

# Print the updated linked list
print_linkedlist(new_head)

```

## Submission at 2024-09-09 05:08:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class node:
    def _init_(self):
        self.data = None
        self.next = None


def delNode(head, k):
    current = head
    prev = None
    
    if current != None and current.data == k:
        head = current.next
    else:
        while current != None:
         if current.data == k:
            prev.next = current.next
            break
         prev = current
         current = current.next

    
    tmp = head
    while tmp != None:
     print(tmp.data, end = " ")
     tmp = tmp.next


```

## Submission at 2024-09-09 05:09:02


```


class node:
    def _init_(self):
        self.data = None
        self.next = None


def delNode(head, k):
    current = head
    prev = None
    
    if current != None and current.data == k:
        head = current.next
    else:
        while current != None:
         if current.data == k:
            prev.next = current.next
            break
         prev = current
         current = current.next

    
    tmp = head
    while tmp != None:
     print(tmp.data, end = " ")
     tmp = tmp.next


```

## Submission at 2024-09-09 05:14:52


```


class node:
    def _init_(self):
        self.data = None
        self.next = None


def delNode(head, k):
    current = head
    prev = None
    
    if current != None and current.data == k:
        head = current.next
    else:
        while current != None:
         if current.data == k:
            prev.next = current.next
            break
         prev = current
         current = current.next

    
    tmp = head
    while tmp != None:
        print(tmp.data, end = " ")
        tmp=tmp.next


```

## Submission at 2024-09-09 05:31:13


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def get_kth_node(head, k):
    current = head
    if current == None:
        print("Empty")
    else:
        while current != None:
            if (curr.data == lookingfor): # check for the content (data)
            print("found what you are looking for! :-)")
            break
        curr = curr.next # move to the next node 
    
    if (curr == None):
    print("could not find it :-(")
```

## Submission at 2024-09-09 05:34:38


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def get_kth_node(head, k):
    current = head
    if current == None:
        print("Empty")
    else:
        while current != None:
            if (current.val== k): # check for the content (data)
            print(current.val)
            break
        curr = curr.next # move to the next node 
    
    if (curr == None):
    print("could not find it :-(")
```

## Submission at 2024-09-09 05:35:23


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def get_kth_node(head, k):
    current = head
    if current == None:
        print("Empty")
    else:
        while current != None:
            if (current.val== k): # check for the content (data)
            print(current.val)
            break
        current = current.next # move to the next node 
    
    if (current == None):
    print("could not find it :-(")
```

## Submission at 2024-09-09 05:36:55


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def get_kth_node(head, k):
    current = head
    if current == None:
        print("Empty")
    else:
        while current != None:
            if (current.val== k): # check for the content (data)
            print(current.val)
            break
        current = current.next # move to the next node 
    
if (current == None):
print("could not find it :-(")
```

## Submission at 2024-09-09 05:37:23


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def get_kth_node(head, k):
    current = head
    if current == None:
        print("Empty")
    else:
        while current != None:
            if (current.val== k): # check for the content (data)
            print(current.val)
            break
        current = current.next # move to the next node 
    

```

## Submission at 2024-09-09 05:45:04


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


def get_kth_node(head, k):
    current = head
    if current == None:
        print("Empty")
    else:
        while current != None:
            if (current.val== k): 
                print(current.val)
                break
        current = current.next # move to the next node 

        if (curr == None):
            print("could not find it :-(")

```

## Submission at 2024-09-09 07:56:54


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    while head:
        result.append(head.data)
        print (head)
        head = head.next
    return result


```

## Submission at 2024-09-09 08:00:14


```
def fibonacci(x:int) -> int:
    assert x>=0 and int(x)==x,
    if x in [0,1]:
        return x
    else:
        return fibonaci(x-1)+fibonaci(x-2)

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 08:01:42


```
def fibonacci(x:int) -> int:
    assert x>=0 and int(x)==x
    if x in [0,1]:
        return x
    else:
        return fibonaci(x-1)+fibonaci(x-2)

    

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 08:39:47


```
# Write code from scratch
# Input reading
n = int(input())  # size of the arrays
a = list(map(int, input().split()))  # array a
b = list(map(int, input().split()))  # array b

# Create array c where each element is the maximum of a[i] and b[i]
c = [max(a[i], b[i]) for i in range(n)]

# Output the result
print(" ".join(map(str, c)))

```

## Submission at 2024-09-09 10:00:28


```
def pow_three(n):
    assert n>=0 and int(n)==n
    if n==0:
        return False
    elif n%3==0:
        result = pow_three(n//3)
        return result == 1
    else:
        return False

n = 27
print(pow_three(27))
```

## Submission at 2024-09-09 10:06:14


```
def pow_three(n):
    assert n>=1 and int(n)==n
    if n%3==0 or n==1:
        if n==1:
            return True
        else:
            result = pow_three(n//3)
            return result == 1
        
    else:
        return False

n = 27
print(pow_three(27))
```

## Submission at 2024-09-09 10:07:42


```
def pow_three(n):
    assert n>=1 and int(n)==n
    result = pow_three(n//3)
    if n%3==0 or result==1:
        if n==1:
            return True
        else:
            return result == 1
        
    else:
        return False

n = 27
print(pow_three(27))
```

## Submission at 2024-09-09 10:09:57


```
def pow_three(n):
    assert n>=1 and int(n)==n
    
    if n%3==0 :
        
        result = pow_three(n//3)
        return result//3 == 1
        
    else:
        return False

n = 27
print(pow_three(27))
```

## Submission at 2024-09-09 10:19:23


```
# Write code from scratch here
s = list(map(int, input().split()))
x = int(input.split)

l = s.len()
count = 0

while l=0 and l<=s.len():
    if s[l] == s[0]:
        count += 1
        l +=1

print(count)
```

## Submission at 2024-09-09 10:20:14


```
# Write code from scratch here
s = list(map(int, input().split()))
x = int(input.sprit)

l = s.len()
count = 0

while l=0 and l<=s.len():
    if s[l] == s[0]:
        count += 1
        l +=1

print(count)
```

## Submission at 2024-09-09 10:21:02


```
# Write code from scratch here
s = list(map(int, input().split()))
x = int(input.sprit)

l = s.len()
count = 0

for range l=0 and l<=s.len():
    if s[l] == s[0]:
        count += 1
        l +=1

print(count)
```

## Submission at 2024-09-09 10:35:32


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    current = head
    if(head != None):
        if(current == current.next):
        current = current.next
    
n = int(input())
s = list[map(int, input().split())]
removeDuplicates(5)


```

## Submission at 2024-09-09 10:35:47


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    current = head
    if(head != None):
        if(current == current.next):
        current = current.next
    
n = int(input())
s = list[map(int, input().split())]
removeDuplicates(n)


```

## Submission at 2024-09-09 10:43:02


```
# Write Code from Scratch here
def pow_three(n):
    assert n>=0 and int(n)==n
    if n==0:
        return False
    elif n%3==0:
        result = pow_three(n//3)
        return result == 1
    else:
        return False

n = map(int, input().split)
print(pow_three(n))
```

## Submission at 2024-09-16 03:57:26


```
# Write Code from Scratch here
def pow_three(n):
    assert n>=0 and int(n)==n
    if n==1:
        return True
    elif n%3==0:
        result = pow_three(n//3)
        return result == 1
    else:
        return False

n = 27
print(pow_three(27))
```

## Submission at 2024-09-16 04:04:05


```
def permute(nums):

    if len(nums) == 1:
        return [nums[:]]  
    
    result = []
    
    for i in range(len(nums)):
        current = nums[i]
        remaining = nums[:i] + nums[i+1:]
        
        for perm in permute(remaining):
            
            result.append([current] + perm)
    
    return result

def main():
    nums = list(map(int, input().strip().split()))

    permutations = permute(nums)

    permutations.sort()

    print(permutations)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-16 04:14:36


```
def permute(nums):

    if len(nums) == 1:
        return [nums[:]]  
    
    result = []
    
    for i in range(len(nums)):
        current = nums[i]
        remaining = nums[:i] + nums[i+1:]
        
        for perm in permute(remaining):
            
            result.append([current] + perm)
    
    return result

def main():
    nums = list(map(int, input().strip().split()))

    permutations = permute(nums)

    permutations.sort()

    print(permutations)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-16 06:18:46


```
def permute(nums):

    if len(nums) == 1:
        return [nums[:]]  
    
    result = []
    
    for i in range(len(nums)):
        current = nums[i]
        remaining = nums[:i] + nums[i+1:]
        
        for perm in permute(remaining):
            
            result.append([current] + perm)
    
    return result

def main():
    nums = list(map(int, input().strip().split()))

    permutations = permute(nums)

    permutations.sort()

    print(permutations)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-16 08:05:21


```
# Write Code from Scratch here
def pow_three(n):
    assert n >= 0 and int(n) == n  # Ensure n is a non-negative integer
    if n == 1:  # Base case: 3^0 = 1
        return True
    elif n == 0 or n % 3 != 0:  # If n is 0 or not divisible by 3, it's not a power of 3
        return False
    else:
        return pow_three(n // 3)  # Recursive case: keep dividing by 3

n = 27
print(pow_three(n))  # Output: True

```

## Submission at 2024-09-16 08:14:02


```
def count_digit_frequency(s: str, x: str) -> int:
    # Use the count method to count occurrences of x in s
    return s.count(x)

def main():
    # Input reading and processing
    s, x = input().strip().split()  # Split input into string s and char x
    
    # Get the count of occurrences of x in s
    print(count_digit_frequency(s, x))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-16 08:20:21


```
def count_digit_frequency(s: str, x: str) -> int:
    # Base case: If the string is empty, return 0
    if len(s) == 0:
        return 0
    
    # Recursive case: If the first character matches x, add 1 and recurse on the rest of the string
    if s[0] == x:
        return 1 + count_digit_frequency(s[1:], x)
    else:
        return count_digit_frequency(s[1:], x)

def main():
    # Input reading and processing
    s, x = input().strip().split()  # Split input into string s and char x
    
    # Get the count of occurrences of x in s
    print(count_digit_frequency(s, x))

if __name__ == "__main__":
    main()



```

## Submission at 2024-09-16 09:11:49


```
def replace_negatives(matrix, M, N):
    # Step 1: Find the maximum of each column
    col_max = [-float('inf')] * N  # Initialize max array for each column
    for j in range(N):
        for i in range(M):
            if matrix[i][j] != -1:  # We don't consider -1 for column max calculation
                col_max[j] = max(col_max[j], matrix[i][j])

    # Step 2: Create a copy of the matrix and replace -1 with column max
    answer = [row[:] for row in matrix]  # Make a copy of the matrix
    for i in range(M):
        for j in range(N):
            if matrix[i][j] == -1:
                answer[i][j] = col_max[j]

    return answer

# Input handling
def main():
    M, N = map(int, input().strip().split())  # Read dimensions
    matrix = []
    
    # Read the matrix
    for _ in range(M):
        row = list(map(int, input().strip().split()))
        matrix.append(row)
    
    # Get the modified matrix
    answer = replace_negatives(matrix, M, N)
    
    # Print the resulting matrix
    for row in answer:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-07 09:50:23


```
from collections import deque # Don't touch this line

def rev(q):
    n = len(q)
    result=[]

    while i in range (n) :
        result[i] = q[n-1-i]

    return result

```

## Submission at 2024-10-07 09:51:02


```
from collections import deque # Don't touch this line

def rev(q):
    n = len(q)
    result = []

    while i in range (n) :
        result[i] = q[n-1-i]

    return result

```

## Submission at 2024-10-07 10:10:05


```
def Math_expression(string):
    n = len(string)
    arr = []

    for i in range (0, n, 2):
        arr[i] = string[n]
    
    arr1 = []

    for j in range (0, n, 2):
        for i in range (0, len(arr)):
            if arr[i]==1:
                arr1[j]= arr[i]
            elif arr[i]==2:
                arr1[j]= arr[i]
            elif arr[i]==3:
                arr1[j]= arr[i]
            else:
                arr1[j]= ["+"]

    return arr1
```

## Submission at 2024-10-07 10:10:31


```
def Math_expression(string):
    n = len(string)
    arr = []

    for i in range (0, n, 2):
        arr[i] = string[n]
    
    arr1 = []

    for j in range (0, n, 2):
        for i in range (0, len(arr)):
            if arr[i]==1:
                arr1[j]= arr[i]
            elif arr[i]==2:
                arr1[j]= arr[i]
            elif arr[i]==3:
                arr1[j]= arr[i]
            else:
                arr1[j]= ["+"]

    return arr1
```

## Submission at 2024-10-07 10:54:53


```
def Robin(n, arry):
    n = len(arry)
    max_num = 1
    count = 0

    for i in range (n-1):
        if max_num < arry[i]:
            max_num = arry[i]
            count += 1
        
    arry[count-1] = max_num + 15

    sum1 = sum(arry)// 2*n 

    count1 = 0

    for j in range (n-1) :
        if arry[j]< sum1:
            count += 1
    
    if count > (n//2):
        return 1
    else:
        return -1

```

## Submission at 2024-10-14 10:03:41


```
def rearrange_sum(s):
    # Split the input string by "+" to get the individual numbers as strings
    numbers = s.split("+")
    
    # Convert the list of string numbers to integers for sorting
    numbers = [int(num) for num in numbers]
    
    # Sort the numbers
    numbers.sort()
    
    # Convert the sorted numbers back to strings
    sorted_numbers = [str(num) for num in numbers]
    
    # Join the sorted numbers with "+" to form the new sum string
    result = "+".join(sorted_numbers)
    
    # Print the result
    print(result)

# Example usage
rearrange_sum("3+2+1")  # Output: "1+2+3"
rearrange_sum("1+3+2+1")  # Output: "1+1+2+3"
rearrange_sum("2")  # Output: "2"

```

## Submission at 2024-10-14 10:03:59


```
def rearrange_sum(s):
    # Split the input string by "+" to get the individual numbers as strings
    numbers = s.split("+")
    
    # Convert the list of string numbers to integers for sorting
    numbers = [int(num) for num in numbers]
    
    # Sort the numbers
    numbers.sort()
    
    # Convert the sorted numbers back to strings
    sorted_numbers = [str(num) for num in numbers]
    
    # Join the sorted numbers with "+" to form the new sum string
    result = "+".join(sorted_numbers)
    
    # Print the result
    print(result)


```

## Submission at 2024-10-28 08:28:19


```
# Write Code from Scratch
class Solution(object):
    def pow_three(n):
        assert n>=0 and int(n)==n
        if n==0:
            return False
        elif n%3==0:
            result = pow_three(n//3)
            return result == 1
        else:
            return False



```

## Submission at 2024-10-28 08:33:40


```
# Write Code from Scratch
class Solution(object):
    @staticmethod
    def pow_three(n):
        assert n >= 0 and int(n) == n
        if n == 1:  # Base case: if n is 1, it's a power of three
            return True
        elif n == 0 or n % 3 != 0:  # If n is 0 or not divisible by 3, it's not a power of three
            return False
        else:
            # Recursively check for n divided by 3
            return Solution.pow_three(n // 3)

def main():
    n = int(input("Enter a number: "))
    m = Solution.pow_three(n)
    print(m)

if __name__ == "__main__":
    main()


```

## Submission at 2024-10-28 10:00:13


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
    def findMin(self,root):
        #code here
        minimum = None
        def min(node):
            minimum = None
            for num in node:
                if num <= minimum:
                    minimum = num
        minimum = min(root)
        return minimum


```

## Submission at 2024-10-28 10:02:42


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
    def findMin(self,root):
        #code here
        minimum = None
        def min(node):
            minimum = None
            if num <= minimum:
                minimum = num
            else:
                num = num.right
        minimum = min(root)
        return minimum


```

## Submission at 2024-10-28 10:03:25


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
    def findMin(self,root):
        #code here
        minimum = None
        def min(node):
            minimum = None
            if num < minimum:
                minimum = num
            else:
                num = num.right
        minimum = min(root)
        return minimum


```

## Submission at 2024-10-28 10:05:10


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
    def findMin(self,root):
        #code here
        minimum = None
        def min(node):
            minimum = None
            if num < minimum:
                minimum = num
            else:
                min(node.right)
        minimum = min(root)
        return minimum


```

## Submission at 2024-10-28 10:41:35


```
# write code from scratch
class Solution(object):
    def kOccurence(self, nums, k):
        result = {}
        for num in nums:
            if num in result:
                result[num] += 1
            else:
                result.append(num, 1)
        
        if result[num] >= k:
            return num
 

```

## Submission at 2024-10-28 10:59:54


```

def kOccurence( nums, k):

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
 

k = 2
nums= [1 , 2 , 3 , 4 , 4 , 4 , 4]
ans = kOccurence(nums, k)
print(ans)

```

## Submission at 2024-10-28 11:02:04


```

def kOccurence( nums, k):

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
 

k = 2
nums= [1 , 2 , 3 , 4 , 4 , 4 , 4]
ans = kOccurence(nums, k)
print(ans)

```

## Submission at 2024-10-28 11:05:12


```
# write code from scratch
def kOccurence( nums, k):

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
 

m = list(map(int, input().split()))
k = m[0]
nums= list(map(int, input().split()))
ans = kOccurence(nums, k)
print(ans)

```

## Submission at 2024-10-28 11:06:36


```
# write code from scratch
def kOccurence( nums, k):

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
 

m = list(map(int, input().split(" ")))
k = m[0]
nums= list(map(int, input().split(" ")))
ans = kOccurence(nums, k)
print(ans)
```

## Submission at 2024-10-28 11:08:29


```
# write code from scratch
def kOccurence( nums, k):

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
    return -1

m = list(map(int, input().split(" ")))
k = m[0]
nums= list(map(int, input().split(" ")))
ans = kOccurence(nums, k)
print(ans)
```

## Submission at 2024-10-28 11:10:01


```
# write code from scratch
def kOccurence( nums, k):

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
    return -1

m = list(map(int, input().split()))
k = m[0]
nums= list(map(int, input().split()))
ans = kOccurence(nums, k)
print(ans)
```

## Submission at 2024-11-18 06:25:10


```
# write code from scratch
def find_at_least_k_occurrences():
    # Read the inputs
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    # Count the occurrences of each number
    frequency = {}
    for num in arr:
        frequency[num] = frequency.get(num, 0) + 1

    # Find the first element with at least k occurrences
    for num in arr:
        if frequency[num] >= k:
            print(num)
            return

    # If no element is found, return -1
    print(-1)

# Example usage
# Input:
# 7 2
# 1 2 3 4 4 4 4
# Expected Output:
# 4
find_at_least_k_occurrences()

```

## Submission at 2024-11-18 07:20:36


```


# Example usage
# Input:
# 7 2
# 1 2 3 4 4 4 4
# Expected Output:


# write code from scratch
def kOccurence():
    
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
        
    if result[num] >= k:
        return num
    return -1


ans = kOccurence()
print(ans)

```

## Submission at 2024-11-18 07:30:22


```
def find_at_least_k_occurrences():
    # Read the inputs
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    # Count the occurrences of each number
    frequency = {}
    for num in arr:
        frequency[num] = frequency.get(num, 0) + 1

    # Find the first element with at least k occurrences
    for num in arr:
        if frequency[num] >= k:
            print(num)
            return

    # If no element is found, return -1
    print(-1)

# Example usage
# Input:
# 7 2
# 1 2 3 4 4 4 4
# Expected Output:
# 4
find_at_least_k_occurrences()


# Example usage
# Input:
# 7 2
# 1 2 3 4 4 4 4
# Expected Output:


# write code from scratch
def kOccurence():
    
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1

    for num in nums:
        if result[num] >= k:
            return num
    return -1


ans = kOccurence()
print(ans)

```

## Submission at 2024-11-18 07:31:34


```

# write code from scratch
def kOccurence():
    
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1

    for num in nums:
        if result[num] >= k:
            return num
    return -1


ans = kOccurence()
print(ans)

```

## Submission at 2024-11-18 08:16:06


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
    def findMax(self, root):
        if root is None:
            return float('-inf')
        
        min_value = float('-inf')

        from collections import deque
        queue = deque([root])

        while queue:
            current = queue.popleft()

            min_value = max(min_value, current.data)

            if current.left:
                queue.append(current.left)

            if current.right:
                queue.append(current.left)

        return min_value

```

## Submission at 2024-11-18 08:24:52


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
        # Helper function to check if two subtrees are mirrors of each other
        def is_mirror(t1, t2):
            # If both subtrees are None, they are mirrors
            if not t1 and not t2:
                return True
            # If one is None and the other is not, they are not mirrors
            if not t1 or not t2:
                return False
            # Check if the current nodes match and their children are mirrors
            return (t1.data == t2.data and
                    is_mirror(t1.left, t2.right) and
                    is_mirror(t1.right, t2.left))
        
        # A tree is symmetric if the left and right subtrees are mirrors
        return is_mirror(root, root)

```

## Submission at 2024-11-25 09:51:51


```
def starpattern(n):
    for i in range(1, n+1):
        print("*", end="")

        for j in range (n - i - 1):
            print(" ", end="")
        print("")

n = int(input())
starpattern()

```

## Submission at 2024-11-25 09:53:35


```
def starpattern(n):
    for i in range(1, n+1):
        print("*", end="")

        for j in range (n - i - 1):
            print(" ", end="")
        print("")

n = int(input())
starpattern(n)

```

## Submission at 2024-11-25 09:54:10


```
def starpattern(n):
    for i in range(1, n+1):
        print("*", end="")

        for j in range (n - i):
            print(" ", end="")
        print("")

n = int(input())
starpattern(n)

```

## Submission at 2024-11-25 09:55:51


```
def starpattern(n):
    for i in range(1, n+1):

        for j in range (0, i):
            print("*", end="")
        for k in range (2*i+1):
            print(" ", end="")
        print("")

n = int(input())
starpattern(n)

```

## Submission at 2024-11-25 09:56:52


```
def starpattern(n):
    for i in range(1, n+1):

        for j in range (0, i):
            print("*", end="")
        for k in range (2*i+1):
            print(" ", end="")
        print("")

n = int(input())
starpattern(n)

```

## Submission at 2024-11-25 10:07:38


```
def count():
    string = list(map(str, input.split()))
    n = string.len()
    fre = {}
    for stri in string:
        fre[stri] = frequency.get[stri, 0]+1

    for stri in string:
        if fre[stri] > 4:
            print(stri)
            return 
            
```

## Submission at 2024-11-25 10:10:45


```
def count():
    string = list(map(str, input.strip().split()))
    n = string.len()
    fre = {}
    for stri in string:
        fre[stri] = frequency.get[stri, 0]+1

    for stri in string:
        if fre[stri] > 4:
            print(stri)
            return 
            
```

## Submission at 2024-11-25 10:17:00


```
def count():
    
    string = ["a", "b", "b", "a", "a"]
    n = string.len()
    fre = {}
    maxi = float("inf")
    for stri in string:
        fre[stri] = frequency.get[stri, 0]+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 
            
```

## Submission at 2024-11-25 10:18:12


```
def count():
    
    string = ["a", "b", "b", "a", "a"]
    n = string.len()
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get[stri, 0]+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 
            
```

## Submission at 2024-11-25 10:19:27


```
def count():
    
    string = ["a", "b", "b", "a", "a"]
    n = string.len()
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get[stri, 0]+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 
            
count()          
```

## Submission at 2024-11-25 10:20:55


```
def count():
    
    string = ["a", "b", "b", "a", "a"]
    
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get[stri, 0]+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 
            
print(count())          
```

## Submission at 2024-11-25 10:24:28


```
def count(string):
    
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 

string = list(map(str, input.split()))
count(string)           
```

## Submission at 2024-11-25 10:26:18


```
def count(string):
    
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 

string = list(map(str, input.split().strip()))
count(string)           
```

## Submission at 2024-11-25 10:28:57


```
def count():
    string = list(map(str, input.split()))
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 


count()           
```

## Submission at 2024-11-25 10:30:10


```
def count():
    string = map(list(str, input.split()))
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 


count()           
```

## Submission at 2024-11-25 10:31:37


```
def count():
    string = map(list(chr, input.split()))
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 


count()           
```

## Submission at 2024-11-25 10:33:19


```
def count():
    string = list(map(chr, input.split()))
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 


count()           
```

## Submission at 2024-11-25 10:44:45


```
def ap():
    n = int(input())
    nums = list(map(int, input.split()))

    d = arr[1] - arr[0]

    for i in range (n):
        if arr[i+1] - arr[i] == d:
            return True
        else:
            return False
    return False
print(ap())
```

## Submission at 2024-11-25 10:48:12


```
def ap():
    n = int(input())
    nums = list(map(int, input.split()))

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            return True
        else:
            return False
    return False
    
print(ap())
```

## Submission at 2024-11-25 10:50:37


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            return True
        else:
            return False
    return False

n = int(input())
nums = list(map(int, input.split()))
print(ap(n, nums))
```

## Submission at 2024-11-25 10:52:26


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = 5
nums = [-5, -2, 1, 4, 8]
ap(n, nums)
```

## Submission at 2024-11-25 10:54:18


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (1, n, 1):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = 5
nums = [-5, -2, 1, 4, 8]
ap(n, nums)
```

## Submission at 2024-11-25 10:58:00


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (3, n, 1):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = 5
nums = [-5, -2, 1, 4, 8]
ap(n, nums)
```

## Submission at 2024-11-25 11:03:27


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = int(input())
nums = list(map(int, input.split(" ")))
ap(n, nums)

```

## Submission at 2024-11-25 11:05:26


```
def count():
    string = list(map(chr, input.split("")))
    fre = {}
    maxi = float("-inf")
    for stri in string:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in string:
        if fre[stri] == maxi:
            print(stri)
            return 


count() 
```

## Submission at 2024-11-25 11:07:15


```
def count(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = ["a", "b", "b", "a", "a"]
count(arr) 
```

## Submission at 2024-11-25 11:08:27


```
def count(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = [a, b, b, a, a]
count(arr) 
```

## Submission at 2024-11-25 11:10:13


```
def count(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = frequency.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = ["a", "b", "b", "a", "a"]
count(arr) 
print("a")
```

## Submission at 2024-11-25 11:12:08


```
def a_and_b(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = fre.get{stri, 0}+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = ["a", "b", "b", "a", "a"]
a_and_b(arr) 

```

## Submission at 2024-11-25 11:12:38


```
def a_and_b(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = fre.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = ["a", "b", "b", "a", "a"]
a_and_b(arr) 

```

## Submission at 2024-11-25 11:13:32


```
def a_and_b(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = fre.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = list(map(chr, input.split()))
a_and_b(arr) 

```

## Submission at 2024-11-25 11:14:14


```
def a_and_b(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = fre.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = list(map(int, input.split()))
a_and_b(arr) 

```

## Submission at 2024-11-25 11:14:48


```
def a_and_b(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = fre.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = list(map(chr, input.strip()))
a_and_b(arr) 

```

## Submission at 2024-11-25 11:15:10


```
def a_and_b(arr):
    
    fre = {}
    maxi = float("-inf")
    for stri in arr:
        fre[stri] = fre.get(stri, 0)+1
        maxi = max(maxi, fre[stri])

    for stri in arr:
        if fre[stri] == maxi:
            print(stri)
            return 

arr = list(map(chr, input.strip().split()))
a_and_b(arr) 

```

## Submission at 2024-11-25 11:21:39


```
def bst(nums):
    for i in range (n):
        if (nums[i] < nums[i+1]):
            print("true")
            return True 
        else:
            print("false")
            return False 
        return False

nums = [2, 4, 5]
bst(nums)

```

## Submission at 2024-11-25 11:23:41


```
def bst(nums):
    n = len(nums)
    for i in range (n):
        if (nums[i] < nums[i+1]):
            print("YES")
            return True 
        else:
            print("NO")
            return False 
        return False

nums = [2, 4, 5]
bst(nums)

```

## Submission at 2024-11-25 11:24:51


```
def bst(nums):
    n = len(nums)
    for i in range (n):
        if (nums[i] < nums[i+1]):
            print("YES")
            return True 
        else:
            print("NO")
            return False 
        return False

nums = list(map(int, input.split()))
bst(nums)

```

## Submission at 2024-11-25 11:25:40


```
def bst(nums):
    n = len(nums)
    for i in range (n):
        if (nums[i] < nums[i+1]):
            print("YES")
            return True 
        else:
            print("NO")
            return False 
        return False

nums = list(map(int, input.split(" ")))
bst(nums)

```

## Submission at 2024-11-25 11:26:25


```
def bst(nums):
    n = len(nums)
    for i in range (n):
        if (nums[i] < nums[i+1]):
            print("YES")
            return True 
        else:
            print("NO")
            return False 
        return False

nums = list(map(int, input()))
bst(nums)

```

## Submission at 2024-11-25 11:28:45


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = int(input)
nums = list(map(int, input()))
ap(n, nums)
```

## Submission at 2024-11-25 11:29:59


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = int(input())
nums = list(map(int, input()))
ap(n, nums)
```

## Submission at 2024-11-25 11:33:43


```
def ap(n, nums):

    d = nums[1] - nums[0]

    for i in range (n):
        if nums[i+1] - nums[i] == d:
            print("true")
            return True
        else:
            print("false")
            return False
    return False

n = int(input())
nums = list(map(int, input().split()))
ap(n, nums)
```

## Submission at 2024-11-25 11:41:40


```
def ap(n, nums):

    d = nums[1] - nums[0]
    j = 0
    for i in range (n):
        if nums[i+1] - nums[i] == d:
            j += 1
    if j == n:
        print("true")
    else:
        print("false")        
    

n = int(input())
nums = list(map(int, input().split()))
ap(n, nums)
```

## Submission at 2024-11-25 11:43:46


```
def ap(n, nums):

    d = nums[1] - nums[0]
    j = 0
    for i in range (n):
        if nums[i+1] - nums[i] == d:
            j += 1
            
    if j == n:
        print("true")
        return True
    else:
        print("false")    
        return False 
    return False    
    

n = int(input())
nums = list(map(int, input().split()))
ap(n, nums)
```

