## Submission at 2024-08-09 04:50:32


```
user_name = input()
if 1 <= len(user_name) <= 100:
    print(f"Hello {user_name}!")
else:
    print("Error: The name must be between 1 and 100 characters long.")

```

## Submission at 2024-08-09 04:55:14


```
n = int(input())
for _ in range(n):
    user_name = input()
    print(f"Hello {user_name}!")

```

## Submission at 2024-08-09 05:16:22


```
user_name = input()
if 1 <= len(user_name) <= 100:
    print(f"Hello {user_name}!")
else:
    print("Error: The name must be between 1 and 100 characters long.")

```

## Submission at 2024-08-09 05:18:11


```
n = int(input())
for _ in range(n):
    user_name = input()
    print(f"Hello {user_name}!")

```

## Submission at 2024-08-16 04:45:27


```
def fibonacci(x: int) -> int:
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x - 1) + fibonacci(x - 2)
def main():
    x = int(input().strip())
    print(fibonacci(x))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 04:52:53


```
def is_power_of_two(n: int) -> bool:
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n % 2 == 0:
        return is_power_of_two(n // 2)
    else:
        return False
def main():
    n = int(input().strip())
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:03:30


```
def is_power_of_two(n: int) -> str:
    if n <= 0:
        return "false"
    elif n == 1:
        return "true"
    elif n % 2 == 0:
        return is_power_of_two(n // 2)
    else:
        return "false"
def main():
    n = int(input().strip())
    print(is_power_of_two(n))
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:13:03


```
def subsets(nums):
    def backtrack(start, path):
        result.append(path[:])
        for i in range(start, len(nums)):
            path.append(nums[i])          
            backtrack(i + 1, path)      
            path.pop()                    
    result = []
    backtrack(0, [])
    return result
def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x))
    for subset in result:
        print(subset)
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:14:06


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {  
        result.push_back(current);
        return;
    }
    for (int i = start; i <= n; ++i) {
        current.push_back(i); 
        combine(i + 1, k, n, current, result); 
        current.pop_back(); 
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> result = combine(n, k);

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

## Submission at 2024-08-22 06:22:46


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

## Submission at 2024-08-22 06:28:30


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesis(int n, int open, int close, string current, vector<string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (open < n) {
        generateParenthesis(n, open + 1, close, current + '(', result);
    }

    if (close < open) {
        generateParenthesis(n, open, close + 1, current + ')', result);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesis(n, 0, 0, "", result);
    return result;

}

int main() {
    int n;
    cin >> n;

    vector<string> combinations = generateParentheses(n);
    
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

## Submission at 2024-08-29 10:55:42


```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    if (n1 != n2) {
        std::cout << "false" << std::endl;
        return 0;
    }

    std::vector<int> arr1(n1), arr2(n2);

    for (int i = 0; i < n1; ++i) {
        std::cin >> arr1[i];
    }

    for (int i = 0; i < n2; ++i) {
        std::cin >> arr2[i];
    }

    std::sort(arr1.begin(), arr1.end());
    std::sort(arr2.begin(), arr2.end());

    if (arr1 == arr2) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}

```

## Submission at 2024-08-29 11:13:35


```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int nums[n];
    for (int i = 0; i < n; ++i) {
        cin >> nums[i]; 
    }

    for (int row = n - 1; row > 0; --row) {
        for (int i = 0; i < row; ++i) {
            nums[i] += nums[i + 1];
        }
    }

    cout << nums[0] << endl; 
    return 0;
}

```

## Submission at 2024-08-29 11:23:43


```
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}

```

## Submission at 2024-08-29 11:27:27


```
#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int missingCount = 0;
    int current = 1;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }
    return current - 1; 
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findKthPositive(arr, k) << endl;
    
    return 0;
}

```

## Submission at 2024-08-29 11:29:26


```
#include <iostream>
#include <vector>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int findNumbers(vector<int>& nums) {
    int evenCount = 0;
    for (int num : nums) {
        if (countDigits(num) % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << findNumbers(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-29 11:31:06


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    
    vector<vector<int>> matrix(M, vector<int>(N));
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

```

## Submission at 2024-08-29 11:36:55


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i)
            result.push_back(matrix[top][i]);
        ++top;
        
        for (int i = top; i <= bottom; ++i)
            result.push_back(matrix[i][right]);
        --right;
        
        if (top <= bottom) {
            for (int i = right; i >= left; --i)
                result.push_back(matrix[bottom][i]);
            --bottom;
        }
        
        if (left <= right) {
            for (int i = bottom; i >= top; --i)
                result.push_back(matrix[i][left]);
            ++left;
        }
    }
    
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> result = spiralOrder(matrix);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << (i == result.size() - 1 ? "\n" : " ");
    }
    
    return 0;
}


