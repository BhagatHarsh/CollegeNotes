## Submission at 2024-08-09 04:59:06


```
// Write your Java code here from the scratch
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

## Submission at 2024-08-09 05:14:39


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    String userName=s.nextLine();
    if(userName.length()>=1 && userName.length()<=100)
    {
    System.out.println("Hello "+userName+"!");
    }
}
}
```

## Submission at 2024-08-09 05:26:10


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    int n=s.nextInt();
    if(n>=1 && n<=100)
    {
    for(int i=1;i<=n;i++)
    {
     String userName=s.next();
             if(userName.length()>=1 && userName.length()<=100)
             {
               System.out.println("Hello "+userName+"!");
             }
    }

    }
}
}
```

## Submission at 2024-08-09 05:37:52


```
import java.util.Scanner;
public class Main
{
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    int n=s.nextInt();
    for( int i=1;i<=n;i++)
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

## Submission at 2024-08-16 04:49:54


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
        // Write your code here
        if(x==0)
        return 0;
        else if(x==1)
        return 1;
        else 
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

```

## Submission at 2024-08-16 05:32:15


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
        // write your logic here
            if(n==1)
            return true;
            if(n<=0 || n%2!=0)
            return false;
            else
            return isPowerOfTwo(n/2);
        
        
    }
}

```

## Submission at 2024-08-23 02:46:45


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
    nums = list(map(int, input().split()))
    result = permute(nums)
    result.sort()
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

## Submission at 2024-08-23 02:49:02


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

## Submission at 2024-08-23 02:51:41


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

## Submission at 2024-08-30 02:59:05


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
  exit()# Write the code from scratch, no boilerplate is required
```

## Submission at 2024-08-30 03:00:37


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

## Submission at 2024-08-30 03:01:58


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

## Submission at 2024-08-30 03:03:23


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

## Submission at 2024-08-30 03:07:17


```
def triangular_sum(n):
    while len(n) > 1:
        new_n = []
        
        for i in range(len(n) - 1):
                new_n.append(n[i] + n[i + 1])

        n = new_n
        
    return n[0]

def main():
    n = int(input())  
    ar = list(map(int, input().split()))  


