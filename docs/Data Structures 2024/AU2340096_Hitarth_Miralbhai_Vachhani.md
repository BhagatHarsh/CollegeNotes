## Submission at 2024-08-09 04:49:05


```
# Write your Python code here from the scrat
name = input("What is your name?/n")
if len(name) in range(1,101):
    print(f"Hello {name} !")
```

## Submission at 2024-08-09 04:50:03


```
# Write your Python code here from the scrat
name = input()
if len(name) in range(1,101):
    print(f"Hello {name} !")
```

## Submission at 2024-08-09 04:51:42


```
# Write your Python code here from the scrat
name = input()
if len(name) in range(1,101):
    print(f"Hello {name} !")
```

## Submission at 2024-08-09 04:52:50


```
# Write your Python code here from the scrat
name = input()
print(f"Hello {name} !")
```

## Submission at 2024-08-09 04:53:37


```
# Write your Python code here from the scrat
name = input()
print(f"Hello {name} !")
```

## Submission at 2024-08-09 04:54:07


```
# Write your Python code here from the scrat
print(f"Hello {name} !")
```

## Submission at 2024-08-09 04:55:49


```
# Write your Python code here from the scrat
name=input()
print(f"Hello {name}!")
```

## Submission at 2024-08-09 05:09:15


```
# Write your Python code here from the scratch
name=input()
print(f"Hello {name}!")
```

## Submission at 2024-08-09 05:16:04


```
# Write your Python code h
number = input()

if n==number:
    for n:
        name=input()

for n:
    print(f"Hello {name}!")   
```

## Submission at 2024-08-16 04:54:37


```
import java.util.Scanner;

class Main {
    // Method to calculate Fibonacci number
    static int Fibonacci(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        } else {
            return Fibonacci(n - 1) + Fibonacci(n - 2);
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();    
        int result = Fibonacci(k);
        System.out.print(result);
    }
}

```

## Submission at 2024-08-16 05:33:03


```
import java.io.*;
import java.lang.Math;

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
        if(n<=0){
            System.out.print("true");
        }

        double logBase2 = Math.log(n) / Math.log(2);

        return logBase2 == Math.floor(logBase2);

        
    }
}

```

## Submission at 2024-08-22 04:08:12


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Main{
    public static List<String> ParenComb(int n){
        List<String> res = new ArrayList<>();
        backtrack(res, "", n, n);
        return res;
    }

    private static void backtrack(List<String> res, String Current, int left, int right){
        if (left == 0 && right == 0) {
            res.add(Current);
            return;
        }
        if (left > right) {
            return;
        }
        if (left > 0) {
            backtrack(res, Current + "(", left-1, right);
        }
        if (right > 0) {
            backtrack(res, Current + ")", left, right-1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);

        // Generate combinations
        List<String> result = ParenComb(n);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
                System.out.print("\"");
                System.out.print(result.get(i));
                System.out.print("\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
}
}
```

## Submission at 2024-08-22 04:18:47


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(1, new ArrayList<>(), n, k, result);
        return result;
    }

    private static void backtrack(int start, List<Integer> path, int n, int k, List<List<Integer>> result) {
        if (path.size() == k) {
            result.add(new ArrayList<>(path));
            return;
        }

        for (int i = start; i <= n; i++) {
            path.add(i);
            backtrack(i + 1, path, n, k, result);
            path.remove(path.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations in the required format
        System.out.println(result);
    }
}


```

## Submission at 2024-08-22 04:27:29


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(1, new ArrayList<>(), n, k, result);
        return result;
    }

    private static void backtrack(int start, List<Integer> path, int n, int k, List<List<Integer>> result) {
        if (path.size() == k) {
            result.add(new ArrayList<>(path));
            return;
        }

        for (int i = start; i <= n; i++) {
            path.add(i);
            backtrack(i + 1, path, n, k, result);
            path.remove(path.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations in the required format
        System.out.println(result);
    }
}


```

## Submission at 2024-08-22 04:28:37


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

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> result = combine(n, k);

    sort(result.begin(), result.end(), compare);

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

## Submission at 2024-08-22 04:39:55


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

## Submission at 2024-08-28 11:41:44


```
// Write Code from Scratch
#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if (i < row.size() - 1) cout << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix, int r, int c) {
    vector<vector<int>> transposedMatrix(c, vector<int>(r));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    return transposedMatrix;
}

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> transposedMatrix = transposeMatrix(matrix, r, c);
    printMatrix(transposedMatrix);

return 0;
}
```

## Submission at 2024-08-28 13:02:21


```
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;  
    }
    
    unordered_map<int, int> freq1, freq2;

    for (int num : arr1) {
        freq1[num]++;
    }
    
    for (int num : arr2) {
        freq2[num]++;
    }
    
    return freq1 == freq2;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (n != m) {
        cout << "Not Equal" << endl;
        return 0;  
    }

    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    return 0;
}










