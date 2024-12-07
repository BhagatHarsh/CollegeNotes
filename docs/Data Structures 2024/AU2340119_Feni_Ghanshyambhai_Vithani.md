## Submission at 2024-08-05 10:24:05


```
# Write your Python code here from the scratch
print("Hello " + input() +"!")
```

## Submission at 2024-08-05 10:28:11


```
# Write your Python code here from the scratch
print("Hello "+ input()+"!")
```

## Submission at 2024-08-05 10:43:28


```
# Write your Python code here
n = int(input())
for i in range(0,n):
    name = input()
    print("Hello "+name + "!")
```

## Submission at 2024-08-12 10:04:57


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0:
        return 0
    if x==1:
        return 1
    if x>=2:
        return fibonacci(x-1) + fibonacci(x-2)

   

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:21:21


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==0:
        return False
    if n==1:
        return True
    if n%2 !=0:
        return False
    else:
        return (is_power_of_two(n/2))
    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:23:23


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==0:
        return False
    if n==1:
        return True
    if n%2 !=0:
        return False
    else:
        return (is_power_of_two(n/2))
    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:30:45


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=0:
        return False
    if n==1:
        return True
    if n>=2 and n%2 !=0:
        return False
    else:
        return (is_power_of_two(n/2))
    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:32:23


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=0:
        return "false"
    if n==1:
        return "true"
    if n%2 !=0:
        return "false"
    else:
        return (is_power_of_two(n/2))
    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 11:13:38


```
def subsets(nums):
    # Start with an empty subset
    result = [[]]

    # Iterate through each number in the input list
    for num in nums:
        # For each existing subset, add the current number to it to form a new subset
        new_subsets = [curr + [num] for curr in result]
        result.extend(new_subsets)

    return result

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

## Submission at 2024-08-21 07:35:07


```
def combine(n, k):
    if k == 0:
        return [[]]
    if n == 0:
        return []
    wout_n = combine(n-1,k)
    w_n = combine(n-1,k-1)
    w_n = [combo + [n] for combo in w_n]
    return w_n + wout_n
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

## Submission at 2024-08-21 11:42:25


```
def permutation(n):
    if len(n)==0:
        return []
    if len(n)==1:
        return [n]
    result = []
    for i in range(len(n)):
        current = n[i]
        remain = n[:i] + n[i+1:]
        for r in permutation(remain):
            result.append([current] + r)
    return sorted(result)

def main():
    n = list(map(int, input().split()))
    permuatations = permutation(n)
    print(permuatations)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 11:44:40


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

## Submission at 2024-08-21 11:54:41


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

## Submission at 2024-08-21 11:55:34


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

## Submission at 2024-09-08 08:58:14


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current = head
    while current :
        result.append(current.val)
        current = current.next
    return result

```

## Submission at 2024-09-08 11:20:06


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    if k <= 0:
        raise valueError("Invalid")
    current = head
    prev = None

    if k == 1:
        head = current.next
        return head
    
    count = 1
    while current is not None and count<k:
        prev = current
        current = current.next
        count += 1
    if current is None:
        raise ValueError ("Position number is greater")
    
    prev.next = current.next 

    return head

    


```

## Submission at 2024-09-08 12:13:36


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    if k <= 0:
        raise ValueError("Invalid position: k must be greater than 0.")

    count = 1
    current = head
    
    # Traverse the list to find the k-th node
    while current is not None and count < k:
        current = current.next
        count += 1

    # Check if we reached the k-th node
    if current is None:
        raise ValueError("Position is greater than the length of the list.")

    return current.val  # Return the k-th node

    

```

## Submission at 2024-09-08 12:14:21


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    if k <= 0:
        raise ValueError("Invalid position: k must be greater than 0.")

    count = 1
    current = head
    
    # Traverse the list to find the k-th node
    while current is not None and count < k:
        current = current.next
        count += 1

    # Check if we reached the k-th node
    if current is None:
        return -1

    return current.val  # Return the k-th node

    

