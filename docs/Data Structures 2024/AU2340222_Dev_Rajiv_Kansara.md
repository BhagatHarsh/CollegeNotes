## Submission at 2024-08-05 10:15:17


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();

        System.out.println("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-05 10:22:25


```
# Write your Python code here from the scratch
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:27:35


```
# Write your Python code here from the scratch
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:30:26


```
# Write your Python code here
n = int(input())
name = []
for i in range(0, n):
    name[i] = input()

for i in range(0, n):
    print("Hello " + name[i] + "!")

```

## Submission at 2024-08-05 10:31:31


```
# Write your Python code here
n = int(input())
name = []
for i in range(0, n):
    name[i] = input()
    print("Hello " + name[i] + "!")


```

## Submission at 2024-08-05 10:34:17


```
# Write your Python code here
t = int(input())
name = []
i = 0
while (t > 0):
    name[i] = input()
    print("Hello " + name[i] + "!")
    i = i + 1
    t = t - 1

```

## Submission at 2024-08-05 10:39:38


```
// Write your C++ code here
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string name[n];
    for (int i=0; i<n; i++) {
        cin>>name[i];
    }

    for (int i=0; i<n; i++) {
        cout<<"Hello "<<name[i]<<"!"<<endl;
    }
    return 0;
}


```

## Submission at 2024-08-05 11:00:15


```
// Write your Java code here
import java.util.Scanner;

class Main() {
    public static void main(String[] args) {

        Scaner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String[] name = new String[n];
        for (int i=0; i<n; i++) {
            name[i] = sc.next();
        }

        for (int i=0; i<n; i++) {
            System.out.println("Hello " + name + "!");
        }
    }
}
```

## Submission at 2024-08-12 09:42:56


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
    private static int fibonacci(int n) {
        // Write your code here
        if (n == 0) return 0;
        if (n < 2) {
            return 1;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

```

## Submission at 2024-08-12 09:57:13


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
        // write your logic here
        int num = n;
        boolean flag = true;
        while (num >= 1) {
            num = num / 2;
            if (num % 2 != 0 && num != 2) {
                flag = false;
                break;
            }
        }
        return flag;
    }
}

```

## Submission at 2024-08-12 09:58:54


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
        // write your logic here
        int num = n;
        boolean flag = true;
        while (num > 1) {
            num = num / 2;
            if (num % 2 != 0 && num != 2) {
                flag = false;
                break;
            }
        }
        return flag;
    }
}

```

## Submission at 2024-08-12 10:03:02


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
        // write your logic here
        int num = n;
        if (num < 2) return false;
        boolean flag = true;
        while (num > 1) {
            if (num % 2 != 0 && num != 2) {
                flag = false;
                break;
            }
            num = num / 2;
        }
        return flag;
    }
}

```

## Submission at 2024-08-12 10:06:39


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
        // write your logic here
        int num = n;
        if (num < 0) {
            num = num * -1;
        }
        if (num < 2 && num >= 0) return false;
        boolean flag = true;
        while (num > 1) {
            if (num % 2 != 0 && num != 2) {
                flag = false;
                break;
            }
            num = num / 2;
        }
        return flag;
    }
}

```

## Submission at 2024-08-12 10:08:27


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
        // write your logic here
        int num = n;

        // Negative number
        if (num < 0) {
            num = num * -1;
        }

        // 0, 1, 2
        if (num < 2 && num >= 0) return false;
        boolean flag = true;
        while (num > 1) {
            if (num % 2 != 0 && num != 2) {
                flag = false;
                break;
            }
            num = num / 2;
        }

        return flag;
    }
}

```

## Submission at 2024-08-12 10:20:35


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
        // write your logic here

        if (n <= 0) return false;
        if (n == 1) {
            return true;
        } 
        if (n % 2 != 0) return false;

        return isPowerOfTwo(n / 2);
    }
}

```

## Submission at 2024-08-12 11:18:51


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

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        // Write logic here
        recursiveCombinations(0, nums);
        return lli;
    }
    List<List<Integer>> lli = new ArrayList<>();
    List<Integer> li = new ArrayList<>();

    public static void recursiveCombinations(int idx, int[] nums) {
        // Base Case:
        if (idx == nums.length) {
            lli.add(li);
            return;
        }

        // Recursive Case:
        li.add(nums[idx]);
        recursiveCombinations(idx + 1, nums);
        li.remove(li.size() - 1);
        recursiveCombinations(idx + 1, nums);
        return;

    }
}

```

## Submission at 2024-08-12 11:21:27


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

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        // Write logic here
        recursiveCombinations(0, nums);
        return lli;
    }
    List<List<Integer>> lli = new ArrayList<>();
    List<Integer> li = new ArrayList<>();

    public static void recursiveCombinations(int idx, int[] nums) {
        // Base Case:
        if (idx == nums.length) {
            lli.add(li);
            return;
        }

        // Recursive Case:
        li.add(nums[idx]);
        recursiveCombinations(idx + 1, nums);
        li.remove(li.size() - 1);
        recursiveCombinations(idx + 1, nums);
        return;

    }
}

```

## Submission at 2024-08-12 11:23:59


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

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }
    static List<List<Integer>> lli = new ArrayList<>();
    static List<Integer> li = new ArrayList<>();

    public static List<List<Integer>> subsets(int[] nums) {
        // Write logic here
        recursiveCombinations(0, nums);
        return lli;
    }

    public static void recursiveCombinations(int idx, int[] nums) {
        // Base Case:
        if (idx == nums.length) {
            lli.add(li);
            return;
        }

        // Recursive Case:
        li.add(nums[idx]);
        recursiveCombinations(idx + 1, nums);
        li.remove(li.size() - 1);
        recursiveCombinations(idx + 1, nums);
        return;

    }
}

```

## Submission at 2024-08-16 08:35:25


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
        List<Integer> comb = new ArrayList<>();
        List<List<Integer>> res = new ArrayList<>();
        backtrack(0, comb, res, n, k);
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
        // Generating nums array:
        int[] nums = new int[n];
        for (int i=0; i<n; i++) {
            nums[i] = i + 1;
        }

        // Base Case:
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }
        
        // Recursive Case:
        for (int i=start; i<nums.length; i++) {
            comb.add(nums[i]);
            backtrack(i + 1, comb, res, n, k);
            comb.remove(comb.size() - 1);
        }
    }
}

```

## Submission at 2024-08-16 08:37:40


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
        List<Integer> comb = new ArrayList<>();
        List<List<Integer>> res = new ArrayList<>();
        backtrack(0, comb, res, n, k);
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
        // Generating nums array:
        int[] nums = new int[n];
        for (int i=0; i<n; i++) {
            nums[i] = i + 1;
        }

        // Base Case:
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }
        
        // Recursive Case:
        for (int i=start; i<nums.length; i++) {
            comb.add(nums[i]);
            backtrack(i + 1, comb, res, n, k);
            comb.remove(comb.size() - 1);
        }
    }
}

```

## Submission at 2024-08-16 08:38:36


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
        List<Integer> comb = new ArrayList<>();
        List<List<Integer>> res = new ArrayList<>();
        backtrack(0, comb, res, n, k);
        return res;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
        // Generating nums array:
        int[] nums = new int[n];
        for (int i=0; i<n; i++) {
            nums[i] = i + 1;
        }

        // Base Case:
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }
        
        // Recursive Case:
        for (int i=start; i<nums.length; i++) {
            comb.add(nums[i]);
            backtrack(i + 1, comb, res, n, k);
            comb.remove(comb.size() - 1);
        }
    }
}

