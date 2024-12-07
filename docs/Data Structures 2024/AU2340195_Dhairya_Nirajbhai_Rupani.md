## Submission at 2024-08-05 10:16:37


```
import java.util.Scanner;

public class day 1 {

public static void main (String[] args){

        Scanner input = new Scanner(System.in)
        String name = input.nextLine();

        System.out.print("Hello " + name + "!")
}


}
```

## Submission at 2024-08-05 10:16:59


```
import java.util.Scanner;

public class day 1 {

public static void main (String[] args){

        Scanner input = new Scanner(System.in)
        String name = input.nextLine();

        System.out.print("Hello " + name + "!")
}


}
```

## Submission at 2024-08-05 10:17:25


```
import java.util.Scanner;

public class day 1 {

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.print("Hello " + name + "!");
}


}
```

## Submission at 2024-08-05 10:18:20


```
import java.util.Scanner;

public class day1 {

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.print("Hello " + name + "!");
}


}
```

## Submission at 2024-08-05 10:22:35


```
import java.io.*;
import java.util.Scanner;

public class Main{

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.print("Hello " + name + "!");
        }
}

```

## Submission at 2024-08-05 10:29:30


```
import java.io.*;
import java.util.Scanner;

public class Main {

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.print("Hello " + name + "!");
}


}
```

## Submission at 2024-08-05 10:38:35


```
import java.io.*;
import java.util.Scanner;

public class Main {

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
            for (int i=0;i<n;i++){
                
                String name = input.nextLine();
                System.out.println("Hello " + name + "!");
            }
        
}


}
```

## Submission at 2024-08-05 10:43:08


```
import java.io.*;
import java.util.Scanner;

public class Main {

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.next();
            for (int i=0;i<n;i++){
                
                String ni = input.next();

                System.out.println("Hello " + ni + "!");
            }
        
}


}
```

## Submission at 2024-08-05 10:46:18


```
import java.io.*;
import java.util.Scanner;

public class Main {

public static void main (String[] args){

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
     
            for (int i=0;i<n;i++){
                
                String name = input.nextLine();

                System.out.println("Hello " + name + "!");
            }
        
}


}
```

## Submission at 2024-08-12 10:01:35


```
import java.io.*;


class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());
if (x>30){
    System.out.print("Not valid");
}
        // Calculate and print the Fibonacci number for the input x
        System.out.println(fibonacci(x));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
       if(x<2) {
           return x;
       }
        else
           return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

```

## Submission at 2024-08-12 10:29:54


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

        if(n<=0){
            return false;
        } if (n==1) {

            return true;

        }
       if(n%2==0){
           return isPowerOfTwo(n/2);
       }
       else {
           return false;
       }

    }
}

```

## Submission at 2024-08-21 04:52:45


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
        List<List<Integer>> result = new ArrayList<>();
        backtrack(1, n, k, new ArrayList<>(), result);
        return result;
    }

    private static void backtrack(int start, int n, int k, List<Integer> list, List<List<Integer>> result) {
        if (list.size() == k) {
            result.add(new ArrayList<>(list));
            return;
        }

        for (int i = start; i <= n; i++) {
            list.add(i);
            backtrack(i + 1, n, k, list, result);
            list.remove(list.size() - 1); // Backtrack
        }
    }
}
```

## Submission at 2024-08-21 05:32:16


