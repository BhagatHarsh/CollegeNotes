## Submission at 2024-08-09 04:51:01


```
//import java.utill.Scanner;
public class Main {
    public static void main(String[] args) {
        String Name = "Harsh";
        System.out.println("Hello " + Name + "!");
    }
}
```

## Submission at 2024-08-09 05:00:23


```
class Main {
    public static void main(String[] args) {
       String Name = "Harsh"; 
            System.out.println("Hello " + Name + "!");
        }
    }

```

## Submission at 2024-08-09 05:01:38


```
// Write your Java code here from the scratch
class Main {
    public static void main(String[] args) {
       String Name = "Harsh"; 
            System.out.println("Hello " + Name + "!");
        }
    }
```

## Submission at 2024-08-09 05:02:15


```
// Write your Java code here from the scratch
class Main {
    public static void main(String[] args) {
       String Name = "Harsh"; 
            System.out.println("Hello " + Name + "!");
        }
    }
```

## Submission at 2024-08-30 05:15:01


```
// write from scratch, create a function named Pow(int x, int n)
class Main { //Remember the class name has to be Main!!
    public static void powx;
    {
        int x , n ;

        if(n==0)
         return 1;
        
        {
           powx = x * pow(x-1);
        }
    }
    public static int Main ();
    {
        int x = 2 ;
        int n = 4;

    powx = x * pow(x-1);
    System.out.println("the"+n+"power of x is:"+powx);

    }
}
```

## Submission at 2024-08-30 05:16:29


```
// write from scratch, create a function named Pow(int x, int n)
class Main { //Remember the class name has to be Main!!
    public static void powx;
    {
        int x , n ;

        if(n==0)
         return 1;
        
        {
           powx = x * pow(x-1);
        }
    }
    public static int Main ();
    {
        int x = 2 ;
        int n = 4;

    powx = x * pow(x-1);
    System.out.println("the"+n+"power of x is:"+powx);

    }
}
```

## Submission at 2024-08-30 05:26:40


```
// write from scratch, create a function named Pow(int x, int n)
class Main { 

public static int pow;
int x, n;
if (n==0)
{
return 1;
}
{
 pow(x) = x * pow(x-1);   
 
}
}
```

## Submission at 2024-08-30 05:39:24


```

// write from scratch, create a function named Pow(int x, int n)
class Main { //Remember the class name has to be Main!!
    public static void pow;
    {
        int x , n ;

        if(n==0)
         return 1;
        
        {
           powx = x * pow(x-1);
        }
    }
    public static int Main ();
    {
        int x = 2 ;
        int n = 4;

    powx = x * pow(x-1);
    System.out.println("the"+n+"power of x is:"+powx);

    }
}
```

## Submission at 2024-08-30 06:04:10


```
// Write code from scratch
class Main{
int a[] = [1,2,3,4,5];
int b[] = [6,7,8,9,10];
if()
}
```

## Submission at 2024-08-30 06:05:46


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {
        // Write your logic here
    }
}
```

## Submission at 2024-10-04 04:27:10


```
// Write the code from scratch, no boilerplate is required#merge sort
def merge_sort(arr):
    if len(arr) > 1:
        # Find the middle of the array
        mid = len(arr) // 2

        # Dividing the array elements into two halves
        left_half = arr[:mid]
        right_half = arr[mid:]

        # Recursively sort both halves
        merge_sort(left_half)
        merge_sort(right_half)

        # Initialize pointers for left half, right half and merged array
        i = j = k = 0

        # Merge the two halves
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        # Check if any element was left in the left half
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        # Check if any element was left in the right half
        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

# Example usage
arr = [38, 27, 43, 3, 9, 82, 10]
print("Original array:", arr)
merge_sort(arr)
print("Sorted array:", arr)

####################
#bubble sort
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]  # Swap
    return arr

# Example array
array = [5, 2, 9, 1, 5, 6]

# Sorting using Bubble Sort
sorted_array = bubble_sort(array)

print("Sorted Array (Bubble Sort):", sorted_array)
##############3
# Quicksort Sort

# Function to find the partition position
def partition(array, low, high):

    # choose the rightmost element as pivot
    pivot = array[high]

    # pointer for greater element
    i = low - 1

    # traverse through all elements
    # compare each element with pivot
    for j in range(low, high):
        if array[j] <= pivot:

            # If element smaller than pivot is found
            # swap it with the greater element pointed by i
            i = i + 1

            # Swapping element at i with element at j
            (array[i], array[j]) = (array[j], array[i])

    # Swap the pivot element with the greater element specified by i
    (array[i + 1], array[high]) = (array[high], array[i + 1])

    # Return the position from where partition is done
    return i + 1
