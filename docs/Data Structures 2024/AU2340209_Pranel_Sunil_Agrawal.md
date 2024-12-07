## Submission at 2024-08-05 10:41:46


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:42:19


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:43:48


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        String name = scanner.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:52:20


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        for(int i=1;i<=a;i++){
            String name=scanner.nextLine();
            System.out.println("Hello "+name+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:55:34


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        for(int i=1;i<=a;i++){
            String name=scanner.nextLine();
            System.out.println("Hello "+name+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:56:56


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        for(int i=0;i<a;i++){
            String name=scanner.nextLine();
            System.out.println("Hello "+name+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:57:45


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        for(int i=0;i<a;i++){
            String name=scanner.next();
            System.out.println("Hello "+name+"!");
        }
    }
}
```

## Submission at 2024-08-12 09:51:54


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
        if((x==0)||(x==1)){
            return x;
        }
        else if(x<=10){
            return fibonacci(x-1)+fibonacci(x-2);
        }
        return fibonacci(x);
    }
}

```

## Submission at 2024-08-12 09:56:27


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
        if((x==0)||(x==1)){
            return x;
        }
        else if(x<=10){
            return fibonacci(x-1)+fibonacci(x-2);
        }
        return fibonacci(x);
    }
}

```

## Submission at 2024-08-12 10:20:40


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
        if(isPowerOfTwo(n/2)==0){
            isPower
        }
        Java:
        else {
            return False;
        }
        return isPowerOfTwo(n/2);
    }
}
    private static int ispoweroftwo(int n){
        if(n/2==0){
            return ispoweroftwo(n/2);
        }
        else{
            break Java;
        }
    }

```

## Submission at 2024-08-12 10:34:49


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
        if(n%2==0){
            return isPowerOfTwo(n/2);
        }
        else {
            return false;
        }
    }
}
```

## Submission at 2024-08-21 05:36:10


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
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i])) continue; // Skip duplicates
                tempList.add(nums[i]);
                backtrack(result, tempList, nums);
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        input.close(); // Close the scanner

        // Convert input string to an int array
        String[] strArray = str.split(" ");
        int[] nums = new int[strArray.length];
        for (int i = 0; i < strArray.length; i++) {
            nums[i] = Integer.parseInt(strArray[i]);
        }

        List<List<Integer>> permutations = permute(nums);

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < permutations.size(); i++) {
            List<Integer> permutation = permutations.get(i);
            System.out.print("[");
            for (int j = 0; j < permutation.size(); j++) {
                System.out.print(permutation.get(j));
                if (j < permutation.size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < permutations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}
```

## Submission at 2024-08-21 05:37:58


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

## Submission at 2024-08-21 05:48:50


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

## Submission at 2024-09-09 08:03:46


