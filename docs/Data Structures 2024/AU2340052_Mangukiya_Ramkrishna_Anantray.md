## Submission at 2024-08-09 04:47:57


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.println("Enter your name: ");
        str=sc.nextLine();

        System.out.println("Hello "+str+" !");
    }
}
```

## Submission at 2024-08-09 04:48:25


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str;
        System.out.println("Enter your name: ");
        str=sc.nextLine();

        System.out.println("Hello "+str+" !");
    }
}
```

## Submission at 2024-08-09 04:59:02


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();

        System.out.println("Hello"+str+"!");
    }
}
```

## Submission at 2024-08-09 04:59:34


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();

        System.out.println("Hello "+str+"!");
    }
}
```

## Submission at 2024-08-09 05:00:15


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();

        System.out.println("Hello "+str+"!");
    }
}
```

## Submission at 2024-08-09 05:12:17


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();
        sc.nextLine();
        System.out.println("Hello "+str+"!");
    }
}
```

## Submission at 2024-08-09 05:13:58


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();
        sc.nextLine();
        System.out.print("Hello "+str+"!");
    }
}
```

## Submission at 2024-08-09 05:14:57


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();
        System.out.print("Hello "+str+"!");
    }
}
```

## Submission at 2024-08-09 05:22:20


```
// Write your Java code here
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        String str;
        for(int i=0;i<a;i++){
            str=sc.next();
            System.out.println("Hello "+str+"!");
        }
    }
}
```

## Submission at 2024-08-16 04:53:32


```
import java.util.Scanner;


public class Main{
    public static int fibonacci(int n){
        if(n<=1){
            return n;
        }
        return fibonacci(n-1)+fibonacci(n-2);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        System.out.println(fibonacci(n));
    }
}
```

## Submission at 2024-08-16 05:43:29


```
import java.util.Scanner;

public class Main{
    public static boolean  power(int n){
        if(n==1){
            return true;
        }
        else if(n%2!=0 || n==0){
            return false;
        }
        return power(n/2);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        boolean f= power(n);
        if(f){
            System.out.println(f);
        }
        else{
            System.out.println(f);
        }
    }
}
```

## Submission at 2024-08-21 10:35:47


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
        List<List<Integer>> res = new ArrayList<>();
        backtrack(1, new ArrayList<>(), res, n, k);
        return res;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k) {
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }

        for (int i = start; i <= n; i++) {
            comb.add(i);
            backtrack(i + 1, comb, res, n, k);
            comb.remove(comb.size() - 1);
        }
    }
}
```

## Submission at 2024-08-21 10:45:34


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        List<List<Integer>> result = new ArrayList<>();
        generatePermutations(nums, new ArrayList<>(), result, new boolean[nums.length]);
        System.out.println(result);
        
    }
    
    private static void generatePermutations(int[] nums, List<Integer> current, List<List<Integer>> result, boolean[] used) {
       
        if (current.size() == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        
        
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue; 
            current.add(nums[i]);
            used[i] = true;
            generatePermutations(nums, current, result, used);
            current.remove(current.size() - 1);
            used[i] = false;
        }
    }
}

```

## Submission at 2024-08-21 10:50:44


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        List<List<Integer>> result = new ArrayList<>();
        generatePermutations(nums, new ArrayList<>(), result, new boolean[nums.length]);
        System.out.println(result);
        
    }
    
    private static void generatePermutations(int[] nums, List<Integer> current, List<List<Integer>> result, boolean[] used) {
       
        if (current.size() == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        
        
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue; 
            current.add(nums[i]);
            used[i] = true;
            generatePermutations(nums, current, result, used);
            current.remove(current.size() - 1);
            used[i] = false;
        }
    }
}

```

## Submission at 2024-08-21 10:54:21


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        int n = sc.nextInt();
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }
        List<List<Integer>> result = new ArrayList<>();
        generatePermutations(nums, new ArrayList<>(), result, new boolean[nums.length]);
        System.out.println(result);
        
    }
    
    private static void generatePermutations(int[] nums, List<Integer> current, List<List<Integer>> result, boolean[] used) {
       
        if (current.size() == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        
        
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue; 
            current.add(nums[i]);
            used[i] = true;
            generatePermutations(nums, current, result, used);
            current.remove(current.size() - 1);
            used[i] = false;
        }
    }
}

```

## Submission at 2024-08-21 10:54:58


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main{

    public List<String> generateParentheses(int n) {
        List<String> result = new ArrayList<>();
        generateCombinations(result, "", 0, 0, n);
        return result;
    }

    private void generateCombinations(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            generateCombinations(result, current + "(", open + 1, close, max);
        }

        if (close < open) {
            generateCombinations(result, current + ")", open, close + 1, max);
        }
    }

    public static void main(String[] args) {
        Main pc = new Main();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); 

        List<String> result = pc.generateParentheses(n);

        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("\"" + result.get(i) + "\"");
            if (i < result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}
```

## Submission at 2024-08-21 11:14:53


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    
    private static void permute(int[] nums, List<Integer> current, boolean[] used, List<List<Integer>> result) {
        
        if (current.size() == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue;     
            used[i] = true;
            current.add(nums[i]);
            permute(nums, current, used, result);
            used[i] = false;
            current.remove(current.size() - 1);
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        boolean[] used = new boolean[nums.length]; // To keep track of used elements
        List<Integer> current = new ArrayList<>();

        permute(nums, current, used, result);
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        String[] input = scanner.nextLine().split(" ");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }
        

       
        List<List<Integer>> result = permute(nums);
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) System.out.print(",");
            }
            System.out.print("]");
            if (i < result.size() - 1) System.out.print(",");
        }
        System.out.println("]");
    }
}
```

## Submission at 2024-08-29 08:44:44


```
import java.util.Scanner;
import java.util.Arrays;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        boolean f=false;
        int arr1[]=new int[a];
        int arr2[]=new int[b];

        for(int i=0;i<a;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<b;i++){
            arr2[i]=sc.nextInt();
        }
        if(a != b){
            System.out.println(f);
        }
        else{
            Arrays.sort(arr1);
            Arrays.sort(arr2);
            for(int i=0;i<a;i++){
                if(arr1[i] != arr2[i]){
                    break;
                }
                else{
                    f=true;
                }
            }
        }
        System.out.println(f);
    }
}
```

