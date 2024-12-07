## Submission at 2024-08-05 10:25:38


```
import java.util.Scanner;

    public class Hello(){
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            String name=input.next();
            System.out.print("Hello" + name + "!");
        }
        
    }
    

```

## Submission at 2024-08-05 10:25:53


```
import java.util.Scanner;

    public class Hello(){
        public static void main(String[] args){
            Scanner input=new Scanner(System.in);
            String name=input.next();
            System.out.print("Hello" + name + "!");
        }
        
    }
    

```

## Submission at 2024-08-05 10:30:19


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String name=input.nextLine();
        System.out.print("Hello" + name + "!");
    }
    
}
    

```

## Submission at 2024-08-05 10:31:19


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String name=input.nextLine();
        System.out.print("Hello " + name + "!");
    }
    
}
    

```

## Submission at 2024-08-05 10:51:30


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=Integer.parseInt(input.nextLine());
        for(int i=0;i<n;i++){
            String name=input.nextLine();
            System.out.println("Hello " + name + "!");
        }
    }

}
```

## Submission at 2024-08-05 10:54:46


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String name=sc.nextLine();
        System.out.print("Hello " + name + "!");

    }
}
```

## Submission at 2024-08-12 10:11:11


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
        System.out.println(fibonacci(x-1));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
       
        if(x==0 || x==1){
            return x;
        }
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
    


```

## Submission at 2024-08-12 10:12:17


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
       
        if(x==0 || x==1){
            return x;
        }
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
    


```

## Submission at 2024-08-12 10:14:07


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
       
        if(x==0 || x==1){
            return x;
        }
        return fibonacci(x-1)+fibonacci(x-2);
    }
}
    


```

## Submission at 2024-08-12 10:30:32


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
        if(n%2==0){
            if(n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-12 10:32:38


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
        if(n>0 && n%2==0){
            if(n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-12 10:33:42


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
        if(n>0 && n%2==0){
            if(n==1){
                return false;
            }
            if(n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-12 10:35:14


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
        if(n>0 && n%2==0){
            if(n==1){
                return true;
            }
            if(n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-12 10:38:11


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
        if(n>0 && n%2==0){
            if(n==1 || n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-12 10:43:05


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
            return false;
        }
        
        if(n>0 && n%2==0){
            if(n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-12 10:43:44


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
        
        if(n>0 && n%2==0){
            if(n==2){
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;

    }
}

```

## Submission at 2024-08-20 10:36:44


```
import java.util.Arrays;
public class Main {
    
    public static void combine(int n, int k){
        int[] array = new int[k];
        combination(array, 0, 1, n, k);
    }
    
    
    public static void combination(int[] array, int index, int start, int n, int k){
        if(index==k){
            System.out.println(Arrays.toString(array));
            return;
        }
        
        for(int i=start; i<=n; i++){
            array[index] = i;
            combination(array, index+1, i+1, n, k);   
        }
    }
    
    
    
    public static void main(String[] args) {
        int n=4;
        int k=2;
        combine(n, k);
    }
}
```

## Submission at 2024-08-20 10:38:57


```
import java.util.Arrays;
public class Main {
    
    public static void combine(int n, int k){
        int[] array = new int[k];
        combination(array, 0, 1, n, k);
    }
    
    
    public static void combination(int[] array, int index, int start, int n, int k){
        if(index==k){
            System.out.print(Arrays.toString(array) + ",");
            return;
        }
        
        for(int i=start; i<=n; i++){
            array[index] = i;
            combination(array, index+1, i+1, n, k);   
        }
    }
    
    
    
    public static void main(String[] args) {
        int n=4;
        int k=2;
        combine(n, k);
    }
}
```

## Submission at 2024-08-20 10:55:27


```
import java.util.Arrays;
public class Main {
    
    public static boolean first=true;
    public static void combine(int n, int k){
        int[] array = new int[k];
        System.out.print("[");
        combination(array, 0, 1, n, k);
        System.out.println("]");
    }
    
    
    public static void combination(int[] array, int index, int start, int n, int k){
        if(index==k){
            if(!first){
                System.out.print(",");
            }
            System.out.print(Arrays.toString(array));
            first=false;
            return;
        }
        
        for(int i=start; i<=n; i++){
            array[index] = i;
            combination(array, index+1, i+1, n, k);   
        }
    }
    
    
    
    public static void main(String[] args) {
        int n=4;
        int k=2;
        combine(n, k);
    }
}
```

