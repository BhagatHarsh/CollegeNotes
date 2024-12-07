## Submission at 2024-08-05 10:17:01


```
# Write your Python code here from the scratch
name = input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:42:59


```
# Write your Python code here
n = int(input())
for i in range(0,n):
    name = input()
    print("Hello "+name+"!")    
```

## Submission at 2024-08-05 10:44:54


```
# Write your Python code here from the scratch
print("Hello "+input()+"!")
```

## Submission at 2024-08-12 10:04:10


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-12 10:21:49


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 0:
        return False
    elif n == 1:
        return True
    elif n%2 != 0:
        return False    
    else:
        return is_power_of_two(n/2)                


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
    
```

## Submission at 2024-08-12 10:23:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 0:
        return False
    elif n == 1:
        return True
    elif n%2 != 0:
        return False    
    else:
        return is_power_of_two(n/2)                


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:26:02


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n%2 != 0:
        return False    
    else:
        return is_power_of_two(n/2)                


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:28:02


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False
    elif n == 1:
        return True
    elif n%2 != 0:
        return False    
    return is_power_of_two(n/2)                


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:32:07


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return "false"
    elif n == 1:
        return "true"
    elif n%2 != 0:
        return "false"    
    return is_power_of_two(n/2)                


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:32:36


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return "false"
    elif n == 1:
        return "true"
    elif n%2 != 0:
        return "false"    
    return is_power_of_two(n/2)                


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-13 09:57:32


```
def subsets(nums):
    # Wrtie logic here
    n = len(nums)
    solution, res = [], []

    def backtrack()
    

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

## Submission at 2024-08-13 10:04:34


```
def subsets(nums):
    # Wrtie logic here
    n = len(nums)
    solution, res = [], []

    def backtrack(i):
        if i >= n:
            result.append(solution.copy())
            return

        # pick the value
        solution.append(nums[i])
        backtrack(i+1)

        # don't pick the value
        solution.pop()
        backtrack(i+1)

    backtrack(0)
    return res           
    

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

## Submission at 2024-08-13 10:07:27


```
def subsets(nums):
    # Wrtie logic here
    n = len(nums)
    solution, res = [], []

    def backtrack(i):
        if i >= n:
            res.append(solution.copy())
            return

        # pick the value
        solution.append(nums[i])
        backtrack(i+1)

        # don't pick the value
        solution.pop()
        backtrack(i+1)

    backtrack(0)
    return res           
    

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

## Submission at 2024-08-21 11:39:28


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])
            return
        for i in range(start, end):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1, end)
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return result

def main():
    nums = list(map(int, input().split()))

    permutations = permute(nums)

    print(permutations)

if __name__ == '__main__':
    main()
```

## Submission at 2024-08-21 11:46:44


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
    // Print the combinations

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

## Submission at 2024-08-21 11:49:21


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

## Submission at 2024-08-21 11:52:13


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {  //base case 
        result.push_back(current);
        return;
    }

    // Recursive case
    for (int i = start; i <= n; ++i) {
        current.push_back(i); // Adding  the current number to the combination
        combine(i + 1, k, n, current, result); // Recurse with the next number
        current.pop_back(); // removing the last number
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

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

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

## Submission at 2024-09-02 10:34:52


```
class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    while head is not None:
        head.append(head.val)
        head = head.next    
    return result

def main():
    Head = Node(1)
    Head.next = Node(2)  
    Head.next.next = Node(3)
    traverse_linked_list(Head)

if __name__ == "__main__":
    main()   
```

## Submission at 2024-09-03 09:07:33


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    currNode = head
    while currNode != None:
        result.append(currNode.val)
        currNode = currNode.next
    return result

```

## Submission at 2024-09-03 10:07:05


```
# Write code from scratch
size_ary = 5

a = [1, 3, 6, 7, 10]
b = [2, 4, 5, 8, 9]
c = []

for i in range(0,size_ary):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])
print(c)            
```

## Submission at 2024-09-03 10:22:31


```
# Write code from scratch
size_ary = int(input())

c = []

inp_a = list(map(int,input().split()))
inp_b = list(map(int,input().split()))

for i in range(0,size_ary):
    if inp_a[i]>inp_b[i]:
        c.append(inp_a[i])
    else:
        c.append(inp_b[i])
print(c)            
```

## Submission at 2024-09-03 10:25:09


```
# Write code from scratch
size_ary = int(input())

c = []

inp_a = list(map(int,input().split()))
inp_b = list(map(int,input().split()))

