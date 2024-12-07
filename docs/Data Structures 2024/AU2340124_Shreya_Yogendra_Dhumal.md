## Submission at 2024-08-09 04:47:52


```

public static void main(String[]args{

    System.out.println("Hello Shreya!");
}
```

## Submission at 2024-08-09 05:02:25


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter your name: ");
    String name = input.nextLine();
    System.out.println("Hello" + " " + name + "!");
    }
}


```

## Submission at 2024-08-09 05:06:47


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter your name: ");
    String name = input.nextLine();
    System.out.println("Hello" + " " + name + "!");
    }
}
```

## Submission at 2024-08-16 05:06:13


```
import java.util.Scanner;

class Main {
    
    // Recursive function to calculate the Fibonacci number
    public static int fibonacci(int x) {
        if (x == 0) {
            return 0;
        } else if (x == 1) {
            return 1;
        } else {
            return fibonacci(x - 1) + fibonacci(x - 2);
        }
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int x = scanner.nextInt();
        System.out.println(fibonacci(x));
        
        scanner.close();
    }
}

```

## Submission at 2024-08-16 05:46:15


```
import java.util.Scanner;

class Main {
    public static boolean isPowerofTwo(int n) {
        if ( n == 1){
            return true;
        }
        else if (n <= 0 || n%2 != 0){
            return false;
        }
        else {
            return isPowerofTwo(n/2);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        System.out.println(isPowerofTwo(n));

    }
}

```

## Submission at 2024-08-22 09:34:58


```
import java.util.ArrayList; 
import java.util.Arrays; 

class Main{ 
	// Function for swapping two numbers 
	static void swap(int nums[], int l, int i) 
	{ 
		int temp = nums[l]; 
		nums[l] = nums[i]; 
		nums[i] = temp; 
	} 

	static void permutations(ArrayList<int[]> res, int[] nums, int l, int h) { 
		if (l == h) { 
			res.add(Arrays.copyOf(nums, nums.length)); 
			return; 
		} 
 
		for (int i = l; i <= h; i++) { 
			// Swapping 
			swap(nums, l, i); 

			permutations(res, nums, l + 1, h); 

			swap(nums, l, i); 
		} 
	} 

	static ArrayList<int[]> permute(int[] nums) { 
		ArrayList<int[]> res = new ArrayList<int[]>(); 
		int x = nums.length - 1; 

		permutations(res, nums, 0, x); 
		return res; 
	} 

	public static void main(String[] args) 
	{ 
		int[] nums = { 1, 2, 3 }; 
		ArrayList<int[]> res = permute(nums); 

		for (int[] x : res) { 
			for (int y : x) { 
				System.out.print(y + " "); 
			} 
			System.out.println(); 
		} 
	} 
} 



```

## Submission at 2024-08-22 09:37:29


```
import java.util.ArrayList; 
import java.util.Arrays; 

class Main{ 
	// Function for swapping two numbers 
	static void swap(int nums[], int l, int i) 
	{ 
		int temp = nums[l]; 
		nums[l] = nums[i]; 
		nums[i] = temp; 
	} 

	static void permutations(ArrayList<int[]> res, int[] nums, int l, int h) { 
		if (l == h) { 
			res.add(Arrays.copyOf(nums, nums.length)); 
			return; 
		} 
 
		for (int i = l; i <= h; i++) { 
			// Swapping 
			swap(nums, l, i); 

			permutations(res, nums, l + 1, h); 

			swap(nums, l, i); 
		} 
	} 

	static ArrayList<int[]> permute(int[] nums) { 
		ArrayList<int[]> res = new ArrayList<int[]>(); 
		int x = nums.length - 1; 

		permutations(res, nums, 0, x); 
		return res; 
	} 

	public static void main(String[] args) 
	{ 
		int[] nums = { 1, 2, 3 }; 
		ArrayList<int[]> res = permute(nums); 

		for (int[] x : res) { 
			for (int y : x) { 
				System.out.print(y + " "); 
			} 
			System.out.println(); 
		} 
	} 
} 

```

## Submission at 2024-08-22 10:51:20


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

        List<List<Integer>> combinations = combine(n, k);

        for (List<Integer> combination : combinations) {
            System.out.println(combination);
        }
    }
}

```

## Submission at 2024-08-22 11:24:48


```
import java.io.*;

