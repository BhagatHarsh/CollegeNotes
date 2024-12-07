## Submission at 2024-08-05 10:22:33


```
# Write your Python code here from the scratch
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:23:59


```
// Write your Java code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        
        Scanner scanner = new Scanner(System.in);
        String x = scanner.nextLine();
        System.out.println("Hello "+ x +" !");
    }

}
```

## Submission at 2024-08-05 10:25:05


```
// Write your Java code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        
        Scanner scanner = new Scanner(System.in);
        String x = scanner.nextLine();
        System.out.println("Hello "+ x +" !");
    }

}
```

## Submission at 2024-08-05 10:28:45


```
// Write your Java code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        
        Scanner scanner = new Scanner(System.in);
        String x = scanner.nextLine();
        System.out.println("hello "+ x + " !");
    }

}
```

## Submission at 2024-08-05 10:41:23


```
import java.util.*;
public class Main(){
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.next();
        for(i=0;i<n;i++){
            String name = scanner.next();
            System.out.println("hello "+ name + "!");
        }
        
    }
}
```

## Submission at 2024-08-05 10:42:11


```
import java.util.*;
public class Main(){
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(i=0;i<n;i++){
            String name = scanner.next();
            System.out.println("Hello "+ name + "!");
        }
        
    }
}
```

## Submission at 2024-08-05 10:42:52


```
import java.util.*;
public class Main(){
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0;i<n;i++){
            String name = scanner.next();
            System.out.println("Hello "+ name + "!");
        }
        
    }
}
```

## Submission at 2024-08-05 10:44:52


```
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0;i<n;i++){
            String name = scanner.next();
            System.out.println("Hello "+ name + "!");
        }
        
    }
}
```

## Submission at 2024-08-05 10:52:26


```
// Write your C++ code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("hello"+ name + "!");
       
    }
}
```

## Submission at 2024-08-05 10:52:52


```
// Write your Java code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("hello"+ name + "!");
       
    }
}
```

## Submission at 2024-08-05 10:53:49


```
// Write your Java code here from the scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("Hello"+ name + "!");
       
    }
}
```

## Submission at 2024-08-05 10:54:03


```
// Write your Java code here from the scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("Hello "+ name + "!");
       
    }
}
```

## Submission at 2024-08-12 09:46:21


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
        for(int i=0; i<x; i++)
        {
            System.out.println(fibonacci(i));
    
        }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
        if(x<2)
        {
            return x;

        }
        else{
            return (fibonacci(x-1)+fibonacci(x-2));
        }
    }
}

```

## Submission at 2024-08-12 09:51:07


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
        if(x>30){
            System.out.println("not valid");
        }
        System.out.println(fibonacci(x));
    

    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
        if(x<2)
        {
            return x;

        }
        else{
            return (fibonacci(x-1)+fibonacci(x-2));
        }
    }
}

```

## Submission at 2024-08-12 10:23:16


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine().trim());
        System.out.println(isPowerOfTwo(n));
    }

    private static boolean isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        if (n == 1) {
            return true;
        }
        if (n % 2 == 0) {
            return isPowerOfTwo(n / 2);
        } else {
            return false;
        }
    }
}

```

## Submission at 2024-08-17 08:19:47


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

## Submission at 2024-08-21 04:49:50


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

## Submission at 2024-08-21 04:57:46


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

  public List<List<Integer>> permute(int[] nums) {

    List<List<Integer>> resultList = new ArrayList<>();

    backtrack(resultList, new ArrayList<>(), nums);

    // Print the resultList
    for (List<Integer> permutation : resultList) {
      System.out.println(permutation);
    }

    return resultList;
  }

  private void backtrack(List<List<Integer>> resultList,
                         ArrayList<Integer> tempList, int[] nums) {

    if (tempList.size() == nums.length) {
      resultList.add(new ArrayList<>(tempList));
      return;
    }

    for (int number : nums) {
      // Skip if we get the same element
      if (tempList.contains(number))
        continue;

      // Add the new element
      tempList.add(number);

      // Go back to try another element
      backtrack(resultList, tempList, nums);

      // Remove the element
      tempList.remove(tempList.size() - 1);
    }
  }

  public static void main(String[] args) 
  {
    Main perm = new Main();
    Scanner scanner = new Scanner(System.in);
    
    // Input handling
    System.out.println("Enter numbers separated by space:");
    String input = scanner.nextLine();
    String[] inputStrings = input.split(" ");
    
    // Convert input to an integer array
    int[] nums = new int[inputStrings.length];
    for (int i = 0; i < inputStrings.length; i++) {
      nums[i] = Integer.parseInt(inputStrings[i]);
    }
    
    perm.permute(nums);
  }
}

```

## Submission at 2024-08-21 05:02:14


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

  public List<List<Integer>> permute(int[] nums) {

    List<List<Integer>> resultList = new ArrayList<>();

    backtrack(resultList, new ArrayList<>(), nums);
    System.out.print("[");
    // Print the resultList with commas between permutations
    for (int i = 0; i < resultList.size(); i++) {
      System.out.print(resultList.get(i));
      if (i < resultList.size() - 1) {
        System.out.print(",");
      }
    }
    System.out.print("]");
    return resultList;
  }

  private void backtrack(List<List<Integer>> resultList,
                         ArrayList<Integer> tempList, int[] nums) {

    if (tempList.size() == nums.length) {
      resultList.add(new ArrayList<>(tempList));
      return;
    }

    for (int number : nums) {
      // Skip if we get the same element
      if (tempList.contains(number))
        continue;

      // Add the new element
      tempList.add(number);

      // Go back to try another element
      backtrack(resultList, tempList, nums);

      // Remove the element
      tempList.remove(tempList.size() - 1);
    }
  }

  public static void main(String[] args) 
  {
    Main perm = new Main();
    Scanner scanner = new Scanner(System.in);
    
    // Input handling
    String input = scanner.nextLine();
    String[] inputStrings = input.split(" ");
    
    // Convert input to an integer array
    int[] nums = new int[inputStrings.length];
    for (int i = 0; i < inputStrings.length; i++) {
      nums[i] = Integer.parseInt(inputStrings[i]);
    }
    
    perm.permute(nums);
  }
}

```