for i in range(size_ary):
    if inp_a[i]>inp_b[i]:
        c.append(inp_a[i])
    else:
        c.append(inp_b[i])

for i in range(size_ary):
    print(c[i],end=" ")
```

## Submission at 2024-09-08 09:29:42


```
class Node:
    def __init__(self, data = 0, next = None):
        self.data = data
        self.next = next

def traverse(head):
    curr = head
    while curr != None:
        print(curr.data, end=" ")
        curr = curr.next
    print()    

def delNode(head, k):
    currNode = head
    prevNode = None

    while currNode!= None:
        if currNode.data == k:
            if prevNode == None:
                head = currNode.next 
            else:    
                prevNode.next = currNode.next
            del currNode
            return head
        prevNode = currNode    
        currNode = currNode.next   
    return head       

def main():
    inp_num = int(input())
    inp_list = list(map(int, input().split())) 
    head = Node(inp_list[0])
    curr = head
    for i in range(1, inp_num):
        curr.next = Node(inp_list[i])
        curr = curr.next
    k = int(input())
    del_list = delNode(head, k)
    traverse(del_list)


```

## Submission at 2024-09-08 10:19:31


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    # Your code here
    curr = head 
    kth_node = head
    
    while curr != None:
        if curr.val == k:
            if head.val == k:
                kth_node = head.val
            else:
                kth_node = curr.val
        curr = curr.next 
               
    return kth_node

def main():
    inp_num = int(input())
    inp_list = list(map(int, input().split())) 
    head = ListNode(inp_list[0])
    curr = head
    for i in range(1, len(inp_list)):
        curr.next = ListNode(inp_list[i])
        curr = curr.next
    k = int(input())  
    if k>len(inp_list):
        print(-1)
    else:
        result = get_kth_node(head,k)
        print(result)
      
```

## Submission at 2024-09-08 10:36:53


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    # Your code here
    curr = head 
    kth_node = head
    index = 1
    
    while curr != None:
        if index == k:
            if head == k:
                kth_node = head
            else:
                kth_node = curr
        curr = curr.next
        index += 1 
               
    return kth_node.val

def main():
    inp_num = int(input())
    inp_list = list(map(int, input().split()))

    head = ListNode(inp_list[0])
    curr = head

    for i in range(1, len(inp_list)):
        curr.next = ListNode(inp_list[i])
        curr = curr.next

    k = int(input())  
    if k > len(inp_list):
        print(-1)
    else:
        result = get_kth_node(head,k)
        print(result)
      
```

## Submission at 2024-09-08 10:44:46


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    # Your code here
    curr = head 
    index = 1
    
    while curr != None:
        if index == k:
            if index == 1:
                return head.val
            else:
                return curr.val
        curr = curr.next
        index += 1 
               
    return -1

def main():
    inp_num = int(input())
    inp_list = list(map(int, input().split()))

    head = ListNode(inp_list[0])
    curr = head

    for i in range(1, len(inp_list)):
        curr.next = ListNode(inp_list[i])
        curr = curr.next

    k = int(input()) 
    result = get_kth_node(k) 
    if k != None:
        print(result)
```

## Submission at 2024-09-08 11:30:19


```
class Node:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

def reverseLinkedList(head):
    # Write your logic here
    curr = head
    prev = None
    
    while curr != None:
        forward = curr.next 
        curr.next = prev
        prev = curr 
        curr = forward

    return prev 

def traverse(head):
    curr = head
    while curr != None:
        print(curr.data,end=" ")
        curr = curr.next

def main():
    inp_num = int(input())
    inp_list = list(map(int, input().split()))

    head = Node(inp_list[0])
    curr = head

    for i in range(1, len(inp_list)):
        curr.next = Node(inp_list[i])
        curr = curr.next

    sol = reverseLinkedList(head)
    traverse(sol)

```

## Submission at 2024-09-08 13:43:24


```

def diagonal_traversal(matrix):
    m = len(matrix)     # Number of rows
    n = len(matrix[0])  # Number of columns
    
    diagonals = {}
    
    # Traverse the matrix and group elements by their diagonal index (i + j)
    for i in range(m):
        for j in range(n):
            diag_key = i + j
            if diag_key not in diagonals:
                diagonals[diag_key] = []
            diagonals[diag_key].append(matrix[i][j])
    
    result = []
    
    # Collect all elements from diagonals in the correct order
    for diag_key in range(m + n - 1):  # diagonals are indexed from 0 to (m + n - 2)
        result.extend(diagonals[diag_key])
    
    return result

def main():
    # First input line with m and n
    m, n = map(int, input().split())
    
    # Next m lines to read the matrix
    matrix = [list(map(int, input().split())) for _ in range(m)]
    
    result = diagonal_traversal(matrix)
    
    # Print the result as a space-separated string
    print(" ".join(map(str, result)))


```

