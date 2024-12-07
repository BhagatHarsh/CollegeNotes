## Submission at 2024-08-05 10:19:32


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:20:00


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:26:48


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-05 10:27:29


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-12 09:52:16


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
        int fibxm1 = fibonacci(x-1);
        int fibx = fibxm1+(x-2);
        return fibx;
    }
}

```

## Submission at 2024-08-12 09:53:54


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
        else if(x==1){
            return 1;
        }
        int fibxm1 = fibonacci(x-1);
        int fibx = fibxm1+(x-2);
        return fibx;
    }
}

```

## Submission at 2024-08-12 09:55:12


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
        else if(x==1){
            return 1;
        }
        int fibxm1 = fibonacci(x-1);
        int fibxm2 = fibonacci(x-2);
        int fibx = fibxm1+fibxm2;
        return fibx;
    }
}

```

## Submission at 2024-08-12 10:00:22


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
        if(n == 2){
            return true;
        }
        int pot1 = n/2;
        boolean x = isPowerOfTwo(pot1);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:02:30


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
        if(n == 2){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:06:45


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
        if(n == 2){
            return true;
        }
        if(n%2 != 0){
            return false;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:07:36


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
        if(n == 2){
            return true;
        }
        else if(n%2 != 0){
            return false;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:09:41


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
        if(n%2 != 0){
            return false;
        }
        else if(n==2){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:10:53


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
        if(n%2 != 0){
            return false;
        }
        else if(n==2){
            return true;
        }
        else if(n==0){
            return false;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:11:35


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
        if(n%2 != 0){
            return false;
        }
        else if(n==2){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:14:45


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
        if(n%2 != 0){
            return false;
        }
        else if(n==2){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:16:04


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
        if(n%2 != 0){
            return false;
        }
        else if(n==2){
            return true;
        }
        int m = n/2;
        boolean x = isPowerOfTwo(m);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:17:50


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
        if(n%2 != 0 || n==0){
            return false;
        }
        else if(n==2){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:18:47


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
        if(n%2 != 0 || n==0){
            return false;
        }
        else if(n==2 || n==4){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x;
        
    }
}

```

## Submission at 2024-08-12 10:20:47


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
        if(n%2 != 0 || n==0){
            return false;
        }
        else if(n==2){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x && (n%2==0);
        
    }
}

```

## Submission at 2024-08-12 10:21:37


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
        if(n%2 != 0 || n==0){
            return false;
        }
        else if(n==1){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x && (n%2==0);
        
    }
}

```

## Submission at 2024-08-12 10:22:49


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
        if(n<=0){
            return false;
        }
        else if(n==1){
            return true;
        }
        boolean x = isPowerOfTwo(n/2);
        return x && (n%2==0);
        
    }
}

```

## Submission at 2024-08-20 04:28:49


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
        List<Integer> comb = new ArrayList<>();

        backtrack(n, k, 1, comb, res);

        return res;
    }

    private static void backtrack(int n, int k, int start, List<Integer> comb, List<List<Integer>> res) {
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }

        for (int i = start; i <= n; i++) {
            comb.add(i);
            backtrack(n, k, i + 1, comb, res);
            comb.remove(comb.size() - 1);
        }
    }
}

```

## Submission at 2024-08-20 04:30:25


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int nums[] = new int[3];
        for(int i=0;i<nums.length;i++){
            int n = input.nextInt();
            nums[i] = n;
        }
        System.out.println(permute(nums));
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.length; i++) {
            if (tempList.contains(nums[i]))
                continue;
            tempList.add(nums[i]);
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 04:32:15


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int nums[] = new int[3];
        for(int i=0;i<nums.length;i++){
            int n = input.nextInt();
            nums[i] = n;
        }
        System.out.println(permute(nums));
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.length; i++) {
            if (tempList.contains(nums[i])){
                continue;
            }
            tempList.add(nums[i]);
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 04:34:34


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int nums[] = new int[3];
        for(int i=0;i<nums.length;i++){
            int n = input.nextInt();
            nums[i] = n;
        }
        System.out.println(permute(nums));
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.length; i++) {
            if (tempList.contains(nums[i]))
                continue;
            tempList.add(nums[i]);
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 04:35:33


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int nums[] = new int[6];
        for(int i=0;i<nums.length;i++){
            int n = input.nextInt();
            nums[i] = n;
        }
        System.out.println(permute(nums));
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.length; i++) {
            if (tempList.contains(nums[i]))
                continue;
            tempList.add(nums[i]);
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 04:57:44


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        
        // Parse input into an ArrayList
        ArrayList<Integer> nums = new ArrayList<>();
        for (String s : str.split(" ")) {
            nums.add(Integer.parseInt(s));
        }
        System.out.println(permute(nums));
    }

    public static List<List<Integer>> permute(List<Integer> nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, List<Integer> nums) {
        if (tempList.size() == nums.size()) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (tempList.contains(nums.get(i)))
                continue;
            tempList.add(nums.get(i));
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 08:22:25


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

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
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();
        Arrays.sort(nums);
        backtrack(list, new ArrayList<>(), nums, 0);
        return list;
    }


    private static void backtrack(List<List<Integer>> list , List<Integer> tempList, int [] nums, int start){
        list.add(new ArrayList<>(tempList));
        for(int i = start; i < nums.length; i++){
            tempList.add(nums[i]);
            backtrack(list, tempList, nums, i + 1);
            tempList.remove(tempList.size() - 1);
        }
    }

}

```

## Submission at 2024-08-20 08:34:44


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(generateParenthesis(num));
    }
    public static List<String> generateParenthesis(int num) {
        List<String> result = new ArrayList<String>();
        recurse(result, 0, 0, "", num);
        return result;
    }
    
    public static void recurse(List<String> result, int l, int r, String s, int num) {
        if (s.length() == num * 2) {
            result.add(s);
            return;
        }
        
        if (l < num) {
            recurse(result, l + 1, r, s + "(", num);
        }
        
        if (r < l) {
            recurse(result, l, r + 1, s + ")", num);
        }
    }
}

```

## Submission at 2024-08-20 08:37:35


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(generateParenthesis(num));
    }
    public static List<String> generateParenthesis(int num) {
        List<String> result = new ArrayList<String>();
        recurse(result, 0, 0, "", num);
        return result;
    }
    
    public static void recurse(List<String> result, int l, int r, String s, int num) {
        if (s.length() == num * 2) {
            result.add('"'+s+'"');
            return;
        }
        
        if (l < num) {
            recurse(result, l + 1, r, s + "(", num);
        }
        
        if (r < l) {
            recurse(result, l, r + 1, s + ")", num);
        }
    }
}

```

## Submission at 2024-08-20 08:48:49


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        List<String> ans = generateParenthesis(num);
        System.out.print("[");
        for (int i=0; i<ans.size(); i++) {
            System.out.print('\"');
            System.out.print(ans.get(i));
            System.out.print('\"');
        }
        System.out.print("]");
    }
    public static List<String> generateParenthesis(int num) {
        List<String> result = new ArrayList<String>();
        recurse(result, 0, 0, "", num);
        return result;
    }
    
    public static void recurse(List<String> result, int l, int r, String s, int num) {
        if (s.length() == num * 2) {
            result.add(s);
            return;
        }
        
        if (l < num) {
            recurse(result, l + 1, r, s + "(", num);
        }
        
        if (r < l) {
            recurse(result, l, r + 1, s + ")", num);
        }
    }
}

```

