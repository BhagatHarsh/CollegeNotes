## Submission at 2024-08-09 04:57:47


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
        String name = input.nextLine();
        System.out.println("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-09 05:07:51


```
// Write your Java code here
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextLine();
        
        System.out.println("Hello World!");
    }
}
```

## Submission at 2024-08-09 05:17:26


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        if (name.length()<= 1 || name.length()>=100){
            System.out.print("Please enter valid name");
        }
        System.out.println("Hello " + name  +" !");
    }
}
```

## Submission at 2024-08-09 05:19:39


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        if (name.length()<= 1 || name.length()>=100){
            System.out.print("Please enter valid name");
        }
        System.out.print("Hello " + name  +" !");
    }
}
```

## Submission at 2024-08-09 05:21:54


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();
        if (name.length()<= 1 || name.length()>=100){
            System.out.print("Please enter valid name");
        }
        System.out.print("Hello " + name  +"!");
    }
}
```

## Submission at 2024-08-16 05:00:39


```
import java.util.Scanner;

class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in); 
        int num = sc.nextInt();
        System.out.println(fibonacci(num));
    }

    public static int fibonacci(int n){
        if (n == 0){
            return 0;
        }
        if (n == 1){
            return 1 ;
        }
        if (n <= 10) {
            return fibonacci(n-1) + fibonacci(n-2);
        }
        else{
            return 0;
        }
    }
}

```

## Submission at 2024-08-16 05:42:47


```
import java.util.Scanner;
class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(isPowerOfTwo(num));
    }
    public static boolean isPowerOfTwo(int n){
        boolean ans = false;
        if (n <= 0) {
            return false; 
        }
        if (n == 1) {
            return true; 
        }
        if (n % 2 != 0) {
            return false; 
                    }
                return isPowerOfTwo(n / 2);          
    }   
    
}
```

## Submission at 2024-08-16 05:46:45


```
import java.util.Scanner;
import java.lang.Math;
class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(isPowerOfTwo(num));
    }
    public static boolean isPowerOfTwo(int n){
        boolean ans = false;
       if (n <= 0) {
            return false; 
        }
        if (n == 1) {
            return true; 
        }
        if (n % 2 != 0) {
            return false; 
                    }
                return isPowerOfTwo(n / 2);
    }   
    
}
```

## Submission at 2024-08-16 05:47:26


```
import java.util.Scanner;
import java.lang.Math;
class Main{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println(isPowerOfTwo(num));
    }
    public static boolean isPowerOfTwo(int n){
        boolean ans = false;
       if (n <= 0) {
            return false; 
        }
        if (n == 1) {
            return true; 
        }
        if (n % 2 != 0) {
            return false; 
                    }
                return isPowerOfTwo(n / 2);
    }   
    
}
```

## Submission at 2024-08-22 11:47:39


```
import java.util.Scanner;

public class Main {
    
    public static void main(String[]args){
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // range: 1 to n
        int k = sc.nextInt(); // no. of elements in set
        combine(n, k);
    }
    
    public static void combine(int n, int k) {
        int[] current = new int[k]; // Array to store the current combination
        generateCombinations(1, n, k, 0, current);
    }
    
    public static void generateCombinations(int start, int n, int k, int index, int[] current) {
 
        if (index == k) {
            printCombination(current);
            return;
        }

      
        for (int i = start; i <= n; i++) {
            current[index] = i; 
            generateCombinations(i + 1, n, k, index + 1, current); 
        }
    }
    
    public static void printCombination(int[] current) {
        System.out.print("[");
        for (int i = 0; i < current.length; i++) {
            System.out.print(current[i]);
            if (i < current.length - 1) {
                System.out.print(",");
            }
        }
        System.out.print("],");
    }
}
```

## Submission at 2024-08-22 12:30:30


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        List<List<Integer>> combinations = combine(n, k);
        System.out.println(combinations);
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        backtrack(result, combination, 1, n, k);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> combination, int start, int n, int k) {
        if (combination.size() == k) {
            result.add(new ArrayList<>(combination));
            return;
        }

        for (int i = start; i <= n; i++) {
            combination.add(i);
            backtrack(result, combination, i + 1, n, k);
            combination.remove(combination.size() - 1); 
        }
    }
}

```

