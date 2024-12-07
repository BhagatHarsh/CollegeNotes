## Submission at 2024-08-12 09:52:19


```
def fibonacci(x:int) -> int:
    if x<2:
        return x
    else:
        return fibonacci(x-1) +  fibonacci(x-2)

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-09-02 10:19:53


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if not head:
        return None
    if k==1:
        return head.next
    current = head
    for i in range(k-2):
        if current.next is None:
            return head
        current = current.next
    if current.next is not None:
        current.next = current.next.next
    return head



```

## Submission at 2024-09-02 10:41:27


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current = head
    while current:
        result.append(current.val)
        current =current.next
    return result

```

## Submission at 2024-09-02 10:41:35


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    current = head
    while current:
        result.append(current.val)
        current =current.next
    return result

```

## Submission at 2024-09-02 11:02:31


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    while current and count < k:
        current = current.next
        count+=1
        if current is None:
            return None
    return current
    

```

## Submission at 2024-09-02 11:09:44


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    while current and count < k:
        current = current.next
        count+=1

        if count ==k:
            return current
        else:
            return None
    
# Helper function to create a linked list from a list of values
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    return head

# Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
head = create_linked_list([1, 2, 3, 4, 5])

# Get the 3rd node
kth_node = get_kth_node(head, 3)

# Print the value of the 3rd node
if kth_node:
    print(kth_node.val)  # Output: 3
else:
    print("Node not found")

```

## Submission at 2024-09-02 11:11:42


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1  # Start counting from 1 (1-based index)
    
    while current and count < k:
        current = current.next
        count += 1
    
    # After the loop, check if we have reached the k-th node
    if count == k and current:
        return current.val
    else:
        return None
    
# Helper function to create a linked list from a list of values
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    return head

# Sample input
values = [1, 2, 3, 4, 5]
k = 3

# Create linked list: 1 -> 2 -> 3 -> 4 -> 5
head = create_linked_list(values)

# Get the 3rd node value
result = get_kth_node(head, k)

# Print the result
print(result)
```

## Submission at 2024-09-02 11:12:26


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1  # Start counting from 1 (1-based index)
    
    while current and count < k:
        current = current.next
        count += 1
    
    # After the loop, check if we have reached the k-th node
    if count == k and current:
        return current.val
    else:
        return None
    
# Helper function to create a linked list from a list of values
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    return head

# Sample input
values = [1, 2, 3, 4, 5]
k = 3

# Create linked list: 1 -> 2 -> 3 -> 4 -> 5
head = create_linked_list(values)

# Get the 3rd node value
result = get_kth_node(head, k)

# Print the result
print(result)
```

## Submission at 2024-09-02 11:13:53


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current:
        if count == k:
            return current.val
        current = current.next
        count += 1
    
   return None
    
def create_linked_list(values):
    if not values:
        return None
    head = ListNode(values[0])
    current = head
    for value in values[1:]:
        current.next = ListNode(value)
        current = current.next
    return head


values = [1, 2, 3, 4, 5]
k = 3

head = create_linked_list(values)


result = get_kth_node(head, k)


print(result)
```

## Submission at 2024-09-02 11:17:31


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current:
        if count == k:
            return current.val
        current = current.next
        count += 1
    


```

## Submission at 2024-09-02 11:19:52


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current:
        if count == k:
            return current.val
        current = current.next
        count += 1
    return None


```

## Submission at 2024-09-02 11:28:14


```
def find_common_elements(list1,list2):
    set1 = set(list1)
    set2 = set(list2)
    common_elements = sorted(set1.intersection(set2))
    return common_elements

list1 = [1,3,6,7,10]
list2 = [2,4,5,8,9]

result = find_common_elements(list1,list2)
print(" ".join(map(str,result)))
```

## Submission at 2024-09-09 05:35:14


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    while current is not None and count < k:
        current = current.next
        count+=1

    if current is not None:
        return current.val
    else:
        return None

    

```

## Submission at 2024-09-09 05:36:50


```
def is_palindrome(s):
    # Compare the string with its reverse
    return s == s[::-1]

# Example usage:
input_str = "racecar"
if is_palindrome(input_str):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-09-09 05:37:39


```
def is_palindrome(s):
    # Compare the string with its reverse
    return s == s[::-1]

# Example usage:
input_str = "racecar"
if is_palindrome(input_str):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-09-09 05:39:52


