## Submission at 2024-08-05 10:14:54


```
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:27:55


```
name = input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:31:29


```
num = int(input())
lst = []
for i in range(num):
    name = input()
    lst.append(name)

for j in range(num):
    print("Hello "+lst[j]+"!")

```

## Submission at 2024-08-12 09:45:40


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
            return fibonacci(x-1)+fibonacci(x-2);
        }
        if(x==1){
            return 1;
        }
        return 0;
    }
}

```

## Submission at 2024-08-12 10:16:01


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
       else if(n%2!=0){
        return false;
       }
        return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:19:25


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
       if(n==2 || n==-2){
        return true;
       }
       else if(n%2!=0){
        return false;
       }
        return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:24:10


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
       if(n>0){
       if(n==2){
        return true;
       }
       else if(n%2!=0){
        return false;
       }
        return isPowerOfTwo(n/2);
       }
       else{
        return false;
       }
    }
}

```

## Submission at 2024-08-12 10:29:04


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
       if (n <= 0) {
            return false;
        } 
        else if (n == 1) {
            return true;
        }
        if (n % 2 != 0) {
            return false;
        } else {
            return isPowerOfTwo(n / 2);
    }
    }
}

```

## Submission at 2024-08-15 09:55:33


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
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> combinations = new ArrayList<>();
        backtrack(1,combinations,ans,n,k);
        return ans;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        if (comb.size()==k) {
            res.add(comb);
            return;
        }
        for(int i = start;i<=n;i++){
            comb.add(i);
        backtrack(i+1, comb, res, n, k);
        comb.remove(comb.size()-1);
        }
    }
}

```

## Submission at 2024-08-15 09:56:31


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
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> combinations = new ArrayList<>();
        backtrack(1,combinations,ans,n,k);
        return ans;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        if (comb.size()==k) {
            res.add(new ArrayList<>(comb));
            return;
        }
        for(int i = start;i<=n;i++){
            comb.add(i);
        backtrack(i+1, comb, res, n, k);
        comb.remove(comb.size()-1);
        }
    }
}

```

## Submission at 2024-08-16 04:29:45


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
                System.out.print(result.get(i));
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}


```

## Submission at 2024-08-16 04:29:46


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
                System.out.print(result.get(i));
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}


```

## Submission at 2024-08-16 04:31:29


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

## Submission at 2024-09-02 10:17:41


```
import java.util.*;
import java.io.*;
public class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        ip.nextLine();
        String s1 = ip.nextLine();
        String[] l1 = s1.split(" ");
        int[] arr1 = new int[n];
        for(int i = 0;i<n;i++){
            arr1[i] = Integer.parseInt(l1[i]);
        }
        String s2 = ip.nextLine();
        String[] l2 = s2.split(" ");
        int[] arr2 = new int[n];
        for(int i = 0;i<n;i++){
            arr2[i] = Integer.parseInt(l2[i]);
        } 
        int[] arr3 = new int[n];
        for(int i = 0; i<n;i++){
            if(arr1[i]>=arr2[i]){
                arr3[i] = arr1[i];
            }
            else{
                arr3[i] = arr2[i];
            }
            System.out.print(arr3[i]+" ");
        }
    }
}
```

## Submission at 2024-09-02 10:20:41


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
        while(head!=null){
            System.out.println(head.data+" ");
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:21:16


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
        while(head!=null){
            System.out.print(head.data+" ");
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:22:48


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
        while(head!=null){
            System.out.print(head.data+" ");
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:26:29


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
        for(int i = 1;i<k;i++){
            head = head.next;
        }
        return head.data;
    }
}
```

## Submission at 2024-09-02 10:27:10


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
        for(int i = 1;i<k;i++){
            head = head.next;
        }
        return head.data;
    }
}
```

## Submission at 2024-09-02 10:29:12


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
        for(int i = 1;i<k;i++){
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

## Submission at 2024-09-03 10:30:19


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
	    for(int i = 1;i<x-1;i++){
        temp = temp.next;
        }	
        temp.next = temp.next.next;
        return head;
    }
}
```

## Submission at 2024-09-03 10:51:43


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
    if(x==1){
        head = head.next;
        return head;
    }	
    for(int i = 1;i<x-1;i++){
        temp = temp.next;
    }
    if(temp.next.next==null){
        temp.next = null;
    }
    else{
        temp.next = temp.next.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-04 11:54:41


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
        Node curr = head;
        Node prev = null;
        Node nxt = curr.next;
        while(nxt!=null){
            curr.next = prev;
            prev = curr;
            curr = nxt;
            nxt = nxt.next;
        }
        curr.next = prev;
        head = curr;
        return head;
    }
}
```

## Submission at 2024-09-09 05:18:53


```
import java.util.*;
import java.io.*;

