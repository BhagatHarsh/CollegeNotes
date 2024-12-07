## Submission at 2024-08-09 04:45:27


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter name :");
        String str=s.next();
        System.out.println("Hello "+str);
    }
}
```

## Submission at 2024-08-09 04:46:23


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String str=s.next();
        System.out.println("Hello "+str);
    }
}
```

## Submission at 2024-08-09 04:49:04


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        String str=s.next();
        System.out.println("Hello "+str+"!");
    }
}
```

## Submission at 2024-08-09 04:49:41


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Hello "+s.next()+"!");
    }
}
```

## Submission at 2024-08-09 04:49:41


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Hello "+s.next()+"!");
    }
}
```

## Submission at 2024-08-09 04:49:43


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Hello "+s.next()+"!");
    }
}
```

## Submission at 2024-08-09 04:56:27


```
// Write your Java code here
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        for(int i=0;i<t;i++)
        {
            System.out.println("Hello "+s.next()+"!");
        }
    }
}
```

## Submission at 2024-08-09 05:04:57


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        System.out.println("Hello "+s.next()+"!");
    }
}
```

## Submission at 2024-08-09 05:08:22


```
// Write your Java code here
import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int t=s.nextInt();
        for(int i=0;i<t;i++) System.out.println("Hello "+s.next()+"!");
    }
}
```

## Submission at 2024-08-23 08:30:58


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Main{
    public static List<String> ParenComb(int n){
        List<String> r = new ArrayList<>();
        back(r, "", n, n);
        return r;
    }

    private static void back(List<String> r, String Current, int left, int right){
        if (left == 0 && right == 0) {
            r.add(Current);
            return;
        }
        if (left > right) {
            return;
        }
        if (left > 0) {
            back(r, Current + "(", left-1, right);
        }
        if (right > 0) {
            back(r, Current + ")", left, right-1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader BR = new BufferedReader(new InputStreamReader(System.in));
        String[] inp = BR.readLine().trim().split("\\s+");
        int n = Integer.parseInt(inp[0]);
        List<String> result = ParenComb(n);
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) 
        {
          System.out.print("\"");
          System.out.print(result.get(i));
          System.out.print("\"");
          if (i != result.size() - 1)
            System.out.print(",");
        }
        System.out.print("]");
    }
}
```

## Submission at 2024-08-23 08:31:56


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

## Submission at 2024-08-23 08:41:49


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader BR = new BufferedReader(new InputStreamReader(System.in));
        String[] inp = BR.readLine().trim().split("\\s+");
        int n = Integer.parseInt(inp[0]);
        int k = Integer.parseInt(inp[1]);

        List<List<Integer>> res = combine(n, k);

        System.out.print("[");
        for (int i = 0; i < res.size(); i++) 
        {
            System.out.print("[");
            for (int j = 0; j < res.get(i).size(); j++) 
            {
                System.out.print(res.get(i).get(j));
                if (j < res.get(i).size() - 1)
                  System.out.print(",");
            }
            System.out.print("]");
            if (i != res.size() - 1) 
              System.out.print(",");
        }
        System.out.print("]");
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> answer = new ArrayList<>();
        List<Integer> combinations = new ArrayList<>();
        back(1,combinations,answer,n,k);
        return answer;
    }

    private static void back(int sta, List<Integer> com, List<List<Integer>> res, int n, int k)  {
        if (com.size()==k) 
        {
          res.add(new ArrayList<>(com));
          return;
        }
        for(int i = sta;i<=n;i++)
        {
            com.add(i);
          back(i+1, com, res, n, k);
          com.remove(com.size()-1);
        }
    }
}
```

## Submission at 2024-08-23 08:42:56


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

## Submission at 2024-08-23 08:45:25


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

## Submission at 2024-08-23 08:46:23


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader BR = new BufferedReader(new InputStreamReader(System.in));
        String[] inp = BR.readLine().trim().split("\\s+");
        int n = Integer.parseInt(inp[0]);
        int k = Integer.parseInt(inp[1]);

        List<List<Integer>> res = combine(n, k);

        System.out.print("[");
        for (int i = 0; i < res.size(); i++) 
        {
            System.out.print("[");
            for (int j = 0; j < res.get(i).size(); j++) 
            {
                System.out.print(res.get(i).get(j));
                if (j < res.get(i).size() - 1)
                  System.out.print(",");
            }
            System.out.print("]");
            if (i != res.size() - 1) 
              System.out.print(",");
        }
        System.out.print("]");
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> answer = new ArrayList<>();
        List<Integer> combinations = new ArrayList<>();
        back(1,combinations,answer,n,k);
        return answer;
    }

    private static void back(int sta, List<Integer> com, List<List<Integer>> res, int n, int k)  {
        if (com.size()==k) 
        {
          res.add(new ArrayList<>(com));
          return;
        }
        for(int i = sta;i<=n;i++)
        {
            com.add(i);
          back(i+1, com, res, n, k);
          com.remove(com.size()-1);
        }
    }
}
```

## Submission at 2024-08-29 12:08:46


```
// Write the code from scratch, no boilerplate is require
import java.util.Scanner;
class Main {
    static int[] sort(int[] arr) {
        for(int i=arr.length;i>0;i--) {
            for(int j=0;j<i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
        return arr;
    }

    static boolean compare(int arr1[],int arr2[]) {
        boolean ans=true;
        for(int i=0;i<arr1.length;i++) {
            if(arr1[i]!=arr2[i]) ans=false;
        }
        return ans;
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int larr1,larr2;
        larr1=s.nextInt();
        System.out.print(" ");
        larr2=s.nextInt();
        int arr1[]=new int[larr1];
        int arr2[]=new int[larr2];
        for(int i=0;i<larr1;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<larr1;i++) {
            arr2[i]=s.nextInt();
        }
        arr1=Main.sort(arr1);
        arr2=Main.sort(arr2);
        System.out.println(Main.compare(arr1,arr2));
    }
}
```

## Submission at 2024-08-29 12:19:16


```
// Write the code from scratch, no boilerplate is require
import java.util.Scanner;
class Main {
    static int[] sort(int[] arr) {
        for(int i=arr.length;i>0;i--) {
            for(int j=0;j<i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
        return arr;
    }

    static boolean compare(int arr1[],int arr2[]) {
        boolean ans=true;
        for(int i=0;i<arr1.length;i++) {
            if(arr1[i]!=arr2[i]) ans=false;
        }
        return ans;
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int larr1,larr2;
        larr1=s.nextInt();
        System.out.print(" ");
        larr2=s.nextInt();
        int arr1[]=new int[larr1];
        int arr2[]=new int[larr2];
        for(int i=0;i<larr1;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<larr1;i++) {
            arr2[i]=s.nextInt();
        }
        arr1=Main.sort(arr1);
        arr2=Main.sort(arr2);
        System.out.println(Main.compare(arr1,arr2));
    }
}
```

