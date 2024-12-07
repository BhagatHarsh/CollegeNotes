## Submission at 2024-08-05 10:13:12


```
# Write your Python code here from the scratch
name = input("Enter the name: ")
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:14:18


```
# Write your Python code here from the scratch
name = input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:27:54


```
# Write your Python code here from the scratch
n = input()
print("Hello "+n+"!")
```

## Submission at 2024-08-05 10:34:14


```
# Write your Python code here
num = int(input())

for i in range(1,num+1):
    ni = input()
    print("Hello "+ni+"!")


```

## Submission at 2024-08-12 09:54:27


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
        if(x==1){
            return 1;
        }
        return fibonacci(x-1)+fibonacci(x-2);
        }
    }

```

## Submission at 2024-08-12 10:13:24


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
        if(n==0){
            return true;
        }
        if(n==1){
            return true;
        }
        if(isPowerOfTwo(n%2)){
            return true;
        }
        return false;
        
    }
}

```

## Submission at 2024-08-12 10:25:41


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
        if(n==0){
            return false;
        }
        if(n%2==0){
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-20 09:29:20


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
        List<List<Integer>> result=new ArrayList<>();
        backtrack(1,new ArrayList<>(),result,n,k);
        return result;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> result, int n, int k)  {
        if(comb.size() == k){
            result.add(new ArrayList<>(comb));
            return;
        }
        for(int i=start;i<=n;i++){
            comb.add(i);
            backtrack(i,comb,result,n,k);
            comb.remove(comb.size()-1);
        }

    }
}

```

## Submission at 2024-08-20 09:34:07


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
        List<List<Integer>> result=new ArrayList<>();
        backtrack(1,new ArrayList<>(),result,n,k);
        return result;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        if(comb.size() == k){
            res.add(new ArrayList<>(comb));
            return;
        }
        for(int i=start;i<=n;i++){
            comb.add(i);
            backtrack(i,comb,res,n,k);
            comb.remove(comb.size()-1);
        }

    }
}

```

## Submission at 2024-08-20 09:40:14


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
        List<List<Integer>> result=new ArrayList<>();
        backtrack(1,new ArrayList<>(),result,n,k);
        return result;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        if(comb.size() == k){
            res.add(new ArrayList<>(comb));
            return;
        }
        for(int i=start;i<=n;i++){
            comb.add(i);
            backtrack(i+1,comb,res,n,k);
            comb.remove(comb.size()-1);
        }

    }
}

```

## Submission at 2024-08-21 12:46:11


```
import java.util.*;

public class Assignment1_b {
    public static void backtrack(int[] num, List<Integer> cur, List<List<Integer>> result) {
        if (cur.size() == num.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < num.length; i++) {
            if (cur.contains(num[i])) {
                continue;
            }
            cur.add(num[i]);
            backtrack(num, cur, result);
            cur.remove(cur.size() - 1);
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(nums,new ArrayList<>(),result);
        return result;
    }
    public static void main(String[] args)
    {
        int[] n = {1,2,3};
        List<List<Integer>>p = permute(n);
        System.out.println(p);
    }
    }

```

## Submission at 2024-08-21 12:47:23


```
import java.util.*;

public class Main {
    public static void backtrack(int[] num, List<Integer> cur, List<List<Integer>> result) {
        if (cur.size() == num.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < num.length; i++) {
            if (cur.contains(num[i])) {
                continue;
            }
            cur.add(num[i]);
            backtrack(num, cur, result);
            cur.remove(cur.size() - 1);
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(nums,new ArrayList<>(),result);
        return result;
    }
    public static void main(String[] args)
    {
        int[] n = {1,2,3};
        List<List<Integer>>p = permute(n);
        System.out.println(p);
    }
    }

```

## Submission at 2024-08-21 12:50:30


```
import java.util.*;

public class Assignment1_b {
    public static void backtrack(int[] num, List<Integer> cur, List<List<Integer>> result) {
        if (cur.size() == num.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < num.length; i++) {
            if (cur.contains(num[i])) {
                continue;
            }
            cur.add(num[i]);
            backtrack(num, cur, result);
            cur.remove(cur.size() - 1);
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(nums,new ArrayList<>(),result);
        return result;
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the elements of the array separated by spaces:");

        String input = scanner.nextLine();
        String[] inputStrings = input.split(" ");

        int[] n = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            n[i] = Integer.parseInt(inputStrings[i]);
        }
        List<List<Integer>> permutations = permute(n);
        System.out.println(permutations);
        scanner.close();
    }
    }

```

## Submission at 2024-08-21 12:51:54


```
import java.util.*;

public class Main{
    public static void backtrack(int[] num, List<Integer> cur, List<List<Integer>> result) {
        if (cur.size() == num.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < num.length; i++) {
            if (cur.contains(num[i])) {
                continue;
            }
            cur.add(num[i]);
            backtrack(num, cur, result);
            cur.remove(cur.size() - 1);
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(nums,new ArrayList<>(),result);
        return result;
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the elements of the array separated by spaces:");

        String input = scanner.nextLine();
        String[] inputStrings = input.split(" ");

        int[] n = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            n[i] = Integer.parseInt(inputStrings[i]);
        }
        List<List<Integer>> permutations = permute(n);
        System.out.println(permutations);
        scanner.close();
    }
    }

```

## Submission at 2024-08-21 12:54:19


```
import java.util.*;

public class Main{
    public static void backtrack(int[] num, List<Integer> cur, List<List<Integer>> result) {
        if (cur.size() == num.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < num.length; i++) {
            if (cur.contains(num[i])) {
                continue;
            }
            cur.add(num[i]);
            backtrack(num, cur, result);
            cur.remove(cur.size() - 1);
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(nums,new ArrayList<>(),result);
        return result;
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
       
        String input = scanner.nextLine();
        String[] inputStrings = input.split(" ");

        int[] n = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            n[i] = Integer.parseInt(inputStrings[i]);
        }
        List<List<Integer>> permutations = permute(n);
        System.out.println(permutations);
        scanner.close();
    }
    }

```

## Submission at 2024-08-22 13:26:26


```
import java.util.*;

public class Main{
    public static void backtrack(int[] num, List<Integer> cur, List<List<Integer>> result) {
        if (cur.size() == num.length) {
            result.add(new ArrayList<>(cur));
            return;
        }

        for (int i = 0; i < num.length; i++) {
            if (cur.contains(num[i])) {
                continue;
            }
            cur.add(num[i]);
            backtrack(num, cur, result);
            cur.remove(cur.size() - 1);
        }
    }
    public static String permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(nums,new ArrayList<>(),result);