```
import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
        String[] arr = input.nextLine().trim().split("\\s+"); // Split by space and trim any leading or trailing whitespace

        int[] arri = new int[arr.length];
        for (int i = 0; i < arri.length; i++) {
            arri[i] = Integer.parseInt(arr[i]); // Parse each element as an integer
        }
        List<List<Integer>> result =Assignment2(arri);
        
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
    public static List<List<Integer>>Assignment2(int[] num){
     int n=0;   
    List<List<Integer>> churn=new ArrayList<>();
    
        
        
        
   if(num.length==1){
       List<Integer> one=new ArrayList<>();
       one.add(num[0]);
       churn.add(one);
       return churn;
   }     else{
       
   
  int[] newNum = new int[1];
        for (int i = 0; i < num.length; i++) {
            newNum[0]=num[i];
            int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
             
             List<List<Integer>> add=new ArrayList<>();
             add.addAll(backtrack(nums,1,num[i]));
            for (int j = 0; j < add.size(); j++) {
                List<Integer> newNums=new ArrayList<>();
                for (int numd : newNum) {
                
    newNums.add(numd);
}
                
                for (int numd : add.get(j)) {
                    
                
    newNums.add(numd);
}
 churn.add(newNums);               
            }
            n++;
            
        
        
         
                  
                       
        
          
  
        }
        return churn;}
    }
  public static List<List<Integer>> backtrack(int[] num, int n, int m){
      int[] newNum=new int[1];
      
      
      List<List<Integer>> add=new ArrayList<>();
      List<List<Integer>> newNums = new ArrayList<>();
      if(num.length==1){
          
          List<List<Integer>> names=new ArrayList<>();
          List<Integer> single=new ArrayList<>();
          single.add(num[0]);
         
          names.add(single);
          return names;
      }
      for (int i = 0; i < num.length; i++) {
          
          newNum[0]=num[i];
         
          int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
            
           
             add.addAll(backtrack(nums,1,num[i]));
             
            for (int j = 0; j < add.size(); j++) {
                
                List<Integer> newNumes=new ArrayList<>();
                for (int numd : newNum) {
                
    newNumes.add(numd);
}
                int flag=0;
                for (int numd : add.get(j)) {
                    
                   
                    for (int l = 0; l < newNumes.size(); l++) {
                        if(numd==newNumes.get(l)){
                            flag+=1;
                            break;
                        }
                        
                    }
                         
                if(flag==0){
    newNumes.add(numd);}
}
                
                    
                if(flag==0){
                newNums.add(newNumes);}
            }
          
          
      }
  
       
return newNums;
  }
}
```

## Submission at 2024-08-21 05:50:54


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    // List to store the result
    List<String> result = new ArrayList<>();

    // Method to generate all combinations of well-formed parentheses
    public List<String> generateParenthesis(int n) {
        generateValue(result, 0, 0, n, "");
        return result;
    }

    // Helper method for backtracking
    private void generateValue(List<String> result, int open, int close, int n, String s) {
        // If the current string length is 2*n, we have a valid combination
        if (s.length() == 2 * n) {
            result.add(s);
            return;
        }
        // If we can add more open parentheses
        if (open < n) {
            generateValue(result, open + 1, close, n, s + "(");
        }
        // If we can add more close parentheses
        if (close < open) {
            generateValue(result, open, close + 1, n, s + ")");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Main sol = new Main();

        int n = scanner.nextInt();

        // Generate and get the result
        List<String> combinations = sol.generateParenthesis(n);

        // Format and print the result
        System.out.print("[");
        for (int i = 0; i < combinations.size(); i++) {
            System.out.print("\"" + combinations.get(i) + "\"");
            if (i < combinations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");

        scanner.close();
    }
}
```

## Submission at 2024-09-02 09:50:13


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
        Node temp = head;
        while (temp!= null){
            
            System.out.print(temp.data+ " ");
            temp = temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:23:41


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];
        
        
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        
        for (int i = 0; i < n; i++) {
            b[i] = scanner.nextInt();
        }
        
        
        for (int i = 0; i < n; i++) {
            c[i] = Math.max(a[i], b[i]);
        }
        
       
        for (int i = 0; i < n; i++) {
            System.out.print(c[i] + " ");
        }
    }
}

```

## Submission at 2024-09-02 10:25:45


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];
        
        
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        
        
        for (int i = 0; i < n; i++) {
            b[i] = scanner.nextInt();
        }
        
        
        for (int i = 0; i < n; i++) {
            c[i] = Math.max(a[i], b[i]);
            System.out.print(c[i] + " ");
        }
    }
}

```

## Submission at 2024-09-02 10:50:22


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

        while(i<k){

            if(temp.next){

                temp = temp.next;
                i++;
            }else{

                return -1;
            }
        }
return temp.data;
    }
}
```

## Submission at 2024-09-02 10:52:16


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

        while(i<k){

            if(temp.next != null){

                temp = temp.next;
                i++;
            }else{

                return -1;
            }
        }
return temp.data;
    }
}
```

## Submission at 2024-09-09 04:57:46


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
    Node curr = head;
    Node next = null;

    while(curr != null){

        next = curr.next;
        curr.next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    }
}
```

