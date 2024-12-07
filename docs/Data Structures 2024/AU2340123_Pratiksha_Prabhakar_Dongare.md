## Submission at 2024-08-09 05:01:30


```
import java.util.Scanner;

public class Main  {
    public static void main(String[]args){
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the name: ");
    String name = sc.nextLine();
    System.out.print("Hello" + " " + name +"!");
    }
}
```

## Submission at 2024-08-16 05:05:52


```
import java.util.*;

class Main {

 public static int fibonacciSeries(int x){
        if(x == 0){
            return 0;
        }else if( x == 1){
            return 1;
        }else{
            return fibonacciSeries(x-1) + fibonacciSeries(x-2);
        }
    }
    
       public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.print(fibonacciSeries(x));

    }   
}


```

## Submission at 2024-08-16 05:49:39


```
import java.util.*;

class Main {

    static boolean isPowerOfTwo(int n){
        if(n==1){
            return true;
        }else if(n<=0 || n % 2!=0){
            return false;
        }else{
            return isPowerOfTwo(n/2);
        }
    }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        System.out.print(isPowerOfTwo(n));
    }  
}

```

## Submission at 2024-08-22 12:15:50


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main {

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        backtrack(result, combination, 1, n, k);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> combination, int start, int n, int k) {
        if (k == 0) {
            result.add(new ArrayList<>(combination));
            return;
        }
        
        for (int i = start; i <= n; i++) {
            combination.add(i);
            backtrack(result, combination, i + 1, n, k - 1);
            combination.remove(combination.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();

        List<List<Integer>> combinations = combine(n, k);

        for (List<Integer> combination : combinations) {
            System.out.println(combination);
        }
    }
}
```

## Submission at 2024-08-22 12:17:16


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main {

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        backtrack(result, combination, 1, n, k);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> combination, int start, int n, int k) {
        if (k == 0) {
            result.add(new ArrayList<>(combination));
            return;
        }
        
        for (int i = start; i <= n; i++) {
            combination.add(i);
            backtrack(result, combination, i + 1, n, k - 1);
            combination.remove(combination.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();

        List<List<Integer>> combinations = combine(n, k);

        for (List<Integer> combination : combinations) {
            System.out.print(combination);
        }
    }
}
```

## Submission at 2024-08-22 12:17:24


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main {

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        backtrack(result, combination, 1, n, k);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> combination, int start, int n, int k) {
        if (k == 0) {
            result.add(new ArrayList<>(combination));
            return;
        }
        
        for (int i = start; i <= n; i++) {
            combination.add(i);
            backtrack(result, combination, i + 1, n, k - 1);
            combination.remove(combination.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();

        List<List<Integer>> combinations = combine(n, k);

        for (List<Integer> combination : combinations) {
            System.out.print(combination);
        }
    }
}
```

## Submission at 2024-08-22 12:18:47


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Main {

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        backtrack(result, combination, 1, n, k);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> combination, int start, int n, int k) {
        if (k == 0) {
            result.add(new ArrayList<>(combination));
            return;
        }
        
        for (int i = start; i <= n; i++) {
            combination.add(i);
            backtrack(result, combination, i + 1, n, k - 1);
            combination.remove(combination.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();

        List<List<Integer>> combinations = combine(n, k);

        for (List<Integer> combination : combinations) {
            System.out.print(combination);
        }
    }
}
```

## Submission at 2024-08-22 12:33:08


```
import java.util.*;

public class Main {

    public static void permute(List<Integer> nums, List<List<Integer>> result, int start) {
        if (start >= nums.size()) {
            result.add(new ArrayList<>(nums));
            return;
        }

        for (int i = start; i < nums.size(); ++i) {
            Collections.swap(nums, start, i);
            permute(nums, result, start + 1);
            Collections.swap(nums, start, i);
        }
    }

    // Function to generate all permutations and return them in sorted order
    public static List<List<Integer>> permuteUnique(List<Integer> nums) {
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, result, 0);

        // Sort the result to ensure permutations are in sorted order
        Collections.sort(result, new Comparator<List<Integer>>() {
            public int compare(List<Integer> a, List<Integer> b) {
                if (a.size() != b.size()) return Integer.compare(a.size(), b.size());
                for (int i = 0; i < a.size(); ++i) {
                    if (!a.get(i).equals(b.get(i))) return Integer.compare(a.get(i), b.get(i));
                }
                return 0;
            }
        });

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String line = scanner.nextLine();

        Scanner iss = new Scanner(line);
        List<Integer> nums = new ArrayList<>();
        while (iss.hasNextInt()) {
            nums.add(iss.nextInt());
        }

        List<List<Integer>> permutations = permuteUnique(nums);

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < permutations.size(); ++i) {
            System.out.print("[");
            for (int j = 0; j < permutations.get(i).size(); ++j) {
                System.out.print(permutations.get(i).get(j));
                if (j < permutations.get(i).size() - 1) System.out.print(",");
            }
            System.out.print("]");
            if (i < permutations.size() - 1) System.out.print(",");
        }
        System.out.println("]");
    }
}


```

## Submission at 2024-08-22 12:35:14


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    private static void generateParenthesis(int n, int open, int close, String current, List<String> result) {
        if (current.length() == 2 * n) {
            result.add(current);
            return;
        }

        if (open < n) {
            generateParenthesis(n, open + 1, close, current + '(', result);
        }

        if (close < open) {
            generateParenthesis(n, open, close + 1, current + ')', result);
        }
    }

    private static List<String> generateParentheses(int n) {
        List<String> result = new ArrayList<>();
        generateParenthesis(n, 0, 0, "", result);
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<String> combinations = generateParentheses(n);

        // Print the combinations
        System.out.print("[");
        for (int i = 0; i < combinations.size(); i++) {
            System.out.print("\"" + combinations.get(i) + "\"");
            if (i < combinations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}


```

## Submission at 2024-08-22 12:37:36


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void combine(int start, int k, int n, List<Integer> current, List<List<Integer>> result) {
        // Base case
        if (current.size() == k) {
            result.add(new ArrayList<>(current));
            return;
        }

        // Recursive case
        for (int i = start; i <= n; ++i) {
            current.add(i); // Adding the current number to the combination
            combine(i + 1, k, n, current, result); // Recurse with the next number
            current.remove(current.size() - 1); // Removing the last number
        }
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        combine(1, k, n, current, result);
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) System.out.print(",");
            }
            System.out.print("]");
            if (i == result.size() - 1) continue;
            System.out.print(",");
        }
        System.out.print("]");
        
        scanner.close();
    }
}


```

## Submission at 2024-08-22 12:39:26


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void combine(int start, int k, int n, List<Integer> current, List<List<Integer>> result) {
        // Base case
        if (current.size() == k) {
            result.add(new ArrayList<>(current));
            return;
        }

        // Recursive case
        for (int i = start; i <= n; ++i) {
            current.add(i); // Adding the current number to the combination
            combine(i + 1, k, n, current, result); // Recurse with the next number
            current.remove(current.size() - 1); // Removing the last number
        }
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        combine(1, k, n, current, result);
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) System.out.print(",");
            }
            System.out.print("]");
            if (i == result.size() - 1) continue;
            System.out.print(",");
        }
        System.out.print("]");
        
        scanner.close();
    }
}


