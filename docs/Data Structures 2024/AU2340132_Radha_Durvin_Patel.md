## Submission at 2024-08-09 05:00:48


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        System.out.println("Hello "+n+"!");
    }
}
```

## Submission at 2024-08-09 05:06:30


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        System.out.println("Hello "+n+"!");
    }
}
```

## Submission at 2024-08-09 05:13:39


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        for(int i=1;i<=n;i++){
            String name=in.next();
            System.out.println("Hello "+name+"!");
        }
    }
}
```

## Submission at 2024-08-21 10:40:36


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

## Submission at 2024-08-21 11:01:00


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

## Submission at 2024-08-21 11:01:33


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

## Submission at 2024-08-21 11:41:29


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    // Helper function to generate permutations recursively
    private static void permute(int[] nums, List<Integer> current, boolean[] used, List<List<Integer>> result) {
        // Base case: if the current permutation is of the same size as nums
        if (current.size() == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }

        // Recursive case
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue; // Skip already used elements

            // Mark the element as used
            used[i] = true;
            current.add(nums[i]); // Add it to the current permutation

            // Recurse to generate the next element in the permutation
            permute(nums, current, used, result);

            // Backtrack: unmark the element and remove it from the current permutation
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

        // Reading the input array
        String[] input = scanner.nextLine().split(" ");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }
        scanner.close();

        // Generate permutations
        List<List<Integer>> result = permute(nums);

        // Print permutations in the desired format
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

## Submission at 2024-08-23 11:29:55


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-23 11:34:49


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-23 11:35:38


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-23 11:40:34


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
}

```

## Submission at 2024-08-23 11:41:35


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
}

```

## Submission at 2024-08-23 11:42:25


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
}

```

## Submission at 2024-08-23 13:45:03


```
import java.util.Scanner;
public class Main{
    public static int findevennum(int[] num){
        int c=0;
        for(int i=0;i<num.length;i++){
            int digit=0;
            while(num[i]!=0){
                num[i]=num[i]/10;
                digit++;
            }
            c=digit%2==0?c+1:c;
        }
        return c;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=in.nextInt();
        }
        System.out.println(findevennum(a));
    }
}
```

## Submission at 2024-08-23 13:46:38


```
import java.util.Scanner;
public class Main{
    public static int findevennum(int[] num){
        int c=0;
        for(int i=0;i<num.length;i++){
            int digit=0;
            while(num[i]!=0){
                num[i]=num[i]/10;
                digit++;
            }
            c=digit%2==0?c+1:c;
        }
        return c;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=in.nextInt();
        }
        System.out.println(findevennum(a));
    }
}
```

## Submission at 2024-08-23 13:52:20


```
import java.util.Scanner;
public class Main{
    public static int findevennum(int[] num){
        int c=0;
        for(int i=0;i<num.length;i++){
            c=(Integer.toString(Math.abs(num[i])).length())%2==0?c+1:c;
        }
        return c;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=in.nextInt();
        }
        System.out.println(findevennum(a));
    }
}
```

## Submission at 2024-08-23 13:53:42


```
import java.util.Scanner;
public class Main{
    public static int findevennum(int[] num){
        int c=0;
        for(int i=0;i<num.length;i++){
            c=(Integer.toString(Math.abs(num[i])).length())%2==0?c+1:c;
        }
        return c;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=in.nextInt();
        }
        System.out.println(findevennum(a));
    }
}
```

## Submission at 2024-08-23 14:01:44


```
import java.util.Scanner;
public class Main{
    public static int sumofmultiples(int[] n){
        int sum=0;
        for(int i=0;i<n.length;i++){
            sum=(n[i]%3==0)||(n[i]%5==0)||(n[i]%7==0)?sum+n[i]:sum;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        System.out.println(sumofmultiples(a));
    }
}
```

## Submission at 2024-08-24 05:09:14


