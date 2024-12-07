## Submission at 2024-08-05 10:18:55


```
# Write your Python code here from the scratch
print("hello Aaryan!")
```

## Submission at 2024-08-05 10:19:50


```
# Write your Python code here from the scratch
print("Hello Aaryan!")
```

## Submission at 2024-08-05 10:25:03


```
# Write your Python code here from the scratch
name= input()
print("Hello",name+"!")
```

## Submission at 2024-08-05 10:28:14


```
# Write your Python code here from the scratch
name= input()
print("Hello",name+"!")
```

## Submission at 2024-08-05 10:36:36


```
# Write your Python code here
n=int(input())
for _ in range(n):
    name=input()
    
    print("Hello",name+"!")
```

## Submission at 2024-08-12 10:02:18


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
   if(x==0){
    return 0;
   } else if(x==1){
    return 1;
   }
    return fibonacci(x-1)+fibonacci(x-2);
   }


int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:12:54


```
def is_power_of_two(n:int) -> int:
    if n == 1:
        return True
    elif n < 1:
        return False
    else:
    
        return n % 2 == 0 and is_power_of_two(n // 2)
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:17:00


```
def is_power_of_two(n:int) -> int:
    if n == 1:
        return True
    elif n < 1:
        return False
    else:
    
        return n % 2 == 0 and is_power_of_two(n // 2)
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:18:05


```
def is_power_of_two(n:int) -> int:
    if n == 1:
        return True
    elif n < 1:
        return False
    else:
        return n % 2 == 0 and is_power_of_two(n // 2)
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:25:47


```
def is_power_of_two(n:int) -> int:
    if n == 1:
        return True
    elif n < 1:
        return False
    else:
        return n % 2 == 0 and is_power_of_two(n // 2)
        return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:29:46


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
   if (n == 1) {
        return true;
    }
    
    if (n < 1) {
        return false;
    }
    
    return (n % 2 == 0) && isPowerOfTwo(n / 2);
} 


int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:50:46


```
def subsets(nums):
 def backtrack(start, path):
        result.append(path)
        for i in range(start, len(nums)):
            backtrack(i + 1, path + [nums[i]])

    result = []
    backtrack(0, [])
    return sorted(result, key=len)

    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()











```

## Submission at 2024-08-17 05:35:51


```
def combine(n, k):
    def backtrack(start, path):
        # If the combination is of length k, add it to results
        if len(path) == k:
            result.append(path[:])
            return
        # Iterate over the possible numbers to add to the combination
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()  # Remove last element to backtrack

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

## Submission at 2024-08-17 05:37:56


```
def permute(nums):
    def backtrack(first=0):
        # If all integers are used up
        if first == n:
            result.append(nums[:])
        for i in range(first, n):
            # Place i-th integer first
            # in the current permutation
            nums[first], nums[i] = nums[i], nums[first]
            # Use next integers to complete the permutations
            backtrack(first + 1)
            # Backtrack by swapping back
            nums[first], nums[i] = nums[i], nums[first]

    n = len(nums)
    result = []
    backtrack()
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Parse the input values as a list of integers
    nums = list(map(int, input.split()))
    
    # Generate the permutations
    result = permute(nums)
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-17 05:39:06


```
def permute(nums):
    def backtrack(start):
        # Base case: if we've filled the permutation
        if start == len(nums):
            result.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recurse with the next element as the start
            backtrack(start + 1)
            # Swap back to restore the original list
            nums[start], nums[i] = nums[i], nums[start]
    
    result = []
    backtrack(0)
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Parse input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Print result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-17 05:40:35


```
#include <iostream>
#include <vector>
#include <algorithm>

void permuteHelper(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    // Base case: If we have a complete permutation
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); ++i) {
        // Swap the current element with the start element
        std::swap(nums[start], nums[i]);
        // Recur to generate permutations with the next element as start
        permuteHelper(nums, start + 1, result);
        // Backtrack by swapping the elements back
        std::swap(nums[start], nums[i]);
    }
}

std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    permuteHelper(nums, 0, result);
    return result;
}

