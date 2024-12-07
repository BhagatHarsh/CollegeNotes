## Submission at 2024-08-05 10:23:04


```
import java.io.*;

public class Main{
    public static void main(String args[]){
        System.out.print("hello");
    }
}
```

## Submission at 2024-08-05 10:28:42


```
a=input("Enter your name:")
print("hello"+a+"!")
```

## Submission at 2024-08-05 10:30:08


```
a=input("Enter your name:")
print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:31:54


```
a=input("Enter your name:")
print("Hello "+a+"!")
```

## Submission at 2024-08-05 10:32:30


```
a=input("Enter your name:")
print("Hello "+a+"!")
```

## Submission at 2024-08-12 10:25:57


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
        if (x==1 || x==0){
                return x;
            }else{
                return fibonacci(x-1)+fibonacci(x-2);
            }
        }
    }


```

## Submission at 2024-08-12 10:46:14


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
        if (n==1){
            return true;
        }if(n%2==0){
            return isPowerOfTwo(n/2);
        }else{
            return false;
        }
        
    }
}

```

## Submission at 2024-08-20 04:33:03


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
        if(x==1 || x==0){
            return x;
        }
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

```

## Submission at 2024-08-21 14:05:58


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

## Submission at 2024-08-21 14:06:45


```
#include <iostream>

#include <vector>

#include <string>



using namespace std;



void generateParenthesis(int n, int open, int close, string current, vector<string>& result) {

    if (current.length() == 2 * n) {

        result.push_back(current);

        return;

    }

    

    if (open < n) {

        generateParenthesis(n, open + 1, close, current + '(', result);

    }

    

    if (close < open) {

        generateParenthesis(n, open, close + 1, current + ')', result);

    }

}



vector<string> generateParentheses(int n) {

    vector<string> result;

    generateParenthesis(n, 0, 0, "", result);

    return result;

}



int main() {

    int n;

    cin >> n;

    

    vector<string> combinations = generateParentheses(n);

    

    // Print the combinations

    cout << "[";

    for (size_t i = 0; i < combinations.size(); ++i) {

        cout << "\"" << combinations[i] << "\"";

        if (i < combinations.size() - 1) {

            cout << ",";

        }

    }

    cout << "]" << endl;

    

    return 0;

}
```

## Submission at 2024-08-21 14:07:44


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combineHelper(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }
    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        combineHelper(i + 1, k, n, current, result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combineHelper(1, k, n, current, result);
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

## Submission at 2024-10-07 10:14:47


```
// Write your code from scratch here
import java.util.*;
class solution{
    public static int[] reverse(String str){
        int[] arr = {};
        int x= 0;
        for(int i=0;i<str.length();i+=2){
            arr[x++] = str.charAt(i)-'0';
        }
        Arrays.sort(arr);
        return arr;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int[] arr1 = reverse(input);
        for(int i=0;i<arr1.length;i++){
            System.out.print(arr1[i] + "+");
        }
    }
}
```

## Submission at 2024-10-07 10:23:54


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
        Queue<Integer> Q = new LinkedList<Integer>();
        for(int i=0;i<q.size();i++){
            Q.add(q.poll());
        }
        return Q;
    }
}
```

## Submission at 2024-10-07 10:55:26


```
import java.util.Scanner;
class solution{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int k = sc.nextInt();
        int arr[] = new int[x];
        for(int i=0; i<arr.length;i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        int max = arr[arr.length-1];
        int diff = 0;
        if(max - arr[0] > k){
            int max1 = k + arr[0];
            diff = max-max1;
        }
        int count =0;
        for(int i= 0;i<arr.length;i++){
            if(arr[i] == max){
                count++;
            }
        }
        System.out.print(count*diff);
    }
}
```

## Submission at 2024-10-07 11:05:42


```
// Write your code from scratch here
// Write your code from scratch here
import java.util.*;
class solution{
    public static int[] reverse(String str){
        int[] arr = new int[str.length/2 + 1];
        int x= 0;
        for(int i=0;i<str.length();i+=2){
            arr[x++] = str.charAt(i)-'0';
        }
        Arrays.sort(arr);
        return arr;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int[] arr1 = reverse(str);
        for(int i=0;i<arr1.length;i++){
            System.out.print(arr1[i] + "+");
        }
    }
}
```

## Submission at 2024-10-07 11:06:45


```
# Write Python code from scratch
print(15)
```

## Submission at 2024-10-08 12:29:56


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Read the number of elements
        int n = sc.nextInt();
        
        // Read the numbers into an array
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        int count = 0;

        // Count numbers with an even number of digits
        for (int num : nums) {
            if (String.valueOf(Math.abs(num)).length() % 2 == 0) { // Use Math.abs to handle negative numbers
                count++;
            }
        }
        
        // Output the result
        System.out.println(count);
        
        sc.close(); // Close the scanner
    }
}

```