## Submission at 2024-08-29 12:23:40


```
// Write the code from scratch, no boilerplate is require
import java.util.Scanner;
class Main {
    static int[] sort(int[] arr) {
        for(int i=arr.length;i>0;i--) {
            for(int j=0;j<i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
        return arr;
    }

    static boolean compare(int arr1[],int arr2[]) {
        boolean ans=true;
        for(int i=0;i<arr1.length;i++) {
            if(arr1[i]!=arr2[i]) ans=false;
        }
        return ans;
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int larr1,larr2;
        larr1=s.nextInt();
        larr2=s.nextInt();
        int arr1[]=new int[larr1];
        int arr2[]=new int[larr2];
        for(int i=0;i<larr1;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<larr1;i++) {
            arr2[i]=s.nextInt();
        }
        arr1=Main.sort(arr1);
        arr2=Main.sort(arr2);
        System.out.println(Main.compare(arr1,arr2));
    }
}
```

## Submission at 2024-08-29 12:27:04


```
// Write the code from scratch, no boilerplate is require
import java.util.Scanner;
class Main {
    static int[] sort(int[] arr) {
        for(int i=arr.length;i>0;i--) {
            for(int j=0;j<i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
        return arr;
    }

    static boolean compare(int arr1[],int arr2[]) {
        boolean ans=true;
        for(int i=0;i<arr1.length;i++) {
            if(arr1[i]!=arr2[i]) ans=false;
        }
        return ans;
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int larr1,larr2;
        larr1=s.nextInt();
        larr2=s.nextInt();
        int arr1[]=new int[larr1];
        int arr2[]=new int[larr2];
        for(int i=0;i<larr1;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<larr2;i++) {
            arr2[i]=s.nextInt();
        }
        arr1=Main.sort(arr1);
        arr2=Main.sort(arr2);
        System.out.println(Main.compare(arr1,arr2));
    }
}
```

## Submission at 2024-08-29 12:29:21


```
// Write the code from scratch, no boilerplate is require
import java.util.Scanner;
class Main {
    static int[] sort(int[] arr) {
        for(int i=arr.length;i>0;i--) {
            for(int j=0;j<i-1;j++) {
                if(arr[j]>arr[j+1]) {
                    int tmp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=tmp;
                }
            }
        }
        return arr;
    }

    static boolean compare(int arr1[],int arr2[]) {
        boolean ans=true;
        if(arr1.length!=arr2.length) ans=false;
        else
        {
            for(int i=0;i<arr1.length;i++) {
                if(arr1[i]!=arr2[i]) ans=false;
            }
        }
        return ans;
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int larr1,larr2;
        larr1=s.nextInt();
        larr2=s.nextInt();
        int arr1[]=new int[larr1];
        int arr2[]=new int[larr2];
        for(int i=0;i<larr1;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<larr2;i++) {
            arr2[i]=s.nextInt();
        }
        arr1=Main.sort(arr1);
        arr2=Main.sort(arr2);
        System.out.println(Main.compare(arr1,arr2));
    }
}
```

## Submission at 2024-08-29 12:39:15


```
import java.util.Scanner;
class Main {
    static boolean div3(int n) {
        if(n%3==0) return true;
        else return false;
    }

    static boolean div5(int n) {
        if(n%5==0) return true;
        else return false;
    }

    static boolean div7(int n) {
        if(n%7==0) return true;
        else return false;
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int sum=0;
        for(int i=1;i<=n;i++) {
            if(Main.div3(i) || Main.div5(i) || Main.div7(i)) sum+=i;
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-08-29 12:47:03


```
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++) {
            arr[i]=s.nextInt();
        }
        String[] str=new String[n];
        for(int i=0;i<n;i++) {
            str[i]=""+arr[i];
        }
        int c=0;
        for(int i=0;i<n;i++) {
            if(str[i].length()%2==0) c++;
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-08-29 12:50:23


```
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++) {
            arr[i]=s.nextInt();
        }
        String[] str=new String[n];
        for(int i=0;i<n;i++) {
            str[i]=""+arr[i];
        }
        int c=0;
        for(int i=0;i<n;i++) {
            if(str[i].length()%2==0) c++;
        }
        System.out.println(c);
    }
}
```

## Submission at 2024-08-29 13:04:27


```
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) {
            arr[i]=s.nextInt();
        }
        System.out.println((int)((arr[k-1]-arr[k-2])/2+arr[k-2]));
    }
}
```

## Submission at 2024-08-29 13:05:52


```
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) {
            arr[i]=s.nextInt();
        }
        System.out.println((int)((arr[k-1]-arr[k-2])/2+arr[k-2]));
    }
}
```

## Submission at 2024-08-29 13:11:13


```
// Write Code from Scratch
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int m=s.nextInt();
        int arr[][]=new int[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                arr[i][j]=s.nextInt();
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                System.out.print(arr[j][i]);
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-08-29 13:12:36


```
// Write Code from Scratch
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int m=s.nextInt();
        int arr[][]=new int[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                arr[i][j]=s.nextInt();
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                System.out.print(arr[j][i]+" ");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-08-29 13:13:08


```
// Write Code from Scratch
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int m=s.nextInt();
        int arr[][]=new int[n][m];
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                arr[i][j]=s.nextInt();
            }
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                System.out.print(arr[j][i]+" ");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-08-29 14:18:05


```
import java.util.Scanner;
class Main{
    static int n;
    static int[] uparr(int[] arr) {
        if(arr.length==1) {
            System.out.println(arr[0]);
            int[] array={0};
            return array;
        }
        else {
            int arr1[]=new int[arr.length-1];
            for(int i=0;i<arr.length-1;i++) {
                arr1[i]=arr[i]+arr[i+1];
            }
            return Main.uparr(arr1);
        }
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) {
            arr[i]=s.nextInt();
        }
        Main.uparr(arr);
    }
}
```

## Submission at 2024-08-29 15:03:19


```
import java.util.Scanner;
class Main {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) arr[i]=s.nextInt();
        int d=0;
        int arr2[]=new int[arr[n-1]-n]; //Will contain the elements not in arr
        for(int i=1;i<=arr[n-1];i++) {
            int c=0;
            for(int j=0;j<arr.length;j++) {
                if(i==arr[j]) c=1;
            }
            if(c==0) {
                arr2[d]=i;
                d++;
            }
        }
        System.out.println(arr2[k-1]);
    }
}
```

## Submission at 2024-08-29 15:03:47


```
import java.util.Scanner;
class Main {
    public static void main(String args[])
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++) arr[i]=s.nextInt();
        int d=0;
        int arr2[]=new int[arr[n-1]-n]; //Will contain the elements not in arr
        for(int i=1;i<=arr[n-1];i++) {
            int c=0;
            for(int j=0;j<arr.length;j++) {
                if(i==arr[j]) c=1;
            }
            if(c==0) {
                arr2[d]=i;
                d++;
            }
        }
        System.out.println(arr2[k-1]);
    }
}
```

## Submission at 2024-08-29 15:06:35


```
import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) arr[i] = s.nextInt();
        
        int missingCount = 0;
        
        // Calculate the correct size of arr2 by counting the missing elements
        for (int i = 1; i <= arr[n-1]; i++) {
            boolean isPresent = false;
            for (int j = 0; j < arr.length; j++) {
                if (i == arr[j]) {
                    isPresent = true;
                    break;
                }
            }
            if (!isPresent) {
                missingCount++;
            }
        }
        
        // Initialize arr2 with the correct size
        int arr2[] = new int[missingCount];
        int d = 0;
        
        // Populate arr2 with missing elements
        for (int i = 1; i <= arr[n-1]; i++) {
            boolean isPresent = false;
            for (int j = 0; j < arr.length; j++) {
                if (i == arr[j]) {
                    isPresent = true;
                    break;
                }
            }
            if (!isPresent) {
                arr2[d] = i;
                d++;
            }
        }

        // Check if k is within bounds
        if (k > 0 && k <= arr2.length) {
            System.out.println(arr2[k-1]);
        } else {
            System.out.println("Invalid input for k");
        }
    }
}