## Submission at 2024-09-08 13:54:37


```
def diagonal_traversal(matrix):
    m = len(matrix)     
    n = len(matrix[0])  
    
    diagonals = {}
    
    for i in range(m):
        for j in range(n):
            diag_key = i + j
            if diag_key not in diagonals:
                diagonals[diag_key] = []
            diagonals[diag_key].append(matrix[i][j])
    
    result = []
    
    for diag_key in range(m + n - 1):  
        result.extend(diagonals[diag_key])
    
    return result

def main():
    m, n = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(m)]
    
    result = diagonal_traversal(matrix)
    print(" ".join(map(str, result)))

```

## Submission at 2024-09-08 13:57:48


```
def diagonal_traversal(matrix):
    m = len(matrix)  # Number of rows
    n = len(matrix[0])  # Number of columns
    
    result = []
    
    # Loop through the diagonals that start from the first column (i, 0)
    for start_row in range(m):
        i, j = start_row, 0
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)
    
    # Loop through the diagonals that start from the top row (0, j) for j > 0
    for start_col in range(1, n):
        i, j = m - 1, start_col
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)
    
    return result

def main():
    # First input line with m and n
    m, n = map(int, input().split())
    
    # Next m lines to read the matrix
    matrix = [list(map(int, input().split())) for _ in range(m)]
    
    result = diagonal_traversal(matrix)
    
    # Print the result as a space-separated string
    print(" ".join(map(str, result)))

```

## Submission at 2024-09-08 13:59:34


```
def diagonal_traversal(matrix):
    m = len(matrix)  
    n = len(matrix[0])  
    
    result = []
    
    for start_row in range(m):
        i, j = start_row, 0
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)
    
    for start_col in range(1, n):
        i, j = m - 1, start_col
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)
    
    return result

def main():
    m, n = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(m)]
    
    result = diagonal_traversal(matrix)
    print(" ".join(map(str, result)))

```

## Submission at 2024-09-09 09:59:14


```
# Write Code from Scratch here
n = int(input())

def power_of_three(n):
    ans = False
    if n == 0:
        ans = True
    elif n == 1:
        ans = True
    elif n == 2:
        ans = False    
    else:
        power_of_three(n/3)
    return ans

rel = power_of_three(n)
print(rel)
```

## Submission at 2024-09-09 10:03:55


```
# Write Code from Scratch here
n = int(input())

def power_of_three(m):
    ans = False
    if m%3 == 0 or m%3 == 1:
        ans = True    
    elif m%3 == 2:
        ans = False    
    else:
        power_of_three(m/3)
    return ans

rel = power_of_three(n)
print(rel)
```

## Submission at 2024-09-09 10:04:52


```
# Write Code from Scratch here
n = int(input())

def power_of_three(m):
    ans = False
    if m == 0:
        ans = False
    if m%3 == 0 or m%3 == 1:
        ans = True    
    elif m%3 == 2:
        ans = False    
    else:
        power_of_three(m/3)
    return ans

rel = power_of_three(n)
print(rel)
```

## Submission at 2024-09-09 10:07:10


```
# Write Code from Scratch here
n = int(input())

def power_of_three(m):
    ans = False
    if m%3 == 0 or m%3 == 1:
        ans = True    
    elif m%3 == 2:
        ans = False    
    else:
        power_of_three(m/3)
    return ans

rel = power_of_three(n)
print(rel)
```

## Submission at 2024-09-09 10:54:29


```
class Node(self, data=0,next=None):
  self.data = data
  self.next = next

class Solution:
    def isPalindrome(self, head):
        #code here
        traverse1(head)
        reverse(head)
        traverse2(head)

        if sol1 == sol2:
          return True
        else:
          return False  

sol1 = []
sol2 = []

def traverse1(head):
  curr = head 
  while curr!=None:
    sol1.append(curr.data)
    curr = curr.next
  return sol1

def traverse2(head):
  curr = head 
  while curr!=None:
    sol2.append(curr.data)
    curr = curr.next
  return sol2

def reverse(head):
  curr = head
  prev = None

  while curr!=None:
    forward = curr.next
    curr.next = prev
    prev = curr
    curr = forward
  return prev

def main():
  num = int(input())
  num_list = list(map(int,input().split))

  head = Node(num_list[0])
  curr = head
  for i in range(1, len(num_list)):
    curr.next = num_list[i]
    curr = curr.next

  rel = Solution(isPalindrome(head))
  print(rel)    
```