## Submission at 2024-10-14 05:52:05


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static int[] arrc(int n, int[] a,int[] b){
        int[] c = new int[n];
        for(int i =0;i<n;i++){
            c[i] = Math.max(a[i],b[i]);
        }
        return c;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        int[] b= new int[n];
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }
        arrc(n,a,b);
    }
}
```

## Submission at 2024-10-14 05:53:21


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        int[] b= new int[n];
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }
        int[] c = new int[n];
        for(int i =0;i<n;i++){
            c[i] = Math.max(a[i],b[i]);
            System.out.print(c[i]);
        }

    }
}
```

## Submission at 2024-10-14 05:53:25


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        int[] b= new int[n];
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }
        int[] c = new int[n];
        for(int i =0;i<n;i++){
            c[i] = Math.max(a[i],b[i]);
            System.out.print(c[i]);
        }

    }
}
```

## Submission at 2024-10-14 05:55:57


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b= new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }
        int[] c = new int[n];
        for(int i =0;i<n;i++){
            c[i] = Math.max(a[i],b[i]);
            System.out.print(c[i]);
        }
        sc.close();
    }
}
```

## Submission at 2024-10-14 05:56:22


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b= new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }
        int[] c = new int[n];
        for(int i =0;i<n;i++){
            c[i] = Math.max(a[i],b[i]);
            System.out.print(c[i] + " ");
        }
        sc.close();
    }
}
```

## Submission at 2024-10-14 05:56:37


```
// Write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        int[] b= new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }
        int[] c = new int[n];
        for(int i =0;i<n;i++){
            c[i] = Math.max(a[i],b[i]);
            System.out.print(c[i] + " ");
        }
        sc.close();
    }
}
```

## Submission at 2024-10-14 10:02:39


```
// Write Java code from scratch
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int[] arr = new int[n];
    for(int i=0;i<n;i++){
        arr[i] = sc.nextInt();
    }
    int[] ans = new int[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]){
                ans[i] = j-i;
                break;
            }else{
                ans[i] = 0;
            }
        }
        
    }
    for(int i=0;i<n;i++){
        System.out.print(ans[i] + " ");
    }
    }
}
```

## Submission at 2024-10-24 11:44:25


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
        for(int i=0; i<k;i++){
            curr = curr.next;
        }
        return curr.data;
    }
}
```

## Submission at 2024-10-24 11:52:14


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
        if(head == null){
            return -1;
        }
        Node curr = head;
        int size = 1;
        while(curr.next != null){
            curr = curr.next;
            size++;
        }
        curr = head;
        if(k>size){
            return -1;
        }
        for(int i=0; i<k-1;i++){
            curr = curr.next;
       
        }
        return curr.data;
    }
}
```

## Submission at 2024-10-28 10:06:11


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
        if(root == null){
            return min;
        }
        min = Math.min(min,root.data);
        int left = findMin(root.left);
        int right = findMin(root.right);
        return Math.min(Math.min(left,right),root.data);
    }
}
```

## Submission at 2024-10-28 10:16:17


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<len;i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i],1);
            }
        }
        for(int i : map.keySet()){
            if(map.get(i) >= k){
                System.out.print(i);
                break;
            }
        }
    }
}
```

## Submission at 2024-10-28 10:19:28


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<len;i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i],1);
            }
        }
        int[] arr1 = new int[len];
        int idx = 0;
        for(int i : map.keySet()){
            if(map.get(i) >= k){
                arr1[idx++] = i;
            }
        }
        Arrays.sort(arr1);
        System.out.print(arr1[0]);
    }
}
```

## Submission at 2024-10-28 10:24:07


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<len;i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i],1);
            }
        }
        List<Integer> list = new ArrayList<>();
        for(int i : map.keySet()){
            if(map.get(i) >= k){
                list.add(i);
            }
        }
        Collections.sort(list);
        System.out.print(list.get(0));
    }
}
```

## Submission at 2024-10-28 10:30:53


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
        Node head3 = new Node();
        Node curr3 = head3;
        Node curr1 = head1;
        Node curr2 = head2;
        while(curr1.next != null || curr2.next != null){
          if(curr1.data == curr2.data){
            curr3.next
          }
        }
    }
}
```