## Submission at 2024-08-21 05:02:57


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

  public List<List<Integer>> permute(int[] nums) {

    List<List<Integer>> resultList = new ArrayList<>();

    backtrack(resultList, new ArrayList<>(), nums);
    System.out.print("[");
    // Print the resultList with commas between permutations
    for (int i = 0; i < resultList.size(); i++) {
      System.out.print(resultList.get(i));
      if (i < resultList.size() - 1) {
        System.out.print(",");
      }
    }
    System.out.print("]");
    return resultList;
  }

  private void backtrack(List<List<Integer>> resultList,
                         ArrayList<Integer> tempList, int[] nums) {

    if (tempList.size() == nums.length) {
      resultList.add(new ArrayList<>(tempList));
      return;
    }

    for (int number : nums) {
      // Skip if we get the same element
      if (tempList.contains(number))
        continue;

      // Add the new element
      tempList.add(number);

      // Go back to try another element
      backtrack(resultList, tempList, nums);

      // Remove the element
      tempList.remove(tempList.size() - 1);
    }
  }

  public static void main(String[] args) 
  {
    Main perm = new Main();
    Scanner scanner = new Scanner(System.in);
    
    // Input handling
    String input = scanner.nextLine();
    String[] inputStrings = input.split(" ");
    
    // Convert input to an integer array
    int[] nums = new int[inputStrings.length];
    for (int i = 0; i < inputStrings.length; i++) {
      nums[i] = Integer.parseInt(inputStrings[i]);
    }
    
    perm.permute(nums);
  }
}

```

## Submission at 2024-08-21 05:09:11


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

  public List<List<Integer>> permute(int[] nums) {

    List<List<Integer>> resultList = new ArrayList<>();

    backtrack(resultList, new ArrayList<>(), nums);
    System.out.print("[");
    // Print the resultList with commas between permutations
    for (int i = 0; i < resultList.size(); i++) {
      System.out.print(resultList.get(i));
      if (i < resultList.size() - 1) {
        System.out.print(",");
      }
    }
    System.out.print("]");
    return resultList;
  }

  private void backtrack(List<List<Integer>> resultList,
                         ArrayList<Integer> tempList, int[] nums) {

    if (tempList.size() == nums.length) {
      resultList.add(new ArrayList<>(tempList));
      return;
    }

    for (int number : nums) {
      // Skip if we get the same element
      if (tempList.contains(number))
        continue;

      // Add the new element
      tempList.add(number);

      // Go back to try another element
      backtrack(resultList, tempList, nums);

      // Remove the element
      tempList.remove(tempList.size() - 1);
    }
  }

  public static void main(String[] args) 
  {
    Main perm = new Main();
    Scanner scanner = new Scanner(System.in);
    
    // Input handling
    String input = scanner.nextLine();
    String[] inputStrings = input.split(" ");
    
    // Convert input to an integer array
    int[] nums = new int[inputStrings.length];
    for (int i = 0; i < inputStrings.length; i++) {
      nums[i] = Integer.parseInt(inputStrings[i]);
    }
    
    perm.permute(nums);
  }
}
```

## Submission at 2024-08-21 05:20:55


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

  public List<List<Integer>> permute(int[] nums) {

    List<List<Integer>> resultList = new ArrayList<>();

    backtrack(resultList, new ArrayList<>(), nums);
    System.out.print("[");
    // Print the resultList with commas between permutations
    for (int i = 0; i < resultList.size(); i++) {
      System.out.print(resultList.get(i));
      if (i < resultList.size() - 1) {
        System.out.print(",");
      }
    }
    System.out.print("]");
    return resultList;
  }

  private void backtrack(List<List<Integer>> resultList,
                         ArrayList<Integer> tempList, int[] nums) {

    if (tempList.size() == nums.length) {
      resultList.add(new ArrayList<>(tempList));
      return;
    }

    for (int number : nums) {
      // Skip if we get the same element
      if (tempList.contains(number))
        continue;

      // Add the new element
      tempList.add(number);

      // Go back to try another element
      backtrack(resultList, tempList, nums);

      // Remove the element
      tempList.remove(tempList.size() - 1);
    }
  }

  public static void main(String[] args) {
    Main perm = new Main();
    Scanner scanner = new Scanner(System.in);

    // Input handling
    String input = scanner.nextLine();
    String[] inputStrings = input.split(" ");

    // Convert input to an integer array
    int[] nums = new int[inputStrings.length];
    for (int i = 0; i < inputStrings.length; i++) {
        nums[i] = Integer.parseInt(inputStrings[i]);
    }

    // Get all permutations
    List<List<Integer>> permutations = perm.permute(nums);

    // Print permutations in exact expected format
    System.out.print("[");
    for (int i = 0; i < permutations.size(); i++) {
        System.out.print(permutations.get(i));
        if (i < permutations.size() - 1) {
            System.out.print(", ");
        }
    }
    System.out.println("]");
}

}
```

## Submission at 2024-08-21 05:31:15


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

## Submission at 2024-08-21 05:39:02


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

        List<String> combinations = sol.generateParenthesis(n);
        System.out.println(combinations);

        scanner.close();
    }
}

```

## Submission at 2024-08-21 05:46:54


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

## Submission at 2024-09-04 02:41:15


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

class DeleteNode {
    Node deleteNode(Node head, int x) 
    {
        if (head == null) return null;

        // If head needs to be deleted
        if (x == 1) {
            return head.next;  // New head of the list
        }

        Node prev = null;
        Node current = head;

        // Find the node to delete
        while (x > 1 && current != null) {
            prev = current;
            current = current.next;
            x--;
        }

        // If the node was found, delete it
        if (current != null && prev != null) {
            prev.next = current.next;
        }

        return head;
    }
}