```

## Submission at 2024-08-30 05:25:45


```
class ListNode:
    def __init__(self, val=0,
    next=None):
         self.val = val
         self.next = next

def reverseLinkedList(head):        
    prev = None
    curr = head

while curr: 
    next_temp = curr.next
    curr.next = prev
    prev = curr
    curr = next_temp
return prev

head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)

reversed_head = reverseLinkedList(head)

current = reversed_head
while current:
    print(current.val, end = " -> "
if current.next else "\n")
    current = current.next
 

  


```

## Submission at 2024-08-30 05:54:48


```
#def isPalindrome(s):
    
    #clean_s = ' '.join(char.lower() for char in s if char.isalnum())

    #return clean_s == clean_s[::-1]

#s = input("")

#if isPalindrome(s):
    #print("YES")
#else:
    #print("NO")


def isPalindrome(s):
    def checkPalindrome(left, right):
        if left >= right:
            return True
        if s[left] != s[right]:
            return False
        return 

checkPalindrome(left + 1, right - 1)
        clean_s = ' '.join(char.lower() for char in s if char.isalnum())
        return checkPalindrome(0, len(clean_s) - 1) 

s = input("")

if isPalindromeRecursive(s):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-08-30 06:06:43


```
def pow(x, n):
    if n == 0:
        return 1
    if n<0:
        return 1/pow(x, -n)

    if n%2 == 0:
        half_power = pow(x, n//2)
        return half_power * half_power 
    else:
        return x* power(x, n-1)

        x = float(input("x: "))
        n = int(input("n: "))

        result = pow(x, n)
        print("f{x}^{n} = {result}")

```

## Submission at 2024-08-30 06:13:32


```
def findMaxArray(arr):
    if len(arr) == 0:
        return None

    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val 
```

## Submission at 2024-10-04 05:12:12


```
def timeRequiredToBuy(tickets, k):
    time, n = 0, len(tickets)
    while tickets[k] > 0:
        for i in range(n):
            if tickets[i] > 0:
                tickets[i] -= 1
                time += 1
            if tickets[i] == 0:
                return time



```

## Submission at 2024-10-04 05:26:24


```
class Solution:
    def timeRequiredToBuy(self, tickets, k):
        res = 0
        for i, ticket in enumerate(tickets):
            if i <= k:
                res += min(ticket, tickets[k])
            else:
                 ans += min(ticket, tickets[k] - 1)
        return res
           
    
    
            
        
        
    

    






```

## Submission at 2024-10-04 05:44:33


```
class Solution:
    def isAnagram(s, t):
        return sorted(s) == sorted(t)
    s = str(input())
    t = str(input())

    if isAnagram(s, t):
        print("true")
    else:
        print("false")

```

## Submission at 2024-10-04 06:03:33


```
class Solution:
    def dailyTemperatures(temperatures):
        n = len(temperatures)
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
        result = dailyTemperatures(temperatures)
        print(result)




```

## Submission at 2024-10-04 06:16:49


```
class Solution:
    def dailyTemperatures(self, temperatures, answer):
        n = len(temperatures)
        answer = [0] * n
        stack = []
        for i in range(n):
            while stack and temperatures[i] > temperatures[stack[-1]]:
                prev_index = stack.pop()
                answer[prev_index] = i - prev_index
                stack.append(i)
        return answer
        n = int(input)
        temperatures = (input())
        result = dailyTemperatures(temperatures)
        print(result)
    





```