class Main{
    public static boolean checkArr(int[] arr1,int[] arr2){
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        for(int i = 0;i<arr1.length;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        int n = Integer.parseInt(s1[0]);
        String[] s2 = ip.nextLine().split(" ");
        String[] s3 = ip.nextLine().split(" ");
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        for(int i = 0;i<n;i++){
            arr1[i] = Integer.parseInt(s2[i]);
            arr2[i] = Integer.parseInt(s3[i]);
        }
        boolean ans = checkArr(arr1,arr2);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 05:21:43


```
import java.util.*;
import java.io.*;

class Main{
    public static boolean checkArr(int[] arr1,int[] arr2){
        if(arr1.length!=arr2.length){
            return false;
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        for(int i = 0;i<arr1.length;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        int n1 = Integer.parseInt(s1[0]);
        int n2 = Integer.parseInt(s1[1]);
        String[] s2 = ip.nextLine().split(" ");
        String[] s3 = ip.nextLine().split(" ");
        int[] arr1 = new int[n1];
        int[] arr2 = new int[n2];
        for(int i = 0;i<n1;i++){
            arr1[i] = Integer.parseInt(s2[i]);
        }
        for(int i = 0;i<n2;i++){
            arr2[i] = Integer.parseInt(s3[i]);
        }
        boolean ans = checkArr(arr1,arr2);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 05:26:19


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
        while(temp!=null){
            result.add(temp.data);
            temp = temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-09 07:52:48


```
import java.util.*;
import java.io.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String[] s2 = ip.nextLine().split(" ");
        int[] arr = new int[s2.length];
        int k = Integer.parseInt(s1[1]);
        for(int i=0;i<s2.length;i++){
            arr[i] = Integer.parseInt(s2[i]);
        }
        int[] nums = new int[arr[arr.length-1]+1];
        int count = 0;
        for(int i = 0;i<arr.length;i++){
            nums[arr[i]]++;
        }
        for(int i = 1;i<nums.length;i++){
            if(nums[i]==0){
                count++;
            }
            if(count==k){
                System.out.println(i);
            }
        }
    }
}
```

## Submission at 2024-09-09 07:55:24


```
import java.util.*;
import java.io.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String[] s2 = ip.nextLine().split(" ");
        int[] arr = new int[s2.length];
        int k = Integer.parseInt(s1[1]);
        for(int i=0;i<s2.length;i++){
            arr[i] = Integer.parseInt(s2[i]);
        }
        int[] nums = new int[arr[arr.length-1]+1];
        int count = 0;
        for(int i = 0;i<arr.length;i++){
            nums[arr[i]]++;
        }
        for(int i = 1;i<nums.length;i++){
            if(nums[i]==0){
                count++;
            }
            if(count==k){
                System.out.println(i);
                return;
            }
        }
    }
}
```

## Submission at 2024-09-09 08:07:55


```
import java.util.*;
import java.io.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String[] s2 = ip.nextLine().split(" ");
        int[] arr = new int[s2.length];
        int k = Integer.parseInt(s1[1]);
        for(int i=0;i<s2.length;i++){
            arr[i] = Integer.parseInt(s2[i]);
        }
        int[] nums = new int[arr[arr.length-1]+1];
        int count = 0;
        for(int i = 0;i<arr.length;i++){
            nums[arr[i]]++;
        }
        int i = 1;
        while(count<k){
            if(i<nums.length){
                if(nums[i]==0){
                count++;
                }
                i++;
            }
            else{
                count++;
                i++;
            }
        }
        System.out.println(i-1);
        return;
    }
}
```

## Submission at 2024-09-09 08:17:22


```
import java.util.*;
import java.io.*;

class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        ip.nextLine();
        String[] s1 = ip.nextLine().split(" ");
        int count = 0;
        for(int i = 0;i<s1.length;i++){
            if(s1[i].length()%2==0){
                count++;
            }
        }
        System.out.println(count);
        return;
    }
}
```

## Submission at 2024-09-09 08:23:51


```
import java.util.*;
import java.io.*;