```

## Submission at 2024-08-29 15:08:27


```
#include <iostream>
using namespace std;

int findKthPositive(int arr[], int n, int k) {
    int missing_count = 0;
    int current = 1;
    int i = 0;

    while (missing_count < k) {
        if (i < n && arr[i] == current) {
            // If the current number is in the array, skip it
            i++;
        } else {
            // If the current number is missing, increment the missing count
            missing_count++;
        }
        
        // If we've found the k-th missing number, return it
        if (missing_count == k) {
            return current;
        }
        
        current++;
    }

    return current - 1;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = findKthPositive(arr, n, k);
    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-29 15:10:36


```
import java.util.Scanner;

public class KthMissingPositiveNumber {

    public static int findKthMissing(int[] arr, int k) {
        int missingCount = 0; // To count the number of missing positive integers
        int currentNumber = 1; // Start from the first positive integer
        int i = 0; // Pointer for the array

        while (missingCount < k) {
            // If the current number is in the array, skip it
            if (i < arr.length && arr[i] == currentNumber) {
                i++;
            } else {
                // Otherwise, it is a missing number
                missingCount++;
                // If this is the kth missing number, return it
                if (missingCount == k) {
                    return currentNumber;
                }
            }
            currentNumber++;
        }
        // This return should never be reached because the loop should terminate after finding the kth missing number
        return -1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Find and print the kth missing positive number
        int result = findKthMissing(arr, k);
        System.out.println(result);

        scanner.close();
    }
}

```

## Submission at 2024-08-29 15:11:18


```
#include <iostream>
using namespace std;

void spiralTraversal(int matrix[][100], int n, int m) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right across the top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;  // Move the top boundary down

        // Traverse from top to bottom down the right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;  // Move the right boundary left

        if (top <= bottom) {
            // Traverse from right to left across the bottom row
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;  // Move the bottom boundary up
        }

        if (left <= right) {
            // Traverse from bottom to top up the left column
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;  // Move the left boundary right
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    int matrix[100][100];  // Assuming maximum dimensions of 100x100 as per constraints
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    spiralTraversal(matrix, n, m);

    return 0;
}

```

## Submission at 2024-08-29 15:13:35


```
#include <iostream>
using namespace std;

void spiralTraversal(int matrix[][100], int n, int m) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right across the top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++;  // Move the top boundary down

        // Traverse from top to bottom down the right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--;  // Move the right boundary left

        if (top <= bottom) {
            // Traverse from right to left across the bottom row
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;  // Move the bottom boundary up
        }

        if (left <= right) {
            // Traverse from bottom to top up the left column
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++;  // Move the left boundary right
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    int matrix[100][100];  // Assuming maximum dimensions of 100x100 as per constraints
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    spiralTraversal(matrix, n, m);

    return 0;
}
```

## Submission at 2024-08-30 04:59:26


```
import java.util.Scanner;
class Main { //Remember the class name has to be Main!
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String str=s.nextLine();
        int c=0;
        for(int i=0,j=str.length()-1;i<j;i++) {
            if(str.charAt(i)!=str.charAt(j)) c=1;
            j--;
        }
        if(c==1) System.out.println("NO");
        else System.out.println("YES");
    }
}
```

## Submission at 2024-08-30 04:59:28


```
import java.util.Scanner;
class Main { //Remember the class name has to be Main!
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String str=s.nextLine();
        int c=0;
        for(int i=0,j=str.length()-1;i<j;i++) {
            if(str.charAt(i)!=str.charAt(j)) c=1;
            j--;
        }
        if(c==1) System.out.println("NO");
        else System.out.println("YES");
    }
}
```

## Submission at 2024-08-30 04:59:29


```
import java.util.Scanner;
class Main { //Remember the class name has to be Main!
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String str=s.nextLine();
        int c=0;
        for(int i=0,j=str.length()-1;i<j;i++) {
            if(str.charAt(i)!=str.charAt(j)) c=1;
            j--;
        }
        if(c==1) System.out.println("NO");
        else System.out.println("YES");
    }
}
```

## Submission at 2024-08-30 05:09:03


```
import java.util.Scanner;
class Main { //Remember the class name has to be Main!
    static int c=0;
    static void isPalindrome(String str,int n) {
        if(n<str.length()-1-n) {
            if(str.charAt(n)==str.charAt(str.length()-1-n)) {
            Main.isPalindrome(str,n+1);
            }
            else c=1;
        }
    }

    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String str=s.nextLine();
        /*for(int i=0,j=str.length()-1;i<j;i++) {
            if(str.charAt(i)!=str.charAt(j)) c=1;
            j--;
        }*/
        Main.isPalindrome(str,0);
        if(c==1) System.out.println("NO");
        else System.out.println("YES");
    }
}
```

## Submission at 2024-08-30 05:16:21


```
// Write code from scratch
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        int b[]=new int[n];
        int c[]=new int[n];
        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            b[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            c[i]=Math.max(a[i],b[i]);
        }
        for(int i=0;i<n;i++) {
            System.out.print(c[i]+" ");
        }
    }
}
```

## Submission at 2024-08-30 06:01:56


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
        }
        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:05:30


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        int e=(int)c/2;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        for(int i=1;i<=e;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
        }
        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:08:12


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:08:13


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:08:42


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>=2) {
            for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:09:19


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>=2) {
            for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:09:54


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:11:05


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
            int h=c-i;
            Node tmp2=head;
            for(int j=0;j<h-1;j++) tmp2=tmp2.next;
            int a=tmp.data;
            tmp.data=tmp2.data;
            tmp2.data=a;
            tmp=tmp.next;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:12:22


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=0;j<h-1;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:13:26


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head.next;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                int h=c-i;
                Node tmp2=head;
                for(int j=0;j<h-1;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
                tmp=tmp.next;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:14:40


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=0;j<h-1;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:17:35


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=0;j<h;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:17:38


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=0;j<h;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:19:37


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=1;j<h;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:19:44


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=1;j<h;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:23:50


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=1;j<=h;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-08-30 06:23:56


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
        Node tmp=head;
        int c=1;
        while(tmp.next!=null) {
            c++;
            tmp=tmp.next;
        }
        int d=head.data;
        head.data=tmp.data;
        tmp.data=d;
        tmp=head;
        if(c>2) {
            for(int i=1;i<=c/2;i++) {
                tmp=tmp.next;
                int h=c-i;
                Node tmp2=head;
                for(int j=1;j<=h;j++) tmp2=tmp2.next;
                int a=tmp.data;
                tmp.data=tmp2.data;
                tmp2.data=a;
            }
        }

        return head;
        // Write your logic here
    }
}
```

## Submission at 2024-10-04 05:10:46


```
// Write code from scratch here
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);

        //inputs
        int l=s.nextInt();
        int tickets[]=new int[l];
        for(int i=0;i<l;i++) tickets[i]=s.nextInt();
        int k=s.nextInt();

        //
        int head=0;
        int time=0;
        while(tickets[k]!=0) {
            if(tickets[head]==0) head++;
            time++;
            tickets[head]--;
            head++;
            head%=l;
        }
        System.out.println(time);
    }
}
```

## Submission at 2024-10-04 05:12:13


```
// Write code from scratch here
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);

        //inputs
        int l=s.nextInt();
        int tickets[]=new int[l];
        for(int i=0;i<l;i++) tickets[i]=s.nextInt();
        int k=s.nextInt();

        //
        int head=0;
        int time=0;
        while(tickets[k]!=0) {
            while(tickets[head]==0) head++;
            time++;
            tickets[head]--;
            head++;
            head%=l;
        }
        System.out.println(time);
    }
}
```

## Submission at 2024-10-04 05:12:16


```
// Write code from scratch here
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);

        //inputs
        int l=s.nextInt();
        int tickets[]=new int[l];
        for(int i=0;i<l;i++) tickets[i]=s.nextInt();
        int k=s.nextInt();

        //
        int head=0;
        int time=0;
        while(tickets[k]!=0) {
            while(tickets[head]==0) head++;
            time++;
            tickets[head]--;
            head++;
            head%=l;
        }
        System.out.println(time);
    }
}
```

## Submission at 2024-10-04 05:13:01


```
// Write code from scratch here
import java.util.Scanner;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);

        //inputs
        int l=s.nextInt();
        int tickets[]=new int[l];
        for(int i=0;i<l;i++) tickets[i]=s.nextInt();
        int k=s.nextInt();

        //
        int head=0;
        int time=0;
        while(tickets[k]!=0) {
            while(tickets[head]==0) {
                head++;
                head%=l;
            }
            time++;
            tickets[head]--;
            head++;
            head%=l;
        }
        System.out.println(time);
    }
}
```

## Submission at 2024-10-04 05:47:41


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static int check_present(char c,char arr[]) {
        boolean is_present;
        int ind=-1;
        for(int i=0;i<arr.length;i++) {
            if(c==arr[i]) {
                is_present=true;
                ind=i;
                break;
            }
        }
        return ind;
    }

    public static void main(String args[]) {
        Scanner str=new Scanner(System.in);
        //inputs
        String s=str.nextLine();
        String t=str.nextLine();

        boolean anagram=false;
        if(s.length()!=t.length()) anagram=false;
        else {
            char sarr[]=new char[s.length()];
            int[] sarr_count=new int[s.length()];
            char tarr[]=new char[s.length()];
            int[] tarr_count=new int[s.length()];
            int ends=0;

            for(int i=0;i<s.length();i++) {
                int ind=check_present(s.charAt(i),sarr);
                if(ind==-1) {
                    sarr[ends]=s.charAt(i);
                    sarr_count[ends]=1;
                    ends++;
                }
                else {
                    sarr_count[ind]++;
                }
            }

            ends=0;
            for(int i=0;i<s.length();i++) {
                int ind=check_present(t.charAt(i),tarr);
                if(ind==-1) {
                    tarr[ends]=t.charAt(i);
                    tarr_count[ends]=1;
                    ends++;
                }
                else {
                    tarr_count[ind]++;
                }
            }

            for(int i=0;i<s.length();i++) {
                int j=0;
                while(j<s.length() && sarr[i]!=tarr[j]) j++;
                if(sarr_count[i]==tarr_count[j]) anagram=true;
                else anagram=false;
            }
        }
        System.out.println(anagram);
    }
}
```

