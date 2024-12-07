## Submission at 2024-08-09 04:57:52


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        String a=input.nextLine();
        System.out.println("Hello "+a+" !");
    }
}

```

## Submission at 2024-08-09 05:04:01


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        String a=input.nextLine();
        
        if (a.length()>=1 && a.length()<=100)
            System.out.println("Hello "+a+" !");
        else
            System.out.println("Wrong Input");
        
    }
}

```

## Submission at 2024-08-09 05:05:40


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        String a=input.nextLine();
        
        if (a.length()>=1 && a.length()<=100)
            System.out.println("Hello "+a+"!");
        else
            System.out.println("Wrong Input");
        
    }
}

```

## Submission at 2024-08-09 05:16:35


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        if (s.length()>=1 && s.length()<=100)
            System.out.println("Hello "+s+"!");
        else
            System.out.println("Wrong input!");
    }
}
```

## Submission at 2024-08-09 05:29:48


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        

        for(int l=0;l<4;l++){
            String s = input.nextLine();
            if (n>=1 && n<=100 && s.length()>=1 && s.length()<=100)
                System.out.println("Hello "+s+"!");
        }
        
    }
}
```

## Submission at 2024-08-09 05:31:00


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        

        for(int l=0;l<=n;l++){
            String s = input.nextLine();
            if (n>=1 && n<=100 && s.length()>=1 && s.length()<=100)
                System.out.println("Hello "+s+"!");
        }
        
    }
}
```

## Submission at 2024-08-16 04:48:07


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
        if (x>=0 && x<=10){
            if (x==0)
                System.out.println("0");
            else if(x==1)
                System.out.println("1");
            else{
                int ans = 1;
                for(int i=1;x;i++){
                    ans = ans + 1;
                }
            }
            
        }
    }
}

```

## Submission at 2024-08-16 04:58:39


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
        if (x>=0 && x<=10){
            if (x==0)
                return x;
            else if(x==1)
                return x;
            else{
                return fibonacci(x-1) + fibonacci(x-2);
            }
            
        }
        return 1;
    }
}

```

## Submission at 2024-08-16 05:35:03


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
        if (n>=(-1)*Math.pow(2,31) && n<=Math.pow(2,31)){
            if(n==1)
                return true;
            else if (n%2!=0 || n<=0)
                return false;
            else
                return isPowerOfTwo(n/2);
        }
        return true;
    }
}

```

## Submission at 2024-08-22 04:59:28


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
        List<List<Integer>> res = new ArrayList<>();
        backtrack(1, new ArrayList<>(), res, n, k);
        return res;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        if(comb.size()==k){
            res.add(new ArrayList<>(comb));
            return;
        }
        for(int i=start;i<=n;i++){
            comb.add(i);
            backtrack(i+1, comb, res, n, k);
            comb.remove(comb.size()-1);
        }
    }
}

```

## Submission at 2024-08-22 06:59:54


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner N = new Scanner(System.in);
        String input = N.nextLine();
        String[] n = input.split("\\s+");
        int[] num = new int[n.length];
        for(int i=0;i<n.length;i++)
            num[i] = Integer.parseInt(n[i]);
        List<List<Integer>> res = permutation(num);
        System.out.print("[");
        for(int i=0;i<res.size();i++){
            System.out.print("[");
            for(int j=0;j<res.get(i).size();j++){
                System.out.print(res.get(i).get(j));
                if(j<res.get(i).size()-1)
                    System.out.print(",");
            }
            System.out.print("]");
            if(i<res.size()-1)
                System.out.print(",");
        }
        System.out.print("]");

    }
    public static List<List<Integer>> permutation(int[] num){
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), num);
        return res;
    }
    private static void backtrack(List<List<Integer>> res, List<Integer> list1, int[] num){
        if(list1.size() == num.length)
            res.add(new ArrayList<>(list1));
        else{
            for(int i = 0;i<num.length;i++){
                if(list1.contains(num[i]))
                    continue;
                list1.add(num[i]);
                backtrack(res, list1, num);
                list1.remove(list1.size()-1);
            }
        }
    }
}
```

## Submission at 2024-08-22 11:52:59


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner N = new Scanner(System.in);
        int n = N.nextInt();
        List<String> res = parantheses(n);
        System.out.print("[");
        for(int i=0;i<res.size();i++){
            System.out.print("\"" + res.get(i) + "\"");
            if(i<res.size()-1)
                System.out.print(",");
        }
        System.out.print("]");
    }
    public static List<String> parantheses(int n){
        List<String> res = new ArrayList<>();
        backtrack(res, "", 0, 0, n);
        return res;
    }
    private static void backtrack(List<String> res, String present, int open, int close, int max){
        if(present.length()==max*2){
            res.add(present);
            return;
        }
        if(open<max)
            backtrack(res, present+"(", open+1, close, max);
        if(close<open)
            backtrack(res, present+")", open, close+1, max);
    }
}
```