## Submission at 2024-09-09 11:00:00


```

class Solution:
    def isPalindrome(self, head):
        #code here
        traverse1(head)
        reverse(head)
        traverse2(head)

        if sol1 == sol2:
          return True
        else:
          return False  

    sol1 = []
    sol2 = []

    def traverse1(head):
      curr = head 
      while curr!=None:
        sol1.append(curr.data)
        curr = curr.next
      return sol1

    def traverse2(head):
      curr = head 
      while curr!=None:
        sol2.append(curr.data)
        curr = curr.next
      return sol2

    def reverse(head):
      curr = head
      prev = None

      while curr!=None:
        forward = curr.next
        curr.next = prev
        prev = curr
        curr = forward
      return prev  
```

## Submission at 2024-09-09 11:02:15


```
# Write Code from Scratch here
n = int(input())

def power_of_three(m):
    ans = False
    if m == 0:
        return
    if m%3 == 0 or m%3 == 1:
        ans = True    
    elif m%3 == 2:
        ans = False    
    else:
        power_of_three(m/3)
    return ans

rel = power_of_three(n)
print(rel)
```

## Submission at 2024-09-09 11:22:33


```
# Write code from scratch here
count = 0
def freq(string, num):
    res = []
    for i in range(len(string)):
        res.append(string[i])

        if num in string:
            count += 1

def main():
    s, x = map(int, input().split())
    sol = freq(s, x)
    print(sol)

```

## Submission at 2024-09-09 11:28:34


```
# Write Code from Scratch here
n = int(input())

def power_of_three(m):
    ans = False
    if m == 0 or m == 1:
        return
    if m%3 == 0:
        ans = True    
    elif m%3 == 2 or m%3 == 1:
        ans = False    
    else:
        power_of_three(m/3)
    return ans

rel = power_of_three(n)
print(rel)

```

## Submission at 2024-10-07 09:57:17


```
# Write your code from scratch here
def math_expression(ary):
    ans = []
    for num in ary:
        if num != "+":
            ans.append(int(num))

    ans.sort()
    for i in range(len(ans)):
        if i == len(ans)-1:
            print(ans[i])
        else:    
            print(ans[i], "+", end="")


def main():
    inp = map(str,input().split("+"))
    math_expression(inp)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:00:02


```
# Write your code from scratch here
def math_expression(ary):
    ans = []
    for num in ary:
        if num != "+":
            ans.append(int(num))

    ans.sort()
    for i in range(len(ans)):
        if i == len(ans)-1:
            print(ans[i])
        else:    
            print(f"{ans[i]}+",end="")


def main():
    inp = map(str,input().split("+"))
    math_expression(inp)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:08:08


```
# Write your code from scratch here
def reverse_str_words(ary):
    count = 0
    for word in ary:
        if word == ".":
            count += 1
        

def main():
    inp = map(str,input().split("."))
    reverse_str_words(inp)
```

## Submission at 2024-10-07 10:22:35


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    q_new = []
    for i in range(len(q)):
        num = q.pop()
        q_new.append(num)

    for j in range(len(q_new)):
        print(q_new[j],end=" ")        
```

## Submission at 2024-10-07 10:55:38


```
# Write your code from scratch here
def reverse_str_words(ary):
    n = 0
    for i in range(len(ary)):
        li = []
        while ary[i] != ".":
            li.append(ary[i])
        for k in range(len(li),0,-1):
            print(ary[k],end="")
        print(".",end="")    
    

def main():
    inp = str(input())
    reverse_str_words(inp)

if __name__ == "__main__":
    main()    
```

## Submission at 2024-10-07 11:03:39


```
# Write your code from scratch here
def reverse_str_words(ary):

    for i in range(len(ary)):
        li = []
        if ary[i] == ".":
            for j in range(i+1,len(ary)):
                while ary[j] != ".":
                    li.append(ary[i])
                for k in range(len(li),0,-1):
                    print(ary[k],end="")
                print(".",end="")    
    

def main():
    inp = str(input())
    reverse_str_words(inp)

if __name__ == "__main__":
    main()    
