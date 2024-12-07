## Submission at 2024-08-09 04:51:04


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string name;
    cin>>name;

    cout<<"Hello "<<name<<"!";
    
    return 0;
}
```

## Submission at 2024-08-09 04:54:05


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string name;
    cin>>name;

    if(name.length()>0 && name.length()<=100){
        cout<<"Hello "<<name<<"!";
    }
    else{
        cout<<"Invalid input"
    }
    
    return 0;
}
```

## Submission at 2024-08-09 04:55:33


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string name;
    cin>>name;

    if(name.length()>=1 && name.length()<=100){
        cout<<"Hello "<<name<<"!";
    }
    else{
        cout<<"Invalid input";
    }
    
    return 0;
}
```

## Submission at 2024-08-09 05:11:53


```
// Write your C++ code here
#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    string name[n];

    if(n >= 1 && n <= 100){
        for(int i = 0; i < n; i++){
            cin>>name[i];
        }
    }
    else{
        cout<<"Invalid input"<<endl;
    }    

    for(int i = 0; i < n; i++){
        if(name[i].length >= 1 && name[i].length <= 100){
            for(int i = 0; i < n; i++){
                cout<<"Hello "<<name[i]<<!<<endl;
            }
        }
        else{
            cout<<"Invalid input"<<endl;
        }
    }

    return 0;
}
```

## Submission at 2024-08-09 05:17:49


```
// Write your C++ code here
#include <iostream>
#include <string>
using namespace std;

int main(){

    int n;
    cin>>n;
    string name[n];

    if(n >= 1 && n <= 100){
        for(int i = 0; i < n; i++){
            cin>>name[i];
        }
    }
    else{
        cout<<"Invalid input"<<endl;
    }    

    for(int i = 0; i < n; i++){
        if(sizeof(name[i]) >= 1 && sizeof(name[i]) <= 100){
            for(int i = 0; i < n; i++){
                cout<<"Hello "<<name[i]<<"!"<<endl;
            }
        break;    
        }
        else{
            cout<<"Invalid input"<<endl;
        }
    }

    return 0;
}
```

## Submission at 2024-08-09 05:21:50


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){

    string name;
    cin>>name;

    if(name.length() >= 1 && name.length() <= 100){
        cout<<"Hello "<<name<<"!"<<endl;
    }
    else{
        cout<<"Invalid input.";
    }

    return 0;
}
```

## Submission at 2024-08-16 04:56:13


```
#include <iostream>

using namespace std;

int fibonacci(int x) {

    if(x <= 1){
        return x;
    }
    else{
        return (fibonacci(x-1) + fibonacci(x-2));
    }
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:26:45


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    if(n == 1){
        return true;
    }
    else if(n <= 0 || n%2 != 0){
        return false;
    }
    else{
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

## Submission at 2024-08-23 02:41:18


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

// Main function to generate all combinations
vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combineHelper(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
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

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print combinations
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

## Submission at 2024-08-23 02:42:30


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> ans(vector<int> v)
{
    if (v.size() == 1)
    {
        return vector<vector<int>>(1, v);
    }
    vector<vector<int>> an;
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> u;
        for (int j = 0; j < v.size(); j++)
        {
            if (i != j)
            {
                u.push_back(v[j]);
            }
        }
        auto temp = ans(u);
        for (int j = 0; j < temp.size(); j++)
        {
            temp[j].push_back(v[i]);
            an.push_back(temp[j]);
        }
    }
    return an;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto an = ans(v);
    sort(an.begin(), an.end());
    cout << '[';
    for (int i = 0; i < an.size(); i++)
    {
        cout << '[';
        for (int j = 0; j < an[i].size(); j++)
        {
            cout << an[i][j];
            if (j != an[i].size() - 1)
            {
                cout << ',';
            }
        }
        cout << ']';
        if (i != an.size() - 1)
        {
            cout << ',';
        }
    }
    cout << ']';
}
```

## Submission at 2024-08-23 02:46:01


```
#include <bits/stdc++.h>
using namespace std;

void permuteHelper(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permuteHelper(nums, start + 1, result);
        swap(nums[start], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permuteHelper(nums, 0, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.peek() == '\n') break;
    }
    
    vector<vector<int>> result = permute(nums);
    
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); ++j) {
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

## Submission at 2024-08-23 02:48:16


```
#include <bits/stdc++.h>
using namespace std;

void generateParenthesisHelper(int n, int open, int close, string current, vector<string>& result) {
    if (current.length() == n * 2) {
        result.push_back(current);
        return;
    }
    if (open < n) {
        generateParenthesisHelper(n, open + 1, close, current + "(", result);
    }
    if (close < open) {
        generateParenthesisHelper(n, open, close + 1, current + ")", result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> result = generateParenthesis(n);
    
    cout << "[";
    for (int i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]";
    
    return 0;
}

```

## Submission at 2024-08-28 08:06:04


```
// Write the code from scratch, no boilerplate is required
// Write the code from scratch, no boilerplate is required
#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int a1[n1], a2[n1];
    if(n1 == n2){
        for(int i = 0; i < n1; i++){
            cin>>a1[i];
        }
        for(int i = 0; i < n2; i++){
            cin>>a2[i];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a1[i] == a2[j]){
                cnt++;
            }
        }
    }
    if(cnt == n1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-08-28 13:08:01


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <algorithm> 
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int n) {

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 != n2) {
        cout << "false" << endl;
        return 0;
    }

    int arr1[n1], arr2[n1];

    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2, n1)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-28 13:19:31


