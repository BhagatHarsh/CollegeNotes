## Submission at 2024-08-05 10:47:28


```
// Write your Java code here from the scratch
import java.io.*;
import java.util.Scanner;
public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        System.out.println("Hello "+name+ "!");
    }
}
```

## Submission at 2024-08-05 10:51:28


```
// Write your Java code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        System.out.println("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-12 10:05:46


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
            System.out.println("Not valid");
        }else{
        System.out.println(fibonacci(x));
    }
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
        if (x <2) {
            return x;
        } else {
            return fibonacci(x - 1) + fibonacci(x - 2);

        }
    }
}
```

## Submission at 2024-08-12 10:34:06


```
import java.io.*;
import java.util.Scanner;

public class Main {
    public static boolean isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        if (n==1) {
            return true;
        }
        if (n%2==0) {
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}


```

## Submission at 2024-08-12 10:40:42


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


    private static boolean isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        if (n==1) {
            return true;
        }
        if (n%2==0) {
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}



```

## Submission at 2024-08-12 10:41:10


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


    private static boolean isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        if (n==1) {
            return true;
        }
        if (n%2==0) {
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}



```

## Submission at 2024-08-12 10:41:49


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


    private static boolean isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        if (n==1) {
            return true;
        }
        if (n%2==0) {
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}



```

## Submission at 2024-08-12 10:42:24


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


    private static boolean isPowerOfTwo(int n) {
        if (n == 0) {
            return false;
        }
        if (n==1) {
            return true;
        }
        if (n%2==0) {
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}



```

## Submission at 2024-08-12 11:04:19


```
import java.util.*;

class Subsets {
  public static List<List<Integer>> subsets(int[] nums) {
    List<List<Integer>> result = new ArrayList<>();
    backtrack(result, new ArrayList<>(), nums, 0);
    return result;
  }

  private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, int start) {
    result.add(new ArrayList<>(tempList));
    for (int i = start; i < nums.length; i++) {
      tempList.add(nums[i]);
      backtrack(result, tempList, nums, i + 1);
      tempList.remove(tempList.size() - 1);
    }
  }

  public static void main(String[] args) {
    if (args.length == 0) {
      System.out.println("Usage: java Subsets <num1> <num2> ... <numN>");
      System.exit(1);
    }

    int[] nums = new int[args.length];
    for (int i = 0; i < args.length; i++) {
      nums[i] = Integer.parseInt(args[i]);
    }

    List<List<Integer>> result = subsets(nums);
    for (List<Integer> subset : result) {
      System.out.println(subset);
    }
  }
}
```

## Submission at 2024-08-16 07:48:29


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

## Submission at 2024-08-16 07:53:56


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        // Hard-coded input
        int[] nums = {1, 2, 3};

        // Generate permutations
        List<List<Integer>> result = permute(nums);

        // Print permutations
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

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums, new boolean[nums.length]);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
            return;
        }

        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue;
            used[i] = true;
            tempList.add(nums[i]);
            backtrack(result, tempList, nums, used);
            tempList.remove(tempList.size() - 1);
            used[i] = false;
        }
    }
}

```

## Submission at 2024-08-16 07:55:16


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        // Hard-coded input
        int[] nums = {1, 2, 3};

        // Generate permutations
        List<List<Integer>> result = permute(nums);

        // Print permutations
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

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums, new boolean[nums.length]);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
            return;
        }

        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue;
            used[i] = true;
            tempList.add(nums[i]);
            backtrack(result, tempList, nums, used);
            tempList.remove(tempList.size() - 1);
            used[i] = false;
        }
    }
}

```

## Submission at 2024-08-16 09:22:55


```
#include <iostream>
#include <vector>
#include <algorithm>

class Permutations {
public:
    // Main function to generate permutations
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        backtrack(result, nums, 0);
        return result;
    }

private:
    // Helper function for backtracking
    void backtrack(std::vector<std::vector<int>>& result, std::vector<int>& nums, int start) {
        // If all numbers are used, add the permutation to the result
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }

        // Iterate through the array
        for (int i = start; i < nums.size(); ++i) {
            // Swap the current element with the start element
            std::swap(nums[start], nums[i]);
            // Recur with the next start index
            backtrack(result, nums, start + 1);
            // Swap back to restore the original array
            std::swap(nums[start], nums[i]);
        }
    }
};

int main() {
    // Define the input array directly
    std::vector<int> nums = {1, 2, 3};

    // Create an instance of Permutations
    Permutations permutations;

    // Generate permutations
    std::vector<std::vector<int>> result = permutations.permute(nums);

    // Print the result
    std::cout << "[";
    for (const auto& perm : result) {
        std::cout << "[";
        for (size_t i = 0; i < perm.size(); ++i) {
            std::cout << perm[i];
            if (i < perm.size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (&perm != &result.back()) std::cout << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-16 09:31:04


```
import java.util.ArrayList;
import java.util.List;

