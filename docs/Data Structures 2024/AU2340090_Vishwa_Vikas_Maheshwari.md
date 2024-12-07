## Submission at 2024-08-05 10:23:34


```
name = input()
print("Hello",name,"!")
```

## Submission at 2024-08-05 10:43:25


```
name = input()
print ("Hello", name, "!")
```

## Submission at 2024-08-05 10:50:04


```
n= int(input())
for i in range(n):
    name = input()
    print("Hello", name, "!")
```

## Submission at 2024-08-12 10:09:47


```
import java.io.*;
class Main
{
    public static int fib(int n)
    {
        if (n<=1)
        {
        return n;
        }
        else
        {
        return fib(n - 1) + fib(n - 2);
        }
    }

 public static void main(String[] args) throws IOException 
 {
       InputStreamReader isr=new InputStreamReader(System.in);
       BufferedReader in=new BufferedReader(isr);

       int n = 2;

       int result = fib(n);

       System.out.println(result);
 }
}
```

## Submission at 2024-08-12 10:10:37


```
import java.io.*;
class Main
{
    public static int fib(int n)
    {
        if (n<=1)
        {
        return n;
        }
        else
        {
        return fib(n - 1) + fib(n - 2);
        }
    }

 public static void main(String[] args) throws IOException 
 {
       InputStreamReader isr=new InputStreamReader(System.in);
       BufferedReader in=new BufferedReader(isr);

       int n = 2;

       int result = fib(n);

       System.out.println(result);
 }
}
```

## Submission at 2024-08-12 10:33:40


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException 
    { 
    InputStreamReader isr = new InputStreamReader(System.in);
    BufferedReader in = new BufferedReader(isr);

    int n = 16;
        System.out.println(isPowerOfTwo(n));
    }

    private static boolean isPowerOfTwo(int n) 
    {
            if (n<=0)
            {
            return false;
            }
            else if (n==1)
            {
                return true;
            }
            else
            {
                return (isPowerOfTwo(n/2));
            }        
    }
}

```

## Submission at 2024-08-12 10:34:04


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

## Submission at 2024-08-21 07:03:48


```
import java.util.*;
import java.io.*;

class Main {

  public static void main(String[] args) throws IOException {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    String[] input = br.readLine().trim().split("\\s+");
    int n = Integer.parseInt(input[0]);
    int k = Integer.parseInt(input[1]);

    // Generate combinations
    List<List<Integer>> result = combine(n, k);

    // Sort subsets based on size and uncommon element
    Collections.sort(result, new Comparator<List<Integer>>() {
      @Override
      public int compare(List<Integer> a, List<Integer> b) {
        // Compare based on size first if sizes are different
        if (a.size() != b.size()) {
          return Integer.compare(a.size(), b.size());
        }

        // Sizes are the same, compare elements one by one
        for (int i = 0; i < a.size(); i++) {
          int comparison = Integer.compare(a.get(i), b.get(i));
          if (comparison != 0) {
            return comparison;
          }
        }

        // If all elements are equal, return 0 (indicating they are considered equal)
        return 0;
      }
    });

    // Print combinations
    System.out.print("[");
    for (int i = 0; i < result.size(); i++) {
      System.out.print("[");
      for (int j = 0; j < result.get(i).size(); j++) {
        System.out.print(result.get(i).get(j));
        if (j < result.get(i).size() - 1) {
          System.out.print(",");
        }
      }
      System.out.print("]");
      if (i != result.size() - 1) {
        System.out.print(",");
      }
    }
    System.out.print("]");
  }

  public static List<List<Integer>> combine(int n, int k) {
    List<List<Integer>> combinations = new ArrayList<>();
    backtrack(1, new ArrayList<>(), combinations, n, k);
    return combinations;
  }

  private static void backtrack(int start, List<Integer> comb, List<List<Integer>> combinations, int n, int k) {
    if (comb.size() == k) {
      combinations.add(new ArrayList<>(comb));
      return;
    }

    for (int i = start; i <= n; i++) {
      comb.add(i);
      backtrack(i + 1, comb, combinations, n, k);
      comb.remove(comb.size() - 1);
    }
  }
}
```

## Submission at 2024-08-21 07:09:14


```
import java.util.*;
import java.io.*;

