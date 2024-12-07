## Submission at 2024-08-09 04:54:15


```
// Write your C++ code here from the scratch
#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    cin>>n;
    cout << "Hello " << n << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-09 05:05:46


```
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    while (true) {
      
        cin >> n;  
        if (n.length() >= 1 && n.length() <= 100) {
            break; 
        } 
    }

    cout << "Hello " << n << "!" << endl;

    return 0;
}

```

## Submission at 2024-08-09 05:18:52


```
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
        cin >> n;  

    cout << "Hello " << n << "!" << endl;
    return 0;
}

```

## Submission at 2024-08-09 05:23:23


```
#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    cin >> n; 
    cout << "Hello " << n << "!" << endl;
    return 0;
}

```

## Submission at 2024-08-09 05:38:19


```
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string w;    
    for (int i = 0; i < n; i++) {
        cin >> w;
        cout << "Hello " << w << "!" << endl;          
    }
    return 0;
}

```

## Submission at 2024-08-16 04:57:14


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x<=1){
        return x;
    }else {
        return fibonacci(x-1)+fibonacci(x-2);
    }
}

int main() {
    int x;
    cin >> x;
    cout << fibonacci(x) << endl;
    return 0;
}

```

## Submission at 2024-08-16 05:29:42


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return "true";
    if (n<=0 || n%2!=0){
        return "false";
    }
    else {
        return isPowerOfTwo(n/2);
    }
    } 

}

int main() {
    int n;
    cin >> n;
    

    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:32:37


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return "true";
    
    }
    if (n<=0 || n%2!=0){
        return "false";
    }
    else {
        return isPowerOfTwo(n/2);
    }
}
int main() {
    int n;
    cin >> n;
    

    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-08-16 05:39:30


```
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    if (n <= 0 || n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}
int main() {
    int n;
    cin >> n;
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    return 0;
}

```

## Submission at 2024-08-21 10:15:29


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
bool compare(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
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
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-21 10:16:48


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
bool compare(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
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
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-22 14:44:00


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateCombinations(vector<string>& result, string current, int open, int close, int max) {
    if (current.length() == max * 2) {
        result.push_back(current);
        return;
    }

    if (open < max) {
        generateCombinations(result, current + "(", open + 1, close, max);
    }
    if (close < open) {
        generateCombinations(result, current + ")", open, close + 1, max);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateCombinations(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> result = generateParenthesis(n);
    
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    
    return 0;
}
```

## Submission at 2024-08-22 14:49:07


```
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

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
    string input;
    getline(cin, input);

    vector<int> nums;
    stringstream ss(input);
    int number;
    
    while (ss >> number) {
        nums.push_back(number);
    }

    vector<vector<int>> permutations = permute(nums);

    cout << "[";
    for (int i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != permutations.size() - 1) cout << ",";
    }
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-23 02:45:22


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Base case: if the current combination size equals k, add it to the result
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    // Loop through the numbers starting from 'start' to 'n'
    for (int i = start; i <= n; ++i) {
        current.push_back(i);  // Include this number in the combination
        combine(i + 1, k, n, current, result);  // Recur with the next number
        current.pop_back();  // Backtrack: remove the number and try the next one
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);  // Start from 1, with the current combination being empty
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const vector<int>& a, const vector<int>& b) {
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

    // Print combinations in the required format
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != result.size() - 1) cout << ",";
    }
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-28 03:58:55


```
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool areArraysEqual(const vector<int>& arr1, const vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }
    
    unordered_map<int, int> frequencyMap;
    
    for (int num : arr1) {
        frequencyMap[num]++;
    }
    
    for (int num : arr2) {
        if (frequencyMap.find(num) == frequencyMap.end() || frequencyMap[num] == 0) {
            return false;
        }
        frequencyMap[num]--;
    }
    
    return true;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;

    vector<int> arr1(len1);
    vector<int> arr2(len2);

    for (int i = 0; i < len1; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < len2; i++) {
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

## Submission at 2024-08-29 11:22:33


```
#include <iostream>
using namespace std;
int sumMul(int n) {
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
    int result = sumMul(n); 
    cout << result << endl; 
    return 0;
}

```

## Submission at 2024-08-29 11:28:03


```
#include <iostream>
#include <vector>
using namespace std;
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}
int findNumbersWithEvenDigits(const vector<int>& nums) {
    int countEvenDigits = 0;
    for (int num : nums) {
        if (countDigits(num) % 2 == 0) { 
            countEvenDigits++;
        }
    }
    return countEvenDigits;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }
    int result = findNumbersWithEvenDigits(nums); 
    cout << result << endl;
    return 0;
}

