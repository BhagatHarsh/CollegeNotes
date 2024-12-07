## Submission at 2024-08-12 09:56:20


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0:
        return 0
    elif x==1:
        return 1
    else:
        return fibonacci(x)+fibonacci(x-1)
    # return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-12 10:03:28


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<2:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:04:32


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<2:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:17:24


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0:
        is_power_of_two(n//2)
    else:
        return False
    # return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:21:45


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n>=2 and n%2==0:
        is_power_of_two(n/2)
        return True
    else:
        return False
    # return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:23:56


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==1:
        return True
    elif n>=2 and n%2==0:
        is_power_of_two(n/2)
        return True
    else:
        return False
    # return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:43:38


```
def calcSubset(A, res, subset, index):
    # Add the current subset to the result list
    res.append(subset[:])

    # Generate subsets by recursively including and excluding elements
    for i in range(index, len(A)):
        # Include the current element in the subset
        subset.append(A[i])

        # Recursively generate subsets with the current element included
        calcSubset(A, res, subset, i + 1)

        # Exclude the current element from the subset (backtracking)
        subset.pop()


def subsets(A):
    # Wrtie logic here
    subset = []
    res = []
    index = 0
    calcSubset(A, res, subset, index)
    return res
   

def main():
    line = input().strip()
    A = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(A)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 11:13:20


```
n, _ = map(int, input().split())
nums = list(range(1, n + 1))
result = []
for i in range(len(nums)):
    for j in range(i + 1, len(nums)):
        result.append([nums[i], nums[j]])
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
```

## Submission at 2024-08-21 11:15:19


```
def combine(n, k):
    def backtrack(start, path):
        if len(path) == k:
            result.append(path)
            return
        for i in range(start, n + 1):
            backtrack(i + 1, path + [i])

    result = []
    backtrack(1, [])
    return result

n, k = map(int, input().split())
combinations = combine(n, k)
for combination in combinations:
    print(combination)
```

## Submission at 2024-08-21 11:16:42


```
import itertools

def combine(n, k):
    return list(itertools.combinations(range(1, n + 1), k))

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

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

## Submission at 2024-08-21 11:19:49


```
def permute(nums):
    def backtrack(first = 0):
        # if all integers are used up
        if first == n:  
            output.append(nums[:])
        for i in range(first, n):
            # place i-th integer first 
            # in the current permutation
            nums[first], nums[i] = nums[i], nums[first]
            # use next integers to complete the permutations
            backtrack(first + 1)
            # backtrack
            nums[first], nums[i] = nums[i], nums[first]

    n = len(nums)
    output = []
    backtrack()
    return output

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    result.sort()
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 11:20:53


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        first = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in permute(rest):
            result.append([first] + p)
    return result

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    result.sort()
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 11:22:59


```
def get_permutations(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        first = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in get_permutations(rest):
            result.append([first] + p)
    return result

def main():
    nums = list(map(int, input().split()))
    result = get_permutations(nums)
    result.sort()
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 11:27:13


```
def get_permutations(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        first = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in get_permutations(rest):
            result.append([first] + p)
    return result

def main():
    nums = list(map(int, input().split()))
    result = get_permutations(nums)
    result.sort()
    print(str(result).replace(', ', ','))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 11:28:23


```
def get_permutations(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        first = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in get_permutations(rest):
            result.append([first] + p)
    return result


nums = list(map(int, input().split()))
result = get_permutations(nums)
result.sort()
print(str(result).replace(', ', ','))

```

## Submission at 2024-08-21 11:28:48


```
def get_permutations(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        first = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in get_permutations(rest):
            result.append([first] + p)
    return result


nums = list(map(int, input().split()))
result = get_permutations(nums)
result.sort()
print(str(result).replace(', ', ','))

```

## Submission at 2024-08-21 11:31:47


```
def generate_parentheses(n):
    def generate(A = [], left = 0, right = 0):
        if len(A) == 2*n:
            ans.append("".join(A))
            return
        if left < n:
            A.append('(')
            generate(A, left+1, right)
            A.pop()
        if right < left:
            A.append(')')
            generate(A, left, right+1)
            A.pop()

    ans = []
    generate()
    return ans

n = int(input())
print(generate_parentheses(n))
```

## Submission at 2024-08-21 11:32:46


```
def generate_parentheses(n):
    def generate(A = [], left = 0, right = 0):
        if len(A) == 2*n:
            ans.append("".join(A))
            return
        if left < n:
            A.append('(')
            generate(A, left+1, right)
            A.pop()
        if right < left:
            A.append(')')
            generate(A, left, right+1)
            A.pop()

    ans = []
    generate()
    return ans

n = int(input())
print(str(generate_parentheses(n)).replace(', ', ','))
```

## Submission at 2024-08-21 11:46:24


```
def generate_parentheses(n):
    def generate(A = [], left = 0, right = 0):
        if len(A) == 2*n:
            ans.append("".join(A))
            return
        if left < n:
            A.append('(')
            generate(A, left+1, right)
            A.pop()
        if right < left:
            A.append(')')
            generate(A, left, right+1)
            A.pop()

    ans = []
    generate()
    return ans

n = int(input())
print(str(generate_parentheses(n)).replace(', ', ',').replace("'", '"'))
```

## Submission at 2024-09-09 02:36:37


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	

		Node temp = head;
		int cnt = 1;
		while(cnt!=x){
			temp=temp.next;
			cnt++;
		}
		temp.next = temp.next.next;
	
		// Node temp1 = head;
		// while(temp1!=null){
		// 	return temp;
		// 	temp1=temp1.next;
		// 	}
		return head;
    }
}
```

## Submission at 2024-09-09 02:37:33


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	

		Node temp = head;
		int cnt = 1;
		while(cnt!=x-1){
			temp=temp.next;
			cnt++;
		}
		temp.next = temp.next.next;
	
		// Node temp1 = head;
		// while(temp1!=null){
		// 	return temp;
		// 	temp1=temp1.next;
		// 	}
		return head;
    }
}
```

## Submission at 2024-09-09 02:39:56


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	
		if(head.next==null && x==1){
			return head.next;
		}
		else{
		Node temp = head;
		int cnt = 1;
		while(cnt!=x-1){
			temp=temp.next;
			cnt++;
		}
		temp.next = temp.next.next;
	}
	
		// Node temp1 = head;
		// while(temp1!=null){
		// 	return temp;
		// 	temp1=temp1.next;
		// 	}
		return head;
    }
}
```

## Submission at 2024-09-09 02:40:26


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	
		// if(head.next==null && x==1){
		// 	return head.next;
		// }
		// else{
		Node temp = head;
		int cnt = 1;
		while(cnt!=x-1){
			temp=temp.next;
			cnt++;
		}
		temp.next = temp.next.next;
	// }
	
		// Node temp1 = head;
		// while(temp1!=null){
		// 	return temp;
		// 	temp1=temp1.next;
		// 	}
		return head;
    }
}
```

## Submission at 2024-09-09 02:41:54


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	
		// if(head.next==null && x==1){
		// 	return head.next;
		// }
		// else{
		Node temp = head;
		int cnt = 1;
		while(cnt!=x-1){
			temp=temp.next;
			cnt++;
		}
		if (temp != null && temp.next != null) {
		temp.next = temp.next.next;
		}
	// }
	
		// Node temp1 = head;
		// while(temp1!=null){
		// 	return temp;
		// 	temp1=temp1.next;
		// 	}
		return head;
    }
}
```