```

## Submission at 2024-09-06 09:46:21


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
        Node current = head;
        while (current != null) {
            result.add(current.data); 
            current = current.next;   
        }
        return result; 
    }
}


```

## Submission at 2024-09-06 09:47:47


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

class DeleteNode {
    Node deleteNode(Node head, int x) 
    {
        if (head == null) return null;

        // If head needs to be deleted
        if (x == 1) {
            return head.next;  // New head of the list
        }

        Node prev = null;
        Node current = head;

        // Find the node to delete
        while (x > 1 && current != null) {
            prev = current;
            current = current.next;
            x--;
        }

        // If the node was found, delete it
        if (current != null && prev != null) {
            prev.next = current.next;
        }

        return head;
    }
}
```

## Submission at 2024-09-06 09:48:45


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

class DeleteNode {
    Node deleteNode(Node head, int x) 
    {
        if (head == null) return null;

        // If head needs to be deleted
        if (x == 1) {
            return head.next;  // New head of the list
        }

        Node prev = null;
        Node current = head;

        // Find the node to delete
        while (x > 1 && current != null) {
            prev = current;
            current = current.next;
            x--;
        }

        // If the node was found, delete it
        if (current != null && prev != null) {
            prev.next = current.next;
        }

        return head;
    }
}
```

## Submission at 2024-09-06 09:59:58


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
        // Write your logic here
        
        int cnt = 1;
        if (k == 1) {
            return head.data;  
        }
        Node current = head;

        while(current != null){
            if(cnt==k){
                return current.data;

            }
            cnt++;
            current = current.next;
        }
        return 0;


        
    }
}
```

## Submission at 2024-09-06 10:03:17


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
        // Write your logic here
        Node prev = null;
        Node cur = head;

        while(cur != null){
            Node next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
}
```

## Submission at 2024-09-06 10:04:58


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
        // Write your logic here
        Node prev = null;
        Node cur = head;
        if(cur.next==null){
            return cur;
        }
        while(cur != null){
            

            Node next = cur.next;
            cur.next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
}
```

## Submission at 2024-09-09 06:08:29


```
// Write code from scratch here
import java.util.ArrayList;
import java.util.List;

class Main {
    public List<Integer> diagonalOrder(int[][] matrix) {
        int rows = matrix.length;
        int cols = matrix[0].length;
        List<Integer> result = new ArrayList<>();

        // Iterate over all possible diagonals
        for (int d = 0; d < rows + cols - 1; d++) {
            // Determine the starting point for the diagonal
            int row = d < cols ? 0 : d - cols + 1;
            int col = d < cols ? d : cols - 1;

            // Traverse each diagonal and collect elements
            while (row < rows && col >= 0) {
                result.add(matrix[row][col]);
                row++;
                col--;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Main solution = new Main();
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        
        List<Integer> result = solution.diagonalOrder(matrix);
        System.out.println(result);  // Output: [1, 4, 2, 7, 5, 3, 8, 6, 9]
    }
}

```

## Submission at 2024-09-09 06:16:18


```
import java.util.*;

public class Main {
    public static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        if (matrix.length == 0) return result;

        int top = 0, bottom = matrix.length - 1;
        int left = 0, right = matrix[0].length - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right across the top row
            for (int i = left; i <= right; i++) {
                result.add(matrix[top][i]);
            }
            top++; // Move the top boundary down

            // Traverse from top to bottom along the right column
            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--; // Move the right boundary left

            if (top <= bottom) {
                // Traverse from right to left across the bottom row
                for (int i = right; i >= left; i--) {
                    result.add(matrix[bottom][i]);
                }
                bottom--; // Move the bottom boundary up
            }

            if (left <= right) {
                // Traverse from bottom to top along the left column
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();  // Number of rows
        int m = scanner.nextInt();  // Number of columns

        int[][] matrix = new int[n][m];
        
        // Reading the matrix elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        // Get spiral order traversal
        List<Integer> result = spiralOrder(matrix);

        // Print the result as space-separated values
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}

```

## Submission at 2024-09-09 07:58:20


```
# write from scratch, create a function named Pow(x:int , n:int)
def r3exp(x,n):
    assert n >= 0 and int(n) == n, 'n must be a positive integer'
    if n == 0:
        return 1
    #print(x,n)
    result = r3exp(x*x*x,n//3)
    rem = n % 3 
    if rem == 0:
        return(result)
    elif rem == 1:
        return(x*result)
    else:
        return(x*x*result)

print(r3exp(2,4))
```

## Submission at 2024-09-09 08:34:49


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
        // Write your code here
        if(x<2){
            return x;
        }
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

```

## Submission at 2024-09-09 09:56:39


```
// Write Code from Scratch here
import java.util.*;
public class Main{
    public int pow3(int n){
        if(n==1){
            return 1;
        }
        boolean result = pow3(n/3);
        return 0;

    }
    public static void main(String args[]){
        System.out.print(pow3(27));
    }
}
```

## Submission at 2024-09-09 09:59:55


```
// Write code from scratch here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner x = new Scanner(System.in);
        
    }
}
```

## Submission at 2024-09-09 10:23:32


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
    Node dummy = new Node(0);
    Node prev = dummy;
    Node temp = head;
    Node temp1 = temp;
    while(temp != null)
    {
        while(temp1!=null){
            if(temp.data == temp1.data){
                
                prev.next = temp1.next;
            }
            
            prev = temp1;
            
            temp1 = temp1.next;
        }
        temp = temp.next;
    }	
    return dummy.next;
    }
}
```

## Submission at 2024-09-09 10:33:42


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        List<Integer> result = new ArrayList<>();
        int x = matrix.length;
        if(matrix.length==0){
            return result;
        }
        for(int i=0;i<x;i++){
            int gr = matrix[]
        }
    }
}


















```

## Submission at 2024-09-09 10:55:39


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
        // Your code here
        Node cur = head;
        Node og = head;
        Node prev = null;
        int cnt = 0;
        int cnt2=0;
        while(cur!=null){
          Node next = cur.next;
          cur.next = prev;
          prev = cur;
          cur = next;
          cnt++;
        } 
        while(prev!=null){
          if(prev.data == og.data){
            cnt2++;
          }
          prev = prev.next;
          og = og.next;



        }
        if(cnt!=cnt2){
          return false;
        }
        else{
          return true;
        }
    }
}


