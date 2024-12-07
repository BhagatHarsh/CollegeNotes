## Submission at 2024-08-05 10:15:47


```
name = input("Enter your name:")
print("hello" + name + "!")
```

## Submission at 2024-08-05 10:18:04


```
name = input("Enter your name:")
print("hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:18:12


```
name = input("Enter your name:")
print("hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:19:10


```
name = input("Enter your name:")
print("Hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:25:24


```
name = input("Enter your name:")
print("Hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:26:46


```
name = input("Enter your name: + " " ")
print("Hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:28:37


```
name = input("Enter your name: ")
print("Hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:28:39


```
name = input("Enter your name: ")
print("Hello" + " " + name + "!")
```

## Submission at 2024-08-05 10:37:39


```
name = input("Enter your name: ")
if 1<=len(name)<=100:
    print("Hello" + " " + name + "!")
else:
    print("Error: Name too long")

```

## Submission at 2024-08-05 10:39:00


```
name = input()
if 1<=len(name)<=100:
    print("Hello" + " " + name + "!")
else:
    print("Error: Name too long")

```

## Submission at 2024-08-05 10:39:29


```
name = input()
if 1<=len(name)<=100:
    print("Hello" + " " + name + "!")
else:
    print("Error: Name too long")

```

## Submission at 2024-08-05 10:39:50


```
name = input()
if 1<=len(name)<=100:
    print("Hello" + " " + name + "!")
else:
    print("Error: Name too long")

```

## Submission at 2024-08-05 10:52:08


```
name = int(input())
for i in range(n):
    name = input()
    print(f"Hello {name}!")
```

## Submission at 2024-08-05 10:57:28


```
name = int(input())
for i in range(n):
    name = input()
    print("Hello", name, "!")
```

## Submission at 2024-08-16 08:23:35


```
def combinations(n, k):
    if k=0:
        return [[]]
    elif k=n:
        return [[i for i in range(1, n+1)]]
    else:
        result=[]
        for i in range(k, n+1):
            for combination in combinations(i-1, k-1):
                result.append(combination + [i])
        return result

if _name_ = "_main_":
    n, k = map(int, input().split())
    if 1 <= n <= 20 and 1 <= k <= n:
        print(combinations(n, k))
    else:
        print(" ")
```

## Submission at 2024-08-16 08:27:42


```
def combinations(n, k):
    if k == 0:
        return [[]]
    elif k == n:
        return [[i for i in range(1, n+1)]]
    else:
        result=[]
        for i in range(k, n+1):
            for combination in combinations(i-1, k-1):
                result.append(combination + [i])
        return result

if __name__ == "__main__":
    n, k = map(int, input().split())
    if 1 <= n <= 20 and 1 <= k <= n:
        print(combinations(n, k))
    else:
        print(" ")
```

## Submission at 2024-08-16 08:28:54


```
def combinations(n, k):
    if k == 0:
        return [[]]
    elif k == n:
        return [[i for i in range(1, n+1)]]
    else:
        result=[]
        for i in range(k, n+1):
            for combination in combinations(i-1, k-1):
                result.append(combination + [i])
        return result

if __name__ == "__main__":
    n, k = map(int, input().split())
    if 1 <= n <= 20 and 1 <= k <= n:
        print(combinations(n, k))
    else:
        print(" ")
```

## Submission at 2024-08-16 08:36:23


```

import java.util.*;
public class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());

        // Calculate and print the Fibonacci number for the input x
        System.out.println(fibonacci(x));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
    }
}
```

## Submission at 2024-08-20 04:08:29


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = [1, 2, 3]
print(permute(nums))
```

## Submission at 2024-08-20 04:14:51


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input("Enter the array of integers (separated by space): ").split()))
print("All permutations:")
print(permute(nums))

    

```

## Submission at 2024-08-20 04:19:20


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

print(" ")
nums = list(map(int, input().split()))
print("All permutations:")
print(permute(nums))
    

```

## Submission at 2024-08-20 04:20:10


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))
print(permute(nums))
    

```

## Submission at 2024-08-20 04:22:31


```
def permute(nums):
    if len(nums) >= 1 and len(nums) <=6:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))
print(permute(nums))
    

```

## Submission at 2024-08-20 04:26:19


```
def permute(nums):
    if len(nums) >= 1 and len(nums) <=6:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))
print(permute(nums))
    

```

## Submission at 2024-08-20 04:26:40


```
def permute(nums):
    if len(nums) >= 1 and len(nums) <=6:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))
if all(-10 <= num <= 10 for num in nums):
    print(permute(nums))
    

```

## Submission at 2024-08-20 04:29:46


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if len(nums) >= 1 or len(nums) <= 6:
    print(permute(nums))
else:
    print(" ")
    

```

## Submission at 2024-08-20 04:36:49


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))
else:
    print(" ")
    

```

## Submission at 2024-08-20 04:37:21


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))


```

## Submission at 2024-08-20 04:37:51


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))
else:
    print(" ")
    


```

## Submission at 2024-08-20 04:42:04


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))
        else:
             print(" ")
   else:
       print(" ")