public class Main{
    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        for (int num : nums) {
            current.add(num);
        }
        backtrack(result, current, 0);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> current, int start) {
        if (start == current.size()) {
            result.add(new ArrayList<>(current));
        } else {
            for (int i = start; i < current.size(); i++) {
                Collections.swap(current, start, i);
                backtrack(result, current, start + 1);
                Collections.swap(current, start, i);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int[] nums = Arrays.stream(input).mapToInt(Integer::parseInt).toArray();

        List<List<Integer>> permutations = permute(nums);

        for (List<Integer> permutation : permutations) {
            System.out.println(permutation);
        }
    }
}

```

## Submission at 2024-08-21 07:22:51


```
import java.util.*;
import java.io.*;

public class Main{
    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        for (int num : nums) {
            current.add(num);
        }
        backtrack(result, current, 0);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> current, int start) {
        if (start == current.size()) {
            result.add(new ArrayList<>(current));
        } else {
            for (int i = start; i < current.size(); i++) {
                Collections.swap(current, start, i);
                backtrack(result, current, start + 1);
                Collections.swap(current, start, i);
            }
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        int[] nums = Arrays.stream(input).mapToInt(Integer::parseInt).toArray();

        List<List<Integer>> permutations = permute(nums);

        for (List<Integer> permutation : permutations) {
            System.out.println(permutation);
        }
    }
}

```

## Submission at 2024-08-21 07:30:22


```
import java.util.*;
import java.io.*;

public class Main {
    public static List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        backtrack(result, "", 0, 0, n);
        return result;
    }

    private static void backtrack(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max);
        }
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        List<String> combinations = generateParenthesis(n);
        System.out.println(combinations);
    }
}

```

## Submission at 2024-08-21 07:33:16


```
import java.util.*;
import java.io.*;

public class Main {
    public static List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        backtrack(result,"",0,0,n);
        return result;
    }

    private static void backtrack(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            backtrack(result,current + "(",open + 1,close,max);
        }
        if (close < open) {
            backtrack(result,current + ")",open,close + 1,max);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        List<String> combinations = generateParenthesis(n);
        System.out.println(combinations);
    }
}

```

## Submission at 2024-08-21 08:52:42


```
import java.util.*;

public class Main {
    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
        } else {
            for (int num : nums) {
                if (!tempList.contains(num)) {
                    tempList.add(num);
                    backtrack(result, tempList, nums);
                    tempList.remove(tempList.size() - 1);
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3};
        List<List<Integer>> result = permute(nums);
        System.out.println(result);
    }
}
```

## Submission at 2024-08-21 08:57:11


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        num = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in permute(rest):
            result.append([num] + p)
    return result

nums = [1, 2, 3]
result = permute(nums)

for perm in result:
    print(' '.join(map(str, perm)))
```

## Submission at 2024-08-21 08:57:30


```
def permute(nums):
    if len(nums) == 1:
        return [nums]
    result = []
    for i in range(len(nums)):
        num = nums[i]
        rest = nums[:i] + nums[i+1:]
        for p in permute(rest):
            result.append([num] + p)
    return result

nums = [1, 2, 3]
result = permute(nums)

for perm in result:
    print(' '.join(map(str, perm)))
```