class Main {
    static void _printParenthesis(char str[], int pos, int n, int open, int close) {
        if (close == n) {
            // print the possible combinations
            for (int i = 0; i < str.length; i++)
                System.out.print(str[i]);
            System.out.println();
            return;
        }
        else {
            if (open > close) {
                str[pos] = ')';
                _printParenthesis(str, pos + 1, n, open, close + 1);
            }
            if (open < n) {
                str[pos] = '(';
                _printParenthesis(str, pos + 1, n, open + 1,
                                  close);
            }
        }
    }

    static void printParenthesis(char str[], int n) {
        if (n > 0)
            _printParenthesis(str, 0, n, 0, 0);
        return;
    }

    public static void main(String[] args) {
        int n = 3;
        char[] str = new char[2 * n];
        printParenthesis(str, n);
    }
}
```

## Submission at 2024-08-28 07:32:23


```
// Write the code from scratch, no boilerplate is required
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

## Submission at 2024-08-29 12:06:04


```
// Write Code from Scratch
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int M = sc.nextInt();
        int N = sc.nextInt();
        
        int[][] matrix = new int[M][N];
        
        //rows
        for(int i=0; i<M; i++){
            //columns
            for(int j=0; j<N; j++){
                matrix[i][j] = sc.nextInt();
            }
        }
        
        //transpose of matrix
        int transpose[][] = new int[N][M];
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
               transpose[j][i] = matrix[i][j]; 
            }
        }
        
        //output for transpose of a matrix
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                System.out.print(transpose[i][j] + " ");
            }
            System.out.println();
        }
      
    }
}
```

## Submission at 2024-08-29 12:10:09


```
import java.util.Scanner;

public class Main {

    public static int sumMultiples(int n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            // Check if the number is divisible by 3, 5, or 7
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum = sum + i; 
            }
        }

        return sum; 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        // Calculate and print the sum of multiples
        int result = sumMultiples(n);
        System.out.println(result);
    }
}
```

## Submission at 2024-08-29 12:11:07


```
import java.util.Scanner;

public class Main {

    public static int sumMultiples(int n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            // Check if the number is divisible by 3, 5, or 7
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum = sum + i; 
            }
        }

        return sum; 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        // Calculate and print the sum of multiples
        int result = sumMultiples(n);
        System.out.println(result);
    }
}
```

## Submission at 2024-08-29 12:14:18


```
// Write the code from scratch, no boilerplate is required
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    static boolean IfArraysAreEqual(int[]arr1, int[]arr2) {
        if (arr1.length != arr2.length) {
            return false;
        }

        // sort two arrays
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        // check if the elements are equal or not
        for(int i=0; i<arr1.length; i++){
            if(arr1[i] == arr2[i]){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int[] arr1 = new int[n1];
        for(int i=0; i<n1; i++){
            arr1[i] = sc.nextInt();
        }

        int[] arr2 = new int[n2];
        for(int i=0; i<n2; i++){
            arr2[i] = sc.nextInt();
        }
 
        System.out.println(IfArraysAreEqual(arr1, arr2));
    }
}
```

## Submission at 2024-08-29 12:29:18


```
import java.util.Arrays;
import java.util.Scanner;

class Main {
    public static int countDigits(int nums) {
        int count = 0;
        while (nums != 0) {
            nums /= 10;
            count++;
        }
        return count;
    }
    
    public static int evenDigitsCount(int[] nums) {
        int evenCount = 0;

        for (int num : nums) {
            // Check if the number of digits is even
            if (countDigits(num) % 2 == 0) {
                evenCount++;
            }
        }

        return evenCount;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        int[] arr = new int[N];
        for(int i=0; i<N; i++){
            arr[i] = sc.nextInt();
        }
        int answer = evenDigitsCount(arr);
        System.out.println(answer);

    }

}
```

## Submission at 2024-08-29 12:33:54