## Submission at 2024-08-20 11:07:23


```
import java.util.Arrays;
public class Main {
    
    private static boolean first=true;
    public static void combine(int n,int k){
        int[] array = new int[k];
        System.out.print("[");
        combination(array,0,1,n,k);
        System.out.println("]");
    }
    
    
    public static void combination(int[] array,int index,int start,int n,int k){
        if(index==k){
            if(!first){
                System.out.print(",");
            }
            System.out.print("[" + ArraytoString(array) + "]");
            first=false;
            return;
        }
        
        for(int i=start; i<=n; i++){
            array[index] = i;
            combination(array,index+1,i+1,n,k);   
        }
    }

    public static String ArraytoString(int[] array){
        StringBuilder s = new StringBuilder();
        for(int i=0; i<array.length; i++){
            s.append(array[i]);
            if(i<array.length-1){
                s.append(",");
            }
        }
        return s.toString();
    }

    public static void main(String[] args) {
        int n=4;
        int k=2;
        combine(n,k);
    }
}
```

## Submission at 2024-08-20 11:18:54


```
import java.util.Arrays;
public class Main {
    
    private static boolean first=true;
    public static void combine(int n,int k){
        int[] array = new int[k];
        System.out.print("[");
        combination(array,0,1,n,k);
        System.out.println("]");
    }
    
    
    public static void combination(int[] array,int index,int start,int n,int k){
        if(index==k){
            if(!first){
                System.out.print(",");
            }
            System.out.print("[");
            for(int i=0;i<k;i++){
                System.out.print(array[i]);
                if(i<k-1){
                    System.out.print(",");
                }
            }
            System.out.print("]");
            first=false;
            return;
        }
        
        for(int i=start; i<=n; i++){
            array[index] = i;
            combination(array,index+1,i+1,n,k);   
        }
    }

    public static void main(String[] args) {
        int n=4;
        int k=2;
        combine(n,k);
    }
}
```

## Submission at 2024-08-20 11:24:20


```
import java.util.Arrays;
public class Main {
    
    private static boolean first=true;
    public static void combine(int n,int k){
        assert n >= 1 && n <= 20 : "Value of n must be between 1 and 20.";
        assert k >= 1 && k <= n : "Value of k must be between 1 and n.";
        int[] array = new int[k];
        System.out.print("[");
        combination(array,0,1,n,k);
        System.out.println("]");
    }
    
    
    public static void combination(int[] array,int index,int start,int n,int k){
        if(index==k){
            if(!first){
                System.out.print(",");
            }
            System.out.print("[");
            for(int i=0;i<k;i++){
                System.out.print(array[i]);
                if(i<k-1){
                    System.out.print(",");
                }
            }
            System.out.print("]");
            first=false;
            return;
        }
        
        for(int i=start; i<=n; i++){
            array[index] = i;
            combination(array,index+1,i+1,n,k);   
        }
    }

    public static void main(String[] args) {
        int n=4;
        int k=2;
        combine(n,k);
    }
}
```

## Submission at 2024-08-20 11:43:32


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
        List<List<Integer>> result=new ArrayList<>();
        backtrack(1, new ArrayList<>(), result, n, k);
        return result;
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

## Submission at 2024-08-21 09:40:04


```
import java.util.ArrayList;
import java.util.List;
public class Main {
    
    public static List<String> generateParanthesis(int n){
        List<String> answer = new ArrayList<>();
        backtrack(answer, "", 0, 0, n);
        return answer;
    }
    
    public static void backtrack(List<String> answer, String current, int open, int close, int max){
        if(current.length()==max*2){
           answer.add(current);
           return;
        }
        
        if(open<max){
            backtrack(answer, current+"(", open+1, close, max);
        }
        
        if(close<open){
            backtrack(answer, current+")", open, close+1, max);
        }
    }
    
    public static void main(String[] args) {
        int n=3;
        List<String> output = generateParanthesis(n);
        System.out.print("[");
        for(int i=0;i<output.size();i++){
            System.out.print("\""+output.get(i)+"\"");
            if(i<output.size()-1){
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-21 11:31:25


```
import java.util.ArrayList;
import java.util.List;
public class Main {
    
    public static List<List<Integer>> generatePermutations(int[] nums){
        List<List<Integer>> output = new ArrayList<>();
        backtrack(output, new ArrayList<>(), nums, new boolean[nums.length]);
        return output;
    }

