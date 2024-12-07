## Submission at 2024-08-16 05:06:19


```
def fibonacci(x:int) -> int:
    if x <= 1:
        return x
    
    else:
        return fibonacci(x - 1) + fibonacci(x - 2)

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:45:33


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 1:
        return True
    elif n <= 0 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n // 2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:46:17


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 1:
        return True
    elif n <= 0 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n // 2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:48:41


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n == 1:
        return "true"
    elif n <= 0 or n % 2 != 0:
        return "false"
    else:
        return is_power_of_two(n / 2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 07:54:43


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

## Submission at 2024-08-22 07:55:28


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

## Submission at 2024-08-22 08:07:02


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

## Submission at 2024-08-22 08:11:19


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

## Submission at 2024-08-22 08:15:17


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

## Submission at 2024-08-22 08:16:36


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
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

    //all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sorting the subsets based on size and first element
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

## Submission at 2024-08-22 08:20:24


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

## Submission at 2024-08-22 08:53:40


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

## Submission at 2024-08-29 07:44:51


```
# Write the code from scratch, no boilerplate is required
def are_array_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False

    cnt1 = {}
    cnt2 = {}

    for num in arr1:
        cnt1[num] = cnt1.get(num, 0) + 1

    for num in arr2:
        cnt2[num] = cnt2.get(num, 0) + 1

    return cnt1 == cnt2

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

## Submission at 2024-08-29 07:47:32


```

def are_array_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False

    cnt1 = {}
    cnt2 = {}

    for num in arr1:
        cnt1[num] = cnt1.get(num, 0) + 1

    for num in arr2:
        cnt2[num] = cnt2.get(num, 0) + 1

    return cnt1 == cnt2

def main():
    size1, size2 = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    if are_array_equal(arr1, arr2):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 08:01:03


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

## Submission at 2024-08-29 08:08:53


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

## Submission at 2024-08-29 08:14:53


```
def cnt_even_digit_number(nums):
    cnt = 0
    for num in nums:
        digits = len(str(num))
        if digits % 2 == 0:
            cnt += 1
    return cnt

def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result = cnt_even_digit_number(nums)
    print(result)

if __name__ == "__main__":
    main()




```

## Submission at 2024-08-29 08:19:53


```
def cnt_even_digit_numbers(nums):
    cnt = 0
    for num in nums:
        digits = len(str(num))
        if digits % 2 == 0:
            cnt += 1
    return cnt

def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result = cnt_even_digit_numbers(nums)
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 08:31:10


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

## Submission at 2024-08-29 08:50:16


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

## Submission at 2024-08-29 08:52:44


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

## Submission at 2024-08-29 09:31:38


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

## Submission at 2024-08-29 09:35:20


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

## Submission at 2024-08-30 05:14:15


```
# write from scratch, create a function named Pow(x:int , n:int)
import math
def power(x,n):
    x^0==1
    count=0
    x,n = input("Enter the value of x and n: ",end=" ")
    for i in (0,n):
        answer = x*(x^n-1)
        count+=1
        return answer
def main():
    power()
    print(answer)
        

    

```

## Submission at 2024-08-30 05:44:48


```
def palindrome(str):
    for i in str:
        if(str[i]==str[-(i+1)]):
            return true
        else:
            return false
            i+=1
def main():
    str=input("Enter the string: ")
    palindrome()
    if true:
        print("Yes")
    else:
        print("No")
    


           

```

## Submission at 2024-08-30 06:11:38


```
# Write code from scratch
n = int(input("Enter the size of the array: "))
count = 0
arr1 = int(input(),end = " ")
arr2 = int(input(),end = " ")

if(arr1[i]>>arr2[i]):
    print(arr1[i])
else:
        print(arr2[i])
        i+=1
        count+=1
        

        

```

## Submission at 2024-10-04 05:25:31


```
def anagram(s,t):
    for i in range(0,len(s),1):
        for j in range(0,len(t),1):
            if (len(s)==len(t) & s[i]==t[j]):
                return true
            else:
                return false
        
  
    s = input("String 1 : ")
    t = input("String 2 : ")
    print(s)
    print(t)
    
    result = anagram()
    print(result)
```

## Submission at 2024-10-04 05:35:31