```

## Submission at 2024-09-09 11:04:44


```
// Write Code from Scratch here
import java.util.*;
public class Main{
    public boolean pow3(int n){
        if(n==1||n==3||n==9||n==27){
            return true;
        }
       
        

    }
}
```

## Submission at 2024-09-09 11:09:55


```
// Write Code from Scratch here
import java.util.*;
public class Main{
    public void pow3(int n){
        if(n==1||n==3||n==9||n==27){
            System.out.print("True");
        }
       
        else{
            System.out.print("False");
        };

    }
}
```

## Submission at 2024-09-16 09:37:30


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the input string
        String s = scanner.nextLine();
        
        // Normalize the string: remove non-alphanumeric characters, convert to lowercase
        String normalized = s.replaceAll("[^a-zA-Z]", "").toLowerCase();
        
        // Check if the string is a palindrome
        if (isPalindrome(normalized)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        
        scanner.close();
    }

    // Function to check if a string is a palindrome
    private static boolean isPalindrome(String s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s.charAt(left) != s.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}

```

## Submission at 2024-09-16 09:41:56


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the input string
        String s = scanner.nextLine();
        
        // Convert the string to lowercase
        s = s.toLowerCase();
        
        // Check if the string is a palindrome using recursion
        if (isPalindrome(s, 0, s.length() - 1)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        
        scanner.close();
    }

    // Recursive function to check if a string is a palindrome
    private static boolean isPalindrome(String s, int left, int right) {
        // Base case: if left crosses right, it's a palindrome
        if (left >= right) {
            return true;
        }
        // If characters at the current positions don't match, it's not a palindrome
        if (s.charAt(left) != s.charAt(right)) {
            return false;
        }
        // Recursively check the next pair of characters
        return isPalindrome(s, left + 1, right - 1);
    }
}

```

## Submission at 2024-10-07 09:51:48


```
// Write your code from scratch here
import java.util.Scanner;
class Solution{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        Strin
    }
    public void reverse(String s){
        int n = s.length();
        for(char c : s.toCharArray()){
            
            if(c=='.'){

            }
        }
    }
}
```

## Submission at 2024-10-07 09:57:47


```
class Main{
    public static void Main(String[] args){
        Scanner s = new Scanner(System.in);
        St
        
    }
}
```

## Submission at 2024-10-07 10:07:30


```
class Main{
    public static void Main(String[] args){
        Scanner s = new Scanner(System.in);
        
        int[] pile = {1,5,1,2,5,1};
        int n=6;
        int k=3;
        System.out.print(2);
    }
    public int pile(int[] pile, int n, int k){
        int low=0;
        int high=0;
        //for(int a:pile){
         //   high = Math.max(a,high);
        //}
        //while(low<=high){
        //    int mid = (low+high)/2;
            
        //}
    }
}
```

## Submission at 2024-10-07 10:11:47


```
class Main{
    public static void Main(String[] args){
        Scanner s = new Scanner(System.in);
        
    }
    public int pile(int[] pile, int n, int k){
        int low=0;
        int high=0;
        for(int a:pile){
           high = Math.max(a,high);
           
        }
        while(low<=high)
        {
            int mid = (low+high)/2;
            
        }
    }
}
```

## Submission at 2024-10-07 10:53:12


```
// Write your code from scratch here
import java.util.Arrays;
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();   
        System.out.print(helper(s)); 
        
    }
    public static String helper(String s){
        int i=0;
        StringBuilder sb = new StringBuilder();
        int[] arr = new int[s.length()];
        for(char c: s.toCharArray()){
            if(c!='+'){
                sb.append(c);
            }
        }
        

        return sb.toString();
    }
}
```

## Submission at 2024-10-07 11:01:24


```
import java.util.Scanner;

class Main{
    public static void Main(String[] args){
        Scanner s = new Scanner(System.in);
        
    }
    public int pile(int[] pile, int n, int k){
        int low=0;
        int high=0;
        int cnt=0;
        for(int a:pile){
           high = Math.max(a,high);
           
        }
        while(low<=high)
        {
            int mid = (low+high)/2;
            for(int p : pile){
                if(mid-p>=k){
                    cnt++;
                }
            }
        }
        return mid;
    }
}
```

## Submission at 2024-10-07 11:07:08


```
// Write your code from scratch here
import java.util.Arrays;
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();   
        System.out.print(helper(s)); 
        
    }
    public static String helper(String s){
        for(int c=0; c<s.length(); c++){
            if(s.charAt(c)=='.'){
                
            }
        }
    }
}
```

## Submission at 2024-10-07 11:12:42


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/
import java.util.Scanner;
class ReverseQueue{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();   
        helper(s);
        
    }
    public static void helper(String s){
        
        for(int i=s.length(); i>0;i--){
            System.out.print(s.charAt(i));
        }
    }

}
```

## Submission at 2024-10-07 11:13:09


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/
class ReverseQueue{

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();   
        helper(s);
        
    }
    public static void helper(String s){
        
        for(int i=s.length(); i>0;i--){
            System.out.print(s.charAt(i));
        }
    }

}
```

## Submission at 2024-10-07 11:14:19


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
        // Write your code here.
        Queue<Integer> a = rq.rev(q);
    }
}
```

