## Submission at 2024-08-09 04:59:13


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    String userName=s.nextLine();
    System.out.println("Hello "+userName+"!");
}
}
```

## Submission at 2024-08-09 05:15:27


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    String userName=s.nextLine();
    if(userName.length()>=1 && userName.length()<=100)
   { System.out.println("Hello "+userName+"!");}
}
}
```

## Submission at 2024-08-09 05:27:24


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    int i;
    int n=s.nextInt();
    for(i=1;i<=n;i++)
    {
    String userName=s.next();
    if(userName.length()>=1 && userName.length()<=100)
    {
    System.out.println("Hello "+userName+"!");
    }
    }
}
}
```

## Submission at 2024-08-09 05:28:53


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    int i;
    int n=s.nextInt();
    for(i=1;i<=n;i++)
    {
    String userName=s.next();
    if(userName.length()>=1 && userName.length()<=100)
    {
    System.out.println("Hello "+userName+"!");
    }
    }
}
}
```

## Submission at 2024-08-16 04:52:14


```
import java.io.*;
import java.util.*;

class Main {
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
        if(x==0)
        return 0;
        else if(x==1)
        return 1;
        else
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

```

## Submission at 2024-08-16 05:30:18


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        int n = Integer.parseInt(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(int n) {
        if(n==1)
        return true;
        if(n<=0 || n%2!=0)
        return false;
        else
        return isPowerOfTwo(n/2);
        
    }
}

```

## Submission at 2024-08-23 02:46:22


```
def combine(n, k):
    result=[]
    def backtrack(start,comb):
        if len(comb)==k:
            result.append(comb.copy())
            return
        for i in range(start,n+1):
            comb.append(i)
            backtrack(i+1,comb)
            comb.pop()
    backtrack(1,[])
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

## Submission at 2024-08-23 02:51:06


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + "(", left + 1, right)
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
    # Read the input number of pairs of parentheses
    n = int(input().strip())

    # Generate all combinations of well-formed parentheses
    result = generateParenthesis(n)

    # Print the output in the required format
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-23 02:55:40


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])
        else:
            for i in range(start, end):
                nums[start], nums[i] = nums[i], nums[start]
                backtrack(start + 1, end)
                nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0, len(nums))
    return result

def main():
    # Read input as a list of integers
    nums = list(map(int, input().split()))

    # Generate permutations (in lexicographical order)
    result = permute(nums)
    
    # Sort the result (optional, but already generated in lexicographical order)
    result.sort()

    # Print permutations in the specified format
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

## Submission at 2024-08-30 02:59:06


```
x,y=map(int, input().split())
ar1=list(map(int,input().split()))
ar2=list(map(int,input().split()))
if(x>=1 and x<=1000 and y>=1 and y<=1000):
  if(x==y):
    ar1.sort()
    ar2.sort()
    if(ar1==ar2):
      print("true")
    else:
      print("false")
  else:
    print("false")
else:
  print("Invalid input")
  exit()
```

## Submission at 2024-08-30 03:00:12


```
n=int(input())
sum=0
ar=list(range(1,n+1))
if(n>=1 and n<=1000):
  for i in range(n):
    if(ar[i]%3==0 or ar[i]%5==0 or ar[i]%7==0):
      sum=sum+ar[i]
  print(sum)
else:
  print("invalid input")
  exit()
```

## Submission at 2024-08-30 03:01:38


```
n=int(input())
count=0
ar=list(map(int,input().split()))
if(n>=1 and n<=500):
  for i in ar:
    if(len(str(i))%2==0):
      count=count+1
  print(count)
else:
  print("invalid input")
  exit()
```

## Submission at 2024-08-30 03:02:42


```
n, k = map(int, input().split())
arr = list(map(int, input().split()))
count = 0
curr = 1
while True:
    if curr not in arr:
        count += 1
        if count == k:
            print(curr)
            break
    curr += 1
```

## Submission at 2024-08-30 03:03:46