```
import java.util.Scanner;
public class Main{
    public static void triangularSumofArray(int[] a){
        if(a.length==1){
            System.out.println(a[0]); 
            return;
        }
        int[] temp=new int[a.length-1];
        for(int i=0;i<a.length-1;i++){
            temp[i]=a[i+1]+a[i];
        }
        triangularSumofArray(temp);
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len=in.nextInt();
        int[] a=new int[len];
        for(int i=0;i<len;i++){
            a[i]=in.nextInt();
        } 
        triangularSumofArray(a);
    }
}
```

## Submission at 2024-08-24 05:17:27


```
import java.util.Scanner;
public class Main{
    public static void triangularSumofArray(int[] a){
        if(a.length==1){
            System.out.println(a[0]); 
            return;
        }
        int[] temp=new int[a.length-1];
        for(int i=0;i<a.length-1;i++){
            temp[i]=(a[i+1]+a[i])%10;
        }
        triangularSumofArray(temp);
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len=in.nextInt();
        int[] a=new int[len];
        for(int i=0;i<len;i++){
            a[i]=in.nextInt();
        } 
        triangularSumofArray(a);
    }
}
```

## Submission at 2024-08-24 05:34:45


```
import java.util.Arrays;
import java.util.Scanner;
public class Main{
    public static boolean equal_array(int[] n1,int[] n2){
        if(n1.length!=n2.length) return false;
        else{
            Arrays.sort(n1);
            Arrays.sort(n2);
            for(int i=0;i<n1.length;i++){
                if(n1[i]!=n2[i]) return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len_1=in.nextInt();
        int len_2=in.nextInt();
        int[] a=new int[len_1];
        int[] b=new int[len_2];
        for(int i=0;i<len_1;i++){
            a[i]=in.nextInt();
        }
        for(int i=0;i<len_2;i++){
            b[i]=in.nextInt();
        }
        System.out.println(equal_array(a, b));
    }
}
```

## Submission at 2024-08-24 06:33:39


```
import java.util.Scanner;
public class Main{
    public static String spiralTransversal(int[][] n){
        int left=0,right=n[0].length-1;
        int top=0,bottom=n.length-1;
        String ans="";
        while(top<=bottom && left<=right){
            //top->right
            for(int i=left;i<=right;i++){
                ans+=n[top][i]+" ";
            }
            top++;
            //right->bottom
            for(int i=top;i<=bottom;i++){
                ans+=n[i][right]+" ";
            }
            right--;
            //bottom->left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans+=n[bottom][i]+" ";
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans+=n[i][left]+" ";
                }
                left++;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int row=in.nextInt();
        int col=in.nextInt();
        int[][] a=new int[row][col];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                a[i][j]=in.nextInt();
            }
        }
        System.out.println(spiralTransversal(a));
    }
}
```

## Submission at 2024-08-24 07:13:34


```
import java.util.Scanner;
public class Main{
    public static int kmissingnum(int[] n,int k){
        int cnt=0,num=1,i=0;
        while(cnt<k){
            if(i<n.length && n[i]==num){i++;}
            else{
                cnt++;
                if(cnt==k) return num; }
            num++;
        }
        return num;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len=in.nextInt();
        int k=in.nextInt();
        int[] a=new int[len];
        for(int i=0;i<len;i++){
            a[i]=in.nextInt();
        }
        System.out.println(kmissingnum(a, k));
    }
}
```

## Submission at 2024-08-24 07:43:34


```
import java.util.Scanner;
public class Main{
    public static void transpose(int[][] a){
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[0].length;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        transpose(a);
    }
}
```

## Submission at 2024-08-24 07:45:58


```
import java.util.Scanner;
public class Main{
    public static void transpose(int[][] a){
        for(int i=0;i<a[0].length;i++){
            for(int j=0;j<a.length;j++){
                System.out.print(a[j][i]+" ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        transpose(a);
    }
}
```

## Submission at 2024-08-29 12:05:10