## Submission at 2024-08-22 12:43:00


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
    }
    private void solve(int n, int k, List<List<Integer>>ans, List<Integer>list, int num){
        if(list.size()==k){
            ans.add(new ArrayList<>(list));
            return;
        }
        if(num>n){
            return;
        }

        list.add(num);

        solve(n, k , ans, list, num+1);

        list.remove(list.size()-1);
        
        solve(n, k, ans, list, num+1);

    }
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer>list=new ArrayList<>();

        solve(n, k, ans, list, 1);

        return ans;
    }
}
```

## Submission at 2024-08-22 12:52:37


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        
        List<List<Integer>> combinations = combine(n, k);
        printCombinations(combinations);
    }
    
    private static void solve(int n, int k, List<List<Integer>> ans, List<Integer> list, int num) {
        if (list.size() == k) {
            ans.add(new ArrayList<>(list));
            return;
        }
        if (num > n) {
            return;
        }

        list.add(num);
        solve(n, k, ans, list, num + 1);
        list.remove(list.size() - 1);
        
        solve(n, k, ans, list, num + 1);
    }
    
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        solve(n, k, ans, list, 1);
        return ans;
    }
    
    private static void printCombinations(List<List<Integer>> combinations) {
        System.out.print("[");
        for (int i = 0; i < combinations.size(); i++) {
            System.out.print(combinations.get(i));
            if (i != combinations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}

```

## Submission at 2024-08-22 12:55:24


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        
        List<List<Integer>> combinations = combine(n, k);
        printCombinations(combinations);
    }
    
    private static void solve(int n, int k, List<List<Integer>> ans, List<Integer> list, int num) {
        if (list.size() == k) {
            ans.add(new ArrayList<>(list));
            return;
        }
        if (num > n) {
            return;
        }

        list.add(num);
        solve(n, k, ans, list, num + 1);
        list.remove(list.size() - 1);
        
        solve(n, k, ans, list, num + 1);
    }
    
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> list = new ArrayList<>();
        solve(n, k, ans, list, 1);
        return ans;
    }
    
    private static void printCombinations(List<List<Integer>> combinations) {
        System.out.print("[");
        for (int i = 0; i < combinations.size(); i++) {
            System.out.print(combinations.get(i));
            if (i != combinations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}

```

## Submission at 2024-08-22 13:35:25


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        String[] inputStrings = input.split(" ");

        int[] nums = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            nums[i] = Integer.parseInt(inputStrings[i]);
        }

        // Generate permutations
        List<List<Integer>> resultList = new Main().permute(nums);

        // Print the output in the specified format
        System.out.print("[");
        for (int i = 0; i < resultList.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < resultList.get(i).size(); j++) {
                System.out.print(resultList.get(i).get(j));
                if (j < resultList.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < resultList.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> resultList = new ArrayList<>();
        backtrack(resultList, new ArrayList<>(), nums);
        return resultList;
    }

    public static void backtrack(List<List<Integer>> resultList, ArrayList<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            resultList.add(new ArrayList<>(tempList));
            return;
        }

        for (int number : nums) {
            if (tempList.contains(number)) continue;
            tempList.add(number);
            backtrack(resultList, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }
    }
}

```

## Submission at 2024-08-22 13:46:30


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        // Generate and print all combinations of well-formed parentheses
        List<String> combinations = generateParentheses(n);
        printFormattedOutput(combinations);
    }

    public static List<String> generateParentheses(int n) {
        List<String> result = new ArrayList<>();
        backtrack(result, "", 0, 0, n);
        return result;
    }

    private static void backtrack(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max);
        }
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max);
        }
    }

    private static void printFormattedOutput(List<String> combinations) {
        System.out.print("[");
        for (int i = 0; i < combinations.size(); i++) {
            System.out.print("\"" + combinations.get(i) + "\"");
            if (i < combinations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-22 14:13:44


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

## Submission at 2024-08-28 04:59:06


```
#include <iostream>
#include <algorithm>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int m , int n) {
    if (m == n) {
        std::sort(arr1, arr1 + m);
        std::sort(arr2, arr2 + n);

        for (int i = 0; i < n; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }
}

int main() {
    int m, n;
    
    //cout << "Enter number of elements in array1: ";
    cin >> m >> n ;
    int arr1[m];
    for (int i = 0; i < m; i++) {
        //cout << "Enter arr1 element " << i << ": ";
        cin >> arr1[i];
    }

    //cout << "Enter number of elements in array2: ";
    //cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++) {
        //cout << "Enter arr2 element " << i << ": ";
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2, m, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-28 07:37:53


```
#include <iostream>
using namespace std;

int sumOfMultiples(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << sumOfMultiples(n) << endl;
    return 0;
}

```

## Submission at 2024-08-28 07:46:03


```
#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int nums[n];
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int evenDigitCount = 0;

    for (int i = 0; i < n; i++) {
        if (countDigits(nums[i]) % 2 == 0) {
            evenDigitCount++;
        }
    }

    cout << evenDigitCount << endl;

    return 0;
}

```

## Submission at 2024-08-28 08:04:02


```
#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k) {
    int currentMissing = 0;
    int currentNumber = 1;
    int index = 0;

    while (k > 0) {
        if (index < n && arr[index] == currentNumber) {
            index++;
        } else {
            currentMissing = currentNumber;
            k--;
        }
        currentNumber++;
    }

    return currentMissing;
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    
    int i = 0 ;
    for (; i < n; i++) {
        cin >> arr[i];
    }

    cout << findKthMissing(arr, n, k) << endl;

    return 0;
}

```

## Submission at 2024-08-28 08:11:59


```
#include <iostream>
using namespace std;

int findTriangularSum(int arr[], int n) {
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i] + arr[i + 1];
        }
        n--;
    }
    return arr[0];
}