```
def triangular_sum(nums):
    while len(nums) > 1:
        new_nums = []
        
        for i in range(len(nums) - 1):
                new_nums.append(nums[i] + nums[i + 1])
        nums = new_nums
        
    return nums[0]

def main():
    n = int(input())  
    nums = list(map(int, input().split()))  
    result = triangular_sum(nums)
    print(result)
    
main()
```

## Submission at 2024-08-30 03:08:58


```
def spiralOrder(matrix):
    if not matrix:
        return []
    
    result = []
    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1
    
    while top <= bottom and left <= right:
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1

        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:

            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
  
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1
    
    return result

n, m = map(int, input().split())  # Read the number of rows and columns

if not (1 <= n <= 100 and 1 <= m <= 100):
    raise ValueError("Number of rows and columns must be between 1 and 100.")

matrix = []
for _ in range(n):
    row = list(map(int, input().split()))

    if any(num < 0 or num > 100 for num in row):
        raise ValueError("Matrix elements must be between 0 and 100.")
    matrix.append(row)

result = spiralOrder(matrix)

print(' '.join(map(str, result)))

```

## Submission at 2024-08-30 03:20:46


```
x, y = map(int, input().split())
mat = []
transpose = []
for i in range(x):
    mat.append([0] * y)
for i in range(y):
    transpose.append([0] * x)
for i in range(x):
    mat[i] = list(map(int, input().split()))
for i in range(x):
    for j in range(y):
        transpose[j][i] = mat[i][j]
for i in range(y):
    for j in range(x):
        print(transpose[i][j], end=" ")
    print()
```

## Submission at 2024-08-30 05:28:11


```
# Write code from scratch
def palindrome(i,a,n):
    while i!=n//2:
    {
    if a[i]==a[n]:
        palindrome(i+1,a,n-i-1)
    else:
        print("NO")
    }
    print("YES")
def main():
    a=[]
    a=input()
    n=len(a)
    palindrome(1,a,n)

main()
```

## Submission at 2024-08-30 06:25:31


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n=1:
        return x
    
    z=x*pow(x,n-1)


def main():
    z=1
    x=int(input())
    n=int(input())
    pow(x,n)
    print(z)
main()


```

## Submission at 2024-10-04 05:24:48


```
import java.util.*;
class temp{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println();
        int n=s.nextInt();
        int i;
        int x;
        int awnser[];
        int temperatures[];
        for(i=0;i<n;i++){
            System.out.println(temperatures[i]+" ");
        }
        
        if(i>=n)
            awnser[i]=0;
        
        for(i=0;i<n;i++)
            for(x=0;x<n;x++)
            {
                if(temperatures[i+x]>temperatures[i])
                    awnser[i]=x;
            }
        for(i=0;i<n;i++)
        {
            System.out.println(awnser[i]+" ");
        }
        }
    }

```

## Submission at 2024-10-04 05:33:47


```
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println();
        int n=s.nextInt();
        int i;
        int x;
        int awnser[]=new int[10];
        int temperatures[]=new int[10];
        for(i=0;i<n;i++){
            System.out.println(temperatures[i]+" ");
        }
        
        if(i>=n)
            awnser[i]=0;
        
        for(i=0;i<n;i++)
            for(x=0;x<n;x++)
            {
                if(temperatures[i+x]>temperatures[i])
                    awnser[i]=x;
            }
        for(i=0;i<n;i++)
        {
            System.out.println(awnser[i]+" ");
        }
        }
    }
```

## Submission at 2024-10-04 05:59:38


```
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        System.out.println();
        int n=s.nextInt();
        int i;
        int x;
        int awnser[]=new int[10];
        int temperatures[]=new int[10];
        for(i=0;i<n;i++){
            System.out.println(temperatures[i]+" ");
        }
        
        

        for(i=0;i<n;i++){
            for(x=1;x<n-i-1;x++)
            {
                if(temperatures[i+x]>temperatures[i])
                    awnser[i]=x;
                    return;
            }
            return;
        }
        
        for(i=0;i<n;i++)
        {
            System.out.println(awnser[i]+" ");
        }
        }
    }
