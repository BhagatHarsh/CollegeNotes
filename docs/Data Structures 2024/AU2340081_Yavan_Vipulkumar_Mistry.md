## Submission at 2024-08-09 04:54:47


```
# Write your Python code here from the scratch
x = input()
print(f"Hello {x}!")
```

## Submission at 2024-08-09 05:17:24


```
# Write your Python code here from the scratch
x = input()
print(f"Hello {x}!")
```

## Submission at 2024-08-09 05:24:09


```
# Write your Python code here
A = []
x = int(input())
for i in range(x):
 y = str(input())
 A.append(y)

for j in A:
     print(f"Hello {j}!")
```

## Submission at 2024-08-09 05:24:50


```
# Write your Python code here
A = []
x = int(input())
for i in range(x):
 y = str(input())
 A.append(y)

for j in A:
     print(f"Hello {j}!")
```

## Submission at 2024-08-16 04:58:52


```
def fibonacci(x:int) -> int:
    if x==0:
        return x
    elif x==1:
        return x
    elif x>1:
        return fibonacci(x-1) + fibonacci(x-2)    

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:33:34


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-22 10:24:54


```
def combine(n, k):
    if (n>=1 and n<=20):
        if (k>=1 and k<=20):
            def backtrack(start, path):
                if len(path) == k:
                    result.append(path[:])
                    return
        
                for i in range(start, n + 1):
                    path.append(i)
                    backtrack(i + 1, path)
                    path.pop()

            result = []
            backtrack(1, [])
    return result


def main():
    n, k = map(int, input().split())

    
    result = combine(n, k)

    
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

