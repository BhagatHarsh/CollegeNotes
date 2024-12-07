## Submission at 2024-08-05 10:26:30


```
import java.util.Scanner;
import java.io.*;
class Main
{   public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        System.out.println();
        String n=s1.nextLine();
        if(n.length()>=1 && n.length()<=100)
        System.out.println("Hello"+" "+n+"!");
    }
}    
```

## Submission at 2024-08-05 10:27:24


```
import java.util.Scanner;
import java.io.*;
class Main
{   public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        System.out.println();
        String n=s1.nextLine();
        if(n.length()>=1 && n.length()<=100)
        System.out.println("Hello"+" "+n+"!");
    }
}    
```

## Submission at 2024-08-05 10:35:30


```
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println();
        String name=s.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello"+" "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:36:23


```
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println();
        String name=s.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello"+" "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:39:23


```
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println();
        String name=s.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello"+" "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:40:27


```
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        System.out.println();
        String name=s1.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello"+" "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:41:15


```
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        System.out.println();
        String name=s1.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello "+" "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:42:11


```
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        System.out.println();
        String name=s1.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:48:06


```
import java.util.Scanner;
import java.io.*;

class Main{
    public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        String name=s1.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:53:36


```
import java.util.*;

public class Main{
    public static void main(String args[])
    {
        Scanner s1=new Scanner(System.in);
        int a=s1.nextInt();

        for(int i=1; i<=a;i++)
        {
            String name=s1.next();
            System.out.println("Hello "+name+"!");
        }
    }

}
```

## Submission at 2024-08-12 10:04:27


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
  if (x==0){
    return 0;
  }
  else if (x==1){
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

## Submission at 2024-08-12 10:20:32


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    
    while (n%2 == 0):
        n//=2
        return True
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:27:43


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return True
    
    elif (n%2 == 0):
        return False

    return is_power_of_two(n/2)
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:30:00


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return False
    
    elif (n%2 == 0):
        return True

    return is_power_of_two(n/2)
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:31:38


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return "false"
    
    elif (n%2 == 0):
        return "true"

    return is_power_of_two(n/2)
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:34:18


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return "false"
    
    if (n%2 == 0):
        return "true"

    return is_power_of_two(n/2)
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:35:27


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return "false"
    
    if (n%2 == 0):
        return "true"

    return is_power_of_two(n/2)
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:37:06


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return "true"
    
    if (n%2 == 0):
        return is_power_of_two(n/2)
    else:
        return "false"
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:38:10


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return True
    
    if (n%2 == 0):
        return is_power_of_two(n/2)
    else:
        return False
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:41:58


```
def is_power_of_two(n:int) -> int:
    if(n==1):
        return True   
    if (n%2 == 0):
        return is_power_of_two(n/2)
    else:
        return False
    
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:31:44


```
from itertools import combinations

def combine(n, k):
    return sorted(list(combinations(range(1, n + 1), k)))

def main():
    n, k = map(int, input().split())
    
    result = combine(n, k)
    
    print([list(comb) for comb in result])

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:34:43


```
def combine(n, k):
    def backtrack(start, path):
        # If the combination is done
        if len(path) == k:
            result.append(path[:])
            return
        # Go through all numbers starting from 'start'
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()  # backtrack

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

## Submission at 2024-08-20 09:37:33


```
def combine(n, k):
    def backtrack(start, path):
        # If the combination is done
        if len(path) == k:
            result.append(path[:])
            return
        # Go through all numbers starting from 'start'
        for i in range(start, n + 1):
            path.append(i)
            backtrack(i + 1, path)
            path.pop()  # backtrack

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

## Submission at 2024-08-20 09:38:33


```
from itertools import permutations

def permute(nums):
    # Generate all possible permutations
    return sorted(list(permutations(nums)))

def main():
    # Read input array
    nums = list(map(int, input().split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Print the result in the required format
    print([list(perm) for perm in result])

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-20 09:40:00


```
from itertools import permutations

def permute(nums):
    # Generate all possible permutations of the input list
    return sorted(list(permutations(nums)))

def main():
    # Read input values (assuming the input is provided as a list of integers)
    nums = list(map(int, input().strip().split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Print the result in the required format
    print([list(perm) for perm in result])

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:40:31


```
from itertools import permutations

def permute(nums):
    # Generate all possible permutations of the input list
    return sorted(list(permutations(nums)))

def main():
    # Read input values (assuming the input is provided as a list of integers)
    nums = list(map(int, input().strip().split()))
    
    # Generate permutations
    result = permute(nums)
    
    # Print the result in the required format
    print([list(perm) for perm in result])

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:43:45


```
from itertools import permutations

def main():
    # Read input values as an array of integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations and sort them
    result = sorted([list(p) for p in permutations(nums)])
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:45:14


```
from itertools import permutations

def main():
    # Read input values as an array of integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations and sort them
    result = sorted([list(p) for p in permutations(nums)])
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:47:32


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
            return
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]  # Swap back

    result = []
    backtrack(0)
    return result

def main():
    # Read input values as an array of integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:48:13


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
            return
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1)
            nums[start], nums[i] = nums[i], nums[start]  # Swap back

    result = []
    backtrack(0)
    return result

def main():
    # Read input values as an array of integers
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:52:50


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate permutations
void generatePermutations(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, result);
        swap(nums[start], nums[i]); // backtrack
    }
}