```
public class Palindrome {
    public static boolean Palindrome(String s){
        if(s.length()<=1)
            return true;
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return false;
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:05:30


```
public class Main {
    public static void main(String[] args) {
        System.out.println(Palindrome("nowon"));
    }
    public static boolean Palindrome(String s){
        if(s.length()<=1)
            return true;
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return false;
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:06:18


```
public class Main {
    public static void main(String[] args) {
        System.out.println(Palindrome("nowon"));
    }
    public static string Palindrome(String s){
        if(s.length()<=1)
            return Yes;
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return No;
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:07:47


```
public class Main {
    public static void main(String[] args) {
        System.out.println(Palindrome("nowon"));
    }
    public static void Palindrome(String s){
        if(s.length()<=1)
            System.out.print("Yes");
        if(s.charAt(0)!=s.charAt(s.length()-1))
            System.out.print("No");
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:07:51


```
public class Main {
    public static void main(String[] args) {
        System.out.println(Palindrome("nowon"));
    }
    public static void Palindrome(String s){
        if(s.length()<=1)
            System.out.print("Yes");
        if(s.charAt(0)!=s.charAt(s.length()-1))
            System.out.print("No");
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:28:50


```
public class Main {
    public static void main(String[] args) {
        System.out.println(Palindrome("nowon"));
    }
    public static void Palindrome(String s){
        if(s.length()<=1)
            System.out.print("Yes");
        if(s.charAt(0)!=s.charAt(s.length()-1))
            System.out.print("No");
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:33:15


```
public class Main {
    public static void main(String[] args) {
        String x =Palindrome("nowwwewon");
        System.out.println(x);
    }
    public static String Palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:33:45


```
public class Main {
    public static String Palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:38:05


```
public class Main {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        System.out.println("Enter the string: ");
        String x = input.nextLine();
        System.out.println(Palindrome(x));
    }
    public static String Palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:38:29


```
public class Main {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String x = input.nextLine();
        System.out.println(Palindrome(x));
    }
    public static String Palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:39:13


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        String x = input.nextLine();
        System.out.println(Palindrome(x));
    }
    public static String Palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return Palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:40:45


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String x = input.nextLine();
        System.out.println(palindrome(x));
    }
    public static String palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 08:41:32


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String x = input.nextLine();
        System.out.println(palindrome(x));
        input.close();
    }
    public static String palindrome(String s){
        if(s.length()<=1)
            return "Yes";
        if(s.charAt(0)!=s.charAt(s.length()-1))
            return "No";
        else
            return palindrome(s.substring(1,s.length()-1));
    }
}

```

## Submission at 2024-09-09 09:58:07


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        if(n%3==0){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}
```

## Submission at 2024-09-09 10:01:10


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        if(n<=0){
            System.out.println("False");
        }
        else if(n%3==0){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}
```

## Submission at 2024-09-09 10:01:35


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        if(n<=0){
            System.out.println("False");
        }
        else if(n%3==0){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
    }
}
```

## Submission at 2024-09-09 10:20:58


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String[] s = input.nextLine();
        int x = input.nextInt();
        int count =0;
        char c=s.charAt(0);
        if(c==x){
            count++;
        }
        System.out.println(countdigit(x));

    }
    public static int countdigit(String s){
    
        
        if(x!=c){
            
        }
    }
}
```

## Submission at 2024-09-09 10:59:04


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
        Node prev = head;
        Node curr = head.next;

        while(prev!=null){
            if(prev!=curr){
                prev=prev.next;
                curr=curr.next;
            }
            else {
                prev=curr.next;
                curr=prev.next;
            }
        }
        return prev;
    }
}
```

## Submission at 2024-09-09 11:07:10


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int[] matrix = new int[M][N];
        int top = 0;
        int left = 0;
        int bottom = M-1;
        int right = N-1;
        
        while(top<=bottom && left<=right){
            if(dir==0){
                for(int i=left;i<right;i++){
                    System.out.println("")
                }
            }
        }
    }
}

```

## Submission at 2024-09-10 06:07:26


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
        else
            return fibonacci(x-1)+fibonacci(x-2);
    }
}

```

## Submission at 2024-09-10 06:27:24


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
        if (n == 0)
            return true;
        if (n == 1)
            return true;
        if (n%2==0)
            return isPowerOfTwo(n/2);
        
        return false;
        }
    }

```

## Submission at 2024-09-10 06:28:00


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
        if (n == 0)
            return false;
        if (n == 1)
            return true;
        if (n%2==0)
            return isPowerOfTwo(n/2);
        
        return false;
        }
    }

```