    public static void backtrack(List<List<Integer>> output, List<Integer> elements, int[] nums, boolean[] used){
        if(elements.size() == nums.length){
            output.add(new ArrayList<>(elements));
        }
        else{
            for(int i=0; i<nums.length; i++){
                if(used[i]){
                continue;
            }
            used[i]=true;
            elements.add(nums[i]);
            backtrack(output, elements, nums, used);
            used[i]=false;  
            elements.remove(elements.size()-1);
            }
 
        }

        
    }
    public static void main(String[] args){
        int[] nums = {1,2,3};
        List<List<Integer>> answer = generatePermutations(nums);
        System.out.print(answer);

    }
}

```

## Submission at 2024-08-21 12:03:33


```
import java.util.ArrayList;
import java.util.List;
public class Main {
    
    public static List<List<Integer>> generatePermutations(int[] nums){
        List<List<Integer>> output = new ArrayList<>();
        backtrack(output, new ArrayList<>(), nums, new boolean[nums.length]);
        return output;
    }

    public static void backtrack(List<List<Integer>> output, List<Integer> elements, int[] nums, boolean[] used){
        if(elements.size() == nums.length){
            output.add(new ArrayList<>(elements));
        }
        else{
            for(int i=0; i<nums.length; i++){
                if(used[i]){
                continue;
            }
            used[i]=true;
            elements.add(nums[i]);
            backtrack(output, elements, nums, used);
            used[i]=false;  
            elements.remove(elements.size()-1);
            }
 
        }

        
    }
    public static void main(String[] args){
        int[] nums = {1,2,3};
        List<List<Integer>> answer = generatePermutations(nums);
        System.out.print("[");
        for(int i=0; i<answer.size(); i++){
            if(i!=0){
                System.out.print(",");
            }
            System.out.print("[");
            for(int j=0; j<answer.get(i).size(); j++){
                if(j!=0){
                System.out.print(",");
            }
            System.out.print(answer.get(i).get(j));
            }
            System.out.print("]");
            
        }
        System.out.print("]");
        

    }
}

```

## Submission at 2024-08-21 12:09:11


```
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
public class Main {
    
    public static List<List<Integer>> generatePermutations(int[] nums){
        Arrays.sort(nums);
        List<List<Integer>> output = new ArrayList<>();
        backtrack(output, new ArrayList<>(), nums, new boolean[nums.length]);
        return output;
    }

    public static void backtrack(List<List<Integer>> output, List<Integer> elements, int[] nums, boolean[] used){
        if(elements.size() == nums.length){
            output.add(new ArrayList<>(elements));
        }
        else{
            for(int i=0; i<nums.length; i++){
                if(used[i]){
                    continue;
                }
                used[i]=true;
                elements.add(nums[i]);
                backtrack(output, elements, nums, used);
                used[i]=false;  
                elements.remove(elements.size()-1);
            }
 
        }
    }
    public static void main(String[] args){
        int[] nums = {1,2,3};
        List<List<Integer>> answer = generatePermutations(nums);
        System.out.print("[");
        for(int i=0; i<answer.size(); i++){
            if(i!=0){
                System.out.print(",");
            }
            System.out.print("[");
            for(int j=0; j<answer.get(i).size(); j++){
                if(j!=0){
                System.out.print(",");
            }
            System.out.print(answer.get(i).get(j));
            }
            System.out.print("]");
            
        }
        System.out.print("]");
        

    }
}

```

## Submission at 2024-08-21 12:16:33


```
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
public class Main {
    
    public static List<List<Integer>> generatePermutations(int[] nums){
        Arrays.sort(nums);
        List<List<Integer>> output = new ArrayList<>();
        backtrack(output, new ArrayList<>(), nums, new boolean[nums.length]);
        return output;
    }

    public static void backtrack(List<List<Integer>> output, List<Integer> elements, int[] nums, boolean[] used){
        if(elements.size() == nums.length){
            output.add(new ArrayList<>(elements));
        }
        else{
            for(int i=0; i<nums.length; i++){
                if(used[i]){
                    continue;
                }
                used[i]=true;
                elements.add(nums[i]);
                backtrack(output, elements, nums, used);
                used[i]=false;  
                elements.remove(elements.size()-1);
            }
 
        }
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String[] strNums = input.nextLine().split(" ");
        int[] nums = new int[strNums.length];
        for (int i = 0; i < strNums.length; i++) {
            nums[i] = Integer.parseInt(strNums[i]);
        }
        List<List<Integer>> answer = generatePermutations(nums);
        System.out.print("[");
        for(int i=0; i<answer.size(); i++){
            if(i!=0){
                System.out.print(",");
            }
            System.out.print("[");
            for(int j=0; j<answer.get(i).size(); j++){
                if(j!=0){
                System.out.print(",");
            }
            System.out.print(answer.get(i).get(j));
            }
            System.out.print("]");
            
        }
        System.out.print("]");
        

    }
}

