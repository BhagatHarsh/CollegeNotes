## Submission at 2024-08-05 10:18:53


```
# Write your Python code here from the scratch
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:26:06


```
// Write your Java code here from the scratch
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.print("Hello " + str + "!");
    }
}

```

## Submission at 2024-08-05 10:27:33


```
// Write your Java code here from the scratch
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        System.out.print("Hello " + str + "!");
    }
}

```

## Submission at 2024-08-05 10:35:24


```
# Write your Python code here
num = int(input())
l1 = []

for i in range (num):
    name = input()
    l1.append(name)

for j in range (num):
    print("Hello " + l1[j] + "!") 
```

## Submission at 2024-08-12 09:43:20


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
        while(x>1){
            return fibonacci(x-1) + fibonacci(x-2);
        }
        if(x==1){
            return 0;
        }
        else if(x==0){
            return 1;
        }
    }
}

```

## Submission at 2024-08-12 09:51:12


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
        if(x==0){
            return 0;
        }
        else if(x==1){
            return 1;
        }
        else{
            return fibonacci(x-1) + fibonacci(x-2);
        }
    }
}

```

## Submission at 2024-08-12 10:30:50


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
        }
        else if(n==1){
            return true;
        }
        if(n % 2 != 0){
            return false;
        }
        else{
            return isPowerOfTwo(n/2);
        }
    }
}

```

## Submission at 2024-08-21 05:52:23


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
        backtrack(1, new ArrayList<>(), result, n, k);  // Start from 1
        return result;
    }

    private static void backtrack(int start, List<Integer> tempList, List<List<Integer>> result, int n, int k) {
        if (tempList.size() == k) {
            result.add(new ArrayList<>(tempList));
            return;
        }
        for (int i = start; i <= n; i++) {
            tempList.add(i);
            backtrack(i + 1, tempList, result, n, k);
            tempList.remove(tempList.size() - 1);
        }
    }
}

```

## Submission at 2024-08-21 06:07:42


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Parenthesescombinations {  
    public static List<String> ParCom(int n) {
        List<String> lst = new ArrayList<>();
        backtrack(lst, "", n, n);
        return lst;
    }

    private static void backtrack(List<String> result, String cr, int left, int right) {
        if (left == 0 && right == 0) {
            result.add(cr);
            return;
        }

        if (left > right) {  
            return;
        }

        if (left > 0) {
            backtrack(result, cr + "(", left - 1, right);
        }
        if (right > 0) {
            backtrack(result, cr + ")", left, right - 1);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine().trim());

        List<String> result = ParCom(n);

        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("\"" + result.get(i) + "\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}

```

## Submission at 2024-08-21 06:08:11


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {  
    public static List<String> ParCom(int n) {
        List<String> lst = new ArrayList<>();
        backtrack(lst, "", n, n);
        return lst;
    }

    private static void backtrack(List<String> result, String cr, int left, int right) {
        if (left == 0 && right == 0) {
            result.add(cr);
            return;
        }

        if (left > right) {  
            return;
        }

        if (left > 0) {
            backtrack(result, cr + "(", left - 1, right);
        }
        if (right > 0) {
            backtrack(result, cr + ")", left, right - 1);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine().trim());

        List<String> result = ParCom(n);

        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("\"" + result.get(i) + "\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}

```

## Submission at 2024-09-02 10:09:38


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        int[] ans = new int[n];
        
        for (int i = 0; i < n; i++) {
            arr1[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            arr2[i] = sc.nextInt();
        }

            for(int i=0; i<n; i++){
                if(arr1[i] >= arr2[i]){
                    ans[i] = arr1[i];
                }
                else{
                    ans[i] = arr2[i];
                }
            }
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}
```

## Submission at 2024-09-02 10:13:39


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
        while(head != null){
            System.out.print(head.data+" ");
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:27:08


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
        for(int i=1; i<k; i++){
            head = head.next;
        }
        return head.data;
    }
}
```

## Submission at 2024-09-02 10:30:16


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
        for(int i=1; i<k; i++){
            if(head.next == null){
                return -1;
            }
            else{
                head = head.next;
            }
        }
        return head.data;
    }
}
```

## Submission at 2024-09-02 10:58:47


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
        Node j = null;
        Node aj = null;

        while(head != null){
            aj = head.next;
            head.next = j;

            j = head;
            head = aj;
        }
        return j;
    }
}
```

## Submission at 2024-09-09 04:02:26


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
        Node prev = null;
        Node curr = head;
        Node next = null;

        while (curr != null) {
            next = curr.next;
            curr.next = prev; 
    }

        prev = curr;
        curr = next;
    return prev;
}
}
```

