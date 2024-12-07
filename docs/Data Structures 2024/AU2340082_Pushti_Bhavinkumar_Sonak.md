## Submission at 2024-08-09 05:17:08


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main
{
    public static void main (String[] args)
    {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        int l = name.length();
        if (l<1 || l> 100)
            System.out.println("Enter a valid name: ");
        else
            System.out.println("Hello "+ name + " !");
    }
}
```

## Submission at 2024-08-09 05:18:25


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main
{
    public static void main (String[] args)
    {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        int l = name.length();
        if (l<1 || l> 100)
            System.out.println("Enter a valid name: ");
        else
            System.out.println("Hello "+ name + "!");
    }
}
```

## Submission at 2024-08-22 06:21:44


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
        // write logic here
        List<List<Integer>> result = new ArrayList<>();
        if (k>n || k<=0){
            return result;
        }
         backtrack(1, new ArrayList<>(), result, n, k);
            return result;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> result, int n, int k)  {
        if (comb.size() == k) {
            result.add(new ArrayList<>(comb));
            return;
        }

        for(int i = start; i<=n; i++){
            comb.add(i);
            backtrack(i+1, comb, result, n, k);
            comb.remove(comb.size()-1);
        }
        // use it if you want
    }
}

```

## Submission at 2024-08-22 06:23:48


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
        // write logic here
        List<List<Integer>> result = new ArrayList<>();
        if (k>n || k<=0){
            return result;
        }
         backtrack(1, new ArrayList<>(), result, n, k);
            return result;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> result, int n, int k)  {
        if (comb.size() == k) {
            result.add(new ArrayList<>(comb));
            return;
        }

        for(int i = start; i<=n; i++){
            comb.add(i);
            backtrack(i+1, comb, result, n, k);
            comb.remove(comb.size()-1);
        }
        // use it if you want
    }
}

```

## Submission at 2024-08-22 11:40:09


```
import java.util.*;
public class Main() 
{
    private static void Permutations(int[] nums, List<List<Integer>>, List<Integer> existing, boolean[] done)
    {
        if(existing.size== nums.length)
        {
            result.add(new ArrayList<>(current));
            return;
        }
        for (int i=0; i<nums.length;i++)
        {
            if (done[i]) {
                continue;
            }
            done[i]=true;
            existing.add(nums[i]);
            Permutations(nums, result, existing, done);
            existing.remove(existing.size()-1);
            done[i]=false;
        }
        public static <List<Integer>> permute(int[] nums)
        {
            List<List<Integers>> = new ArrayList<>();
            Arrays.sort(nums);
            Permutations(nums, result, new ArrayList<>(), new boolean[nums.length]);
            return result;
        }
        public static void main(String[] args)
        {
            Scanner input = new Scanner(System.in);
            String[] numbers = input.nextLine().split(" ");
            int[] nums= new int[numbers.length];
            for(int i =0; i<input.length;i++){
                nums[i] = Integer.parseInt(numbers[i]);
            }
            List<List<Integer>> Permutations = permute(nums);
            System.out.println(Permutations);
        }
    }
}

```

## Submission at 2024-08-22 13:36:54


```
import java.util.*;
public class Main
{
    private static void Permutations(int[] nums, List<List<Integer>> result, List<Integer> existing, boolean[] done)
    {
        if(existing.size()== nums.length)
        {
            result.add(new ArrayList<>(existing));
            return;
        }
        for (int i=0; i<nums.length;i++)
        {
            if (done[i]) {
                continue;
            }
            done[i]=true;
            existing.add(nums[i]);
            Permutations(nums, result, existing, done);
            existing.remove(existing.size()-1);
            done[i]=false;
        }
    }
    public static List<List<Integer>> permute(int[] nums)
    {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        Permutations(nums, result, new ArrayList<>(), new boolean[nums.length]);
        return result;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String[] numbers = input.nextLine().split(" ");
        int[] nums= new int[numbers.length];
        for(int i =0; i<numbers.length;i++){
            nums[i] = Integer.parseInt(numbers[i]);
        }
        List<List<Integer>> Permutations = permute(nums);
        System.out.println(Permutations);
    }
}


```

## Submission at 2024-08-22 14:26:56


```
import java.util.*;
public class Main{
    private static void Parentheses(int n, int o, int c, String existing, List<String> result){
        if (existing.length() == 2 * n){
            result.add(existing);
            return;
        }
        if (o<n) {
            Parentheses(n,o+1,c,existing + "(", result);
        }
        if (c<o){
            Parentheses(n,o,c+1,existing+")",result);
        }
    }
    public static List<String> generate(int n)
    {
        List<String> result = new ArrayList<>();
        Parentheses(n,0,0,"", result);
        return result;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        List<String> PCombinations = generate(n);
        System.out.print("[");
        for(int i=0; i<PCombinations.size(); i++)
        {
            System.out.print("\""+PCombinations.get(i)+"\"");
            if (i<PCombinations.size()-1){
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}


```

## Submission at 2024-08-22 14:27:54


```
import java.util.*;
public class Main{
    private static void Parentheses(int n, int o, int c, String existing, List<String> result){
        if (existing.length() == 2 * n){
            result.add(existing);
            return;
        }
        if (o<n) {
            Parentheses(n,o+1,c,existing + "(", result);
        }
        if (c<o){
            Parentheses(n,o,c+1,existing+")",result);
        }
    }
    public static List<String> generate(int n)
    {
        List<String> result = new ArrayList<>();
        Parentheses(n,0,0,"", result);
        return result;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        List<String> PCombinations = generate(n);
        System.out.print("[");
        for(int i=0; i<PCombinations.size(); i++)
        {
            System.out.print("\""+PCombinations.get(i)+"\"");
            if (i<PCombinations.size()-1){
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}


```

## Submission at 2024-08-22 15:03:28


```
import java.util.*;
public class Main
{
    private static void Permutations(int[] nums, List<List<Integer>> result, List<Integer> existing, boolean[] done)
    {
        if(existing.size() == nums.length){
            result.add(new ArrayList<>(existing));
            return;
        }
        for(int i =0;i<nums.length; i++){
            if(done[i]){
                continue;
            }
            done[i]=true;
            existing.add(nums[i]);
            Permutations(nums,result,existing,done);
            existing.remove(existing.size()-1);
            done[i]=false;
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        Permutations(nums, result, new ArrayList<>(), new boolean[nums.length]);
        return result;

    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String[] numbers = input.nextLine().split(" ");
        int[] nums = new int[numbers.length];
        for(int i =0; i<numbers.length;i++){
            nums[i]=Integer.parseInt(numbers[i]);
        }
        List<List<Integer>> PermutationsFinal = permute(nums);
        System.out.println(PermutationsFinal);
    }   
}
```