## Submission at 2024-08-22 11:56:49


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner N = new Scanner(System.in);
        int n = N.nextInt();
        List<String> res = parantheses(n);
        if(n>=1 && n<=8){
            System.out.print("[");
            for(int i=0;i<res.size();i++){
                System.out.print("\"" + res.get(i) + "\"");
                if(i<res.size()-1)
                    System.out.print(",");
            }
            System.out.print("]");
        }
    }
    public static List<String> parantheses(int n){
        List<String> res = new ArrayList<>();
        backtrack(res, "", 0, 0, n);
        return res;
    }
    private static void backtrack(List<String> res, String present, int open, int close, int max){
        if(present.length()==max*2){
            res.add(present);
            return;
        }
        if(open<max)
            backtrack(res, present+"(", open+1, close, max);
        if(close<open)
            backtrack(res, present+")", open, close+1, max);
    }
}
```

## Submission at 2024-08-27 12:58:54


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int[] arr1 = new int[n1];
        for (int i = 0; i < n1; i++) {
            arr1[i] = input.nextInt();
        }
        int[] arr2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            arr2[i] = input.nextInt();
        }
        System.out.println(equal(arr1, arr2, 0));
    }
    public static boolean equal(int[] arr1, int[] arr2, int index){
        boolean r = false;
        if(index == arr2.length)
            return true;
        for(int i=0;i<arr1.length;i++){
            if(arr1[i] == arr2[index]){
                r = true;
                break;
            }
        }
        if(r == true)
            return equal(arr1, arr2, index + 1);
        else
            return false;
    }
}
```

## Submission at 2024-08-27 13:29:14


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int[] arr1 = new int[n1];
        for (int i = 0; i < n1; i++) {
            arr1[i] = input.nextInt();
        }
        int[] arr2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            arr2[i] = input.nextInt();
        }
        System.out.println(equal(arr1, arr2));
    }
    public static boolean equal(int[] arr1, int[] arr2){
        if(arr1.length != arr2.length)
            return false;
        return equalCheck(arr1, arr2, 0);
    }
    public static boolean equalCheck(int[] arr1, int[] arr2, int index){
        if(index == arr2.length)
            return true;
        boolean found = false;
        for(int i=0;i<arr1.length;i++){
            if(arr1[i] == arr2[index]){
                found = true;
                break;                
            }
        }
        if(!found)
            return false;
        return equalCheck(arr1, arr2, index + 1);
    }
}
```

## Submission at 2024-08-28 03:47:52


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(Sum(n));
    }
    public static int Sum(int n){
        int count = 0;
        for(int i=1;i<=n;i++){
            if(i%3==0 || i%5==0 || i%7==0)
                count += i;
        }
        return count;
    }
}
```