## Submission at 2024-08-20 08:51:48


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        List<String> ans = generateParenthesis(num);
        System.out.print("[");
        for (int i=0; i<ans.size(); i++) {
            System.out.print('\"');
            System.out.print(ans.get(i));
            System.out.print('\"'+",");
        }
        System.out.print("]");
    }
    public static List<String> generateParenthesis(int num) {
        List<String> result = new ArrayList<String>();
        recurse(result, 0, 0, "", num);
        return result;
    }
    
    public static void recurse(List<String> result, int l, int r, String s, int num) {
        if (s.length() == num * 2) {
            result.add(s);
            return;
        }
        
        if (l < num) {
            recurse(result, l + 1, r, s + "(", num);
        }
        
        if (r < l) {
            recurse(result, l, r + 1, s + ")", num);
        }
    }
}

```

## Submission at 2024-08-20 08:53:17


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        List<String> ans = generateParenthesis(num);
        System.out.print("[");
        for (int i=0; i<ans.size(); i++) {
            System.out.print('\"');
            System.out.print(ans.get(i));
            System.out.print('\"');
            if(i!=ans.size()-1){
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
    public static List<String> generateParenthesis(int num) {
        List<String> result = new ArrayList<String>();
        recurse(result, 0, 0, "", num);
        return result;
    }
    
    public static void recurse(List<String> result, int l, int r, String s, int num) {
        if (s.length() == num * 2) {
            result.add(s);
            return;
        }
        
        if (l < num) {
            recurse(result, l + 1, r, s + "(", num);
        }
        
        if (r < l) {
            recurse(result, l, r + 1, s + ")", num);
        }
    }
}

```

## Submission at 2024-08-20 08:55:14


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        
        // Parse input into an ArrayList
        ArrayList<Integer> nums = new ArrayList<>();
        for (String s : str.split(" ")) {
            nums.add(Integer.parseInt(s));
        }
        System.out.println(permute(nums));
    }

    public static List<List<Integer>> permute(List<Integer> nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, List<Integer> nums) {
        if (tempList.size() == nums.size()) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (tempList.contains(nums.get(i)))
                continue;
            tempList.add(nums.get(i));
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 09:01:38


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        
        // Parse input into an ArrayList
        ArrayList<Integer> nums = new ArrayList<>();
        for (String s : str.split(" ")) {
            nums.add(Integer.parseInt(s));
        }
        List<List<Integer>> ans = new ArrayList<>(permute(nums));
        System.out.print("[");
        for(int i=0;i<ans.size();i++){
            System.out.print(ans.get(i));
            if(i !=ans.size()-1){
                System.out.print(",");
            }
        }
        System.out.print("]");

    }

    public static List<List<Integer>> permute(List<Integer> nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, List<Integer> nums) {
        if (tempList.size() == nums.size()) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (tempList.contains(nums.get(i)))
                continue;
            tempList.add(nums.get(i));
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 09:05:54


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        
        // Parse input into an ArrayList
        ArrayList<Integer> nums = new ArrayList<>();
        for (String s : str.split(" ")) {
            nums.add(Integer.parseInt(s));
        }
        List<List<Integer>> ans = new ArrayList<>(permute(nums));
        System.out.print("[");
        for(int i=0;i<ans.size();i++){
            System.out.print(ans.get(i));
            if(i != (ans.size()-1)){
                System.out.print(",");
            }
        }
        System.out.print("]");

    }

    public static List<List<Integer>> permute(List<Integer> nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, List<Integer> nums) {
        if (tempList.size() == nums.size()) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (tempList.contains(nums.get(i)))
                continue;
            tempList.add(nums.get(i));
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 09:39:05


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        
        ArrayList<Integer> nums = new ArrayList<>();
        for (String s : str.split(" ")) {
            nums.add(Integer.parseInt(s));
        }
        List<List<Integer>> res = new ArrayList<>(permute(nums));
        System.out.print("[");
        for(int i=0;i<res.size();i++){
            System.out.print("[");
            for(int j=0;j<res.get(i).size();j++){
                System.out.print(res.get(i).get(j));
                if(j!=res.get(i).size()-1){
                    System.out.print(",");
                }
                
            }
            System.out.print("]");
            if(i!=res.size()-1){
                System.out.print(",");
            }
        }
        System.out.print("]");
        

    }

    public static List<List<Integer>> permute(List<Integer> nums) {
        List<List<Integer>> list = new ArrayList<>();
        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    public static void backtrack(List<List<Integer>> list, List<Integer> tempList, List<Integer> nums) {
        if (tempList.size() == nums.size()) {
            list.add(new ArrayList<>(tempList));
        }
        for (int i = 0; i < nums.size(); i++) {
            if (tempList.contains(nums.get(i)))
                continue;
            tempList.add(nums.get(i));
            backtrack(list, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }

    }
}

```

## Submission at 2024-08-20 10:02:16


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

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
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
    List<List<Integer>> ans = new ArrayList<>();
    Arrays.sort(nums);
    backtrack(ans, new ArrayList<>(), nums, 0);
    return ans;
}

private static void backtrack(List<List<Integer>> ans, List<Integer> temp, int [] nums, int start){
    ans.add(new ArrayList<>(temp));
    for(int i = start; i < nums.length; i++){
        temp.add(nums[i]);
        backtrack(ans, temp, nums, i + 1);
        temp.remove(temp.size() - 1);
    }
}
}

```

## Submission at 2024-09-02 09:17:17


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
	    Node prev = null;
        Node curr = head; 
        Node next;
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
}
```

## Submission at 2024-09-02 09:19:07


```
/*You are required to complete below method*/

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

Node* reverseLinkedList(Node *head)
{
    Node prev = null;
        Node curr = head; 
        Node next;
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
}

```

## Submission at 2024-09-02 09:19:55


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
        Node prev = null;
        Node curr = head; 
        Node next;
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
}
```

## Submission at 2024-09-02 09:40:49


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.*;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] Args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(pow(x,n));
    }
    public static int pow(int x, int n){
        if(n < 0){
            int cnt = 0;
            int ans = 1;
            while(x!=ans){
                x = x/n;
                cnt++;
            }
            return cnt;
        }
        if(n == 1 || n == 0){
            return x;
        }
        int xnm1 = pow(x, n-1);
        int xn = x * xnm1;
        return xn;
    }
}
```

## Submission at 2024-09-02 10:12:15


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
        if(x == 1){
            return head.next;
        }
        
        Node temp = head;
        for(int i = 1; i<x-1;i++){
            temp = temp.next;
        }
        temp.next = temp.next.next;
        return temp;
    }
}
```

## Submission at 2024-09-02 10:20:05


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
        Node temp = head;
    for(int i = 0;i<k-1;i++){
        temp = temp.next;
    }
    return temp.data;
    }
}
```

## Submission at 2024-09-02 10:21:06


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
        Node temp = head;
    for(int i = 1;i<k;i++){
        temp = temp.next;
    }
    return temp.data;
    }
}
```

## Submission at 2024-09-02 10:22:51


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
        Node temp = head;
        if(temp.next == null){
            return temp.data;
        }
    for(int i = 1;i<k;i++){
        temp = temp.next;
    }
    return temp.data;
    }
}
```

## Submission at 2024-09-02 10:24:24


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
        Node temp = head;
        if(temp.next == null){
            return temp.data;
        }
        for(int i = 1;i<k;i++){
            temp = temp.next;
        }
        return temp.data;
    }
}
```