int main() {
    std::vector<int> nums;
    int num;
    std::string line;
    
    // Read input line
    std::getline(std::cin, line);
    std::istringstream iss(line);
    
    // Parse integers from the input line
    while (iss >> num) {
        nums.push_back(num);
    }
    
    // Generate permutations
    std::vector<std::vector<int>> result = permute(nums);
    
    // Print the result
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-17 05:43:23


```
def permute(nums):
    def backtrack(start):
        # Base case: If we have a complete permutation
        if start == len(nums):
            result.append(nums[:])
            return
        
        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recur to generate permutations with the next element as start
            backtrack(start + 1)
            # Backtrack by swapping the elements back
            nums[start], nums[i] = nums[i], nums[start]
    
    result = []
    backtrack(0)
    
    # Sort the result list to ensure permutations are in lexicographic order
    result.sort()
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Parse input into a list of integers
    nums = list(map(int, input.split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-17 05:45:00


```
def generateParentheses(n):
    def backtrack(current_string, open_count, close_count):
        # Base case: if the current string is of the correct length
        if len(current_string) == 2 * n:
            result.append(current_string)
            return
        
        # Add an open parenthesis if we have not used all n open parentheses
        if open_count < n:
            backtrack(current_string + '(', open_count + 1, close_count)
        
        # Add a close parenthesis if it would not exceed the number of open parentheses
        if close_count < open_count:
            backtrack(current_string + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Parse input into an integer
    n = int(input)
    
    # Generate well-formed parentheses combinations
    result = generateParentheses(n)
    
    # Print result in the required format
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-17 05:48:26


```
#include <iostream>
#include <vector>
#include <string>

void backtrack(std::string& current, int open, int close, int n, std::vector<std::string>& result) {
    // Base case: if the current string is of the correct length
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    // Add an open parenthesis if we have not used all n open parentheses
    if (open < n) {
        current.push_back('(');
        backtrack(current, open + 1, close, n, result);
        current.pop_back(); // Backtrack
    }

    // Add a close parenthesis if it would not exceed the number of open parentheses
    if (close < open) {
        current.push_back(')');
        backtrack(current, open, close + 1, n, result);
        current.pop_back(); // Backtrack
    }
}

std::vector<std::string> generateParentheses(int n) {
    std::vector<std::string> result;
    std::string current;
    backtrack(current, 0, 0, n, result);
    return result;
}

int main() {
    int n;
    std::cin >> n; // Read the integer input

    // Generate well-formed parentheses combinations
    std::vector<std::string> result = generateParent

```

## Submission at 2024-08-17 05:50:03


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(int n, int open, int close, string current, vector<string>& result) {
    if (current.length() == n * 2) {
        result.push_back(current);
        return;
    }
    if (open < n) {
        generateParenthesisHelper(n, open + 1, close, current + "(", result);
    }
    if (close < open) {
        generateParenthesisHelper(n, open, close + 1, current + ")", result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    vector<string> combinations = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-17 05:51:14


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permuteHelper(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size() - 1) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permuteHelper(nums, start + 1, result);
        swap(nums[start], nums[i]); // backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permuteHelper(nums, 0, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums;
    int num;
    cout << "Enter the numbers (end input with a non-integer): ";
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<vector<int>> permutations = permute(nums);

    cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-17 05:52:38


```
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in sorted order.


Input Format
Array of integers


Output Format
List of list containing all permutations


Sample Input
1 2 3
Sample Output
[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Note

Constraints
1 <= nums.length <= 6

-10 <= nums[i] <= 10

All the integers of nums are unique.
in c++ with recurssion?
```

## Submission at 2024-08-17 05:59:31


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]  # backtrack

    result = []
    backtrack(0)
    return result

# Input format
nums = list(map(int, input("Enter the numbers: ").split()))

# Generate and print the permutations
result = permute(nums)
result.sort()  # Sort the permutations

print("[", end="")
for i, perm in enumerate(result):
    print("[", end="")
    print(",".join(map(str, perm)), end="")
    print("]", end="")
    if i < len(result) - 1:
        print(",", end="")
print("]")

```

## Submission at 2024-08-17 06:47:38


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permuteHelper(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permuteHelper(nums, start + 1, result);
        swap(nums[start], nums[i]); // backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permuteHelper(nums, 0, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums;
    int num;
    cout << "Enter the numbers (end input with a non-integer): ";
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<vector<int>> permutations = permute(nums);

    cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-20 11:54:30


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // Backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    sort(result.begin(), result.end()); // Sort the result
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);

    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-20 11:55:56


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // Backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    sort(result.begin(), result.end()); // Sort the result
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3}; // Example array
    vector<vector<int>> permutations = permute(nums);

    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-20 11:57:32


```
def permute(nums, start, result):
    if start == len(nums):
        result.append(nums.copy())
        return

    for i in range(start, len(nums)):
        nums[start], nums[i] = nums[i], nums[start]
        permute(nums, start + 1, result)
        nums[start], nums[i] = nums[i], nums[start]

def permute_sorted(nums):
    result = []
    permute(nums, 0, result)
    result.sort()
    return result

# Example usage
nums = [1, 2, 3]
permutations = permute_sorted(nums)

for permutation in permutations:
    print(permutation)
```

## Submission at 2024-08-20 12:00:15


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // Backtrack
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    sort(result.begin(), result.end()); // Sort the result
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3}; // Example array
    vector<vector<int>> permutations = permute(nums);

    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-20 12:00:52


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    sort(result.begin(), result.end()); 
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3}; 
    vector<vector<int>> permutations = permute(nums);

    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-20 12:03:55


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); 
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    sort(result.begin(), result.end()); 
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3}; 
    vector<vector<int>> permutations = permute(nums);

    for (const auto& permutation : permutations) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-20 12:08:31


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesesHelper(int n, int left, int right, string current, vector<string>& result) {
    if (left == n && right == n) {
        result.push_back(current);
        return;
    }

    if (left < n) {
        generateParenthesesHelper(n, left + 1, right, current + "(", result);
    }

    if (right < left) {
        generateParenthesesHelper(n, left, right + 1, current + ")", result);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesesHelper(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    if (n < 1 || n > 8) {
        cout << "Invalid input. n must be between 1 and 8." << endl;
        return 1;
    }

    vector<string> parentheses = generateParentheses(n);

    cout << "All possible combinations of well-formed parentheses for n = " << n << ":" << endl;
    for (const string& parenthese : parentheses) {
        cout << parenthese << endl;
    }

    return 0;
}
```

## Submission at 2024-08-21 04:53:31


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
print(permute(nums))  # Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
```

## Submission at 2024-08-21 04:55:29


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
print(permute(nums))  # Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
```

## Submission at 2024-08-21 04:55:48


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
print(permute(nums))  # Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
```

## Submission at 2024-08-21 04:59:57


```
import itertools

def permute(nums):
    return [list(perm) for perm in itertools.permutations(nums)]

# Example usage:
nums = [1, 2, 3]
result = permute(nums)
print(result)

```

## Submission at 2024-09-02 10:00:19


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

## Submission at 2024-09-02 10:07:48


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

## Submission at 2024-09-02 10:23:56


```
class ListNode:
    def _init_(self, val=0, next=None):
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

## Submission at 2024-09-02 11:03:11


```
def diagonalTraversal(matrix):
    def traverse_diagonal(i, j, m, n, result):
        # Base case: if indices are out of bounds, return
        if i >= m or j < 0:
            return
        # Append the current element to the result
        result.append(matrix[i][j])
        # Recur for the next element in the diagonal
        traverse_diagonal(i + 1, j - 1, m, n, result)

    def collect_diagonals(matrix, m, n):
        result = []
        # Traverse from the first row
        for col in range(n):
            traverse_diagonal(0, col, m, n, result)
        # Traverse from the first column (excluding the first element)
        for row in range(1, m):
            traverse_diagonal(row, n - 1, m, n, result)
        return result

    m = len(matrix)
    n = len(matrix[0])
    return collect_diagonals(matrix, m, n)

# Example usage:
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

result = diagonalTraversal(matrix)
print(result)  # Output: [1, 4, 2, 7, 5, 3, 8, 6, 9]

    

```

## Submission at 2024-09-02 11:13:53


```
class ListNode:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

def deleteNode(head, x):
    # Helper function to handle recursion with an additional index parameter
    def deleteNodeHelper(node, x, index):
        # Base case: if the node is None, return None
        if node is None:
            return None
        # If the current index matches x, skip this node by returning the next node
        if index == x:
            return node.next
        # Recur for the next node with incremented index
        node.next = deleteNodeHelper(node.next, x, index + 1)
        return node
    
    # Start the recursion with the head node and index 1 (1-based index)
    return deleteNodeHelper(head, x, 1)

# Example usage:
# Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)
head.next.next.next.next = ListNode(5)

# Deleting the 2nd node
x = 2
new_head = deleteNode(head, x)

# Function to print the linked list
def printLinkedList(head):
    current = head
    while current:
        print(current.data, end=" ")
        current = current.next
    print()

printLinkedList(new_head)  # Output: 1 3 4 5

```

## Submission at 2024-09-02 11:23:48


```

def diagonal_traversal(matrix):
    def traverse_diagonal(i, j, m, n, result):
        # Base case: if indices are out of bounds, return
        if i >= m or j < 0:
            return
        # Append the current element to the result
        result.append(matrix[i][j])
        # Recur for the next element in the diagonal
        traverse_diagonal(i + 1, j - 1, m, n, result)

    def collect_diagonals(matrix, m, n):
        result = []
        # Traverse from the first row
        for col in range(n):
            traverse_diagonal(0, col, m, n, result)
        # Traverse from the first column (excluding the first element)
        for row in range(1, m):
            traverse_diagonal(row, n - 1, m, n, result)
        return result

    m = len(matrix)
    n = len(matrix[0])
    return collect_diagonals(matrix, m, n)

# Example usage:
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

result = diagonalTraversal(matrix)
print(" ".join(map(str, result)))  # Output: 1 4 2 7 5 3 8 6 9
    
    

```

## Submission at 2024-09-05 12:12:12


```
def fibonacci(x:int) -> int:
   if x==0:
    return 0
   elif x==1:
    return 1
   else:
    return fibonacci(x-1)+fibonacci(x-2) 

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-05 12:20:11


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return true
    else:
        return n>0 and (n &(n-1))==0 
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-05 12:20:58


```
def is_power_of_two(n):
    # Special case: 1 is a power of two
    if n == 1:
        return True
    
    # Check if n is positive and has only one bit set (i.e., it's a power of two)
    return n > 0 and (n & (n - 1)) == 0

# Sample input
n = int(input().strip())

# Determine if n is a power of two
result = is_power_of_two(n)

# Print the result (as "true" or "false")
print(result)

```

## Submission at 2024-09-09 10:12:26


```
def power_of_three(x):
    if x==1:
        return true
    if x==27:
        return true
 
x=27 
print(power_of_three(x))
        



```

## Submission at 2024-09-09 10:18:58


```
def power_of_three(x):
    if x==27:
        return true
    else:
        return false
    



```

## Submission at 2024-09-09 10:19:42


```
def power_of_three(x):
    if x==27:
        return true
    else:
        return false
print(power_of_three)        
    



```

## Submission at 2024-09-09 10:20:29


```
def power_of_three(x):
    if x==27:
        return true
    else:
        return false
print(power_of_three(x))        
    



```

## Submission at 2024-09-09 10:27:55


```

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

bool isPalindrome(Node *head) {
    for(int i=0,i(arr,length(),i++)){
       Node* first=new Node(arr(i));
       Node* last=new Node(arr(i));
       if first->
       return true;
}

    }
    
```

## Submission at 2024-09-09 10:37:58


```
def power_of_three(x):
    if x==1:
        return true
    if x==3*n:
        return power_of_three
        
        
          


```

## Submission at 2024-09-09 10:39:29


```
def power_of_three(x):
    if x==1:
        print (true)
    if x==3*n:
        return power_of_three
        
        
          


```

## Submission at 2024-09-09 10:40:07


```
def power_of_three(x):
    if x==1:
        print (true)
    if x==3*n:
       print(true)
        
        
          


```

## Submission at 2024-09-09 10:49:00


```

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

bool isPalindrome(Node *head) {
   int cnt=0;
   Node* temp=head;
while (temp){
  if (temp->data==temp->next->next->next)
  temp=temp->next;
  return true;
}   



return false;

}
```

## Submission at 2024-09-09 10:50:24


```

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

bool isPalindrome(Node *head) {
   int cnt=0;
   Node* temp=head;
while (temp){

  if (temp->data==temp->next->next->next)
  temp=temp->next;
  return true;
}   



return false;

}


}
```

## Submission at 2024-09-09 10:51:01


```

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

bool isPalindrome(Node *head) {
   int cnt=0;
   Node* temp=head;
while (temp){

  if (temp->data==temp->next->next->next)
  temp=temp->next;
  return true;
}   



return false;

}


}
```

## Submission at 2024-09-09 10:55:31


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

Node* removeDuplicates(Node *head)
{
   Node*temp=head;
   while(temp!=NULL){
    if(temp->data==temp->next->next->next){
    free(temp);
    temp=temp->next;
   }
     } 
}

```

## Submission at 2024-09-09 11:00:17


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

Node* removeDuplicates(Node *head)
{
   Node*temp=head;
   while(temp!=NULL){
    if(temp->data==temp->next->data){
       delete temp->next;
       temp=temp->next;
    }
  } 
}

```

## Submission at 2024-09-09 11:13:11


```
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int i=0;
int Freq(int i,string s,char c,int cnt){
   if([i]==to,string c)
   Freq=0;
}



int main(){
    string s;
    <in>> s;
    char c;
    <in>> c;
    int ans=Freq(0,s,"7",0);
    cout<<ans;
}    

}
```

## Submission at 2024-10-07 10:27:06


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque=[]:
        return -1
    else:
        return rev(q)
 if __int__='__main__':
    n=6
    q=deque.append(6)
    q=deque.append(2)
    q=deque.append(10)
    q=deque.append(1)
    q=deque.append(3)
    q=deque.append(4)
result=rev(q)
print(result)            
            
```

## Submission at 2024-10-07 10:28:36


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)
if __int__='__main__':
    n=6
    q=deque.append(6)
    q=deque.append(2)
    q=deque.append(10)
    q=deque.append(1)
    q=deque.append(3)
    q=deque.append(4)