class Main{
    public static int checkEven(int[] arr){
        int count = 0;
        String[] s1 = new String[arr.length];
        for(int i = 0;i<arr.length;i++){
            s1[i] = ""+arr[i];
        }
        for(int i = 0;i<s1.length;i++){
            if(s1[i].length()%2==0){
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        ip.nextLine();
        String[] s1 = ip.nextLine().split(" ");
        int[] arr = new int[s1.length];
        for(int i = 0;i<s1.length;i++){
            arr[i] = Integer.parseInt(s1[i]);
        }
        int ans = checkEven(arr);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 09:53:29


```
import java.util.*;
import java.io.*;
class Main{
    public static boolean powofthree(int num){
        if(num==3){
            return true;
        }
        while(num>3){
            if(num%3!=0){
                return false;
            }
            else{
                return powofthree(num/3);  
            }
        }
        return false;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int num = ip.nextInt();
        boolean ans = powofthree(num);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 09:56:12


```
import java.util.*;
import java.io.*;
class Main{
    public static boolean powofthree(int num){
        if(num==3 || num==1){
            return true;
        }
        while(num>3){
            if(num%3!=0){
                return false;
            }
            else{
                return powofthree(num/3);  
            }
        }
        return false;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int num = ip.nextInt();
        boolean ans = powofthree(num);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 09:58:03


```
import java.util.*;
import java.io.*;
class Main{
    public static boolean powofthree(int num){
        if(num<0){
            return false;
        }
        else{
            if(num==3 || num==1){
                return true;
            }
            while(num>3){
                if(num%3!=0){
                    return false;
                }
                else{
                    return powofthree(num/3);  
                }
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int num = ip.nextInt();
        boolean ans = powofthree(num);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 10:15:40


```
import java.util.*;
import java.io.*;
class Main{
    public static int charfreq(String s,int x){
        String dg = ""+x;
        int count = 0;
        int i = 0;
        while(i<s.length()){
            if((s.charAt(i)+"").equals(dg)){
                count++;
                i++;
            }
            else{
                i++;
            }
        }
        return count;
    } 
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String s = s1[0];
        int x = Integer.parseInt(s1[1]);
        int ans = charfreq(s,x);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 10:27:33


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
    Node removeDuplicate(Node head){
        if(head==null || head.next==null){
            return head;
        }
        Node temp = head;
        Node prev = null;
        Node nxt = temp.next;
        while(nxt!=null){
            if(nxt.data==temp.data){
                temp.next = nxt.next;
            }
            prev=temp;
            temp=temp.next;
            nxt = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:35:42


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
        int count=0;
        while(temp!=null){
          temp=temp.next;
          count++;
        }
        int[] arr = new int[count];
        temp = head;
        int i = 0;
        while(temp!=null){
          arr[i] = temp.data;
          i++;
          temp = temp.next;
        }
        int start = 0;
        int end = arr.length-1;
        while(start<=end){
          if(arr[start]!=arr[end]){
            return false;
          }
          else{
            start++;
            end--;
          }
        }
        return true;
    }
}


```

## Submission at 2024-09-09 10:40:29


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
    Node removeDuplicate(Node head){
        if(head==null || head.next==null){
            return head;
        }
        Node temp = head;
        Node prev = null;
        Node nxt = temp.next;
        while(nxt!=null){
            if(nxt.data==temp.data){
                if(nxt.next==null){
                    temp.next=null;
                    return head;
                }
                else{
                    temp.next=nxt.next;
                }
            }
            prev=temp;
            temp=temp.next;
            nxt = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-09 10:45:11


```
import java.util.*;
import java.io.*;
class Main{
    public static String powofthree(int num){
        if(num<0){
            return "False";
        }
        else{
            if(num==3 || num==1){
                return "True";
            }
            while(num>3){
                if(num%3!=0){
                    return "False";
                }
                else{
                    return powofthree(num/3);  
                }
            }
        }
        return "True";
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int num = ip.nextInt();
        String ans = powofthree(num);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 10:45:51


```
import java.util.*;
import java.io.*;
class Main{
    public static String powofthree(int num){
        if(num<0){
            return "False";
        }
        else{
            if(num==3 || num==1){
                return "True";
            }
            while(num>3){
                if(num%3!=0){
                    return "False";
                }
                else{
                    return powofthree(num/3);  
                }
            }
        }
        return "False";
    }
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int num = ip.nextInt();
        String ans = powofthree(num);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 11:02:29


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        List<List<Integer>> answer = matrix;
        int i = 0;
        int j = 0;
        for(int i = 0;i<answer.size();i++){
            for(int j = 0;j<answer.get(i).size();j++){
                
            }
        }
        // while(i<answer.size()){
        //     max = 0;
        //     while(j<answer.get(i).size()){
        //         if(answer.get(i).get(j)==-1){
                    
        //         }
        //     }
        // }
    }
}

```

## Submission at 2024-09-09 11:06:12


```
import java.util.*;
import java.io.*;
class Main{
    public static int charfreq(String s,int x,int count,int i){
        String dg = ""+x;
        if((s.charAt(i)+"").equals(dg)){
                count++;
                i++;
            }
            else{
                i++;
            }
        while(i<s.length()){
            charfreq(s,x,count,i);
        }
        return count;
    } 
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String s = s1[0];
        int x = Integer.parseInt(s1[1]);
        int ans = charfreq(s,x,0,0);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 11:10:24


```
import java.util.*;
import java.io.*;
class Main{
    public static int charfreq(String s,int x,int count,int i){
        String dg = ""+x;
        if(i==s.length()){
            return count;
        }
        else{
            if((s.charAt(i)+"").equals(dg)){
                count++;
                i++;
            }
            else{
                i++;
            }
            while(i<s.length()){
                charfreq(s,x,count,i);
            }
        }
        return count;
    } 
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String s = s1[0];
        int x = Integer.parseInt(s1[1]);
        int ans = charfreq(s,x,0,0);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-09 11:13:44


```
import java.util.*;
import java.io.*;
class Main{
    public static int charfreq(String s,int x){
        String dg = ""+x;
        int count = 0;
        int i = 0;
        while(i<s.length()){
            if((s.charAt(i)+"").equals(dg)){
                count++;
                i++;
            }
            else{
                i++;
            }
        }
        return count;
    } 
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] s1 = ip.nextLine().split(" ");
        String s = s1[0];
        int x = Integer.parseInt(s1[1]);
        int ans = charfreq(s,x);
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-16 08:20:08


```
import java.util.*;

class Main {
    public static int charfreq(String s1, char x, int start) {
        if (start >= s1.length()) {
            return 0;
        }
        int count = 0;
        if(s1.charAt(start) == x){
            count = 1;
        }

        return count + charfreq(s1, x, start + 1);
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);

        String[] s1 = ip.nextLine().split(" ");

        int ans = charfreq(s1[0], s1[1].charAt(0), 0);
        System.out.println(ans);
    }
}

```

## Submission at 2024-10-07 09:51:17


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        int[] arr = new int[q.size()];
        int ind = 0;
        while(!q.isEmpty()){
            arr[ind] = q.remove();
            ind++;
        }
        Queue<Integer> que = new LinkedList<>();
        for(int i = arr.length-1;i>=0;i--){
            que.add(arr[i]);
        }
        return que;
    }
}
```

## Submission at 2024-10-07 10:07:30


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String str = ip.nextLine();
        String ans = mathExp(str);
        System.out.println(ans);
    }

    public static String mathExp(String str){
        List<Integer> lst = new ArrayList<>();
        for(int i = 0;i<str.length();i++){
            if(Character.isDigit(str.charAt(i))){
                lst.add(str.charAt(i)-'0');
            }
        }
        int[] arr = new int[lst.size()];
        for(int i = 0;i<lst.size();i++){
            arr[i] = lst.get(i);
        }
        Arrays.sort(arr);
        String temp = "";
        String ans = "";
        for(int i = 0;i<arr.length;i++){
            temp = arr[i] + "+";
        }
        for(int i = 0;i<temp.length()-1;i++){
            ans = ans+temp.charAt(i);
        }
        return ans;
    }
}
```

## Submission at 2024-10-07 10:33:20


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String s = ip.nextLine();
        String ans = reverseString(s);
        System.out.println(ans);
    }
    public static String reverseString(String s){
        String[] str = s.split(".");
        String[] revstr = new String[str.length];
        for(int i = 0;i<str.length;i++){
            Stack<Character> st = new Stack<>();
            for(int j = 0;j<str[i].length();j++){
                st.push(str[i].charAt(j));
            }
            String nstr = "";
            for(int j = 0;j<str[i].length();j++){
                nstr = nstr + st.pop() + "";
            }
            revstr[i] = nstr;
        }
        String ans = "";
        for(int i = 0;i<revstr.length-1;i++){
            ans = ans + revstr[i] + ".";
        }
        ans = ans + revstr[revstr.length-1];
        return ans;
    }
}
```

## Submission at 2024-10-07 10:35:16


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String str = ip.nextLine();
        String ans = mathExp(str);
        System.out.println(ans);
    }

    public static String mathExp(String str){
        List<Integer> lst = new ArrayList<>();
        for(int i = 0;i<str.length();i++){
            if(Character.isDigit(str.charAt(i))){
                lst.add(str.charAt(i)-'0');
            }
        }
        int[] arr = new int[lst.size()];
        for(int i = 0;i<lst.size();i++){
            arr[i] = lst.get(i);
        }
        Arrays.sort(arr);
        String ans = "";
        for(int i = 0;i<arr.length-1;i++){
            ans = ans + arr[i] + "+";
        }
        ans = ans + arr[arr.length-1];
        return ans;
    }
}
```

## Submission at 2024-10-07 11:00:48


```
import java.util.*;
import java.io.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String s = ip.nextLine();
        s = s + ".";
        String s2 = "";
        List<String> s1 = new ArrayList<>();
        for(int i = 0;i<s.length();i++){
            if(s.charAt(i)=='.'){
                s1.add(s2);
                s2 = "";
                continue;
            }
            else{
                s2 = s2+s.charAt(i);
            }
        }
        String[] str = new String[s1.size()];
        for(int i = 0;i<s1.size();i++){
            str[i] = s1.get(i);
        }
        String[] revstr = new String[str.length];
        for(int i = 0;i<str.length;i++){
            Stack<Character> st = new Stack<>();
            for(int j = 0;j<str[i].length();j++){
                st.push(str[i].charAt(j));
            }
            String nstr = "";
            for(int j = 0;j<str[i].length();j++){
                nstr = nstr + st.pop() + "";
            }
            revstr[i] = nstr;
        }
        String ans = "";
        for(int i = 0;i<revstr.length-1;i++){
            ans = ans + revstr[i] + ".";
        }
        ans = ans + revstr[revstr.length-1];
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-07 11:13:55


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] l1 = ip.nextLine().split(" ");
        String[] l2 = ip.nextLine().split(" ");
        int[] arr = new int[l2.length];
        int n = Integer.parseInt(l1[0]);
        int k = Integer.parseInt(l1[1]);
        for(int i = 0;i<arr.length;i++){
            arr[i] = Integer.parseInt(l2[i]);
        }
        Arrays.sort(arr);
        int ans = 0;
        int count=1;
        if(arr[arr.length-1]-arr[0]<=k){
            System.out.println(0);
        }
        else{
            ans+=arr[arr.length-1]-arr[0]-k;
        }
        for(int i = arr.length-1;i>0;i--){
            if(arr[i]!=arr[i-1]){
                break;
            }
            else{
                count++;
            }
        }
        ans = ans*count;
        System.out.println(ans);
    }
}
```

## Submission at 2024-10-28 10:03:12


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
        List<Integer> lst = new ArrayList<>();
        traverse(root,lst);
        int min = Integer.MAX_VALUE;
        for(int i = 0;i<lst.size();i++){
            if(lst.get(i)<min){
                min = lst.get(i);
            }
        }
        return min;
    }
    public static void traverse(Node root, List<Integer> minlst){
        if(root==null){
            return;
        }
        traverse(root.left,minlst);
        minlst.add(root.data);
        traverse(root.right,minlst);
    }
}
```

## Submission at 2024-10-28 10:19:33


```
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        sc.nextLine();
        String[] str1 = sc.nextLine().split(" ");
        int[] arr = new int[str1.length];
        for(int i = 0;i<str1.length;i++){
            arr[i] = Integer.parseInt(str1[i]);
        }
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int i = 0;i<arr.length;i++){
            int getFreq = hm.getOrDefault(arr[i],0);
            getFreq+=1;
            hm.put(arr[i],getFreq);
        }
        for(int i = 0;i<arr.length;i++){
            if(hm.getOrDefault(arr[i],0)>=k){
                System.out.println(arr[i]);
                return;
            }
        }
        System.out.println(-1);
    }
}
```

## Submission at 2024-10-28 10:35:08


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
      Node temp1 = head1;
      List<Integer> lst1 = new ArrayList<>();
      Node temp2 = head2;
      List<Integer> lst2 = new ArrayList<>();
      while(temp1!=null){
        if(!lst1.contains(temp1.data)){
          lst1.add(temp1.data);
        }
        temp1 = temp1.next;
      }
      while(temp2!=null){
        if(!lst2.contains(temp2.data)){
          lst2.add(temp2.data);
        }
        temp2 = temp2.next;
      }
      List<Integer> lst3 = new ArrayList<>();
      for(int i = 0;i<lst1.size();i++){
        if(lst2.contains(lst1.get(i))){
          lst3.add(lst1.get(i));
        }
      }
      if(lst3.size()==0){
        return null;
      }
      Node head = new Node(lst3.get(0));
      Node temp = head;
      for(int i = 1;i<lst3.size();i++){
        temp.next = new Node(lst3.get(i));
        temp = temp.next;
      } 
      return head;
    }
}
```

## Submission at 2024-10-28 11:19:04


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
    //complete the function and return the sum
    Integer treePathSum(Node root)
    {
       List<Integer> lst = new ArrayList<>();
       int s = 0;
       traverse(root,lst,s);
       Integer sum = 0;
       for(int i = 0;i<lst.size();i++){
        sum+=lst.get(i);
        System.out.println(lst.get(i));
       }
       return sum;
    }
    void traverse(Node root,List<Integer> lst, int sum){
      if(root==null){
        return;
      }
      traverse(root.left,lst,sum = (sum+root.data)*10);
      lst.add(sum/10);
      traverse(root.right,lst,sum = (sum+root.data)*10);
    }
}
```