```
def find_maximal_subarray(arr):
    # Initialize variables to track the maximum sum
    max_current = max_global = arr[0]
    
    # Traverse through the array, starting from the second element
    for num in arr[1:]:
        # Max sum ending at the current position
        max_current = max(num, max_current + num)
        # Update the global max sum if the current one is higher
        if max_current > max_global:
            max_global = max_current
    
    return max_global

# Example usage:
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
print(find_maximal_subarray(arr))  # Output: 6 (subarray [4, -1, 2, 1])

```

## Submission at 2024-09-09 05:42:51


```
def find_maximal_array(n, a, b):
    # Create the resultant array c by taking the maximum of a[i] and b[i] for each i
    c = [max(a[i], b[i]) for i in range(n)]
    # Print the array c as space-separated values
    print(" ".join(map(str, c)))

# Input reading
n = int(input())  # Read size of arrays
a = list(map(int, input().split()))  # Read array a
b = list(map(int, input().split()))  # Read array b

# Call the function to find and output the maximal array
find_maximal_array(n, a, b)

```

## Submission at 2024-09-09 05:46:49


```

def diagonal_traversal(matrix):
    if not matrix:
        return []

    m, n = len(matrix), len(matrix[0])
    diagonals = {}

    for i in range(m):
        for j in range(n):
            diag_sum = i + j
            if diag_sum not in diagonals:
                diagonals[diag_sum] = []
            diagonals[diag_sum].append(matrix[i][j])

    result = []
    for diag_sum in sorted(diagonals.keys()):
        result.extend(diagonals[diag_sum])

    return result

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(diagonal_traversal(matrix))
```

## Submission at 2024-09-09 05:51:20


```
class Node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    prev = None
    curr = head
    
    while curr is not None:
        next = curr.next  # Store next node
        curr.next = prev  # Reverse the current node's pointer
        prev = curr       # Move pointers one step ahead
        curr = next
    
    return prev

```

## Submission at 2024-09-09 05:55:59


```
def diagonal_traversal(matrix):
    result = []
    n = len(matrix) 
    m = len(matrix[0])
    for i_sum in range(0,m+n-1):
        for j in range(0,i_sum + 1):
            i = i_sum - j
            if i < n and j < m:
                result.append(matrix[i][j])
    return result
```

## Submission at 2024-09-09 05:56:24


```
def diagonal_traversal(matrix):
    result = []
    n = len(matrix) 
    m = len(matrix[0])
    for i_sum in range(0,m+n-1):
        for j in range(0,i_sum + 1):
            i = i_sum - j
            if i < n and j < m:
                result.append(matrix[i][j])
    return result
```

## Submission at 2024-09-09 06:27:31


```
def fibonacci(x:int) -> int:
    if x==0:
        return 0
    elif x==1:
        return 1
    a,b = 0,1
    for _ in range(2,x+1):
        a,b = b,a+b
        
    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 06:28:16


```
def fibonacci(x:int) -> int:
    if x==0:
        return 0
    elif x==1:
        return 1
    a,b = 0,1
    for _ in range(2,x+1):
        a,b = b,a+b
        
    return b

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-09-09 06:31:41


```
def is_power_of_two(n:int) -> int:
    return n>0 and (n&(n-1)==0)
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:33:07


```
def is_power_of_two(n:int) -> int:
    return n>0 and (n&(n-1)==0)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:35:29


```
def is_power_of_two(n: int) -> bool:
    # if n is positive and if n & (n - 1) == 0
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = int(input().strip())
    
    # Determine if n is a power of two and print "true" or "false"
    print("true" if is_power_of_two(n)else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:36:45


```
def count_numbers_with_even_digits(nums):
    count = 0
    for num in nums:
        # Convert the number to a string and check its length
        if len(str(num)) % 2 == 0:
            count += 1
    return count

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    # The first line is the size of the array
    n = int(data[0])
    
    # The second line is the array elements
    nums = list(map(int, data[1:1+n]))
    
    # Compute the count of numbers with an even number of digits
    result = count_numbers_with_even_digits(nums)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:37:23