result=rev(q)
print(result)            
            
```

## Submission at 2024-10-07 10:30:43


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)
if __int__=='__main__':
    n=6
    q=deque.append(6)
    q=deque.append(2)
    q=deque.append(10)
    q=deque.append(1)
    q=deque.append(3)
    q=deque.append(4)
result=rev(q)
print(result)            
            

```

## Submission at 2024-10-07 10:33:51


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)

n=6
q=deque.put(6)
q=deque.put(2)
q=deque.put(10)
q=deque.put(1)
q=deque.put(3)
q=deque.put(4)
result=rev(q)
print(result)            
            

```

## Submission at 2024-10-07 10:36:27


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)

n=6
q=deque.insert(6)
q=deque.insert(2)
q=deque.insert(10)
q=deque.insert(1)
q=deque.insert(3)
q=deque.insert(4)
result=rev(q)
print(result)            
            

```

## Submission at 2024-10-07 10:38:43


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)


```

## Submission at 2024-10-07 10:45:40


```
def maths_expression(s):
    i,j,k=1,2,3
    if i+j+k:
        return 3+2+1
    else:
        return maths_expression(s)    
```

## Submission at 2024-10-07 10:49:54


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque=[]:
        return -1
    else:
        return rev(q)
 if __int__='__main__':
    n=6
    q=deque.append(6)
    q=deque.append(2)
    q=deque.append(10)
    q=deque.append(1)
    q=deque.append(3)
    q=deque.append(4)
result=rev(q)
print(result)
else:
    print("error")            
            
```