## Submission at 2024-10-04 05:48:12


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static int check_present(char c,char arr[]) {
        boolean is_present;
        int ind=-1;
        for(int i=0;i<arr.length;i++) {
            if(c==arr[i]) {
                is_present=true;
                ind=i;
                break;
            }
        }
        return ind;
    }

    public static void main(String args[]) {
        Scanner str=new Scanner(System.in);
        //inputs
        String s=str.nextLine();
        String t=str.nextLine();

        boolean anagram=false;
        if(s.length()!=t.length()) anagram=false;
        else {
            char sarr[]=new char[s.length()];
            int[] sarr_count=new int[s.length()];
            char tarr[]=new char[s.length()];
            int[] tarr_count=new int[s.length()];
            int ends=0;

            for(int i=0;i<s.length();i++) {
                int ind=check_present(s.charAt(i),sarr);
                if(ind==-1) {
                    sarr[ends]=s.charAt(i);
                    sarr_count[ends]=1;
                    ends++;
                }
                else {
                    sarr_count[ind]++;
                }
            }

            ends=0;
            for(int i=0;i<s.length();i++) {
                int ind=check_present(t.charAt(i),tarr);
                if(ind==-1) {
                    tarr[ends]=t.charAt(i);
                    tarr_count[ends]=1;
                    ends++;
                }
                else {
                    tarr_count[ind]++;
                }
            }

            for(int i=0;i<s.length();i++) {
                int j=0;
                while(j<s.length() && sarr[i]!=tarr[j]) j++;
                if(sarr_count[i]==tarr_count[j]) anagram=true;
                else anagram=false;
            }
        }
        System.out.println(anagram);
    }
}
```

## Submission at 2024-10-04 05:48:14


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static int check_present(char c,char arr[]) {
        boolean is_present;
        int ind=-1;
        for(int i=0;i<arr.length;i++) {
            if(c==arr[i]) {
                is_present=true;
                ind=i;
                break;
            }
        }
        return ind;
    }

    public static void main(String args[]) {
        Scanner str=new Scanner(System.in);
        //inputs
        String s=str.nextLine();
        String t=str.nextLine();

        boolean anagram=false;
        if(s.length()!=t.length()) anagram=false;
        else {
            char sarr[]=new char[s.length()];
            int[] sarr_count=new int[s.length()];
            char tarr[]=new char[s.length()];
            int[] tarr_count=new int[s.length()];
            int ends=0;

            for(int i=0;i<s.length();i++) {
                int ind=check_present(s.charAt(i),sarr);
                if(ind==-1) {
                    sarr[ends]=s.charAt(i);
                    sarr_count[ends]=1;
                    ends++;
                }
                else {
                    sarr_count[ind]++;
                }
            }

            ends=0;
            for(int i=0;i<s.length();i++) {
                int ind=check_present(t.charAt(i),tarr);
                if(ind==-1) {
                    tarr[ends]=t.charAt(i);
                    tarr_count[ends]=1;
                    ends++;
                }
                else {
                    tarr_count[ind]++;
                }
            }

            for(int i=0;i<s.length();i++) {
                int j=0;
                while(j<s.length() && sarr[i]!=tarr[j]) j++;
                if(sarr_count[i]==tarr_count[j]) anagram=true;
                else anagram=false;
            }
        }
        System.out.println(anagram);
    }
}
```