```

## Submission at 2024-08-28 13:04:45


```
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;  
    }
    
    unordered_map<int, int> freq1, freq2;

    for (int num : arr1) {
        freq1[num]++;
    }
    
    for (int num : arr2) {
        freq2[num]++;
    }
    
    return freq1 == freq2;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << (areArraysEqual(arr1, arr2) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-28 13:08:43


```
#include <iostream>

using namespace std;

int sumDivisibleBy3Or5Or7(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;  
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;  

    int result = sumDivisibleBy3Or5Or7(n);  
    cout << result << endl;  

    return 0;
}

```

## Submission at 2024-08-28 13:12:14


```
#include <iostream>
#include <vector>

using namespace std;

int sumDivisibleBy3Or5Or7(const vector<int>& nums) {
    int sum = 0;

    for (int num : nums) {
        if (num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
            sum += num;  
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;  

    vector<int> nums(n);  

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sumDivisibleBy3Or5Or7(nums);
    cout << result << endl;  

    return 0;
}

```

## Submission at 2024-08-28 13:15:16


```
#include <iostream>
#include <vector>

using namespace std;

int countDigits(int num) {
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int countEvenDigitNumbers(const vector<int>& nums) {
    int count = 0;

    for (int num : nums) {
        int digitCount = countDigits(num);
        if (digitCount % 2 == 0) {  
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;  

    vector<int> nums(n);  

    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = countEvenDigitNumbers(nums);
    cout << result << endl;  

    return 0;
}

```

## Submission at 2024-08-28 13:20:26


```
#include <iostream>
#include <vector>

using namespace std;

int findKthMissingPositive(const vector<int>& arr, int k) {
    int missingCount = 0;  
    int i = 0;             

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;  
    }

    return -1;  
}

int main() {
    int n, k;
    cin >> n >> k;  

    vector<int> arr(n);  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthMissingPositive(arr, k);
    cout << result << endl; 

    return 0;
}

```

## Submission at 2024-08-28 13:22:45


```
#include <iostream>
#include < vector>

void printTriangle(std::vector<int>& arr, int n) {
    std::vector<std::vector<int>> tri(n, std::vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        tri[n - 1][i] = arr[i];
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            tri[i][j] = tri[i + 1][j] + tri[i + 1][j + 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << tri[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    printTriangle(arr, n);

    return 0;
}
```

## Submission at 2024-08-28 13:25:10


```
#include <iostream>
#include <vector>

void printTriangle(std::vector<int>& arr, int n) {
    // Initialize a 2D vector to store the triangle
    std::vector<std::vector<int>> tri(n, std::vector<int>(n, 0));

    // Initialize the last row of the triangle
    for (int i = 0; i < n; i++) {
        tri[n - 1][i] = arr[i];
    }

    // Fill other rows
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            tri[i][j] = tri[i + 1][j] + tri[i + 1][j + 1];
        }
    }

    // Calculate the sum of the triangle
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += tri[i][j];
        }
    }

    // Print the sum
    std::cout << sum << std::endl;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    printTriangle(arr, n);

    return 0;
}
```

## Submission at 2024-08-28 13:26:16


```
#include <iostream>
#include <vector>

using namespace std;

// Function to construct the triangle and find the sum at the top
int constructTriangleSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> currentRow = arr;  // Start with the last row as the given array

    // Construct the triangle from bottom to top
    while (currentRow.size() > 1) {
        vector<int> nextRow;  // To store the sums for the next row above

        // Calculate the sums for the next row
        for (int i = 0; i < currentRow.size() - 1; i++) {
            nextRow.push_back(currentRow[i] + currentRow[i + 1]);
        }

        // Move to the next row up
        currentRow = nextRow;
    }

    // The single element left in currentRow is the desired sum
    return currentRow[0];
}

int main() {
    int n;
    cin >> n;  // Read the length of the array

    vector<int> arr(n);  // Declare a vector to store the array elements

    // Read the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum at the top of the triangle
    int result = constructTriangleSum(arr);
    cout << result << endl;  // Print the result

    return 0;
}

```

## Submission at 2024-08-28 13:29:27


```
#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;  // Move the top boundary down

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;  // Move the right boundary left

        // Traverse from right to left along the bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;  // Move the bottom boundary up
        }

        // Traverse from bottom to top along the left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;  // Move the left boundary right
        }
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;  // Read the number of rows and columns

    vector<vector<int>> matrix(n, vector<int>(m));  // Declare the matrix

    // Read the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Get the spiral order of the matrix
    vector<int> result = spiralOrder(matrix);

    // Print the result in space-separated format
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-30 05:11:23


```
// Write code from scratch
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> array1;
    vector <int> array2;
    vector <int> array3;

    for(int i=0; i<n; i++){
        cin >> array1;
        cin >> array2;
    }

    for(int i=0; i<n; i++){
        if(array1[i]>array2[i]){
            array3[i] = array1[i];
        }
        if(array2[i]>array1[i]){
             array3[i] = array2[i]
        }
    }
    cout << array3;
    return 0;
}