## Submission at 2024-08-22 15:09:27


```
import java.util.*;
public class Main
{
    private static void Permutations(int[] nums, List<List<Integer>> result, List<Integer> existing, boolean[] done)
    {
        if(existing.size() == nums.length){
            result.add(new ArrayList<>(existing));
            return;
        }
        for(int i =0;i<nums.length; i++){
            if(done[i]){
                continue;
            }
            done[i]=true;
            existing.add(nums[i]);
            Permutations(nums,result,existing,done);
            existing.remove(existing.size()-1);
            done[i]=false;
        }
    }
    public static List<List<Integer>> permute(int[] nums){
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        Permutations(nums, result, new ArrayList<>(), new boolean[nums.length]);
        return result;

    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String[] numbers = input.nextLine().split(" ");
        int[] nums = new int[numbers.length];
        for(int i =0; i<numbers.length;i++){
            nums[i]=Integer.parseInt(numbers[i]);
        }
        List<List<Integer>> PermutationsFinal = permute(nums);
        System.out.println(PermutationsFinal);
    }   
}
```

## Submission at 2024-08-27 12:00:09


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt(), n = input.nextInt();
        int matrix1[][] = new int[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
               matrix1[i][j] = input.nextInt();
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
               System.out.print(matrix1[j][i]+" ");
            }
            System.out.println();
        }
        
    }
}
```

## Submission at 2024-08-27 12:03:09


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt(), n = input.nextInt();
        int matrix1[][] = new int[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
               matrix1[i][j] = input.nextInt();
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
               System.out.print(matrix1[j][i]+" ");
            }
            System.out.println();
        }
        
    }
}
```

## Submission at 2024-08-27 12:07:21


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt(), n = input.nextInt();
        int matrix1[][] = new int[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
               matrix1[i][j] = input.nextInt();
            }
        }
        for(int j=0; j<n; j++)
        {
            for(int i=0; i<n; i++)
            {
               System.out.print(matrix1[i][j]+" ");
            }
            System.out.println();
        }
        
    }
}
```

## Submission at 2024-08-27 12:09:34


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt(), n = input.nextInt();
        int matrix1[][] = new int[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
               matrix1[i][j] = input.nextInt();
            }
        }
        for(int j=0; j<n; j++)
        {
            for(int i=0; i<n; i++)
            {
               System.out.print(matrix1[i][j]+" ");
            }
            System.out.println();
        }
        input.close();
        
    }
}
```

## Submission at 2024-08-27 12:12:43


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] divisibleInts = new int[1000];
        int index = 0;
        for(int i=1; i<=n;i++)
        {
            if((i%3==0) || (i%5==0) || (i%7==0))
            {
                divisibleInts[index] = i;
                //assigns the value of i to the current position (index) in the divisibleInts array.
                index++;
            }
        }
        int sum = 0;
        for(int i=0; i<index;i++)
        {
            sum += divisibleInts[i];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-08-27 13:05:06


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
       Scanner input = new Scanner(System.in);
       int n = input.nextInt();
       int[] arr = new int[n];
       int cnt=0;
       for(int i=0; i<arr.length;i++)
       {
           arr[i] = input.nextInt();
               if(String.valueOf(arr[i]).length() % 2 == 0)
               {
                   cnt++;
               }
       }
       System.out.println(cnt);
    }
}
```

## Submission at 2024-08-28 02:47:24


```
import java.util.Scanner;
import java.util.Arrays;
public class Main
{
    public static void main(String[] args)
    {
       Scanner input = new Scanner(System.in);
       int n1 = input.nextInt();
       int n2 = input.nextInt();
       
       if(n1!=n2)
       {
           System.out.println(false);
           return;
       }
       
       int[] arr1 = new int[n1];
       int[] arr2 = new int[n2];
       for(int i=0;i<n1;i++){
           arr1[i]=input.nextInt();
       }
       for(int i=0;i<n2;i++){
           arr2[i]=input.nextInt();
       }
       
       Arrays.sort(arr1);
       Arrays.sort(arr2);
       boolean check = Arrays.equals(arr1,arr2);
       System.out.println(check);
    }
}

```

## Submission at 2024-08-28 02:51:51


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i =0; i<n; i++){
            arr[i]= input.nextInt();
        }
        int cnt=0;
        int num=1;
        while(true)
        {
            boolean exist = false;
            for(int j=0; j<n; j++){
                if(arr[j]==num){
                    exist=true;
                    break;
                }
            }
            if(!exist){
                cnt++;
                if(cnt==k){
                    System.out.println(num);
                    break;
                }
            }
            num++;
        }
    }
}
```

## Submission at 2024-08-28 11:24:09


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i =0; i<n; i++){
            arr[i]= input.nextInt();
        }
        
        int num=1, i=0;
        while(k>0)
        {
            if(i<n && arr[i]==num)
            {
                i++;
            }
            else{
                k--;
            }
            num++;
        }
        System.out.println(num-1);
    }
}
```

## Submission at 2024-08-28 11:47:27


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        
        int[][] matrix = new int[m][n];
        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = input.nextInt();
            }
        }
        
        for(int j=0; j<n; j++){
            for(int i=0; i<m;i++){
                System.out.print(matrix[i][j]+ " ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-08-29 04:21:26


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int s1 = input.nextInt();
        int s2 = input.nextInt();
        
        int[][] matrix = new int[s1][s2];
        for(int i=0; i<s1; i++)
        {
            for(int j=0; j<s2; j++){
                matrix[i][j]= input.nextInt();
            }
        }
        
        int minRow=0; 
        int maxRow=s1-1; 
        int minCol=0; 
        int maxCol=s2-1;
        
        while(minRow<=maxRow && minCol<=maxCol)
        {
            for(int i = minCol; i <= maxCol; i++) {
                System.out.print(matrix[minRow][i] +" ");
            }
            minRow++;
            for(int i = minRow; i <= maxRow; i++){
                System.out.print(matrix[i][maxCol]+ " ");
            }
            maxCol--;
            
            if(minRow<=maxRow){
                for(int i=maxCol; i>=minCol;i--)
                    System.out.print(matrix[maxRow][i]+ " ");
            }
            maxRow--;
            if(minCol<=maxCol){
                for(int i=maxRow; i>=minRow; i--){
                    System.out.print(matrix[i][minCol]+ " ");
                }
            }
            minCol++;
            
        }
    }
}
```

## Submission at 2024-08-29 05:23:54


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        
        for(int i=0; i<n; i++)
        {
            arr[i]= input.nextInt();
        }
        while(n>1)
        {
            for(int i=0; i<(n-1); i++){
                arr[i] = arr[i]+arr[i+1];
            }
            n--;
        }
        System.out.println(arr[0]);      
    }
}
```

## Submission at 2024-08-30 04:53:49


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { 
    public static void raisedTo(int n){
        if(n==0){
            return 1;}
            
        //Remember the class name has to be Main!!
        
public static void main(String[] args){}
```