```
import java.util.Scanner;
public class Main{
    public static void triangularSumofArray(int[] a){
        if(a.length==1){
            System.out.println(a[0]); 
            return;
        }
        int[] temp=new int[a.length-1];
        for(int i=0;i<a.length-1;i++){
            temp[i]=a[i+1]+a[i];
        }
        triangularSumofArray(temp);
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len=in.nextInt();
        int[] a=new int[len];
        for(int i=0;i<len;i++){
            a[i]=in.nextInt();
        } 
        triangularSumofArray(a);
    }
}
```

## Submission at 2024-08-30 04:54:26


```
import java.util.Scanner;
public class Main{
    public static int power(int x, int n){
        x=Math.abs(x);
        if(n==0) return x;
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println(power(x,y));
    }
}
```

## Submission at 2024-08-30 05:04:33


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return x;
        else if(n<0) return x*(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:04:33


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return x;
        else if(n<0) return x*(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:10:34


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1/x*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:10:36


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1/x*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:11:55


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return x;
        else if(n<0) return 1/x*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:11:59


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return x;
        else if(n<0) return 1/x*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:13:56


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:14:06


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:14:09


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:16:13


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:16:14


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:16:15


```
import java.util.Scanner;
public class Main{
    public static double power(int x, int n){
        if(n==0) return 1;
        else if(n<0) return 1*1/(power(x,n+1));
        return x*(power(x,n-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int x=in.nextInt();
        int y=in.nextInt();
        System.out.println((int)power(x,y));
    }
}
```

## Submission at 2024-08-30 05:36:31


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return true;}
        return Palindrome(n.substring(1,n.length()-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 05:36:32


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return true;}
        return Palindrome(n.substring(1,n.length()-1));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 05:37:37


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return true;}
        return Palindrome(n.substring(1,n.length()-2));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 05:39:14


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return false;}
        return Palindrome(n.substring(1,n.length()-2));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 05:39:22


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return false;}
        return Palindrome(n.substring(1,n.length()-2));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 05:47:09


```
import java.util.Scanner;
public class Main{
    public static void Max(int[] a, int[] b){
        for(int i=0;i<a.length;i++){
            System.out.print((a[i]>b[i]?a[i]:b[i])+" ");
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int len=in.nextInt();
        int[] a=new int[len];
        int[] b=new int[len];
        for(int i=0;i<len;i++){
            a[i]=in.nextInt();
        }
        for(int i=0;i<len;i++){
            b[i]=in.nextInt();
        }
        Max(a,b);
    }
}
```

## Submission at 2024-08-30 06:12:44


```
import java.util.Scanner;
public class Main{
    public static void Diagonal(int[][] a){
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[0].length;j++){
                if(i+j==0){System.out.print(a[0][0]+" ");}
                else if(i+j==1){
                    System.out.print(a[1][0]+" "+a[0][1]+" ");
                }
                else if(i+j==2){
                    System.out.print(a[2][0]+" "+a[1][1]+" "+a[0][2]+" ");
                }
                else if(i+j==3){
                    System.out.print(a[2][1]+" "+a[1][2]+" ");
                }
                else if(i+j==4){
                    System.out.print(a[2][2]);
                }
            }
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        Diagonal(a);
    }
}
```

## Submission at 2024-08-30 06:12:46


```
import java.util.Scanner;
public class Main{
    public static void Diagonal(int[][] a){
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[0].length;j++){
                if(i+j==0){System.out.print(a[0][0]+" ");}
                else if(i+j==1){
                    System.out.print(a[1][0]+" "+a[0][1]+" ");
                }
                else if(i+j==2){
                    System.out.print(a[2][0]+" "+a[1][1]+" "+a[0][2]+" ");
                }
                else if(i+j==3){
                    System.out.print(a[2][1]+" "+a[1][2]+" ");
                }
                else if(i+j==4){
                    System.out.print(a[2][2]);
                }
            }
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int[][] a=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
            }
        }
        Diagonal(a);
    }
}
```