```

## Submission at 2024-09-02 09:57:58


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
        while(head!=null){
            System.out.print(head.data);
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:01:11


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
        while(head!=null){
            result.add(head.data);
            head = head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:31:58


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
    int index = 1;
    int getKthNode(Node head, int k) {
        if(index==k){
            return index;
        }
        
        while(head.next!=null){
            if(index==k){
                return head.data;
            }
            head=head.next;
            index++;
        }
        return -1;
    }
}
```

## Submission at 2024-09-02 10:34:30


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
    int index = 1;
    int getKthNode(Node head, int k) {
        if(index==k){
            return index;
        }
        while(head.next!=null){
            if(index==k){
                return head.data;
            }
            head=head.next;
            index++;
        }
        if(index==k){
            return head.data;
        }
        return -1;
    }
}
```

## Submission at 2024-09-02 10:35:54


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
    int index = 1;
    int getKthNode(Node head, int k) {
        while(head.next!=null){
            if(index==k){
                return head.data;
            }
            head=head.next;
            index++;
        }
        if(index==k){
            return head.data;
        }
        return -1;
    }
}
```

## Submission at 2024-09-02 11:27:21


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
        Node curr=head, prev=null, next;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
}
```

## Submission at 2024-09-05 06:05:04


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
            return head.next;
        }
        Node curr = head;
        for(int i=1; i<x-1; i++){
            if(curr.next==null){
                return head;
            }
            curr = curr.next;

        }
        if(curr.next!=null){
            curr.next = curr.next.next;
        }

        return head;
    }
       
}
        
   
    
```

## Submission at 2024-09-05 06:27:38


```
import java.util.Scanner;

class Main{
public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[] a = new int[n];
    int[] b = new int[n];
    int[] c = new int[n];

    for(int i=0; i<n; i++){
        a[i] = sc.nextInt();
    }
    for(int i=0; i<n; i++){
        b[i] = sc.nextInt();
    }
    
    for(int i=0; i<n; i++){
        c[i] = Math.max(a[i],b[i]);
    }

    for(int i=0; i<n; i++){
        System.out.print(c[i] + " ");
    }
}

}

```

## Submission at 2024-09-09 02:41:14


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        List<Integer> diagonalElementsList = new ArrayList<>();
        int rows = matrix.length;
        int cols = matrix[0].length;
        for (int i = 0; i < rows; i++) {
            int j = i;
            int k = 0;
            while (j >= 0 && k < cols) {
                diagonalElementsList.add(matrix[j][k]);
                j--;
                k++;
            }
        }
        for (int i = 1; i < cols; i++) {
            int j = rows - 1;
            int k = i;
            while (j >= 0 && k < cols) {
                diagonalElementsList.add(matrix[j][k]);
                j--;
                k++;
            }
        }
        return diagonalElementsList;
    }
}
```

## Submission at 2024-09-09 09:53:28


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            } 
            return isPowerofthree(n/3);
        }
        return false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(isPowerofthree(n));
    }
}
```

## Submission at 2024-09-09 09:55:19


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            } 
            return isPowerofthree(n/3);
            
        }
        if(n==3){
            return true;
        } 
        return false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(isPowerofthree(n));
    }
}
```

## Submission at 2024-09-09 10:03:31


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            }
            return isPowerofthree(n/3);
        }
        return false;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(isPowerofthree(n));
    }
}
```

## Submission at 2024-09-09 10:07:25


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            }
            return isPowerofthree(n/3);
        }
        return false;
    }
    

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean ans = isPowerofthree(n);
        System.out.print(ans);
    }
}
```

## Submission at 2024-09-09 10:08:32


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            }
            return isPowerofthree(n/3);
        }
        if(n==3){
                return true;
            }
        return false;
    }
    

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean ans = isPowerofthree(n);
        System.out.print(ans);
    }
}
```