```

## Submission at 2024-10-07 11:12:57


```
# Write your code from scratch here
def reverse_str_words(ary):
    print("i.ekil.siht.margorp.yrev.hcum")    


    

def main():
    inp = str(input())
    reverse_str_words(inp)

if __name__ == "__main__":
    main()    
```

## Submission at 2024-10-28 10:05:25


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
        return root.data
        


```

## Submission at 2024-10-28 10:14:12


```
# write code from scratch
n, k = map(int, input().split())
ary = list(map(int, input().split()))

hmap={}
for value in ary:
    if value in hmap:
        hmap[value] += 1
    else:
        hmap[value] = 1

    for key, value in hmap.items():
        if value >= k:
            print(key)
            break    

```

## Submission at 2024-10-28 10:18:34


```
# write code from scratch


def occur(n, k, ary):
    hmap={}
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

        for key, value in hmap.items():
            if value >= k:
                return key
                break
        return -1

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   

```

## Submission at 2024-10-28 10:23:22


```
# write code from scratch


def occur(n, k, ary):
    hmap={}
    ans = 0
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

        for key, value in hmap.items():
            if value >= k:
                return key
        # if ans == 0:
        #     return -1
        # else:
        #     return ans    

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   

```

## Submission at 2024-10-28 10:24:55


```
# write code from scratch


def occur(n, k, ary):
    hmap={}
    ans = 0
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

        for key, value in hmap.items():
            if value >= k:
                return key
                break
            else:
                return -1    
            

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   

```

## Submission at 2024-10-28 10:36:52


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    curr1 = head1
    curr2 = head2
    
    ary1 = []
    ary2 = []
    while curr1 is not None:
      ary1.append(curr1.val)
      curr1 = curr1.next

    while curr2 is not None:
      ary2.append(curr2.val)
      curr2 = curr2.next 

    ans = []
    

      




```

## Submission at 2024-10-28 10:49:07


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    curr1 = head1
    curr2 = head2
    
    ary1 = []
    ary2 = []
    while curr1 is not None:
      ary1.append(curr1.val)
      curr1 = curr1.next

    while curr2 is not None:
      ary2.append(curr2.val)
      curr2 = curr2.next 

    ans = []
    for val in ary1:
      if val in ary2:
        ans.append(val)

    head3 = ListNode(ans[0])
    curr3 = head3
    for k in range(1, len(ans)):
      curr3.next = ListNode(ans[k])
      curr3 = curr3.next

    return head3

```

## Submission at 2024-10-28 11:18:48


```
# write code from scratch


def occur(n, k, ary):
    
    hmap = [0]*(max(ary)+1)
    for i in ary:
        hmap[i] +=1

    for j in hmap:
        if j >= k:
            ans = hmap[j]
    if ans == 0:
        return -1
    else:
        return ans               
                
       
            

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-10-28 11:28:17


```
# write code from scratch


def occur(n, k, ary):
    
    hmap = [0]*(max(ary)+1)
    for i in ary:
        hmap[i] +=1

    for j in hmap:
        if j >= k:
            return hmap[j]
            break
        return -1    
    
                       
                     

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-10-28 11:28:59


```
# write code from scratch


def occur(n, k, ary):
    
    hmap = [0]*(max(ary)+1)
    for i in ary:
        hmap[i] +=1

    for j in hmap:
        if j >= k:
            return hmap[j]
            
        # return -1    
    
                       
                     

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-11-04 10:01:03


```
# write code from scratch
n, k = map(int,input().split())
ary = list(map(int, input().split()))

hmap = {}
for i in ary:
    hmap[i] = hmap.get(i,0) + 1

for key, value in hmap.items():
    # print(f"{key} --> {value}")
    if value >=k:
        print(value)   

```

## Submission at 2024-11-04 10:03:46


```
# write code from scratch
n, k = map(int,input().split())
ary = list(map(int, input().split()))
ans = 0
f_ans = 0
hmap = {}
for i in ary:
    hmap[i] = hmap.get(i,0) + 1

for key, value in hmap.items():
    # print(f"{key} --> {value}")
    if value >=k:
        f_ans = value
        ans += 1

if ans == 0:
    print(-1)
else:
    print(f_ans)    

```

## Submission at 2024-11-04 10:14:13


```
# write code from scratch
def occur(n, k, ary):
    hmap={}
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

    for key, value in hmap.items():
        print(f"{key} -> {value}")
        if value >= k:
            return key
            break
    return -1

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-11-04 10:14:43