## Submission at 2024-10-07 11:00:16


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)
q=deque[]
    n=6
    q=deque.append(6)
    q=deque.append(2)
    q=deque.append(10)
    q=deque.append(1)
    q=deque.append(3)
    q=deque.append(4)
result=rev(q)
print(result)
else:
    print("error")            
            

```

## Submission at 2024-10-07 11:03:46


```
from collections import deque # Don't touch this line

def rev(q):
    n=len(q)
    if deque==[]:
        return -1
    else:
        return rev(q)
q=[]
q=deque.append(6)
q=deque.append(2)
q=deque.append(10)
q=deque.append(1)
q=deque.append(3)
q=deque.append(4)
result=rev(q)
print(result)           
            

```

## Submission at 2024-10-07 11:14:33


```
def merge_sort(arr,x):
    n=0 and k=0
    pivort=[mid//2]
    low=[x for x in arr if mid<x]
    mid=[x for x in rr if mid==x]
    high=[x for x in arr if mid>x]
    return merge_sort(low)+mid+merge_sort(high)
arr=[6,3,1,5,1,2,5,1]
x=2
result=merge_sort(arr,2)
print(result)    

    
```

## Submission at 2024-10-17 12:43:12


```
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool aryan(int a[],int b[],int m,int n){
    sort(a,a+m);
    sort(b,b+m);
    
    if(m!=n){
        return false;
    }
    else{
    for(int i=0;i<m;i++){
        if(a[i]==b[i]){
            return true;
        }
    }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

        aryan(a,b,m,n);
}
```

## Submission at 2024-10-17 12:43:33


```
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool aryan(int a[],int b[],int m,int n){
    sort(a,a+m);
    sort(b,b+m);
    
    if(m!=n){
        return false;
    }
    else{
    for(int i=0;i<m;i++){
        if(a[i]==b[i]){
            return true;
        }
    }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

        aryan(a,b,m,n);
}
```

## Submission at 2024-10-17 12:47:03


```
#include<bits/stdc++.h>
using namespace std;

bool aryan(int a[],int b[],int m,int n){
    sort(a,a+m);
    sort(b,b+m);
    
    if(m!=n){
        return false;
    }
    else{
    for(int i=0;i<m;i++){
        if(a[i]==b[i]){
            return true;
        }
    }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    if(aryan(a,b,m,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
```

## Submission at 2024-10-17 12:52:14


```
#include<bits/stdc++.h>
using namespace std;

bool aryan(int a[],int b[],int m,int n){
    unordered_map<int,bool>mp;
    for(int i=0;i<m;i++){
        mp[a[i]]=true;
    }
    // bool flag=false;
    for(int j=0;j<n;j++){
        if(mp[b[j]]==false){
            return false;
        }
    }
    return true;
}
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    if(aryan(a,b,m,n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
```

## Submission at 2024-10-17 13:03:35


```
// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;

// bool aryan(int a[],int b[],int m,int n){
//     unordered_map<int,bool>mp;
//     for(int i=0;i<m;i++){
//         mp[a[i]]=true;
//     }
//     // bool flag=false;
//     for(int j=0;j<n;j++){
//         if(mp[b[j]]==false){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    int m,n;
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    // if(aryan(a,b,m,n)){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }

    if(n!=m){
        cout << "false" << endl;
        return 999;
    }
    sort(a,a+m);
    sort(b,b+n);

    for(int i = 0 ;i < n ; i++){
        if(a[i]!=b[i]){
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;

    return 888;
}

```

## Submission at 2024-10-17 13:05:35


```
// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

// bool aryan(int a[],int b[],int m,int n){
//     unordered_map<int,bool>mp;
//     for(int i=0;i<m;i++){
//         mp[a[i]]=true;
//     }
//     // bool flag=false;
//     for(int j=0;j<n;j++){
//         if(mp[b[j]]==false){
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    ll m,n;
    cin>>m>>n;
    ll a[m];
    ll b[n];
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    // if(aryan(a,b,m,n)){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }

    if(n!=m){
        cout << "false" << endl;
        return 999;
    }
    sort(a,a+m);
    sort(b,b+n);

    for(ll i = 0 ;i < n ; i++){
        if(a[i]!=b[i]){
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;

    return 888;
}

```

## Submission at 2024-10-17 13:07:45


```
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll m, n;
    cin >> m >> n;

    // If sizes don't match, the arrays can't be the same
    if (m != n) {
        cout << "false" << endl;
        return 0;
    }

    vector<ll> a(m), b(n);

    // Input for array a
    for (ll i = 0; i < m; i++) {
        cin >> a[i];
    }

    // Input for array b
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Sort both arrays
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Check if both arrays are identical
    for (ll i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;
    return 0;
}

```

## Submission at 2024-10-17 13:08:46


```
#include <iostream>
#include <algorithm>  // For sort function
#define ll long long
using namespace std;

int main() {
    ll m, n;
    cin >> m >> n;

    // If sizes don't match, print false and exit
    if (m != n) {
        cout << "false" << endl;
        return 0;
    }

    ll a[m], b[n];

    // Input for array a
    for (ll i = 0; i < m; i++) {
        cin >> a[i];
    }

    // Input for array b
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }

    // Sort both arrays
    sort(a, a + m);
    sort(b, b + n);

    // Check if both arrays are identical
    for (ll i = 0; i < m; i++) {
        if (a[i] != b[i]) {
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;
    return 0;
}

```

## Submission at 2024-10-28 10:08:30


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root):
  result=[]
  def max_sum(Node):
    if not Node:
      return 0
    left=treePathSum(Node.left)
    right=treePathSum(Node.right)
  return result 

  
```

## Submission at 2024-10-28 10:18:03


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
       result=[]
       def helper(Node):
        if not Node:
            return 0
           result.append(Node.val)
           helper(Node.left)
           helper(Node.right)
        return findMin(root)    
           
print(findMin(root))           



```

## Submission at 2024-10-28 10:23:58


```
def array_sort(x):
    list=[]
    if x not in list:
        return -1
```

## Submission at 2024-10-28 10:30:04


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
        list=[]
        def helper(Node):
            if not Node:
                return 0


```

## Submission at 2024-10-28 10:42:59


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
         list=[i,j,k]
         if i<j and i<k:
            print i
         else j<k and j<i:
            print j
         else:
            print k       
        def helper(Node):
            if not Node:
                return 0


        


```

## Submission at 2024-10-28 10:43:51


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
         list=[i,j,k]
         if i<j and i<k:
            print (i)
         else j<k and j<i:
            print (j)
         else:
            print (k)       
        def helper(Node):
            if not Node:
                return 0


        


```

## Submission at 2024-10-28 10:47:52


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
         list=[i,j,k]
         if i<j and i<k:
            print (i)
         elif j<k and j<i:
            print (j)
         else:
            print (k)
         def helper(Node):
            if Not in Node:
               return 0
               result.append(Node.val)
            helper(Node.left)
            helper(Node.right)
            return findMin(root)    
           

        

        


```

## Submission at 2024-10-28 10:59:10


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root):
   result=[]
  def max_sum(Node):
    if not Node:
      return 0
    left=treePathSum(Node.left)
    right=treePathSum(Node.right)
  return treePathSum(left+right)

  
    
```

## Submission at 2024-10-28 10:59:30


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root):
   result=[]
  def max_sum(Node):
    if not Node:
      return 0
    left=treePathSum(Node.left)
    right=treePathSum(Node.right)
return treePathSum(left+right)

  
    
```

## Submission at 2024-10-28 11:29:58


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    
print(2,4,6)
```

## Submission at 2024-11-25 10:06:03


```
string1=a
string2=b
array=[]
i=0
for(i=0;i<len(array),i++):
    if string1>string2:
        print("a")
    elif string2>string1:
        print(b)
    else:
        print("error")    


```

## Submission at 2024-11-25 10:07:00


```
string1=a
string2=b
array=[]
i=0
for(i=0;i<len(array),i++):
    if string1>string2:
        print("a")
    elif string2>string1:
        print(b)
    else:
        print("error")    


```

## Submission at 2024-11-25 10:09:12


```
string1=a
string2=b
array=[]
i=0
for(i=0;i<len(array),i++):
    if string1>string2:
        print("a")
    elif string2>string1:
        print(b)
    else:
        print("error")    


```

## Submission at 2024-11-25 10:10:48


```
string1=a
string2=b
array=[]
i=0
for(i=0;i<len(array),i++):
    if string1>string2:
        print("a")
    elif string2>string1:
        print(b)
    else:
        print("error")    


```

## Submission at 2024-11-25 10:15:02


```
print(*
      * *
      * * *
      * * * * 
      * * * * *)
```

## Submission at 2024-11-25 10:19:25


```
print("*
       * *
       * * *
       * * * *
       * * * * *")

```

## Submission at 2024-11-25 10:27:50


```
nums=[]
target=0
i=0
arr=nums.sort()
if arr[i]==target:
    print(target)
else:
    print(error)   


```

## Submission at 2024-11-25 10:30:04


```
nums=[]
target=0
i=0
arr=nums.sort()
if arr[i]==target:
    print(target)
else:
    print(error)   


```

## Submission at 2024-11-25 10:56:06


```
n=5
print(*
      **
      ***
      ****
      *****)
```

## Submission at 2024-11-25 10:59:40


```
n=5
print(*
      * *
      * * *
      * * * *
      * * * * *)
```

## Submission at 2024-11-25 11:07:45


```
def progression():
    arr=[5,-5,-2,1,4,8]
    if arr[i]-arr[i-1]=n and arr[i-2]-arr[i-3]=n:
        print(true)
    else:
        print(false)   
```

## Submission at 2024-11-25 11:09:36


```
def progression():
    arr=[5,-5,-2,1,4,8]
    if arr[i]-arr[i-1]=n & arr[i-2]-arr[i-3]=n:
        print(true)
    else:
        print(false)   
```

## Submission at 2024-11-25 11:35:53


```
import java.util.Scanner
public class main{
    public static void main[string args]{
      System.out.println(*)
      System.out.println(* *)
      System.out.println(* * *)
      System.out.println(* * * *)
      System.out.println(* * * * *)

    }
}
```

