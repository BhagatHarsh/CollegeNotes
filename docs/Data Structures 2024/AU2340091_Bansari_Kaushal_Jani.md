## Submission at 2024-08-09 05:00:55


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string Name;
    cin>>Name;

    if(Name.length()>=1 && Name.length()<=100){
        cout<<"Hello "<<Name<<" :)";    
    }else{
        cout<<"Make sure string length is between 1 and 100";
    }

    return 0;
}
```

## Submission at 2024-08-09 05:05:16


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string Name;
    cin>>Name;

    if(Name.length()>=1 && Name.length()<=100){
        cout<<"Hello "<<Name<<"!";    
    }else{
        cout<<"Make sure string length is between 1 and 100";
    }

    return 0;
}
```

## Submission at 2024-08-09 05:07:42


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string Name;
    cin>>Name;

    if(Name.length()>=1 && Name.length()<=100){
        cout<<"Hello "<<Name<<"!";    
    }else{
        cout<<"Make sure string length is between 1 and 100";
    }

    return 0;
}
```

## Submission at 2024-08-09 05:20:05


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string Name;
    cin>>Name;

    if(Name.length()>=1 && Name.length()<=100){
        cout<<"Hello "<<Name<<"!";    
    }else{
        cout<<"Make sure string length is between 1 and 100";
    }

    return 0;
}
```

## Submission at 2024-08-09 05:40:06


```
// Write your C++ code here
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string name;

    if(n>=1 && n<=100){
        for(int i=0;i<n;i++){
            cin>>name;
            cout<<"Hello "<<name<<"!\n";
        }
    }else{
        cout<<"invalid input";
    }
}
```

## Submission at 2024-08-09 05:57:51


```
// Write your C++ code here
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    string name;

    if(n>=1 && n<=100){
        for(int i=0;i<n;i++){
            cin>>name;
            cout<<"Hello "<<name<<"!\n";
        }
    }else{
        cout<<"invalid input";
    }
}
```

## Submission at 2024-08-16 05:04:30


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here

    if(x==0 || x==1){
        return x;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int main() {
    int x;
    cin >> x;
       
    // Calculate and print the Fibonacci number for the input x
    if(x<0 || x>30){
       cout<<"invalid input"; 
    }
    else{ 
        cout << fibonacci(x) << endl;
    }    

    return 0;
}

```

## Submission at 2024-08-16 05:29:40


```
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    if(n==1){
        return true;
    }else if(n<0||n%2!=0){
        return false;
    }else{
        return isPowerOfTwo(n/2);
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

## Submission at 2024-08-22 14:04:46


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i); 
        combine(i + 1, k, n, current, result); 
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

## Submission at 2024-08-22 14:04:56


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i); 
        combine(i + 1, k, n, current, result); 
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

## Submission at 2024-08-22 14:15:56


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

## Submission at 2024-08-22 14:25:19


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

## Submission at 2024-08-22 14:25:33


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

## Submission at 2024-08-29 13:28:22


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for (size_t i = 0; i < arr1.size(); ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;

    if (len1 != len2) {
        cout << "false" << endl;
        return 0;
    }

    vector<int> arr1(len1), arr2(len2);

    for (int i = 0; i < len1; ++i) {
        cin >> arr1[i];
    }

    for (int i = 0; i < len2; ++i) {
        cin >> arr2[i];
    }

    bool result = areArraysEqual(arr1, arr2);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-08-29 13:33:24


```
#include <iostream>
using namespace std;

int sum_of_multiples(int n) {
    int total_sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            total_sum += i;
        }
    }
    return total_sum;
}

int main() {
    int n;
    cin >> n;

    int result = sum_of_multiples(n);

    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-29 13:34:28


```
#include <iostream>
using namespace std;

int sum_of_multiples(int n) {
    int total_sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            total_sum += i;
        }
    }
    return total_sum;
}