```

## Submission at 2024-09-08 13:32:11


```
class node:
    def __init__(self):
        self.data = new_data
        self.next = None

def reverseLinkedList(head):
    current = head
    prev = None
    while current != None :
        forward = current.next
        current.next = prev
        prev = current
        current = forward
    return prev







```

## Submission at 2024-09-08 13:45:31


```
# Write code from scratch
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = [max(a[i],b[i]) for i in range(n)]

print (" ".join(map(str,c)))
```

## Submission at 2024-09-08 13:50:55


```

def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    result = []

    for diag in range(m + n - 1):
        if diag < m:
            row_start = diag
            col_start = 0
        else:
            row_start = m - 1
            col_start = diag - (m - 1)

        diagonal = []
        while row_start >= 0 and col_start < n:
            diagonal.append(matrix[row_start][col_start])
            row_start -= 1
            col_start += 1

        
        if diag % 2 == 0:
            result.extend(diagonal[::-1])
        else:
            result.extend(diagonal)

    return result


    
    
    

```

## Submission at 2024-09-08 13:53:52


```
def diagonal_traversal(matrix):
    
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])  
    result = []

    
    for diag in range(m + n - 1):
       
        if diag < m:
            row_start = diag  
            col_start = 0     
        else:
            row_start = m - 1 
            col_start = diag - (m - 1)
        
        diagonal = []
        row, col = row_start, col_start
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1          
            col += 1          

        
        if diag % 2 == 0:
            result.extend(diagonal[::-1])  
        else:
            result.extend(diagonal)        

    return result


```

## Submission at 2024-09-08 13:55:28


```
def diagonal_traversal(matrix):
    # Check for empty matrix
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])  # Number of rows (m) and columns (n)
    result = []

    # Loop through each diagonal (there are m + n - 1 diagonals)
    for diag in range(m + n - 1):
        diagonal = []
        
        # Determine starting row and column for the diagonal
        # If diag is less than the number of rows, start from (diag, 0)
        # Otherwise, start from the bottom-most row (m-1) and the correct column
        row_start = diag if diag < m else m - 1
        col_start = 0 if diag < m else diag - (m - 1)
        
        # Traverse the current diagonal
        row, col = row_start, col_start
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1  # Move up in the row
            col += 1  # Move right in the column

        # If the diagonal index is even, reverse the order before adding to result
        if diag % 2 == 0:
            result.extend(diagonal[::-1])
        else:
            result.extend(diagonal)

    return result


```

## Submission at 2024-09-08 13:56:58


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    result = []

    # Traverse diagonals
    for diag in range(m + n - 1):
        diagonal = []
        # Determine the starting point of the diagonal
        if diag < m:
            row_start = diag
            col_start = 0
        else:
            row_start = m - 1
            col_start = diag - (m - 1)

        # Collect elements along the diagonal
        row, col = row_start, col_start
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        # Reverse the diagonal if index is even
        if diag % 2 == 0:
            result.extend(diagonal[::-1])
        else:
            result.extend(diagonal)

    return result


```

## Submission at 2024-09-08 13:59:07


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    result = []

    
    for diag in range(m + n - 1):
        diagonal = []

        
        if diag < m:
            row = diag
            col = 0
        else:
            row = m - 1
            col = diag - (m - 1)

     
        while row >= 0 and col < n:
            diagonal.append(matrix[row][col])
            row -= 1
            col += 1

        print(f"Diagonal {diag + 1}: {diagonal} {'(reversed)' if diag % 2 == 0 else ''}")

        
        if diag % 2 == 0:
            result.extend(reversed(diagonal))
        else:
            result.extend(diagonal)

  
    print(f"Final output: {result}")
    return result


```

## Submission at 2024-09-08 14:02:00


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

## Submission at 2024-09-09 04:21:03


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    if k <= 0:
        raise ValueError("k must be greater than 0.")

    count = 1
    current = head
    
   
    while current is not None and count < k:
        current = current.next
        count += 1


    if current is None:
        return -1

    return current.val  

    
    

```

## Submission at 2024-09-09 09:54:18