## Submission at 2024-08-29 10:24:24


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<arr.length; i++)
            arr[i] = input.nextInt();
        number(arr, k);
    } 
    public static void number(int[] arr1, int k){
        int[] arr2 = new int[1000];
        for(int i=0; i<1000; i++)
            arr2[i] = i + 1;
        int[] arr3 = new int[k];
        int index = 0;
        for(int i=0; i<arr2.length; i++){
            boolean found = false;
            for(int j=0; j<arr1.length; j++){
                if(arr2[i] == arr1[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                arr3[index++] = arr2[i];
                if(index == k)
                    break;
            }
        }
        System.out.println(arr3[k-1]);
    }  
}
```

## Submission at 2024-08-29 10:27:57


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        System.out.println(Tri_Sum(arr, n));
    }   
    public static int Tri_Sum(int[] arr, int n1){
        if(n1 == 1)
            return arr[0];
        int[] arr2 = new int[n1 - 1];
        for(int i=0; i<arr.length-1; i++){
            arr2[i] = arr[i] + arr[i+1];
        }
        return Tri_Sum(arr2, n1 - 1);
    }
}
```

## Submission at 2024-08-29 10:29:24


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int matrix[][] = new int[n1][n2];
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++)
                matrix[i][j] = input.nextInt();
        }
        tMatrix(matrix);
    }   
    public static void tMatrix(int[][] matrix){
        int[][] t = new int[matrix[0].length][matrix.length];
        for(int i=0; i<matrix.length; i++){
            for(int j=0; j<matrix[0].length; j++)
                t[j][i] = matrix[i][j];
        }
        for(int i=0; i<t.length; i++){
            for(int j=0; j<t[0].length; j++)
                System.out.print(t[i][j] + " ");
            System.out.println();
        }
        System.out.println();
    }
}
```

## Submission at 2024-08-29 10:30:55


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int[][] matrix = new int[n1][n2];
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++)
                matrix[i][j] = input.nextInt();
        }
        spiral_array(matrix, 0, n2 - 1, n1 - 1, 0);
    }   
    public static int spiral_array(int[][] matrix, int top, int right, int bottom, int left){
        if(top == matrix.length)
            return -1;
        for(int i=left; i<=right; i++)
            System.out.print(matrix[top][i] + " ");
        top++;
        for(int i=top; i<=bottom; i++)
            System.out.print(matrix[i][right] + " ");
        right--;
        for(int i=right; i>=left; i--)
            System.out.print(matrix[bottom][i] + " ");
        bottom--;
        for(int i=bottom; i>=top; i--)
            System.out.print(matrix[i][left] + " ");
        left++;
        return(spiral_array(matrix, top, right, bottom, left));
    }
}
```

## Submission at 2024-08-29 10:38:16


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int[][] matrix = new int[n1][n2];
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++)
                matrix[i][j] = input.nextInt();
        }
        spiral_array(matrix, 0, n2 - 1, n1 - 1, 0);
    }   
    public static int spiral_array(int[][] matrix, int top, int right, int bottom, int left){
        if(top > bottom || left > right)
            return -1;
        for(int i=left; i<=right; i++)
            System.out.print(matrix[top][i] + " ");
        top++;
        for(int i=top; i<=bottom; i++)
            System.out.print(matrix[i][right] + " ");
        right--;
        if(top <= bottom){
            for(int i=right; i>=left; i--)
                System.out.print(matrix[bottom][i] + " ");
            bottom--;
        }
        if(left <= right){
            for(int i=bottom; i>=top; i--)
                System.out.print(matrix[i][left] + " ");
            left++;
        }
        return(spiral_array(matrix, top, right, bottom, left));
    }
}
```

## Submission at 2024-08-29 12:21:28


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        count(arr, n);
    }   
    public static void count(int[] arr, int n){
        int c = 0;
        for(int i=0; i<n; i++){
            int num = arr[i];
            boolean even = true;
            while(num > 0){
                int digit = num % 10;
                if(digit % 2 != 0){
                    even = false;
                    break;
                }
                num = num / 10;
            }
            if(even)
                c++;
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-08-29 12:30:19


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        count(arr, n);
    }   
    public static void count(int[] arr, int n){
        int c = 0;
        for(int i=0;i<n; i++){
            String str = String.valueOf(arr[i]);
            boolean even = true;
            for(int j=0; j<str.length(); j++){
                if((str.charAt(j) - '0') % 2 !=0){
                    even = false;
                    break;
                }
            }
            if(even)
                c++;
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-08-29 12:35:46


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        count(arr, n);
    }   
    public static void count(int[] arr, int n){
        int c = 0;
        for(int i=0;i<n; i++){
            if(String.valueOf(arr[i]).length() % 2 == 0){
                c++;
            }
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-08-30 05:09:03


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt(), n = input.nextInt();
        pow(x,n);
    }
    public static void pow(int x, int n){
        int ans = 1;
        if(n==0)
            System.out.println("1");
        else{
            for(int i=1; i<=n; i++)
                ans = ans * x;
            System.out.println(ans);
        }
    }
}
```