## Submission at 2024-08-29 08:58:29


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a;
        a=sc.nextInt();
        int sum=0;
        for(int i=1;i<=a;i++){
            if(i%3==0 || i%5==0 || i%7==0){
                sum=sum+i;
            }
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-08-29 09:39:34


```
import java.util.*;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a;
        int c=0;
        int n=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<a;i++){
            c=0;
            int b=arr[i];
            while(b != 0){
                b=b/2;
                c++;
            }
            if(c%2==0){
                n++;
            }
        }
        System.out.println(n);
    }
}
```

## Submission at 2024-08-29 09:56:05


```
import java.util.*;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a;
        int c;
        int n=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<a;i++){
            int b=arr[i];
            c=String.valueOf(b).length();
            if(c%2==0){
                n++;
            }
        }
        System.out.println(n);
    }
}
```

## Submission at 2024-08-29 12:16:50


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a,s=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        while(a > 0){
            for(int i=0;i<a-1;i++){
                arr[i]=arr[i]+arr[i+1];
            }
            a--;
        }
        System.out.println(arr[0]);

    }
}
```

## Submission at 2024-08-29 12:17:16


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a,s=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        while(a > 0){
            for(int i=0;i<a-1;i++){
                arr[i]=arr[i]+arr[i+1];
            }
            a--;
        }
        System.out.println(arr[0]);

    }
}
```

## Submission at 2024-08-29 12:34:27


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        int arr2[][]=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == j){
                    arr2[i][j] = arr[i][j];
                }
                else{
                    arr2[j][i] = arr[i][j];
                }
            }
        }
        System.out.println("");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 12:35:09


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        int arr2[][]=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i == j){
                    arr2[i][j] = arr[i][j];
                }
                else{
                    arr2[j][i] = arr[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 12:35:40


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        int arr2[][]=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    arr2[j][i] = arr[i][j];
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 12:36:23


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        int arr2[][]=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr2[j][i]=arr[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 12:39:47


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        int arr2[][]=new int[n][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr2[j][i]=arr[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 12:41:40


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int m = sc.nextInt();
        int n = sc.nextInt();
        
        
        int[][] arr = new int[m][n];
        int[][] arr2 = new int[n][m];
        
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (sc.hasNextInt()) {
                    arr[i][j] = sc.nextInt();
                } else {
                    System.out.println("Invalid input. Please enter integers.");
                    return;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr2[j][i] = arr[i][j];
            }
        }
        
      
        System.out.println("Transposed matrix:");
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                System.out.print(arr2[i][j] + " ");
            }
            System.out.println();
        }
    }
}

```

## Submission at 2024-08-29 12:42:05


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int m = sc.nextInt();
        int n = sc.nextInt();
        
        
        int[][] arr = new int[m][n];
        int[][] arr2 = new int[n][m];
        
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (sc.hasNextInt()) {
                    arr[i][j] = sc.nextInt();
                } 
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr2[j][i] = arr[i][j];
            }
        }
        
      
        System.out.println("Transposed matrix:");
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                System.out.print(arr2[i][j] + " ");
            }
            System.out.println();
        }
    }
}

```

## Submission at 2024-08-29 12:42:14


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int m = sc.nextInt();
        int n = sc.nextInt();
        
        
        int[][] arr = new int[m][n];
        int[][] arr2 = new int[n][m];
        
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (sc.hasNextInt()) {
                    arr[i][j] = sc.nextInt();
                } 
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr2[j][i] = arr[i][j];
            }
        }
        
      
        System.out.println("Transposed matrix:");
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                System.out.print(arr2[i][j] + " ");
            }
            System.out.println();
        }
    }


```

## Submission at 2024-08-29 12:42:25


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int m = sc.nextInt();
        int n = sc.nextInt();
        
        
        int[][] arr = new int[m][n];
        int[][] arr2 = new int[n][m];
        
        System.out.println("Enter matrix elements:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (sc.hasNextInt()) {
                    arr[i][j] = sc.nextInt();
                } 
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr2[j][i] = arr[i][j];
            }
        }
        
      
        System.out.println("Transposed matrix:");
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < m; j++) { 
                System.out.print(arr2[i][j] + " ");
            }
            System.out.println();
        }
    }


```

## Submission at 2024-08-29 12:42:54


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n;
        m=sc.nextInt();
        n=sc.nextInt();
        int arr[][]= new int[m][n];
        int arr2[][]=new int[n][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr2[j][i]=arr[i][j];
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(arr2[i][j]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 13:02:22


```
import java.util.Arrays;
import java.util.Scanner;

public class ArrayEquality {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len1 = sc.nextInt();
        int len2 = sc.nextInt();
        
        if (len1 != len2) {
            System.out.println("false");
            sc.close();
            return;
        }
        
        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];
    
        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        
        
        boolean areEqual = true;
        for (int i = 0; i < len1; i++) {
            if (arr1[i] != arr2[i]) {
                areEqual = false;
                break;
            }
        }
        System.out.println(areEqual ? "true" : "false");
        

    }
}

```

## Submission at 2024-08-29 13:02:56


```
import java.util.Arrays;
import java.util.Scanner;

public class ArrayEquality {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len1 = sc.nextInt();
        int len2 = sc.nextInt();
        
        if (len1 != len2) {
            System.out.println("false");
        }
        
        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];
    
        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        
        
        boolean areEqual = true;
        for (int i = 0; i < len1; i++) {
            if (arr1[i] != arr2[i]) {
                areEqual = false;
                break;
            }
        }
        System.out.println(areEqual ? "true" : "false");
        

    }
}

```

## Submission at 2024-08-29 13:03:42


```
import java.util.Arrays;
import java.util.Scanner;

public class ArrayEquality {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len1 = sc.nextInt();
        int len2 = sc.nextInt();
        
        if (len1 != len2) {
            System.out.println("false");
        }
        
        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];
    
        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        
        
        boolean areEqual = true;
        for (int i = 0; i < len1; i++) {
            if (arr1[i] != arr2[i]) {
                areEqual = false;
                break;
            }
        }
        System.out.println(areEqual);
        

    }
}

```

## Submission at 2024-08-29 13:04:27


```
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len1 = sc.nextInt();
        int len2 = sc.nextInt();
        
        if (len1 != len2) {
            System.out.println("false");
        }
        
        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];
    
        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        
        
        boolean areEqual = true;
        for (int i = 0; i < len1; i++) {
            if (arr1[i] != arr2[i]) {
                areEqual = false;
                break;
            }
        }
        System.out.println(areEqual);
        

    }
}

```

## Submission at 2024-08-29 13:05:12


```
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len1 = sc.nextInt();
        int len2 = sc.nextInt();
        
        if (len1 != len2) {
            System.out.println("false");
        }
        
        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];
    
        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }
        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        
        
        boolean areEqual = true;
        for (int i = 0; i < len1; i++) {
            if (arr1[i] != arr2[i]) {
                areEqual = false;
                break;
            }
        }
        System.out.println(areEqual);
        

    }
}

```

## Submission at 2024-08-29 13:08:22


```
import java.util.Scanner;

public class KthMissingInteger {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
      
        int n = sc.nextInt(); 
        int k = sc.nextInt(); 
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        int missingCount = 0;
        int current = 1;
        int index = 0;
        while (missingCount < k) {
            if (index < n && arr[index] == current) {
                index++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    System.out.println(current);
                   
                    return;
                }
            }
            current++;
        }
        System.out.println(current);
        
    }
}

```

## Submission at 2024-08-29 13:08:42


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
      
        int n = sc.nextInt(); 
        int k = sc.nextInt(); 
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        int missingCount = 0;
        int current = 1;
        int index = 0;
        while (missingCount < k) {
            if (index < n && arr[index] == current) {
                index++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    System.out.println(current);
                   
                    return;
                }
            }
            current++;
        }
        System.out.println(current);
        
    }
}