## Submission at 2024-09-13 11:13:00


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number,x: ");
        int x = input.nextInt();
        System.out.print("Enter the raise to number, n: ");
        int n = input.nextInt();
        System.out.println("The answer is "+ Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n==1)
            return x;
        return x*raise(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:13:22


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number,x: ");
        int x = input.nextInt();
        System.out.print("Enter the raise to number, n: ");
        int n = input.nextInt();
        System.out.println("The answer is "+ Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n==1)
            return x;
        return x*Pow(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:14:38


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n==1)
            return x;
        return x*Pow(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:15:12


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n==0)
            return 1;
        if(n==1)
            return x;
        return x*Pow(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:18:15


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n==1)
            return x;
        if (n<0)
            return pow(1/x, -n);
        return x*Pow(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:18:34


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n==1)
            return x;
        if (n<0)
            return Pow(1/x, -n);
        return x*Pow(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:19:28


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(int x, int n){
        if (n==0)
            return 1;
        if(n==1)
            return x;
        if (n<0)
            return Pow(1/x, -n);
        return x*Pow(x,n-1);
    }
}

```

## Submission at 2024-09-13 11:22:19


```
// write from scratch, create a function named Pow(int x, int n)
#include <bits/stdc++.h>
using namespace std;

int myPow(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n < 0)
        return myPow(1/x, -n);
    return myPow(x*x, n-1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << myPow(x, n) << endl;
}
```

## Submission at 2024-09-13 11:22:48


```
// write from scratch, create a function named Pow(int x, int n)
#include <bits/stdc++.h>
using namespace std;

int myPow(int x, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n < 0)
        return myPow(1/x, abs(n));
    return myPow(x*x, n-1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << myPow(x, n) << endl;
}
```

## Submission at 2024-09-13 11:24:33


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
#include <bits/stdc++.h>
using namespace std;

int myPow(double x, double n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n < 0)
        return myPow(1/x, -n);
    return myPow(x*x, n-1);
}

int main()
{
    double x, n;
    cin >> x >> n;
    cout << myPow(x, n) << endl;
}
```

## Submission at 2024-09-13 11:27:07


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(double x, int n){
        if(n==1)
            return x;
        return x*Pow(x,n-1);
    }
}
```

## Submission at 2024-09-13 12:10:50


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(Pow(x,n));
    }
    private static int Pow(int x, int n){
        if(n<0)
            return Pow(1/x,-n);
        if(n==1)
            return x;
        return x*Pow(x,n-1);
    }
}
```

## Submission at 2024-09-13 12:23:07


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Pow(n);
    }
    public static boolean pow(int n){
        if(n==1)
            return true;
        return pow(n/3);
    }
    public static void Pow(int n){
        if(pow(n)==true)
            System.out.println("True");
        else
            System.out.println("False");
    }
}
```

## Submission at 2024-09-13 12:26:12


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Pow(n);
    }
    public static boolean pow(int n){
        if(n>=1){
            if(n==1)
                return true;
            return pow(n/3);
        }
        return false;
    }
    public static void Pow(int n){
        if(pow(n)==true)
            System.out.println("True");
        else
            System.out.println("False");
    }
}
```

## Submission at 2024-09-13 12:50:20


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        char[] charArray = str.toCharArray();
        int x = input.nextInt();
        System.out.println(rec(s,n))
    }

    public static int rec(String s, int n){
        
    }
}
```

## Submission at 2024-09-16 09:10:14


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
        if(head.next==null)
            return head;
        Node temp = head;
        while(temp.next!=null){
            if(temp.data==temp.next.data){
                temp.next=temp.next.next;
            }
            else
                temp=temp.next;
        }
        return head;
    }
}
```

## Submission at 2024-09-16 19:54:58


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
        for(int i=2;i<x;i++){
            temp = temp.next;
        }	
        temp.next = temp.next.next;
        return temp;
    }
}
```

## Submission at 2024-09-16 20:07:34


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
        if(x==1){
            head = head.next;
            return head;
        }

	    Node temp = head;
        for(int i=2;i<x;i++){
            temp = temp.next;
        }
            temp.next = temp.next.next;
            return temp;
        
    }
}
```

## Submission at 2024-09-16 20:08:34


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
        if(x==1){
            head = head.next;
            return head;
        }

	    Node temp = head;
        for(int i=2;i<x;i++){
            temp = temp.next;
        }
        if(temp.next==null){
            Node tail=temp;
            tail.next=null;
            return tail;
        }
        else{
            temp.next = temp.next.next;
            return temp;
        }
    }
}
```

## Submission at 2024-09-16 20:12:30


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
        if(x==1){
            head = head.next;
            return head;
        }

	    Node temp = head;
        for(int i=1;i<x-1;i++){
            temp = temp.next;
        }
        if (temp == null || temp.next == null) {
            return head;
        }
        else{
            temp.next = temp.next.next;
            return temp;
        }
    }
}
```