```

## Submission at 2024-08-16 08:40:06


```
public class Main() {
    System.out.println("Hello");
}
```

## Submission at 2024-08-16 08:40:51


```
public class Main() {
    public static void main(String[] args) {
        
        System.out.println("Hello");

    }
}
```

## Submission at 2024-08-16 08:44:29


```
#include<iostream>
using namespace std;

int main() {
    cout >> "Hello";
    return 0;
}
```

## Submission at 2024-08-31 05:57:34


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
class DeleteNode {
    Node deleteNode(Node head, int x) {
	// Your code here

        // Invalid x:
        if (x <= 0) {
            return head;
        }

        // If first Node to be deleted
        if (x == 1) {
            head = head.next;
            return head;
        }

        Node prevNode = head, currNode = head.next;
        int count = 2;
        while (count != x) {
            currNode = currNode.next;
            prevNode = prevNode.next;
            count++;
        }

        prevNode.next = currNode.next;
        return head;
    }
}

```

## Submission at 2024-08-31 06:30:28


```
import java.util.Scanner;
class Main {
    public static void main (String args []) {
        // Write code from scratch

        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        if (isPalindrome(str, 0, str.length() - 1)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    private static boolean isPalindrome(String str, int s, int e) {
        if (str.charAt(s) != str.charAt(e)) {
            return false;
        }

        // Base Case:
        if (s > e) {
            return true; 
        }

        if (str.charAt(s) == str.charAt(e)) {
            isPalindrome(str, s+1, e-1);
        }

        return true;
    }
}
```

## Submission at 2024-08-31 06:31:57


```
import java.util.Scanner;
class Main {
    public static void main (String args []) {
        // Write code from scratch

        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        if (str.length() == 0) {
            System.out.println("NO");
            return;
        }

        if (isPalindrome(str, 0, str.length() - 1)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    private static boolean isPalindrome(String str, int s, int e) {
        if (str.charAt(s) != str.charAt(e)) {
            return false;
        }

        // Base Case:
        if (s > e) {
            return true; 
        }

        if (str.charAt(s) == str.charAt(e)) {
            isPalindrome(str, s+1, e-1);
        }

        return true;
    }
}
```

## Submission at 2024-08-31 06:36:32


```
import java.util.Scanner;
class Main {
    public static void main (String args []) {
        // Write code from scratch

        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        if (str == "") {
            System.out.println("NO");
            return;
        } else if (str.length() == 1) {
            System.out.println("YES");
            return;
        }

        if (isPalindrome(str, 0, str.length() - 1)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    private static boolean isPalindrome(String str, int s, int e) {
        if (str.charAt(s) != str.charAt(e)) {
            return false;
        }

        // Base Case:
        if (s > e) {
            return true; 
        }

        if (str.charAt(s) == str.charAt(e)) {
            isPalindrome(str, s+1, e-1);
        }

        return true;
    }
}

```

## Submission at 2024-08-31 06:52:58


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
class ReverseLinkedList {
    Node reverseLinkedList(Node head) {
        // Write your logic here

        // If LinkedList does not exist or only one Node
        if (head == null || head.next == null) {
            return head;
        }

        // More than one Node
        Node prevNode = head, currNode = head.next;
        while (currNode != null) {

            Node nextNode = currNode.next;
            currNode.next = prevNode;

            currNode = nextNode;
            prevNode = prevNode.next;
        }

        head.next = null;
        head = prevNode;

        return head;
    }
}

```

## Submission at 2024-09-02 09:39:55


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
class ReverseLinkedList {
    Node reverseLinkedList(Node head) {
        // Write your logic here
        if (head == null || head.next == null) {
            return null;
        }

        Node newHead = reverseLinkedList(head.next);
        head.next.next = head;
        head.next = null;

        return newHead;
    }
}
```

## Submission at 2024-09-02 09:40:43


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
class ReverseLinkedList {
    Node reverseLinkedList(Node head) {
        // Write your logic here
        if (head == null || head.next == null) {
            return head;
        }

        Node newHead = reverseLinkedList(head.next);
        head.next.next = head;
        head.next = null;

        return newHead;
    }
}
```

## Submission at 2024-09-02 09:49:01


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
        // Write your logic here

        Node curr = head;
        while (curr != null) {
            result.add(curr.data);
            curr = curr.next;
        } 

        return result;
    }
}

```

## Submission at 2024-09-02 09:55:46


```
// Write code from scratch
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        for (int i=0; i<n; i++) {
            a[i] = sc.nextInt();
        }

        for (int j=0; j<n; j++) {
            b[j] = sc.nextInt();
        }

        for (int k=0; k<n; k++) {
            c[k] = a[k] >= b[k] ? a[k] : b[k];
            System.out.print(c[k] + " ");
        }

    }
}
```

## Submission at 2024-09-02 10:04:30


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
class DeleteNode {
    Node deleteNode(Node head, int x) {
	    // Your code here

        if (head == null) {
            return head;
        }

        // delete first
        if (x == 1) {
            head = head.next;
            return head;
        }

        // delete any after 2:
        int i = 1;
        Node curr = head;
        while ((i + 1) != x) {
            curr = curr.next;
            i++;
        }   	

        curr.next = curr.next.next;
        return head;
    }
}

```

## Submission at 2024-09-02 10:11:35


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
        Node curr = head;
        int i = 1;

        while (i != k || curr != null) {
            curr = curr.next;
            i++;
        }

        if (i == k) {
            return curr.data;
        } 

        return -1;
    }
}
```

## Submission at 2024-09-02 10:18:59


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
        if (head == null) {
            return -1;
        }
        
        Node curr = head;
        int i = 1;

        while (i != k && curr != null) {
            curr = curr.next;
            i++;
        }

        if (i == k) {
            return curr.data;
        } 

        return -1;
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
        // Write your logic here
        if (head == null) {
            return -1;
        }
        
        Node curr = head;
        int i = 1;

        while (curr != null) {
            if (i == k) {
                return curr.data;
            } 
            curr = curr.next;
            i++;
        }

        return -1;
    }
}
```

## Submission at 2024-09-02 10:28:55


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
class ReverseLinkedList {
    Node reverseLinkedList(Node head) {
        // Write your logic here
        if (head == null || head.next == null) {
            return head;
        }

        Node prev = head, curr = head.next;
        while (curr != null) {
            Node nextNode = curr.next;
            curr.next = prev;

            // update
            prev = curr;
            curr = nextNode;
        }
        
        head.next = null;
        head = prev;
        return head;
    }
}
```

## Submission at 2024-09-09 09:22:54


```
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] nums = new int[n];
        int count = 0;

        for (int i=0; i<n; i++) {
            nums[i] = sc.nextInt();
            String numStr = Integer.toString(nums[i]);
            if (numStr.length() % 2 == 0) {
                count++;
            }
        }

        System.out.println(count);
    }
}
```

## Submission at 2024-09-09 09:35:59


