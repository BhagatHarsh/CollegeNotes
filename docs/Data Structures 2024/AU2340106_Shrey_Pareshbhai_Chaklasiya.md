## Submission at 2024-08-05 10:25:48


```
# Write your Python code here from the scratch

a = input()
print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:33:23


```
# Write your Python code here from the scratch

a = input()
if(len(a)>=1 and len(a)<=100):
    print("Hello "+a+"!")
else:
    print("Enter a valid Name!")
```

## Submission at 2024-08-05 10:52:40


```
# Write your Python code here
n = int(input())
names = []

if(n>=1 and n<=100):
    for i in range(0,n):
        name = input()
        if(len(name)>=1 and len(name)<=100):
            names.append(name)
            print("Hello "+names[i]+"!")
            i+=1
        else:
            print("Enter a valid Name!")
else:
    print("Enter names less than 100!")
    
```

## Submission at 2024-08-12 09:50:47


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        int x = Integer.parseInt(br.readLine().trim());

        System.out.println(fibonacci(x));
    }

    private static int fibonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return fibonacci (n - 1) + fibonacci (n - 2);
        }
    }
}
```

## Submission at 2024-08-12 10:18:50


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());

        if (isPowerOfTwo(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }

    private static boolean isPowerOfTwo(int x) {
        if (x == 1) {
            return true;
        } else if (x < 1 || x % 2 != 0) {
            return false;
        } else {
            return isPowerOfTwo(x/2);
        }
    }
}

```

## Submission at 2024-08-12 10:21:26


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());

        if (isPowerOfTwo(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }

    private static boolean isPowerOfTwo(int x) {
        if (x == 1) {
            return true;
        } else if (x < 1 || x % 2 != 0) {
            return false;
        } else {
            return isPowerOfTwo(x/2);
        }
    }
}

```

## Submission at 2024-08-12 10:22:17


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());

        if (isPowerOfTwo(n)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }

    private static boolean isPowerOfTwo(int x) {
        if (x == 1) {
            return true;
        } else if (x < 1 || x % 2 != 0) {
            return false;
        } else {
            return isPowerOfTwo(x/2);
        }
    }
}

```

## Submission at 2024-08-21 07:17:31


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        combine(i + 1, k - 1, n, current, result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print combinations
    cout<<"[";
    for (int i=0;i<result.size();i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i==result.size()-1) continue;
        cout<<",";
    }
    cout<<"]";

    return 0;
}
```

## Submission at 2024-08-21 07:18:08


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-21 07:18:42


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-21 07:19:10


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-21 07:21:48


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backtrack(vector<string> &result, string current, int open, int close, int n) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    if (open < n)
        backtrack(result, current + "(", open + 1, close, n);
    if (close < open)
        backtrack(result, current + ")", open, close + 1, n);
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    backtrack(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> result = generateParenthesis(n);
    
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if ( i < result.size() - 1 ) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-21 07:25:08


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.peek() == '\n') break;
    }
    vector<vector<int>> permutations = permute(nums);
    cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < permutations.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-09-02 10:02:13


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
        Node current = head;
        while (current != null) {
            result.add(current.data);
            current = current.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:17:43


```
// Write code from scratch

import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static ArrayList<Integer> Main(int n, ArrayList<Integer> a, ArrayList<Integer> b) {
        ArrayList<Integer> c = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (a.get(i) < b.get(i)) {
                c.add(b.get(i));
            } else {
                c.add(a.get(i));
            }
        }
        return c;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        ArrayList<Integer> a = new ArrayList<>(n);
        ArrayList<Integer> b = new ArrayList<>(n);

        for (int i = 0; i < n; i++) {
            a.add(sc.nextInt());
        }
        for (int i = 0; i < n; i++) {
            b.add(sc.nextInt());
        }

        ArrayList<Integer> result = Main(n, a, b);

        for (int i = 0; i < n; i++) {
            System.out.print(result.get(i) + " ");
        }
        System.out.println();

        sc.close();
    }
}

```

## Submission at 2024-09-02 10:23:48


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
        Node current = head;
        int count = 1;

        while (current != null) {
            if (count == k) {
                return current.data;
            }
            count++;
            current = current.next;
        }

        return -1;
    }
}
```

## Submission at 2024-09-02 10:26:17


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
        Node current = head;
        int count = 1;

        while (current != null) {
            if (count == k) {
                return current.data;
            }
            count++;
            current = current.next;
        }

        return -1;
    }
}
```