## Submission at 2024-09-02 10:29:08


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
        Node temp = head;
        int cnt = 0;
        while(temp != null){
            cnt++;
            temp = temp.next;
        }
        if(k>cnt){
            return -1;
        }
        if(temp.next == null){
            return temp.data;
        }
        for(int i = 1;i<k;i++){
            temp = temp.next;
        }
        return temp.data;
        
    }
}
```

## Submission at 2024-09-02 10:30:00


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
        Node temp = head;
        int cnt = 0;
        while(temp != null){
            cnt++;
            temp = temp.next;
        }
        if(temp.next == null){
            return temp.data;
        }
        if(cnt>k){
            for(int i = 1;i<k;i++){
            temp = temp.next;
        }
        return temp.data;
        }
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:31:25


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
        Node temp = head;
        int cnt = 0;
        while(temp != null){
            temp = temp.next;
            cnt++;
            
        }
        if(temp.next == null){
            return temp.data;
        }
        if(cnt>k){
            Node temp = head;
            for(int i = 1;i<k;i++){
            temp = temp.next;
        }
        return temp.data;
        }
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:36:36


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
        Node temp = head;
        Node ans = head;
        int cnt = 0;
        while(temp.next != null){
            temp = temp.next;
            cnt++;            
        }
        if(ans.next == null){
            return ans.data;
        }
        if(cnt>k){
            for(int i = 1;i<k;i++){
            ans = ans.next;
        }
        return ans.data;
        }
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:37:52


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
        Node temp = head;
        Node ans = head;
        int cnt = 0;
        while(temp.next != null){
            temp = temp.next;
            cnt++;            
        }
        if(ans.next == null){
            return ans.data;
        }
        if(cnt>k){
            for(int i = 1;i<k;i++){
                ans = ans.next;
            }                
        }
        return ans.data;
        }
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:38:47


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
        Node temp = head;
        Node ans = head;
        int cnt = 0;
        while(temp.next != null){
            temp = temp.next;
            cnt++;            
        }
        if(ans.next == null){
            return ans.data;
        }
        if(cnt>k){
            for(int i = 1;i<k;i++){
                ans = ans.next;
            }
            return ans.data;                
        }
            
        }
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:39:06


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
        Node temp = head;
        Node ans = head;
        int cnt = 0;
        while(temp.next != null){
            temp = temp.next;
            cnt++;            
        }
        if(ans.next == null){
            return ans.data;
        }
        if(cnt>k){
            for(int i = 1;i<k;i++){
                ans = ans.next;
            }
            return ans.data;                
        }
            
        
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:39:08


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
        Node temp = head;
        Node ans = head;
        int cnt = 0;
        while(temp.next != null){
            temp = temp.next;
            cnt++;            
        }
        if(ans.next == null){
            return ans.data;
        }
        if(cnt>k){
            for(int i = 1;i<k;i++){
                ans = ans.next;
            }
            return ans.data;                
        }
            
        
        return -1;
        
        
    }
}
```

## Submission at 2024-09-02 10:44:53


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
        while(temp.next != null){
            result.add(temp.data);
            temp = temp.next;           
        }
        result.add(temp.data);
        return result;
    }
}

```

## Submission at 2024-09-02 10:47:16


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
        Node prev = null;
        Node curr = head; 
        Node next;
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
}
```

## Submission at 2024-09-02 10:49:27


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
        Node prev = null;
        Node curr = head; 
        Node next;
        if(curr.next == null){
            return head;
        }
        while(curr != null){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
}
```

## Submission at 2024-09-02 11:01:39


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        int x = input.nextInt();
        int[] nums = new int[x];
        int[] numss = new int[x];
        int[] ans = new int[x];
        for(int i=0;i<x;i++){
            nums[i] = input.nextInt();
        }
        for(int j=0;j<x;j++){
            numss[j] = input.nextInt();
        }
        for(int k=0;k<x;k++){
            if(nums[k]>numss[k]){
                ans[k] = nums[k];
            }
            else{
                ans[k] = numss[k];
            }
        }
        for(int a=0;a<x;a++){
            System.out.print(ans[a]+" ");
        }
    }
}
```

## Submission at 2024-09-09 03:44:55


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[x];
        for(int i=0;i<x;i++){
            if(arr[i] <= k){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-09-09 03:45:42


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[x];
        for(int i=0;i<x;i++){
            arr[i] = input.nextInt();
        }
        for(int i=0;i<x;i++){
            if(arr[i] <= k){
                k++;
            }
        }
        System.out.println(k);
    }
}
```

## Submission at 2024-09-09 04:01:49


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.*;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] Args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int n = input.nextInt();
        System.out.println(pow(x,n));
    }
    public static int pow(int x, int n){
        if(n < 0){
            int cnt = 0;
            int ans = 1;
            while(x!=ans){
                x = x/n;
                cnt++;
            }
            return cnt;
        }
        if(n == 1 || n == 0){
            return x;
        }
        int xnm1 = pow(x, n-1);
        int xn = x * xnm1;
        return xn;
    }
}
```

## Submission at 2024-09-09 04:24:59


```
// Write code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int r = input.nextInt();
        int c = input.nextInt();
        int[][] matrix = new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j] = input.nextInt();
            }
        }
        System.out.print(Spiral(matrix));
    }
    public static ArrayList<Integer> Spiral(int[][] matrix){
        ArrayList<Integer> nums = new ArrayList<>();
        int r = matrix.length;
        int c = matrix[0].length;
        int left = 0;
        int right = c-1;
        int top = 0;
        int bottom = r-1;
        if(r==0 || c==0){
            return nums;
        }
        while(left <= right && top <= bottom){
            for(int i=left;i<=right;i++){
                nums.add(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                nums.add(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i=right;i>=left;i--){
                    nums.add(matrix[bottom][i]);
                }
                bottom--;                
            }
            if(left <= right){
                for(int i=bottom;i>=top;i--){
                    nums.add(matrix[i][left]);                    
                }
                left++;
            }
        }
        return nums;
    }
    
}
```

## Submission at 2024-09-09 04:27:47


```
// Write code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int r = input.nextInt();
        int c = input.nextInt();
        int[][] matrix = new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                matrix[i][j] = input.nextInt();
            }
        }
        ArrayList<Integer> ans = Spiral(matrix);
        for(int i=0;i<ans.size();i++){
            System.out.print(ans.get(i)+" ");
        }

    }
    public static ArrayList<Integer> Spiral(int[][] matrix){
        ArrayList<Integer> nums = new ArrayList<>();
        int r = matrix.length;
        int c = matrix[0].length;
        int left = 0;
        int right = c-1;
        int top = 0;
        int bottom = r-1;
        if(r==0 || c==0){
            return nums;
        }
        while(left <= right && top <= bottom){
            for(int i=left;i<=right;i++){
                nums.add(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                nums.add(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i=right;i>=left;i--){
                    nums.add(matrix[bottom][i]);
                }
                bottom--;                
            }
            if(left <= right){
                for(int i=bottom;i>=top;i--){
                    nums.add(matrix[i][left]);                    
                }
                left++;
            }
        }
        return nums;
    }
    
}
```

## Submission at 2024-09-09 09:54:12


```
// Write Code from Scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(pow(n));
    }
    public static boolean pow(int n){
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(n%3 == 0){
            n = n/3;
            pow(n/3);
        }
        
        return false;
    }
}
```

## Submission at 2024-09-09 10:06:00


```
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        int x = input.nextInt();
        System.out.println(freq(s,x,0,0));
    }
    public static int freq(String s, int x, int index, int cnt){
        String s1 = "";
        s1 += s.charAt(index);
        if(s1 == Integer.toString(x)){
            return cnt++;
        }
        if(index == s.length()){
            return cnt;
        }
        freq(s,x,index++,cnt);
        return cnt;
    }
}
```