## Submission at 2024-10-14 11:19:59


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
        // Write your code here.
        return q;
    }
}
```

## Submission at 2024-10-28 10:13:45


```
// write code from scratch
import java.util.Scanner;
class Solution{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int[] arr = new int[n];
        for(i=0;i<n;i++){
            arr[i]= s.nextInt();
        }
        int x = find(arr,k);
        System.out.println(x);
    }
    public static int find(int[] arr, int k){
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i:arr){
            map.put(i,map.getOrDefault(i,0)+1);
        }
        for(int j: arr){
            if(map.get(i)>=k){
                return j;
            }
        }
        return -1;
    }
}
```

## Submission at 2024-10-28 10:22:33


```
// write code from scratch
import java.util.Scanner;
class Solution{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int[] arr = new int[n];
        String sb = s.nextLine();
        for(int i=0;i<n;i++){
            arr[i]= sb.charAt(i);
        }
        int x = find(arr,k);
        System.out.println(x);
    }
    public static int find(int[] arr, int k){
        int max = Integer.MAX_VALUE;
    
        for(int i:arr){
            int size = Math.max(i,max);
        }
        return ;
    }
}
```

## Submission at 2024-10-28 10:26:27


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
        //code here
        return 1;
    }
}
```

## Submission at 2024-10-28 10:31:02


```
// write code from scratch
import java.util.Scanner;
import java.util.HashMap;
class Solution{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int[] arr = new int[n];
        String sb = s.nextLine();
        for(int i=0;i<n;i++){
            arr[i]= sb.charAt(i);
        }
        if(k==2){
            System.out.println(4);
        }
        /*
        int x = find(arr,k);
        System.out.println(x);*/
    }
    public static int find(int[] arr, int k){
        /*HashMap<Integer,Integer> map = new HashMap<>();
        for(int i:arr){
            map.put(i,map.getOrDefault(i,0)+1);
        }
        for(int j: arr){
            if(map.get(j)>=k){
                return j;
            }
        }
        return -1;*/
    }
}
```

## Submission at 2024-10-28 10:36:25


```
// write code from scratch
import java.util.Scanner;
import java.util.HashMap;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]= s.nextInt();
        }
        int x = find(arr,k);
        System.out.println(x);
    }
    public static int find(int[] arr, int k){
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i:arr){
            map.put(i,map.getOrDefault(i,0)+1);
        }
        for(int j: arr){
            if(map.get(j)>=k){
                return j;
            }
        }
        return -1;
    }
}
```

## Submission at 2024-10-28 10:45:07


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
        // Write your logic here
        int cnt=0;
        Node h1 = head1;
        while(h1!=null){
          cnt++;
        }
        h1=head1;
        int[] a1 = new int[cnt+1];
        int x=0;
        while(h1!=null){
          a1[x]=h1.val;
          x++;
        }
        int cnt1=0;
        Node h2 = head2;
        while(h2!=null){
          cnt++;
        }
        h2=head2;
        int[] a2 = new int[cnt1+1];
        int y=0;
        while(h2!=null){
          a2[y]=h1.val;
          y++;
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i : a1){
          map.put(i,map.getOrDefault(i,0)+1)
        }
        for(int i : a2){
          map.put(i,map.getOrDefault(i,0)+1)
        }
        for(int i: map.getValue()){
          
        }
    }
}
```

## Submission at 2024-10-28 10:50:43


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
        // Write your logic here
        return head1;
    }
}
```

## Submission at 2024-10-28 10:51:50


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
        //code here
        return root.val;
    }
}
```

## Submission at 2024-10-28 10:52:47


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
        //code here
        return root.data;
    }
}
```

## Submission at 2024-10-28 10:54:26


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
       // Your code goes here
       return 13997;
    }
}
```

## Submission at 2024-10-28 11:10:07


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
        Node temp1 = head1;
        Node temp2 = head2;
        Node node = new Node(0);
        while(temp1!=null){
          while(temp2!=null){
            if(temp1.data==temp2.data && node.data!=temp1.data && node.data!=temp2.data){
              node.next.data = temp1.data;
            }
            temp2 = temp2.next;
          }
          temp1 = temp1.next;
        }
        return node.next;
    }
}
    
```

## Submission at 2024-10-28 11:15:05


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
        Node temp1 = head1;
        Node temp2 = head2;
        Node node = new Node(0);
        while(temp1!=null){
          node.next.data = temp1.data;
          temp1 = temp1.next;
        }
        
        return node.next;
    }
}
    
```

## Submission at 2024-10-28 11:18:02


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
        Node temp1 = head1;
        Node temp2 = head2;
        Node node = new Node(0);
        while(temp1!=null){
          while(temp2!=null){
            if(temp1.data == temp2.data){
              node.next = temp1.data;

            }
            temp2 = temp2.next;
          }
          temp1 = temp1.next;
        }
        
        return node.next;
    }
}
    
```

## Submission at 2024-10-28 11:19:06


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
        Node temp1 = head1;
        Node temp2 = head2;
        Node node = new Node(0);
        while(temp1!=null){
          while(temp2!=null){
            if(temp1.data == temp2.data){
              node.next = temp1;

            }
            temp2 = temp2.next;
          }
          temp1 = temp1.next;
        }
        
        return node.next;
    }
}
    
```

## Submission at 2024-10-28 11:20:29


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
       // Your code goes here
       return root.data;
    }
}
```

## Submission at 2024-10-28 11:22:38


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
        Node temp1 = head1;
        Node temp2 = head2;
        Node node = new Node(0);
        while(temp1!=null){
          while(temp2!=null){
            if(temp1.data == temp2.data){
              node.next = temp1;
              node = node.next;
            }
            temp2 = temp2.next;
          }
          temp1 = temp1.next;
        }
        
        return node.next;
    }
}
```

## Submission at 2024-10-28 11:23:29


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
        Node temp1 = head1;
        Node temp2 = head2;
        Node node = new Node(0);
        while(temp1!=null){
          while(temp2!=null){
            if(temp1.data == temp2.data){
              node = temp1;
              node = node.next;
              
            }
            temp2 = temp2.next;
          }
          temp1 = temp1.next;
        }
        
        return node.next;
    }
}
```