## Submission at 2024-09-02 10:50:25


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
	// Your code here
    Node current = head;
    for (int i = 0; i < x-1; i++){
        if (current == null || current.next == null) {
            return head;
        }
        current = current.next;
    }
    if(current != null && current.next != null){
        current.next = current.next.next;
    }

    return head;	
    }
}
```

## Submission at 2024-09-02 10:52:10


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
	// Your code here
    Node current = head;
    for (int i = 1; i < x-1; i++){
        if (current == null || current.next == null) {
            return head;
        }
        current = current.next;
    }
    if(current != null && current.next != null){
        current.next = current.next.next;
    }

    return head;	
    }
}
```

## Submission at 2024-09-02 10:56:06


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
	// Your code here

    if(x == 1) {
        return head.next;
    }

    Node current = head;
    for (int i = 1; i < x-1; i++){
        if (current == null || current.next == null) {
            return head;
        }
        current = current.next;
    }
    if(current != null && current.next != null){
        current.next = current.next.next;
    }

    return head;
    }
}
```

## Submission at 2024-09-09 09:53:39


```
// Write Code from Scratch here
import java.util.Scanner;

class Main{
    public static boolean isp3(int n){
        if (n == 1) {
            return true;
        } else if (n%3 != 0) {
            return false;
        } else {
            return isp3(n/3);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(isp3(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }
}
```

## Submission at 2024-09-09 10:20:30


```
// Write code from scratch here
import java.util.Scanner;

class Main{
    public static int freq(string s, int x){
        int count = 0;
        int len = s.length;
        int i;

        if(1 <= len <= 100 & 0 <= x <= 9) {
            while (i < len) {
                if(s.charAt(i) == x) {
                    count++;
                }
                i++;
            }
            return count;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        string s = sc.nextLine();
        int x = sc.nextInt();

        System.out.println(freq(s,x));
    }
}
```

## Submission at 2024-09-09 10:31:24


```
// Write Code from Scratch here
import java.util.Scanner;

class Main{
    public static boolean isp3(int n){
        if (n == 1) {
            return true;
        } else if (n == 0 || n%3 != 0) {
            return false;
        } else {
            return isp3(n/3);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(isp3(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
    }
}
```

## Submission at 2024-09-09 10:39:49


```
// Write code from scratch here
import java.util.Scanner;

class Main{
    public static int freq(String s, int x){
        int count = 0;
        int len = s.length();
        int i = 0;

        while(i < len) {
            if(s.charAt(i) == x) {
                count++;
            }
            i++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int x = sc.nextInt();

        System.out.println(freq(s,x));
    }
}
```

## Submission at 2024-09-16 04:25:11


```
// Write code from scratch here
import java.util.Scanner;

public class Main {
    // Recursive function to count occurrences of digit 'x' in string 's'
    public static int countFrequency(String s, char x, int index) {
        // Base case: if we have reached the end of the string
        if (index == s.length()) {
            return 0;
        }

        // Recursively check the rest of the string and add 1 if the current character matches 'x'
        return (s.charAt(index) == x ? 1 : 0) + countFrequency(s, x, index + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input string s and char x
        String s = sc.next();
        char x = sc.next().charAt(0);
        
        // Call the recursive function starting from index 0
        int count = countFrequency(s, x, 0);
        
        // Output the result
        System.out.println(count);
        
        sc.close();
    }
}
```

## Submission at 2024-10-17 12:11:37


```
// Write your code from scratch here
import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static String arrange(String s) {
        String[] ns = s.split("\\+");
        int[] n = new int[ns.length];
        
        for(int i = 0; i < ns.length; i++) {
            n[i] = Integer.parseInt(ns[i]);
        }
        
        Arrays.sort(n);
        
        StringBuilder ans = new StringBuilder();
        for(int i = 0; i < n.length; i++) {
            ans.append(n[i]);
            if(i < n.length - 1) {
                ans.append("+");
            }
        }
        
        return ans.toString();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String answer = arrange(s);
        System.out.println(answer);
    }
}
```

## Submission at 2024-10-28 10:16:27


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:18:54


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:20:16


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        if(k < 1) {
            return 0;
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:21:11


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        if(k < 1 || arr.length < 1) {
            return 0;
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:21:42


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        if(k < 1 && arr.length < 1) {
            return 0;
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:22:04


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        if(k < 1 && arr.length < 1) {
            return -1;
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:22:25


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;

        if(k < 1 || arr.length < 1) {
            return -1;
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:41:04


```

//User function Template for Java

/*
class Node {
    int data;
    TreeNode left, right, val;
    
    public TreeNode(int val){
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
*/

class Solution{
    public static int findMin(TreeNode root){
        if(root.left == root.val) {
            return root.left;
        } else if (root.right == root.val) {
            return root.right;
        }

        return root.val;
    }
}
```

## Submission at 2024-10-28 10:44:27


```

//User function Template for Java

/*
class TreeNode {
    int data;
    TreeNode left, right;
    
    public TreeNode(int data){
        this.data = data;
        this.left = left;
        this.right = right;
    }
}
*/

class Solution{
    public static int findMin(TreeNode root){
        if(root.left == root.data) {
            return root.left;
        } else if (root.right == root.data) {
            return root.right;
        }

        return root.data;
    }
}
```

## Submission at 2024-10-28 10:48:08


```
// write code from scratch
import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;
        Arrays.sort(arr);

        if(k < 1 || arr.length < 1) {
            return -1;
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:49:43


```
// write code from scratch
import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;
        Arrays.sort(arr);

        if(k < 1 || arr.length < 1) {
            return -1;
        }

        for(int num : arr) {
            if(num < 0 || num > 200) {
                return -1;
            }
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:50:45


```
// write code from scratch
import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;
        Arrays.sort(arr);

        if(k < 1 || arr.length < 1) {
            return -1;
        }

        for(int num : arr) {
            if(num < 0) {
                return -1;
            } else if(num > 200) {
                return -1;
            }
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = 0; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:54:14


```
// write code from scratch
import java.util.Scanner;
import java.util.Arrays;

class Main {
    public static int freq(int[] arr, int k) {
        int temp = 0;
        int ans = 0;
        Arrays.sort(arr);

        if(k < 1 || arr.length < 1) {
            return -1;
        }

        for(int num : arr) {
            if(num < 0) {
                return -1;
            } else if(num > 200) {
                return -1;
            }
        }

        for(int i = 0; i < arr.length; i++) {
            int count = 0;
            temp = arr[i];
            for(int j = i; j < arr.length; j++) {
                if(temp == arr[j]) {
                    count++;
                }
            }
            if(count >= k) {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[l];
        for(int i = 0; i < l; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-10-28 10:56:42


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

## Submission at 2024-10-28 11:11:34


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
        left, right = null;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        //code here
        if(root.left == root.data) {
            return root.left;
        } else if (root.right == root.data) {
            return root.right;
        }

        return root.data;
    }
}
```

## Submission at 2024-10-28 11:19:37


```
// Write your code from scratch here
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String order = sc.next();
        String s = sc.next();
        StringBuilder str = new StringBuilder();
        String ans;

        for(int i = 0; i < s.length(); i++) {
            if(i < order.length()) {
                for(int j = 0; j < order.length(); j++) {
                    if(s.charAt(i) == order.charAt(j)) {
                        ans = str.add(order.charAt(j));
                    }
                }
            }
            ans = str.add(s.charAt(i));
        }
    }

    System.out.println(ans);
}
```

## Submission at 2024-11-04 09:49:31


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
        List<Integer> result = new ArrayList<>();
        helper(root, result);
        Collections.sort(result);
        return result.get(0);
    }

    public static void helper(Node root, List<Integer> result) {
        if(root == null) {
            return;
        }

        helper(root.left, result);
        result.add(root.data);
        helper(root.right, result);
    }
}
```

## Submission at 2024-11-04 09:53:22


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
        List<Integer> result = new ArrayList<>();
        helper(root, result);
        Collections.sort(result, Collections.reverseOrder());
        return result.get(0);
    }

    public static void helper(Node root, List<Integer> result) {
        if(root == null) {
            return;
        }

        helper(root.left, result);
        result.add(root.data);
        helper(root.right, result);
    }
}
```

## Submission at 2024-11-04 09:55:11


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
        List<Integer> result = new ArrayList<>();
        helper(root, result);
        Collections.sort(result);
        return result.get(result.size() - 1);
    }

    public static void helper(Node root, List<Integer> result) {
        if(root == null) {
            return;
        }

        helper(root.left, result);
        result.add(root.data);
        helper(root.right, result);
    }
}
```

## Submission at 2024-11-04 10:00:28


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
        return root == null || mirror(root.left, root,right);
    }

    public boolean mirror(Node left, Node right) {
        if(left == null && right == null) {
            return true;
        }

        if(left == null || right == null) {
            return false;
        }

        return (left.data == right.data) && mirror(left.left, right.right) && mirror(left.right, right.left);
    }
}
```

## Submission at 2024-11-04 10:02:26


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
        return root == null || mirror(root.left, root.right);
    }

    public boolean mirror(Node left, Node right) {
        if(left == null && right == null) {
            return true;
        }

        if(left == null || right == null) {
            return false;
        }

        return (left.data == right.data) && mirror(left.left, right.right) && mirror(left.right, right.left);
    }
}
```

## Submission at 2024-11-04 10:13:40


```
// Write your code from scratch here
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String order = scanner.next();
        String s = scanner.next();
        scanner.close();

        System.out.println(customSortString(order, s));
    }

    public static String customSortString(String order, String s) {
        // Array to count occurrences of each character in s (assuming lowercase letters)
        int[] charCount = new int[26];
        for (char c : s.toCharArray()) {
            charCount[c - 'a']++;
        }

        StringBuilder result = new StringBuilder();

        // Append characters in the order specified by "order" string
        for (char c : order.toCharArray()) {
            while (charCount[c - 'a'] > 0) {
                result.append(c);
                charCount[c - 'a']--;
            }
        }

        // Append remaining characters not in "order" in their original order
        for (char c : s.toCharArray()) {
            while (charCount[c - 'a'] > 0) {
                result.append(c);
                charCount[c - 'a']--;
            }
        }

        return result.toString();
    }
}
```

## Submission at 2024-11-04 10:27:31


```
import java.util.Scanner;

public class KthMissingPositiveNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt(); // length of the array
        int k = scanner.nextInt(); // the kth missing number we want to find
        int[] arr = new int[n];
        
        // Read the array elements
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        
        System.out.println(findKthMissing(arr, k));
    }