// Main function
int main() {
    vector<int> nums;
    int num;

    // Read input values
    while (cin >> num) {
        nums.push_back(num);
        if (cin.get() == '\n') break; // stop reading on newline
    }

    vector<vector<int>> result;
    generatePermutations(nums, 0, result);

    // Sort permutations
    sort(result.begin(), result.end());

    // Print the result
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-20 10:03:21


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        # If the current string is a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If we can add a left parenthesis
        if left < n:
            backtrack(s + '(', left + 1, right)
        # If we can add a right parenthesis
        if right < left:
            backtrack(s + ')', left, right + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

def main():
    n = int(input().strip())
    
    # Generate combinations of well-formed parentheses
    result = generateParenthesis(n)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 10:42:15


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        # If the current string is a valid combination
        if len(s) == 2 * n:
            result.append(s)
            return
        # If we can add a left parenthesis
        if left < n:
            backtrack(s + '(', left + 1, right)
        # If we can add a right parenthesis
        if right < left:
            backtrack(s + ')', left, right + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

def main():
    n = int(input().strip())
    
    # Generate combinations of well-formed parentheses
    result = generateParenthesis(n)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 12:09:24


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + "(", left + 1, right)
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack()
    return result

n = int(input())
print(generate_parentheses(n))

```

## Submission at 2024-08-20 12:16:25


```
def generate_parentheses(n):
    def backtrack(s="", left=0, right=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + """(""", left + 1, right)
        if right < left:
            backtrack(s + """)""", left, right + 1)

    result = []
    backtrack()
    return result

n = int(input())
print(generate_parentheses(n))


```

## Submission at 2024-08-20 12:19:04


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int n, int open, int close, std::string current, std::vector<std::string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (open < n) {
        generateParentheses(n, open + 1, close, current + '(', result);
    }
    if (close < open) {
        generateParentheses(n, open, close + 1, current + ')', result);
    }
}

std::vector<std::string> generateParentheses(int n) {
    std::vector<std::string> result;
    generateParentheses(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> parentheses = generateParentheses(n);

    std::cout << "Generated parentheses combinations:" << std::endl;
    for (const std::string& s : parentheses) {
        std::cout << s << std::endl;
    }

    return 0;
}

```

## Submission at 2024-08-20 12:20:46


```
def generate_parentheses(n):
    def backtrack(s='', open=0, close=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if open < n:
            backtrack(s + '(', open + 1, close)
        if close < open:
            backtrack(s + ')', open, close + 1)
    
    result = []
    backtrack()
    return result

# Input
n = int(input(""))

# Generate combinations
parentheses = generate_parentheses(n)

# Output
print(parentheses)

```

## Submission at 2024-08-20 12:26:28


```
def generate_parentheses(n):
    def backtrack(s='', open=0, close=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if open < n:
            backtrack(s + '(', open + 1, close)
        if close < open:
            backtrack(s + ')', open, close + 1)
    
    result = []
    backtrack()
    return result

# Input
n = int(input())

# Generate combinations
parentheses = generate_parentheses(n)

# Output
print('[' + ','.join(f'"{p}"' for p in parentheses) + ']')

```

## Submission at 2024-09-02 09:57:08


```
n = int(input())  
a = list(map(int, input().split()))  
b = list(map(int, input().split()))  

c = [max(a[i], b[i]) for i in range(n)]

print(' '.join(map(str, c)))

```

## Submission at 2024-09-02 10:09:41


```
class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def traverse_linked_list(head):
    elements = []
    current_node = head
    
    while current_node is not None:
        elements.append(current_node.value)
        current_node = current_node.next
    
    return elements

def create_linked_list(values):
    if not values:
        return None
    
    head = ListNode(values[0])
    current_node = head
    for value in values[1:]:
        current_node.next = ListNode(value)
        current_node = current_node.next
    
    return head

def main():
    try:
        n = int(input("Enter the number of elements in the linked list: "))
        values = list(map(int, input("Enter the elements of the linked list: ").split()))
    
    head = create_linked_list(values)
    result = traverse_linked_list(head)
    
    print("The elements in the linked list are:", result)

# Execute the main function
if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 10:36:01


```
#include <bits/stdc++.h>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode *head) {
    vector<int> result;
    ListNode* temp = head;
    while(temp != NULL){
        result.push_back(temp -> val);
        temp = temp -> next;
    }
    return result;
}

```

## Submission at 2024-09-02 10:45:11


```
class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1  # 1-based index

    while current is not None:
        if count == k:
            return current.value
        current = current.next
        count += 1

    # If k is greater than the length of the linked list
    return -1

def create_linked_list(values):
    if not values:
        return None

    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next

    return head

def print_linked_list(head):
    elements = []
    current = head
    while current is not None:
        elements.append(current.value)
        current = current.next
    print(" ".join(map(str, elements)))

def main():
    n = int(input())
    values = list(map(int, input().split()))
    
    k = int(input())
    
    head = create_linked_list(values)
    
    result = get_kth_node(head, k)

    print(result)


```

## Submission at 2024-09-02 10:47:41


```
class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1  # 1-based index

    while current is not None:
        if count == k:
            return current.value
        current = current.next
        count += 1

    # If k is greater than the length of the linked list
    return -1

def create_linked_list(values):
    if not values:
        return None

    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next

    return head

def print_linked_list(head):
    elements = []
    current = head
    while current is not None:
        elements.append(current.value)
        current = current.next
    print(" ".join(map(str, elements)))

def main():
    n = int(input())
    values = list(map(int, input().split()))
    k = int(input())
    
    head = create_linked_list(values)
    
    result = get_kth_node(head, k)

    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 10:50:03


```
class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def get_kth_node(head, k):
    current = head
    index = 1  # 1-based index

    while current and index < k:
        current = current.next
        index += 1
    
    # Return the value of the k-th node if it exists, otherwise return -1
    return current.value if current else -1

def create_linked_list(values):
    if not values:
        return None

    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next

    return head

def print_linked_list(head):
    elements = []
    while head:
        elements.append(head.value)
        head = head.next
    print(" ".join(map(str, elements)))

def main():
    n = int(input())
    values = list(map(int, input().split()))
    k = int(input())

    head = create_linked_list(values)

    result = get_kth_node(head, k)

    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 11:00:10


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
    Node* temp = head;
    int currIndex = 1;
    while(currIndex < k){
        if(temp->next){
            temp = temp->next;
            currIndex++;
        }
        else{
            return -1;
        }
    }
    return temp->data;
}

```

## Submission at 2024-09-05 12:21:20


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
    Node* tmpNode=head;
    int currIndex=1;
    while(currIndex<k){
        if(tmpNode->next){
            tmpNode=tmpNode->next;
            currIndex++;
        }
        else
        return -1;
    }
    return tmpNode->data;
}
```

## Submission at 2024-09-07 08:45:26


```
class ListNode:
    def _init_(self, value=0, next=None):
        self.value = value
        self.next = next

