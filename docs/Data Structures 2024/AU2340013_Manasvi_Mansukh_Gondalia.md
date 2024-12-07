## Submission at 2024-08-09 05:01:59


```
# Write your Python code here from the scratch
Name=input();
if len(Name)<100 or len(Name)>100:
    print("error")
else:
    print("Hello",Name,"!")

```

## Submission at 2024-08-09 05:02:29


```
# Write your Python code here from the scratch
Name=input();
if len(Name)<100 or len(Name)>100:
    print("error")
else:
    print("Hello"+Name+"!")

```

## Submission at 2024-08-09 05:02:57


```
# Write your Python code here from the scratch
Name=input("");
if len(Name)<100 or len(Name)>100:
    print("error")
else:
    print("Hello"+Name+"!")

```

## Submission at 2024-08-09 05:03:50


```
# Write your Python code here from the scratch
Name=input("");
if len(Name)<0 or len(Name)>100:
    print("error")
else:
    print("Hello"+Name+"!")

```

## Submission at 2024-08-09 05:04:49


```
# Write your Python code here from the scratch
Name=input("");
if len(Name)<0 or len(Name)>100:
    print("error")
print("Hello"+Name+"!")

```

## Submission at 2024-08-09 05:05:06


```
# Write your Python code here from the scratch
Name=input("");
if len(Name)<0 or len(Name)>100:
    print("error")
print("Hello "+Name+"!")

```

## Submission at 2024-08-09 05:08:10


```
# Write your Python code here
num=int(input())

for i in range(0,num):
    Name=input("")
    print("Hello "+Name+"!")
```

## Submission at 2024-08-09 05:14:54


```
# Write your Python code here from the scratch
Name=input("")
if len(Name)<0 or len(Name)>100:
    print("error")
print("Hello "+Name+"!")
```

## Submission at 2024-08-09 05:16:30


```
# Write your Python code here
num=int(input(""))
for i in range(0,n):
    Name=input("")
    print("Hello "+Name+"!")
```

## Submission at 2024-08-09 05:17:49


```
# Write your Python code here
num=int(input(""))
for i in range(0,num):
    Name=input("")
    print("Hello "+Name+"!")
```

## Submission at 2024-08-16 04:44:14


```
def fib(x):
    if(x<=1):
        return x
    last=fib(x-1)
    slast=fib(x-2)
    
    return last+slast

        

```

## Submission at 2024-08-16 04:45:27


```
def fib(x):
    if x<=1:
        return x
    last=fib(x-1)
    slast=fib(x-2)
    return last+slast

        

```

## Submission at 2024-08-16 04:51:04


```
def fib(x):
    if x<=1:
        return x
    last=fib(x-1)
    slast=fib(x-2)
    return print(last+slast)
 

```

## Submission at 2024-08-16 04:51:56


```
def fib(x):
    if x<=1:
        return x
    last=fib(x-1)
    slast=fib(x-2)
    return last+slast

    x=int(input())
    print(fib(x))
 

```

## Submission at 2024-08-16 04:52:18


```
def fib(x):
    if x<=1:
        return x
    last=fib(x-1)
    slast=fib(x-2)
    return last+slast

 x=int(input())
print(fib(x))
 

```

## Submission at 2024-08-16 04:53:41


```
def fib(x):
    if x<=1:
        return x
    last=fib(x-1)
    slast=fib(x-2)
    return last+slast

x=int(input())
print(fib(x))
 

```

## Submission at 2024-08-16 04:56:54


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0:
        return True
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

## Submission at 2024-08-16 05:00:05