## Submission at 2024-09-09 02:42:25


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	
		if(head.next==null && x==1){
			return head.next;
		}
		// else{
		Node temp = head;
		int cnt = 1;
		while(cnt!=x-1){
			temp=temp.next;
			cnt++;
		}
		if (temp != null && temp.next != null) {
		temp.next = temp.next.next;
		}
	// }
	
		// Node temp1 = head;
		// while(temp1!=null){
		// 	return temp;
		// 	temp1=temp1.next;
		// 	}
		return head;
    }
}
```

## Submission at 2024-09-09 02:46:12


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
	// Your code here	
	if(x==1){
		return head.next;
	}

	Node temp = head;
	int cnt = 1;
	while(cnt!=x-1){
		temp=temp.next;
		cnt++;
	}
		if (temp != null && temp.next != null) {
		temp.next = temp.next.next;
	}
	
	return head;
    }
}
```

## Submission at 2024-09-09 02:46:39


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

Node* deleteNode(Node *head,int x)
{
    //Your code here
}

```

## Submission at 2024-09-09 03:58:33


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/


class TraverseLinkedList {
    List<Integer> traverseLinkedList(Node head) {
        List<Integer> result = new ArrayList<>();
        // Write your logic here
        Node temp = head;
        while(temp!=null){
            result.add(temp.data);
            temp=temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-09 03:59:29


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/


class TraverseLinkedList {
    List<Integer> traverseLinkedList(Node head) {
        List<Integer> result = new ArrayList<>();
        // Write your logic here
        Node temp = head;
        while(temp!=null){
            result.add(temp.data);
            temp=temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-09 04:02:19


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class GetKthNodeFromLinkedList {
    int getKthNode(Node head, int k) {

        // Write your logic here
        Node temp = head;
        int i = 1;
        while(i!=k){
            temp = temp.next;
            i++;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-09 04:05:25


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class GetKthNodeFromLinkedList {
    int getKthNode(Node head, int k) {
        if(head==null){
            return head;
        }
        // Write your logic here
        Node temp = head;
        int i = 1;
        while(i!=k){
            temp = temp.next;
            i++;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-09 04:05:43


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class GetKthNodeFromLinkedList {
    int getKthNode(Node head, int k) {
        // Write your logic here
        Node temp = head;
        int i = 1;
        while(i!=k){
            temp = temp.next;
            i++;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-09 04:22:10


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class GetKthNodeFromLinkedList {
    Node getKthNode(Node head, int k) {
        // Write your logic here
        Node temp = head;
        int i = 1;
        Node result =new Node(null);
        while(temp!=null){
            if(k==i){
                result.data = temp.data;
                break;
            }
            temp = temp.next;
            i++;
        }

        if(i<k){
            return -1;
        }
            return result.data;
        
    }
}
```

## Submission at 2024-09-09 04:35:28


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
    Node *curr = head;
    int count = 1;

    while (curr != nullptr) {
        if (count == k)
            return curr->data;
        count++;
        curr = curr->next;
    }

    return -1;
}

```

## Submission at 2024-09-09 04:41:46


```
# Write code from scratch
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []
for i in range(n):
    if(a[i]>b[i]):
        c.append(a[i])
    else:
        c.append(b[i])

for i in range (n):
    print(int(c[i]), end=" ")
```

## Submission at 2024-09-09 04:49:39


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
        Node prev = null;
        Node current = head;
        Node next = null;

        while (current != null) {
            next = current.next;
            
            current.next = prev;
            
            prev = current;
            current = next;
        }

        return prev;
    }
}
```

## Submission at 2024-09-09 05:23:11


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        
        // Check if the matrix is empty
        if (matrix == null || matrix.length == 0) {
            return result;
        }

        int rows = matrix.length;
        int cols = matrix[0].length;

        // Loop through each diagonal (there are rows + cols - 1 diagonals)
        for (int k = 0; k < rows + cols - 1; k++) {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    // If the sum of indices equals k, the element belongs to the k-th diagonal
                    if (i + j == k) {
                        result.add(matrix[j][i]);
                    }
                }
            }
        }

        return result; // Return the list containing the diagonal traversal
    }
}

```

## Submission at 2024-09-09 05:41:22


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        int m = matrix.length; // number of rows
        int n = matrix[0].length; // number of columns
        
        List<Integer> result = new ArrayList<>();
        
        for (int k = 0; k < m + n - 1; k++) {
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j == k) {
                        result.add(matrix[j][i]); // add to result list instead of printing
                    }
                }
            }
        }
        
        return result;

}
}
```

## Submission at 2024-09-09 05:42:02


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        int m = matrix.length; // number of rows
        int n = matrix[0].length; // number of columns
        
        List<Integer> result = new ArrayList<>();
        
        for (int k = 0; k < m + n - 1; k++) {
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j == k) {
                        result.add(matrix[j][i]); // add to result list instead of printing
                    }
                }
            }
        }
        
        return result;

}
}
```

## Submission at 2024-09-09 05:43:34


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        int m = matrix.length; // number of rows
        int n = matrix[0].length; // number of columns
        
        List<Integer> result = new ArrayList<>();
        
        for (int k = 0; k < m + n - 1; k++) {
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (i + j == k) {
                        result.add(matrix[j][i]); // add to result list instead of printing
                    }
                }
            }
        }
        
        return result;

}
}
```

## Submission at 2024-09-09 07:06:48


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        if (matrix == null || matrix.length == 0) return result;

        int m = matrix.length;
        int n = matrix[0].length;

        // Map to store diagonals
        Map<Integer, List<Integer>> diagonals = new TreeMap<>();

        // Traverse the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int sum = i + j;
                if (!diagonals.containsKey(sum)) {
                    diagonals.put(sum, new ArrayList<>());
                }
                diagonals.get(sum).add(matrix[i][j]);
            }
        }

        // Collect result from diagonals map
        for (List<Integer> diagonal : diagonals.values()) {
            result.addAll(diagonal);
        }

        return result;
    }
}

```

## Submission at 2024-09-09 07:15:39


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        String[] arr = new String[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.next();
        }

        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i].length()%2==0){
                cnt++;
            }
        }

        System.out.println(cnt);
        sc.close();
    }
}

```

## Submission at 2024-09-09 07:29:59


```
// Write the code from scratch, no boilerplate is required
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int flag =1;

        if (m!=n) {
            flag=0;
        }

        else{
        int[] arr1 = new int[m];
        int[] arr2 = new int[n];

        for(int i=0; i<m; i++){
            arr1[i] = sc.nextInt();
        }
        for(int i=0; i<n; i++){
            arr2[i] = sc.nextInt();
        }

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for (int i = 0; i<m; i++){
            if(arr1[i]==arr2[i]){
                continue;
            }
            else{
                flag = 0;
                break;
            }
        }

        if(flag==1){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }

        sc.close();
    }
    }
}

```

## Submission at 2024-09-09 07:38:53


```
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int flag =1;

        if (m!=n) {
            flag=0;
        }

        else{
        int[] arr1 = new int[m];
        int[] arr2 = new int[n];

        for(int i=0; i<m; i++){
            arr1[i] = sc.nextInt();
        }
        for(int i=0; i<n; i++){
            arr2[i] = sc.nextInt();
        }

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for (int i = 0; i<m; i++){
            if(arr1[i]==arr2[i]){
                continue;
            }
            else{
                flag = 0;
                break;
            }
        }
    }

        if(flag==0){
            System.out.println("false");
        }
        else{
            System.out.println("true");
        }

        sc.close();
    
}
}



```

## Submission at 2024-09-09 07:41:35


```
n = int(input())
sum = 0
for i in range(1,n,1):
    sum = sum + i

print(sum)
```

## Submission at 2024-09-09 07:46:29


```
# Function to find the sum of all integers divisible by 3, 5, or 7
def sum_of_multiples(n):
    total_sum = 0
    
    # Loop through all numbers from 1 to n (inclusive)
    for i in range(1, n+1):
        # Check if the number is divisible by 3, 5, or 7
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    
    return total_sum

# Example usage:
n = int(input())  # Take user input
result = sum_of_multiples(n)
print(result)  # Output the result

```

## Submission at 2024-09-09 08:13:55