public class ParenthesesCombinations {

    // Main function to generate parentheses combinations
    public List<String> generateParentheses(int n) {
        List<String> result = new ArrayList<>();
        generateCombinations(result, "", 0, 0, n);
        return result;
    }

    // Helper function to generate combinations recursively
    private void generateCombinations(List<String> result, String current, int open, int close, int max) {
        // If the current string is a valid combination
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        // Add an open parenthesis if we have not used up all open parentheses
        if (open < max) {
            generateCombinations(result, current + "(", open + 1, close, max);
        }

        // Add a close parenthesis if there are more open parentheses than close ones
        if (close < open) {
            generateCombinations(result, current + ")", open, close + 1, max);
        }
    }

    public static void main(String[] args) {
        ParenthesesCombinations pc = new ParenthesesCombinations();
        int n = 3; // Example input

        List<String> result = pc.generateParentheses(n);

        // Print the result
        System.out.println(result);
    }
}

```

## Submission at 2024-08-16 09:37:54


```
#include <iostream>
#include <vector>
#include <string>

class ParenthesesCombinations {
public:
    // Main function to generate parentheses combinations
    std::vector<std::string> generateParentheses(int n) {
        std::vector<std::string> result;
        generateCombinations(result, "", 0, 0, n);
        return result;
    }

private:
    // Helper function to generate combinations recursively
    void generateCombinations(std::vector<std::string>& result, std::string current, int open, int close, int max) {
        // If the current string is a valid combination
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }

        // Add an open parenthesis if we have not used up all open parentheses
        if (open < max) {
            generateCombinations(result, current + "(", open + 1, close, max);
        }

        // Add a close parenthesis if there are more open parentheses than close ones
        if (close < open) {
            generateCombinations(result, current + ")", open, close + 1, max);
        }
    }
};