```

## Submission at 2024-08-28 07:25:53


```
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    static boolean areArraysAreEqual(int[]array1, int[]array2) {
        if (array1.length != array2.length) {
            return false;
        }

        // sort two arrays
        Arrays.sort(array1);
        Arrays.sort(array2);

        // check if the elements are equal or not
        for(int i=0; i<array1.length; i++){
            if(array1[i] == array2[i]){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int [] array1 = new int[n1];
        for(int i=0; i<n1; i++){
            array1[i] = sc.nextInt();
        }

        int [] array2 = new int[n2];
        for(int i=0; i<n2; i++){
            array2[i] = sc.nextInt();
        }
 
        System.out.println(areArraysAreEqual(array1, array2));
    }
}

```

## Submission at 2024-08-28 07:34:57


```
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]array){
        for(int i=0; i<array.length; i++){ // row
            for(int j=0; j<array[i].length; j++){ // column
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void transposeInPlace(int[][]matrix, int r, int c){

       for(int i=0; i<c; i++) {
            for (int j=i; j<r; j++) {
                
            // swap (a[i][j] to b[j][i]
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();


        int[][] matrix = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        transposeInPlace(matrix, r, c);
        printMatrix(matrix);
    }

}

```

## Submission at 2024-08-29 12:37:37


```
import java.util.Scanner;

public class Main{

    static void spiralMatrix(int[][]matrix, int r, int c){
        int topRow = 0, bottomRow = r-1, firstCol = 0, lastCol = c-1;

        int totalElements =0;

        while(totalElements < r * c){

        // topRow = firstcol --> lastcol
        for(int j=firstCol; j<=lastCol && totalElements < r * c; j++){
            System.out.print(matrix[topRow][j] + " ");
            totalElements++;
        }
        topRow++;

        // lastcol = toprow --> bottomrow
        for(int i=topRow; i<=bottomRow && totalElements < r * c ; i++){
            System.out.print(matrix[i][lastCol] + " ");
            totalElements++;
        }
        lastCol--;

          // bottomrow = lastcol --> firstcol
        for(int j=lastCol; j>=firstCol && totalElements < r * c ; j--){
            System.out.print(matrix[bottomRow][j] + " ");
            totalElements++;
        }
        bottomRow--;

           // firstcol = bottomrow --> toprow
        for(int i=bottomRow; i>=topRow && totalElements < r * c ; i--){
            System.out.print(matrix[i][firstCol] + " ");
            totalElements++;
        }
        firstCol++;

        }
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][]matrix = new int[r][c];

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                matrix[i][j] = sc.nextInt();
            }
        }

        spiralMatrix(matrix, r, c);
    }
}
```

## Submission at 2024-08-29 12:41:32


```
import java.util.Scanner;

public class Main {

    static int sumMultiples(int n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {

            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum = sum + i; 
            }
        }
        return sum; 
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int ans = sumMultiples(n);
        System.out.println(ans);
    }
}
```

## Submission at 2024-08-30 02:29:18


```
import java.util.Scanner;