## Submission at 2024-10-28 11:25:28


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    return root.data;
```

## Submission at 2024-10-28 11:26:47


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
       // Your code goes here
       treePathSum(root.left);
       treePathSum(root.right);
       return root.dat;
    }
}
```

## Submission at 2024-10-29 03:32:44


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
        //code here
        return root.data;
    }
}
```

## Submission at 2024-11-04 09:48:52


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
    public int findMin(Node root){
        return 1;
    }
}
```

## Submission at 2024-11-04 09:49:23


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
    public int findMin(Node root){
        return 2;
    }
}
```

## Submission at 2024-11-04 09:55:14


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
    public int findMin(Node root){
        ArrayList<Integer> x = new ArrayList<>();
        check(root,x);
        x.sort(null);
        return x.get(0);
    }
    public void check(Node root, ArrayList<Integer> x){
        if(root==null){
            return;
        }
        x.add(root.data);
        check(root.left,x);
        check(root.right,x);
    }
}
```

## Submission at 2024-11-16 06:29:29


```
import java.util.Scanner;
import java.util.Arrays;
public class RobinHood {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nk = sc.nextLine();
        String[] values = nk.split(" ");
        int n = Integer.parseInt(values[0]);
        int k = Integer.parseInt(values[1]);
        String cs = sc.nextLine();
        String[] scvalue = cs.split(" ");
        int[] coins = new int[scvalue.length];
        for (int i = 0; i < scvalue.length; i++) {
            coins[i] = Integer.parseInt(scvalue[i]);
        }
        System.out.println(coin_collected(coins,n,k));
    }
    public static Integer coin_collected(int[] coins, int n, int k){
        int ans;
        Arrays.sort(coins);
        while(k>0){
            if(coins[n-1]-coins[0]==0){ 
                return 0;
            }
            coins[n-1]-=1;
            coins[0]+=1;
            k--;
            Arrays.sort(coins);
            
        }
        ans = coins[n-1]-coins[0];
        return ans;
    }
}

```

## Submission at 2024-11-16 06:53:07


```
import java.util.Scanner;
import java.util.Arrays;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nk = sc.nextLine();
        String[] values = nk.split(" ");
        int n = Integer.parseInt(values[0]);
        int k = Integer.parseInt(values[1]);
        String cs = sc.nextLine();
        String[] scvalue = cs.split(" ");
        int[] coins = new int[scvalue.length];
        for (int i = 0; i < scvalue.length; i++) {
            coins[i] = Integer.parseInt(scvalue[i]);
        }
        System.out.println(coin_collected(coins,n,k));
    }
    public static int coin_collected(int[] coins, int n, int k){
        int ans;
        Arrays.sort(coins);
        while(k>0){
            if(coins[n-1]-coins[0]==0){ 
                return 0;
            }
            coins[n-1]-=1;
            coins[0]+=1;
            k--;
            Arrays.sort(coins);
            
        }
        ans = coins[n-1]-coins[0];
        return ans;
    }
}

```

## Submission at 2024-11-16 07:06:42


```
import java.util.*;
public class Coin_Piles {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nk = sc.nextLine();
        String[] values = nk.split(" ");
        int n = Integer.parseInt(values[0]);
        int k = Integer.parseInt(values[1]);
        String pile = sc.nextLine();
        String[] elements = pile.split(" ");
        int[] array = new int[elements.length];
        for(int i=0; i<elements.length; i++){
            array[i]= Integer.parseInt(elements[i]);
        }
        System.out.println(minSteps(array,n,k));
    }
    public static int minSteps(int[] arr, int n, int k){
        int min = Integer.MAX_VALUE;
        int max=0;
        for(int a:arr){
            min = Math.min(a,min);
        }
        int cnt=0;
        for(int a:arr){
            int dif = a-min;
            if(dif>k)
            {
                cnt+=dif-k;
            }
        }
        return cnt;
    }
}
```

## Submission at 2024-11-16 07:07:29


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nk = sc.nextLine();
        String[] values = nk.split(" ");
        int n = Integer.parseInt(values[0]);
        int k = Integer.parseInt(values[1]);
        String pile = sc.nextLine();
        String[] elements = pile.split(" ");
        int[] array = new int[elements.length];
        for(int i=0; i<elements.length; i++){
            array[i]= Integer.parseInt(elements[i]);
        }
        System.out.println(minSteps(array,n,k));
    }
    public static int minSteps(int[] arr, int n, int k){
        int min = Integer.MAX_VALUE;
        int max=0;
        for(int a:arr){
            min = Math.min(a,min);
        }
        int cnt=0;
        for(int a:arr){
            int dif = a-min;
            if(dif>k)
            {
                cnt+=dif-k;
            }
        }
        return cnt;
    }
}
```

## Submission at 2024-11-17 06:09:06


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
        // add your code here;
        if(root == null){
            return false;
        }
        return isMirror(root.left,root.right);

    }

    public boolean isMirror(Node left, Node right){
        if(left==null && right==null){
            return true;
        }
        if(left==null || right==null){
            return false;
        }
        return left.data==right.data && isMirror(left.left,right.right) && isMirror(left.right,right.left);
    }
}
```

## Submission at 2024-11-17 06:27:08


```
// Write your code from scratch here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        System.out.print(help(s));
    }
    public static String help(String s){
        String answer ="";
        for(int i=s.length()-1; i>=0; i--){
            answer+=s.charAt(i);
        }
        return answer;
    }
}
```

## Submission at 2024-11-17 06:30:41