int main() {
    ParenthesesCombinations pc;
    int n = 3; // Example input

    std::vector<std::string> result = pc.generateParentheses(n);

    // Print the result
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-16 09:42:10


```
#include <iostream>
#include <vector>
#include <algorithm>

// Function to generate permutations
void permuteHelper(std::vector<std::vector<int>>& result, std::vector<int>& nums, int start) {
    // Base case: if start index has reached the end of the array
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    // Recursive case: generate permutations by swapping each element
    for (int i = start; i < nums.size(); ++i) {
        // Swap the current element with the start element
        std::swap(nums[start], nums[i]);
        // Recur with the next start index
        permuteHelper(result, nums, start + 1);
        // Swap back to restore the original array
        std::swap(nums[start], nums[i]);
    }
}

// Function to generate all permutations and return them sorted
std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    permuteHelper(result, nums, 0);
    // Sort the result
    std::sort(result.begin(), result.end());
    return result;
}

// Function to print a vector of vectors
void printResult(const std::vector<std::vector<int>>& result) {
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

int main() {
    // Define the input array directly
    std::vector<int> nums = {1, 2, 3}; // Example input

    // Generate permutations
    std::vector<std::vector<int>> result = permute(nums);

    // Print the result
    printResult(result);

    return 0;
}

```

## Submission at 2024-08-16 09:43:22


```
#include <iostream>
#include <vector>
#include <algorithm>

// Function to generate permutations
void permuteHelper(std::vector<std::vector<int>>& result, std::vector<int>& nums, int start) {
    // Base case: if start index has reached the end of the array
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    // Recursive case: generate permutations by swapping each element
    for (int i = start; i < nums.size(); ++i) {
        // Swap the current element with the start element
        std::swap(nums[start], nums[i]);
        // Recur with the next start index
        permuteHelper(result, nums, start + 1);
        // Swap back to restore the original array
        std::swap(nums[start], nums[i]);
    }
}

// Function to generate all permutations and return them sorted
std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    permuteHelper(result, nums, 0);
    // Sort the result
    std::sort(result.begin(), result.end());
    return result;
}

// Function to print a vector of vectors
void printResult(const std::vector<std::vector<int>>& result) {
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

int main() {
    // Define the input array directly
    std::vector<int> nums = {1, 2, 3}; // Example input

    // Generate permutations
    std::vector<std::vector<int>> result = permute(nums);

    // Print the result
    printResult(result);

    return 0;
}

```

## Submission at 2024-08-16 09:45:05


```
#include <iostream>
#include <vector>
#include <algorithm>

// Function to generate all permutations using next_permutation
std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    
    // Sort the array to ensure permutations are generated in lexicographical order
    std::sort(nums.begin(), nums.end());
    
    do {
        result.push_back(nums);
    } while (std::next_permutation(nums.begin(), nums.end()));
    
    return result;
}

// Function to print a vector of vectors
void printResult(const std::vector<std::vector<int>>& result) {
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;
}

int main() {
    // Define the input array directly
    std::vector<int> nums = {1, 2, 3}; // Example input

    // Generate permutations
    std::vector<std::vector<int>> result = permute(nums);

    // Print the result
    printResult(result);

    return 0;
}

```

## Submission at 2024-09-09 05:13:38


```
// Single public class in the file
public class Main {

    // Inner class ListNode to represent nodes in the linked list
    static class ListNode {
        int value;
        ListNode next;

        ListNode(int v) {
            value = v;
            next = null;
        }
    }

    // Function to delete the x-th node (1-based index) from the linked list
    public static ListNode deleteNode(ListNode head, int x) {
        if (head == null) {
            return null; // List is empty
        }

        // Special case: removing the head node
        if (x == 1) {
            ListNode newHead = head.next;
            head.next = null; // Clean up the old head node reference
            return newHead;
        }

        ListNode current = head;
        ListNode prev = null;

        // Traverse to the (x-1)-th node
        for (int i = 1; i < x && current != null; ++i) {
            prev = current;
            current = current.next;
        }

        // If the current node is not null, it means we are at the x-th node
        if (current != null) {
            prev.next = current.next; // Skip the current node
            current.next = null; // Clean up the deleted node reference
        }

        return head;
    }

    // Function to print the linked list
    public static void printList(ListNode head) {
        ListNode temp = head;
        while (temp != null) {
            System.out.print(temp.value + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    // Main method to test the linked list operations
    public static void main(String[] args) {
        // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        head.next.next = new ListNode(3);
        head.next.next.next = new ListNode(4);
        head.next.next.next.next = new ListNode(5);

        // Print the original list
        System.out.print("Original list: ");
        printList(head);

        // Delete the 2nd node (value 2)
        head = deleteNode(head, 2);

        // Print the updated linked list
        System.out.print("Updated list: ");
        printList(head);
    }
}

```

## Submission at 2024-09-09 05:20:41


```
#include <iostream>

// Define the ListNode structure
class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int v) : value(v), next(nullptr) {}
};

// Function to delete the x-th node (1-based index) from the linked list
ListNode* deleteNode(ListNode* head, int x) {
    if (head == nullptr) {
        return nullptr; // List is empty
    }

    // Special case: removing the head node
    if (x == 1) {
        ListNode* newHead = head->next;
        delete head; // Clean up the old head node
        return newHead;
    }

    ListNode* current = head;
    ListNode* prev = nullptr;

    // Traverse to the (x-1)-th node
    for (int i = 1; i < x && current != nullptr; ++i) {
        prev = current;
        current = current->next;
    }

    // If the current node is not null, it means we are at the x-th node
    if (current != nullptr) {
        prev->next = current->next; // Skip the current node
        delete current; // Clean up the deleted node
    }

    return head;
}

// Function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Print the original list
    std::cout << "Original list: ";
    printList(head);

    // Delete the 2nd node (value 2)
    head = deleteNode(head, 2);

    // Print the updated linked list
    std::cout << "Updated list: ";
    printList(head);

    // Clean up remaining nodes
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

```

## Submission at 2024-09-09 08:18:35


```
// Write code from scratch
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        c[i] = std::max(a[i], b[i]);
    }

    for (int i = 0; i < n; i++) {
        std::cout << c[i] << " ";
    }

    return 0;
}

```

## Submission at 2024-09-09 08:37:12


```
import java.util.ArrayList;
import java.util.List;

// Definition for singly-linked list.
class Node {
    int val;
    Node next;
    Node(int x) { val = x; }
}

public class Main {
    public List<Integer> traverseList(Node head) {
        List<Integer> result = new ArrayList<>();
        Node current = head;

        while (current != null) {
            result.add(current.val);
            current = current.next;
        }

        return result;
    }
}

```

## Submission at 2024-09-09 08:43:47


```
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

## Submission at 2024-09-09 09:02:30


```
class Solution {
    public static java.util.List<Integer> diagonalTraversal(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        java.util.List<Integer> result = new java.util.ArrayList<>();

        for (int k = 0; k < m + n - 1; k++) {
            int i = Math.max(0, k - n + 1);
            int j = Math.min(k, n - 1);

            while (i < m && j >= 0) {
                result.add(matrix[i][j]);
                i++;
                j--;
            }
        }

        return result;
    }
}

```

## Submission at 2024-09-09 09:03:59


```
class Solution {
    public static java.util.List<Integer> diagonalTraversal(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        java.util.List<Integer> result = new java.util.ArrayList<>();

        for (int k = 0; k < m + n - 1; k++) {
            int i = Math.max(0, k - n + 1);
            int j = Math.min(k, n - 1);

            while (i < m && j >= 0) {
                result.add(matrix[i][j]);
                i++;
                j--;
            }
        }

        return result;
    }
}

```

## Submission at 2024-09-09 09:14:03


```
class ReverseLinkedList {
    Node reverseLinkedList(Node head) {
        Node prev = null;
        Node curr = head;
        Node next = null;

        while (curr != null) {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
}

```

## Submission at 2024-09-09 09:15:46


```
class DeleteNode {
    Node deleteNode(Node head, int x) {
        if (head == null) {
            return null;
        }

        if (x == 1) {
            return head.next;
        }

        Node curr = head;
        for (int i = 1; i < x - 1; i++) {
            curr = curr.next;
        }

        curr.next = curr.next.next;

        return head;
    }
}

```

## Submission at 2024-09-09 10:20:02


```
// Write Code from Scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        
    }
    public static boolean pow (int n){
        return true;
    }
}
```

## Submission at 2024-09-09 11:10:51


```
// Write Code from Scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        
    }

    public static boolean pow(int n){
        return true;
    }
}
```

## Submission at 2024-09-17 10:45:20


```
// Write code from scratch here
#include <bits/stdc++.h>
using namespace std;