def delNode(head, x):
    # If the linked list is empty or x is invalid
    if not head or x <= 0:
        return head
    
    # If the node to be deleted is the head node
    if x == 1:
        return head.next
    
    # Traverse the linked list to find the (x-1)th node
    current = head
    for i in range(x - 2):
        if not current.next:
            return head  # If x is out of bounds
        current = current.next
    
    # Delete the xth node by skipping it
    if current.next:
        current.next = current.next.next
    
    return head
```

## Submission at 2024-09-07 08:46:28


```
class ListNode:
    def _init_(self, value=0, next=None):
        self.value = value
        self.next = next

def delNode(head, x):
    # If the linked list is empty or x is invalid
    if not head or x <= 0:
        return head
    
    # If the node to be deleted is the head node
    if x == 1:
        return head.next
    
    # Traverse the linked list to find the (x-1)th node
    current = head
    for i in range(x - 2):
        if not current.next:
            return head  # If x is out of bounds
        current = current.next
    
    # Delete the xth node by skipping it
    if current.next:
        current.next = current.next.next
    
    return head
```

## Submission at 2024-09-07 08:48:06


```
class ListNode:
    def _init_(self, value=0, next=None):
        self.value = value
        self.next = next

def delNode(head, x):
    # If the linked list is empty or x is invalid
    if not head or x <= 0:
        return head
    
    if x == 1:
        return head.next
    current = head
    for i in range(x - 2):
        if not current.next:
            return head  # If x is out of bounds
        current = current.next
   
    if current.next:
        current.next = current.next.next
    
    return head
```

## Submission at 2024-09-07 08:50:52


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # If the head is the node to delete
    if k == 1:
        return head.next
    
    # Initialize current to the head node
    current = head
    
    # Traverse to the (k-1)th node
    for _ in range(k - 2):
        if current is None or current.next is None:
            return head  # If k is out of bounds, return the original head
        current = current.next
    
    # If the current node is not None and has a next node to delete
    if current.next:
        current.next = current.next.next
    
    return head

# Helper function to print linked list
def printList(head):
    current = head
    while current:
        print(current.data, end=" ")
        current = current.next
    print()

# Helper function to create a linked list from a list of elements
def createLinkedList(arr):
    if not arr:
        return None
    head = node()
    head.data = arr[0]
    current = head
    for value in arr[1:]:
        new_node = node()
        new_node.data = value
        current.next = new_node
        current = new_node
    return head

```

## Submission at 2024-09-07 08:52:45


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # If the head is the node to delete
    if k == 1:
        return head.next
    
    # Initialize current to the head node
    current = head
    
    # Traverse to the (k-1)th node
    for _ in range(k - 2):
        if current is None or current.next is None:
            return head  # If k is out of bounds, return the original head
        current = current.next
    
    # If the current node is not None and has a next node to delete
    if current.next:
        current.next = current.next.next
    
    return head

# Helper function to print linked list
def printList(head):
    current = head
    while current:
        print(current.data, end=" ")
        current = current.next
    print()

# Helper function to create a linked list from a list of elements
def createLinkedList(arr):
    if not arr:
        return None
    head = node()
    head.data = arr[0]
    current = head
    for value in arr[1:]:
        new_node = node()
        new_node.data = value
        current.next = new_node
        current = new_node
    return head

```

## Submission at 2024-09-07 08:55:24


```
class ListNode:
    def _init_(self, value=0, next=None):
        self.value = value
        self.next = next

def reverseLinkedList(head):
    # Initialize previous and current pointers
    prev = None
    current = head

    # Traverse the list and reverse the pointers
    while current:
        next_node = current.next  
        current.next = prev       
        prev = current            
        current = next_node       


    return prev
```

## Submission at 2024-09-07 09:00:07


```
def diagonalTraversal(matrix):
    m = len(matrix)
    n = len(matrix[0]) if m > 0 else 0
    result = []

    # Traverse each diagonal starting from the first row
    for col in range(n):
        i, j = 0, col
        diagonal = []
        while i < m and j >= 0:
            diagonal.append(matrix[i][j])
            i += 1
            j -= 1
        result.extend(diagonal)
    
    # Traverse each diagonal starting from the last column (skipping the first row)
    for row in range(1, m):
        i, j = row, n - 1
        diagonal = []
        while i < m and j >= 0:
            diagonal.append(matrix[i][j])
            i += 1
            j -= 1
        result.extend(diagonal)
    
    return result