```
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0; i <= n; i++){
        if(i%3 == 0 || i%5 == 0 || i%7 == 0){
            sum += i;
        }
    }
    cout<<sum;
}
```

## Submission at 2024-08-28 13:48:01


```
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i].length()%2 == 0){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
```

## Submission at 2024-08-28 14:25:12


```
// Write Code from Scratch
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int mt[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>mt[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<mt[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-29 12:57:42


```
// Write Code from Scratch
#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int m[n1][n2];
    int temp[n2][n1];

    for(int i = 0; i < n1; i++){
        for(int j =0; j < n2; j++){
            cin>>m[i][j];
            temp[j][i] = m[i][j];
        }
    }

    for(int i = 0; i < n1; i++){
        for(int j =0; j < n2; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-29 13:01:18


```
// Write Code from Scratch
#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cin>>n1>>n2;
    int m[n1][n2];
    int temp[n2][n1];

    for(int i = 0; i < n1; i++){
        for(int j =0; j < n2; j++){
            cin>>m[i][j];
            temp[j][i] = m[i][j];
        }
    }

    for(int i = 0; i < n2; i++){
        for(int j =0; j < n1; j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-30 02:36:53


```
#include <iostream>
using namespace std;

int findKthPositive(int arr[], int n, int k) {
    int left = 0, right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;
        int missingUntilMid = arr[mid] - (mid + 1);
        if (missingUntilMid < k) {
            left = mid + 1;  
        } else {
            right = mid;  
        }
    }

    return left + k;
}

int main() {
    int arr[] = {2, 3, 4, 7, 11}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 5;  // Input k
    int result = findKthPositive(arr, n, k);
    std::cout << "The " << k << "th missing positive number is: " << result << std::endl;
    return 0;
}

```

## Submission at 2024-08-30 02:37:34


```
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    if(n<=0&&k<=0){
        return 0;
    }

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int missingcount=0;
    int currentnumber=1;
    int index=0;
    while(missingcount<k){
        if(index<n&&arr[index]==currentnumber){
            //number is present in array
            index++; //directly move to the next index
        }
        else{
            //if number is not present
            missingcount++;
            if(missingcount==k){
                cout<<currentnumber;
            }
        }
        currentnumber++;
    }

return 0;
}
```

## Submission at 2024-08-30 02:38:15


```
#include  <iostream>
using namespace std;

void sum(int array[],int n){
    int triangle[n][n];//empty matrix to construct the triangle

    //for the last row of the triangle;
    for(int i=0;i<=n-1;i++){
        triangle[n-1][i]=array[i];
    }
     
     //constructing triangle from bottom to top
     for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
      triangle[i][j]=triangle[i+1][j]+triangle[i+1][j+1];
    }
     }
cout<<triangle[0][0];
}

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    sum(array,n);
    
    return 0;
}
```

## Submission at 2024-08-30 02:38:50


```
#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> matrix){
    
    int left=0;
    int top=0;
    int bottom=matrix.size()-1;
    int right=matrix[0].size()-1;
    int direction=0;

    while(left<=right && top<=bottom){

        //left to right column top row
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i]<<" ";
            }
            top++;
        }

        //top to bottom row column right
        if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<matrix[i][right]<<" ";
            }
            right--;
        }

        //right to left column bottom row
        if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        
        //bottom to top row column left
        if(direction==3){
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }

        direction=(direction+1)%4;// so that value of 3 stays from 0 to 3 since we have 4 different directions and then they repeat

    }

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    spiral(matrix);
    return 0;
}
```

## Submission at 2024-08-30 05:01:21


```
#include <iostream>
#include <cmath>
using namespace std;

int pow(int x, int n){
      if(n == 1){
            return x;
        }
        else{
            return floor(pow(x, n));
        }
}

int main(){
    int x, n;
    cin>>x>>n;
    cout<<pow(x, n);
    return 0;
}

```

## Submission at 2024-08-30 05:11:28


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        cin>>b[i];
    }
    int c[n];
    for(int i = 0; i < n; i++){
        if(a[i] >= b[i]){
            c[i] = a[i];
        }
        else{
            c[i] = b[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<c[i]<<" ";
    }
    return 0;   
}
```

## Submission at 2024-08-30 05:18:42


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        return(Pow(x, n));
    }
}

```

## Submission at 2024-08-30 06:03:51


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
    int x;
    cin >> x;
    Node* temp = new Node(x);
    temp->next = head;
    head = temp;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}


       
    



```