```
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]matrix){
        for(int i=0; i< matrix.length; i++){
            for(int j=0; j<matrix[i].length; j++){
                System.out.print(matrix[i][j]+ " ");
            }
            System.out.println();
        }
    }

    static void spiralMatrix(int[][]matrix, int r, int c){
       int top_row = 0, bottom_row = r-1, first_col =0, last_col = c-1;

       int totalElements =0;
       while(totalElements < r * c) {

           // top_row = first_col --> last_col
           for (int j = first_col; j <= last_col && totalElements < r * c ; j++) {
               System.out.println(matrix[top_row][j] + " ");
               totalElements++;
           }
           top_row++;

           //  last_col = top_row -->  bottom_row
           for (int i = top_row; i <= bottom_row && totalElements < r * c; i++) {
               System.out.println(matrix[i][last_col] + " ");
               totalElements++;
           }
           last_col--;

           //  bottom row = last_col -->  first_col
           for (int j = last_col; j >=first_col && totalElements < r * c; j--) {
               System.out.println(matrix[bottom_row][j] + " ");
               totalElements++;
           }
           bottom_row--;

           //  first_col = bottom_row -->  top_row
           for (int i = bottom_row; i >=top_row && totalElements < r * c; i--) {
               System.out.println(matrix[i][first_col] + " ");
               totalElements++;
           }
           first_col++;


       }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the rows of matrix: ");
        int r = sc.nextInt();
        System.out.println("Enter the column of matrix: ");
        int c = sc.nextInt();

        int[][] matrix = new int[r][c];
        int total = r * c;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                matrix[i][j] = sc.nextInt();
            }
        }

        spiralMatrix(matrix,r,c);

    }
}
```

## Submission at 2024-08-29 12:36:38


```
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]matrix){
        for(int i=0; i< matrix.length; i++){
            for(int j=0; j<matrix[i].length; j++){
                System.out.print(matrix[i][j]+ " ");
            }
            System.out.println();
        }
    }

    static void spiralMatrix(int[][]matrix, int r, int c){
       int top_row = 0, bottom_row = r-1, first_col =0, last_col = c-1;

       int totalElements =0;
       while(totalElements < r * c) {

           // top_row = first_col --> last_col
           for (int j = first_col; j <= last_col && totalElements < r * c ; j++) {
               System.out.println(matrix[top_row][j] + " ");
               totalElements++;
           }
           top_row++;

           //  last_col = top_row -->  bottom_row
           for (int i = top_row; i <= bottom_row && totalElements < r * c; i++) {
               System.out.println(matrix[i][last_col] + " ");
               totalElements++;
           }
           last_col--;

           //  bottom row = last_col -->  first_col
           for (int j = last_col; j >=first_col && totalElements < r * c; j--) {
               System.out.println(matrix[bottom_row][j] + " ");
               totalElements++;
           }
           bottom_row--;

           //  first_col = bottom_row -->  top_row
           for (int i = bottom_row; i >=top_row && totalElements < r * c; i--) {
               System.out.println(matrix[i][first_col] + " ");
               totalElements++;
           }
           first_col++;


       }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int r = sc.nextInt();
        int c = sc.nextInt();

        int[][] matrix = new int[r][c];
        int total = r * c;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                matrix[i][j] = sc.nextInt();
            }
        }

        spiralMatrix(matrix,r,c);

    }
}

```

## Submission at 2024-08-29 12:48:17


```
import java.util.Scanner;

public class Main {

    public static int triangularSum(int[] arr) {
        int n = arr.length;

        while (n > 1) {
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i] + arr[i + 1]; 
            n--; 
        }
        return arr[0];
        }
        return 0;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int answer = triangularSum(arr);
        System.out.println(answer);
    }
}
```

## Submission at 2024-08-29 13:02:48


```
import java.util.Scanner;

public class Main {

    public static int findKthMissing(int[] arr, int k) {
        int missingCount = 0;
        int currentNumber = 1;
        int i = 0;
        
        while (missingCount < k) {
            if (i < arr.length && arr[i] == currentNumber) {
                i++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    return currentNumber;
                }
            }
            currentNumber++;
        }
        
        return -1; 
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int k = sc.nextInt();
        
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int answer = findKthMissing(arr, k);
        System.out.println(answer);
    }
}  
```

## Submission at 2024-08-30 05:06:48


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { 
    public static int Pow(int x, int n){
        if(n==0){
            return 0;
        }
        if(x==0){
            return -1;
        }
        int Pow = x*n;
    }

    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();

        System.out.println(Pow(x,n));
    }

}
```

## Submission at 2024-08-30 05:31:23


```
// Write code from scratch
import java.util.Arrays;
import java.util.Scanner;
public class Main{
    public static int maxArr(int a, int b, int c){
        
        int c = maxElem(int a, int b);
        
        Arrays.sort();
    }
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int a = new int[n];