## Submission at 2024-10-04 05:48:15


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static int check_present(char c,char arr[]) {
        boolean is_present;
        int ind=-1;
        for(int i=0;i<arr.length;i++) {
            if(c==arr[i]) {
                is_present=true;
                ind=i;
                break;
            }
        }
        return ind;
    }

    public static void main(String args[]) {
        Scanner str=new Scanner(System.in);
        //inputs
        String s=str.nextLine();
        String t=str.nextLine();

        boolean anagram=false;
        if(s.length()!=t.length()) anagram=false;
        else {
            char sarr[]=new char[s.length()];
            int[] sarr_count=new int[s.length()];
            char tarr[]=new char[s.length()];
            int[] tarr_count=new int[s.length()];
            int ends=0;

            for(int i=0;i<s.length();i++) {
                int ind=check_present(s.charAt(i),sarr);
                if(ind==-1) {
                    sarr[ends]=s.charAt(i);
                    sarr_count[ends]=1;
                    ends++;
                }
                else {
                    sarr_count[ind]++;
                }
            }

            ends=0;
            for(int i=0;i<s.length();i++) {
                int ind=check_present(t.charAt(i),tarr);
                if(ind==-1) {
                    tarr[ends]=t.charAt(i);
                    tarr_count[ends]=1;
                    ends++;
                }
                else {
                    tarr_count[ind]++;
                }
            }

            for(int i=0;i<s.length();i++) {
                int j=0;
                while(j<s.length() && sarr[i]!=tarr[j]) j++;
                if(sarr_count[i]==tarr_count[j]) anagram=true;
                else anagram=false;
            }
        }
        System.out.println(anagram);
    }
}
```

## Submission at 2024-10-04 05:55:30


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 05:55:32


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 05:55:34


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 05:56:30


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 05:57:48


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n])
    }
}
```

## Submission at 2024-10-04 05:57:49


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n])
    }
}
```

## Submission at 2024-10-04 05:58:01


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n]);
    }
}
```

## Submission at 2024-10-04 05:58:48


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n]);
    }
}
```

## Submission at 2024-10-04 05:58:53


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n]);
    }
}
```

## Submission at 2024-10-04 05:58:53


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n]);
    }
}
```

## Submission at 2024-10-04 05:58:54


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n]);
    }
}
```

## Submission at 2024-10-04 05:58:54


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n]);
    }
}
```

## Submission at 2024-10-04 05:59:59


```
// Write Java code from scratch
import java.util.Scanner;
class Main 
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];

        for(int i=0;i<n;i++) answer[i]=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i]) answer[i]++;
            }
        }

        for(int i=0;i<n-1;i++) {
            System.out.print(answer[i]+" ");
        }
        System.out.print(answer[n-1]);
    }
}
```

## Submission at 2024-10-04 06:10:15


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i])
                    answer[i]++;
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 06:10:15


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]>temperatures[i])
                    answer[i]++;
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 06:13:22


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                answer[i]++
                if(temperatures[j]>temperatures[i]) {
                    break;
                }
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 06:14:02


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                answer[i]++;
                if(temperatures[j]>temperatures[i]) {
                    break;
                }
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 06:15:06


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                answer[i]++;
                if(temperatures[j]>temperatures[i]) {
                    break;
                }
            }
        }

        for(int i=0;i<n;i++) System.out.print(answer[i]+" ");
    }
}
```

## Submission at 2024-10-04 06:18:28


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]<temperatures[i]) {
                    answer[i]++;
                }
                else break;
            }
        }

        for(int i=0;i<n-1;i++) System.out.print(answer[i]+" ");
        System.out.print(answer[n-1]);
    }
}
```

## Submission at 2024-10-04 06:19:45


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(temperatures[j]<=temperatures[i]) {
                    answer[i]++;
                }
                else break;
            }
        }

        for(int i=0;i<n-1;i++) System.out.print(answer[i]+1+" ");
        System.out.print(answer[n-1]+1);
    }
}
```

## Submission at 2024-10-04 06:20:41


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(temperatures[j]<=temperatures[i]) {
                    answer[i]++;
                }
                else break;
            }
        }

        for(int i=0;i<n-1;i++) System.out.print(answer[i]+1+" ");
        System.out.print(0);
    }
}
```

## Submission at 2024-10-04 06:27:01


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        int tmax=temperatures[0];
        for(int i=0;i<n;i++) {
            if(temperatures[i]>tmax) {
                tmax=temperatures[i];
            }
        }

        for(int i=0;i<n-1;i++) {
            if(temperatures[i]!=tmax) {
                    for(int j=i+1;j<n;j++) {
                    if(temperatures[j]<=temperatures[i]) {
                        answer[i]++;
                    }
                    else break;
                }
            }
        }

        for(int i=0;i<n-1;i++) System.out.print(answer[i]+1+" ");
        System.out.print(0);
    }
}
```

## Submission at 2024-10-04 06:29:31