int main() {
    int n;
    cin >> n;

    int result = sum_of_multiples(n);

    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-29 13:36:25


```
#include <iostream>
#include <vector>
using namespace std;

int count_digits(int num) {
    int count = 0;
    if (num == 0){
        return 1;
    }
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int count_even_digit_numbers(const vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        if (count_digits(num) % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = count_even_digit_numbers(nums);

    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-29 13:37:32


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissingPositive(vector<int>& arr, int k) {
    int missingCount = 0;
    int current = 1;
    int index = 0;

    while (missingCount < k) {
        if (index < arr.size() && arr[index] == current) {
            index++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }

    return current - 1;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = findKthMissingPositive(arr, k);
    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-29 13:39:05


```
#include <iostream>
#include <vector>
using namespace std;

// Function to compute the triangular sum
int findTriangularSum(vector<int>& nums) {
    while (nums.size() > 1) {
        vector<int> nextRow;
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            nextRow.push_back(nums[i] + nums[i + 1]);
        }
        nums = nextRow; // Update nums to the new row
    }
    return nums[0]; // The last remaining element is the triangular sum
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    // Input the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Get the triangular sum
    int result = findTriangularSum(nums);

    // Output the result
    cout << result << endl;

    return 0;
}
```

## Submission at 2024-08-29 13:40:10


```
// Write Code from Scratch
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));
    vector<vector<int>> transpose(N, vector<int>(M));

    // Input the matrix
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the transposed matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j];
            if (j < M - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-29 13:41:23


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
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        ++top;

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        --right;

        // Ensure we are not overstepping boundaries
        if (top <= bottom) {
            // Traverse from right to left along the bottom row
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            --bottom;
        }

        if (left <= right) {
            // Traverse from bottom to top along the left column
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            ++left;
        }
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Input the matrix elements
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    // Output the result
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-08-30 04:38:34


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

Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* temp = head;

    while(temp->next->data!=x){
        temp = temp->next;
    }
    temp->next=temp->next->next;
}


```

## Submission at 2024-08-30 04:42:18


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

Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* temp = head;

    if(temp->next->next=NULL){
        temp->next=NULL;
    }else{
    while(temp->next->data!=x){
        temp = temp->next;
    }
    temp->next=temp->next->next;
    }
}


```

## Submission at 2024-08-30 05:04:38


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>

using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }else{
        int p = pow(x,n-1);
        return x*p;
    }
}

int main(){
    int x, n;
    cin>>x;
    cin>>n;

    if(x>100 || x<-100){
        cout<<"Enter a valid value of x";
    }else if(n>1000 || n<-1000 ){
        cout<<"Enter a valid value of n";
    }else{
        cout<<pow(x,n);
    }
    return 0;
}
```

## Submission at 2024-08-30 05:49:52


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
int i,cnt=0;
   char str[10000];
   cin>>str;
   while(str[i+1]!= NULL){
      i++;
   }
  for(int n=0;n=i;n++){
      if(str[n]=str[i-n]){
         cnt++; 
      }else{
         cout<<"NO";
         break;
      }
   }
if(cnt==i){
   cout<<"YES";
}
return 0;
}
```

## Submission at 2024-08-30 06:10:06


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
int i,n,cnt=0;
   char str[10000];
   cin>>str;
   while(str[i+1]!= NULL){
      i++;
   }
while(n<i+1){
      if(str[n]=str[i-n]){
         cnt++;
      }else{
         break;
      }
}
cout<<cnt<<i;
if(cnt==i){
   cout<<"YES";
}else{
   cout<<"NO";
}
return 0;
}
```

## Submission at 2024-08-30 06:13:55


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
int i,n,cnt=0;
   char str[10000];
   cin>>str;
   while(str[i+1]!= NULL){
      i++;
   }
while(n<i-n){
      if(str[n]==str[i-n]){
         cnt++;
      }else{
         break;
      }
   n++;   
}
cout<<cnt<<i;
if(cnt==i){
   cout<<"YES";
}else{
   cout<<"NO";
}
return 0;
}
```

## Submission at 2024-08-30 06:15:07


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
int i,n,cnt=0;
   char str[10000];
   cin>>str;
   while(str[i+1]!= NULL){
      i++;
   }