```

## Submission at 2024-08-29 13:22:22


```
import java.util.Scanner;

public class SpiralMatrixTraversal {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int m = sc.nextInt(); 
        int n = sc.nextInt(); 
        
        int[][] matrix = new int[m][n];
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        
        spiralOrder(matrix, m, n);
        }
    
    public static void spiralOrder(int[][] matrix, int m, int n) {
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                System.out.print(matrix[top][i] + " ");
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                System.out.print(matrix[i][right] + " ");
            }
            right--;
                    if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    System.out.print(matrix[bottom][i] + " ");
                }
                bottom--;
            }
            
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    System.out.print(matrix[i][left] + " ");
                }
                left++;
            }
        }
        
        System.out.println(); 
    }
}

```

## Submission at 2024-08-30 05:08:26


```
import java.util.Scanner;

// write from scratch, create a function named Pow(int x, int n)
class Main {
    public static int power(int x,int n){
        if(n==0){
            return x;
        }
        return x*power(x,n-1);
    } //Remember the class name has to be Main!!
     public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x,n;
        x=sc.nextInt();
        n=sc.nextInt();

        power(x,n);
     }
}
```

## Submission at 2024-08-30 05:09:36


```
import java.util.Scanner;

// write from scratch, create a function named Pow(int x, int n)
class Main {
    public static float power(int x,int n){
        if(n==0){
            return x;
        }
        return x*power(x,n-1);
    } //Remember the class name has to be Main!!
     public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x,n;
        x=sc.nextInt();
        n=sc.nextInt();

        power(x,n);
     }
}
```

## Submission at 2024-08-30 05:20:00


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int a[]= new int[n];
        int b[]= new int[n];
        int c[]= new int[n];

        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                c[i]=a[i];
            }
            else{
                c[i]=b[i];
            }
        }

        for(int i=0;i<n;i++){
            System.out.print(c[i]+" ");
        }
    }
}
```

## Submission at 2024-08-30 05:20:53


```
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        int a[]= new int[n];
        int b[]= new int[n];
        int c[]= new int[n];

        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                c[i]=a[i];
            }
            else{
                c[i]=b[i];
            }
        }

        for(int i=0;i<n;i++){
            System.out.print(c[i]+" ");
        }
    }
}
```

## Submission at 2024-08-30 05:29:50


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
        Node ptr= head;
		while(ptr.next != null){
			ptr=ptr.next;
		}
		return ptr;
    }
}
```

## Submission at 2024-08-30 05:33:59


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
        Node ptr= head;
		Node c=head;
		while(ptr != c){
			ptr=ptr.next;
		}
		return ptr;
    }
}
```

## Submission at 2024-08-30 05:34:44


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
        Node ptr= head;
		while(ptr != null){
			ptr=ptr.next;
		}
		return ptr;
    }
}
```

## Submission at 2024-08-30 05:35:14


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
        Node ptr= head;
		while(ptr.next != null){
			ptr=ptr.next;
		}
		return ptr;
    }
}
```

## Submission at 2024-08-30 05:36:17


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
        Node ptr= head;
		while(ptr.next != null){
			ptr=ptr.next;
		}
		return head;
    }
}
```

## Submission at 2024-08-30 05:36:54


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
        Node ptr= head;
		while(ptr.next != null){
			ptr=ptr.next;
		}
		return ptr;
    }
}
```

## Submission at 2024-08-30 05:42:33


```
import java.util.Scanner;

public class Main{
    public static int power(int x,int n){
        if(n<=0){
            return 1; 
        }
        return x*power(x,n-1);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x,n;
        x=sc.nextInt();
        n=sc.nextInt();

        System.out.println(power(x,n));


    }
}
```

## Submission at 2024-08-30 05:44:43


```
import java.util.Scanner;

public class Main{
    public static int power(int x,int n){
        if(n<=0){
            return 1; 
        }
        return x*power(x,n-1);
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int x,n;
        x=sc.nextInt();
        n=sc.nextInt();

        System.out.println(power(x,n));


    }
}
```

## Submission at 2024-08-30 06:11:11


```
import java.util.Scanner;
import java.util.*;
class Main {
    public static String palindrome(String s,int l){
       if(l<0){
        return "";
       }
        return s[l]+palindrome(s,l-1);


        
    }
    public static void main (String args []) {
        Scanner sc = new Scanner(System.in);
        String str=sc.next();
        int l=str.length();
        
        String str2=palindrome(str,l);
    }
}
```

## Submission at 2024-09-14 05:23:33


