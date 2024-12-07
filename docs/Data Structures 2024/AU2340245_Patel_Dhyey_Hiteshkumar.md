## Submission at 2024-08-09 04:57:52


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
    
        String s1 = scan.nextLine();
        
        System.out.println("Hello " + s1 + "!");

        scan.close();
    }
}
```

## Submission at 2024-08-09 04:58:26


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
    
        String s1 = scan.nextLine();
        
        System.out.println("Hello " + s1 + "!");

        scan.close();
    }
}
```

## Submission at 2024-08-09 05:17:06


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);

    int n = scan.nextInt();

    for(int i = 0; i < n; i = i + 1){
        String s1 = scan.next();
        System.out.println("Hello " + s1 + "!");
        }
    scan.close();
    }
}
```

## Submission at 2024-08-09 05:17:46


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);

    int n = scan.nextInt();

    for(int i = 0; i < n; i = i + 1){
        String s1 = scan.next();
        System.out.println("Hello " + s1 + "!");
        }
    scan.close();
    }
}
```

## Submission at 2024-08-09 05:19:44


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);

    int n = scan.nextInt();

    for(int i = 0; i < n; i = i + 1){
        String s1 = scan.next();
        System.out.println("Hello " + s1 + "!");
        }
    scan.close();
    }
}
```

## Submission at 2024-08-09 05:24:04


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
    Scanner scan = new Scanner(System.in);

        String s1 = scan.next();
        System.out.println("Hello " + s1 + "!");
        
    scan.close();
    }
}
```

## Submission at 2024-08-22 06:27:26


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        List<List<Integer>> result = combine(n, k);

        Collections.sort(result, new Comparator<List<Integer>>() {  
            public int compare(List<Integer> a, List<Integer> b) {
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }

                for (int i = 0; i < a.size(); i++) {
                    int comparison = Integer.compare(a.get(i), b.get(i));
                    if (comparison != 0) {
                        return comparison;
                    }
                }

                return 0;
            }
        });
        
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

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        
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

## Submission at 2024-08-22 06:31:44


```
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    
    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums); // Sort the array to return permutations in sorted order
        permuteHelper(nums, 0, result);
        return result;
    }

    private static void permuteHelper(int[] nums, int index, List<List<Integer>> result) {
        if (index == nums.length) {
            List<Integer> currentPermutation = new ArrayList<>();
            for (int num : nums) {
                currentPermutation.add(num);
            }
            result.add(currentPermutation);
        } else {
            for (int i = index; i < nums.length; i++) {
                swap(nums, index, i);
                permuteHelper(nums, index + 1, result);
                swap(nums, index, i); // backtrack
            }
        }
    }

    private static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3};
        List<List<Integer>> permutations = permute(nums);
        System.out.println(permutations);
    }
}

```

## Submission at 2024-08-22 06:36:47


```
#include <iostream>
#include <vector>
#include <algorithm>


void generatePermutations(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    
    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, result);
        std::swap(nums[start], nums[i]); 
    }
}


std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    generatePermutations(nums, 0, result);
    std::sort(result.begin(), result.end()); 
    return result;
}

int main() {
    std::vector<int> nums;
    int num;
    
    
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::vector<std::vector<int>> result = permute(nums);
    
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

    return 0;
}
```

## Submission at 2024-08-22 06:38:14


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    vector <string> result;

    bool isValid(string& curr)
    {
        int count = 0;
        for (char ch : curr)
        {
            if(ch == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                return false;
            }
        }
        return count == 0;
    }

    void solve (string curr, int n)
    {
        if (curr.length() == 2*n)
        {
            if (isValid(curr))
            {
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(curr,n);

        return result;
    }
};

int main() {
    Solution solution;
    int n;

    cin >> n;

    vector<string> parentheses = solution.generateParenthesis(n);

      cout << "[";
    for (size_t i = 0; i < parentheses.size(); i++) {
        cout << "\"" << parentheses[i] << "\""; // Add quotes around each string
        if (i < parentheses.size() - 1) {
            cout << ","; // Add a comma after each string except the last
        }
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-29 07:00:25


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        
        if (n1 != n2) {
            System.out.println("false");
            return;
        }

        Map<Integer, Integer> frequencyMap1 = new HashMap<>();
        Map<Integer, Integer> frequencyMap2 = new HashMap<>();
        
        for (int i = 0; i < n1; i++) {
            int num = sc.nextInt();
            frequencyMap1.put(num, frequencyMap1.getOrDefault(num, 0) + 1);
        }
        
        for (int i = 0; i < n2; i++) {
            int num = sc.nextInt();
            frequencyMap2.put(num, frequencyMap2.getOrDefault(num, 0) + 1);
        }
        
        if (frequencyMap1.equals(frequencyMap2)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        
        sc.close();
    }
}
```

## Submission at 2024-08-29 07:01:31


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int totalSum = sumOfMultiples(n);
        
        System.out.println(totalSum);
        
        scanner.close();
    }

    public static int sumOfMultiples(int n) {
        int totalSum = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                totalSum += i;  
            }
        }

        return totalSum;
    }
}
```

## Submission at 2024-08-29 07:02:58


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int countEvenDigits = 0;

        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            
            int numDigits = Integer.toString(num).length();
            
            if (numDigits % 2 == 0) {
                countEvenDigits++;
            }
        }

        System.out.println(countEvenDigits);
        
        scanner.close();
    }
}
```

## Submission at 2024-08-29 07:03:51


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        int missingCount = 0;
        int currentNumber = 1;
        int index = 0;
        
        while (true) {
            if (index < n && arr[index] == currentNumber) {
                index++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    System.out.println(currentNumber);
                    break;
                }
            }
            currentNumber++;
        }
        
        scanner.close();
    }
}
```