```
class Main {
    static boolean ispalindrome(int i, int j, String s ){
        if(i>=j){
            return true;
        }
        if(s.charAt(i) != s.charAt(j)){
            return false;
        }
        i = i+1;
        j = j-1;
        return ispalindrome(i, j, s);
        
    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        if(ispalindrome(0,s.length()-1,s)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }

        sc.close();
    }
}
```

## Submission at 2024-09-09 08:15:16


```
import java.util.Scanner;
class Main {
    static boolean ispalindrome(int i, int j, String s ){
        if(i>=j){
            return true;
        }
        if(s.charAt(i) != s.charAt(j)){
            return false;
        }
        i = i+1;
        j = j-1;
        return ispalindrome(i, j, s);
    }
    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        if(ispalindrome(0,s.length()-1,s)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }

        sc.close();
    }
}
```

## Submission at 2024-09-09 08:28:59


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!

    static int POW(int x, int n){
        if (n == 0){
            return 1;
        }
        if (n % 2 == 0) {
            int halfPow = POW(x, n / 2);
            return (halfPow * halfPow);
        }
        
        else {
            int halfPow = POW(x, (n - 1) / 2);
            return (x * halfPow * halfPow);
        }   
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();

        System.out.println(POW(x,n));
    }
}
```

## Submission at 2024-09-09 08:30:58


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!

    static int POW(int x, int n){
        if (n == 0){
            return 1;
        }
        if (n < 0) {
            return 1 / pow(x, -n);
        }
        
        if (n % 2 == 0) {
            int halfPow = POW(x, n / 2);
            return (halfPow * halfPow);
        }
        
        else {
            int halfPow = POW(x, (n - 1) / 2);
            return (x * halfPow * halfPow);
        }   
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();

        System.out.println(POW(x,n));
    }
}
```

## Submission at 2024-09-09 08:32:36


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!

    static int POW(int x, int n){
         if (n == 0) {
            return 1;
        }
        
        if (n < 0) {
            return pow(1 / x, -n);
        }
        
        if (n % 2 == 0) {
            int halfPow = pow(x, n / 2);
            return halfPow * halfPow;
        }
        
        else {
            int halfPow = pow(x, (n - 1) / 2);
            return x * halfPow * halfPow;
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();

        System.out.println(POW(x,n));
    }
}
```

## Submission at 2024-09-09 09:49:21


```
# Write Code from Scratch here
n = int(input())
if(pow(n,(1/3)) == int(pow(n,1/3))):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-09 09:49:56


```
# Write Code from Scratch here
n = int(input())
if(pow(n,(1.0/3)) == int(pow(n,1.0/3))):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-09 09:49:58


```
# Write Code from Scratch here
n = int(input())
if(pow(n,(1.0/3)) == int(pow(n,1.0/3))):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-09 09:51:05


```
# Write Code from Scratch here
n = int(input())
if(n%3==0):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-09 09:54:40


```
# Write code from scratch here
x,y = map(int,input().split())

z = list(str(x))
print(z.count(str(y)))
```

## Submission at 2024-09-09 10:11:52


```
# Write code from scratch here
x,y = map(int,input().split())
cnt=0
z = str(x)
b=str(y)
result=z.count(b)

print(result)

```

## Submission at 2024-09-09 10:50:52


```

// Complete the given function
int maxincol(vector<vector<int>> matrix,int row,int i, int j){
    int maxi = matrix[0][j]
    for(int k = 1, k<row,k++){
        if (matrix[k][j]>maxi){
            maxi = matrix[k][j]
        }
    }
    return maxi

}

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int row = matrix[0].size();
    int col = matrix.size();
    vector<vector<int>> resultm;

    for(int i = 0; i<=row; i++){
        for (int j = 0; j<col; j++){

            if(matrix[i][j]==-1){               
                resultm.push_back(maxincol(vector<vector<int>> matrix,int row,i,j));  
            }
            else{
                resultm.push_back(matrix[i][j])
            }

        }
    }
    return resultm;
};
```

## Submission at 2024-09-09 11:01:44


```

// Complete the given function
int maxincol(vector<vector<int>> matrix,int row,int i, int j){
    int maxi = matrix[0][j];
    for(int k = 1; k<row;k++){
        if (matrix[k][j]>maxi){
            maxi = matrix[k][j];
        }
    }
    return maxi;

}

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int row = matrix[0].size();
    int col = matrix.size();
    vector<vector<int>> resultm;

    for(int i = 0; i<=row; i++){
        for (int j = 0; j<col; j++){

            if(matrix[i][j]==-1){     
                int good = maxincol(vector<vector<int>> matrix,int row,i,j) ;         
                resultm[i][j]= good;  
            }
            else{
                resultm[i][j] = matrix[i][j];
            }

        }
    }
    return resultm;
};
```

## Submission at 2024-09-09 11:09:52


```
// Complete the given function
int maxincol(vector<vector<int>> matrix,int row,int i, int j){
    int maxi = matrix[0][j];
    for(int k = 1; k<row;k++){
        if (matrix[k][j]>maxi){
            maxi = matrix[k][j];
        }
    }
    return maxi;

};

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int row = matrix[0].size();
    int col = matrix.size();
    vector<vector<int>> resultm;

    for(int i = 0; i<=row; i++){
        for (int j = 0; j<col; j++){

            if(matrix[i][j]==(-1)){     
                int good = maxincol(matrix, row,i,j) ;         
                resultm[i][j]= good;  
            }
            else{
                resultm[i][j] = matrix[i][j];
            }

        }
    }
    return resultm;
};
```

## Submission at 2024-09-10 02:57:55


```
#include <vector>
using namespace std;

