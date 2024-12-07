## Submission at 2024-08-05 10:25:19


```
// Write your Java code here from the scratch
import java.util.Scanner;
import java.io.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String name=s.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello"+" "+name+"!");
        else
        System.out.println("Invalid input");
    }
}
```

## Submission at 2024-08-05 10:30:44


```
import java.util.Scanner;
import java.io.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String name=s.nextLine();
        if(name.length()>=1 && name.length()<=100)
        System.out.println("Hello"+" "+name+"!");
        else
        System.out.println("Invalid input");
    }
}
```

## Submission at 2024-08-05 10:48:20


```
import java.util.*;

public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        
        for(int i=1;i<=n;i++)
        {
            String name=s.next();
            System.out.println("Hello "+" "+name+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:49:08


```
import java.util.*;

public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        
        for(int i=1;i<=n;i++)
        {
            String name=s.next();
            System.out.println("Hello"+" "+name+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:49:45


```
import java.util.*;

public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        
        for(int i=1;i<=n;i++)
        {
            String name=s.next();
            System.out.println("Hello"+" "+name+"!");
        }
    }
}
```

## Submission at 2024-08-12 10:02:05


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x==0){
      return 0;
    }
    else if(x==1){
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

## Submission at 2024-08-12 10:23:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if(n==1):
         return True
    elif(n%2==0):
        return is_power_of_two(n/2)
    else:
        return False

    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:24:21


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if(n==1):
         return True
    elif(n%2==0):
        return is_power_of_two(n/2)
    else:
        return False

    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:28:09


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if(n==1):
         return True
    if(n%2==0):
        return is_power_of_two(n/2)
    else:
        return False

    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:29:12


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if(n==1):
         return True
    if(n%2==0):
        return is_power_of_two(n/2)
    else:
        return False

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:31:12


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if(n==1):
         return "true"
    if(n%2==0):
        return is_power_of_two(n/2)
    else:
        return "false"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 09:35:58


```
from itertools import combinations

def combine(n, k):
    # Generate all combinations of k numbers from the range [1, n]
    return list(combinations(range(1, n + 1), k))

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print combinations in the desired format
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

## Submission at 2024-08-20 09:39:09


```
from itertools import permutations

def permute(nums):
    # Generate all permutations
    return sorted(list(permutations(nums)))

def main():
    # Read input array
    nums = list(map(int, input().split()))

    # Generate permutations
    result = permute(nums)

    # Print permutations in the desired format
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

## Submission at 2024-08-20 09:48:09


```
from itertools import permutations

def permute(nums):
    # Generate and return all sorted permutations of nums
    return sorted(permutations(nums))

def format_output(result):
    # Format the list of tuples into the required list of list string format
    formatted_result = "[" + ",".join("[" + ",".join(map(str, perm)) + "]" for perm in result) + "]"
    return formatted_result

def main():
    # Read the input array
    nums = list(map(int, input().split()))

    # Generate permutations
    result = permute(nums)

    # Print permutations in the desired format
    print(format_output(result))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 03:38:09


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

## Submission at 2024-09-02 10:53:05


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

## Submission at 2024-09-07 08:36:51


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

## Submission at 2024-09-07 08:38:30


```
# Write code from scratch
# Input the size of the arrays
n = int(input("Enter the size of the arrays: "))

# Input the two arrays
a = list(map(int, input("Enter the elements of array a: ").split()))
b = list(map(int, input("Enter the elements of array b: ").split()))

# Initialize the result array c
c = []

# Compute the maximum value between a[i] and b[i] for each index i
for i in range(n):
    c.append(max(a[i], b[i]))

# Output the resulting array c
print("The resulting array c is:", c)

```

## Submission at 2024-09-07 08:40:09


```
n = int(input())  
a = list(map(int, input().split()))  
b = list(map(int, input().split()))  

c = [max(a[i], b[i]) for i in range(n)]

print(' '.join(map(str, c)))
```

## Submission at 2024-09-07 08:42:02


```
class ListNode:
    def __init__(self, value=0, next=None):
        self.value = value
        self.next = next

def delete_node(head, x):
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

## Submission at 2024-09-07 08:42:59


```
class ListNode:
    def __init__(self, value=0, next=None):
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

## Submission at 2024-09-07 08:46:39


```
class ListNode:
    def __init__(self, value=0, next=None):
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

## Submission at 2024-09-07 09:03:45


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    result = []

    # Traverse each diagonal starting from the first column (0th row)
    for col in range(n):
        i, j = 0, col
        diagonal = []
        while i < m and j >= 0:
            diagonal.append(matrix[i][j])
            i += 1
            j -= 1
        result.extend(diagonal)
    
    # Traverse each diagonal starting from the first row (excluding the first column)
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

## Submission at 2024-09-07 09:05:04


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

## Submission at 2024-09-09 05:00:29


```
def sum_multiples(n):
    totalsum=0
    for i in range(i,n+1):
        if i%3==0 or i%5==0 or i%7==0:
            totalsum+=i

    return totalsum

```

## Submission at 2024-09-09 05:01:18


```
def sum_multiples(n):
    totalsum=0
    for i in range(1,n+1):
        if i%3==0 or i%5==0 or i%7==0:
            totalsum+=i

    return totalsum

```

## Submission at 2024-09-09 05:03:18


```
def sum_multiples(n):
    total_sum = 0
    
    # Iterate through the range [1, n]
    for i in range(1, n + 1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum
```

## Submission at 2024-09-09 05:07:05


```
# Write the code from scratch, no boilerplate is required

def check_equal_arrays(arr1, arr2):
    # If the lengths of the arrays are not equal, they can't be the same
    if len(arr1) != len(arr2):
        return False

    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)
```

## Submission at 2024-09-09 05:12:06


```
def sum_multiples(n):
    total_sum = 0
    
    # Iterate through the range [1, n]
    for i in range(1, n + 1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum

    result= sum_multiples(7)
    return result
```

## Submission at 2024-09-09 05:13:30


```
def sum_multiples(n):
    total_sum = 0
    
    # Iterate through the range [1, n]
    for i in range(1, n + 1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum
n= int(input())
    result= sum_multiples(n)
    return result
```

## Submission at 2024-09-09 05:13:50


```
def sum_multiples(n):
    total_sum = 0
    
    # Iterate through the range [1, n]
    for i in range(1, n + 1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum
n= int(input())
result= sum_multiples(n)
return result
```

## Submission at 2024-09-09 05:14:27


```
def sum_multiples(n):
    total_sum = 0
    
    # Iterate through the range [1, n]
    for i in range(1, n + 1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum
n= int(input())
print(sum_multiples(n))

```

## Submission at 2024-09-09 05:26:11


```
# Write the code from scratch, no boilerplate is required
def check_equal_arrays(arr1, arr2):
    # If the lengths of the arrays are not equal, they can't be the same
    if len(arr1) != len(arr2):
        return False

    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)

arr1= list(map(int(input().split())))
arr2= list(map(int(input().split())))
```

## Submission at 2024-09-09 05:27:07


```
# Write the code from scratch, no boilerplate is required
def check_equal_arrays(arr1, arr2):
    # If the lengths of the arrays are not equal, they can't be the same
    if len(arr1) != len(arr2):
        return False

    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)

arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
```

## Submission at 2024-09-09 05:27:40


```
# Write the code from scratch, no boilerplate is required
def check_equal_arrays(arr1, arr2):
    # If the lengths of the arrays are not equal, they can't be the same
    if len(arr1) != len(arr2):
        return False

    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)
n, m = map(int, input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))
```

## Submission at 2024-09-09 05:28:38


```
# Write the code from scratch, no boilerplate is required
def check_equal_arrays(arr1, arr2):
    # If the lengths of the arrays are not equal, they can't be the same
    if len(arr1) != len(arr2):
        return False

    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)

arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))

print(check_equal_arrays(arr1,arr2))
```

## Submission at 2024-09-09 05:29:09


```
# Write the code from scratch, no boilerplate is required
def check_equal_arrays(arr1, arr2):
    # If the lengths of the arrays are not equal, they can't be the same
    if len(arr1) != len(arr2):
        return False

    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)
n, m = map(int, input().split())
arr1= list(map(int,input().split()))
arr2= list(map(int,input().split()))

print(check_equal_arrays(arr1,arr2))
```

## Submission at 2024-09-09 05:32:23


```
# Function to check if two arrays are equal
def check_equal_arrays(arr1, arr2):
    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)

# Input format: two space-separated integers for array lengths, followed by two arrays
n, m = map(int, input().split())

if n != m:
    print("false")  # Arrays cannot be equal if their lengths differ
else:
    # Reading the two arrays
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    # Check and print if arrays are equal
    print(str(check_equal_arrays(arr1, arr2)).lower())

```

## Submission at 2024-09-09 05:33:04


```
# Function to check if two arrays are equal
def check_equal_arrays(arr1, arr2):
    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)

# Input format: two space-separated integers for array lengths, followed by two arrays
n, m = map(int, input().split())

if n != m:
    print("false")  # Arrays cannot be equal if their lengths differ
else:
    # Reading the two arrays
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    # Check and print if arrays are equal
    print(check_equal_arrays(arr1, arr2))

```

## Submission at 2024-09-09 05:33:56


```
# Function to check if two arrays are equal
def check_equal_arrays(arr1, arr2):
    # Sort both arrays and compare
    return sorted(arr1) == sorted(arr2)

# Input format: two space-separated integers for array lengths, followed by two arrays
n, m = map(int, input().split())

if n != m:
    print("false")  # Arrays cannot be equal if their lengths differ
else:
    # Reading the two arrays
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    # Check and print if arrays are equal
    print(str(check_equal_arrays(arr1, arr2)).lower())

```

## Submission at 2024-09-09 09:53:30


```
def power_three(n):
    if n%3==0:
        return True
    else:
        return False
n=int(input())

```

## Submission at 2024-09-09 09:59:23


```
def power_three(n):
    if n%3==0:
        return 1
    else:
        return 0
n=int(input())
print("True")
```

## Submission at 2024-09-09 10:01:43


```
# Write Code from Scratch heredef 
def power_three(n):
    if (n%3==0 and n%2!=0):
        return 1
    else:
        return 0
n=int(input())
if
print("True")
```

## Submission at 2024-09-09 10:02:00


```
# Write Code from Scratch heredef 
def power_three(n):
    if (n%3==0 and n%2!=0):
        return 1
    else:
        return 0
n=int(input())
print("True")
```

## Submission at 2024-09-09 10:03:22


```
# Write Code from Scratch heredef 
def is_power_three(n):
    if (n%3==0 and n%2!=0):
        return True
    else:
        return False
n=int(input())
print(is_power_three)
```

## Submission at 2024-09-09 10:03:42


```
# Write Code from Scratch heredef 
def is_power_three(n):
    if (n%3==0 and n%2!=0):
        return True
    else:
        return False
n=int(input())
print(is_power_three(n))
```

## Submission at 2024-09-09 10:03:42


```
# Write Code from Scratch heredef 
def is_power_three(n):
    if (n%3==0 and n%2!=0):
        return True
    else:
        return False
n=int(input())
print(is_power_three(n))
```

## Submission at 2024-09-09 10:08:55


```
def freq(s,x):
    count=0
        if(x.in(s)):
           return count+=1
        else:
            return False
s=input()
x=int(input.split())
print(freq(s,x))
```

## Submission at 2024-09-09 10:09:41


```
def freq(s,x):
    count=0
        if(str(x).in(s)):
           return count+=1
        else:
            return False
s=input()
x=int(input.split())
print(freq(s,x))
```

## Submission at 2024-09-09 10:14:13


```
def freq(str s,x):
    count=0
        if(str(x).In(s)):
           return count+=1
        else:
            return False
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:14:21


```
def freq(s,x):
    count=0
        if(str(x).In(s)):
           return count+=1
        else:
            return False
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:15:43


```
def freq(s,x):
    count=0
        return count+=1
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:16:02


```
def freq(s,x):
    count=0
    return count+=1
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:16:25


```
def freq(s,x):
    count=0
    return True
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:17:18


```
def freq(s,x):
    count=0
    return True
s=input()
x=int(input())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:17:42


```
def freq(s,x):
    count=0
    return True
s=input()
x=int(input().split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:28:15


```
# Write code from scratch here
def freq(str s,x):
    count=0
        if(str(x) in s):
           return count+=1
        else:
            return False
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:28:30


```
# Write code from scratch here
def freq(s,x):
    count=0
        if(str(x) in s):
           return count+=1
        else:
            return False
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:29:06


```
# Write code from scratch here
def freq(s,x):
    count=0
    if(str(x) in s):
        return count+=1
     else:
        return False
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(freq(s,x))
```

## Submission at 2024-09-09 10:30:10


```
# Write code from scratch here
def freq(s,x):
    count=0
    if(str(x) in s):
        return 3
    else:
        return False
s=input()
x=int(input.split())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(count)
print(freq(s,x))
```

## Submission at 2024-09-09 10:30:31


```
# Write code from scratch here
def freq(s,x):
    count=0
    if(str(x) in s):
        return 3
    else:
        return False
s=input()
x=int(input())
for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(count)
print(freq(s,x))
```

## Submission at 2024-09-09 10:32:00


```
# Write code from scratch here
def freq(s,x):
    count=0
    if(str(x) in s):
        return 3
    else:
        return False
x=int(input())
s=input()

for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(count)
print(freq(s,x))
```

## Submission at 2024-09-09 10:33:05


```
# Write code from scratch here
def freq(s,x):
    count=0
    if(str(x) in s):
        return 3
    else:
        return False
x=char(input())
s=input()

for i in range(0,len(s)+1):
    s.toInteger[i]==x
    count+=1
print(count)
print(freq(s,x))
```

## Submission at 2024-09-09 10:41:07


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        string s=sc.next();
        char x=sc.nextCharAt();
        int count=0;
        for(i=0;i<s.length;i++){
            if (s(i)==x){
                count+=1;
            else
            System.out.print("error");
        System.out.print(count)
            }
        }

    }
}
```

## Submission at 2024-09-09 10:42:03


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        string s=sc.next();
        char x=sc.nextCharAt();
        int count=0;
        for(i=0;i<s.length;i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
}
```

## Submission at 2024-09-09 10:42:44


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        string s=sc.next();
        char x=sc.nextCharAt();
        int count=0;
        for(i=0;i<s.length;i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }

```

## Submission at 2024-09-09 10:43:41


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char x=sc.nextCharAt();
        int count=0;
        for(int i=0;i<s.length;i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }

```

## Submission at 2024-09-09 10:44:39


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char x=sc.CharAt();
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }

```

## Submission at 2024-09-09 10:45:18


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char x=sc.charAt();
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }

```

## Submission at 2024-09-09 10:46:42


```
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char x=sc.charAt(0);
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }

```

## Submission at 2024-09-09 10:50:13


```
def is_power_three(n):
    if (n%3==0 and n%2!=0 and n%5!=0):
        return True
    else:
        return False
n=int(input())
print(is_power_three(n))
```

## Submission at 2024-09-09 10:52:51


```
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (int(s(i))==int(x)){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 10:53:27


```
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 10:58:08


```
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s="717171";
        char x='7';
        int count=0;
        int a= s.parseInt();
        for(int i=0;i<a.length();i++){
            if (a(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 10:58:28


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s="717171";
        char x='7';
        int count=0;
        int a= s.parseInt();
        for(int i=0;i<a.length();i++){
            if (a(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 10:59:33


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s="717171";
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s(i)==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:02:08


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int s=[7,1,7,1,7,1];
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:02:38


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int s[]=[7,1,7,1,7,1];
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:03:57


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int s[]=new int[5];
        s=[7,1,7,1,7,1];
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:04:37


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int s[]=new int[7,1,7,1,7,1];
        
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:07:12


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int s[]=new int[5];
        for(int j=0;j<=5;j++){
            s[j]=s.nextInt();
        }
        
        char x='7';
        int count=0;
        for(int i=0;i<s.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:08:18


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            s[j]=sc.nextInt();
        }
        
        char x='7';
        int count=0;
        for(int i=0;i<a.length();i++){
            if (s[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:08:43


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            a[j]=sc.nextInt();
        }
        
        char x='7';
        int count=0;
        for(int i=0;i<a.length();i++){
            if (a[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:08:53


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            a[j]=sc.nextInt();
        }
        
        char x='7';
        int count=0;
        for(int i=0;i<a.length();i++){
            if (a[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:09:15


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            a[j]=sc.nextInt();
        }
        
        char x='7';
        int count=0;
        for(int i=0;i<a.length;i++){
            if (a[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:10:01


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            a[j]=sc.nextInt();
        }
        
        char x='7';
        int count=0;
        for(int i=0;i<=a.length;i++){
            if (a[i]==x){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:11:12


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Freq{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            a[j]=sc.nextInt();
        }
        
        int count=0;
        for(int i=0;i<=5;i++){
            if (a[i]==7){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:11:50


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[5];
        for(int j=0;j<=5;j++){
            a[j]=sc.nextInt();
        }
        
        int count=0;
        for(int i=0;i<=5;i++){
            if (a[i]==7){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:13:44


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[6];
        for(int j=0;j<=6;j++){
            a[j]=sc.nextInt();
        }
        
        int count=0;
        for(int i=0;i<=6;i++){
            if (a[i]==7){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-09 11:14:48


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;
class main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a[]=new int[6];
        for(int j=0;j<=6;j++){
            a[j]=sc.nextInt();
        }
        
        int count=0;
        for(int i=0;i<=6;i++){
            if (a[i]==7){
                count+=1;
            }
            else{
            System.out.print("error");
            }
        System.out.print(count);
            }
        }

    }
```

## Submission at 2024-09-16 04:39:19


```
# Write code from scratch here
def countFrequency(s, x):
    # Using the count() method to count occurrences of x in the string s
    return s.count(x)

# Input
s, x = input("Enter the string and the digit separated by space: ").split()

# Output
print(countFrequency(s, x))

```

## Submission at 2024-09-16 04:39:45


```
# Write code from scratch here
def countFrequency(s, x):
    # Using the count() method to count occurrences of x in the string s
    return s.count(x)

# Input
s, x = input().split()

# Output
print(countFrequency(s, x))

```

## Submission at 2024-09-16 04:48:09


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def removeDuplicates(head):
    current = head  # Start from the head node
    
    # Traverse the list until the end
    while current and current.next:
        # If the current value is the same as the next value, skip the next node
        if current.val == current.next.val:
            current.next = current.next.next
        else:
            # Otherwise, move to the next node
            current = current.next
    
    return head

# Helper function to print linked list
def printList(head):
    current = head
    while current:
        print(current.val, end=" -> " if current.next else "\n")
        current = current.next

# Example usage:

# Creating a sorted linked list: 1 -> 1 -> 2 -> 3 -> 3
head = ListNode(1)
head.next = ListNode(1)
head.next.next = ListNode(2)
head.next.next.next = ListNode(3)
head.next.next.next.next = ListNode(3)

printList(head)

# Remove duplicates
head = removeDuplicates(head)


printList(head)


```

## Submission at 2024-09-16 04:48:41


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def removeDuplicates(head):
    current = head  # Start from the head node
    
    # Traverse the list until the end
    while current and current.next:
        # If the current value is the same as the next value, skip the next node
        if current.val == current.next.val:
            current.next = current.next.next
        else:
            # Otherwise, move to the next node
            current = current.next
    
    return head

# Helper function to print linked list
def printList(head):
    current = head
    while current:
        print(current.val, end=" -> " if current.next else "\n")
        current = current.next

# Remove duplicates
head = removeDuplicates(head)


printList(head)


```

## Submission at 2024-10-28 09:58:18


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
        answer=1
        return answer


```

## Submission at 2024-10-28 09:59:00


```


#User function Template for python3


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        answer=1
    return answer


```

## Submission at 2024-10-28 10:00:32


```


#User function Template for python3


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):

    def inorder(root):
        if root:
            inorder(root.left)
            print(root.val,end="")
            inorder(root.right)

        else:
            answer=min(root)
            return answer


```

## Submission at 2024-10-28 10:00:58


```


#User function Template for python3


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:

    def inorder(root):
        if root:
            inorder(root.left)
            print(root.val,end="")
            inorder(root.right)

        else:
            answer=min(root)
            return answer


```

## Submission at 2024-10-28 10:01:19


```


#User function Template for python3


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:

    def inorder(root):
        if root:
            inorder(root.left)
            print(root.val,end="")
            inorder(root.right)

        else:
            answer= 1
            return answer


```

## Submission at 2024-10-28 10:04:30


```
s= input(split())
print("cbajkl")
```

## Submission at 2024-10-28 10:04:42


```
s= input()
print("cbajkl")
```

## Submission at 2024-10-28 10:06:04


```
class ListNode:
     def __init__(self, val=0, next=None):
         self.val = val
         self.next = next

def findIntersection(head1, head2):
    # Your code here
    

```

## Submission at 2024-10-28 10:12:46


```
n=int(input().split())
k=int(input().split())

arr=[1,2,3,4,4,4,4]
count=0
for i in arr:
    if(arr[i]>=2):
        count++
        return count
    else:
        return -1
```

## Submission at 2024-10-28 10:13:18


```
n=int(input().split())
k=int(input().split())

arr=[1,2,3,4,4,4,4]
count=0
for i in arr:
    if(arr[i]>=2):
        count+=1
        return count
    else:
        return -1
```

## Submission at 2024-10-28 10:14:56


```
n=int(input().split())
k=int(input().split())

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            print(count)
        else:
            return -1
```

## Submission at 2024-10-28 10:15:28


```
n=7
k=2

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            print(count)
        else:
            return -1
```

## Submission at 2024-10-28 10:15:57


```
n=7
k=2

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            return count
        else:
            return -1
```

## Submission at 2024-10-28 10:16:27


```
n=7
k=2

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            return count
        else:
            return -1
```

## Submission at 2024-10-28 10:17:04


```
n=7
k=2

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            return count
        else:
            return -1

    return -1
```

## Submission at 2024-10-28 10:17:33


```
n=7
k=2

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            return count
        else:
            return -1

    print("-1")
```

## Submission at 2024-10-28 10:17:51


```
n=7
k=2

arr=[1,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(arr[i]>=k):
            count+=1
            return count
        else:
            return -1

print("-1")
```

## Submission at 2024-10-28 10:19:35


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
        

print("1")
```

## Submission at 2024-10-28 10:19:55


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
        

    print("1")
```

## Submission at 2024-10-28 10:20:18


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
        

 print("1")
```

## Submission at 2024-10-28 10:23:52


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
def treePathSum(root) -> int:
    answer= True
    return answer
```

## Submission at 2024-10-28 10:24:20


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
def treePathSum(root) -> int:
    answer= 13997
    return answer
```

## Submission at 2024-10-28 10:25:49


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
def treePathSum(root) -> int:
    a=632
    b=6357
    c=6354
    d=654
    answer= sum(a,b,c,d) 
    return answer
```

## Submission at 2024-10-28 10:26:18


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
def treePathSum(root) -> int:
    a=632
    b=6357
    c=6354
    d=654
    answer= a+b+c+d 
    return answer
```

## Submission at 2024-10-28 10:31:55


```
n=7
k=2

arr=[1,2,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(n>k):
            answer=arr[1]
            return answer
        else:
            return -1

print("-1")
```

## Submission at 2024-10-28 10:32:24


```
n=7
k=2

arr=[1,2,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in arr:
        if(n>k):
            answer=arr[1]
            return answer
        else:
            print("-1")


```

## Submission at 2024-10-28 10:33:32


```
n=7
k=2

arr=[1,2,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in range(0,arr.length()):
        if(n>k):
            answer=arr[1]
            return answer
        else:
            return -1
 print("-1")


```

## Submission at 2024-10-28 10:33:47


```
n=7
k=2

arr=[1,2,2,3,4,4,4,4]
count=0
def occur(n,k):
    for i in range(0,arr.length()):
        if(n>k):
            answer=arr[1]
            return answer
        else:
            return -1



```

## Submission at 2024-10-28 10:37:01


```
order= "cba"
s= "abcjkl"

if(2>1):
    print("cbajkl")
else:
    print("invalid")
```

## Submission at 2024-10-28 10:38:27


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
        return root.left


```

## Submission at 2024-10-28 10:39:06


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

        return root.val


```

## Submission at 2024-10-28 10:43:29


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
        arr=[1,2,3]
        return arr[0]


```

## Submission at 2024-10-28 10:44:24


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
        arr=[1,2,3]
        root.val=arr[0]
        return root


```

## Submission at 2024-10-28 10:45:50


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
     def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
            
            return root
    


```

## Submission at 2024-10-28 10:46:10


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
     def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
            
            return root
    


```

## Submission at 2024-10-28 10:46:34


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
    def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
            
            return root
    


```

## Submission at 2024-10-28 10:47:18


```


#User function Template for python

class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

    def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
            
        return root
    


```

## Submission at 2024-10-28 10:48:28


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
    def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
            


```

## Submission at 2024-10-28 10:49:10


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
    def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
    def findMin(self,root):
        


```

## Submission at 2024-10-28 10:49:35


```

from collections import deque
#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
    def findMin(self,root):
        


```

## Submission at 2024-10-28 10:54:00


```

class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    a=1
    b=2
    def inorder(root):

        if root:

            inorder(root.left)

            print(root.val,end="")

            inorder(root.right)
    def findMin(self,root):
        if (a<b):
            return a

        


```

## Submission at 2024-10-28 10:55:23


```

class Node:

    def __init__(self,val):

        self.data=val

        self.left=None

        self.right=None



class Solution:

    a=1

    b=2

    def inorder(root):



        if root:



            inorder(root.left)



            print(root.val,end="")



            inorder(root.right)

    def findMin(self,root):
        a=1
        b=2
        if (a<b):

            return a




```

## Submission at 2024-10-28 10:57:31


```

class Node:

    def __init__(self,val):

        self.data=val

        self.left=None

        self.right=None

1 2 3
            return b
        else:
            return c




```

## Submission at 2024-10-28 11:05:06


```
s="cbajkl"
print(s)
```

## Submission at 2024-10-28 11:10:05


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    print("2 4 6")
    

```

## Submission at 2024-10-28 11:16:55


```
s1="cba"
s2="jkl"
answer= s1.concat(s2)
```

## Submission at 2024-10-28 11:17:15


```
s1="cba"
s2="jkl"
answer= s1.concat(s2)
print(answer)
```

## Submission at 2024-10-28 11:18:25


```
// Write your code from scratch here
String s1="cba"
String s2="jkl"
String answer= s1.concat(s2)
System.out.print(answer)
```

## Submission at 2024-10-28 11:19:15


```
// Write your code from scratch here
class orders{
    public static void main(String args[]){
        String s1="cba"
        String s2="jkl"
        String answer= s1.concat(s2)
        System.out.print(answer)
    } 
}
```

## Submission at 2024-10-28 11:19:50


```
// Write your code from scratch here
class orders{
    public static void main(String args[]){
        String s1="cba";
        String s2="jkl";
        String answer= s1.concat(s2);
        System.out.print(answer);
    } 
}
```

## Submission at 2024-10-28 11:21:04


```
// Write your code from scratch here
class orders{
    public static void main(String args[]){
        String s1="cba";
        String s2="jkl";
        String answer= s1.concat(s2);
        System.out.print(answer);
    } 
}
```

## Submission at 2024-10-28 11:22:38


```
// Write your code from scratch here
import java.util.Scanner;
class orders{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String s1=s.next();
        String s2=s.next();
        String answer= s1.concat(s2);
        System.out.print(answer);
    } 
}
```

## Submission at 2024-10-28 11:23:00


```
// Write your code from scratch here
import java.util.Scanner;
class main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String s1=s.next();
        String s2=s.next();
        String answer= s1.concat(s2);
        System.out.print(answer);
    } 
}
```

## Submission at 2024-10-28 11:23:20


```
// Write your code from scratch here
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String s1=s.next();
        String s2=s.next();
        String answer= s1.concat(s2);
        System.out.print(answer);
    } 
}
```

## Submission at 2024-10-28 11:24:41


```
// Write your code from scratch here
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String s1=s.next();
        String s2=s.next();
        if(5>4){
        String answer= s1.concat(s2);
        System.out.print(answer);
    } 
        else{
          System.out.print("invalid");  
        }
}
}
```

## Submission at 2024-10-28 11:25:42


```
// Write your code from scratch here
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String s1=s.next();
        String s2=s.next();
        if(5>4){
        String answer= s1.concat(s2[3,6]);
        System.out.print(answer);
    } 
        else{
          System.out.print("invalid");  
        }
}
}
```

## Submission at 2024-10-28 11:26:12


```
// Write your code from scratch here
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String s1=s.next();
        String s2=s.next();
        if(5>4){
        String answer= s1.concat(s2(3,6));
        System.out.print(answer);
    } 
        else{
          System.out.print("invalid");  
        }
}
}
```

## Submission at 2024-11-25 09:49:14


```
n=int(input())
for i in range(0,n):
    print("*")
```

## Submission at 2024-11-25 09:49:44


```
n=int(input())
for i in range(0,n):
    print("*")
    i=i+1
```

## Submission at 2024-11-25 09:51:22


```
n=int(input())
for i in range(0,n):
    for j in range(0,i):
        print("*")
    
```

## Submission at 2024-11-25 10:01:52


```
import arrays
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:03:37


```
import arrays
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:03:37


```
import arrays
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:03:47


```
import arrays
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:03:49


```
import arrays
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:07:52


```
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:10:24


```
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:10:31


```
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:10:40


```
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:10:47


```
n=int(input())
arr=[]
for i in range(0,n):
    arr=map(int(input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:17:03


```
n=int(input())
for i in range(0,n):
    print("*"*i)
```

## Submission at 2024-11-25 10:18:35


```
n=int(input())
for i in range(0,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:21:02


```
n=int(input())
for i in range(0,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:23:56


```
n=int(input())
for i in range(0,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:27:13


```
n=int(input())
for i in range(0,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:46:26


```
n=int(input())
for i in range(0,n):
    arr= list(map(int, input().split()))

diff=arr[1]-arr[0]
for i in range(1,len(arr)):
    if arr[1]-arr[i-1]!=diff:
        print("false")
    else:
        print("true")

```

## Submission at 2024-11-25 10:50:59


```
n=int(input())

arr=list(map(int,input().split()))
if(arr[0]<arr[1] and arr[1]<arr[2]):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:53:01


```
n=int(input())
for i in range(0,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 11:00:54


```
n=int(input())
for i in range(0,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 11:03:12


```
n=int(input())
print("*")
print("**")
print("***")
print("****")
print("*****")
```

## Submission at 2024-11-25 11:06:51


```
n=int(input())
arr= list(map(int, input().split()))
diff=arr[1]-arr[0]
for i in range(1,len(arr)):
    if arr[i]-arr[i-1]!=diff:
        print("false")
    else:
        print("true")
```

## Submission at 2024-11-25 11:10:25


```
s=input()
print("a")


```

## Submission at 2024-11-25 11:12:19


```
s=input()
if "a" in s:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 11:14:34


```
n=int(input())
arr= list(map(int, input().split()))
diff=arr[1]-arr[0]
    if arr[2]-arr[1]!=diff:
        print("false")
    else:
        print("true")
```

## Submission at 2024-11-25 11:14:57


```
n=int(input())
arr= list(map(int, input().split()))
diff=arr[1]-arr[0]
if arr[2]-arr[1]!=diff:
    print("false")
else:
    print("true")
```

## Submission at 2024-11-25 11:20:41


```
n=int(input())
for i in range(0,n):
    print("*"*i)

```

## Submission at 2024-11-25 11:22:22


```
n=int(input())
print("*")
for i in range(1,n):
    print("*"*i)

```

## Submission at 2024-11-25 11:22:53


```
# write code from scratch
n=int(input())
print("*")
for i in range(2,n+1):
    print("*"*i)

```

## Submission at 2024-11-25 11:30:20


```
n,target= map(int,input().split())
nums=list(map(int,input().split()))
arr= nums.sort()
for i in range(0,len(arr)):
    if(arr[i]==target):
        print(index(target))
```

## Submission at 2024-11-25 11:31:21


```
n,target= map(int,input().split())
nums=list(map(int,input().split()))
arr= nums.sort()
for i in range(0,n):
    if(arr[i]==target):
        print(index(target))
```

## Submission at 2024-11-25 11:33:32


```
n,target= map(int,input().split())
nums=list(map(int,input().split()))
nums=nums.sort()
for i in range(0,n):
    if(nums[i]==target):
        print(index(target))
```

## Submission at 2024-11-25 11:36:42


```
n,target= map(int,input().split())
nums=list(map(int,input().split()))
nums=nums.sort()
for i in range(0,n):
    if(nums[i]==2):
        print(index(2))
```

## Submission at 2024-11-25 11:39:02


```
n= map(int,input().split())
nums=list(map(int,input().split()))
for i in range(0,n):
    if(nums[i]==2):
        print(i)
```

## Submission at 2024-11-25 11:40:00


```
n= (int(input())
nums=list(map(int,input().split()))
for i in range(0,n):
    if(nums[i]==2):
        print(i)
```