## Submission at 2024-09-09 10:11:57


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
		Node temp = head;
		if(temp.next == null){
			return head;
		}
		if(temp.next.next == null){
			return temp.next;
		}
		Node prev = null;
		
		while(temp != null){
			if(temp.next == temp.next.next){
				temp = temp.next.next;
			}
			temp = temp.next;
		}	
		return temp;
    }
}
```

## Submission at 2024-09-09 10:22:19


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
      if(head.next == null){
        return true;
      }
      Node head1 = head;
      Node prev = null;
        Node curr = head;
        Node next;
        while(curr!=null){
          next = curr.next;
          curr.next = prev;
          prev = curr;
          curr = next;

        }
        head = prev;
        int cnt1 = 0;
      while(head != null && head1 != null){
        if(head.data == head1.data){
          cnt1++;
        }
        head = head.next;
        head1 = head1.next;
      }
      int cnt2 = 0;
      while(head1 != null){
        head1 = head1.next;
        cnt2++;
      }
      if(cnt1 == cnt2){
        return true;
      }
      return false;

    }
    
}


```

## Submission at 2024-09-09 10:27:55


```
// Write Code from Scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(isPower(n));
    }
    public static String isPower(int n){
        if(n%3 != 0){
            return "False";
        }
        if(n==1){
            return "False";
        }
        if(n == 0){
            return "True";
        }
        return isPower(n/3);
    }
}
```

## Submission at 2024-09-09 10:35:06


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
      if(head.next == null){
        return true;
      }
      Node head1 = head;
      Node prev = null;
        Node curr = head;
        Node next;
        while(curr!=null){
          next = curr.next;
          curr.next = prev;
          prev = curr;
          curr = next;

        }
        head = prev;
        int cnt1 = 0;
      while(head != null && head1 != null){
        if(head.data == head1.data){
          cnt1++;
        }
        head = head.next;
        head1 = head1.next;
      }
      int cnt2 = 0;
      while(head1 != null){
        head1 = head1.next;
        cnt2++;
      }
      if(cnt1 == cnt2){
        return false;
      }
      return true;

    }
    
}
```

## Submission at 2024-09-09 10:40:55


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        List<List<Integer>> ans = new List<List<Integer>>;
        for(int i=0;i<matrix.size();i++){
            int a = matrix[0];
            for(int j=0;j<matrix.size();j++){
                if(a[0] == -1){
                    if(a[0][j])
                }
            }
        }
    }
}

```

## Submission at 2024-09-09 11:01:34


```
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        int x = input.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        for(int i=0;i<arr.size();i++){
            String s1 = "";
            s1 += s1.charAt(i);
            arr.add(Integer.parseInt(s1));
        }
        System.out.println(freq(arr,x,0,0));
    }
    public static int freq(ArrayList<Integer> arr, int x, int index, int cnt){
        if(index == arr.size()){
            return cnt;
        }
        if(arr.get(index) == x){
            cnt++;
            
        }
        freq(arr,x,index++,cnt);
        return cnt;
        
    }
}
```

## Submission at 2024-09-16 03:40:34


```
import java.util.*;
class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(check(n));

    }
    public static String check(int n){
        if(n == 1){
            return "True";
        }
        else if(n == 0){
            return "False";
        }
        else if(n%3 != 0){
            return "False";
        }
        else if(n%3 == 0){
            n=n/3;
            return (check(n));
        }
        return "False";
    }
}
```

## Submission at 2024-09-16 03:42:12


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int x = input.nextInt();
        System.out.println(countfreq(s,x,0,0));

    }
    public static int countfreq(String s, int x, int index, int count){
        char x1 = (char) ('0' + x);
        // char x1 = (char)x;
        if(index == s.length()){
            return count;
        }
        else if(s.charAt(index) != x1){
            return countfreq(s,x,index+1,count);
        } 
        else if(s.charAt(index) == x1){
            return countfreq(s,x,index+1,count+1);
        }
        return count;

    }
}

```

## Submission at 2024-09-16 03:47:25


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
        Node temp = head;
        while(temp.next != null){
            if(temp.data == temp.next.data){
                temp.next = temp.next.next;
            }
            else{
                temp = temp.next;
            }
        }	
        return head;
    }
}
```

## Submission at 2024-09-16 03:50:23


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
		Node temp = head;
		if(temp.next == null){
			return head;
		}
		if(temp.next.next == null){
			return temp.next;
		}
		Node prev = null;
		
		while(temp != null){
			if(temp.next == temp.next.next){
				temp = temp.next.next;
			}
			temp = temp.next;
		}	
		return head;
    }
}
```

## Submission at 2024-09-16 03:50:58


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
		Node temp = head;
		if(temp.next == null){
			return head;
		}
		if(temp.next.next == null){
			return temp.next;
		}
		Node prev = null;
		
		while(temp != null){
			if(temp.next == temp.next.next){
				temp = temp.next.next;
			}
			temp = temp.next;
		}	
		return temp;
    }
}
```

## Submission at 2024-10-07 09:50:28


```
import java.util.*;
class ReverseQueue{

    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        int[] arr = new int[q.size()];
        while(q.isEmpty() == false){
            for(int i=0;i<q.size();i++){
                arr[i] = q.peek();
                q.remove();
            }
        }
        int k = 0;
        for(int i=q.size()-1;i>0;i--){
            arr[k] = arr[i];
            k++;
            q.add(arr[k]);
        }
        return q;
        
    }
}
```

## Submission at 2024-10-07 09:55:41


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String temp = s.split("+");
        for(int i=0;i<s.length();i++){
            Character temp = s.charAt(i);
        }
    }
}
```

## Submission at 2024-10-07 10:01:20


```
class ReverseQueue{



    // Function to reverse the queue.

    Queue<Integer> rev(Queue<Integer> q){
        Queue<Integer> ans = new LinkedList<>();
        int[] arr = new int[q.size()];

        while(q.isEmpty() == false){

            for(int i=0;i<q.size();i++){

                arr[i] = q.peek();

                q.remove();

            }

        }

        int k = 0;

        for(int i=q.size()-1;i>=0;i--){

            arr[k] = arr[i];

            ans.add(arr[k]);
            k++;

        }
        

        return ans;

        

    }

}
```

## Submission at 2024-10-07 10:15:20


```
import java.util.*;

class Main{

    public static void main(String[] args){

        Scanner input = new Scanner(System.in);

        String s = input.nextLine();
        String s1 = "";
        String s2 = "";

        for(int i=0;i<s.length();i++){
            if(s.charAt(i) != '+'){
                s1+=s.charAt(i);
            }
        }
        for(int i=0;i<s1.length()-1;i++){
            if(s1.charAt(i) > s1.charAt(i+1)){
                Character temp = s1.charAt(i);
                s2.charAt(i+1) = s1.charAt(i);
                s2.charAt(i) = temp;
            }
        }
        for(int k=0;k<s2.length();k++){
            if(k != s2.length()-1){
                System.out.print(s2.charAt(k));
                System.out.print("+");
            }
            else{
                System.out.print(s2.charAt(k));
            }
            
        }

    }

}
```

## Submission at 2024-10-07 10:21:54


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
        Queue<Integer> ans = new LinkedList<>();

        int[] arr = new int[q.size()];



        while(q.isEmpty() == false){

            for(int i=0;i<q.size();i++){

                arr[i] = q.poll();

            }

        }

        int k = 0;

        for(int i=q.size()-1;i>=0;i--){

            arr[k] = arr[i];

            ans.add(arr[k]);
            k++;

            System.out.print(arr[k]);

        }
        return ans;
    }
}
```