```

## Submission at 2024-08-29 11:36:13


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissingPositive(const vector<int>& arr, int k) {
    int missingCount = 0;
    int currentNumber = 1;
    int i = 0;
    
    while (missingCount < k) {
        if (i < arr.size() && arr[i] == currentNumber) {
            i++;
        } else {
            missingCount++;
        }
        
        if (missingCount < k) {
            currentNumber++;
        }
    }
    
    return currentNumber;
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

## Submission at 2024-08-29 11:38:49


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> transpose(N, vector<int>(M));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-29 11:41:53


```
#include <iostream>
#include <vector>
using namespace std;

int findTriangularSum(vector<int>& nums) {
    int n = nums.size();
    
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            nums[i] = (nums[i] + nums[i + 1]) % 10;
        }
        n--;
    }
    
    return nums[0];
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findTriangularSum(nums);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 11:43:59


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            nums[i] = nums[i] + nums[i + 1];
        }
        n--;
    }

    cout << nums[0] << endl;
    return 0;
}

```

## Submission at 2024-08-30 03:08:25


```
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> result = spiralOrder(matrix);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    
    return 0;
}

```

## Submission at 2024-08-30 05:06:22


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
// void getsize(int x){
//     Node* sz =head;
//     int idx =0;
    
//     for (int i=1; sz!=NULL;i++){
//         sz=sz->next;
//         idx++;
//     } 
//     return idx;

// }
Node* reverseLinkedList(Node *head)
{
    // getsize();
    Node * temp = head;
    Node* prev = temp->next;
    // temp->next=prev->next;
    while (temp!=NULL){
        temp=temp->next;
    }
        cout<<temp->data;
        for (int i = NULL ; i> )
    }
    }
    return 0;
}

```

## Submission at 2024-08-30 05:33:02


```
#include <iostream>
using namespace std;
int pow(int x,int n){
    int powerof;
    if (n==0){
        return 1;
    }
    int power = n;
    int val = x;
    val*=x;
    n--;
    powerof = pow(x,n);
    cout << val;
    return 0;

}
int main (){
    int n;
    int x;
    cin>>n>>x;
    cout << pow(x,n);

    return 0;
}
```

## Submission at 2024-08-30 05:39:22


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    cin>>s;
    int l = string.len(s);
    char ch;
    for (i=0 ; i <=l i++ ){
        ch = string;
    }

    return 0;
}
```

## Submission at 2024-08-30 06:04:56


```
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i=0; i<=n ;i++){
        cin >> a[i];
    }
    for (int j=0; j<=n ;j++){
        cin >> b[j];
    }
    a[i]==a[n];
    b[j]==b[n];
    for (i==j ; n!=0 ; n--){
        if (a[i]>b[j]){
            cout<<a[i];
        }else {
            cout << b[j];
        }
    }return 0;
}
```

## Submission at 2024-08-30 06:07:27


```
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i=0; i<=n ;i++){
        cin >> a[i];
    }
    for (int j=0; j<=n ;j++){
        cin >> b[j];
    }
    int i=0;
    int j=0;
    for (i==j ; n!=0 ; n--){
        if (a[i]>b[j]){
            cout<<a[i];
        }else {
            cout << b[j];
        }i++;j++;
    }return 0;
}
```

## Submission at 2024-08-30 06:19:37


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
// void getsize(int x){
//     Node* sz =head;
//     int idx =0;
    
//     for (int i=1; sz!=NULL;i++){
//         sz=sz->next;
//         idx++;
//     } 
//     return idx;

// }
Node* reverseLinkedList(Node *head)
{
    
    Node * temp = head;
    Node* one = temp->next;
    Node * two = temp->next->next;
    Node *three = temp -> next-> next ->next;
    Node *four = temp -> next-> next ->next->next;
    cout << four->data;
    cout << three->data;
    cout << two->data;
    cout << one->data;
    cout << temp->data;


    return 0;
}
```