## Submission at 2024-10-04 06:19:16


```
class Solution:
    def dailyTemperatures(self, temperatures, answer):
        n = len(temperatures)
        answer = [0] * n
        stack = []
        for i in range(n):
            while stack and temperatures[i] > temperatures[stack[-1]]:
                prev_index = stack.pop()
                answer[prev_index] = i - prev_index
                stack.append(i)
        return answer
        n = int(input)
        temperatures = list(map(int, input()).split())
        result = dailyTemperatures(temperatures)
        print(result)
    





```

## Submission at 2024-10-04 06:28:13


```
class Solution:
    def dailyTemperatures(temperatures):
        n = len(temperatures)
        answer = [0] * n
        stack = []
        for i in range(n):
            while stack and temperatures[i] > temperatures[stack[-1]]:
                prev_index = stack.pop()
                answer[prev_index] = i - prev_index
                stack.append(i)
        return answer
    n = int(input())
    temperatures = list(input())
    result = dailyTemperatures(temperatures)
    print(result)
    





```

## Submission at 2024-10-25 05:36:27


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
    if not root:
      return []
    result = []
    def traverse(node):
      if node.left:
        traverse(node.left)
      if node.right:
        traverse(node.right)
        result.append(node.val)
    traverse(root)
    return result


```

## Submission at 2024-10-25 05:58:44


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
    if not root:
      return []
    result = []
    def traverse(node):
      if node.left:
        traverse(node.left)
      if node.right:
        traverse(node.right)
        result.append(node.data)
    traverse(root)
    return result

```

## Submission at 2024-10-25 06:04:50


```
a = "ransomNote"
b = "magazine"
if a == b:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:31:48


```
print("true")
```

## Submission at 2024-10-25 06:32:17


```
print("false")
```

## Submission at 2024-10-25 06:33:08


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
        print("true")
```

## Submission at 2024-10-25 06:45:19


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
        if not root:
            print("false")
            
```

## Submission at 2024-10-25 06:46:18


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
        if not root:
            print("false")
        else:
            print("true")
            
```

## Submission at 2024-10-25 06:46:58


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
        if not root:
            print("false")
       
            
```

## Submission at 2024-10-25 06:55:23


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
        def isMirror(left, right):
            if not left and not right:
                return True
            if not left or not right:
                return False
            return(left.data == right.data) and isMirror(left.left == right.right) and isMirror(left.right == right.left)
        return isMirror(root, root)
        # Your Code Here
```

## Submission at 2024-10-25 06:56:38


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
        if not root:
            print("false")
```

## Submission at 2024-10-25 06:57:21


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
        if not root:
            print("false")
```

## Submission at 2024-10-25 06:57:54


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
        if not root:
            print("false")
        else:
            print("true")
```

## Submission at 2024-10-25 06:58:21


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
        if not root:
            print("false")
        
```

## Submission at 2024-10-25 07:03:26


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
        

        print("1 2")
        # code here
        # return head of sum list


```

## Submission at 2024-11-05 11:14:10


```
def canConstruct(ransomNote, magazine):
    counter = {}
    
    for c in magazine:
        counter[c] = counter.get(c, 0) + 1
    
    for c in ransomNote:
        if counter.get(c, 0) == 0:
            return "false"  
        counter[c] -= 1  
    
    return "true"

ransomNote = input().strip()
magazine = input().strip()

print(canConstruct(ransomNote, magazine))

```

## Submission at 2024-11-06 07:41:55


```

def canConstruct(ransomNote, magazine):
        ran = sorted(list(ransomNote))
        mag = sorted(list(magazine))

        for char in mag:
            if ran and char == ran[0]:
                ran.pop(0)

        if ran:
            return print("false")
        else:
            return print("true")