```
def count_numbers_with_even_digits(nums):
    count = 0
    for num in nums:
        # Convert the number to a string and check its length
        if len(str(num)) % 2 == 0:
            count += 1
    return count

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    # The first line is the size of the array
    n = int(data[0])
    
    # The second line is the array elements
    nums = list(map(int, data[1:1+n]))
    
    # Compute the count of numbers with an even number of digits
    result = count_numbers_with_even_digits(nums)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:39:12


```
def find_kth_missing(arr, k):
    # Initialize variables
    current = 1
    missing_count = 0
    idx = 0
    n = len(arr)
    
    # While we need to find more missing numbers
    while missing_count < k:
        if idx < n and arr[idx] == current:
            # Move to the next element in the array
            idx += 1
        else:
            # Count this number as a missing number
            missing_count += 1
            if missing_count == k:
                return current
        
        # Move to the next number
        current += 1

    # In case we exit the loop without returning (though it should not happen)
    return current

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    # Parse the inputs
    n = int(data[0])
    k = int(data[1])
    arr = list(map(int, data[2:2+n]))
    
    # Find the k-th missing positive number
    result = find_kth_missing(arr, k)
    
    # Print the result
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:41:36


```
def transpose_matrix(matrix, M, N):
    # Initialize the transposed matrix with dimensions N x M
    transposed = [[0] * M for _ in range(N)]
    
    # Populate the transposed matrix
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    
    return transposed

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    # Parse the dimensions
    M = int(data[0])
    N = int(data[1])
    
    # Read the matrix
    matrix = []
    index = 2
    for i in range(M):
        row = list(map(int, data[index:index+N]))
        matrix.append(row)
        index += N
    
    # Compute the transpose
    transposed = transpose_matrix(matrix, M, N)
    
    # Print the transposed matrix
    for row in transposed:
        print(' '.join(map(str, row)))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-09 06:52:57


```
def pow_recursive(x: int, n: int) -> int:
    if n == 0:
        return 1
    if n < 0:
        return math.floor(1 / pow_recursive(x, -n))
    half_power = pow_recursive(x, n // 2)
    return (half_power * half_power) if n % 2 == 0 else (x * half_power * half_power)

def main():
    import sys
    x, n = map(int, sys.stdin.read().strip().split())
    print(pow_recursive(x, n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 09:54:57


```
# write code from scratch
n=int(input())
i=1

def pow(n):
    global i
    if(n%2==0):
        i = i+1
        return pow(n/2)
    elif(n==1):
        return True
    elif (n%2==0):
        i = i + 1
        pow(n/2)
    elif (i%2 == 0): 
        return True

if pow(n):
    print("True")
else:
    print("False")

```

## Submission at 2024-09-09 09:56:20


```
# write code from scratch
n=int(input())
i=1

def pow(n):
    global i
    if(n%2==0):
        i = i+1
        return pow(n/2)
    elif(n==1):
        return True
    elif (n%2==0):
        i = i + 1
        pow(n/2)
    elif (i%2 == 0): 
        return True

if pow(n):
    print("True")
else:
    print("False")

```

## Submission at 2024-09-09 09:58:28


```
# write code from scratch
n=int(input())
i=1

def pow(n):
    global i
    if(n==0):
        return False
    if(n%2==0):
        i = i+1
        return pow(n/2)
    elif(n==1):
        return True
    elif (n%2==0):
        i = i + 1
        pow(n/2)
    elif (i%2 == 0): 
        return True

if pow(n):
    print("True")
else:
    print("False")

```

## Submission at 2024-09-09 10:00:58


```
# write code from scratch
temp = input()
n = [int(x) for x in temp.split()]
print(n)

```

## Submission at 2024-09-09 10:23:35


```
temp = input()
temp2 = [str() for q in temp.split()]

y = temp2[0]
n= temp2[1]
l =list(y)
i =0

def freq(l,n):
    global i
    if len(l)==0:
        return i
    elif(l.pop(0)==n):
        i = i+1
        l.pop(0)
        return freq(l,n)

print(freq(l,n))
```

## Submission at 2024-09-09 10:59:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):

    curr= head
    temp= head

    while(curr.next!=None):
        if(curr.data == curr.next.data):
            curr.next = curr.next.next
            curr=curr.next
        else:
            head = curr.next
        
    return temp

```

## Submission at 2024-09-09 11:02:09


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr= head
    temp= head

    while(curr.next!=None):
        if(curr.data == curr.next.data):
            curr.next = curr.next.next
            curr=curr.next
        else:
            head = curr.next
        
    return temp


```

## Submission at 2024-09-09 11:09:21


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr= head
    temp= head
    if head == None:
        return temp
    while(curr.next!=None):
        if(curr.data == curr.next.data):
            curr.next = curr.next.next
            curr=curr.next
        else:
            head = curr.next
        
    return temp



```

## Submission at 2024-09-09 11:11:18


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr= head
    temp= head

    while(curr.next!=None):
        if(curr.data == curr.next.data):
            curr.next = curr.next.next
            curr=curr.next
        else:
            head = curr.next
            curr=head
        
    return temp
# Code here


```

## Submission at 2024-10-07 10:56:18


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n:
    cin >> n;
    vector<int> a;
    for (int i =0; i<n; i++){
        cin >> a[i];
    }
    dig1 = num%10
    dig2 = num/10
    dig3 = dig2/10
    num = dig1+dig2 + dig3
}
```

## Submission at 2024-10-28 10:08:49


```


/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MAX;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i< v1.size(); i++){
        if (v1[i]< m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:10:07


```


/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i< v1.size(); i++){
        if (v1[i]< m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:12:38


```


/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i< v1.size(); i++){
        if (v1[i]< m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:17:00


```


/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i< v1.size(); i++){
        if (v1[i]> m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:33:50


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node *root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]> m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:34:37


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node *root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]< m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:34:48


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node *root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]< m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:36:28


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> t(Node *root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]>m){
            m = v1[i];
        }
    }
}


```

## Submission at 2024-10-28 10:41:38


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MAX;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]>m){
            m = v1[i];
        }
    }
    return m;
}