## Submission at 2024-08-30 05:32:32


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr1 = new int[n];
        for(int i=0; i<n; i++)
            arr1[i] = input.nextInt();
        int[] arr2 = new int[n];
        for(int i=0; i<n; i++)
            arr2[i] = input.nextInt();
        Maximal(arr1, arr2, n);
    }
    public static void Maximal(int[] arr1, int[] arr2, int n){
        int[] c = new int[n];
        while(arr1.length == arr2.length){
            for(int i =0; i<n; i++){
                if(arr1[i] >= arr2[i])
                    c[i] = arr1[i];
                else
                    c[i] = arr2[i];
                
            }
            for(int j=0; j<n; j++)
                System.out.print(c[j] + " ");
        }
        
        
    }
}
```

## Submission at 2024-08-30 05:46:22


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
        Node temp = head;
        Node prev = null;
        Node n = null;
        while(temp != null){
            if(temp == head){
                temp = prev;
                prev = n;
                n = temp;
            }
            prev = temp;
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-08-30 06:11:39


```
import java.util.Scanner;

class Main {
    public static void main (String[] args) {
        // Write code from scratch
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        int l = s.length();
        Palidrome(s, 0, l);
    }
    public static String Palidrome(String s, int i, int l){
        if(s.charAt(0) == s.charAt(l-1))
            System.out.println("YES");
        return Palidrome(s, i+1, l-1);
    }
}
```

## Submission at 2024-08-30 06:23:22


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
        Node temp = head;
        Node prev = null;
        if(temp != null){
            temp.next = temp;
            temp = prev;
            prev = temp.next;
        }
        prev = temp;
        temp = temp.next;
        return null;
    }
}
```

## Submission at 2024-09-04 11:25:04


```
import java.util.Scanner;
class Main {
    public static String isPalindrome(int i, int j, String s){
        if(i>=j)
            return "YES";
        if(s.charAt(i) != s.charAt(j))
            return "NO";
        return isPalindrome(i+1, j-1, s);
    }
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        System.out.println(isPalindrome(0, s.length()-1, s));
    }
}
```

## Submission at 2024-09-06 04:59:35


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] n1 = new int[n];
        int[] n2 = new int[n];
        int[] n3 = new int[n];
        for(int i=0; i<n1.length; i++)
            n1[i] = input.nextInt();
        for(int i=0; i<n2.length; i++)
            n2[i] = input.nextInt();
        for(int i=0; i<n; i++)
            n3[i] = Math.max(n1[i], n2[i]);
        for(int i=0; i<n; i++)
            System.out.print(n3[i] + " ");
    }
}
```

## Submission at 2024-09-06 05:17:29


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
        Node temp = null;
        Node prev = null;
        Node curr = head;
        while(curr != null){
            temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
}
```

## Submission at 2024-09-06 05:35:57