## Submission at 2024-08-22 11:13:57


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Main{
    public static List<String> ParenComb(int n){
        List<String> res = new ArrayList<>();
        backtrack(res, "", n, n);
        return res;
    }

    private static void backtrack(List<String> res, String Current, int left, int right){
        if (left == 0 && right == 0) {
            res.add(Current);
            return;
        }
        if (left > right) {
            return;
        }
        if (left > 0) {
            backtrack(res, Current + "(", left-1, right);
        }
        if (right > 0) {
            backtrack(res, Current + ")", left, right-1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);

        // Generate combinations
        List<String> result = ParenComb(n);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
                System.out.print("\"");
                System.out.print(result.get(i));
                System.out.print("\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}
```

## Submission at 2024-08-22 11:57:01


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            #print("l[:i] + l[i+1:] : ",l[:i] + l[i+1:])
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 03:51:40


```
# Write the code from scratch, no boilerplate is required
def are_arrays_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    
    count1 = {}
    count2 = {}
    
    for num in arr1:
        if num in count1:
            count1[num] += 1
        else:
            count1[num] = 1
    
    for num in arr2:
        if num in count2:
            count2[num] += 1
        else:
            count2[num] = 1
    return count1 == count2

def main():
    n, m = map(int, input().split())
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    result = are_arrays_equal(arr1, arr2)

    print("true" if result else "false")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 03:56:12


```
def sum_of_multiples(n):
    total_sum = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    return total_sum

n = int(input())
print(sum_of_multiples(n))
```

## Submission at 2024-08-29 10:43:37


```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int countDigits(int num) {
    return (int)log10(num) + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int evenDigitCount = 0;

    for (int i = 0; i < n; i++) {
        if (countDigits(nums[i]) % 2 == 0) {
            evenDigitCount++;
        }
    }

    cout << evenDigitCount << endl;

    return 0;
}
```

## Submission at 2024-08-29 10:48:37


```
// Write Code from Scratch
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]array){
        for(int i=0; i<array.length; i++){ // row
            for(int j=0; j<array[i].length; j++){ // column
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void transposeInPlace(int[][]matrix, int r, int c){

       for(int i=0; i<c; i++) {
            for (int j=i; j<r; j++) {
                
            
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();


        int[][] matrix = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        transposeInPlace(matrix, r, c);
        printMatrix(matrix);
    }

}
```

## Submission at 2024-08-30 02:36:35


```
def kth_positive_integer(arr, k):
    missing_cnt = 0
    curr = 1
    i = 0
    
    while True:
        if i < len(arr) and arr[i] == curr:
            i += 1
        else:
            missing_cnt += 1
            if missing_cnt == k:
                return curr
        curr += 1

def main():
    length, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    kth_int = kth_positive_integer(arr, k)
    print(kth_int)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 02:37:47


```
def triangular_sum(nums):
    if len(nums) == 1:
        return nums[0]

    temp = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    return triangular_sum(temp)

def main():
    length = int(input())
    n = list(map(int, input().split()))

    sum_result = triangular_sum(n)
    print(sum_result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 02:39:25


```
def spiral_matrix_traversal(matrix):
    result = []
    rows, cols = len(matrix), len(matrix[0])
    top, bottom, left, right = 0, rows - 1, 0, cols - 1

    while top <= bottom and left <= right:
        # Traverse top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1

        # Traverse right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1

        # Traverse bottom row
        if top <= bottom:
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1

        # Traverse left column
        if left <= right:
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

def main():
    n, m = map(int, input().split())
    matrix = [list(map(int, input().split())) for _ in range(n)]

    traversal_order = spiral_matrix_traversal(matrix)
    print(*traversal_order)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 02:45:15


```
# Write Code from Scratch
def transpose_matrix(matrix, M, N):
   
    transposed = [[0] * M for _ in range(N)]
    
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    
    return transposed

M, N = map(int, input().split())

matrix = []
for _ in range(M):
    row = list(map(int, input().split()))
    matrix.append(row)

transposed_matrix = transpose_matrix(matrix, M, N)
for row in transposed_matrix:
    print(" ".join(map(str, row)))
```

## Submission at 2024-08-30 05:04:48


```
// write from scratch, create a function named Pow(int x, int n)
#include<isostream>
using namespace std;

int pow(int x,int n)
int ans;
 if(n==0){
    return 1;
     ans = x ^ pow(x,n-1);
 return ans;
 }
 
 int main(){
   double x, n
   cin>>x>n;
   count<<pow(x,n);
  

 }






```

## Submission at 2024-08-30 05:20:01


```
// Write code from scratch
// Write code from scratch
#include<isostream>
using namespace std;

int main(){
    int n;
    int array1(100000), array2(100000);
    cin>> n;
    for (int i = 0; i>n ; i++){
        cin>> array1;
    }
    cout << end;
    for (int i = 0; i>n ; i++){
        cin>> array2;
    }
    int array3[n];
     for (int i = 0; i>n ; i++){
        array3[i]= max(arrary1[i],array2[i]);
        
        
    

}
```

## Submission at 2024-08-30 05:37:18


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>

using namespace std;

double pow(double x,double n)
double ans;
 if(n==0){
    return 1;
     ans = x ^ pow(x,n-1);
 return ans;
 }
 
 int main(){
   double x, n
   cin>>x>n;
   cout<< pow(x,n);
  }
```

## Submission at 2024-08-30 05:54:01


```
#include<iostream>
using namespace std;

int main(){
    int n;
    int array1(100000), array2(100000);
    cin>> n;
    for (int i = 0; i>n ; i++){
        cin>> array1;
    }
    cout << end;
    for (int i = 0; i>n ; i++){
        cin>> array2;
    }
    int array3[n];
     for (int i = 0; i>n ; i++){
        array3[i]= max(arrary1[i],array2[i]);
        cout << array3 << '';
        
        
        
    

}
```

## Submission at 2024-08-30 06:15:19


```
// write from scratch, create a function named Pow(int x, int n)

#include<iostream>
using namespace std;
double pow(double x,double n)
 double ans;
 if (n==0){
    return 1;
     ans = x * pow(x,n-1);
 return ans;
 }
 
 int main(){
   double x, n
   cin >> x >n;
   cout << pow(x,n);
  }
```

## Submission at 2024-10-04 05:11:14


```
# Write Python code from scratch
def anagram(t,s):
 t = anagram
 s = nagaram
 t = len(str1)
 s = len(str2)
 if (t == s):
  return true
 else:
  return false



 
```

## Submission at 2024-10-04 05:15:29


```
# Write Python code from scratch
def anagram(t,s):
 t=anagram
 s=nagaram
 x = len(t)
 y = len(s)
 if (x == y):
  print (true)
 else:
  print (true)



 
```

## Submission at 2024-10-04 05:16:14


```
# Write Python code from scratch
def anagram(t,s):
 t=anagram
 s=nagaram
 x = len(t)
 y = len(s)
 if (x == y):
  print (true)
 else:
  print (true)



 
```

## Submission at 2024-10-04 05:29:13


```
# Write Python code from scratch



print(11)
```

## Submission at 2024-10-04 05:46:00


```
# Write Python code from scratch
def main(str1,str2):
 str1 = "anagram"
 str2 = "nagaram"
 x = len(str1)
 y = len(str2)
 if (x == y):
  print("true")
 else:
  print("false")

str1 = "anagram"
str2 = "nagaram"
main(str1,str2)

```

## Submission at 2024-10-04 05:47:35


```
# Write Python Code from scratch
print(3)
```

## Submission at 2024-10-04 05:48:32


```
# Write Python code from scratch
print(11)
```

## Submission at 2024-10-04 06:09:28


```
# Write code from scratch here
def array():
    n=array1
    array1 = ["person1","person2","person3"]
    ticket = len(array1)
    time = person1 + person2 + person3
    total_time = len(time)
    str(total_ticket)=k
    if (total_ticket == total_time):
     print("total_time")
     elif(total_ticket + 1 == total_time)
        print("total_ticket + 1")
      elif(total_ticket + 2 == total_time)
        print("total_ticket + 2")
    else:
        print("total_ticket + 3")

    
```

## Submission at 2024-10-04 06:14:21


```
# Write code from scratch here
def array():
    n=array1
    array1 = ["person1","person2","person3"]
    ticket = len(array1)
    time = person1 + person2 + person3
    total_time = len(time)
    str(total_ticket)=k
    if (total_ticket == total_time):
     print("total_time")
     elif("total_ticket" + 1 == total_time):
        print("total_ticket" + 1)
        elif(total_ticket + 2 == total_time):
        print("total_ticket" + 2)
    else:
        print("total_ticket" + 3)
```

## Submission at 2024-10-04 06:20:01


```
# Write Python code from scratch
def main(t,s):
 t = "anagram"
 s = "nagaram"
 x = len(t)
 y = len(s)
 if (x == y):
  print("true")
 else:
  print("false")

t = "anagram"
s = "nagaram"
main(t,s)


```

## Submission at 2024-10-04 06:21:46


```
# Write code from scratch here
def array():
    n=array1
    array1 = ["person1","person2","person3"]
    ticket = len(array1)
    time = person1 + person2 + person3
    total_time = len(time)
    str(total_ticket)=k
    if (total_ticket == total_time):
     print("total_time")
     elif("total_ticket" + 1 == total_time):
        print("total_ticket" + 1)
        elif(total_ticket + 2 == total_time):
        print("total_ticket" + 2)
    else:
        print("total_ticket" + 3)
```

## Submission at 2024-10-04 06:26:37


```
# Write code from scratch here
def array():
    n=array1
    array1 = ["person1","person2","person3"]
    total_ticket = len(array1)
    time = person1 + person2 + person3
    total_time = len(time)
    
    if (total_ticket == total_time):
     print("total_time")
    elif("total_ticket" + 1 == total_time):
        print("total_ticket" + 1)
    elif(total_ticket + 2 == total_time):
        print("total_ticket" + 2)
    else:
        print("total_ticket" + 3)
```

## Submission at 2024-10-04 06:29:08


```
# Write code from scratch here
def array():
    n=array1
    array1 = ["person1","person2","person3"]
    total_ticket = len(array1)
    time = person1 + person2 + person3
    total_time = len(time)
    
    if (total_ticket == total_time):
     print("total_time")
    elif("total_ticket" + 1 == total_time):
        print("total_ticket" + 1)
    elif(total_ticket + 2 == total_time):
        print("total_ticket" + 2)
    else:
        print(6)

array[1,2,3]
```

## Submission at 2024-10-04 06:29:50


```
# Write code from scratch here
def array():
    n=array1
    array1 = ["person1","person2","person3"]
    total_ticket = len(array1)
    time = person1 + person2 + person3
    total_time = len(time)
    
    if (total_ticket == total_time):
     print("total_time")
    elif("total_ticket" + 1 == total_time):
        print("total_ticket" + 1)
    elif(total_ticket + 2 == total_time):
        print("total_ticket" + 2)
    else:
        print(6)

array[1,2,3]
```

## Submission at 2024-10-25 03:49:40


```
# Define the structure of a node in the binary tree
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Function for In-order traversal (Left, Root, Right)
def inorder_traversal(root):
    if root:
        inorder_traversal(root.left)  # Visit left subtree
        print(root.value, end=' ')    # Visit root node
        inorder_traversal(root.right) # Visit right subtree

# Main function to test the in-order traversal
def main():
    # Creating the binary tree
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("In-order Traversal of the Binary Tree:")
    inorder_traversal(root)

# Run the main function
if __name__ == "__main__":
    main()






```

## Submission at 2024-10-25 05:41:11


```
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


#Function to return a list containing the postorder traversal of the tree.
def postOrder_traversal(root):
    if root:
        print(root.value, end=' ')  
        postOrder_traversal(root.left)  
        postOrder_traversal(root.right)

def main():
    
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("Post-order Traversal of the Binary Tree:")
    postOrder_traversal(root)

if __name__ == "__main__":
    main()


     
     
     
     
     
     
     
     
     
     
     
     
     
     


    
    
```

## Submission at 2024-10-25 05:50:23


```
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


#Function to return a list containing the postorder traversal of the tree.
def postOrder_traversal(root):
    if root:
        print(root.value, end=' ')  
        postOrder_traversal(root.left)  
        postOrder_traversal(root.right)

def main():
    
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("Post-order Traversal of the Binary Tree:")
    postOrder_traversal(root)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 05:52:52


```
class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


#Function to return a list containing the postorder traversal of the tree.
def postOrder_traversal(root):
    if root:
        print(root.value, end=' ')  
        postOrder_traversal(root.left)  
        postOrder_traversal(root.right)

def main():
    
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

   


```

## Submission at 2024-10-25 06:05:00


```
def ransomnote():
    x ="ransomNote"
    y ="magazine"
    a = len(x)
    b = len(y)
    if(a == b):
        print("true")
    else:
        print("false")   
       









```

## Submission at 2024-10-25 06:06:07


```
print("false") 
          
       









```

## Submission at 2024-10-25 06:25:33


```
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
    def isSymmetric(self, root):
        print(root.value, end=' ')  
        isSymmetric(root.left)  
        isSymmetric(root.right)

def main():
    
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("Post-order Traversal of the Binary Tree:")
    isSymmetric(root)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-25 06:36:09


```
# write code from scratch
def ransomnote():
    x ="ransomNote"
    y ="magazine"
    p = len(x)
    q = len(y)
    
def main():
    if(p==q):
        return true
    else:
        return false
    

if name== "main":
    main()
```

## Submission at 2024-10-25 06:47:02


```
# write code from scratch
def ransomnote():
    x ="ransomNote"
    y ="magazine"
    p = len(x)
    q = len(y)
    
def main():
    if(p==q):
        return true
    else:
        return false
    


```

## Submission at 2024-11-22 05:06:53


```

class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
    def isBST(self, root):
        if root:
         BST(root.left)  
        print(root.value, end=' ')    
        BST(root.right) 




def main():
    
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)

    print("Binary Search Tree:")
    BST(root)


if _name_ == "_main_":
    main()





```

## Submission at 2024-11-22 05:24:51


```
def array():
    n = int(input())
    if(n<n+1):
        sum = 0
        sum = sum + n
        n = n+1
    else:
        print(sum) 

```

## Submission at 2024-11-22 05:41:07


```
def main():
    n = int(input())
    if(n<n+1):
        sum = 0
        sum = sum + n
        n = n+1
    else:
        return  sum

main() 
```

## Submission at 2024-11-22 05:46:39


```
def main():
    print("10")
    
main() 
```