```
class Main {
    public static char palindrome(String str,int l){
        if(l<0){
            return "";
        }
        return str.chatAt(l-1)+palindrome(s,l-1);
    }
    public static void main (String args []) {
        String str;
        str=sc.next();
        int l=str.length();

        String str2=palindrome(str,l);
        if(str.equals(str2)){
            System.out.pritnln("YES");
        }
        else{
            System.out.println("NO");
        }

    }
}
```

## Submission at 2024-10-04 05:10:58


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String s1,s2;
        s1=sc.next();
        s2=sc.next();

        int l1,l2,a=0,b=0;
        l1=s1.length();
        l2=s2.length();
        boolean f=true;
        if(l1!=l2){
            f=false;
        }
        else{
        for(int i=97;i<123;i++){
            a=0;
            b=0;
            for(int j=0;j<l1;j++){
                char ch=s1.charAt(j);
                int c1=ch;
                if(c1==i){
                    a++;
                }
            }
            for(int j=0;j<l1;j++){
                char ch=s2.charAt(j);
                int c1=ch;
                if(c1==i){
                    b++;
                }
            }
            if(a!=b){
                f=false;
                break;
            }
        }
        }
        if(f){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-10-04 05:17:27


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a,t=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        int k=sc.nextInt();

        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        while(arr[k]!=0){
            for(int i=0;i<a;i++){
                arr[i]=arr[i]-1;
                t++;
            }
        }
        System.out.println(t);

    }
}
```

## Submission at 2024-10-04 05:23:39


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a,t=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        int k=sc.nextInt();

        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i>arr[k];i++){
            for(int j=0;j<a;j++){
                t++;
            }
        }
        System.out.println(t);
        

    }
}
```

## Submission at 2024-10-04 05:25:18


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a,t=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        int k=sc.nextInt();

        
        System.out.println(arr[k]*a);
        

    }
}
```

## Submission at 2024-10-04 05:26:25


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a,t=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        int k=sc.nextInt();
        for(int i=0;i<arr[k];i++){
            for(int j=0;j<a;j++){
                t++;
            }
        }
        System.out.pritnln(t);

    }
}
```

## Submission at 2024-10-04 05:26:53


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a,t=0;
        a=sc.nextInt();
        int arr[]= new int[a];
        for(int i=0;i<a;i++){
            arr[i]=sc.nextInt();
        }
        int k=sc.nextInt();
        for(int i=0;i<arr[k];i++){
            for(int j=0;j<a;j++){
                t++;
            }
        }
        System.out.println(t);

    }
}
```

## Submission at 2024-10-04 05:44:11


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1] && i==n-1){
                arr[i]=k-1;
            }
            else if(arr[i]>arr[i-1]){
                arr[i]=k+1;
            }
            else{
                arr[i]=k-1;
            }
        }
        for(int i=0;i<n;i++){
            System.out.println(arr1[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 05:45:27


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1] && i==n-1){
                arr[i]=0;
            }
            else if(arr[i]>arr[i-1]){
                arr[i]=k+1;
            }
            else{
                arr[i]=k-1;
            }
        }
        for(int i=0;i<n;i++){
            System.out.println(arr1[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 05:46:04


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1] && i==n-1){
                arr1[i]=0;
            }
            else if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        for(int i=0;i<n;i++){
            System.out.println(arr1[i]+" ");
        }
    }
}
```

## Submission at 2024-10-04 05:50:15


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=0;i<n-2;i++){
            if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        arr1[n-1]=0;
        for(int i0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        
    }
}
```

## Submission at 2024-10-04 05:50:41


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n-2;i++){
            if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        arr1[n-1]=0;
        for(int i0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        
    }
}
```

## Submission at 2024-10-04 05:51:06


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<=n-2;i++){
            if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        arr1[n-1]=0;
        for(int i0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        
    }
}
```

## Submission at 2024-10-04 05:51:43


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        arr1[n-1]=0;
        for(int i0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        
    }
}
```

## Submission at 2024-10-04 05:52:08


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        arr1[n-1]=0;
        for(int i=0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        
    }
}
```

## Submission at 2024-10-04 05:54:14


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int arr1[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        arr1[0]=k;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]){
                arr1[i]=k+1;
            }
            else{
                arr1[i]=k-1;
            }
        }
        arr1[n-1]=0;
        for(int i=0;i<n;i++){
            System.out.print(arr1[i]+" ");
        }
        
    }
}
```

## Submission at 2024-10-04 05:57:59


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(SYstem.in);
        int n,t=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int k=sc.nextInt();

        int a=arr[k];
        while(a!=0){
            for(int i=0;i<n;i++){
                arr[i]=arr[i]-1;
                t++;
            }
            a=arr[k];
        }
        SYstem.out.println(t);
    }
}
```

## Submission at 2024-10-04 05:59:02


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(SYstem.in);
        int n,t=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int k=sc.nextInt();

        int a=arr[k];
        while(a!=0){
            for(int i=0;i<n;i++){
                arr[i]=arr[i]-1;
                t++;
            }
            a=arr[k];
        }
        System.out.println(t);
    }
}
```

## Submission at 2024-10-04 06:00:26


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,t=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int k=sc.nextInt();

        int a=arr[k];
        while(a!=0){
            for(int i=0;i<n;i++){
                arr[i]=arr[i]-1;
                t++;
            }
            a=arr[k];
        }
        System.out.println(t);
    }
}
```

## Submission at 2024-10-04 06:02:09


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,t=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int k=sc.nextInt();

        int a=arr[k];
        while(a!=0){
            for(int i=0;i<n;i++){
                if(arr[i]!=0){
                arr[i]=arr[i]-1;
                t++;
                }
                else{
                    continue;
                }
            }
            a=arr[k];
        }
        System.out.println(t-k);
    }
}
```