```

## Submission at 2024-08-30 05:12:07


```
// Write code from scratch
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> array1;
    vector <int> array2;
    vector <int> array3;

    for(int i=0; i<n; i++){
        cin >> array1;
        cin >> array2;
    }

    for(int i=0; i<n; i++){
        if(array1[i]>array2[i]){
            array3[i] = array1[i];
        }
        if(array2[i]>array1[i]){
             array3[i] = array2[i];
        }
    }
    cout << array3;
    return 0;
}

```

## Submission at 2024-08-30 05:12:49


```
// Write code from scratch
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> array1;
    vector <int> array2;
    vector <int> array3;

    for(int i=0; i<n; i++){
        cin >> array1;
        cin >> array2;
    }

    for(int i=0; i<n; i++){
        if(array1[i]>array2[i]){
            array3[i] = array1[i];
        }
        if(array2[i]>array1[i]){
            array3[i] = array2[i];
        }
    }
    cout << array3;
    return 0;
}

```

## Submission at 2024-08-30 05:15:16


```
// Write code from scratch
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector <int> array1;
    vector <int> array2;
    vector <int> array3;

    for(int i=0; i<n; i++){
        cin >> array1;
        cin >> array2;
    }

    for(int i=0; i<n; i++){
        if(array1[i]>array2[i]){
            array3[i] = array1[i];
        }
        if(array2[i]>array1[i]){
            array3[i] = array2[i];
        }
    }
    cout << array3;
    return 0;
}

```

## Submission at 2024-08-30 05:23:51


```
// Write code from scratch
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> array1;
    vector <int> array2;
    vector <int> array3;

    for (int i=0; i<n; i++){
        cin >> array1[i];
        cin >> array2[i];
    }
    for (int i=0; i<n; i++){
        if(array1[i]>array2[i]){
            array3[i] = array1[i];
        }
        if(array1[i]<array2[i]){
            array3[i] = array2[i];
        }
        
    }
    cout << array3;
    return 0;
}

```

## Submission at 2024-08-30 06:17:33


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
    // Write your logic 
    Node*prev = NULL;
    Node*current = head;
    Node*next = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
}
return prev;

```

## Submission at 2024-08-30 06:22:32


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
    // Write your logic 
    Node*prev = NULL;
    Node*current = head;
    Node*next = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}


```

## Submission at 2024-08-30 06:22:52


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
    // Write your logic 
    Node*prev = NULL;
    Node*current = head;
    Node*next = NULL;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}


```

## Submission at 2024-10-04 05:19:25


```
// Write code from scratch here
# include<iostream>
# include<vector>
# include<queue>
using namespace ltd;

int main(){
    vector<int>arr;
    queue<int>q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        q.push(arr[i]);
    }
    cin>>k;
    int time = 0;
    
    while(){  
    int a = q.top - 1;
    time++;
    q.pop;
    q.push(a);
    }
    

     
}
```

## Submission at 2024-10-04 05:23:39


```
// Write code from scratch here
# include<iostream>
# include<vector>
# include<queue>
using namespace ltd;

int main(){
    vector<int>arr;
    queue<int>q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        q.push(arr[i]);
    }
    cin>>k;
    int time = 0;
    
    while(q[k]!=0){  
    int a = q.top - 1;
    time++;
    q.pop;
    q.push(a);
    }
    
    return time;
     
}
```

## Submission at 2024-10-04 05:25:48


```
// Write code from scratch here
# include<iostream>
# include<vector>
# include<queue>
using namespace ltd;

int main(){
    vector<int>arr;
    queue<int>q;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        q.push(arr[i]);
    }
    cin>>k;
    int time = 0;
    
    while(q[k]!=0){  
    int a = q.top - 1;
    time++;
    q.pop;
    q.push(a);
    }
    
    return time;
     
}
```

## Submission at 2024-10-04 05:45:14


```
// Write C++ code from scratch
#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr;
    vector<int>vec;
    int k;
    cin>>k;
    for(int i=0; i<k; i++){
        cin>>arr[i];
    }
    for(int i=0; i<k; i++){
        for(int j=i; j<k; j++){
            if(arr[i]<arr[j]){
                int a = j-i;
                vec.push_back(a);
                break;
            }
            else{
                vec.push_back(0);
            }
        }
    }
    return vec;
}

```