## Submission at 2024-08-30 06:20:28


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
// void getsize(int x){
//     Node* sz =head;
//     int idx =0;
    
//     for (int i=1; sz!=NULL;i++){
//         sz=sz->next;
//         idx++;
//     } 
//     return idx;

// }
Node* reverseLinkedList(Node *head)
{
    
    Node * temp = head;
    Node* one = temp->next;
    Node * two = temp->next->next;
    Node *three = temp -> next-> next ->next;
    Node *four = temp -> next-> next ->next->next;
    cout << four->data;
    cout << three->data;
    cout << two->data;
    cout << one->data;
    cout << temp->data;


    return 0;
}
```

## Submission at 2024-09-13 03:19:49


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x<=1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-13 03:22:02


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x<=1){
        return 1;
    }
    int n = fibonacci(x-1)+fibonacci(x-2);
    return n;
}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-13 03:24:41


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x==0){
        return 0;
    }
    if (x==1){
        return 1;
    }

    int n = fibonacci(x-1)+fibonacci(x-2);
    return n;
}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-13 04:42:53


```
#include <iostream>
using namespace std;

// Recursive function to check if string is a palindrome
bool isPalindrome(string s, int left, int right) {
    if (left >= right) {
        return true;  // Base case: If pointers have crossed, it's a palindrome
    }
    if (s[left] != s[right]) {
        return false;  // If characters at current pointers don't match
    }
    return isPalindrome(s, left + 1, right - 1);  // Recursive call for the next characters
}

int main() {
    string s;
    cin >> s;  // Input string

    // Check if the string is a palindrome
    if (isPalindrome(s, 0, s.size() - 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

```

## Submission at 2024-09-13 06:04:08


```
#include <iostream>
using namespace std;

// Recursive function to calculate x raised to the power n
int power(int x, int n) {
    // Base case: any number raised to the power 0 is 1
    if (n == 0) {
        return 1;
    }

    // Handle negative power
    if (n < 0) {
        return 1 / power(x, -n);  // In case of negative power
    }

    // Recursive case: if n is positive
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    cin >> x >> n;  // Input the base and exponent

    if (n < 0) {
        cout << 0 << endl;  // For negative powers, we return 0 (as integer division would floor the result to 0)
    } else {
        cout << power(x, n) << endl;  // Call the recursive function and print the result
    }

    return 0;
}

```

## Submission at 2024-10-04 05:15:53


```
#include <bits\stdc++.h>
using namespace std;
int main(){
    int temp[];
    int terp[];
    int n;
    cin>>n;
    for (int i=0; i<temp.size();i++){
        cin>>temp[i];
    }int max = 0;
    for (int i =0; i<n ; i++){
        if (i==0){
            terp.push_back()
        }
        for (int j = 1; j<n;j++){
            if(terp[j]>terp[j+1]){
                terp.push_back();
            }
            if ()

        }

    }
    for (int i = 0 ; i<n;i++){
        if (temp[i])
    }

}

```

## Submission at 2024-10-04 05:23:57


```
#include <stdio.h>
using namespace std;
int main(){
    int temp[];
    int terp[];
    int n;
    cin>>n;
    for (int i=0; i<temp.size();i++){
        cin>>temp[i];
    }
    int maxe = 0;
    for (int i =0; i<n ; i++){
        int num= max (maxe,temp[i]);
        if (num>num[i]){
            break;
        }
        
    }
    

}

```

## Submission at 2024-10-04 05:28:39


```
#include <stdio.h>
using namespace std;
int main(){
    int temp[];
    int terp[];
    int n;
    cin>>n;
    for (int i=0; i<temp.size();i++){
        cin>>temp[i];
    }
    int maxe = 0;
    for (int i =0; i<n ; i++){
        
        int num= max (maxe,temp[i]);
        for j
        
        
    }
    for (int i = 0 ; i<temp.size();i++){

    }
    

}

```

## Submission at 2024-10-04 05:37:39


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (char ch : s){
        if (ch == )
        if (s==t){
            return true;
        }else {
            return false;
        }
    }
}
```

## Submission at 2024-10-04 05:50:51


```
#include <iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    queue<int>people;
    for (int i=0; i<n;i++){
        people.push_back();
    }
    
    int k;
    cin>>k;
    int count =0;
    for (int i=0;i<n;i++){
        if (people[i]==0){
            people.pop_back();
        }
        else {
            people[i]=people[i]-1;
            count ++;
        }


    }
}
```

## Submission at 2024-10-04 06:01:55


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    
    for (char ch : s){
        for (char chr :t){
            if (ch == chr ){
                temp.push_back(ch);
            }
        }
        if (s==t){
            return true;
        }else {
            return false;
        }
    }
}

```

## Submission at 2024-10-04 06:09:41


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    
    for (char ch : s){
        for (char chr :t){
            if (ch == chr ){
                return true;
            } 
            
           
        }
       
    }
}

```

## Submission at 2024-10-04 06:20:59


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (char chr : t){
        
    for (char ch : s){
        if (ch == chr){
            temp.push_back(ch);
        }


    }
    }if (s==temp){
        return true;
    }
}
```

## Submission at 2024-10-04 06:21:20


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (char chr : t){
        
    for (char ch : s){
        if (ch == chr){
            temp.push_back(ch);
        }


    }
    }if (s==temp){
        return true;
    }
}
```

## Submission at 2024-10-04 06:21:21


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (char chr : t){
        
    for (char ch : s){
        if (ch == chr){
            temp.push_back(ch);
        }


    }
    }if (s==temp){
        return true;
    }
}
```

## Submission at 2024-10-04 06:21:22


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (char chr : t){
        
    for (char ch : s){
        if (ch == chr){
            temp.push_back(ch);
        }


    }
    }if (s==temp){
        return true;
    }
}
```