## Submission at 2024-10-04 06:02:45


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,t=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int k=sc.nextInt();

        int a=arr[k];
        while(a!=0){
            for(int i=0;i<n;i++){
                if(arr[i]!=0){
                arr[i]=arr[i]-1;
                t++;
                }
                else{
                    continue;
                }
            }
            a=arr[k];
        }
        System.out.println(t);
    }
}
```

## Submission at 2024-10-04 06:16:07


```
import java.util.Scanner;
public class Main{
    public static void break(int arr[],int s,int l){
        int m=(l-s)/2;
        int k=sum(arr,s,m);
        int m=sum(arr,m,e);

        if(m>k){
            System.out.println(m);
        }
        else{
            System.out.println(k);
        }
    }
    public static int sum(int arr[],int s,int e){
        int s1=0;
        for(int i=s;i<m;i++){
            s1=s1+arr[i];
        }
        return s1;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k;
        n=sc.nextInt();
        k=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sums(arr,0,arr.length-1);


    }
}
```

## Submission at 2024-10-04 06:16:58


```
import java.util.Scanner;
public class Main{
    public static void break(int arr[],int s,int e){
        int m=(e-s)/2;
        int k=sum(arr,s,m);
        int m=sum(arr,m,e);

        if(m>k){
            System.out.println(m);
        }
        else{
            System.out.println(k);
        }
    }
    public static int sum(int arr[],int s,int e){
        int s1=0;
        for(int i=s;i<m;i++){
            s1=s1+arr[i];
        }
        return s1;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k;
        n=sc.nextInt();
        k=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        sums(arr,0,arr.length-1);


    }
}
```

## Submission at 2024-10-04 06:23:00


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,k=1;
        n=sc.nextInt();
        int arr[]= new int[n];
        int answer[]= new int[n];
        answer[0]=k;
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1]){
                answer[i]=k+1;
            }
            else{
                answer[i]=k-1;
            }
        }
        answer[n-1]=0;
        for(int i=0;i<n;i++){
            System.out.print(answer[i]+" ");
        }
    }
}
```

## Submission at 2024-10-16 08:39:08


```
# Write Python code from scratch
n = int(input())
a = list(map(int, input().split(" ")))

low = 1

total = 0
for i in a:
    total += i

print(total)

def check_happy(a, n, total):
    happy = 0
    new_avg = (total / (2*n))
    for i in a:
        if i < new_avg:
            happy += 1
    
    return happy < int(n/2)

low = 0
high = n*total
while low < high:
    mid = low + (high-low) // 2
    if check_happy(a, n, total+mid):
        high = mid
    else:
        low = mid + 1

print(low)
```

## Submission at 2024-10-18 05:28:33


```
import java.util.Scanner;
public class t{
    public static boolean check(int arr[],int total,int n){
        total=total/n;
        total=total/2;
        int u=0,h=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<total || arr[i]==total){
                u++;
            }
            else {
                h++;
            }
        }
        if(u>(n/2)){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,x=-2,s=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int total=0;
        for(int i=0;i<n;i++){
            total=total+arr[i];
        }
        int low=1;
        int high=n*total;
        
        while(low<high){
            int mid=low+(high-low)/2;
            int t=total+mid;
            boolean f=check(arr, t,n);
            if(f){
                x=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        System.out.println(++x);
    }
}
```

## Submission at 2024-10-18 05:28:58


```
import java.util.Scanner;
public class Main{
    public static boolean check(int arr[],int total,int n){
        total=total/n;
        total=total/2;
        int u=0,h=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<total || arr[i]==total){
                u++;
            }
            else {
                h++;
            }
        }
        if(u>(n/2)){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,x=-2,s=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int total=0;
        for(int i=0;i<n;i++){
            total=total+arr[i];
        }
        int low=1;
        int high=n*total;
        
        while(low<high){
            int mid=low+(high-low)/2;
            int t=total+mid;
            boolean f=check(arr, t,n);
            if(f){
                x=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        System.out.println(++x);
    }
}
```

## Submission at 2024-10-18 05:31:45


```
import java.util.Scanner;
public class Main{
    public static boolean check(int arr[],int total,int n){
        total=total/n;
        total=total/2;
        int u=0,h=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<total || arr[i]==total){
                u++;
            }
            else {
                h++;
            }
        }
        if(u>(n/2)){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,x=-2,s=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int total=0;
        for(int i=0;i<n;i++){
            total=total+arr[i];
        }
        int low=1;
        int high=n*total;
        
        while(low<high){
            int mid=low+(high-low)/2;
            int t=total+mid;
            boolean f=check(arr, t,n);
            if(f){
                x=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        System.out.println(++x);
    }
}
```

## Submission at 2024-10-18 05:32:11


```
import java.util.Scanner;
public class Main{
    public static boolean check(int arr[],int total,int n){
        total=total/n;
        total=total/2;
        int u=0,h=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<total || arr[i]==total){
                u++;
            }
            else {
                h++;
            }
        }
        if(u>(n/2)){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,x=-2,s=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int total=0;
        for(int i=0;i<n;i++){
            total=total+arr[i];
        }
        int low=1;
        int high=n*total;
        
        while(low<high){
            int mid=low+(high-low)/2;
            int t=total+mid;
            boolean f=check(arr, t,n);
            if(f){
                x=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        System.out.println(++x);
    }
}
```

## Submission at 2024-10-18 05:39:43


```
import java.util.Scanner;
public class t{
    public static boolean check(int arr[],int total,int n){
        total=total/n;
        total=total/2;
        int u=0,h=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<total || arr[i]==total){
                u++;
            }
            else {
                h++;
            }
        }
        if(u>(n/2)){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,x=-1,s=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int total=0;
        for(int i=0;i<n;i++){
            total=total+arr[i];
        }
        int low=1;
        int high=n*total;
        
        while(low<high){
            int mid=low+(high-low)/2;
            int t=total+mid;
            boolean f=check(arr, t,n);
            System.out.println(low+" "+mid+" "+high);
            if(f){
                x=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        System.out.println(++x);
    }
}
```

## Submission at 2024-10-18 05:40:03


```
import java.util.Scanner;
public class Main{
    public static boolean check(int arr[],int total,int n){
        total=total/n;
        total=total/2;
        int u=0,h=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<total || arr[i]==total){
                u++;
            }
            else {
                h++;
            }
        }
        if(u>(n/2)){
            return true;
        }
        return false;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,x=-1,s=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int total=0;
        for(int i=0;i<n;i++){
            total=total+arr[i];
        }
        int low=1;
        int high=n*total;
        
        while(low<high){
            int mid=low+(high-low)/2;
            int t=total+mid;
            boolean f=check(arr, t,n);
            System.out.println(low+" "+mid+" "+high);
            if(f){
                x=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        System.out.println(++x);
    }
}
```