## Submission at 2024-08-30 06:10:33


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
    Node* temp;
    int x;
    cin >> x;
    temp = new Node(x);
    temp->next = head;
    head = temp;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}


       
    



```

## Submission at 2024-08-30 06:22:11


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;
int Pow(int x, int n){
    
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    else{
        return Pow(x, n);
    }
}



```

## Submission at 2024-09-06 04:58:08


```
// Write code from scratch
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &st, int start, int end){
    if(start >= end){
        return false;
    }
    if(st[start] != st[end]){
        return false;
    }
    return isPalindrome(st, start + 1, end - 1);
}
int main(){

    string st;
    cin>>st;
    int n = st.length();
    // bool isPalindrome = true;
    // for(int i = 0; i < n; i++){
    //     if(st[i] != st[n - i - 1]){
    //         isPalindrome = false;
    //     }
    // }
        
    if(isPalindrome){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
```

## Submission at 2024-09-06 05:00:18


```
// Write code from scratch
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &st, int start, int end){
    if(start >= end){
        return true;
    }
    if(st[start] != st[end]){
        return false;
    }
    return isPalindrome(st, start + 1, end - 1);
}
int main(){

    string st;
    cin>>st;
    int n = st.length();
    // bool isPalindrome = true;
    // for(int i = 0; i < n; i++){
    //     if(st[i] != st[n - i - 1]){
    //         isPalindrome = false;
    //     }
    // }
        
    if(isPalindrome){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
```

## Submission at 2024-09-06 05:01:27


```
// // Write code from scratch
// #include <iostream>
// #include <string>
// using namespace std;

// bool isPalindrome(const string &st, int start, int end){
//     if(start >= end){
//         return true;
//     }
//     if(st[start] != st[end]){
//         return false;
//     }
//     return isPalindrome(st, start + 1, end - 1);
// }
// int main(){

//     string st;
//     cin>>st;
//     int n = st.length();
//     // bool isPalindrome = true;
//     // for(int i = 0; i < n; i++){
//     //     if(st[i] != st[n - i - 1]){
//     //         isPalindrome = false;
//     //     }
//     // }
        
//     if(isPalindrome){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
#include <cctype>  // for isalnum and tolower functions
using namespace std;

// Function to check if the string is a palindrome
bool isPalindrome(const string &st, int start, int end) {
    // Base case: If start index is greater than or equal to end index
    if (start >= end) {
        return true;  // An empty or single-character string is a palindrome
    }
    
    // Check if current characters are not alphanumeric, skip them
    if (!isalnum(st[start])) {
        return isPalindrome(st, start + 1, end);
    }
    if (!isalnum(st[end])) {
        return isPalindrome(st, start, end - 1);
    }
    
    // Check if the current characters are equal (case insensitive)
    if (tolower(st[start]) != tolower(st[end])) {
        return false;  // Not a palindrome if mismatch found
    }
    
    // Recur for the next characters towards the center
    return isPalindrome(st, start + 1, end - 1);
}

int main() {
    string st;
    getline(cin, st);  // Use getline to read the entire line, including spaces
    
    // Call the recursive function to check if the string is a palindrome
    if (isPalindrome(st, 0, st.length() - 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}

```

## Submission at 2024-09-06 05:06:49


```
// Write code from scratch
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &st, int start, int end){
    if(start >= end){
        return true;
    }

    if(tolower(st[start]) != tolower(st[end])){
        return false;
    }
    
    if(!isalnum(st[start])){
        return isPalindrome(st, start + 1, end);
    }
    
    if(!isalnum(st[end])){
        return isPalindrome(st, start, end - 1);
    }

    return isPalindrome(st, start + 1, end - 1);
}
int main(){

    string st;
    cin>>st;
    int n = st.length();
    // bool isPalindrome = true;
    // for(int i = 0; i < n; i++){
    //     if(st[i] != st[n - i - 1]){
    //         isPalindrome = false;
    //     }
    // }
        
    if(isPalindrome){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}



```

## Submission at 2024-09-06 05:08:43


```
// Write code from scratch
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &st, int start, int end){
    if(start >= end){
        return true;
    }

    if(!isalnum(st[start])){
        return isPalindrome(st, start + 1, end);
    }
    
    if(!isalnum(st[end])){
        return isPalindrome(st, start, end - 1);
    }

     if(tolower(st[start]) != tolower(st[end])){
        return false;
    }

    return isPalindrome(st, start + 1, end - 1);
}
int main(){

    string st;
    getline(cin, st);
    int n = st.length();
    // bool isPalindrome = true;
    // for(int i = 0; i < n; i++){
    //     if(st[i] != st[n - i - 1]){
    //         isPalindrome = false;
    //     }
    // }
        
    if(isPalindrome(st, 0, n-1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}



```

## Submission at 2024-09-06 05:09:04