    int n = sc.nextInt();
    int b = new int[n];

    int n = sc.nextInt();
    int c = new int[n];

    System.out.println(maxArr(int a, int b, int c));

    }
}
```

## Submission at 2024-08-30 05:40:54


```
import java.util.Scanner;
class Main {
    public static void paLin(String char){
        char word1 = reverse wors;
    }
    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);

        char word = sc.nextLine();
        char word1 = new char[word];

        System.out.println(paLin);

    }
}
```

## Submission at 2024-08-30 05:51:08


```

import java.util.Scanner;
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int m = sc.nextInt();
        int n = sc.nextInt();

           //rows
        for(int i = 0; i<m; i++){
            for(int j=0; j<n; j++){
                int[m][n] = matrix();
            }
       }

    }

}

```

## Submission at 2024-08-30 05:58:04


```

// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { 
    public static int Pow(int x, int n){
        if(n==0){
            return 0;
        }
        if(x==0){
            return -1;
        }
        int Pow = x^n;
    }

    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();
   
    System.out.println(Pow(x,n));
    }

}

```

## Submission at 2024-08-30 06:11:55


```
import java.util.Scanner;
class Main { 
    public static int Pow(int x, int n){
        if(n==0){
            return 0;
        }
        if(x==0){
            return -1;
        }
        int Pow = x^n;
    }

    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();
        int n = sc.nextInt();
   