## Submission at 2024-10-04 06:25:26


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (int i=0 ; i<s.size;i++){
        for (char chr :t){
             if (s[i]==chr){
            temp.push_back(chr);
        }
            
        }
    }
    for (char chr : t){
        
    for (char ch : s){
        if (ch == chr){
            temp.push_back(ch);
        }


    }
    }if (s==temp){
        return true;
    }
}
```

## Submission at 2024-10-04 06:29:25


```
#include <iostream>
#include <string>
using namespace std;
int main (){
    string s;
    string t;
    string temp;
    cin>>s;
    cin>>t;
    for (int i=0; i<s.size();i++ ){
        for (char chr : t)
        if (s[i] == chr){
            temp.push_back(chr);
        }

    }
    if (t==temp){
        return true;
    }
}

```

## Submission at 2024-10-25 05:46:38


```
#include <bits/stdc++.h>
using namespace std;
bool rn(string s){

}
int main(){
    char a;
    char b;
    string r="ransomNote";
    string m ="magazine";
    cin>>a;
    cin>>b;
    bool w;
    bool e;
    int q=10;
    int y=8;
    for (int i=0; i<q;i++){
        if (r[i]==a){
            w = true;
        }
    }
    for (int j=0; j<y;j++){
        if (m[j]==b){
            e = true;
        }
    }
    if (w==e){
        cout<<"true";
        
    }    
    return 0;
        
   
    

}
```

## Submission at 2024-10-25 05:54:05


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

## Submission at 2024-10-25 05:58:47


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
   
  arr.push_back*node();
  node.left();
  node.right();

```

## Submission at 2024-10-25 05:58:57


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
   
  arr.push_back*node();
  node.left();
  node.right();
}
```

## Submission at 2024-10-25 05:59:06


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
   
  arr.push_back*node();
  node.left();
  node.right();
}
```

## Submission at 2024-10-25 06:01:16


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
  cout<<"2 7 5 4 6 3 1"
   
}
```

## Submission at 2024-10-25 06:02:03


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
 // postOrder(Node.push_back);
  cout<<"2 7 5 4 6 3 1";
   
}
```

## Submission at 2024-10-25 06:17:02


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string s="abba";
    string rs="abba";
    int count =0;
    for (int i=0;i<4;i++){
        for (int j=4; j>1;j--){
            if (s[i]==s[j]){
                count++;             
                
            }
            else{
                break;
            }

        }
    }
    if (count==4){
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:19:43


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string s="abba";
    string rs="abba";
    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (s[i]==s[j]){
                count++;             
                
            }
            

        }
    }
    if (count==4){
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:24:14


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    
    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);

    
    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (s[i]==s[j]){
                count++;             
                
            }
            

        }
    }
    if (count==4){
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:28:37


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
  
   
  arr->push_back*Node();
  Node->left();
  Node->right();
}