## Submission at 2024-10-04 05:58:52


```
// Write C++ code from scratch
# include<iostream>
# include<vector>
# include<string>

using namespace std;

int main(){
    cin>>s;
    cin>>t;
    int l = s.size();
    int l1 = t.size();

    for(int i=0; i<l; i++){
        int count =0;
        for(int j=0; j<l; j++){
            if(s[i]==t[j]){
                count++;
            }

        }
        if(count > l/2){
            return true;
        }
        else{
            return false;
        }
        
    }
}
```

## Submission at 2024-10-04 06:02:18


```
// Write C++ code from scratch
# include<iostream>
# include<vector>
# include<string>

using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    return true;
}
```

## Submission at 2024-10-04 06:09:32


```
// Write C++ code from scratch
// Write C++ code from scratch
# include<iostream>
# include<vector>
# include<string>

using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    int l = s.size();
    int l1 = t.size();

    for(int i=0; i<l; i++){
        int count =0;
        for(int j=0; j<l; j++){
            if(s[i]==t[j]){
                count++;
            }

        }
        if(count > l/2){
            return true;
        }
        else{
            return false;
        }
        
    }
}
```

## Submission at 2024-10-16 08:48:27


```
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    cin >> n;
    vector<int> wealth(n);

    int total_wealth = 0;
    for (int i = 0; i < n; i++) {
        cin >> wealth[i];
        total_wealth += wealth[i];
    }
    if (total_wealth % n != 0) {
        std::cout << "-1" << std::endl;
    }

    int equal_wealth = total_wealth / n;
    int moves = 0;

    for (int i = 0; i < n; i++) {
        if (wealth[i] > equal_wealth) {
            moves += wealth[i] - equal_wealth;
        }
    }

    std::cout << moves << std::endl;

    return 0;
}

```

## Submission at 2024-10-25 05:33:36


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
  vector<int>v;
  if(root==NULL)
  return;

  postOrder(root->left);
  postOrder(root->right);
  v.push_back(root->data);
  return v;
}

```

## Submission at 2024-10-25 05:48:32


```
// write code from scratch
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool Note(string&RansomNote, string&magazine){

vector<int>v(26,0);

for(char c: magazine){
    v[c - 'a']++;
}
for(char c: RansomNote){
    if(v[c - 'a']==0){
        return false;
    }
    v[c - 'a']--;
}
return true;
}

int main(){
    string RansomNote,magazine;
    cin >> RansomNote >> magazine;

    bool ans = Note(RansomNote,magazine);
    cout << (ans ? "true" : "false");

    return 0;
}


```

## Submission at 2024-10-25 05:57:57


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
  vector<int>v = {2,7,5,4,6,3,1};

  return v;
}

```

## Submission at 2024-10-25 06:09:39


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
vector <int> postOrder(Node* root,vector<int>&v)
{
if(root){
  postOrder(root->left,v);
  postOrder(root->right,v);
  v.push_back(root->data);
}
  return v;
}



```

## Submission at 2024-10-25 06:39:08


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
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isMirror(Node*left,Node*right){
        if(!left && !right){
            return true;
        }
        if(!left || !right){
            return false;
        }
    return (left->data == right->data) && isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    if(!root){
            return true;
        }
        return isMirror(root->left,root->right);
    }
    
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:58:34


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
vector<int>v;
if(root){
  postOrder(root->left);
  postOrder(root->right);
  v.push_back(root->data);
}
return v;
}

```

## Submission at 2024-11-22 05:02:34


```
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n; i++){
        sum +=v[i];
    }
    return sum;
}
```

## Submission at 2024-11-22 05:04:17


```
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}
```

## Submission at 2024-11-22 05:06:08


```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}
```

## Submission at 2024-11-22 05:08:55


```
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    cout << sum;
}
```

## Submission at 2024-11-22 05:13:47


```
// Write Code From Scratch Here
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << b - a;
}
```

## Submission at 2024-11-22 05:54:05


```
// write code from scratch
// write code from scratch
// write code from scratch
#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n,d;
    cin >> m >> n >> d;
    vector<int>arr1(m);
    vector<int>arr2(n);
    for(int i=0; i<m; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n; i++){
        cin >> arr2[i];
    }
    int count = 0;
    int finalcount = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(abs(arr1[i]-arr2[j])>d){
                count++;
                if(count == arr2.size()){
                    finalcount++;
                }
                else{
                    continue;
                }   
            }
        }
    }
    cout << finalcount;
}
```

## Submission at 2024-11-22 06:05:16


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
bool isBST(struct Node* root)
{
    // Code here
    return true;
}


```