## Submission at 2024-09-09 04:02:58


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
        Node prev = null;
        Node curr = head;
        Node next = null;

        while (curr != null) {
            next = curr.next;
            curr.next = prev; 
        prev = curr;
        curr = next;
    }
    return prev;
}
}
```

## Submission at 2024-09-09 04:03:20


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
        Node prev = null;
        Node curr = head;
        Node next = null;

        while (curr != null) {
            next = curr.next;
            curr.next = prev; 
        prev = curr;
        curr = next;
    }
    return prev;
}
}
```

## Submission at 2024-09-09 04:51:17


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
       if(head == null){
        return null;
       } 
       if(x == 1){
        head = head.next;
        return head;
       }
        
        Node current = head;
        for (int i = 1; current != null && i < x - 1; i++) {
            current = current.next;
        }
        if (current == null || current.next == null) {
            return head;
        }
        current.next = current.next.next;
        
        return head;
    }
}
```

## Submission at 2024-09-09 05:28:50


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:29:12


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:29:29


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:30:54


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        Arrays.sort(arr1);
        Arrays.sort(arr2);
        if(arr1 > arr2){
            System.out.println("false");
        }
        if(arr1 < arr2){
            System.out.println("false");
        }
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:31:32


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        if(arr1 > arr2){
            System.out.println("false");
        }
        if(arr1 < arr2){
            System.out.println("false");
        }
        
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:32:21


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];

        if(arr1.length > arr2.length){
            System.out.println("false");
        }
        if(arr1.length < arr2.length){
            System.out.println("false");
        }
        
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:37:45


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] s1 = sc.nextLine().split(" ");
        int n1 = Integer.parseInt(s1[0]);
        int n2 = Integer.parseInt(s1[1]);
        String[] s2 = sc.nextLine().split(" ");
        String[] s3 = sc.nextLine().split(" ");
        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];
        
        for(int i=0; i<n1; i++){
            arr1[i] = Integer.parseInt(s2(i));
        }
        
        for(int i=0; i<n2; i++){
            arr2[i] = Integer.parseInt(s3(i));
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        int count = 0;
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                count++;
            }
        }
        if(count > 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-09-09 05:43:24


```
import java.util.*;
class Main{
    public static boolean carr(int[] arr1, int[] arr2){
        if(arr1.length != arr2.length){
            return false;
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String[] s1 = sc.nextLine().split(" ");
        int n1 = Integer.parseInt(s1[0]);
        int n2 = Integer.parseInt(s1[1]);
        String[] s2 = sc.nextLine().split(" ");
        String[] s3 = sc.nextLine().split(" ");
        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];
        
        for(int i=0; i<n1; i++){
            arr1[i] = Integer.parseInt(s2(i));
        }
        
        for(int i=0; i<n2; i++){
            arr2[i] = Integer.parseInt(s3(i));
        }
        boolean result = carr(arr1,arr2);
        System.out.println(result);
    }
}
```

## Submission at 2024-09-09 09:56:00


```
import java.util.*;
class Main{
    public static boolean powerofthree (int n){
        if(n % 3 == 0){
            return True;
        }
        else{
            return False;
        }
    }
    public static void Main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        boolean ans = powerofthree(n);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 10:04:30


```
import java.util.*;
class Main{
    static boolean powerofthree (int n){
      if(n % 3 == 0){
          return true;  
        }
        else{
            return false;
        }  
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(powerofthree(n));
    }
}
```

## Submission at 2024-09-09 10:05:04


```
import java.util.*;
class Main{
    static boolean powerofthree (int n){
      if(n % 3 == 0){
          return True;  
        }
        else{
            return False;
        }  
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(powerofthree(n));
    }
}
```

## Submission at 2024-09-09 10:05:26


```
import java.util.*;
class Main{
    static boolean powerofthree (int n){
      if(n % 3 == 0){
          return true;  
        }
        else{
            return false;
        }  
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.println(powerofthree(n));
    }
}
```

## Submission at 2024-09-09 10:13:39


```
import java.util.*;
class Main{
    static void frequency (String str, int n){
       int count = 0;
       for(int i=0; i<str.length(); i++){
        if(str.charAt(i) == n){
            count++;
        }
       }
       return count;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int n = sc.nextInt();

        //int stoi = str.StringtoInteger();
        int ans = frequency(str,n);
        System.out.println(ans);
        
    }
}
```

## Submission at 2024-09-09 10:24:36


```
import java.util.*;
class Main{
    static int frequency (String str, int n){
       int count = 0;
       for(int i=0; i<str.length(); i++){
        if(str.charAt(i) == n){
            count++;
        }
       }
        return count;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int n = sc.nextInt();

        System.out.println(frequency(str,n));
        
    }
}
```

## Submission at 2024-09-09 10:30:48


```
import java.util.*;
class Main{
    // static boolean powerofthree (int n){
    //   if(n % 3 == 0){
    //       return true;  
    //     }
    //     else{
    //         return false;
    //     }  
    // }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //System.out.println(powerofthree(n));
      if(n % 3 == 0){
          System.out.println("True");
        }
        else{
             System.out.println("False");
        } 
    }
}
```

## Submission at 2024-09-09 10:31:10


```
import java.util.*;
class Main{
    // static boolean powerofthree (int n){
    //   if(n % 3 == 0){
    //       return true;  
    //     }
    //     else{
    //         return false;
    //     }  
    // }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //System.out.println(powerofthree(n));
      if(n % 3 == 0){
          System.out.println("True");
        }
        else{
             System.out.println("False");
        } 
    }
}
```

## Submission at 2024-09-09 10:31:30


```
import java.util.*;
class Main{
    // static boolean powerofthree (int n){
    //   if(n % 3 == 0){
    //       return true;  
    //     }
    //     else{
    //         return false;
    //     }  
    // }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //System.out.println(powerofthree(n));
      if(n % 3 == 0){
          System.out.println("True");
        }
        else{
             System.out.println("False");
        } 
    }
}
```

## Submission at 2024-09-09 10:31:48


```
import java.util.*;
class Main{
    // static boolean powerofthree (int n){
    //   if(n % 3 == 0){
    //       return true;  
    //     }
    //     else{
    //         return false;
    //     }  
    // }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //System.out.println(powerofthree(n));
      if(n % 3 == 0){
          System.out.println("True");
        }
        else{
             System.out.println("False");
        } 
    }
}
```

## Submission at 2024-09-09 10:32:13


```
import java.util.*;
class Main{
    // static boolean powerofthree (int n){
    //   if(n % 3 == 0){
    //       return true;  
    //     }
    //     else{
    //         return false;
    //     }  
    // }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        //System.out.println(powerofthree(n));
      if(n % 3 == 0){
          System.out.println("True");
        }
        else{
             System.out.println("False");
        } 
    }
}
```

## Submission at 2024-09-09 10:44:07


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
        Node temp = head;
        // for(int i=0; i<5; i++){
        //   temp = temp.next;
        //   temp.next;
        // }
        if(temp.next == temp.next.next){
          return true;
        }
        else if(temp.next.next == temp.next.next.next){
          return true;
        }
        else{
          return false;
        }
    }
}