## Submission at 2024-09-09 05:15:15


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
    if(x==1) return head.next;
        Node temp = head;
        for (int i = 1; i < x-1; i++) {
            temp = temp.next;
        }

        if (temp != null && temp.next != null) {
            temp.next = temp.next.next;
        }

        return head;
    }	
    }

```

## Submission at 2024-09-09 06:24:20


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
        
        for(int i=1;i<x-1;i++){
            temp = temp.next;
        }

        if(temp != null && temp.next != null){

                temp.next = temp.next.next;
        }
    
        
        return head;
    }
}

```

## Submission at 2024-09-09 06:26:31


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
       if(x==1) return head.next;
        Node temp = head;
        for(int i=1;i<x-1;i++){
            temp = temp.next;
        }

        if(temp != null && temp.next != null){

                temp.next = temp.next.next;
        }
    
        
        return head;
    }
}

```

## Submission at 2024-09-09 09:58:54


```
// Write Code from Scratch here


import java.util.Scanner;

public class Main{

    public int power3(int n){

        if(n==1){
            System.out.print("True");
        }
        return power3(n/3);
        
                System.out.print("False");
        
    }
}
```

## Submission at 2024-09-09 10:31:57


```
// Write Code from Scratch here

public class Main{

    public int power3(int n){

        if(n%3 == 0){

            if(n==1){
                    System.out.print("True");
            }
            return power3(n/3);
        }
    }
}
```

## Submission at 2024-09-09 10:42:08


```
// Write Code from Scratch here
import java.util.Scanner;
public class Main{

    public static int power3(int n){

        if(n%3 == 0){

            if(n==1){
                    System.out.print("True");
            }
            return power3(n/3);
        }
        else {
            return 0;
        }
    }

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        power3(n);
    }
}
```

## Submission at 2024-09-09 10:50:42


```
// Write Code from Scratch here
import java.util.Scanner;
public class Main{

    public static int power3(int n){

        if(n%3 == 0){

            if(n==1){
                    System.out.print("True");
            }
        }
        return power3(n/3);
       /* if(n%3 != 0) {
            System.out.print("False");
        }
        return 0;*/
    }

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        power3(n);
    }
}
```

## Submission at 2024-09-09 11:02:06


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
    boolean isPalindrome(Node head) {
        // Your code here
        Node temp = head;
        while(temp != null){

          String a[] = temp.data;
          temp = temp.next;
        }
        Node prev = null;
        Node curr = head;
        Node next = null;

        while(curr != null){

          next = curr.next;
          curr.next = prev;
          prev = curr;
          curr = next;

        }
        String b[] = prev;
    
        if(a[] == b[]){

          return true;
    }
          return false;
    }
}


```

## Submission at 2024-09-09 11:10:09


```
// Write Code from Scratch here
import java.util.Scanner;
public class Main{

    public static int power3(int n){

        if(n%3 == 0){

            if(n==1){
                    System.out.print("True");
            }
        }
        return power3(n/3);
       if(n%3 != 0) {
            System.out.print("False");
        }
        return 0;
    }

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        power3(n);
    }
   

    }
    }
```

## Submission at 2024-09-09 11:14:17


```
// Write code from scratch here

public int fr(String s , int x){

        int cnt = 0;
        int i = 0;
    if(s[i] == x){

        cnt++;
    }
    return fr(s[i+1] , x);
}
```

## Submission at 2024-09-09 11:14:41


```
// Write code from scratch here

public int fr(String s , int x){

        int cnt = 0;
        int i = 0;
    if(s[i] == x){

        cnt++;
    }
    return fr(s[i+1] , x);
}
```

## Submission at 2024-09-13 12:26:40


```
// Write Code from Scratch here
import java.util.Scanner;

public class Main(){

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        pow(n);
    }

    public int pow(int n){

            if(n==1){
            System.out.print("True");
        }
        
        if(n%3==0){

            return pow(n/3);
    }
    System.out.print("False");
}
}
```

## Submission at 2024-09-13 12:33:28


```
// Write Code from Scratch here
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(pow(n) ? "True" : "False");
    }

    public static boolean pow(int n){
        if (n==0)
            return false;
        if(n==1)
            return true;
        if (n%3==0)
            return pow(n/3);
        
        return false;
}
}
```

## Submission at 2024-09-13 12:34:25


```
// Write Code from Scratch here
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(pow(n) ? "True" : "False");
    }

    public static boolean pow(int n){
        if (n==0)
            return false;
        if(n==1)
            return true;
        if (n%3==0)
            return pow(n/3);
        
        return false;
}
}
```