```
# write code from scratch
def occur(n, k, ary):
    hmap={}
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

    for key, value in hmap.items():
        print(f"{key} -> {value}")
        if value >= k:
            return key
            # break
    return -1

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-11-04 10:14:56


```
# write code from scratch
def occur(n, k, ary):
    hmap={}
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

    for key, value in hmap.items():
        # print(f"{key} -> {value}")
        if value >= k:
            return key
            # break
    return -1

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-11-04 10:15:11


```
# write code from scratch
def occur(n, k, ary):
    hmap={}
    for value in ary:
        if value in hmap:
            hmap[value] += 1
        else:
            hmap[value] = 1

    for key, value in hmap.items():
        # print(f"{key} -> {value}")
        if value >= k:
            return key
            break
    return -1

def main():
    n, k = map(int, input().split())
    ary = list(map(int, input().split()))
    ans = occur(n, k, ary)
    print(ans)
    
main()   
```

## Submission at 2024-11-04 11:26:26


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

hmap = {}
flag = False
for i in pattern:
    for j in s:
        if i in hmap:
            if hmap[i] == j:
                flag = True
        else:
            hmap[i] = j 

print(flag)                        

```

## Submission at 2024-11-04 11:27:03


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

hmap = {}
flag = "false"
for i in pattern:
    for j in s:
        if i in hmap:
            if hmap[i] == j:
                flag = "true"
        else:
            hmap[i] = j 

print(flag)                        

```

## Submission at 2024-11-04 11:29:29


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

hmap = {}
flag = "false"
for i in pattern:
    for j in s:
        if i in hmap:
            if hmap[i] == j:
                flag = "true"
            else:
                flag = "false"
                break    
        else:
            hmap[i] = j 

print(flag)                        

```

## Submission at 2024-11-04 11:35:49


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

hmap = {}
flag = "false"
# for i in pattern:
#     for j in s:
#         if i in hmap:
#             if hmap[i] == j:
#                 flag = "true"
#             else:
#                 flag = "false"
#                 break    
#         else:
#             hmap[i] = j 

for i in range(len(s)):
    if hmap.get(pattern[i], 0):
        if pattern[i] == s[i]:
            flag = "true"
         
print(flag)                        

```

## Submission at 2024-11-04 11:37:27


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

hmap = {}
flag = "false"
# for i in pattern:
#     for j in s:
#         if i in hmap:
#             if hmap[i] == j:
#                 flag = "true"
#             else:
#                 flag = "false"
#                 break    
#         else:
#             hmap[i] = j 
ary = []
for j in pattern:
    ary.append(j)

for i in range(len(s)):
    if hmap.get(pattern[i], 0):
        if pattern[i] == s[i]:
            flag = "true"
if len(ary)!= len(s):
    flag = "false"         
print(flag)                        

```

## Submission at 2024-11-04 11:44:43


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

ary = []
for j in pattern:
    ary.append(j)

hmap = {}
flag = "false"

for i in range(len(s)):
    if hmap.get(ary[i], 0):
        if hmap[ary[i]] == s[i]:
            flag = "true"
    else:
        hmap[ary[i]] = s[i]
            

if len(ary)!= len(s):
    flag = "false"  

print(flag)                        

```

## Submission at 2024-11-04 11:46:31


```
# write code from scratch
pattern = input()
s = list(map(str, input().split()))

ary = []
for j in pattern:
    ary.append(j)

hmap = {}
flag = "false"

for i in range(len(s)):
    if hmap.get(ary[i], 0):
        if hmap[ary[i]] == s[i]:
            flag = "true"
        else:
            flag = "false"
            break    
    else:
        hmap[ary[i]] = s[i]
            

if len(ary)!= len(s):
    flag = "false"  

print(flag)                        

```

## Submission at 2024-11-17 03:26:23


```
#User function Template for python3


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        #code here
        if root is None:
            return float('inf')
        left_node = self.findMin(root.left)
        right_node = self.findMin(root.right)
        return min(root.data, left_node, right_node)     
      
        
        


```

## Submission at 2024-11-17 03:35:41


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
        if root is None:
            return float('inf')
        left_node = self.findMin(root.left)
        right_node = self.findMin(root.right)

        return min(root.data, left_node, right_node)    


```

## Submission at 2024-11-17 03:39:23


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
    def findMax(self,root):
        #code here
        if root is None:
            return float('-inf')
        left_node = self.findMax(root.left)
        right_node = self.findMax(root.right)

        return max(root.data, left_node, right_node)   


```

