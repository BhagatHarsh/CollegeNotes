## Submission at 2024-08-09 04:53:36


```
# Write your Python code here from the scratch
name = input(" ")
print("hello ", name,"!")
```

## Submission at 2024-08-09 05:04:52


```
# Write your Python code here from the scratch
name = input(" ")
if len(name) >1 and len(name)<100:
   print("hello ", name,"!")
else:
   print("invalid name")

```

## Submission at 2024-08-09 05:06:11


```
# Write your Python code here from the scratch
name = input(" ")
if len(name) >=1 and len(name)<=100:
   print("hello ", name,"!")
else:
   print("invalid name")

```

## Submission at 2024-08-09 05:13:09


```
# Write your Python code here from the scratch
name = input("")
if (len(name)>=1 and len(name)<=100):
  print("hello "+name+"!")
else:
    print("invalid name")  

```

## Submission at 2024-08-09 05:15:14


```
# Write your Python code here from the scratch
name = input()
if (len(name)>=1 and len(name)<=100):
  print("hello "+name+"!")
else:
    print("invalid name")  

```

## Submission at 2024-08-09 05:16:36


```
# Write your Python code here from the scratch
name = input()

if (len(name)>=1 and len(name)<=100):
  print("hello "+name+"!")
else:
    print("invalid name")  


```

## Submission at 2024-08-09 05:18:20


```
# Write your Python code here from the scratch
name = input()

if (len(name)>=1 and len(name)<=100):
  print("Hello "+name+"!")
else:
    print("invalid name")  


```

## Submission at 2024-08-09 05:18:57


```
# Write your Python code here from the scratch
name = input()

if (len(name)>=1 and len(name)<=100):
  print("Hello "+name+"!")
else:
    print("invalid name")  


```

## Submission at 2024-08-09 05:31:06


```
# Write your Python code here
n = int(input())
if (n>=1 and n<=100):
   for i in range(0,n):
    name = input()
    if (len(name)>=1 and len(name)<=100):
       print("Hello "+name+"!")
    else:
      print("invalid name")   
else:
   print("enter a valid number")

```

## Submission at 2024-08-09 05:32:28


```
# Write your Python code here
n = int(input())
if (n>=1 and n<=100):
   for i in range(0,n):
    name = input()
    if (len(name)>=1 and len(name)<=100):
       print("Hello "+name+"!")
    else:
      print("invalid name")   
else:
   print("enter a valid number")

```

## Submission at 2024-08-09 05:34:32


```
# Write your Python code here
n = int(input())
if (n>=1 and n<=100):
   for i in range(0,n):
    name = input()
    if (len(name)>=1 and len(name)<=100):
       print("Hello "+name+"!")
    else:
      print("invalid name")   
else:
   print("enter a valid number")

```

## Submission at 2024-08-09 05:36:22


```
# Write your Python code here
n = int(input())
if (n>=1 and n<=100):
   for i in range(0,n):
    name = input()
    if (len(name)>=1 and len(name)<=100):
       print("Hello "+name+"!")
    else:
      print("invalid name")   
else:
   print("enter a valid number")

```

## Submission at 2024-08-16 04:56:38


```
def fibonacci(x:int) -> int:
    # write your logic here
     
    if(x<=1):
      return x
    else:  
      return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:47:21


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if(n==1):
       return "true"
    if(n<=0 or n%2 != 0):
        return "false"
    else:
        return is_power_of_two(n/2)
      
          

def main():
    n = int(input().strip())
    print(is_power_of_two(n))
         
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:47:47


```
def is_power_of_two(n:int) -> str:
    # Write your logic here
    if(n==1):
       return "true"
    if(n<=0 or n%2 != 0):
        return "false"
    else:
        return is_power_of_two(n/2)
      
          