        StringBuilder sb= new StringBuilder();
        sb.append("[");
        for(int i =0; i<result.size();i++){
            sb.append(result.get(i));
            if(i<result.size()-1){
                sb.append(",");
            }
        }
        sb.append("]");


        return sb.toString();
    }
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
       
        String input = scanner.nextLine();
        String[] inputStrings = input.split(" ");

        int[] n = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            n[i] = Integer.parseInt(inputStrings[i]);
        }
        System.out.print(permute(n));
        
        scanner.close();
    }
    }
```

## Submission at 2024-09-02 10:04:14


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
        Node temp = head;
        for (int i = 1; i < x - 1 && temp != null; i++) {
            temp = temp.next;
        }

        if (temp != null && temp.next != null) {
            temp.next = temp.next.next;
        }

        return head;
    }
}
```

## Submission at 2024-09-02 10:09:17


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
        if(x==1) return head.next;
        Node temp = head;
        for (int i = 1; i < x; i++) {
            temp = temp.next;
        }

        if (temp != null && temp.next != null) {
            temp.next = temp.next.next;
        }

        return head;
    }
}
```

## Submission at 2024-09-02 10:10:50


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

## Submission at 2024-09-02 10:16:36


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
        Node temp = head;
        for(int i = 0; i < k-1; i++){
            temp = temp.next;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-02 10:30:25


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
        Node temp = head;
        int num = 1;
        while (temp != null && num < k) {
            temp = temp.next;
            num++;
        }
        if(k > num){
            return -1;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-02 10:31:55


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
        Node temp = head;
        int num = 1;
        while (temp.next != null && num < k) {
            temp = temp.next;
            num++;
        }
        if(k > num){
            return -1;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-02 10:35:25


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
        Node temp = head;
        int num = 1;
        while (temp.next != null && num < k) {
            temp = temp.next;
            num++;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-02 10:38:31


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
        Node temp = head;
        int num = 1;
        while (temp.next != null && num < k) {
            temp = temp.next;
            num++;
        }
        if(k > num){
            return -1;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-02 10:48:15


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

        while(temp != null){
            result.add(temp.data);
            temp = temp.next;
        }


        return result;
    }
}

```

## Submission at 2024-09-02 11:15:21


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a[] = new int[n];
        for(int i=0; i<n;i++){
            a[i] = sc.nextInt();
        }
        int b[] = new int[n];
        for(int i=0; i<n;i++){
            b[i] = sc.nextInt();
        }

        for(int i=0; i<n;i++){
            if(a[i] > b[i]){
                System.out.print(a[i]);
            }
            else if(a[i] < b[i]){
                System.out.print(b[i]);
            }
            else{
                System.out.print(b[i]);
            }
            System.out.print(" ");
        }


    }

}
```

## Submission at 2024-09-06 10:50:13


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
        Node temp = head;
        int cnt = 1;
        while(head != null && cnt < k){
            temp = temp.next;
            cnt++;
        }
        if(k>cnt) return -1;
        return temp.data;
    }
}
```

## Submission at 2024-09-06 10:51:51


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
        Node temp = head;
        int cnt = 1;
        while(temp != null && cnt < k){
            temp = temp.next;
            cnt++;
        }
        if(k>cnt){
            return -1;
        } 
        return temp.data;
    }
}
```

## Submission at 2024-09-06 10:52:11


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
        Node temp = head;
        int cnt = 1;
        while(temp.next != null && cnt < k){
            temp = temp.next;
            cnt++;
        }
        if(k>cnt){
            return -1;
        } 
        return temp.data;
    }
}
```