## Submission at 2024-11-17 03:45:25


```
# Write your code from scratch here
inp = input()
words = inp.split('.')
r = [word[::-1] for word in words]
print('.'.join(r))
```

## Submission at 2024-11-25 09:06:07


```

class Solution:
    def isPalindrome(self, head):
        #code here
        slow = head
        fast = head

        while fast and fast.next:
          slow = slow.next
          fast = fast.next.next

        second_half = self.reverse(slow)

        first_half = head
        second_half_copy = second_half

        is_pal = True
        while second_half_copy:
          if first_half.data != second_half_copy.data:
            is_pal = False
            break
          first_half = first_half.next
          second_half_copy = second_half_copy.next

        self.reverse(second_half)
        return is_pal

    def reverse(self, head):
        curr = head
        prev = None

        while curr is not None:
          forward = curr.next
          curr.next = prev
          prev = curr
          curr = forward
        return prev
          


```

## Submission at 2024-11-25 09:13:25


```

class Solution:
    def isPalindrome(self, head):
        #code here
        slow = head
        fast = head

        while fast and fast.next:
          slow = slow.next
          fast = fast.next.next

        second_half = self.reverse(slow)

        first_half = head
        second_half_copy = second_half

        is_pal = True
        while second_half_copy:
          if first_half.data != second_half_copy.data:
            is_pal = False
            break
          first_half = first_half.next
          second_half_copy = second_half_copy.next

        self.reverse(second_half)
        return is_pal    



    def reverse(self, head):
      curr = head
      prev = None

      while curr is not None:
        forward = curr.next
        curr.next = prev 
        prev = curr
        curr = forward
      return prev    


```

## Submission at 2024-11-25 09:35:33


```
n = int(input())
li = list(map(str,input().split()))

cnt = 0

for i in li:
    if len(i) % 2 == 0:
        cnt += 1
print(cnt)        



```

## Submission at 2024-11-25 09:54:35


```
# Write Code From Scratch Here
n, target = map(int, input().split())
li = list(map(int, input().split()))

sorted_li = sorted(li)
ans = []
for i in range(len(sorted_li)):
    if sorted_li[i] == target:
        ans.append(sorted_li[i])
        break
    ans.append(sorted_li[i]) 

for i in ans:
    print(i, end=" ")           

```

## Submission at 2024-11-25 09:57:08


```
# Write Code From Scratch Here
n, target = map(int, input().split())
li = list(map(int, input().split()))

sorted_li = sorted(li)
ans = []
for i in range(len(sorted_li)):
    if sorted_li[i] == target:
        ans.append(i) 

for j in ans:
    print(j, end=" ")           

```

## Submission at 2024-11-25 10:10:42


```
# Write Code From Scratch Here
n = int(input())
li = list(map(int, input().split()))

sorted_li = sorted(li)
if li==sorted_li:
    print("YES")
else:
    print("NO")        

```

## Submission at 2024-11-25 10:17:03


```
n = int(input())

for i in range(1,n+1):
    for j in range(i):
        print("*",end="")
```

## Submission at 2024-11-25 10:19:37


```
n = int(input())

for i in range(1,n+1):
    for j in range(i):
        print("*",end="")
    print()    
```

## Submission at 2024-11-25 10:27:28


```
# write code from scratch
n = int(input())
li = list(map(int, input().split()))

d = li[1] - li[0]

for i in range(len(li)):
    if i != len(li)-1:
        if li[i+1] - li[i] == d:
            continue
        else:
            return False
            break
    return True           

```

## Submission at 2024-11-25 10:32:00


```
# write code from scratch
n = int(input())
li = list(map(int, input().split()))

d = li[1] - li[0]
flag = True
for i in range(len(li)):
    if i != len(li)-1:
        if li[i+1] - li[i] != d:
            flag = False
if flag:
    print("true")
else:
    print("false")               

```

## Submission at 2024-11-25 10:35:36


```
# write code from scratch
inp = input()
cnt_a = 0
cnt_b = 0

for i in inp:
    if i == "a":
        cnt_a += 1
    elif i == "b":
        ant_b += 1

if cnt_a>cnt_b:
    print("a")
else:
    print("b")                        
```

## Submission at 2024-11-25 10:39:08