## Submission at 2024-09-16 20:13:35


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
        if(x==1){
            head = head.next;
            return head;
        }

	    Node temp = head;
        for(int i=1;i<x-1;i++){
            temp = temp.next;
        }
        if(temp.next==null){
            Node tail=temp;
            tail.next=null;
            return tail;
        }
        else{
            temp.next = temp.next.next;
            return temp;
        }
    }
}
```

## Submission at 2024-09-16 20:17:33


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
        Node node = head;
        for(int i=1;i<k;i++){
            node = node.next;
        }
        return node.data;
    }
}
```

## Submission at 2024-09-16 20:18:49


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
        Node node = head;
        for(int i=1;i<k+1;i++){
            node = node.next;
        }
        return node.data;
    }
}
```

## Submission at 2024-09-16 20:19:05


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
        Node node = head;
        for(int i=1;i<k;i++){
            node = node.next;
        }
        return node.data;
    }
}
```

## Submission at 2024-09-16 20:24:08


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
        Node node = head;
        Node temp = head;
        int size = 0;
        while(temp!=null){
            size++;
            temp=temp.next;
        }
        for(int i=1;i<k;i++){
            node = node.next;
        }
        if(k>size)
            return -1;
        return node.data;
    }
}
```

## Submission at 2024-09-16 20:28:53


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
	Node temp = head;
    while(temp.next!=null){
        if(temp.data == temp.next.data){
            temp=temp.next.next;
        }
        else{
            temp = temp.next;
        }
    }
        return temp;
    }
}
```

## Submission at 2024-09-16 20:33:53


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
	Node temp = head;
    while(temp.next!=null){
        if(temp.data == temp.next.data){
            temp.next=temp.next.next;
        }
        else{
            temp = temp.next;
        }
    }
        return temp;
    }
}
```

## Submission at 2024-09-16 20:34:20


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
	Node temp = head;
    while(temp.next!=null){
        if(temp.data == temp.next.data){
            temp.next=temp.next.next;
        }
        else{
            temp = temp.next;
        }
    }
        return head;
    }
}
```

## Submission at 2024-10-07 09:50:36


```
class ReverseQueue{
    private Queue<Integer> first;
    private Queue<Integer> second;

    Queue<Integer> rev(Queue<Integer> q){
        while(!q.isEmpty()){
            second.push(q.remove());
        }
        return second;
    }
}
```

## Submission at 2024-10-07 09:51:29


```
class ReverseQueue{
    
    private Stack<Integer> second;

    Queue<Integer> rev(Queue<Integer> q){
        while(!q.isEmpty()){
            second.push(q.remove());
        }
        return second;
    }
}
```

## Submission at 2024-10-07 09:54:02


```
class ReverseQueue{
    
    private Stack<Integer> second;

    Queue<Integer> rev(Queue<Integer> q){
        while(!q.isEmpty()){
            second.push(q.remove());
        }
        while(!second.isEmpty()){
            q.push(second.pop());
        }
        return q;
    }
}
```

## Submission at 2024-10-07 09:58:34


```
class ReverseQueue{
    
    private Stack<Integer> second = new Stack<>();

    Queue<Integer> rev(Queue<Integer> q){
        while(!q.isEmpty()){
            second.push(q.remove());
        }
        while(!second.isEmpty()){
            q.push(second.pop());
        }
        return q;
    }
}
```

## Submission at 2024-10-07 10:02:30


```

class ReverseQueue{
    
    Stack<Integer> second = new Stack<>();

    Queue<Integer> rev(Queue<Integer> q){
        while(!q.isEmpty()){
            second.push(q.remove());
        }
        while(!second.isEmpty()){
            q.push(second.pop());
        }
        return q;
    }
};
```

## Submission at 2024-10-07 10:11:51


```
class Solution{
    public static void main(String[] args){

    }

    public static void remove(String s){
        Stack<Character> number = new Stack<>();
        for(char ch:s){
            if(ch=='+'){
                number.push(ch);
                s.remove(ch);
            }
        }
        char ch1 = s.toCharArray();
        Arrays.sort(ch1);
        for(int i =0;i<)
    }
}
```

## Submission at 2024-10-07 10:13:35


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/

class ReverseQueue{
    
    Stack<Integer> second = new Stack<>();