    public static int findKthMissing(int[] arr, int k) {
        int missingCount = 0; // count of missing numbers
        int currentNumber = 1; // start with the first positive integer
        int index = 0; // index in arr
        
        // Iterate until we find the kth missing number
        while (missingCount < k) {
            // Check if currentNumber exists in arr
            if (index < arr.length && arr[index] == currentNumber) {
                // If it exists, move to the next element in arr
                index++;
            } else {
                // If it does not exist, increment the missing count
                missingCount++;
            }
            
            // If we have reached the kth missing number, return it
            if (missingCount == k) {
                return currentNumber;
            }
            
            // Move to the next positive integer
            currentNumber++;
        }
        
        // This line should not be reached, given the constraints
        return -1;
    }
}

```

## Submission at 2024-11-04 10:28:02


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt(); // length of the array
        int k = scanner.nextInt(); // the kth missing number we want to find
        int[] arr = new int[n];
        
        // Read the array elements
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        
        System.out.println(findKthMissing(arr, k));
    }

    public static int findKthMissing(int[] arr, int k) {
        int missingCount = 0; // count of missing numbers
        int currentNumber = 1; // start with the first positive integer
        int index = 0; // index in arr
        
        // Iterate until we find the kth missing number
        while (missingCount < k) {
            // Check if currentNumber exists in arr
            if (index < arr.length && arr[index] == currentNumber) {
                // If it exists, move to the next element in arr
                index++;
            } else {
                // If it does not exist, increment the missing count
                missingCount++;
            }
            
            // If we have reached the kth missing number, return it
            if (missingCount == k) {
                return currentNumber;
            }
            
            // Move to the next positive integer
            currentNumber++;
        }
        
        // This line should not be reached, given the constraints
        return -1;
    }
}

```