## Submission at 2024-11-04 10:23:24


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String ransom = sc.nextLine();
        String magazine = sc.nextLine();
        HashMap<Character, Integer> hm1 = new HashMap<>();
        for(int i = 0;i<magazine.length();i++){
            int getFreq = hm1.getOrDefault(magazine.charAt(i),0);
            hm1.put(magazine.charAt(i),getFreq++);
        }
        for(int i = 0;i<ransom.length();i++){
            int getFreq = hm1.getOrDefault(ransom.charAt(i),0);
            if(getFreq<=0){
                System.out.println("false");
                return;
            }
            hm1.put(ransom.charAt(i),getFreq--);
        }        
        System.out.println("true");
    }
}
```

## Submission at 2024-11-04 10:25:32


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ransom = sc.nextLine();
        String magazine = sc.nextLine();
        HashMap<Character, Integer> hm1 = new HashMap<>();
        
        for (int i = 0; i < magazine.length(); i++) {
            int getFreq = hm1.getOrDefault(magazine.charAt(i), 0);
            hm1.put(magazine.charAt(i), getFreq + 1); // Increment and update map
        }
        
        for (int i = 0; i < ransom.length(); i++) {
            int getFreq = hm1.getOrDefault(ransom.charAt(i), 0);
            if (getFreq <= 0) {
                System.out.println("false");
                return;
            }
            hm1.put(ransom.charAt(i), getFreq - 1); // Decrement and update map
        }
        
        System.out.println("true");
    }
}

```