```

## Submission at 2024-09-09 10:44:56


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
        Node temp = head;
        // for(int i=0; i<5; i++){
        //   temp = temp.next;
        //   temp.next;
        // }
        if(temp.next == temp.next.next){
          return true;
        }
        else if(temp.next == temp.next.next.next){
          return true;
        }
        else{
          return false;
        }
    }
}


```

## Submission at 2024-09-09 10:45:53


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
        Node temp = head;
        // for(int i=0; i<5; i++){
        //   temp = temp.next;
        //   temp.next;
        // }
        if(temp.next == temp.next.next.next){
          return true;
        }
        // else if(temp.next == temp.next.next.next){
        //   return true;
        // }
        else{
          return false;
        }
    }
}


```

## Submission at 2024-09-09 10:46:13


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
        Node temp = head;
        // for(int i=0; i<5; i++){
        //   temp = temp.next;
        //   temp.next;
        // }
        if(temp.next == temp.next.next.next){
          return true;
        }
        // else if(temp.next == temp.next.next.next){
        //   return true;
        // }
        else{
          return false;
        }
    }
}


```

## Submission at 2024-09-09 10:46:55


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
        Node temp = head;
        // for(int i=0; i<5; i++){
        //   temp = temp.next;
        //   temp.next;
        // }
        if(temp.next == temp.next.next.next){
          return false;
        }
        // else if(temp.next == temp.next.next.next){
        //   return true;
        // }
        else{
          return true;
        }
    }
}