```
def is_power_of_two(n:int) -> bool:
    # Write your logic here
    if n==1:
        return True
    elif n < 1 or n % 2 != 0:
        return False
    else:
        return is_power_of_two(n//2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:02:34


```
def is_power_of_two(n:int) -> bool:
    # Write your logic here
    if n==1:
        return "True"
    elif n < 1 or n % 2 != 0:
        return "False"
    else:
        return is_power_of_two(n//2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:02:57


```
def is_power_of_two(n:int) -> bool:
    # Write your logic here
    if n==1:
        return "True"
    elif n < 1 or n % 2 != 0:
        return "False"
    else:
        return "True"


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:03:55


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "True"
    elif n < 1 or n % 2 != 0:
        return "False"
    else:
        return is_power_of_two(n//2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:05:24


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "True"
    elif n <=0 or n % 2 != 0:
        return "False"
    else:
        return is_power_of_two(n//2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:06:51


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "True"
    elif n <=0 or n % 2 != 0:
        return "False"
    else:
        return is_power_of_two(n/2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:07:26


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "True"
    elif n <=0 or n % 2 != 0:
        return "False"
    return is_power_of_two(n/2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:07:48


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "True"
    elif n <=0 or n % 2 != 0:
        return "False"
    return is_power_of_two(n//2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:08:12


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "True"
    elif n <=0 or n % 2 != 0:
        return "False"
return is_power_of_two(n/2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:10:47


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if n==1:
        return "true"
    elif n <=0 or n % 2 != 0:
        return "false"
    else:
        return is_power_of_two(n/2)


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:07:40


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

## Submission at 2024-08-22 05:14:21


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
n=int(input())
k=int(input())
print(combine(n,k))
```

## Submission at 2024-08-22 05:20:26


```
def combine(n, k):
    # Define the recursive helper function
    def sample(s, ls):
        if len(ls) == k:
            result.append(ls)
            return
        for i in range(s, n + 1):
            sample(i + 1, ls + [i])

    result = []
    sample(1, [])
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

## Submission at 2024-08-22 05:23:58


```
def permute(nums):
    if len(nums) == 0:
        return [[]]
    result = []
    for i in range(len(nums)):
        for p in permute(nums[:i] + nums[i+1:]):
            result.append([nums[i]] + p)
    return result

def main():
    nums = list(map(int, input().split()))
    result = permute(nums)
    result.sort()
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 05:26:40


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
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

## Submission at 2024-08-22 05:28:16


```
def genpar(n):
    def paran(s="", left=0, right=0):
        if len(s) == 2 * n:
            r.append(s)
            return
        if left < n:
            paran(s + "(", left + 1, right)
        if right < left:
            paran(s + ")", left, right + 1)
            
    r = []
    paran()
    return r

def main():
    x = int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-28 03:02:26


```
# Write the code from scratch, no boilerplate is required
def check_eq_arr(arr1, arr2):
    arr1.sort()
    arr2.sort()
    return arr1 == arr2

def main():
    n1, n2 = map(int, input().split())
    
    if n1 != n2:
        print("false")
        return
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    answer = check_eq_arr(arr1, arr2)
    print("true" if answer else "false")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 03:07:56


```
def multiples(n):
    totalsum=0;
    for i in range(1,n+1):
        if i%3==0 or i%5==0 or i%7==0:
            totalsum+=i
    return totalsum

def main():
    n=int(input())
    result=multiples(n)
    print (result)

if __name__== "__main__":
    main()


```

## Submission at 2024-08-28 03:17:53


```
def evennums(nums):
    count=0
    for i in nums:
        if len(str(i))%2==0:
            count+=1
    return count

def main():
    n = int(input())
    nums = list(map(int, input().split()))
    result=evennums(nums)
    print(result)

if  __name__ == "__main__":
    main()


```

## Submission at 2024-08-28 04:06:32


```
def missingnum(arr,k):
    missing_count=0;
    current=1;
    for i in arr:
        while current<i:
            missing_count+=1
            if missing_count==k:
                return current
            current+=1
        current+=1
    while missing_count<k:
        missing_count+=1
        if missing_count==k:
            return current
        current+=1

def main():
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    result = missingnum(arr, k)
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 04:15:13


```
# Write Code from Scratch
def transpose(matrix):
    # Transpose the matrix by swapping rows with columns
    return [list(row) for row in zip(*matrix)]

def main():
    # Read the dimensions
    m, n = map(int, input().split())
    
    # Read the matrix
    matrix = [list(map(int, input().split())) for _ in range(m)]
    
    # Transpose the matrix
    transposed_matrix = transpose(matrix)
    
    # Print the transposed matrix
    for row in transposed_matrix:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-29 06:07:07


```
def triangular_sum(arr):
    while len(arr) > 1:
        arr = [arr[i] + arr[i + 1] for i in range(len(arr) - 1)]
    return arr[0]

# Input
n = int(input())
arr = list(map(int, input().split()))

# Calculate the triangular sum
result = triangular_sum(arr)

# Output the result
print(result)
```

## Submission at 2024-08-29 06:28:40


```
def spiral_order(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        # Traverse from left to right across the top row
        result.extend(matrix[top][left:right+1])
        top += 1

        # Traverse from top to bottom down the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1

        if top <= bottom:
            # Traverse from right to left across the bottom row
            result.extend(matrix[bottom][right:left-1:-1])
            bottom -= 1

        if left <= right:
            # Traverse from bottom to top up the left column
            for i in range(bottom, top-1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Get the spiral order
result = spiral_order(matrix)

# Output the result as a space-separated string
print(" ".join(map(str, result)))

```

## Submission at 2024-08-29 06:30:40


```
def spiral_order(matrix):
    result = []
    if not matrix:  # edge case: empty matrix
        return result

    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        # Traverse from left to right across the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1
        
        # Traverse from top to bottom down the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1
        
        if top <= bottom:
            # Traverse from right to left across the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1
        
        if left <= right:
            # Traverse from bottom to top up the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return result

# Input
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Get the spiral order
result = spiral_order(matrix)

# Output the result as a space-separated string
print(" ".join(map(str, result)))

```

## Submission at 2024-08-30 05:12:25


```
import java.util.Scanner;
class Main {
    
    
        public static void ispalindrome(String str,String newstr,int index){
            if(index<0){
                System.out.println(newstr);
                return;
            }
            char current=str.charAt(index);
            for(int i=str.length()-1;i>0;i--){
                newstr+=current;
            }
            ispalindrome(str,newstr,index-1);
        }
        public static void main (String args []) {
        // Write code from scratch
        Scanner input=new Scanner(System.in);
            String str=input.nextLine();
            String answer=ispalindrome(str,"",str.length()-1);
            if(str==answer){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
    }
}
```

## Submission at 2024-08-30 05:21:35


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { 
    public static int Power(int x, int n){
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        int pow=x*Power(x,n-1);
        return pow;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
            int x=input.nextInt();
            int n=input.nextInt();
            int answer=Power(x,n);
            System.out.println(answer);
        }
    
}
```

## Submission at 2024-08-30 05:30:50


```
# write from scratch, create a function named Pow(x:int , n:int)
def power(x,n):
    if n==0:
        return 1
    if x==0:
        return 0
    pow1=x*power(x,n-1)
    return pow1

def main():
    x,n=list(map(int,input().split()))
    answer=power(x,n)
    print(answer)

if __name__=="__main__":
    main()
```

## Submission at 2024-08-30 05:44:17


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void maxarr(int n, int[] arr1, int[] arr2){
        int[] arr=new int[n];
        int maxval=0;
        for(int i=0;i<n;i++){
            if(arr1[i]>arr2[i]){
                maxval=arr1[i];
                arr+=maxval;
            }else{
                maxval=arr2[i];
                arr+=maxval;
            }
        }
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr1=new int[n];
        int[] arr2=new int[n];
        int[] arr=maxarr(n,arr1,arr2);
        System.out.println(arr);
    }
}
```

## Submission at 2024-08-30 06:15:49


```
import java.util.Scanner;
class Main {
    
    
        public static String ispalindrome(String str,String newstr,int index){
            if(index<0){
                System.out.println(newstr);
                return newstr;
            }
            char current=str.charAt(index);
            for(int i=str.length()-1;i>0;i--){

                newstr+=current;
                ispalindrome(str,newstr,index-1);

            }
            
            return newstr;
        }
        public static void main (String args []) {
        // Write code from scratch
        Scanner input=new Scanner(System.in);
            String str=input.nextLine();
            int index=str.length()-1;
            String answer=ispalindrome(str,"",index);
            if(str.equals(answer)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
    }
}
```

## Submission at 2024-08-30 06:24:38


```
import java.util.Scanner;
class Main {
    
    
        public static String ispalindrome(String str,String newstr,int index){
            if(index<0){

                return newstr;
            }
            char current=str.charAt(index);
            newstr+=current;
            ispalindrome(str,newstr,index-1); 
            return newstr;
        }
        public static void main (String args []) {
        // Write code from scratch
        Scanner input=new Scanner(System.in);
            String str=input.nextLine();
            int index=str.length()-1;
            String answer=ispalindrome(str,"",index);
            if(str.equals(answer)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
    }
}
```

## Submission at 2024-09-04 03:53:27


```
import java.util.Scanner;
class Main{
    public static String isPalindrome(String str, String newstr, int index){
        if(index<0){
            return newstr;
        }
        char current=str.charAt(index);
        newstr+=current;
        isPalindrome(str,newstr,index-1);
        return newstr;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String str=input.nextLine();
        String answer=isPalindrome(str,"",str.length()-1);
        for(int i=0;i<answer.length();i++){
            if(str.charAt(i)==answer.charAt(i)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }

    }
}
```

## Submission at 2024-09-04 08:00:56


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n= input.nextInt();
        int[] a=new int[n];
        int[] b=new int[n];
        for(int i=0;i<n;i++){
            a[i]=input.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i]=input.nextInt();
        }
        int[] c=new int[n];
        for(int i=0;i<n;i++){
            int maxval=0;
            if(a[i]>b[i]){
                maxval=a[i];
            }else{
                maxval=b[i];
            }
            c[i]+=maxval;
        }
        for(int i=0;i<n;i++){
            System.out.print(c[i]+" ");
        }

    }
}
```

## Submission at 2024-09-04 08:11:59


```
# write from scratch, create a function named Pow(x:int , n:int)
def power(x,n):
    if n==0:
        return 1
    if x==0:
        return 0
    half_power = power(x, n // 2)
    if n % 2 == 0:
        return half_power * half_power
    else:
        return x * half_power * half_power


def main():
    x,n=list(map(int,input().split()))
    answer=power(x,n)
    print(answer)

if __name__=="__main__":
    main()
```

## Submission at 2024-09-12 05:27:26


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
        Node temp=head;
        Node prev=null;
        while(temp!=null){
            Node front=temp.next;
            temp.next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
}
```

## Submission at 2024-09-12 05:59:13


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
    if (x == 1) {
            return head.next;  // Simply return the second node as the new head
        }

        Node temp = head;
        int count = 1;

        // Traverse to the node just before the xth node
        while (count < x - 1 && temp != null) {
            temp = temp.next;
            count++;
        }

        // Check if we are at the right position and if the next node exists
        if (temp != null && temp.next != null) {
            // Skip the xth node
            temp.next = temp.next.next;
        }

        return head;

    }
}
```

## Submission at 2024-09-12 06:44:56


```