```
class solution:
    def anagram(s,t):
        for i in range(0,len(s)):
            for j in range(len(t)):
                if (len(s)==len(t) & s[i]==t[j]):
                    return true
                else:
                    return false
        
    solution()
    s = input("String 1 : ")
    t = input("String 2 : ")
    result = solution.anagram()
    print(s)
    print(t)
    print(result)
```

## Submission at 2024-10-04 05:39:10


```
class solution()
    def anagram(s,t):
        for i in range(0,len(s)):
            for j in range(len(t)):
                if (len(s)==len(t) & s[i]==t[j]):
                    return true
                else:
                    return false

        
    solution()
    s = input("String 1 : ")
    t = input("String 2 : ")
    result = solution.anagram()
    print(s)
    print(t)
    print(result)
```

## Submission at 2024-10-04 06:16:42


```
class solution():
    def tickets(n,k):
        no_tickets = 1
        time_taken = 
        for i in range(len(n)):
            if (no_tickets>1):
                n.append(n[len(n)])
            elif(no_tickets == 1):
                n.remove(n[0])
            else:
                return time_taken
solution()
n = [2,3,2]
k = 2
result = solution.tickets()
print(result)
```

## Submission at 2024-10-04 06:21:27


```
class solution():
    def tickets(n,k):
        no_tickets = 1
        time_taken = len(n+1)*k 
        for i in range(len(n)):
            if (no_tickets>>1):
                n.append(n[len(n)])
            elif(no_tickets == 1):
                n.remove(n[0])
            else:
                return time_taken
solution()
n = [2,3,2]
k = 2
result = solution.tickets()
print(result)
```

## Submission at 2024-10-04 06:23:29


```
class solution():
    def tickets(n,k):
        no_tickets = 1
        time_taken = n[0]*k 
        for i in range(len(n)):
            if (no_tickets>>1):
                n.append(n[len(n)])
            elif(no_tickets == 1):
                n.remove(n[0])
            else:
                return time_taken
solution()
n = [2,3,2]
k = 2
result = solution.tickets()
print(result)
```

## Submission at 2024-10-04 06:29:45


```
class solution():
    def tickets(n,k):
        no_tickets = 1
        time_taken = n[0]*k 
        for i in range(len(n)):
            if (no_tickets>>1):
                n.append(n[len(n)])
            elif(no_tickets == 1):
                n.remove(n[0])
            else:
                return time_taken
solution()
n = [2,3,2]
k = 2
result = solution.tickets()
print(result)
```

## Submission at 2024-10-25 05:43:47


```
def postOrder(self,root):
    self.data = root
    str = {}
    self.left = None
    self.right = None
      for i in range(len(root)):
        if root = i:
          return self.left
        elif root = i+1:
          return self.right
        else:
          i = i + 1
        root(i).append(arr{})


```

## Submission at 2024-10-25 05:45:38


```
def postOrder(self,root):
    self.data = root
    str = {}
    self.left = None
    self.right = None
      for i in range(len(root)):
        if root = i:
          return self.left
        elif root = i:
          return self.right
        else:
          i = i + 1
        
        root(i).append(arr{})


```

## Submission at 2024-10-25 06:20:16


```
class solution():
    def sol(ransomeNote,magazine):

        for i in range(len(ransomeNote)):
            for j in range(len(magazine)):
                if ransomeNote[i] != magazine[j]:
                    return false
                elif magazine[j] == magazine [j+1]:
                    return false
                else:
                    return true
ransomeNote = str(input("Enter ransomeNote: "))
magazine = str(input("Enter magazine: "))
Solution = solution.sol(ransomeNote,magazine)
print(Solution) 



```

## Submission at 2024-10-25 06:20:57


```
class solution():
    def sol(ransomeNote,magazine):

        for i in range(len(ransomeNote)):
            for j in range(len(magazine)):
                if ransomeNote[i] != magazine[i]:
                    return false
                elif magazine[j] == magazine [j+1]:
                    return false
                else:
                    return true
ransomeNote = str(input("Enter ransomeNote: "))
magazine = str(input("Enter magazine: "))
Solution = solution.sol(ransomeNote,magazine)
print(Solution) 



```

## Submission at 2024-10-25 06:23:00


```
class solution():
    def sol(ransomeNote,magazine):

        for i in range(len(ransomeNote)):
            for j in range(len(magazine)):
                if ransomeNote[i] != magazine[j]:
                    return false
                elif magazine[j] == magazine [j+1]:
                    return false
                else:
                    return true
ransomeNote = str(input("Enter ransomeNote: "))
magazine = str(input("Enter magazine: "))

print(solution) 



```