## Submission at 2024-08-30 05:16:05


```
import java.util.Scanner;
public class Main
{
    public static void Max(int n1, int n2)
    {
        int max;
        if(a[i]>b[i]){
            return a[i];
            }
        else{
            return b[i];
        }
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        for(int i=0; i<n; i++)
        {
            max(a[i],b[i]);
            
        }
    }
}
```

## Submission at 2024-08-30 05:21:17


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
       Node current = head; 
       Node prev = null;
       Node temp;

       while(current!=null)
       {
        temp=current.next;
        current.next=prev;
        prev=current;
        current=temp;
       }
       return prev;
    }
}
```

## Submission at 2024-08-30 05:42:31


```
import java.util.Scanner;
class Main {
    public static void palindrome(String check)
    {   int i, j,n;
        n=check.length();
        if(i==j)
            return;
        for(int i=0;i<(n+1/2);i++)
        {
            for(int j=0; j>(n+1/2);j--)
            {
                char c = check.charAt();
                if(c[i]==c[j]){
                    return YES;
                }
                else{
                    return NO;
                }
            }
        }
    }
    public static void main (String args []) 
    {
        Scanner input = new Scanner(System.in);
        String p = input.nextLine();
        palindrome pal = new palindrome();
        int ans = p.pal();
        System.out.println(ans);
    }
}
```

## Submission at 2024-08-30 05:52:57


```
import java.util.Scanner;
import java.Math;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        for(int i=0; i<n; i++)
        {
            c[i]= Math.(max(a[i],b[i]));
        }
        System.out.print(c[i]);
    }
}
```

## Submission at 2024-08-30 06:15:19


```
import java.util.Scanner;
class Main { 
    public static void Pow(int x, int n)
    {
        for(int i=n; i>=0; i--)
        
            if(i==0){
                return;
                }
            if (n>0)
            {
                    x *= x;
                    return System.out.println(x);
            }
            if(n<0)
            {
                x *= 1/x;
                return System.out.println(x);
            }
        return;
    }
        //Remember the class name has to be Main!!
        
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        Pow(x, n);
    
    }
}
```

## Submission at 2024-08-30 06:24:28


```
import java.util.Scanner;
class Main {
    public static void palindrome(String check)
    {   int i, j,n;
        n=check.length();
        if(i==j)
            return;
        for(i=0;i<(n+1/2);i++)
        {
            for(j=n-1; j>(n+1/2);j--)
            {
                char c = check.charAt();
                if(c[i]==c[j]){
                    return YES;
                }
                else{
                    return NO;
                }
            }
        }
    }
    public static void main (String args []) 
    {
        Scanner input = new Scanner(System.in);
        String p = input.nextLine();
        palindrome pal = new palindrome();
        int ans = p.pal();
        System.out.println(ans);
    }
}
```

## Submission at 2024-09-03 12:29:32


```
import java.io.*;
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int x = input.nextInt();
        int xn = Pow(x, n);
        System.out.println(xn);

    }

    public static int Pow(int x, int n)
    {
        if(n==0)
            return 1;
        
        int xnm1 = Pow(x, n-1);
        int xn = x * xnm1;
        return xn;
    }
}
```

## Submission at 2024-09-04 09:48:01


```
import java.io.*;
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        int result = Pow(x,n);
        System.out.println(result);

    }

    public static int Pow(int x, int n)
    {
        if(n==0)
            return 1;
        if (n<0)
        {
            if(x==0){
                throw new ArithmeticException("Division by zero");
            }
            return 1/Pow(x, -n);
        }
        int hPow = Pow(x, n/2);
        int result = hPow*hPow;
        if(n%2!=0){
            result *= x;
        }
        return result;
    }
}
```

## Submission at 2024-09-04 09:56:42


```
import java.io.*;
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        int result = Pow(x,n);
        System.out.println(result);

    }

    public static int Pow(int x, int n)
    {
        if(n==0)
            return 1;
        if (n<0)
        {
            if(x==0){
                throw new ArithmeticException("Division by zero");
            }
            int positiveP = Pow(x, -n);
            if(positiveP==0 | x==1){
                return 0;
            }
            return 1/positiveP;
        }
        int hPow = Pow(x, n/2);
        int result = hPow*hPow;
        if(n%2!=0){
            result *= x;
        }
        return result;
    }
}
```

## Submission at 2024-09-04 10:25:41


```
import java.util.Scanner;
public class Main {
    public static String isPalindrome(int i, int j, String word)
    {
        if(i==j)
            return "YES";
        if(word.charAt(i)!=word.charAt(j))
            return "NO";
        i += 1;
        j -= 1;

        return isPalindrome(i,j,word);
    }
    public static void main (String args []) 
    {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        String check = isPalindrome(0, (word.length()-1), word);
        System.out.println(check);
    }
}
```

## Submission at 2024-09-04 10:33:51


```
import java.util.Scanner;
public class Main {
    public static String isPalindrome(int i, int j, String word)
    {
        if(i>=j)
            return "YES";
        if(word.charAt(i)!=word.charAt(j))
            return "NO";
        i += 1;
        j -= 1;

        return isPalindrome(i+1,j-1,word);
    }
    public static void main (String args []) 
    {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        if(word.isEmpty()){
            System.out.println("give a non-empty string.");
        }
        else{
            String check = isPalindrome(0, (word.length()-1), word);
            System.out.println(check);
        }
    }
}
```

## Submission at 2024-09-04 10:34:34


```
import java.util.Scanner;
public class Main {
    public static String isPalindrome(int i, int j, String word)
    {
        if(i>=j)
            return "YES";
        if(word.charAt(i)!=word.charAt(j))
            return "NO";

        return isPalindrome(i+1,j-1,word);
    }
    public static void main (String args []) 
    {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        if(word.isEmpty()){
            System.out.println("give a non-empty string.");
        }
        else{
            String check = isPalindrome(0, (word.length()-1), word);
            System.out.println(check);
        }
    }
}
```

## Submission at 2024-09-04 11:46:20


```
import java.util.Scanner;
public class Main
{
    public static int[] Max(int[] arr1, int[] arr2, int i)
    {
        while(i<arr1.length)
        {
            if(arr1[i]>arr2[i])
                System.out.println(arr1[i]+" ");
            else
                System.out.println(arr2[i]+" ");
        }
        return Max(arr1, arr2, i+1);
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        for(int i=0; i<n; i++){
            arr1[i]=input.nextInt();
            arr2[i]=input.nextInt();
        }
        Max(arr1, arr2, 0);
    }
}
```

## Submission at 2024-09-04 13:58:16


```
import java.util.Scanner;
public class Main
{
    public static int[] Max(int[] arr1, int[] arr2, int i)
    {
        while(i<arr1.length)
        {
            if(arr1[i]>arr2[i])
                System.out.println(arr1[i]+" ");
            else
                System.out.println(arr2[i]+" ");
        }
        return Max(arr1, arr2, i+1);
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        for(int i=0; i<n; i++){
            arr1[i]=input.nextInt();
            arr2[i]=input.nextInt();
        }
        Max(arr1, arr2, 0);
    }
}
```

## Submission at 2024-09-04 14:02:33


```
import java.util.Scanner;
public class Main
{
    public static int[] Max(int[] arr1, int[] arr2, int i)
    {
        if(i<arr1.length)
        {
            if(arr1[i]>arr2[i])
                System.out.println(arr1[i]+" ");
            else
                System.out.println(arr2[i]+" ");
        }
        return Max(arr1, arr2, i+1);
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        for(int i=0; i<n; i++){
            arr1[i]=input.nextInt();
            arr2[i]=input.nextInt();
        }
        Max(arr1, arr2, 0);
    }
}
```

## Submission at 2024-09-04 14:13:34


```
import java.util.Scanner;
public class Main
{
    public static void Max(int[] arr1, int[] arr2, int i)
    {
        if(i<arr1.length)
        {
            if(arr1[i]>arr2[i])
                System.out.println(arr1[i]+" ");
            else
                System.out.println(arr2[i]+" ");
        }
        Max(arr1, arr2, i+1);
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        for(int i=0; i<n; i++){
            arr1[i]=input.nextInt();
            arr1[i]=input.nextInt();
        }
        Max(arr1, arr2, 0);
    }
}
```

## Submission at 2024-09-04 14:25:07


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        int[] arr3 = new int[n];
        

        for(int i=0; i<n; i++){
            arr1[i]=input.nextInt();
        }
        for(int i=0; i<n; i++){
            arr2[i]=input.nextInt();
        }
        for(int i=0; i<n; i++){
            arr3[i]=Math.max(arr1[i],arr2[i]);
        }
        for(int i=0; i<n; i++){
            System.out.print(arr3[i]+" ");
        }
    }
}
```