int main() {
    int n;
	cin >> n;
	
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findTriangularSum(arr, n) << endl;

    return 0;
}

```

## Submission at 2024-08-28 08:16:41


```
// Write Code from Scratch
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int matrix[M][N];
    int transpose[N][M];

    // Input the matrix elements
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the transposed matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-28 09:36:00


```
#include<iostream>
using namespace std;

void spiralMatrix(int arr[][100], int n, int m);  // Function declaration with specified column size

int main(){
    int n, m; 
    cin >> n >> m;
    int arr[100][100];  // Assuming max size is 100x100
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    spiralMatrix(arr, n, m);  // Function call
    return 0;
}

void spiralMatrix(int arr[][100], int n, int m){
    int rowStart = 0, rowEnd = n - 1;
    int colStart = 0, colEnd = m - 1;
    
    while(rowStart <= rowEnd && colStart <= colEnd){
        // Traverse right across the top row
        for(int j = colStart; j <= colEnd; j++){
            cout << arr[rowStart][j] << " ";
        }
        rowStart++;
        
        // Traverse down the right column
        for(int i = rowStart; i <= rowEnd; i++){
            cout << arr[i][colEnd] << " ";
        }
        colEnd--;
        
        // Traverse left across the bottom row
        if(rowStart <= rowEnd){
            for(int j = colEnd; j >= colStart; j--){
                cout << arr[rowEnd][j] << " ";
            }
            rowEnd--;
        }
        
        // Traverse up the left column
        if(colStart <= colEnd){
            for(int i = rowEnd; i >= rowStart; i--){
                cout << arr[i][colStart] << " ";
            }
            colStart++;
        }
    }
}

```

## Submission at 2024-08-30 05:01:09


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>

using namespace std;

double pow(double x , double n){
    double ans ;
    if (n == 0 ){
        return 1;
    }
    ans = x * pow(x, n-1);
    return ans;
}

int main(){
    double x , n;
    cin>>x>>n;
    cout<< pow(x , n );
}
```

## Submission at 2024-08-30 05:15:17


```
// Write code from scratch
#include<iostream>
using namespace  std;