```
import java.util.Scanner;
class Main { 
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt(), n = input.nextInt();
        System.out.println(pow(x, n));
    }
    public static int pow(int x, int n){
        if(n==0)
            return 1;
        else if(n>0){
            return x * pow(x, n-1);
        }
        return 0;
    }
}
```

## Submission at 2024-09-12 10:26:31


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int[] arr1 = new int[n1];
        for (int i = 0; i < n1; i++) {
            arr1[i] = input.nextInt();
        }
        int[] arr2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            arr2[i] = input.nextInt();
        }
        if(arr1.length != arr2.length)
            System.out.println("false");
        else
            System.out.println(equal_array(arr1,arr2));
    }
    public static boolean equal_array(int[] arr1, int[] arr2){
        for(int i=0; i<arr1.length; i++){
            boolean found = false;
            for(int j=0; j<arr2.length; j++){
                if(arr1[i] == arr2[j]){
                    found = true;
                    break;
                }
            }
            if(found == false)
                return false;
        }
        return true;
    }
}
```

## Submission at 2024-09-12 10:28:57


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt(), n2 = input.nextInt();
        int[] arr1 = new int[n1];
        for (int i = 0; i < n1; i++) {
            arr1[i] = input.nextInt();
        }
        int[] arr2 = new int[n2];
        for (int i = 0; i < n2; i++) {
            arr2[i] = input.nextInt();
        }
        if(arr1.length != arr2.length)
            System.out.println("false");
        else
            System.out.println(equal_array(arr1,arr2) && equal_array(arr2,arr1));
    }
    public static boolean equal_array(int[] arr1, int[] arr2){
        for(int i=0; i<arr1.length; i++){
            boolean found = false;
            for(int j=0; j<arr2.length; j++){
                if(arr1[i] == arr2[j]){
                    found = true;
                    break;
                }
            }
            if(found == false)
                return false;
        }
        return true;
    }
}
```

## Submission at 2024-09-12 10:48:15


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
        if(head == null)
            return null;
        if(head.data == x){
            return head.next;
        }
        Node temp = head;
        while(temp.next != null){
            if(temp.next.data == x){
                temp.next = temp.next.next;
                return head;
            }
            temp = temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-12 11:51:35


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
        while(head != null){
            result.add(head.data);
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-12 12:20:04


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
    List<Integer> result = new ArrayList<>();
        while(head != null){
            result.add(head.data);
            head = head.next;
        }
        int l = result.size();
        if(k>l)
            return -1;
        return result.get(k-1);
    }
}
```

## Submission at 2024-10-04 05:57:27


```
import java.util.Scanner;
public class Main{
    public static void merge(int[] arr, int left, int right, int mid, int[] temp){
        int i = left;
        int j = mid+1;
        int k = left;
        while(i>=left && j>=mid){
            if(arr[i] >= arr[j]){
                temp[k] = arr[j];
                j++;
            }
            if(arr[i] <= arr[j]){
                temp[k] = arr[i];
                i++;
            }
            k++;
        }
        while(i>=left){
            temp[k] = arr[i];
            i++;
            k++;
        }
        while(j>=mid){
            temp[k] = arr[j];
            j++;
            k++;
        }
        for(i=0; i<=left; i++)
            arr[i] = temp[i];
    }

    public static void mergeSort(int[] arr, int left, int right, int[] temp){
        int mid = left + (right - left)/2;
        if(left <= right){
            if(left <= mid && mid <= right){
            
                mergeSort(arr, left, mid, temp);
                mergeSort(arr, mid+1, right, temp);

                merge(arr, left, right, mid, temp);
            }
            else 
                break;
        }
        
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        int[] temp = new int[n];
        mergeSort(arr, 0, n-1, temp);
        if(k==1)
            System.out.println(arr[m-1]);
    }
}
```

## Submission at 2024-10-04 06:08:24


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String t = input.nextLine();
        boolean a = true;
        if(s.length() != t.length())
            System.out.println("false");
        else{
            
            int count = 0;
            for(int i=0; i<s.length(); i++){
                for(int j=0; j<t.length(); j++){
                    if(s.charAt(i)(t.charAt(j))){
                        count++;
                    }
                }
                if(count!=0){
                    a = false;
                    break;
                }
                count = 0;
            }
        }
        System.out.println(a);
    }
}
```