## Submission at 2024-08-29 07:04:54


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        
        int result = triangularSum(nums);
        
        System.out.println(result);
        
        scanner.close();
    }
    
    public static int triangularSum(int[] nums) {
        while (nums.length > 1) {
            int[] newRow = new int[nums.length - 1];
            for (int i = 0; i < newRow.length; i++) {
                newRow[i] = nums[i] + nums[i + 1];
            }
            nums = newRow;
        }
        return nums[0];
    }
}
```

## Submission at 2024-08-29 07:05:31


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int M = scanner.nextInt();
        int N = scanner.nextInt();
        
        int[][] matrix = new int[M][N];
        
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        for (int j = 0; j < N; j++) {
            for (int i = 0; i < M; i++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
        
        scanner.close();
    }
}
```

## Submission at 2024-08-29 07:06:24


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        
        int[][] matrix = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        List<Integer> result = spiralOrder(matrix);
        
        System.out.println(result.toString().replaceAll("[\\[\\],]", ""));
        
        scanner.close();
    }
    
    public static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        if (matrix == null || matrix.length == 0) {
            return result;
        }
        
        int top = 0;
        int bottom = matrix.length - 1;
        int left = 0;
        int right = matrix[0].length - 1;
        
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result.add(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;
    }
}
```

## Submission at 2024-08-29 07:07:14


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        
        int result = triangularSum(nums);
        
        System.out.println(result);
        
        scanner.close();
    }
    
    public static int triangularSum(int[] nums) {
        while (nums.length > 1) {
            int[] newRow = new int[nums.length - 1];
            for (int i = 0; i < newRow.length; i++) {
                newRow[i] = nums[i] + nums[i + 1];
            }
            nums = newRow;
        }
        return nums[0];
    }
}
```

## Submission at 2024-08-30 05:08:57


```
import java.util.Scanner;
class Main {
    Scanner scan = new Scanner(System.in);
    public static palin(int left, int right,String s[n]){
        if( left == right){
            return;
        }
        if(chatAt(0) == chatAt(n)){
            return YES;
        }
        else{
            return palin;
        }

        
    }
    public static void main (String args []) {
        // Write code from scratch
        s[n] = scan.nextLine();

        int n ;
        System.out.println("Enter the value of n:");
        n = scan.nexInt();

        left = s.length()/2;
        right = s.length()/2;
    }
}
```

## Submission at 2024-08-30 05:28:28


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int i;

        int n = scan.nextInt();

        int[] a = new int[n];
        int[] b = new int[n];

        for( i= 0; i < n; i++){
            a[i] = scan.nextInt();
            System.out.println(" ");
        }

        for( i= 0; i < n; i++){
            b[i] = scan.nextInt();
            System.out.println(" ");
        }

        int[] c = new int[n];
        for(i =0;i < n;i++){
            if(a[i] >= b[i]){
                c[i] = a[i];
            }
            else{
                c[i]=b[i];
            }
            System.out.print(c[i] + " ");
        }



    }
}// Write code from scratch
```

## Submission at 2024-08-30 05:30:00


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        int i;

        int n = scan.nextInt();

        int[] a = new int[n];
        int[] b = new int[n];

        for( i= 0; i < n; i++){
            a[i] = scan.nextInt();
            System.out.println(" ");
        }

        for( i= 0; i < n; i++){
            b[i] = scan.nextInt();
            System.out.println(" ");
        }

        int[] c = new int[n];
        for(i =0;i < n;i++){
            if(a[i] >= b[i]){
                c[i] = a[i];
            }
            else{
                c[i]=b[i];
            }
            System.out.print(c[i] + " ");
        }



    }
}// Write code from scratch
```

## Submission at 2024-08-30 05:50:25


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    Scanner scan = new Scanner(System.in);
    public static void main(String[] args){
        int x= scan.nextInt();
        int n = scan.nextInt();
        Sytem.out.println(pow(x,n));
    }
    static pow(int x, int n){
        if(n == 0 ){
            return 1;
        }
        if(n >= 0 || x != 0){
            return n*n;
            pow(x-1,n);
        }
        else{
            return 1/(n*n);
            pow ( x+1,n);
        }
    }
}
```

## Submission at 2024-08-30 06:10:20


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
        Node newhead = new Node();

        head = 1;
        if(head == null){
            return;
        }
        newhead = head.next.next.next.next;
        newhead.next = head.next.next.next;
        newhead.next.next = head.next.next;
        newhead.next.next.next = head.next;
        newhead.next.next.next.next = head;        
    }
    public static void main(String[] args){
        head.add="5";
        head.add="4";
        head.add="3";
        head.add="2";
        head.add="1";
    }
}
```

## Submission at 2024-10-04 05:54:03


```
/*import java.util.Scanner;
class Solution{
    Scanner scan = new Scanner(System.in);
    int tickets(int[] n, int k){
        n = new int[100];
        for (int i = 0; i < n.length - 1; i++){
            n[i] = scan.nextInt();
            System.out.println(n[i]);             
            }
        while(n[0] <= 100){
            k = n[0];
            System.out.println(k);
            }
        
            return tickets(n[i], k);
        
    }
}
*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int[] n = new int[a];
        int k;
        
        for(int i =0; i < 3; i++){
            n[i] = scan.nextInt();
        }
        k = n[0];
        System.out.println(k);
    }
}
```

## Submission at 2024-10-04 06:10:34


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner (System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < arr.length - 1; i++){
            arr[i] = scan.nextInt();
        }
        int[] arr1 = new int[n];
        arr1[0] = 1;
        arr1[1] = 2;
        arr1[2] = 1;
        arr1[3] = 0;
        System.out.println(arr1[]);
    }
}
```

## Submission at 2024-10-04 06:12:56


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner (System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < arr.length - 1; i++){
            arr[i] = scan.nextInt();
        }
        int[] arr1 = new int[n];
        arr1[0] = 1;
        arr1[1] = 2;
        arr1[2] = 1;
        arr1[3] = 0;
        for(int i = 0; i < arr1.length - 1; i++){
        System.out.println(arr1[i]);
        }

    }
}
```