int main(){
    int n;
    int arr1[100000] , arr2[100000] ;
    cin>> n;
    for (int i = 0 ; i > n ; i++){
        cin>> arr1[i];
    }
    cout << endl;

    for (int i = 0 ; i > n ; i++){
        cin>> arr2[i];
    }
    int arr3[n];
    for (int i = 0; i>n ; i++){
        arr3[i] = max(arr1[i], arr2[i]);
    }
    // printing output
    for(int i = 0; i<n ; i++){
        cout<<arr3[i]<<" ";
    }
}
```

## Submission at 2024-08-30 05:18:26


```
// Write code from scratch
#include<iostream>
using namespace  std;

int main(){
    int n;
    int arr1[100000] , arr2[100000] ;
    cin>> n;
    for (int i = 0 ; i > n ; i++){
        cin>> arr1[i];
    }
    cout << endl;

    for (int i = 0 ; i > n ; i++){
        cin>> arr2[i];
    }
    int arr3[n];
    for (int i = 0; i>n ; i++){
        arr3[i] = max(arr1[i], arr2[i]);
    }
    // printing output
    for(int i = 0; i<n ; i++){
        cout<<arr3[i]<<" ";
    }
}
```

## Submission at 2024-08-30 05:32:02


```
// Write code from scratch
# include<iostream>
#include<string>

using namespace std;

int main(){
    string str ;
    cin >> str;
    int n = str.length();
    int start = 0 , end = n-1 ;
    for (int i = 0; i<= n/2 ; i++){
        if(str[start] == str[end]){
            start++ ;
            end--;
        } else {
            cout<<"NO";
        }
        
    }
    cout<<"YES";
}
```

## Submission at 2024-08-30 05:45:50


```
#include<iostream>

int main(){
    int n, m ;
    int arr[100][100];
    cin >> n>> m;
    int arr[n][m];
    for(int i = 0; i< n ; i++){
        for (int j = 0 ; j<m ; j++){
            cin<<arr[i][j];
            cout<<" ";
        }
    }
    for (int i = 0 ; i<n ;i++){
        for int j = 0 ; 
    }
}
```

## Submission at 2024-08-30 05:46:32


```
#include<iostream>

int main(){
    int n, m ;
    int arr[100][100];
    cin >> n>> m;
    int arr[n][m];
    for(int i = 0; i< n ; i++){
        for (int j = 0 ; j<m ; j++){
            cin<<arr[i][j];
            cout<<" ";
        }
    }
    for (int i = 0 ; i<n ;i++){
        for int j = 0 ; 
    }
}
```

## Submission at 2024-08-30 05:53:33


```
// Write code from scratch
#include<iostream>
using namespace  std;

int main(){
    int n;
    int arr1[100000] , arr2[100000] ;
    cin>> n;
    for (int i = 0 ; i > n ; i++){
        cin>> arr1[i];
    }
    cout << endl;

    for (int i = 0 ; i > n ; i++){
        cin>> arr2[i];
    }
    int ans[n];
    for (int i = 0; i>n ; i++){
        ans[i] = max(arr1[i], arr2[i]);
        cout << ans <<" ";
    }
    
}

```

## Submission at 2024-08-30 06:07:33


```
#include<iostream>
using namespace  std;

int main(){
    int n;
    cin>> n;
    int arr1[n] , arr2[n] ;
   
    for (int i = 0 ; i > n ; i++){
        cin>> arr1[i];
    }

    for (int i = 0 ; i > n ; i++){
        cin>> arr2[i];
    }
    int ans;
    for (int i = 0; i<n ; i++){
        ans = max(arr1[i], arr2[i]);
        cout<< ans <<" ";
    }

}
```

## Submission at 2024-08-30 06:12:00


```
// Write code from scratch
# include<iostream>
#include<string>

using namespace std;

int main(){
    string str ;
    cin >> str;
    int n = str.length();
    int start = 0 , end = n-1 ;
    for (int i = 0; i< (n+1)/2 ; i++){
        if(str[start] == str[end]){
            start++ ;
            end--;
        } else {
            cout<<"NO";
        }
        
    }
    cout<<"YES";
}
```

## Submission at 2024-09-06 04:55:58


```
// Write code from scratch
# include<iostream>
#include<string>

using namespace std;