public class Main {
    static boolean allDigitsEven(int n){
        while(n > 0){
            int num = n % 10;
            if(num % 2 != 0){
                return false;
            }
            n/=10;
        }
        return true;
    }

    static int evenNumbers(int[]array) {
        int count = 0;
        for (int i = 0; i < array.length; i++) {
            if (allDigitsEven(array[i])) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[]array = new int[n];

        for(int i=0; i< n; i++){
            array[i] = sc.nextInt();
        }

        int ans = evenNumbers(array);
        System.out.println(ans);
    }
}



```

## Submission at 2024-08-30 05:21:10


```
import java.util.Scanner;

public class Main{

static void printArray(int[]array){
    for(int i=0; i<array.length; i++){
        System.out.print(array[i] + " ");
    }
    System.out.println();
}

static int[] maximalArray(int[]array1, int[]array2){
    int []array3 = new int[array1.length];

    for(int i=0; i<array1.length; i++){
        if(array1[i] > array2[i]){
            array3[i] = array1[i];
        }else{
            array3[i] = array2[i];
        }
    }
    return array3;
}

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[]array1 = new int[n];
        for(int i=0; i<n; i++){
            array1[i] = sc.nextInt();
        }
          
        int []array2 = new int[n];
        for(int i=0; i<n; i++){
            array2[i] = sc.nextInt();
        }

        int[]array3 = maximalArray(array1,array2);
        printArray(array3);
    }
}
```

## Submission at 2024-08-30 05:44:17


```
import java.util.Scanner;

public class Main {

static int pow(int n, int x){
    if(n < 0 ){
        return -1;
    }
    int ans = pow(n*x-1);
    int Ans = ans * n*x;
    return Ans;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();

        pow(n,x);

    }
     
}
```

## Submission at 2024-08-30 06:01:09


```
class Main {


    static boolean palindrome(String string){
        if(String'Ch' == Ch.UpperCase && String'Ch' == ' ' && String 'Ch' == "!"){
            return false;
        }else{
            return true;
        }
        palindrome(Ch);
        
    }
    public static void main (String args []) {
        Scanner sc = new Scanner(System.in);
        String string = sc.nextLine();

        palindrome(string);
    }
}
```

## Submission at 2024-08-30 06:01:10


```
class Main {