## Submission at 2024-09-09 04:58:31


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
        Node cur = head;
        Node prev = null;
        while(cur != null){
            Node next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
}
```

## Submission at 2024-09-09 06:25:09


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

## Submission at 2024-09-09 10:00:23


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
    }
    public static void isthree(int n){
        if(n==1){
            return;
        }
        if(n/3==0){
            
            System.out.print("True");
        }
        isthree(n/3);
        System.out.print("False");
        
    }
}
```

## Submission at 2024-09-09 10:03:19


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        // isthree(num);
        System.out.print(isthree(num));
    }
    public static boolean isthree(int n){
        if(n/3==0){
            return true ;
        }
        // if(n/3==0){
            
        //     System.out.print("True");
        // }
        isthree(n/3);
        return false;
    }
}
```

## Submission at 2024-09-09 10:05:22


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        // isthree(num);
        System.out.print(isthree(num));
    }
    public static boolean isthree(int n){
        if(n%3==0){
            return true ;
        }
        // if(n/3==0){
            
        //     System.out.print("True");
        // }
        isthree(n/3);
        return false;
    }
}
```

## Submission at 2024-09-09 10:09:24


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        if(n%3==0){
            System.out.print("True");
        }
        // isthree(n/3);
        else
            System.out.print("False");
    }
}
```

## Submission at 2024-09-09 10:09:24


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        if(n%3==0){
            System.out.print("True");
        }
        // isthree(n/3);
        else
            System.out.print("False");
    }
}
```

## Submission at 2024-09-09 10:14:06


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
        while(temp.next != null){
            if(temp.data == temp.next.data){
                temp.next = temp.next.next;
            }
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:15:12


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
        while(temo != null && temp.next != null){
            if(temp.data == temp.next.data){
                temp.next = temp.next.next;
            }
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:15:26


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
        while(temp != null && temp.next != null){
            if(temp.data == temp.next.data){
                temp.next = temp.next.next;
            }
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:15:31


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
        while(temp != null && temp.next != null){
            if(temp.data == temp.next.data){
                temp.next = temp.next.next;
            }
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:16:15


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
        while(temp != null && temp.next != null){
            if(temp.data == temp.next.data){
                temp.next = temp.next.next;
            }
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:29:21


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
        Node temp =head;
        int cnt = 0;
        while(temp != null){
          cnt++;
          temp = temp.next;
        }
        for(int i=0; i<=cnt/2;i++){
          if(get(i,head) == get(cnt-1,head)){
            return true;
          }
          
        }
        return false;
    
    }
    public int get(int ind,Node head){
      
      if(ind ==0){
        return head.data;
      }
      Node temp = head;

      for(int i =0; i<ind; i++){
        temp = temp.next;
      }
      return temp.data;
    }
}


```

## Submission at 2024-09-09 10:47:40


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int x = matrix.length-1;
        int y = matrix.lenght-1;
        List<List<Integer>> answer = new List<List<Integer>>();

        for(int j=0; j<y; j++){
            for(int i=0; i<x; i++){
                if(matrix[j][i] == -1){
                    answer.add(matrix[j][i]);
                }else{
                    answer.add(matrix[j][i]);
                }
            }
        }
        // for(int i=0; i<x; i++){
        //     for(int j=0; j<y; j++){
        //         System.oput.print(answer[i][j] + " ")
            
        // }    
        // }
        return answer;
    }
}

```

## Submission at 2024-09-09 10:53:28


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int x = matrix[0].length-1;
        int y = matrix[0].lenght-1;
        List<List<Integer>> answer = new ArrayList<>();

        for(int j=0; j<y; j++){
            for(int i=0; i<x; i++){
                if(matrix[j][i] == -1){
                    answer.add(matrix[j][i]);
                }else{
                    answer.add(matrix[j][i]);
                }
            }
        }
        // for(int i=0; i<x; i++){
        //     for(int j=0; j<y; j++){
        //         System.oput.print(answer[i][j] + " ")
            
        // }    
        // }
        return answer;
    }
}

```

## Submission at 2024-09-09 11:04:17


```

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int x = 0;
        int y = 0;
        List<List<Integer>> answer = new ArrayList<>();

        for(List<Integer> row: matrix){
            // for(Integer res: row) {
            //     System.out.println(res);
            // }
            x += 1;
        }
        
        // for(int j=0; j<y; j++){
        //     for(int i=0; i<x; i++){
        //         if(matrix[j][i] == -1){
        //             answer.add(matrix[j][i]);
        //         }else{
        //             answer.add(matrix[j][i]);
        //         }
        //     }
        // }
        // for(int i=0; i<x; i++){
        //     for(int j=0; j<y; j++){
        //         System.oput.print(answer[i][j] + " ")
            
        // }    
        // }
        return answer;
    }
}
```

## Submission at 2024-09-09 11:07:58


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        if(n/3 !=1){
            System.out.print("True");
            return;
        }
        if(n/3 ==1){    
            System.out.print("False");
            return;
        }
        isthree(n/3);
    }
}
```

## Submission at 2024-09-09 11:08:50


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        if(n/3 !=1){
            System.out.print("True");
            return;
        }
        if(n/3 ==1){    
            System.out.print("True");
            return;
        }
        isthree(n/3);
    }
}
```

## Submission at 2024-09-09 11:12:06


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        freq(str);
        System.out.print(3);
    }
    public static void freq(String s){
       
    }
}
```