## Submission at 2024-08-30 06:26:19


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return false;}
        return Palindrome(n.substring(1,n.length()-2));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 06:26:19


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return false;}
        return Palindrome(n.substring(1,n.length()-2));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-08-30 06:26:22


```
import java.util.Scanner;
public class Main{
    public static boolean Palindrome(String n){
        if(n.length()==1){return true;}
        else if(n.charAt(0)!=n.charAt(n.length()-1)){return false;}
        return Palindrome(n.substring(1,n.length()-2));
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        String n=in.next();
        if(Palindrome(n)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-10-04 05:55:52


```
public class Main{
    public static void main(String[] args){
        int[] a={73,74,71,75};
        for(int i=0;i<a.length;i++){
            int diff=0;
            int b=a[i];int j=i+1;
            while(a[i]>=a[j]){
                diff++;
                j=j==a.length-1?0:j++;}
            System.out.print(diff+" ");diff=0;
            
        }
    }
}
```

## Submission at 2024-10-04 06:13:28


```
import java.util.*;
public class Main{
    public static boolean isValid(String s,String t){
        if(s.length()!=t.length()) return false;
        else{
        char[] as=new char[s.length()];
        char[] at=new char[t.length()];
        for(int i=0;i<as.length;i++){
            as[i]=s.charAt(i);
            at[i]=t.charAt(i);
        }
        Arrays.sort(as);
        Arrays.sort(at);
        for(int i=0;i<as.length;i++){
            if(as[i]!=at[i]) return false;
        }
        }
        return true;
    }
    public static void main(String[] args){
        String s="anagram";
        String t="nagaram";
        System.out.println(isValid(s,t));
    }
}
```

## Submission at 2024-10-25 05:41:20


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
        if(root==null){return true;}
        Node leftr=isSymmetric(root.left);
        Node rightr=isSymmetric(root.right);
        if(leftr.data==rightr.data){return true;}
        return false;
    }
}
```

## Submission at 2024-10-25 05:54:45


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
        if(root==null){return true;}
        Node leftr=root.left;
        Node rightr=root.right;
        if(leftr.data==rightr.data){return true;}
        isSymmetric(leftr);
        isSymmetric(rightr);
        
        return false;
    }
}
```

## Submission at 2024-10-25 06:35:15


```
import java.util.*;
public class Main{
    public static boolean isRansomNote(String mag,String ran){
        char[] a=new char[mag.length()];
        char[] b=new char[ran.length()];
        for(int i=0;i<mag.length();i++){
            a[i]=mag.charAt(i);
        }
        for(int i=0;i<ran.length();i++){
            b[i]=ran.charAt(i);
        }
        for(int i=0;i<mag.length();i++){
            for(int j=0;j<ran.length();j++){
                if(b[j]!=a[i]){
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args){
    Scanner in=new Scanner(System.in);
    String mag=in.next();
    String ran=in.next();
    System.out.println(isRansomNote(mag,ran));
}
}
```

## Submission at 2024-10-25 06:56:07


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
      if(root==null){return -1;}
       Node left=root.left;
       Node right=root.right;
       postOrder(left);
       postOrder(right);
       return root.data;
    }
}
```

## Submission at 2024-11-15 04:05:25


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
        if (root == null) {
            return Integer.MAX_VALUE; 
        }
        int leftMin = findMin(root.left);
        int rightMin = findMin(root.right);

        return Math.min(root.data, Math.min(leftMin, rightMin));

    }
}
```

## Submission at 2024-11-15 04:07:45


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
        if(root==null) return Integer.MIN_VALUE;
        int left=findMax(root.left);
        int right=findMax(root.right);
        return Math.max(root.data,Math.max(left,right));
    }
}
```

## Submission at 2024-11-15 04:10:14


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
    