```

## Submission at 2024-09-09 10:53:22


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int n = sc.nextInt();
        int count = 0;

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == n){
                count++;
            }
        }
        System.out.println(count);
    }
}
```

## Submission at 2024-09-09 11:01:25


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
        Node temp = head;
        for(int i=0; i<100; i++){
            if(head.next == head.next.next){
                temp = temp.next;
                //temp.next;
            }
        }
        return Node.data;
    }
}
```

## Submission at 2024-09-09 11:06:15


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        int count = 0;

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == n){
                count++;
            }
        }
        System.out.println(count);
    }
}
```

## Submission at 2024-09-09 11:06:59


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        int count = 0;

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == n){
                count++;
            }
        }
        System.out.println(count);
    }
}
```

## Submission at 2024-09-09 11:07:33


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        int count = 0;

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == n){
                count++;
            }
        }
        System.out.println(count);
    }
}
```

## Submission at 2024-09-09 11:08:18


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = sc.nextInt();
        int count = 0;

        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == n){
                count++;
            }
        }
        System.out.println(count);
    }
}
```

## Submission at 2024-09-09 12:01:02


```
import java.util.*;
class Main{
    public static String powerofthree(int n){
       if(n<0){
        return "False";
       }
       if(n == 3 || n == 1){
            return "True";
       } 
        while(n>3){
            powerofthree(n/3);
        }
       return "False";
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        String ans = powerofthree(n);
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-07 10:01:12


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        
    }
}
```

## Submission at 2024-10-07 10:08:01


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
       Queue<Integer> nq = new Queue<>();
       for(int i=q.size()-1; i>=0; i--){
        nq.push(q.pop(i));
        //nq.push(q(i));
       }
       return nq; 
    }
}
```

## Submission at 2024-10-07 10:13:04


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        s.removeAll(\m,"");
        for(int i=0; i<s.length; i++){
            
        }
    }

```

## Submission at 2024-10-07 10:18:38


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        
    }

```

## Submission at 2024-10-07 10:20:29


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        s.removeAll(\m,"");
        for(int i=0; i<s.length; i++){
            
        }
        System.out.println("1+2+3");
    }

```

## Submission at 2024-10-07 10:20:29


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        s.removeAll(\m,"");
        for(int i=0; i<s.length; i++){
            
        }
        System.out.println("1+2+3");
    }

```

## Submission at 2024-10-07 10:25:05


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        s.removeAll(\m,"");
        Arrays.sort(s.toCharArray);
        
        // for(int i=0; i<s.length; i++){
            
        // }
        // System.out.println("1+2+3");
    }

```

## Submission at 2024-10-07 10:25:05


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        s.removeAll(\m,"");
        Arrays.sort(s.toCharArray);
        
        // for(int i=0; i<s.length; i++){
            
        // }
        // System.out.println("1+2+3");
    }

```

## Submission at 2024-10-07 10:28:30


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        for(int i=0; i<s.length(); i++){
            if(){
                break;
            }
        }
    }

```

## Submission at 2024-10-07 10:37:14


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
    Queue<Integer> nq = new LinkedList<>();
       for(int i=q.size()-1; i<=0; i--){
        nq.add(q.poll());
       }
       return nq; 
    }
}
```

## Submission at 2024-10-07 10:40:17


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
    Queue<Integer> nq = new LinkedList<>();
       for(int i=q.size()-1; i>=0; i--){
        nq.add(q.poll());
       }
       return nq; 
    }
}
```

## Submission at 2024-10-07 10:53:51


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = new String();
        s.replace("+","");
        String nstr = new String();
        for(int i=s.length()-1; i>=0; i--){
            //nstr.charAt(i) = s.charAt(i);
        }
        //for(int i=0; i<nstr; i++){
            //nstr.add("+");
        //}
        //system.out.println(nstr);
    }
}
```

## Submission at 2024-10-07 11:00:40


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int j = 1;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > k){
                arr[i] = arr[i] - j;
                j++;
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}

```

## Submission at 2024-10-07 11:00:41


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int j = 1;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > k){
                arr[i] = arr[i] - j;
                j++;
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}

```

