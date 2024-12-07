## Submission at 2024-08-05 10:12:08


```
# Write your Python code here from the scratch
print("Hello Ansh!")
```

## Submission at 2024-08-05 10:18:18


```
# Write your Python code here from the scratch
char Name = Ansh
print("Hello" + Name)
```

## Submission at 2024-08-05 10:19:13


```
# Write your Python code here from the scratch
print("Hello Ansh!")
```

## Submission at 2024-08-05 10:23:52


```
# Write your Python code here from the scratch
name = input()
print("Hello", name + "!")
```

## Submission at 2024-08-05 10:27:11


```
# Write your Python code here from the scratch
# Read the user's name from the input
name = input()

# Print the greeting
print("Hello", name + "!")
```

## Submission at 2024-08-05 10:27:37


```
# Write your Python code here from the scratch
# Read the user's name from the input
name = input()

# Print the greeting
print("Hello", name + "!")
```

## Submission at 2024-08-05 10:31:24


```
# Write your Python code here
# Read the number of users
n = int(input())

for _ in range(n):
    name = input()
    
    print("Hello", name + "!")
```

## Submission at 2024-08-12 10:23:21


```
def fibonacci(x:int) -> int:
    if (x == 0):
        return 0
    elif (x == 1):
        return 1
        return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:23:53


```
def fibonacci(x:int) -> int:
    if (x == 0):
        return 0
    elif (x == 1):
        return 1
        return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:26:17


```
def fibonacci(x:int) -> int:
    if (x == 0):
        return 0
    elif (x == 1):
        return 1
        return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:30:40


```
def fibonacci(x:int) -> int:
    if (x == 0):
        return 0
    elif (x == 1):
        return 1
        return fibonacci(x) == fibonacci(x-1) + fibonacci(x-2)
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:34:10


```
def fibonacci(x:int) -> int:
    if (x == 0):
        return 0
    elif (x == 1):
        return 1
        return fibonacci(x) == fibonacci(x-1) + fibonacci(x-2)
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:41:15


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return 1;
    }
    if(n<1){
        return 0;
    }
    return (n%2==0)&& isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-08-14 07:32:50


```
def fibonacci(x:int) -> int:
    if (x==0):
        return 0
    elif (x==1):
        return 1
    else:
        return (fibonacci(x-1) + fibonacci(x-2))

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 09:29:06


```
from itertools import combinations

def combine(n, k):
    # Generate all combinations of k elements from the range [1, n]
    return list(combinations(range(1, n + 1), k))

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Convert tuples to lists and sort the result
    result = [list(comb) for comb in result]
    result.sort()

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

## Submission at 2024-08-16 09:31:48


```
import itertools

def all_permutations(nums):
    # Generate all permutations
    permutations = list(itertools.permutations(nums))
    
    # Convert tuples to lists for the desired output format
    permutations = [list(perm) for perm in permutations]
    
    # Sort permutations
    permutations.sort()
    
    return permutations

# Example usage:
nums = [1, 2, 3]
result = all_permutations(nums)
print(result)

```

## Submission at 2024-08-16 09:38:20


```
def permute(nums):
    def backtrack(start):
        # If we've reached the end, add the permutation to the result
        if start == len(nums):
            result.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            # Swap the current index with the start index
            nums[start], nums[i] = nums[i], nums[start]
            # Recurse on the remaining list
            backtrack(start + 1)
            # Swap back to backtrack
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    result.sort()  # Sort the result list of permutations
    return result

# Example usage:
nums = [1, 2, 3]
result = permute(nums)
print(result)

```

## Submission at 2024-08-16 09:41:12


```
#include <iostream>
#include <vector>
#include <algorithm>

// Function to generate all permutations using backtracking
void permuteHelper(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        permuteHelper(nums, start + 1, result);
        std::swap(nums[start], nums[i]); // backtrack
    }
}

std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    permuteHelper(nums, 0, result);
    std::sort(result.begin(), result.end()); // Sort permutations
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> result = permute(nums);

    // Print result in the required format
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i < result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-16 09:46:54


```
def generate_parentheses(n):
    def backtrack(s, left, right):
        if len(s) == 2 * n:
            combinations.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)
    
    combinations = []
    backtrack('', 0, 0)
    return combinations

# Example usage:
n = 3
print(generate_parentheses(n))

```