```
def powerOfThree(n):
    if n<=0:
        return False
    if n==1:
        return True
    if n%3 != 0:
        powerOfThree(n/3)
        return Frue
    return True

```

## Submission at 2024-09-09 09:56:03


```
def powerOfThree(n):
    if n<=0:
        print("False")
    if n==1:
        print("True")
    if n%3 != 0:
        powerOfThree(n/3)
        print("False")
    print("True")

```

## Submission at 2024-09-09 10:41:40


```
class node:
    def __init__(self):
        self.data = new_data
        self.next = None

def removeDuplicates(head):
    current = head
    prev = None
    current.next = prev
    while current is not None:
        
        if prev == current:
            prev = current
            current = current.next
        current = current.next
        
    return head    
   



```

## Submission at 2024-09-09 10:48:28


```
class node:
    def __init__(self):
        self.data = new_data
        self.next = None

def removeDuplicates(head):
    current = head
    prev = None
    current.next = prev
    while current is not None:
        if prev == current:
            prev = current
            current = current.next
            
        current = current.next
    
        
    return head    
   



```

## Submission at 2024-09-09 10:51:10


```
def PowerOfThree(n):
    if n==0:
        return False

```

## Submission at 2024-09-09 10:51:36


```
def PowerOfThree(n):
    if n==0:
        return False
    if n==1:
        return True

```

## Submission at 2024-09-09 10:52:31


```
def PowerOfThree(n):
    if n==0:
        return False
    if n==1:
        return True

```

## Submission at 2024-09-09 11:03:10


```
n = int(input())
if n==0:
    print("False")
if n==1:
    print ("True")
if n%3 ==0 :
    if n//3==1:
        print ("True")
print ("False")
        
        


```

## Submission at 2024-09-09 11:04:18


```
n = int(input())
if n==0:
    print("False")
if n==1:
    print ("True")
if n%3 ==0 :
    print ("True")
        
        


```

## Submission at 2024-09-09 11:09:38


```
n = int(input())
if n==0:
    print("False")
if n==1:
    print ("True")
if n%3 !=0 :
    if (n//3==1):
        print("False")
print("True")
        
        


```

## Submission at 2024-09-09 11:10:38


```
n = int(input())
if n==0:
    print("False")
if n==1:
    print ("True")
if n%3 ==0 :
    if (n//3==1):
        print("True")
print("False")
        
        


```

## Submission at 2024-09-16 04:22:53


```
# Write the code from scratch, no boilerplate is 
def arrays(arr1,arr2):
    N = arr1
    M = arr2
    if (N!=M):
        return false
    arr1.sort()
    srr2.sort()
    for i in rane(len(N)):
        if (arr1[i]!=arr2[i]):
            return true
        return false
```

## Submission at 2024-10-07 09:56:43


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code 
    q = deque()
    if n<= 1:
        return q
    


```

## Submission at 2024-10-07 09:59:02


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code 
    
    if n<= 1:
        return q
    


```

## Submission at 2024-10-07 09:59:02


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code 
    
    if n<= 1:
        return q
    


```

## Submission at 2024-10-07 10:07:34


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code 
    if n<= 1:
        return q
    while n>1:
        i =0
        q[n-1] = q[i]
        i=+ 1
        return q
    


```

## Submission at 2024-10-07 10:09:48


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code 
    if n<= 1:
        return q
    while n>1:
        i =0
        q[n-1] = q[i]
        i=+ 1
        return q
    


```

## Submission at 2024-10-07 10:26:58


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    while n:
        i = n-1
        j = n-3
        if s[i] < s[j]:
            s[j] = s[i]
            i =- 2
            j =- 2
    return s
```

## Submission at 2024-10-07 10:31:52


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    while n>=0:
        i = n-1
        j = n-3
        if s[i] < s[j]:
            s[j], s[i] = s[i], s[j]
            i =- 2
            j =- 2
        
    return s
```

## Submission at 2024-10-07 10:35:52


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    if n==1:
        return s
    while n>=0:
        i = n-1
        j = n-3
        if s[i] < s[j]:
            
            i =- 2
            j =- 2
        
        return s
```