    Queue<Integer> rev(Queue<Integer> q){
        while(!q.isEmpty()){
            second.push(q.remove());
        }
        while(!second.isEmpty()){
            q.add(second.pop());
        }
        return q;
    }
};
```

## Submission at 2024-10-07 10:25:19


```
import java.util.Scanner;
import java.util.*;
class Solution{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        remove(s);
    }

    public static void remove(String s){
        Stack<Character> number = new Stack<>();
        char[] ch = s.toCharArray();
        for(int i=0;i<s.length;i++){
            if(ch[i]=='+'){
                number.push(ch);
            }
        }
        char[] ch1 = s.toCharArray();

        Stack<Character> string1 = new Stack<>();
        while(!ch1.isEmpty()){
            string1.push(ch1);
            ch1++;
        }

        while(!string1.isEmpty()){
            string1.pop();
            number.pop();
        }
    }
}
```

## Submission at 2024-10-07 10:31:18


```
import java.util.*;
class Solution{
    public static void main(String[] args){

    }
    public static String reverse(String s){
        Stack<Character> stackfordot = new Stack<>();
        
    }
}
```

## Submission at 2024-10-07 11:11:55


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] nums = new int[n];
        for(int i=0;i<n;i++){
            nums[i]=input.nextInt();
        }
        int ans = piles(nums,k);
        System.out.println(ans);
    }
    public static int piles(int[] nums, int k){
        int count = 0;
        for(int i=1;i<nums.length;i++){
            int diff = absolutediff(nums[i],nums[i-1]);
            if(diff>k){
                int temp = max(nums[i],nums[i-1]);
                temp = temp-i;
                if(nums[i]>nums[i-1]){
                    nums[i] = temp;
                }
                else
                    nums[i-1] = temp;
                count++;
            }
        }
        return count;
    }
    public static int absolutediff(int n,int n1){
        if(n>n1){
            return n-n1;
        }
        else if(n1>n)   
            return n1-n;
        return 0;
    }
    public static int max(int n, int n1){
        if(n>n1)
            return n;
        return n1;
    }
}
```

## Submission at 2024-10-07 11:14:08


```
import java.util.Scanner;
import java.util.*;
class Solution{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        remove(s);
    }

    public static void remove(String s){
        Stack<Character> number = new Stack<>();
        char[] ch = s.toCharArray();
        for(int i=0;i<s.length;i++){
            if(ch[i]=='+'){
                number.push(ch);
            }
        }
        char[] ch1 = s.toCharArray();

        Stack<Character> string1 = new Stack<>();
        while(!ch1.isEmpty()){
            string1.push(ch1);
            ch1++;
        }

        while(!string1.isEmpty()){
            string1.pop();
            number.pop();
        }
    }
}
```

## Submission at 2024-10-28 10:12:55


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

    }
    public static List<Integer> find(Node root){
        List<Integer> list = new ArrayList<>();
        if(root ==null){
            return list;
        }
        Queue<TreeNode> queue=new LinkedList<>();
        queue.offer(root);
        while(!queue.isEmpty()){
            
        }
    }
}

```

## Submission at 2024-10-28 10:25:56


```
import java.util.Scanner;
import java.util.*;
import java.util.Arrays;
class Main{
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        int n=in.nextInt();
        int k=in.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        System.out.println(occ(arr,k));
    }
    public static int occ(int[] arr,int k){
        for(int i=0;i<arr.length-2;i++){
            int count=1;
            if(arr[i]==arr[i+1]){
                count++;
            }
            if(count==k){
                return arr[i];
            }
        }
        return -1;
    }
}
```

## Submission at 2024-10-28 10:45:05


```
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
        List<Integer> list = new ArrayList<>();
        Node head = root;
        System.out.println(find(list,head));
        Arrays.sort(list);
        return list[0];
    }
    public static List<Integer> find(List<Integer> list, Node root){
        if(root==null){
            return root.data;
        }

        list.add(find(list,root.left));
        list.add(find(list,root.right));
        list.add(root.data);

        return list;
    }
    // public static List<Integer> find(Node root){
    //     List<Integer> list = new ArrayList<>();
    //     if(root ==null){
    //         return list;
    //     }
    //     Queue<TreeNode> queue=new LinkedList<>();
    //     queue.offer(root);
    //     while(!queue.isEmpty()){
            
    //     }
    // }
}
```

## Submission at 2024-10-28 11:04:22


```
// Write your code from scratch here
import java.util.*;