## Submission at 2024-09-09 10:14:46


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            }
            else{
                return isPowerofthree(n/3);
            }
            
        }
        if(n==3){
            return true;
            }
        return false;
    }
    

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean ans = isPowerofthree(n);
        System.out.print(ans);
    }
}
```

## Submission at 2024-09-09 10:16:08


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n>0 && n%3==0){
            if(n==3){
                return true;
            }
            else{
                return isPowerofthree(n/3);
            }
            
        }
        if(n==3){
            return true;
            }
            else{
                 return false;
            }
       
    }
    

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean ans = isPowerofthree(n);
        System.out.print(ans);
    }
}
```

## Submission at 2024-09-09 11:13:42


```
import java.util.Scanner;
class Main{
    public static void (String s, char x){
        int count = 0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i) == x){
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char x = sc.next();
        System.out.print(freq(s, x));
    }
}
```

## Submission at 2024-09-15 09:06:33


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofThree(int n){
        if(n == 1){
            return true;
        }
        if(n % 3 == 0){
           return isPowerofThree(n/3);
        }
        return false;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if(isPowerofThree(n)){
             System.out.print("True");
        }
        else{
            System.out.print("False");
        }
    }
}
```

## Submission at 2024-09-15 09:07:10


```
import java.util.Scanner;
class Main{
    public static boolean isPowerofThree(int n){
        if(n == 1){
            return true;
        }
        if(n<=0){
            return false;
        }
        if(n % 3 == 0){
           return isPowerofThree(n/3);
        }
        return false;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if(isPowerofThree(n)){
             System.out.print("True");
        }
        else{
            System.out.print("False");
        }
    }
}
```

## Submission at 2024-09-15 09:22:27


```
import java.util.Scanner;
class Main{
    public static int freq(String s, int x){
        return countdigit(s, x, 0);
    }

    public static int countdigit(String s, int x, int index){
        if(index == s.length()){
            return 0;
        }

        int count = (s.charAt(index) == x) ? 1 : 0;
        return count + countdigit(s, x, index+1);
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);
        int count = freq(s, x);
        System.out.print(count);
    }
}
```

## Submission at 2024-09-15 09:27:14


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
	    Node curr = head;
        while(curr!=null && curr.next!=null){
            if(curr.data == curr.next.data){
                curr.next = curr.next.next;
            }
            else{
                curr = curr.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-09-15 09:51:49


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
    if(head == null || head.next == null){
      return true;
    }
    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    while(secondhalf!=null){
      if(firsthalf.data != secondhalf.data){
        return false;
      }
      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }

    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;
    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}


```

## Submission at 2024-09-15 09:53:32


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
    if(head == null || head.next == null){
      return true;
    }
    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    while(secondhalf!=null){
      if(firsthalf.data != secondhalf.data){
        return false;
      }
      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
    secondHalf = reverseList(secondHalf);
    middle.next = secondHalf;

    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;
    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}


```

## Submission at 2024-09-15 09:54:02


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
    if(head == null || head.next == null){
      return true;
    }
    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    while(secondhalf!=null){
      if(firsthalf.data != secondhalf.data){
        return false;
      }
      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
   
    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;
    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}


```

## Submission at 2024-09-15 09:57:53


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
    if(head == null || head.next == null){
       return true;
    }
    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    Node secondHalfCopy = secondhalf;
    while(secondhalf!=null){
      if(firsthalf.data != secondhalf.data){
        reverseList(secondHalfCopy);
        middle.next = secondHalfCopy;
        return false;
      }
      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
    reverseList(secondHalfCopy);
    middle.next = secondHalfCopy;
   
    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;
    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}


```

## Submission at 2024-09-15 09:59:55


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
    
    if(head == null || head.next == null){
       return true;
    }

    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    Node secondHalfCopy = secondhalf;
    while(secondhalf!=null){

      if(firsthalf.data != secondhalf.data){
        return false;
      }

      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
    
    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;

    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }

    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}


```

## Submission at 2024-09-15 10:00:30


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
    
    if(head == null || head.next == null){
       return true;
    }

    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    while(secondhalf!=null){

      if(firsthalf.data != secondhalf.data){
        return false;
      }

      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
    
    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;

    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }

    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}


```

## Submission at 2024-09-15 10:40:20


```
class Solution{
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int m = matrix.size();
        int n = matrix.get(0).size();

        int[] maxincolumn = new int[n];
        Arrays.fill(maxincolumn, Integer.MIN_VALUE);

        for(int i=0; i<m; i++){
            for(int j = 0; j<n; i++){
                if(matrix.get(i).get(j)>maxincolumn[j]){
                    maxincolumn[j] = matrix.get(i).get(j);
                }
            }
        }