## Submission at 2024-11-04 10:48:59


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String s = ip.nextLine();
        String t = ip.nextLine();
        if(s.length()!=t.length()){
            System.out.println("false");
            return;
        }
        HashMap<Character,Integer> hm = new HashMap<>();
        HashMap<Character,Integer> hm1 = new HashMap<>();
        for(int i = 0;i<s.length();i++){
            int getFreq = hm.getOrDefault(s.charAt(i),0);
            hm.put(s.charAt(i),getFreq+1);
        }
        for(int i = 0;i<t.length();i++){
            int getFreq = hm1.getOrDefault(t.charAt(i),0);
            hm1.put(t.charAt(i),getFreq+1);
        }
        if(hm.equals(hm1)){
            System.out.println("true");
            return;
        }
        System.out.println("false");
    }
}
```

## Submission at 2024-11-06 05:02:42


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
    Node(int item) {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    // complete the function and return the sum of all root-to-leaf paths
    Integer treePathSum(Node root) {
        List<Integer> lst = new ArrayList<>();
        traverse(root, 0, lst);
        int sum = 0;
        for (int pathSum : lst) {
            sum += pathSum;
        }
        return sum;
    }

    // Helper function to traverse the tree and calculate the path sums
    void traverse(Node root, int currentSum, List<Integer> lst) {
        if (root == null) {
            return;
        }

        // Update the current path sum
        currentSum = currentSum * 10 + root.data;

        // If we reach a leaf node, add the current path sum to the list
        if (root.left == null && root.right == null) {
            lst.add(currentSum);
            return;
        }

        // Recursively traverse the left and right subtrees
        traverse(root.left, currentSum, lst);
        traverse(root.right, currentSum, lst);
    }
}

```