```


class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        List<Integer> ans = new ArrayList<>();
        int m = matrix[0].length, n = matrix.length;

        for (int i=0; i<m+n-1; i++) {
            for (int j=0; j<m; j++) {
                for (int k=0; k<n; k++) {
                    if (k + j == i) {
                        ans.add(matrix[k][j]);
                    }
                }
            }
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 09:52:38


```
// Write Code from Scratch here
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if (n == 0) {
            System.out.println("False");
            return;
        }
        
        if (powThree(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    } 

    public static boolean powThree(int n) {
        if (n < 1 || n % 3 != 0) {
            return false;
        } else if (n == 1) {
            return true;
        } 
        return powThree(n / 3);
    }
}
```

## Submission at 2024-09-09 09:53:58


```
// Write Code from Scratch here
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if (n == 0) {
            System.out.println("False");
            return;
        }
        
        if (powThree(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    } 

    public static boolean powThree(int n) {
        if (n < 1 || (n % 3 != 0 && n != 1)) {
            return false;
        } else if (n == 1) {
            return true;
        } 
        return powThree(n / 3);
    }
}
```

## Submission at 2024-09-09 09:57:42


```
// Write code from scratch 
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char x = sc.next().charAt(0);
        int count = 0;

        for (int i=0; i<s.length(); i++) {
            if (x == s.charAt(i)) {
                count++;
            }
        }

        System.out.println(count);
    }
}




// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:11:50


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:12:40


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        if (head == null || head.next == null) {
            return head;
        }
        
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:13:07


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        // if (head == null || head.next == null) {
        //     return head;
        // }
        
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:14:15


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        if (head == null || head.next == null) {
            return head;
        }
        
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:14:57


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        if (head == null || head.next == null) {
            return head;
        }
        
        Node prev = head, curr = head.next;
        while (curr != null) {
            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:15:47


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        if (head == null || head.next == null) {
            return head;
        }
        
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (curr == null) {
                prev = prev.next;
                continue;
            }

            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:16:20


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here	
        // if (head == null || head.next == null) {
        //     return head;
        // }
        
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (curr == null) {
                prev = prev.next;
                continue;
            }

            if (prev.data == curr.data) {
                prev.next = curr.next;
                curr = curr.next;
            }
            prev = prev.next;
            curr = curr.next;
        }
        return head;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-09-09 10:22:44


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
        int n = 0;
        Node curr = head;
        while (curr != null) {
          curr = curr.next;
          n++;  
        }

        if (n == 1) {
          return true;
        }

        curr = head;
        int[] arr = new int[n];
        int i = 0;
        while (curr != null) {
          arr[i++] = curr.data;
          curr = curr.next;
        }

        // arr = {1, 2, 3, 2, 1}
        for (int j=0; j<n/2; j++) {
          if (arr[j] != arr[n-j-1]) {
            return false;
          }
        }

        return true;
    }
}



// import java.util.*;
// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }

// Node prev = head, curr = head.next;
//         while (prev.next != null) {
//             if (curr == null) {
//                 prev = prev.next;
//                 continue;
//             }

//             if (prev.data == curr.data) {
//                 prev.next = curr.next;
//                 curr = curr.next;
//             }
//             prev = prev.next;
//             curr = curr.next;
//         }
//         return head;
```

## Submission at 2024-09-09 10:43:20


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();
        int[][] arrMtx = new int[m][n];

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:44:13


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.get(0)size(), n = matrix.size();
        int[][] arrMtx = new int[m][n];

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:45:02


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.get(0).size(), n = matrix.size();
        int[][] arrMtx = new int[m][n];

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:48:00


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();
        int[][] arrMtx = new int[m][n];

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:49:25


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();
        int[][] arrMtx = new int[m][n];

        List<List<Integer>> ansList = new ArrayList<>();
        if (m == 0 || n == 0) {
            return ansList;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:50:41


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();

        List<List<Integer>> ansList = new ArrayList<>();
        if (m == 0 || n == 0) {
            return ansList;
        }

        int[][] arrMtx = new int[m][n];
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:51:31


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();

        List<List<Integer>> ansList = new ArrayList<>();
        if (m == 0 || n == 0) {
            return ansList;
        } else if (m == 1) {
            return matrix;
        }

        int[][] arrMtx = new int[m][n];
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 10:56:28


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();

        List<List<Integer>> ansList = new ArrayList<>();
        if (m == 0 || n == 0) {
            return ansList;
        } else if (m == 1) {
            return matrix;
        } else if (n == 1) {
            int max = -1;
            for (int i=0; i<m; i++) {
                max = Math.max(matrix.get(i).get(0), max);
            }
            for (int i=0; i<m; i++) {
                if (matrix.get(i).get(0) == -1) {
                    matrix.get(i).set(0, max);
                }
            }
                return matrix;
        }

        int[][] arrMtx = new int[m][n];
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
            }
            idx++;
        }

        idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[j][i] == -1) {
                    arrMtx[j][i] = maxColVal[idx];
                }
            }
            idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 11:05:26


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        int m = matrix.size(), n = matrix.get(0).size();

        List<List<Integer>> ansList = new ArrayList<>();
        if (m == 0 || n == 0) {
            return ansList;
        } else if (m == 1) {
            return matrix;
        } else if (n == 1) {
            int max = -1;
            for (int i=0; i<m; i++) {
                max = Math.max(matrix.get(i).get(0), max);
            }
            for (int i=0; i<m; i++) {
                if (matrix.get(i).get(0) == -1) {
                    matrix.get(i).set(0, max);
                }
            }
                return matrix;
        }

        int[][] arrMtx = new int[m][n];
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                arrMtx[i][j] = matrix.get(i).get(j);
            }
        }
        
        int[] maxColVal = new int[n];
        int idx = 0;
        for (int i=0; i<n; i++) {
            maxColVal[i] = 0;
        }

        // for (int i=0; i<m; i++) {
        //     for (int j=0; j<n; j++) {
        //         maxColVal[idx] = Math.max(arrMtx[j][i], maxColVal[idx]);
        //     }
        //     idx++;
        // }

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) { 
                maxColVal[j] = Math.max(arrMtx[i][j], maxColVal[j]);
            }
        }

        // idx = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (arrMtx[i][j] == -1) {
                    arrMtx[i][j] = maxColVal[j];
                }
            }
            // idx++;
        }

        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<m; i++) {
            List<Integer> ls = new ArrayList<>();
            for (int j=0; j<n; j++) {
                ls.add(arrMtx[i][j]);
            }
            ans.add(new ArrayList(ls));
        }

        return ans;
    }
}

```

## Submission at 2024-09-09 11:12:27


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
class RemoveDuplicate {
    Node removeDuplicate(Node head) {
	    // Your code here
        Node prev = head, curr = head.next;
        while (prev.next != null) {
            if (curr == null) {
                prev = prev.next;
            } else {
                if (prev.data == curr.data) {
                    prev.next = curr.next;
                    curr = curr.next;
                } else {
                    prev = curr;
                    curr = curr.next;
                }
            }

        }
        return head;
    }
}
```

## Submission at 2024-10-07 09:54:37


```
// Write your code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();

        int ones = 0, twos = 0, threes = 0;
        for (int i=0; i<n; i++) {
            char ch = s.charAt(i);
            if (ch != '+') {
                if (ch == '1') {
                    ones++;
                } else if (ch == '2') {
                    twos++;
                } else {
                    threes++;
                }
            } 
        }
        String ans = "";
        for (int i=0; i<ones; i++) {
            ans += "1+";
        }
        for (int i=0; i<twos; i++) {
            ans += "2+";
        }
        for (int i=0; i<threes; i++) {
            ans += "3+";
        }

        for (int i=0; i<ans.length()-1; i++) {
            System.out.print(ans.charAt(i));
        }
    }
}
```

## Submission at 2024-10-07 10:05:59


```
// Write your code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        int n = str.length();
        String res = "";   
        String word = "";

        for (int i=0; i<n; i++) {
            
            char ch = str.charAt(i);
            if (ch != '.') {
                word += ch;
            } else {
                res += reverseWord(word);
                res += '.';
                word = "";
            }
        }
        res += reverseWord(word);
        res += '.';
        word = "";
        
        for (int i=0;i<res.length()-1; i++) {
            System.out.print(res.charAt(i));
        }
    }

    private static String reverseWord(String str) {
        String ans = "";
        for (int i=str.length()-1; i>=0; i--) {
            ans = ans + str.charAt(i);
        }

        return ans;
    }
}