int freq(string s, char c, int cnt, int i)
{
    if (i > s.length())
        return cnt;
    if (s[i] == c)
        return freq(s, c, cnt+1, i+1);
    else
        return freq(s, c, cnt, i+1);
}

int main()
{
    string s;
    char c;
    cin >> s >> c;

    cout << freq(s, c, 0, 0) << endl;
}
```

## Submission at 2024-09-18 07:57:41


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-10-07 09:55:46


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    int n = q.size();
    vector<int>arr;
    queue<int>ans;

    int = arr[n];

    for(int i = 0; i<n; i++){

        arr.push_back = q.front();
        q.pop();
    }

    for(int i = n-1; i>=0; i--){

        ans.push_back[arr[i]];
    }
    return ans;
}

```

## Submission at 2024-10-07 11:05:00


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int number_of_words = 1;

    for( int i =0; i<str.length(); i++){
        if(str[i] == '.'){
            number_of_words++;
        }
        else{
            continue;
        }
    }

    string ans;

    for( int i =0; i<str.length(); i++){
        string temp = {};

        temp = temp + str[i];
        i++;
        
        reverse(temp.begin() , temp.end());
        ans = ans + temp + '.';
        cout<<ans;
    }
    return 0;
}
```

## Submission at 2024-10-07 11:12:59


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int number_of_words = 1;

    for( int i =0; i<str.length(); i++){
        if(str[i] == '.'){
            number_of_words++;
        }
        else{
            continue;
        }
    }

    string ans;

    for( int i =0; i<str.length(); i++){
        string temp = {};
        temp = temp + str[i];
        
        reverse(temp.begin() , temp.end());
        ans = ans + temp + '.';
        cout<<ans;
        
    }
    return 0;
}
```