/* Structure of class Node is
class Node
{
    int data;
    Node next;

    Node(int d)
    {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to check whether the list is palindrome.
    public Node reverseList(Node head) {
        if(head==null || head.next==null){
            return head;
        }
        Node temp=head;
        Node prev=null;
        while(temp!=null){
            Node front=temp.next;
            temp.next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
        
    }
    boolean isPalindrome(Node head) {
        // Your code here
        if (head == null || head.next == null) {
            return true;
        }
        Node slow=head;
        Node fast=head;
        while(fast.next!=null && fast.next.next!=null){
            slow=slow.next;
            fast=fast.next.next;
        }
        Node newHead=reverseList(slow.next);
        Node first=head;
        Node second=newHead;
        while(second!=null){
            if(first.data!=second.data){
                reverseList(newHead);
                return false;
            }
            first=first.next;
            second=second.next;
        }
        reverseList(newHead);
        return true;
    }
}


```

## Submission at 2024-09-13 04:13:21


```
// Write Code from Scratch here
import java.util.Scanner;
class Main{
    public String pow3(long n){
        if(n<=0){
            return "False";
        }
        if(n%3==0){
            return pow3(n/3);
        }
        if(n==1){
            return "True";
        }
        return "False";
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        long n=input.nextLong();
        Main obj=new Main();
        String answer=obj.pow3(n);
        System.out.println(answer);
    }
}
```

## Submission at 2024-10-04 05:37:41


```
// Write Java code from scratch
import java.util.Scanner;
class Temp{
    public int temp(int n, int[] arr){
        for(int i=0;i<n;i++){
            int day=1;
            if(arr[i]<arr[i+1]){
                return day;
            }else if(arr[i]>arr[i+1]){
                while(arr[i]>arr[i+1]){
                    day++;
                }
                return day;
            }else if(i==n){
                return 0;
            }
            }
           return -1; 
        }
        public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            int num=input.nextInt();
            arr[i]=num;
        }
        int[] answer=new int[n];
        int day=temp(n,arr);
        for(int i=0;i<n;i++){
            asnwer[i]
        }
    }
    }
    

```

## Submission at 2024-10-04 05:53:40


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public int temp(int n, int[] arr){
        int a=0;
        for(int i=a;i<n;i++){
            int day=1;
            if(arr[i]<arr[i+1]){
                return day;
            }else if(arr[i]>arr[i+1]){
                
                    day++;
            
                return day;
            }else if(i==(n-1)){
                return 0;
            }
            a++;
            }
           return -1; 
        }
     public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        Main obj=new Main();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            int num=input.nextInt();
            arr[i]=num;
        }
         int day=obj.temp(n,arr);
        int[] answer=new int[n];
        for(int i=0;i<n;i++){

            answer[i]=day;
            System.out.print(answer[i]+" ");
        }
    }
    }
```

## Submission at 2024-10-04 06:22:14


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public int temp(int n, int[] arr,int a){
        for(int i=a+1;i<n;i++){
            int day=1;
            if(arr[i-1]<arr[i]){
                return day;
            }else if(arr[i-1]>arr[i]){
                
                    day++;
            
                return day;
            }
            a++;
            }
           return 0; 
        }
     public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        Main obj=new Main();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            int num=input.nextInt();
            arr[i]=num;
        }
         
        int[] answer=new int[n];
        for(int i=0;i<n;i++){
            int day=obj.temp(n,arr,i);
            answer[i]=day;
            System.out.print(answer[i]+" ");
        }
    }
    }
```

## Submission at 2024-10-04 06:29:51


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public int temp(int n, int[] arr,int a){
        for(int i=a+1;i<n;i++){
            int day=1;
            if(arr[i-1]<arr[i]){
                return day;
            }else if(arr[i-1]>arr[i]){
               
                    day+=n-i;
            
                return day;
            }
            a++;
            }
           return 0; 
        }
     public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        Main obj=new Main();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            int num=input.nextInt();
            arr[i]=num;
        }
         
        int[] answer=new int[n];
        for(int i=0;i<n;i++){
            int day=obj.temp(n,arr,i);
            answer[i]=day;
            System.out.print(answer[i]+" ");
        }
    }
    }

```

## Submission at 2024-10-11 04:39:39


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public int temp(int n, int[] arr,int a){
        for(int i=a+1;i<n;i++){
            int day=1;
            if(arr[i-1]<arr[i]){
                return day;
            }else if(arr[i-1]>arr[i]){
                
                    day+=n-i-1;
            
                return day;
            }
            a++;
            }
           return 0; 
        }
     public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        Main obj=new Main();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            int num=input.nextInt();
            arr[i]=num;
        }
         
        int[] answer=new int[n];
        for(int i=0;i<n;i++){
            int day=obj.temp(n,arr,i);
            answer[i]=day;
            System.out.print(answer[i]+" ");
        }
    }
    }
```

## Submission at 2024-10-11 04:45:46


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public int temp(int n, int[] arr,int a){
        int day = 0;
        for (int i = a+1; i < n; i++) {
            day++;
            if (arr[a] < arr[i]) {   // Temperature increases
                return day;
            } 
        }
        // If no increase or decrease is found in the remaining days
        return 0;
        }
     public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        Main obj=new Main();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
         
        int[] answer=new int[n];
        for (int i = 0; i < n; i++) {
            int day = obj.temp(n, arr, i);
            answer[i] = day;
        }

        // Output the answer array
        for (int i = 0; i < n; i++) {
            System.out.print(answer[i] + " ");
        }

        input.close();
    }
    }
```

## Submission at 2024-10-11 05:48:23


```
// Write Java code from scratch
import java.util.Scanner;
class Main{
    public boolean anagram(String s, String t){
        int firststr=first(s);
        int secondstr=second(t);
        if(firststr==secondstr){
            return true;
        }
        return false;
    }
    public int first(String s){
        int count=0;
        for(int i=0;i<s.length();i++){
            count++;
        }
        return count;
    }
    public int second(String t){
        int count=0;
        for(int i=0;i<t.length();i++){
            count++;
        }
        return count;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        Main obj=new Main();
        String first=input.nextLine();
        String second=input.nextLine();
        boolean answer=obj.anagram(first,second);
        System.out.println(answer);
    }
}
```

## Submission at 2024-10-11 05:56:23


```
// Write Java code from scratch
import java.util.Arrays;
import java.util.Scanner;

class Main {
    public boolean anagram(String s, String t) {
        // If the lengths are not equal, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Convert strings to char arrays and sort them
        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        
        Arrays.sort(sArr);
        Arrays.sort(tArr);

        // Compare the sorted char arrays
        return Arrays.equals(sArr, tArr);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Main obj = new Main();
        String first = input.nextLine();
        String second = input.nextLine();

        boolean answer = obj.anagram(first, second);
        System.out.println(answer);
        
        input.close();
    }
}
```

## Submission at 2024-10-19 10:09:44


```
# Write code from scratch here
def time_to_buy_tickets(tickets, k):
    time = 0
    
    # Iterate through the queue
    for i in range(len(tickets)):
        # If the person is before or at k
        if i <= k:
            # They will buy their tickets or stop when k finishes
            time += min(tickets[i], tickets[k])
        else:
            # If the person is after k
            # They can buy their tickets until k finishes
            time += min(tickets[i], tickets[k] - 1)

    return time

# Input handling
n = int(input())  # Number of people
tickets = list(map(int, input().split()))  # Array of ticket requirements
k = int(input())  # Index of the person in question

# Output the time required for person at position k to finish buying all tickets
print(time_to_buy_tickets(tickets, k))

```

## Submission at 2024-10-25 04:40:55


```
// Write your code from scratch here
public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
```

## Submission at 2024-10-25 05:38:41


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
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       ArrayList<Integer> list=new ArrayList<>();
    
       if(root==null){
        return list;
       }
       postOrder(root.left);
       list.add(root.left.data);
       postOrder(root.right);
       list.add(root.right.data);
       list.add(root.data);
       return list;
    }
}
```

## Submission at 2024-10-25 06:02:32


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
   public static boolean check(Node root1,Node root2){
    if(root1==null || root2==null){
        return false;}
    boolean answer;
    Node left1=check(root1.left);
    Node right1=check(root1.right);
    Node left2=check(root2.left);
    Node right2=check(root2.right);
    while(root1.data==root2.data){
        if(left1.data==left2.data && right1.data==right2.data){
            answer=true;
        }else{
            answer=false;
        }

    }
    return answer;
   }
    public boolean isSymmetric(Node root)
    {
        // add your code here;
        Node left1=isSymmetric(root.left);
        Node right1=isSymmetric(root.right);
        check(left1,right1);
        return answer;

    }
}
```

## Submission at 2024-10-25 06:53:17


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
    public static int height(Node root){
        if(root==null){
            return 0;
        }
        int left=height(root.left);
        int right=height(root.right);
        int height=Math.max(left,right)+1;
        return height;
    }
    // return true/false denoting whether the tree is Symmetric or not
    public static boolean check(Node root1,Node root2){
        if(root1==null||root2==null){
            return false;
             
        }
        boolean answer=false;
        int height1=height(root1);
        int height2=height(root2);
        while(height1==height2){
            check(root1.left,root2.left);
            if(root1.left==null||root2.left==null){
                return false;
            }
            int left1=root1.left.data;
            int left2=root2.left.data;
            check(root1.right,root2.right);
            if(root1.right==null||root2.right==null){
                return false;
            }
            int right1=root1.right.data;
            int right2=root2.right.data;
            if(root1.left==root2.left && root1.right==root2.right){
                answer=true;
            }else{
                answer=false;
            }
        }
        return answer;

    }
    public boolean isSymmetric(Node root)
    {
        // add your code here;
        boolean answer=true;
        answer=check(root.left,root.right);
        return answer;
}
}
```

## Submission at 2024-10-25 06:53:53


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
    public static int height(Node root){
        if(root==null){
            return 0;
        }
        int left=height(root.left);
        int right=height(root.right);
        int height=Math.max(left,right)+1;
        return height;
    }
    // return true/false denoting whether the tree is Symmetric or not
    public static boolean check(Node root1,Node root2){
        if(root1==null||root2==null){
            return false;
             
        }
        boolean answer=true;
        int height1=height(root1);
        int height2=height(root2);
        while(height1==height2){
            check(root1.left,root2.left);
            if(root1.left==null||root2.left==null){
                return false;
            }
            int left1=root1.left.data;
            int left2=root2.left.data;
            check(root1.right,root2.right);
            if(root1.right==null||root2.right==null){
                return false;
            }
            int right1=root1.right.data;
            int right2=root2.right.data;
            if(root1.left==root2.left && root1.right==root2.right){
                answer=true;
            }else{
                answer=false;
            }
        }
        return answer;

    }
    public boolean isSymmetric(Node root)
    {
        // add your code here;
        boolean answer=true;
        answer=check(root.left,root.right);
        return answer;
}
}
```

## Submission at 2024-10-25 06:56:37


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
    public static int height(Node root){
        if(root==null){
            return 0;
        }
        int left=height(root.left);
        int right=height(root.right);
        int height=Math.max(left,right)+1;
        return height;
    }
    // return true/false denoting whether the tree is Symmetric or not
    public static boolean check(Node root1,Node root2){
        if(root1==null||root2==null){
            return false;
             
        }
        boolean answer=true;
        int height1=height(root1);
        int height2=height(root2);
        while(height1==height2){
            check(root1.left,root2.left);
            if(root1.left==null&&root2.right==null){
                return true;
            }
            int left1=root1.left.data;
            int left2=root2.left.data;
            check(root1.right,root2.right);
            if(root1.right==null&&root2.left==null){
                return true;
            }
            int right1=root1.right.data;
            int right2=root2.right.data;
            if(root1.left==root2.left && root1.right==root2.right){
                answer=true;
            }else{
                answer=false;
            }
        }
        return answer;

    }
    public boolean isSymmetric(Node root)
    {
        // add your code here;
        boolean answer=true;
        answer=check(root.left,root.right);
        return answer;
}
}
```

## Submission at 2024-10-25 06:59:42


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
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       ArrayList<Integer> list=new ArrayList<>();
    
       if(root==null){
        return list;
       }
       postOrder(root.left);
       if(root.left!=null){
        list.add(root.left.data);
       }else{
        return list;
       }
       postOrder(root.right);
       if(root.right!=null){
        list.add(root.right.data);
       }else{
        return list;
       }
       
       list.add(root.data);
       return list;
    }
}
```

## Submission at 2024-10-25 07:00:40


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
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       ArrayList<Integer> list=new ArrayList<>();
    
       if(root==null){
        return list;
       }
       postOrder(root.left);
       if(root.left!=null){
        list.add(root.left.data);
       }else{
       postOrder(root.left);
       }
       postOrder(root.right);
       if(root.right!=null){
        list.add(root.right.data);
       }else{
        return postOrder(root.right);
       }
       
       list.add(root.data);
       return list;
    }
}
```

## Submission at 2024-11-15 04:31:54


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
    public static boolean check(Node root1, Node root2) {
    // If both nodes are null, the subtrees are symmetric
    if (root1 == null && root2 == null) {
        return true;
    }
    
    // If one of them is null, the trees are not symmetric
    if (root1 == null || root2 == null) {
        return false;
    }

    // Check if the current nodes are symmetric (same data) and recursively check left/right subtrees
    return (root1.data == root2.data) && 
           check(root1.left, root2.right) && 
           check(root1.right, root2.left);
}

public boolean isSymmetric(Node root) {
    // Tree is symmetric if the left and right subtrees are mirrors of each other
    if (root == null) {
        return true;
    }
    return check(root.left, root.right);
}
}
```

## Submission at 2024-11-22 04:20:29


```
# Inorder working
#Definition for a binary tree node.
# class TreeNode:
#     def _init_(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []

        def inorder(rt):
            if not rt:
                 return []

            inorder(rt.left)
            result.append(rt.val)
            inorder(rt.right)
        inorder(root)
        return result
```

## Submission at 2024-11-22 04:23:33


```
# Inorder working
#Definition for a binary tree node.
# class TreeNode:
#     def _init_(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []

        def inorder(rt):
            if not rt:
                 return []

            inorder(rt.left)
            result.append(rt.val)
            inorder(rt.right)
        inorder(root)
        return result
[9:50 AM, 11/22/2024] Archi AU: class TreeNode:
    def init(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

result = []
#############################
def inorder(root):
    if not root:
        return []

    inorder(root.left)
    result.append(root.val)
    inorder(root.right)
    return result
###############################
def preorder(root):
    if not root:
        return []

    result.append(root.val)
    preorder(root.left)
    preorder(root.right)
    return result
########################
def postorder(root):
    if not root:
        return []

    postorder(root.left)
    postorder(root.right)
    result.append(root.val)
    return result
######################
# Function to insert nodes in level order to form the binary tree
def insert_level_order(arr, root, i, n):
    # Base case for recursion
    if i < n:
        if arr[i] is None:
            return None
        
        temp = TreeNode(arr[i])
        root = temp
        
        # Insert left child
        root.left = insert_level_order(arr, root.left, 2 * i + 1, n)
        
        # Insert right child
        root.right = insert_level_order(arr, root.right, 2 * i + 2, n)
    
    return root

input_str = input()
# Split the string on commas and convert to a list
arr = [int(x) if x.strip() != 'None' else None for x in input_str.split(',')]
n = len(arr)

# Building the binary tree from the list
root = insert_level_order(arr, None, 0, n)

# Preorder traversal
print(preorder(root))
######################333
#Take input from the user as a comma-separated string
input_str = input()
# Split the string on commas and convert to a list
arr = [int(x) if x.strip() != 'None' else None for x in input_str.split(',')]
print("Array:", arr)
##############################3
# Take input from the user as a space-separated string
input_str = input()
# Split the string and convert it to a list
arr = [int(x) if x != 'None' else None for x in input_str.split()]
print("Array:", arr)
############################
#max depth of tree
# Definition for a binary tree node.
# class TreeNode(object):
#     def init(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # Base case: If the tree is empty, return 0
        if not root:
            return 0

        # Recursively find the depth of the left and right subtrees
        left_depth = self.maxDepth(root.left)
        right_depth = self.maxDepth(root.right)

        # The depth of the current node is 1 (for the current node itself) 
        # plus the maximum depth of the left and right subtrees
        return 1 + max(left_depth, right_depth)
[9:50 AM, 11/22/2024] Archi AU: # Define the ListNode class for the linked list nodes
class ListNode(object):
    def init(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to convert linked list to array
def linkedListToArray(head):
    """
    :type head: ListNode
    :rtype: List[int]
    """
    result = []
    current = head
    
    # Traverse the linked list
        result.append(current.val)  # Add the value of the current node to the array
        current = current.next  # Move to the next node
    
    return result

# Function to convert array to linked list
def arrayToLinkedList(arr):
    """
    :type arr: List[int]
    :rtype: ListNode
    """
    if not arr:
        return None
    
    # Create the head node with the first element of the array
    head = ListNode(arr[0])
    current = head
    
    # Traverse the array and create the linked list
    for value in arr[1:]:
        current.next = ListNode(value)  # Create a new node and link it
        current = current.next  # Move to the next node
    
    return head

# Example: Create a linked list: 1 -> 2 -> 3 -> None
head = ListNode(1)
head.next = ListNode(2)
head.next.next = ListNode(3)

# Convert the linked list to an array
array = linkedListToArray(head)
print(array)  # Output: [1, 2, 3]

# Example: Convert array to linked list and back to array

# Input array
arr = [1, 2, 3]

# Convert array to linked list
head = arrayToLinkedList(arr)

# Convert linked list back to array
new_array = linkedListToArray(head)

print(new_array)  # Output: [1, 2, 3]
#merge sort
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

    def _init_(self):
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
    def init(self, val=0, next=None):
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
    class Twitter {
    private static int timestamp = 0; // Global timestamp for sorting tweets
    private Map<Integer, Set<Integer>> followers; // Maps users to their followees
    private Map<Integer, List<Tweet>> tweets; // Maps users to their tweets

    public Twitter() {
        followers = new HashMap<>();
        tweets = new HashMap<>();
    }

    public void postTweet(int userId, int tweetId) {
        tweets.putIfAbsent(userId, new ArrayList<>());
        tweets.get(userId).add(new Tweet(tweetId, timestamp++));
    }

    public List<Integer> getNewsFeed(int userId) {
        PriorityQueue<Tweet> maxHeap = new PriorityQueue<>((a, b) -> b.timestamp - a.timestamp);

        // Add the user's own tweets
        if (tweets.containsKey(userId)) {
            maxHeap.addAll(tweets.get(userId));
        }

        // Add tweets from followees
        if (followers.containsKey(userId)) {
            for (int followeeId : followers.get(userId)) {
                if (tweets.containsKey(followeeId)) {
                    maxHeap.addAll(tweets.get(followeeId));
                }
            }
        }

        // Get up to 10 most recent tweets
        List<Integer> newsFeed = new ArrayList<>();
        while (!maxHeap.isEmpty() && newsFeed.size() < 10) {
            newsFeed.add(maxHeap.poll().id);
        }

        return newsFeed;
    }

    public void follow(int followerId, int followeeId) {
        if (followerId == followeeId) {
            return; // A user cannot follow themselves
        }
        followers.putIfAbsent(followerId, new HashSet<>());
        followers.get(followerId).add(followeeId);
    }

    public void unfollow(int followerId, int followeeId) {
        if (followers.containsKey(followerId)) {
            followers.get(followerId).remove(followeeId);
        }
    }

    private static class Tweet {
        int id;
        int timestamp;

        Tweet(int id, int timestamp) {
            this.id = id;
            this.timestamp = timestamp;
        }
    }
}
class Solution {
    public TreeNode searchBST(TreeNode root, int val) {
        // Base case: if the node is null or the value matches the node's value
        if (root == null || root.val == val) {
            return root;
        }
        // If the value is smaller, search in the left subtree
        if (val < root.val) {
            return searchBST(root.left, val);
        }
        // If the value is larger, search in the right subtree
        return searchBST(root.right, val);
    }
}
class Solution {
    public TreeNode insertIntoBST(TreeNode root, int val) {
        // If the current node is null, create a new node with the given value
        if (root == null) {
            return new TreeNode(val);
        }
        
        // If the value is smaller, we insert in the left subtree
        if (val < root.val) {
            root.left = insertIntoBST(root.left, val);
        }
        // If the value is larger, we insert in the right subtree
        else {
            root.right = insertIntoBST(root.right, val);
        }
        
        // Return the root node (no change to the root itself)
        return root;
    }
}
class Solution {
    public TreeNode insertIntoBST(TreeNode root, int val) {
        // If the tree is empty, create a new node and return it
        if (root == null) {
            return new TreeNode(val);
        }
        
        TreeNode current = root;
        
        // Traverse the tree to find the correct insertion point
        while (true) {
            // If the value is smaller, move to the left
            if (val < current.val) {
                // If there's no left child, insert the new node here
                if (current.left == null) {
                    current.left = new TreeNode(val);
                    break;
                }
                // Otherwise, continue down the left subtree
                current = current.left;
            }
            // If the value is larger, move to the right
            else {
                // If there's no right child, insert the new node here
                if (current.right == null) {
                    current.right = new TreeNode(val);
                    break;
                }
                // Otherwise, continue down the right subtree
                current = current.right;
            }
        }
        
        // Return the root of the tree (no change to the root itself)
        return root;
    }
}
class Solution {
    public TreeNode deleteNode(TreeNode root, int key) {
        // Base case: if the tree is empty
        if (root == null) {
            return null;
        }

        // Find the node to be deleted
        if (key < root.val) {
            root.left = deleteNode(root.left, key);  // Key is smaller, move to the left subtree
        } else if (key > root.val) {
            root.right = deleteNode(root.right, key);  // Key is larger, move to the right subtree
        } else {
            // Case 1: Node to be deleted has no children (leaf node)
            if (root.left == null && root.right == null) {
                return null;  // Just remove the node
            }
            // Case 2: Node to be deleted has one child
            else if (root.left == null) {
                return root.right;  // Replace node with its right child
            } else if (root.right == null) {
                return root.left;  // Replace node with its left child
            }

            // Case 3: Node to be deleted has two children
            // Find the in-order successor (smallest node in the right subtree)
            TreeNode minNode = findMin(root.right);
            root.val = minNode.val;  // Replace value of current node with minNode's value
            root.right = deleteNode(root.right, minNode.val);  // Delete the in-order successor
        }

        return root;
    }

    // Helper function to find the minimum node in a given subtree
    private TreeNode findMin(TreeNode root) {
        while (root.left != null) {
            root = root.left;
        }
        return root;
    }
}
class Solution {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        if (hand.length % groupSize != 0) {
            return false; // If the total number of cards is not divisible by groupSize
        }

        TreeMap<Integer, Integer> cardcount = new TreeMap<>();
        for (int i : hand) {
            cardcount.put(i, cardcount.getOrDefault(i, 0) + 1);
        }

        while (!cardcount.isEmpty()) {
            int firstcard = cardcount.firstKey(); // Get the smallest card
            for (int i = 0; i < groupSize; i++) {
                int currentcard = firstcard + i; // Look for consecutive cards
                if (!cardcount.containsKey(currentcard)) {
                    return false; // If a required card is missing, return false
                }
                // Decrement the frequency of the current card
                cardcount.put(currentcard, cardcount.get(currentcard) - 1);
                if (cardcount.get(currentcard) == 0) {
                    cardcount.remove(currentcard); // Remove card if its frequency is 0
                }
            }
        }

        return true; // All groups formed successfully
    }
}
import java.util.*;

class Solution {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        if (hand.length % groupSize != 0) {
            return false; // Can't divide cards into groups of groupSize
        }

        // Count frequency of each card
        TreeMap<Integer, Integer> cardCount = new TreeMap<>();
        for (int card : hand) {
            cardCount.put(card, cardCount.getOrDefault(card, 0) + 1);
        }

        // Try to form groups
        while (!cardCount.isEmpty()) {
            int firstCard = cardCount.firstKey(); // Smallest card
            for (int i = 0; i < groupSize; i++) {
                int currentCard = firstCard + i;
                if (!cardCount.containsKey(currentCard)) {
                    return false; // Can't form a group
                }

                // Reduce the count of the current card
                cardCount.put(currentCard, cardCount.get(currentCard) - 1);
                if (cardCount.get(currentCard) == 0) {
                    cardCount.remove(currentCard); // Remove card if count is 0
                }
            }
        }

        return true; // All cards grouped successfully
    }
}
import java.util.*;

class Solution {
    public int findKthLargest(int[] nums, int k) {
        // Max-Heap
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a, b) -> b - a);

        // Add all elements to the heap
        for (int num : nums) {
            maxHeap.add(num);
        }

        // Extract the top k elements
        int result = -1;
        for (int i = 0; i < k; i++) {
            result = maxHeap.poll(); // Extract the max element
        }

        return result; // Return the k-th largest element
    }
}
import java.util.*;

class Solution {
    public String[] findRelativeRanks(int[] score) {
        int n = score.length;
        String[] result = new String[n];
        
        // Max-Heap to store scores with their indices
        PriorityQueue<int[]> maxHeap = new PriorityQueue<>((a, b) -> b[0] - a[0]);
        
        // Add scores and their indices to the heap
        for (int i = 0; i < n; i++) {
            maxHeap.add(new int[] { score[i], i });
        }
        
        // Assign ranks
        int rank = 1;
        while (!maxHeap.isEmpty()) {
            int[] top = maxHeap.poll();
            int index = top[1];
            
            if (rank == 1) {
                result[index] = "Gold Medal";
            } else if (rank == 2) {
                result[index] = "Silver Medal";
            } else if (rank == 3) {
                result[index] = "Bronze Medal";
            } else {
                result[index] = String.valueOf(rank);
            }
            rank++;
        }
        
        return result;
    }
}
import java.util.*;

class Solution {
    public String[] findRelativeRanks(int[] score) {
        int n = score.length;
        String[] result = new String[n];
        
        // Create an array of pairs (score, index)
        int[][] scoreWithIndex = new int[n][2];
        for (int i = 0; i < n; i++) {
            scoreWithIndex[i][0] = score[i];
            scoreWithIndex[i][1] = i;
        }
        
        // Sort by score in descending order
        Arrays.sort(scoreWithIndex, (a, b) -> b[0] - a[0]);
        
        // Assign ranks
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[scoreWithIndex[i][1]] = "Gold Medal";
            } else if (i == 1) {
                result[scoreWithIndex[i][1]] = "Silver Medal";
            } else if (i == 2) {
                result[scoreWithIndex[i][1]] = "Bronze Medal";
            } else {
                result[scoreWithIndex[i][1]] = String.valueOf(i + 1);
            }
        }
        
        return result;
    }
}

```

## Submission at 2024-11-22 04:29:14


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//complete the function and return the value of the sum
class Solution {
    public static int dfheight(TreeNode root, int[] dia){
        if(root==null){
            return 0;
        }
        int lh=dfheight(root.left,dia);
        int rh=dfheight(root.right,dia);
        dia[0]=Math.max(dia[0],lh+rh);
        return Math.max(lh,rh)+1;
    }
    public int diameterOfBinaryTree(TreeNode root) {
        int[] dia=new int[1];
        dfheight(root,dia);
        return dia[0];
    }
}
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result=new ArrayList<>();
        boolean Lefttoright=true;
        if(root==null){
            return result;
        }
        Queue<TreeNode> node = new LinkedList<>();
        node.add(root);
        while(!node.isEmpty()){
            int size=node.size();
            List<Integer> row = new ArrayList<>();
            for(int i=0;i<size;i++){
                TreeNode node1=node.poll();
                if (Lefttoright) {
                    row.add(node1.val);  // Append to the end of the list
                } else {
                    row.add(0, node1.val);  // Insert at the front of the list for reverse order
                }
                if (node1.left != null) {
                    node.add(node1.left);
                }
                if (node1.right != null) {
                    node.add(node1.right);
                }

            }
            Lefttoright=!Lefttoright;
            result.add(row);
        }
        return result;
    }
}
class Solution {
    public static int dfheight(TreeNode root){
        if(root==null){
            return 0;
        }
        int rightheight=dfheight(root.right);
        if(rightheight==-1){
            return -1;
        }
        int leftheight=dfheight(root.left);
        if(leftheight==-1){
            return -1;
        }
        if(Math.abs(leftheight-rightheight)>1){
            return -1;
        }
        return Math.max(leftheight,rightheight)+1;
    }
    public boolean isBalanced(TreeNode root) {
        return dfheight(root)!=-1;
    }
}
class Solution {
    public int maxPathSum(TreeNode root) {
        int[] maxVal=new int[1];
        maxVal[0]=Integer.MIN_VALUE;
        pathdown(root,maxVal);
        return maxVal[0];
    }
    public static int pathdown(TreeNode root, int[] maxVal){
        if(root==null){
            return 0;
        }
        int left=Math.max(0,pathdown(root.left,maxVal));
        int right=Math.max(0,pathdown(root.right,maxVal));
        maxVal[0]=Math.max(maxVal[0],left+right+root.val);
        return Math.max(left,right)+root.val;
    }
}
class Solution {
    public boolean isIdentical(TreeNode root, TreeNode subRoot){
        if(root==null&&subRoot==null){
            return true;
        }
        if(root==null||subRoot==null){
            return false;
        }
        if(root.val==subRoot.val){
            return isIdentical(root.left,subRoot.left)&&isIdentical(root.right,subRoot.right);
        }
        return false;
    }
    public boolean isSubtree(TreeNode root, TreeNode subRoot) {
        if(subRoot==null){
            return true;
        }
        if(root==null){
            return false;
        }
        if(root.val==subRoot.val){
            if( isIdentical(root,subRoot)){
                return true;
            }

        }
        return isSubtree(root.left,subRoot)||isSubtree(root.right,subRoot);
    }
}
```

## Submission at 2024-11-22 04:30:29


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int low=1,high=0;
        for(int i:piles){
            high=Math.max(high,i);
        }
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int total=hourstaken(piles,mid);
            if(total<=h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
    public int hourstaken(int[] piles,int hour){
        int totalhours=0;
        for(int i:piles){
            totalhours+=Math.ceil((double)i/(double)hour);
        }
        return totalhours;
    }
}
```

## Submission at 2024-11-22 04:42:24


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
class Solution {
    public static void preorder(TreeNode root,List<Integer>arr){
        if(root==null){
            return;
        }
        arr.add(root.val);

        preorder(root.left,arr);
        preorder(root.right,arr);
    }
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> arr = new ArrayList<>();
        preorder(root,arr);
        return arr;
    }
}

```

## Submission at 2024-11-22 05:01:12


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
        if(root==null){
            return false;
        }
        boolean result=true;
        Node left=isBST(root.left);
        Node right=isBST(root.right);
        if(root.left<root && root.right>root){
            result=true;
        }else{
            result=false;
        }
        return result;
    }
}
```

## Submission at 2024-11-22 05:10:52


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
        ArrayList<Integer> arr = new ArrayList<>();
        inorder(root,arr);
        boolean result;
        for(int i=1;i<arr.length();i++){
            if(arr[i-1]<arr[i]){
                result=true;
            }else{
                result=false;
            }
        }
        return result;
    }
    public static void inorder(Node root, ArrayList<Integer>arr){
        if(root==null){
            return;
        }
        

        inorder(root.left,arr);
        arr.add(root.data);
        inorder(root.right,arr);
    }
    
}


```

## Submission at 2024-11-22 05:31:19


```
/* write code from scratch */
import java.util.Scanner;
class Solution{
    public static int answer(int a,int[] arr){
        int answer=0;
        HashMap<Integer,Integer> frequency=new HashMap<>();
        for(int i:arr){
            frequency.add(i,frequency.getOrDefault(i,0)+1);
        }
        for(int i=0;i<a;i++){
            if(frequency.get(i)==2){
                answer=i;
                
            }
        }
        return answer;
    }
    public static void main(System[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=answer(n,arr);
    }
}
```

## Submission at 2024-11-22 05:50:33


```
// Write Code From Scratch Here
import java.util.Scanner;
class Solution{
    public static int min(int a,int b){
        int c=b-a;
        int answer=0;
        if((c-a)+(b-c)==c){
            answer=c;
        }
        return answer;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.Int();
        int answer=min(a,b);

    }
}
```

## Submission at 2024-11-22 06:02:33


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
        // add your code here;
        if(root==null){
            return false;
        }
        if(maxValue(root.left)!=null && root.left.data>=root.data){
            return false;
        }
        if(minValue(root.right)!=null && root.right.data<=root.data){
            return false;
        }
        return isBST(root.left)&&isBST(root.right);
    }
    public static int maxValue(Node node){
        if (root==null){
            return 0;
        }
        return Math.max(node.data,Math.max(maxValue(node.left),maxValue(node.right)));
    }
    public static int minValue(Node node){
        if(root==null){
            return 0;
        }
        return Math.min(node.data,Math.min(minValue(node.left),minValue(node.right)));
    }
}
```

## Submission at 2024-11-22 06:08:07


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
        // add your code here;
        if(root==null){
            return false;
        }
        if(minValue(root.left)!=null && minValue(root.left)<=root.data){
            return true;
        }
        if(maxValue(root.right)!=null && maxValue(root.right)>=root.data){
            return true;
        }
        return isBST(root.left)&&isBST(root.right);
    }
    public static int maxValue(Node node){
        if (root==null){
            return 0;
        }
        return Math.max(node.data,Math.max(maxValue(node.left),maxValue(node.right)));
    }
    public static int minValue(Node node){
        if(root==null){
            return 0;
        }
        return Math.min(node.data,Math.min(minValue(node.left),minValue(node.right)));
    }
}
```

## Submission at 2024-11-22 06:11:24


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
        // add your code here;
        if(root==null){
            return false;
        }
        if(root.left!=null && minValue(root.left)<=root.data){
            return true;
        }
        if(root.right!=null && maxValue(root.right)>=root.data){
            return true;
        }
        return isBST(root.left)&&isBST(root.right);
    }
    public static int maxValue(Node node){
        if (node==null){
            return 0;
        }
        return Math.max(node.data,Math.max(maxValue(node.left),maxValue(node.right)));
    }
    public static int minValue(Node node){
        if(node==null){
            return 0;
        }
        return Math.min(node.data,Math.min(minValue(node.left),minValue(node.right)));
    }
}
```