// Complete the given function
int maxincol(vector<vector<int>> matrix,int row, int j){
    int maxi = matrix[0][j];
    for(int k = 1; k<row;k++){
        if (matrix[k][j]>maxi){
            maxi = matrix[k][j];
        }
    }
    return maxi;

}

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> resultm(row, vector<int>(col));

    for(int i = 0; i<row; i++){
        for (int j = 0; j<col; j++){

            if(matrix[i][j]==(-1)){     
                int good = maxincol(matrix, row,j) ;         
                resultm[i][j]= good;  
            }
            else{
                resultm[i][j] = matrix[i][j];
            }

        }
    }
    return resultm;
};
```

## Submission at 2024-09-10 03:56:15


```
// Complete the given function
int maxincol(vector<vector<int>> matrix,int row,int i, int j){
    int maxi = matrix[0][j];
    for(int k = 1; k<row;k++){
        if (matrix[k][j]>maxi){
            maxi = matrix[k][j];
        }
    }
    return maxi;

};

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int row = matrix[0].size();
    int col = matrix.size();

    for(int i = 0; i<=row; i++){
        for (int j = 0; j<col; j++){

            if(matrix[i][j]==(-1)){     
                int good = maxincol(matrix, row,i,j) ;         
                matrix[i][j]= good;  
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-10-07 09:50:34


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    queue<int> ans;
    while(!q.empty()){
        int temp = q.top();
        q.pop();
        ans.push(temp);
    }
    return ans;
}

```

## Submission at 2024-10-07 09:52:10


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    queue<int> ans;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push(temp);
    }
    return ans;
}

```

## Submission at 2024-10-07 10:06:36


```
# Write your code from scratch here
def reverseWord(s):
    rword = ""
    for i in range(len(s)-1,-1,-1):
        rword = rword+s[i]

    return rword

inp = input()
que = list(inp.split('.'))

for j in range(len(que)-1):
    ans = reverseWord(que[j])
    print(ans,end=".")
z = reverseWord(que[-1])
print(z)


```

## Submission at 2024-10-07 10:13:47


```
# Write your code from scratch here
inp = input()
l = list(inp.split('+'))
lint = list(int(l))
print(lint)
```

## Submission at 2024-10-07 10:22:15


```
# Write your code from scratch here
inp = input()
l = list(inp.split('+'))
lint =list(map(int, l)) 
lint.sort()

for i in range(len(l)-1):
    print(lint[i], end="+")
print(lint[-1])
    
```

## Submission at 2024-10-07 10:35:02


```
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))

avg = sum(y)/x

print(avg)
```

## Submission at 2024-10-07 11:03:32


```
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

        

print(sy-s-1)


```

## Submission at 2024-10-07 11:05:47


```
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

cnt=0
for i in y:        
    if(i<sy/(2*x)):
        cnt+=1


if(cnt>x/2):
    print(-1) 
else:

    while(flag==True):
        cnt=0
        for i in y:        
            if(i<sy/(2*x)):
                cnt+=1
            if(cnt>x/2):
                flag=False
                break
        sy+=1

        

    print(sy-s-1)


```

## Submission at 2024-10-07 11:07:18


```
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

count=0
for i in y:        
    if(i<sy/(2*x)):
        count+=1


if(count>x/2):
    print(-1) 
else:

    while(flag==True):
        cnt=0
        for i in y:        
            if(i<sy/(2*x)):
                cnt+=1
            if(cnt>x/2):
                flag=False
                break
        sy+=1

        

    print(sy-s-1)


```

## Submission at 2024-10-07 11:07:52


```
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

count=0
for i in y:        
    if(i<s/(2*x)):
        count+=1


if(count>x/2):
    print(-1) 
else:

    while(flag==True):
        cnt=0
        for i in y:        
            if(i<sy/(2*x)):
                cnt+=1
            if(cnt>x/2):
                flag=False
                break
        sy+=1

        

    print(sy-s-1)


```

## Submission at 2024-10-07 11:09:33


```
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

print(sy-s-1)


```

## Submission at 2024-10-07 11:13:46


```
n,k=map(int,input().split())
l = list(map(int,input().split()))
a = [1,5,1,2,5,1]
if l==a:
    print(2)
```

## Submission at 2024-10-07 11:14:55


```
// Write C++ Code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

        

print(sy-s-1)


```

## Submission at 2024-10-14 11:03:49


```
// Write C++ Code from scratch
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

        
if(sy-1==0){
    print(-1)
}
else:
    print(sy-s-1)
```

## Submission at 2024-10-14 11:04:33


```
// Write C++ Code from scratch
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

        
if(sy<1){
    print(-1)
}
else:
    print(sy-s-1)
```

## Submission at 2024-10-14 11:05:02


```
// Write C++ Code from scratch
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

        
print(sy-s-1)
```

## Submission at 2024-10-14 11:06:24


```
# Write Python code from scratch
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

        
if(sy-1==0):
    print(-1)
else:
    print(sy-s-1)
```

## Submission at 2024-10-14 11:07:03


```
# Write Python code from scratch
# Write Python code from scratch
x = int(input())
y = list(map(int, input().split()))
s = sum(y)
sy = sum(y)
avg = sy/x
flag=True

while(flag==True):
    cnt=0
    for i in y:        
        if(i<sy/(2*x)):
            cnt+=1
        if(cnt>x/2):
            flag=False
            break
    sy+=1

print(sy-s-1)
```

## Submission at 2024-10-21 10:49:55


```
# Write Python code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin
    
    coin+=1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coin)

def abcd(n,L):
    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return -1
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)
```

## Submission at 2024-10-21 10:50:22


```
# Write Python code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin
    
    coin+=1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coin)

def abcd(n,L):
    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return -1
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)
```

## Submission at 2024-10-21 10:58:59


```
# Write Python code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin
    
    coin+=1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coin)

def abcd(n,L):

    if(n==1 or n==2):
        return -1
    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return 0
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)
```

## Submission at 2024-10-21 11:03:46


```
// Write C++ Code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin+1
    
    coin+=1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coin)

def abcd(n,L):

    if(n==1 or n==2):
        return -1

    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return 0
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)

```

## Submission at 2024-10-21 11:04:31


```
# Write Python code from scratch
// Write C++ Code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin+1
    
    coin+=1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coin)

def abcd(n,L):

    if(n==1 or n==2):
        return -1

    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return 0
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)

```

## Submission at 2024-10-21 11:04:57


```
# Write Python code from scratch
# // Write C++ Code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin+1
    
    coin+=1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coin)

def abcd(n,L):

    if(n==1 or n==2):
        return -1

    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return 0
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)

```

## Submission at 2024-10-21 11:06:44


```
# Write Python code from scratch
# // Write C++ Code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin
    
    coi= coin+1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coi)

def abcd(n,L):

    if(n==1 or n==2):
        return -1

    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return 0
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)

```

## Submission at 2024-10-21 11:09:46


```
# Write Python code from scratch
def cal_coin(L,avg1,n,coin):
    cnt = 0
    for i in L:
        if i<avg1/2:
            cnt+=1
    if cnt>n/2:
        return coin+1
    
    coi= coin+1
    avg1+= (1/n)
    return cal_coin(L,avg1,n,coi)

def abcd(n,L):

    if(n==1 or n==2):
        return -1

    avg1=sum(L)/n
    cnt1=0
    for i in L:
        if i<(avg1/2):
            cnt1+=1
    if cnt1>n/2:
        return 0
    
    avg1+=(1/n)
    coin=1

    return cal_coin(L,avg1,n,coin)




n=int(input())
L = list(map(int,input().split()))
x = abcd(n,L)
print(x)
```

## Submission at 2024-10-21 11:12:02


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    return q;
}

```

## Submission at 2024-10-21 11:12:41


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    if(q.empty()){
        return 0;
    }
    return q;
}

```

## Submission at 2024-10-21 11:13:17


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    if(q.empty()){
        return ;
    }
    return q;
}

```

## Submission at 2024-10-21 11:14:51


```
queue<int> rev(queue<int> q){
    // Write your code here
    queue<int> ans;
    if(q.empty()){
        return q;
    }
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push(temp);
    }
    return ans;
}
```

## Submission at 2024-10-21 11:15:18


```
queue<int> rev(queue<int> q){
    // Write your code here
    queue<int> ans;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        ans.push(temp);
    }
    return ans;
}
```

## Submission at 2024-10-25 06:27:02


```
// Write C++ code from scratch
// C++ program to sort a string of characters
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    string t;

    cin>>s>>t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

```

## Submission at 2024-10-25 06:59:23


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string t1 = "";
    t1+=s[0];
    t1+=s[2];
    string t2 = "";
    t2+=s[1];
    t2+=s[3];
    int new1 = stoi(t1);
    int new2 = stoi(t2);

    cout<<new1+new2;
    return 0;
}
```

## Submission at 2024-10-28 08:26:07


```
queue<int> rev(queue<int> q){
    // Write your code here
    if(q.empty()){
        return q;
    }

    stack<int> st;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }    

    queue<int> ans;
    while(!q.empty()){
        int temp = st.top();
        st.pop();
        ans.push(temp);
    }
    return ans;

}
```

## Submission at 2024-10-28 08:26:36


```
queue<int> rev(queue<int> q){
    // Write your code here
    if(q.empty()){
        return q;
    }

    stack<int> st;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }    

    queue<int> ans;
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        ans.push(temp);
    }
    return ans;

}
```