```
// Write Java code from scratch
import java.util.Scanner;
class Main
{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int temperatures[]=new int[n];
        int answer[]=new int[n];
        for(int i=0;i<n;i++) {
            temperatures[i]=s.nextInt();
        }

        int tmax=temperatures[0];
        for(int i=0;i<n;i++) {
            if(temperatures[i]>tmax) {
                tmax=temperatures[i];
            }
        }

        for(int i=0;i<n-1;i++) {
            if(temperatures[i]!=tmax) {
                    for(int j=i+1;j<n;j++) {
                    if(temperatures[j]<=temperatures[i]) {
                        answer[i]++;
                    }
                    else break;
                }
            }
        }

        for(int i=0;i<n-1;i++) {
            if(temperatures[i]==tmax) System.outprint(0+" ");
            else System.out.print(answer[i]+1+" ");
        }
        System.out.print(0);
    }
}
```

## Submission at 2024-10-25 05:32:53


```
/* write code from scratch  */ 
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Character,Integer> map1=new HashMap<>();
        HashMap<Character,Integer> map2=new HashMap<>();
        String ransomNote=s.nextLine();
        String magazine=s.nextLine();
        for(int i=0;i<ransomNote.length();i++) {
            if(!map1.containsKey(ransomNote.charAt(i))) {
                map1.put(ransomNote.charAt(i),0);
            }
            map1.replace(ransomNote.charAt(i),map1.get(ransomNote.charAt(i))+1);
        }

        for(int i=0;i<magazine.length();i++) {
            if(!map2.containsKey(magazine.charAt(i))) {
                map2.put(magazine.charAt(i),0);
            }
            map2.replace(magazine.charAt(i),map2.get(magazine.charAt(i))+1);
        }
        System.out.println(map1.equals(map2));
    }
}
```

## Submission at 2024-10-25 05:49:13


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
import java.util.ArrayList;
class Tree
{
  static ArrayList<Integer> list=new ArrayList<>();
  public static void rec(Node tmp) {
    if(tmp==null) return;
    else {
      rec(tmp.left);
      rec(tmp.right);
    }
    list.append(tmp.data);
    return;
  }
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       rec(root);
       return list;
    }
}
```

## Submission at 2024-10-25 06:10:09


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
        // code here
        String str="";
        String str2="";
        Node tmp1=num1;
        int c1=0;
        while(tmp1!=null){
            str=""+tmp1.data+str;
            c1++;
        }
        Node tmp2=num2;
        int c2=0;
        while(tmp2!=null){
            str2=""+tmp1.data+str2;
            c2++;
        }
        int n1=Integer.parseInt(str);
        int n2=Integer.parseInt(str2);
        int sum=n1+n2;
        Node tmp;
        int maxl=c2;;
        if(c1>=c2) {
            tmp=num1;
            maxl=c1;
        }
        else tmp=num2;
        while(tmp!=null) {
            double d=sum/Math.pow(10,maxl);
            tmp.data=(int)d;
            maxl--;
        }
        return tmp;
        // return head of sum list
    }
}
```

## Submission at 2024-10-25 06:18:45


```
/* write code from scratch */
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String pattern=s.nextLine();
        String[] str=new String[pattern.length()];
        for(int i=0;i<pattern.length();i++) {
            str[i]=s.next();
        }
        HashMap<Character,String> map=new HashMap<>();
        for(int i=0;i<pattern.length();i++) {
            if(!map.containsKey(patter.charAt(i))) {
                map.put()
            }
        }
    }
}
```

## Submission at 2024-10-25 06:23:48


```
/* write code from scratch */
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String pattern=s.nextLine();
        String[] str=new String[pattern.length()];
        for(int i=0;i<pattern.length();i++) {
            str[i]=s.next();
        }
        HashMap<Character,String> map=new HashMap<>();
        boolean b=true;
        for(int i=0;i<pattern.length();i++) {
            if(!map.containsKey(pattern.charAt(i))) {
                map.put(pattern.charAt(i),str[i]);
            }
            if(!map.get(pattern.charAt(i)).equals(str[i])) b=false;
        }
        System.out.println(b);
    }
}
```

## Submission at 2024-10-25 06:24:22


```
/* write code from scratch */
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String pattern=s.nextLine();
        String[] str=new String[pattern.length()];
        for(int i=0;i<pattern.length();i++) {
            str[i]=s.next();
        }
        HashMap<Character,String> map=new HashMap<>();
        boolean b=true;
        for(int i=0;i<pattern.length();i++) {
            if(!map.containsKey(pattern.charAt(i))) {
                map.put(pattern.charAt(i),str[i]);
            }
            if(!map.get(pattern.charAt(i)).equals(str[i])) b=false;
        }
        System.out.println(b);
    }
}
```

## Submission at 2024-10-25 06:24:56


```
/* write code from scratch */
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        String pattern=s.nextLine();
        String[] str=new String[pattern.length()];
        for(int i=0;i<pattern.length();i++) {
            str[i]=s.next();
        }
        HashMap<Character,String> map=new HashMap<>();
        boolean b=true;
        for(int i=0;i<pattern.length();i++) {
            if(!map.containsKey(pattern.charAt(i))) {
                map.put(pattern.charAt(i),str[i]);
            }
            if(!map.get(pattern.charAt(i)).equals(str[i])) b=false;
        }
        System.out.println(b);
    }
}
```

## Submission at 2024-10-25 06:32:25


```
/* write code from scratch  */ 
/* write code from scratch  */ 
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Character,Integer> map1=new HashMap<>();
        HashMap<Character,Integer> map2=new HashMap<>();
        String ransomNote=s.nextLine();
        String magazine=s.nextLine();
        for(int i=0;i<ransomNote.length();i++) {
            if(!map1.containsKey(ransomNote.charAt(i))) {
                map1.put(ransomNote.charAt(i),0);
            }
            map1.replace(ransomNote.charAt(i),map1.get(ransomNote.charAt(i))+1);
        }

        for(int i=0;i<magazine.length();i++) {
            if(!map2.containsKey(magazine.charAt(i))) {
                map2.put(magazine.charAt(i),0);
            }
            map2.replace(magazine.charAt(i),map2.get(magazine.charAt(i))+1);
        }
        System.out.println(map1.equals(map2));
    }
}
```

## Submission at 2024-10-25 06:36:52


```
/* write code from scratch  */ 
/* write code from scratch  */ 
import java.util.*;
class Main {
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Character,Integer> map1=new HashMap<>();
        HashMap<Character,Integer> map2=new HashMap<>();
        String ransomNote=s.nextLine();
        String magazine=s.nextLine();
        for(int i=0;i<ransomNote.length();i++) {
            if(!map1.containsKey(ransomNote.charAt(i))) {
                map1.put(ransomNote.charAt(i),0);
            }
            map1.replace(ransomNote.charAt(i),map1.get(ransomNote.charAt(i))+1);
        }

        for(int i=0;i<magazine.length();i++) {
            if(!map2.containsKey(magazine.charAt(i))) {
                map2.put(magazine.charAt(i),0);
            }
            map2.replace(magazine.charAt(i),map2.get(magazine.charAt(i))+1);
        }
        boolean b=true;
        for(int i=0;i<ransomNote.length();i++) {
            if(map1.get(ransomNote.charAt(i))>map2.get(ransomNote.charAt(i))) b=false;
        }
        System.out.println(b);
    }
}
```