## Submission at 2024-11-04 10:38:20


```
// Write code from scratch

import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];

        for(int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        for(int j = 0; j < n; j++) {
            b[j] = sc.nextInt();
        }

        StringBuilder result = new StringBuilder();
        for (int i = 0; i < n; i++) {
            result.append(Math.max(a[i], b[i])).append(" ");
        }
        
        System.out.println(result.toString().trim());
    }
}
```

## Submission at 2024-11-18 03:53:46


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static int freq(int[] arr, int k) {
        // The constraints say arr[i] is in the range 0 to 200
        int[] frequency = new int[201];

        // Count the frequency of each number
        for (int num : arr) {
            frequency[num]++;
        }

        // Find the first number with frequency >= k
        for (int num : arr) {
            if (frequency[num] >= k) {
                return num;
            }
        }

        // If no element is found
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

        System.out.println(freq(arr, k));
    }
}
```

## Submission at 2024-11-25 09:53:18


```
// write code from scratch
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();

        int ca = 0;
        int cb = 0;

        for(int i = 0; i < n.length(); i++){
            if(n.charAt(i) == 'a') {
                ca++;
            } else {
                cb++;
            }
        }

        if(ca > cb) {
            System.out.println("a");
        } else {
            System.out.println("b");
        }
    }
}
```

## Submission at 2024-11-25 10:22:07


```
// write code from scratch
import java.util.Scanner;