## Submission at 2024-10-18 05:43:09


```
    import java.util.Scanner;
    public class Main{
        public static boolean check(int arr[],int total,int n){
            total=total/n;
            total=total/2;
            int u=0,h=0;
            for(int i=0;i<arr.length;i++){
                if(arr[i]<total || arr[i]==total){
                    u++;
                }
                else {
                    h++;
                }
            }
            if(u>(n/2)){
                return true;
            }
            return false;
        }
        public static void main(String args[]){
            Scanner sc = new Scanner(System.in);
            int n,x=-1,s=0;
            n=sc.nextInt();
            int arr[]= new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int total=0;
            for(int i=0;i<n;i++){
                total=total+arr[i];
            }
            int low=1;
            int high=n*total;
            
            while(low<high){
                int mid=low+(high-low)/2;
                int t=total+mid;
                boolean f=check(arr, t,n);
                System.out.println(low+" "+mid+" "+high);
                if(f){
                    x=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            System.out.println(x);
        }
    }
```

## Submission at 2024-10-18 05:44:04


```
    import java.util.Scanner;
    public class Main{
        public static boolean check(int arr[],int total,int n){
            total=total/n;
            total=total/2;
            int u=0,h=0;
            for(int i=0;i<arr.length;i++){
                if(arr[i]<total || arr[i]==total){
                    u++;
                }
                else {
                    h++;
                }
            }
            if(u>(n/2)){
                return true;
            }
            return false;
        }
        public static void main(String args[]){
            Scanner sc = new Scanner(System.in);
            int n,x=-1,s=0;
            n=sc.nextInt();
            int arr[]= new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            int total=0;
            for(int i=0;i<n;i++){
                total=total+arr[i];
            }
            int low=1;
            int high=n*total;
            
            while(low<high){
                int mid=low+(high-low)/2;
                int t=total+mid;
                boolean f=check(arr, t,n);
                if(f){
                    x=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            System.out.println(x);
        }
    }
```

