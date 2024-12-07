## Submission at 2024-08-09 05:03:51


```
import java.util.Scanner;
 public class Main{
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        
        String name=input.next();
        if((name.length()>=1) && (name.length()<=100)){
            System.out.println("Hello "+name+" !");
        }
        else
           System.out.println("Name should be of lenght between 1 and 100");
    }
}
```

## Submission at 2024-08-09 05:06:27


```
import java.util.Scanner;
 public class Main{
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        
        String name=input.next();
        if((name.length()>=1) && (name.length()<=100)){
            System.out.println("Hello "+name+" !");
        }
        else
           System.out.println("Name should be of lenght between 1 and 100");
    }
}
```

## Submission at 2024-08-09 05:08:48


```
import java.util.Scanner;
 public class Main{
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        
        String name=input.next();
        if((name.length()>=1) && (name.length()<=100)){
            System.out.println("Hello "+name+" !");
        }
        else
           System.out.println("Name should be of lenght between 1 and 100");
    }
}
```

## Submission at 2024-08-09 05:10:39


```
import java.util.Scanner;
 public class Main{
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        
        String name=input.next();
        if((name.length()>=1) && (name.length()<=100)){
            System.out.println("Hello "+name+"!");
        }
        else
           System.out.println("Name should be of lenght between 1 and 100");
    }
}
```

## Submission at 2024-08-09 05:29:14


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        String name;
        for(int i=0;i<n;i++){
            name=input.next();
            System.out.println("Hello " + name + "!");  
        }
    }
}
```

## Submission at 2024-08-16 04:49:51


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
        if(x==1)
           return 0;
        else if(x==2)
           return 1;
        return fibonacci(x-1)+fibonacci(x-2);

         
    }
}

```

## Submission at 2024-08-16 04:52:09


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
        if(x==1)
           return 0;
        else if(x==2)
           return 1;
        return fibonacci(x-1)+fibonacci(x-2);

         
    }
}

```

## Submission at 2024-08-16 04:55:04


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
        return fibonacci(x-1)+fibonacci(x-2);

         
    }
}

```

## Submission at 2024-08-16 05:10:27


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
        if(n==2){
            return true;
        }
        if(n%2==0 && isPowerOfTwo(n/2))
           return true;
        else
           return false;
        
    }
}

```

## Submission at 2024-08-16 05:13:19


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
        if(n==2||n==1){
            return true;
        }
        if(n%2==0 && isPowerOfTwo(n/2))
           return true;
        else
           return false;
        
    }
}

```

## Submission at 2024-08-16 05:20:42


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
        if(n==1){
            return true;
        }
        if(n%2==0 && isPowerOfTwo(n/2))
           return true;
        else
           return false;
        
    }
}

```

## Submission at 2024-08-16 05:26:57


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
        if(n==1){
            return true;
        }
        if(n%2==0 && isPowerOfTwo(n/2))
           return true;
        else
           return false;
        
    }
}

```

## Submission at 2024-08-22 04:26:12


```
def combine(n, k):
    def combine(n, k):
    if k == 0:
        return [[]]

    if k > n:
        return []

    result_with_n = combine(n - 1, k - 1)
    for comb in result_with_n:
        comb.append(n)

    result_without_n = combine(n - 1, k)
    
    return result_with_n + result_without_n

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

if _name_ == "_main_":
    main()

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

## Submission at 2024-08-22 11:43:04


```
def combine(n, k):
    # Write logic here
    assert (n<=20 and n>=1) and (k>=1 and k<=n)
    result = []

    def backtrack(start, path):
        if len(path) == k:
            result.append(path[:])  
            return
        
        if start > n:
            return
        
        path.append(start)
        backtrack(start + 1, path)
        
        path.pop()
        backtrack(start + 1, path)
                     

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

## Submission at 2024-08-22 11:45:03