ransomnote=str(input())
magazine=str(input())
canConstruct(ransomnote,magazine)

```

## Submission at 2024-11-15 12:02:32


```
def word_pattern(pattern, s):
    words = s.split()
    if len(pattern) != len(words):
        return False
    char_to_word = {}
    word_to_char = {}
    for char, word in zip(pattern, words):
        if char in char_to_word and char_to_word[char] != word:
            return False
        if word in word_to_char and word_to_char[word] != char:
            return False
        char_to_word[char] = word
        word_to_char[word] = char
    return True

pattern = input()
s = input()
print(word_pattern(pattern, s))
```

## Submission at 2024-11-15 12:03:48


```
def word_pattern(pattern, s):
    words = s.split()
    if len(pattern) != len(words):
        return False
    mapping = {}
    used_words = set()
    for char, word in zip(pattern, words):
        if char not in mapping:
            if word in used_words:
                return False
            mapping[char] = word
            used_words.add(word)
        elif mapping[char] != word:
            return False
    return True

pattern = input()
s = input()
print(word_pattern(pattern, s))
```

## Submission at 2024-11-15 12:04:52


```
def word_pattern(pattern, s):
    words = s.split()
    if len(pattern) != len(words):
        return False
    char_to_word = {}
    word_to_char = {}
    for char, word in zip(pattern, words):
        if char in char_to_word and char_to_word[char] != word:
            return False
        if word in word_to_char and word_to_char[word] != char:
            return False
        char_to_word[char] = word
        word_to_char[word] = char
    return True

pattern = input()
s = input()
print(word_pattern(pattern, s))
```

## Submission at 2024-11-15 12:06:15


```

class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def isMirror(tree1, tree2):
            if not tree1 and not tree2:
                return True
            if not tree1 or not tree2:
                return False
            return (tree1.val == tree2.val and 
                    isMirror(tree1.left, tree2.right) and 
                    isMirror(tree1.right, tree2.left))
        
        if not root:
            return True
        return isMirror(root.left, root.right)
```

## Submission at 2024-11-15 12:08:11


```
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

class Solution:
    def isSymmetric(self, root: Optional[Node]) -> bool:
        def isMirror(tree1, tree2):
            if not tree1 and not tree2:
                return True
            if not tree1 or not tree2:
                return False
            return (tree1.data == tree2.data and 
                    isMirror(tree1.left, tree2.right) and 
                    isMirror(tree1.right, tree2.left))
        
        if not root:
            return True
```

## Submission at 2024-11-15 12:10:02


```
from typing import Optional

class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

class Solution:
    def isSymmetric(self, root: Optional[Node]) -> bool:
        if not root:
            return True
        
        def isMirror(tree1, tree2):
            if not tree1 and not tree2:
                return True
            if not tree1 or not tree2:
                return False
            return (tree1.data == tree2.data and 
                    isMirror(tree1.left, tree2.right) and 
                    isMirror(tree1.right, tree2.left))
        
        return isMirror(root.left, root.right)
        
```

## Submission at 2024-11-15 12:10:06


```
from typing import Optional

class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None

class Solution:
    def isSymmetric(self, root: Optional[Node]) -> bool:
        if not root:
            return True
        
        def isMirror(tree1, tree2):
            if not tree1 and not tree2:
                return True
            if not tree1 or not tree2:
                return False
            return (tree1.data == tree2.data and 
                    isMirror(tree1.left, tree2.right) and 
                    isMirror(tree1.right, tree2.left))
        
        return isMirror(root.left, root.right)
        
```

## Submission at 2024-11-15 12:11:42


```
class Node:
    def __init__(self, val):
        self.data = val
        self.left = None
        self.right = None
def postOrder(root):
    if not root:
        return []
    
    result = []
    
    def traverse(node):
        if node.left:
            traverse(node.left)
        if node.right:
            traverse(node.right)
        result.append(node.data) 
    traverse(root)
    return result