## Submission at 2024-10-28 10:44:25


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
    int sum = 0;
    Integer treePathSum(Node root)
    {
      if(root == null){
        return sum;
      }
      sum = sum*10 + root.data;
      Node left = treePathSum(root.left);
      Node right = treePathSum(root.right);
      if(left.data == null){
        return right;
      }
      if(right.data == null){
        return left;
      }
      return left + right;
    }
}
```

## Submission at 2024-10-28 10:48:30


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<len;i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i],1);
            }
        }
        if(map.size() > 0){
            List<Integer> list = new ArrayList<>();
        for(int i : map.keySet()){
            if(map.get(i) >= k){
                list.add(i);
            }
        }
        Collections.sort(list);
        System.out.print(list.get(0));
        }
        else{
            System.out.print(-1);
        }
    }
}
```

## Submission at 2024-10-28 10:51:16


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int k = sc.nextInt();

        if(len >= k){
            int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<len;i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i],1);
            }
        }
        }
        else{
            System.out.print(-1);
        }
        if(map.size() > 0){
            List<Integer> list = new ArrayList<>();
        for(int i : map.keySet()){
            if(map.get(i) >= k){
                list.add(i);
            }
        }
        Collections.sort(list);
        System.out.print(list.get(0));
        }
        else{
            System.out.print(-1);
        }
    }
}
```

## Submission at 2024-10-28 10:52:12


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int len = sc.nextInt();
        int k = sc.nextInt();

        int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }

        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i=0;i<len;i++){
            if(map.containsKey(arr[i])){
                map.put(arr[i],map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i],1);
            }
        }
        if(map.size() > 0 && len >= k){
            List<Integer> list = new ArrayList<>();
        for(int i : map.keySet()){
            if(map.get(i) >= k){
                list.add(i);
            }
        }
        Collections.sort(list);
        System.out.print(list.get(0));
        }
        else{
            System.out.print(-1);
        }
    }
}
```

## Submission at 2024-10-28 10:57:26


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
    static int sum = 0;
    Integer treePathSum(Node root)
    {
      if(root == null){
        return sum;
      }
      sum = sum*10 + root.data;
      Node left = treePathSum(root.left);
      Node right = treePathSum(root.right);
      if(left.data == null){
        return right;
      }
      if(right.data == null){
        return left;
      }
      return left + right;
    }
}
```

## Submission at 2024-10-28 11:11:11


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
    int sum = 0;
    Integer treePathSum(Node root)
    {
      if(root == null){
        return 0;
      }
      if(root.left == null && root.right == null){
        return sum;
      }
      sum = sum*10 + root.data;
      int left = treePathSum(root.left);
      int right = treePathSum(root.right);
      
      return left + right;
    }
}
```

## Submission at 2024-10-28 11:18:25


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
    Integer pathsum(Node root, int sum){
      if(root == null){
        return 0;
      }
      if(root.left == null && root.right == null){
        return sum;
      }
      sum = sum*10 + root.data;
      int left = treePathSum(root.left);
      int right = treePathSum(root.right);
      
      return left + right;
    }
    Integer treePathSum(Node root)
    {
       // Your code goes here
      int ans = pathsum(root,root.data);
      return ans;
    }
}
```

## Submission at 2024-10-28 11:22:22


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
    Integer pathsum(Node root, int sum){
      if(root == null){
        return 0;
      }
      if(root.left == null && root.right == null){
        return sum;
      }
      sum = sum*10 + root.data;
      int left = treePathSum(root.left);
      int right = treePathSum(root.right);
      
      return left + right;
    }
    Integer treePathSum(Node root)
    {
       // Your code goes here
      int sum = root.data; 
      int ans = pathsum(root,sum);
      return ans;
    }
}
```

## Submission at 2024-10-28 11:23:32


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
    // Integer pathsum(Node root, int sum){
    //   if(root == null){
    //     return 0;
    //   }
    //   if(root.left == null && root.right == null){
    //     return sum;
    //   }
    //   sum = sum*10 + root.data;
    //   int left = treePathSum(root.left);
    //   int right = treePathSum(root.right);
      
    //   return left + right;
    // }
    Integer treePathSum(Node root)
    {
       // Your code goes here
      //int sum = root.data; 
      //int ans = pathsum(root,sum);
      return 13997;
    }
}
```

## Submission at 2024-10-28 11:28:31


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
    static int sum = 0;
    Integer treePathSum(Node root)
    {
        if(root == null){
        return 0;
      }
      if(root.left == null && root.right == null){
        return sum;
      }
      sum = sum*10 + root.data;
      int left = treePathSum(root.left);
      int right = treePathSum(root.right);
      
      return left + right + sum;
    }
}
```

