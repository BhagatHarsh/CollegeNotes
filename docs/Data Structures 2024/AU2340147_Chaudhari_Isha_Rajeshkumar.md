## Submission at 2024-08-09 04:56:34


```
import java.util.Scanner;
public class Main{
public static void main(String[] args){
Scanner input = new Scanner(System.in);
String username = input.next();
System.out.println("Hello "+ username +"!");
}
}
```

## Submission at 2024-08-09 04:57:29


```
import java.util.Scanner;
public class Main{
public static void main(String[] args){
Scanner input = new Scanner(System.in);
String username = input.next();
System.out.println("Hello "+ username +"!");
}
}
```

## Submission at 2024-08-09 05:10:26


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String username = input.next();
        System.out.println("Hello "+ username + "!");
        
    }
}
```

## Submission at 2024-08-09 05:19:41


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=1;i<=n;i++){
            String username= input.next();
            System.out.println("Hello "+ username + "!");
        }
    }
}
```

## Submission at 2024-08-16 04:56:18


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
        return(fibonacci(x-1)+fibonacci(x-2));
    }
}

```

## Submission at 2024-08-16 05:35:56


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
    private static Boolean isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    if(n<0 || n%2!=0){
       return false;
    }
    return isPowerOfTwo(n/2);
    }
    }


```

## Submission at 2024-08-21 10:34:44


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

## Submission at 2024-08-21 10:53:58


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

## Submission at 2024-08-21 11:11:32


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main{

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
        boolean[] used = new boolean[nums.length]; 
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
        scanner.close();

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

## Submission at 2024-08-29 11:17:51


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    public static boolean areArraysEqual(int[] arr1, int[] arr2) {
        
        if (arr1.length != arr2.length) {
            return false;
        }
        Map<Integer, Integer> countMap = new HashMap<>();

        for (int num : arr1) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }
        for (int num : arr2) {
            if (!countMap.containsKey(num)) {
                return false;
            }
            countMap.put(num, countMap.get(num) - 1);
            if (countMap.get(num) == 0) {
                countMap.remove(num);
            }
        }
        return countMap.isEmpty();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int len1 = sc.nextInt();
        int len2 = sc.nextInt();

        int[] arr1 = new int[len1];
        int[] arr2 = new int[len2];

        for (int i = 0; i < len1; i++) {
            arr1[i] = sc.nextInt();
        }

        for (int i = 0; i < len2; i++) {
            arr2[i] = sc.nextInt();
        }

        boolean result = areArraysEqual(arr1, arr2);
        System.out.println(result ? "true" : "false");
    }
}

```

## Submission at 2024-08-29 11:21:09


```
import java.util.Scanner;

public class Main {

    public static int sumOfMultiples(int n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }

        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int result = sumOfMultiples(n);

        System.out.println(result);

    }
}

```

## Submission at 2024-08-29 11:25:14


```
import java.util.Scanner;

public class Main {

    public static int countEvenDigitNumbers(int[] nums) {
        int count = 0;

        for (int num : nums) {
            
            int digits = Integer.toString(num).length();
            if (digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        int result = countEvenDigitNumbers(nums);
        System.out.println(result);

    }
}

```

## Submission at 2024-08-29 11:30:25


```
import java.util.Scanner;

public class Main {

    public static int findKthMissing(int[] arr, int k) {
        int missingCount = 0;
        int current = 1; 
        for (int i = 0; i < arr.length; i++) {
            while (current < arr[i]) {
                missingCount++;
                if (missingCount == k) {
                    return current;
                }
                current++;
            }
            current = arr[i] + 1; 
            }

        while (missingCount < k) {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
            current++;
        }

        return -1; 
        }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int result = findKthMissing(arr, k);
        System.out.println(result);

    }
}

```

## Submission at 2024-08-29 11:38:00


```
import java.util.Scanner;

public class Main {

    public static int triangularSum(int[] nums) {
        int n = nums.length;

        while (n > 1) {
            for (int i = 0; i < n - 1; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10;  
                }
            n--;  
        }

        return nums[0];
        }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        int result = triangularSum(nums);
        System.out.println(result);
}
}