## Submission at 2024-11-22 06:28:00


```
/* write code from scratch */
import java.util.Scanner;
class Solution{
    public static int count(int n,int[] arr){
        TreeMap<Integer, Integer> numcount = new TreeMap<>();
        for (int i : arr) {
            numcount.put(i, numcount.getOrDefault(i, 0) + 1);

        }
        int largest=0;
        for(int i=1;i<n;i++){
            if(numcount.get(i)>1){
                continue;
            }else{
                largest=numcount.get(i);
            }
        }
        return largest;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=count(n,arr);
    }

}

```

## Submission at 2024-11-22 06:30:35


```
/* write code from scratch */
import java.util.Scanner;
class Solution{
    public static int count(int n,int[] arr){
        TreeMap<Integer, Integer> numcount = new TreeMap<>();
        for (int i : arr) {
            numcount.put(i, numcount.getOrDefault(i, 0) + 1);

        }
        int largest=0;
        for(int i=1;i<n;i++){
            if(numcount.get(i)>1){
                numcount.poll();
                continue;
            }else{
                largest=numcount.get(i);
            }
        }
        return largest;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=count(n,arr);
    }

}

```

## Submission at 2024-11-22 06:34:30


```
/* write code from scratch */
import java.util.Scanner;
class Solution{
    public static int count(int n,int[] arr){
        HaspMap<Integer, Integer> numcount = new HashMap<>();
        for (int i : arr) {
            numcount.add(i, numcount.getOrDefault(i, 0) + 1);

        }
        int largest=0;
        for(int i=0;i<n;i++){
            if(numcount.get(i)>1){
                numcount.poll();
                continue;
            }else{
                largest=numcount.get(i);
            }
        }
        return largest;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=count(n,arr);
    }

}

```

## Submission at 2024-11-22 06:38:52


```
// Write Code From Scratch Here
import java.util.Scanner;
class Solution{
    public static int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}
```

## Submission at 2024-11-22 06:43:21


```
// Write Code From Scratch Here
import java.util.Scanner;
class Solution{
    public static int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}
```

## Submission at 2024-11-22 06:47:10


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:49:07


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:49:15


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:50:20


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:50:20


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:50:22


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n-1];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:51:15


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:52:09


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:55:35


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 06:55:59


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int sum(int n, int[] arr){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int result=sum(n,arr);
    }
}

```

## Submission at 2024-11-22 07:07:35


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
	// Your code here	
    Node temp=head;
    while(temp.next!=null){
        if(temp.next.data==temp.data){
           temp.data=temp.next.data;
           temp.next=temp.next.next;
        }
    }
    return temp;
    }
}
```