// class Main() {
//     public static void main(String[] args) {

//     }
// }
```

## Submission at 2024-10-07 10:16:15


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[] pile = new int[n];

        for (int i=0; i<n; i++) {
            pile[i] = sc.nextInt();
        }

        Arrays.sort(pile);
        for (int i=0; i<n; i++) {
            if (pile[i] > k) {
                System.out.println(n-i);
                return;
            }
        }
    }

    // private static boolean binarySearch(int x, int[] arr) {
    //     int low = 0, high = arr.length-1;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if (arr[mid] == x) {
    //             return true;
    //         } else if (arr[mid] > x) {

    //         } else {

    //         }
    //     }
    // }
}


// import java.util.*
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//     }
// }
```

## Submission at 2024-10-07 10:24:16


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
        Queue<Integer> Q = new LinkedList<>();
        List<Integer> l = new ArrayList<>(); 
        while (!q.isEmpty()) {
            l.add(q.poll());
        }

        while (!l.isEmpty()) {
            Q.add(l.get(l.size() - 1));
            l.remove(l.size()-1);
        }

        return Q;
    }
}


// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt(), k = sc.nextInt();
//         int[] pile = new int[n];

//         for (int i=0; i<n; i++) {
//             pile[i] = sc.nextInt();
//         }

//         Arrays.sort(pile);
//         for (int i=0; i<n; i++) {
//             if (pile[i] > k) {
//                 System.out.println(n-i);
//                 return;
//             }
//         }
//     }

//     // private static boolean binarySearch(int x, int[] arr) {
//     //     int low = 0, high = arr.length-1;
//     //     while (low <= high) {
//     //         int mid = low + (high - low) / 2;
//     //         if (arr[mid] == x) {
//     //             return true;
//     //         } else if (arr[mid] > x) {

//     //         } else {

//     //         }
//     //     }
//     // }
// }


// import java.util.*
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//     }
// }
```

## Submission at 2024-10-07 10:25:37


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
        if (q.isEmpty() || q.size() == 1) {
            return q;
        }
        Queue<Integer> Q = new LinkedList<>();
        List<Integer> l = new ArrayList<>(); 
        while (!q.isEmpty()) {
            l.add(q.poll());
        }

        while (!l.isEmpty()) {
            Q.add(l.get(l.size() - 1));
            l.remove(l.size()-1);
        }

        return Q;
    }
}


// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt(), k = sc.nextInt();
//         int[] pile = new int[n];

//         for (int i=0; i<n; i++) {
//             pile[i] = sc.nextInt();
//         }

//         Arrays.sort(pile);
//         for (int i=0; i<n; i++) {
//             if (pile[i] > k) {
//                 System.out.println(n-i);
//                 return;
//             }
//         }
//     }

//     // private static boolean binarySearch(int x, int[] arr) {
//     //     int low = 0, high = arr.length-1;
//     //     while (low <= high) {
//     //         int mid = low + (high - low) / 2;
//     //         if (arr[mid] == x) {
//     //             return true;
//     //         } else if (arr[mid] > x) {

//     //         } else {

//     //         }
//     //     }
//     // }
// }


// import java.util.*
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//     }
// }
```

## Submission at 2024-10-07 10:29:53


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[] pile = new int[n];

        for (int i=0; i<n; i++) {
            pile[i] = sc.nextInt();
        }
        int coins = 0;
        Arrays.sort(pile);
        for (int i=0; i<n; i++) {
            if (pile[i] > k) {
                coins += (pile[i] - k - 1);
            }
        }
        
        System.out.println(coins);
    }

    // private static boolean binarySearch(int x, int[] arr) {
    //     int low = 0, high = arr.length-1;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if (arr[mid] == x) {
    //             return true;
    //         } else if (arr[mid] > x) {

    //         } else {

    //         }
    //     }
    // }
}


// import java.util.*
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//     }
// }
```

## Submission at 2024-10-07 10:35:41


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[] pile = new int[n];
        int min = Integer.MAX_VALUE;

        for (int i=0; i<n; i++) {
            pile[i] = sc.nextInt();
        }
        int coins = 0;
        Arrays.sort(pile);
        min = pile[0];
        for (int i=0; i<n; i++) {
            if (pile[i] > k && (pile[i] - min) > k) {
                coins += (pile[i] - k - 1);
            }
        }
        
        System.out.println(coins);
    }

    // private static boolean binarySearch(int x, int[] arr) {
    //     int low = 0, high = arr.length-1;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if (arr[mid] == x) {
    //             return true;
    //         } else if (arr[mid] > x) {

    //         } else {

    //         }
    //     }
    // }
}


// import java.util.*
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//     }
// }
```

## Submission at 2024-10-07 10:38:00


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[] pile = new int[n];
        int min = Integer.MAX_VALUE;

        for (int i=0; i<n; i++) {
            pile[i] = sc.nextInt();
        }
        int coins = 0;
        Arrays.sort(pile);
        min = pile[0];
        int req = min + k;

        for (int i=0; i<n; i++) {
            if (pile[i] > req) {
                coins += (pile[i] - req);
            }
        }
        
        System.out.println(coins);
    }

    // private static boolean binarySearch(int x, int[] arr) {
    //     int low = 0, high = arr.length-1;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if (arr[mid] == x) {
    //             return true;
    //         } else if (arr[mid] > x) {

    //         } else {

    //         }
    //     }
    // }
}


// import java.util.*
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//     }
// }
```

## Submission at 2024-10-07 10:48:14


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            System.out.println(-1);
            return;
        }

    }
}
```

## Submission at 2024-10-07 11:07:04


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            System.out.println(-1);
            return;
        }

        int low = 0, high = 100;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, arr[n-1])) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        System.out.println(low);
    }

    private static boolean isPossible(int[] arr, int n, int x, int max) {
        int avg = 0;
        arr[n-1] = arr[n-1] + x;
        for (int i=0; i<n; i++) {
            avg += arr[i];
        }
        avg = avg / n;
        boolean[] ans = new boolean[n];
        int half_avg = avg/2;
        for (int i=0; i<n; i++) {
            if (arr[i] < half_avg) {
                ans[i] = false;
            } else {
                ans[i] = true;
            }
        }

        int count = 0;
        for (int i=0; i<n; i++) {
            if (ans[i] == false) {
                count++;
            }
        }

        if (count > n/2) {
            return true;
        } else {
            return false;
        }
    }
}
```

## Submission at 2024-10-07 11:08:12


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal || n == 1) {
            System.out.println(-1);
            return;
        }

        int low = 0, high = 100;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, arr[n-1])) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        System.out.println(low);
    }

    private static boolean isPossible(int[] arr, int n, int x, int max) {
        int avg = 0;
        arr[n-1] = arr[n-1] + x;
        for (int i=0; i<n; i++) {
            avg += arr[i];
        }
        avg = avg / n;
        boolean[] ans = new boolean[n];
        int half_avg = avg/2;
        for (int i=0; i<n; i++) {
            if (arr[i] < half_avg) {
                ans[i] = false;
            } else {
                ans[i] = true;
            }
        }

        int count = 0;
        for (int i=0; i<n; i++) {
            if (ans[i] == false) {
                count++;
            }
        }

        if (count > n/2) {
            return true;
        } else {
            return false;
        }
    }
}
```