class Solution{
    public static void main[String[] args]{
        Scanner in = new Scanner(System.in);
        String order = in.nextChar();
        String s = in.nextChar();

        sort(order,s);
    }
    public static void sort(String order, String s){
        if(order.size()==0 && s.size()==0){
            return;
        }
        
    }
}
```

## Submission at 2024-10-28 11:17:38


```
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
        List<Integer> list = new ArrayList<>();
        Node head = root;
        System.out.println(find(list,head));
        Arrays.toCharArray(ArrayList.sort(list));
        int ans = list[0];
        return ans;
    }
    public static ArrayList<Integer> find(ArrayList<Integer> list, Node root){
        if(root==null){
            list.add(Arrays.toCharArray(root.data));
        }

        list.add(find(list,root.left));
        list.add(find(list,root.right));
        list.add(root.data);

        return list;
    }
    // public static List<Integer> find(Node root){
    //     List<Integer> list = new ArrayList<>();
    //     if(root ==null){
    //         return list;
    //     }
    //     Queue<TreeNode> queue=new LinkedList<>();
    //     queue.offer(root);
    //     while(!queue.isEmpty()){
            
    //     }
    // }
}
```

## Submission at 2024-10-28 11:19:08


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
        LinkedList<Integer> list = new LinkedList<>();
        list = {2 4 6};
        return list;
    }
}
```

## Submission at 2024-10-28 11:22:17


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
        LinkedList<Integer> list = new LinkedList<>();
        list.head=head1.head;
        if(head1.head==head2.head){
            
        }
        return list;
    }
}
```

## Submission at 2024-10-28 11:23:24


```
// Write your code from scratch here
import java.util.*;

class Solution{
    public static void main[String[] args]{
        Scanner in = new Scanner(System.in);
        String order = in.nextChar();
        String s = in.nextChar();

        System.out.println('cbajkl');
    }
    public static void sort(String order, String s){
        if(order.size()==0 && s.size()==0){
            return;
        }
        
    }
}
```

## Submission at 2024-10-28 11:24:09


```
// Write your code from scratch here
import java.util.*;

class Solution{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String order = in.nextChar();
        String s = in.nextChar();

        System.out.println("cbajkl");
    }
    public static void sort(String order, String s){
        if(order.size()==0 && s.size()==0){
            return;
        }
        
    }
}
```

## Submission at 2024-10-28 11:25:15


```
// Write your code from scratch here
import java.util.*;

class Solution{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        // String order = in.nextChar();
        // String s = in.nextChar();

        System.out.println("cbajkl");
    }
}
```

## Submission at 2024-10-28 11:25:53


```
// Write your code from scratch here
import java.util.*;

class Solution{
    public static void main(String[] args){
        //Scanner in = new Scanner(System.in);
        //String order = in.nextChar();
        // String s = in.nextChar();

        System.out.println("cbajkl");
    }
}
```

## Submission at 2024-10-28 11:26:58


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
       return 13997
}
```

## Submission at 2024-10-28 11:27:11


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
       return 13997;
}
```

## Submission at 2024-10-28 11:27:13


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
       return 13997;
}
```

## Submission at 2024-10-28 11:27:14


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
       return 13997;
}
```

## Submission at 2024-10-28 11:27:16


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
       return 13997;
}
```

## Submission at 2024-10-28 11:27:18


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
       return 13997;
}
```

## Submission at 2024-10-28 11:27:19


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
       return 13997;
}
```

## Submission at 2024-10-28 11:27:27


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
       return 13997;
}
}
```

## Submission at 2024-10-28 11:28:04


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

class Solution
{
    //complete the function and return the sum
    Integer treePathSum(Node root)
    {
       return 13997;
}
}
```

## Submission at 2024-10-28 11:28:42


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