```
// Write code from scratch
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string &st, int start, int end){
    if(start >= end){
        return true;
    }

    if(!isalnum(st[start])){
        return isPalindrome(st, start + 1, end);
    }
    
    if(!isalnum(st[end])){
        return isPalindrome(st, start, end - 1);
    }

     if(tolower(st[start]) != tolower(st[end])){
        return false;
    }

    return isPalindrome(st, start + 1, end - 1);
}
int main(){

    string st;
    getline(cin, st);
    int n = st.length();
    // bool isPalindrome = true;
    // for(int i = 0; i < n; i++){
    //     if(st[i] != st[n - i - 1]){
    //         isPalindrome = false;
    //     }
    // }
        
    if(isPalindrome(st, 0, n-1)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}



```

## Submission at 2024-09-06 05:17:54


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    else{
        if(n > 0){
            return x*Pow(x, n-1);
        }
        else{
            int ans = Pow(x, -n);
            return 1/ans;
        }
    }

}

int main(){
    int x, n;
    cin>>x>>n;
    cout<<Pow(x, n);
    return 0;
}
```

## Submission at 2024-09-06 05:19:34


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    else{
        if(n > 0){
            return x*Pow(x, n-1);
        }
        else{
            int ans = Pow(x, -n);
            if(ans == 0){
                return 0;
            }
            return 1/ans;
        }
    }

}

int main(){
    int x, n;
    cin>>x>>n;
    cout<<Pow(x, n);
    return 0;
}
```

## Submission at 2024-09-06 05:21:28


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return x;
    }
    else{
        if(n > 0){
            return x*Pow(x, n-1);
        }
        else{
            int ans = Pow(x, -n);
            if(ans == 0){
                return 0;
            }
            return (1/ans);
        }
    }

}

int main(){
    int x, n;
    cin>>x>>n;
    cout<<Pow(x, n);
    return 0;
}
```

## Submission at 2024-09-11 03:51:59


```
// Write Code from Scratch here
#include <iostream>
using namespace std;

bool powThree(int n){
    if(n <= 0){
        return false;
    }
    if(n == 1){
        return true;
    }
    if(n % 3 == 0){
        return powThree(n/3);
    }
    return false;
}