    result = triangular_sum(ar)
    print(result)
    
main()
```

## Submission at 2024-08-30 03:11:55


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

n, m = map(int, input().split())  

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

## Submission at 2024-08-30 03:19:18


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

## Submission at 2024-08-30 05:17:06


```
import java.util.*;
class Main {
   static boolean rec(int n,int l,String str)
    {
        if(l<n){
            return true;
        }
        if(str.charAt(n)==str.charAt(l))
        {
           return  rec(n+1,l-1,str);
        }
        else 
        {
            return false;
        }
        
    }
    public static void main (String args []) {
        Scanner s=new Scanner(System.in);
        String st=s.nextLine();
        int len=st.length();
        boolean res=rec(0,len-1,st);
        if(res==true)
        {
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
```

## Submission at 2024-08-30 05:18:03


```
import java.util.*;
class Main {
   static boolean rec(int n,int l,String str)
    {
        if(l<n){
            return true;
        }
        if(str.charAt(n)==str.charAt(l))
        {
           return  rec(n+1,l-1,str);
        }
        else 
        {
            return false;
        }
        
    }
    public static void main (String args []) {
        Scanner s=new Scanner(System.in);
        String st=s.nextLine();
        int len=st.length();
        boolean res=rec(0,len-1,st);
        if(res==true)
        {
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 05:29:19


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.*;
class Main { //Remember the class name has to be Main!!
static int pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x*pow(x,n-1);
    }
}
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    int x=s.nextInt();
    int n=s.nextInt();
    int res=pow(x,n);
    System.out.println(res);
}
}
```

## Submission at 2024-08-30 05:30:09


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.*;
class Main { //Remember the class name has to be Main!!
static int pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return x*pow(x,n-1);
    }
}
public static void main(String args[])
{
    Scanner s=new Scanner(System.in);
    int x=s.nextInt();
    int n=s.nextInt();
    int res=pow(x,n);
    System.out.println(res);
}
}
```

## Submission at 2024-08-30 05:44:13


```
import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        int c[]=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            b[i]=s.nextInt();
        }
        for(int i=0;i<n;i++){
            if(a[i]>=b[i])
            {
                c[i]=a[i];
            }
            else
            {
                c[i]=b[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(c[i]+" ");
        }
    }
}
```

## Submission at 2024-08-30 05:44:16


```
import java.util.*;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        int c[]=new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            b[i]=s.nextInt();
        }
        for(int i=0;i<n;i++){
            if(a[i]>=b[i])
            {
                c[i]=a[i];
            }
            else
            {
                c[i]=b[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(c[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 05:22:24


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        sc.nextLine();
        String t=sc.nextLine();
        int m=s.length();
        int n=t.length();
        boolean r=false;
        if(m!=n)
        {
            r=false;
        }
        else
        {
        char a[]=new char[m];
        char b[]=new char[n];
        for (int i=0;i<m;i++)
        {
            a[i]=s.charAt(i);
            b[i]=t.charAt(i);
        }
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-i-1;j++){
                if(a[j]>a[j+1])
                {
                   char temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;  
                }
            }
        }
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-i-1;j++){
                if(b[j]>b[j+1])
                {
                   char temp=b[j];
                   b[j]=b[j+1];
                   b[j+1]=temp;  
                }
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            if(a[i]==b[i])
            {
                count++;
            }
        }
        if(count==n){
            r=true;
        }
        }
        System.out.println(r);
    }
}
```

## Submission at 2024-10-04 05:22:27


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        sc.nextLine();
        String t=sc.nextLine();
        int m=s.length();
        int n=t.length();
        boolean r=false;
        if(m!=n)
        {
            r=false;
        }
        else
        {
        char a[]=new char[m];
        char b[]=new char[n];
        for (int i=0;i<m;i++)
        {
            a[i]=s.charAt(i);
            b[i]=t.charAt(i);
        }
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-i-1;j++){
                if(a[j]>a[j+1])
                {
                   char temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;  
                }
            }
        }
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-i-1;j++){
                if(b[j]>b[j+1])
                {
                   char temp=b[j];
                   b[j]=b[j+1];
                   b[j+1]=temp;  
                }
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            if(a[i]==b[i])
            {
                count++;
            }
        }
        if(count==n){
            r=true;
        }
        }
        System.out.println(r);
    }
}
```

## Submission at 2024-10-04 06:01:24


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    continue;
                }
                else {
                j++;  
            }
            }
            
            answer[i]=j-i;
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 06:01:28


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    continue;
                }
                else {
                j++;  
            }
            }
            
            answer[i]=j-i;
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 06:04:11


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
            if(temp[i]>=30 && temp[i]<=100)
            {
                return -1
            }
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    continue;
                }
                else {
                j++;  
            }
            }
            
            answer[i]=j-i;
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 06:04:12


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
            if(temp[i]>=30 && temp[i]<=100)
            {
                return -1
            }
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    continue;
                }
                else {
                j++;  
            }
            }
            
            answer[i]=j-i;
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 06:09:14


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    answer[i]=j-i;
                    continue;
                }
                else {
                j++;  
                answer[i]=0;
            }
            }
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 06:09:16


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    answer[i]=j-i;
                    continue;
                }
                else {
                j++;  
                answer[i]=0;
            }
            }
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 06:09:16


```
import java.util.*;
public class Main{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temp[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++)
        {
            temp[i]=s.nextInt();
        }
        for(int i=0;i<n;i++)
        {
    
            int r=0;
            int j=i+1;
            while(j<n && r!=1)
            {
                if(temp[j]-temp[i]>=1)
                {
                    r=1;
                    answer[i]=j-i;
                    continue;
                }
                else {
                j++;  
                answer[i]=0;
            }
            }
            if(i==n-1)
            {
                answer[i]=0;
            }
        }
        