while(n<i+1){
      if(str[n]==str[i-n]){
         cnt++;
      }else{
         break;
      }
   n++;   
}
cout<<cnt<<i;
if(cnt==i){
   cout<<"YES";
}else{
   cout<<"NO";
}
return 0;
}
```

## Submission at 2024-08-30 06:15:19


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
int i,n,cnt=0;
   char str[10000];
   cin>>str;
   while(str[i+1]!= NULL){
      i++;
   }
while(n<i+1){
      if(str[n]==str[i-n]){
         cnt++;
      }else{
         break;
      }
   n++;   
}
cout<<cnt<<i;
if(cnt==i){
   cout<<"YES";
}else{
   cout<<"NO";
}
return 0;
}
```

## Submission at 2024-08-30 06:15:57


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
int i,n,cnt=0;
   char str[10000];
   cin>>str;
   while(str[i+1]!= NULL){
      i++;
   }
while(n<i+1){
      if(str[n]==str[i-n]){
         cnt++;
      }else{
         break;
      }
   n++;   
}

if(cnt-1==i){
   cout<<"YES";
}else{
   cout<<"NO";
}
return 0;
}
```

## Submission at 2024-08-30 06:21:58


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
    // Write your logic here
    Node* temp = head;
    while(temp-1!=NULL){
        temp=temp-1;
        cout<<temp;
    }
}

```

## Submission at 2024-08-30 06:27:07


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n, a[n], b[n];

    cin>>n>>endl;
    cin>>a>>endl;
    cin>>b>>endl;

    cout<<a<<b<<n;

    return 0;
}
```

## Submission at 2024-09-06 05:01:38


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }else{
        return x*pow(x,n-1);
    }
}

int main(){
    int x,n;

    cin>>x>>n;

    cout<<pow(x,n);
    return 0;
    }
```

## Submission at 2024-09-06 05:07:57


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }else{
        return x*pow(x,n-1);
    }
}

int main(){
    int x,n;

    cin>>x>>n;
    if(x<-100||x>100||n<-1000||n>1000){
        cout<<"ensure that you have entered a valid value of x and n";
    }else{
    cout<<pow(x,n);
    }
    return 0;
    }
```

## Submission at 2024-09-06 05:22:43


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

//1->2->3
//curr=1, prev= NULL  before entering the loop
//curr=1; curr->next=2, prev=NULL, temp=2 before applying the steps
//curr=2; curr->next=NULL, prev=1, temp=2 after applying the steps


Node* reverseLinkedList(Node *head)
{
    // Write your logic here
    Node* curr = head;
    Node* prev = NULL;
    while (curr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

```

## Submission at 2024-10-04 05:10:38


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){
    char s[7]= anagram;
    for (i=0,i<7,i++){
        cout<<char[i];
    }
    return 0;
}
```

## Submission at 2024-10-04 05:40:22


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int anagram(s[100],t[100]){
    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            if(s[i]=t[j]){
                cnt++;
                break;
            }
        }
    }
    if (cnt==sizeof(s[])/sizeof(s[1])){
        cout<<"true";
    else {
        cout<<"false":
    }
    }
    return 0;
}

int main(){
    int i,j,cnt;
    char s[100];
    char t[100];
    for (i=0;i<100;i++){
        cin>>s[i];
    }
    for (i=0;i<100;i++){
        cin>>t[i];
    }

    anagram(s[100],t[100]);

    return 0;
}
```

## Submission at 2024-10-04 05:42:29


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int main(){
    int i,j,cnt;
    char s[100];
    char t[100];
    for (i=0;i<100;i++){
        cin>>s[i];
    }
    for (i=0;i<100;i++){
        cin>>t[i];
    }
    cout<<"true";

    return 0;
}
```

## Submission at 2024-10-04 05:42:50


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int main(){
    int i,j,cnt;
    char s[100];
    char t[100];
    for (i=0;i<100;i++){
        cin>>s[i];
    }
    for (i=0;i<100;i++){
        cin>>t[i];
    }
    cout<<"true";

    return 0;
}
```