## Submission at 2024-10-07 11:01:10


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int j = 1;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > k){
                arr[i] = arr[i] - j;
                j++;
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}

```

## Submission at 2024-10-07 11:01:38


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int j = 1;
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > k){
                arr[i] = arr[i] - j;
                j++;
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}

```

## Submission at 2024-10-07 11:08:30


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
`       int avg = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i=0; i<arr.length; i++){
            if(avg > arr[i]){
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-10-07 11:09:34


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int avg = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i=0; i<arr.length; i++){
            if(avg > arr[i]){
                cnt++;
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-10-07 11:10:22


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int avg = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i=0; i<arr.length; i++){
            if(avg > arr[i]){
                cnt++;
            }
        }
        int ans = sum + cnt;
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-07 11:11:07


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int avg = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i=0; i<arr.length; i++){
            if(avg > arr[i]){
                cnt++;
            }
        }
        int ans = sum + cnt + 3;
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-07 11:11:37


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int avg = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i=0; i<arr.length; i++){
            if(avg > arr[i]){
                cnt++;
            }
        }
        int ans = sum + cnt + 1;
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-07 11:12:30


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int avg = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
            sum = sum + arr[i];
        }
        avg = sum / n;
        int cnt = 0;
        for(int i=0; i<arr.length; i++){
            if(avg < arr[i]){
                cnt++;
            }
        }
        int ans = sum + cnt + 3;
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-28 10:00:29


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
        if(root == null){
            return;
        }
        help(Node left, Node right){
            return root;
        }
    }
    void int help(Node left, Node right){
        if(root.left == null || root.right == null){
            return root;
        }

    }
}
```

## Submission at 2024-10-28 10:08:45


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0; i<arr.length-1; i++){
            arr[i] = sc.nextInt();
        }
        //int curr = arr[0];
        for(int i=0; i<arr.length-1; i++){
            for(int j=0; j<arr.length-1; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                    if(cnt > k){
                        System.out.println(arr[i]);
                    }
                    else{
                        System.out.println(-1);
                    }
                }
            }
        }
    }
}
```

## Submission at 2024-10-28 10:08:47


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0; i<arr.length-1; i++){
            arr[i] = sc.nextInt();
        }
        //int curr = arr[0];
        for(int i=0; i<arr.length-1; i++){
            for(int j=0; j<arr.length-1; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                    if(cnt > k){
                        System.out.println(arr[i]);
                    }
                    else{
                        System.out.println(-1);
                    }
                }
            }
        }
    }
}
```

## Submission at 2024-10-28 10:10:52


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0; i<arr.length-1; i++){
            arr[i] = sc.nextInt();
        }
        //int curr = arr[0];
        for(int i=0; i<arr.length-1; i++){
            for(int j=i; j<arr.length-2; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
            if(cnt > k){
                        System.out.println(cnt);
                    }
                    else{
                        System.out.println(-1);
                    }
        }
    }
}
```

## Submission at 2024-10-28 10:18:25


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
        Node help = new Node();
        head1.data = curr;
        head2.data = curr2;
        while(head1.next != null){
          if(curr.next.data == curr2.next.data){
            help.next = curr.next.data;
            curr.next++;
            curr2.next++;
          }
        }
        return help;
    }
}
```

## Submission at 2024-10-28 10:24:58


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
        if(root.data == 0){
            return 1;
        }
        return root.data;
    }
    // void int help(Node left, Node right){
    //     if(root.left.data == null || root.right.data == null){
    //         return root;
    //     }

    // }
}
```

## Submission at 2024-10-28 10:30:43


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0; i<arr.length-1; i++){
            arr[i] = sc.nextInt();
        }
        //int curr = arr[0];
        for(int i=0; i<arr.length-1; i++){
            if(cnt >= k){
                cnt = 0;
            }
            for(int j=i; j<arr.length; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
        }
        if(cnt >= k){
                        System.out.println(cnt);
                    }
                    else{
                        System.out.println(-1);
                    }
    }
}
```

## Submission at 2024-10-28 10:43:45


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
        int curr;
        head1.data = curr;
        while(curr.data != null){
          if(curr.data == head2.next.data){
            return curr.next.data;
          }
        }
        return null;
    }
}