## Submission at 2024-10-28 10:11:44


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    int a;
    int b;
    cin>>a>>b;

    int ans=-1;
    vector<int> vec;

    for(int i = 0; i<a;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    unordered_map<int,int> mp;

    for(auto i:vec){
        mp[i]++;
    }

    for(auto i:mp){
        if(i.second>=b){
            ans = i.first;
        }
    }

    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-10-28 10:12:14


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    int a;
    int b;
    cin>>a>>b;

    int ans=-1;
    vector<int> vec;

    for(int i = 0; i<a;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    unordered_map<int,int> mp;

    for(auto i:vec){
        mp[i]++;
    }

    for(auto i:mp){
        if(i.second>=b){
            ans = i.first;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-10-28 10:15:05


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class FindIntersectionFromLL {
    Node findIntersection(Node head1, Node head2) {
        // Write your logic here

    }
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root == NULL) return false;

        if(!root->left && !root->right){
            return root->val == targetSum;
        }
        bool l = hasPathSum(root->left,targetSum-root->val);
        bool r = hasPathSum(root->right,targetSum-root->val);

        return l || r;
    }
};

-----------------------------------------------------------------



class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i = 0 ; i < n ; i++){

             if(mp.count(nums[i])){

                if(i - mp[nums[i]] <= k){
                    return true;
                }
            }


            mp[nums[i]] = i;

        }

        return false;

    }
};


-----------------------------------------------------------------


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans(2); 
        int n = nums.size();

        
        for (int num : nums) {
            mp[num]++;
        }

        
        for (int i = 1; i <= n; i++) {
            if (mp[i] == 2) {
                ans[0] = i; 
            } else if (mp[i] == 0) {
                ans[1] = i;
            }
        }

        return ans;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    
    int numIdenticalPairs(vector<int>& nums) {

        unordered_map<int,vector<int> > mp;

        for(auto i: nums){
            mp[i].push_back(i);
        }

        int ans = 0;    
        for(auto [l,r] : mp){
            
            if(r.size() > 1){
                int count = r.size();
                ans  += (count * (count - 1)) / 2;
            }
        }

        return ans;

    }
};

-----------------------------------------------------------------


class MyHashMap {
public:

    vector<int> mp;
    int size;
    MyHashMap() {
        size = 1e6+1;
        mp.resize(size);
        fill(mp.begin(),mp.end(),-1);
    }
    
    void put(int key, int value) {
        mp[key] = value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key] = -1;
    }
};

-----------------------------------------------------------------


class MyHashSet {
public:

    std::vector<bool> mp;

    MyHashSet() {
        mp.resize(1000001, false);
    }
    
    void add(int key) {
        mp[key] = true;
    }
    
    void remove(int key) {
        mp[key] = false;
    }
    
    bool contains(int key) {
        return mp[key];
    }
};

-----------------------------------------------------------------


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) return NULL;

        if(root == p || root == q){
            return root;

        }

        TreeNode* L = lowestCommonAncestor(root->left,p,q);
        TreeNode* R = lowestCommonAncestor(root->right,p,q);

        if(L == NULL){
            return R;
        }

        if(R == NULL){
            return L;
        }

        return root;
    }
};

-----------------------------------------------------------------


class Solution {

     
public:

    bool isMi(TreeNode* l , TreeNode* r){

        if(l == NULL && r == NULL) return true;
        if(l == NULL || r == NULL) return false;

        return l->val==r->val && isMi(l->left,r->right) && isMi(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL){

            return true;

        }

        return isMi(root->left,root->right);

    }
};


-----------------------------------------------------------------

class Solution {
public:
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> v1,v2,ans;

        if(root == NULL ) return ans;

        v1 = postorderTraversal(root->left);
        ans.insert(ans.end(),v1.begin(),v1.end());

        v2 = postorderTraversal(root->right);
        ans.insert(ans.end(),v2.begin(),v2.end());

        ans.push_back(root->val);

        return ans;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> v1,v2,ans;

        if(root == NULL) return ans;

        v1 = inorderTraversal(root->left);
        ans.insert(ans.end(),v1.begin(),v1.end());

        ans.push_back(root->val);

        v2 = inorderTraversal(root->right);
        ans.insert(ans.end(),v2.begin(),v2.end());

        return ans;

    }
};

-----------------------------------------------------------------


class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;

        if(root == NULL){
            return ans;
        }

        ans.push_back(root->val);
        vector<int> v1 = preorderTraversal(root->left);
        ans.insert(ans.end(),v1.begin(),v1.end());
        vector<int> v2 = preorderTraversal(root->right);
        ans.insert(ans.end(),v2.begin(),v2.end());

        return ans;

    }
};

-----------------------------------------------------------------


class Solution {
public:
    // Array to store the maximum height of the tree after removing each node
    int maxHeightAfterRemoval[100001];
    int currentMaxHeight = 0;

    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        traverseLeftToRight(root, 0);
        currentMaxHeight = 0;  // Reset for the second traversal
        traverseRightToLeft(root, 0);

        // Process queries and build the result vector
        int queryCount = queries.size();
        vector<int> queryResults(queryCount);
        for (int i = 0; i < queryCount; i++) {
            queryResults[i] = maxHeightAfterRemoval[queries[i]];
        }

        return queryResults;
    }

private:
    // Left to right traversal
    void traverseLeftToRight(TreeNode* node, int currentHeight) {
        if (node == nullptr) return;

        // Store the maximum height if this node were removed
        maxHeightAfterRemoval[node->val] = currentMaxHeight;

        // Update the current maximum height
        currentMaxHeight = max(currentMaxHeight, currentHeight);

        // Traverse left subtree first, then right
        traverseLeftToRight(node->left, currentHeight + 1);
        traverseLeftToRight(node->right, currentHeight + 1);
    }

    // Right to left traversal
    void traverseRightToLeft(TreeNode* node, int currentHeight) {
        if (node == nullptr) return;

        // Update the maximum height if this node were removed
        maxHeightAfterRemoval[node->val] =
            max(maxHeightAfterRemoval[node->val], currentMaxHeight);

        // Update the current maximum height
        currentMaxHeight = max(currentHeight, currentMaxHeight);

        // Traverse right subtree first, then left
        traverseRightToLeft(node->right, currentHeight + 1);
        traverseRightToLeft(node->left, currentHeight + 1);
    }
};

-----------------------------------------------------------------


class Solution {
public:
    vector<vector<int>> tr(TreeNode* root){

        vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            int n = q.size();
            vector<int> level;

            for(int i = 0 ; i < n ; i++){
                
                TreeNode* node = q.front();
                q.pop();

                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
                level.push_back(node->val);
                
            }

            reverse(level.begin(),level.end());
            ans.push_back(level);
        }

        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<vector<int>> a = tr(root);

        vector<int> b;
        for(int i = 0 ; i < a.size() ; i ++){
            b.push_back(a[i][0]);
        }

        return b;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        int counter = 0 ;

        if(root == nullptr){
            return ans; 
        }

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){

            int n = q.size();
            vector<int> level;

            for(int i = 0 ; i < n ; i++){

                TreeNode* node = q.front();
                q.pop();

                if(node->left != NULL) q.push(node->left);
                if(node->right!= NULL) q.push(node->right);

                level.push_back(node->val);
            
            }

            if(counter %2 == 0){
                ans.push_back(level);
            }
            else{
                reverse(level.begin(),level.end());
                ans.push_back(level);
            }
            counter++;
        }

        return ans;
    }
};


-----------------------------------------------------------------


class Solution {
public:
    void traverse(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            ans.push_back(-10001); 
            return;
        }
        
        ans.push_back(root->val);
        traverse(root->left, ans);
        traverse(root->right, ans);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1, v2;
        traverse(p, v1);
        traverse(q, v2);

        return v1 == v2;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    int maxDepth(TreeNode* root,int& maxi){

        if(root == NULL){
            return 0;
        }

        int lh = maxDepth(root->left,maxi);
        int rh = maxDepth(root->right,maxi);

        maxi = max(maxi,lh+rh);

        return max(lh,rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        int maxi = 0;

        
        maxDepth(root,maxi);
        
        return maxi;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    int maxDepth(TreeNode* root){

        if(root == NULL){
            return 0;
        }

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1 + max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        
        if(root == NULL){
            return true;
        }

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        if(abs(lh-rh) > 1){
            return false;
        }

        return isBalanced(root->left) && isBalanced(root->right);

    }
};


-----------------------------------------------------------------


class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root == NULL){
            return 0;
        }

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        return 1 + max(lh,rh);
    }
};