def main():
    n = int(input().strip())
    print(is_power_of_two(n))
         
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 12:48:48


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {  //base case 
        result.push_back(current);
        return;
    }

    // Recursive case
    for (int i = start; i <= n; ++i) {
        current.push_back(i); // Adding  the current number to the combination
        combine(i + 1, k, n, current, result); // Recurse with the next number
        current.pop_back(); // removing the last number
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

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

## Submission at 2024-08-22 12:50:07


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {  //base case 
        result.push_back(current);
        return;
    }

    // Recursive case
    for (int i = start; i <= n; ++i) {
        current.push_back(i); // Adding  the current number to the combination
        combine(i + 1, k, n, current, result); // Recurse with the next number
        current.pop_back(); // removing the last number
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

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

## Submission at 2024-08-22 12:54:05


```
#include <iostream>

#include <vector>

#include <sstream>

#include <algorithm>



using namespace std;



void permute(vector<int>& nums, vector<vector<int>>& result, int start) {

    if (start >= nums.size()) {

        result.push_back(nums);

        return;

    }

    

    for (int i = start; i < nums.size(); ++i) {

        swap(nums[start], nums[i]);

        

        permute(nums, result, start + 1);

        

        swap(nums[start], nums[i]);

    }

}



// Function to generate all permutations and return them in sorted order

vector<vector<int>> permuteUnique(vector<int>& nums) {

    vector<vector<int>> result;

    permute(nums, result, 0);

    

    // Sort the result to ensure permutations are in sorted order

    sort(result.begin(), result.end());

    

    return result;

}



// Comparator function for sorting permutations

bool compare(const vector<int>& a, const vector<int>& b) {

    if (a.size() != b.size()) return a.size() < b.size();

    for (size_t i = 0; i < a.size(); ++i) {

        if (a[i] != b[i]) return a[i] < b[i];

    }

    return false;

}



int main() {

    string line;

    getline(cin, line);

    

    istringstream iss(line);

    vector<int> nums;

    int num;

    

    while (iss >> num) {

        nums.push_back(num);

    }

    

    vector<vector<int>> permutations = permuteUnique(nums);

    

    // Sort permutations based on size and first element

    sort(permutations.begin(), permutations.end(), compare);

    

    // Print permutations

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

## Submission at 2024-08-22 13:04:47


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

## Submission at 2024-08-29 13:15:08


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    unordered_map<int, int> countMap1, countMap2;

    for (int num : arr1) {
        countMap1[num]++;
    }

    for (int num : arr2) {
        countMap2[num]++;
    }

    // Compare the frequency maps
    return countMap1 == countMap2;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;

    vector<int> arr1(len1);
    for (int i = 0; i < len1; ++i) {
        cin >> arr1[i];
    }

    vector<int> arr2(len2);
    for (int i = 0; i < len2; ++i) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-29 13:15:15


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    unordered_map<int, int> countMap1, countMap2;

    for (int num : arr1) {
        countMap1[num]++;
    }

    for (int num : arr2) {
        countMap2[num]++;
    }

    // Compare the frequency maps
    return countMap1 == countMap2;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;

    vector<int> arr1(len1);
    for (int i = 0; i < len1; ++i) {
        cin >> arr1[i];
    }

    vector<int> arr2(len2);
    for (int i = 0; i < len2; ++i) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-29 14:55:45


```
#include <iostream>
using namespace std;

void array(int dest[], const int src[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int sum(int arr[], int n) {
    int* p = new int[n];  // Allocate memory dynamically for the temporary array
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            p[i] = arr[i] + arr[i + 1];
        }
        array(arr, p, n - 1);
        n--;
    }
    int result = arr[0];
    delete[] p;  // Free the dynamically allocated memory
    return result;
}

int main() {
    int n;
    int b[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    cout << sum(b, n) << endl;
    return 0;
}
```

## Submission at 2024-08-29 14:55:48


```
#include <iostream>
using namespace std;

void array(int dest[], const int src[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int sum(int arr[], int n) {
    int* p = new int[n];  // Allocate memory dynamically for the temporary array
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            p[i] = arr[i] + arr[i + 1];
        }
        array(arr, p, n - 1);
        n--;
    }
    int result = arr[0];
    delete[] p;  // Free the dynamically allocated memory
    return result;
}

int main() {
    int n;
    int b[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    cout << sum(b, n) << endl;
    return 0;
}
```

## Submission at 2024-08-29 14:58:21


```
#include<iostream>
using namespace std;

int sum(int a){
    int i,sum=0;
    for(i=1;i<=a;i++){
        if(i%3==0){
            sum=sum+i;
        }
        else if(i%5==0){
            sum=sum+i;
        }
        else if(i%7==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main(){
    int n;
    cout<<" ";
    cin>>n;
    cout<<sum(n);
    
    
    
}
```

## Submission at 2024-08-29 14:59:51


```
#include<iostream>
using namespace std;

int sum(int a){
    int i,sum=0;
    for(i=1;i<=a;i++){
        if(i%3==0){
            sum=sum+i;
        }
        else if(i%5==0){
            sum=sum+i;
        }
        else if(i%7==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main(){
    int n;
    1 <= n <= 1000;
    cout<<" ";
    cin>>n;
    cout<<sum(n);
    
    
    
}
```

## Submission at 2024-08-29 15:01:36


```
#include <iostream>
using namespace std;

void spiralTraversal(int n, int m, int matrix[100][100]) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; // move the top boundary down
        
        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; // move the right boundary left
        
        // Traverse from right to left on the bottom row, if still valid
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; // move the bottom boundary up
        }
        
        // Traverse from bottom to top on the left column, if still valid
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; // move the left boundary right
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100]; // assuming the constraints guarantee maximum size of 100x100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    spiralTraversal(n, m, matrix);

    return 0;
}
```

## Submission at 2024-08-29 15:02:24


```
#include <iostream>
using namespace std;

void spiralTraversal(int n, int m, int matrix[100][100]) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; // move the top boundary down
        
        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; // move the right boundary left
        
        // Traverse from right to left on the bottom row, if still valid
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; // move the bottom boundary up
        }
        
        // Traverse from bottom to top on the left column, if still valid
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; // move the left boundary right
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100]; // assuming the constraints guarantee maximum size of 100x100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    spiralTraversal(n, m, matrix);

    return 0;
}
```

## Submission at 2024-08-30 02:43:09


```
#include<iostream>
using namespace std;

int sum(int a){
    int i,sum=0;
    for(i=1;i<=a;i++){
        if(i%3==0){
            sum=sum+i;
        }
        else if(i%5==0){
            sum=sum+i;
        }
        else if(i%7==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<sum(n);
    
    
    
}
```

## Submission at 2024-08-30 02:46:16


```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to count the number of digits in a number
int countDigits(int num) {
    return (int)log10(num) + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
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

## Submission at 2024-08-30 02:47:35


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

## Submission at 2024-08-30 02:59:11


```
#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, currentNum = 1, i = 0;

    // Loop until we find the Kth missing number
    while (missingCount < k) {
        if (i < n && arr[i] == currentNum) {
            // If the current number is in the array, move to the next number
            i++;
        } else {
            // If the current number is missing, increment the missing count
            missingCount++;
        }
        // If we have found the Kth missing number, return it
        if (missingCount == k) {
            return currentNum;
        }
        currentNum++;
    }

    return -1;  // Just a fallback, in case the loop doesn't return a value
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthMissing(arr, n, k);
    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-30 03:12:34


```
#include <iostream>

long long sumOfMultiples(int n, int d) {
    // Number of multiples of d up to n
    int k = n / d;
    // Sum of first k multiples of d is d * (1 + 2 + ... + k)
    return d * (long long)k * (k + 1) / 2;
}

long long sumOfDivisibleNumbers(int n) {
    // Calculate sums of multiples for 3, 5, 7 and their lcm combinations
    long long sum3 = sumOfMultiples(n, 3);
    long long sum5 = sumOfMultiples(n, 5);
    long long sum7 = sumOfMultiples(n, 7);
   

    // Apply the principle of inclusion and exclusion
    long long totalSum = (sum3 + sum5 + sum7
                          );
    return totalSum;
}

int main() {
    int n;
     std::cout << " ";
    std::cin >> n;

    std:: cout
              
              << sumOfDivisibleNumbers(n) << std::endl;

    return 0;
}
```

## Submission at 2024-08-30 03:56:33


```
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    std::vector<int> ar;

    for (int i = 1; i <= n; ++i) {
        ar.push_back(i);
    }

    if (n >= 1 && n <= 1000) {
        for (int i = 0; i < n; ++i) {
            if (ar[i] % 3 == 0 || ar[i] % 5 == 0 || ar[i] % 7 == 0) {
                sum += ar[i];
            }
        }
        std::cout << sum << std::endl;
    } else {
        std::cout << "invalid input" << std::endl;
        return 0;
    }

    return 0;
}
```

## Submission at 2024-08-30 04:52:15


```
// Write code from scratch
#include <iostream>
using namespace std;
 
int palindrome(){} 
int main(){
    int s;
    cin>> s;
    len(s)
    
}
```

## Submission at 2024-08-30 05:07:15


```
// Write code from scratch
#include <iostream>
using namespace std;

int palindrome( int i, int j,char x, char y){
    for (i=1;i<=len(s)/2);{
        for (j=len(s);j<=len(s)/2);{
             if(x[i]==y[j]);{
                return 0;
        }
    }
} 
}
int main(){
     int s;
    cin>> s;
    palindrome();
}
```

## Submission at 2024-08-30 05:08:41


```
// Write code from scratch
#include <iostream>
using namespace std;

int palindrome( int i, int j,char x, char y){
    for (i=1;i<=len(s)/2);{
        for (j=len(s);j<=len(s)/2);{
             if(x[i]==y[j]);{
                return 0;
        }
    }
} 
}
int main(){
     int s;
    cin>> s;
    palindrome(){
        cout<< "YES"<<end1;
        return 0;
    }
}
```

## Submission at 2024-08-30 05:21:45


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;


int Pow(int x, int n){
  
    int z = x^n;
 
  return 0;
}
int main(){
    
  Pow(x,n,z){
    cin>> x;
    cin>> n;
    cout<< z;
    return 0;
  }
}
```

## Submission at 2024-08-30 05:23:03


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;


int Pow(int x, int n){
  
    int z = x^n;
 
  return 0;
}
int main(){
    
  Pow(int x, int y, int z){
    cin>> x;
    cin>> n;
    cout<< z;
    return 0;
  }
}
```

## Submission at 2024-08-30 05:42:04


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;


int Pow(int x, int n){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
    int z = x^n;
 
  return 0;
}
int main(){
    
  Pow(x, n, z){
    cin>> x;
    cin>> " ";
    cin>> n;
    cout<< z;
    return 0;
  }
}
```

## Submission at 2024-08-30 05:45:19


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;


int Pow(int x, int n){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
    int z = x^n;
    
  return 0;
}
int main(){
    
  Pow(int x, int n, int z){
    cin>> x;
    cin>> " ";
    cin>> n;
    cout<< z;
    return 0;
  }
}
```

## Submission at 2024-08-30 05:55:46


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;
int Pow(int x, int n){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
    int z = x^n;
    
  return 0;
}
int main(){
  
 Pow(){
    cin>> x;
    cin>> " ";
    cin>> n;
    cout<< z;
    return 0;
  }
}
```

## Submission at 2024-08-30 06:09:27


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
    int z = x*n;
    
  return 0;
}
int main(){
  
int Pow(int x,int n,int z);{
  int x;
  int n;
  int z;
    cin >> x;
    cin >> n;
    cout << z;

  }
      return 0;
}
```

## Submission at 2024-08-30 06:16:53


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n, int z){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
     z = x^.(n);
    
  return 0;
}
int main(){
  
int Pow(int x,int n,int z);{
  int x;
  int n;
  int z;
    cin >> x;
    cin >> n;
     z = x^.(n);
    cout << z ;

  }
      return 0;
}
```

## Submission at 2024-08-30 06:17:04


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n, int z){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
     z = x^(n);
    
  return 0;
}
int main(){
  
int Pow(int x,int n,int z);{
  int x;
  int n;
  int z;
    cin >> x;
    cin >> n;
     z = x^(n);
    cout << z ;

  }
      return 0;
}
```

## Submission at 2024-08-30 06:26:43


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n, int z){
  if (-100 < x < 100){
    return 0;
  }
  if(-1000 <= n <= 1000){
    return 0;}
if(-10000 <= x^n <= 10000){
  return 0;}
     z = x^(n);
    
  return 0;
}
int main(){
  
int Pow(int x,int n,int z);{
  int x;
  int n;
  int z;
    cin >> x;
    cin >> n;
     z = x^(n);
    cout << z ;

  }
      return 0;
}

```

## Submission at 2024-08-30 13:00:31


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
#include <cmath> // For pow function
using namespace std;

int Pow(int x, int n) {
    // Error handling for input ranges
    if (x < -100 || x > 100) {
        
        return 0;
    }
    if (n < -1000 || n > 1000) {
        
        return 0;
    }

    // Compute the power using pow function
    double result = pow(x, n);

    // Check if the result is within the acceptable range
    if (result < -10000 || result > 10000) {
        
        return 0;
    }

    // Return the result rounded to the nearest integer
    return static_cast<int>(round(result));
}

int main() {
    int x, n;

    cin >> x;

    cin >> n;

    int result = Pow(x, n);

    // Output the result
    if (result != 0) {
        cout << " " << result << endl;
    }

    return 0;
}

```

## Submission at 2024-08-30 13:05:52


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
#include <cmath> // For pow function
using namespace std;

int Pow(int x, int n) {
    // Error handling for input ranges
    if (x < -100 || x > 100) {
        
        return 0;
    }
    if (n < -1000 || n > 1000) {
        
        return 0;
    }

    // Compute the power using pow function
    int result = pow(x, n);

    // Check if the result is within the acceptable range
    if (result < -10000 || result > 10000) {
        
        return 0;
    }

    // Return the result rounded to the nearest integer
    return result;
}

int main() {
    int x, n;

    cin >> x;

    cin >> n;

    int result = Pow(x, n);

    // Output the result
    if (result != 0) {
        cout << " " << result << endl;
    }

    return 0;
}

```

## Submission at 2024-10-04 05:13:46


```
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    if(s.length() == t.length()){
    for(int i = 0;i<=s.length();i++){
        for(int j=0;j<=t.length();j++){
        if(s[i]==t[j]){
           cout<< "true";
        }
        else{
            return 0;
        }
        } 
    }
 }
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    cout<< check_anagram;
    return 0;
}
```

## Submission at 2024-10-04 05:31:38


```
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
 if(s.length() == t.length()){
    for(int i = 0;i<=s.length();i++){
        for(int j=0;j<=t.length();j++){
         if(char[s]==char[t]){
           return 1;
         }
         
        } 
    }
 }
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    cout<< x;
}
```

## Submission at 2024-10-04 05:51:07


```
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;

 if(s.length() == t.length()){
    for(int i = 0;i<=s.length();i++){
        for(int j=0;j<=t.length();j++){
         if(s[c]==t[c]){
           return 1;
         }
         
        } 
    }
 }
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    cout<< x;
}

```

## Submission at 2024-10-04 05:52:18


```
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;

 if(s.length() == t.length()){
    for(int i = 0;i<=s.length();i++){
        for(int j=0;j<=t.length();j++){
         if(s[c]==t[c]){
           return 1;
         }
         
        } 
    }
 }
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    if(x==1){
        cout<< "true";
    }
}

```

## Submission at 2024-10-04 06:05:04


```
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;

 if(s.length() == t.length()){
   for(int i = 0;i<=s.length();i++){
     for(int j=0;j<=t.length();i++){
         if(s[c]==t[c]){
           break;
         }
         
        } 
    }
}
 return 1;
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    if(x==1){
        cout<< "true";
    }
}
/**/
```

## Submission at 2024-10-04 06:12:10


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;
 
 if(s.length() == t.length()){
    if(1<=s.length()<=5*10^4){
   for(int i = 0;i<=s.length();i++){
     for(int j=0;j<=t.length();i++){
         if(s[c]==t[c]){
           break;
         }
         
        } 
    }
}
 }
 return 1;
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    if(x==1){
        cout<< "true";
    }
}
/**/
```

## Submission at 2024-10-04 06:12:36


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;
 
 if(s.length() == t.length()){
    if(1<=s.length()<=5*10^4){
   for(int i = 0;i<=s.length();i++){
     for(int j=0;j<=t.length();i++){
         if(s[c]==t[c]){
           break;
         }
         
        } 
    }
}
 }
 return 1;
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    if(x==1){
        cout<< "true";
    }
}
/**/
```

## Submission at 2024-10-04 06:12:39


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;
 
 if(s.length() == t.length()){
    if(1<=s.length()<=5*10^4){
   for(int i = 0;i<=s.length();i++){
     for(int j=0;j<=t.length();i++){
         if(s[c]==t[c]){
           break;
         }
         
        } 
    }
}
 }
 return 1;
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    if(x==1){
        cout<< "true";
    }
}
/**/
```

## Submission at 2024-10-04 06:18:18


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int check_anagram(string s, string t){
    char c;
 
 if(s.length() == t.length()){
    if(1<=s.length()<=5*10^4){
   for(int i = 0;i<=s.length();i++){
     for(int j=0;j<=t.length();i++){
         if(s[c]==t[c]){
           break;
         }
         else{
            c++;
            continue;
         }
        } 
    }
}
 }
 return 1;
}
int main(){
    string s;
    string t;
    cin>> s;
    cin>>t;
    int x = check_anagram(s,t);
    if(x==1){
        cout<< "true";
    }
}
/**/

```

## Submission at 2024-10-25 05:43:55


```
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool rm(string &ransomNote, string &magazine){
if(ransomNote.length() == magazine.length()){
  for(int i =0; i<ransomNote.length();i++){
     return ransomNote == magazine;
  }
   
   } 
  
}
int main(){
  string ransomNote;
  string magazine;
  cin>>ransomNote;
  cin>>magazine;
  if(rm(ransomNote, magazine)==1){
   cout<<"true";
  }
  else{
   cout<<"false";
  }
   return 0;
}
```

## Submission at 2024-10-25 05:51:43


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
    bool isSymmetric(struct Node* root)
    {
	    // Code here
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

## Submission at 2024-10-25 06:13:51


```
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool wordPattern( string &pattern, string &s){
   for(int i =0;i<pattern.length();i++){
    
   }
}
int main(){
    string pattern;
    string s;
    cin>>pattern;
    cin>>s;

    return 0;
}
```

## Submission at 2024-10-25 06:16:26


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool rm(string &ransomNote, string &magazine){
if(ransomNote.length() == magazine.length()){
  for(int i =0; i<ransomNote.length();i++){
     return ransomNote == magazine;
  }
   
   } 
  
}
int main(){
  string ransomNote;
  string magazine;
  cin>>ransomNote;
  cin>>magazine;
  if(rm(ransomNote, magazine)==1){
   cout<<"true"<<endl;
  }
  else{
   cout<<"false"<<endl;
  }
   return 0;
}

```

## Submission at 2024-10-25 06:19:45


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool rm(string &ransomNote, string &magazine){
if(1<= ransomNote.length()<=10^5){  
if(1<= magazine.length()<=10^5){ 
if(ransomNote.length() == magazine.length()){
  for(int i =0; i<ransomNote.length();i++){
     return ransomNote == magazine;
  }
}
   } 
}
}
int main(){
  string ransomNote;
  string magazine;
  cin>>ransomNote;
  cin>>magazine;
  if(rm(ransomNote, magazine)==1){
   cout<<"true"<<endl;
  }
  else{
   cout<<"false"<<endl;
  }
   return 0;
}

```

## Submission at 2024-10-25 06:20:48


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool rm(string &ransomNote, string &magazine){
 
if(ransomNote.length() == magazine.length()){
  for(int i =0; i<ransomNote.length();i++){
     return ransomNote == magazine;
  }
}
   } 

int main(){
  string ransomNote;
  string magazine;
  cin>>ransomNote;
  cin>>magazine;
  if(rm(ransomNote, magazine)==1){
   cout<<"true"<<endl;
  }
  else{
   cout<<"false"<<endl;
  }
   return 0;
}

```

## Submission at 2024-10-25 06:25:55


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
}

```

## Submission at 2024-10-25 06:33:32


```
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool wordPattern( string &pattern, string &s){
   for(int i =0;i<pattern.length();i++){
    if(pattern[i]== s[i])
    return 1 ;
   }
}
int main(){
    string pattern;
    string s;
    cin>>pattern;
    cin>>s;
    if(wordPattern(pattern,s)==1){
    cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
    }
    return 0;
}

```

## Submission at 2024-10-25 06:38:48


```
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool wordPattern( string &pattern, string &s){
   for(int i =0;i<pattern.length();i++){
    if(pattern[i]== s[i])
    return 1 ;
   }
}
int main(){
    string pattern;
    string s;
    cin>>pattern;
    cin>>s;
    if(wordPattern(pattern,s)==1){
    cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-10-25 06:39:30


```
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool wordPattern( string &pattern, string &s){
   for(int i =0;i<pattern.length();i++){
    if(pattern[i]== s[i])
    return 1 ;
   }
}
int main(){
    string pattern;
    string s;
    cin>>pattern;
    cin>>s;
    if(wordPattern(pattern,s)==1){
    cout<<"true"<<endl;}
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-25 10:00:42


```
// write code from scratch
#include<iostream>
using namespace std;
int counta =0;
int countb =0;
int frequency(string s)
{
    for(int i = 0; i<=s.length();i++){
        if (s[i]=='a'){
            counta++;
        }
        else{
            countb++;
        }
    }
    return 0;
 }

 int main(){
    string s;
    cin>>s;
    frequency(s);
    if(counta>countb){
        cout<<"a";
    }
    else{
        cout<<"b";  
    }
    return 0;
 }
```

## Submission at 2024-11-25 10:02:42


```
// write code from scratch
#include<iostream>
using namespace std;
int counta =0;
int countb =0;
int frequency(string s)
{
    for(int i = 0; i<=s.length();i++){
        if (s[i]==){
            counta++;
        }
        else{
            countb++;
        }
    }
    return 0;
 }

 int main(){
    string s;
    cin>>s;
    frequency(s);
    if(counta>countb){
        cout<<"a";
    }
    else{
        cout<<"b";  
    }
    return 0;
 }
```

## Submission at 2024-11-25 10:11:51


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;
int counta =0;
int countb =0;
char c;
int frequency(string s)
{
    for(int i = 0; i<=s.length();i++){
        if (s[i]== 92 ){
            counta++;
        }
        else{
            countb ++;
        }
    }
    return 0;
 }

 int main(){
    string s;
    cin>>s;
    frequency(s);
    if(counta>countb){
        cout<<"a";
    }
    else{
        cout<<"b";  
    }
    return 0;
 }
```

## Submission at 2024-11-25 10:44:07


```
// write code from scratch
#include<iostream>
using namespace std;

int pattern(int i){
    for(int n =0;n<=i;n++){
       for(int m=0;m<=i;m++){
         cout<<"*";
       }
       cout<<" ";
    }

}

int main(){
    int i;
    cin>>i;
    cout<<pattern(i);
}

```

## Submission at 2024-11-25 10:46:30


```
// write code from scratch
#include<iostream>
using namespace std;

int pattern(int i){
    for(int n =0;n<=i;n++){
       for(int m=i;m>=0;m--){
         cout<<"*";
         
       }
       cout<<" ";
    }

}

int main(){
    int i;
    cin>>i;
    cout<<pattern(i);
}

```

## Submission at 2024-11-25 10:47:00


```
// write code from scratch
#include<iostream>
using namespace std;

int pattern(int i){
    for(int n =0;n<=i;n++){
       for(int m=i;m>=0;m--){
         cout<<"*";
         
       }
       cout<<" ";
    }

}

int main(){
    int i;
    cin>>i;
    cout<<pattern(i);
}

```

## Submission at 2024-11-25 11:04:10


```
// write code from scratch
#include<iostream>
using namespace std;
int counta =0;
int countb =0;

int frequency(string s)
{
    for(int i = 0; i<=s.length();i++){
        if (s[i]== 92 ){
            countb++;
        }
        else{
            counta++;
        }
    }
    return 0;
 }

 int main(){
    string s;
    cin>>s;
    frequency(s);
    if(counta>countb){
        cout<<"a";
    }
    else{
        cout<<"b";  
    }
    return 0;
 }
```

## Submission at 2024-11-25 11:04:52


```
// write code from scratch
#include<iostream>
using namespace std;
int counta =0;
int countb =0;

int frequency(string s)
{
    for(int i = 0; i<=s.length();i++){
        if (s[i]== 92 ){
            countb++;
        }
        else{
            counta++;
        }
    }
    return 0;
 }

 int main(){
    string s;
    cin>>s;
    frequency(s);
    if(counta>countb){
        cout<<"a";
    }
    else{
        cout<<"b";  
    }
    return 0;
 }
```

## Submission at 2024-11-25 11:16:15


```
// write code from scratch
#include<iostream>
using namespace std;

int pattern(int i){
    for(int n =0;n<=i;n++){
       for(int m=0;m<i;m++){
         cout<<"*";
         
       }
       cout<<" ";
    }

}

int main(){
    int i;
    cin>>i;
    cout<<pattern(i);
}

```

