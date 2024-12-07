## Submission at 2024-08-16 04:42:57


```


def fibonacci_series(x):
    if x == 0:
        return [0]
    elif x == 1:
        return [0, 1]
    
    fib_series = [0, 1]
    while True:
        next_value = fib_series[-1] + fib_series[-2]
        if next_value > x:
            break
        fib_series.append(next_value)
    
    return fib_series

x = 30  
result = fibonacci_series(x)
print(f"Fibonacci series up to {x}: {result}")
```

## Submission at 2024-08-16 05:06:36


```
def fibonacci(x:int) -> int:
    if x <= 1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)
    return x

def main():
        x = int(input().strip())

        print(fibonacci(x))

if __name__=="__main__":
    main()
    
```

## Submission at 2024-08-16 05:50:19


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n == 1:
        return "true"
    elif n <= 0 or n % 2 != 0:
        return "false"
    else:
        return is_power_of_two(n // 2)


def main():
    n = int(input().strip())

    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:05:13


```
def permute(nums):
    result = []
    nums.sort()
    while True: 
        result.append(nums[:])
        next_perm = None
        for i in range(len(nums) - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                next_perm = i
                break
        if next_perm is None:
            break
        for j in range(len(nums) - 1, next_perm, -1):
            if nums[j] > nums[next_perm]:
                nums[j], nums[next_perm] = nums[next_perm], nums[j]
                nums[next_perm + 1:] = reversed(nums[next_perm + 1:])
                break
    return result

if __name__ == "__main__":
    nums = list(map(int, input().split()))
    permutations = permute(nums)
    print(permutations)

```

## Submission at 2024-08-22 06:21:04


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.peek() == '\n') break;
    }
    vector<vector<int>> permutations = permute(nums);
    cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < permutations.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-22 08:41:41


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        combine(i + 1, k - 1, n, current, result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print combinations
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

## Submission at 2024-08-22 08:44:29


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-22 08:46:19


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-22 08:48:28


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-22 08:50:41


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-29 08:34:39


```
def are_arrays_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False

    count1 = {}
    count2 = {}

    for num in arr1:
        count1[num] = count1.get(num, 0) + 1

    for num in arr2:
        count2[num] = count2.get(num, 0) + 1

    return count1 == count2

def main():
    size1, size2 = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    if are_arrays_equal(arr1, arr2):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:48:27


```
def main():
    n = int(input())
    total_sum = 0
    for i in range(1, n + 1):
        if i % 7 == 0 or i % 3 == 0 or i % 5 == 0:
            total_sum += i
    print(total_sum)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:48:50


```
def main():
    n = int(input())
    total_sum = 0
    for i in range(1, n + 1):
        if i % 7 == 0 or i % 3 == 0 or i % 5 == 0:
            total_sum += i
    print(total_sum)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:50:39


```
def count_even_digit_numbers(nums):
    count = 0
    for num in nums:
        digits = len(str(num))
        if digits % 2 == 0:
            count += 1
    return count

def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result = count_even_digit_numbers(nums)
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:53:04


```
def kth_positive_integer(arr, k):
    missing_cnt = 0
    curr = 1
    i = 0
    
    while True:
        if i < len(arr) and arr[i] == curr:
            i += 1
        else:
            missing_cnt += 1
            if missing_cnt == k:
                return curr
        curr += 1

def main():
    length, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    kth_int = kth_positive_integer(arr, k)
    print(kth_int)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 08:55:15


```
def triangular_sum(nums):
    if len(nums) == 1:
        return nums[0]

    temp = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    return triangular_sum(temp)

def main():
    length = int(input())
    n = list(map(int, input().split()))

    sum_result = triangular_sum(n)
    print(sum_result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 09:49:26


```
def main():
    M, N = map(int, input().split())

    matrix = []
    for _ in range(M):
        row = list(map(int, input().split()))
        matrix.append(row)

    transpose = [[0] * M for _ in range(N)]
    for i in range(M):
        for j in range(N):
            transpose[j][i] = matrix[i][j]

    for i in range(N):
        for j in range(M):
            print(transpose[i][j], end=" ")
        print()

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-29 10:01:10


```
def spiral_matrix_traversal(matrix):
    result = []
    rows, cols = len(matrix), len(matrix[0])
    top, bottom, left, right = 0, rows - 1, 0, cols - 1

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
    matrix = [list(map(int, input().split())) for _ in range(n)]

    traversal_order = spiral_matrix_traversal(matrix)
    print(*traversal_order)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:55:33


```


def palindrome(s1):
    def checkPalindrome(left, right):
        if left >= right:
            return true
        if s[left] != s[right]:
            return false
        return 

checkPalindrome(left+1, right -1)

     
clean_s = ' '.join(char.lower() for char in s if char.isalnum()) 
    
return clean_s == clean_s[::-1]

s1 = input().split()

print(palindrome(s1))
        if palindrome(s1):
            print(YES)
        else:
            print(NO)
    
    

    
    


```

## Submission at 2024-08-30 06:08:02


```
# write from scratch, create a function named Pow(x:int , n:int)
def power_raised(x,n):
    if n == 0:
        return 1
    if n<0:
        return 1/pow(x,n//2)

    if n%2 == 0:
        half_power = (x,n//2)
        return half_power * half_power
    else:
        return x* power(x,n-1)

    
    
    
        
        
        
    
```

## Submission at 2024-10-04 05:33:38


```
def temperature(nums):
    for i in range(nums):
        for j in range(i):
            if nums[j+1] > nums[j]:
                return pos(nums[j+1])
            else:
                return 0 
nums = [73,74,71,75]

```

## Submission at 2024-10-04 05:43:57


```
def temperature(nums):
    for i in range(nums):
        for j in range(i):
            if nums[j+1] > nums[j]:
                return pos(nums[j+1])
            elif nums[j+1] < nums[j]:
                return pos(nums[j+2])
            else:
                return 0 
nums = [73,74,71,75]

```

## Submission at 2024-10-04 05:51:16


```

def buytickets(n):
    time = 0
    queue = deque()

    for i in range(n):
        if queues.pop(n): 
            return queues.append(left(n-1))
            time += 1
    return time

n = [2,3,2]



    


```

## Submission at 2024-10-04 05:51:19


```

def buytickets(n):
    time = 0
    queue = deque()

    for i in range(n):
        if queues.pop(n): 
            return queues.append(left(n-1))
            time += 1
    return time

n = [2,3,2]



    


```

## Submission at 2024-10-04 05:51:19


```

def buytickets(n):
    time = 0
    queue = deque()

    for i in range(n):
        if queues.pop(n): 
            return queues.append(left(n-1))
            time += 1
    return time

n = [2,3,2]



    


```

## Submission at 2024-10-04 06:27:30


```
from collections import queues
def buytickets(n):
    time = 0
    queues = deque()

    for i in range(n):
        if deque.pop(n): 
            return queues.append(n-1)
            time += 1
    return time

n = [2,3,2]

```

## Submission at 2024-10-25 05:56:24


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
    ans[]
    stack[]
    if none:
      return false
    while stack or root:
      if node:
        stack.append(stack)
        stack.append(ans)
        node = node.right
      else:
        stack.append(stack)


```

## Submission at 2024-10-25 06:26:37


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
    ans[]
    stack[]
    if none:
      return false
      while stack or node:
        if node:
          stack.append(ans)
          stack.append(stack)
          node = node.right
        else:
          stack.append(stack)
    
```

## Submission at 2024-10-25 06:39:28


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
    # Node Class:
  class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
    def postOrder(root):
      ans[]
      stack[]
      if none:
        return false
      while stack or node:
        if node:
          stack.append(ans)
          stack.append(stack)
          node = node.right
        else:
          stack.append(ans)
'''



```

## Submission at 2024-11-15 05:30:28


```
def is_anagram(s, t):
    # Check if the lengths of the two strings are equal
    if len(s) != len(t):
        return False
    # Sort the characters of both strings and compare them
    return sorted(s) == sorted(t)

# Get user input
s = input()
t = input()

# Check if the strings are anagrams
result = is_anagram(s, t)
print(result)





```

## Submission at 2024-11-22 05:06:04


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
        if root is root.node:
            return root
        
        while root is root.node:
            if root.node < right.subtree:
                return root.right
            if root.node > left.subtree:
                return root.left

    
```

## Submission at 2024-11-22 05:14:48


```
print("10") 
```

## Submission at 2024-11-22 05:28:24


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
        if root is root.node:
            return root
        
        while root is root.node:
            if root.node < right.subtree:
                return right.subtree
            if root.node > left.subtree:
                return left.subtree
        
        if right.subtree and left.subtree:
            print("true")

```

## Submission at 2024-11-22 05:48:09


```
def sumofarray(n):
    arr = [1,2,3,4]

    if arr = null:
        return 0 
    else:
        return sumofarray(n)
```

## Submission at 2024-11-22 05:48:40


```
def sumofarray(n):
    arr = [1,2,3,4]

    if arr = null:
        return 0 
    else:
        return sumofarray(n)
```

## Submission at 2024-11-22 05:49:14


```
def sumofarray(n):
    arr = [1,2,3,4]

    if arr = null:
        return 0 
    else:
        return sumofarray(n)
```

## Submission at 2024-11-22 05:49:29


```
def sumofarray(n):
    arr = [1,2,3,4]

    if arr = null:
        return 0 
    else:
        return sumofarray(n)
```

## Submission at 2024-11-22 05:53:24


```
def sumofarray(n):
    arr = [1,2,3,4]

    if arr == null:
        return 0 
    else:
        return sumofarray(n)
```

## Submission at 2024-11-22 06:23:44


```
print("2")
```