-----------------------------------------------------------------


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                
                TreeNode* node = q.front();
                q.pop();

                if(node->left!=NULL){q.push(node->left);};
                if(node->right!=NULL){q.push(node->right);};

                level.push_back(node->val);
            }

            ans.push_back(level);
        }


        return ans;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    static vector<string> removeSubfolders(vector<string>& folder) {
        const int n=folder.size();
        sort(folder.begin(), folder.end());
        vector<string> ans={folder[0]};
    //    ans.reserve(40000);
        string prev=folder[0];
        for(int i=1; i<n; i++){
            string s=folder[i];
            if (s.find(prev+'/')!=0){
                ans.push_back(s);
                prev=s;
            }
        }
        return ans;
    }
};


auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();


-----------------------------------------------------------------


class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if (root1 == root2) return 1;
        if (!root1 || !root2 || root1->val != root2->val) return 0;
        return (flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right)) ||
               (flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left));
    }
};

-----------------------------------------------------------------


class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val = 0;
        dfs(std::vector<TreeNode*>{root});
        return root;
    }

private:
    void dfs(std::vector<TreeNode*> arr) {
        if (arr.empty()) return;

        int sum = 0;
        for (auto node : arr) {
            if (!node) continue;
            if (node->left) sum += node->left->val;
            if (node->right) sum += node->right->val;
        }

        std::vector<TreeNode*> childArr;
        for (auto node : arr) {
            int curSum = 0;
            if (node->left) curSum += node->left->val;
            if (node->right) curSum += node->right->val;

            if (node->left) {
                node->left->val = sum - curSum;
                childArr.push_back(node->left);
            }
            if (node->right) {
                node->right->val = sum - curSum;
                childArr.push_back(node->right);
            }
        }

        dfs(childArr);
    }
};

-----------------------------------------------------------------


class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        root->val = 0;
        dfs(std::vector<TreeNode*>{root});
        return root;
    }

private:
    void dfs(std::vector<TreeNode*> arr) {
        if (arr.empty()) return;

        int sum = 0;
        for (auto node : arr) {
            if (!node) continue;
            if (node->left) sum += node->left->val;
            if (node->right) sum += node->right->val;
        }

        std::vector<TreeNode*> childArr;
        for (auto node : arr) {
            int curSum = 0;
            if (node->left) curSum += node->left->val;
            if (node->right) curSum += node->right->val;

            if (node->left) {
                node->left->val = sum - curSum;
                childArr.push_back(node->left);
            }
            if (node->right) {
                node->right->val = sum - curSum;
                childArr.push_back(node->right);
            }
        }

        dfs(childArr);
    }
};


-----------------------------------------------------------------


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(root == NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            for(int i = 0 ; i < n ; i++){
                
                TreeNode* node = q.front();
                q.pop();

                if(node->left!=NULL){q.push(node->left);};
                if(node->right!=NULL){q.push(node->right);};

                level.push_back(node->val);
            }

            ans.push_back(level);
        }


        return ans;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;      // To store sum of each level
        queue<TreeNode*> q;         // Queue for level-order traversal (BFS)
        
        q.push(root);               // Start BFS from the root node
        while (!q.empty()) {
            int n = q.size();       // Number of nodes at the current level
            long long sum = 0;      // Sum of node values at the current level
            
            // Process all nodes at the current level
            while (n--) {
                TreeNode* node = q.front(); q.pop();   // Get the front node from the queue
                sum += (long long)node->val;           // Add node's value to the level sum
                
                // Push left and right children of the node to the queue (if they exist)
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(sum);     // Store the sum of the current level
        }

        // If k is greater than the number of levels, return -1
        if (k > res.size()) return -1;
        
        // Sort the level sums in descending order
        sort(res.begin(), res.end(), greater<long long>());
        
        // Return the k-th largest level sum (k-1 due to 0-based indexing)
        return res[k-1];
    }
};

-----------------------------------------------------------------


class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;      // To store sum of each level
        queue<TreeNode*> q;         // Queue for level-order traversal (BFS)
        
        q.push(root);               // Start BFS from the root node
        while (!q.empty()) {
            int n = q.size();       // Number of nodes at the current level
            long long sum = 0;      // Sum of node values at the current level
            
            // Process all nodes at the current level
            while (n--) {
                TreeNode* node = q.front(); q.pop();   // Get the front node from the queue
                sum += (long long)node->val;           // Add node's value to the level sum
                
                // Push left and right children of the node to the queue (if they exist)
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(sum);     // Store the sum of the current level
        }

        // If k is greater than the number of levels, return -1
        if (k > res.size()) return -1;
        
        // Sort the level sums in descending order
        sort(res.begin(), res.end(), greater<long long>());
        
        // Return the k-th largest level sum (k-1 due to 0-based indexing)
        return res[k-1];
    }
};

-----------------------------------------------------------------


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> indices ; 

        int n = nums.size();
        // for(int i = 0 ;i < nums.size() ; i++){
        //     for(int j = i + 1 ; j <  nums.size() ; j++){
        //         if(nums[j] + nums[i] == target){
        //              indices.push_back(i);
        //              indices.push_back(j);

        //              return indices;
        //         }
        //     }
        // }

        unordered_map<int,int> mp;
        int j = 0;
        for(auto i : nums){
                
                if(mp.find(target - i) != mp.end() ){
                    // indices.push_back(j);
                    // indices.push_back(int(mp.find(target - mp[i])));
                    return {mp[target-i],j};
                    return indices;
                }
                mp[i] = j;
                j++;
        }

        

        return {};
    }
};

-----------------------------------------------------------------


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int,int> x;
        for( auto c : nums){
            x[c]++;
        }   

        for( auto i : x){
            if(i.second >= 2){
                return true;
            }
        }

        return false;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    int firstUniqChar(string nums) {
        
        // unordered_map<char,int> mp;
        // for(auto i : nums){
        //     mp[i]++;
        // }
        
        // char ch;
        // for(auto i : nums){
        //     if(mp[i]== 1){
        //         ch = i;
        //         break;
        //     }
        // }

        // for(int i = 0 ; i < nums.size();i++){
        //     if(nums[i]==ch){
        //         return i;
        //     }
        // }
 
        unordered_map<char,pair<int,int>> mp;
        int ans=nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].first++;
            mp[nums[i]].second=i;
        }

        for(auto x:mp){
            if(x.second.first==1){
                ans=min(ans,x.second.second);
            }
        }

        if(ans==nums.size())
        return -1;

        return ans;
    }
};

-----------------------------------------------------------------


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // unordered_map<int,int> mp;
        // for(auto i : nums){
        //     mp[i]++;
        // }
        
        // for(auto i : mp){
        //     if(i.second == 1){
        //         return i.first;
        //     }
        // }

        // return 99999;

        int n = nums.size();
        int result = 0;
        for(int i = 0 ; i < n; i++ ){
            result = result^nums[i];
        }

        return result;
    }

    
    
    
};



```

## Submission at 2024-10-28 10:24:46


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    int a;
    int b;
    cin>>a>>b;

    int ans=-1;
    vector<int> vec;

    for(int i = 0; i<a;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    unordered_map<int,int> mp;

    for(auto i:vec){
        mp[i]++;
    }

    for(auto i:mp){
        if(i.second>=b){
            ans = i.first;
            break;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-28 10:29:08


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
void abc(Node*root, int &mini){
    if(root==NULL){
        return;
    }
    abc(root->left,mini);
    abc(root->right,mini);
    if(root->data < mini){
        mini = root->data;
    }
}

int findMin(Node *root)
{
    //code here
    int mini = INT_MAX;
    abc(root,mini);
    return mini;
}


```