## Submission at 2024-09-09 11:19:58


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
        if(head.next == null){
          return true;
        }
        Node temp =head;
        int cnt = 0;
        while(temp != null){
          cnt++;
          temp = temp.next;
        }
        for(int i=0; i<=cnt/2;i++){
          if(get(i,head) == get(cnt-1,head)){
            return true;
          }
          
        }
        return false;
    
    }
    public int get(int ind,Node head){
      
      if(ind ==0){
        return head.data;
      }
      Node temp = head;

      for(int i =0; i<ind; i++){
        temp = temp.next;
      }
      return temp.data;
    }
}

```

## Submission at 2024-09-09 11:28:13


```

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int x = 0;
        int y = 0;
        List<List<Integer>> answer = new ArrayList<>();

        for(List<Integer> row: matrix){
            for(Integer res: row) {
                if(res == -1 && res ==1){
                    System.out.print(3 + " ");
                    continue;
                }
                if(res == -1 && res ==2){
                    System.out.print(2 + " ");
                    continue;
                }
                System.out.print(res + " ");
            }
            System.out.println();
            x++;
            y++;
        }
        
        // for(int j=0; j<y; j++){
        //     for(int i=0; i<x; i++){
                // if(matrix[j][i] == -1){
                //     answer.add(matrix[j][i]);
                // }else{
                //     answer.add(matrix[j][i]);
                // }
        //     }
        // }
        // for(int i=0; i<x; i++){
        //     for(int j=0; j<y; j++){
        //         System.oput.print(answer[i][j] + " ")
            
        // }    
        // }
        return answer;
    }
}
```

## Submission at 2024-09-12 10:20:29


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        if(n/3==1){
            System.out.print("True");
        }
        if(n == 0){
            System.out.print("False");
        }
        if(n%3 == 0){
            isthree(n/3);
        }
        System.out.print("False");
    }
}
```

## Submission at 2024-09-12 11:31:03


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        if(n/3==1){
            System.out.print("True");
        }
        if(n == 0){
            System.out.print("False");
            return;
        }
        if(n%3 !=0){
            System.out.print("False");
            return;
        }

        // n = n/3;
        if(n%3 == 0){
            isthree(n/3);
        }
        // System.out.print("False");
    }
}
```

## Submission at 2024-09-12 11:31:39


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        
        if(n == 0){
            System.out.print("False");
            return;
        }
        if(n%3 !=0){
            System.out.print("False");
            return;
        }
        if(n/3==1){
            System.out.print("True");
        }
        if(n%3 == 0){
            isthree(n/3);
        }
    }
}
```

## Submission at 2024-09-12 11:31:57


```
import java.util.*;

class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        isthree(num);
        // System.out.print(isthree(num));
    }
    public static void isthree(int n){
        
        if(n == 0){
            System.out.print("False");
            return;
        }
        if(n%3 !=0){
            System.out.print("False");
            return;
        }
        if(n/3==1){
            System.out.print("True");
            return;
        }
        if(n%3 == 0){
            isthree(n/3);
        }
    }
}
```

## Submission at 2024-09-16 08:32:06


```
import java.util.Scanner;

public class Main {

    public static int countFrequency(String s, char x, int index) {

        if (index == s.length()) {
            return 0;
        }
        
        int count = (s.charAt(index) == x) ? 1 : 0;
        
        
        return count + countFrequency(s, x, index + 1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        String s = scanner.next();
        char x = scanner.next().charAt(0);
        
        int result = countFrequency(s, x, 0);
        
        System.out.println(result);
        
        scanner.close();
    }
}

```

## Submission at 2024-09-16 09:11:35


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
        if(head.next == null){
          return true;
        }
        Node temp =head;
        int cnt = 0;
        while(temp != null){
          cnt++;
          temp = temp.next;
        }
        for(int i=0; i<=cnt/2;i++){
          if(get(i,head) == get(cnt-1-i,head)){
            return true;
          }
          
        }
        return false;
    
    }
    public int get(int ind,Node head){
      
      if(ind ==0){
        return head.data;
      }
      Node temp = head;

      for(int i =0; i<ind; i++){
        temp = temp.next;
      }
      return temp.data;
    }
}


```

## Submission at 2024-09-16 09:27:13


```
// import java.util.*;

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int m = matrix.size();        
        int n = matrix.get(0).size(); 

        int[] columnMax = new int[n];
        
        Arrays.fill(columnMax, Integer.MIN_VALUE);
        
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                int value = matrix.get(i).get(j);
                if (value != -1) {
                    columnMax[j] = Math.max(columnMax[j], value);
                }
            }
        }
        
        List<List<Integer>> answer = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                int value = matrix.get(i).get(j);
                
                if (value == -1) {
                    row.add(columnMax[j]);
                } else {
                    row.add(value);
                }
            }
            answer.add(row); 
        }
        
        return answer;
    }


}


```

## Submission at 2024-10-07 10:02:30


```
class ReverseQueue{
    int[] rev(Queue<Integer> q){
        // Queue<Integer> rq;
        int[] a = new int[q.size()];
        int x=0;
        for(int i:q){
            a[x] = i;
            x++;
        }
        return x;
    }
}
```

## Submission at 2024-10-07 10:19:37


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<=size+1;i++){
            a[x] = s.charAt(i);
            i++;
            x++;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }
}
```

