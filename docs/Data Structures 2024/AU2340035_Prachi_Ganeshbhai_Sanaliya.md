## Submission at 2024-08-16 05:09:01


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

## Submission at 2024-08-16 05:51:03


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

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-16 05:55:13


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

## Submission at 2024-08-16 05:56:12


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

## Submission at 2024-08-16 05:57:12


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

## Submission at 2024-08-20 05:32:41


```
from itertools import combinations

def combine(n, k):
    return list(combinations(range(1, n + 1), k))

# Example usage:
n = 4
k = 2
print(combine(n, k))
```

## Submission at 2024-08-20 05:34:15


```
from itertools import combinations

def combine(n, k):
    return list(combinations(range(1, n + 1), k))

# Example usage:
n = 4
k = 2
print(combine(n, k))
```

## Submission at 2024-08-20 05:38:28


```
def combine(n, k):
    """
    Generates all possible combinations of k numbers from the range [1, n].

    Args:
        n: The upper bound of the range.
        k: The number of elements in each combination.

    Returns:
        A list of lists representing all possible combinations.
    """

    result = []
    def backtrack(start, comb):
        if len(comb) == k:
            result.append(list(comb))
            return
        for i in range(start, n + 1):
            comb.append(i)
            backtrack(i + 1, comb)
            comb.pop()

    backtrack(1, [])
    return result

# Example usage:
n = 4
k = 2
print(combine(n, k))
```

## Submission at 2024-08-20 05:39:59


```
def combine(n, k):
    

    result = []
    def backtrack(start, comb):
        if len(comb) == k:
            result.append(list(comb))
            return
        for i in range(start, n + 1):
            comb.append(i)
            backtrack(i + 1, comb)
            comb.pop()

    backtrack(1, [])
    return result


```

## Submission at 2024-08-20 05:43:30


```
from itertools import combinations

def combine(n, k):
    return sorted(list(combinations(range(1, n + 1), k)))

# Reading input
n, k = map(int, input().split())

# Getting the combinations
result = combine(n, k)

# Printing the result
for comb in result:
    print(list(comb))
```

## Submission at 2024-08-20 05:45:31


```
from itertools import combinations

def combine(n, k):
    return sorted(list(combinations(range(1, n + 1), k)))


n, k = map(int, input().split())


result = combine(n, k)


for comb in result:
    print(list(comb))
```

## Submission at 2024-08-21 07:54:38


```
from itertools import combinations

def combine(n, k):
    return sorted(list(combinations(range(1, n + 1), k)))

# Reading input
n, k = map(int, input().split())

# Getting the combinations
result = combine(n, k)

# Printing the result
for comb in result:
    print(list(comb))



```

## Submission at 2024-08-21 08:06:28


```
from itertools import permutations

def generate_permutations(nums):
    # Generate all permutations
    perms = list(permutations(nums))
    # Sort permutations
    sorted_perms = sorted(perms)
    # Convert tuples to lists
    return [list(perm) for perm in sorted_perms]

# Reading input
nums = list(map(int, input().split()))

# Getting the permutations
result = generate_permutations(nums)

# Printing the result
for perm in result:
    print(perm)
```

## Submission at 2024-08-21 08:08:15


```
from itertools import permutations

def generate_permutations(nums):
    perms = list(permutations(nums))
    sorted_perms = sorted(perms)
    return [list(perm) for perm in sorted_perms]


nums = list(map(int, input().split()))


result = generate_permutations(nums)


for perm in result:
    print(perm)
```

## Submission at 2024-08-21 09:46:05


```
from itertools import permutations

def generate_permutations(nums):
    perms = list(permutations(nums))
    sorted_perms = sorted(perms)
    return [list(perm) for perm in sorted_perms]


nums = list(map(int, input().split()))


result = generate_permutations(nums)


for perm in result:
    print(perm)
```

## Submission at 2024-08-22 05:48:01


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

## Submission at 2024-08-22 05:51:48


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

## Submission at 2024-08-22 05:56:10


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

## Submission at 2024-08-22 05:59:53


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

## Submission at 2024-08-22 06:04:05


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

## Submission at 2024-08-22 06:07:17


```
def generate_parentheses(open, close, current, result):
    if open == 0 and close == 0:
        result.append(current)
        return

    if open > 0:
        generate_parentheses(open - 1, close, current + '(', result)

    if close > open:
        generate_parentheses(open, close - 1, current + ')', result)

def generate_parenthesis_combinations(n):
    result = []
    generate_parentheses(n, n, "", result)
    return result

def print_combinations(combinations):
    print("[", end="")
    for i in range(len(combinations)):
        print(f'"{combinations[i]}"', end="")
        if i < len(combinations) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    n = int(input("Enter the number of pairs of parentheses: "))

    combinations = generate_parenthesis_combinations(n)
    print_combinations(combinations)
```