    Integer maxDepth(Node root)
    {
      if(root==null){return 0;}
      int hl=maxDepth(root.left);
      int hr=maxDepth(root.right);
      return Math.max(hl,hr)+1;
    }
}
```

## Submission at 2024-11-15 04:59:47


```
import java.util.*;
public class Main {
    public static int kocc(int n, int k, int[] a) {
        HashMap<Integer, Integer> m= new HashMap<>();
        for (int num : a) {
            m.put(num, m.getOrDefault(num, 0) + 1);
        }
        for (int num : a) {
            if (m.get(num) >= k) {
                return num;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int result = kocc(n, k, a);
        System.out.println(result);
    }
}

```

## Submission at 2024-11-15 05:29:58


```
import java.util.*;
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

## Submission at 2024-11-15 05:38:34


```
import java.util.*;
public class Main{
    public static int distinctcandies(int[] a){
        int allowed=a.length/2;
        HashSet<Integer> candies= new HashSet<>();
        for(int candy:a){
            candies.add(candy);
        }
        return Math.min(candies.size(),allowed);
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=in.nextInt();
        }
        System.out.println(distinctcandies(a));
    }
}
```

## Submission at 2024-11-22 04:00:40


```
import java.util.*;
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
}

```

## Submission at 2024-11-22 04:59:27


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        int sum=0;
        for(int val:arr){
            sum+=val;
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:07:42


```
import java.util.*;
public class Main{
    public static int minimize(int a,int b){
        int c=b;
        for(int i=a;i<=b;i++){
            int ans=(i-a)+(b-i);
            if(ans<c){c=ans;}
        }
        return c;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int a=in.nextInt();
        int b=in.nextInt();
        System.out.println(minimize(a,b));
    }
}

```

## Submission at 2024-11-22 05:18:40


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i<0;i--){
            for(int j=n-1;j<0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:23:24


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        //for(int i=0;i<n;i++){
          //  for(int j=1;j<=i+1;j++){
            //    System.out.print("* ");
            //}
           // System.out.println();
        //}
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:24:10


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:24:18


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:24:18


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:24:21


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:25:08


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:26:13


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:31:05


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:37:25


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            System.out.print("*");
            for(int j=1;j<=i;j++){
                System.out.print(" *");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            System.out.print("*");
            for(int j=i-1;j>0;j--){
                System.out.print(" *");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:37:25


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            System.out.print("*");
            for(int j=1;j<=i;j++){
                System.out.print(" *");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            System.out.print("*");
            for(int j=i-1;j>0;j--){
                System.out.print(" *");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:47:32


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<i+1;j++){
                System.out.print("*")
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:50:29


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("*")
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:51:14


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("*")
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:51:36


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:51:42


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:52:02


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 05:52:33


```
import java.util.*;
public class Main{
    public static void pattern(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=i+1;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=n-1;i>0;i--){
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        pattern(n);
    }
}
```

## Submission at 2024-11-22 06:00:02


```
import java.util.*;
public class Main{
    public static int occuringtwice(int[] arr){
        Arrays.sort(arr);
        int twice=-1;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]==arr[i]){twice=arr[i];}
        }
        return twice;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(occuringtwice(arr));
    }
}
```

## Submission at 2024-11-22 06:01:02


```
import java.util.*;
public class Main{
    public static int occuringtwice(int[] arr){
        Arrays.sort(arr);
        int twice=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]==arr[i]){twice++;}
        }
        return twice;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(occuringtwice(arr));
    }
}
```

## Submission at 2024-11-22 06:01:04


```
import java.util.*;
public class Main{
    public static int occuringtwice(int[] arr){
        Arrays.sort(arr);
        int twice=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]==arr[i]){twice++;}
        }
        return twice;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(occuringtwice(arr));
    }
}
```

## Submission at 2024-11-22 06:01:11


```
import java.util.*;
public class Main{
    public static int occuringtwice(int[] arr){
        Arrays.sort(arr);
        int twice=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]==arr[i]){twice++;}
        }
        return twice;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(occuringtwice(arr));
    }
}
```

## Submission at 2024-11-22 06:01:20


```
import java.util.*;
public class Main{
    public static int occuringtwice(int[] arr){
        Arrays.sort(arr);
        int twice=0;
        for(int i=1;i<arr.length;i++){
            if(arr[i-1]==arr[i]){twice++;}
        }
        return twice;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(occuringtwice(arr));
    }
}
```

## Submission at 2024-11-22 06:10:44


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
    public boolean isBST(Node root)
    {
        if(root==null){return false;}
        Node left=root.left;
        Node right=root.right;
        if(root.data>left.data && root.data<right.data){return true;}
        isBST(left);
        isBST(right);
        return false;
    }
}

```

## Submission at 2024-11-22 06:34:41


```
import java.util.*;
public class Main{
    public static int frequencygame(int[] a){
        int len=a.length;
        Arrays.sort(a);
        int number=a[0],fre=0;
        int idx=0;
        int[] freq=new int[len];
        for(int i=0;i<len;i++){
            int j=0;
            while(a[i]==a[j]){
                fre++;
                j++;
            }
            freq[idx++]=fre;
            Arrays.sort(freq);
            if(fre>freq[idx]){number=a[i];}
            fre=0;
        }
        return number;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(frequencygame(arr));
    }
}
```

## Submission at 2024-11-22 06:42:28


```
import java.util.*;
public class Main{
    public static int distance(int[] a1,int[] a2,int d){
        int count=0;
        for(int i=0;i<a1.length;i++){
            
            boolean ba=true;
            for(int j=0;j<a2.length;j++){
                if(Math.abs(a1[i]-a2[j])<=d){ba=false;}
            }
            if(ba==true){count++;}
        }
        return count;
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int m=in.nextInt();
        int n=in.nextInt();
        int d=in.nextInt();
        int[] a1=new int[m];
        for(int i=0;i<m;i++){
            a1[i]=in.nextInt();
        }
        int[] a2=new int[n];
        for(int i=0;i<n;i++){
            a2[i]=in.nextInt();
        }
        System.out.println(distance(a1,a2,d));
    }
}
```

## Submission at 2024-11-22 06:57:30


```
import java.util.*;
public class Main{
    public static int freqgame(int[] arr){
        Arrays.sort(arr);
        int[] a=new int[arr.length];
        int idx=0,index=0;
        int countn=0;
        int[] count=new int[arr.length];
        for(int i=1;i<arr.length;i++){
            if(arr[i]!=arr[i-1]){
                a[idx++]=arr[i];
            }
        }
        for(int i=0;i<a.length;i++){
            int j=0;
            while(a[i]==arr[j]){
                countn++;
                j++;
            }
            count[index++]=count;
            countn=0;
        }
        int max=0;
        for(int i=0;i<count.length;i++){
            if(count[i]>max){max=i;}
        }
        return a[max];
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(freqgame(arr));
    }
} 
```

## Submission at 2024-11-22 07:02:02


```
import java.util.*;
public class Main{
    public static int freqgame(int[] arr){
        Arrays.sort(arr);
        int[] a=new int[arr.length];
        int idx=0,index=0;
        int countn=0;
        int[] count=new int[arr.length];
        if(arr[0]!=arr[1]){a[idx++]=arr[0];}
        for(int i=1;i<arr.length-1;i++){
            if(arr[i]!=arr[i+1]){
                a[idx++]=arr[i];
            }
        }
        if(arr[arr.length-2]!=arr[arr.length-1]){a[idx++]=arr[arr.length-1];}
        for(int i=0;i<a.length;i++){
            int j=0;
            while(a[i]==arr[j]){
                countn++;
                j++;
            }
            count[index++]=countn;
            countn=0;
        }
        int max=0;
        for(int i=0;i<count.length;i++){
            if(count[i]>max){max=i;}
        }
        return a[max];
    }
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=in.nextInt();
        }
        System.out.println(freqgame(arr));
    }
} 
```