## Submission at 2024-10-25 06:40:42


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
  static ArrayList<Integer> list=new ArrayList<>();
    public static void rec(Node tmp) {
    if(tmp==null) return;
    else {
      rec(tmp.left);
      rec(tmp.right);
    }
    list.append(tmp.data);
    return;
  }
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       rec(root);
       return list;
    }
}
```

## Submission at 2024-10-25 06:57:55


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
    static Node head=null;
    static void create(int data) {
        Node node=new Node(data);
        if(head==null) head=node;
        else {
            node.next=head;
            head=node;
        }
    }
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        Node tmp1=num1;
        Node tmp2=num2;
        int l1=0;
        String s1="";
        String s2="";
        int l2=0;
        while(tmp1!=null) {
            s1=tmp1.data+"";
            tmp1=tmp1.next;
            l1++;
        }
        while(tmp2!=null) {
            s2=tmp2.data+"";
            tmp2=tmp2.next;
            l2++;
        }
        int sum=Integer.parseInt(s1)+Integer.parseInt(s2);
        for(int i=1;i<=Math.max(l1,l2);i++) {
            int n=sum%Math.max(10,i);
            create(n);
            n=n/10;
        }
        return head;
        // return head of sum list
    }
}
```

## Submission at 2024-10-25 07:00:15


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
    static Node head=null;
    static void create(int data) {
        Node node=new Node(data);
        if(head==null) head=node;
        else {
            node.next=head;
            head=node;
        }
    }
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        Node tmp1=num1;
        Node tmp2=num2;
        int l1=0;
        String s1="";
        String s2="";
        int l2=0;
        while(tmp1!=null) {
            s1=tmp1.data+s1;
            tmp1=tmp1.next;
            l1++;
        }
        while(tmp2!=null) {
            s2=tmp2.data+s2;
            tmp2=tmp2.next;
            l2++;
        }
        int sum=Integer.parseInt(s1)+Integer.parseInt(s2);
        for(int i=1;i<=Math.max(l1,l2);i++) {
            int n=sum%Math.max(10,i);
            create(n);
            n=n/10;
        }
        return head;
        // return head of sum list
    }
}
```

## Submission at 2024-10-25 07:01:15


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
    static Node head=null;
    static void create(int data) {
        Node node=new Node(data);
        if(head==null) head=node;
        else {
            node.next=head;
            head=node;
        }
    }
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        Node tmp1=num1;
        Node tmp2=num2;
        int l1=0;
        String s1="";
        String s2="";
        int l2=0;
        while(tmp1!=null) {
            s1=""+tmp1.data+s1;
            tmp1=tmp1.next;
            l1++;
        }
        while(tmp2!=null) {
            s2=""+tmp2.data+s2;
            tmp2=tmp2.next;
            l2++;
        }
        int sum=Integer.parseInt(s1)+Integer.parseInt(s2);
        for(int i=1;i<=Math.max(l1,l2);i++) {
            int n=sum%Math.max(10,i);
            create(n);
            n=n/10;
        }
        return head;
        // return head of sum list
    }
}
```

## Submission at 2024-11-22 05:01:40


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        int b=s.nextInt();
        System.out.println(b-a);
    }
}
```

## Submission at 2024-11-22 05:05:43


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int sum=0;
        for(int i=0;i<n;i++) {
            sum+=s.nextInt();
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:12:12


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<2*n-1;i++) {
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:15:15


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
        for(int i=n-1;i>0;i--) {
            for(int j=0;j>0;j--){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:15:30


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
        for(int i=n-1;i>0;i--) {
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:17:35


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
        for(int i=n-1;i>0;i--) {
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:19:18


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        for(int i=0;i<n;i++) {
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println("");
        }
        for(int i=n-1;i>0;i--) {
            for(int j=i;j>0;j--){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:30:40


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int m=s.nextInt();
        int n=s.nextInt();
        int d=s.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        int ans=0;

        for(int i=0;i<m;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            arr2[i]=s.nextInt();
        }

        for(int i=0;i<m;i++){
            boolean b=true;
            for(int j=0;j<n;j++) {
                if(Math.mod(arr1[i]-arr2[j])<d) {
                    b=false;
                }
            }
            if(b) ans++;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:31:18


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int m=s.nextInt();
        int n=s.nextInt();
        int d=s.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        int ans=0;

        for(int i=0;i<m;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            arr2[i]=s.nextInt();
        }

        for(int i=0;i<m;i++){
            boolean b=true;
            for(int j=0;j<n;j++) {
                if(Math.mod(arr1[i]-arr2[j])<=d) {
                    b=false;
                }
            }
            if(b) ans++;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:34:25


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int m=s.nextInt();
        int n=s.nextInt();
        int d=s.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        int ans=0;

        for(int i=0;i<m;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            arr2[i]=s.nextInt();
        }

        for(int i=0;i<m;i++){
            boolean b=true;
            for(int j=0;j<n;j++) {
                if(Math.mod(arr1[i]-arr2[j])<=d) {
                    b=false;
                }
            }
            if(b) ans++;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:34:25


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int m=s.nextInt();
        int n=s.nextInt();
        int d=s.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        int ans=0;

        for(int i=0;i<m;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            arr2[i]=s.nextInt();
        }

        for(int i=0;i<m;i++){
            boolean b=true;
            for(int j=0;j<n;j++) {
                if(Math.mod(arr1[i]-arr2[j])<=d) {
                    b=false;
                }
            }
            if(b) ans++;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:34:39


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int m=s.nextInt();
        int n=s.nextInt();
        int d=s.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        int ans=0;

        for(int i=0;i<m;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            arr2[i]=s.nextInt();
        }

        for(int i=0;i<m;i++){
            boolean b=true;
            for(int j=0;j<n;j++) {
                if(Math.mod(arr1[i]-arr2[j])<=d) {
                    b=false;
                }
            }
            if(b) ans++;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:35:43


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int m=s.nextInt();
        int n=s.nextInt();
        int d=s.nextInt();
        int arr1[]=new int[m];
        int arr2[]=new int[n];
        int ans=0;

        for(int i=0;i<m;i++) {
            arr1[i]=s.nextInt();
        }
        for(int i=0;i<n;i++) {
            arr2[i]=s.nextInt();
        }

        for(int i=0;i<m;i++){
            boolean b=true;
            for(int j=0;j<n;j++) {
                int a=arr1[i]-arr2[j];
                if(a<0) a=-a;
                if(a<=d) {
                    b=false;
                }
            }
            if(b) ans++;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:47:16


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        HashMap<Integer,Integer> map=new HashMap<>();
        int ans=0;

        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.getValue(a[i])+1);
        }

        for(int i : map.valueSet()) {
            ans=ans+(int)i/2;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:50:53


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        HashMap<Integer,Integer> map=new HashMap<>();
        int ans=0;

        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        for(int i : map.keySet()) {
            int num=map.get(i);
            ans=ans+(int)num/2;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:50:55


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        HashMap<Integer,Integer> map=new HashMap<>();
        int ans=0;

        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        for(int i : map.keySet()) {
            int num=map.get(i);
            ans=ans+(int)num/2;
        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 06:01:43


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
    public boolean isBST(Node root,int a,boolean c)
    {
        // add your code here;
        boolean b=true;
        if(root.left!=null) {
            if(root.data>a) b=false;
            isBST(root.left,root.data);
        }
        if(root.right!=null) {
            if(root.data<a) b=false;
            isBST(root.right,root.data);
        }
        if(c && b) return true;
        else return false;
    }
}
```