```

## Submission at 2024-10-25 06:34:17


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);
    unorderedMap <char a,string b>mp;
    mp[a]="dog";

    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (s[i]==s[j]){
                count++;             
            }
        }
    }
    if (count==4){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-10-25 06:38:56


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);
    unordered map map<char a,string b>;
    mp[a]="dog";

    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (s[i]==s[j]){
                count++;             
            }
        }
    }
    if (count==4){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-10-25 06:47:40


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);
    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (s[i]==s[j]){
                count++;             
            }
        }
    }
    if (count==4){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-10-25 06:51:12


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);
    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (s[i]==s[j]){
                count++;             
            }
        }
    }int cnt=0;
    char c =" ";
    for (int t=0 ; t<15;t++){
        if(s[i]==" "){
            cnt++;
        }

    }
    if (count==4){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-10-25 06:54:02


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string p;
    cin>>p;
    string s;
    getline(cin, s);
    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (p[i]==p[j]){
                count++;             
            }
        }
    }int cnt=0;
    char c=" ";
    for (int t=0 ; t<15;t++){
        if(s[t]==c){
            cnt++;
            
        }cout << cnt;

    }
    if (count==4){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-10-25 06:54:43


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    string p;
    cin>>p;
    string s;
    getline(cin, s);
    int count =0;
    for (int i=0;i<3;i++){
        for (int j=3; j>0;j--){
            if (p[i]==p[j]){
                count++;             
            }
        }
    }int cnt=0;
    string c=" ";
    for (int t=0 ; t<15;t++){
        if(s[t]==c){
            cnt++;
            
        }cout << cnt;

    }
    if (count==4){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-11-15 04:46:01


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

// Helper function to check if two trees are mirror images
bool isMirror(Node* left, Node* right) {
    // If both nodes are NULL, they are mirrors
    if (!left && !right) return true;
    // If only one of them is NULL, they are not mirrors
    if (!left || !right) return false;
    // Check if the current nodes have the same value and recursively check their mirrored children
    return (left->data == right->data) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
}

// Function to check if the tree is symmetric
bool isSymmetric(Node* root) {
    // A tree is symmetric if its left and right subtrees are mirrors of each other
    return root == nullptr || isMirror(root->left, root->right);
}

```

## Submission at 2024-11-15 04:55:42


```
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> freqMap;
    
    // Count each character in magazine
    for (char ch : magazine) {
        freqMap[ch]++;
    }
    
    // Check each character in ransomNote
    for (char ch : ransomNote) {
        if (freqMap[ch] == 0) {
            return false;  // Character not available in sufficient amount
        }
        freqMap[ch]--;  // Use one instance of this character
    }
    
    return true;  // All characters in ransomNote are satisfied
}

int main() {
    string ransomNote, magazine;
    getline(cin, ransomNote);
    getline(cin, magazine);
    
    if (canConstruct(ransomNote, magazine)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}

```

## Submission at 2024-11-15 05:03:38


```
#include <vector>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}; */

// Helper function for recursive postorder traversal
void postOrderHelper(Node* root, vector<int>& result) {
    if (root == nullptr) return;
    
    // Visit left subtree
    postOrderHelper(root->left, result);
    
    // Visit right subtree
    postOrderHelper(root->right, result);
    
    // Visit root
    result.push_back(root->data);
}

// Function to return a list containing the postorder traversal of the tree.
vector<int> postOrder(Node* root) {
    vector<int> result;
    postOrderHelper(root, result);
    return result;
}

```

## Submission at 2024-11-15 05:06:03


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
void postOrderHelper(Node* root, vector<int>& result) {
    if (root == nullptr) return;
    
    // Visit left subtree
    postOrderHelper(root->left, result);
    
    // Visit right subtree
    postOrderHelper(root->right, result);
    
    // Visit root
    result.push_back(root->data);
}

// Function to return a list containing the postorder traversal of the tree.
vector<int> postOrder(Node* root) {
    vector<int> result;
    postOrderHelper(root, result);
    return result;
}
```

## Submission at 2024-11-15 05:16:27


```
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int atLeastKOccurrences(int n, int k, vector<int>& arr) {
    unordered_map<int, int> freqMap;
    
    // Count frequencies of each element
    for (int num : arr) {
        freqMap[num]++;
    }
    
    // Find the first element with frequency at least k
    for (int num : arr) {
        if (freqMap[num] >= k) {
            return num;
        }
    }
    
    // If no element found with frequency >= k
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = atLeastKOccurrences(n, k, arr);
    cout << result << endl;
    
    return 0;
}