        List<List<Integer>> answer = new ArrayList<>();
        for(int i=0; i<m; i++){
            List<Integer> row = new ArrayList<>();
            for(int j=0; j<n; j++){
                if(matrix.get(i).get(j) == -1){
                    row.add(maxincolumn[j]);    
                }
                else{
                    row.add(matrix.get(i).get(j));
                }
            }
            answer.add(row);
        }
        return answer;
    }
}

```

## Submission at 2024-09-15 11:29:44


```
import java.util.Scanner;
import java.util.Arrays;
class Main{
    public static boolean areEqual(int[] arr1, int[] arr2){
        if(arr1.length != arr2.length){
            return false;
        }
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        for(int i=0; i<arr1.length; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int l1 = sc.nextInt();
        int l2 = sc.nextInt();

        int[] arr1 = new int[l1];
        int[] arr2 = new int[l2];

        for(int i=0; i<l1; i++){
            arr1[i] = sc.nextInt();
        }

        for(int i=0; i<l2; i++){
            arr2[i] = sc.nextInt();
        }

        boolean result = areEqual(arr1, arr2);
        System.out.print(result ? "true":"false");
    }
}
```

## Submission at 2024-09-15 11:37:59


```
import java.util.Scanner;
class Main{
    public static int calcSum(int n){
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(i%3 == 0 || i%5 == 0 || i%7 == 0){
                sum+=i;
            }
        }
        return sum;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(calcSum(n));
    }
}
```

## Submission at 2024-09-15 11:44:02


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int count = 0;
        for(int i=0; i<n; i++){
            int num = sc.nextInt();
            String str = Integer.toString(num);

            if(str.length()%2 == 0){
                count++;
            }
        }
        System.out.print(count);
    }
}
```

## Submission at 2024-09-15 11:58:03


```
import java.util.Scanner;
class Main{
    public static int missingNum(int[] arr, int k){
        int index = 0;
        int currNum = 1;
        int missing = 0;
        
        while(missing < k){

            if(index < arr.length && arr[index] == currNum){
                index++;
            }
            else{
                missing++;
                if(missing == k){
                    return currNum;
                }
            }
            currNum++;
        }
        return -1;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        System.out.print(missingNum(arr, k));
    }
}
```

## Submission at 2024-09-15 12:01:16


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int M = sc.nextInt();
        int N = sc.nextInt();

        int[][] matrix = new int[M][N];
 
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        int[][] transposedMatrix = new int[N][M];

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                transposedMatrix[j][i] = matrix[i][j];
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                System.out.print(transposedMatrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-09-16 03:55:26


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
    
    if(head == null || head.next == null){
       return true;
    }

    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    while(secondhalf!=null){

      if(firsthalf.data != secondhalf.data){
        return false;
      }

      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
    
    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;

    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
    }

    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}



```

## Submission at 2024-09-16 04:10:18


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
    
    if(head == null || head.next == null){
       return true;
    }

    Node middle = findMiddle(head);
    Node secondhalf = middle.next;
    middle.next = null;
    
    secondhalf = reverseList(secondhalf);
    
    Node firsthalf = head;
    while(secondhalf!=null){

      if(firsthalf.data != secondhalf.data){
        return false;
      }

      firsthalf = firsthalf.next;
      secondhalf = secondhalf.next;

    }
    
    return true;
  }

  public static Node findMiddle(Node head){
    Node fast = head;
    Node slow = head;

    while(fast!=null && fast.next!=null && fast.next.next != null){
      slow = slow.next;
      fast = fast.next.next;
    }

    return slow;
  }

  public static Node reverseList(Node head){
    Node prev = null;
    Node curr = head;
    Node next;

    while(curr!=null){
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }

    return prev;
  }
}



```

## Submission at 2024-09-16 05:11:40


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int m = matrix.size();
        int n = matrix.get(0).size();
        int[] maxincolumn = new int[n];

        Arrays.fill(maxincolumn, Integer.MIN_VALUE);

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(matrix.get(i).get(j) > maxincolumn[j]){
                    maxincolumn[j] = matrix.get(i).get(j);
                }
            }
        }

        List<List<Integer>> result = new ArrayList<>();
        for(int i=0; i<m; i++){
            List<Integer> row = new ArrayList<>();
            for(int j=0; j<n; j++){
                if(matrix.get(i).get(j) == -1){
                    row.add(maxincolumn[j]);
                }
                else{
                    row.add(matrix.get(i).get(j));
                }
            }
            result.add(row);
        }
        return result;
    }
}