```

## Submission at 2024-09-07 09:01:11


```
def diagonal_traversal(matrix):
    m = len(matrix)
    n = len(matrix[0]) if m > 0 else 0
    result = []

    # Traverse each diagonal starting from the first row
    for col in range(n):
        i, j = 0, col
        diagonal = []
        while i < m and j >= 0:
            diagonal.append(matrix[i][j])
            i += 1
            j -= 1
        result.extend(diagonal)
    
    # Traverse each diagonal starting from the last column (skipping the first row)
    for row in range(1, m):
        i, j = row, n - 1
        diagonal = []
        while i < m and j >= 0:
            diagonal.append(matrix[i][j])
            i += 1
            j -= 1
        result.extend(diagonal)
    
    return result


```

## Submission at 2024-09-07 09:02:20


```
def diagonal_traversal(matrix):
    m = len(matrix)
    n = len(matrix[0]) if m > 0 else 0
    result = []

    # Traverse diagonals starting from the first row (top-left to top-right)
    for col in range(n):
        i, j = 0, col
        while i < m and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    # Traverse diagonals starting from the first column of remaining rows (left-bottom)
    for row in range(1, m):
        i, j = row, n - 1
        while i < m and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    return result

```

## Submission at 2024-09-07 09:03:55


```
def diagonalTraversal(matrix):
    m = len(matrix)
    n = len(matrix[0]) if m > 0 else 0
    result = []

    # Traverse diagonals starting from the first row (from (0,0) to (0,n-1))
    for col in range(n):
        i, j = 0, col
        while i < m and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    # Traverse diagonals starting from the first column (from (1,0) to (m-1,0))
    for row in range(1, m):
        i, j = row, n - 1
        while i < m and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    return result

```

## Submission at 2024-09-07 09:05:47


```
def diagonal_traversal(matrix):
    m = len(matrix)
    n = len(matrix[0]) if m > 0 else 0
    result = []

    # Traverse diagonals starting from the first row (from (0,0) to (0,n-1))
    for col in range(n):
        i, j = 0, col
        while i < m and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    # Traverse diagonals starting from the first column (from (1,0) to (m-1,0))
    for row in range(1, m):
        i, j = row, n - 1
        while i < m and j >= 0:
            result.append(matrix[i][j])
            i += 1
            j -= 1
    
    return result

```

## Submission at 2024-09-07 09:06:49


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    result = []

    # Traverse from top-left to bottom-left (cover the first half of diagonals)
    for d in range(m):
        i, j = d, 0
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    # Traverse from top-right to bottom-right (cover the remaining diagonals)
    for d in range(1, n):
        i, j = m - 1, d
        diagonal = []
        while i >= 0 and j < n:
            diagonal.append(matrix[i][j])
            i -= 1
            j += 1
        result.extend(diagonal)

    return result
```

## Submission at 2024-09-09 04:49:09


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    current = head

    while current is not None:
        result.append(current.val)
        current = current.next
    
    return result

```

## Submission at 2024-09-09 05:10:30


```
n = int(input())

def sum_multiples(n):
    sum_t = 0
    for i in range (1, n+1):
        if i%3==0 or i%5==0 or i%7==0:
            sum_t = sum_t+i
    return sum_multiples

print(sum_multiples(n))



```

## Submission at 2024-09-09 05:11:29


```
def sum_multiples(n):
    sum_t = 0
    for i in range (1, n+1):
        if i%3==0 or i%5==0 or i%7==0:
            sum_t = sum_t+i
    return sum_t

n = int(input())

print(sum_multiples(n))



```

## Submission at 2024-09-09 05:18:39


```
import array as arr

def find_even(n):
    even_count = 0
    for num in nums:
        if(len(str(num))) % 2 == 0
        even_count += 1
    return _even_count

n = int(input())
nums = list(map(int, input().split()))

print(find_even(n))
```

## Submission at 2024-09-09 05:18:54


```
import array as arr

def find_even(n):
    even_count = 0
    for num in nums:
        if(len(str(num))) % 2 == 0:
        even_count += 1
    return _even_count

n = int(input())
nums = list(map(int, input().split()))

print(find_even(n))
```

## Submission at 2024-09-09 05:23:04


```
import array as arr

def find_even(n):
    even_count = 0
    for num in nums:
        if(len(str(num))) % 2 == 0:
            even_count += 1
    return even_count

n = int(input())
nums = list(map(int, input().split()))

print(find_even(n))
```

## Submission at 2024-09-09 05:44:38


```
def check_equal(arr1,arr2):
    if n1 == n2:
        if sorted(arr1) == sorted(arr2):
            return "true"
        return "false"
    return "false"

n1,n2 = map(int,input().split())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))

print(check_equal(arr1,arr2))
```

## Submission at 2024-09-09 06:38:35


```
def check_equal(arr1,arr2):
    if n1 == n2:
        if sorted(arr1) == sorted(arr2):
            return "true"
        return "false"
    return "false"

n1,n2 = map(int,input().split())
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))

print(check_equal(arr1,arr2))
```

## Submission at 2024-09-09 07:26:01


```
def is_palindrome(s):
    return s == s[::-1]

s = str(input())
ans = is_palindrome
if ans:
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-09 07:27:13


```
def is_palindrome(s):
    return s == s[::-1]

s = str(input())
ans = is_palindrome(s)
if ans:
    print("YES")
else:
    print("NO")
```

## Submission at 2024-09-09 09:53:19


```
def is_pwr_3(n,x):
    if n == 1:
        return "True"
    elif b % 3 == 0:
        return pwr(n,x/3)
    else:
        return "False"

n = int(input())
print (is_pwr_3(n,x))
    
```

## Submission at 2024-09-09 09:54:34


```
def is_pwr_3(n):
    if n == 1:
        return "True"
    elif b % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"

n = int(input())
print (is_pwr_3(n))
    
```

## Submission at 2024-09-09 09:55:05


```
def is_pwr_3(n):
    if n == 1:
        return "True"
    elif b % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"

n = int(input())

    
```