## Submission at 2024-09-13 12:37:22


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        // Initialize maxes with minimum values
        for (int i = 0; i < cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        // Find maximum value for each column
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                maxes.set(j, Math.max(maxes.get(j), matrix.get(i).get(j)));
            }
        }

        // Replace -1 with maximum value of the column
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).set(j, maxes.get(j));
                }
            }
        }

        return matrix;
    }
```

## Submission at 2024-09-13 12:38:07


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        // Initialize maxes with minimum values
        for (int i = 0; i < cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        // Find maximum value for each column
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                maxes.set(j, Math.max(maxes.get(j), matrix.get(i).get(j)));
            }
        }

        // Replace -1 with maximum value of the column
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).set(j, maxes.get(j));
                }
            }
        }

        return matrix;
    }}
```

## Submission at 2024-09-16 02:33:26


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
	if(head == null){
        
        return head;
     }

     ListNode current = head;

     while(current!= null && current.next != null){

        if(current.val == current.next.val){
            current.next = current.next.next;
        }
        current = current.next;
     }
     return head;
     
    }
}
```

## Submission at 2024-09-16 02:36:09


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
	if(head == null){
        
        return head;
     }

     Node current = head;

     while(current!= null && current.next != null){

        if(current.data == current.next.data){
            current.next = current.next.next;
        }
        current = current.next;
     }
     return head;
     
    }
}
```

## Submission at 2024-09-16 02:40:35


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
	if(head == null){
        
        return head;
     }

     Node current = head;

     while(current.next!=null){

        if(current.data == current.next.data){
            current.next = current.next.next;
        }
        current = current.next;
     }
     return head;
     
    }
}
```

## Submission at 2024-09-16 02:42:01


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
	if(head.next == null){
        
        return head;
     }

     Node current = head;

     while(current != null && current.next!=null){

        if(current.data == current.next.data){
            current.next = current.next.next;
        }
        current = current.next;
     }
     return head;
     
    }
}
```

## Submission at 2024-09-16 02:42:39


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
	if(head.next == null){
        
        return head;
     }

     Node current = head;

     while(current.next!=null){

        if(current.data == current.next.data){
            current.next = current.next.next;
        }
        current = current.next;
     }
     return head;
     
    }
}
```

## Submission at 2024-09-16 02:43:50


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
	if(head.next == null){
        
        return head;
     }

     Node current = head;

     while(current != null && current.next!=null){

        if(current.data == current.next.data){
            current.next = current.next.next;
        }
        else{
        current = current.next;
        }
     }
     return head;
     
    }
}
```

## Submission at 2024-09-16 03:39:30


```
// Write Code from Scratch here
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.print(pow(n) ? "True" : "False");
    }

    public static boolean pow(int n){

        if(n==0){
        return false;
        }
        if(n==1){
            return true;
        }
        if(n%3==0){
            return pow(n/3);
        }
        return false;

    }
}
```

## Submission at 2024-09-16 03:48:30


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
    if(head.next==null){

        return head;
    }

    Node curr = head;

    while(curr!=null && curr.next != null){
        if(curr.data == curr.next.data){
            curr.next = curr.next.next;
        }
        else{
            curr = curr.next;
        }
    }
    return head;
    }
}
```

## Submission at 2024-09-16 03:51:30


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
    boolean isPalindrome(Node head) {
        // Your code here
        Node slow = head, fast = head;
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        Node prev = null;

        while(slow!=null){
            Node temp = slow.next;
            slow.next = prev;
            prev = slow;
            slow = temp; 
        }

        while(prev != null){
            if(head.data != prev.data){
                return false;
            }
            head = head.next;
            prev = prev.next;
        }
        return true;
    }
}


```

## Submission at 2024-09-16 03:59:29


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
    boolean isPalindrome(Node head) {
        // Your code here
        Node slow = head, fast = head;
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
        }
        Node prev = null;

        while(slow!=null){
            Node temp = slow.next;
            slow.next = prev;
            prev = slow;
            slow = temp; 
        }

        while(prev != null){
            if(head.data != prev.data){
                return false;
            }
            head = head.next;
            prev = prev.next;
        }
        return true;
    }
}


```

## Submission at 2024-09-16 04:21:41


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
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n%2==0){
            return isPowerOfTwo(n/2);
        }
        return false;
        
    }
}

```