```

## Submission at 2024-10-07 10:02:33


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        Stack<Integer> stack = new Stack<>();
        while(!q.isEmpty()){
            stack.push(q.poll());
        }

        while(!stack.isEmpty()){
            stack.pop();
        }
        return q.offer(stack.pop());
    }
}
```

## Submission at 2024-10-07 10:32:32


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char[] arr = new char[s.length()];
        for(int i=0; i<arr.length; i++){
            arr[i] = s.charAt(i);
        }
        for(int i=0; i<arr.length-1; i++){
            if(Character.isDigit(arr[i])){
                if(arr[i] > arr[i+2]){
                    char temp = arr[i];
                    arr[i] = arr[i+2];
                    arr[i+2] = temp;
                }
            }
            else{
                continue;
            }
        }

        for(int i=0; i<arr.length-1; i++){
            if(Character.isDigit(arr[i])){
                if(arr[i] > arr[i+2]){
                    char temp = arr[i];
                    arr[i] = arr[i+2];
                    arr[i+2] = temp;
                }
            }
            else{
                continue;
            }
        }
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]);
        }
    }
}
```

## Submission at 2024-10-07 10:51:07


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Stack<Character> stack = new Stack<>();
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            while(ch!='.'){
                stack.push(ch);
            }
            while(!stack.isEmpty()){
                System.out.print(stack.pop());
            }
        }
    }
    
}
```

## Submission at 2024-10-07 11:14:42


```
import java.util.*;
class Main{
    public static void main(String[] args){
        StringBuilder result = new StringBuilder();
        Stack<Character> stack = new Stack<>();
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        for(int i=0; i<s.length(); i++){
            char ch = s.charAt(i);
            while(ch!='.'){
                stack.push(ch);
            }
            while(!stack.isEmpty()){
                result.append(stack.pop());
            }
            result.append(ch);
        }
 
    }
    
}
```

## Submission at 2024-10-28 10:08:33


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
        if(root == null){
            return -1;
        }
        int min = root.data;
        while(root.left!=null){
            min = root.left.data;
        }
        return min;
    }
}
```

## Submission at 2024-10-28 10:08:34


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
        if(root == null){
            return -1;
        }
        int min = root.data;
        while(root.left!=null){
            min = root.left.data;
        }
        return min;
    }
}
```

## Submission at 2024-10-28 10:40:42


```
class Main{
    public static void customSort(String order, String s){
        int n1 = order.length();
        int n2 = s.length();
        int[] result = new int[n2];
        char[] arr1 = new char[n1];
        char[] arr2 = new char[n2];

        for(int i=0; i<n1; i++){
            arr1[i] = order.charAt(i);
        }
        for(int j=0; j<n2; i++){
            arr2[j] = s.charAt(j);
        }

        for(int k=0; k<n2; k++){
            if(arr1[k] == )
        }
    }
}
```

## Submission at 2024-10-28 10:40:45


```
class Main{
    public static void customSort(String order, String s){
        int n1 = order.length();
        int n2 = s.length();
        int[] result = new int[n2];
        char[] arr1 = new char[n1];
        char[] arr2 = new char[n2];

        for(int i=0; i<n1; i++){
            arr1[i] = order.charAt(i);
        }
        for(int j=0; j<n2; i++){
            arr2[j] = s.charAt(j);
        }

        for(int k=0; k<n2; k++){
            if(arr1[k] == )
        }
    }
}
```

## Submission at 2024-10-28 11:11:45


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:11:45


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:13:28


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:14:02


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:14:02


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:18:02


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:18:05


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:18:05


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int k = 2;
        int[] arr = {1, 2, 3, 4, 4, 4, 4};
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:27:51


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            int m = sc.nextInt();
            arr[i] = m;
        }
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-28 11:27:51


```
import java.util.*;
class Main{
    public static int Koccur(int[] nums, int k){
        int n = nums.length;
        int count = 1;
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i=0; i<n; i++){
            map.put(i, nums[i]);
            if(map.get(i) == map.get(i+1)){
                count++;
            }
            if(count >= k){
                return map.get(i);
            }

        }
        return -1;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0; i<n; i++){
            int m = sc.nextInt();
            arr[i] = m;
        }
        int a = Koccur(arr, k);
        System.out.print(a);
    }
}
```