## Submission at 2024-10-07 11:08:51


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            System.out.println(-1);
            return;
        }

        int low = 0, high = 100;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, arr[n-1])) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        System.out.println(low);
    }

    private static boolean isPossible(int[] arr, int n, int x, int max) {
        int avg = 0;
        arr[n-1] = arr[n-1] + x;
        for (int i=0; i<n; i++) {
            avg += arr[i];
        }
        avg = avg / n;
        boolean[] ans = new boolean[n];
        int half_avg = avg/2;
        for (int i=0; i<n; i++) {
            if (arr[i] < half_avg) {
                ans[i] = false;
            } else {
                ans[i] = true;
            }
        }

        int count = 0;
        for (int i=0; i<n; i++) {
            if (ans[i] == false) {
                count++;
            }
        }

        if (count > n/2) {
            return true;
        } else {
            return false;
        }
    }
}
```

## Submission at 2024-10-07 11:09:23


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            System.out.println(-1);
            return;
        }

        int low = 0, high = 1000;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, arr[n-1])) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        System.out.println(low);
    }

    private static boolean isPossible(int[] arr, int n, int x, int max) {
        int avg = 0;
        arr[n-1] = arr[n-1] + x;
        for (int i=0; i<n; i++) {
            avg += arr[i];
        }
        avg = avg / n;
        boolean[] ans = new boolean[n];
        int half_avg = avg/2;
        for (int i=0; i<n; i++) {
            if (arr[i] < half_avg) {
                ans[i] = false;
            } else {
                ans[i] = true;
            }
        }

        int count = 0;
        for (int i=0; i<n; i++) {
            if (ans[i] == false) {
                count++;
            }
        }

        if (count > n/2) {
            return true;
        } else {
            return false;
        }
    }
}
```

## Submission at 2024-10-07 11:10:48


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            System.out.println(-1);
            return;
        }
        int sum = 0;
        for (int i=0; i<n-1; i++) {
            sum += arr[i];
        }
        int low = sum, high = 100;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, arr[n-1])) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        System.out.println(low);
    }

    private static boolean isPossible(int[] arr, int n, int x, int max) {
        int avg = 0;
        arr[n-1] = arr[n-1] + x;
        for (int i=0; i<n; i++) {
            avg += arr[i];
        }
        avg = avg / n;
        boolean[] ans = new boolean[n];
        int half_avg = avg/2;
        for (int i=0; i<n; i++) {
            if (arr[i] < half_avg) {
                ans[i] = false;
            } else {
                ans[i] = true;
            }
        }

        int count = 0;
        for (int i=0; i<n; i++) {
            if (ans[i] == false) {
                count++;
            }
        }

        if (count > n/2) {
            return true;
        } else {
            return false;
        }
    }
}
```

## Submission at 2024-10-07 11:11:24


```
// Write Java Code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        boolean equal = true;
        for (int i=0; i<n-1; i++) {
            if (arr[i] != arr[i+1]) {
                equal = false;
                break;
            }
        }
        if (equal) {
            System.out.println(-1);
            return;
        }
        
        int low = 0, high = 100;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isPossible(arr, n, mid, arr[n-1])) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        System.out.println(low);
    }

    private static boolean isPossible(int[] arr, int n, int x, int max) {
        int avg = 0;
        arr[n-1] = arr[n-1] + x;
        for (int i=0; i<n; i++) {
            avg += arr[i];
        }
        avg = avg / n;
        boolean[] ans = new boolean[n];
        int half_avg = avg/2;
        for (int i=0; i<n; i++) {
            if (arr[i] < half_avg) {
                ans[i] = false;
            } else {
                ans[i] = true;
            }
        }

        int count = 0;
        for (int i=0; i<n; i++) {
            if (ans[i] == false) {
                count++;
            }
        }

        if (count > n/2) {
            return true;
        } else {
            return false;
        }
    }
}
```

## Submission at 2024-10-25 08:05:46


```
// Write your code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next(), res = "";
        Stack<Character> st = new Stack<>();
        for (int i=0; i<s.length(); i++) {
            if (s.charAt(i) == '.') {
                st.push('.');
                while (!st.isEmpty()) {
                    res = res + st.pop();
                }
            } else {
                st.push(s.charAt(i));
            }
        }

        st.push('.');
        while (!st.isEmpty()) {
            res += st.pop();
        }

        System.out.println(res.substring(1));
    }
}
```

## Submission at 2024-10-25 08:22:51


```
// Write Java code from scratch
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] stack = new int[n];
        for (int i=0; i<n; i++) {
            stack[i] = sc.nextInt();
        }

        int[] queue = new int[n];
        for (int i=0; i<n; i++) {
            queue[i] = sc.nextInt();           
        }

        for (int i=0; i<n; i++) {
            if (queue[i] != stack[n-i-1]) {
                System.out.println(n-i);
                return;
            }
        }   
    }
}
```

## Submission at 2024-10-25 08:25:47


```
// Write Java code from scratch
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] stack = new int[n];
        for (int i=0; i<n; i++) {
            stack[i] = sc.nextInt();
        }

        int[] queue = new int[n];
        for (int i=0; i<n; i++) {
            queue[i] = sc.nextInt();   
            if (queue[i] != stack[n-i-1]) {
                System.out.println(n-i);
                return;
            }        
        }

        System.out.println(0);
    }
}
```

## Submission at 2024-10-28 09:37:50


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }
        
        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr--;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:38:18


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr--;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt-1);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:38:40


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr--;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt+3);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:38:58


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr--;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:39:41


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr -= k;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:40:37


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        if (k == 0) {
            System.out.println(0);
            return;
        }
        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr -= k;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:41:01


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr -= k;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 09:41:16


```
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        for (int i=0; i<arr.length; i++) {
            q.add(arr[i]);
        }

        int cnt = 0;
        while (!q.isEmpty()) {
            int curr = q.poll();
            curr -= k;
            if (curr > 0) {
                q.add(curr);
            }
            cnt++;
        }

        System.out.println(cnt);
    }
}

/*
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
    }
} 
*/
```

## Submission at 2024-10-28 10:03:45


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
    static int min = Integer.MAX_VALUE;
    public static int findMin(Node root){
        //code here
        if (root == null) {
            return min;
        }

        return Math.min(root.data, min);
    }

    // private static List<List<Integer>> inOrder(Node root) {


    // }
}
```

## Submission at 2024-10-28 10:05:07


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
    static int min = Integer.MAX_VALUE;
    public static int findMin(Node root){
        //code here
        if (root == null) {
            return min;
        }

        min = Math.min(root.data, min);
        return min;
    }

    // private static List<List<Integer>> inOrder(Node root) {


    // }
}
```

## Submission at 2024-10-28 10:05:48


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
    static int min = Integer.MAX_VALUE;
    public static int findMin(Node root){
        //code here
        if (root == null) {
            return min;
        }

        min = Math.min(root.data, min);
        return min;
    }

    // private static List<List<Integer>> inOrder(Node root) {


    // }
}
```