## Submission at 2024-10-07 10:39:29


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    if n==1:
        return s
    if n==3:
        if s[2]<s[0]:
            s[2], s[0] = s[0], s[2]
            return s
        else:
            return s


```

## Submission at 2024-10-07 10:40:51


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    if n==1:
        return s
    if n==3:
        if s[2]<s[0]:
            s[2] = s[0]
            s[0] = s[2]
            return s
        else:
            return s


```

## Submission at 2024-10-07 10:40:51


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    if n==1:
        return s
    if n==3:
        if s[2]<s[0]:
            s[2] = s[0]
            s[0] = s[2]
            return s
        else:
            return s


```

## Submission at 2024-10-07 10:44:19


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    if n==1:
        return s
    if n==3:
        if s.int[2]<s.int[0]:
            s[2] = s[0]
            s[0] = s[2]
            return s
        else:
            return s


```

## Submission at 2024-10-07 10:48:00


```
# Write your code from scratch here
def reverse(s):
    n = len(s)
    if n==1:
        return s
    if n==3:
        s[0] = max(s[2],s[0])
        return s
```

## Submission at 2024-10-07 10:50:22


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    if n==1:
        return s
```

## Submission at 2024-10-07 10:51:30


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    reversed(s,'.')
    return s
```

## Submission at 2024-10-07 10:51:31


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    reversed(s,'.')
    return s
```

## Submission at 2024-10-07 10:51:31


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    reversed(s,'.')
    return s
```

## Submission at 2024-10-07 10:54:50


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:0])
        i =+ 1
    return s
```

## Submission at 2024-10-07 10:55:14


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:0])
        i =+ 1
        return s
```

## Submission at 2024-10-07 10:55:15


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:0])
        i =+ 1
        return s
```

## Submission at 2024-10-07 10:56:29


```
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:])
        i =+ 1
        return s
```

## Submission at 2024-10-07 11:03:44


```
# Write your code from scratch here
def string(s):
    n = len(s)
    i = 0
    if s[i] == '+':
        if s[i-1]>s[i+1]:
            s[i-1] = s[i+1]
            i =+1
            return s
        else:
            return s
    return s
```

## Submission at 2024-10-07 11:05:42


```
# Write your code from scratch 
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s,'.')
        i =+ 1
        return s
```

## Submission at 2024-10-07 11:05:43


```
# Write your code from scratch 
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s,'.')
        i =+ 1
        return s
```

## Submission at 2024-10-07 11:06:29


```
# Write your code from scratch 
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:'.'])
        i =+ 1
        return s
```

## Submission at 2024-10-07 11:06:30


```
# Write your code from scratch 
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:'.'])
        i =+ 1
        return s
```

## Submission at 2024-10-17 12:18:33


```
# Write your code from scratch hereode
# Write your code from scratch here
def string(s):
    n = len(s)
    i = 0
    if s[i] == '+':
        if s[i-1]>s[i+1]:
            s[i-1] = s[i+1]
            i =+1
            return s
        else:
            return s
    return s

inp = str(input())
ans = string(inp)
print(ans)
```

## Submission at 2024-10-17 12:22:03


```
# Write your code from scratch here
# Write your code from scratch 
# Write your code from scratch here
def reverse(s):
    n =len(s)
    for i in range(n):
        i = 0
        if i=='.':
            reversed(s[i-1:'.'])
        i =+ 1
        return s
ans = print(reverse)
```

## Submission at 2024-10-28 05:10:03


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    current = head
    while current and current.next:
        # If current node has the same value as the next node, skip the next node
        if current.data == current.next.data:
            current.next = current.next.next
        else:
            # Move to the next node if no duplicate
            current = current.next
    return head


```

## Submission at 2024-10-28 05:10:48


```

class Solution:
    def isPalindrome(self, head):
        return True


```

## Submission at 2024-10-28 09:59:42


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
        if not root:
            return 
        


```

## Submission at 2024-10-28 09:59:43


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
        if not root:
            return 
        


```