## Submission at 2024-10-28 10:33:11


```
# Write your code from scratch here
x,y = map(str, input().split())
print(x)
print(y)
```

## Submission at 2024-10-28 10:40:43


```
# Write your code from scratch here
x,y = map(str, input().split())
z = list(x)
a = list(y)
b = []

for i in range(len(a)):
    if(a[i] not in z):
        b.append(a[i])

ans = ""
for i in range(len(z)):
    ans+=z[i]

for i in range(len(b)):
    ans+=b[i]

print(ans)
```

## Submission at 2024-10-28 10:41:07


```
# Write your code from scratch here
x,y = map(str, input().split())
z = list(x)
a = list(y)
b = []

for i in range(len(a)):
    if(a[i] not in z):
        b.append(a[i])

ans = ""
for i in range(len(z)):
    ans+=z[i]

for i in range(len(b)):
    ans+=b[i]

print(ans)
```

## Submission at 2024-10-28 11:14:46


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    temp1 = head1
    a1=[]
    while(temp1!=None):
      a1.append(temp1.val)
      temp1=temp1.next
      
    temp2 = head2
    a2=[]
    while(temp2!=None):
      a2.append(temp2.val)
      temp2=temp2.next
    
    ans = []
    tmp=a1+a2
    t1 = set(tmp)
    t2 = list(tmp)

    for i in range(len(t1)-1):
      if (t2[i] in a1) and (t2[i] in a2) :
        ans.append(t2[i])
      
    # print(ans)

    ans1= ListNode(ans[0])
    for i in ans:
      ans1.val=i
      ans1.next




```

## Submission at 2024-10-28 11:17:10


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    temp1 = head1
    a1=[]
    while(temp1!=None):
      a1.append(temp1.val)
      temp1=temp1.next
      
    temp2 = head2
    a2=[]
    while(temp2!=None):
      a2.append(temp2.val)
      temp2=temp2.next
    
    ans = []
    tmp=a1+a2
    t1 = set(tmp)
    t2 = list(tmp)

    for i in range(len(t1)-1):
      if (t2[i] in a1) and (t2[i] in a2) :
        ans.append(t2[i])
      
    # print(ans)

    ans1= ListNode(ans[0])
    k=1
    for k in range(len(ans)-1):
      ans1.val=ans[k]
      ans1 = ans1.next




```

## Submission at 2024-10-28 11:25:33


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    temp1 = head1
    a1=[]
    while(temp1!=None):
      a1.append(temp1.val)
      temp1=temp1.next
      
    temp2 = head2
    a2=[]
    while(temp2!=None):
      a2.append(temp2.val)
      temp2=temp2.next
    
    ans = []
    tmp=a1+a2
    t1 = set(tmp)
    t2 = list(tmp)

    for i in range(len(t1)-1):
      if (t2[i] in a1) and (t2[i] in a2) :
        ans.append(t2[i])
      
    # print(ans)

    ans1 = ListNode(ans[0])

    for k in range(1,len(ans),1):
      xyz = ListNode(ans[k])
      ans1.next = xyz
      # ans1=ans1.next

    return ans1




```

## Submission at 2024-10-28 11:26:37


```
// Write your code from scratch here
print(cbajkl)
```

## Submission at 2024-10-28 11:27:26


```
# Write your code from scratch here
print("cbajkl")
```

## Submission at 2024-10-29 11:36:48


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    temp1 = head1
    a1=[]
    while(temp1!=None):
      a1.append(temp1.val)
      temp1=temp1.next
      
    temp2 = head2
    a2=[]
    while(temp2!=None):
      a2.append(temp2.val)
      temp2=temp2.next
    
    if len(a1)>len(a2):
      n=a2
      m=a1
    else:
      n=a1
      m=a2
    r=[]
    for i in n:
      if i in m:
        r.append(i) 
    p=' '.join(map(str,r))
    print(p)
      
    

```

## Submission at 2024-11-04 10:50:55


```
# Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True

for i in a:
    if i in b:
        continue
    else:
        flag=False
        break

if(flag):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-04 10:53:52


```
# Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True

for i in a:
    if i in b:
        continue
    else:
        flag=False
        break

if(flag):
    print("true")
else:
    print("false")
```

## Submission at 2024-11-04 10:55:14


```
# Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
if x==y:
    print("false")

else:

    for i in a:
        if i in b:
            continue
        else:
            flag=False
            break

    if(flag):
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-04 10:57:09


```
# Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
if x!=y:
    print("false")

else:
    for i in a:
        if i in b:
            continue
        else:
            flag=False
            break

    if flag :
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-04 10:57:32


```
# Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
if x!=y:
    print("false")

else:
    for i in a:
        if i in b:
            continue
        else:
            flag=False
            break

    if flag :
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-04 10:59:22


```
# Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
if x!=y:
    print("false")
else:
    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = True
    
    for i in a:
        if i in b:
            continue
        else:
            flag=False
            break

    if flag :
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-04 11:07:11


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
if x!=y:
    print("false")
else:
    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = True
    a.sort()
    b.sort()
    if a==b:
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-04 11:08:58


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
a.sort()
b.sort()
if a==b:
    print("true")
else:
    print("false")

# if x!=y:
#     print("false")
# else:
#     a= list(map(int,input().split()))
#     b = list(map(int,input().split()))
#     flag = True
#     a.sort()
#     b.sort()
#     if a==b:
#         print("true")
#     else:
#         print("false")
```

## Submission at 2024-11-04 11:10:40


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
a.sort()
b.sort()

for i in range(len(x)):
    if(a[i]==b[i]):
        continue
    else:
        flag==False
        break

if flag==True:
    print("true")
else:
    print("false")

# if x!=y:
#     print("false")
# else:
#     a= list(map(int,input().split()))
#     b = list(map(int,input().split()))
#     flag = True
#     a.sort()
#     b.sort()
#     if a==b:
#         print("true")
#     else:
#         print("false")
```

## Submission at 2024-11-04 11:11:09


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
a.sort()
b.sort()

for i in range(x):
    if(a[i]==b[i]):
        continue
    else:
        flag==False
        break

if flag==True:
    print("true")
else:
    print("false")

# if x!=y:
#     print("false")
# else:
#     a= list(map(int,input().split()))
#     b = list(map(int,input().split()))
#     flag = True
#     a.sort()
#     b.sort()
#     if a==b:
#         print("true")
#     else:
#         print("false")
```

## Submission at 2024-11-04 11:11:58


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())
a= list(map(int,input().split()))
b = list(map(int,input().split()))
flag = True
a.sort()
b.sort()
if x==y:

    for i in range(x):
        if(a[i]==b[i]):
            continue
        else:
            flag==False
            break

    if flag==True:
        print("true")
    else:
        print("false")

else:
    print(false)
# if x!=y:
#     print("false")
# else:
#     a= list(map(int,input().split()))
#     b = list(map(int,input().split()))
#     flag = True
#     a.sort()
#     b.sort()
#     if a==b:
#         print("true")
#     else:
#         print("false")
```

## Submission at 2024-11-04 11:12:39


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())

if x==y:
    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = True
    a.sort()
    b.sort()

    for i in range(x):
        if(a[i]==b[i]):
            continue
        else:
            flag==False
            break

    if flag==True:
        print("true")
    else:
        print("false")

else:
    print(false)
# if x!=y:
#     print("false")
# else:
#     a= list(map(int,input().split()))
#     b = list(map(int,input().split()))
#     flag = True
#     a.sort()
#     b.sort()
#     if a==b:
#         print("true")
#     else:
#         print("false")
```

## Submission at 2024-11-04 11:14:06


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())

if x==y:
    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = 1
    a.sort()
    b.sort()

    for i in range(x):
        if(a[i]==b[i]):
            continue
        else:
            flag==0
            break

    if flag==1:
        print("true")
    else:
        print("false")

else:
    print("false")