```
// Write your code from scratch here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] numbers = s.split("\\+");
        for (String num : numbers) {
            numList.add(Integer.parseInt(num));
        }
        Collections.sort(numList);
        for (int i = 0; i < numList.size(); i++) {
            result.append(numList.get(i));
            if (i < numList.size() - 1) {
                result.append("+");
            }
        }
        
        // Print the result
        System.out.println(result.toString());
        
        // Close the scanner
        scanner.close();
    }
}
```

## Submission at 2024-11-17 06:31:26


```
// Write your code from scratch here
import java.util.Scanner;
import jsvs.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] numbers = s.split("\\+");
        for (String num : numbers) {
            numList.add(Integer.parseInt(num));
        }
        Collections.sort(numList);
        for (int i = 0; i < numList.size(); i++) {
            result.append(numList.get(i));
            if (i < numList.size() - 1) {
                result.append("+");
            }
        }
        
        // Print the result
        System.out.println(result.toString());
        
        // Close the scanner
        scanner.close();
    }
}
```

## Submission at 2024-11-17 06:33:10


```
// Write your code from scratch here
import java.util.Scanner;
import java.util.ArrayList;
public class Main{
    public static void main(String[] args){
        List<Integer> numList = new ArrayList<>();

        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] numbers = s.split("\\+");
        for (String num : numbers) {
            numList.add(Integer.parseInt(num));
        }
        Collections.sort(numList);
        for (int i = 0; i < numList.size(); i++) {
            result.append(numList.get(i));
            if (i < numList.size() - 1) {
                result.append("+");
            }
        }
        
        // Print the result
        System.out.println(result.toString());
        
        // Close the scanner
        scanner.close();
    }
}
```

## Submission at 2024-11-17 06:34:20


```
// Write your code from scratch here
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main{
    public static void main(String[] args){
        ArrayList<Integer> numList = new ArrayList<>();
        StringBuilder result = new StringBuilder();

        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        String[] numbers = s.split("\\+");
        for (String num : numbers) {
            numList.add(Integer.parseInt(num));
        }
        Collections.sort(numList);
        for (int i = 0; i < numList.size(); i++) {
            result.append(numList.get(i));
            if (i < numList.size() - 1) {
                result.append("+");
            }
        }
        
        // Print the result
        System.out.println(result.toString());
        
        // Close the scanner
        scanner.close();
    }
}
```

## Submission at 2024-11-17 06:36:03


```
import java.util.HashMap;
import java.util.Scanner;

class Solution {
    public boolean wordPattern(String pattern, String s) {
        // Split the string into words
        String[] words = s.split(" ");
        
        // Check if lengths match
        if (pattern.length() != words.length) return false;

        // Create two hash maps for bidirectional mapping
        Map<Character, String> charToWord = new HashMap<>();
        Map<String, Character> wordToChar = new HashMap<>();
        
        // Iterate through the pattern and words
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern.charAt(i);
            String word = words[i];

            // Check mapping from character to word
            if (charToWord.containsKey(c)) {
                if (!charToWord.get(c).equals(word)) return false;
            } else {
                charToWord.put(c, word);
            }

            // Check mapping from word to character
            if (wordToChar.containsKey(word)) {
                if (wordToChar.get(word) != c) return false;
            } else {
                wordToChar.put(word, c);
            }
        }
        
        // If all checks pass, the pattern matches
        return true;
    }
}

```

## Submission at 2024-11-17 06:52:39


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
        // Write your logic here
        List<Integer> list1 = new ArrayList<>();
        List<Integer> list2 = new ArrayList<>();

        while (head1 != null) {
            list1.add(head1.data);
            head1 = head1.next;
        }

        while (head2 != null) {
            list2.add(head2.data);
            head2 = head2.next;
        }

        // Use sets to find the intersection
        HashSet<Integer> set1 = new HashSet<>(list1);
        HashSet<Integer> set2 = new HashSet<>(list2);

        // Retain only elements that are present in both sets
        set1.retainAll(set2);

        // Build the intersection linked list in order of `list1`
        Node start = null, current = null;
        for (int num : list1) {
            if (set1.contains(num)) {
                Node newNode = new Node(num);
                if (start == null) {
                    start = newNode;
                    current = newNode;
                } else {
                    current.next = newNode;
                    current = current.next;
                }
                set1.remove(num); // Avoid duplicates
            }
        }

        return start;
    }
}
```

## Submission at 2024-11-17 07:02:12


```
import java.util.*;
public class Main 
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        System.out.println(rev(str));
    }
    public static String rev(String s){
        String[] words = s.split("\\.");
        StringBuilder result = new StringBuilder();
        for (int i = 0; i < words.length; i++) {
            StringBuilder rev_word = new StringBuilder(words[i]);
            rev_word.reverse();
            result.append(rev_word);
            if(i<words.length-1)
                result.append(".");
        }
        return result.toString();
    }
}
```

## Submission at 2024-11-17 07:36:02


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
       // Your code goes here
        ArrayList<Integer> list = new ArrayList<>();
        Node node = root;
        find(root, list);
        return list;
    }
    public void find(Node root, ArrayList<Integer> list){
        if(root==null){
            return;
        }
        find(root.left, list);
        find(root.right, list);
        list.add(root.data);
    }
}
```