## Submission at 2024-10-28 10:36:10


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
        def check(node):
            if not node:
                return 
            left = check(node.left)
            right = check(node.right)

            return min(left,right)
        return check(root)


```

## Submission at 2024-10-28 10:45:21


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
        min_num = float ('-inf')
        def dfs(node):
            if not node:
                return 1
            left = dfs(node.left)
            right = dfs(node.right)
            return min(left,right)
        
        return dfs(root)

```

## Submission at 2024-10-28 11:03:57


```
# write code from scratch
n,k = map(int,input().split())
arr = map(int,input().split())
k = 0
for i in range(n):
    if arr[i] == arr[i+1]:
        k = k+1
        if k==2:
            break
        i = i+1
print (arr[i])
```

## Submission at 2024-10-28 11:06:30


```
# write code from scratch
n,k = map(int,input().split())
arr = map(int,input().split())
k = 0
for i in range(n):
    if k==0:
        print("-1")
    if arr[i] == arr[i+1]:
        k = k+1
        if k==2:
            break
        i = i+1
print (arr[i])
```

## Submission at 2024-10-28 11:10:10


```
# write code from scratch
k =0
if k == 0:
    print("-1")
```

## Submission at 2024-10-28 11:21:46


```


#User function Template for python3

import math
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        #code here
        min_num = 0
        if not root:
            return min_num
        left = findMin(root.left)
        right = findMin(root.right)
        return min(min(left,right),root.data)

        


```

## Submission at 2024-10-28 11:21:46


```


#User function Template for python3

import math
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        #code here
        min_num = 0
        if not root:
            return min_num
        left = findMin(root.left)
        right = findMin(root.right)
        return min(min(left,right),root.data)

        


```

## Submission at 2024-10-28 11:21:46


```


#User function Template for python3

import math
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        #code here
        min_num = 0
        if not root:
            return min_num
        left = findMin(root.left)
        right = findMin(root.right)
        return min(min(left,right),root.data)

        


```

## Submission at 2024-10-28 11:25:07


```


#User function Template for python3

import math
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None


class Solution:
    def findMin(self,root):
        #code here
        min_num = float ('-inf')
            if not root:
                return 0
            left = findMin(root.left)
            right = findMin(root.right)
        findMin(root)

        return min(left,right)

        


```

## Submission at 2024-11-04 09:53:52


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0:
        return 0
    if x==1:
        return 1
    if x=>2:
        return fibonacci(n-2)+fibonacci(n-1)

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-11-04 09:55:28


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0:
        return 0
    if x==1:
        return 1
    if x>=2:
        return fibonacci(x-2)+fibonacci(x-1)

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-11-04 10:03:17


```
def is_power_of_two(n:int) -> int:
    if n==1:
        return True 
    if n%2!=0:
        return False
    else:
        return is_power_of_two(n/2)
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-04 10:05:12


```
def is_power_of_two(n:int) -> int:
    if n<=0:
        return False
    if n==1:
        return True 
    if n%2!=0:
        return False
    else:
        return is_power_of_two(n/2)
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-04 10:06:44


```
def is_power_of_two(n:int) -> int:
    if n<=0:
        return False
    if n==1:
        return True 
    if n%2!=0:
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

## Submission at 2024-11-04 10:07:14


```
def is_power_of_two(n:int) -> int:
    if n<=0:
        return False
    if n==1:
        return True 
    if n%2!=0:
        return False
    
    return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-04 10:09:04


```
def is_power_of_two(n:int) -> int:
    if n<=0:
        return "false"
    if n==1:
        return "true"
    if n%2!=0:
        return "false"
    
    return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-04 10:40:13


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
for i in arr1:
    for j in arr2:
        if i==j:
            a=a+1
if a==len(arr1):
    print("true")
else:
    print("false")
    
```

## Submission at 2024-11-04 10:40:37


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
for i in arr1:
    for j in arr2:
        if i==j:
            a=a+1
if a>=len(arr1):
    print("true")
else:
    print("false")
    