```

## Submission at 2024-08-29 11:42:14


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int M = sc.nextInt();
        int N = sc.nextInt();

        int[][] matrix = new int[M][N];
        int[][] transpose = new int[N][M];

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                System.out.print(transpose[i][j] + " ");
            }
            System.out.println();
        }
    }
}

```

## Submission at 2024-08-29 11:44:45


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        if (matrix == null || matrix.length == 0) {
            return result;
        }

        int top = 0, bottom = matrix.length - 1;
        int left = 0, right = matrix[0].length - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result.add(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--;

          
            if (top <= bottom) {  
                for (int i = right; i >= left; i--) {
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {  
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[][] matrix = new int[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        List<Integer> result = spiralOrder(matrix);
        System.out.println(String.join(" ", result.stream().map(String::valueOf).toArray(String[]::new)));

    }
}

```

## Submission at 2024-08-29 13:42:11


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

## Submission at 2024-08-30 05:16:47


```
import java.util.Scanner;
public class Main { 
    public static double pow(int x, int n){
        if(n==0) return 1;
        else if(n<0) return x*1*1/(pow(x,n+1));
        return x*(pow(x,n-1));
    }

public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 int x = sc.nextInt();
 int n = sc.nextInt();
 System.out.println(pow(x,n));
}
}

```

## Submission at 2024-08-30 05:18:18


```
import java.util.Scanner;
public class Main { 
    public static double pow(int x, int n){
        if(n==0) return 1;
        else if(n<0) return x*1*1/(pow(x,n+1));
        return x*(pow(x,n-1));
    }

public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 int x = sc.nextInt();
 int n = sc.nextInt();
 System.out.println(pow(x,n));
}
}

```

## Submission at 2024-08-30 05:19:08


```
import java.util.Scanner;
public class Main { 
    public static int pow(int x, int n){
        if(n==0) return 1;
        else if(n<0) return x*1*1/(pow(x,n+1));
        return x*(pow(x,n-1));
    }

public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 int x = sc.nextInt();
 int n = sc.nextInt();
 System.out.println(pow(x,n));
}
}