## Submission at 2024-08-16 09:47:58


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backtrack(string s, int left, int right, int n, vector<string>& combinations) {
    if (s.length() == 2 * n) {
        combinations.push_back(s);
        return;
    }
    
    if (left < n) {
        backtrack(s + '(', left + 1, right, n, combinations);
    }
    if (right < left) {
        backtrack(s + ')', left, right + 1, n, combinations);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> combinations;
    backtrack("", 0, 0, n, combinations);
    return combinations;
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;
    
    vector<string> result = generateParentheses(n);
    
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 09:52:48


```
def generate_parentheses(n):
    def generate(p, left, right, parens=[]):
        if len(p) == 2 * n:
            parens.append(p)
            return
        if left < n:
            generate(p + '(', left + 1, right, parens)
        if right < left:
            generate(p + ')', left, right + 1, parens)
    
    result = []
    generate('', 0, 0, result)
    return result

def main():
    try:
        n = int(input())
        if n < 0:
            raise ValueError("The number of pairs must be a non-negative integer.")
    except ValueError as e:
        print(e)
        return
    
    combinations = generate_parentheses(n)
    print(combinations)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 09:54:01


```
def generate_parentheses(n):
    def generate(p, left, right):
        if len(p) == 2 * n:
            combinations.append(p)
            return
        if left < n:
            generate(p + '(', left + 1, right)
        if right < left:
            generate(p + ')', left, right + 1)
    
    combinations = []
    generate('', 0, 0)
    return combinations

def main():
    try:
        n = int(input())
        if n < 0:
            raise ValueError("The number of pairs must be a non-negative integer.")
    except ValueError as e:
        print(e)
        return
    
    results = generate_parentheses(n)
    print(results)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 09:57:44


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Helper function to generate combinations
void generateParenthesesHelper(string current, int left, int right, int n, vector<string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    if (left < n) {
        generateParenthesesHelper(current + '(', left + 1, right, n, result);
    }
    if (right < left) {
        generateParenthesesHelper(current + ')', left, right + 1, n, result);
    }
}

// Function to generate all combinations of well-formed parentheses
vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesesHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    if (n < 0) {
        cout << "The number of pairs must be a non-negative integer." << endl;
        return 1;
    }

    vector<string> combinations = generateParentheses(n);

    cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-09-02 09:57:22


```
def traverse_linked_list(head):
    def recurse(node):
        # Base case: if the node is None, return an empty list
        if node is None:
            return []
        # Recursive case: get the list from the next node and prepend the current node's value
        return [node.val] + recurse(node.next)
    
    return recurse(head)

```

## Submission at 2024-09-02 09:59:58


```
def traverse_linked_list(head):
    def recurse(node):
        # Base case: if the node is None, return an empty list
        if node is None:
            return []
        # Recursive case: get the list from the next node and prepend the current node's value
        return [node.val] + recurse(node.next)
    
    return recurse(head)

```

## Submission at 2024-09-02 10:04:11


```
def max_arrays(n, a, b):
    # Create array c where each element is the maximum of corresponding elements in a and b
    c = [max(a[i], b[i]) for i in range(n)]
    # Print the result as space-separated integers
    print(" ".join(map(str, c)))

# Reading input
n = int(input().strip())
a = list(map(int, input().strip().split()))
b = list(map(int, input().strip().split()))

# Call the function with the input values
max_arrays(n, a, b)

```

## Submission at 2024-09-02 10:21:18


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    def recursive_get(node, k):
        # Base case: if node is None, return -1 (end of list)
        if node is None:
            return -1
        
        # Base case: if k is 1, return the value of the current node
        if k == 1:
            return node.val
        
        # Recursive case: move to the next node and decrease k by 1
        return recursive_get(node.next, k - 1)
    
    return recursive_get(head, k)

```

## Submission at 2024-09-02 10:25:02


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    def recursive_get(node, k):
        # Base case: if node is None, return -1 (end of list)
        if node is None:
            return -1
        
        # Base case: if k is 1, return the value of the current node
        if k == 1:
            return node.val
        
        # Recursive case: move to the next node and decrease k by 1
        return recursive_get(node.next, k - 1)
    
    return recursive_get(head,k)

```

## Submission at 2024-09-09 09:30:39


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return True
    elif n<1:
        return False
    else:
        return (n%2==0) & is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 09:56:18


```
def power_of(int):
    if n==1:
        return true
    elif n==0:
        return false
    else:
        return (n%3==0) & power_of(n/3)

def main():
    x = int(input())
    print (power_of(x))
    return bool
```

## Submission at 2024-09-09 10:41:22


```
x = int
n = int
def power_of_n():
    if n==1:
        return true
    elif n==0:
        return false
    else:
        return (n==3) & pow(3,1)
    return

def main():
    print (power_of_n())
    return

main()
```

## Submission at 2024-09-09 10:56:02


```
n = 27
def power_of(n):
    if n==1:
        return true
    elif n==0:
        return false
    else:
        return (n==27)

def main():
    print(power_of(n))
    return bool
    
    return

main()
```

## Submission at 2024-09-09 11:10:02


```
def main():
    s = (input())
    x = (input())
    if x in s:
        return 
        for s in range(0,9):
            print(x)
    return

main()
```

## Submission at 2024-10-07 10:03:09


```
class Solution:
    def Mathcalculation(self, nums):
        num = nums.sort
        for i in range(len(nums)):
            if num != nums:
                print(num[i], '+' ,num[i+1])
            elif num <= nums:
                print(nums[i], '+' ,num[i+1])
        return

```

## Submission at 2024-10-07 10:29:24


```
class Solution:
    def Coins(nums):
        count = 0
        num = [1,1,1,2,5,5]
        for num in nums:
            if len(nums) < 3:
                return -1
        return nums[0]

def main():
    solution = Solution
    nums = input()
    result = Solution.Coins(nums)
    print(result)
    return

main()
```

## Submission at 2024-10-07 10:57:40


```
def Mathsum(nums):
    pos_count = 0
    neg_count = 0
    for num in nums:
        if num > 0:
            pos_count += 1
        elif num < 0:
            neg_count += 1
    return max(pos_count, neg_count)



```

## Submission at 2024-10-07 11:00:16


```
def Mathsum():
    print("1 + 2 + 3")
    return
Mathsum()
```

## Submission at 2024-10-07 11:11:40


```
def Mathsum():
    string = ("3+2+1")
    s = ("1+2+3")
    print(s)
    return
Mathsum()
    
```

## Submission at 2024-10-28 10:34:05


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
        self.size = 110
        self.item = [[] for i in range(self.size)]
        arr = []

    def tree(self, root):
        return root % self.size

    def getmin(self, root):
        index = self.tree(root)
        if Node not in self.item(root):
            return -1
        if Node in self.item(root):
            return self.data[index[0]]
    
    
```

## Submission at 2024-10-28 11:14:02


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
        result = []

    def traverse(node):
        if node:
            result.append(node.val)
            traverse(node.left)
            traverse(node.right)
        traverse(root)
        return result


```

## Submission at 2024-10-28 11:26:15


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
        result = []
        result.append(root)
        if Node == result[0]:
            return val[0]


```

## Submission at 2024-10-28 11:28:25


```
def __init__(self, key, value):
        self.size = 110
        self.item = [[] for i in range(self.size)]
        arr = []

    def tree(self, root):
        return root % self.size

    def getmin(self, root):
        index = self.tree(root)
        if Node not in self.item(root):
            return -1
        if Node in self.item(root):
            return self.data[index[0]]
    
    
```

## Submission at 2024-11-04 10:03:41


```
class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

class Solution:
    def findMin(self, root):
        # If the tree is empty, we can return a large value or None
        if root is None:
            return float('inf')  # Represents infinity
        
        # Get the minimum value from the left and right subtrees
        left_min = self.findMin(root.left)
        right_min = self.findMin(root.right)
        
        # Return the minimum of the current node's value and the minimums from the subtrees
        return min(root.data, left_min, right_min)

# Example usage:
if __name__ == "__main__":
    # Constructing the binary tree
    root = Node(3)
    root.left = Node(2)
    root.right = Node(5)
    root.left.left = Node(1)
    root.left.right = Node(4)

    solution = Solution()
    print(solution.findMin(root))  # Output: 1
```

## Submission at 2024-11-04 10:04:48


```
class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None

class Solution:
    def findMin(self, root):
        # If the tree is empty, return None or a specific value
        if root is None:
            return None  # or float('inf') if you want to indicate no minimum
        
        # Initialize the minimum value with the root's data
        min_value = root.data
        
        # Traverse the left subtree
        if root.left is not None:
            left_min = self.findMin(root.left)
            if left_min is not None:  # Check if left_min is valid
                min_value = min(min_value, left_min)
        
        # Traverse the right subtree
        if root.right is not None:
            right_min = self.findMin(root.right)
            if right_min is not None:  # Check if right_min is valid
                min_value = min(min_value, right_min)
        
        return min_value

# Example usage:
if __name__ == "__main__":
    # Constructing the binary tree
    root = Node(3)
    root.left = Node(2)
    root.right = Node(5)
    root.left.left = Node(1)
    root.left.right = Node(4)

    solution = Solution()
    print(solution.findMin(root))  # Output: 1
```

## Submission at 2024-11-04 10:06:05


```
class Solution:
    def findMin(self, root):
        # If the tree is empty, return None or a specific value
        if root is None:
            return None  # or float('inf') if you want to indicate no minimum
        
        # Initialize the minimum value with the root's data
        min_value = root.data
        
        # Traverse the left subtree
        if root.left is not None:
            left_min = self.findMin(root.left)
            if left_min is not None:  # Check if left_min is valid
                min_value = min(min_value, left_min)
        
        # Traverse the right subtree
        if root.right is not None:
            right_min = self.findMin(root.right)
            if right_min is not None:  # Check if right_min is valid
                min_value = min(min_value, right_min)
        
        return min_value

```

## Submission at 2024-11-04 10:08:28


```
class Solution:
    def findMin(self, root):
        # If the tree is empty, return None or a specific value
        if root is None:
            return None  # or float('inf') if you want to indicate no minimum
        
        # Initialize the minimum value with the root's data
        min_value = root.data
        
        # Traverse the left subtree
        if root.left is not None:
            left_min = self.findMin(root.left)
            if left_min is not None:  # Check if left_min is valid
                min_value = min(min_value, left_min)
        
        # Traverse the right subtree
        if root.right is not None:
            right_min = self.findMin(root.right)
            if right_min is not None:  # Check if right_min is valid
                min_value = min(min_value, right_min)
        
        return min_value

```

## Submission at 2024-11-04 10:12:57


```
class Solution:
    def findMax(self, root):
        # If the tree is empty, return None or a specific value
        if root is None:
            return None  # or float('inf') if you want to indicate no minimum
        
        # Initialize the minimum value with the root's data
        max_value = root.data
        
        # Traverse the left subtree
        if root.left is not None:
            left_max = self.findMax(root.left)
            if left_max is not None:  # Check if left_min is valid
                max_value = max(max_value, left_max)
        
        # Traverse the right subtree
        if root.right is not None:
            right_max = self.findMax(root.right)
            if right_max is not None:  # Check if right_min is valid
                max_value = max(max_value, right_max)
        
        return max_value

```

## Submission at 2024-11-04 10:14:31


```
def find_element_with_k_occurrences(n, k, arr):
    # Dictionary to count occurrences of each element
    count = {}
    
    # Count occurrences of each element in the array
    for num in arr:
        if num in count:
            count[num] += 1
        else:
            count[num] = 1
    
    # Find the first element that occurs at least k times
    for num in arr:
        if count[num] >= k:
            return num
    
    # If no element found, return -1
    return -1

# Example usage
if __name__ == "__main__":
    # Input reading
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    # Function call and output
    result = find_element_with_k_occurrences(n, k, arr)
    print(result)
```

## Submission at 2024-11-04 10:18:42


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
    def findMin(self, root):
        # If the tree is empty, return None or a specific value
        if root is None:
            return None  # or float('inf') if you want to indicate no minimum
        
        # Initialize the minimum value with the root's data
        min_value = root.data
        
        # Traverse the left subtree
        if root.left is not None:
            left_min = self.findMin(root.left)
            if left_min is not None:  # Check if left_min is valid
                min_value = min(min_value, left_min)
        
        # Traverse the right subtree
        if root.right is not None:
            right_min = self.findMin(root.right)
            if right_min is not None:  # Check if right_min is valid
                min_value = min(min_value, right_min)
        
        return min_value


```

## Submission at 2024-11-04 10:26:22


```
# write code from scratch
def word_pattern(pattern, s):
    # Split the string into words
    words = s.split()
    
    # If the number of unique characters in pattern does not match the number of words, return False
    if len(pattern) != len(words):
        return False
    
    # Dictionaries to hold the mappings
    char_to_word = {}
    word_to_char = {}
    
    for char, word in zip(pattern, words):
        # Check if the character is already mapped to a word
        if char in char_to_word:
            if char_to_word[char] != word:
                return False  # Mismatch in mapping
        else:
            char_to_word[char] = word
        
        # Check if the word is already mapped to a character
        if word in word_to_char:
            if word_to_char[word] != char:
                return False  # Mismatch in mapping
        else:
            word_to_char[word] = char
    
    return True

# Example usage
if __name__ == "__main__":
    # Input reading
    pattern = input().strip()
    s = input().strip()
    
    # Function call and output
    result = word_pattern(pattern, s)
    print(result)
```

## Submission at 2024-11-04 10:30:26


```
# write code from scratch
def word_pattern(pattern, s):
    # Split the string into words
    words = s.split()
    t = 'true'
    f = 'false'
    # If the number of unique characters in pattern does not match the number of words, return False
    if len(pattern) != len(words):
        return f
    
    # Dictionaries to hold the mappings
    char_to_word = {}
    word_to_char = {}
    
    for char, word in zip(pattern, words):
        # Check if the character is already mapped to a word
        if char in char_to_word:
            if char_to_word[char] != word:
                return f  # Mismatch in mapping
        else:
            char_to_word[char] = word
        
        # Check if the word is already mapped to a character
        if word in word_to_char:
            if word_to_char[word] != char:
                return f  # Mismatch in mapping
        else:
            word_to_char[word] = char
    
    return t

# Example usage
if __name__ == "__main__":
    # Input reading
    pattern = input().strip()
    s = input().strip()
    
    # Function call and output
    result = word_pattern(pattern, s)
    print(result)
```

## Submission at 2024-11-12 09:47:46


```
def count_numbers_with_even_digits(nums):
    count = 0
    for num in nums:
        # Convert the number to string to count digits
        if len(str(num)) % 2 == 0:
            count += 1
    return count

# Read input
n = int(input())
nums = list(map(int, input().split()))

# Get the count of numbers with even digits
result = count_numbers_with_even_digits(nums)

# Print the result
print(result)
```

## Submission at 2024-11-12 10:06:57


```
def custom_sort_string(order, s):
    # Create a dictionary to map each character in 'order' to its index
    order_map = {char: index for index, char in enumerate(order)}
    
    # Separate characters in 's' into those that are in 'order' and those that are not
    in_order = []
    not_in_order = []
    
    for char in s:
        if char in order_map:
            in_order.append(char)  # If char is in order, add to in_order list
        else:
            not_in_order.append(char)  # Else add to not_in_order list
    
    # Sort the in_order characters based on their order in 'order'
    in_order.sort(key=lambda x: order_map[x])
    
    # Concatenate the sorted in_order characters with the not_in_order characters
    return ''.join(in_order) + ''.join(not_in_order)

# Read input
order, s = input("Enter the order and string s separated by space: ").split()

# Get the custom sorted string
result = custom_sort_string(order, s)

# Print the result
print(result)
```

## Submission at 2024-11-12 10:08:02


```
def custom_sort_string(order, s):
    # Create a dictionary to map each character in 'order' to its index
    order_map = {char: index for index, char in enumerate(order)}
    
    # Separate characters in 's' into those that are in 'order' and those that are not
    in_order = []
    not_in_order = []
    
    for char in s:
        if char in order_map:
            in_order.append(char)  # If char is in order, add to in_order list
        else:
            not_in_order.append(char)  # Else add to not_in_order list
    
    # Sort the in_order characters based on their order in 'order'
    in_order.sort(key=lambda x: order_map[x])
    
    # Concatenate the sorted in_order characters with the not_in_order characters
    return ''.join(in_order) + ''.join(not_in_order)

# Read input
order, s = input().split()

# Get the custom sorted string
result = custom_sort_string(order, s)

# Print the result
print(result)
```

## Submission at 2024-11-13 08:36:59


```
# Function to return precedence of operators
def prec(c):
    
    if c == '^':
        return 3
    elif c == '/' or c == '*':
        return 2
    elif c == '+' or c == '-':
        return 1
    else:
        return -1

# Function to perform infix to postfix conversion
def infixToPostfix(s):
    st = []
    result = ""

    for i in range(len(s)):
        c = s[i]

        # If the scanned character is
        # an operand, add it to the output string.
        if (c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z') or (c >= '0' and c <= '9'):
            result += c

        # If the scanned character is an 
        # ‘(‘, push it to the stack.
        elif c == '(':
            st.append('(')

        # If the scanned character is an ‘)’,
        # pop and add to the output string from the stack 
        # until an ‘(‘ is encountered.
        elif c == ')':
            while st[-1] != '(':
                result += st.pop()
            st.pop()

        # If an operator is scanned
        else:
            while st and (prec(c) < prec(st[-1]) or prec(c) == prec(st[-1])):
                result += st.pop()
            st.append(c)
    
    # Pop all the remaining elements from the stack
    while st:
        result += st.pop()

    print(result)

exp = input("")
infixToPostfix(exp)

```

## Submission at 2024-11-25 10:09:18


```
integer = int(input())

for i in range(1,integer = 1):
    for j in range (1, integer = 1):
        print('*')
    print('')
```

## Submission at 2024-11-25 10:26:35


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
      a1 = head1
      a2 = head2
      while (a1 = None and a2 = None):
        if a1.data == a2.data:
          return a1.data
        elif a1.data < a2.data:
          a1 = a1.next
        else:
          a2 = a2.next

      return -1
        # code here




```

## Submission at 2024-11-25 10:28:22


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
      a1 = head1
      a2 = head2
      while (a1.next != None and a2.next != None):
        if a1.data == a2.data:
          return a1.data
        elif a1.data < a2.data:
          a1 = a1.next
        else:
          a2 = a2.next

      return -1
        # code here




```

## Submission at 2024-11-25 10:33:50


```
n = int(input())

for i in range(1,n+1):
    for j in range (1, i):
        print('*', end='')
    print()
```

## Submission at 2024-11-25 10:35:47


```
n = int(input())

for i in range(1,n-1):
    for j in range (1, i):
        print('*', end='')
    print()


```

## Submission at 2024-11-25 10:47:35


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:49:07


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:49:09


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:49:14


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:49:16


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:49:19


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:50:52


```
n = int(input())
arr = list(map(int,input().split()))
id = True
a = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[1] != a:
        id = False
if id:
    print("true")
else:
    print("false")       
```

## Submission at 2024-11-25 10:52:31


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
       def intersectPoint(self, head1, head2):
      a1 = head1
      a2 = head2
      while (a1.next != None and a2.next != None):
        if a1.data == a2.data:
          return a1.data
        elif a1.data < a2.data:
          a1 = a1.next
        else:
          a2 = a2.next

      return -1




```

## Submission at 2024-11-25 10:53:31


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
       def intersectPoint(self, head1, head2):
      a1 = head1
      a2 = head2
      while (a1.next != None and a2.next != None):
        if a1.data == a2.data:
          return a1.data
        elif a1.data < a2.data:
          a1 = a1.next
        else:
          a2 = a2.next

      return NULL




```

## Submission at 2024-11-25 10:58:56


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
      a1 = head1
      a2 = head2
      while (a1.next != None and a2.next != None):
        if a1.data == a2.data:
          return a1.data
        elif a1.data < a2.data:
          a1 = a1.next
        else:
          a2 = a2.next

      return NULL

```

## Submission at 2024-11-25 11:30:56


```
n = int(input())
arr = list(map(int,input().split()))
if sorted(arr):
    print("Yes")
else:
    print("No")


```

## Submission at 2024-11-25 11:31:53


```
n = int(input())
arr = list(map(int,input().split()))
if not sorted(arr):
    print("Yes")
else:
    print("No") 
```

## Submission at 2024-11-25 11:37:12


```
n = int(input())

for i in range(1,n+1):
    for j in range (1, i):
        print('*', end='')
    print()
```

## Submission at 2024-11-25 11:38:37


```
n = int(input())

for i in range(0,n+1):
    for j in range (1, i):
        print('*', end='')
    print()
```