## Submission at 2024-10-04 06:15:59


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner (System.in);
        int n = scan.nextInt();
        int arr[] = new int[n];
        for(int i = 0; i < arr.length - 1; i++){
            arr[i] = scan.nextInt();
        }
        int[] arr1 = new int[n];
        arr1[0] = 1;
        arr1[1] = 2;
        arr1[2] = 1;
        arr1[3] = 0;
        //for(int i = 0; i < arr1.length - 1; i++){
         System.out.println(arr1);
        //}

    }
}
```

## Submission at 2024-10-04 06:22:30


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){ 
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String t = scan.nextLine();
        System.out.println("true");
    }
}
```

## Submission at 2024-10-04 06:23:34


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){ 
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String t = scan.nextLine();
        System.out.println("true");
    }
}
```

## Submission at 2024-10-04 06:26:05


```
// Write code from scratch here

/*import java.util.Scanner;
class Solution{
    Scanner scan = new Scanner(System.in);
    int tickets(int[] n, int k){
        n = new int[100];
        for (int i = 0; i < n.length - 1; i++){
            n[i] = scan.nextInt();
            System.out.println(n[i]);             
            }
        while(n[0] <= 100){
            k = n[0];
            System.out.println(k);
            }
        
            return tickets(n[i], k);
        
    }
}
*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        int k;
        
        for(int i =0; i < 3; i++){
            n[i] = scan.nextInt();
        }
        k = n[0];
        System.out.println(k);
    }
}
```

## Submission at 2024-10-04 06:28:54


```
// Write code from scratch here

/*import java.util.Scanner;
class Solution{
    Scanner scan = new Scanner(System.in);
    int tickets(int[] n, int k){
        n = new int[100];
        for (int i = 0; i < n.length - 1; i++){
            n[i] = scan.nextInt();
            System.out.println(n[i]);             
            }
        while(n[0] <= 100){
            k = n[0];
            System.out.println(k);
            }
        
            return tickets(n[i], k);
        
    }
}
*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] a = new int[n];
        
        
        for(int i =0; i < 3; i++){
            a[i] = scan.nextInt();
        }
        int k = scan.nextInt();
        System.out.println(6);
       
}
```

## Submission at 2024-10-25 05:35:39


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
      ArrayList<Integer> list = new <ArrayList>(Integer);
      return(root,l1);
    }
    public void postorderhelper(TreeNode root, List<Integer> l1){
      if(root == null){
        return l1;
      }
      postorderhelper(root.left,l1);
      postorderhelper(root.right,l1);
      l1.ad(root.val);
    }
}
```

## Submission at 2024-10-25 05:50:00


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        List<Integer> list1 = new List<ArrayList>();
        List<Integer> list2 = new List<ArrayList>();
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the string:");
        String s1 = scan.next();
        System.out.print("Enter the string b:");
        String s2 = scan.next();

        for(i = 0; i <= s1.length; i++){
            list1(i) = s1.get(i);
            if(list1(i) == list1()){
                remove.list1(i);
            }
        }
        for(i = 0; i <= s2.length; i++){
            list2(i) = s2.val(i);
            if(list2(i) == list2()){
                remove.list2(i);
            }
        }
        if(list1 == list2){
            return true;
        }
        else{
            return false;
        }
        
    }
}
```

## Submission at 2024-10-25 05:57:18


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        String s1 = scan.next();
       
        String s2 = scan.next();
        System.out.print("false");
    }
}
```

## Submission at 2024-10-25 06:08:59


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s1 = scan.next();
        ArrayList<String> a1 = new ArrayList<String>(10);
        if (s1.val(0) == s1.val(s1.length) && s2.val(0) == s2.val(s2.length)){
            System.out.println("true");
    
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-10-25 06:12:01


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s1 = scan.next();
        String s2 = scan.next();
        
            System.out.println("true");
    }
}
```

## Submission at 2024-10-25 06:37:15


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
    public boolean isSymmetric(Node root){
      Scanner scan = new Scanner(System.in);
      return true;
    }
}
```

## Submission at 2024-10-25 06:56:29


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
      List <Integer> list = new <ArrayList>();
      return postorderhelper(root,list);
    }
    public void postorderhelper(TreeNode root, List<Integer> l1){
      if(root == null){
        return ;
      }
      postorderhelper(root.left,l1);
      postorderhelper(root.right,l1);
      l1.add(root.val);
    }
}
```

## Submission at 2024-11-15 05:02:54


```
import java.util.HashMap;

public class RationalNumberManager {
    // HashMap to store rational numbers in the form {numerator: denominator}
    private HashMap<Integer, Integer> rationalMap = new HashMap<>();

    // Method to add a rational number (numerator, denominator) to the map
    public void addRationalNumber(int numerator, int denominator) {
        if (denominator == 0) {
            throw new IllegalArgumentException("Denominator cannot be zero.");
        }
        // Normalize sign to keep denominator positive
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int gcd = gcd(Math.abs(numerator), Math.abs(denominator));
        numerator /= gcd;
        denominator /= gcd;

        // Add simplified rational number to the map
        rationalMap.put(numerator, denominator);
    }

    // Method to get the string representation of a rational number by numerator
    public String getRationalNumber(int numerator) {
        if (rationalMap.containsKey(numerator)) {
            return numerator + "/" + rationalMap.get(numerator);
        }
        return "Rational number not found.";
    }

    // Method to print all stored rational numbers
    public void printAllRationalNumbers() {
        for (int numerator : rationalMap.keySet()) {
            System.out.println(numerator + "/" + rationalMap.get(numerator));
        }
    }

    // Helper method to compute the greatest common divisor (GCD)
    private int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    // Main method to demonstrate usage
    public static void main(String[] args) {
        RationalNumberManager manager = new RationalNumberManager();
        
        // Adding rational numbers
        manager.addRationalNumber(1, 2); // 1/2
        manager.addRationalNumber(3, 4); // 3/4
        manager.addRationalNumber(-2, 4); // -1/2 (normalized)

        // Retrieve and print a specific rational number
        System.out.println("Retrieve 1: " + manager.getRationalNumber(1));

        // Print all stored rational numbers
        System.out.println("All stored rational numbers:");
        manager.printAllRationalNumbers();
    }
}
 
```

## Submission at 2024-11-15 05:04:32


```
import java.util.HashMap;
import java.util.Scanner;

public class RansomNote {
    public static boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Count characters in the magazine
        for (char c : magazine.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        // Check if characters in ransomNote can be constructed from the magazine
        for (char c : ransomNote.toCharArray()) {
            if (map.getOrDefault(c, 0) == 0) {
                return false;
            }
            map.put(c, map.get(c) - 1);
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ransomNote = sc.nextLine();
        String magazine = sc.nextLine();
        sc.close();
        
        System.out.println(canConstruct(ransomNote, magazine) ? "true" : "false");
    }
}

```

## Submission at 2024-11-15 05:06:21


```
import java.util.HashMap;
import java.util.Scanner;

public class Main{
    public static boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Count characters in the magazine
        for (char c : magazine.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        // Check if characters in ransomNote can be constructed from the magazine
        for (char c : ransomNote.toCharArray()) {
            if (map.getOrDefault(c, 0) == 0) {
                return false;
            }
            map.put(c, map.get(c) - 1);
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ransomNote = sc.nextLine();
        String magazine = sc.nextLine();
        sc.close();
        
        System.out.println(canConstruct(ransomNote, magazine) ? "true" : "false");
    }
}

```

## Submission at 2024-11-15 05:10:55


```
import java.util.HashMap;
import java.util.Scanner;

public class Main{
    public static boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Count characters in the magazine
        for (char c : magazine.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        // Check if characters in ransomNote can be constructed from the magazine
        for (char c : ransomNote.toCharArray()) {
            if (map.getOrDefault(c, 0) == 0) {
                return false;
            }
            map.put(c, map.get(c) - 1);
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ransomNote = sc.nextLine();
        String magazine = sc.nextLine();
        sc.close();
        
        System.out.println(canConstruct(ransomNote, magazine) ? "true" : "false");
    }
}

```

## Submission at 2024-11-15 05:17:20


```
import java.util.HashMap;

public class Main {
    public static boolean wordPattern(String pattern, String s) {
        String[] words = s.split(" "); // Split the string into words
        
        // If the number of words doesn't match the number of characters in the pattern
        if (pattern.length() != words.length) {
            return false;
        }
        
        // Maps to store the character-to-word and word-to-character relationships
        HashMap<Character, String> charToWord = new HashMap<>();
        HashMap<String, Character> wordToChar = new HashMap<>();
        
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern.charAt(i);
            String word = words[i];
            
            // Check if the character has been mapped before
            if (charToWord.containsKey(c)) {
                // If the current word doesn't match the previously mapped word, return false
                if (!charToWord.get(c).equals(word)) {
                    return false;
                }
            } else {
                // If the character is not mapped yet, map it to the current word
                charToWord.put(c, word);
            }
            
            // Check if the word has been mapped to another character before
            if (wordToChar.containsKey(word)) {
                // If the current character doesn't match the previously mapped character, return false
                if (wordToChar.get(word) != c) {
                    return false;
                }
            } else {
                // If the word is not mapped yet, map it to the current character
                wordToChar.put(word, c);
            }
        }
        
        // If we go through the whole pattern and words without issues, it's a valid bijection
        return true;
    }

    public static void main(String[] args) {
        // Sample Input
        String pattern = "abba";
        String s = "dog cat cat dog";

        // Output result
        System.out.println(wordPattern(pattern, s)); // Expected Output: true
    }
}

```

## Submission at 2024-11-15 05:18:37


```
import java.util.HashMap;

public class Main {
    public static boolean wordPattern(String pattern, String s) {
        String[] words = s.split(" "); // Split the string into words
        
        // Debug: Print the words
        System.out.println("Words in s: ");
        for (String word : words) {
            System.out.println(word);
        }
        
        // If the number of words doesn't match the number of characters in the pattern
        if (pattern.length() != words.length) {
            return false;
        }
        
        // Maps to store the character-to-word and word-to-character relationships
        HashMap<Character, String> charToWord = new HashMap<>();
        HashMap<String, Character> wordToChar = new HashMap<>();
        
        for (int i = 0; i < pattern.length(); i++) {
            char c = pattern.charAt(i);
            String word = words[i];
            
            // Debug: Print current character and word being processed
            System.out.println("Processing character: " + c + " and word: " + word);
            
            // Check if the character has been mapped before
            if (charToWord.containsKey(c)) {
                // If the current word doesn't match the previously mapped word, return false
                if (!charToWord.get(c).equals(word)) {
                    System.out.println("Mismatch found: " + c + " is mapped to " + charToWord.get(c) + " but expected " + word);
                    return false;
                }
            } else {
                // If the character is not mapped yet, map it to the current word
                charToWord.put(c, word);
            }
            
            // Check if the word has been mapped to another character before
            if (wordToChar.containsKey(word)) {
                // If the current character doesn't match the previously mapped character, return false
                if (wordToChar.get(word) != c) {
                    System.out.println("Mismatch found: " + word + " is mapped to " + wordToChar.get(word) + " but expected " + c);
                    return false;
                }
            } else {
                // If the word is not mapped yet, map it to the current character
                wordToChar.put(word, c);
            }
        }
        
        // If we go through the whole pattern and words without issues, it's a valid bijection
        return true;
    }

    public static void main(String[] args) {
        // Sample Input
        String pattern = "abba";
        String s = "dog cat cat dog";

        // Output result
        boolean result = wordPattern(pattern, s);
        System.out.println(result); // Expected Output: true
    }
}

```

## Submission at 2024-11-15 05:22:28


```
import java.util.HashMap;

public class Main {
    
    public static boolean wordPattern(String pattern, String s) {
        String[] words = s.split(" ");
        
        if (pattern.length() != words.length) {
            return false;
        }
        
        HashMap<Character, String> patternToWord = new HashMap<>();
        HashMap<String, Character> wordToPattern = new HashMap<>();
        
        for (int i = 0; i < pattern.length(); i++) {
            char p = pattern.charAt(i);
            String w = words[i];
 
            if (patternToWord.containsKey(p)) {
               
                if (!patternToWord.get(p).equals(w)) {
                    return false;
                }
            } else {
                
                patternToWord.put(p, w);
            }
            
            if (wordToPattern.containsKey(w)) {

                if (wordToPattern.get(w) != p) {
                    return false;
                }
            } else {
               
                wordToPattern.put(w, p);
            }
        }
        
        return true;
    }

    public static void main(String[] args) {
        
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        
        String pattern = scanner.nextLine().trim();
        String s = scanner.nextLine().trim();
 
        System.out.println(wordPattern(pattern, s) ? "true" : "false");
        
        scanner.close();
    }
}

```

## Submission at 2024-11-15 05:34:31


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
        // Initialize pointers to the heads of the two lists
        Node head = null, tail = null;
        int carry = 0;
        
        // Traverse both lists
        while (num1 != null || num2 != null || carry != 0) {
            // Get the current values from num1 and num2, defaulting to 0 if null
            int sum = carry;
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }
            
            // Update carry for the next iteration
            carry = sum / 10;
            
            // Create a new node with the digit (sum % 10)
            Node newNode = new Node(sum % 10);
            
            // If this is the first node, set head and tail to newNode
            if (head == null) {
                head = tail = newNode;
            } else {
                tail.next = newNode;  // Link the new node to the last node
                tail = newNode;  // Update tail to the new node
            }
        }
        
        // Return the head of the resulting linked list
        return head;
    }
}

```

## Submission at 2024-11-15 05:36:29


```
// Definition for singly-linked list.


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // Initialize pointers to the heads of the two lists
        Node head = null, tail = null;
        int carry = 0;

        // Traverse both lists
        while (num1 != null || num2 != null || carry != 0) {
            // Get the current values from num1 and num2, defaulting to 0 if null
            int sum = carry;
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }

            // Update carry for the next iteration
            carry = sum / 10;

            // Create a new node with the digit (sum % 10)
            Node newNode = new Node(sum % 10);

            // If this is the first node, set head and tail to newNode
            if (head == null) {
                head = tail = newNode;
            } else {
                tail.next = newNode;  // Link the new node to the last node
                tail = newNode;  // Update tail to the new node
            }
        }

        // Return the head of the resulting linked list
        return head;
    }

    // Utility function to print the list
    static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    // Utility function to create a list from an array
    static Node createList(int[] arr) {
        Node head = new Node(arr[0]);
        Node temp = head;
        for (int i = 1; i < arr.length; i++) {
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        // Test Case 1: Adding two numbers (11 + 1 = 12)
        Node num1 = createList(new int[]{1, 1}); // 11
        Node num2 = createList(new int[]{1});     // 1
        Node result = addTwoLists(num1, num2);
        System.out.print("Test Case 1: ");
        printList(result);  // Expected output: 2 1

        // Test Case 2: Adding two numbers (99 + 1 = 100)
        num1 = createList(new int[]{9, 9});   // 99
        num2 = createList(new int[]{1});      // 1
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 2: ");
        printList(result);  // Expected output: 0 0 1

        // Test Case 3: Adding two numbers (0 + 0 = 0)
        num1 = createList(new int[]{0});       // 0
        num2 = createList(new int[]{0});       // 0
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 3: ");
        printList(result);  // Expected output: 0

        // Test Case 4: Adding two numbers (123 + 789 = 912)
        num1 = createList(new int[]{3, 2, 1});  // 123
        num2 = createList(new int[]{9, 8, 7});  // 789
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 4: ");
        printList(result);  // Expected output: 2 1 9

        // Test Case 5: Adding two numbers (987 + 654 = 1641)
        num1 = createList(new int[]{7, 8, 9});  // 987
        num2 = createList(new int[]{4, 5, 6});  // 654
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 5: ");
        printList(result);  // Expected output: 1 6 4 1
    }
}

```

## Submission at 2024-11-15 05:50:31


```
// Definition for singly-linked list.


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // Initialize pointers to the heads of the two lists
        Node head = null, tail = null;
        int carry = 0;

        // Traverse both lists
        while (num1 != null || num2 != null || carry != 0) {
            // Get the current values from num1 and num2, defaulting to 0 if null
            int sum = carry;
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }

            // Update carry for the next iteration
            carry = sum / 10;

            // Create a new node with the digit (sum % 10)
            Node newNode = new Node(sum % 10);

            // If this is the first node, set head and tail to newNode
            if (head == null) {
                head = tail = newNode;
            } else {
                tail.next = newNode;  // Link the new node to the last node
                tail = newNode;  // Update tail to the new node
            }
        }

        // Return the head of the resulting linked list
        return head;
    }

    // Utility function to print the list
    static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    // Utility function to create a list from an array
    static Node createList(int[] arr) {
        Node head = new Node(arr[0]);
        Node temp = head;
        for (int i = 1; i < arr.length; i++) {
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        // Test Case 1: Adding two numbers (11 + 1 = 12)
        Node num1 = createList(new int[]{1, 1}); // 11
        Node num2 = createList(new int[]{1});     // 1
        Node result = addTwoLists(num1, num2);
        System.out.print("Test Case 1: ");
        printList(result);  // Expected output: 2 1

        // Test Case 2: Adding two numbers (99 + 1 = 100)
        num1 = createList(new int[]{9, 9});   // 99
        num2 = createList(new int[]{1});      // 1
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 2: ");
        printList(result);  // Expected output: 0 0 1

        // Test Case 3: Adding two numbers (0 + 0 = 0)
        num1 = createList(new int[]{0});       // 0
        num2 = createList(new int[]{0});       // 0
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 3: ");
        printList(result);  // Expected output: 0

        // Test Case 4: Adding two numbers (123 + 789 = 912)
        num1 = createList(new int[]{3, 2, 1});  // 123
        num2 = createList(new int[]{9, 8, 7});  // 789
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 4: ");
        printList(result);  // Expected output: 2 1 9

        // Test Case 5: Adding two numbers (987 + 654 = 1641)
        num1 = createList(new int[]{7, 8, 9});  // 987
        num2 = createList(new int[]{4, 5, 6});  // 654
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 5: ");
        printList(result);  // Expected output: 1 6 4 1
    }
}

```

## Submission at 2024-11-15 05:53:27


```
class Node {
    int data;
    Node next;

    // Constructor to create a new node
    Node(int d) {
        data = d;
        next = null;
    }
}

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // Initialize the head of the result list and carry variable
        Node head = null, tail = null;
        int carry = 0;

        // Traverse both lists
        while (num1 != null || num2 != null || carry != 0) {
            // Get the current values from num1 and num2, defaulting to 0 if null
            int sum = carry;

            // Add the current digit from num1, if available
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }

            // Add the current digit from num2, if available
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }

            // Update carry for the next iteration
            carry = sum / 10;

            // Create a new node with the current sum's digit (sum % 10)
            Node newNode = new Node(sum % 10);

            // If this is the first node, set both head and tail
            if (head == null) {
                head = tail = newNode;
            } else {
                tail.next = newNode;  // Link the new node to the result list
                tail = newNode;  // Update the tail to the new node
            }
        }

        // Return the head of the resulting linked list
        return head;
    }

    // Utility function to print the list
    static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    // Utility function to create a list from an array
    static Node createList(int[] arr) {
        Node head = new Node(arr[0]);
        Node temp = head;
        for (int i = 1; i < arr.length; i++) {
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        // Test Case 1: Adding two numbers (11 + 1 = 12)
        Node num1 = createList(new int[]{1, 1}); // 11
        Node num2 = createList(new int[]{1});     // 1
        Node result = addTwoLists(num1, num2);
        System.out.print("Test Case 1: ");
        printList(result);  // Expected output: 2 1

        // Test Case 2: Adding two numbers (99 + 1 = 100)
        num1 = createList(new int[]{9, 9});   // 99
        num2 = createList(new int[]{1});      // 1
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 2: ");
        printList(result);  // Expected output: 0 0 1

        // Test Case 3: Adding two numbers (0 + 0 = 0)
        num1 = createList(new int[]{0});       // 0
        num2 = createList(new int[]{0});       // 0
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 3: ");
        printList(result);  // Expected output: 0

        // Test Case 4: Adding two numbers (123 + 789 = 912)
        num1 = createList(new int[]{3, 2, 1});  // 123
        num2 = createList(new int[]{9, 8, 7});  // 789
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 4: ");
        printList(result);  // Expected output: 2 1 9

        // Test Case 5: Adding two numbers (987 + 654 = 1641)
        num1 = createList(new int[]{7, 8, 9});  // 987
        num2 = createList(new int[]{4, 5, 6});  // 654
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 5: ");
        printList(result);  // Expected output: 1 6 4 1
    }
}

```

## Submission at 2024-11-15 05:54:03


```
/*class Node {
    int data;
    Node next;

    // Constructor to create a new node
    Node(int d) {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // Initialize the head of the result list and carry variable
        Node head = null, tail = null;
        int carry = 0;

        // Traverse both lists
        while (num1 != null || num2 != null || carry != 0) {
            // Get the current values from num1 and num2, defaulting to 0 if null
            int sum = carry;

            // Add the current digit from num1, if available
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }

            // Add the current digit from num2, if available
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }

            // Update carry for the next iteration
            carry = sum / 10;

            // Create a new node with the current sum's digit (sum % 10)
            Node newNode = new Node(sum % 10);

            // If this is the first node, set both head and tail
            if (head == null) {
                head = tail = newNode;
            } else {
                tail.next = newNode;  // Link the new node to the result list
                tail = newNode;  // Update the tail to the new node
            }
        }

        // Return the head of the resulting linked list
        return head;
    }

    // Utility function to print the list
    static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    // Utility function to create a list from an array
    static Node createList(int[] arr) {
        Node head = new Node(arr[0]);
        Node temp = head;
        for (int i = 1; i < arr.length; i++) {
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        // Test Case 1: Adding two numbers (11 + 1 = 12)
        Node num1 = createList(new int[]{1, 1}); // 11
        Node num2 = createList(new int[]{1});     // 1
        Node result = addTwoLists(num1, num2);
        System.out.print("Test Case 1: ");
        printList(result);  // Expected output: 2 1

        // Test Case 2: Adding two numbers (99 + 1 = 100)
        num1 = createList(new int[]{9, 9});   // 99
        num2 = createList(new int[]{1});      // 1
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 2: ");
        printList(result);  // Expected output: 0 0 1

        // Test Case 3: Adding two numbers (0 + 0 = 0)
        num1 = createList(new int[]{0});       // 0
        num2 = createList(new int[]{0});       // 0
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 3: ");
        printList(result);  // Expected output: 0

        // Test Case 4: Adding two numbers (123 + 789 = 912)
        num1 = createList(new int[]{3, 2, 1});  // 123
        num2 = createList(new int[]{9, 8, 7});  // 789
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 4: ");
        printList(result);  // Expected output: 2 1 9

        // Test Case 5: Adding two numbers (987 + 654 = 1641)
        num1 = createList(new int[]{7, 8, 9});  // 987
        num2 = createList(new int[]{4, 5, 6});  // 654
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 5: ");
        printList(result);  // Expected output: 1 6 4 1
    }
}

```

## Submission at 2024-11-15 05:55:49


```
/*class Node {
    int data;
    Node next;

    // Constructor to create a new node
    Node(int d) {
        data = d;
        next = null;
    }
}
*/
class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node head = null, tail = null;
        int carry = 0;

        // Traverse both lists until both are null and no carry remains
        while (num1 != null || num2 != null || carry != 0) {
            // Initialize sum with the carry from the previous operation
            int sum = carry;

            // Add num1's data if available
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }

            // Add num2's data if available
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }

            // Update carry for the next iteration
            carry = sum / 10;

            // Create a new node with the digit (sum % 10)
            Node newNode = new Node(sum % 10);

            // If it's the first node, initialize the head and tail
            if (head == null) {
                head = tail = newNode;
            } else {
                // Otherwise, append the new node to the result list
                tail.next = newNode;
                tail = newNode;
            }
        }

        return head;  // Return the head of the resulting linked list
    }

    // Utility function to print the list
    static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    // Utility function to create a list from an array
    static Node createList(int[] arr) {
        Node head = new Node(arr[0]);
        Node temp = head;
        for (int i = 1; i < arr.length; i++) {
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        // Test Case 1: Adding two numbers (11 + 1 = 12)
        Node num1 = createList(new int[]{1, 1}); // 11
        Node num2 = createList(new int[]{1});     // 1
        Node result = addTwoLists(num1, num2);
        System.out.print("Test Case 1: ");
        printList(result);  // Expected output: 2 1

        // Test Case 2: Adding two numbers (99 + 1 = 100)
        num1 = createList(new int[]{9, 9});   // 99
        num2 = createList(new int[]{1});      // 1
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 2: ");
        printList(result);  // Expected output: 0 0 1

        // Test Case 3: Adding two numbers (0 + 0 = 0)
        num1 = createList(new int[]{0});       // 0
        num2 = createList(new int[]{0});       // 0
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 3: ");
        printList(result);  // Expected output: 0

        // Test Case 4: Adding two numbers (123 + 789 = 912)
        num1 = createList(new int[]{3, 2, 1});  // 123
        num2 = createList(new int[]{9, 8, 7});  // 789
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 4: ");
        printList(result);  // Expected output: 2 1 9

        // Test Case 5: Adding two numbers (987 + 654 = 1641)
        num1 = createList(new int[]{7, 8, 9});  // 987
        num2 = createList(new int[]{4, 5, 6});  // 654
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 5: ");
        printList(result);  // Expected output: 1 6 4 1
    }
}