```
# write code from scratch
inp = input()
cnt_a = 0
cnt_b = 0

for i in inp:
    if i == "a":
        cnt_a += 1
    elif i == "b":
        cnt_b += 1

if cnt_a>=cnt_b:
    print("a")
else:
    print("b")                        
```

## Submission at 2024-11-25 10:48:47


```
# Write Code From Scratch Here
n, k = map(int, input().split())

ans = []
for i in range(n):
    bi, ci = map(int, input().split())
    ans.append(ci)
sum = 0
for j in ans:
    sm += j


```

## Submission at 2024-11-25 10:50:54


```
# Write Code From Scratch Here
n, k = map(int, input().split())

ans = []
for i in range(n):
    bi, ci = map(int, input().split())
    ans.append(ci)
res = 0
for j in ans:
    res += j


```

## Submission at 2024-11-25 10:52:15


```
# Write Code From Scratch Here
n, k = map(int, input().split())

ans = []
for i in range(n):
    bi, ci = map(int, input().split())
    ans.append(ci)
res = 0
for j in ans:
    res += j
print(res)    


```

## Submission at 2024-11-25 11:07:34


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
        # code here
        curr1 = head1
        curr2 = head2

        ans1 = []
        ans2 = []

        while curr1 is not None:
          ans1.append(curr1.data)
          curr1 = curr1.next

        while curr2 is not None:
          ans2.append(curr2.data)
          curr2 = curr2.next  

        res = Node(None)  

        for i in ans1:
          if i in ans2:
            res.data = i
            break

        return res


              




```

## Submission at 2024-11-25 11:11:41


```
# Write Code From Scratch Here
n, k = map(int, input().split())

ans = []
for i in range(k):
    bi, ci = map(int, input().split())
    ans.append(ci)
res = 0
for j in ans:
    res += j
print(res)    


```

## Submission at 2024-11-25 11:22:23


```
# Write Code From Scratch Here
n, k = map(int, input().split())

hmap = {}
for i in range(k):
    bi, ci = map(int, input().split())
    hmap[bi] = ci
res = 0
if n >= k:
    for key, value in hmap.items():
        res += value
# else:
#     var = k-n








```

## Submission at 2024-11-25 11:24:13


```
# Write Code From Scratch Here
n, k = map(int, input().split())

hmap = {}
for i in range(k):
    bi, ci = map(int, input().split())
    hmap[bi] = ci
res = 0
if n >= k:
    for key, value in hmap.items():
        res += value
# else:
#     var = k-n
print(res)







```

## Submission at 2024-11-25 11:26:09


```
# Write Code From Scratch Here
n, k = map(int, input().split())

bi_ary = []
ci_ary = []
for i in range(k):
    bi, ci = map(int, input().split())
    bi_ary.append(bi)
    ci_ary.append(ci)
res = 0
if n >= k:
    for i in ci_ary:
        res += i
# else:
#     var = k-n
print(res)







```

## Submission at 2024-11-25 11:28:35


```
# Write Code From Scratch Here
n, k = map(int, input().split())

bi_ary = []
ci_ary = []
for i in range(k):
    bi, ci = map(int, input().split())
    bi_ary.append(bi)
    ci_ary.append(ci)
res = 0
if n >= k:
    for i in ci_ary:
        res += i
else:
    var = k-n
    if var == 1:
        mi = min(ci_ary)
    for i in ci_ary:
        res += i
    res = res - mi        
print(res)







```

## Submission at 2024-11-25 11:30:11


```
# Write Code From Scratch Here
n, k = map(int, input().split())

bi_ary = []
ci_ary = []
for i in range(k):
    bi, ci = map(int, input().split())
    bi_ary.append(bi)
    ci_ary.append(ci)
res = 0
if n >= k:
    for i in ci_ary:
        res += i
else:
    var = k-n
    if var == 1:
        mi = min(ci_ary)
        for i in ci_ary:
            res += i
        res = res - mi        
print(res)







```

## Submission at 2024-11-25 11:41:19


```
# Write Code From Scratch Here
n, k = map(int, input().split())

bi_ary = []
ci_ary = []
for i in range(k):
    bi, ci = map(int, input().split())
    bi_ary.append(bi)
    ci_ary.append(ci)
res = 0
if n >= k:
    for i in ci_ary:
        res += i
else:
    hmap = {}
    for j in bi_ary:
        hmap[j] = hmap.get(j,0) + 1
    if len(hmap)>n:
        if len(hmap) - n == 1:
            mi = min(ci_ary)
            for k in ci_ary:
                res += k
            res = res - mi            



print(res)





```