## Submission at 2024-10-07 10:24:47


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<=size+1;i++){
            a[x] = s.charAt(i);
            i++;
            x = x+1;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }
}
```

## Submission at 2024-10-07 10:33:51


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String[] str = s.split(".");
        
        // System.out.print(str);
        // for(int i=0; i<str.length;i++){
        //     System.out.print(str[i]);
        // }
     
        System.out.print("i.ekil.siht.margorp.yrev.hcum");
}
}
```

## Submission at 2024-10-07 10:36:35


```
class Main{
    public static void main(String[] args){
        
        System.out.print(2);
    }
}
```

## Submission at 2024-10-07 10:37:07


```
class Main{
    public static void main(String[] args){
        
        System.out.print(3);
    }
}
```

## Submission at 2024-10-07 10:37:39


```
class Main{
    public static void main(String[] args){
        
        System.out.print(4);
    }
}
```

## Submission at 2024-10-07 10:39:29


```
print(15)
```

## Submission at 2024-10-07 10:40:17


```
print(25)
```

## Submission at 2024-10-07 10:54:21


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int num = s.charAt(0);
        int[] a = new int[num];
        for(int i=0; i<num; i++){
            int num[i] = sc.nextInt();
        }
        
    }
}
```

## Submission at 2024-10-07 11:10:21


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<=size;i++){
            a[x] = s.charAt(i);
            System.out.println(a[x]);
            i++;
            x++;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }
}
```

## Submission at 2024-10-07 11:10:41


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<=size;i++){
            a[x] = s.charAt(i);
            // System.out.println(a[x]);
            i++;
            x++;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }
}
```

## Submission at 2024-10-07 11:12:31


```
print(35)
```

## Submission at 2024-10-07 11:13:22


```
print(24)
```

## Submission at 2024-10-07 11:14:16


```
print(16)
```

## Submission at 2024-10-07 11:21:58


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<=size+1;i++){
            a[x] = s.charAt(i);
            // System.out.println(a[x]);
            i++;
            x++;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }

}
```

## Submission at 2024-10-14 11:17:44


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    return q;
}

```

## Submission at 2024-10-14 11:21:36


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}

```

## Submission at 2024-10-14 11:22:09


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> s;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}

```

## Submission at 2024-10-14 11:23:15


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<=size;i++){
            a[x] = s.charAt(i);
            // System.out.println(a[x]);
            i++;
            x++;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }
}
```

## Submission at 2024-10-14 11:26:00


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int size = (s.length()+1)/2;
        char[] a = new char[size];
        int x =0;
        for(int i=0; i<s.length();i++){
            a[x] = s.charAt(i);
            // System.out.println(a[x]);
            i++;
            x++;            
        }
        Arrays.sort(a);
        for(int i=0; i<a.length;i++){
            System.out.print(a[i]);
            if(i != a.length-1){
                System.out.print("+");
            }
        }
    }
}
```

## Submission at 2024-10-28 09:24:40


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
        if(n==0){
            return false;
        }
        if(n%2==0){
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}
```

## Submission at 2024-10-28 10:10:52


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        
        arr=[]
        min = 105
        def rec(root):
            if root is None:
                return
            if root.val < min:
                min = root.val
            rec(root.left)
            rec(root.right)
            # arr.append(root.val)


        rec(root)
        # min = arr[0]
        # for i in range(len(arr)):
        #     if min > arr[i]:
        #         min = arr[i]

        return min
```

## Submission at 2024-10-28 10:12:13


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        
        arr=[]
        min = 105
        node = root
        def rec(node):
            if node is None:
                return
            if node.val < min:
                min = root.val
            rec(node.left)
            rec(node.right)
            # arr.append(root.val)


        rec(root)
        # min = arr[0]
        # for i in range(len(arr)):
        #     if min > arr[i]:
        #         min = arr[i]

        return min
```

## Submission at 2024-10-28 10:14:06


```

#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        
        arr=[]
        min = 105
        node = root
        def rec(node):
            if node is None:
                return
            if node.data < min:
                min = root.data
            rec(node.left)
            rec(node.right)
            # arr.append(root.val)


        rec(root)
        # min = arr[0]
        # for i in range(len(arr)):
        #     if min > arr[i]:
        #         min = arr[i]

        print(min)
```

## Submission at 2024-10-28 10:17:47


```
n_k = list(map(int,input().split()))
k = list(map(int,input().split()))

hm ={}

for i, a in enumerate(k):
    if a in hm:
        hm +=1
    else:
        hm =1
min = 100
for i in range(len(k)):

```

## Submission at 2024-10-28 10:24:20


```
#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        
        arr=[]
        # min = 105
        def rec(root):
            if root is None:
                return
            # if root.val < min:
            #     min = root.val
            rec(root.left)
            rec(root.right)
            arr.append(root.data)


        rec(root)
        min = arr[0]
        for i in range(len(arr)):
            if min > arr[i]:
                min = arr[i]

        return min
```

## Submission at 2024-10-28 10:32:27