int main(){
    string str ;
    cin >> str;
    int n = str.length();
    int start = 0 , end = n-1 ;
    if (start != end){
        for (int i = 0; i<= n/2 ; i++){
            if(str[start] == str[end]){
                start++ ;
                end--;
                } else {
                    cout<<"NO";
                    }
        }
    cout<<"YES";
    }
    
}
```

## Submission at 2024-09-06 05:06:24


```
// Write code from scratch
#include<iostream>
using namespace  std;

int main(){
    int n;
    cin>> n;
    int arr1[n] , arr2[n] ;
   
    for (int i = 0 ; i > n ; i++){
        cin>> arr1[i];
    }

    for (int i = 0 ; i > n ; i++){
        cin>> arr2[i];
    }
    int ans;
    for (int i = 0; i<n ; i++){
        ans = max(arr1[i], arr2[i]);
        cout<< ans <<" ";
    }

}
```

## Submission at 2024-09-06 05:10:38


```
// Write code from scratch
#include<iostream>
using namespace  std;

int main(){
    int n;
    cin>> n;
    int arr1[n] , arr2[n] ;
   
    for (int i = 0 ; i < n ; i++){
        cin>> arr1[i];
    }

    for (int i = 0 ; i < n ; i++){
        cin>> arr2[i];
    }
    int ans;
    for (int i = 0; i<n ; i++){
        ans =std::max(arr1[i], arr2[i]);
        cout<< ans <<" ";
    }

}
```

## Submission at 2024-09-06 05:12:43


```
// Write code from scratch
#include<iostream>
using namespace  std;

int main(){
    int n;
    cin>> n;
    int arr1[n] , arr2[n] ;
   
    for (int i = 0 ; i < n ; i++){
        cin>> arr1[i];
    }

    for (int i = 0 ; i < n ; i++){
        cin>> arr2[i];
    }
    int ans;
    for (int i = 0; i<n ; i++){
        ans = max(arr1[i], arr2[i]);
        cout<< ans <<" ";
    }

}
```

## Submission at 2024-09-10 06:34:08


```
// Write Code from Scratch here
#include<iostream>
using namespace std;

bool isPowerOfThree(int n){
    if(n == 0){
        return false;
    }
    if(n == 1){
        return true;
    } if (n%3 == 0){
        n= n/3;
        isPowerOfThree(n);
    } else{
        return false;
    }
}

int main(){
    int n;
    cin>> n;
    if(isPowerOfThree(n)){
        cout<<"True";
    } else{
        cout<<"False";
    }
}
```

## Submission at 2024-09-13 04:46:42


```
// Write code from scratch
#include<iostream>
#include<string>

using namespace std;

bool isPali(string str, int start, int end){
    if(start == end || start>end){
        if(str[start] == str[end]){
            return true;
        } else{
             return false;
        }
       
    } else{
        if(str[start] == str[end]){
            start++;
            end--;
            isPali(str , start, end);
            return true;
        } else{
             return false;
        }
    }
    return false;
}