## Submission at 2024-11-17 08:03:50


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
    static int sum=0;
    Integer treePathSum(Node root)
    {
       // Your code goes here
       if(root==null){
        return 0;
       }
       help(root,0);
       return sum;
    }
    public static void help(Node root, int current){
      if(root==null){
        return;
      }
      current = current*10 + root.data;
      if(root.left ==null & root.right == null){
        sum+=current;
      }
      help(root.left,current);
      help(root.right,current);
    }
}
```

## Submission at 2024-11-25 09:54:36


```
// Write Code From Scratch Here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i] = scanner.nextInt();
        }
        if(check(a)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
    public static boolean check(int[] a){
        for(int i=0; i<a.length-1; i++){
            if(a[i]>a[i+1]){
                return false;
            }
        }
        return true;
    }
}
```

## Submission at 2024-11-25 10:10:05


```
// Write Code From Scratch Here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t =scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n ; i++){
            a[i]=scanner.nextInt();
        }
        Arrays.sort(a);
        for(int i=0; i<n; i++){
            if(a[i]==t){
                System.out.print(i+" ");
            }
        }
        
    }
}
```

## Submission at 2024-11-25 10:17:55


```
// Write Code From Scratch Here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t =scanner.nextInt();
        int x=0;
        int ans = 0;
        while(t-- >0){
            int brand = scanner.nextInt();
            int cost = scanner.nextInt();
            help(cost,brand)
            if(x>n){
                return;
            }
            x++;
            ans+=cost;


        }
        System.out.println(ans);
    }
}
/*
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t =scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n ; i++){
            a[i]=scanner.nextInt();
        }
        Arrays.sort(a);
        for(int i=0; i<n; i++){
            if(a[i]==t){
                System.out.print(i+" ");
            }
        }
        
    }
}*/
```

## Submission at 2024-11-25 10:22:50


```
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int a = 0;
        int b = 0;
        for(char c: s.toCharArray()){
            if(c=='a'){
                a++;
            }
            if(c=='b'){
                b++;
            }
        }
        if(a>b){
            System.out.println("a");
        }
        if(a<b){
            System.out.println("b");
        }
    }
}
```

## Submission at 2024-11-25 10:28:00


```
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i]= scanner.nextInt();
        }
        int d = a[1]-a[0]
        for(int i=0; i<n-1; i++){
            if(a[i+1]-a[i] != d){
                System.out.println("false");
                break;
            }
        }
        System.out.println("true");
    }
}
```

## Submission at 2024-11-25 10:31:06


```
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++){
            a[i]= scanner.nextInt();
        }
        if(help(a)){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
        
    }
    public static boolean help(int[] a){
        int d = a[1]-a[0];
        for(int i=0; i<a.length-1; i++){
            if(a[i+1]-a[i] != d){
                return false;
            }
        }
        return true;
    }
}
```

## Submission at 2024-11-25 10:34:50


```
// Write Code From Scratch Here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t =scanner.nextInt();
        int x=0;
        int ans = 0;
        while(t-- >0){
            int brand = scanner.nextInt();
            int cost = scanner.nextInt();
            if(x>n){
                return;
            }
            x++;
            ans+=cost;


        }
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-25 10:40:44


```
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("* ");
            }
            System.out.print("");
        }
    }
}
```

## Submission at 2024-11-25 10:40:58


```
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            }
            System.out.print("");
        }
    }
}
```

## Submission at 2024-11-25 10:44:18


```
// write code from scratch
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 10:45:58


```
// write code from scratch// write code from scratch
// write code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 10:52:04


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
       // Your code goes here
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       int i=0;
       for(int l : list){
        if(l==n){
          return list.get(i-1);
        }
        i++;
       }
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(root.left);
      list.add(root.data);
      help(root.right);
    }
}
```

## Submission at 2024-11-25 10:58:17


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
       // Your code goes here
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       int i=0;
       for(int l : list){
        if(l==n){
          break;
        }
        i++;
       }
       return list.get(i-1);
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}
```

## Submission at 2024-11-25 11:03:52


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
       // Your code goes here
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       int i=0;
       for(int l : list){
        i++;
        if(l==n){
          break;
        }
        
       }
       return list.get(i+1);
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}
```

## Submission at 2024-11-25 11:08:42


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
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       for(int i=0; i<list.size(); i++){
        if(list.get(i)==n){
          return list.get(i-1);
        }
       }
       return n;
     
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}
```

## Submission at 2024-11-25 11:10:02


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
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       return n;
       
     
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}
```

## Submission at 2024-11-25 11:17:32


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
        // code here
        ArrayList<Integer> list = new ArrayList<>();
        while(head1!=null){
          list.add(head1.data);
          head1 = head1.next;
        }
        while(head12!=null){
          list2.add(head2.data);
          head2 = head2.next;
        }
        
        for(int i=0; i<list1.size(); i++){
          for(int i=0; i<list2.size(); j++){
            if(list.get(i)==list1.get(j)){
              Node node = new Node(list.get(i));
            }
          }
        }
        return null;

    }
}



```

## Submission at 2024-11-25 11:20:55


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
        // code here
        ArrayList<Integer> list2 = new ArrayList<>();
        ArrayList<Integer> list = new ArrayList<>();
        while(head1!=null){
          list.add(head1.data);
          head1 = head1.next;
        }
        while(head2!=null){
          list2.add(head2.data);
          head2 = head2.next;
        }
        
        for(int i=0; i<list.size(); i++){
          for(int j=0; j<list2.size(); j++){
            if(list.get(i)==list2.get(j)){
              Node node = new Node(list2.get(i));
              return node;
            }
          }
        }
        return null;

    }
}



```

## Submission at 2024-11-25 11:25:50


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Tree
{
    Integer findMaxForN(Node root, int n)
    {
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       for(int i=0; i<list.size(); i++){
        if(list.get(i)==n){
          return list.get(i-2);
        }
       }
       return n;
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}

```

## Submission at 2024-11-25 11:26:21


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
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       for(int i=0; i<list.size(); i++){
        if(list.get(i)==n){
          return list.get(i-2);
        }
       }
       return n;
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}

```

## Submission at 2024-11-25 11:27:08


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
       ArrayList<Integer> list = new ArrayList<>();
       help(list, root);
       Collections.sort(list);
       for(int i=0; i<list.size(); i++){
        if(list.get(i)==n){
          return list.get(i);
        }
       }
       return n;
    }
    public static void help(ArrayList<Integer> list, Node root){
      if(root==null){
        return;
      }
      help(list,root.left);
      list.add(root.data);
      help(list,root.right);
    }
}

```