else:
   print(" ")
    


```

## Submission at 2024-08-20 04:44:18


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            print(permute(nums))
    else:
        exit()
else:
    exit()


```

## Submission at 2024-08-20 04:44:53


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list((int, input().split()))

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            print(permute(nums))
    else:
        exit()
else:
    exit()


```

## Submission at 2024-08-20 04:45:18


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(int, input().split())

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            print(permute(nums))
    else:
        exit()
else:
    exit()


```

## Submission at 2024-08-20 04:45:46


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            print(permute(nums))
    else:
        exit()
else:
    exit()


```

## Submission at 2024-08-20 04:46:25


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            print(permute(nums))
    else:
        exit()
else:
    exit()


```

## Submission at 2024-08-20 04:47:52


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

print(" ")
nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            for p in permute(nums):
                print(p)
    else:
        exit()
else:
    exit()

```

## Submission at 2024-08-20 04:48:22


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
    if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
            for p in permute(nums):
                print(p)
    else:
        exit()
else:
    exit()

```

## Submission at 2024-08-20 04:53:32


```
def permute(nums):
  result = []
  def backtrack(index, current):
    if index == len(nums):
      result.append(current.copy())
      return
    for i in range(len(nums)):
      if nums[i] not in current:
        current.append(nums[i])
        backtrack(index + 1, current)
        current.pop()
  backtrack(0, [])
  return result

nums = [1,2,3]
print(permute(nums))
```

## Submission at 2024-08-20 05:06:39


```
def generate_parentheses(n):
    if not isinstance(n, int) or n < 1 or n > 8:
        return []
    result = []
    def backtrack(open, close, current):
        if open == n and close == n:
            result.append(current)
            return
        if open < n:
            backtrack(open + 1, close, current + "(")
        if close < open:
            backtrack(open, close + 1, current + ")")

    backtrack(0, 0, "")
    return result

# Test the function
n = 3
print(generate_parentheses(n))
```

## Submission at 2024-08-20 05:08:55


```
def generate_parentheses(n):
    result = []
    def backtrack(open, close, current):
        if open == n and close == n:
            result.append(current)
            return
        if open < n:
            backtrack(open + 1, close, current + "(")
        if close < open:
            backtrack(open, close + 1, current + ")")

    backtrack(0, 0, "")
    return result

n = int(input(" "))

if 1 <= n <= 8:
    print(generate_parentheses(n))
```

## Submission at 2024-08-20 05:11:09


```
def generate_parentheses(n):
    if n == 0:
        return [""]
    result = []
    for i in range(n):
        for left in generate_parentheses(i):
            for right in generate_parentheses(n - i - 1):
                result.append("(" + left + ")" + right)
    return result

n = int(input(" "))
print(generate_parentheses(n))
```

## Submission at 2024-08-20 05:12:22


```
def generate_parentheses(n):
    if n == 0:
        return [""]
    result = []
    for i in range(n):
        for left in generate_parentheses(i):
            for right in generate_parentheses(n - i - 1):
                result.append("(" + left + ")" + right)
    return result

n = int(input(" "))
if 1 <= n <= 8:
    print(generate_parentheses(n))
```

## Submission at 2024-08-20 07:15:40


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))
        else:
             print(" ")
   else:
       print(" ")
else:
   print(" ")
```

## Submission at 2024-08-20 07:17:04


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))
        else:
             print(" ")
   else:
       print(" ")
else:
   print(" ")
```

## Submission at 2024-08-20 07:18:12


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        m = nums[i]
        rem = nums[:i] + nums[i+1:]
        for p in permute(rem):
            result.append([m] + p)
    return result

nums = list(map(int, input().split()))