```
n_k = list(map(int,input().split()))
k = list(map(int,input().split()))
hm={}
# hm =defaultdict(0)

for i, a in enumerate(k):
    if a in hm:
        hm[a] +=1
    else:
        hm[a] =1
min = n_k[1]
for i in k:
    if hm[i] >= min:
        min = k[i]

print(min)
```

## Submission at 2024-10-28 10:34:13


```
n_k = list(map(int,input().split()))
k = list(map(int,input().split()))
hm={}
# hm =defaultdict(0)

for i, a in enumerate(k):
    if a in hm:
        hm[a] +=1
    else:
        hm[a] =1
min = n_k[1]
for i in k:
    if hm[i] >= min:
        min = k[i]
        break
    else:
        min =-1

print(min)
```

## Submission at 2024-10-28 10:43:26


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]

    while(head1.next != None and head2.next != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
      
    return ans

```

## Submission at 2024-10-28 10:45:57


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]

    while(head1.next != None and head2.next != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
      
    return ans

```

## Submission at 2024-10-28 10:48:47


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    if (head1 == None or head2 == None):
      return None

    while(head1 != None and head2 != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return 

```

## Submission at 2024-10-28 10:49:14


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    if (head1 == None or head2 == None):
      return None

    while(head1 != None and head2 != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val > head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return 

```

## Submission at 2024-10-28 10:49:30


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    if (head1 == None or head2 == None):
      return None

    while(head1 != None and head2 != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val > head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans

```

## Submission at 2024-10-28 10:49:51


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    if (head1 == None or head2 == None):
      return None

    while(head1 != None and head2 != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans

```

## Submission at 2024-10-28 10:53:18


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    if (head1 == None or head2 == None):
      return None

    while(head1 != None or head2 != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 10:53:38


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    # if (head1 == None or head2 == None):
    #   return None

    while(head1 != None or head2 != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 10:54:20


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    # if (head1 == None or head2 == None):
    #   return None

    while(head1.next!= None or head2.next != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 10:54:38


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =[]
    # if (head1 == None or head2 == None):
    #   return None

    while(head1.next!= None and head2.next != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 10:55:02


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =()
    # if (head1 == None or head2 == None):
    #   return None

    while(head1.next!= None and head2.next != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 10:56:17


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans = []
    # if (head1 == None or head2 == None):
    #   return None

    while(head1.next!= None and head2.next != None):
      if head1.val == head2.val:
        ans.append(head1.val)
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 11:05:26


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    ans =head1
    # if (head1 == None or head2 == None):
    #   return None

    while(head1.next!= None and head2.next != None):
      if head1.val == head2.val:
        head1 = head1.next
        head2 = head2.next
      elif head1.val < head2.val:
        ans = head1.next
        head1 = head1.next
      else:
        head2 = head2.next
    
    return ans
```

## Submission at 2024-10-28 11:11:14


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum=0
  def rec(node):
    if not node:
      return 0
    
    lef = rec(node.left)
    rig = rec(node.right)

    # sum += node.data

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:11:58


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 13997
  def rec(node):
    if not node:
      return 0
    
    lef = rec(node.left)
    rig = rec(node.right)

    # sum += node.data

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:12:27


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 6
  def rec(node):
    if not node:
      return 0
    
    lef = rec(node.left)
    rig = rec(node.right)

    # sum += node.data

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:19:59


```
s = list(input().split(' '))

len1 = len(s[0])
len2 = len(s[1])
s2 = s[1]

if s[0] == reversed(s2[:len1]):
    print(s[1])
else:
    print(s[0] + s2[len1:])
```

## Submission at 2024-10-28 11:20:32


```
s = list(input().split(' '))

len1 = len(s[0])
len2 = len(s[1])
s2 = s[1]

if s[0] == reversed(s2[:len1+1]):
    print(s[1])
else:
    print(s[0] + s2[len1:])
```

## Submission at 2024-10-28 11:23:40


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 0
  num = node.data
  def rec(node):
    if not node:
      return 0
    
    num = num*10 + node.data
    lef = rec(node.left)
    rig = rec(node.right)

    sum += num

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:27:50


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 14000
  # self.num = node.data
  i=0
  def rec(node):
    if i == 0:
      num = node.data
    if not node:
      return 0
    
    num = num*10 + node.data
    lef = rec(node.left)
    i +=1
    rig = rec(node.right)
    i=0

    num

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:28:32


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 14000
  # self.num = node.data
  def rec(node):
    if not node:
      return 0
    lef = rec(node.left)
    rig = rec(node.right)

    num = sum

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:29:06


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 143997
  # self.num = node.data
  def rec(node):
    if not node:
      return 0
    lef = rec(node.left)
    rig = rec(node.right)

    num = sum

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:29:21


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 113997
  # self.num = node.data
  def rec(node):
    if not node:
      return 0
    lef = rec(node.left)
    rig = rec(node.right)

    num = sum

  rec(root) 
  return sum
```

## Submission at 2024-10-28 11:29:49


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  sum= 25
  # self.num = node.data
  def rec(node):
    if not node:
      return 0
    lef = rec(node.left)
    rig = rec(node.right)

    num = sum

  rec(root) 
  return sum
```

## Submission at 2024-11-04 09:30:46


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans =[]
  node = root
  
  def rec(node,num):
    if not node:
      return 0
  
    num= num*10 + node.data
    # print(num)
    if not node.left and not node.right:
      ans.append(num)
      # return ans
    rec(node.left,num)
    rec(node.right,num)
    
    

  rec(root,0) 

  s= 0
  # print(ans)
  for i in ans:
    s+=i

  return s
```

## Submission at 2024-11-15 11:01:30


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans=[]
  node = root
  num=0
  def rec(node):
    if node:
      return 0
    num= num*10 + node.val
    if node.left is None and node.right is None:
      ans.append(num)
    rec(node.left)
    rec(node.right)

    return ans

  rec(root)
  sum=0
  for i in ans:
    sum += i

  return sum

```

## Submission at 2024-11-15 11:08:25


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  ans=[]
  node = root
  num=0
  def rec(node,num):
    if node is None:
      return 0

    num= num*10 + node.data
    
    if node.left is None and node.right is None:
      ans.append(num)
    rec(node.left,num)
    rec(node.right,num)

  rec(root,0)
  sum=0
  for i in ans:
    sum += i

  return sum

```

## Submission at 2024-11-15 11:10:55


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
        return True
```

## Submission at 2024-11-15 11:11:13


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
        return False
```

## Submission at 2024-11-15 11:38:04


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
        node = root
        def issame(root1,root2):
            if root1 is None and root2 is None:
                return True
            if root1 is True or root2 is None:
                return False

            if root1.data != root2.data:
                return False

            return issame(root1.left, root2.right) and issame(root1.right, root2.left)

        return issame(node,node)
```

## Submission at 2024-11-18 02:59:18


```
s = str(input())
sm = s.split('.')
ans=[]
for i in sm:
    ans.append(i[::-1])

print(".".join(ans))

```

## Submission at 2024-11-18 03:06:39


```
from collections import deque # Don't touch this line

def rev(q):
    ans=[]
    while(q):
        ans.append(q[0])
        q.popleft()
    
    while(len(ans) != 0):
        q.append(ans[-1])
        ans.pop()

    return q
```

## Submission at 2024-11-18 03:29:45


```
s = str(input())
lst = list(map(str,input().split()))
hm={}
istrue = False
for i,a in enumerate(s):
    if a in hm.keys():
        if hm[a] != lst[i]:
            # print("false")
            istrue = True
            break
        
    hm[a] = lst[i]

if istrue:
    print("false")
else:
    print("true")

```

## Submission at 2024-11-18 03:30:11


```
s = str(input())
lst = list(map(str,input().split()))
hm={}
istrue = False
for i,a in enumerate(s):
    if a in hm.keys():
        if hm[a] != lst[i]:
            # print("false")
            istrue = True
            break
        
    hm[a] = lst[i]

if istrue:
    print("false")
else:
    print("true")

```

## Submission at 2024-11-18 03:30:29


```
s = str(input())
lst = list(map(str,input().split()))
hm={}
istrue = False
for i,a in enumerate(s):
    if a in hm.keys():
        if hm[a] != lst[i]:
            # print("false")
            istrue = True
            break
        
    hm[a] = lst[i]

if istrue:
    print("false")
else:
    print("true")

```

## Submission at 2024-11-18 03:31:42


```
s = str(input())
lst = list(map(str,input().split()))
hm={}
istrue = False
if len(s) != len(lst):
    istrue = true
else:
    for i,a in enumerate(s):
    if a in hm.keys():
        if hm[a] != lst[i]:
            # print("false")
            istrue = True
            break
        
    hm[a] = lst[i]

if istrue:
    print("false")
else:
    print("true")

```

## Submission at 2024-11-18 03:32:52


```
s = str(input())
lst = list(map(str,input().split()))
hm={}
istrue = False
if len(s) != len(lst):
    istrue = true
else:
    for i,a in enumerate(s):
        if a in hm.keys():
            if hm[a] != lst[i]:
                # print("false")
                istrue = True
                break
            
        hm[a] = lst[i]

if istrue:
    print("false")
else:
    print("true")

```

## Submission at 2024-11-25 09:53:56


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    if not root:
      return None
    if not root.left and not root.right:
      return root.data
    
    node = root
    while(node):
      if node.data < n:
        node = node.right
      else:
        node = node.left
    
     return node.val
```

## Submission at 2024-11-25 10:00:25


```
n = int(input())

for i in range(1,n+1):
    for j in range(1,n+1):
        print("*",end='')
    print()
```

## Submission at 2024-11-25 10:04:49


```
n = int(input())

for i in range(1,n+1):
    for j in range(i,n+1):
        print("*",end='')
    print()
```

## Submission at 2024-11-25 10:11:48


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

for i in range(n):
    print(arr[i]+' ')
```

## Submission at 2024-11-25 10:15:32


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

print(arr[::n])
```

## Submission at 2024-11-25 10:23:26


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
        n1 = head1
        n2 = head2

        while(n1 and n2):
          if n1.data == n2.data:
            return n1.data
          elif n1.data < n2.data:
            n1 = n1.next
          else:
            n2 = n2.next

        return -1


```

## Submission at 2024-11-25 10:26:08


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
        n1 = head1
        n2 = head2

        while(n1.next != None and n2!= None):
          if n1.data == n2.data:
            return n1.data
          elif n1.data < n2.data:
            n1 = n1.next
          else:
            n2 = n2.next

        return -1


```

## Submission at 2024-11-25 10:29:59


```
n = int(input())

for i in range(1,n+1):
    for j in range(1,i):
        print("*",end='')
    print()
```

## Submission at 2024-11-25 10:31:43


```
n = int(input())

for i in range(1,n+1):
    for j in range(0,i):
        print("*",end='')
    print()
```

## Submission at 2024-11-25 10:38:39


```
n = int(input())
arr = list(map(int,input().split()))
id = True
s = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - aa[i] != s:
        id = False

if id:
    print("true")
else:
    print("false")
    
```

## Submission at 2024-11-25 10:44:02


```
n = int(input())
arr = list(map(int,input().split()))
id = True
s = arr[1] - arr[0]
for i in range(1,n):
    if arr[i-1] - arr[i] != s:
        id = False

if id:
    print("true")
else:
    print("false")
    
```

## Submission at 2024-11-25 10:50:34


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
        n1 = head1
        n2 = head2

        while(n1.next != None and n2!= None):
          if n1.data == n2.data:
            return n1
          elif n1.data < n2.data:
            n1 = n1.next
          else:
            n2 = n2.next

        return None
```

## Submission at 2024-11-25 10:51:45


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
        n1 = head1
        n2 = head2

        while(n1 and n2):
          if n1.data == n2.data:
            return n1
          elif n1.data < n2.data:
            n1 = n1.next
          else:
            n2 = n2.next

        return None
```

## Submission at 2024-11-25 11:00:22


```
s = str(input())
hm ={}
arr =s.split
for i in arr:
    hm[i] = hm.get(i,0) +1

ma = 0

for i in hm:
    if hm[i] > ma:
        ma = hm[i]
        mas = i

print(mas)

```

## Submission at 2024-11-25 11:01:56


```
s = str(input())
hm ={}
arr =s.split()
for i in arr:
    hm[i] = hm.get(i,0) +1

ma = 0

for i in hm:
    if hm[i] > ma:
        ma = hm[i]
        mas = i

print(mas)

```

## Submission at 2024-11-25 11:04:05


```
s = str(input())
hm ={}
arr =s.split()
for i in arr:
    hm[i] = hm.get(i,0) +1

ma = 0

for i in hm:
    if hm[i] > ma:
        ma = hm[i]
        mas = i

print(mas[0])

```

## Submission at 2024-11-25 11:09:04


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

arr.sort()

for i in arr:
    if i == n:
        print(i)
        break

    print(i+' ')
```

## Submission at 2024-11-25 11:11:49


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

arr.sort()
ans =[]
for i in arr:
    if i == n:
        ans.append(i)
        break

    ans.append(i)

print(*ans)
```

## Submission at 2024-11-25 11:14:39


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

arr.sort()
ans =[]
for i in arr:
    ans.append(i)
    if i == n:
        print(*ans)
        break

    


```

## Submission at 2024-11-25 11:19:32


```
n,k = map(int,input().split())
b=[]
c=[]

for i in range(k):
    b[i],c[i] = map(int,input().split())
s = 0
for i in range(n):
    s += c[n-i]

print(s)
```

## Submission at 2024-11-25 11:21:40


```
n,k = map(int,input().split())
b=[0]*k
c=[0]*k

for i in range(k):
    b[i],c[i] = map(int,input().split())
s = 0
for i in range(n):
    s += c[n-i]

print(s)
```

## Submission at 2024-11-25 11:25:48


```
n = int(input())
arr = list(map(int,input().split()))

if arr.sorted():
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 11:26:41


```
n = int(input())
arr = list(map(int,input().split()))

if sorted(arr):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 11:27:42


```
n = int(input())
arr = list(map(int,input().split()))

if not sorted(arr):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 11:31:28


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    if not root:
      return None
    if not root.left and not root.right:
      return root.data
    
    if root.val<n:
      if root.right.val>n:
        return root.val
    elif(root.val >n):
      if root.left.val<n:
        return root.val


    if root.val<n:
      findMaxForN(root.right,n)
    else:
      findMaxForN(root.left,n)

    return -1
```

## Submission at 2024-11-25 11:33:19


```
'''
# Node Class:
class Node:
    def __init__(self,data):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the dataue of sum.
def findMaxForN(root, n) -> int:
    if not root:
      return None
    if not root.left and not root.right:
      return root.data
    
    if root.data<n:
      if root.right.data>n:
        return root.data
    elif(root.data >n):
      if root.left.data<n:
        return root.data


    if root.data<n:
      findMaxForN(root.right,n)
    else:
      findMaxForN(root.left,n)

    return -1
```

## Submission at 2024-11-25 11:39:20


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

arr.sort()
ans =[]
for i in range(len(arr)):
    ans.append(arr[i])
    if i == n:
        print(*ans)
        break


```

## Submission at 2024-11-25 11:40:28


```
k,n = map(int,input().split())
arr = list(map(int,input().split()))

arr.sort()
ans =[]
for i in range(len(arr)):
    
    if i == n:
        print(*ans)
        break
    ans.append(arr[i])


```