## Submission at 2024-09-09 09:56:28


```
def is_pwr_3(n):
    if n == 1:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"

n = int(input())
print(is_pwr_3(n))
    
```

## Submission at 2024-09-09 09:58:08


```
def is_pwr_3(n):
    if n == 3:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"

n = int(input())
print(is_pwr_3(n))
    
```

## Submission at 2024-09-09 09:59:25


```
def is_pwr_3(n):
    if n == 3:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"

n = int(input())
print(is_pwr_3(n))
    
```

## Submission at 2024-09-09 10:00:17


```
n = int(input())

def is_pwr_3(n):
    if n == 3:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"


print(is_pwr_3(n))
    
```

## Submission at 2024-09-09 10:10:03


```
s = str(input())
x = int(input())

def count_freq(s,x):
    count = 0
    if 0<=x<=9:
        for i in range (0,len(s)+1):
            if char[i] == x:
                count += 1
                i += 1
                return i
            else:
                return count    
    return count
print(count)
```

## Submission at 2024-09-09 10:15:00


```
import array
s = array['i',list(input().split())]
x = int(input())
count = 0


def count_freq(s,x):
    
    if 0<=x<=9:
        for i in range (0,len(s)+1):
            if char[i] == x:
                count += 1
                i += 1
                return i
            else:
                return count    
    return count
print(count)


```

## Submission at 2024-09-09 10:24:02


```

class Solution:
    def isPalindrome(self, head):
        self.head = current
        self.previous = prev
        self.


```

## Submission at 2024-09-09 10:31:47


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    head = sorted(list(head))


```

## Submission at 2024-09-09 10:45:02


```
n = int(input())

def is_pwr_3(n):
    if n == 3 or n==1 :
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"


print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:46:02


```
n = int(input())

def is_pwr_3(n):
    if n == 1:
        return "True"
    elif n == 3:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"


print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:47:22


```
n = int(input(),-2^31 <= n <= 2^31 - 1)

def is_pwr_3(n):
    if n == 1:
        return "True"
    elif n == 3:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"


print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:48:03


```
n = int(input())

def is_pwr_3(n):
    if n == 1:
        return "True"
    elif n == 3:
        return "True"
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False"


print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:49:38


```
n = int(input())

def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return False

print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:50:57


```
n = int(input())

def is_pwr_3(n):
    if n == 1:
        return "True "
    elif n == 3:
        return "True "
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return "False "

print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:51:29


```
n = int(input())

def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return False

print(is_pwr_3(n))
```

## Submission at 2024-09-09 10:52:26


```
def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return False
print(is_pwr_3(n))

n = int(input())
```

## Submission at 2024-09-09 10:53:12


```
n = int(input())

def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return False

print(is_pwr_3(n))

```

## Submission at 2024-09-09 11:06:16


```
import array
arr = array('i',list(input()))
x1 = int(input())
count = 0


def count_freq(s,x):
    
    if 0<=x<=9:
        for i in range (0,len(s)+1):
            if char[i] == x:
                count += 1
                i += 1
                return i
            else:
                return count    
    return count
print(count)


```

## Submission at 2024-09-09 11:13:52


```
def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return True
    else:
        return False

print(is_pwr_3(n))

```

## Submission at 2024-09-09 11:13:55


```
def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return True
    else:
        return False

print(is_pwr_3(n))

```

## Submission at 2024-09-09 11:14:06


```
def is_pwr_3(n):
    if n == 1:
        return True
    elif n == 3:
        return True
    elif n % 3 == 0:
        return is_pwr_3(n/3)
    else:
        return False

print(is_pwr_3(n))

```

## Submission at 2024-09-16 09:48:33


```
def findKthMissing(arr, n, k):
    missing_count = 0
    current = 1
    idx = 0

    while True:
        if idx < n and arr[idx] == current:
            idx += 1  
        else:
            missing_count += 1  
            if missing_count == k:
                return current
        current += 1

n, k = map(int, input().split())  
arr = list(map(int, input().split())) 
print(findKthMissing(arr, n, k))

```

## Submission at 2024-09-16 09:50:36


```
import array as arr

def find_even(n):
    even_count = 0
    for num in nums:
        if(len(nums)) % 2 == 0:
            even_count += 1
    return even_count

n = int(input())
nums = list(map(int, input().split()))

print(find_even(n))
```

## Submission at 2024-09-16 09:51:03


```
import array as arr

def find_even(n):
    even_count = 0
    for num in nums:
        if(len(str(nums))) % 2 == 0:
            even_count += 1
    return even_count

n = int(input())
nums = list(map(int, input().split()))

print(find_even(n))
```

## Submission at 2024-10-07 09:52:55


```
from collections import deque # Don't touch this line
class solution(object):
    def rev(self,q,n):
        # Write your code
        for i in range(n+1,0,-1):
            j=0
            q.deque(i)
            rev.append(j)
            j += 1
        return rev



```

## Submission at 2024-10-07 09:53:38


```
from collections import deque # Don't touch this line
class solution(object):
    def rev(self,q,n):
        # Write your code
        reverse={}
        for i in range(n+1,0,-1):
            j=0
            q.deque(i)
            reverse.append(j)
            j += 1
        return reverse



```

## Submission at 2024-10-07 09:54:22


```
from collections import deque # Don't touch this line

def rev(self,q,n):
    # Write your code
    reverse={}
    for i in range(n+1,0,-1):
        j=0
        q.deque(i)
        reverse.append(j)
        j += 1
    return reverse



```

## Submission at 2024-10-07 10:08:03


```
# Write your code from scratch 
st = {}
def sortsum(s):
    for i in s:
        if i != "+":
            st.append(i)
    
    sort.st()

    return "+".join(st)


    