## Submission at 2024-11-25 04:33:34


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

## Submission at 2024-11-25 09:54:16


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String str = ip.nextLine();
        HashMap<Character,Integer> hm = new HashMap<>();
        for(int i = 0;i<str.length();i++){
            int getFreq = hm.getOrDefault(str.charAt(i),0);
            hm.put(str.charAt(i),getFreq+1);
        }
        if(hm.getOrDefault('a',0)>hm.getOrDefault('b',0)){
            System.out.println("a");
        }
        else{
            System.out.println("b");
        }
    }
}
```

## Submission at 2024-11-25 10:12:01


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        ip.nextLine();
        String[] str = ip.nextLine().split(" ");
        int[] nums = new int[str.length];
        for(int i = 0;i<str.length;i++){
            nums[i] = Integer.parseInt(str[i]);
        } 
        int diff = nums[1]-nums[0];
        for(int i = 2;i<nums.length;i++){
            if(diff!=nums[i]-nums[i-1]){
                System.out.println("false");
                return;
            }
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-11-25 10:18:51


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] str = ip.nextLine().split(" ");
        int n = Integer.parseInt(str[0]);
        int target = Integer.parseInt(str[1]);
        String[] str1 = ip.nextLine().split(" ");
        int nums[] = new int[n];
        for(int i = 0;i<n;i++){
            nums[i] = Integer.parseInt(str1[i]);
        }
        Arrays.sort(nums);
        List<Integer> lst = new ArrayList<>();
        for(int i = 0;i<nums.length;i++){
            if(nums[i]==target){
                lst.add(i);
            }
        }
        for(int i = 0;i<lst.size();i++){
            System.out.print(lst.get(i)+" ");
        }
    }
}
```