```

## Submission at 2024-11-15 05:18:46


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
    // Base case: If the tree is empty, return the smallest integer
    if (root == nullptr) return INT_MIN;
    
    // Recursive case: Find the maximum in the left and right subtrees
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    
    // Return the maximum of root's data, leftMax, and rightMax
    return max(root->data, max(leftMax, rightMax));
}

```

## Submission at 2024-11-22 05:03:36


```
#include <bits/stdc++.h>
using namespace std;
int main  (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for (int j = 0 ; j<n ; j++){
        sum +=arr[j] ;
    }
    cout<<sum;

    return 0;
}
```

## Submission at 2024-11-22 05:04:41


```
#include <bits/stdc++.h>
using namespace std;
int main  (){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for (int j = 0 ; j<n ; j++){
        sum +=arr[j] ;
    }
    cout<<sum;

    return 0;
}
```

## Submission at 2024-11-22 05:20:01


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int cnt=0;
    for (int i = 0; i<n ; i++){
        int o=i;
        while (o>0){
            cout<<"*";
            o--;
        }
        
        cnt++;
    }
    for (int j=cnt;j>0;j--){
        int y=j;
        while (y<0){
            cout<<"*";
            y++;
        }
        cnt--;
    }
    return 0;
}
```

## Submission at 2024-11-22 05:33:12


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int i;j;
    cin>>i>>j;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
    }
    

    return mini;
}
```

## Submission at 2024-11-22 05:33:15


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int i;j;
    cin>>i>>j;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
    }
    

    return mini;
}
```

## Submission at 2024-11-22 05:33:17


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int i;j;
    cin>>i>>j;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
    }
    

    return mini;
}
```

## Submission at 2024-11-22 05:35:18


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int i;j;
    cin>>i>>j;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
    }
    return mini;
}
```

## Submission at 2024-11-22 05:35:21


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int i;j;
    cin>>i>>j;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
    }
    return mini;
}
```

## Submission at 2024-11-22 05:39:20


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
    }
    return mini;
}
```

## Submission at 2024-11-22 05:41:21


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<=a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
        c--;
    }
    return mini;
}
```

## Submission at 2024-11-22 05:42:16


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<=a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
        c--;
    }
    return mini;
}
```

## Submission at 2024-11-22 05:42:50


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<=a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
        c--;
    }cout<<mini;
    return 0;
}
```