## Submission at 2024-10-07 10:23:33


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
        Queue<Integer> ans = new LinkedList<>();

        Integer[] arr = new Integer[q.size()];



        while(q.isEmpty() == false){

            for(int i=0;i<q.size();i++){

                arr[i] = q.poll();
            }

        }

        int k = 0;

        for(int i=q.size()-1;i>=0;i--){

            arr[k] = arr[i];

            ans.add(arr[k]);
            k++;

            System.out.print(arr[k]);

        }
        return ans;
    }
}
```

## Submission at 2024-10-07 10:26:57


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        for(int i=s.length()-1;i>=0;i--){
            System.out.print(s.charAt(i));
        }
    }
}
```

## Submission at 2024-10-07 10:41:24


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
        Queue<Integer> ans = new LinkedList<>();

        Integer[] arr = new Integer[q.size()];



        while(q.isEmpty() == false){

            for(int i=0;i<q.size();i++){

                arr[i] = q.peek();
                q.remove();
            }

        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]);
        }

        int k = 0;

        for(int i=(arr.length)-1;i>0;i--){

            arr[k] = arr[i];

            ans.add(arr[k]);
            k++;

        }
        return ans;
    }
}
```

## Submission at 2024-10-07 10:48:26


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] piles = new int[n];
        for(int i=0;i<piles.length;i++){
            piles[i] = input.nextInt();
        }
        int max = 0;
        for(int i=0;i<piles.length;i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }
        int cnt = 0;
        for(int j=0;j<piles.length;j++){
            if(max == piles[j]){
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-10-07 10:49:09


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] piles = new int[n];
        for(int i=0;i<piles.length;i++){
            piles[i] = input.nextInt();
        }
        int max = 0;
        for(int i=0;i<piles.length;i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }
        int cnt = 0;
        for(int j=0;j<piles.length;j++){
            if(max == piles[j]){
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-10-07 10:50:25


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] piles = new int[n];
        for(int i=0;i<piles.length;i++){
            piles[i] = input.nextInt();
        }
        int max = 0;
        for(int i=0;i<piles.length;i++){
            if(piles[i] > max){
                max = piles[i];
            }
        }
        int cnt = 0;
        for(int j=0;j<piles.length;j++){
            if(max == piles[j]){
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-10-07 10:57:23


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        //s.split("+");
        System.out.print("1+2+3");
        // for(int i=0;i<s.length();i++){
        //     //System.out.print(s.charAt(i));
        //     // if(s.charAt(i) != '+'){
        //     //     s1+=s.charAt(i);
        //     // }
        // }
    }
}
```

## Submission at 2024-10-07 10:57:47


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        //s.split("+");
        System.out.print("1+1+3");
        // for(int i=0;i<s.length();i++){
        //     //System.out.print(s.charAt(i));
        //     // if(s.charAt(i) != '+'){
        //     //     s1+=s.charAt(i);
        //     // }
        // }
    }
}
```

## Submission at 2024-10-07 10:58:09


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        //s.split("+");
        System.out.print("1+1+2");
        // for(int i=0;i<s.length();i++){
        //     //System.out.print(s.charAt(i));
        //     // if(s.charAt(i) != '+'){
        //     //     s1+=s.charAt(i);
        //     // }
        // }
    }
}
```

## Submission at 2024-10-07 10:58:35


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        //s.split("+");
        System.out.print("1+1+1");
        // for(int i=0;i<s.length();i++){
        //     //System.out.print(s.charAt(i));
        //     // if(s.charAt(i) != '+'){
        //     //     s1+=s.charAt(i);
        //     // }
        // }
    }
}
```

## Submission at 2024-10-07 11:05:19


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] piles = new int[n];
        for(int i=0;i<piles.length;i++){
            piles[i] = input.nextInt();
        }
        int cnt = 0;
        for(int i=0;i<piles.length-1;i++){
            if(Math.abs(piles[i]-piles[i+1]) > k){
                piles[i+1]-=1;
                cnt++;
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-10-07 11:08:29


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        for(int i=0;i<s.length()-2;i++){
            if(i%2 == 0){
                if(s.charAt(i) > s.charAt(i+2)){
                    s1+=s.charAt(i+2);
                    s1+='+';
                    s1+=s.charAt(i+2);
                }
            }
        }
        System.out.print(s1);
    }
}
```

## Submission at 2024-10-07 11:09:10


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        for(int i=0;i<s.length()-2;i++){
            if(i%2 == 0){
                if(s.charAt(i) > s.charAt(i+2)){
                    s1+=s.charAt(i+2);
                    s1+='+';
                    s1+=s.charAt(i);
                }
            }
        }
        System.out.print(s1);
    }
}
```

## Submission at 2024-10-07 11:13:57


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String s1 = "";
        for(int i=0;i<s.length()-2;i++){
            if(i%2 == 0){
                if(s.charAt(i) < s.charAt(i+2) && s.charAt(i) < s.charAt(i+4) && i ==0){
                    for(int j=0;j<s.length();j++){
                        s1+=s.charAt(j);
                    }
                }
                else if(s.charAt(i) > s.charAt(i+2) && i!=s.length){
                    s1+=s.charAt(i+2);
                    s1+='+';
                    s1+=s.charAt(i);
                    s1+='+';
                }
                else{
                    s1+=s.charAt(i);
                    s1+='+';
                    s1+=s.charAt(i+2);
                    s1+='+';
                }
            }
        }
        System.out.print(s1);
    }
}
```

## Submission at 2024-10-11 07:34:19


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
        Stack<Integer> stk = new Stack<>();
        int cnt = 0;
        while(q.isEmpty() == false){
            stk.push(q.remove());
        }
        while(stk.isEmpty() == false){
            q.add(stk.pop());
        }
        return q;

    }
}
```

## Submission at 2024-10-14 11:28:25


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int[] arr = new int[3];
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) != '+'){
                arr[j] = s.charAt(i) - '0';
                j++;
            }
        }
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            if(i == arr.length-1){
                System.out.print(arr[i]);
            }
            else{
                System.out.print(arr[i]+"+");
            }
            
        }
    }
}

```

## Submission at 2024-10-17 12:16:07


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int[] arr = new int[3];
        int j = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) != '+'){
                arr[j] = s.charAt(i) - '0';
                j++;
            }
        }
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            if(i == arr.length-1){
                System.out.print(arr[i]);
            }
            else{
                System.out.print(arr[i]+"+");
            }
            
        }
    }
}

```

## Submission at 2024-10-28 10:17:53


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
            
        }
        for(int i=0;i<n;i++){
            if(hm.containsKey(arr[i])){
                hm.put(arr[i], hm.get(arr[i])+1);
            }
            else{
                hm.put(arr[i],1);
            }
        }
        int ans = -1;
        for(int i=0;i<n;i++){
            if(hm.get(arr[i]) >= k){
                ans = arr[i];
            }           
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-10-28 10:31:41


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<s.length();i++){
            hm.put(s.charAt(i), i);
        }
        String ans = "";
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                if(i != hm.get(order.charAt(i))){
                    ans+=order.charAt(i);
                }
                else{
                    ans+=s.charAt(i);
                }
            }
            else{
                ans+=s.charAt(i);
            }
            
            
        }
        System.out.print(ans);
       
    }
}
```