    System.out.println(Pow(x,n));
    }

}
```

## Submission at 2024-10-04 05:19:37


```
import java.util.*;
public class Main{
    public static boolean isAnagram(String s, String t){
    
        for(Char c : s.charAt() && t.charAt()){
            if(s.charAt() == t.charAt()){
                return true;
            }
            else if(s.length = 0 || t.length = 0) {
                return false;
            }
            else {
                return false;
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        isAnagram(s, t);
    
    }


}
```

## Submission at 2024-10-04 05:56:35


```
import java.util.*;
class Main{
    static int[] warmerTemp(int[] answer){
        int n = temperatures.length;
        for(int i=0; i<n; i++){
            if(answer[i] > answer[i+1]){
                int temp = answer[i+1];
                answer[i+1] = answer[i];
                answer[i] = temp;
                System.out.println(answer[i]);
            } 
            else{
                System.out.println(answer[i] == 0);
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt;
        int[] temperatures = new int[n];
        
        System.out.println(warmerTemp(answer[i]));

    }
}
```

## Submission at 2024-10-04 06:05:43


```
import java.util.*;
public class Main{
    static boolean isAnagram(String s, String t){
        int n1 = s.length; 
        int n2 = t.length;
    
        for(Char c : s.charAt() && t.charAt()){
            if(s.charAt() == t.charAt()){
                return true;
            }
            else if(n1 = 0 && n2 = 0) {
                return false;
            }
            else {
                return false;
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        isAnagram(s, t);
    
    }
}
```

## Submission at 2024-10-04 06:18:59


```
import java.util.*;
public class Main{
    static boolean isAnagram(String s, String t){
        int n = s.length;
        
            for(int i=0; i<n; i++){
                if(s.charAt(i) == t.charAt(i)){
                return true;
            }
            else if(s.length = 0 || t.length = 0) {
                return false;
            }
            else {
                return false;
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        isAnagram(s, t);
    
    }
}
```

## Submission at 2024-10-04 06:23:10


```
import java.util.*;
public class Main{
    static boolean isAnagram(String s, String t){
        for(Char c : s.charAt(i) && t.charAt(i)){;
            for(int i=0; i<s.length; i++){
                if(s.charAt(i) == t.charAt(i)){
                return true;
            }
            else if(s.length = 0 || t.length = 0) {
                return false;
            }
            else {
                return false;
            }
        }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        isAnagram(s, t);
    
    }
}
```

## Submission at 2024-10-24 09:42:15


```
import java.util.Scanner;

class Main {
    public static int countEvenNumbers(int[] arr) {
        int evenCount = 0;
        
        for (int num : arr) {
            if (num % 2 == 0) {
                evenCount++;
            }
        }
        
        return evenCount;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int result = countEvenNumbers(arr);
        System.out.println(result);
    }
}


```

## Submission at 2024-10-25 05:41:05


```
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split(" ");

        HashMap<Character, String> mp = new HashMap<>();
        for(int i=0; i<pattern.length(); i++){
            if(!mp.containsKey(pattern) && mp.get(words)){
                return false;
            } else {
                mp.put(pattern, 1);
                return false;
            }
        }
        return true;

    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);

    }
}
```

## Submission at 2024-10-25 05:57:23


```
import java.util.*;

class Main{
    public static boolean RansomeNote(String ransomNote, String magazine){
        HashMap<Character, Character> mp = new HashMap<>();

        for(char ch : magazine){
            if(!mp.containsKey(magazine) == mp.get(ransomNote)){
                mp.getOrDefault((ch, 0) + 1);
                return false;

            }
        }
        return true;

    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String ransomNote = sc.nextLine();
        String magazine = sc.nextLine();

        RansomeNote(ransomNote, magazine);


    }
}
```

## Submission at 2024-10-25 06:08:12


```
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split(" ");

        HashMap<Character, String> mp = new HashMap<>();
        for(char ch : pattern){
            for(int i=0; i<pattern.length(); i++){
                if(mp.containsKey(pattern) && mp.get(words) != i){
                    return false;
            } else {
                mp.put(ch, 1);
            }
            }
        }
        return true;

    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);

    }
}
```

## Submission at 2024-10-25 06:23:19


```
/* write code from scratch */
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split(" ");

        HashMap<Character, String> mp = new HashMap<>();
        for(char ch : pattern){
            for(int i=0; i<pattern.length(); i++){
                if(!mp.containsKey(pattern) == mp.get(words)){
                    mp.getOrDefault((ch, 0) + 1);
                    return false;
                } 
            }
        }
        return true;

    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);

    }
}
```

## Submission at 2024-10-25 06:38:04


```
/* write code from scratch */
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split(" ");

        HashMap<Character, String> mp = new HashMap<>();
        for(char ch : pattern){
            for(int i=0; i<pattern.length(); i++){
                if(!mp.containsKey(pattern) && mp.get(words) == i){
                    mp.getOrDefault((ch, 0) + 1);
                    return false;
                } else {
                    mp.put(ch, 1);
                }
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);

    }
}
```

## Submission at 2024-10-25 06:40:39


```
/* write code from scratch */
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split(" ");

        HashMap<Character, String> mp = new HashMap<>();
        for(char ch : pattern){
            for(int i=0; i<pattern.length(); i++){
                if(!mp.containsKey(pattern) && mp.get(words) == i){
                    mp.put(mp.getOrDefault(ch, 0) + 1);
                    return false;
                } else {
                    mp.put(ch, 1);
                }
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);

    }
}
```

## Submission at 2024-10-25 06:42:00


```
/* write code from scratch */
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split(" ");

        HashMap<Character, String> mp = new HashMap<>();
        for(char ch : pattern){
            for(int i=0; i<pattern.length(); i++){
                if(mp.containsKey(pattern) && mp.get(words) != i){
                    mp.put(mp.getOrDefault(ch, 0) + 1);
                    return false;
                } else {
                    mp.put(ch, 1);
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);

    }
}
```

## Submission at 2024-10-25 06:44:13


```
/* write code from scratch  */ 
import java.util.*;

class Main{
    public static boolean RansomeNote(String ransomNote, String magazine){
        HashMap<Character, Character> mp = new HashMap<>();

        for(char ch : magazine){
            if(!mp.containsKey(magazine) == mp.get(ransomNote)){
                mp.put(mp.getOrDefault(ch, 0) + 1);
                return false;
            }
        }
        return true;

    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String ransomNote = sc.nextLine();
        String magazine = sc.nextLine();

        RansomeNote(ransomNote, magazine);
    }
}
```

## Submission at 2024-10-25 06:49:07


```
/* write code from scratch */
import java.util.*;