```

## Submission at 2024-10-07 10:09:20


```
st = {}
def sortsum():
    for i in s:
        if i != "+":
            st.append(i)
    
    sort.st()

    return "+".join(st)


    
```

## Submission at 2024-10-07 10:10:32


```
st = toarray(s)

def sortsum():
    for i in s:
        if i != "+":
            st.append(i)
    
    sort.st()

    return "+".join(st)


    
```

## Submission at 2024-10-07 10:11:51


```
st = {}

def sortsum(s):
    for i in s:
        if i != "+":
            st.append(i)
    
    sort.st()

    return "+".join(st)


    
```

## Submission at 2024-10-07 10:14:01


```
st = {}

def sortsum(s):
    for i in range(len(s)+1):
        if i != "+":
            st.append(i)
    
    sort.st()

    return "+".join(str(st))


    
```

## Submission at 2024-10-07 10:14:51


```
st = {}

def sortsum(s):
    for i in range(len(s)+1):
        if i != "+":
            st.append(i)
    
        sort.st()

    return "+".join(str(st))
```

## Submission at 2024-10-07 10:17:21


```
# Write your code from scratch here
st = {}

def sortsum(str s):
    for i in range(len(s)+1):
        if i != "+":
            st.append(i)
    
        sort.st()

    return "+".join(str(st))

```

## Submission at 2024-10-07 10:22:47


```
# Write your code from scratch here
st = {1,2,3}
a={}

def sortsum(s):
    for i in st:
        if i in s:
            a.append(i)
    return "+".join(a)

```

## Submission at 2024-10-07 10:23:13


```
# Write your code from scratch here
st = {1,2,3}
a={}

def sortsum(s):
    for i in st:
        if i in s:
            a.append(i)
    
    print "+".join(a)

```

## Submission at 2024-10-07 10:24:36


```
# Write your code from scratch here
st = {1,2,3}
a={}

def sortsum(s):
    for i in st:
        if i in s:
            a.append(i)
    
    return "+".join(str(a))
print a
```

## Submission at 2024-10-07 10:25:17


```
# Write your code from scratch here
st = {1,2,3}
a={}

def sortsum(s):
    for i in st:
        if i in s:
            a.append(i)
    
    print ("+".join(str(a)))
```

## Submission at 2024-10-07 10:29:07


```
from collections import deque # Don't touch this line
r = []

def rev(q):
    for i in range (len(q)+1,0,-1):
        r.append(i)
    return r


```

## Submission at 2024-10-07 10:31:50


```
q = map(s.split())
st = {1,2,3}
a={}

def sortsum(s):
    for i in st:
        if i in q:
            a.append(i)
    
    print ("+".join(str(a)))



```

## Submission at 2024-10-07 10:32:27


```

st = {1,2,3}
a={}

def sortsum(s):
    q = list(s.split())
    for i in st:
        if i in q:
            a.append(i)
    
    print ("+".join(str(a)))



```

## Submission at 2024-10-07 10:39:00


```
def rev_string():
    q = list(input().split)
    stack = []
    for i in range(len(q)+1):
        


```

## Submission at 2024-10-07 10:43:02


```
from collections import deque

r = []
def rev(q):
    for i in range(len(q)+1,0):
        q.deque(current)
        r.append(current)
    return r


```

## Submission at 2024-10-07 10:44:08


```
from collections import deque

r = []
def rev(q):
    for i in range(len(q)+1,0):
        q.deque(current)
        r.append(current)
    return r
print (r)


```

## Submission at 2024-10-07 10:59:24


```
a = []
ind = 0
def sortsum(s):
    x = s.count(1)
    y = s.count(2)
    z = s.count(3)

    for i in range(x+1):
        a[i] = 1
        i += 1
    for i in range(y+1):
        a[i] = 2
        i += 1
    for i in range(z+1):
        a[i] = 3
        i += 1

    b = "+".join(a())
    print(a)
    

    


```

## Submission at 2024-10-28 10:01:29


```
'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        


```

## Submission at 2024-10-28 10:11:19


```

class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

def findMin(root):
    if root is None:
        return false
    
    return min(root.val,left_min,righ_min)
        

```

## Submission at 2024-10-28 10:15:12


```
'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        if root is None:
            return "False"
        else:   
            return min(root.val,root.left,root.right)


```

## Submission at 2024-10-28 10:31:18


```
occur = {}
def element(n,k):
    for i in range(0,len(n+1)):
        if i in occur:
            occur[i] += 1
            if occur[i] == k:
                return i
        else:
            return -1

print (return)
```

## Submission at 2024-10-28 10:38:34


```
def element(n,k):
    for i in range(0,len(n)):
        if count[i] == k:
            return i
        else:
            return -1

print (element())
```

## Submission at 2024-10-28 10:38:35


```
def element(n,k):
    for i in range(0,len(n)):
        if count[i] == k:
            return i
        else:
            return -1

print (element())
```

## Submission at 2024-10-28 10:44:31


```
class solution():
    def element(self,n,k):
        for i in range(0,n+1):
            if count(i) == k:
                return i
        else:
            return -1
```

## Submission at 2024-10-28 10:48:59


```
class solution():
    def element(self,n,k):
        for i in range(0,n+1):
            if count(i) == k:
                print(i)
        else:
            print(-1)
```

## Submission at 2024-10-28 10:54:30


```
import array

n = int(input())
k = next.int(input())
arr = list(input().split)

class solution():
    def element(n):
        for i in arr:
            if count(i) == k:
                print(i)
        else:
            print(-1)
```

## Submission at 2024-10-28 11:06:17


```
def find_element(arr,k):
    count = {}
    
    for num in arr:
        count[num] = count.get(num,0) + 1

    for num,freq in count.items()
        if freq == k:
            return num
        else:
            return -1