```

## Submission at 2024-08-30 05:32:37


```
import java.util.Scanner;
class Main {
    public static boolean Palindrome(String str){
        if (str.length()==1){
            return true;
        }
        else if(str.charAt(0)!=str.charAt(str.length()-1)){
            return false;
        }else{
            return Palindrome(str.substring(1,str.length()-2));
        }
    }
    public static void main (String args []) {
        Scanner sc=new Scanner(System.in);
        String str = sc.next();
        if(Palindrome(str)){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
}
}
```

## Submission at 2024-08-30 05:33:24


```
import java.util.Scanner;
class Main {
    public static boolean Palindrome(String str){
        if (str.length()==1){
            return true;
        }
        else if(str.charAt(0)!=str.charAt(str.length()-1)){
            return false;
        }else{
            return Palindrome(str.substring(1,str.length()-2));
        }
    }
    public static void main (String args []) {
        Scanner sc=new Scanner(System.in);
        String str = sc.next();
        if(Palindrome(str)){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
}
}
```

## Submission at 2024-08-30 05:57:39


```
import java.util.Scanner;
public class Main{
    public static void max(int[] a, int[] b){
        for(int i=0; i<a.length;i++){
            System.out.print((a[i]>b[i]? a[i]:b[i])+" ");
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int[] a= new int[n];
        int[] b= new int[n];
        for(int i =0;i<n;i++){
            a[i]=sc.nextInt();
        }
        for(int i=0; i<n;i++){
            b[i]=sc.nextInt();
        }
        max(a,b);
    }
}
```

## Submission at 2024-08-30 06:25:17


```
//import java.util.Scanner;

public class Main {
    public static List<Integer> diagonalTraversal(int[][] a) {
        for(int i=0;i<a.length;i++){
            for(int j =0;j<a[0].length;j++){
                if(i+j==0) {
                    System.out.print(a[0][0]+" ");
                }else if(i+j==1){
                    System.out.print(a[1][0]+" "+a[0][1]+" ");
                }else if(i+j==2){
                    System.out.print(a[1][1]+" "+a[2][0]+" "+a[0][2]);
                }
                else if(i+j==3){
                    System.out.print(a[1][2]+" "+a[2][1]);
                }
                else if(i+j==4){
                    System.out.print(a[2][2]+" ");
                }
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m= sc.nextInt();
        int n = sc.nextInt();
        int[][] a= new int[m][n];
        for(int i =0;i<a;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
         diagonalTraversal(a);
    }
        
    }


```

## Submission at 2024-08-30 06:26:31


```
import java.util.Scanner;

public class Main {
    public static List<Integer> diagonalTraversal(int[][] a) {
        for(int i=0;i<a.length;i++){
            for(int j =0;j<a[0].length;j++){
                if(i+j==0) {
                    System.out.print(a[0][0]+" ");
                }else if(i+j==1){
                    System.out.print(a[1][0]+" "+a[0][1]+" ");
                }else if(i+j==2){
                    System.out.print(a[1][1]+" "+a[2][0]+" "+a[0][2]);
                }
                else if(i+j==3){
                    System.out.print(a[1][2]+" "+a[2][1]);
                }
                else if(i+j==4){
                    System.out.print(a[2][2]+" ");
                }
            }
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m= sc.nextInt();
        int n = sc.nextInt();
        int[][] a= new int[m][n];
        for(int i =0;i<a;i++){
            for(int j=0;j<n;j++){
                a[i][j]=sc.nextInt();
            }
        }
         diagonalTraversal(a);
    }
        
    }


```

## Submission at 2024-09-06 04:43:25


```
import java.util.Scanner;
public class Main { 
    public static int pow(int x, int n){
        if(n==0) return 1;
        else if(n<0) return x*1*1/(pow(x,n+1));
        return x*(pow(x,n-1));
    }

public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 int x = sc.nextInt();
 int n = sc.nextInt();
 System.out.println((int)pow(x,n));
}
}
```

## Submission at 2024-09-14 04:32:11


```
import java.util.Scanner;

public class Main {

    public static int pow(int x, int n) {
        if (n == 0) {
            return 1; 
        } else if (n < 0) {
            return 1 / pow(x, -n);
        } else {
            return x * pow(x, n - 1); 
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        System.out.println(pow(x, n));
        sc.close();
    }
}
```

## Submission at 2024-10-04 05:26:06


```
import java.util.*;
class Main{
    public static Boolean VA(String s, String t){
        for(int i=0; i< s.length();i++){
            char ch= s.charAt(i);
            for(int j=0; j<t.length();j++){
                if(ch == t.charAt(j)){
                    return true;
                }
            }
        }
        return false;
    } 
    public static void main(String[] args){
        String s,t;
        return VA(s,t);
    }
}
```

## Submission at 2024-10-04 05:54:12


```
import java.util.*;
class Main{
    public static int time(int[] n,int k){
        int k1=0;
        int k2=0;
        Arrays.sort(n);
        for(int i=0;i<n.length-1; i++){
                if(i%2==0){
                    k1+=n[i];
                }else{
                    k2+=n[i];
                }
        }
        return Math.max(k1,k2);    
    }
    public static void main(String []args){
        Scanner sc= new Scanner(System.in);
        int[] n= sc.nextInt(n[0]);
        int k= sc.nextInt();
       return time(n,k);
    }
}
```

## Submission at 2024-10-04 06:25:30


```
import java.util.*;
class Main{
   
    public static int dt(int[] temp, int n){
         Stack st= new Stack();
        for(int i=0; i< temp.length; i++){
            int days=0;
            for(int j=i+1; j<temp.length; j++){
                days+=1;
                if(temp[i]>=temp[j]){
                    continue;
                }else{
                    break;
                }st.push(days);
            }
        }while(!st.isEmpty()){
            System.out.print(st.peek());
    }
}public static void main(String []args){
        int[] res = dt(temp,n);
        return res;
    }
}
```

## Submission at 2024-10-25 05:32:05


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
        Node.data= this.data;
        
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       if(root!=null){
        postOrder(root.left);
        postOrder(root.right);
        return root;
       }
    }
}
```

## Submission at 2024-10-25 05:32:06


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
        Node.data= this.data;
        
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       if(root!=null){
        postOrder(root.left);
        postOrder(root.right);
        return root;
       }
    }
}
```

## Submission at 2024-10-25 05:43:10


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String rn = sc.next();
        String mg = sc.next();
        int cnt=0;
        for(int i=0; i<rn.length(); i++){
            for(int j =0; j<mg.length();j++){
                if(rn.charAt(i)== mg.charAt(j)){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt==rn.length()){
            System.out.println("true");
        }else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-10-25 06:02:24


```
import java.util.Scanner;
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.next();
        int[] arr= new int[p.length()];
       // hm.put(a,dog);
        //hm.put(b,cat);
        System.out.print("true");
    }
}
```

## Submission at 2024-10-25 06:02:31


```
import java.util.Scanner;
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.next();
        int[] arr= new int[p.length()];
       // hm.put(a,dog);
        //hm.put(b,cat);
        System.out.print("true");
    }
}
```

## Submission at 2024-10-25 06:02:57


```
import java.util.Scanner;
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.next();
        int[] arr= new int[p.length()];
       // hm.put(a,dog);
        //hm.put(b,cat);
        System.out.print("false");
    }
}
```

## Submission at 2024-10-25 06:36:27


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
    //Function to return a list containing the postOrder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
        int[] arr;
       if(root != null){
        postOrder(root.left);
        postOrder(root.right);
        for(int i=0; i<arr.length;i++){
            arr[i]=root.data;
        }
       }
       return arr;
    }
}
```