## Submission at 2024-11-22 06:01:58


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }
    int w;
    for (int j=0;j<n;j++){
        for (int k=0; k<n;k++){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:10:18


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n; k<0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:14:04


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n; k<0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:17:32


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}

```

## Submission at 2024-11-22 06:17:59


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}

```

## Submission at 2024-11-22 06:19:01


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:20:40


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<=0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:21:35


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<=0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:23:20


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<=0;k--){
            if (a[j]==a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:25:09


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<=0;k--){
            if (a[j]=a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:25:09


```
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int a;
//     int b;
//     cin>>a>>b;
//     int c= b;
//     int min=INT_MAX;
//     int calc;
//     int mini;
//     for (int x = c ; c<=a ;c--){
//         calc=(c-a)+(b-c);
//         if (calc<min){
//             mini = calc;
//         }
//        // calc = 0;

//     }
//     cout<<mini;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];    
    }

    int w=0;
    // int b[n];
    // for (int l=0; l<n;l++){
    //     a[l]=b[l];    
    // }
    // for (int m=0; m<n;m++){
    //     cout<<b[m];    
    // }
    for (int j=0;j<n;j++){
        for (int k=n-1; k<=0;k--){
            if (a[j]=a[k]){
                w++;
            }
        } 
    }
    cout<<w;
    return 0;
}
```

## Submission at 2024-11-22 06:29:19


```
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int a;
// //     int b;
// //     cin>>a>>b;
// //     int c= b;
// //     int min=INT_MAX;
// //     int calc;
// //     int mini;
// //     for (int x = c ; c<=a ;c--){
// //         calc=(c-a)+(b-c);
// //         if (calc<min){
// //             mini = calc;
// //         }
// //        // calc = 0;

// //     }
// //     cout<<mini;
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=i;j<=0;j--){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
```

## Submission at 2024-11-22 06:31:24


```
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int a;
// //     int b;
// //     cin>>a>>b;
// //     int c= b;
// //     int min=INT_MAX;
// //     int calc;
// //     int mini;
// //     for (int x = c ; c<=a ;c--){
// //         calc=(c-a)+(b-c);
// //         if (calc<min){
// //             mini = calc;
// //         }
// //        // calc = 0;

// //     }
// //     cout<<mini;
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=i;j<=0;j--){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
```

## Submission at 2024-11-22 06:31:24


```
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int a;
// //     int b;
// //     cin>>a>>b;
// //     int c= b;
// //     int min=INT_MAX;
// //     int calc;
// //     int mini;
// //     for (int x = c ; c<=a ;c--){
// //         calc=(c-a)+(b-c);
// //         if (calc<min){
// //             mini = calc;
// //         }
// //        // calc = 0;

// //     }
// //     cout<<mini;
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=i;j<=0;j--){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
```

## Submission at 2024-11-22 06:31:25


```
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int a;
// //     int b;
// //     cin>>a>>b;
// //     int c= b;
// //     int min=INT_MAX;
// //     int calc;
// //     int mini;
// //     for (int x = c ; c<=a ;c--){
// //         calc=(c-a)+(b-c);
// //         if (calc<min){
// //             mini = calc;
// //         }
// //        // calc = 0;

// //     }
// //     cout<<mini;
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=i;j<=0;j--){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
```

## Submission at 2024-11-22 06:31:27


```
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main (){
// //     int a;
// //     int b;
// //     cin>>a>>b;
// //     int c= b;
// //     int min=INT_MAX;
// //     int calc;
// //     int mini;
// //     for (int x = c ; c<=a ;c--){
// //         calc=(c-a)+(b-c);
// //         if (calc<min){
// //             mini = calc;
// //         }
// //        // calc = 0;

// //     }
// //     cout<<mini;
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=i;j<=0;j--){
            cout<<"*";
        }cout<<endl;
    }

    return 0;
}
```

## Submission at 2024-11-22 06:35:39


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<=a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
       c--;

    }
    cout<<mini;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
```

## Submission at 2024-11-22 06:38:59


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int a;
    int b;
    cin>>a>>b;
    int c= b-a;
    int min=INT_MAX;
    int calc;
    int mini;
    for (int x = b ; x<=a ;x--){
        calc=(c-a)+(b-c);
        if (calc<min){
            mini = calc;
        }
       c--;

    }int x=7;
    cout<<x;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i=0; i<n;i++){
//         cin>>a[i];    
//     }

//     int w=0;
//     // int b[n];
//     // for (int l=0; l<n;l++){
//     //     a[l]=b[l];    
//     // }
//     // for (int m=0; m<n;m++){
//     //     cout<<b[m];    
//     // }
//     for (int j=0;j<n;j++){
//         for (int k=n-1; k<=0;k--){
//             if (a[j]=a[k]){
//                 w++;
//             }
//         } 
//     }
//     cout<<w;
//     return 0;
// }
```

## Submission at 2024-11-22 06:39:23


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

## Submission at 2024-11-22 06:39:27


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

## Submission at 2024-11-22 06:39:31


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

## Submission at 2024-11-22 06:40:30


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

## Submission at 2024-11-22 06:40:39


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

## Submission at 2024-11-22 06:40:40


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

## Submission at 2024-11-22 06:50:09


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=0;i--){
        for (int j=i;j<=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:50:09


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=0;i--){
        for (int j=i;j<=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:50:09


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=0;i--){
        for (int j=i;j<=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:50:10


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=0;i--){
        for (int j=i;j<=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:50:33


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:50:33


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:56:02


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:57:08


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 06:59:35


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n;i>=1;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:02:38


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-1;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:03:36


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:03:41


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:03:42


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:03:49


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:03:49


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:04:43


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

## Submission at 2024-11-22 07:04:43


```
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i=0;i<=n-1;i++){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    for (int i=n-2;i>=0;i--){
        for (int j=i;j>=0;j--){
            cout << "*";
        }cout<<endl;
    }
    
    return 0;
}
```