## Submission at 2024-10-07 11:13:42


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    int number_of_words = 1;

    for( int i =0; i<str.length(); i++){
        if(str[i] == '.'){
            number_of_words++;
        }
        else{
            continue;
        }
    }

    string ans;

    for( int i =0; i<str.length(); i++){
        string temp = {};
        temp = temp + str[i];
        
        reverse(temp.begin() , temp.end());
        ans = ans + temp + '.';
        cout<<ans;
        
    }
    return 0;
}
```

## Submission at 2024-10-28 10:12:21


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int findMin(Node *root)
{
    if(root == NULL){
        return INT_MAX;
    }
    
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);

    return min(root->data, min(leftMin, rightMin));
}


```

## Submission at 2024-10-28 10:12:56


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int findMin(Node *root)
{
    if(root == NULL){
        return INT_MAX;
    }
    
    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);

    return min(root->data, min(leftMin, rightMin));
}


```

## Submission at 2024-10-28 11:01:18


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//complete the function and return the value of the sum
class solution{
public:
  int treePathSum(Node* root){
    int maxSum = INT_MAX;
    maxGain(root, maxSum);
    return maxSum;
  }

private:
  int maxGain(Node* node, int&maxSum){
    int leftGain = std::max(maxGain(node->left, maxSum), 0);
    int rightGain = std::max(maxGain(node->right, maxSum), 0);

    int CurrentPathSum = node->data + leftGain + rightGain;

    maxSum = std::max(maxGain, CurrentPathSum);
    return node->data + std::max(leftGain, rightGain);
  }
};
```

## Submission at 2024-10-28 11:17:16


```
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//complete the function and return the value of the sum
class solution{
public:
  int treePathSum(Node* root){
    int maxSum = INT_MAX;
    maxGain(root, maxSum);
    return maxSum;
  }

private:
  int maxGain(Node* node, int&maxSum){
    int leftGain = std::max(maxGain(node->left, maxSum), 0);
    int rightGain = std::max(maxGain(node->right, maxSum), 0);

    int CurrentPathSum = node->data + leftGain + rightGain;

    maxSum = std::max(maxGain, CurrentPathSum);
    return node->data + std::max(leftGain, rightGain);
  }
};
```

## Submission at 2024-11-04 10:14:25


```
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

int findMax(Node *root)
{
    if(root == NULL){
        return INT_MIN;
    }
    
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);

    return max(root->data, max(leftMax, rightMax));
}
```

## Submission at 2024-11-25 10:52:51


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data <= minval || root->data >= maxval)
        return false;

    return IsBSTUtil(root->left, minval, root->data) && IsBSTUtil(root->right, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "The tree is a BST";
    else
        cout << "The tree is not a BST";
    return 0;
}
```

## Submission at 2024-11-25 10:57:54


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return false;

    if(root->data <= minval || root->data >= maxval)
        return true;

    return IsBSTUtil(root->left, minval, root->data) && IsBSTUtil(root->right, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
```

## Submission at 2024-11-25 11:00:23


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data <= minval || root->data >= maxval)
        return false;

    return IsBSTUtil(root->left, minval, root->data) && IsBSTUtil(root->right, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
```

## Submission at 2024-11-25 11:01:56


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data <= minval || root->data >= maxval)
        return false;

    return IsBSTUtil(root->left, minval, root->data) && IsBSTUtil(root->right, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
```

## Submission at 2024-11-25 11:04:03


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data <= minval || root->data >= maxval)
        return false;

    return IsBSTUtil(root->right, minval, root->data) && IsBSTUtil(root->left, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

```

## Submission at 2024-11-25 11:06:22


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data <= minval || root->data >= maxval)
        return false;

    return IsBSTUtil(root->right, minval, root->data) && IsBSTUtil(root->left, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBST(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

```

## Submission at 2024-11-25 11:10:08


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data >= minval || root->data <= maxval)
        return false;

    return IsBSTUtil(root->right, minval, root->data) && IsBSTUtil(root->left, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

```

## Submission at 2024-11-25 11:11:53


```
// Write Code From Scratch Here
#include <iostream>
#include <climits>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

bool IsBSTUtil (Node* root, int minval, int maxval){
    if(root == nullptr)
        return true;

    if(root->data >= minval || root->data <= maxval)
        return false;

    return IsBSTUtil(root->left, minval, root->data) && IsBSTUtil(root->right, root->data, maxval);
}

bool IsBST(Node* root) {
    return IsBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right =new Node(7);

    if(IsBST(root))
        cout << "NO";
    else
        cout << "YES";
    return 0;
}

```