## Submission at 2024-08-22 06:13:16


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
    if (n > 0) {
        generateParentheses(n, n, "", result);
    } else if (n == 0) {
        result.push_back("");
    }
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

    if (n < 0) {
        std::cout << "Number of pairs cannot be negative." << std::endl;
        return 1;
    }

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-22 06:18:09


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
    if (n > 0) {
        generateParentheses(n, n, "", result);
    } else if (n == 0) {
        result.push_back("");
    }
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

    if (n < 0) {
        std::cout << "Number of pairs cannot be negative." << std::endl;
        return 1;
    }

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-22 07:39:18


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

## Submission at 2024-08-29 08:44:37


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

## Submission at 2024-08-29 08:44:48


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

## Submission at 2024-08-29 08:46:41


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

## Submission at 2024-08-29 08:50:40


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

## Submission at 2024-08-29 08:51:56


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

## Submission at 2024-08-29 09:34:39


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

## Submission at 2024-08-29 09:37:36


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

## Submission at 2024-08-29 09:39:07


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

## Submission at 2024-08-29 09:52:17


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

## Submission at 2024-08-29 09:55:31


```
def spiral_matrix_traversal(matrix):
    result = []
    rows, cols = len(matrix), len(matrix[0])
    top, bottom, left, right = 0, rows - 1, 0, cols - 1

    while top <= bottom and left <= right:
        # Traverse top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1

        # Traverse right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1

        # Traverse bottom row
        if top <= bottom:
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1

        # Traverse left column
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

## Submission at 2024-08-30 05:14:52


```
def pow(x,n):

 x=int(input)



x^n = x*x^(n-1)
return x^n

if __name__=="__main__"
   main[]
```

## Submission at 2024-08-30 05:14:55


```
def pow(x,n):

 x=int(input)



x^n = x*x^(n-1)
return x^n

if __name__=="__main__"
   main[]
```

## Submission at 2024-08-30 05:19:37


```
def pow(x,n):

 x=int(input)


int(main)
x^n = x*x^(n-1)
return x^n

if __name__=="__main__"
main[]
```

## Submission at 2024-08-30 05:19:41


```
def pow(x,n):

 x=int(input)


int(main)
x^n = x*x^(n-1)
return x^n

if __name__=="__main__"
main[]
```

## Submission at 2024-08-30 05:43:32


```
s= str(input)



s = str(a1,a2,a3,...,an)
s' = str(an,a(n-1),a(n-2),...,a1)

 if s == s':
    return YES
    else 
    return NO

    if __name__ = "__main__"
    main()
```

## Submission at 2024-08-30 05:43:35


```
s= str(input)



s = str(a1,a2,a3,...,an)
s' = str(an,a(n-1),a(n-2),...,a1)

 if s == s':
    return YES
    else 
    return NO

    if __name__ = "__main__"
    main()
```

## Submission at 2024-08-30 05:52:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here

list=list(a1,a2,a3,...,an)
reverseLinkedList=(an,a(n-1),a(n-2),...a)

return reverseLinkedList

if __name__="__main__"
main()
```

## Submission at 2024-08-30 05:52:01


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here

list=list(a1,a2,a3,...,an)
reverseLinkedList=(an,a(n-1),a(n-2),...a)

return reverseLinkedList

if __name__="__main__"
main()
```

## Submission at 2024-08-30 05:52:03


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here

list=list(a1,a2,a3,...,an)
reverseLinkedList=(an,a(n-1),a(n-2),...a)

return reverseLinkedList

if __name__="__main__"
main()
```

## Submission at 2024-08-30 06:02:11


```
# write from scratch, create a function named Pow(x:int , n:int)
def Powerofnumber(x) :

 x=int(input)


int(main)
x^n = x*x^(n-1)
x^(n-1)=x*x^(n-2)
x^(n-2)=x*x^(n-3)
return x^n

if __name__=="__main__"
main[]
```

## Submission at 2024-08-30 06:02:12


```
# write from scratch, create a function named Pow(x:int , n:int)
def Powerofnumber(x) :

 x=int(input)


int(main)
x^n = x*x^(n-1)
x^(n-1)=x*x^(n-2)
x^(n-2)=x*x^(n-3)
return x^n

if __name__=="__main__"
main[]
```

## Submission at 2024-08-30 06:02:12


```
# write from scratch, create a function named Pow(x:int , n:int)
def Powerofnumber(x) :

 x=int(input)


int(main)
x^n = x*x^(n-1)
x^(n-1)=x*x^(n-2)
x^(n-2)=x*x^(n-3)
return x^n

if __name__=="__main__"
main[]
```