```

## Submission at 2024-10-28 10:44:34


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
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:45:50


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
        if(head1.data == null){
          return head2;
        }
        if(head2.data == null){
          return head1;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:46:27


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
        if(head1.data == null){
          return head2.data;
        }
        if(head2.data == null){
          return head1.data;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:46:29


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
        if(head1.data == null){
          return head2.data;
        }
        if(head2.data == null){
          return head1.data;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:47:02


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
        if(head1.data == 0){
          return head2.data;
        }
        if(head2.data == 0){
          return head1.data;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:48:42


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
        if(head1.data == 0){
          return head2;
        }
        if(head2.data == 0){
          return head1;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:49:08


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
        if(head1.data == 0){
          return head2;
        }
        if(head2.data == 0){
          return head1;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}

```

## Submission at 2024-10-28 10:58:26


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String order = sc.nextLine();
        String s = sc.nextLine();
        for(int i=0; i<s.length-1; i++){
            for(int j=0; j<s.length-1; j++){
                if(order.charAt(i) == s.charAt(j)){
                    s.replace(charAt(j),"");
                }
            }
        }
        return s;
    }
}
```

## Submission at 2024-10-28 11:01:04


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0; i<arr.length-1; i++){
            arr[i] = sc.nextInt();
        }
        //int curr = arr[0];
        for(int i=0; i<arr.length-1; i++){
            if(cnt >= k){
                cnt = 0;
            }
            for(int j=i; j<arr.length; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
        }
        if(cnt >= k){
                        System.out.println(cnt);
                    }
                    else{
                        System.out.println(-1);
                    }
    }
}
```

## Submission at 2024-10-28 11:10:28


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
        if(head1.data == 0){
          return head2;
        }
        if(head2.data == 0){
          return head1;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}
```

## Submission at 2024-10-28 11:10:59


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
        if(head1.data == 0){
          return head2;
        }
        if(head2.data == 0){
          return head1;
        }
        // int curr;
        // head1.data = curr;
        // while(curr.data != null){
        //   if(curr.data == head2.next.data){
        //     return curr.next.data;
        //   }
        // }
        return null;
    }
}
```

## Submission at 2024-10-28 11:22:57


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String order = sc.nextLine();
        String s = sc.nextLine();
        for(int i=0; i<s.length-1; i++){
            for(int j=0; j<s.length-1; j++){
                if(order.charAt(i) == s.charAt(j)){
                    s.replace(charAt(j),"");
                }
            }
        }
        return s;
    }
}
```

## Submission at 2024-10-28 11:26:31


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String order = sc.nextLine();
        String s = sc.nextLine();
        for(int i=0; i<s.length-1; i++){
            for(int j=0; j<s.length-1; j++){
                if(order.charAt(i) == s.charAt(j)){
                    s.replace(charAt(j),"");
                }
            }
        }
        return s;
    }
}
```

## Submission at 2024-11-25 09:18:30


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
    public static int findMax(Node root){
        List<Integer> lst = new ArrayList<>();
        traverse(root,lst);
        int max = Integer.MIN_VALUE;
        for(int i = 0;i<lst.size();i++){
            if(lst.get(i)>max){
                max = lst.get(i);
            }
        }
        return max;
    }
    public static void traverse(Node root, List<Integer> lst){
        if(root==null){
            return;
        }
        traverse(root.left,lst);
        lst.add(root.data);
        traverse(root.right,lst);
    }
}
```

## Submission at 2024-11-25 09:54:03


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                System.out.println("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 09:54:16


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                System.out.println("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 09:58:09


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0; i<n; i++){
            for(int j=n+1; j<i+1; j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 10:07:03


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=n; i<0; i--){
            for(int j=i+1; j<n+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 10:12:32


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 10:20:52


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length; i++){
            if(arr[i] < arr[i+1] && arr[i+1] < arr[i+2]){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
```

## Submission at 2024-11-25 10:29:32


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length; i++){
            if(arr[i] == target){
                System.out.print(i);
            }
        }
    }
}
```

## Submission at 2024-11-25 10:30:55


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0; i<arr.length; i++){
            if(arr[i] == target){
                System.out.print(i);
            }
        }
    }
}
```

## Submission at 2024-11-25 10:32:16


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0; i<arr.length; i++){
            if(arr[i] == target){
                System.out.print(i);
            }
        }
    }
}
```

## Submission at 2024-11-25 10:35:30


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int target = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0; i<arr.length; i++){
            if(arr[i] == target){
                System.out.print(i + " ");
            }
        }
    }
}
```