## Submission at 2024-10-28 10:06:56


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
    static int min = Integer.MAX_VALUE;
    public static int findMin(Node root){
        //code here
        if (root == null) {
            return min;
        }

        min = Math.min(root.data, min);
        return Math.min(findMin(root.left), findMin(root.right));
    }

    // private static List<List<Integer>> inOrder(Node root) {


    // }
}
```

## Submission at 2024-10-28 10:14:24


```
// write code from scratch
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[n];
        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<n; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        // for (Map.Entry<Integer, Integer> entry : map.keySet()) {
        //     if (entry.getValue() == k) {
        //         System.out.println(entry.getKey());
        //         return;
        //     }
        // }   

        System.out.println(-1);
    }
}
```

## Submission at 2024-10-28 10:14:57


```
// write code from scratch
// Write code from scratch here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[n];
        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<n; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
            if (entry.getValue() == k) {
                System.out.println(entry.getKey());
                return;
            }
        }   

        System.out.println(-1);
    }
}
```

## Submission at 2024-10-28 10:30:08


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
        // Map<Integer, Integer> map = new HashMap<>();
        Set<Integer> set = new HashSet<>();
        Node curr1 = head1;
        while (curr1 != null) {
          set.add(curr1.data);
          curr1 = curr1.next;
        }

        Node curr2 = head2, curr3 = new Node(-1);
 
        while (!set.isEmpty() && curr2 != null) {
          if (set.contains(curr2.data)) {
            Node newNode = new Node(curr2.data);
            curr3.next = newNode;
            set.remove(curr2.data);
            break;
          }
          curr2 = curr2.next;
        }

        Node head3 = curr3.next;

        while (!set.isEmpty() && curr2 != null) {
          if (set.contains(curr2.data)) {
            Node newNode = new Node(curr2.data);
            curr3.next = newNode;
            set.remove(curr2.data);
          }
          curr2 = curr2.next;
        }

        return head3;
    }

    // static int getLength(Node head) {
    //   int n = 0;
    //   Node curr = head;
    //   while (curr != null) {
    //     n++;
    //     curr = curr.next;
    //   }
    // }
}
```

## Submission at 2024-10-28 10:40:46


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

class Tree {
    //complete the function and return the sum
    Integer treePathSum(Node root) {
       // Your code goes here
       return recurse(root, 0);
    }

    static int totalSum = 0;
    static int recurse(Node root, int currSum) {
      if (root == null) {
        return 0;
      }

      currSum = root.data + 10 * currSum;

      if (root.left == null && root.right == null) {
        totalSum += currSum;
        currSum = 0;
        return totalSum;
      }

      totalSum += recurse(root.left, currSum) + recurse(root.right, currSum);
      return totalSum;
    }
}
```

## Submission at 2024-10-28 10:44:26


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

class Tree {
    //complete the function and return the sum
    Integer treePathSum(Node root) {
       // Your code goes here
       return recurse(root, 0);
    }

    static int totalSum = 0;
    static int recurse(Node root, int currSum) {
      if (root == null) {
        return 0;
      }

      currSum = root.data + 10 * currSum;

      if (root.left == null && root.right == null) {
        totalSum += currSum;
        currSum = 0;
        return totalSum;
      }

      return recurse(root.left, currSum) + recurse(root.right, currSum);

    }
}
```

## Submission at 2024-10-28 11:00:06


```
// // Write your code from scratch here
// /* A Binary Tree node
// class Node {
//     int data;
//     Node left, right;
//    Node(int item)    {
//         data = item;
//         left = right = null;
//     }
// } */

// class Tree {
//     //complete the function and return the sum
//     Integer treePathSum(Node root) {
//        // Your code goes here
//        return recurse(root, 0);
//     }

//     static int totalSum = 0;
//     static int recurse(Node root, int currSum) {
//       if (root == null) {
//         return 0;
//       }

//       currSum = root.data + 10 * currSum;

//       if (root.left == null && root.right == null) {
//         totalSum += currSum;
//         currSum = 0;
//         return totalSum;
//       }

//       return recurse(root.left, currSum) + recurse(root.right, currSum);

//     }
// }

import java.util.*;
class Main {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String order_s = sc.nextLine();
        String[] os = order_s.split(" ");

        String order = os[0];
        String s = os[1];

        Map<Character, Integer> map = new HashMap<>();
        for (int i=0; i<s.length(); i++) {
            char ch = s.charAt(i);
            map.put(ch, map.getOrDefault(ch, 0) + 1);
        }
        
        String res = "";
        for (int i=0; i<order.length(); i++) {
            char ch = order.charAt(i);
            if (map.containsKey(ch)) {
                int freq = map.get(ch);
                while (freq-- > 0) {
                    res += ch;
                }
                map.remove(ch);
            }
        }

        // for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
        //     int freq = entry.getValue();
            
        // }
        Set<Character> set = new HashSet<>();
        for (int i=0; i<order.length(); i++) {
            set.add(order.charAt(i));
        }

        for (int i=0; i<s.length(); i++) {
            if (!set.contains(s.charAt(i))) {
                res += s.charAt(i);
            }
        }
        System.out.println(res);
    }
}
```

## Submission at 2024-10-28 11:03:36


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
       return recurse(root, 0);
    }

    static int recurse(Node root, int currSum) {
      if (root == null) {
        return 0;
      }

      currSum = 10 * currSum + root.data;

      if (root.left == null && root.right == null) {
        // totalSum = currSum;
        return currSum;
      }

      return recurse(root.left, currSum) + recurse(root.right, currSum);
    }
}
```

## Submission at 2024-10-28 11:13:07


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
        Map<Integer, Integer> map = new HashMap<>();
        Node curr1 = head1;
        while (curr1 != null) {
          map.put(curr1.data, map.getOrDefault(curr1.data, 0) + 1);
          curr1 = curr1.next;
        }

        Node curr2 = head2, curr3 = new Node(-1);
        Node head3 = curr3;

        while (curr2 != null) {
          if (map.containsKey(curr2.data)) {
            Node newNode = new Node(curr2.data);
            curr3.next = newNode;
            curr3 = newNode;
            if (map.get(curr2.data) > 1) {
              map.put(curr2.data, map.get(curr2.data) - 1);
            } else {
              map.remove(curr2.data);
            }
          }
          curr2 = curr2.next;
        }

        return head3.next;
    }
}
```

## Submission at 2024-11-25 09:29:30


```
// write code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[] arr = new int[n];

        Map<Integer, Integer> map = new TreeMap<>();
        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }

        for (Map.Entry<Integer, Integer> en : map.entrySet()) {
            if (en.getValue() >= k) {
                System.out.println(en.getValue());
                return;
            }
        }

        System.out.println(-1);
    }
}


// // write code from scratch
// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-11-25 09:49:18


```
// write code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }

        if (n == 1) {
            System.out.println(true);
            return;
        }

        int d = arr[1] - arr[0];
        for (int i=0; i<n-1; i++) {
            if (arr[i+1] - arr[i] != d) {
                System.out.println(false);
                return;
            }
        }

        System.out.println(true);
    }
}


// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
        