if 1 <= len(nums) <= 6:
   if len(set(nums)) == len(nums):
        if all(-10 <= num <= 10 for num in nums):
             print(permute(nums))
        else:
             print(" ")
   else:
       print(" ")
else:
   print(" ")
```

## Submission at 2024-09-02 11:06:15


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

Node* deleteNode(Node *head,int x){
    // Edge case: If the list is empty
    if (head == NULL) {
        return NULL;
    }

    // Edge case: If the node to delete is the head
    if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse the list to find the node just before the one to be deleted
    Node* temp = head;
    for (int i = 1; temp != NULL && i < x - 1; i++) {
        temp = temp->next;
    }

    // If the index is out of bounds or the next node is NULL
    if (temp == NULL || temp->next == NULL) {
        return head; // No node to delete
    }

    // Node temp->next is the node to be deleted
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next; // Unlink the node from the list
    delete nodeToDelete; // Free the memory of the deleted node

    return head;
    }

```

## Submission at 2024-09-02 11:06:38


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

Node* deleteNode(Node *head,int x){
    // Edge case: If the list is empty
    if (head == NULL) {
        return NULL;
    }

    // Edge case: If the node to delete is the head
    if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse the list to find the node just before the one to be deleted
    Node* temp = head;
    for (int i = 1; temp != NULL && i < x - 1; i++) {
        temp = temp->next;
    }

    // If the index is out of bounds or the next node is NULL
    if (temp == NULL || temp->next == NULL) {
        return head; // No node to delete
    }

    // Node temp->next is the node to be deleted
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next; // Unlink the node from the list
    delete nodeToDelete; // Free the memory of the deleted node

    return head;
    }

```

## Submission at 2024-09-02 11:09:27


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    while(head != nullptr){
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}
```

## Submission at 2024-10-07 10:04:22


```
from collections import deque # Don't touch this line

def rev(q)
    n=len(q)
    for i in q:
        q[i]=q[-1]
        i += 1
        return
        

```

## Submission at 2024-10-07 10:13:22


```
def mathExpression(s: str)->str:
    for i in str:
        while str[i]<=3:
            i+=1    
        sort.str()
        return(sum(str))

```

## Submission at 2024-10-07 10:55:05


```
def coinPiles(piles, k):
    if k<min(piles):
        return -1
    left=min(piles)
    right=max(piles)
    mid = (left+right)//2
    k=0
    while left<=right: 
        if k>mid:
            left=mid
            k += 1
    for n in piles():
        diff= n-k
        n += 1
        k += 1 
        while sum(diff)<=k:
            return left 



          








```

## Submission at 2024-10-07 10:55:06


```
def coinPiles(piles, k):
    if k<min(piles):
        return -1
    left=min(piles)
    right=max(piles)
    mid = (left+right)//2
    k=0
    while left<=right: 
        if k>mid:
            left=mid
            k += 1
    for n in piles():
        diff= n-k
        n += 1
        k += 1 
        while sum(diff)<=k:
            return left 



          








```

## Submission at 2024-10-07 11:14:05


```
def mathExp(s):
    for i in s:
        i=0
        if i <= 3:
            i =+ 1    
        return -1
        

```

## Submission at 2024-10-28 10:11:32


```
def leastOccurence(self, n, k):
    for arr(i) in n:
        if arr(1) == arr(-1):
        return arr(i)

```

## Submission at 2024-10-28 10:11:33


```
def leastOccurence(self, n, k):
    for arr(i) in n:
        if arr(1) == arr(-1):
        return arr(i)

```

## Submission at 2024-10-28 10:42:24


```
def leastOccurence(self, n, k):
    for i in n:
        while i(3) == i(4) and i(4) == i(5) and i(5) == i(6):
            return i(3)  
      
    
```

## Submission at 2024-11-25 11:34:54


```
def starPattern (n) -> int:
    for i in n
    while i<n:
    i=0
    print(i*"*", '/n')
    i+=1
    return


```

## Submission at 2024-11-25 11:36:30


```
def starPattern (n) -> int:
    for i in n
    while i<n:
    i=0
    print(i*"*", '/n')
    i+=1
    return


```

## Submission at 2024-11-25 11:36:30


```
def starPattern (n) -> int:
    for i in n
    while i<n:
    i=0
    print(i*"*", '/n')
    i+=1
    return


```

## Submission at 2024-11-25 11:36:31


```
def starPattern (n) -> int:
    for i in n
    while i<n:
    i=0
    print(i*"*", '/n')
    i+=1
    return


```