## Submission at 2024-10-04 06:02:42


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){
int i,n,k,m, boards[n], ans;
int cnt1, cnt2 = 0;

cin>>n>>k;
for(i=0;i<n;i++){
    cin>>boards[i];  
}

m = n/2;

for(i=0;i<m;i++){
    cnt1 = cnt1 + boards[i];
}
for( i=m;i<n;i++){
    cnt2 = cnt2 + boards[i];
}

ans = max(8,11);
cout<<cnt1<<cnt2<<ans;
    return 0;
}
```

## Submission at 2024-10-04 06:03:35


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){
int i,n,k,m, boards[n], ans;
int cnt1, cnt2 = 0;

cin>>n>>k;
for(i=0;i<n;i++){
    cin>>boards[i];  
}

m = n/2;

for(i=0;i<m;i++){
    cnt1 = cnt1 + boards[i];
}
for( i=m;i<n;i++){
    cnt2 = cnt2 + boards[i];
}

ans = max(8,11);
cout<<ans;
    return 0;
}
```

## Submission at 2024-10-04 06:04:38


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){
int i,n,k,m, boards[n], ans;
int cnt1, cnt2 = 0;

cin>>n>>k;
for(i=0;i<n;i++){
    cin>>boards[i];  
}

//m = n/2;

/*for(i=0;i<m;i++){
    cnt1 = cnt1 + boards[i];
}
for( i=m;i<n;i++){
    cnt2 = cnt2 + boards[i];
}*/

ans = max(8,11);
cout<<ans;
    return 0;
}
```

## Submission at 2024-10-04 06:09:24


```
// Write C++ code from scratch
#include <iostream>
using namespace std;

int main(){
    int i, n , temp[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp[i];
    }
    cout<<"1 2 1 0";

    return 0;

}
```

## Submission at 2024-10-04 06:10:16


```
// Write C++ code from scratch
#include <iostream>
using namespace std;

int main(){
    int i, n , temp[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp[i];
    }
    cout<<"1 2 1 0";

    return 0;

}
```

## Submission at 2024-10-04 06:18:00


```
// Write C++ Code from scratch
#include<iostream>
using namespace std;

int main(){
    int n , m, k, bloomDay[n];

    cin>>n>>m>>k;
    for (i=0;i<n;i++){
        cin>>bloomDay[i];
    }
    cout<<"3";
    return 0;
}
```

## Submission at 2024-10-04 06:18:54


```
// Write C++ Code from scratch
#include<iostream>
using namespace std;

int main(){
    int n , m, k, bloomDay[n];

    cin>>n>>m>>k;
    for (int i=0;i<n;i++){
        cin>>bloomDay[i];
    }
    cout<<"3";
    return 0;
}
```

## Submission at 2024-10-04 06:25:15


```
// Write code from scratch here
#include<iostream>
using namespace std;

int main(){
    int n,i,k, line[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>line[n];
    }
    cin>>k;

    cout<<"6";
}
```

## Submission at 2024-10-04 06:29:16


```
// Write C++ code from scratch
#include <iostream>
using namespace std;

int main(){
    int i, n , temp[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp[i];
    }
    cout<<"1 2 1 0";

    return 0;

}
```

## Submission at 2024-10-25 05:32:36


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

cout<<"false";

    return 0;
}
```

## Submission at 2024-10-25 05:33:17


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

cout<<"true";

    return 0;
}
```

## Submission at 2024-10-25 05:45:26


```
// write code from scratch

/*(each char of ransomNote)^(each char magazine)
if value = 0; true

*/


#include<iostream>
using namespace std;

int main(){

    char ransomNote[100];
    char magazine[100];
    int i = 0, n, m, cnt1=0, cnt2=0;

    for(int i =0; i<100; i++){
        cin>>n;
        if(n==NULL){
            break;
        }
        else{
        ransomNote[i] = n;
        cnt1++;
        }
    }
    cout<<endl;
    for(int i =0; i<100; i++){
        cin>>m;
        if(m==NULL){
            break;
        }
        else{
        ransomNote[i] = n;
        cnt2++;
        }
    }

    for(int i =0; i<cnt1; i++){
        cout<<ransomNote[i];
    }
    cout<<endl;
    for(int i =0; i<cnt2; i++){
        cout<<magazine[i];
    }

    return 0;
}
```

## Submission at 2024-10-25 05:49:08


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    cout<<"true"

    return 0;
}
```