```
def generate_permutations(nums):    
    if len(nums) == 0:
        return [[]]
    else:
        permute = []
        for i in range(len(nums)):
            if not ((nums[i] >= -10) and (nums[i]<=10)):
               return

            if not(len(nums)== len(set(nums))): 
               return
            # Fixed element
            c_element = nums[i]
            other_nums = nums[:i] + nums[i+1:]
            # Generating permutations for the elements that are left
            left_permutations = generate_permutations(other_nums)
            # Combining the fixed element with each permutation
            for perm in left_permutations:
                permute.append([c_element] + perm)
        return permute

def main():
    
    nums = list(map(int, input().split()))

    assert(1 <= len(nums) <= 6), "Enter valid input"
   
    result = generate_permutations(nums)

# Sort permutations based on first element
    result.sort(key=lambda x: x[0])

        # Print permutations
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

## Submission at 2024-08-22 11:50:28


```
def generateparenthesis(n):
    def paranthesis(s="", open=0, close=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if open < n:
            paranthesis(s + "(", open + 1, close)
        if close < open:
            paranthesis(s + ")", open, close + 1)
    
    result = []
    paranthesis()
    return result


if __name__ == "__main__":
    n = int(input())
    result = generateparenthesis(n)
    print("[\"", end="")
    for i in range(len(result)):
        print(result[i], end="")
        if i < len(result) - 1:
            print("\",\"", end="")
            print("\"]")
```

## Submission at 2024-08-23 02:36:10


```
def combine(n,k):
    def sample(s,ls):
        if len(ls)==k:
            result.append(ls)
            return
        for i in range(s,n+1):
            sample(i+1,ls+[i])

    result=[]
    sample(1,[])
    return result
print(combine(5,3))
```

## Submission at 2024-08-23 02:37:29


```
def genpar(n):
    def paran(s="",left=0,right=0):
        
        if len(s)==2*n:
            r.append(s)
            return
        if left<n:
            
            
            paran(s+"(",left+1,right)
        if right<left:
            
            paran(s+")",left,right+1)
            
    r=[]
    paran()
    return r
def main():
    x=int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if _name=="main_":
    main()
```

## Submission at 2024-08-23 02:41:52


```
def genpar(n):
    def paran(s="",left=0,right=0):
        
        if len(s)==2*n:
            r.append(s)
            return
        if left<n:
            
            
            paran(s+"(",left+1,right)
        if right<left:
            
            paran(s+")",left,right+1)
            
    r=[]
    paran()
    return r
def main():
    x=int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-27 08:37:15


```
n1,n2=map(int, input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

def compareArrays(a1,a2):
    if(len(a1)==len(a2)):
        a1.sort()
        a2.sort()
        for i in range(0,len(a1)):
            if(a1[i]!=a2[i]):
                return False
        return True
    else: 
        return False  

print(compareArrays(arr1,arr2))
```

## Submission at 2024-08-27 08:43:30


```
n1,n2=map(int, input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

def compareArrays(a1,a2):
    if(len(a1)==len(a2)):
        a1.sort()
        a2.sort()
        for i in range(0,len(a1)):
            if(a1[i]!=a2[i]):
                return False
        return True
    else: 
        return False  

print(compareArrays(arr1,arr2))
```

## Submission at 2024-08-27 10:59:13


```
n1,n2=map(int, input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))

arr1.sort()
arr2.sort()
if arr1==arr2:
    print("true")  
else: 
    print("false")


```

## Submission at 2024-08-27 11:02:39


```
n=int(input())
def func(n):
    assert n>=1 and n<=1000
    sum=0
    for i in range(1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            sum+=i
    return sum

print(func(7))
```

## Submission at 2024-08-27 11:05:16


```
n=int(input())
def func(n):
    assert n>=1 and n<=1000
    sum=0
    for i in range(1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            sum+=i
    return sum

print(func(n))
```

## Submission at 2024-08-27 11:05:45


```
n=int(input())
def func(n):
    assert n>=1 and n<=1000
    sum=0
    for i in range(1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            sum+=i
    return sum

print(func(n))
```

## Submission at 2024-08-27 11:06:23


```
n=int(input())
def func(n):
    assert n>=1 and n<=1000
    sum=0
    for i in range(1,n+1):
        if(i%3==0 or i%5==0 or i%7==0):
            sum+=i
    return sum

print(func(n))
```

## Submission at 2024-08-27 11:33:13


```
n=int(input())
arr=list(map(int,input().split()))

def func(array):
    count=0
    for i in arr:
        strnum=str(i)
        if len(strnum)%2==0:
            count+=1
    return count

print(func(arr))
```

## Submission at 2024-08-30 05:03:17


```
x,n=map(int,input().split())
def pow(x,n):
    if(n==0):
        return 1
    elif(n>0):
        return int(x*pow(x,n-1))
    else:
        return int(1/pow(x,-n))

print(pow(x,n)) 
```

## Submission at 2024-08-30 05:11:27


```
n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
c=[]

for i in range(n):
    max=0
    if(a[i]>=b[i]):
        max=a[i]
        c.append(max)
    else:
        max=b[i]
        c.append(max)

for i in range(n):
    print(c[i],end=" ")
```

## Submission at 2024-08-30 05:44:21


```
s=input()

def isPalindrome(s,i):
    n=len(s)
    if(i==n//2) and (s[n//2]==s[(n//2)+1]):
        print("YES")
    elif(s[i]!=s[n-1-i]):
        print("NO")
    isPalindrome(s,i+1)
         
isPalindrome(s,0)





    


```

## Submission at 2024-08-30 06:02:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    cur=head
    temp=head.next

    while temp.next!=None:
        temp=temp.next
        cur=cur.next
    cur=temp.next
    while temp.next!=None:
        temp=cur
        cur=temp.next





```

## Submission at 2024-08-30 06:24:20


```
s=input()

def isPalindrome(s,i):
    n=len(s)
    if(i==n//2) and (s[n//2]==s[(n//2)+1]):
        print("YES")
        return
    elif(s[i]!=s[n-1-i]):
        print("NO")
        return
    isPalindrome(s,i+1)
         
isPalindrome(s,0)




```

## Submission at 2024-08-30 06:26:12


```
s=input()

def isPalindrome(s,i):
    n=len(s)
    if(i==n//2) and (s[n//2]==s[(n//2)+1]):
        print("YES")
        return
    elif(s[i]!=s[n-1-i]):
        print("NO")
        return
    isPalindrome(s,i+1)
         
isPalindrome(s,0)




```

## Submission at 2024-09-06 04:55:25


```
def p(s):
    while len(s)>1:
        if s[0]==s[-1]:
            s.pop(-1)
            s.pop(0)
            p(s)
        else:
            return "NO"
        return "YES"

s=list(input())
print(p(s))
```

## Submission at 2024-09-06 04:57:14


```
def p(s):
    if len(s)==0:
        return "YES"
    while len(s)>1:
        if s[0]==s[-1]:
            s.pop(-1)
            s.pop(0)
            p(s)
        else:
            return "NO"
        return "YES"

s=list(input())
print(p(s))
```

## Submission at 2024-09-06 05:12:00


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    cur=head
    prev=None
    while cur:
        temp=cur.next
        cur.next=prev
        prev=cur
        cur=temp
    return prev


```

## Submission at 2024-10-04 05:07:11


```
s=input()
t=input()

s1=[]
t1=[]
for i in s:
    s1.append(i)
for j in t:
    t1.append(j)
s1.sort()
t1.sort()
if s1==t1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 05:30:34


```
n=int(input())
temp=list(map(int,input().split()))
days=[]
for i in range(n-1):
    for j in range(i,1,n):
        count=1
        if temp[i]<temp[j+1]:
            days.append(count)
            break 
        else:
            count+=1
days.append(0)

print(days)


```

## Submission at 2024-10-04 05:38:23


```
def minDays(bloomDay,m,k):
    if m*k>n:
        return -1
    
    
```

## Submission at 2024-10-04 05:55:31


```
n=int(input())
temp=list(map(int,input().split()))
days=[]
for i in range(n-1):
    for j in range(i+1,n,1):
        count=1
        if temp[i]<temp[j]:
            print(count,end=" ")
            break 
        else:
            count=1+count
print(0,end=" ")




```

## Submission at 2024-10-04 06:12:53


```
n=int(input())
temp=list(map(int,input().split()))

for i in range(n-1):
    count=1
    for j in range(i+1,n,1):
        if temp[i]<temp[j]:
            print(count,end=" ")
            break 
        else:
            count=1+count
print(0,end=" ")


```

## Submission at 2024-10-04 06:12:55


```
n=int(input())
temp=list(map(int,input().split()))

for i in range(n-1):
    count=1
    for j in range(i+1,n,1):
        if temp[i]<temp[j]:
            print(count,end=" ")
            break 
        else:
            count=1+count
print(0,end=" ")


```

## Submission at 2024-10-04 06:20:19


```
n=int(input())
temp=list(map(int,input().split()))

for i in range(n-1):
    count=1
    for j in range(i+1,n,1):
        if temp[i]<temp[j]:
            print(count,end=" ")
            break 
        elif((j==n-1) and (temp[i]>temp[n-1])):
            print(0,end=" ")
        else:
            count=1+count
print(0,end=" ")


```

## Submission at 2024-10-04 06:28:13


```
def minDays(bloomDay,m,k):
    if m*k>n:
        return -1

n,m,k=map(int,input().split())
days=list(map(int,input().split()))
print(minDays(days,m,k))
```

## Submission at 2024-10-25 05:33:55


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
    ans=[]
    if root==None:
      return
    postOrder(root.left)
    postOrder(root.right)
    ans.append(root.data)
    return ans

```

## Submission at 2024-10-25 05:50:46


```
ransomNote=input()
magazine=input()
ransomNote1=ransomNote.split()
magazine1=magazine.split()

magazine1.sort()
if ransomNote==magazine:
    print ("true")
else:
    print("false")

def bubbleSort()


```

## Submission at 2024-10-25 05:52:29


```
ransomNote=input()
magazine=input()
ransomNote1=ransomNote.split()
magazine1=magazine.split()
ransomNote1.sort()
magazine1.sort()
if ransomNote==magazine:
    print ("true")
else:
    print("false")




```

## Submission at 2024-10-25 05:56:44


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
    ans=[]

    def post(node):
      if node==None:
        return
      post(root.left)
      post(root.right)
      ans.append(root.data)

    post(root)
    return ans
```

## Submission at 2024-10-25 06:02:06


```
ransomNote=input()
magazine=input()
ransomNote1=ransomNote.split()
magazine1=magazine.split()
ransomNote1.sort()
magazine1.sort()
if ransomNote in magazine:
    print ("true")
else:
    print("false")



```

## Submission at 2024-10-25 06:11:30


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def Symmetric(node):
            if node==None:
                return True
            if not Symmetric(node.left) and Symmetric(node.right):
                return False
        Symmetric(root)
```

## Submission at 2024-10-25 06:12:35


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def Symmetric(node):
            if node==None:
                return True
            if not(Symmetric(node.left) and Symmetric(node.right)):
                return False
        Symmetric(root)
```

## Submission at 2024-10-25 06:13:50


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def Symmetric(node):
            if node==None:
                return True
            if not(Symmetric(node.left) and Symmetric(node.right)):
                return False
        Symmetric(root)
```

## Submission at 2024-10-25 06:18:37


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
    ans=[]

    def post(node):
      if node==None:
        return
      post(node.left)
      post(node.right)
      ans.append(root.data)

    post(root)
    return ans
```

## Submission at 2024-10-25 06:19:05


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
    ans=[]

    def post(node):
      if node==None:
        return
      post(node.left)
      post(node.right)
      ans.append(node.data)

    post(root)
    return ans
```

## Submission at 2024-10-25 06:35:24


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
       def Symmetric(node):
            if node==None:
                return True
            if not(Symmetric(node.left) and Symmetric(node.right)):
                return False
        Symmetric(root)
```

## Submission at 2024-10-25 06:35:56


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
       def Symmetric(node):
            if node==None:
                return True
            if not(Symmetric(node.left) and Symmetric(node.right)):
                return False
        return Symmetric(root)
```

## Submission at 2024-10-25 06:37:39


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        def Symmetric(node):
            if node==None:
                return True
            if not(Symmetric(node.left) and Symmetric(node.right)):
                return False
        Symmetric(root)
```

## Submission at 2024-10-25 07:01:59


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
       def isSymmetric(self, root):
        def Symmetric(node):
            if node==None:
                return True
            if not(Symmetric(node.left) and Symmetric(node.right)):
                return False
        Symmetric(root)
```

## Submission at 2024-11-22 05:06:47


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
        def check(root):
            if root==None:
                return True
            else:
                if root.left!=None and root.left.data>root.data:
                    return False
                elif root.right!=None and root.right.data<root.data:
                    return False
            check(root.left)
            check(root.right)
        check(root)
```

## Submission at 2024-11-22 05:22:02


```
n=int(input())
for i in range(n):
    for j in range(i+1):
        print('*',end="")
    print('\n')
for k in range(n-1):
    for m in range(n-k):
        print('*',end="")
    print('\n') 
    
```

## Submission at 2024-11-22 05:32:52


```
n=int(input())
for i in range(n):
    for j in range(i+1):
        print('*',end="")
    print("")
    
for k in range(n-1):
    for m in range(n-1-k):
        print('*',end="")
    print("")
     
    
```

## Submission at 2024-11-22 05:39:24


```
n=int(input())
arr=list(map(int,input().split()))
sum=0
for i in range(n):
    sum+=arr[i]
print(sum)
```

## Submission at 2024-11-22 05:52:03


```
# Write Code From Scratch Here
n1,n2=map(int,input().split())
print(-n1+n2)
```

## Submission at 2024-11-22 05:52:10


```
# Write Code From Scratch Here
n1,n2=map(int,input().split())
print(-n1+n2)
```

## Submission at 2024-11-22 06:00:43


```
n=int(input())
a=list(map(int,input().split()))
score=0
for i in range(n):
    for j in range(i+1,n):
        if a[i]==a[j]:
            score+=1
print(score)
```

## Submission at 2024-11-22 06:00:47


```
n=int(input())
a=list(map(int,input().split()))
score=0
for i in range(n):
    for j in range(i+1,n):
        if a[i]==a[j]:
            score+=1
print(score)
```

## Submission at 2024-11-22 06:34:25


```
m,n,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
num=0
temp=0
for i in range(m):
    for j in range(n):
        if arr1[i]-arr2[j]<=d and arr2[j]-arr1[i]<=d:
            temp=0
            break
        else:
            temp+=1
    num+=temp
    temp=0
            
print(num)
```

## Submission at 2024-11-22 06:41:04


```
m,n,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
num=0
temp=0
for i in range(m):
    for j in range(n):
        if arr1[i]-arr2[j]<=d and arr2[j]-arr1[i]<=d:
            temp=0
            break
        else:
            temp+=1
    num+=temp
    temp=0
            
print(num)
```

## Submission at 2024-11-22 06:41:09


```
m,n,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
num=0
temp=0
for i in range(m):
    for j in range(n):
        if arr1[i]-arr2[j]<=d and arr2[j]-arr1[i]<=d:
            temp=0
            break
        else:
            temp+=1
    num+=temp
    temp=0
            
print(num)
```

## Submission at 2024-11-22 06:41:09


```
m,n,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
num=0
temp=0
for i in range(m):
    for j in range(n):
        if arr1[i]-arr2[j]<=d and arr2[j]-arr1[i]<=d:
            temp=0
            break
        else:
            temp+=1
    num+=temp
    temp=0
            
print(num)
```

## Submission at 2024-11-22 06:41:10


```
m,n,d=map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
num=0
temp=0
for i in range(m):
    for j in range(n):
        if arr1[i]-arr2[j]<=d and arr2[j]-arr1[i]<=d:
            temp=0
            break
        else:
            temp+=1
    num+=temp
    temp=0
            
print(num)
```

## Submission at 2024-11-22 06:59:31


```
# write code from scratch
N=int(input())
A=list(map(int,input().split()))
arr=A.sort()
frequency=[]
index=0
for i in range(N):
    count=0
    for j in range(i+1,N):
        if arr[i]==arr[j]:
            count+=1
    frequency.append(count)
minimum=min(frequency)

for i in range(N):
    if frequency[i]==minimum:
        index=i
        break
print(A[index])
```

## Submission at 2024-11-22 06:59:32


```
# write code from scratch
N=int(input())
A=list(map(int,input().split()))
arr=A.sort()
frequency=[]
index=0
for i in range(N):
    count=0
    for j in range(i+1,N):
        if arr[i]==arr[j]:
            count+=1
    frequency.append(count)
minimum=min(frequency)

for i in range(N):
    if frequency[i]==minimum:
        index=i
        break
print(A[index])
```

## Submission at 2024-11-22 07:05:41


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
        def check(root):
            check(root.left)
            if root==None:
                return True
            else:
                if root.left!=None and root.left.data>root.data:
                    return False
                elif root.right!=None and root.right.data<root.data:
                    return False
            
            check(root.right)
        check(root)
```