## Submission at 2024-10-04 06:09:00


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String t = input.nextLine();
        boolean a = true;
        if(s.length() != t.length())
            System.out.println("false");
        else{
            
            int count = 0;
            for(int i=0; i<s.length(); i++){
                for(int j=0; j<t.length(); j++){
                    if(s.charAt(i)==(t.charAt(j))){
                        count++;
                    }
                }
                if(count!=0){
                    a = false;
                    break;
                }
                count = 0;
            }
        }
        System.out.println(a);
    }
}
```

## Submission at 2024-10-04 06:11:22


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String t = input.nextLine();
        boolean a = false;
        if(s.length() != t.length())
            System.out.println("false");
        else{
            
            int count = 0;
            for(int i=0; i<s.length(); i++){
                for(int j=0; j<t.length(); j++){
                    if(s.charAt(i) == (t.charAt(j))){
                        count++;
                    }
                }
                if(count!=0){
                    a = true;
                    break;
                }
                count = 0;
            }
        }
        System.out.println(a);
    }
}
```

## Submission at 2024-10-04 06:15:47


```
// Write Java code from scratch
import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        Arrays.sort(arr);
        if(k==1)
            System.out.println(arr[m-1]);
    }
}
```

## Submission at 2024-10-04 06:27:48


```
// Write Java code from scratch
import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
            arr[i] = input.nextInt();
        Arrays.sort(arr);
        if(k==1)
            System.out.println(arr[m-1]);
        else
            System.out.println(arr[(m-1)+k]);
    }
}
```

## Submission at 2024-10-25 05:30:34


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
      ArrayList<Integer> ans = new ArrayList<>();
      if(root == null)
        return ans;
      ans.addAll(postOrder(root.left));
      ans.addAll(postOrder(root.right));
      ans.add(root.data);

      return ans;
    }
}
```

## Submission at 2024-10-25 05:47:06


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
        if(root == null)
            return true;
        return mirror(root.left,root.right);
    }
    public boolean mirror(Node left, Node right){
        if(left == null && right == null)
            return true;
        if(left.data != right.data)
            return false;
        return mirror(left.left,right.right) && mirror(left.right,right.left);
    }
}
```

## Submission at 2024-10-25 06:24:30


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String p = input.nextLine();
        String s1 = input.nextLine();
        String[] s = s1.split(" ");
        HashMap<Character,String> m1 = new HashMap<>();
        HashMap<String,Character> m2 = new HashMap<>();
        if(s.length != p.length())
            System.out.println("false");
        for(int i=0; i<p.length(); i++){
            char key = p.charAt(i);
            String value = s[i];
            m1.put(key,value);
        }
        for(int i=0; i<s.length; i++){
            String key = s[i];
            char value = p.charAt(i);
            m2.put(key,value);
        }
        for(int i=0; i<s.length; i++){
            if(!m1.get(p.charAt(i)).equals(s[i]))
                System.out.println("false");
            if(!m2.get(s[i]).equals(p.charAt(i)))
                System.out.println("false");
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-10-25 06:28:37


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
        if(root == null)
            return false;
        return mirror(root.left,root.right);
    }
    public boolean mirror(Node left, Node right){
        if(left == null && right == null)
            return true;
        if(left.data != right.data)
            return false;
        return mirror(left.left,right.right) && mirror(left.right,right.left);
    }
}
```

## Submission at 2024-10-25 06:30:02


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
        if(root == null)
            return false;
        return mirror(root.left,root.right);
    }
    public boolean mirror(Node left, Node right){
        if(left == null && right == null)
            return true;
        if(left == null || right == null || left.data != right.data)
            return false;
        return mirror(left.left,right.right) && mirror(left.right,right.left);
    }
}
```