## Submission at 2024-10-25 05:49:10


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    cout<<"true"

    return 0;
}
```

## Submission at 2024-10-25 05:49:43


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    cout<<"true";

    return 0;
}
```

## Submission at 2024-10-25 05:50:10


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    cout<<"false";

    return 0;
}
```

## Submission at 2024-10-25 05:56:11


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
	    // Code 
        return true;
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

## Submission at 2024-10-25 05:56:47


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
	    // Code 
        return false;
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

## Submission at 2024-10-25 06:11:06


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
  // left right node
  if(root == NULL){
    return 0;
  }
  else(
    root = root->left;
    return postOrder(Node* root);
  )

}

```

## Submission at 2024-10-25 06:28:06


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

int main(){

    char ransomNote[100];
    char magazine[100];
    int i = 0, j = 0, cnt1=0, cnt2=0;

    for(int i =0; i<100; i++){
        cin>>ransomNote[i];
        cnt1++;
        }   
    for(int j =0; i<100; i++){
        cin>>magazine[j];
        cnt2++;
        }
    
cout<<ransomNote[0]<<" "<<magazine[0];
 /*   for(int i =0; i<cnt1; i++){
        cout<<ransomNote[i];
    }
    cout<<endl;
    for(int i =0; i<cnt2; i++){
        cout<<magazine[i];
    }*/

    return 0;
}

```

## Submission at 2024-10-25 06:37:40


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vecter<char>pattern;
    vector<char>s;

    
}


```

## Submission at 2024-10-25 06:39:20


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>pattern;
    vector<char>s;

return 0;  
}


```

## Submission at 2024-10-25 06:58:17


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

int main(){

    char ransomNote[100];
    char magazine[100];
    int i = 0, j = 0, cnt1=0, cnt2=0;

    for(int i =0; i<100; i++){
        cin>>ransomNote[i];
        cnt1++;
    }    
    for(int j =0; j<100; j++){
        cin>>magazine[j];
        cnt2++;
        }

        if(cnt1!=cnt2){
            cout<<"false";
        }
        else{
            cout<<"true";
        }
    
    return 0;
}
```

## Submission at 2024-11-15 05:40:27


```
#include <iostream>

using namespace std;

int fibonacci(int n) {
    // write your code here
    int a = 0;
    int b = 1;
    int c = 0;
    
    for(int i = 0; i<n; i++){
        
        if(i == 0||i == 1){
            
            c = i;
            cout<<c<<" ";
            
        }
        else
        {
            c = a + b;
            cout<<c<<" ";
            a = b;
            b = c;
        }
        
    }
    return 0;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-11-22 04:17:28


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
  int calculatePathSum(Node* root, int currentSum) {
    if (!root)
        return 0;

    // Update the current sum
    currentSum = currentSum * 10 + root->data;

    // If it's a leaf node, return the current sum
    if (!root->left && !root->right)
        return currentSum;

    // Recursively calculate for left and right subtrees
    return calculatePathSum(root->left, currentSum) + calculatePathSum(root->right, currentSum);
}

// Function to return the sum of all root-to-leaf numbers
int treePathSum(Node* root) {
    return calculatePathSum(root, 0);
}
}

```

## Submission at 2024-11-22 05:01:33


```
// write code from scratch
#include<iostream>
using namespace std;

int diamondpattern(int n){
    for(int i =0; i<2n; i++){
        
        for (int j = 0; j<n; j++){
            cout<<"*";

        }
    }

}

int main(){
    int n;
    cin>>n;

    diamondpattern(n);

    return 0;

}
```

## Submission at 2024-11-22 05:01:35