## Submission at 2024-09-02 10:19:29


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
        while(temp!= null)
        {
            result.add(temp.data);
            temp = temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-09 05:17:18


```
import java.util.Scanner; // Make sure to import Scanner

public class Main {
    public static void main(String[] args) {
        // Initialize Scanner to take input from the user
        Scanner sc = new Scanner(System.in);

        // Read the size of the arrays
        int n = sc.nextInt();

        // Initialize arrays a, b, and c of size n
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        // Read the elements of array a
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        // Read the elements of array b
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }

        // Create the maximal array c where c[i] = max(a[i], b[i])
        for (int i = 0; i < n; i++) {
            c[i] = Math.max(a[i], b[i]);
        }

        // Output the elements of array c
        for (int i = 0; i < n; i++) {
            System.out.print(c[i] + " ");
        }

        // Close the Scanner to avoid resource leaks
        sc.close();
    }
}

```

## Submission at 2024-09-09 10:30:19


```
import java.io.*;
public class Main
{
    s.convertTo(Integer);
    int len = s.lenth();
    int cnt=0;

    void freq(String s, char x)
    {
        if(len<0)
        return cnt;
        int result = freq((s/10),x);
        return result;
        cnt++;
    }

public static void main(String args[]) throws IOException
{
    Main obj = new Main();
    int ans= obj.freq(717171,7);

    System.out.println (ans);
}
}
```

## Submission at 2024-09-09 10:35:12


```
import java.io.*;
public class Main
{
    int s = s.convertToInt;
    int len = s.lenth();
    int cnt=0;

    void freq(String s, char x)
    {
        if(len<0)
        return cnt;
        int result = freq((s/10),x);
        return result;
        if ((s%10) == x)
        cnt++;
    }

public static void main(String args[]) throws IOException
{
    Main obj = new Main();
    int ans= obj.freq(717171,7);

    System.out.println (ans);
}
}
```

## Submission at 2024-09-09 10:52:44


```
def power(x,n):
    if n==0:
        return 1;
    result = power (x*x*x, n//3)
    return result;

    if (n%3==0):
        return true;
    elif (n%3==1):
        return (x*result);
    else:
        return (x*x*result);


print (power(27,3))
```

## Submission at 2024-09-09 11:10:12


```
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

class Solution 
{
    // Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) 
    {

    }
 
void printList();
{
  while (head!=null)
  System.out.print (head.data + " ");
  head = head.next;
}
}
public class main
{
  public static void main(String args[]) throws IOExecption
  {
    Node obj = new Node();
    obj.Solution();
    obj.printList();

    Node.head(1);
    head.next(2);
    head.next.next(3);
    head.next.next.next(2);
    head.next.next.next.next(1);

    if (Node.isPalindrome == 1)
    {
      System.out.println(true);
    }
    else
    {
      System.out.print("Not a palindrome");
    }
  }
}

```

## Submission at 2024-09-16 04:00:00


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    def isPowerOfTwo(n):
    if n <= 0:
        return False
    while n % 2 == 0:
        n = n // 2
    return n == 1
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-07 09:49:31


```
class ReverseQueue
{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q)
    {
        // Write your code here.
        
    }
}
public class main
{
    public static void main(String args[]) throws IOException
    {
        ReverseQueue obj = new ReverseQueue();
    }
}
```

## Submission at 2024-10-07 10:04:36


```
class ReverseQueue
{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q)
    {
        int n = queue.length();
        for (int i= n; i>0 ; i--)
        {
            q = q.enque(i);
        }        
    return q;
    }
}
public static void main(String args[]) throws IOException
{
    ReverseQueue obj = new ReverseQueue();
    System.out.println(obj.rev(q));
}

```

## Submission at 2024-10-07 10:17:00


```
class ReverseString
{
    public void String(String s)
    {
        int n = s.length();
        char ch;
        String rev = "";
        for (int i =0; i<n ; i++)
        {
            if (char.ch(i)!=0)
            {
                String ns = ns+ch;
            }
        }
        return ns;

        for (int j =ns.length-1; j>0; j--)
        {
            rev = rev + char.ch(j);
        }
    }
}
```

## Submission at 2024-10-07 10:30:24


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/

class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q)
    {
        // Write your code here.
        int n = q.size();

        Queue<Integer> newq = new LinkedList<>();

        for (int i= 0; i<n ; i++)
        {
            q.poll();
            newq.add();
        }        
    return newq;
    }
}