# function to perform quicksort


def quickSort(array, low, high):
    if low < high:

        # Find pivot element such that
        # element smaller than pivot are on the left
        # element greater than pivot are on the right
        pi = partition(array, low, high)

        # Recursive call on the left of pivot
        quickSort(array, low, pi - 1)

        # Recursive call on the right of pivot
        quickSort(array, pi + 1, high)


data = [1, 7, 4, 1, 10, 9, -2]
print("Unsorted Array")
print(data)

size = len(data)

quickSort(data, 0, size - 1)

print('Sorted Array in Ascending Order:')
print(data)
#############################
#stack
"class MinStack:

    def __init__(self):
        self.stack=[]

    def push(self, val: int) -> None:
        global stack
        self.stack.append(val)

    def pop(self) -> None:
        global stack
        self.stack.pop()
        return self.stack

    def top(self) -> int:
        global stack
        return self.stack[-1]

    def getMin(self) -> int:
        global stack
        return min(self.stack)"
######################################33
#sort majority
"class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n=len(nums)
        for i in range (n):
            c =0
            for j in range (n):
                if nums[i]==nums[j]:
                    c += 1
            if c>n//2:
                return nums[i]
        return (-1)"
########################################
 # Driver Code Starts

t = int(input())
for _ in range(t):
    n = int(input())
    tree = [ int(x) for x in input().strip().split() ]
    k = int(input())
    ob=Solution()
    print(ob.find_height(tree,n,k))
# } Driver Code Ends"
#######################################
#binary search
"class Solution {
    public int search(int[] nums, int target) {
        int low=0,high=nums.length-1;
        while(low<=high){
            int mid=(high+low)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
        }
        return -1;
    }
}        
#######################################
#binary tree
"class Solution:
    def wood_collected(self,tree,n,h):
        ret = 0
        
        # counting the amount of wood that gets collected
        # if we cut trees at height h
        for i in range(n):
            if tree[i] > h:
                ret += tree[i] - h
        
        return ret
    
    def find_height(self,tree,n,k):
        l=0
        h=0
        # l is lower limit of binary search
        # h is upper limit
        for i in range(n):
            h = max(h,tree[i])
        
        while(l<=h):
            mid = (l+h)//2
            val = self.wood_collected(tree,n,mid)
            
            if val==k:
                return mid
            
            if val>k:
                # if wood collected is too much, we increase lower limit
                l = mid+1
            else:
                # if wood collected is too less, we decrease uppwer limit
                h = mid-1
        
        return -1"
######################################3
#array to link list
"# Define the ListNode class for the linked list nodes
class ListNode(object):
    def _init_(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to convert linked list to array
def linkedListToArray(head):
    """"""
    :type head: ListNode
    :rtype: List[int]
    """"""
    result = []
    current = head
    
    # Traverse the linked list
    while current:
        result.append(current.val)  # Add the value of the current node to the array
        current = current.next  # Move to the next node
    
    return result

# Example: Create a linked list: 1 -> 2 -> 3 -> None
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)

# Convert the linked list to an array
array = linkedListToArray(head)
print(array)  # Output: [1, 2, 3]"
##################################33
#sort direct
"class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        prices.sort()
        cost = prices[0] + prices[1]
        if cost<=money:
            x = money - cost
            return (x)
        return (money)"
```

## Submission at 2024-10-04 05:16:02


```
// Write code from scratch here
class ticket{
    int n ;
    int [] persons = new [n];
}
pubic static main{
    Scanner.sc = n.Nextint;
}
```

## Submission at 2024-10-04 05:34:23


```
// Write code from scratch here// Write code from scratch here
class ticket{
    int n ;
    int [] persons = new person[n];
    
}
    pubic static main{
    Scanner.sc = n.Nextint;
    
}
```

## Submission at 2024-10-04 05:38:02


```
// Write code from scratch here// Write code from scratch here
class ticket{
    int n ;
    int [] persons = new person[n];
    for(i=0;i=n;i++)
    {
        person[i] = person[n]
    }

}
    pubic static main{
    Scanner.sc = n.Nextint;
    
}
```

## Submission at 2024-10-04 05:57:00


```
// Write Java code from scratch
class bloom{
    int m;
    int k;
    int [] bloomday = new bloomday[n];

}
```

## Submission at 2024-10-04 06:11:57


```
// Write Java code from scratch
class temp{
    int n;
    int [] day = new day [n];
}
public static void main{
    
}
```

## Submission at 2024-10-04 06:24:10


```
// Write Java code from scratch// Write Java code from scratch
class temp{
    int n;
    int day;
    int [] day = new day [n];
    for(i=0;i<n+1;i++){
        if(day[i]<day[i+1]){
            return 1 ;
        }
        if(day[i]<day[i+2]){
            return 2;
        }
    }
}
public static void main{

    
}
```

## Submission at 2024-10-04 06:25:47


```
// Write Java code from scratch// Write Java code from scratch// Write Java code from scratch
class temp{
    int n;
    int day;
    int [] day = new day [n];
    for(i=0;i<n+1;i++){
        if(day[i]<day[i+1]){
            return 1 ;
        }
        if(day[i]<day[i+2]){
            return 2;
        }
    }
}
public static void main{

    
}
```

## Submission at 2024-10-04 06:28:52


```
// Write Java code from scratch// Write Java code from scratch// Write Java code from scratch
class temp{
    int i;
    int n;
    int day;
    int [] day = new day [n];
    for(i=0;i<n+1;i++){
        if(day[i]<day[i+1]){
            return 1 ;
        }
        if(day[i]<day[i+2]){
            return 2;
        }
    }
}
public static void main{
    

    
}
```

## Submission at 2024-10-25 05:29:05


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
  if 
    self.data = val
    self.left = None
    self.right = None
    return 0:

```