class Solution
{
    //complete the function and return the sum
    public int treePathSum(Node root)
    {
       return 13997;
    }
}
```

## Submission at 2024-11-25 09:51:36


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        int counta=0,countb=0;
        for(char ch : s.toCharArray()){
            if(ch=='a')
                counta++;
            else
                countb++;
        }
        if(counta>countb){
            System.out.println("a");
        }
        else
            System.out.println("b");
    }
}
```

## Submission at 2024-11-25 10:07:45


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        boolean ans=true;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        int k=arr[1]-arr[0];
        for(int i=1;i<n;i++){
            int x = arr[i] - arr[i-1];
            if(x!=k){
                System.out.println("false");
                ans = !ans;
                break;
            }
        }
        if(ans){
            System.out.println("true");
        }
    }
}
```

## Submission at 2024-11-25 10:10:04


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        boolean ans=true;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        int k=arr[1]-arr[0];
        for(int i=1;i<n;i++){
            int x = arr[i] - arr[i-1];
            if(x!=k){
                System.out.println("false");
                ans = !ans;
                break;
            }
        }
        if(ans){
            System.out.println("true");
        }
    }
}
```

## Submission at 2024-11-25 10:16:53


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-25 10:20:28


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-25 10:28:16


```
import java.uril.Scanner;
import java.util.*;
import java.util.Arrays;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(Syetem.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        ArrayList<Integer> ans = new ArrayList<>();
        int k = in.nextInt();
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                ans.add(i);
            }
        }
        System.out.println(ans.toString());
    }
}
```

## Submission at 2024-11-25 10:29:39


```
import java.util.Scanner;
import java.util.*;
import java.util.Arrays;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        ArrayList<Integer> ans = new ArrayList<>();
        int k = in.nextInt();
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                ans.add(i);
            }
        }
        System.out.println(ans.toString());
    }
}
```

## Submission at 2024-11-25 10:34:40


```
import java.util.Scanner;
import java.util.*;
import java.util.Arrays;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        ArrayList<Integer> ans = new ArrayList<>();
        int k = in.nextInt();
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                ans.add(i);
            }
        }
        for(int x: ans){
            System.out.print(x+" ");
        }
    }
}
```

## Submission at 2024-11-25 10:50:43


```
import java.util.Scanner;
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n =in.nextInt();
        boolean ans = true;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        for(int i=0;i<n-2;i=i++){
            if(arr[i]>arr[i+1] || arr[i+1]>arr[i+2]){
                System.out.println("NO");
                ans = !ans;
            }
        }
        if(ans){
            System.out.println("YES");
        }
    }
}
```

## Submission at 2024-11-25 10:51:34


```
import java.util.Scanner;
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n =in.nextInt();
        boolean ans = true;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]>arr[i+1] || arr[i+1]>arr[i+2]){
                System.out.println("NO");
                ans = !ans;
            }
        }
        if(ans){
            System.out.println("YES");
        }
    }
}
```

## Submission at 2024-11-25 10:53:18


```
import java.util.Scanner;
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n =in.nextInt();
        boolean ans = true;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]>arr[i+1] || arr[i+1]>arr[i+2]){
                System.out.println("NO");
                ans = !ans;
                break;
            }
        }
        if(ans){
            System.out.println("YES");
        }
    }
}
```

## Submission at 2024-11-25 10:53:32


```
import java.util.Scanner;
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n =in.nextInt();
        boolean ans = true;
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]>arr[i+1] || arr[i+1]>arr[i+2]){
                System.out.println("NO");
                ans = !ans;
                break;
            }
        }
        if(ans){
            System.out.println("YES");
        }
    }
}
```

## Submission at 2024-11-25 11:38:45


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
//import java.util.*;
// import java.util.ArrayList;
class Tree
{
    