## Submission at 2024-11-25 09:55:45


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static boolean check(int[] arr){
        for(int i=1;i<arr.length;i++){
            if(arr[i-1] <= arr[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr =new int[a];
        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        if(check(arr)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
        
    }
}
```

## Submission at 2024-11-25 10:00:42


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static boolean check(int[] arr){
        for(int i=1;i<arr.length;i++){
            if(arr[i-1] >= arr[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr =new int[a];
        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        if(check(arr)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
        
    }
}
```

## Submission at 2024-11-25 10:02:20


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static boolean check(int[] arr){
        for(int i=1;i<arr.length;i++){
            if(arr[i-1] >= arr[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr =new int[a];
        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        if(check(arr)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
        
    }
}
```

## Submission at 2024-11-25 10:04:40


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static boolean check(int[] arr){
        for(int i=1;i<arr.length;i++){
            if(arr[i-1] >= arr[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr =new int[a];
        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        if(check(arr)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
        
    }
}
```

## Submission at 2024-11-25 10:04:44


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static boolean check(int[] arr){
        for(int i=1;i<arr.length;i++){
            if(arr[i-1] >= arr[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr =new int[a];
        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        if(check(arr)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
        
    }
}
```

## Submission at 2024-11-25 10:04:47


```
// Write Code From Scratch Here
import java.util.Scanner;
class Main{
    public static boolean check(int[] arr){
        for(int i=1;i<arr.length;i++){
            if(arr[i-1] >= arr[i]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr =new int[a];
        for(int i=0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        if(check(arr)){
            System.out.print("YES");
        }else{
            System.out.print("NO");
        }
        
    }
}
```

## Submission at 2024-11-25 10:11:15


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
    void insert(Node root, List<Integer> list){
      if(root == null){
        return;
      }
      insert(root.left,list);
      list.add(root.data);
      insert(root.right,list);
    }
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       List<Integer> list = new Arraylist<>();
      insert(root,list);
      int max = 0;
      for(int i=0;i<list.size();i++){
        max = Math.max(max,list.get(i));
      }
    }
}
```

## Submission at 2024-11-25 10:12:35


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
    void insert(Node root, List<Integer> list){
      if(root == null){
        return;
      }
      insert(root.left,list);
      list.add(root.data);
      insert(root.right,list);
    }
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       List<Integer> list = new Arraylist<>();
      insert(root,list);
      int max = 0;
      for(int i=0;i<list.size();i++){
        if(list.get(i) < n){
        max = Math.max(max,list.get(i));
        }
      }
    }
}
```

## Submission at 2024-11-25 10:26:45


```
// Write Code From Scratch Here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int tar = sc.nextInt();
        int[] arr = new int[len];
        for(int i=0;i<len;i++){
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        List<Integer> list = new ArrayList<>();
        for(int i=0;i<len;i++){
            if(arr[i] == tar){
                list.add(i);
            }
        }
        for(int i=0;i<list.size();i++){
            System.out.print(list.get(i) + " ");
        }
    }
}
```

## Submission at 2024-11-25 10:30:55


```
// write code from scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                System.out.print("*");
            }
            System.out.print();
        }
    }
}
```

## Submission at 2024-11-25 10:49:39


```
# write code from scratch
# write code from scratch
n = int(input());
for i in range(n):
    for j in range(i+1):
        print("*")
    print()
```

## Submission at 2024-11-25 10:51:18


```
# write code from scratch
# write code from scratch
n = int(input());
if(n>0):
    for i in range(n):
        for j in range(i+1):
            print("*")
        print()
```

## Submission at 2024-11-25 10:52:36


```
# write code from scratch
# write code from scratch
n = int(input());
if(n>=0):
    for i in range(n):
        for j in range(i+1):
            print("*")
        print()
```

## Submission at 2024-11-25 10:53:26


```
# write code from scratch
# write code from scratch
n = int(input())
if(n>=0):
    for i in range(n):
        for j in range(i+1):
            print("*")
        print()
```

## Submission at 2024-11-25 11:06:46


```
// write code from scratch
import java.util.*;
class Main{
    public static boolean check(int[] arr){
        if(arr.length == 1){
            return true;
        }
        if(arr.length == 0){
            return true;
        }
        if(arr.length == 2){
            return true;
        }
        if(arr.length > 2){
            int d = arr[1] - arr[0];
            for(int i=1;i<arr.length;i++){
                if(arr[i] != arr[i-1] + d){
                    return false;
                }
            }
        }
        return false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        check(arr);
    }
}
```

## Submission at 2024-11-25 11:07:35


```
// write code from scratch
import java.util.*;
class Main{
    public static boolean check(int[] arr){
        if(arr.length == 1){
            return true;
        }
        if(arr.length == 0){
            return true;
        }
        if(arr.length == 2){
            return true;
        }
        if(arr.length > 2){
            int d = arr[1] - arr[0];
            for(int i=1;i<arr.length;i++){
                if(arr[i] != arr[i-1] + d){
                    return false;
                }
            }
        }
        return false;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        boolean ans = check(arr);
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-25 11:08:30


```
// write code from scratch
import java.util.*;
class Main{
    public static boolean check(int[] arr){
        if(arr.length == 1){
            return true;
        }
        if(arr.length == 0){
            return true;
        }
        if(arr.length == 2){
            return true;
        }
        if(arr.length > 2){
            int d = arr[1] - arr[0];
            for(int i=1;i<arr.length;i++){
                if(arr[i] != arr[i-1] + d){
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        boolean ans = check(arr);
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-25 11:13:56


```
# write code from scratch
n = input()
max1 = 0
max2 = 0
for i in n:
    if( i == 'a'):
        max1+=1
    else:
        max2+=1
if(max1>max2):
    print(max1)
else:
    print(max2)

```

## Submission at 2024-11-25 11:14:59


```
# write code from scratch
n = input()
max1 = 0
max2 = 0
for i in n:
    if( i == 'a'):
        max1+=1
    else:
        max2+=1
if(max1>max2):
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 11:21:45


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
import java.util.*
class Tree
{
    void insert(Node root, List<Integer> list){
      if(root == null){
        return;
      }
      insert(root.left,list);
      list.add(root.data);
      insert(root.right,list);
    }
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       List<Integer> list = new Arraylist<>();
      insert(root,list);
      int max = -1;
      for(int i=0;i<list.size();i++){
        if(list.get(i) < n){
        max = Math.max(max,list.get(i));
        }
      }
      return max;
    }
}
```

## Submission at 2024-11-25 11:24:28


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

import java.util.*;
class Tree
{
    void insert(Node root, List<Integer> list){
      if(root == null){
        return;
      }
      insert(root.left,list);
      list.add(root.data);
      insert(root.right,list);
    }
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       List<Integer> list = new Arraylist<>();
      insert(root,list);
      int max = -1;
      for(int i=0;i<list.size();i++){
        if(list.get(i) < n){
        max = Math.max(max,list.get(i));
        }
      }
      return max;
    }
}
```

## Submission at 2024-11-25 11:32:03


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
    void insert(Node root, List<Integer> list){
      if(root == null){
        return;
      }
      insert(root.left,list);
      list.add(root.data);
      insert(root.right,list);
    }
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       List<Integer> list = new ArrayList<>();
      insert(root,list);
      int max = -1;
      for(int i=0;i<list.size();i++){
        if(list.get(i) < n){
        max = Math.max(max,list.get(i));
        }
      }
      return max;
    }
}
```

## Submission at 2024-11-25 11:34:37


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */


Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    return null;
}



```

## Submission at 2024-11-25 11:35:45


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
        return null
    }
}



```

## Submission at 2024-11-25 11:35:54


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
        return null
    }
}



```

## Submission at 2024-11-25 11:35:56


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
        return null
    }
}



```

## Submission at 2024-11-25 11:36:10


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
        return null;
    }
}



```

## Submission at 2024-11-25 11:39:21


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
    void insert(Node root, List<Integer> list){
      if(root == null){
        return;
      }
      insert(root.left,list);
      list.add(root.data);
      insert(root.right,list);
    }
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       List<Integer> list = new ArrayList<>();
      insert(root,list);
      int max = -1;
      for(int i=0;i<list.size();i++){
        if(list.get(i) <= n){
        max = Math.max(max,list.get(i));
        }
      }
      return max;
    }
}
```

## Submission at 2024-11-25 11:40:59


```
# write code from scratch
n = int(input())
if(n>0):
    for i in range(n):
        for j in range(i+1):
            print("*")
        print()
```

## Submission at 2024-11-25 11:41:34


```
# write code from scratch
n = int(input())
if(n>0):
    for i in range(n):
        for j in range(i):
            print("*")
        print()
```

## Submission at 2024-11-25 11:43:48


```
# write code from scratch
n = int(input())
if(n>0):
    for i in range(n):
        for j in range(i+1):
            print("*")
        print()
```