        for(int i=0;i<n;i++)
        {
        System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-25 05:34:16


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
    ArrayList<Integer> ans=new ArrayList<Integer>();
    ArrayList<Integer> postOrder(Node root)
    {
      if(root==null)
      {
        return ans;
      }
      if(root.left!=null)
      {
        postOrder(root.left);
      }
       if(root.right!=null)
      {
        postOrder(root.right);
      }
      ans.add(root.data);
      return ans;
    }
}
```

## Submission at 2024-10-25 05:53:27


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
        if(root.left==null && root.right==null){
            return true;
        }
        if(root.left==null || root.right==null){
            return false;
        }
        if(root.left==root.right){
            return isSymmetric(root.left) & isSymmetric(root.right);
        }
        return false;
    }
}
```

## Submission at 2024-10-25 06:26:14


```
import java.util.*;
public class Main{
public static void main(String args[])
{
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    String st=sc.next();
    boolean ans=false; char ch=' ';
    for(int i=0;i<st.length();i++)
    {
        ch=st.charAt(i);
        for(int j=0;j<s.length();j++)
        {
            if(ch==s.charAt(j))
            {
                ans=true; 
            }
            else
{
    ans=false;
}
        }
        
    }

    System.out.println(ans);
}
}
```

## Submission at 2024-10-25 06:49:36


```
/* write code from scratch  */ 
import java.util.*;
public class Main{
public static void main(String args[])
{
    Scanner sc=new Scanner(System.in);
    String s=sc.nextLine();
    String st=sc.nextLine();
    boolean ans=false; char ch=' ';
    for(int i=0;i<st.length();i++)
    {
        ch=st.charAt(i);
        for(int j=0;j<s.length();j++)
        {
            if(ch==s.charAt(j))
            {
                ans=true; 
            }
            else
{
    ans=false;
}
        }
        
    }

    System.out.println(ans);
}
}

```

## Submission at 2024-11-22 05:19:26


```
/* write code from scratch */
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--)
        {
            for(int k=0;k<i;k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:28:18


```
// Write Code From Scratch Here
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
         a[i]=s.nextInt();
         sum=sum+a[i];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:44:07


```
// Write Code From Scratch Here
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        int small=0;
        int x=0;
        for(int c=a;c<=b;c++)
        {
            x=((c-a)+(b-c));
           if(small>x) 
           {
            small=x;
           }
        }
        System.out.println(small);
    }
}
```

## Submission at 2024-11-22 05:50:32


```
// Write Code From Scratch Here
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        int small=0;
        int x=0;
            x=((c-a)+(b-c));
        System.out.println(x);
    }
}
```

## Submission at 2024-11-22 05:54:58


```
// Write Code From Scratch Here
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        int small=0;
        int c=a;
        int x=0;
        x=((c-a)+(b-c));
        System.out.println(x);
    }
}
```

## Submission at 2024-11-22 06:12:41


```
/* write code from scratch */
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int N=s.nextInt();
        int A[]=new int[N];
        for(int i=0;i<N;i++)
        {
            A[i]=s.nextInt();
        }
        HashMap<Integer,Integer> m=new HashMap<>();
        for(int i=0;i<N;i++)
        {
            if(m.containsKey(A[i]))
            {
                m.put(A[i],m.getOrDefault(A[i])+1);
            }
            else
            {
                m.put(A[i],1);
            }
        }
        int x=0;
        for(int i=0;i<N;i++)
        {
             x=m.get(A[i]);
            if(x>m.get(A[i+1]))
            {
                x=m.get(A[i+1]);
            }
            else
            {
                m.put(A[i],1);
            }
        }
        int b[]=new int[N]
        for(int i=0;i<N;i++)
        {
            
            if(m.get(A[i])==x)
            {
                b[i]= A[i];
            }
            else
            {
                b[i]=0;
            }
        }
        int max=0;
         for(int i=0;i<N;i++)
        {
            
            if(max<b[i])
            {
                max=b[i];
            }
            
        }
        System.out.println(max);
    }
}
```

## Submission at 2024-11-22 06:19:32


```
/* write code from scratch */
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int N=s.nextInt();
        int A[]=new int[N];
        for(int i=0;i<N;i++)
        {
            A[i]=s.nextInt();
        }
        HashMap<Integer,Integer> m=new HashMap<>();
        for(int i=0;i<N;i++)
        {
            if(m.containsKey(A[i]))
            {
                m.put(A[i],m.getOrDefault(A[i])+1);
            }
            else
            {
                m.put(A[i],1);
            }
        }
        int x=0;
        for(int i=0;i<N;i++)
        {
             x=m.get(A[i]);
            if(x>m.get(A[i+1]))
            {
                x=m.get(A[i+1]);
            }
            else
            {
                m.put(A[i],1);
            }
        }
        int b[]=new int[N];
        for(int i=0;i<N;i++)
        {
            
            if(m.get(A[i])==x)
            {
                b[i]= A[i];
            }
            else
            {
                b[i]=0;
            }
        }
        int max=0;
         for(int i=0;i<N;i++)
        {
            
            if(max<b[i])
            {
                max=b[i];
            }
            
        }
        System.out.println(max);
    }
}
```

## Submission at 2024-11-22 06:22:02


```
/* write code from scratch */
import java.util.*;
public class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int N=s.nextInt();
        int A[]=new int[N];
        for(int i=0;i<N;i++)
        {
            A[i]=s.nextInt();
        }
        HashMap<Integer,Integer> m=new HashMap<>();
        int y=0;
        for(int i=0;i<N;i++)
        {
            if(m.containsKey(A[i]))
            {
                y=m.getOrDefault(A[i]);
                m.put(A[i],y+1);
            }
            else
            {
                m.put(A[i],1);
            }
        }
        int x=0;
        for(int i=0;i<N;i++)
        {
             x=m.get(A[i]);
            if(x>m.get(A[i+1]))
            {
                x=m.get(A[i+1]);
            }
            else
            {
                m.put(A[i],1);
            }
        }
        int b[]=new int[N];
        for(int i=0;i<N;i++)
        {
            
            if(m.get(A[i])==x)
            {
                b[i]= A[i];
            }
            else
            {
                b[i]=0;
            }
        }
        int max=0;
         for(int i=0;i<N;i++)
        {
            
            if(max<b[i])
            {
                max=b[i];
            }
            
        }
        System.out.println(max);
    }
}
```

## Submission at 2024-11-22 06:35:18


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
class RemoveDuplicate
{
    Node removeDuplicate(Node head)
    {
	int temp=head;
    while(temp!=null)
    {
        if(temp==temp.next)
        {
            temp.next=temp.next.next;
        }
        else
        {
            temp=temp.next;
        }
    }
    return head;	
    }
}
```