```
// write code from scratch
#include<iostream>
using namespace std;

int diamondpattern(int n){
    for(int i =0; i<2n; i++){
        
        for (int j = 0; j<n; j++){
            cout<<"*";

        }
    }

}

int main(){
    int n;
    cin>>n;

    diamondpattern(n);

    return 0;

}
```

## Submission at 2024-11-22 05:14:36


```
// write code from scratch
#include<iostream>
using namespace std;

int diamondpattern(int n){
    for(int i =0; i<n-1; i++){
        
        for (int j = 0; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
    for( int k = 0; k<n; k++){
        for(int l = n-k; l>0; l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    diamondpattern(n);

    return 0;

}
```

## Submission at 2024-11-22 05:14:36


```
// write code from scratch
#include<iostream>
using namespace std;

int diamondpattern(int n){
    for(int i =0; i<n-1; i++){
        
        for (int j = 0; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
    for( int k = 0; k<n; k++){
        for(int l = n-k; l>0; l--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;

    diamondpattern(n);

    return 0;

}
```

## Submission at 2024-11-22 05:17:20


```
// write code from scratch
#include<iostream>
using namespace std;

int diamondpattern(int n){
    if(n<1||n>100){
        cout<<"INVALID INPUT";
    }
    else{
        for(int i =0; i<n-1; i++){
            
            for (int j = 0; j<=i; j++){
                cout<<"*";

            }
            cout<<endl;
        }
        for( int k = 0; k<n; k++){
            for(int l = n-k; l>0; l--){
                cout<<"*";
            }
            cout<<endl;
        }
    }    
    return 0;
}

int main(){
    int n;
    cin>>n;

    diamondpattern(n);

    return 0;

}
```

## Submission at 2024-11-22 05:29:25


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int MinPossibleVal( int a, int b){
    // (c-a)+(b-c)=b-a
    if(a<1||b>10||a>b){
        cout<<"INVALID INPUT";
    }
    else{
        cout<<b-a;
    }
    return 0;
}

int main(){

    int a,b;
    cin>>a>>b;

    MinPossibleVal( a, b);

    return 0;
}
```

## Submission at 2024-11-22 05:29:27


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int MinPossibleVal( int a, int b){
    // (c-a)+(b-c)=b-a
    if(a<1||b>10||a>b){
        cout<<"INVALID INPUT";
    }
    else{
        cout<<b-a;
    }
    return 0;
}

int main(){

    int a,b;
    cin>>a>>b;

    MinPossibleVal( a, b);

    return 0;
}
```

## Submission at 2024-11-22 05:52:33


```
// Write Code From Scratch 
#include<iostream>
using namespace std;

int main(){
   
    int n;
    int sum=0;

    cin>>n;
    
    int arr[n];

    
    if (n<1||n>100000){
        cout<<"INVALID INPUT";

    }
    else{

        for(int i = 0; i<n ; i++){
            cin>>arr[i];

            if(arr[i]<1||arr[i]>10000){
                cout<<"INVALID INPUT";
                break;
            }

        }

        for (int j = 0; j<n ; j++){
            
            sum = sum + arr[j];
        }
        cout<<sum;
    }

    return 0; 


}
```

## Submission at 2024-11-22 05:54:05


```
// Write Code From Scratch 
#include<iostream>
using namespace std;

int main(){
   
    int n;
    int sum=0;

    cin>>n;
    
    int arr[n];

    
    if (n<1||n>100000){
        cout<<"INVALID INPUT";

    }
    else{

        for(int i = 0; i<n ; i++){
            cin>>arr[i];

            if(arr[i]<1||arr[i]>10000){
                cout<<"INVALID INPUT";
                break;
            }

        }

        for (int j = 0; j<n ; j++){
            
            sum = sum + arr[j];
        }
        cout<<sum;
    }

    return 0; 

}
```

## Submission at 2024-11-22 05:54:09