```

## Submission at 2024-10-07 10:42:26


```
// Write your code from scratch here
class ReverseString
{
    public void String(String s)
    {
        int n = s.length();
        char ch;
        String rev = "";
        String ns= "";

        for (int i =0; i<n ; i++)
        {
            if (ch(i)!='.')
            {
                String ns = ns+ch;
            }
            else
            break;
        }
        
        for (int j =ns.length-1; j>0; j--)
        {
            rev = rev + ch(j);
        }
    }
}
```

## Submission at 2024-10-07 11:04:32


```
// Write your code from scratch here
class ReverseString
{
    public void String(String s)
    {
        int n = s.length();
        char ch;
        String rev = "";
        String ns= "";
        s= s.toLowerCase();

        for (int i =0; i<n ; i++)
        {
            if (ch(i)='.')
            {
                String ns = ns+ch(i);
            }
            else
            break;
        }
        
        for (int j =ns.length-1; j>0; j--)
        {
            rev = rev + charAt(j);
        }
    }
}
```

## Submission at 2024-10-28 10:13:30


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root)
    {
        List<Integer> result = new ArrayList<>();
        min(root,result);
        return result;
    }

    private void min(Node root, List <Integer> result)
    {
        if (root==null)
        return;
        result.add(root.data);
        min(root.left,result);
        min(root.right,result);
    }
    public static void main(String args[])
    {
        int min=0;
        Solution solution = new Solution();
        for (int i =0; i< result.length; i++)
        {
            if (result[i]< min)
            {
                min= result[i];
                result[i]= result[i++];
                result[i++] = min;

            }
        }
        return min;
    }
}
```

## Submission at 2024-10-28 10:21:41


```
//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root)
    {
        List<Integer> result = new ArrayList<>();
        min(root,result);
        return result();
    }

    private static void min(Node root, List <Integer> result)
    {
        if (root==null)
        return;
        result.add(root.data);
        min(root.left,result);
        min(root.right,result);
    }
}
```

## Submission at 2024-10-28 10:47:01


```
//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root)
    {
        List<Integer> result = new ArrayList<>();
        min(root,result);
        return 1;
    }

    private static void min(Node root, List <Integer> result)
    {
        if (root==null)
        return;
        result.add(root.data);
        min(root.left,result);
        min(root.right,result);
    }
}
```

## Submission at 2024-10-28 10:47:43


```
//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root)
    {
        List<Integer> result = new ArrayList<>();
        min(root,result);
        return 1;
    }

    private static void min(Node root, List <Integer> result)
    {
        if (root==null)
        return;
        result.add(root.data);
        min(root.left,result);
        min(root.right,result);
    }
}
```

## Submission at 2024-11-19 09:22:24


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
      ArrayList<Integer> result = new ArrayList<Integer>();
      postOrderHelper(root,result);
      return result;
    }

    void postOrderHelper(Node node, ArrayList<Integer> result)
    {
      if (node==null)
      {
        return;
      }
      postOrderHelper(node.left, result);
      postOrderHelper(node.right, result);
      result.add(node.data);
    }
}


```

## Submission at 2024-11-19 09:24:30


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
      ArrayList<Integer> result = new ArrayList<Integer>();
      postOrderHelper(root,result);
      return result;
    }

    void postOrderHelper(Node node, ArrayList<Integer> result)
    {
      if (node==null)
      {
        return;
      }
      postOrderHelper(node.left, result);
      postOrderHelper(node.right, result);
      result.add(node.data);
    }
}


```

## Submission at 2024-11-19 10:32:22


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        if(root==null){
        return 1;
    }

    int leftmin=findMin(root.left);
    int rightmin= findMin(root.right);

    return Math.min(root.data, Math.min(leftmin,rightmin));
    }
}
```

## Submission at 2024-11-19 10:33:43


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        if(root==null){
        return Integer.MAX_VALUE;
    }

    int leftmin=findMin(root.left);
    int rightmin= findMin(root.right);

    return Math.min(root.data, Math.min(leftmin,rightmin));
    }
}
```

## Submission at 2024-11-25 09:51:59


```
for (int i=0; i < n; i++)
{
    for (int j=0 ; j< n-1; j++)
    {
        System.out.print(" ")
    }
    System.out.print("*")
}
System.out.println();
```

## Submission at 2024-11-25 10:08:27


