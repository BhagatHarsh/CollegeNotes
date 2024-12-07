## Submission at 2024-09-02 10:21:49


```
def max_elements(n, a, b):

    c = [0] * n
    for i in range(n):
        c[i] = max(a[i], b[i])
    
    return c

n = 5
a = [1, 3, 5, 7, 9]
b = [2, 4, 6, 8, 10]
c = max_elements(n, a, b)
print(c)  

```

## Submission at 2024-09-02 10:31:30


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = [max(a[i], b[i]) for i in range(n)]

print(" ".join(map(str, c)))

```

## Submission at 2024-09-02 10:59:54


```

class node:
    def __init__(self):
        self.data = None
        self.next = None

class ListNode:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next

def delNode(head, k):
    if not head:
        return None
    
    if k == 1:
        return head.next
    
    current = head
    for i in range(k - 2):
        if current is None or current.next is None:
            return head 
        current = current.next
    
    if current.next:
        current.next = current.next.next
        return head
def printList(node):
    while node:
        print(node.data, end=" -> " if node.next else "")
        node = node.next
    print()

head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)
head.next.next.next = ListNode(4)
head.next.next.next.next = ListNode(5)

k = 3
head = delNode(head, k)

printList(head) 

    


```

## Submission at 2024-09-03 11:48:25


```

class node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    prev = None
    current = head
    
    while current:
        next_node = current.next  # Store the next node
        current.next = prev       # Reverse the link
        prev = current            # Move prev to the current node
        current = next_node       # Move to the next node
    
    return prev  # prev is the new head of the reversed list

# Helper function to print the linked list
def printList(head):
    current = head
    while current:
        print(current.data, end=" -> " if current.next else "")
        current = current.next
    print()

# Helper function to create a linked list from a list of values
def createLinkedList(values):
    if not values:
        return None
    
    head = node()
    head.data = values[0]
    current = head
    
    for value in values[1:]:
        new_node = node()
        new_node.data = value
        current.next = new_node
        current = new_node
    
    return head

# Example usage:

# Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
values = [1, 2, 3, 4, 5]
head = createLinkedList(values)

# Print the original list
print("Original List:")
printList(head)

# Reverse the linked list
reversed_head = reverseLinkedList(head)

# Print the reversed list
print("Reversed List:")
printList(reversed_head)



```

## Submission at 2024-09-03 11:51:29


```

class node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    prev = None
    current = head
    
    while current:
        next_node = current.next  # Store the next node
        current.next = prev       # Reverse the link
        prev = current            # Move prev to the current node
        current = next_node       # Move to the next node
    
    return prev  # prev is the new head of the reversed list

# Helper function to print the linked list
def printList(head):
    current = head
    while current:
        print(current.data, end=" " if current.next else "")
        current = current.next
    print()

# Helper function to create a linked list from a list of values
def createLinkedList(values):
    if not values:
        return None
    
    head = node()
    head.data = values[0]
    current = head
    
    for value in values[1:]:
        new_node = node()
        new_node.data = value
        current.next = new_node
        current = new_node
    
    return head

# Example usage:

# Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
values = [1, 2, 3, 4, 5]
head = createLinkedList(values)

# Print the original list
printList(head)

# Reverse the linked list
reversed_head = reverseLinkedList(head)

# Print the reversed list
printList(reversed_head)



```

## Submission at 2024-09-03 12:06:07


```
#include <vector>
using namespace std;


vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    ListNode* current = head;

    // Traverse the linked list
    while (current != nullptr) {
        result.push_back(current->val);  
        current = current->next;  
    }

    return result;
}
    
    


    



```

## Submission at 2024-09-03 12:12:32


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # If the head needs to be removed (k == 1)
    if k == 1:
        return head.next  # Skip the head and return the new head
    
    # Initialize the current node
    current = head
    
    # Traverse to the node before the k-th node
    for i in range(k - 2):
        if current is None or current.next is None:
            return head  # If k is out of bounds, return the unchanged list
        current = current.next
    
    # If the node to delete exists, adjust the pointers to skip it
    if current.next:
        current.next = current.next.next
    
    return head

# Helper function to print the linked list
def printList(head):
    current = head
    while current:
        print(current.data, end=" -> " if current.next else "")
        current = current.next
    print()

# Helper function to create a linked list from a list of values
def createLinkedList(values):
    if not values:
        return None
    
    head = node()
    head.data = values[0]
    current = head
    
    for value in values[1:]:
        new_node = node()
        new_node.data = value
        current.next = new_node
        current = new_node
    
    return head

# Example usage:

# Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5
values = [1, 2, 3, 4, 5]
head = createLinkedList(values)

# Print the original list



```

## Submission at 2024-09-03 12:18:36