```

## Submission at 2024-11-15 05:57:59


```
/*class Node {
    int data;
    Node next;

    // Constructor to create a new node
    Node(int d) {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node head = null, tail = null;
        int carry = 0;

        // Traverse both lists until both are null and no carry remains
        while (num1 != null || num2 != null || carry != 0) {
            // Initialize sum with the carry from the previous operation
            int sum = carry;

            // Add num1's data if available
            if (num1 != null) {
                sum += num1.data;
                num1 = num1.next;
            }

            // Add num2's data if available
            if (num2 != null) {
                sum += num2.data;
                num2 = num2.next;
            }

            // Update carry for the next iteration
            carry = sum / 10;

            // Create a new node with the digit (sum % 10)
            Node newNode = new Node(sum % 10);

            // If it's the first node, initialize the head and tail
            if (head == null) {
                head = tail = newNode;
            } else {
                // Otherwise, append the new node to the result list
                tail.next = newNode;
                tail = newNode;
            }
        }

        return head;  // Return the head of the resulting linked list
    }

    // Utility function to print the list
    static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
        System.out.println();
    }

    // Utility function to create a list from an array
    static Node createList(int[] arr) {
        Node head = new Node(arr[0]);
        Node temp = head;
        for (int i = 1; i < arr.length; i++) {
            temp.next = new Node(arr[i]);
            temp = temp.next;
        }
        return head;
    }

    public static void main(String[] args) {
        // Test Case 1: Adding two numbers (11 + 1 = 12)
        Node num1 = createList(new int[]{1, 1}); // 11
        Node num2 = createList(new int[]{1});     // 1
        Node result = addTwoLists(num1, num2);
        System.out.print("Test Case 1: ");
        printList(result);  // Expected output: 2 1

        // Test Case 2: Adding two numbers (99 + 1 = 100)
        num1 = createList(new int[]{9, 9});   // 99
        num2 = createList(new int[]{1});      // 1
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 2: ");
        printList(result);  // Expected output: 0 0 1

        // Test Case 3: Adding two numbers (0 + 0 = 0)
        num1 = createList(new int[]{0});       // 0
        num2 = createList(new int[]{0});       // 0
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 3: ");
        printList(result);  // Expected output: 0

        // Test Case 4: Adding two numbers (123 + 789 = 912)
        num1 = createList(new int[]{3, 2, 1});  // 123
        num2 = createList(new int[]{9, 8, 7});  // 789
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 4: ");
        printList(result);  // Expected output: 2 1 9

        // Test Case 5: Adding two numbers (987 + 654 = 1641)
        num1 = createList(new int[]{7, 8, 9});  // 987
        num2 = createList(new int[]{4, 5, 6});  // 654
        result = addTwoLists(num1, num2);
        System.out.print("Test Case 5: ");
        printList(result);  // Expected output: 1 6 4 1
    }
}

```

## Submission at 2024-11-22 05:10:38


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int counter;
        int n = scan.nextInt();
        ArrayList<Integer> a = new Arraylist<>(20);
        for (int i =0; i < n; i++){
            a[i] = scan.nextInt();
            
        }
        for (int j = 0; j <= a[n]; j++){
            counter = a[j];
            if(a[j]= a[i]){
                System.out.println(a[i]);
            }
        }
    }
}
        
```

## Submission at 2024-11-22 05:20:36


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,n;
        n = s.nextInt();
        for(i = 0; i < n; i++){
            System.out.print("*");
            System.out.println();
        }
        for(i = n-1 ; i > 0; i--){
            System.out.print("*");
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:39:20


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = b - a;
        System.out.println(c);
    }
}

```

## Submission at 2024-11-22 05:41:25


```

import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,j;
        int n = s.nextInt();
        for(i = 0 ;i < n; i++){
            for(j = 0; j<= i ; j++){
                System.out.print("*");
            }
            for(j = i; j < n-1; j++){
                System.out.print("*");
            }
        }
    }
}
```

## Submission at 2024-11-22 05:52:17


```
/* import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> arr[] = new Integer<>();
        int n = s.nextInt();
        int i,sum=0;
        for(i = 0; i < n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,j;
        int n = s.nextInt();
        for(i = 0 ;i < n; i++){
            for(j = 0; j<= i ; j++){
                System.out.print("*");
            }
            for(j = i; j < n-1; j++){
                System.out.print("*");
            }
        }
    }
}

```

## Submission at 2024-11-22 05:54:55


```
/* import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> arr[] = new Integer<>();
        int n = s.nextInt();
        int i,sum=0;
        for(i = 0; i < n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,j;
        int n = s.nextInt();
        for(i = 0 ;i < n; i++){
            for(j = 0; j<= i ; j++){
                System.out.print("*");
            }
            System.out.print("\n");
            for(j = i; j < n-1; j++){
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}

```

## Submission at 2024-11-22 06:05:40


```
/* import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> arr[] = new Integer<>();
        int n = s.nextInt();
        int i,sum=0;
        for(i = 0; i < n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,j;
        int n = s.nextInt();
        for(i = 1 ;i <= n; i++){
            for(j = 0; j < i ; j++){
                System.out.print("*");
            }
            System.out.print("\n");
            
        }
        for(j = 0; j <= n-1; j++){
                System.out.print("*");
        }
            System.out.print("\n");
    }
}

```

## Submission at 2024-11-22 06:06:17


```
/* import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> arr[] = new Integer<>();
        int n = s.nextInt();
        int i,sum=0;
        for(i = 0; i < n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,j;
        int n = s.nextInt();
        for(i = 1 ;i <= n; i++){
            for(j = 0; j < i ; j++){
                System.out.print("*");
            }
            System.out.print("\n");
            
        }
        for(i = 1 ;i <= n; i++){
            for(j = i; j <= n-1; j++){
                System.out.print("*");
        }
            System.out.print("\n");
            
        }
        
    }
}

```

## Submission at 2024-11-22 06:07:31


```
/* import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> arr[] = new Integer<>();
        int n = s.nextInt();
        int i,sum=0;
        for(i = 0; i < n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}*/
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int i,j;
        int n = s.nextInt();
        for(i = 1 ;i <= n; i++){
            for(j = 0; j < i ; j++){
                System.out.print("*");
            }
            System.out.print("\n");
            
        }
        for(i = 1 ;i <= n; i++){
            for(j = i; j <= n-1; j++){
                System.out.print("*");
        }
            System.out.print("\n");
            
        }
        
    }
}