```
// write code from scratchclass Main
{
    public static void main(String args[])
        int n;
        for (int i=0; i < n; i++)
        {
            for (int j=0 ; j< n-i; j++)
            {
                System.out.print(" ");
            }
            System.out.print("*");
        }
        System.out.println();
    }
}
```

## Submission at 2024-11-25 10:08:31


```
// write code from scratchclass Main
{
    public static void main(String args[])
        int n;
        for (int i=0; i < n; i++)
        {
            for (int j=0 ; j< n-i; j++)
            {
                System.out.print(" ");
            }
            System.out.print("*");
        }
        System.out.println();
    }
}
```

## Submission at 2024-11-25 10:24:03


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {

        int n = 5;
        for (int i=0; i < n; i++)
        {
            for (int j=0 ; j< n-i; j++)
            {
                System.out.print("*");
            }
            System.out.print(" ");
        }
    }
    System.out.println("");
}
```

## Submission at 2024-11-25 10:25:04


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {

        int n = 5;
        for (int i=0; i < n; i++)
        {
            for (int j=0 ; j< n-i; j++)
            {
                System.out.print("*");
            }
            System.out.print(" ");
        }
    }
    System.out.println("");
}
```

## Submission at 2024-11-25 10:34:48


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {

        int n = 5;
        for (int i=1; i <=n; i++)
        {
            for (int j=0 ; j< n -1; j++)
            {
                System.out.print("*");
            }
            System.out.print(" ");
        }
    System.out.println(" ");
    }
}
```

## Submission at 2024-11-25 10:57:43


```
// write code from scratch
// write code from scratch
class Main
{
    public static void main(String args[])
    {
        String str = "abbaa";
        int a=0;
        int b=0;
        char x ='a';
        char y = 'b';
        for (int i =0; i< str.length; i++)
        {
            if(char.At(i)==x)
            {
                a++;
            }
            else (char.At(i)==y)
            {
                b++;
            }
        }
        if (a>b)
        {
            System.out.print("a");
        }
        else
        {
            System.out.print("b");
        }
    }
}
```

## Submission at 2024-11-25 11:12:03


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {
        int n = 5;
        int arr[] = {-5, -2, 1, 4,8};

        int k =3;

        for(int i=0; i<arr.length; i++)
        {
            if (((arr[i+1]) - (arr[i]))!=3)
            break;
        }
        System.out.println ("false");
    }
}




```

## Submission at 2024-11-25 11:14:28


```
// write code from scratch
// write code from scratch
class Main
{
    public static void main(String args[])
    {
        int n = 5;
        int arr[] = {-5, -2, 1, 4,8};

        int k =3;

        for(int i=0; i<arr.length; i++)
        {
            if (((arr[i+1]) - (arr[i]))!=3)
            break;
        }
        System.out.println ("false");
    }
}




```

## Submission at 2024-11-25 11:19:48


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {
        int n = 5;
        int arr[] = {-5, -2, 1, 4,8};
        int cnt=0;
        int k =3;

        for(int i=0; i<arr.length-1; i++)
        {
            if (((arr[i+1]) - (arr[i]))!=3)
            {
                cnt++;
            }
        }
        if (cnt> 0)
        {
            System.out.println ("false");
        }
    }
}




```

## Submission at 2024-11-25 11:25:30


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {

        int n = 5;
        for (int i=0; i <=5; i++)
        {
            for (int j=0 ; j< n -1; j++)
            {
                System.out.print("*");
            }
            for (int j=0 ; j< n -1; j++)
            {
            System.out.print(" ");
            }
        }
        System.out.println(" ");
    }
}
```

## Submission at 2024-11-25 11:40:56


```
// write code from scratch
class Main
{
    public static void main(String args[])
    {
        char arr = {'a', 'b', 'b', 'a', 'a'};
        int cnta=0;
        int cntb=0;
        char x = 'a';

        for (int i =0; i<arr.length; i++)
        {
            if (arr[i]== x)
            {
                cnta++;
            }
            else 
            cntb++;
        }
        if (cnta > cntb)
        {
            System.out.println ("a");
        }
        else
        {
            System.out.println ("b");
        }
    }
}
```