## Submission at 2024-10-25 06:56:19


```
import java.util.Scanner;
import java.util.Map;
public class Main{
    public static void main(String[] args){
        Map<String, String> hm = new Map<>();
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.next();
        char[] arr= new char[p.length()];
        hm.put(a,dog);
        hm.put(b,cat);
        for(int i=0; i<s.length();i++){
            arr[i]= hm.get(key);
        }
        int cnt=0;
        for(int i=0; i<s.length();i++){
            if(arr[i]==s.charAt(i)){
                cnt++;
            }else{
                continue;
            }
        }
        if(cnt==arr.length){
            System.out.print("true");
        }else{
            System.out.print("false");
        }
    }
}
```

## Submission at 2024-10-25 07:02:41


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#Function to return a list containing the postorder traversal of the tree.
def postOrder(root):
    arr[]
    root = node
    if node.isnull:
      return
    else:
        postOrder(node.left)
        postOrder(node.right)
        arr.append(node.data)
        return arr
```

## Submission at 2024-11-22 04:07:07


```
import java.util.*;
public class BinaryTree {
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    } 
    //Creating a binary tree
    static class Builttree{
        static int idx=-1;
        public static Node builttree(int[] seq){
            idx++;
            if(seq[idx]==-1){return null;}
            Node curr=new Node(seq[idx]);
            curr.left=builttree(seq);
            curr.right=builttree(seq);
            return curr;
        }
    }   
    // Preorder
    public static void preorder(Node root){
        if(root==null){return;}
        System.out.print(root.data+" ");
        preorder(root.left);
        preorder(root.right);
    }
    //PostOrder
    public static void postorder(Node root){
        if(root == null){return ;}
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
    //InOrder
    public static void inorder(Node root){
        if(root==null){return;}
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    //LevelOrder
    public static void LevelOrder(Node root){
        if(root==null){return;}
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        q.add(null);
        while(!q.isEmpty()){
            Node curr=q.remove();
            if(curr==null){
                System.out.println();
                if(q.isEmpty()){break;}
                else{q.add(null);}
            }
            else{
                System.out.print(curr.data+ " ");
                if(curr.left!=null){
                    q.add(curr.left);
                }
                if(curr.right!=null){
                    q.add(curr.right);
                }
            }
        }
    }
    public static int count_of_nodes(Node root){
        if(root==null){return 0;}
        int count_left=count_of_nodes(root.left);
        int count_right=count_of_nodes(root.right);
        return count_left+count_right+1;
    }
    public static int sum_of_nodes(Node root){
        if(root==null){return 0;}
        
        int sum_left=sum_of_nodes(root.left);
        int sum_right=sum_of_nodes(root.right);
        return sum_left+sum_right+root.data;
    }
    public static int height(Node root){
        if(root==null){return 0;}
        int hL=height(root.left);
        int hR=height(root.right);
        return Math.max(hR,hL)+1;
    }
    //Approach-1(O(n^2))
    public static int diameter(Node root){
        if(root==null){return 0;}
        int d1=diameter(root.left);
        int d2=diameter(root.right);
        int d3=height(root.left)+height(root.right)+1;
        return Math.max(d1,Math.max(d2,d3));
    }
    //Approach-2(o(n))
    static class Treeinfo{
        int ht,diam;
        Treeinfo(int ht,int diam){
            this.ht=ht;
            this.diam=diam;
        }
    }
    public static Treeinfo diameter2(Node root){
        if(root==null){return new Treeinfo(0,0);}
        Treeinfo left=diameter2(root.left);
        Treeinfo right=diameter2(root.right);
        int ht=Math.max(left.ht,right.ht)+1;
        int dia=Math.max(Math.max(left.diam,right.diam),left.ht+right.ht+1);
        Treeinfo newdata=new Treeinfo(ht,dia);
        return newdata;
    }
    //Subtree
    public static boolean isIdentical(Node root, Node Sroot){
        if(root==null && Sroot==null) return true;
        if(root==null || Sroot==null) return false;
        if(root.data==Sroot.data){
            return isIdentical(root.left,Sroot.left) && isIdentical(root.right,Sroot.right);
        }
        return false;
    }
    public static boolean isSubtree(Node root,Node Sroot){
        if(Sroot==null) return true;
        if(root== null) return false;
        if(root.data==Sroot.data){
            if(isIdentical(root, Sroot)) return true;
        }
        return isSubtree(root.left,Sroot.left)||isSubtree(root.right,Sroot.right);
    }
    public static void main(String[] args){
        int[] nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
        BinaryTree tree=new BinaryTree();
        Node root=Builttree.builttree(nodes);
        System.out.println(root.data);
        System.out.println("\nPOST-ORDER:");
        postorder(root);
        System.out.println("\nPRE-ORDER:");
        preorder(root);
        System.out.println("\nIN-ORDER:");
        inorder(root);
        System.out.println("\nLEVEL-ORDER:");
        LevelOrder(root);
        System.out.println("No.of Nodes:");
        System.out.println(count_of_nodes(root));
        System.out.println("Sum of Nodes");
        System.out.println(sum_of_nodes(root));
        System.out.println("Height");
        System.out.println(height(root));
        System.out.println("Diameter:");
        System.out.println(diameter(root));
        System.out.println("Approach-2 Diamter:");
        System.out.println(diameter2(root).diam);
        System.out.println("Subtree:");
        //Error here
        int[] n={2,4,-1,-1,5,-1,-1};
        Node Sroot=Builttree.builttree(n);
        System.out.println(isSubtree(root,Sroot));
    }
}import java.util.*;
public class BST{
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    public static Node insert(Node root, int val){
        if(root==null){
            root = new Node(val);
            return root;
        }
        if(root.data>val){root.left=insert(root.left,val);}
        else{root.right=insert(root.right,val);}
        return root;
    }
    public static void inorder(Node root){
        if(root==null){return;}
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    public static boolean search(Node root, int key){
        if(root==null) return false;
        if(root.data>key){return search(root.left,key);}
        else if(root.data==key){return true;}
        else{return search(root.right,key);}
    }
    public static Node delete(Node root, int val_to_be_del){
        if(root==null){return root;}
        if(root.data>val_to_be_del){root.left=delete(root.left,val_to_be_del);}
        else if(root.data<val_to_be_del){root.right=delete(root.right,val_to_be_del);}
        //Till here same logic as search 
        else{
            //root.data==val
            //case-1
            if(root.left==null && root.right==null){return null;}
            //case2
            if(root.left==null){return root.right;}
            else if(root.right==null){return root.left;}
            //Case 3
            Node ins=inorderSuccessor(root.right);
            root.data=ins.data;
            root.right=delete(root.right, ins.data);
        }
        return root;
    }
    public static Node inorderSuccessor(Node root){
        while(root.left!=null){
            root=root.left;
        }
        return root;
    }
    //Q1- PRINT IN RANGE
    public static void printInRange(Node root, int x,int y){
        if(root==null){return;}
        if(root.data>=x && root.data<=y){
            printInRange(root.left, x, y);
            System.out.print(root.data+" ");
            printInRange(root.right, x, y);
        }
        else if(root.data>=y){
            printInRange(root.left, x, y);
        }
        else{
            printInRange(root.right, x, y);
        }
    }
    //Root to Leaf path
    public static void printPath(ArrayList<Integer> path){
        for(int i:path){
            System.out.print(i+" ");
        }
        System.out.println();
    }
    public static void printRoot2Leaf(Node root, ArrayList<Integer> path) {
        //same as preorder
        if(root==null){return;}

        path.add(root.data);
        //leaf node
        if(root.left==null && root.right==null){printPath(path);}
        else{
            printRoot2Leaf(root.left, path);
            printRoot2Leaf(root.right, path);
        }
        printRoot2Leaf(root.left, path);
        printRoot2Leaf(root.right, path);
        path.remove(path.size()-1);
    }   
     public static void main(String[] args){
        int[] a={5,1,3,2,4,7};
        Node root=null;
        for(int i=0;i<a.length;i++){
            root=insert(root,a[i]);
        }
       // inorder(root);
        //root=delete(root,4);
        //System.out.println();
        //inorder(root);
        //System.out.println(search(root,8));
        //printInRange(root, 1, 5);
        printRoot2Leaf(root, new ArrayList<>());
    }
}
```

## Submission at 2024-11-22 04:59:10


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    cnt++;
                }else{
                    continue;
                }
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-11-22 05:15:03


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int d=sc.nextInt();
        int[] arr1= new int[m];
        int[] arr2= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=Math.abs(arr1[i]-arr2[j]);
                if(x<=d){
                    cnt++;
                }else{
                    continue;
                }
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-11-22 05:17:25


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int d=sc.nextInt();
        int[] arr1= new int[m];
        int[] arr2= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=Math.abs(arr1[i]-arr2[j]);
                if(x=0){
                    continue;
                }
                else if{
                if(x<=d){
                    cnt++;
                }else{
                    continue;
                }
                }
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-11-22 05:18:37


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int d=sc.nextInt();
        int[] arr1= new int[m];
        int[] arr2= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=Math.abs(arr1[i]-arr2[j]);
                if(x=0){
                    continue;
                }
                else{
                if(x<=d){
                    cnt++;
                }else{
                    continue;
                }
                }
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-11-22 05:21:23


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int d=sc.nextInt();
        int[] arr1= new int[m];
        int[] arr2= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=Math.abs(arr1[i]-arr2[j]);
                if(x<=d && x!=0){
                    cnt++;
                }else{
                    continue;
                }
            }
        }
        System.out.println(cnt);
    }
}
```

## Submission at 2024-11-22 05:25:45


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println(b-a);
    }
}
```

## Submission at 2024-11-22 05:32:18


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:50:21


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<n+1;i++){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:56:18


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int d=sc.nextInt();
        int[] arr1= new int[m];
        int[] arr2= new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=sc.nextInt();
        }for(int i=0;i<n;i++){
            arr2[i]=sc.nextInt();
        }
   
        int sum=0;
        for(int i=0;i<m;i++){
             int cnt=0;
            for(int j=0;j<n;j++){
                int x=Math.abs(arr1[i]-arr2[j]);
                if(x<=d){
                    cnt++;
                }else{
                    continue;
                }
            }
            if(cnt==0){
                sum++;
            }else{
                continue;
            }
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:10:39


```
import java.util.Scanner;
import java.util.*;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Hashmap<Integer,Integer> hm= new Hashmap<>();

        int n=sc,nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        for(key int arr: hm.setkey()){
            for(int i=0;i<n;i++){
                int cnt=0;
                if(arr[i]==arr[i+1]){
                    cnt++;
                }
            }
        }
    }
}
```

## Submission at 2024-11-22 06:11:19


```
import java.util.Scanner;
import java.util.*;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Hashmap<Integer,Integer> hm= new Hashmap<>();

        int n=sc,nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        for(key int arr: hm.setkey()){
            for(int i=0;i<n;i++){
                int cnt=0;
                if(arr[i]==arr[i+1]){
                    cnt++;
                }
            }
        }
    }
}
```

## Submission at 2024-11-22 06:23:38


```
import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        Arrays.sort(arr);
        int cnt=0;
        for(int i=1;i<n;i++){
                if(arr[i-1]==arr[i]){
                    cnt++;
                }else{
                    continue;
                }
        }
        System.out.println(cnt);
    }
}
```