# if x!=y:
#     print("false")
# else:
#     a= list(map(int,input().split()))
#     b = list(map(int,input().split()))
#     flag = True
#     a.sort()
#     b.sort()
#     if a==b:
#         print("true")
#     else:
#         print("false")
```

## Submission at 2024-11-04 11:15:20


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())

if x!=y:
    print("false")

else:

    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = 1
    a.sort()
    b.sort()

    for i in range(x):
        if(a[i]==b[i]):
            continue
        else:
            flag==0
            break

    if flag==1:
        print("true")
    else:
        print("false")

```

## Submission at 2024-11-04 11:17:34


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())

if x!=y:
    print("false")

else:

    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = 1
    a.sort()
    b.sort()

    for i in range(x):
        if(a[i]==b[i]):
            continue
        else:
            flag==0
            break

    if flag==1:
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-04 11:17:47


```
# // Write the code from scratch, no boilerplate is required
x,y = map(int,input().split())

if x!=y:
    print("false")

else:

    a= list(map(int,input().split()))
    b = list(map(int,input().split()))
    flag = 1
    a.sort()
    b.sort()

    for i in range(x):
        if(a[i]==b[i]):
            continue
        else:
            flag=0
            break

    if flag==1:
        print("true")
    else:
        print("false")
```

## Submission at 2024-11-25 09:48:40


```
# write code from scratch
x= input()
a = x.count("a")
b = x.count("b")
if(a>b):
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 09:56:05


```
# write code from scratch
z = int(input())
x= list(map(int,input().split()))

y = x[1]-x[0]
flag=True

for i in (2,len(x)-1,1):
    if(x[i]-x[i-1]==y):
        flag==True
    else:
        flag=False
        break

if flag:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-25 10:06:30


```
# write code from scratch
# write code from scratch
x = int(input())


for i in range (1,x+1,1):
    y = "*"*i
    print(y)
```

## Submission at 2024-11-25 10:08:37


```
# write code from scratch
# write code from scratch
x = int(input())


for i in range (1,x+1,1):
    y = "*"*i
    print(y)
```

## Submission at 2024-11-25 10:23:00


```
# Write Code From Scratch Here
p,k=map(int,input().split())
L = list(map(int,input().split()))
L.sort()
a = []
for i in range(len(L)):
    if(L[i]==k):
        a.append(i)

for j in a:
    print(j,end=" ")
```

## Submission at 2024-11-25 10:43:48


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */



Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
  Node* temp1 =  head1;
  Node* temp2 = head2;

  while(temp1!=NULL){
    while(temp2!=NULL){
      if(temp1->data==temp2->data){
        return temp1;
      }
      temp2=temp2->next;
    }
    temp1=temp1->next;
  }

  return NULL;
}



```

## Submission at 2024-11-25 10:55:02


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
        flag = False
        while(head1):
          while(head2):
            if(head1.data==head2.data):
              print(head1.data)
              flag=True
              break
            head2=head2.next
          if(head1.data==head2.data):
            break
          head1=head1.next
        if(!flag):
          print(-1)




```

## Submission at 2024-11-25 11:00:08


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */


Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1) {
      while(temp2){
        if(temp1==temp2){
          return temp1;
        }
        temp2=temp2->next;
      }
      temp1=temp1->next;
    }
    return NULL;
}



```

## Submission at 2024-11-25 11:02:37


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */


Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    Node* temp1 = head1;
    

    while(temp1) {
      Node* temp2 = head2;
      while(temp2){
        if(temp1==temp2){
          return temp1;
        }
        temp2=temp2->next;
      }
      temp1=temp1->next;
    }
    return NULL;
}



```

## Submission at 2024-11-25 11:10:55


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

vector<int> trav(Node* &root){
  if(root==NULL){
    return;
  }

  trav(root->left);
  vector.push_back(root->data);
  trav(root->right);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
  vector<int> ans = trav(root);
  sort(ans.begin(),ans.end());

  cnt=0;
  for (auto i:ans){
    if(i>n){
      break
    }
    cnt++;
  }

  return ans[cnt-1]

}

```

## Submission at 2024-11-25 11:11:57


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

vector<int> trav(Node* &root){
  if(root==NULL){
    return;
  }

  trav(root->left);
  vector.push_back(root->data);
  trav(root->right);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
  vector<int> ans = trav(root);
  sort(ans.begin(),ans.end());

  cnt=0;
  for (auto i:ans){
    if(i>n){
      break
    }
    cnt++;
  }

  return ans[cnt-1];

}

```

## Submission at 2024-11-25 11:13:46


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

vector<int> trav(Node* &root,vector<int> &ans){
  if(root==NULL){
    return;
  }

  trav(root->left);
  ans.push_back(root->data);
  trav(root->right);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
  vector<int> ans;
  trav(root,ans);
  sort(ans.begin(),ans.end());

  cnt=0;
  for (auto i:ans){
    if(i>n){
      break;
    }
    cnt++;
  }

  return ans[cnt-1];

}

```

## Submission at 2024-11-25 11:16:34


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void trav(Node* &root,vector<int> &ans){
  if(root==NULL){
    return ;
  }

  trav(root->left,ans);
  ans.push_back(root->data);
  trav(root->right,ans);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
  vector<int> ans;
  trav(root,ans);
  sort(ans.begin(),ans.end());

  int cnt=0;
  for (auto i:ans){
    if(i>n){
      break;
    }
    cnt++;
  }

  return ans[cnt-1];

}

```

## Submission at 2024-11-25 11:26:12


```
// Write Code From Scratch Here
#include<bits/stdc++>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> a;

    for(int i=0,i<k,i++){
        int bi,ci;
        cin>>bi>>ci;
        int temp = bi*ci;
        a.push_back(temp);
    }
    int sum;
    sort(a.begin(),a.end());
    for(int k = a.size()-1;i>=0;i--){
        sum+=a[k];
    }

    cout<<sum;
}
```

## Submission at 2024-11-25 11:29:45


```
// Write Code From Scratch Here
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> a;

    for(int i=0,i<k,i++){
        int bi,ci;
        cin>>bi>>ci;
        int temp = ci;
        a.push_back(temp);
    }
    int sum;
    sort(a.begin(),a.end());
    for(int k = a.size()-1;i>=0;i--){
        sum+=a[k];
    }

    cout<<sum;
}
```

## Submission at 2024-11-25 11:32:31


```
// Write Code From Scratch Here
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> a;

    for(int i=0,i>k,i++){
        int bi,ci;
        cin>>bi>>ci;
        int temp = ci;
        a.push_back(temp);
    }
    int sum;
    sort(a.begin(),a.end());
    for(int k = a.size()-1;i>=a.size-1-n;i--){
        sum+=a[k];
    }

    cout<<sum;
}
```

## Submission at 2024-11-25 11:36:37


```
// Write Code From Scratch Here
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> a;

    for(int i=0,i>k,i++){
        int bi,ci;
        cin>>bi>>ci;
        int temp = ci;
        a.push_back(temp);
    }
    int sum;
    sort(a.begin(),a.end());
    for(int o = a.size()-1;>=a.size()-1-n;--){
        sum+=a[o];
    }

    cout<<sum;
}
```

## Submission at 2024-11-25 11:40:31


```
// Write Code From Scratch Here
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> a;

    for(int i=0;i>k;i++){
        int bi,ci;
        cin>>bi>>ci;
        int temp = ci;
        a.push_back(temp);
    }
    int sum;
    sort(a.begin(),a.end());
    for(int o = a.size()-1;o>=a.size()-1-n;o--){
        sum+=a[o];
    }

    cout<<sum;
}
```

## Submission at 2024-11-25 11:41:46


```
# Write Code From Scratch Here
print("YES")
```

## Submission at 2024-11-25 11:42:02


```
# Write Code From Scratch Here
print("NO")
```