## Submission at 2024-10-25 06:23:44


```
class solution():
    def sol(ransomeNote,magazine):

        for i in range(len(ransomeNote)):
            for j in range(len(magazine)):
                if ransomeNote[i] != magazine[j]:
                    return false
                elif magazine[j] == magazine [j+1]:
                    return false
                else:
                    return true
ransomeNote = str(input("Enter ransomeNote: "))
magazine = str(input("Enter magazine: "))

print(solution) 



```

## Submission at 2024-10-25 06:46:08


```
class Solution:
    def isSymmetric(self, root):
        self.right = None
        self.data = root
        self.left = None
         
        for i in range(len(root)+1):
            if len(root) == (x//2):
                return true 
            else:
                return false
                  
```

## Submission at 2024-10-25 06:57:12


```
class Solution:
    def isSymmetric(self, root):
        self.right = None
        self.data = root
        self.left = None
        x = len(root) 
        for i in range(x):
            if root == (x//2):
                return true 
            else:
                return false
            

                  
```

## Submission at 2024-10-25 06:58:19


```
class Solution:
    def isSymmetric(self, root):
        self.right = None
        self.data = root
        self.left = None
        x = len(root) 
        for i in range(x):
            if x == (x//2 == 0):
                return true 
            else:
                return false
            

                  
```

## Submission at 2024-10-25 06:59:50


```
class Solution:
    def isSymmetric(self, root):
        self.right = None
        self.data = root
        self.left = None
        x = len(root) 
        for i in range(x):
            if x == (x//2 == 0 && ):
                return true 
            else:
                return false
            

                  
```

## Submission at 2024-11-22 05:51:50


```
arr = int(input(), end = " ")
n = int(input("Length of array: "))
sum == 0
for i in range(0,len(arr)-1):
    if i >> 1:
        sum = arr[i]+arr[i+1]
    else:
        sum = arr[0]
    i+=1
    print(sum)

    
```

## Submission at 2024-11-22 05:52:58


```
# Write Code From Scratch Here
arr = int(input(), end = " ")
n = int(input("Length of array: "))
sum == 0
for i in range(0,len(arr)-1):
    if i >> 1:
        sum = arr[i]+arr[i+1]
    else:
        sum = arr[0]
    i+=1
    print(sum)

    
```

## Submission at 2024-11-22 06:17:36


```
# Write Code From Scratch Here
arr = int(input(), end = " ")
n = int(input("Length of array: "))
arr1 = []
sum == arr[0]
sum.append(arr1)
for i in range(0,len(arr1)-1):
    for j in range(0,len(arr)-1):
        sum = arr1[0]+arr[1+i]
    j+=1
i+=1
print(sum)



```

## Submission at 2024-11-22 06:17:37


```
# Write Code From Scratch Here
arr = int(input(), end = " ")
n = int(input("Length of array: "))
arr1 = []
sum == arr[0]
sum.append(arr1)
for i in range(0,len(arr1)-1):
    for j in range(0,len(arr)-1):
        sum = arr1[0]+arr[1+i]
    j+=1
i+=1
print(sum)



```

## Submission at 2024-11-22 06:32:30


```
# Write Code From Scratch Here
arr = int(input(), end = " ")
n = int(input("Length of array: "))
arr1 = []
sum == arr[0]
sum.append(arr1)
for i in range(0,len(arr1)-1):
    for j in range(0,len(arr)-1):
        sum = arr1[0]+arr[1+i]
    j+=1
i+=1
if len(arr1)>>1
    arr1.pop(0)
print(sum)



```

## Submission at 2024-11-22 06:42:03


```
n = 3
for i in range(0,n):
    print("* ")
for j in range(n-1,0)
    print("* ")


```

## Submission at 2024-11-22 06:44:04


```
n = 3
for i in range(0,n):
    print(i*"* ")
for j in range(n-1,0)
    print(j*"* ")


```

## Submission at 2024-11-22 06:51:21


```
a = [1, 2, 3, 1]
initial_score = 0
for i in (0,len(a)):
    for j in (0,len(a)):
        if a[i] = [j]
            initial_score +=1
        initial_score == 0
print(initial_score)
```