int main(){
    string str ;
    cin>>str;
    int start =0;
    int end = str.length() - 1;

    if(isPali(str , start ,end )){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
}
```

## Submission at 2024-09-13 06:23:02


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>

using namespace std;

double pow(double x , double n){
    double ans ;
    if (n == 0 ){
        return 1;
    }
    if (n<0){
        ans =(1/x)*(pow(x,n+1));
        return ans;
    }
    ans = x * pow(x, n-1);
    return ans;
}

int main(){
    double x , n;
    cin>>x>>n;
    cout<< floor(pow(x , n ));
}
```

## Submission at 2024-09-13 06:24:23


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>

using namespace std;

double pow(double x , double n){
    double ans ;
    if (n == 0 ){
        return 1;
    }
    if (n<0){
        ans =(1/x)*(pow(x,n+1));
        return ans;
    }
    ans = x * pow(x, n-1);
    return ans;
}

int main(){
    double x , n;
    cin>>x>>n;
    int ans = floor(pow(x , n ));
    cout<< ans;
}
```

## Submission at 2024-10-04 05:14:09


```
// Write code from scratch here
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int time(int n, vector<int> ticket, int index ){
    queue<int> q;
    int time=0;
    for(int i= 0; i<ticket.size();i++){
        if(ticket[i]!=0){
            time=time+1;
            int add = ticket[i]-1;
            q.pop();
            q.push(add);
        }
    }
    return time;
}

int main(){
    int n;
    cin>>n;
    vector<int> tickets;
    int input;
    for(int i=0; i<n; i++){
        cin>>input;
        tickets.push_back(input);
    }
    int index;
    cin>>index;
    cout<<time(n,tickets,index);
}
```

## Submission at 2024-10-04 05:16:03


```
// Write code from scratch here
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int time(int n, vector<int> ticket, int index ){
    queue<int> q;
    int time=0;
    for(int i= 0; i<ticket.size();i++){
        if(ticket[i]!=0){
            time=time+1;
            int add = ticket[i]-1;
            q.pop();
            q.push(add);
        }
        else{
            q.pop();
        }
    }
    return time;
}

int main(){
    int n;
    cin>>n;
    vector<int> tickets;
    int input;
    for(int i=0; i<n; i++){
        cin>>input;
        tickets.push_back(input);
    }
    int index;
    cin>>index;
    cout<<time(n,tickets,index);
}
```

## Submission at 2024-10-04 05:24:38


```
// Write code from scratch here
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int time(int n, vector<int> ticket, int index ){
    queue<int> q;
    int time=0;
    for(int i= 0; i<ticket.size();i++){
        int add = ticket[i]-1;
        if(add!=0){
            time=time+1;
            q.pop();
            q.push(add);
        }
        else if(add==0){
            time = time+1;
            q.pop();
        }
    }
    return time;
}

int main(){
    int n;
    cin>>n;
    vector<int> tickets;
    int input;
    for(int i=0; i<n; i++){
        cin>>input;
        tickets.push_back(input);
    }
    int index;
    cin>>index;
    cout<<time(n,tickets,index);
}
```

## Submission at 2024-10-04 05:44:33


```
// Write C++ code from 
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validAnagram(string s , string t){
    vector<char> s1;
    vector<char> t1;
    for(int i=0; i<sizeof(s)/sizeof(string); i++){
        s1.push_back(s[i]);
    }
    for(int i=0; i<sizeof(t)/sizeof(string); i++){
        t1.push_back(t[i]);
    }
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    if(s1==t1){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 06:02:37


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validAnagram(string s , string t){
    vector<char> s1;
    vector<char> t1;
    for(int i=0; i<s.length(); i++){
        s1.push_back(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        t1.push_back(t[i]);
    }
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    for(int i =0; i<s1.size();i++){
        if(s1[i]==t1[i]){
        return true;
        }
        else {
           return false; 
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 06:02:38


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validAnagram(string s , string t){
    vector<char> s1;
    vector<char> t1;
    for(int i=0; i<s.length(); i++){
        s1.push_back(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        t1.push_back(t[i]);
    }
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    for(int i =0; i<s1.size();i++){
        if(s1[i]==t1[i]){
        return true;
        }
        else {
           return false; 
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 06:02:39


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validAnagram(string s , string t){
    vector<char> s1;
    vector<char> t1;
    for(int i=0; i<s.length(); i++){
        s1.push_back(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        t1.push_back(t[i]);
    }
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    for(int i =0; i<s1.size();i++){
        if(s1[i]==t1[i]){
        return true;
        }
        else {
           return false; 
        }
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 06:05:38


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validAnagram(string s , string t){
    vector<char> s1;
    vector<char> t1;
    for(int i=0; i<s.length(); i++){
        s1.push_back(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        t1.push_back(t[i]);
    }
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    if(s1.size() == t1.size()){
        for(int i =0; i<s1.size();i++){
        if(s1[i]==t1[i]){
        return true;
        }
        else {
           return false; 
        }
    }
    }
    
    return false;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-25 05:56:32


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){ return {};}
  
  if(root->left != NULL) {postOrder(root->left);}
  //ans.push_back(root->data);
  if(root->right != NULL) {postOrder(root->right);}
  ans.push_back(root->data);
}

```

## Submission at 2024-10-25 06:27:58


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    // code here
    Node* sum;
    //if(num1.length()> num2.length())
    while(num1->next !=NULL ){
    sum->data = num1-> data + num2 ->data;
    num1-> data = num1->next->data;
    num2-> data = num2->next->data;
    sum->data = sum->next->data;
    }
}
```

## Submission at 2024-10-25 06:37:20


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return {};
  }
  if(root->left != NULL){
    postOrder(root->left);
  }
  ans.push_back(root->data);
  if(root->right != NULL){
    postOrder(root->right);
  }
  return ans;
}

```

## Submission at 2024-10-25 07:00:03


```
// write code from scratch
# include<iostream>
# include<string>
using namespace std

bool isRansome(string r , string m){
    int n = m.length();
    for (int i = 0; i<n/2; i++){
        if(r[i] != m[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string r;
    cin>> r;
    string m;
    cin>> m;
    if(isRansome(r,main)){
        cout<<"True";
    } else {
        cout<<"False";
    }
}
```

## Submission at 2024-10-25 07:01:03


```
// write code from scratch
# include<iostream>
# include<string>
using namespace std;

bool isRansome(string r , string m){
    int n = m.length();
    for (int i = 0; i<n/2; i++){
        if(r[i] != m[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string r;
    cin>> r;
    string m;
    cin>> m;
    if(isRansome(r,m)){
        cout<<"True";
    } else {
        cout<<"False";
    }
}
```

## Submission at 2024-10-25 07:02:26


```
// write code from scratch
# include<iostream>
# include<string>
using namespace std;

bool isRansome(string r , string m){
    int n = m.length();
    for (int i = 0; i<n/2; i++){
        if(r[i] != m[i]){
            return false;
        }
        return true;
    }
    return false;
}
int main(){
    string r;
    cin>> r;
    string m;
    cin>> m;
    if(isRansome(r,m)){
        cout<<"True";
    } else {
        cout<<"False";
    }
}
```

## Submission at 2024-11-15 09:47:37


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  vector<int> ans;
  if(root == NULL) return {};
  if(root-> left) postorderTraversal (root->left);
  if(root->right) postorderTraversal(root->right);
  ans. push_back(root->val);
  return ans;
}

```

## Submission at 2024-11-15 11:05:49


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include<string>
using namespace std;

bool canConstruct(string r, string m) {
    unordered_map<char, int> charcfrequency;

    for (int i =0; i<m.length(); i++){
        char c = m[i];
        charcfrequency[c] = charcfrequency[c] + 1;
    }

    for (int i = 0; i<r.length();i++){
        char c = r[i];
        if(charcfrequency[c]==0){
            return false;
        }
        charcfrequency[c] = charcfrequency[c]-1;
    }
}

int main(){
    string r, m;
    cin>>r;
    cin>>m;
    if(canConstruct(r,m)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-15 11:56:53


```
// write code from scratch
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool isSame(string pa, vector<string> s) {
    // Create an unordered map to store character to string mapping
    unordered_map<char, string> sameString;

    // Loop through each character in the pattern
    for (int i = 0; i < pa.length(); i++) {
        char ch = pa[i];

        // Check if the character already has a mapped string
        if (sameString.find(ch) == sameString.end()) {
            // If not, add the character and its corresponding string to the map
            sameString[ch] = s[i];
        } else {
            // If it exists, check if the current string matches the previous one
            if (sameString[ch] != s[i]) {
                return false; // Mismatch found
            }
        }
    }

    // If no mismatches found, return true
    return true;
}

int main() {
    string pa;
    cin >> pa;

    // Read the corresponding strings into a vector
    vector<string> s(pa.length());
    for (int i = 0; i < pa.length(); i++) {
        cin >> s[i];
    }

    // Check if the pattern matches the set of strings
    if (isSame(pa, s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

```

## Submission at 2024-11-15 12:06:34


```
// write code from scratch
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool isSame(string pa, vector<string> s) {
    unordered_map<char, string> sameString;

    for (int i = 0; i < pa.length(); i++) {
        char ch = pa[i];

        // Check if the character already has a mapped string
        if (sameString.find(ch) == sameString.end()) {
           
            sameString[ch] = s[i];
        }   
        if (sameString[ch] != s[i]) {
            return false; 
        }
    }
    return true;
}

int main() {
    string pa;
    cin >> pa;
    vector<string> s(pa.length());
    for (int i = 0; i < pa.length(); i++) {
        cin >> s[i];
    }

    if (isSame(pa, s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

```

## Submission at 2024-11-15 13:21:35


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
bool isMirror(Node*leftsubtree, Node*rightsubtree){
    if(leftsubtree==NULL && rightsubtree==NULL){
        return true;
    }
    if(leftsubtree == NULL || rightsubtree == NULL){
        return false;
    }
    if(leftsubtree->data != rightsubtree->data){
        return false;
    }
    return isMirror(leftsubtree->left, rightsubtree->right)&&
            isMirror(leftsubtree->right,rightsubtree->left);
}

bool isSymmetric(struct Node* root)
{
    // Code here
    if(root == NULL){
        return true;
    }
    return (isMirror(root->left, root->right));
}


```

## Submission at 2024-11-22 05:49:18


```
// write code from scratch
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i =0; i<n;i++){
        cin>>arr[i];
    }
    int count= 0
    sorted_arr = sort(arr.begin(), arr.end());
    for(int i=0;i<n;i++){
        if(sorted_arr[i] == sorted_arr[i+1]){
            count ++;
        }
    }
    cout<<count;
}
```

## Submission at 2024-11-22 06:16:05


```
// write code from scratch// write code from scratch
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

int findDistance(vector<int> info,vector<int>arr1,vector<int>arr2){
    int m = info[0];
    int n = info[1];
    int d = info[2];
    int count =0;
     vector<int>sub;
    for(int i = 0; i<m;i++){
        for(int j= 0;j<n;j++){
            vector<int>sub = arr1[i]-arr2[j];
            if(sub[j]<0){
                sub[j] = sub*(-1);
            }
            sub.push_back(sub[j]);
        }
        for(int j =0;j<n;j++){
            if(sub[j]>=2){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> info;
    for(int i= 0; i<3; i++){
        info.push_back(info[i]);

    }
    int m = info[0];
    int n = info[1];

    vector<int> arr1;
    vector<int> arr2;
    for(int i= 0; i<info[0]; i++){
        arr1.push_back(arr1[i]);
    }
    for(int i= 0; i<n; i++){
        arr2.push_back(arr2[i]);
    }
    std::cout<<findDistance(info,arr1,arr2);
}

```

## Submission at 2024-11-22 06:27:27


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr.push_back(arr[i];)
    }
    int count =0;
    vector<int> sort_arr = sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(sort_arr[i]==sort_arr[i+1])
        cout<<sort_arr[i];
    }

    return 0;
}
```

## Submission at 2024-11-22 06:31:56


```
// write code from scratch// write code from scratch// write code from scratch
// write code from scratch
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr.push_back(arr[i]);
    }
    int count =0;
    vector<int> sort_arr = sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(sort_arr[i]==sort_arr[i+1])
        cout<<sort_arr[i];
    }

    return 0;
}
```

## Submission at 2024-11-22 06:34:30


```
// write code from scratch// write code from scratch// write code from scratch
// write code from scratch
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr.push_back(arr[i]);
    }
    int count =0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
        cout<<arr[i];
    }

    return 0;
}
```

## Submission at 2024-11-22 06:43:50


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<< sum;
    return 0;
}


```

## Submission at 2024-11-22 06:51:26


```
// write code from scratch
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i= 1; i<=n;i++){
        for(int j=1;j<=ij++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i= n; i>0;i--){
        for(int j=1;j<=ij++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 06:58:19


```
// write code from scratch
// write code from scratch
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i= 1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i= n-1; i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 07:08:42


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(2);
    for(int i= 0;i<2;i++){
        cin>> arr[i];
        arr.push_back(arr[i]);
    }
    int c= arr[1]-arr[2];
    cout<<c;
    return 0;
}
```

## Submission at 2024-11-22 07:08:42


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr(2);
    for(int i= 0;i<2;i++){
        cin>> arr[i];
        arr.push_back(arr[i]);
    }
    int c= arr[1]-arr[2];
    cout<<c;
    return 0;
}
```