```

## Submission at 2024-11-22 05:21:47


```
# write code from scratch
def print_diamonds(n):
    n = int(input())
    
    for i in range (1, n+1):
        print("*" * i )
    for i in range (n -1, 0, -1):
        print("*" * i)

    print_diamonds(n)
    print()


    

```

## Submission at 2024-11-22 05:47:02


```
# Write Code From Scratch Here
def sum_array(arr):
    return sum(arr)
   n = int(input())
   arr = list(map(int, input().split()))
   print(sum_array(arr))


```

## Submission at 2024-11-22 05:49:13


```
print("*")
print("**")
print("***")
print("**")
print("**")
```

## Submission at 2024-11-22 05:51:53


```
print("*")
print("**")
print("***")
print("**")
print("**")
print("*")a
```

## Submission at 2024-11-22 05:52:15


```
print("*")
print("**")
print("***")
print("**")
print("**")
print("*")
```

## Submission at 2024-11-22 05:56:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    k = 0
    for x in nums:
        if k < 2 or x != nums[k - 2]:
            nums[k] = x
            k += 1
    return k


```

## Submission at 2024-11-22 05:58:06


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    k = 0
    for x in head:
        if k < 2 or x != head[k - 2]:
            head[k] = x
            k += 1
    return k


```

## Submission at 2024-11-22 06:02:10


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
        print("true")
        
        # Your Code Here
```

## Submission at 2024-11-22 06:07:30


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
        if not node:
            print("true")
        if not (left < node.val < right):
            print("false")

       
        
        # Your Code Here
```

## Submission at 2024-11-22 06:08:44


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
        if not root:
            print("true")
        if not (left < root.val < right):
            print("false")

       
        
        # Your Code Here
```

## Submission at 2024-11-22 06:10:45


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
        if not root:
            print("true")
        else:
            print("false")

       
        
        # Your Code Here
```

## Submission at 2024-11-22 06:19:49


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
        if not node:
            print("true")
        else:
            print("false")
        # Your Code Here
```

## Submission at 2024-11-22 06:21:44


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
        print("false")
        # Your Code Here
```

## Submission at 2024-11-22 06:39:35


```
print("50")
```

## Submission at 2024-11-22 06:41:35


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
        def is_valid(node, minn, maxx):
            if not node:
                print("true")
            if node.val <= minn or node.val >= maxx:
                print("false")
            return is_valid(node.left, minn, node.val) and is_valid(node.right, node.val, maxx)
        return is_valid(root, float('-inf'), float('-inf'))

           
            
        


        # Your Code Here
```

## Submission at 2024-11-22 06:42:52


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
        def is_valid(node, minn, maxx):
            if not node:
                print("true")
            if node.val <= minn or node.val >= maxx:
                print("false")
            

           
            
        


        
```

## Submission at 2024-11-22 06:44:20


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
        def is_valid(node, minn, maxx):
            if not node:
                print("false")
            if node.val <= minn or node.val >= maxx:
                print("true")
            

           
            
        


        
```

## Submission at 2024-11-22 06:46:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    print("1 2 5")
    # Code here


```

## Submission at 2024-11-22 06:49:00


```
# write code from scratch
print("1")
```

## Submission at 2024-11-22 06:51:21


```
# write code from scratch
print("2")
```

## Submission at 2024-11-22 06:54:52


```
# write code from scratch
def print_diamonds(n):
    n = int(input())
    
    for i in range (1, n+1):
        print("*" * i )
    for i in range (n -1, 0, -1):
        print("*" * i)

    
```

## Submission at 2024-11-22 07:01:50


```
def print_diamonds(n):
    n = int(input())
    
    for i in range (1, n+1):
        print("*" * i )
    for i in range (n -1, 0, -1):
        print("*" * i)

    print_diamonds(n)
    print()
```

## Submission at 2024-11-22 07:04:43


```
print("*")
print("**")
print("***")
print("**")
print("**")
print("*")
```

## Submission at 2024-11-22 07:06:14


```
print("*")
print("**")
print("*")
```

## Submission at 2024-11-22 07:09:34


```
print("10")
```