## Submission at 2024-10-25 06:53:31


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String p = input.nextLine();
        String s1 = input.nextLine();
        String[] s = s1.split(" ");
        HashMap<Character,String> m1 = new HashMap<>();
        HashMap<String,Character> m2 = new HashMap<>();
        if(s.length != p.length())
            System.out.println("false");
        for(int i=0; i<p.length(); i++){
            char key = p.charAt(i);
            String value = s[i];
            m1.put(key,value);
        }
        for(int i=0; i<s.length; i++){
            String key = s[i];
            char value = p.charAt(i);
            m2.put(key,value);
        }
        for(int i=0; i<s.length; i++){
            if(m1.containsKey(p.charAt(i))){
                if(!m1.get(p.charAt(i)).equals(s[i]))
                    System.out.println("false");
            }
            if(m1.containsKey(p.charAt(i))){
                if(!m2.get(s[i]).equals(p.charAt(i)))
                    System.out.println("false");
            }
        }
        System.out.println("true");
    }
}

```

## Submission at 2024-10-25 06:59:28


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String p = input.nextLine();
        String s1 = input.nextLine();
        String[] s = s1.split(" ");
        HashMap<Character,String> m1 = new HashMap<>();
        HashMap<String,Character> m2 = new HashMap<>();
        if(s.length != p.length())
            System.out.println("false");
        for(int i=0; i<p.length(); i++){
            char key = p.charAt(i);
            String value = s[i];
            if(m1.containsKey(p.charAt(i))){
                if(!m1.get(p.charAt(i)).equals(s[i]))
                    System.out.println("false");
            }
            m1.put(key,value);
        }
        for(int i=0; i<s.length; i++){
            String key = s[i];
            char value = p.charAt(i);
            if(m2.containsKey(s[i])){
                if(!m2.get(s[i]).equals(p.charAt(i)))
                    System.out.println("false");
            }
            m2.put(key,value);
        }
        System.out.println("true");
    }
}

```

## Submission at 2024-11-22 05:07:05


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=1; i<n; i++){
            for(int j=1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:19:25


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            arr[i] = input.nextInt();
            sum += arr[i];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:27:28


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int n2 = input.nextInt();
        System.out.println(n2-n1);
    }
}
```

## Submission at 2024-11-22 05:42:47


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<arr.length; i++)
            arr[i] = input.nextInt();
        HashMap<Integer,Integer> m = new HashMap<>();
        int s = 0;
        for(int i=0; i<arr.length; i++){
            if(m.containsKey(arr[i]))
                s += 1;
            m.put(arr[i],i);
        }
        System.out.println(s);
    }
}
```

## Submission at 2024-11-22 05:56:56


```
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int n2 = input.nextInt();
        int d = input.nextInt();
        int[] arr1 = new int[n1];
        for(int i=0; i<n1; i++)
            arr1[i] = input.nextInt();
        int[] arr2 = new int[n2];
        for(int i=0; i<n2; i++)
            arr2[i] = input.nextInt();
            int dist = 0;
        for(int i=0; i<n1; i++){
            int sum = 0;
            for(int j=0; j<n2; j++){
                int n = Math.abs(arr1[i] - arr2[j]);
                if(n > d)
                    sum += 1;
            }
            if(sum == n2)
                dist += 1;
        }
        System.out.println(dist);
    }
}
```

## Submission at 2024-11-22 06:23:36


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        HashMap<Integer,Integer> m = new HashMap<>();
        for(int i=0; i<n; i++){
            m.put(arr[i],m.getOrDefault(arr[i],0) + 1);
        }
        for(int i=0; i<n; i++){
            if(m.get(arr[i]) == 1)
                System.out.println(arr[i]);
        }
    }
}
```