## Submission at 2024-11-25 10:27:23


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int num = ip.nextInt();
        for(int i=1;i<=num;i++){
            for(int j = 0;j<i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 11:00:26


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        ip.nextLine();
        int arr[] = new int[n];
        for(int i = 0;i<n;i++){
            arr[i] = ip.nextInt();
        }
        int mid;
        if(n%2!=0){
            mid = (n-1)/2;
        }
        else{
            mid = n/2;
        }
        for(int i = 0;i<mid;i++){
            if(arr[i]>arr[mid]){
                System.out.println("NO");
                return;
            }
        }
        for(int i = mid+1;i<n;i++){
            if(arr[i]<arr[mid]){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
}
```

## Submission at 2024-11-25 11:01:41


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int k = ip.nextInt();
        HashMap<Integer,Integer> hm = new HashMap<>();
        ip.nextLine();
        List<Integer> brands = new ArrayList<>();
        for(int i = 0;i<n;i++){
            int bi = ip.nextInt();
            int ci = ip.nextInt();
            int getPrice = hm.getOrDefault(bi,0);
            hm.put(bi,getPrice+ci);
            if(!brands.contains(bi)){
                brands.add(bi);
            }
            ip.nextLine();
        }
        int arr[] = new int[brands.size()];
        for(int i = 0;i<brands.size();i++){
            arr[i] = getOrDefault(brands.get(i),0);
        }
        Arrays.sort(arr);

        if(k<arr.length){
            int sum = 0;
            for(int i = 0;i<arr.length;i++){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
        else{
            int sum = 0;
            for(int i = arr.length-1;i>arr.length-k-1;i--){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
    }
}
```

## Submission at 2024-11-25 11:04:16


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int k = ip.nextInt();
        HashMap<Integer,Integer> hm = new HashMap<>();
        ip.nextLine();
        List<Integer> brands = new ArrayList<>();
        for(int i = 0;i<n;i++){
            int bi = ip.nextInt();
            int ci = ip.nextInt();
            int getPrice = hm.getOrDefault(bi,0);
            hm.put(bi,getPrice+ci);
            if(!brands.contains(bi)){
                brands.add(bi);
            }
            ip.nextLine();
        }
        int arr[] = new int[brands.size()];
        for(int i = 0;i<brands.size();i++){
            arr[i] = hm.getOrDefault(brands.get(i),0);
        }
        Arrays.sort(arr);

        if(k<arr.length){
            int sum = 0;
            for(int i = 0;i<arr.length;i++){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
        else{
            int sum = 0;
            for(int i = arr.length-1;i>arr.length-k-1;i--){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
    }
}
```

## Submission at 2024-11-25 11:08:26


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int k = ip.nextInt();
        HashMap<Integer,Integer> hm = new HashMap<>();
        ip.nextLine();
        List<Integer> brands = new ArrayList<>();
        for(int i = 0;i<n;i++){
            int bi = ip.nextInt();
            int ci = ip.nextInt();
            int getPrice = hm.getOrDefault(bi,0);
            hm.put(bi,getPrice+ci);
            if(!brands.contains(bi)){
                brands.add(bi);
            }
        }
        int arr[] = new int[brands.size()];
        for(int i = 0;i<brands.size();i++){
            arr[i] = hm.getOrDefault(brands.get(i),0);
        }
        Arrays.sort(arr);

        if(k>arr.length){
            int sum = 0;
            for(int i = 0;i<arr.length;i++){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
        else{
            int sum = 0;
            for(int i = arr.length-1;i>arr.length-k-1;i--){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
    }
}
```

## Submission at 2024-11-25 11:15:49


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
    
    Integer findMaxForN(Node root, int n)
    {
       List<Integer> lst = new ArrayList<>();
       Traverse(root,lst);
       Integer max = -1;
       for(int i = 0;i<lst.size();i++){
        if(lst.get(i)>max && lst.get(i)<=n){
          max = lst.get(i);
        }
       }
       return max;
    }
    void Traverse(Node root, List<Integer> lst){
      if(root==null){
        return;
      }
      Traverse(root.left,lst);
      lst.add(root.data);
      Traverse(root.right,lst);
    }
}
```

## Submission at 2024-11-25 11:18:27


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int k = ip.nextInt();
        HashMap<Integer,Integer> hm = new HashMap<>();
        ip.nextLine();
        List<Integer> brands = new ArrayList<>();
        for(int i = 0;i<n;i++){
            int bi = ip.nextInt();
            int ci = ip.nextInt();
            int getPrice = hm.getOrDefault(bi,0);
            hm.put(bi,getPrice+ci);
            if(!brands.contains(bi)){
                brands.add(bi);
            }
        }
        int arr[] = new int[brands.size()];
        for(int i = 0;i<brands.size();i++){
            arr[i] = hm.getOrDefault(brands.get(i),0);
        }
        Arrays.sort(arr);

        if(n>arr.length){
            int sum = 0;
            for(int i = 0;i<arr.length;i++){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
        else{
            int sum = 0;
            for(int i = arr.length-1;i>arr.length-n-1;i--){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
    }
}
```

## Submission at 2024-11-25 11:19:23


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int k = ip.nextInt();
        HashMap<Integer,Integer> hm = new HashMap<>();
        ip.nextLine();
        List<Integer> brands = new ArrayList<>();
        for(int i = 0;i<k;i++){
            int bi = ip.nextInt();
            int ci = ip.nextInt();
            int getPrice = hm.getOrDefault(bi,0);
            hm.put(bi,getPrice+ci);
            if(!brands.contains(bi)){
                brands.add(bi);
            }
        }
        int arr[] = new int[brands.size()];
        for(int i = 0;i<brands.size();i++){
            arr[i] = hm.getOrDefault(brands.get(i),0);
        }
        Arrays.sort(arr);

        if(n>arr.length){
            int sum = 0;
            for(int i = 0;i<arr.length;i++){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
        else{
            int sum = 0;
            for(int i = arr.length-1;i>arr.length-n-1;i--){
                sum+=arr[i];
            }
            System.out.println(sum);
        }
    }
}
```

## Submission at 2024-11-25 11:28:45


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
        Node temp1 = head1;
        Node temp2 = head2;
        List<Integer> lst1 = new ArrayList<>();
        List<Integer> lst2 = new ArrayList<>();
        while(temp1!=null || temp2!=null){
          lst1.add(temp1.data);
          lst2.add(temp2.data);
          if(lst2.contains(temp1.data)){
            return temp1;
          }
          if(lst1.contains(temp2.data)){
            return temp2;
          }
          temp1 = temp1.next;
          temp2 = temp2.next;
        }
        return null;
    }
}



```

## Submission at 2024-11-25 11:34:29


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
        Node temp1 = head1;
        Node temp2 = head2;
        List<Integer> lst1 = new ArrayList<>();
        List<Integer> lst2 = new ArrayList<>();
        while(temp1!=null || temp2!=null){
          lst1.add(temp1.data);
          lst2.add(temp2.data);
          if(lst2.contains(temp1.data)){
            return temp1;
          }
          if(lst1.contains(temp2.data)){
            return temp2;
          }
          temp1 = temp1.next;
          temp2 = temp2.next;
        }
        if(temp1==null && temp2!=null){
          lst2.add(temp2.data);
          if(lst1.contains(temp2.data)){
            return temp2;
          }
          temp2 = temp2.next;
        }
        else if(temp2==null && temp1!=null){
          lst1.add(temp1.data);
          if(lst2.contains(temp1.data)){
            return temp1;
          }
          temp1 = temp1.next;
        }
        return null;
    }
}
```

## Submission at 2024-11-25 11:40:31


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
        Node temp1 = head1;
        Node temp2 = head2;
        List<Integer> lst1 = new ArrayList<>();
        List<Integer> lst2 = new ArrayList<>();
        while(temp1!=null || temp2!=null){
          lst1.add(temp1.data);
          lst2.add(temp2.data);
          if(lst2.contains(temp1.data)){
            return temp1;
          }
          if(lst1.contains(temp2.data)){
            return temp2;
          }
          temp1 = temp1.next;
          temp2 = temp2.next;
        }
        while(temp2!=null){
          lst2.add(temp2.data);
          if(lst1.contains(temp2.data)){
            return temp2;
          }
          temp2 = temp2.next;
        }
        while(temp1!=null){
          lst1.add(temp1.data);
          if(lst2.contains(temp1.data)){
            return temp1;
          }
          temp1 = temp1.next;
        }
        return null;
    }
}
```