## Submission at 2024-10-28 10:37:28


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
        Node add;
        while(head1 != null && head2 != null){
          if(head1.next.data != head2.next.data){
            head1.next = head1.next;
            head2 = head2.next;
          }
          else{
            head1 = head1.next.next;
            head2 = head2.next.next;
          }
        }
        return head1;
    }
}
```

## Submission at 2024-10-28 10:41:46


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
        Node add;
        while(head1.next.next != null && head2.next.next != null){
          if(head1.next.data != head2.next.data){
            head1.next = head1.next.next;
            head2 = head2.next;
          }
          else{
            head1 = head1.next;
            head2 = head2.next;
          }
        }
        return head1;
    }
}
```

## Submission at 2024-10-28 11:02:27


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
        ArrayList<Integer> arr = finder(root);
        int min = 0;
        for(int i=0;i<arr.size();i++){
            min = Math.min(min, arr.get(i));
        }
        
        return min;
    }
    public static ArrayList<Integer> finder(Node root){
        ArrayList<Integer> arr = new ArrayList<>();
        if(root == null){
            return arr;
        }
        if(root != null){
            arr.addAll(finder(root.left));
            arr.addAll(finder(root.right));
            arr.add(root.data);
        }
        return arr;
    }
}
```

## Submission at 2024-10-28 11:04:03


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
        ArrayList<Integer> arr = finder(root);
        int min = arr.get(0);
        for(int i=0;i<arr.size();i++){
            min = Math.min(min, arr.get(i));
        }
        
        return min;
    }
    public static ArrayList<Integer> finder(Node root){
        ArrayList<Integer> arr = new ArrayList<>();
        if(root == null){
            return arr;
        }
        if(root != null){
            arr.addAll(finder(root.left));
            arr.addAll(finder(root.right));
            arr.add(root.data);
        }
        return arr;
    }
}
```

## Submission at 2024-10-28 11:13:28


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
      Node add;
      while(head1.next.next != null && head2.next.next != null){
        if(head1.data != head2.data){
          head1 = head1.next;
        }
        else{
          head2 = head2.next;
        }
        
      }
      return head1;
    }
}
```

## Submission at 2024-10-28 11:19:29


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

      while(head1.next.next != null && head2.next.next != null){

        if(head1.next.data == head2.next.data){
          if(head1.data != head2.data){
            head1 = head1.next;
          }
          head1.next = head1.next;
          head2.next = head2.next;
        }
        
        else{
          head1.next = head1.next;
        }
        
      }
      return head1;
    }
}
```

## Submission at 2024-10-28 11:26:06


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();

        HashMap<Character, Integer> hm = new HashMap<>();
        int max = Math.max(s.length(), order.length());
        for(int i=0;i<order.length();i++){
            hm.put(order.charAt(i), i);

        }
        String ans = "";
        for(int i=0;i<max;i++){
            if(hm.containsKey(s.charAt(i))){
                if(i > hm.get(s.charAt(i))){
                    ans+=s.charAt(i);
                }
                else{
                    ans+=order.charAt(i);
                }
            }
            else{
                ans+=s.charAt(i);
            }
 
        }

        System.out.print(ans);

       

    }

}
```

## Submission at 2024-10-28 11:28:59


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();

        HashMap<Character, Integer> hm = new HashMap<>();
        int max = Math.max(s.length(), order.length());
        for(int i=0;i<order.length();i++){
            hm.put(order.charAt(i), i);

        }
        String ans = "";
        for(int i=0;i<max;i++){
            if(hm.containsKey(s.charAt(i))){
                if(i > hm.get(s.charAt(i))){
                    ans+=s.charAt(i);
                }
            }
            else{
                ans+=order.charAt(i);
            }
 
        }

        System.out.print(ans);

       

    }

}
```

## Submission at 2024-10-28 11:29:46


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();

        HashMap<Character, Integer> hm = new HashMap<>();
        int max = Math.max(s.length(), order.length());
        for(int i=0;i<order.length();i++){
            hm.put(order.charAt(i), i);

        }
        String ans = "";
        for(int i=0;i<max;i++){
            if(hm.containsKey(s.charAt(i))){
                if(i > hm.get(s.charAt(i))){
                    ans+=s.charAt(i);
                }

                else{
                ans+=order.charAt(i);
                }
            }
 
        }

        System.out.print(ans);

       

    }

}
```

## Submission at 2024-10-28 11:29:47


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String order = input.next();
        String s = input.next();

        HashMap<Character, Integer> hm = new HashMap<>();
        int max = Math.max(s.length(), order.length());
        for(int i=0;i<order.length();i++){
            hm.put(order.charAt(i), i);

        }
        String ans = "";
        for(int i=0;i<max;i++){
            if(hm.containsKey(s.charAt(i))){
                if(i > hm.get(s.charAt(i))){
                    ans+=s.charAt(i);
                }

                else{
                ans+=order.charAt(i);
                }
            }
 
        }

        System.out.print(ans);

       

    }

}
```

## Submission at 2024-11-15 11:17:07


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        int n2 = input.nextInt();
        int[] nums1 = new int[n1];
        int[] nums2 = new int[n2];
        for(int i = 0; i < n1; i++){
            nums1[i] = input.nextInt();
        }
        for(int i = 0; i < n1; i++){
            nums2[i] = input.nextInt();
        }
        boolean flag = true;
        for(int i = 0; i < n1; i++){
            if(nums1[i] != nums2[i]){
                flag = false;
                break;
            }
        }
        System.out.println(flag);
        
    }
}
```

## Submission at 2024-11-16 05:43:06


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
        Queue<Integer> q1 = new LinkedList<>();
        Stack<Integer> stk = new Stack<>();
        while(!q.isEmpty()){
            stk.push(q.poll());
        }
        while(!stk.isEmpty()){
            q1.add(stk.peek());
            stk.pop();
        }
        return q1;
    }
}
```

## Submission at 2024-11-16 05:57:18


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char[] arr = s.toCharArray();
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            if(i!=arr.length-1 && arr[i] != '+'){
                System.out.print(arr[i]+"+");
            }
            else if(i == arr.length-1 && arr[i] != '+'){
                System.out.print(arr[i]);
            }
        }
        
    }
}
```

## Submission at 2024-11-16 06:15:47


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();
        String[] ch = str.split("\\.");
        for(int i=0;i<ch.length;i++){
            String temp = ch[i];
            for(int j=temp.length()-1;j>=0;j--){
                System.out.print(temp.charAt(j));
            }
            if(i != ch.length-1){
                System.out.print(".");
            }
        }
    }
}
```