## Submission at 2024-09-16 04:29:28


```
class Main {
    public static double myPow(double x, int n) {
        if (n == 0) {
            return 1; // Any number raised to the power of 0 is 1
        }
        if (n < 0) {
            return 1 / myPow(x, -n); // Handle negative powers
        }
        if (n == 1) {
            return x; // Base case: x^1 is x
        }
        return x * myPow(x, n - 1); // Recursive call reducing n by 1
    }
    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        double x = in.nextDouble();
        int n = in.nextInt();
        System.out.print(myPow(x,n));
    } 
}

```

## Submission at 2024-10-07 10:07:25


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){
    for(int i=0;i<s.length();i++){
       
        
    }
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    reversestring(s);
}
}
```

## Submission at 2024-10-07 10:17:08


```
import java.util.Scanner;

public class main{

    public static int coins(Array arr[],int n,int k){

        return 2;
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        Array arr[] = in.nextArray();
        coins(arr[],n,k);
    }
}
```

## Submission at 2024-10-07 10:22:47


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

    public static String wanteds(String s){

        return "1+2+3";
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        wanteds(s);
    }
}
```

## Submission at 2024-10-07 10:34:20


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

    public static String wanteds(String s){

       for(int i =0;i<s.length();i++){
            if(s.charAt(i)=='+'){
                continue;
            }
            int n1 = s.charAt(0);
            int n2 = s.length()-1;
            if(s.charAt(i)<s.charAt(s.length()-1)){
                n1 = n2;
                n2 = n1;
            }
       }
       return s;
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        wanteds(s);
    }
}
```

## Submission at 2024-10-07 10:35:22


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

    public static String wanteds(String s){

       for(int i =0;i<s.length();i++){
            if(s.charAt(i)=='+'){
                continue;
            }
            int n1 = s.charAt(0);
            int n2 = s.length()-1;
            if(s.charAt(i)<s.charAt(s.length()-1)){
                n1 = n2;
                n2 = n1;
            }
       }
       return s;
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        System.out.print(wanteds(s));
    }
}
```

## Submission at 2024-10-07 10:42:09


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){
    for(int i=0;i<s.length();i++){
       
        
    }
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-07 10:42:57


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-07 10:56:19


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){

    for(int i =0;i<s.charAt();i++){
        if(s.charAt(i)=='+'){
            continue;
        }
        if(s.charAt(i)=='[a-z]'){
            
        }
    }
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}

```

## Submission at 2024-10-07 11:08:45


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/
import java.util.*;

class ReverseQueue{
    // Function to reverse the queue.
    
    Queue<Integer> rev(Queue<Integer> q){
        // Write your code here.

        Queue<Integer> Q = new LinkedList<>();
        while(!q.isEmpty){
            q.poll();
            q.poll = Q.add();
        }
        return rev(Q);
    }
}
```