## Submission at 2024-11-22 06:01:54


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
    public boolean isBST(Node root,int a,boolean c)
    {
        // add your code here;
        boolean b=true;
        if(root.left!=null) {
            if(root.data>a) b=false;
            isBST(root.left,root.data,b);
        }
        if(root.right!=null) {
            if(root.data<a) b=false;
            isBST(root.right,root.data,b);
        }
        if(c && b) return true;
        else return false;
    }
}
```

## Submission at 2024-11-22 06:05:38


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
    public boolean isBST(Node root,int a,boolean c)
    {
        // add your code here;
        boolean b=true;
        if(root.left!=null) {
            if(root.data>a) b=false;
            isBST(root.left,root.data,b);
        }
        if(root.right!=null) {
            if(root.data<a) b=false;
            isBST(root.right,root.data,b);
        }
        if(c && b) return true;
        return false;
    }
}
```

## Submission at 2024-11-22 06:11:20


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
        Node tmp=head;
        while(tmp.next!=null){
            if(tmp.data==tmp.next.data) tmp.next=tmp.next.next;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
    }
}
```

## Submission at 2024-11-22 06:11:58


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
        Node tmp=head;
        while(tmp.next!=null){
            if(tmp.data==tmp.next.data) tmp.next=tmp.next.next;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-11-22 06:13:55


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
        Node tmp=head;
        while(tmp.next!=null){
            if(tmp.data==tmp.next.data) tmp.next=tmp.next.next;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-11-22 06:16:09


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
        Node tmp=head;
        while(tmp.next!=null){
            if(tmp.data==tmp.next.data) tmp.next=tmp.next.next;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-11-22 06:28:21


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Integer,Integer> map=new HashMap<>();
        int n=s.nextInt();
        int a[]=new int[n];
        int minnum,minfreq;
        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        minfreq=map.get(a[i]);
        minnum=a[i];
        for(int i:map.keySet()){
            if(map.get(i)<minfreq) {
                minfreq=map.get(i);
                minnum=i;
            }
            else if(map.get(i)==minfreq) {
                if(i<minnum) minnum=i;
            }
        }
        System.out.println(minnum);
    }
}
```

## Submission at 2024-11-22 06:29:53


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Integer,Integer> map=new HashMap<>();
        int n=s.nextInt();
        int a[]=new int[n];
        int minnum,minfreq;
        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        minfreq=map.get(a[0]);
        minnum=a[0];
        for(int i:map.keySet()){
            if(map.get(i)<minfreq) {
                minfreq=map.get(i);
                minnum=i;
            }
            else if(map.get(i)==minfreq) {
                if(i<minnum) minnum=i;
            }
        }
        System.out.println(minnum);
    }
}
```

## Submission at 2024-11-22 06:30:07


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Integer,Integer> map=new HashMap<>();
        int n=s.nextInt();
        int a[]=new int[n];
        int minnum,minfreq;
        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        minfreq=map.get(a[0]);
        minnum=a[0];
        for(int i:map.keySet()){
            if(map.get(i)<minfreq) {
                minfreq=map.get(i);
                minnum=i;
            }
            else if(map.get(i)==minfreq) {
                if(i<minnum) minnum=i;
            }
        }
        System.out.println(minnum);
    }
}
```

## Submission at 2024-11-22 06:32:25


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Integer,Integer> map=new HashMap<>();
        int n=s.nextInt();
        int a[]=new int[n];
        int minnum,minfreq;
        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        minfreq=map.get(a[0]);
        minnum=a[0];
        for(int i=1;i<n;i++){
            if(map.get(a[i])<minfreq) {
                minfreq=map.get(a[i]);
                minnum=a[i];
            }
            else if(map.get(a[i])==minfreq) {
                if(a[i]<minnum) minnum=a[i];
            }
        }
        System.out.println(minnum);
    }
}
```

## Submission at 2024-11-22 06:41:56


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
        Node tmp=head;
        while(tmp.next!=null){
            Node tmp2=tmp.next;
            while(tmp2!=null || tmp2.data==tmp.data){
                tmp2=tmp2.next;
            }
            tmp.next=tmp2.next;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-11-22 06:46:12


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
		Node tmp=head;
        while(tmp.next!=null){
            Node tmp2=tmp.next;
            while(tmp2!=null && tmp2.data==tmp.data){
                tmp2=tmp2.next;
            }
            tmp.next=tmp2;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-11-22 06:47:30


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
		Node tmp=head;
        while(tmp.next!=null){
            Node tmp2=tmp.next;
            while(tmp2!=null && tmp2.data==tmp.data){
                tmp2=tmp2.next;
            }
            tmp.next=tmp2;
            if(tmp.next!=null){
                tmp=tmp.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-11-22 06:58:10


```
/* write code from scratch */
import java.util.*;
class Main{
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        HashMap<Integer,Integer> map=new HashMap<>();
        int n=s.nextInt();
        int a[]=new int[n];
        int minnum,minfreq;
        for(int i=0;i<n;i++) {
            a[i]=s.nextInt();
            if(!map.containsKey(a[i])) map.put(a[i],0);
            map.put(a[i],map.get(a[i])+1);
        }

        minfreq=map.get(a[0]);
        minnum=a[0];
        for(int i:map.keySet()){
            int freq=map.get(i);
            if(freq<minfreq) {
                minfreq=freq;
                minnum=i;
            }
            else if(freq==minfreq) {
                if(i<minnum) minnum=i;
            }
        }
        System.out.println(minnum);
    }
}
```