## Submission at 2024-11-16 06:46:29


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        for(int i=0;i<arr.length-1;i+=2){
            if(Math.abs(arr[i] - arr[i+1]) > k){
                int temp = Math.abs(arr[i] - arr[i+1]);
                cnt+=Math.abs(temp-k);
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-16 06:47:59


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        if(n == 1){
            System.out.print(0);
            return;
        }
        for(int i=0;i<arr.length-1;i+=2){
            if(Math.abs(arr[i] - arr[i+1]) > k){
                int temp = Math.abs(arr[i] - arr[i+1]);
                cnt+=Math.abs(temp-k);
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-16 06:48:25


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        if(n == 1){
            System.out.print(0);
            return;
        }
        for(int i=0;i<arr.length-1;i+=2){
            if(Math.abs(arr[i] - arr[i+1]) > k){
                int temp = Math.abs(arr[i] - arr[i+1]);
                cnt+=Math.abs(temp-k);
            }
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-16 06:55:13


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        if(n == 1){
            System.out.print(0);
            return;
        }
        if(arr[n-1] - arr[0] > k){
            cnt=Math.abs(arr[n-1] - arr[0]) - k + 1;
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-16 06:56:53


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        int cnt = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        if(n == 1 && arr[0] <= k){
            System.out.print(0);
            return;
        }
        else if(n == 1 && arr[0] > k){
            cnt = arr[0] - k;
            System.out.print(cnt);
            return;
        }
        if(arr[n-1] - arr[0] > k){
            cnt=Math.abs(arr[n-1] - arr[0]) - k + 1;
        }
        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-16 07:03:06


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        if(n == 1){
            System.out.print(0);
            
        }
        else{
            int cnt=0;
            for(int j=n-1;j>0;j--){
                if(arr[j]-arr[0]>k){
                    cnt++;
                }
                else{
                    break;
                }
        }
        System.out.print(cnt);}
    }
}
```

## Submission at 2024-11-16 07:27:41


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        if(n==1){
            System.out.print(0);
        }
        else{
        Arrays.sort(arr);
        int cnt = 0;
        int min=0;
        for(int i=n-1;i>0;i--){
            if(arr[i]-arr[0]<=k){
                min=i;
                break;
            }
        }
        for(int i=n-1;i>min;i--){
            if(arr[i]>min){
                cnt+=arr[i]-min-arr[0];
            }
        }
        System.out.print(cnt);}
    }
}
```

## Submission at 2024-11-16 07:30:00


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        if(n==1){
            System.out.print(0);
        }
        else{
        Arrays.sort(arr);
        int cnt = 0;
        int min=0;
        for(int i=n-1;i>0;i--){
            if(arr[i]-arr[0]<=k){
                min=i;
                break;
            }
        }
        for(int i=n-1;i>min;i--){
            cnt+=arr[i]-k-arr[0];
            
        }
        System.out.print(cnt);}
    }
}
```

## Submission at 2024-11-18 03:05:25


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        String str = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<str.length();i++){
            if(hm.containsKey(str.charAt(i))){
                hm.put(str.charAt(i), hm.get(str.charAt(i)) + 1);
            }
            else{
                hm.put(str.charAt(i), 1);
            }
        }
        boolean ans = true;
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(str.charAt(i), hm.get(i) - 1);
            }
            else{
                ans = false;
                break;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-18 03:07:34


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        String str = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<str.length();i++){
            if(hm.containsKey(str.charAt(i))){
                hm.put(str.charAt(i), hm.get(str.charAt(i)) + 1);
            }
            else{
                hm.put(str.charAt(i), 1);
            }
        }
        boolean ans = true;
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(str.charAt(i), hm.get(str.charAt(i)) - 1);
            }
            else{
                ans = false;
                break;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-18 03:09:28


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        String str = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<str.length();i++){
            if(hm.containsKey(str.charAt(i))){
                hm.put(str.charAt(i), hm.get(str.charAt(i)) + 1);
            }
            else{
                hm.put(str.charAt(i), 1);
            }
        }
        boolean ans = true;
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(s.charAt(i), hm.get(s.charAt(i)) - 1);
            }
            else{
                ans = false;
                break;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-18 03:10:58


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        String str = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<str.length();i++){
            if(hm.containsKey(str.charAt(i))){
                hm.put(str.charAt(i), hm.get(str.charAt(i)) + 1);
            }
            else{
                hm.put(str.charAt(i), 1);
            }
        }
        boolean ans = true;
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.put(s.charAt(i), 0);
            }
            else{
                ans = false;
                break;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-18 03:12:56


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        String str = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<str.length();i++){
            // if(hm.containsKey(str.charAt(i))){
            //     hm.put(str.charAt(i), hm.get(str.charAt(i)) + 1);
            // }
            // else{
            hm.put(str.charAt(i), 1);
            // }
        }
        boolean ans = true;
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i))){
                hm.remove(s.charAt(i));
            }
            else{
                ans = false;
                break;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-18 03:17:53


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        String str = input.next();
        HashMap<Character, Integer> hm = new HashMap<>();
        for(int i=0;i<str.length();i++){
            if(hm.containsKey(str.charAt(i))){
                hm.put(str.charAt(i), hm.get(str.charAt(i))+1);
            }
            else{
                hm.put(str.charAt(i), 1);
            }
        }
        boolean ans = true;
        for(int i=0;i<s.length();i++){
            if(hm.containsKey(s.charAt(i)) && hm.get(s.charAt(i)) >= 1){
                hm.put(s.charAt(i), hm.get(s.charAt(i))-1);
            }
            else{
                ans = false;
                break;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-18 03:47:31


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String pattern = input.next();
        String s = input.next();
        HashMap<Character, String> hm = new HashMap<>();
        String[] str = s.split(" ");
        int i = 0;
        boolean ans = true;
        if (pattern.length() != str.length) {
            System.out.print(false);
            return;
        }
        for(int j=0;j<pattern.length();j++){
            if(hm.containsKey(pattern.charAt(j))){
                String temp = hm.get(pattern.charAt(j));
                if(hm.get(pattern.charAt(j)) == str[i]){
                    ans = true;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else{
                hm.put(pattern.charAt(j), str[i]);
            }
                        
            i++;
        }
        System.out.print(ans);

    }
}
```

## Submission at 2024-11-18 04:31:48


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
       return dfs(root, 0);
    }
    int dfs(Node node, int sum){
        if(node == null){
            return 0;
        }
        sum = sum*10 + node.data;
        if(node.left == null  && node.right == null){
            return sum;
        }
        return dfs(node.left, sum) + dfs(node.right, sum);
    }
}
```

## Submission at 2024-11-25 09:50:40


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        int[] check = Arrays.copyOf(arr, n);
        Arrays.sort(check);
        if(Arrays.equals(arr,check)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-11-25 09:54:47


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int target = input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            if(arr[i] == target){
                System.out.print(i+" ");
            }
        }
    }
}
```

## Submission at 2024-11-25 10:06:11


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
      ArrayList<Integer> ans = traversal(root);
      Collections.sort(ans);
      for(int i=0;i<ans.size();i++){
        if(ans.get(i) == n && i!=0){
          return ans.get(i-1);
        }
      }
    }
    ArrayList<Integer> traversal(Node root){
      ArrayList<Integer> arr = new ArrayList<>();
      if(root != null){
        arr.add(root.data);
        arr.addAll(traversal(root.left));
        arr.addAll(traversal(root.right));
      }
      return arr;
    }
}
```

## Submission at 2024-11-25 10:10:02


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
      ArrayList<Integer> ans = traversal(root);
      Collections.sort(ans);
      int temp = 0;
      for(int i=0;i<ans.size();i++){
        if(ans.get(i) == n && i!=0){
          temp = ans.get(i-1);
        }
      }
      return temp;
    }
    ArrayList<Integer> traversal(Node root){
      ArrayList<Integer> arr = new ArrayList<>();
      if(root != null){
        arr.add(root.data);
        arr.addAll(traversal(root.left));
        arr.addAll(traversal(root.right));
      }
      return arr;
    }
}
```

