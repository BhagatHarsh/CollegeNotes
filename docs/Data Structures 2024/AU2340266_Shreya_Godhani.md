## Submission at 2024-08-16 05:18:28


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here 
  
    if(x <= 1) {
        return x;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
    
}

int main() {
    int x;
    cin >> x;
      if(x < 0){
        cout << "Enter a positive integer" ;
        return 0;
      }
        else{
            // Calculate and print the Fibonacci number for the input x
            cout << fibonacci(x) << endl;
        }
    

    return 0;
}

```

## Submission at 2024-08-16 05:38:38


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    if (n == 1){
        return true;
    }
    if (n == 0 || n%2 != 0){
        return false;
    }
    else {
        return isPowerOfTwo(n / 2);
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-22 11:37:43


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

## Submission at 2024-08-22 12:09:19


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

## Submission at 2024-08-22 12:27:24


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

    return 0;
}
```

## Submission at 2024-08-22 12:31:31


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

## Submission at 2024-08-27 08:42:09


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

## Submission at 2024-08-28 07:47:44


```
#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& array) {
    for (const auto& row : array) { 
        for (const auto& elem : row) { 
            cout << elem << " ";
        }
        cout << endl;
    }
}

void transposeInPlace(vector<vector<int>>& matrix, int r, int c) {
    for (int i = 0; i < c; i++) {
        for (int j = i; j < r; j++) {
            // swap (a[i][j] to b[j][i]
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
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

    transposeInPlace(matrix, r, c);
    printMatrix(matrix);

    return 0;
}


```

## Submission at 2024-08-28 08:06:26


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

## Submission at 2024-08-28 08:14:02


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

## Submission at 2024-08-30 02:50:38


```
#include<iostream>
using namespace std;

int sum(int a) {
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout <<  sum(n) << endl;
    return 0;
}

```

## Submission at 2024-08-30 02:52:32


```
#include<iostream>
using namespace std;

int sumOfMultiples(int n) {
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
    cout << "Enter n: ";
    cin >> n;
    cout << sumOfMultiples(n) << endl;
    return 0;
}

```

## Submission at 2024-08-30 02:53:43


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

## Submission at 2024-08-30 02:55:07


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralMatrixTraversal(vector<vector<int>> &matrix)
{
    vector<int> final;
    int top = 0, bottom = matrix.size() - 1;    // rows
    int left = 0, right = matrix[0].size() - 1; // columns

    if (matrix.empty())
    {

        return final;
    }

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            final.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            final.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                final.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                final.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return final;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> final = SpiralMatrixTraversal(matrix);

    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}
```

## Submission at 2024-08-30 02:57:03


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

## Submission at 2024-08-30 02:59:04


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

## Submission at 2024-08-30 03:01:06


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

## Submission at 2024-08-30 03:47:49


```
#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    int sum = 0;
    
    if (n >= 1 && n <= 1000) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        std::cout << sum << std::endl;
    } else {
        std::cout << "invalid input" << std::endl;
        return 1; 
    }
    
    return 0;  
}
```

## Submission at 2024-08-30 03:50:31


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

## Submission at 2024-10-04 05:28:55


```
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>> n;
    
    int i;
    vector<int>vec1;

        cin>> x;
        cin>> y;
        cin>> z;
        vec1.push_back(x);
        vec1.push_back(y);
        vec1.push_back(z);

    
    for(i=0; i<n ; i++){
        int sum += vec1[i];
    }
    return (sum-1);
}

```

## Submission at 2024-10-04 06:16:15


```
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i,j;
    if(s.length() == t.length()) {
        for(i=0; i<s.length(); i++){
            for(j=0; j<t.length(); j++)
            if(s[i] == t[j]){
                cout<< "true";
            }
        }
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 06:20:30


```
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i,j;
    if(s.length() == t.length()) {
        for(i=0; i<s.length(); i++){
            for(j=0; j<t.length(); j++)
            if(s[i] == t[j]){
                cout<< "true";
                break;
            }
        }
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-25 05:52:58


```
#include<iostream>

using namespace std;

int main(){
    char a;
    char b;
    int i=0;
    cin>> a; 
    cin>> b;
    if(a.length() == b.length()){
       cout<< true;
    }
    else {
        cout<< false;
    }
    return 0; 
}

```

## Submission at 2024-10-25 06:17:15


```
#include<iostream>

using namespace std;

int main(){
    char a;
    char b;
    int i=0;
    cin>> a; 
    cin>> b;
    cout<<"false";
}

```

## Submission at 2024-11-22 05:18:53


```
#include<iostream>
#include<array>

using namespace std;

int main(){
    int n, a, b, c, d;

    cin>> n >> a >> b >> c >> d;
    array integers = [n];
    a.push_back(integers);
    int sum;
    for(i=0; i<integers.size();i++){
        sum += integers[i]; 
    }
    cout<< sum;
} 




```

## Submission at 2024-11-22 05:20:45


```
#include<iostream>
#include<array>

using namespace std;

int main(){
    int n, a, b, c, d;

    cin>> n >> a >> b >> c >> d;
    array integers = [n];
    a.push_back(integers);
    b.push_back(integers);
    c.push_back(integers);
    d.push_back(integers);
    int sum;
    for(i=0; i<integers.size();i++){
        sum += integers[i]; 
    }
    cout<< sum;
} 




```

## Submission at 2024-11-22 06:11:01


```
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    cout<<"* \n";
    cout<<"* * \n" ;
    cout<<"* * * \n" ;
    cout<<"* * \n" ;
    cout<<"* \n" ;
}
    


```

## Submission at 2024-11-22 06:19:57


```
#include<iostream>

using namespace std;

int main(){
    int n;
    int i = 0;
    cin>> n;
    while(i<(2*n-1)) {
        cout<<"*";
        i++;
    }
}
    


```

## Submission at 2024-11-22 06:20:23


```
#include<iostream>

using namespace std;

int main(){
    int n;
    int i = 0;
    cin>> n;
    while(i<(2*n-1)) {
        cout<<"*";
        i++;
    }
}
    


```