```

## Submission at 2024-10-28 10:42:02


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]<m){
            m = v1[i];
        }
    }
    return m;
}



```

## Submission at 2024-10-28 10:42:53


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]<m){
            m = v1[i];
        }
        return m;
    }

}



```

## Submission at 2024-10-28 10:43:42


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]<m){
            m = v1[i];
        }
        return m;
    }

}



```

## Submission at 2024-10-28 10:44:22


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int m = INT_MAX;
vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->val);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]<m){
            m = v1[i];
        }
        return m;
    }

}



```

## Submission at 2024-10-28 10:48:09


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]>m){
            m = v1[i];
        }
        return m;
    }

}



```

## Submission at 2024-10-28 10:49:51


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/


vector<int> t(Node* root){

    vector<int> ans;

    if (root == NULL){
        return {};
    }

    ans.push_back(root->data);
    t(root->left);
    t(root->right);
    return ans;
}

int findMax(Node *root)
{
    vector<int> v1 = t(root);
    int m = INT_MIN;
    if (root == NULL){
        return {};
    }

    for(int i = 0; i> v1.size(); i++){
        if (v1[i]<m){
            m = v1[i];
        }
        
    }
    return m;

}



```

## Submission at 2024-10-28 11:01:08


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
    result = []
    if not node:
      return 0
    def depth(root):
      current_level = depth(node.val)
      if node.val == -1:
        return -1
      right = depth(node.right)
      if right == -1:
        return -1
      left = depth(node.left)
      if left == -1:
        return -1

    return result


```

## Submission at 2024-10-28 11:18:57


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class ListNode:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1: ListNode, num2:ListNode):
        dummy = ListNode(0)
        current = dummy
        carry = 0
        while num1 or num2 or carry:
            val1 = num1.val if num1 else 0 
            val2 = num2.val if num2 else 0 
            total = val1+val2 +carry
            carry = total //10
            carry = total%10
            current.next = ListNode(total)
            current = current.next
            if num1: num1 = num1.next
            if num2: num2 = num2.next
        return dummy.next

def create_linked_list(nums):
    dummy = ListNode()
    current= dummy
    for num in nums:
        current.next = ListNode(num)
        current = current.next
    return current.next

def print_linked_list(node):
    while node:
        print(node.val, end = " ")
        node = node.next
    print()



```

## Submission at 2024-10-28 11:24:15


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''


def maxDepth(root):
  if not root:
    return 0
  return 1+max(maxDepth(root.left),maxDepth(root.right))
```

## Submission at 2024-10-28 11:25:37


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
        result = []
    def traversal(node):
        if node:
            result.append(node.val)
            traversal(node.left)
            traversal(node.right)
        traversal(root)