    static boolean palindrome(String string){
        if(String'Ch' == Ch.UpperCase && String'Ch' == ' ' && String 'Ch' == "!"){
            return false;
        }else{
            return true;
        }
        palindrome(Ch);
        
    }
    public static void main (String args []) {
        Scanner sc = new Scanner(System.in);
        String string = sc.nextLine();

        palindrome(string);
    }
}
```

## Submission at 2024-08-30 06:16:50


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
        while(Node.size()< 0){
            Node temp = head;
            System.out.print(Node.valueOf(head.d));
            head.next;
        }
        

    }
}
```

## Submission at 2024-08-30 06:24:33


```
import java.util.Scanner;// write from scratch, create a function named Pow(int x, int n)
class Main {
    

    static int pow(int x, int n){
        if( x*0 == 1){
            return 1;
        }
        int ans = pow(x*n-1);
        int Ans = ans * (n*1);
        return Ans;
    }
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();


    } //Remember the class name has to be Main!!

}
```

## Submission at 2024-08-30 06:26:09


```
import java.util.Scanner;// write from scratch, create a function named Pow(int x, int n)
class Main {
    
    static int pow(int x, int n){
        if( x*0 == 1){
            return 1;
        }
        int ans = pow(x*n-1);
        int Ans = ans * (n*1);
        return Ans;
    }
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();

        pow(x,n);

    } //Remember the class name has to be Main!!

}
```

## Submission at 2024-10-25 06:06:20


```
import java.util.*;
import java.util.io;

public class Main{

    static boolean areConstructed(int R, int M){
        n= R.length;
        m = M.length;
        Boolean flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(R.char.At[i] == M.char.At[j]){
                    flag = true;
                    i++;
                    j++;
                }
                else{
                    j++;
                }
            }
        }
        return false;
    } 

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        String R = sc.nextLine();
        String M = sc.nextLine();

        areConstructed(R,M);

    }
}
```

## Submission at 2024-10-25 06:44:28


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
    
    ArrayList<Integer> postOrder(Node root)
    {
      Stack<postOrder> stack = new ArrayList<>();
      postOrder = Node;

      if(root == null){
        return;
      }
      Node.left.push;
      root.pop;
      ans = root.data;
      System.out.print(ans);
      root.right;     

    }
}
```

## Submission at 2024-10-25 06:56:35


```
import java.util.*;
import java.util.io;

public class Main{

    static boolean areConstructed(int R, int M){
        n= R.length;
        m = M.length;
        Boolean flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(R.char.At[i] == M.char.At[j]){
                    flag = true;
                    i++;
                    j++;
                }
                else if(R.char.At[i] == M.char.At[j+1]){
                    j++;
                    i++;
                }
                else{
                    j++;
                }
                }
        }
        return false;
    } 

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        String R = sc.nextLine();
        String M = sc.nextLine();

        areConstructed(R,M);

    }
    
}

```

## Submission at 2024-10-25 07:00:16


```
import java.util.*;


public class Main{

    static boolean areConstructed(String R, String M){
        int n= R.length;
        int m = M.length;
        Boolean flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(R.charAt[i] == M.charAt[j]){
                    flag = true;
                    i++;
                    j++;
                }
                else if(R.charAt[i] == M.charAt[j+1]){
                    j++;
                    i++;
                }
                else{
                    j++;
                }
            }
        }
        return false;
    } 

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        String R = sc.nextLine();
        String M = sc.nextLine();

        areConstructed(R,M);

    }
    
}

```

## Submission at 2024-11-15 05:53:41


```
import java.util.*;

class Main{

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        String ransom = sc.nextLine();
        String magzine = sc.nextLine();

        boolean result = ransomNote(ransom,magzine);
        System.out.print(result);
    }

    static boolean ransomNote(String ransom, String magzine){

        HashMap <Character,Integer> mp = new HashMap<>();

            // frequench of each char
        for(char ch : magzine.toCharArray()){
            mp.put(ch, mp.getOrDefault(ch,0)+1);
        }

            // it construct ransomNote from magzine
        for(char ch : ransom.toCharArray()){
            if(!mp.containsKey(ch) || mp.get(ch) == 0){
                return false;
            }
            mp.put(ch, mp.get(ch)-1);
    
        }  
        return true;
    }    

}
```

## Submission at 2024-11-15 06:06:26


```
import java.util.*;