## Submission at 2024-10-25 05:30:59


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
      ArrayList <Integer> result=new ArrayList<>();
       Stack<Node> stack= new Stack<>();
       Stack<Node> output= new Stack<>();
       stack.push(root);
       Node current=root;

       while(!stack.isEmpty()){
        current=stack.pop();
        output.push(current);

        if(current.left!=null){
          stack.push(current.left);
        }
        if(current.right!=null){
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

## Submission at 2024-10-25 05:48:22


```
import java.util.Scanner;
import java.util.HashMap;
import java.io.*;

public class Main{
    public static boolean check(String s1, String s2){
        HashMap<Character, Integer>map1= new HashMap<>();
        HashMap<Character, Integer>map2= new HashMap<>();
        int l1=s1.length();
        int l2=s2.length();

        for(int i=0;i<l1;i++){
            char ch = s1.charAt(i);
            if(!map1.containsKey(ch)){
                map1.put(ch,1);
            }
        }
        for(int i=0;i<l2;i++){
            char ch = s2.charAt(i);
            if(!map2.containsKey(ch)){
                map2.put(ch,1);
            }
        }
        for(char ch: map2.keySet()){
            if(!map1.containsKey(ch)){
                return false;
            }
        }
        return true;

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str1,str2;
        str1=sc.next();
        str2=sc.next();

        System.out.println(check(str1,str2));
    }
}
```

## Submission at 2024-10-25 05:48:59


```
import java.util.Scanner;
import java.util.HashMap;
import java.io.*;

public class Main{
    public static boolean check(String s1, String s2){
        HashMap<Character, Integer>map1= new HashMap<>();
        HashMap<Character, Integer>map2= new HashMap<>();
        int l1=s1.length();
        int l2=s2.length();

        for(int i=0;i<l1;i++){
            char ch = s1.charAt(i);
            if(!map1.containsKey(ch)){
                map1.put(ch,1);
            }
        }
        for(int i=0;i<l2;i++){
            char ch = s2.charAt(i);
            if(!map2.containsKey(ch)){
                map2.put(ch,1);
            }
        }
        for(char ch: map2.keySet()){
            if(!map1.containsKey(ch)){
                return false;
            }
        }
        return true;

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str1,str2;
        str1=sc.next();
        str2=sc.next();

        System.out.println(check(str1,str2));
    }
}
```

## Submission at 2024-10-25 05:51:40


```
import java.util.Scanner;
import java.util.HashMap;
import java.io.*;

public class Main{
    public static boolean check(String s1, String s2){
        HashMap<Character, Integer>map1= new HashMap<>();
        HashMap<Character, Integer>map2= new HashMap<>();
        int l1=s1.length();
        int l2=s2.length();

        for(int i=0;i<l1;i++){
            char ch = s1.charAt(i);
            if(!map1.containsKey(ch)){
                map1.put(ch,1);
            }
        }
        for(int i=0;i<l2;i++){
            char ch = s2.charAt(i);
            if(!map2.containsKey(ch)){
                map2.put(ch,1);
            }
        }
        for(char ch: map2.keySet()){
            if(!map1.containsKey(ch)){
                return false;
            }
            
        }
        return true;

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str1,str2;
        str1=sc.next();
        str2=sc.next();

        System.out.println(check(str1,str2));
    }
}
```

## Submission at 2024-10-25 06:00:50


```


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node ptr1=num1;
        Node ptr2=num2;
        int sum1=0,sum2=0;
        while(ptr1!=null){
            sum1=sum1+ptr1.data;
            ptr1=ptr1.next;
        }
        while(ptr2!=null){
            sum2=sum2+ptr2.data;
            ptr2=ptr2.next;
        }
        Node result=new Node(sum2);
        result.next=new Node(sum1);

        return result;
    }
}
```

## Submission at 2024-10-25 06:05:07


```


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node ptr1=num1;
        Node ptr2=num2;
        int sum1=0,sum2=0;
        while(ptr1!=null){
            sum1=sum1+ptr1.data;
            ptr1=ptr1.next;
        }
        while(ptr2!=null){
            sum2=sum2+ptr2.data;
            ptr2=ptr2.next;
        }
        
        Node result=new Node(sum2);
        result.next=new Node(sum1);

        return result;
        
    }
}
```

## Submission at 2024-10-25 06:06:38


```


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node ptr1=num1;
        Node ptr2=num2;
        int sum1=0,sum2=0;
        while(ptr1!=null){
            sum1=sum1+ptr1.data;
            ptr1=ptr1.next;
        }
        while(ptr2!=null){
            sum2=sum2+ptr2.data;
            ptr2=ptr2.next;
        }
        if(sum1>sum2){
        Node result=new Node(sum2);
        result.next=new Node(sum1);
        }
        else if(sum2>sum1){
            Node result= new Node(sum1);
            result.next= new Node(sum2);
        }

        return result;
        
    }
}
```

## Submission at 2024-10-25 06:10:19


```


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node ptr1=num1;
        Node ptr2=num2;
        int sum1=0,sum2=0;
        while(ptr1!=null){
            sum1=sum1+ptr1.data;
            ptr1=ptr1.next;
        }
        while(ptr2!=null){
            sum2=sum2+ptr2.data;
            ptr2=ptr2.next;
        }
        if(sum1>sum2){
        Node result=new Node(sum2);
        result.next=new Node(sum1);
        return result;
        }
        else if(sum2>sum1){
            Node result1= new Node(sum1);
            result1.next= new Node(sum2);

            return result1;
        }
        return num1;

        
    }
}
```

## Submission at 2024-10-25 06:27:50


```
import java.util.Scanner;
import java.util.HashMap;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        HashMap<String, Character> map= new HashMap<>();
        String str;
        boolean f=true;
        str=sc.next();
        String arr[]= new String[str.length()];
        for(int i=0;i<str.length();i++){
            arr[i]=sc.next();
        }
        for(int i=0;i<str.length();i++){
            if(!map.containsKey(arr[i])){
                map.put(arr[i],str.charAt(i));
            }
        }
        for(int i=0;i<str.length();i++){
            if(map.get(arr[i])!= str.charAt(i)){
                f=false;
                break;
            }
        }
        System.out.println(f);


    }
}
```

## Submission at 2024-10-25 06:41:39


```
import java.util.Scanner;
import java.util.HashMap;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        boolean f=true;
        HashMap<Character,String  > map= new HashMap<>();
        String str=sc.next();
        String arr[]= new String[str.length()];
        for(int i=0;i<str.length();i++){
            arr[i]=sc.next();
        }
        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);
            if(!map.containsKey(ch)){
                map.put(ch,arr[i]);
            }
        }
        for(int i=0;i<str.length();i++){
            if(map.get(str.charAt(i))!=arr[i]){
                f=false;
                break;
            }
        }
        System.out.println(f);
    }
}
```

## Submission at 2024-10-25 06:55:16


```
import java.util.Scanner;

import java.util.Stack;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        boolean f=true;
        Stack<Character> stack1 = new Stack<>();
        Stack<Character> stack2 = new Stack<>();
        String s1,s2;
        s1=sc.next();
        s2=sc.next();
        int l1=s2.length();
        for(int i=0;i<s1.length();i++){
            stack1.push(s1.charAt(i));
        }
        for(int i=0;i<s1.length();i++){
            stack2.push(s2.charAt(i));
        }
        int k=0;
        while(k<l1){
            if(stack2.contains(stack1.peek())){
                stack1.pop();
            }
            else{
                f=false;
                break;
            }
            k++;
        }
        System.out.println(f);
    }
}
```

## Submission at 2024-11-18 04:01:26


```
import java.util.HashMap;
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str,str1="";
        str=sc.next();
        HashMap <String,Character> map= new HashMap<>();
        int l=str.length();
        String arr[]= new String [l];
        for(int i=0;i<l;i++){
            arr[i]=sc.next();
        }
        for(int i=0;i<l;i++){
            if(!map.containsKey(str.charAt(i))){
                map.put(arr[i],str.charAt(i));
            }
        }
        for(int i=0;i<l;i++){
            str1=str1+map.get(arr[i]);
        }
        if(str1.equals(str)){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }

    }
}
```

## Submission at 2024-11-18 04:05:12


```
import java.util.HashMap;
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str,str1="";
        str=sc.next();
        HashMap <String,Character> map= new HashMap<>();
        HashMap<Character,String> map1= new HashMap<>();
        int l=str.length();
        String arr[]= new String [l];
        for(int i=0;i<l;i++){
            arr[i]=sc.next();
        }
        for(int i=0;i<l;i++){
            if(!map1.containsKey(str.charAt(i))){
                map1.put(str.charAt(i),arr[i]);
                map.put(arr[i],str.charAt(i));
            }
        }
        for(int i=0;i<l;i++){
            str1=str1+map.get(arr[i]);
        }
        System.out.println(str1);
        if(str1.equals(str)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

    }
}
```

## Submission at 2024-11-18 04:06:08


```
import java.util.HashMap;
import java.util.Scanner;

public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str,str1="";
        str=sc.next();
        HashMap <String,Character> map= new HashMap<>();
        HashMap<Character,String> map1= new HashMap<>();
        int l=str.length();
        String arr[]= new String [l];
        for(int i=0;i<l;i++){
            arr[i]=sc.next();
        }
        for(int i=0;i<l;i++){
            if(!map1.containsKey(str.charAt(i))){
                map1.put(str.charAt(i),arr[i]);
                map.put(arr[i],str.charAt(i));
            }
        }
        for(int i=0;i<l;i++){
            str1=str1+map.get(arr[i]);
        }
        if(str1.equals(str)){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }

    }
}
```

## Submission at 2024-11-22 05:11:39


```
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        HashMap<Integer,Integer>map=new HashMap<>();
        int n;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int c=1;
            if(!map.containsKey(arr[i])){
                for(int j=i+1;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(c,arr[i]);
            }
        }
        for(int a: map.keySet()){
            if(map.get(a)==2){
                System.out.println(map.get(2));
                break;
            }
        }
        System.out.println(map.get(2));
        
    }
}
```

## Submission at 2024-11-22 05:16:27


```
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        HashMap<Integer,Integer>map=new HashMap<>();
        int n;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int c=1;
            if(!map.containsKey(arr[i])){
                for(int j=i+1;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        for(int a: map.keySet()){
            if(map.get(a)==2){
                System.out.println(map.get(2));
                break;
            }
        }
        for(int a:map.keySet()){
            int max=0;
            if(map.get(a)==2){
                max=a;
            }
        }
        System.out.println(max);
    }
}
```

## Submission at 2024-11-22 05:17:56


```
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        HashMap<Integer,Integer>map=new HashMap<>();
        int n,max=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int c=1;
            if(!map.containsKey(arr[i])){
                for(int j=i+1;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        for(int a: map.keySet()){
            if(map.get(a)==2){
                System.out.println(map.get(2));
                break;
            }
        }
        for(int a:map.keySet()){
            int max=0;
            if(map.get(a)==2){
                if(max<a){
                    max=a;
                }
            }
        }
        System.out.println(max);
    }
}
```

## Submission at 2024-11-22 05:20:02


```
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        HashMap<Integer,Integer>map=new HashMap<>();
        int n,max=0;
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            int c=1;
            if(!map.containsKey(arr[i])){
                for(int j=i+1;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        
        for(int a:map.keySet()){
            if(map.get(a)==2){
                if(max<a){
                    max=a;
                }
            }
        }
        System.out.println(max);
    }
}
```

## Submission at 2024-11-22 05:36:50


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        for(int i=0;i<n+1;i++){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:36:59


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        for(int i=0;i<n+1;i++){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:40:25


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:42:16


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-2;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:46:52


```
import java.util.Scanner;
public class Main{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]= new int[n];
        int sum=0;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        System.out.println(sum);

    }
}
```

## Submission at 2024-11-22 05:51:20


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        if(a>b){
            System.out.println(a-b);
        }
        else{
            System.out.println(b-a);
        }
    }
}
```

## Submission at 2024-11-22 05:59:03


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            for(int j=0;i<n;j++){
                if(arr[i]-arr[j]>=2 || arr[i]-arr[j]<=-2){
                    c++
                }
            }
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-11-22 06:01:00


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=2){
                        c++
                    }
                }
                else{
                    if(arr[j]-arr[i]<=2){
                        c++;
                    }
                }
            }
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-11-22 06:06:35


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0,k=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            c=0
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=2){
                        break;
                    }
                }
                else{
                    if(arr[j]-arr[i]<=2){
                        break;
                    }
                }
                c++;
                
            }
            if(c==m){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-11-22 06:08:08


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0,k=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            c=0
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=d){
                        break;
                    }
                }
                else{
                    if(arr[j]-arr[i]<=d){
                        break;
                    }
                }
                c++;
            }
            if(c==m){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-11-22 06:10:09


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0,k=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            c=0;
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=d){
                        break;
                    }
                }
                else{
                    if(arr[j]-arr[i]<=d){
                        break;
                    }
                }
                c++;
            }
            if(c==m){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-11-22 06:10:09


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0,k=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            c=;
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=d){
                        break;
                    }
                }
                else{
                    if(arr[j]-arr[i]<=d){
                        break;
                    }
                }
                c++;
            }
            if(c==m){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-11-22 06:10:10


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0,k=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            c=0;
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=d){
                        break;
                    }
                }
                else{
                    if(arr[j]-arr[i]<=d){
                        break;
                    }
                }
                c++;
            }
            if(c==m){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-11-22 06:10:10


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int m,n,d,c=0,k=0;
        m=sc.nextInt();
        n=sc.nextInt();
        d=sc.nextInt();
        int arr1[]= new int[m];
        int arr2[]= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        for(int i=0;i<m;i++){
            c=0;
            for(int j=0;i<n;j++){
                if(arr[i]>arr[j]){
                    if(arr[i]-arr[j]<=d){
                        break;
                    }
                }
                else{
                    if(arr[j]-arr[i]<=d){
                        break;
                    }
                }
                c++;
            }
            if(c==m){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-11-22 06:35:36


```
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containskey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=arr[0];
        for(int k: map.keySet()){
            if(map.get(a)==1){
                if(a<min){
                    min=a;
                }
            }
        }
        System.out.println(min);
        

    }
}
```

## Submission at 2024-11-22 06:36:53


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containskey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=arr[0];
        for(int k: map.keySet()){
            if(map.get(a)==1){
                if(a<min){
                    min=a;
                }
            }
        }
        System.out.println(min);
        

    }
}
```