## Submission at 2024-09-04 14:32:45


```
import java.io.*;
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        int result = Pow(x,n);
        System.out.println(result);

    }

    public static int Pow(int x, int n)
    {
        if(n==0)
            return 1;
        if (n<0)
        {
            if(x==0){
                throw new ArithmeticException("Division by zero");
            }
            int positiveP = Pow(x, -n);
            if(positiveP==0 || x==1){
                return 0;
            }
            return 1/positiveP;
        }
        int hPow = Pow(x, n/2);
        int result = hPow*hPow;
        if(n%2!=0){
            result *= x;
        }
        return result;
    }
}
```

## Submission at 2024-09-04 14:36:49


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        int result = Pow(x,n);
        System.out.println(result);

    }

    public static int Pow(int x, int n)
    {
        if(n==0)
            return 1;
        if (n<0)
        {
            if(x==0){
                throw new ArithmeticException("Division by zero");
            }
            int positiveP = Pow(x, -n);
            if(positiveP==0 || x==1){
                return 0;
            }
            return 1/positiveP;
        }
        int hPow = Pow(x, n/2);
        int result = hPow*hPow;
        if(n%2!=0){
            result *= x;
        }
        return result;
    }
}
```

## Submission at 2024-09-04 14:41:28


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        int result = Pow(x,n);
        System.out.println(result);

    }

    public static int Pow(int x, int n)
    {
        if(n==0)
            return 1;
        if (n<0)
        {
            if(x==0){
                throw new ArithmeticException("Division by zero");
            }
            int positiveP = Pow(x, -n);
            if(positiveP==0 || x==1){
                return 1;
            }
            return 1/positiveP;
        }
        int hPow = Pow(x, n/2);
        int result = hPow*hPow;
        if(n%2!=0){
            result *= x;
        }
        return result;
    }
}
```

## Submission at 2024-09-06 05:07:36


```
import java.util.Scanner;
public class Main
{
    public static String Pal(int i, int j, String check)
    {
        if(i>=j)
            return "YES";
        if(check.charAt(i)!=check.charAt(j))
            return "NO";

        return Pal(i+1, j-1, check);
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String check = input.nextLine();
        String result = Pal(0, (check.length()-1), check);
        System.out.println(result);

    }
}
```

## Submission at 2024-09-06 05:21:38


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        for(int i=0; i<n; i++)
        {
            a[i]=input.nextInt();
        }
        for(int i=0; i<n; i++)
        {
            b[i]=input.nextInt();
        }
        for(int i=0; i<n; i++)
        {
            c[i]=Math.max(a[i],b[i]);
        }
        for(int i=0; i<n; i++)
        {
            System.out.print(c[i]+" ");
        }

    }
}
```

## Submission at 2024-09-06 05:46:09


```
import java.utilo.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        int minRow=0, minCol=0;
        int m = input.nextInt();
        int n = input.nextInt();
        int maxRow=m-1, maxCol=n-1;
        int[][] matrix = new int[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                matrix[i][j]= input.nextInt();   
            }
        }
        while (minRow<=maxRow && minCol<=maxCol)
        {
            int sum=0;
            while(sum<=6)
            {
                for(int i=minCol; i<maxCol; i++){
                    System.out.print(matrix[minRow][i]);
                }
            }
            

        }

    }
}

```

## Submission at 2024-09-12 05:51:25


```
import java.util.Scanner;
public class Main
{
    public static boolean Pow(int n)
    {
        if(n<1)
            return false;
        while (n%3==0)
        {
            n=n/3;
        }
        return n==1;
    }

    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(Pow(n));

    }
}
```

## Submission at 2024-09-12 05:58:22


```
import java.util.Scanner;
public class Main
{
    public static boolean Pow(int n)
    {
        if(n==1)
            return true;
        if(n<1)
            return false;
        if(n>=3)
        {
            if(n%3!=0) return false;
            n=n/3;
        }
        return n==1;
    }

    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(Pow(n)? "True" : "False");

    }
}
```

## Submission at 2024-09-12 06:01:14


```
import java.util.Scanner;
public class Main
{
    public static boolean Pow(int n)
    {
        if(n==1)
            return true;
        if(n<1 | n%3!=0)
            return false;
        return Pow(n/3);
    }

    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(Pow(n)? "True" : "False");

    }
}
```

## Submission at 2024-09-12 06:47:06


```
import java.util.Scanner;
public class Main
{
    public static int countC(String s, char c)
    {
        int cnt=0;
        for(int i=0; i<s.length();i++)
        {
            if(s.charAt(i)==c)
                cnt++;
        }
        return cnt;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        char c = input.nextLine().charAt(0);
        int cnt = countC(s,c);
        System.out.println(cnt);

    }
}
```

## Submission at 2024-09-12 08:54:12


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
        
        if(head==null)
            return head;
        Node prev=head;
        Node current = head.next;
        while(current!=null)
        {
            if(prev.data==current.data)
            {
                prev.next=current.next;
            }
            else
            {
                prev=current;
            }
            current=current.next;
        }
        return head;
    }
}

```