## Submission at 2024-10-25 05:35:52


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
  def postOrder(root):
  if 
    self.data = val
    self.left = None
    self.right = None
    return 0

    
```

## Submission at 2024-10-25 06:08:05


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
        if()
        {
         int data;
        }
            
        
    }
}
```

## Submission at 2024-10-25 06:09:07


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
        if()
        {
         int data;
        }
            
        
    }
}
```

## Submission at 2024-10-25 06:36:32


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
        // add your code here;
    }
}
```

## Submission at 2024-11-22 04:10:05


```
 Data structure to store a binary tree node
class Node:
    def __init__(self, data=None, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right
 
 
# Recursive function to perform inorder traversal on the tree
def inorder(root):
 
    # return if the current node is empty
    if root is None:
        return
 
    # Traverse the left subtree
    inorder(root.left)
 
    # Display the data part of the root (or current node)
    print(root.data, end=' ')
 
    # Traverse the right subtree
    inorder(root.right)
 
 
if __name__ == '__main__':
 
    ''' Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    '''
 
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.right.left = Node(5)
    root.right.right = Node(6)
    root.right.left.left = Node(7)
    root.right.left.right = Node(8)
 
    inorder(root)
```

## Submission at 2024-11-22 04:24:02


```
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deleteNode(self, root: Optional[TreeNode], key: int) -> Optional[TreeNode]:
        if root is None:
            return root
        
        successor = root
        if root.val == key:
            if root.right:
                successor = root.right
                newRight = successor
                while newRight.left :
                    newRight = newRight.left
                newRight.left = root.left
            else:
                successor = root.left
            del root
        elif root.val > key:
            root.left = self.deleteNode(root.left, key)
        else:
            root.right = self.deleteNode(root.right, key)

        return successor
        
```

## Submission at 2024-11-22 05:38:53


```
// Write Code From Scratch Here
int n,i;
// Assume a array
 array = arr[];
 // run a for loop to traverse through the array
 for (0<i<n);


```

## Submission at 2024-11-22 05:41:14


```
// Write Code From Scratch Here
int n,i;
// Assume a array
 array = arr[];
 // run a for loop to traverse through the array
 for (0<i<n);
    sum = arr[i]
    

```

## Submission at 2024-11-22 05:44:41


```
# write code from scratch
print("*")
print("**")
print("***")
print("**")
print("*")

```

## Submission at 2024-11-22 05:52:13


```
# Write Code From Scratch Here
#To do the sum of the array you need to traverse the array and add up the elements to the sum.
#it can be done using recursion of sum.

```

## Submission at 2024-11-22 06:01:50


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isBST(Node root)
    {
     if 
    }
}
```

## Submission at 2024-11-22 06:07:55


```
// Write Code From Scratch Here

arr = arr[]
for (int i; 0<i<arr.lenght;i++)
    sum = arr[i] + arr[i+1]
    arr[i] = arr[]

```

## Submission at 2024-11-22 06:22:15


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
```

## Submission at 2024-11-22 06:40:00


```
// Write Code From Scratch Herearr = arr[]
class solution
int i, sum;
for (int i; 0<i<arr.lenght;i++)
    sum = arr[i] + arr[i+1]
    arr[i] = arr[]
```

## Submission at 2024-11-22 06:40:03


```
// Write Code From Scratch Herearr = arr[]
class solution
int i, sum;
for (int i; 0<i<arr.lenght;i++)
    sum = arr[i] + arr[i+1]
    arr[i] = arr[]
```