```

## Submission at 2024-11-04 10:44:37


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
arr1.sort()
arr2.sort()
for i in arr1:
    for j in arr2:
        if i==j:
            a=a+1
if a==len(arr1):
    print("true")
else:
    print("false")

    
```

## Submission at 2024-11-04 10:48:52


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
arr1.sort()
arr2.sort()
for i in range(len(arr1)):
    if arr1[i]==arr2[i]:
        a=a+1
if a==len(arr1):
    print("true")
else:
    print("false")

    
```

## Submission at 2024-11-04 10:50:07


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
arr1.sort()
arr2.sort()
for i in range(len(arr1)):
    if arr1[i]==arr2[i]:
        a=a+1
if a==len(arr1-1):
    print("true")
else:
    print("false")

    
```

## Submission at 2024-11-04 10:50:23


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
arr1.sort()
arr2.sort()
for i in range(len(arr1)):
    if arr1[i]==arr2[i]:
        a=a+1
if a==len(arr1)-1:
    print("true")
else:
    print("false")

    
```

## Submission at 2024-11-04 10:57:48


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
arr1.sort()
arr2.sort()
flag = True
for i in range(len(arr1)):
    # if arr1[i]==arr2[i]:
    #     a=a+1
    if(arr1[i] != arr2[i]):
        print("false")
        flag = False
        break
     
if flag:
    print("true")

# if a==len(arr1):
#     print("true")
# else:
#     print("false")

    
```

## Submission at 2024-11-04 10:59:07


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
# a =0
arr1.sort()
arr2.sort()
flag = True
for i,j in arr1,arr2:
    # if arr1[i]==arr2[i]:
    #     a=a+1
    if(i != j):
        print("false")
        flag = False
        break
     
if flag:
    print("true")

# if a==len(arr1):
#     print("true")
# else:
#     print("false")

    
```

## Submission at 2024-11-04 11:01:04


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
# a =0
if(len(arr1)!=len(arr2)):
    print("false")
    
arr1.sort()
arr2.sort()
flag = True
for i,j in arr1,arr2:
    # if arr1[i]==arr2[i]:
    #     a=a+1
    if(i != j):
        print("false")
        flag = False
        break
     
if flag:
    print("true")

# if a==len(arr1):
#     print("true")
# else:
#     print("false")

    
```

## Submission at 2024-11-04 11:05:49


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
if(len(arr1)!=len(arr2)):
    print("false")
else:
    arr1.sort()
    arr2.sort()
    for i in range(len(arr1)):
        if arr1[i]==arr2[i]:
            a=a+1
    if a==len(arr1):
        print("true")
    else:
        print("false")




```

## Submission at 2024-11-04 11:05:49


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
if(len(arr1)!=len(arr2)):
    print("false")
else:
    arr1.sort()
    arr2.sort()
    for i in range(len(arr1)):
        if arr1[i]==arr2[i]:
            a=a+1
    if a==len(arr1):
        print("true")
    else:
        print("false")




```

## Submission at 2024-11-04 11:06:51


```
# Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
a =0
# if(len(arr1)!=len(arr2)):
#     print("false")
# else:
if(True):
    arr1.sort()
    arr2.sort()
    for i in range(len(arr1)):
        if arr1[i]==arr2[i]:
            a=a+1
    if a==len(arr1):
        print("true")
    else:
        print("false")




```

## Submission at 2024-11-04 11:14:14


```
# Write the code from scratch, no boilerplate is required Write the code from scratch, no boilerplate is
len_a1, len_a2 = input().split(" ")
arr1 = list(map(int,input().split()))
arr2 = list(map(int, input().split()))
arr1.sort()
arr2.sort()
if arr1==arr2:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-05 11:29:18


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    if k <= 0:
        raise valueError("Invalid")
    current = head
    prev = None

    if k == 1:
        head = current.next
        return head
    
    count = 1
    while current is not None and count<k:
        prev = current
        current = current.next
        count += 1
    if current is None:
        raise ValueError ("Position number is greater")
    
    prev.next = current.next 

    return head
```