## Submission at 2024-09-12 11:06:10


```
import java.util.Scanner;
public class Main
{
    public static int countC(String s, char c)
    {
        int cnt=0;
        for(int i=0; i<s.length();i++)
        {
            if(s.charAt(i)==c)
                cnt++;
        }
        return cnt;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String charInput = input.nextLine();
        char c = charInput.charAt(0);
        int cnt = countC(s,c);
        System.out.println(cnt);

    }
}
```

## Submission at 2024-10-04 05:05:39


```
public class Main{
    public static void main(String[] args)
    {

    }

    int min=Integer.MAX_VALUE;
    int max = Integer.MIN_VALUE;
    for(int i : bloomDay)
    {
        min=Math.min(min,i);
        max=Math.max(max,i);
    }
    
    
}
```

## Submission at 2024-10-04 05:40:42


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i = 0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        Solution result = new Solution();
        result=Solution(bloomDay);
        System.out.println(result);

    }
    public static int Solution(int[] bloomDay)
    {
        int min=Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for(int i : bloomDay)
        {
            min=Math.min(min,i);
            max=Math.max(max,i);
        }

        int mid=min+(max-min)/2;
        if(canMake(mid,m,k,bloomDay))
            max=mid-1;
        else
            min=mid+1;
        return mid;

    }
    public boolean canMake(int value, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        int bouquets=0;
        for(int i : bloom)
        {
            if(i<=val)
                count++;
                if(count==flowers) 
                {
                    bouquets++;
                    count=0;
                    while(bouquets<=bouq)
                        return true;
                }
                else
                    count=0;
        }
        return bouquets>=bouq;
    }
}

```

## Submission at 2024-10-04 05:49:49


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String t = input.nextLine();
    }
    public boolean check(String s, String t)
    {
       Map<Integer,Integer> map = new HashMap();
       
       for()
    }

}
```

## Submission at 2024-10-04 05:52:25


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i = 0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        Solution result = new Solution();
        result=Solution(bloomDay);
        System.out.println(result);

    }
    public static int Solution(int[] bloomDay)
    {
        int min=Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for(int i : bloomDay)
        {
            min=Math.min(min,i);
            max=Math.max(max,i);
        }

        int mid=min+(max-min)/2;
        if(canMake(mid,m,k,bloomDay))
            max=mid-1;
        else
            min=mid+1;
        return mid;

    }
    public boolean canMake(int value, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        int bouquets=0;
        for(int i : bloom)
        {
            if(i<=val)
                count++;
                if(count==flowers) 
                {
                    bouquets++;
                    count=0;
                    while(bouquets<=bouq)
                        return true;
                }
                else
                    count=0;
        }
        return bouquets>=bouq;
    }
}
```

## Submission at 2024-10-04 05:52:36


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i = 0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        Solution result = new Solution();
        result=Solution(bloomDay);
        System.out.println(result);

    }
    public static int Solution(int[] bloomDay)
    {
        int min=Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for(int i : bloomDay)
        {
            min=Math.min(min,i);
            max=Math.max(max,i);
        }

        int mid=min+(max-min)/2;
        if(canMake(mid,m,k,bloomDay))
            max=mid-1;
        else
            min=mid+1;
        return mid;

    }
    public boolean canMake(int value, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        int bouquets=0;
        for(int i : bloom)
        {
            if(i<=val)
                count++;
                if(count==flowers) 
                {
                    bouquets++;
                    count=0;
                    while(bouquets<=bouq)
                        return true;
                }
                else
                    count=0;
        }
        return bouquets>=bouq;
    }
}
```

## Submission at 2024-10-04 06:22:45


```
import java.util.Scanner;
public class Main{
    public int Solution(int[] bloomDay, int day)
    {
        int min=Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;
        for(int i : bloomDay)
        {
            min=Math.min(min,i);
            max=Math.max(max,i);
        }
        int mid=min+(max-min)/2;
        if(canMake(mid,m,k,bloomDay))
            max=mid-1;
        else
            min=mid+1;
        return canMake(mid,m,k,bloomDay)? mid : -1;

    }
    public boolean canMake(int value, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        int bouquets=0;
        for(int i : bloom)
        {
            if(i<=value)
                count++;
                if(count==flowers) 
                {
                    bouquets++;
                    count=0;
                    while(bouquets<=bouq)
                        return true;
                }
                else
                    count=0;
        }
        return bouquets>=bouq;
    }
    public static void main(String[] args)
    {
        Scanner input=new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i = 0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        Solution result = new Solution();
        result=Solution(mid);
        System.out.println(result);
    }
}
```

## Submission at 2024-10-25 05:31:25


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
      helper(postOrder,root);
      return postOrder;
       
    }
    public void helper(ArrayList<Integer> postOrder, Node root)
    {
      if(root==null) return;
      helper(postOrder,root.left);
      helper(postOrder,root.right);
      res.add(root.data);
    }
}
```

## Submission at 2024-10-25 05:43:05


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
        chkSym(root);
        
    }
    public boolean chkSym(Node left, Node right)
    {
        if(left==null && right==null) return false;
        if(left.data!=right.data || left==null || right==null) return false;
        return isSymmetric(left.left,right.right) && isSymmetric(left.right,right.left);
    }
}
```

## Submission at 2024-10-25 06:04:05


```
import java.util.HashMap;
class Solution
{
    public boolean patternQ(String pattern, String[] arr)
    {
        int[] arr = s.split(" ");
        if(pattern.length!=s.length()) return false;
        HashMap<Character,String> map = new HashMap<>();
        for(int i=0;i<pattern.length;i++)
        {
            String word = arr[i];
            char c = s.charAt(i);
            map.put(c,word);
        }

        if(map.containsKey(c))
        {
            if(!map.get(c).equals(word)) return false;
            if(!map.contains(c))   
        }
        else



    }
    public static void main(String[] args)
    {
        String pattern = "abba";
        String s = "dog, cat, cat, dog";

        Solution soln = new Solution();
        boolean ans = soln.patternQ(c,word);
        System.out.println(ans);

    }
}
```