```
class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

def reverseLinkedList(head):
    prev = None
    current = head
    
    while current is not None:
        next_node = current.next  # Save the next node
        current.next = prev       # Reverse the current node's pointer
        prev = current            # Move prev up to the current node
        current = next_node       # Move to the next node
    
    return prev  # prev will be the new head after the loop

def printList(head):
    current = head
    result = []
    while current:
        result.append(current.data)
        current = current.next
    print(' '.join(map(str, result)))

def createLinkedList(elements):
    if not elements:
        return None
    
    head = Node(elements[0])
    current = head
    for element in elements[1:]:
        current.next = Node(element)
        current = current.next
    return head

# Read input
def main():
    import sys
    input = sys.stdin.read().strip().split()
    
    size = int(input[0])
    elements = list(map(int, input[1:]))
    
    head = createLinkedList(elements)
    reversed_head = reverseLinkedList(head)
    printList(reversed_head)



```

## Submission at 2024-09-03 12:21:28


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    position = 1
    
    while current is not None:
        if position == k:
            return current.val
        current = current.next
        position += 1
    
    return -1

# Helper functions to create and print linked list for testing purposes

def create_linked_list(elements):
    if not elements:
        return None
    
    head = ListNode(elements[0])
    current = head
    for element in elements[1:]:
        current.next = ListNode(element)
        current = current.next
    return head

def print_linked_list(head):
    current = head
    result = []
    while current:
        result.append(current.val)
        current = current.next
    print(' '.join(map(str, result)))

# Example usage
if __name__ == "__main__":
    # Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    head = create_linked_list([1, 2, 3, 4, 5])

    # Example queries
    k = 3
    print(get_kth_node(head, k))  # Output should be 3


```

## Submission at 2024-09-03 12:23:31


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def get_kth_node(head, k):
    current = head
    position = 1
    
    while current is not None:
        if position == k:
            return current.val
        current = current.next
        position += 1
    
    return -1

# Helper functions to create and print linked list for testing purposes

def create_linked_list(elements):
    if not elements:
        return None
    
    head = ListNode(elements[0])
    current = head
    for element in elements[1:]:
        current.next = ListNode(element)
        current = current.next
    return head

def print_linked_list(head):
    current = head
    result = []
    while current:
        result.append(current.val)
        current = current.next
    print(' '.join(map(str, result)))

# Example usage
if __name__ == "__main__":
    # Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    head = create_linked_list([1, 2, 3, 4, 5])

    # Example queries
    k = 3
   


```

## Submission at 2024-09-03 12:37:51


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    diagonals = {}

    # Collect elements for each diagonal
    for i in range(m):
        for j in range(n):
            diagonal_index = i + j
            if diagonal_index not in diagonals:
                diagonals[diagonal_index] = []
            diagonals[diagonal_index].append(matrix[i][j])
    
    # Gather results from diagonals in order
    result = []
    for k in range(m + n - 1):
        if k in diagonals:
            result.extend(diagonals[k])
    
    return result

# Example usage:
if __name__ == "__main__":
    # Example input
    matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    
    result = diagonal_traversal(matrix)
    #print(' '.join(map(str, result)))

    

```

## Submission at 2024-09-03 12:40:39


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    diagonals = {}

    # Collect elements for each diagonal
    for i in range(m):
        for j in range(n):
            diagonal_index = i + j
            if diagonal_index not in diagonals:
                diagonals[diagonal_index] = []
            diagonals[diagonal_index].append(matrix[i][j])
    
    # Gather results from diagonals in order
    result = []
    for k in range(m + n - 1):
        if k in diagonals:
            result.extend(diagonals[k])
    
    return result

if __name__ == "__main__":
    # Example input
    matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    
    result = diagonal_traversal(matrix)
    print(' '.join(map(str, result)))

    

```

## Submission at 2024-09-03 12:43:13


```
def diagonal_traversal(matrix):
    if not matrix or not matrix[0]:
        return []

    m, n = len(matrix), len(matrix[0])
    diagonals = {}

    # Collect elements for each diagonal
    for i in range(m):
        for j in range(n):
            diagonal_index = i + j
            if diagonal_index not in diagonals:
                diagonals[diagonal_index] = []
            diagonals[diagonal_index].append(matrix[i][j])
    
    # Gather results from diagonals in order
    result = []
    for k in range(m + n - 1):
        if k in diagonals:
            result.extend(diagonals[k])
    
    return result

# Example usage
if __name__ == "__main__":
    # Example input
    matrix = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ]
    
    # Get the diagonal traversal result
    result = diagonal_traversal(matrix)
    

   

    

```

## Submission at 2024-09-03 13:07:55