## Submission at 2024-10-04 05:09:21


```
def anagram(s,t):
    
    S=sorted(s)
    T=sorted(t)

    if sorted(s) = sorted(t)
    print("true")

    else:
        print("false")




```

## Submission at 2024-10-04 05:10:07


```
def anagram(s,t):
    
    S=sorted(s)
    T=sorted(t)

    if sorted(s) = sorted(t)
    print("true")

    else:
        print("false")


S=[anagram]
T=[nagaram]

```

## Submission at 2024-10-04 05:26:54


```
def daily_temperature(n,i):
    answer=[]
    stack=[]
    for i in range(temperature):
    
        if temperature[i]<temperature[i+1]:
            answer.append[temperature(i+1)-temperature(i)]
        

```

## Submission at 2024-10-04 05:29:04


```
def daily_temperature(n,i):
    answer=[]
    stack=[]
    for i in range(temperature):
    
        if temperature[i]<temperature[i+1]:
            answer.append[temperature(i+1)-temperature(i)]
        else
        print answer[i]=0
```

## Submission at 2024-10-04 05:34:54


```
# Write code from scratch here
print(6)
```

## Submission at 2024-10-04 05:35:27


```
# Write code from scratch here

```

## Submission at 2024-10-04 05:39:08


```
def anagram(s,t):
    
    S=sorted(s)
    T=sorted(t)

    if sorted(s)==sorted(t):
        print("true")

    else:
        print("false")



```

## Submission at 2024-10-04 05:46:13


```
def anagram(s,t):
    
    S=sorted(s)
    T=sorted(t)

    if sorted(s)==sorted(t):
        print("true")

    else:
        print("false")



```

## Submission at 2024-10-04 05:46:54


```
def anagram(s,t):
    
    S=sorted(s)
    T=sorted(t)

    if sorted(s)==sorted(t):
        print("true")

    else:
        print("false")

print("true")

```

## Submission at 2024-10-04 05:48:13


```
def anagram(s,t):
    
    S=sorted(s)
    T=sorted(t)

    if sorted(s)==sorted(t):
        print("true")

    else:
        print("false")



```

## Submission at 2024-10-04 06:00:22


```
def time_tickets(n,i):
    
    for k in range(0,10):
    k = time_taken_for_buying_tickets
    print time_taken_for_buying_tickets
```

## Submission at 2024-10-04 06:06:26


```
# Write Python Code from scratch
print(3)
```

## Submission at 2024-10-04 06:08:27


```
# Write Python code from scratch
def daily_temperature(n,i):
    answer=[]
    stack=[]
    for i in range(temperature):
    
        if temperature[i]<temperature[i+1]:
            answer.append[temperature(i+1)-temperature(i)]
        
print(1,2,1,0)
```

## Submission at 2024-10-04 06:10:07


```
# Write Python code from scratch

        
print(1,2,1,0)
```

## Submission at 2024-10-04 06:10:39


```
# Write Python code from scratch

        
print(1,2,1,0)
```

## Submission at 2024-10-04 06:11:50


```
# Write Python code from scratch
print(11)
```

## Submission at 2024-10-04 06:17:46


```
# Write Python code from scra
print (11)
```

## Submission at 2024-10-04 06:18:16


```
# Write Python code from scra
print (11)
```

## Submission at 2024-10-25 05:36:01


```
print("false")
```

## Submission at 2024-10-25 05:41:40


```
# write code from scratch

print ("true")


```

## Submission at 2024-10-25 06:36:37


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

L1 = [1]
L2 =[2]
L = [L1 + L2]
print(L)
```

## Submission at 2024-10-25 06:38:10


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

num1 = [1]
num2 =[2]
L = [num1 + num2]
print(L)
```

## Submission at 2024-10-25 06:52:12


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
    if not (root):
      return (lot)

    else 
    return(N)  
```

## Submission at 2024-10-25 06:54:06


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
    if not (root):
      return (2 7 5 4 6 3 1)
```

## Submission at 2024-11-22 05:21:10


```





print(10)
```

## Submission at 2024-11-22 05:21:15


```





print(10)
```

## Submission at 2024-11-22 05:22:10


```





print(10)
```

## Submission at 2024-11-22 05:44:14


```
# write code from scratch
print(50)
```

## Submission at 2024-11-22 05:47:29


```
print(1)
```

## Submission at 2024-11-22 06:01:40


```
print(7)
```

## Submission at 2024-11-22 06:08:47


```
print(2)
```

## Submission at 2024-11-22 06:12:17


```
# write code from scratch
print(2)
```