## Submission at 2024-10-25 06:09:08


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
      ArrayList<Integer> res = new ArrayList<>();
      helper(res,root);
      return res;
       
    }
    public void helper(ArrayList<Integer> res, Node root)
    {
      if(root==null) return;
      helper(res,root.left);
      helper(res,root.right);
      res.add(root.data);
    }
}
```

## Submission at 2024-10-25 06:22:44


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
        chkSym(root.left,root.right);
        
        
    }
    public boolean chkSym(Node left, Node right)
    {
        if(left==null && right==null) return false;
        if((left.data!=right.data) || (left==null) || (right==null)) return false;
        return chkSym(left.left,right.right) && chkSym(left.right,right.left);
    }
}
```

## Submission at 2024-10-25 06:30:04


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
        Node left = root.left;
        Node right = root.right;
        chkSym(root);
        return false;
        
    }
    public boolean chkSym(Node left, Node right)
    {
        if(left==null && right==null) return false;
        if((left.data!=right.data) || (left==null) || (right==null)) return false;
        return chkSym(left.left,right.right) && chkSym(left.right,right.left);
    }
}
```

## Submission at 2024-10-25 06:47:26


```
import java.util.HashMap;
class Solution
{
    public static void main(String[] args)
    {
        Solution soln = new Solution();
        String pattern = "abba";
        String s = "dog, cat, cat, dog";
        boolean ans = soln.patternQ(c,word);
        System.out.println(ans);

    }
    public boolean patternQ(String pattern, String s)
    {
        int[] arr = s.split(" ");
        if(pattern.length!=s.length()) return false;
        HashMap<Character,String> map = new HashMap<>();
        for(int i=0;i<pattern.length();i++)
        {
            String word = arr[i];
            char c = s.charAt(i);
            map.put(c,word);
        }

        if(map.containsKey(c))
        {
            if(!map.get(c).equals(word)){
                return false; 
            else() 
            }
        return true;
        }
    }
}
```

## Submission at 2024-10-25 07:00:08


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
        
    }
    public boolean chkSym(Node left, Node right)
    {
        if(left==null && right==null) return false;
        if((left.data!=right.data) || (left==null) || (right==null)) return false;
        return chkSym(left.left,right.right) && chkSym(left.right,right.left);
    }
}
```

## Submission at 2024-11-04 12:57:08


```
import java.util.Scanner;
import java.util.HashMap;
public class Main
{
    public static boolean check(String pattern, String s)
    {
        String[] arr = s.split(" ");
        for(int i=0; i<pattern.length(); i++)
        {
             char c = pattern.charAt(i);
        }
        HashMap<Character,String> map = new HashMap<>();
        String word = arr[i];
        for(int i==0; i<pattern.length(); i++)
        {
            map.put(c,word);
        }
        if(map.containsKey(c))
        {
            if(!map.get(c).equals(word))
                return false;
        }
        else
        {
            if(map.getValue(word))
                return false;
        }
        return true;
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String pattern = input.nextLine();
        String s = input.nextLine();
        String[] arr = new String[3000];
        Main soln = new Main();
        boolean ans = check.soln(pattern,s);
        System.out.println(ans);

    }
}
```

## Submission at 2024-11-04 13:04:44


```
import java.util.Scanner;
import java.util.HashMap;
public class Main
{
    public static boolean check(String pattern, String s)
    {
        String[] arr = s.split(" ");
        if(arr.length!=pattern.length()) return false; 
        HashMap<Character,String> map = new HashMap<>();
        for(int i=0; i<pattern.length(); i++)
        {
             char c = pattern.charAt(i);
             String word = arr[i];
        }
        if(map.containsKey(c))
        {
            if(!map.get(c).equals(word))
                return false;
        }
        else
        {
            if(map.containsValue(word))
                return false;
            map.put(c,word);
        }
        return true;
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String pattern = input.nextLine();
        String s = input.nextLine();
        String[] arr = new String[3000];
        Main soln = new Main();
        boolean ans = check.soln(pattern,s);
        System.out.println(ans);

    }
}
```

## Submission at 2024-11-04 13:14:48


```
import java.util.Scanner;
import java.util.HashMap;
public class Main
{
    public static boolean check(String pattern, String s)
    {
        String[] arr = s.split(" ");
        if(arr.length!=pattern.length()) return false; 
        HashMap<Character,String> map = new HashMap<>();
        for(int i=0; i<pattern.length(); i++)
        {
            char c = pattern.charAt(i);
            String word = arr[i];
            if(map.containsKey(c))
            {
                if(!map.get(c).equals(word))
                    return false;
            }
            else
            {
                if(map.containsValue(word))
                    return false;
                map.put(c,word);
            }
        }
        return true;
    }
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String pattern = input.nextLine();
        String s = input.nextLine();
        boolean ans = check(pattern,s);
        System.out.println(ans);

    }
}
```

## Submission at 2024-11-04 13:41:54


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
    int sum=0;
    Integer treePathSum(Node root)
    {
      Sum(root, 0); 
      return sum;
    }
    void Sum(Node root, int num)
    {
      if (root == null) return;
      num = 10*num + root.data;
      if(root.left==null && root.right==null)
      {
        sum+=num;
        return;
      }
      if(root.left!=null) Sum(root.left, num);
      if(root.right!=null) Sum(root.right, num);
    }
}
```

## Submission at 2024-11-05 09:15:42


```
import java.util.Arrays;
import java.util.Scanner;
public class Main
{
    public boolean canConstruct(String ransomNote, String magazine)
    {
        int[] arr = new int[26];
        for(char r : ransomNote.toCharArray())
        {
            arr[r-'a']++;
        }
        for(char r : magazine.toCharArray())
        {
            arr[r-'a']--;
        }
        for(int i : arr)
        {
            if(i>0) return false;
        }
        return true;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String ransomNote = input.nextLine();
        String magazine = input.nextLine();

        Main main = new Main();
        boolean ans = main.canConstruct(ransomNote,magazine);
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-05 10:39:27


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
        Node dummy = new Node(0);
        Node current = dummy; // Pointer to build the new list

        // Pointers to traverse the two linked lists
        Node ptr1 = head1;
        Node ptr2 = head2;

        // Traverse both lists
        while (ptr1 != null && ptr2 != null) {
            if (ptr1.data == ptr2.data) {
                // If both nodes are equal, add to the new list
                current.next = new Node(ptr1.data);
                current = current.next; // Move the current pointer
                ptr1 = ptr1.next; // Move both pointers forward
                ptr2 = ptr2.next;
            } else if (ptr1.data < ptr2.data) {
                // Move pointer in the first list forward
                ptr1 = ptr1.next;
            } else {
                // Move pointer in the second list forward
                ptr2 = ptr2.next;
            }
        }

        // The new linked list starts from the next of dummy
        return dummy.next;
    }
}
```

## Submission at 2024-11-05 12:04:21


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
      if(root==null) return 0;
      int leftDepth=maxDepth(root.left);
      int rightDepth=maxDepth(root.right);
      return 1+Math.max(leftDepth,rightDepth);
    }
}
```