//     }
// }
```

## Submission at 2024-11-25 09:50:58


```
// write code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i=0; i<n; i++) {
            for (int j=0; j<i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//     }
// }
```

## Submission at 2024-11-25 09:52:22


```
// write code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i=0; i<=n; i++) {
            for (int j=0; j<i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//     }
// }
```

## Submission at 2024-11-25 09:54:09


```
// write code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i=1; i<=n; i++) {
            for (int j=1; j<=i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


// import java.util.*;
// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//     }
// }
```

## Submission at 2024-11-25 09:57:02


```
// write code from scratch
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();

        String s = sc.next();
        int cnt1 = 0, cnt2 = 0;
        for (int i=0; i<s.length(); i++) {
            if (s.charAt(i) == 'a') {
                cnt1++;
            } else {
                cnt2++;
            }
        }

        if (cnt1 >= cnt2) {
            System.out.println("a");
        } else {
            System.out.println("b");
        }

    }
}
```

## Submission at 2024-11-25 10:02:07


```
// Write Code From Scratch Here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }

        for (int i=0; i<n-1; i++) {
            if (arr[i+1] < arr[i]) {
                System.out.println("NO");
                return;
            }
        }

        System.out.println("YES");
    }
}
```

## Submission at 2024-11-25 10:07:40


```
// Write Code From Scratch Here
// Write Code From Scratch Here
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), target = sc.nextInt();
        int[] arr = new int[n];

        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);
        for (int i=0; i<n; i++) {
            if (arr[i] == target) {
                System.out.print(i + " ");
            }
        }

    }
}
```

## Submission at 2024-11-25 10:18:09


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

class Tree {
    
    Integer findMaxForN(Node root, int n) {
       // Your code goes here
      //  if (root == null) {
      //   return -1;
      //  } 
      if (n == root.data) {
        return root.data;
      }

       if (n < root.left.data) {
        findMaxForN(root.left, n);
       } else if (n > root.right.data) {
        findMaxForN(root.right, n);
       } else {
        return root.data;
       }
    }
}
```

## Submission at 2024-11-25 10:40:19


```
// // Write Code From Scratch Here

// /* A Binary Tree node
// class Node {
//     int data;
//     Node left, right;
//    Node(int item)    {
//         data = item;
//         left = right = null;
//     }
// } */

// class Tree {
    
//     Integer findMaxForN(Node root, int n) {
//        // Your code goes here
//       //  if (root == null) {
//       //   return -1;
//       //  } 
//       if (n == root.data) {
//         return root.data;
//       }

//        if (root.left != null && n < root.left.data) {
//         findMaxForN(root.left, n);
//        } else if (root.right != null && n > root.right.data) {
//         findMaxForN(root.right, n);
//        } 
       
//       //  else {
//       //   if (n > root.data) {
//       //     return -1;
//       //   } else {
//       //     return root.data;
//       //   }
//       //  }

//        return root.data;
//     }
// }

import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt(); 
        }

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<k; i++) {
            map.put(BiCi[i][0], map.getOrDefault(BiCi[i][0], 0) + 1);
        }

        int cnt = 0; 
        for (Map.Entry<Integer, Integer> en : map.entrySet()) {
            cnt++;
        }

        if (cnt >= n) {
            System.out.println(sum(BiCi, k));
            // return;
        } else {
            System.out.println(-1);
        }
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 10:49:22


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
       int[] prev = new int[1];
       return recurse(root, n, prev);
    }

    static int recurse(Node root, int n, int[] prev) {

      if (root == null) {
        return prev[0];
      }

      if (n == root.data) {
        prev[0] = root.data;
        return prev[0];
      } 

      if (n > root.data) {
        prev[0] = root.data;
        recurse(root.right, n, prev);
      } else { // n < root.data
        recurse(root.left, n, prev);
      }
    }
}


// // Write Code From Scratch Here

// /* A Binary Tree node
// class Node {
//     int data;
//     Node left, right;
//    Node(int item)    {
//         data = item;
//         left = right = null;
//     }
// } */

// class Tree {
    
//     Integer findMaxForN(Node root, int n) {
//        // Your code goes here
//       //  if (root == null) {
//       //   return -1;
//       //  } 
//       if (n == root.data) {
//         return root.data;
//       }

//        if (root.left != null && n < root.left.data) {
//         findMaxForN(root.left, n);
//        } else if (root.right != null && n > root.right.data) {
//         findMaxForN(root.right, n);
//        } 
       
//       //  else {
//       //   if (n > root.data) {
//       //     return -1;
//       //   } else {
//       //     return root.data;
//       //   }
//       //  }

//        return root.data;
//     }
// }

// import java.util.*;

// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt(), k = sc.nextInt();
//         int[][] BiCi = new int[k][2];

//         for (int i=0; i<k; i++) {
//             BiCi[i][0] = sc.nextInt();
//             BiCi[i][1] = sc.nextInt(); 
//         }

//         Map<Integer, Integer> map = new HashMap<>();
//         for (int i=0; i<k; i++) {
//             map.put(BiCi[i][0], map.getOrDefault(BiCi[i][0], 0) + 1);
//         }

//         int cnt = 0; 
//         for (Map.Entry<Integer, Integer> en : map.entrySet()) {
//             cnt++;
//         }

//         if (cnt >= n) {
//             System.out.println(sum(BiCi, k));
//             // return;
//         } else {
//             System.out.println(-1);
//         }
//     }

//     static int sum(int[][] BiCi, int k) {
//         int sum = 0;
//         for (int i=0; i<k; i++) {
//             sum += BiCi[i][1];
//         }

//         return sum;
//     }
// }
```

## Submission at 2024-11-25 10:52:26


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
       int[] prev = new int[1];
       return recurse(root, n, prev);
    }

    static int recurse(Node root, int n, int[] prev) {

      if (root == null) {
        return prev[0];
      }

      if (n == root.data) {
        prev[0] = root.data;
        return prev[0];
      } 

      if (n > root.data) {
        prev[0] = root.data;
        recurse(root.right, n, prev);
      } else { // n < root.data
        recurse(root.left, n, prev);
      }

      return prev[0];
    }
}


// // Write Code From Scratch Here

// /* A Binary Tree node
// class Node {
//     int data;
//     Node left, right;
//    Node(int item)    {
//         data = item;
//         left = right = null;
//     }
// } */

// class Tree {
    
//     Integer findMaxForN(Node root, int n) {
//        // Your code goes here
//       //  if (root == null) {
//       //   return -1;
//       //  } 
//       if (n == root.data) {
//         return root.data;
//       }

//        if (root.left != null && n < root.left.data) {
//         findMaxForN(root.left, n);
//        } else if (root.right != null && n > root.right.data) {
//         findMaxForN(root.right, n);
//        } 
       
//       //  else {
//       //   if (n > root.data) {
//       //     return -1;
//       //   } else {
//       //     return root.data;
//       //   }
//       //  }

//        return root.data;
//     }
// }

// import java.util.*;

// class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt(), k = sc.nextInt();
//         int[][] BiCi = new int[k][2];

//         for (int i=0; i<k; i++) {
//             BiCi[i][0] = sc.nextInt();
//             BiCi[i][1] = sc.nextInt(); 
//         }

//         Map<Integer, Integer> map = new HashMap<>();
//         for (int i=0; i<k; i++) {
//             map.put(BiCi[i][0], map.getOrDefault(BiCi[i][0], 0) + 1);
//         }

//         int cnt = 0; 
//         for (Map.Entry<Integer, Integer> en : map.entrySet()) {
//             cnt++;
//         }

//         if (cnt >= n) {
//             System.out.println(sum(BiCi, k));
//             // return;
//         } else {
//             System.out.println(-1);
//         }
//     }

//     static int sum(int[][] BiCi, int k) {
//         int sum = 0;
//         for (int i=0; i<k; i++) {
//             sum += BiCi[i][1];
//         }