n,k = map(int, input().split())
arr = list(map(int, input().split()))

print(find_element())
```

## Submission at 2024-10-28 11:06:50


```
def find_element(arr,k):
    count = {}
    
    for num in arr:
        count[num] = count.get(num,0) + 1

    for num,freq in count.items():
        if freq == k:
            return num
        else:
            return -1

n,k = map(int, input().split())
arr = list(map(int, input().split()))

print(find_element())
```

## Submission at 2024-10-28 11:07:24


```
def find_element(arr,k):
    count = {}
    
    for num in arr:
        count[num] = count.get(num,0) + 1

    for num,freq in count.items():
        if freq == k:
            return num
        else:
            return -1

n,k = map(int, input().split())
arr = list(map(int, input().split()))

print(find_element(arr,k))
```

## Submission at 2024-10-28 11:07:44


```
def find_element(arr,k):
    count = {}
    
    for num in arr:
        count[num] = count.get(num,0) + 1

    for num,freq in count.items():
        if freq == k:
            return num
        else:
            return -1

n,k = map(int, input().split())
arr = list(map(int, input().split()))

print(find_element(arr,k))
```

## Submission at 2024-10-28 11:07:45


```
def find_element(arr,k):
    count = {}
    
    for num in arr:
        count[num] = count.get(num,0) + 1

    for num,freq in count.items():
        if freq == k:
            return num
        else:
            return -1

n,k = map(int, input().split())
arr = list(map(int, input().split()))

print(find_element(arr,k))
```

## Submission at 2024-10-28 11:17:31


```
'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def find_min(self,node):
        if node is None:
            return float('inf')
        
        left_min = find_min(node.left)
        right_min = find_min(node.right)

        return min(node.value,left_min,right_min)


```

## Submission at 2024-10-28 11:17:32


```
'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def find_min(self,node):
        if node is None:
            return float('inf')
        
        left_min = find_min(node.left)
        right_min = find_min(node.right)

        return min(node.value,left_min,right_min)


```

## Submission at 2024-10-28 11:21:04


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
        if root is None:
            return float('inf')
        
        left_min = find_min(root.left)
        right_min = find_min(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:21:43


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
    def find_min(self,root):
        if root is None:
            return float('inf')
        
        left_min = find_min(root.left)
        right_min = find_min(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:22:26


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
        if root is None:
            return float('inf')
        
        left_min = findMin(root.left)
        right_min = findMin(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:22:27


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
        if root is None:
            return float('inf')
        
        left_min = findMin(root.left)
        right_min = findMin(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:25:16


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
        if root is None:
            return float('inf')
        
        left_min = self.findMin(root.left)
        right_min = self.findMin(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:27:24


```
class Node:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