## Submission at 2024-11-05 11:29:35


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    if k <= 0:
        raise valueError("Invalid")
    current = head
    prev = None

    if k == 1:
        head = current.next
        return head
    
    count = 1
    while current is not None and count<k:
        prev = current
        current = current.next
        count += 1
    if current is None:
        raise ValueError ("Position number is greater")
    
    prev.next = current.next 

return head
```

## Submission at 2024-11-25 10:18:40


```
input_string = str(input())
length = len(input_string)
count1 = 0
count2 = 0
for i in range(length-1):
    if [i]=='a':
        count1 += 1
    if [i]=='b':
        count2 += 1
    i += 1
if count1>count2:
    print("a")
else: 
    print("b")

```

## Submission at 2024-11-25 10:20:52


```
input_string = str(input())
length = len(input_string)
count1 = 0
count2 = 0
for i in range(length-1):
    if [i]=='a':
        count1 += 1
    if [i]=='b':
        count2 += 1
    i += 1
if count1>count2:
    print("b")
else: 
    print("a")

```

## Submission at 2024-11-25 10:46:24


```
n=int(input())
for i in range(0,n):
    for j in range (0,i+1):
        print("*")
    print()
        
```

## Submission at 2024-11-25 10:51:40


```
n=int(input())
for i in range(0,n):
    for j in range (0,i+1):
        print("*",end="")
    print()
        
```

## Submission at 2024-11-25 11:02:02


```
n = input()
arr = list(int, input().split())
for i in range(n):
    if [i+1]-[i]==[i+3]-[i+2]:
        print("true") 
    i +=1
    print("false")

```

## Submission at 2024-11-25 11:04:06


```
n = input()
arr = list(int, input().split())

print("true") 

```

## Submission at 2024-11-25 11:06:57


```
n = input()
arr = list(int, input().split(" "))
for i in range(n):
    a = [i+1] - [i]
    b = [i+3] - [i+2]
    if a==b:
        print("true")
    else: 
        print("false")

```

## Submission at 2024-11-25 11:07:49


```
n = input()
arr = int(input())
for i in range(n):
    a = [i+1] - [i]
    b = [i+3] - [i+2]
    if a==b:
        print("true")
    else: 
        print("false")

```

## Submission at 2024-11-25 11:08:56


```
n = input()
arr = map(list(int,input().split()))
for i in range(n):
    a = [i+1] - [i]
    b = [i+3] - [i+2]
    if a==b:
        print("true")
    else: 
        print("false")

```

## Submission at 2024-11-25 11:16:09


```
# Write Code From Scratch Here
n, target = list(int, input.split())
nums = list(int, input.split())
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i], end="")
    i +=1

```

## Submission at 2024-11-25 11:17:43


```
# Write Code From Scratch Here
n, target = list(int, input.split())
nums = int(input())
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i], end="")
    i +=1

```

## Submission at 2024-11-25 11:25:13


```
# Write Code From Scratch Here
n, target = int,input().split(" ")
nums = list(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i], end="")
    i +=1

```

## Submission at 2024-11-25 11:36:39


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n, target = map(int,input().split(" "))
nums = map(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i], end="")
    i +=1

```

## Submission at 2024-11-25 11:38:41


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n, target = map(int,input().split(" "))
nums = map(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target+1):
    print(sort_array[i], end="")
    i +=1

```

## Submission at 2024-11-25 11:39:35


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n, target = map(int,input().split(" "))
nums = map(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i], end=" ")
    i +=1

```

## Submission at 2024-11-25 11:40:26


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n, target = map(int,input().split(" "))
nums = map(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target+1):
    print(sort_array[i], end=" ")
    i +=1

```

## Submission at 2024-11-25 11:41:19


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n, target = map(int,input().split(" "))
nums = map(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i])
    i +=1

```

## Submission at 2024-11-25 11:43:39


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n, target = map(int,input().split(" "))
nums = map(int,input().split(" "))
sort_array = sorted(nums)
for i in range(target):
    print(sort_array[i], end = " ")
    i +=1

```