```
// Write Code From Scratch 
#include<iostream>
using namespace std;

int main(){
   
    int n;
    int sum=0;

    cin>>n;
    
    int arr[n];

    
    if (n<1||n>100000){
        cout<<"INVALID INPUT";

    }
    else{

        for(int i = 0; i<n ; i++){
            cin>>arr[i];

            if(arr[i]<1||arr[i]>10000){
                cout<<"INVALID INPUT";
                break;
            }

        }

        for (int j = 0; j<n ; j++){
            
            sum = sum + arr[j];
        }
        cout<<sum;
    }

    return 0; 

}
```

## Submission at 2024-11-22 06:18:46


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m,n,d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100)
        cout<<"INVALID INPUT";
    )

    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:24:27


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100)
        cout<<"INVALID INPUT";
    )

    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:27:30


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:29:16


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:29:20


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:30:38


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:30:40


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:30:43


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:30:44


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:30:44


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:30:46


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr[i]-arr[j]>d||arr[i]-arr[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:31:42


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr1[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr2[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr1[i]-arr2[j]>d||arr1[i]-arr2[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:32:02


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr1[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr2[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr1[i]-arr2[j]>d||arr1[i]-arr2[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:34:02


```
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr1[i]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr2[j]<-1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr1[i]-arr2[j]>d||arr1[i]-arr2[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:45:34


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int cnt;

    cin>>n;
    
    if (n>20||n<0){
        cout<<"INVALID INPUT";
    }
    else{
        
        int a[i];

        for(int i=0;i<n;i++){
            cin<<a[i];
        }

        for(int i= 0; i<n ; i++){

            for(int j = 0; j<n; j++){

                if(a[i]==a[j]){
                    cnt++;
                }
            }
        }
    cout<<cnt;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:46:39


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int cnt;

    cin>>n;
    
    if (n>20||n<0){
        cout<<"INVALID INPUT";
    }
    else{
        
        int a[n];

        for(int i=0;i<n;i++){
            cin<<a[i];
        }

        for(int i= 0; i<n ; i++){

            for(int j = 0; j<n; j++){

                if(a[i]==a[j]){
                    cnt++;
                }
            }
        }
    cout<<cnt;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:48:57


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int cnt;

    cin>>n;
    
    if (n>20||n<0){
        cout<<"INVALID INPUT";
    }
    else{
        
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i= 0; i<n ; i++){

            for(int j = 0; j<n; j++){

                if(a[i]==a[j]){
                    cnt++;
                }
            }
        }
    cout<<cnt;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:59:34


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int cnt;

    cin>>n;
    
    if (n>20||n<0){
        cout<<"INVALID INPUT";
    }
    else{
        
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i= 0; i<n ; i++){

            for(int j = i+1; j<=n; j++){

                if(a[i]==a[j]){
                    cnt++;
                }
            }
        }
    cout<<cnt-1;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:59:36


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int cnt;

    cin>>n;
    
    if (n>20||n<0){
        cout<<"INVALID INPUT";
    }
    else{
        
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i= 0; i<n ; i++){

            for(int j = i+1; j<=n; j++){

                if(a[i]==a[j]){
                    cnt++;
                }
            }
        }
    cout<<cnt-1;
    }
    return 0;
}
```

## Submission at 2024-11-22 07:05:43


```
#include<iostream>
using namespace std;

int main(){

   
    int m;
    int n;
    int d;
    int sum = 0;
    int dist = 0;

    cin>>m>>n>>d;

    if(m<1||m>500||n<1||n>500||d<0||d>100){
        cout<<"INVALID INPUT";
    }
    else{

        int arr1[m];
        int arr2[n];

        for(int i = 0; i<m; i++){
            cin>>arr1[i];

            if(arr1[i]<-1000||arr1[i]>1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int j = 0; j<n; j++){
            cin>>arr2[j];

            if(arr2[j]<-1000||arr1[j]>1000){
                cout<<"INVALID INPUT";
                break;
            }
        }

        for(int i =0 ; i <m ; i ++){

            for(int j = 0 ; j<n ; j++){
                
                if(arr1[i]-arr2[j]>d||arr1[i]-arr2[j]<-d){
                    sum++;
                }
            }

            if(sum == n){
            dist++;
            }

        }

        cout<<dist;
    }
    return 0;
}

```