class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int d = arr[1] - arr[0];

        String ans = true;

        for(int i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] != d) {
                ans = false;
                break;
            }
        }

        System.out.println(ans);
    }
}
```

## Submission at 2024-11-25 10:33:33


```
// write code from scratch
import java.util.Scanner;

class Main{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }        

        System.out.println(check(arr));
    }

    public static boolean check(int[] arr){
        int d = arr[1] - arr[0];

        for(int i = 1; i < arr.length; i++) {
            if(arr[i] - arr[i-1] != d) {
                return false;
            }
        }

        return true;
    }
}
```

## Submission at 2024-11-25 11:12:24


```
// Write Code From Scratch Here
import java.util.Scanner;
import java.util.Arrays;

class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int t = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        
        Arrays.sort(arr);

        int[] ans = new int[n];

        for(int i = 0; i < n; i++){
            while (arr[i] <= t) {
                ans[i] = arr[i];
            }
        }

        for(int nums : ans) {
            System.out.print(nums + " ");
        }
    }
}
```

## Submission at 2024-11-25 11:26:44


```
// Write Code From Scratch Here
import java.util.Scanner;

class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        for(int i = 1; i < n; i++){
            if((arr[i] - arr[i-1]) < 0){
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        }
    }
}
```

## Submission at 2024-11-25 11:30:51


```
// Write Code From Scratch Here
import java.util.Scanner;

class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println(check(arr));
    }
    public static void check(int[] arr) {
        for(int i = 1; i < n; i++){
            if((arr[i] - arr[i-1]) < 0){
                return "NO";
            }
        }
        return "YES";
    }
}
```

## Submission at 2024-11-25 11:33:34


```
// Write Code From Scratch Here
import java.util.Scanner;

class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println(check(arr));
    }
    public static void check(int[] arr) {
        for(int i = 1; i < arr.length; i++){
            if((arr[i] - arr[i-1]) < 0){
                return "NO";
            }
        }
        return "YES";
    }
}
```