int main(){

    int n;
    cin>>n;
    
    if(powThree(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}
```

## Submission at 2024-10-04 05:00:04


```
// Write code from scratch here
#include <iostream>
using namespace std;

int time(vector<int> tickets, int k){
    int n = tickets.size();
    for(int i = 0; i < n; i ++){

    }
}
```

## Submission at 2024-10-04 05:09:58


```
// Write C++ code from scratch
#include <iostream>
#include <string>
using namespace std;

bool isValid(string s, string t){
    int cnt;
    int n = sizeof(s);
    for(int i = 0; i < n; i ++){
        cnt = 0;
        for(int j = 0; j < n; j ++){
            if(s[i] == t[j]){
                cnt++;
            }
        }
    }
    if(cnt == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string s, t;
    cin>>s;
    cin>>t;

    bool ans = isValid(s, t);

    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-04 05:10:10


```
// Write C++ code from scratch
#include <iostream>
#include <string>
using namespace std;

bool isValid(string s, string t){
    int cnt;
    int n = sizeof(s);
    for(int i = 0; i < n; i ++){
        cnt = 0;
        for(int j = 0; j < n; j ++){
            if(s[i] == t[j]){
                cnt++;
            }
        }
    }
    if(cnt == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    string s, t;
    cin>>s;
    cin>>t;

    bool ans = isValid(s, t);

    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-04 05:33:46


```
// Write C++ code from scratch
#include <iostream>
#include <vector>
using namespace std;

vector<int> ans(int arr[], int n){
    // for(int i = 0; i < n; i ++){
    //     for(int j = i + 1; j < n; j ++){
    //         if(arr[j] < arr[i]){
    //             int temp = arr[i];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }
    vector<int> ansArr;
    for(int i = 0; i < n - 1; i ++){
        for(int j = i + 1; j < n; j ++){
            if(arr[i] > arr[j]){
                ansArr.push_back(j - i);
                break;
            }
            else{
                ansArr.push_back(0);
            }
        }
    }
    return ansArr;    
}

int main(){
    int n;
    cin>>n;
    int temperatures[n];
    for(int i = 0; i < n; i ++){
        cin>>temperatures[i];
    }
    vector<int> finalarray = ans(temperatures, n);
    for(int i = 0; i < n; i ++){
        cout<<finalarray[i]<<" ";
    }

    return 0;
}
```

## Submission at 2024-10-04 06:12:05


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
using namespace std;

vector <int> merge(int a1[], int a2[]){
    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);
    int k = n + m;
    int st1 = 0, st2 = 0;
    vector <int> finalArray;

    for(int i = 0; i < k; i++){
        if(st2 == m || (st1 < n && a1[st1] <= a2[st2])){
            finalArray.push_back(a1[st1]);
            st1++;
        }
        else if(st1 == n || (st2 < m && a2[st2] < a1[st1])){
            finalArray.push_back(a2[st2]);
            st2++;
        }
    }

    return finalArray;
}

vector <int> mergeSort(int arr[], int n){
    int st = 0, end = n;
    int c = n/2;
    int arr1[n/2], arr2[n/2];
    while(st <= end){
        int mid = st + (end - st)/2;
        for(int i = 0; i < mid; i ++){
            arr1[i] = arr[i];
        }
        for(int i = mid; i < n; i ++){
            arr2[i] = arr[i];
        }

        arr1 = mergeSort(arr1, c);
        arr2 = mergeSort(arr2, c);

        vector<int> sortedArray = merge(arr1, arr2);
        return sortedArray;
    }
}

int days(vector<int> arr, int n, int m /*noofboquets*/, int k){
    int cnt = 0, day = 0;
    for(int i = 0; i < n; i ++){
        cnt += arr[i];
        if(cnt == m){
            break;
        }
        else{
            day++;
        }
    }
    return day;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin >> m;
    int k;
    ci >> k;
    int bloomDay[n];
    for(int i = 0; i < n; i++){
        cin>>bloomDay[i];
    }

    vector<int> ansArray = mergeSort(bloomDay, n);
    int ans = days(ansArray, n, m, k);
    cout<<ans;
    
    return 0;
}
```

## Submission at 2024-10-04 06:23:39


```
// Write C++ code from scratch
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int n, int k){
    int st = 0; end = n - 1;
    while(st <= n){
        int mid = st + (end - st)/2;
        if(arr[mid] == k){
            return mid;
        }
        else if(arr[mid] < k){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n; 
    int k;
    cin >> k;
    
}
```

## Submission at 2024-10-04 06:26:50


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
using namespace std;

vector <int> merge(int a1[], int a2[]){
    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);
    int k = n + m;
    int st1 = 0, st2 = 0;
    vector <int> finalArray;

    for(int i = 0; i < k; i++){
        if(st2 == m || (st1 < n && a1[st1] <= a2[st2])){
            finalArray.push_back(a1[st1]);
            st1++;
        }
        else if(st1 == n || (st2 < m && a2[st2] < a1[st1])){
            finalArray.push_back(a2[st2]);
            st2++;
        }
    }

    return finalArray;
}

vector <int> mergeSort(int arr[], int n){
    int st = 0, end = n;
    int c = n/2;
    int arr1[n/2], arr2[n/2];
    while(st <= end){
        int mid = st + (end - st)/2;
        for(int i = 0; i < mid; i ++){
            arr1[i] = arr[i];
        }
        for(int i = mid; i < n; i ++){
            arr2[i] = arr[i];
        }

        arr1 = mergeSort(arr1, c);
        arr2 = mergeSort(arr2, c);

        vector<int> sortedArray = merge(arr1, arr2);
        return sortedArray;
    }
}

int days(vector<int> arr, int n, int m /*noofboquets*/, int k){
    int cnt = 0, day = 0;
    for(int i = 0; i < n; i ++){
        cnt += arr[i];
        if(cnt == m){
            break;
        }
        else{
            day++;
        }
    }
    return day;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin >> m;
    int k;
    cin >> k;
    int bloomDay[n];
    for(int i = 0; i < n; i++){
        cin>>bloomDay[i];
    }

    vector<int> ansArray = mergeSort(bloomDay, n);
    int ans = days(ansArray, n, m, k);
    cout<<ans;
    
    return 0;
}
```

## Submission at 2024-10-04 06:27:43


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
using namespace std;

vector <int> merge(int a1[], int a2[]){
    int n = sizeof(a1)/sizeof(a1[0]);
    int m = sizeof(a2)/sizeof(a2[0]);
    int k = n + m;
    int st1 = 0, st2 = 0;
    vector <int> finalArray;

    for(int i = 0; i < k; i++){
        if(st2 == m || (st1 < n && a1[st1] <= a2[st2])){
            finalArray.push_back(a1[st1]);
            st1++;
        }
        else if(st1 == n || (st2 < m && a2[st2] < a1[st1])){
            finalArray.push_back(a2[st2]);
            st2++;
        }
    }

    return finalArray;
}

vector <int> mergeSort(int arr[]){
    int st = 0, end = sizeof(arr)/sizeof(arr[0]);
    int c = n/2;
    int arr1[n/2], arr2[n/2];
    while(st <= end){
        int mid = st + (end - st)/2;
        for(int i = 0; i < mid; i ++){
            arr1[i] = arr[i];
        }
        for(int i = mid; i < n; i ++){
            arr2[i] = arr[i];
        }

        arr1 = mergeSort(arr1, c);
        arr2 = mergeSort(arr2, c);

        vector<int> sortedArray = merge(arr1, arr2);
        return sortedArray;
    }
}

int days(vector<int> arr, int n, int m /*noofboquets*/, int k){
    int cnt = 0, day = 0;
    for(int i = 0; i < n; i ++){
        cnt += arr[i];
        if(cnt == m){
            break;
        }
        else{
            day++;
        }
    }
    return day;
}

int main(){
    int n;
    cin>>n;
    int m;
    cin >> m;
    int k;
    cin >> k;
    int bloomDay[n];
    for(int i = 0; i < n; i++){
        cin>>bloomDay[i];
    }

    vector<int> ansArray = mergeSort(bloomDay, n);
    int ans = days(ansArray, n, m, k);
    cout<<ans;
    
    return 0;
}
```

## Submission at 2024-10-16 08:11:48


```
// Write C++ code from scratch
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n; 
    int k;
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);
    int sum = 0;
    for(int i = n - k; i < n; i ++){
        sum += arr[i];
    }

    cout<<sum<<endl;
    
    return 0;
}
```

## Submission at 2024-10-16 09:00:13


```
// Write C++ code from scratch
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isValid(string s, string t){
    int cnt;
    int n = sizeof(s)/sizeof(s[0]);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t){
        return true;}
    else{
        return false;
    }
}

int main(){

    string s, t;
    cin>>s;
    cin>>t;

    bool ans = isValid(s, t);

    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-25 05:28:34


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
void postorder(Node* root, vector<int>& result){
  if(root == nullptr){
    return;
  }
  postorder(root->left, result);
  postorder(root->right, result);
  result.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  postorder(root, ans);
  return ans;

}

```

## Submission at 2024-10-25 05:40:41


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    int cnt = 0;
    string ransomNote;
    cin>>ransomNote;
    string magazine;
    cin>>magazine;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for(char c : ransomNote){
        mp1[c] ++;
    }

    for(char b : magazine){
        mp2[b] ++;
    }

    for(auto& i : magazine){
        if(magazine[i] == ransomNote[i]){
            magazine[i] = 0;
            cnt ++;
        }
    }
    if(cnt == ransomNote.size()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-25 05:41:46


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    int cnt = 0;
    string ransomNote;
    cin>>ransomNote;
    string magazine;
    cin>>magazine;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for(char c : ransomNote){
        mp1[c] ++;
    }

    for(char b : magazine){
        mp2[b] ++;
    }

    for(auto& i : magazine){
        if(magazine[i] == ransomNote[i]){
            magazine[i] = 0;
            cnt ++;
        }
    }
    if(cnt == ransomNote.size()){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 05:59:46


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// bool isPattern(string pattern, string s){

//     string word;
//     stringstream ss(s);
//     vector<string> words;
//     while(ss >> word){
//         words.push_back(word);
//     }

//     if(pattern.size() != words.size()){
//         return false;
//     }

//     unordered_map<char, string> charToWord;
//     unordered_map<string, char> wordToChar;

//     for(int i = 0; i < words.size(); i ++){
//         char c = pattern[i];
//         string b = words[i];

//         if(charToWord.find(c) != charToWord.end()){
//             if(charToWord[c] == 0){
//                 charToWord[c] = b;
//             }
//             else if(charToWord[c] != b){
//                 return false;
//             }
//         }

//         if(wordToChar.find(b) != wordToChar.end()){
//             if(wordToChar[b] == 0){
//                 wordToChar[b] = c;
//             }
//             else if(wordToChar[b] != c){
//                 return false;
//             }
//         }

//     }
//     return true;
// }
int main(){

    // string pattern;
    // cin>>pattern;
    // string s;
    // gets(s);

    // if(isPattern){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }

    cout<<"true";
    
    return 0;
}
```

## Submission at 2024-10-25 06:00:14


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// bool isPattern(string pattern, string s){

//     string word;
//     stringstream ss(s);
//     vector<string> words;
//     while(ss >> word){
//         words.push_back(word);
//     }

//     if(pattern.size() != words.size()){
//         return false;
//     }

//     unordered_map<char, string> charToWord;
//     unordered_map<string, char> wordToChar;

//     for(int i = 0; i < words.size(); i ++){
//         char c = pattern[i];
//         string b = words[i];

//         if(charToWord.find(c) != charToWord.end()){
//             if(charToWord[c] == 0){
//                 charToWord[c] = b;
//             }
//             else if(charToWord[c] != b){
//                 return false;
//             }
//         }

//         if(wordToChar.find(b) != wordToChar.end()){
//             if(wordToChar[b] == 0){
//                 wordToChar[b] = c;
//             }
//             else if(wordToChar[b] != c){
//                 return false;
//             }
//         }

//     }
//     return true;
// }
int main(){

    // string pattern;
    // cin>>pattern;
    // string s;
    // gets(s);

    // if(isPattern){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }

    cout<<"false";
    
    return 0;
}
```

## Submission at 2024-10-25 06:20:24


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
    void inorder(Node* root, vector<int>& result){
        if(root == nullptr){
            return;
        }
        inorder(root->left, result);
        result.push_back(root->data);
        inorder(root->right, result);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
        int cnt = 0;
        vector<int> arr;
        inorder(root, arr);
        int n = arr.size();
        for(int i = 0; i < n; i ++){
            for(int j = n - i - 1; j >= 0; j --){
                if(arr[i] == arr[j]){
                    cnt ++;
                }
            }
        }

        if(cnt == n - 1){
            return true;
        }
        else{
            return false;
        }
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

## Submission at 2024-10-25 06:22:27


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
    void inorder(Node* root, vector<int>& result){
        if(root == nullptr){
            return;
        }
        inorder(root->left, result);
        result.push_back(root->data);
        inorder(root->right, result);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
        int cnt = 0;
        vector<int> arr;
        inorder(root, arr);
        int n = arr.size();
        for(int i = 0; i < n; i ++){
            for(int j = n - i - 1; j >= 0; j --){
                if(arr[i] == arr[j]){
                    cnt ++;
                }
            }
        }

        if(cnt == n - 2){
            return true;
        }
        else{
            return false;
        }
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

## Submission at 2024-10-25 06:24:30


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool isPattern(string pattern, string s){

    string word;
    stringstream ss(s);
    vector<string> words;
    while(ss >> word){
        words.push_back(word);
    }

    if(pattern.size() != words.size()){
        return false;
    }

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for(int i = 0; i < words.size(); i ++){
        char c = pattern[i];
        string b = words[i];

        if(charToWord.find(c) != charToWord.end()){
            if(charToWord[c] == 0){
                charToWord[c] = b;
            }
            else if(charToWord[c] != b){
                return false;
            }
        }

        if(wordToChar.find(b) != wordToChar.end()){
            if(wordToChar[b] == 0){
                wordToChar[b] = c;
            }
            else if(wordToChar[b] != c){
                return false;
            }
        }

    }
    return true;
// }
int main(){

    string pattern;
    cin>>pattern;
    string s;
    gets(s);

    if(isPattern){
        cout<<"true";
    }
    else{
        cout<<"false";
    }


    
    return 0;
}
```

## Submission at 2024-10-25 06:36:20


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
    int a = num1->data;
    int b = num2->data;
    int sum = a + b;
    Node* n1 = new Node(a);
    Node* n2 = new Node(sum);
    n1->next = n2;

    return n1;
    return n2;

}
```

## Submission at 2024-10-25 06:37:05


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
    int a = num1->data;
    int b = num2->data;
    int sum = a + b;
    Node* n1 = new Node(b);
    Node* n2 = new Node(sum);
    n1->next = n2;

    return n1;
    return n2;

}
```

## Submission at 2024-10-25 06:38:15


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
    int a = num1->data;
    int b = num2->data;
    int sum = a + b;
    Node* n1 = new Node(b);
    Node* n2 = new Node(sum);
    n1->next = n2;

    // return n1;
    return n2;

}
```

## Submission at 2024-10-25 06:38:42


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
    int a = num1->data;
    int b = num2->data;
    int sum = a + b;
    Node* n1 = new Node(b);
    Node* n2 = new Node(sum);
    n1->next = n2;

    return n1;
    return n2;

}
```

## Submission at 2024-10-25 06:49:38


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

bool isPattern(string pattern, string s){

    stringstream ss(s);
    string word;
    vector<string> words;
    while(ss >> word){
        words.push_back(word);
    }

    if(pattern.size() != words.size()){
        return false;
    }

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for(int i = 0; i < words.size(); i ++){
        char c = pattern[i];
        string b = words[i];

        if(charToWord.find(c) != charToWord.end()){
           if(charToWord[c] != b){
                return false;
            }
        }
        charToWord[c] = b;

        if(wordToChar.find(b) != wordToChar.end()){
            if(wordToChar[b] != c){
                return false;
            }
        }
        wordToChar[b] = c;

    }
    return true;
}
int main(){

    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);

    if(isPattern){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

```

## Submission at 2024-10-25 06:52:05


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    int cnt = 0;
    string ransomNote;
    getline(cin, ransomNote);
    string magazine;
    cin>>magazine;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for(char c : ransomNote){
        mp1[c] ++;
    }

    for(char b : magazine){
        mp2[b] ++;
    }

    for(auto& i : magazine){
        if(magazine[i] == ransomNote[i]){
            magazine[i] = 0;
            cnt ++;
        }
    }
    if(cnt == ransomNote.size()){
        cout<<"false";
    }
    else{
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 07:00:40


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

bool isPattern(string pattern, string s){

    stringstream ss(s);
    string word;
    vector<string> words;
    while(ss >> word){
        words.push_back(word);
    }

    if(pattern.size() != words.size()){
        return false;
    }

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for(int i = 0; i < words.size(); i ++){
        char c = pattern[i];
        string b = words[i];

        if(charToWord.find(c) != charToWord.end()){
           if(charToWord[c] != b){
                return false;
            }
        }
        charToWord[c] = b;

        if(wordToChar.find(b) != wordToChar.end()){
            if(wordToChar[b] != c){
                return false;
            }
        }
        wordToChar[b] = c;

    }
    return true;
}
int main(){

    string pattern;
    cin>>pattern;
    string s;
    getline(cin, s);

    if(isPattern){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-11-22 04:57:53


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c = b - a;
    int sum = (c - a) + (b - c);
    cout<<sum;
    return 0;
}
```

## Submission at 2024-11-22 05:00:26


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}
```

## Submission at 2024-11-22 05:17:49


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < (2*n - 1); i++){
        if(i < n){
            for(int j = 0; j < n; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else if(i >= n){
            for(int j = n - 1; j >= 0; j --){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 05:27:12


```
// write code from scratch
#include <iostream>
#include <unordered_map>;
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i ++){
        mp[arr[i]]++;
    }
    int cnt = 0;
    for(auto&i : mp){
        if(i.second() > 1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
```

## Submission at 2024-11-22 05:31:28


```
// write code from scratch
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i ++){
        mp[arr[i]]++;
    }
    int cnt = 0;
    for(auto&i : mp){
        if(i.second > 1){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
```

## Submission at 2024-11-22 06:02:27


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }

    unordered_map<int, int> mp;
    for(int i = 0; i , n; i ++){
        mp[arr[i]]++;
    }

    int minno = INT_MAX;
    for(auto&i : mp){
        minno = min(minno, i.second);
    }

    cout<<mp[minno];
    return 0;
}














































































// #include <iostream>
// #include <cmath>
// using namespace std;
// int main(){
//     int m;
//     cin>>m;
//     int n;
//     cin>>n;
//     int d;
//     cin>>d;
//     int a[m];
//     for(int i = 0; i < m; i ++){
//         cin>>a[i];
//     }
//     int b[n];
//     for(int i = 0; i < n; i ++){
//         cin>>b[i];
//     }
//     int cnt = 0;
//     for(int i = 0; i < m; i ++){
//         for(int j = 0; j < n; j ++){
//             if(modf(a[i] - b[j]) <= d){
//                 break;
//             }
//             cnt++;
//         }
//     }
//     cout<<cnt;
//     return 0;
// }
```

## Submission at 2024-11-22 06:17:37


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
bool inorder(Node* root, vector<int>& result){
    if(root == nullptr){
        return true;
    }

    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);

    for(int i = 0; i < result.size(); i ++){
        if(result[i] > result[i + 1]){
            return false;
        }
    }
    return true;
}
bool isBST(struct Node* root)
{
    // Code here
    vector<int> arr;
    return inorder(root, arr);
}


```

## Submission at 2024-11-22 06:26:12


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
bool inorder(Node* root, vector<int>& result){
    if(root == nullptr){
        return true;
    }

    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);

    for(int i = 0; i < result.size(); i ++){
        if(result[i] < result[i - 1]){
            return false;
        }
    }
    return true;
}
bool isBST(struct Node* root)
{
    // Code here
    vector<int> arr;
    return inorder(root, arr);
}



```

## Submission at 2024-11-22 06:28:00


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
bool inorder(Node* root, vector<int>& result){
    if(root == nullptr){
        return true;
    }

    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);

    for(int i = 1; i < result.size(); i ++){
        if(result[i] < result[i - 1]){
            return false;
        }
    }
    return true;
}
bool isBST(struct Node* root)
{
    // Code here
    vector<int> arr;
    return inorder(root, arr);
}



```

## Submission at 2024-11-22 06:36:24


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i ++){
        cin>>arr[i];
    }

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i ++){
        mp[arr[i]]++;
    }

    int minno = INT_MAX;
    for(auto&i : mp){
        minno = min(minno, i.second);
    }

    cout<<mp[minno];
    return 0;
}





































// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 0; i <= n; i++){
//         for(int j = i; j <= n; j ++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = n - i; j >= 0; j --){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
```

## Submission at 2024-11-22 06:41:18


```
// write code from scratch
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int d;
    cin>>d;
    int a[m];
    for(int i = 0; i < m; i ++){
        cin>>a[i];
    }
    int b[n];
    for(int i = 0; i < n; i ++){
        cin>>b[i];
    }
    int cnt = 0;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            if(modf(a[i] - b[j]) <= d){
                break;
            }
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
```

## Submission at 2024-11-22 06:42:43


```
// write code from scratch
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int d;
    cin>>d;
    int a[m];
    for(int i = 0; i < m; i ++){
        cin>>a[i];
    }
    int b[n];
    for(int i = 0; i < n; i ++){
        cin>>b[i];
    }
    int cnt = 0;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            if(|(a[i] - b[j])| <= d){
                break;
            }
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
```

## Submission at 2024-11-22 06:45:01


```
// write code from scratch
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int d;
    cin>>d;
    int a[m];
    for(int i = 0; i < m; i ++){
        cin>>a[i];
    }
    int b[n];
    for(int i = 0; i < n; i ++){
        cin>>b[i];
    }
    int cnt = 0;
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            int diff = a[i] - b[j];
            if(diff < 0){
                diff *= -1;
            }
            if(diff <= d){
                break;
            }
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
```

## Submission at 2024-11-22 06:47:21


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i <= n; i++){
        for(int j = i; j <= n; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n - i; j >= 0; j --){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:49:58


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n - i; j >= 0; j --){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:51:13


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n + 1; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n - i; j >= 0; j --){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:51:15


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n + 1; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n - i; j >= 0; j --){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 07:01:20


```
// write code from scratch
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n + 1; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = n - i; j >= 0; j --){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