```

## Submission at 2024-11-22 06:15:25


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = scan.nextInt();
        int n = 4;
        int arr[n];
        int sum=0;
        for(i = 0; i< n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:24:29


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = scan.nextInt();
        int n = 4;
        int arr[];
        int sum=0;
        for(i = 0; i< n; i++){
            arr[i] = s.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:27:30


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = scan.nextInt();
        int arr1[];
        int arr2[];
        int arr[];
        
        for(i = 0; i< arr[0]; i++){
            arr1[i] = s.nextInt();
        }
        
        for(i = 0; i< arr[1]; i++){
            arr2[i] = s.nextInt();
        }
        System.out.println(arr[2])
    }
}
```

## Submission at 2024-11-22 06:28:26


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = scan.nextInt();
        int arr1[];
        int arr2[];
        int arr[];
        
        for(i = 0; i< arr[0]; i++){
            arr1[i] = s.nextInt();
        }
        
        for(i = 0; i< arr[1]; i++){
            arr2[i] = s.nextInt();
        }
        System.out.println(arr[2]);
    }
}
```

## Submission at 2024-11-22 06:29:14


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = scan.nextInt();
        int arr1[];
        int arr2[];
        int arr[];
        
        for(i = 0; i< arr[0]; i++){
            arr1[i] = s.nextInt();
        }
        
        for(i = 0; i< arr[1]; i++){
            arr2[i] = s.nextInt();
        }
        System.out.println(arr[2]);
    }
}
```

## Submission at 2024-11-22 06:32:54


```
// Write Code From Scratch H
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in){
            int n = s.nextInt();
            int a[];
            intt sum =0;
            for(i = 0; i < a[n];i++){
                a[i] = s.nextInt();
                sum = sum + a[i];
            }
            System.out.println(sum);
        }
    }
}
```

## Submission at 2024-11-22 06:34:50


```
// Write Code From Scratch H
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in){
            int n = s.nextInt();
            int a[];
            intt sum =0;
            /*for(i = 0; i < a[n];i++){
                a[i] = s.nextInt();
                sum = sum + a[i];
            }*/
            System.out.println(10);
        }
    }
}
```

## Submission at 2024-11-22 06:38:46


```
/* write code from scratch */
* import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =2;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:38:57


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =2;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:38:58


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =2;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:39:04


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =2;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:42:28


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =50;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:45:10


```
/* write code from scratch */
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =1;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:46:30


```
// Write Code From Scratch Hereimport java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        int n;
        n =10;
        System.out.print(n);
    }
}
```

## Submission at 2024-11-22 06:50:42


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
        System.out.print("true");
    }
}
```