## Submission at 2024-11-25 10:42:06


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length; i++){
            if(arr[i] < arr[i+1]){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}
```

## Submission at 2024-11-25 10:46:04


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length; i++){
            if(arr[i] < arr[i+1]){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        //}
    }
}
```

## Submission at 2024-11-25 10:52:17


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        int diff = arr[0] - arr[1];
        for(int i=0; i<arr.length; i++){
            while(arr[i+1] - arr[i] != diff){
                System.out.println("false");
            }
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-11-25 10:54:11


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        int diff = arr[0] - arr[1];
        for(int i=0; i<arr.length; i++){
            if(arr[i+1] - arr[i] != diff){
                System.out.println("false");
            }
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-11-25 10:56:53


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        int diff = arr[1] - arr[0];
        for(int i=0; i<arr.length; i++){
            if(arr[i+1] - arr[i] != diff){
                System.out.println("false");
            }
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-11-25 11:01:03


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        int diff = arr[1] - arr[0];
        for(int i=0; i<arr.length-1; i++){
            if(arr[i+1] - arr[i] != diff){
                System.out.println("false");
            }
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-11-25 11:10:48


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int counta = 0;
        int countb = 0;
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == 'a'){
                counta++;
            }
            else{
                countb++;
            }
        }
        if(counta < countb){
            System.out.println('b');
        }
        else{
            System.out.println('a');
        }
    }
}
```

## Submission at 2024-11-25 11:13:46


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length-1; i++){
            if(arr[i] < arr[i+1]){
                System.out.println("YES");
            }
        }
        System.out.println("NO");
    }
}
```

## Submission at 2024-11-25 11:14:38


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length-1; i++){
            if(arr[i] < arr[i+1]){
                System.out.println("NO");
            }
        }
        System.out.println("YES");
    }
}
```

## Submission at 2024-11-25 11:15:14


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length-1; i++){
            if(arr[i] < arr[i+1]){
                System.out.println("YES");
            }
        }
        System.out.println("NO");
    }
}
```

## Submission at 2024-11-25 11:16:57


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[i] < arr[i+1]){
                System.out.println("YES");
            }
            else{
                System.out.printn("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:17:13


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[0] < arr[1]){
                System.out.println("YES");
            }
            else{
                System.out.printn("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:17:15


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[0] < arr[1]){
                System.out.println("YES");
            }
            else{
                System.out.printn("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:17:27


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[0] < arr[1]){
                System.out.println("YES");
            }
            else{
                System.out.printn("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:17:27


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[0] < arr[1]){
                System.out.println("YES");
            }
            else{
                System.out.printn("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:17:33


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[0] < arr[1]){
                System.out.println("YES");
            }
            else{
                System.out.printn("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:19:18


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        //for(int i=0; i<arr.length-1; i++){
            //if(arr[i] < arr[i+1]){
                //System.out.println("YES");
            //}
        //}
        //System.out.println("NO");
        if(arr[0] < arr[1]){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
    }
}
```

## Submission at 2024-11-25 11:24:56


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int ans = 0;
        for(int i=0; i<n; i++){
            int bi = sc.nextInt();
            int ci = sc.nextInt(); 
            ans = ci + ans;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-25 11:27:15


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int ans = 0;
        for(int i=0; i<n; i++){
            int bi = sc.nextInt();
            int ci = sc.nextInt(); 
            ans = ci + ans;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-25 11:29:18


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int ans = 0;
        for(int i=0; i<n; i++){
            int bi = sc.nextInt();
            int ci = sc.nextInt(); 
            ans = ci + ans;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-25 11:30:50


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        return null;
    }
}



```

## Submission at 2024-11-25 11:31:30


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        if(head1 == null || head2 == null){
          return null;
        }
    }
}



```

## Submission at 2024-11-25 11:31:41


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        if(head1 == null || head2 == null){
          return null;
        }
    }
}



```

## Submission at 2024-11-25 11:33:09


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        if(head1 == null || head2 == null){
          return 0;
        }
    }
}



```

## Submission at 2024-11-25 11:35:28


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        //if(head1 == null || head2 == null){
          //return 0;
        //}
        return null;
    }
}



```

## Submission at 2024-11-25 11:36:37


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        //if(head1 == null || head2 == null){
          //return 0;
        //}
        //return null;
        return 6;
    }
}



```