## Submission at 2024-11-22 06:37:57


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containskey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=arr[0];
        for(int k: map.keySet()){
            if(map.get(a)==1){
                if(a>min){
                    min=a;
                }
            }
        }
        System.out.println(min);
        

    }
}
```

## Submission at 2024-11-22 06:41:11


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containskey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=0;
        for(int k: map.keySet()){
            if(map.get(a)==1){
                if(a>min){
                    min=a;
                }
            }
        }
        System.out.println(min);
        

    }
}
```

## Submission at 2024-11-22 06:42:52


```
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containsKey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=0;
        for(int k: map.keySet()){
            if(map.get(a)==1){
                if(a>min){
                    min=a;
                }
            }
        }
        System.out.println(min);
        

    }
}
```

## Submission at 2024-11-22 06:46:08


```
/* write code from scratch */
/* write code from scratch */
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containsKey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=0;
        for(int k: map.keySet()){
            if(map.get(k)==1){
                if(k>min){
                    min=k;
                }
            }
        }
        System.out.println(min);
    }
}
```

## Submission at 2024-11-22 06:49:03


```
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=1;
            if(!map.containsKey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=0;
        for(int k: map.keySet()){
            if(map.get(k)==1){
                if(k>min){
                    min=k;
                }
            }
        }
        System.out.println(min);
    }
}
```

## Submission at 2024-11-22 06:53:25


```
import java.util.Scanner;
import java.util.HashMap;
public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n,c;
        HashMap<Integer, Integer>map= new HashMap<>();
        n=sc.nextInt();
        int arr[]= new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++){
            c=0;
            if(!map.containsKey(arr[i])){
                for(int j=0;j<n;j++){
                    if(arr[j]==arr[i]){
                        c++;
                    }
                }
                map.put(arr[i],c);
            }
        }
        int min=0;
        for(int k: map.keySet()){
            if(map.get(k)==1){
                if(k>min){
                    min=k;
                }
            }
        }
        System.out.println(min);
    }
}
```