class Main{
    public static boolean wordPattern(String pattern, String s){
        String words = s.split("");

        HashMap<Character, String> mp = new HashMap<>();
        for(char ch : pattern){
            for(int i=0; i<pattern.length(); i++){
                if(mp.containsKey(pattern) && mp.get(words) != i){
                    mp.put(mp.getOrDefault(ch, 0) + 1);
                    return false;
                } 
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String pattern = sc.nextLine();
        String s = sc.nextLine();

        wordPattern(pattern, s);
    }
}
```

## Submission at 2024-11-15 03:42:58


```
/* write code from scratch */
import java.util.HashMap;
import java.util.Scanner;

class Main {
    public static boolean wordPattern(String pattern, String s) {
        String[] words = s.split(" ");
        
        // If the number of words and pattern letters are not the same, return false
        if (pattern.length() != words.length) {
            return false;
        }
        
        HashMap<Character, String> charToWord = new HashMap<>();
        HashMap<String, Character> wordToChar = new HashMap<>();
        
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern.charAt(i);
            String word = words[i];
            
            // Check if the current pattern character is already mapped to a word
            if (charToWord.containsKey(c)) {
                if (!charToWord.get(c).equals(word)) {
                    return false; // Mismatch in mapping
                }
            } else {
                // Map pattern character to word if it hasn't been mapped
                charToWord.put(c, word);
            }
            
            // Check if the current word is already mapped to a pattern character
            if (wordToChar.containsKey(word)) {
                if (wordToChar.get(word) != c) {
                    return false; // Mismatch in mapping
                }
            } else {
                // Map word to pattern character if it hasn't been mapped
                wordToChar.put(word, c);
            }
        }
        
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking pattern and string input
        String pattern = scanner.nextLine();
        String s = scanner.nextLine();

        // Checking if the pattern matches and printing result
        System.out.println(wordPattern(pattern, s));
        
        scanner.close();
    }
}

```

## Submission at 2024-11-22 05:05:15


```
import java.util.Scanner;
class Main{
    public static int sumofArr(int n, int[] arr, int sum){
        
        for(int i=0; i<arr.length; i++){
            sum = arr[i] + arr[i+1];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int ans = sumofArr();
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:12:36


```
import java.util.Scanner;
class Main{
    public static int sumofArr(int n, int[] arr, int sum){
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            sum = sum + arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        int ans = sumofArr(int n, int[] arr, int sum);
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:15:56


```
import java.util.Scanner;
class Main{
    public static int sumofArr(int[] arr, int sum){
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            sum = sum + arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        sumofArr(arr, sum);
    }
}
```

## Submission at 2024-11-22 05:19:43


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int sumofArr(int[] arr){
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            sum = sum + arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        sumofArr(arr);
    }
}
```

## Submission at 2024-11-22 05:27:59


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int Minimize(int a, int b, int c){
        if( b < a){
            return 0;`
        }
        for(b >= a){
            if()
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
    }
}
```

## Submission at 2024-11-22 05:45:43


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
    if(node == node.next){
        return node;
    } 
    if(node.next == d){
        return d;
    }
    }
}
```

## Submission at 2024-11-22 05:50:31


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void pattern(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.println("*");
            }
        } 
    
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        pattern(n);
    }
}
```

## Submission at 2024-11-22 06:06:37


```
/* write code from scratch */
import java.util.*;

class Main{
    public static int twice(int[] a){
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                if(a[i] != a[j]){
                    return -1;
                }
                else if(a[i] == a[j]){
                    return a[i] + 1;
                }
            }
        }
        return twice;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }
        twice(arr);
    }
}
```

## Submission at 2024-11-22 06:22:07


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void pattern(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.println("*");
            } for(int i=1; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            } for(int i=2; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            } 
        }
        }
        } 
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        pattern(n);
    }
}
```

## Submission at 2024-11-22 06:26:15


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void pattern(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.println("*");
            } for(int i=1; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            } for(int i=2; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            } 
        }
        }
        } 
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        pattern(n);
    }
}
```

## Submission at 2024-11-22 06:26:51


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int sumofArr(int[] arr){
        int sum = 0;
        for(int i=0; i<arr.length; i++){
            sum = sum + arr[i];
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        System.out.println(sumofArr(arr));
    }
}
```

## Submission at 2024-11-22 06:32:16


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int Minimize(int a, int b, int c){
        if( b < a){
            return -1;
        }
        for(b >= a){
            for(int i=)
            int min = ((c-a)+(b-c));
        }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        
    }
}
```

## Submission at 2024-11-22 06:42:04


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static int Minimize(int a, int b, int c){
        if( b < a){
            return -1;
        }
        for(b >= a){
            int min = ((c-a)+(b-c));
        }
        return min;
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        System.out.println(Minimize(a, b, c));
        
    }
}
```