class Main{

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

    int [] arr = new int[n];
    for(int i=0; i<arr.length; i++){
        arr[i] = sc.nextInt();
    }

    HashMap<Integer,Integer> mp = new HashMap<>();

    for(int num : arr ){
        mp.put(num, mp.getOrDefault(num,0)+1);
    }

    for(int num : arr ){
        if(mp.get(num) >= k){
            System.out.println(num);
            return;
        }
    }
    System.out.println(-1);

    }
}
```

## Submission at 2024-11-15 06:29:01


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
    
    ArrayList<Integer> postOrder(Node root){
      ArrayList<Integer> result = new ArrayList<>();

      if(root == null){
        return result;
      }
       
    Stack<Node> stack = new Stack<>();
    Stack<Node> output = new Stack<>();

    stack.push(root);

    while(!stack.isEmpty()){
      Node current = stack.pop();
      output.push(current);

    if(current.left != null){
      stack.push(current.left);
    }
    if(current.right != null){
      stack.push(current.right);
    }
  }
  while(!output.isEmpty()){
    result.add(output.pop().data);
  }
  return result;
  }
}
```

## Submission at 2024-11-22 05:02:13


```
import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
        }

        sumOfArray(arr);
    }
}
```

## Submission at 2024-11-22 05:04:41


```
import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
        }

        sumOfArray(arr);
    }
}
```

## Submission at 2024-11-22 05:21:12


```

import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
            System.out.println();
        }

        sumOfArray(arr);
    }
}
```

## Submission at 2024-11-22 05:21:17


```

import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
            System.out.println();
        }

        sumOfArray(arr);
    }
}
```

## Submission at 2024-11-22 05:24:05


```

import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
            System.out.print(' ');
        }

        sumOfArray(arr);
    }
}
```

## Submission at 2024-11-22 06:09:28


```
import java.util.*;

class Main{
    static void minimize(int a, int b){
        int c;
        if( a > b){
            return;
        }else if( a = b){
            c = a-a;
            System.out.print(c);
        }else{
            c = b-a;
            int ans = (c-a) + (b-c);
            System.out.print(ans);
        }
    }


    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        System.out.print(' ');
        int b = sc.nextInt();

        minimize(a,b);  
    }
}
```

## Submission at 2024-11-22 06:11:11


```
import java.util.*;

class Main{
    static void minimize(int a, int b){
        int c;
        if( a > b){
            return;
        }else if( a = b){
            c = a-a;
            System.out.print(c);
        }else{
            c = b-a;
            int ans = (c-a) + (b-c);
            System.out.print(ans);
        }
    }


    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        System.out.print(' ');
        int b = sc.nextInt();

        minimize(a,b);  
    }
}
```

## Submission at 2024-11-22 06:17:25


```
import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
            System.out.print(' ');
        }

        System.out.print(sumOfArray(arr));
    }
}
```

## Submission at 2024-11-22 06:20:06


```
import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i : arr){
            arr[i] = sc.nextInt();
            System.out.print(' ');
        }

        System.out.print(sumOfArray(arr));
    }
}
```

## Submission at 2024-11-22 06:26:15


```
import java.util.*;

class Main{

    static int sumOfArray(int[]arr){
        int sum =0;
        int n = arr.length;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        return sum;
    }

    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i=0; i<arr.length; i++){
            arr[i] = sc.nextInt();
            System.out.print(' ');
        }

        System.out.print(sumOfArray(arr));
    }
}
```

## Submission at 2024-11-22 06:46:59


```
import java.util.*;

class Main{

    static void diamondPattern(int n){

        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print('*');
            }
        }
        for(int i = 0; i<n-1; i++){
            for(int j =n-1; j>0; j--){
                System.out.print('*');
            }
        }
    }

    public static void main(String[]args){

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        diamondPattern(n);
    }
}
```

## Submission at 2024-11-22 07:07:53


```
import java.util.*;

class Main{

    static void diamondPattern(int n){

        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print('*');
            }
            System.out.println();
        }
        for(int i = 0; i<n-1; i++){
            for(int j =n-1; j>0; j--){
                System.out.print('*');
            }
            System.out.println();
        }
    }

    public static void main(String[]args){

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        diamondPattern(n);
    }
}
```