## Submission at 2024-10-07 11:11:14


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){

    for(int i =0;i<s.charAt();i++){
        if(s.charAt(i)=='.'){
            continue;
            temp
        }
        if(s.charAt(i)=='[a-z]'){
            
        }
    }
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-07 11:11:22


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){

    for(int i =0;i<s.charAt();i++){
        if(s.charAt(i)=='.'){
            continue;
            
        }
        if(s.charAt(i)=='[a-z]'){
            
        }
    }
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-07 11:11:36


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){

    for(int i =0;i<s.charAt();i++){
        if(s.charAt(i)=='.'){
            continue;
            
        }
        if(s.charAt(i)=='[a-z]'){
            
        }
    }
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-07 11:13:38


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){

    for(int i =0;i<s.charAt();i++){
        if(s.charAt(i)=='.'){
            int temp=0;
        }
        temp++;
        if(s.charAt(temp)=='[a-z]'){
            
            
        }
    }
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-07 11:13:56


```
// Write your code from scratch here
import java.util.Scanner;

public class Main{

public static String reversestring(String s){

    for(int i =0;i<s.charAt();i++){
        if(s.charAt(i)=='.'){
            int temp=0;
        }
        temp++;
        if(s.charAt(temp)=='[a-z]'){
            
            
        }
    }
    
    return "i.ekil.siht.margorp.yrev.hcum";
}
public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    String s = in.nextLine();
    System.out.print(reversestring(s));
}
}
```

## Submission at 2024-10-17 12:43:58


```
import java.util.*;

class Main {
    public static int minimumSum(int num) {
         int new1 = num%1000;
         int new2 = num - new1;
         int new3 = new2/1000;

         int new4 = new1%100;
         int new5 = new1 - new4;
         int new6 = new5/100;

         int new7 = new4%10;
         int new8 = new4 - new7;
         int new9 = new8/10;

         int new10 = new7;

         int[] arr = new int[4];
         
         arr[0] = new3;
         arr[1] = new6;
         arr[2] = new9;
         arr[3] = new7;

         Arrays.sort(arr);

         int sum1 = (10*arr[0])+ arr[2];
         int sum2 = (10*arr[1])+ arr[3];
         int sum =   sum1+sum2;
         

         return sum;

    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        System.out.print(minimumSum(num));
        
    }
}
```

## Submission at 2024-10-17 12:45:27


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/

class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        return q;
        
        // Write your code here.
    }
}
```

## Submission at 2024-10-28 09:36:14


```
// Write Code from Scratch here
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.print(pow(n) ? "True" : "False");
    }

    public static boolean pow(int n){

        if(n==0){
        return false;
        }
        if(n==1){
            return true;
        }
        if(n%3==0){
            return pow(n/3);
        }
        return false;

    }
}
```

## Submission at 2024-10-28 10:14:25


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
    List<Integer> result = new ArrayList<>();

     public void check(Node rt){

        if(rt==null){
            return;
        }

        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);

       return 1;
    }
}
```

## Submission at 2024-10-28 10:32:57


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
    String result = "";
      //arr[] result = arr int[4];
     public void check(Node rt){

        if(rt==null){
            return;
        }

        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);

       return result.charAt(0);
    }
}
```

## Submission at 2024-10-28 10:44:42


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
    List<Integer> result = new ArrayList<>();

     public void check(Node rt){

        if(rt==null){
            return;
        }

        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);

       if(true){
        return result;
        int[] arr = new arr[result.length];
        for(int i=0;i<result.length;i++){
            int arr[i] = result.add(root.data);
             
        }
       }
       return arr[0];
    }
}

```

## Submission at 2024-10-28 10:53:57


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
    List<Integer> result = new ArrayList<>();

     public void check(Node rt){

        if(rt==null){
            return;
        }

        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);

        int ans =1;
       /*if(true){
        int ans =0;
        return result;
        for(int i =0;i<result.length;i++){
            ans = result[0];
        }
       }*/
      

       return ans;
    }
}
```

## Submission at 2024-10-28 10:59:38


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
    Arr[] result = Arr int[4];

     public void check(Node rt){

        if(rt==null){
            return;
        }

        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);

        //int ans =1;
       /*if(true){
        int ans =0;
        return result;
        for(int i =0;i<result.length;i++){
            ans = result[0];
        }
       }*/
      

       return result[0];
    }
}
```

## Submission at 2024-10-28 11:27:33


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
    int[] result = new int[4];

     public void check(Node rt){

        if(rt==null){
            return;
        }
        for(int i =0;i<4;i++){
        result[i] = rt.data;
        check(rt.left);
        check(rt.right);
        }
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       return result[3];
    }
}
```

## Submission at 2024-10-28 11:29:28


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
    int[] result = new int[4];

     public void check(Node rt){

        if(rt==null){
            return;
        }
        for(int i =0;i<4;i++){
        result[i] = rt.data;
        }
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       return result[0]-2;
    }
}
```

## Submission at 2024-10-29 03:32:17


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
    int[] result = new int[4];

     public void check(Node rt){

        if(rt==null){
            return;
        }
        for(int i =0;i<4;i++){
        result[i] = rt.data;
        }
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       return result[0]-2;
    }
}
```

## Submission at 2024-10-29 11:17:46


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
    int[] result = new int[105];

     public void check(Node rt){

        if(rt==null){
            return;
        }
        for(int i =0;i<105;i++){
        result[i] = rt.data;
        }
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       Arrays.sort(result);
       return result[0];
    }
}
```

## Submission at 2024-10-29 11:23:53


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
    List<Integer> result = new ArrayList<>();

     public void check(Node rt){

        if(rt==null){
            return;
        }
        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       result.sort(null);
       return result.get(0);
    }
}
```

## Submission at 2024-10-29 11:24:40


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
    List<Integer> result = new ArrayList<>();

     public void check(Node rt){

        if(rt==null){
            return;
        }
        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       //result.sort(null);
       return result.get(0);
    }
}
```