//         return sum;
//     }
// }
```

## Submission at 2024-11-25 11:04:26


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
        Node curr1 = head1, curr2 = head2;
        // int n1 = getLengthLL(head1);
        // int n2 = getLengthLL(head2);

        // int[] arr1 = new int[n1];
        // int[] arr2 = new int[n2];

        // int i=0, j=0;
        // while (curr1 != null) {
        //   arr1[i++] = curr1.data;
        //   curr1 = curr1.next;
        // }

        // while (curr2 != null) {
        //   arr2[j++] = curr2.data;
        //   curr2 = curr2.next;
        // }

        Set<Integer> set = new HashSet<>();
        while (curr1 != null) {
          set.add(curr1.data);
          curr1 = curr1.next;
        }

        while (curr2 != null) {
          if (set.contains(curr2.data)) {
            return curr2;
          }

          curr2 = curr2.next;
        }

        return null;
    }

    // static int getLengthLL(Node head) {
    //   Node curr = head;
    //   int n = 0;

    //   while (curr != null) {
    //     curr = curr.next;
    //     n++;
    //   }

    //   return n;
    // }
}



```

## Submission at 2024-11-25 11:21:35


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        int[] costs = new int[k];
        for (int i=0; i<k; i++) {
            costs[i] = BiCi[i][1];
        }
        // costs = [6, 7, 15]

        Arrays.sort(costs);
        int sumTotal = 0;
        for (int i=0; i<k; i++) {
            sumTotal += costs[i];
        }

        for (int i=0; i<k-n; i++) {
            sumTotal -= costs[i];
        }

        // sumTotal = 22

        // Map<Integer, Integer> map = new HashMap<>();
        // for ()
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 11:24:10


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        int[] costs = new int[k];
        for (int i=0; i<k; i++) {
            costs[i] = BiCi[i][1];
        }
        // costs = [6, 7, 15]

        Arrays.sort(costs);
        int sumTotal = 0;
        for (int i=0; i<k; i++) {
            sumTotal += costs[i];
        }

        for (int i=0; i<k-n; i++) {
            sumTotal -= costs[i];
        }

        // sumTotal = 22

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<k; i++) {
            map.put(BiCi[i][0], map.getOrDefault(BiCi[i][0], 0) + 1);
        }

        cnt = 0;
        for (Map.Entry<Integer, Integer> en : map.entrySet()) {
            cnt++;
        }

        if (cnt <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 11:27:01


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        int[] costs = new int[k];
        for (int i=0; i<k; i++) {
            costs[i] = BiCi[i][1];
        }
        // costs = [6, 7, 15]

        Arrays.sort(costs);
        int sumTotal = 0;
        for (int i=0; i<k; i++) {
            sumTotal += costs[i];
        }

        for (int i=0; i<k-n; i++) {
            sumTotal -= costs[i];
        }

        // sumTotal = 22

        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<k; i++) {
            map.put(BiCi[i][0], map.getOrDefault(BiCi[i][0], 0) + 1);
        }

        int cnt = 0;
        for (Map.Entry<Integer, Integer> en : map.entrySet()) {
            cnt++;
        }

        if (cnt <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        // Map<Integer, Integer> map1 = new HashMap<>();
        // for (int i=0; i<k; i++) {
        //     map1.put();
        // }
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 11:35:46


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        // int[] costs = new int[k];
        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        // Arrays.sort(costs);
        // int sumTotal = 0;
        // for (int i=0; i<k; i++) {
        //     sumTotal += costs[i];
        // }

        // for (int i=0; i<k-n; i++) {
        //     sumTotal -= costs[i];
        // }

        // sumTotal = 22

        Map<Integer, Integer> map1 = new HashMap<>();
        for (int i=0; i<k; i++) {
            map1.put(BiCi[i][0], map1.getOrDefault(BiCi[i][0], 0) + BiCi[i][1]);
        }

        int cnt = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            cnt++;
        }

        int[] costs = new int[cnt];
        int idx = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            costs[idx++] = en.getValue();
        }

        Arrays.sort(costs);
        // Arrays.sort(costs);

        for (int i=cnt-1; i<cnt - n + 1; i++) {
            sum += costs[i];
        }
        System.out.println(sum);
        // return;



        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 11:37:49


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        // int[] costs = new int[k];
        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        // Arrays.sort(costs);
        // int sumTotal = 0;
        // for (int i=0; i<k; i++) {
        //     sumTotal += costs[i];
        // }

        // for (int i=0; i<k-n; i++) {
        //     sumTotal -= costs[i];
        // }

        // sumTotal = 22

        Map<Integer, Integer> map1 = new HashMap<>();
        for (int i=0; i<k; i++) {
            map1.put(BiCi[i][0], map1.getOrDefault(BiCi[i][0], 0) + BiCi[i][1]);
        }

        int cnt = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            cnt++;
        }

        int[] costs = new int[cnt];
        int idx = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            costs[idx++] = en.getValue();
        }

        Arrays.sort(costs);
        // Arrays.sort(costs);

        for (int i=cnt-1; i > cnt - n + 1; i--) {
            sum += costs[i];
        }
        System.out.println(sum);
        // return;



        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 11:38:57


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        // int[] costs = new int[k];
        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        // Arrays.sort(costs);
        // int sumTotal = 0;
        // for (int i=0; i<k; i++) {
        //     sumTotal += costs[i];
        // }

        // for (int i=0; i<k-n; i++) {
        //     sumTotal -= costs[i];
        // }

        // sumTotal = 22

        Map<Integer, Integer> map1 = new HashMap<>();
        for (int i=0; i<k; i++) {
            map1.put(BiCi[i][0], map1.getOrDefault(BiCi[i][0], 0) + BiCi[i][1]);
        }

        int cnt = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            cnt++;
        }

        int[] costs = new int[cnt];
        int idx = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            costs[idx++] = en.getValue();
        }

        Arrays.sort(costs);
        // Arrays.sort(costs);

        for (int i=cnt-1; i >= cnt - n; i--) {
            sum += costs[i];
        }
        System.out.println(sum);
        // return;



        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

## Submission at 2024-11-25 11:41:01


```
import java.util.*;
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int[][] BiCi = new int[k][2];

        for (int i=0; i<k; i++) {
            BiCi[i][0] = sc.nextInt();
            BiCi[i][1] = sc.nextInt();
        }

        if (k <= n) {
            System.out.println(sum(BiCi, k));
            return;
        }

        // int[] costs = new int[k];
        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        // Arrays.sort(costs);
        // int sumTotal = 0;
        // for (int i=0; i<k; i++) {
        //     sumTotal += costs[i];
        // }

        // for (int i=0; i<k-n; i++) {
        //     sumTotal -= costs[i];
        // }

        // sumTotal = 22

        Map<Integer, Integer> map1 = new HashMap<>();
        for (int i=0; i<k; i++) {
            map1.put(BiCi[i][0], map1.getOrDefault(BiCi[i][0], 0) + BiCi[i][1]);
        }

        int cnt = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            cnt++;
        }

        int[] costs = new int[cnt];
        int idx = 0;
        for (Map.Entry<Integer, Integer> en : map1.entrySet()) {
            costs[idx++] = en.getValue();
        }

        Arrays.sort(costs);
        // Arrays.sort(costs);

        int sum = 0;
        for (int i=cnt-1; i >= cnt - n; i--) {
            sum += costs[i];
        }
        System.out.println(sum);
        // return;



        // for (int i=0; i<k; i++) {
        //     costs[i] = BiCi[i][1];
        // }
        // // costs = [6, 7, 15]

        
    }

    static int sum(int[][] BiCi, int k) {
        int sum = 0;
        for (int i=0; i<k; i++) {
            sum += BiCi[i][1];
        }

        return sum;
    }
}
```