## Submission at 2024-11-05 12:17:08


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
        if(root==null) return true;
        return chkSym(root.left,root.right);
    }
    public boolean chkSym(Node left, Node right)
    {
        if(left==null && right==null) return true;
        if(left==null || right==null || left.data!=right.data) return false;
        return chkSym(left.left,right.right) && chkSym(left.right,right.left);
    }

}
```

## Submission at 2024-11-05 12:18:27


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
        if(root==null) return true;
        return chkSym(root.left,root.right);
    }
    public boolean chkSym(Node left, Node right)
    {
        if(left==null && right==null) return true;
        if(left==null || right==null || left.data!=right.data) return false;
        return chkSym(left.left,right.right) && chkSym(left.right,right.left);
    }

}
```

## Submission at 2024-11-05 12:25:00


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
       int leftMax= findMax(root.left);
       int rightMax= findMax(root.right);
       return Math.max(root.data,Math.max(leftMax,rightMax));
    }
}
```

## Submission at 2024-11-05 12:55:17


```
import java.util.Scanner;
import java.util.HashMap;
public class Main
{
    public boolean patternQ(String pattern, String s)
    {
        String[] arr = s.split(" ");
        if(pattern.length()!=arr.length) return false;
        HashMap<Character,String> map = new HashMap<>();
        for(int i=0;i<pattern.length();i++)
        {
            char c = pattern.charAt(i);
            String word = arr[i];
            if(map.containsKey(c))
            {
                if(!map.get(c).equals(word)) return false;
            }
            else
            {
                if(map.containsValue(word)) return false;
            }
            map.put(c,word);
        }
        return true;
    }
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String pattern = input.nextLine();
        String s = input.nextLine();
        Main main = new Main();
        boolean ans = main.patternQ(pattern,s);
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-06 11:40:03


```
import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String order = input.nextLine();
        String s = input.nextLine();
        Main main = new Main();
        String result = main.customSort(order, s);
        System.out.println(result);

    }
    public String customSort(String order, String s)
    {
        StringBuilder sb = new StringBuilder();
        Set<Character> set = new HashSet<>();
        int[] arr = new int[26];
        for(char i : order.toCharArray())
        {
            set.add(i);
        }
        for(char c : s.toCharArray())
        {
            if(!set.contains(c)) sb.append(c);
            else arr[c-'a']++;
        }
        for(char c : s.toCharArray())
        {
            int count = arr[c-'a'];
            while(count-->0)
                sb.append(c);
        }
        return sb.toString();
    }
}
```

## Submission at 2024-11-06 11:52:43


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
      ArrayList<Integer> res = new ArrayList<>();
      helper(root,res);
      return res;
       
    }
    void helper(Node root, ArrayList<Integer> res)
    {
      if(root==null) return;
      helper(root.left,res);
      helper(root.right,res);
      res.add(root.data);

    }
}
```

## Submission at 2024-11-07 03:53:26


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
        if(q.isEmpty()) return q;
        int revQ = q.remove();
        rev(q);
        q.add(revQ);
        return q;
    }
}
```

## Submission at 2024-11-08 05:24:40


```
import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
public class Main
{   public static String customSort(String order, String s)
    {
        StringBuilder sb = new StringBuilder();
        Set<Character> set = new HashSet<>();
        int[] arr = new int[26];
        for(char i : order.toCharArray())
        {
            set.add(i);
        }
        for(char c : s.toCharArray())
        {
            arr[c-'a']++;
        }
        for(char c : order.toCharArray())
        {
            int count = arr[c-'a'];
            while(count-->0)
                sb.append(c);
        }
        for (char c : s.toCharArray()) {
            if (!set.contains(c)) sb.append(c);
        }
        return sb.toString();
    }


    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();
        String result = customSort(order, s);
        System.out.println(result);

    }
}
```

## Submission at 2024-11-08 05:26:20


```
import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;
public class Main
{   public static String customSort(String order, String s)
    {
        StringBuilder sb = new StringBuilder();
        Set<Character> set = new HashSet<>();
        int[] arr = new int[26];
        for(char i : order.toCharArray())
        {
            set.add(i);
        }
        for(char c : s.toCharArray())
        {
            arr[c-'a']++;
        }
        for(char c : order.toCharArray())
        {
            int count = arr[c-'a'];
            while(count-->0)
                sb.append(c);
        }
        for (char c : s.toCharArray()) {
            if (!set.contains(c)) sb.append(c);
        }
        return sb.toString();
    }


    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();
        String result = customSort(order, s);
        System.out.println(result);

    }
}
```

## Submission at 2024-11-08 08:00:47


```
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String inputS1 = input.nextLine();
        String result = revWordsOfString(inputS1); 
        System.out.println(result);
    }
    public static String revWordsOfString(String inputS1) {
        Stack<Character> s1 = new Stack<>();
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < inputS1.length(); i++) {  
            char c = inputS1.charAt(i);
            if (c != '.') {
                s1.push(c);
            } else {
                while (!s1.isEmpty()) {
                    sb.append(s1.pop());
                }
                sb.append('.'); 
            }
        }

    
        while (!s1.isEmpty()) {
            sb.append(s1.pop());
        }

        return sb.toString();  
    }
}
```

## Submission at 2024-11-12 11:19:28


```
import java.util.Stack;

public class Main {
    private static int precedence(char ch) {
        switch (ch) {
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
            case '^':
                return 3;
        }
        return -1;
    }
    public static String infixToPostfix(String expression) {
        StringBuilder result = new StringBuilder();
        Stack<Character> stack = new Stack<>();

        for (int i = 0; i < expression.length(); i++) {
            char c = expression.charAt(i);
            if (Character.isLetterOrDigit(c)) {
                result.append(c);
            }
            else {
               
                while (!stack.isEmpty() && precedence(c) <= precedence(stack.peek())) {
                    result.append(stack.pop());
                }
                stack.push(c);
            }
        }
        while (!stack.isEmpty()) {
            result.append(stack.pop());
        }

        return result.toString();
    }
    public static void main(String[] args) {
        String expression = "a+b*i";
        System.out.println("Postfix expression: " + infixToPostfix(expression));
    }
}
```

## Submission at 2024-11-12 12:31:38