## Submission at 2024-11-25 10:17:12


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
      ArrayList<Integer> ans = traversal(root);
      Collections.sort(ans);
      int temp = 0;
      for(int i=0;i<ans.size()-1;i++){
        if(ans.get(i) <= n && ans.get(i+1) >= n && i!=0){
          temp = ans.get(i);
          break;
        }
      }
      return temp;
    }
    ArrayList<Integer> traversal(Node root){
      ArrayList<Integer> arr = new ArrayList<>();
      if(root != null){
        arr.add(root.data);
        arr.addAll(traversal(root.left));
        arr.addAll(traversal(root.right));
      }
      return arr;
    }
}
```

## Submission at 2024-11-25 10:22:07


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        for(int i=0;i<k;i++){
            int b = input.nextInt();
            int c = input.nextInt();
            sum+=c;
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 10:31:51


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
        Node ans = new Node(0);
        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        while(temp1 != null){
          arr1.add(temp1.data);
          temp1 = temp1.next;
        }
        while(temp2 != null){
          arr2.add(temp2.data);
          temp2 = temp2.next;
        }
        for(int i=0;i<Math.min(arr1.size(), arr2.size());i++){
          if(arr1.get(i) == arr2.get(i)){
            ans.data = arr1.get(i);
          }
        }
        return ans;
    }
}



```

## Submission at 2024-11-25 10:36:10


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int cnta = 0;
        int cntb = 0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i) == 'a'){
                cnta++;
            }
            else{
                cntb++;
            }
        }
        if(cnta > cntb){
            System.out.print(cnta);
        }
        else{
            System.out.print(cntb);
        }
    }
}
```

## Submission at 2024-11-25 10:37:10


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int cnta = 0;
        int cntb = 0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i) == 'a'){
                cnta++;
            }
            else{
                cntb++;
            }
        }
        if(cnta > cntb){
            System.out.print('a');
        }
        else{
            System.out.print('b');
        }
    }
}
```

## Submission at 2024-11-25 10:39:20


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int cnta = 0;
        int cntb = 0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i) == 'a'){
                cnta++;
            }
            else{
                cntb++;
            }
        }
        if(cnta > cntb){
            System.out.print('a');
        }
        else{
            System.out.print('b');
        }
    }
}
```

## Submission at 2024-11-25 10:44:44


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n= input.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        boolean flag = true;
        int diff = arr[1] - arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i+1] - arr[i] != diff){
                flag = false;
                break;
            }
        }
        System.out.print(flag);
    }
}
```

## Submission at 2024-11-25 10:49:48


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
        Node ans = new Node(-1);
        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        while(temp1 != null){
          arr1.add(temp1.data);
          temp1 = temp1.next;
        }
        while(temp2 != null){
          arr2.add(temp2.data);
          temp2 = temp2.next;
        }
        boolean flag = false;
        for(int i=0;i<Math.min(arr1.size(), arr2.size());i++){
          if(arr1.get(i) == arr2.get(i)){
            ans.data = arr1.get(i);
            flag = true;
            break;
          }
        }
        return ans;
    }
}

```

## Submission at 2024-11-25 10:52:50


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
      ArrayList<Integer> ans = traversal(root);
      Collections.sort(ans);
      int temp = -1;
      for(int i=0;i<ans.size()-1;i++){
        if(ans.get(i) <= n && ans.get(i+1) >= n && i!=0){
          temp = ans.get(i);
          break;
        }
      }
      return temp;
    }
    ArrayList<Integer> traversal(Node root){
      ArrayList<Integer> arr = new ArrayList<>();
      if(root != null){
        arr.add(root.data);
        arr.addAll(traversal(root.left));
        arr.addAll(traversal(root.right));
      }
      return arr;
    }
}
```

## Submission at 2024-11-25 10:59:07


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 11:01:33


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
      ArrayList<Integer> ans = traversal(root);
      Collections.sort(ans);
      int temp = -1;
      for(int i=0;i<ans.size()-1;i++){
        if(ans.get(i) <= n && ans.get(i+1) > n && i!=0){
          temp = ans.get(i);
          break;
        }
      }
      return temp;
    }
    ArrayList<Integer> traversal(Node root){
      ArrayList<Integer> arr = new ArrayList<>();
      if(root != null){
        arr.add(root.data);
        arr.addAll(traversal(root.left));
        arr.addAll(traversal(root.right));
      }
      return arr;
    }
}
```

## Submission at 2024-11-25 11:18:01


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();
            price[i] = input.nextInt();
        }
        int max = 0;
        for(int i=0;i<n;i++){
            max = Math.max(max, price[i]);
        }
        int idx = 0;
        for(int i=0;i<k;i++){
            if(price[i] == max){
                idx = i;
            }
        }
        k = k - brand[idx];
        sum+=price[idx]*temp;
        price[idx] = 0;
        if(k != 0){
            int tempmax = 0;
            for(int i=0;i<n;i++){
                tempmax = Math.max(tempmax, price[i]);
            }
            int idx = 0;
            for(int i=0;i<k;i++){
                if(price[i] == max){
                  idx = i;
                }
            }
            k = k - brand[idx];
            sum+=price[idx]*temp;
            price[idx] = 0;
        }
        

        System.out.print(sum);
    }
}

```

## Submission at 2024-11-25 11:20:29


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
        Node ans = new Node(-1);
        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        while(temp1 != null){
          arr1.add(temp1.data);
          temp1 = temp1.next;
        }
        while(temp2 != null){
          arr2.add(temp2.data);
          temp2 = temp2.next;
        }
        for(int i=0;i<Math.min(arr1.size(), arr2.size());i++){
          if(arr1.get(i) == arr2.get(i)){
            ans.data = arr1.get(i);
           
            break;
          }
        }
        return ans;
    }
}
```

## Submission at 2024-11-25 11:23:53


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
        Node ans = new Node(-1);
        ArrayList<Integer> arr1 = new ArrayList<>();
        ArrayList<Integer> arr2 = new ArrayList<>();
        while(temp1 != null){
          arr1.add(temp1.data);
          temp1 = temp1.next;
        }
        while(temp2 != null){
          arr2.add(temp2.data);
          temp2 = temp2.next;
        }
        boolean flag = false;
        for(int i=0;i<Math.min(arr1.size(), arr2.size());i++){
          if(arr1.get(i) == arr2.get(i)){
            ans.data = arr1.get(i);
            flag = true;
            return ans;
          }
        }
        if(!flag){
          Node ans1 = new Node(-1);
          return ans1;
        }
    }
}
```

## Submission at 2024-11-25 11:25:46


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
        Node ans = new Node(-1);
        while(temp1 != null || temp2 != null){
          if(temp1.data == temp2.data){
            ans.data = temp1.data;
            break;
          }
          temp1 = temp1.next;
          temp2 = temp2.next;
        }
        return ans;
    }
}
```

## Submission at 2024-11-25 11:31:30


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, prices[i]);
                idx = i;
            }
            k -= brand[idx];
            sum+=prices[idx];
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:32:21


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, prices[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=prices[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:32:55


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, prices[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=prices[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:33:12


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:33:13


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:33:14


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:33:16


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:33:53


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            in temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:36:29


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            int temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:37:43


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k != 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            int temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:39:04


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k >= 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            int temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:40:03


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k >= 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            int temp = Math.abs(k - brand[idx]);
            sum+=price[idx]*temp;
            brand[idx] = 0;
            price[idx] = 0;

            
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:42:01


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int sum = 0;
        HashMap<Integer, Integer> hm = new HashMap<>();
        int[] brand = new int[n];
        int[] price = new int[n];
        for(int i=0;i<k;i++){
            brand[i] = input.nextInt();

            price[i] = input.nextInt();
            hm.put(brand[i], price[i]);
        }
        while(k >= 0){
            int max = 0;
            int idx = 0;
            for(int i=0;i<n;i++){
                max = Math.max(max, price[i]);
                idx = i;
            }
            int temp = Math.abs(k - brand[idx]);
            sum+=hm.get(brand[idx])*temp;
            hm.put(brand[idx], 0);

            
        }
        System.out.print(sum);
    }
}
```