## Submission at 2024-10-30 04:21:55


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
       return calculatesum(root, 0);
    }

    public int calculatesum(Node node, int currentsum){
        if(node == null){
          return 0;
        }

        currentsum = 10*currentsum + node.data;

        if(node.left == null && node.right == null){
          return currentsum;
        }

        int left = calculatesum(node.left, currentsum);
        int right = calculatesum(node.right, currentsum);

        return left+right;
    }
}
```

## Submission at 2024-11-25 10:02:21


```
import java.util.*; 
class Main{
    public static boolean AP(int[] arr){
        int n = arr.length;
        int diff = arr[1] - arr[0];
        for(int i=1; i<n; i++){
            if(arr[i+1] - arr[i] == diff){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int size = input.nextInt();
        int[] arr = new int[size];
        for(int i=0; i<size; i++){
            int n = input.nextInt();
        }
        
        for(int j=0; j<size; i++){
            
        }
    }
}
```

## Submission at 2024-11-25 10:33:53


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
       if(root == null){
          return -1;
       }
       
       if(root.data == n){
            return n;
       }

       if(n < root.data){
          int n1 = findMaxForN(root.left, n);;
       }
       else{
          int n2 = findMaxForN(root.right, n);
       }
       return -1;
    }
    
}
```

## Submission at 2024-11-25 10:51:47


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int target = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }

        List<Integer> result = new ArrayList<>();
        Arrays.sort(arr);
        for(int j=0; j<arr.length; j++){
            if(arr[j] == target){
                result.add(j);
            }
        }
        System.out.print(result);

    }
}
```

## Submission at 2024-11-25 10:57:29


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int target = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }


        Arrays.sort(arr);
        for(int j=0; j<arr.length; j++){
            if(arr[j] == target){
                System.out.print(j + " ");
            }
        }


    }
}
```

## Submission at 2024-11-25 11:05:03


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();
        int counta = 0;
        int countb = 0;
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i) == 'a'){
                counta++;
            }
            if(str.charAt(i) == 'b'){
                countb++;
            }
        }
        if(counta > countb){
            System.out.print("a");
        }
        else{
            System.out.print("b");
        }
    }
}
```

## Submission at 2024-11-25 11:14:08


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=0; i<n; i++){
            for(int j = 0; j<i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    
    }
}
```

## Submission at 2024-11-25 11:14:42


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=0; i<n; i++){
            for(int j = 0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    
    }
}
```

## Submission at 2024-11-25 11:23:41


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        for(int i=0; i<n; i++){
            if(arr[i+1]>arr[i]){
            System.out.print("YES");
            }
            else{
                System.out.print("NO");
            }
        }
    }
}
```

## Submission at 2024-11-25 11:26:30


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        for(int i=0; i<n-1; i++){
            if(arr[i+1]>arr[i]){
            System.out.print("YES");
            }
            else{
                System.out.print("NO");
            }
        }
    }
}
```

## Submission at 2024-11-25 11:33:01


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        if(isBST(arr)){
            System.out.print("YES");
        }
        else{
            System.out.print("no");
        }
        
    }
    public static boolean isBST(int[] arr){
        int n = arr.length;
        for(int i=0; i<n-1; i++){
            if(arr[i+1]>arr[i]){
                return true;
            }
        }
        return false;
    }
}
```

## Submission at 2024-11-25 11:37:20


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        if(isBST(arr)){
            System.out.print("YES");
        }
        else{
            System.out.print("no");
        }
        
    }
    public static boolean isBST(int[] arr){
        int n = arr.length;
        for(int i=0; i<n-2; i++){
            if(arr[i+1]>arr[i] && arr[i+2] > arr[i+1]){
                return true;
            }
        }
        return false;
    }
}
```

## Submission at 2024-11-25 11:38:07


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        if(isBST(arr)){
            System.out.print("YES");
        }
        else{
            System.out.print("no");
        }
        
    }
    public static boolean isBST(int[] arr){
        int n = arr.length;
        for(int i=0; i<n-2; i++){
            if(arr[i+1]>arr[i] && arr[i+2] > arr[i+1]){
                return true;
            }
        }
        return false;
    }
}
```

## Submission at 2024-11-26 08:52:06


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
        if(root == null){
            return true;
        }
        return sym(root.left, root.right);
    }
    
    public boolean sym(Node lefttree, Node righttree){
        if(lefttree == null && righttree == null){
            return true;
        }
        if(lefttree == null || righttree == null){
            return false;
        }

        return (lefttree.data == righttree.data) &&
               sym(lefttree.left, righttree.right)&&
               sym(lefttree.right, righttree.left);
    }
}
```