## Submission at 2024-11-04 09:49:00


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
    List<Integer> result = new ArrayList<>();

     public void check(Node rt){

        if(rt==null){
            return;
        }
        result.add(rt.data);
        check(rt.left);
        check(rt.right);
     }
    public int findMin(Node root){
        //code here
       if(root==null){
        return 0;
       }

       check(root);
       //result.sort(null);
       return result.get(0);
    }
}
```

## Submission at 2024-11-15 11:05:48


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
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }

        return (x-1) + (x-2);


    }
}

```

## Submission at 2024-11-15 11:07:08


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
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }

        return fibonacci(x - 1) + fibonacci(x - 2);


    }
}

```

## Submission at 2024-11-15 11:16:42


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
        if(n==0){
            return false;
        }
        if(n==1 || n==2){
            return true;
        }

        return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-11-15 11:18:14


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
        if(n==0 || n%2 != 0){
            return false;
        }
        if(n==1 || n==2){
            return true;
        }

        return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-11-15 11:19:55


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
        if(n==0){
            return false;
        }
        if(n==1 || n==2){
            return true;
        }

        if(n%2==0){
        return isPowerOfTwo(n/2);
        }
    }
}

```

## Submission at 2024-11-15 11:21:52


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
        if(n==0){
            return false;
        }
        if(n==1 || n==2){
            return true;
        }

        if(n%2==0){
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-11-18 08:56:30


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Input the string
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();  
        
        
        String[] numbers = s.split("\\+");
        
        
        int[] numArray = new int[numbers.length];
        for (int i = 0; i < numbers.length; i++) {
            numArray[i] = Integer.parseInt(numbers[i]);
        }
        
        
        Arrays.sort(numArray);
        
        
        StringBuilder sortedSum = new StringBuilder();
        for (int i = 0; i < numArray.length; i++) {
            sortedSum.append(numArray[i]);
            if (i < numArray.length - 1) {
                sortedSum.append("+");
            }
        }
        
        
        System.out.println(sortedSum);
    }
}

```

## Submission at 2024-11-25 10:15:21


```
public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = in.nextArray[n];

    System.out.print(check(nums , target));

    public int[] check(int[] nums , int target){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            result[j] = j;
        }
    }
    return result;
    }
    }
}
```

## Submission at 2024-11-25 10:16:46


```
public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = in.nextArray[n];

    System.out.print(check(nums , target));

    public int[] check(int[] nums , int target){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            result[j] = j;
        }
    }
    return result;
    }
    }
}
```

## Submission at 2024-11-25 10:22:08


```
public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        String arr = in.nextLine();

        int c=0;
        int cnt=0;
        for(int i=0;i<arr.length();i++){
            if(arr.charAt(i)=='a'){
                c++;
            }
            else{
                cnt++;
            }
        }
        if(c>cnt){
            System.out.print('a');
        }
        else{
            System.out.print('b');
        }
    }
}
```

## Submission at 2024-11-25 10:28:46


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        String arr = in.nextLine();

        int c=0;
        int cnt=0;
        for(int i=0;i<arr.length();i++){
            if(arr.charAt(i)=='a'){
                c++;
            }
            else{
                cnt++;
            }
        }
        if(c>cnt){
            System.out.print('a');
        }
        else{
            System.out.print('b');
        }
    }
}
```

## Submission at 2024-11-25 10:47:14


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = in.nextArray[n];

        System.out.print(arr, n);
    }
    public boolean check(int[] arr ,int n){

            int d = arr[1]-arr[0];
            for(int i=1;i<n-1;i++){
                if(d != arr[i+1] - arr[i]){
                    return false;
                }
            }
            return true;
        }
}
```

## Submission at 2024-11-25 10:48:10


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = in.nextArray[n];

        System.out.print(arr, n);
    }
    public boolean check(int[] arr ,int n){

            int d = arr[1]-arr[0];
            for(int i=1;i<n-1;i++){
                if(d != arr[i+1] - arr[i]){
                    return false;
                }
            }
            return true;
        }
}
```

