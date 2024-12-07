## Submission at 2024-08-09 05:17:17


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner input = new Scanner (System.in);
        String name = input.nextLine();

        System.out.print("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-09 05:24:22


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.print("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-16 05:06:19


```
/*import java.io.*;
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
    }
}
*/
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        int n = input.nextInt();
        System.out.print(fibonacci(n));
        
    }  
    public static int fibonacci(int n){
        if (n<=1){
            return n;
        }
        if(n<=10){
            return fibonacci(n-1) + fibonacci(n-2);
        }
        else{
            return 0;
        }
    } 
}     

       




```

## Submission at 2024-08-16 05:46:33


```
/*import java.io.*;

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
        
    }
}
*/

import java.util.Scanner;

public class Main{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();

        System.out.print(isPowerOfTwo(n));
    }
    public static boolean isPowerOfTwo(int n)
    {
        if (n==1)
        {
            return true;
        }
        if (n<=0 || n%2!=0)
        {
            return false;
        }
        else 
        {
            return isPowerOfTwo(n/2);
        }

    }
}

```

## Submission at 2024-08-22 14:17:45


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

## Submission at 2024-08-22 14:18:57


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        String input = scanner.nextLine();

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

## Submission at 2024-08-22 14:20:13


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Take input from the user
       
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

## Submission at 2024-08-29 08:49:45


```
#include<iostream>
using namespace std;

int sumOfMultiples(int n){
int sum=0;
for(int i=1; i<=n; i++){
if(i%3==0 || i%5==0 || i%7==0){
sum=sum+i;
}
}
return sum;
}

int main(){
int n;
//cout<<"enter a positive number"<<endl;
cin>>n;

int ans=sumOfMultiples(n);
//cout<<"the sum of multiples from range [1,"<<n<<"] divisible by 3,5 or 7 is :"<< ans<<endl;
cout<<ans;
}
```

## Submission at 2024-08-29 08:55:47


```
#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k){
int missingCount=0;
int currentNo=1;
int index=0;

while(missingCount<k){
if(index < n && arr[index] == currentNo){
index++;
}
else{
missingCount++;
}

if(missingCount == k){
return currentNo;
}
currentNo++;

}
return -1;

}

int main(){
int n,k;
//cout<<"enter length of array n and k"<<endl;
cin>>n>>k;


int arr[n];
//cout<<"enter "<<n<<" space-separated array elements:"<<endl;
for(int i=0; i<n; i++){
cin>>arr[i];
}

int ans=findKthMissing(arr,n,k);
//cout<<"the "<<k<<" missing value is:"<<ans<<endl;
cout<<ans;
return 0;
}
```

## Submission at 2024-08-29 09:28:52


```
#include <iostream>
using namespace std;

int triangularSum(int arr[], int n){
while(n>1){
for(int i=0; i<n-1; ++i){
arr[i]= (arr[i]+arr[i+1]);
}
n--;
}
return arr[0];
}

int main() {
    int n;
    //cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    //cout << "Enter " << n << " space-separated array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int ans = triangularSum(arr, n);
    //cout << "The triangular sum of the array is: " << ans << endl;
    cout<<ans;

    return 0;
}
```

## Submission at 2024-08-29 09:30:57


```
// Write Code from Scratch
#include <iostream>
using namespace std;

int main() {
    int M, N;
   
    //cout << "Enter the number of rows (M) and columns (N): ";
    cin >> M >> N;

    int matrix[M][N];

    //cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
        //cout<<endl;
    }
   
    int transpose[N][M];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    //cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-29 09:34:07


```
#include <iostream>
using namespace std;

void spiralOrder(int matrix[][100], int n, int m, int result[]) {
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int index = 0;  // Index for the result array

    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; ++i) {
            result[index++] = matrix[top][i];
        }
        top++;

        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; ++i) {
            result[index++] = matrix[i][right];
        }
        right--;

        // Traverse from right to left on the bottom row, if top <= bottom
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result[index++] = matrix[bottom][i];
            }
            bottom--;
        }

        // Traverse from bottom to top on the left column, if left <= right
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result[index++] = matrix[i][left];
            }
            left++;
        }
    }
}

int main() {
    int n, m;
    //cout << "Enter the number of rows (n) and columns (m): ";
    cin >> n >> m;

    int matrix[100][100];
    //cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result[10000];  // Assuming the maximum number of elements is 10,000 for a 100x100 matrix
    spiralOrder(matrix, n, m, result);

    //cout << "Spiral order of the matrix is:" << endl;
    for (int i = 0; i < n * m; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-08-29 12:33:23


```
// Write the code from scratch, no boilerplate is required
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
    
    cin >> m >> n ;
    int arr1[m];
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    int arr2[n];
    for (int i = 0; i < n; i++) {
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

## Submission at 2024-08-29 12:34:30


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

## Submission at 2024-08-30 05:13:47


```
// Write code from scratch
import java.util.Scanner;

public class MaxArray{
    public static void main(String[] args)
    {
        int[] numbers = [1, 3, 6, 7, 10, 2, 4, 5, 8, 9]

        int max = find Max (numbers);

        System.out.println("The maximum value in array is:");

    }
    public static int(int[] array)
    {
        int max = array[0];

        for int (i = 1; i = array.length; i++)
        {
            if (array[i] = max)
            {
                max = array[i];
            }
        }
    }   
}
```

## Submission at 2024-08-30 05:27:25


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;

public class Main{
    public static void main(String[] args)
    {
        double x = 2, 0;
        int n = 4;

        doble result = Math.Pow(x,n);

        System.out.println( x + " raised to the power of" + n + " is" + result);


    }
}
```

## Submission at 2024-08-30 05:27:51


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;

public class Main{
    public static void main(String[] args)
    {
        double x = 2, 0;
        int n = 4;

        doble result = Math.Pow(x,n);

        System.out.println( x + " raised to the power of" + n + " is" + result);


    }
}
```

## Submission at 2024-08-30 05:33:47


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
import Math.Pow;

public class Main{
    public static void main(String[] args)
    {
        double x = 2;
        int n = 4;

        double result = Math.Pow(x,n);

        System.out.println( x + " raised to the power of" + n + " is" + result);


    }
}
```

## Submission at 2024-08-30 05:51:00


```
class Main {
    public static void main (String args []) 
    {
        
        Scanner scanner = new Scanner (System.in);
        
        string original = Scanner.nextLine();

        boolean isPalindrome = isPalindrome(original);
        {
            if (isPalindrome)
            {
                System.out.println("YES");
            }
            else 
            {
                System.out.println("NO");
            }
        }


    }
}
```

## Submission at 2024-11-22 06:04:09


```
/* write code from scratch */
public static void Main(String[] args){
    int n = 0;
    for(int i=1, i<=n, i++){
        for(int j=i, j<=i, j--){
            System.out.println(' ');
        }
        for(int k=i, k<=i, k++){
            System.out.println(' ');
        }
        System.out.println("*");
    }
}
```