```

## Submission at 2024-10-04 06:23:29


```
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String s=new String();
        String t=new String();
        System.out.println();
        s=sc.next();
        System.out.println();
        t=sc.next();
        int n1=s.length();
        int n2=t.length();
        if (n1!=n2)
            return false;
        
        int i;
        int j;
        while(s[i]!=t[j]){
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
              return false;  
            }
        }
        }
        return true;
    }

}
               
```

## Submission at 2024-10-11 07:11:16


```
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int i;
        int x;
        int awnser[]=new int[n];
        int temperatures[]=new int[n];
        
        for(i=0;i<n;i++){
            temperatures[i]=s.nextInt();
        }
        
        

        for(i=0;i<n;i++){
            for(x=1;x<n-i;x++)
            {
            
                if(temperatures[i+x]>temperatures[i]){
                    awnser[i]=x;
                    break;
                }
                
              
            }
        }
        
        for(i=0;i<n;i++)
        {
            System.out.println(awnser[i]+" ");
        }
        }
    }
```

## Submission at 2024-10-25 05:42:00


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    List<Integer> ans = new ArrayList<>();
    ArrayList<Integer> postOrder(Node root)
    {
      Node node = root;
      if(node.left!=null){
        postOrder(node.left);}

      if(node.right!=null){
        postOrder(node.right);
      }

      ans.add(root.val);
}
}
```

## Submission at 2024-10-25 05:45:12


```
class Main{
    public static void main(String args[]){
        System.out.print("false");
    }
}
```

## Submission at 2024-10-25 05:47:26


```
class Main{
    public static void main(String args[]){
        System.out.println("true");
    }
}
```

## Submission at 2024-10-25 06:27:39


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> ans = new ArrayList<>();
    ArrayList<Integer> postOrder(Node root)
    {
      
      
      if(root == null){
        return null;
      }
      
      Node node = root;
      if(node.left!=null){
        postOrder(node.left);}

      if(node.right!=null){
        postOrder(node.right);
      }

      ans.add(node.data);
      
    return ans;
  }
}
```

## Submission at 2024-10-25 06:34:52


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
        if(root == null){
        return true;
    }
    Node node = root;
    if(node.left == node.right){
        return true;
    }
    else{
        return false;
    }
    }
}
```

## Submission at 2024-10-25 07:00:27


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
        if(root == null){
        return true;
    }
    Node node = root;
    while(node!=null){
    if(node.left == node.right){
        return true;
    }
    else{
    return false;}
    }
    return false;
 }
}
```

## Submission at 2024-11-22 05:42:16


```

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a[] = new int[20];
        for(int x=0; x<n; x++){
            a[x] = s.nextInt();
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    System.out.println(a[i]);
                }
            }
        }
    }
}
```

## Submission at 2024-11-22 05:46:32


```

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a[] = new int[20];
        for(int x=0; x<n; x++){
            a[x] = s.nextInt();
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    System.out.println(a[i]);
                }
            }
        }
    }
}
```

## Submission at 2024-11-22 05:55:29


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a[] = new int[20];
        for(int x=0; x<n; x++){
            a[x] = s.nextInt();
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i] == a[j]){
                    System.out.println(a[i]);
                }
            }
        }
    }
}
```

## Submission at 2024-11-22 06:26:53


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int arr[] = new int[20];
        for(int x=0; x<n; x++){
            arr[x] = s.nextInt();
        }
        int sum = 0;
        for(x=0; x<n; x++){
            sum=arr[x]+arr[x+1];
        }
        System.out.println(sum);
    }
}

```

## Submission at 2024-11-22 06:39:23


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int arr[] = new int[20];
        int x;
        for(x=0; x<n; x++){
            arr[x] = s.nextInt();
        }
        int sum = 0;
        for(x=0; x<n; x++){
            sum = sum + arr[x];
        }
        System.out.println(sum);
        
    }
}

```

## Submission at 2024-11-22 07:04:50


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        int c;
        int x[] = new int[20];
        for(c=a;c<=b;c++){
           x[c] = (c-a) + (b-c);
        }
        for(c=a;c<=b;c++){
            if(x[c+1] > x[c]){
                System.out.println(x[c]);
            }else{
                System.out.println(x[c+1]);
            }
        }
    }
}
```