```
import java.util.LinkedList;
import java.util.Queue;

public class Main {

    public static int countStudentsUnableToEat(int[] students, int[] sandwiches) {
        Queue<Integer> queue = new LinkedList<>();
        for (int student : students) {
            queue.add(student);
        }

        int sandwichIndex = 0;  // Index to keep track of the top sandwich in the stack
        int rotations = 0;      // Count of rotations without any sandwich being taken

        while (!queue.isEmpty() && rotations < queue.size()) {
            if (queue.peek() == sandwiches[sandwichIndex]) {
                queue.poll();  // Student takes the sandwich
                sandwichIndex++;  // Move to the next sandwich
                rotations = 0;  // Reset rotations as a sandwich was taken
            } else {
                // Student goes to the end of the queue
                queue.add(queue.poll());
                rotations++;
            }
        }

        return queue.size();  // The remaining students in the queue can't eat
    }

    public static void main(String[] args) {
        int n = 4;
        int[] students = {1, 1, 1, 0};
        int[] sandwiches = {0, 1, 0, 1};

        System.out.println(countStudentsUnableToEat(students, sandwiches));
    }
}

```

## Submission at 2024-11-14 07:02:02


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i=0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        int ans = minDays(bloomDay,m,k);
        System.out.println(ans);
    }

    public int minDays(int[] bloomDay, int m, int k)
    {
        if(m*k>bloomDay.length) return -1;
        int left=1, right=1, mid;
        for(int i=0;i<bloomDay.length; i++)
        {
            left = Math.min(i,left);
            right = Math.max(i,right);
        }
        while(left<right)
        {
            if(canMake(mid, m, k, bloomDay))
                right=mid;
            else left=mid+1;
            return left;
        }

    }

    private boolean canMake(int val, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        for(int i : bloom)
        {
             if(i<=val)
            {
                count++;
                if(count==flowers)
                {
                    bouq--;
                    count=0;
                    if(bouq==0) return true;
                }
            }
            count=0;
        }
        return false;
    }
}
```

## Submission at 2024-11-14 07:08:00


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i=0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        int ans = minDays(bloomDay,m,k);
        System.out.println(ans);
    }

    public static int minDays(int[] bloomDay, int m, int k)
    {
        if(m*k>bloomDay.length) return -1;
        int left=1, right=1, mid;
        for(int i=0;i<bloomDay.length; i++)
        {
            left = Math.min(i,left);
            right = Math.max(i,right);
        }
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(canMake(mid, m, k, bloomDay))
                right=mid;
            else left=mid+1;
        }
        return left;
    }

    private static boolean canMake(int val, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        for(int i : bloom)
        {
             if(i<=val)
            {
                count++;
                if(count==flowers)
                {
                    bouq--;
                    count=0;
                    if(bouq==0) return true;
                }
            }
            count=0;
        }
        return false;
    }
}
```

## Submission at 2024-11-14 07:12:33


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int[] bloomDay = new int[n];
        for(int i=0;i<n;i++)
        {
            bloomDay[i]=input.nextInt();
        }
        int ans = minDays(bloomDay,m,k);
        System.out.println(ans);
    }

    public static int minDays(int[] bloomDay, int m, int k)
    {
        if(m*k>bloomDay.length) return -1;
        int left=1, right=1, mid;
        for(int i=0;i<bloomDay.length; i++)
        {
            left = Math.min(left,bloomDay[i]);
            right = Math.max(right,bloomDay[i]);
        }
        while(left<right)
        {
            mid=left+(right-left)/2;
            if(canMake(mid, m, k, bloomDay))
                right=mid;
            else left=mid+1;
        }
        return left;
    }

    private static boolean canMake(int val, int bouq, int flowers, int[] bloom)
    {
        int count=0;
        for(int i : bloom)
        {
             if(i<=val)
            {
                count++;
                if(count==flowers)
                {
                    bouq--;
                    count=0;
                    if(bouq==0) return true;
                }
            }
            else count=0;
        }
        return false;
    }
}
```

## Submission at 2024-11-22 05:18:53


```
import java.util.Scanner;
import java.util.HashMap;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=input.nextInt();
        }
        int result = twice(n,a);
        System.out.println(result);
    }
    public static int twice(int n, int[] a)
    {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i : a)
        {
            map.put(i,map.getOrDefault(i,0)+1);
        }
        int key=0;
        for(int i=0;i<n;i++)
        {
            if(map.get(i==2))
                return 
        }
        return key;

        for(Map.entry<Integer,Integer> entry : map.entrySet())
        {
            if(entry==2)
                return entry.getKey()
        }
    }
    
}
```

## Submission at 2024-11-22 05:26:35


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int[] A = new int[N];
        for(int i=0;i<N;i++)
        {
            A[i]=input.nextInt();
        }
    }
}
```

## Submission at 2024-11-22 05:34:42


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=input.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];

        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:51:42


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=input.nextInt();
        }
        int[] freqArr = new int[n];
        for(int i : a)
        {
            freqArr[i-'a']++;
        }
        int twice=0;
        for(int i : freqArr)
        {
            if(i==2) twice=i;
        }
        System.out.println(twice);
    }
}
```

## Submission at 2024-11-22 06:01:24


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
        Node root=head;
        Node nextNode=head.next;
        while(nextNode!=null)
        {
            if(root.data==nextNode.data)
            {
                root.next=nextNode.next;
                nextNode.next=nextNode.next.next;
            }
            else
            {
                root=root.next;
                nextNode=nextNode.next;
            }
        }
        return root;
    }
}
```

## Submission at 2024-11-22 06:21:26


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        System.out.println(Math.abs(a-b));

    }

}
```

## Submission at 2024-11-22 06:33:02


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int[] A = new int[N];
        for(int i=0;i<N;i++)
        {
            A[i]=input.nextInt();
        }
        int[] freq = new int[N];
        int min=0;
        for(int i=0;i<N;i++)
        {
            freq[i-'a']++;
            min = Math.min(min,freq[i]);
        }
        System.out.println(A[min]);
    }
}
```

## Submission at 2024-11-22 06:46:55


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]= input.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum += a[i];
        }
        int result = (n-((n*(n+1)/2)-sum));
        System.out.println(result);

    }

}
```

## Submission at 2024-11-22 06:55:59


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]= input.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            char c = a.charAt(i);
            freq[c-'a']++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(freq[i]==2) count++;
            else break;
        }
        System.out.println(count);
    }

}
```

## Submission at 2024-11-22 06:57:08


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]= input.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            char c = a.charAt(i);
            freq[c-'a']++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(freq[i]==2) {count++;}
            else {continue;}
        }
        System.out.println(count);
    }

}
```

## Submission at 2024-11-22 07:00:19


```
import java.util.Scanner;
public class Main
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]= input.nextInt();
        }
        int[] freq = new int[n];
        for(int i=0;i<n;i++)
        {
            char c = a.charAt(i);
            freq[c-'a']++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(freq[i]==2) {count++;}
            else {continue;}
        }
        System.out.println(count);
    }

}
```