```

## Submission at 2024-10-28 11:29:00


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
        result = []
        def traversal(Node):
            if node:
                result.append(Node.val)
                traversal(Node.left)
                traversal(Node.right)
        traversal(root)


```

## Submission at 2024-10-28 11:29:24


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
        result = []
        def traversal(node):
            if node:
                result.append(node.val)
                traversal(node.left)
                traversal(node.right)
        traversal(root)


```

## Submission at 2024-10-28 11:29:55


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
        result = []
    def traversal(node):
        if node:
            result.append(node.val)
            traversal(node.left)
            traversal(node.right)
    traversal(root)


```

## Submission at 2024-11-25 09:50:20


```
n = ("*")
print(n)
```

## Submission at 2024-11-25 09:58:58


```
i = ("reverse")
s[i] = [-1:6]
print(s[i])
```

## Submission at 2024-11-25 10:15:41


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:17:12


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:19:46


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:27:37


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.size();
    cout << s.substr(n-5,n);
}
```

## Submission at 2024-11-25 10:36:37


```
// Write C++ code from scratch

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >>s;
        cout<< "Hello" << s << "!" << endl; 
    }
}
```

## Submission at 2024-11-25 10:40:37


```
// Write C++ code from scratch

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >>s;
        cout<< "Hello " << s << "!" << endl; 
    }
}
```

## Submission at 2024-11-25 10:53:36


```
def next_greatest_letter(letters,target):
    for letter in letters:
        if letter > target:
            return letter
    return letters[0]

n = int(input())
letters = input().split()
target = input()
print(next_greates_letter(letters,target))
```

## Submission at 2024-11-25 10:54:54


```
def next_greatest_letter(letters,target):
    for letter in letters:
        if letter > target:
            return letter
    return letters[0]

n = int(input())
letters = input().split()
target = input()
print(next_greatest_letter(letters,target))
```

## Submission at 2024-11-25 11:00:42


```
n = int(input())
numbers = list(map(int, input().split()))
odd_count = sum(1 for num in numbers if num%2!=0)
even_count = sum(1 for num in numbers if num%2!=0)
print(odd_count,even_count)
```

## Submission at 2024-11-25 11:04:28


```
n = int(input())
numbers = list(map(int, input().split()))
odd_count = sum(1 for num in numbers if num%2!=0)
even_count = sum(1 for num in numbers if num%2==0)
print(odd_count, even_count)
```

## Submission at 2024-11-25 11:10:26


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
def minElementInBST(root) -> int:
    current = root
    while current and current.left:
      current = current.left
    return current.val if current else None

print(minElementInBST(root))
```

## Submission at 2024-11-25 11:17:42


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
def minElementInBST(root) -> int:
    if not root:
      return None
    current = root
    while current.left:
      current = current.left
    return current.val

```

## Submission at 2024-11-25 11:19:14


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
def minElementInBST(root) -> int:
  if not root:
    return None
  current = root
  while current.left:
    current = current.left
  return current.val

```

## Submission at 2024-11-25 11:22:04


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
def minElementInBST(root) -> int:
  if not root:
    return None
  current = root
  while current.left:
    current = current.left
  return current.root

```

## Submission at 2024-11-25 11:25:00


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
def minElementInBST(root) -> int:
  if not root:
    return None
  current = root
  while current.left:
    current = current.left
  return current.val

```

## Submission at 2024-11-25 11:28:40


```
# Write Python code from scratch
def reverse_and_remove_vowels(s):
    vowels = "reverse"
    reversed_string = s[::-1]
    result =''.join (char for char in reversed_string if char not in vowels)
    return result
print(reverse_and_remove_vowels)
```

## Submission at 2024-11-25 11:29:46


```
# Write Python code from scratch
def reverse_and_remove_vowels(s):
    vowels = "reverse"
    reversed_string = s[::-1]
    result ='' .join (char for char in reversed_string if char not in vowels)
    return result
print(reverse_and_remove_vowels)
```

## Submission at 2024-11-25 11:35:28


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
def minElementInBST(root) -> int:
  if not root:
    return None
  current = root
  while current.left:
    current = current.left
  return current.value
```

## Submission at 2024-11-25 11:39:01


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
def minElementInBST(root) -> int:
  if not root:
    return None
  current = root
  while current.left:
    current = current.left
  return current.data
```