class Solution:
    def findMin(self,root):
        if root is None:
            return float('inf')
        
        left_min = self.findMin(root.left)
        right_min = self.findMin(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:27:24


```
class Node:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

class Solution:
    def findMin(self,root):
        if root is None:
            return float('inf')
        
        left_min = self.findMin(root.left)
        right_min = self.findMin(root.right)

        return min(root.val,left_min,right_min)


```

## Submission at 2024-10-28 11:28:44


```
class Node:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

class Solution:
    def findMin(self,root):
        if root is None:
            return float('inf')
        
        left_min = self.findMin(root.left)
        right_min = self.findMin(root.right)

        return min(root.val,left_min,right_min)

sol = Solution()
print(sol.findMin(root))


```

## Submission at 2024-10-28 11:28:45


```
class Node:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

class Solution:
    def findMin(self,root):
        if root is None:
            return float('inf')
        
        left_min = self.findMin(root.left)
        right_min = self.findMin(root.right)

        return min(root.val,left_min,right_min)

sol = Solution()
print(sol.findMin(root))


```

## Submission at 2024-11-25 09:53:49


```
S = input()
cnta = 0
cntb = 0

for i in len(S):
    if i ==a:
        cnta += 1
    else:
        cntb +=1

if cnta > cntb:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 09:55:00


```
S = input()
cnta = 0
cntb = 0

for i in len(S):
    if i ==a:
        cnta += 1
    else:
        cntb +=1

if cnta > cntb:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 10:07:09


```
S = input()

c1 = S.count('a')
c2 = S.count('b')

if c1 > c2:
    return 'a'
else:
    return 'b'
```

## Submission at 2024-11-25 10:08:50


```
S = input()

a = S.count('a')
b = S.count('b')

def mind_a_b():
    c = max(a,b)
    if c == a:
        print ("a")
    else:
        print ("b")
    
print(mind_a_b())
```

## Submission at 2024-11-25 10:09:00


```
S = input()

a = S.count('a')
b = S.count('b')

def mind_a_b():
    c = max(a,b)
    if c == a:
        print ("a")
    else:
        print ("b")
    
print(mind_a_b())
```

## Submission at 2024-11-25 10:10:08


```
S = input()

a = S.count('a')
b = S.count('b')

def mind_a_b():
    c = max(a,b)
    if c == a:
        print ("a")
    else:
        print ("b")
    
print(mind_a_b())
```

## Submission at 2024-11-25 10:10:53


```
S = input()

a = S.count('a')
b = S.count('b')

def mind_a_b():
    c = max(a,b)
    if c == a:
        print ("a")
    else:
        print ("b")
    
print(mind_a_b())
```

## Submission at 2024-11-25 10:12:51


```
S = input()

a = S.count('a')
b = S.count('b')

def mind_a_b():
    c = max(a,b)
    if c == a:
        print ("a")
    else:
        print ("b")
    
print(mind_a_b())
```

## Submission at 2024-11-25 10:13:11


```
S = input()

a = S.count('a')
b = S.count('b')

def mind_a_b():
    c = max(a,b)
    if c == a:
        print ("a")
    else:
        print ("b")
    
print(mind_a_b())
```

## Submission at 2024-11-25 10:17:08


```
S = input()

int a = 0
int b = 0

def mind_a_b():
    for i in S():
        if i == a:
            a += 1
        else:
            b += 1
    if a>b:
        print("a")
    else:
        print("b")

```

## Submission at 2024-11-25 10:18:55


```
S = input()

a = 0
b = 0

def mind_a_b():
    for i in S():
        if i == a:
            a += 1
        else:
            b += 1
    if a>b:
        print("a")
    else:
        print("b")

```

## Submission at 2024-11-25 10:20:01


```
S = input()

a = 0
b = 0

def mind_a_b():
    for i in S():
        if i == a:
            a += 1
        else:
            b += 1
    if a>b:
        print("a")
    else:
        print("b")

print (mind_a_b())
```

## Submission at 2024-11-25 10:27:18


```
s = input()

c1 = s.count('a')
c2 = s.count('b')

c = max(c1,c2)

if c == c1:
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:27:20


```
s = input()

c1 = s.count('a')
c2 = s.count('b')

c = max(c1,c2)

if c == c1:
    print('a')
else:
    print('b')
```

## Submission at 2024-11-25 10:39:21


```
n = int(input())
arr = list(map(int,input).split())


def is_ap(arr):
    diff = arr[0] - arr[0]

    for i in range(1,len(arr)):
        if arr[i] - arr[i-1] != diff:
            return False
        else :
            return True

print(is_ap())
```

## Submission at 2024-11-25 10:47:13


```
n = int(input())
arr = list(map(int,input().split()))


def is_ap(arr):
    diff = arr[1] - arr[0]

    for i in range(1,len(arr)):
        if arr[i] - arr[i-1] != diff:
            return False
        else :
            return True

print(is_ap())
```

## Submission at 2024-11-25 10:50:01


```
n = int(input())
arr = list(map(int,input().split()))


def is_ap(arr):
    diff = arr[1] - arr[0]

    for i in range(1,len(arr)):
        if arr[i] - arr[i-1] != diff:
            return "false"
        else :
            return "true"

print(is_ap(arr))
```

## Submission at 2024-11-25 10:51:42


```
n = int(input())
arr = list(map(int,input().split()))


def is_ap(arr):
    diff = arr[1] - arr[0]

    for i in range(1,len(arr)):
        if arr[i] - arr[i-1] != diff:
            return "false"
        else :
            return "true"

print(is_ap(arr))
```

## Submission at 2024-11-25 10:58:57


```
n = int(input())

for i in range (1, n+1):
    print('*' * i)
```

## Submission at 2024-11-25 11:09:34


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in range(1,len(arr)):
        if arr[i] <= arr[i-1]:
            return "NO"
        else:
            return "YES"

print(is_bst(arr))

```

## Submission at 2024-11-25 11:13:04


```
n = int(input())
arr = list(map(int,input().split()))
arr1 = sorted(arr)

def is_ap(arr1):
    diff = arr1[1] - arr1[0]

    for i in range(1,len(arr1)):
        if arr1[i] - arr1[i-1] != diff:
            return "false"
        else :
            return "true"

print(is_ap(arr1))
```

## Submission at 2024-11-25 11:18:01


```
n = int(input())
arr = list(map(int,input().split()))
arr1 = sorted(arr)

def is_ap(arr1):
    diff = arr1[1] - arr1[0]

    for i in range(1,len(arr1)):
        if arr1[i] - arr1[i-1] == diff:
            i += 1
            return "true"
        else :
            return "false"

print(is_ap(arr1))
```

## Submission at 2024-11-25 11:23:39


```
n = int(input())
arr = list(map(int,input().split()))

def is_ap(arr):
    diff = arr[1] - arr[0]

    for i in range(1,len(arr)):
        if arr[i] - arr[i-1] == diff:
            i += 1
            return "true"
        else :
            return "false"

print(is_ap(arr))

```

## Submission at 2024-11-25 11:24:53


```
n = int(input())
arr = list(map(int,input().split()))

def is_ap(arr):
    diff = arr[1] - arr[0]

    for i in arr:
        if arr[i+1] - arr[i] == diff:
            i += 1
            return "true"
        else :
            return "false"

print(is_ap(arr))

```

## Submission at 2024-11-25 11:26:20


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in arr:
        if arr[i+1] <= arr[i]:
            return "NO"
        else:
            return "YES"

print(is_bst(arr))
```

## Submission at 2024-11-25 11:26:22


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in arr:
        if arr[i+1] <= arr[i]:
            return "NO"
        else:
            return "YES"

print(is_bst(arr))
```

## Submission at 2024-11-25 11:29:07


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in arr:
        if arr[i] >= arr[i-1]:
            i += 1
            return "YES"
        else:
            return "NO"

print(is_bst(arr))
```

## Submission at 2024-11-25 11:30:42


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in range(1,len(arr)):
        if arr[i] >= arr[i-1]:
            i += 1
            return "YES"
        else:
            return "NO"

print(is_bst(arr))
```

## Submission at 2024-11-25 11:35:52


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in arr:
        if arr[i] >= arr[i-1]:
            i += 1
            return "YES"
        else:
            return "NO"

print(is_bst(arr))
```

## Submission at 2024-11-25 11:38:07


```
n = int(input())
arr = list(map(int,input().split()))

def is_bst(arr):
    for i in arr:
        if arr[i] <= arr[i-1]:
            i += 1
            return "NO"
        else:
            return "YES"

print(is_bst(arr))
```