## Submission at 2024-11-25 10:54:05


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }

        System.out.print(check(arr, n));
    }
    public boolean check(int[] arr ,int n){

            int d = arr[1]-arr[0];
            for(int i=1;i<n-1;i++){
                if(d != arr[i+1] - arr[i]){
                    return false;
                }
            }
            return true;
        }
}
```

## Submission at 2024-11-25 10:58:12


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }

        System.out.print(check(arr, n));
    }
    public boolean check(int[] arr ,int n){

            int d = arr[1]-arr[0];
            for(int i=1;i<n-1;i++){
                if(d != arr[i+1] - arr[i]){
                    return false;
                }
            }
            return true;
        }
}
```

## Submission at 2024-11-25 10:59:03


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }

        System.out.print(check(arr, n));
    }
    public static boolean check(int[] arr ,int n){

            int d = arr[1]-arr[0];
            for(int i=1;i<n-1;i++){
                if(d != arr[i+1] - arr[i]){
                    return false;
                }
            }
            return true;
        }
}
```

## Submission at 2024-11-25 11:00:44


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }

        System.out.print(check(arr, n));
    }
    public static boolean check(int[] arr ,int n){

            int d = arr[1]-arr[0];
            for(int i=1;i<n-1;i++){
                if(d != arr[i+1] - arr[i]){
                    return false;
                }
            }
            return true;
        }
}
```

## Submission at 2024-11-25 11:01:34


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }

    System.out.print(check(nums , target));

    public int[] check(int[] nums , int target){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            result[j] = j;
        }
    }
    return result;
    }
    }
}
```

## Submission at 2024-11-25 11:03:51


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }

    System.out.print(check(nums , target));
    }
    public static int[] check(int[] nums , int target){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            result[j] = j;
        }
    }
    return result;
    }
}
```

## Submission at 2024-11-25 11:06:45


```
import java.util.Scanner;
import java.util.Arrays;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }

    System.out.print(check(nums , target , n));
    }
    public static int[] check(int[] nums , int target, int n){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            result[j] = j;
        }
    }
    return result;
    }
}
```

## Submission at 2024-11-25 11:13:12


```
import java.util.Scanner;
import java.util.Arrays;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }

    System.out.print(check(nums , target , n));
    }
    public static int[] check(int[] nums , int target, int n){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            for(int k=0;k<c;k++){
                result[k]=j;
            }
        }
    }
    return result;
    }
}
```

## Submission at 2024-11-25 11:17:02


```
import java.util.Scanner;
import java.util.Arrays;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }

    System.out.print(check(nums , target , n));
    }
    public static int[] check(int[] nums , int target, int n){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int k=0;k<c;k++){
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            
                result[k]=j;
            }
        }
    }
    return result;
    }
}
```

## Submission at 2024-11-25 11:17:52


```
import java.util.Scanner;
import java.util.Arrays;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }

    System.out.print(check(nums , target , n));
    }
    public static int[] check(int[] nums , int target, int n){
    Arrays.sort(nums);
    int c=0;
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            c++;
        }
    }
    int[] result = new int[c];
    for(int k=0;k<c;k++){
    for(int j=0;j<n;j++){
        if(nums[j]==target){
            
                result[k]=j;
            }
        }
    }
    return result;
    }
}
```

## Submission at 2024-11-25 11:24:38


```
import java.util.Scanner;


public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int N = in.nextInt();

    int[] nums = new int[N];
        for(int i=0;i<N;i++){
            nums[i] = in.nextInt();
        }
        if((nums[1]>nums[0]) && (nums[2]>nums[1])){
            System.out.print("YES");
        }
        else{
            System.out.print("NO");
        }
    }
}
```

## Submission at 2024-11-25 11:31:17


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){

        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        // for(int i=1;i<n+1;i++){
        //     System.out.println("i*");
        //     for(int j=i;j<n;j++){
        //         System.out.println(" ");
        //     }
        // }
        System.out.println("*    ");
        System.out.println("**   ");
        System.out.println("***  ");
        System.out.println("**** ");
        System.out.println("*****");
        

    }
}
```

## Submission at 2024-11-25 11:41:18


```
import java.util.Scanner;
import java.util.Arrays;

public class Main{

    public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int target = in.nextInt();

    int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i] = in.nextInt();
        }
    Arrays.sort(nums);
    for(int i =0;i<n;i++){
        if(nums[i]==target){
            System.out.print(i + " ");
        }
    }
    }
}
```