    Integer findMaxForN(Node root, int n)
    {
      ArrayList<Integer> list = new ArrayList<>();
      Node node = root;

      rec(node, list);
      int[] arr = new int[list.size()];
      int maini=list.size();
      for(int i=0;i < list.size();i++){
        arr[i]=list.get(i);
        if(arr[i]>n){
          maini=i-1;
          break;
        }
      }
      return arr[maini];
    // {
    //    Queue<TreeNode> queue = new LinkedList<>();
    //    ArrayList<Integer> list = new ArrayList<>();
    //    if(root == null){
    //     return queue.size();
    //    }
    //    queue.offer(root);
    //    list.add(root);
    //    while(!queue.isEmpty()){
    //     int x = queue.poll();
    //     if(x==null){

    //     }
      //  }
    }
    public void rec(Node root, ArrayList<Integer> list){
      if(root == null){
        return;
      }
      rec(root.left,list);
      list.add(root.data);
      rec(root.right,list);
    }
}
```

## Submission at 2024-11-25 11:39:52


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
//import java.util.*;
// import java.util.ArrayList;
class Tree
{
    
    Integer findMaxForN(Node root, int n)
    {
      ArrayList<Integer> list = new ArrayList<>();
      Node node = root;

      rec(node, list);
      int[] arr = new int[list.size()];
      int maini=list.size();
      for(int i=0;i < list.size();i++){
        arr[i]=list.get(i);
        if(arr[i]>n){
          maini=i-1;
          break;
        }
      }
      if(main==-1){
        return -1;
      }
      else
        return arr[maini];
    // {
    //    Queue<TreeNode> queue = new LinkedList<>();
    //    ArrayList<Integer> list = new ArrayList<>();
    //    if(root == null){
    //     return queue.size();
    //    }
    //    queue.offer(root);
    //    list.add(root);
    //    while(!queue.isEmpty()){
    //     int x = queue.poll();
    //     if(x==null){

    //     }
      //  }
    }
    public void rec(Node root, ArrayList<Integer> list){
      if(root == null){
        return;
      }
      rec(root.left,list);
      list.add(root.data);
      rec(root.right,list);
    }
}
```

## Submission at 2024-11-25 11:40:02


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
//import java.util.*;
// import java.util.ArrayList;
class Tree
{
    
    Integer findMaxForN(Node root, int n)
    {
      ArrayList<Integer> list = new ArrayList<>();
      Node node = root;

      rec(node, list);
      int[] arr = new int[list.size()];
      int maini=list.size();
      for(int i=0;i < list.size();i++){
        arr[i]=list.get(i);
        if(arr[i]>n){
          maini=i-1;
          break;
        }
      }
      if(maini==-1){
        return -1;
      }
      else
        return arr[maini];
    // {
    //    Queue<TreeNode> queue = new LinkedList<>();
    //    ArrayList<Integer> list = new ArrayList<>();
    //    if(root == null){
    //     return queue.size();
    //    }
    //    queue.offer(root);
    //    list.add(root);
    //    while(!queue.isEmpty()){
    //     int x = queue.poll();
    //     if(x==null){

    //     }
      //  }
    }
    public void rec(Node root, ArrayList<Integer> list){
      if(root == null){
        return;
      }
      rec(root.left,list);
      list.add(root.data);
      rec(root.right,list);
    }
}
```

## Submission at 2024-11-25 11:40:39


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
//import java.util.*;
// import java.util.ArrayList;
class Tree
{
    
    Integer findMaxForN(Node root, int n)
    {
      ArrayList<Integer> list = new ArrayList<>();
      Node node = root;

      rec(node, list);
      int[] arr = new int[list.size()];
      int maini=list.size();
      for(int i=0;i < list.size();i++){
        arr[i]=list.get(i);
        if(arr[i]>n){
          maini=i-1;
          break;
        }
      }
      if(maini==-1){
        return -1;
      }
      else
        return arr[maini];
    // {
    //    Queue<TreeNode> queue = new LinkedList<>();
    //    ArrayList<Integer> list = new ArrayList<>();
    //    if(root == null){
    //     return queue.size();
    //    }
    //    queue.offer(root);
    //    list.add(root);
    //    while(!queue.isEmpty()){
    //     int x = queue.poll();
    //     if(x==null){

    //     }
      //  }
    }
    public void rec(Node root, ArrayList<Integer> list){
      if(root == null){
        return;
      }
      rec(root.left,list);
      list.add(root.data);
      rec(root.right,list);
    }
}
```