```
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    unordered_map<int, vector<int>> diagonals;

    // Collect elements for each diagonal
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            diagonals[i + j].push_back(matrix[i][j]);
        }
    }

    // Gather results from diagonals in order
    vector<int> result;
    for (int k = 0; k < m + n - 1; ++k) {
        for (int val : diagonals[k]) {
            result.push_back(val);
        }
    }

    return result;
}

```

## Submission at 2024-09-09 10:15:59


```
#include<iostream>
using namespace std;

int n;

bool power_of_four()
{
    if(n==0){
        return false;
    } 
    else if(n%4==0){   
    return true;
    }
    else {
    return false;
    }
}

int main(){

 power_of_four();
}
```

## Submission at 2024-09-09 10:48:49


```
#include<iostream>
using namespace std;

int n;

bool power_of_four()
{
    if(n==0){
        return false;
    } 
    else if(n/4==0){   
    return true;
    }
    else {
    return false;
    }
}

int main(){
n=16;
cout<<power_of_four();
}
```

## Submission at 2024-09-09 11:13:37


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def removeDuplicates(head):
    if not head:
        return head

        cur=head
        prev=None
        s_val=set()

        while cur:
            if cur.values in s_val:

                prev.next=cur.next

                return head

                else
                    s_val.add(cur.values)
                    prev=cur
                    cur=cur.next
                    return head

                

                


    
                




    


```

## Submission at 2024-09-09 11:13:52


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def removeDuplicates(head):
    if not head:
        return head

        cur=head
        prev=None
        s_val=set()

        while cur:
            if cur.values in s_val:

                prev.next=cur.next

                return head

                else:
                    s_val.add(cur.values)
                    prev=cur
                    cur=cur.next
                    return head

                

                


    
                




    


```

## Submission at 2024-09-09 11:14:51


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def removeDuplicates(head):
    if not head:
        return head

        cur=head
        prev=None
        s_val=set()

        while cur:
            if cur.values in s_val:

                prev.next=cur.next

                return head

            else:
                    s_val.add(cur.values)
                    prev=cur
                    cur=cur.next
                    return head

                

                


    
                




    


```

## Submission at 2024-10-07 10:27:33


```
def specialDiscount(prices):
    prices= []

    for i in range len(prices):
        for j in range i:
            if j>i:
            i=i-prices[j]
            else if:
                prices[j]<=prices[i]
                i=i-prices[j]

                answer=[]
                answer=append(i)

prices=[10,1,1,6,3]
specialDiscount(prices)
print(specialDiscount)



        

```

## Submission at 2024-10-28 10:11:13


```

# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None

#Function to return a list containing the postorder traversal of the tree.
def maxDepth(root):
  if not root.left and not root.right:
    return
    if root.left:
      Node.left
      Node.right
      append(root)

      return max(left.maxDepth,right.maxDepth)+1

    

    
```

## Submission at 2024-11-25 10:29:14


```
#include<iostream>

int evenodd(n){
n=5;
arr[n]={1,2,3,4,5};
evencounter=0;
oddcounter=0;
for(int i=0;i<n;i++)
        if(n/2==0){
            evencounter=evencounter+1
        }       
        else{
            oddcounter=oddcounter+1
        }
        return(evencounter,oddcounter)
}               
void main(){
    cout<<n;
    cout<<arr[n];
    cout<<evenodd(n);

}

```

## Submission at 2024-11-25 10:45:33


```
#include<iostream>
int main(){
int evenodd(n){
n=5;
arr[n]={1,2,3,4,5};
evencounter=0;
oddcounter=0;
for(int i=0;i<n;i++)
        if(n/2==0){
            evencounter=evencounter+1
        }       
        else{
            oddcounter=oddcounter+1
        }
        return(evencounter,oddcounter)
}               

cout<<n;
cout<<arr[n];
cout<<evenodd(n);

}
```

## Submission at 2024-11-25 11:04:46


```
#include<iostream>

int evenodd(int n){
int n=5;
int arr[n]={1,2,3,4,5};
int evencounter=0;
int oddcounter=0;
for(int i=0;i<n;i++)
        if(n/2==0){
            evencounter=evencounter+1
        }       
        else{
            oddcounter=oddcounter+1
        }
        return(evencounter,oddcounter)
}               
int main()
{
cin>>n;
cout<<arr[n];
cout<<evenodd(n);

}
```

## Submission at 2024-11-25 11:17:49


```
#include<iostream>
int main(){
    int n=5;
    int i;
    int j;
    for(i=0;i<n;i++){
        for(j=n;j<n-i+1;j--){
            printf("*");
            
        }
        printf("\n");
    }
}
```

## Submission at 2024-11-25 11:28:53


```
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n=5;
    int i,j;
    for(i=0;i<n;i++){
        for(j=n;j<n-i+1;j--){
            cout<<"*";    
        }
        cout<<"\n";
    }
}
```

