## Submission at 2024-08-16 04:56:55


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0; 
    }
    else if(x==1){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
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

## Submission at 2024-08-16 05:39:22


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

## Submission at 2024-08-16 05:40:01


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

## Submission at 2024-08-22 12:06:19


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

## Submission at 2024-08-22 12:09:47


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

## Submission at 2024-08-22 12:24:52


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

## Submission at 2024-08-22 12:28:54


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

## Submission at 2024-08-28 07:38:52


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

## Submission at 2024-08-28 07:41:31


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

## Submission at 2024-08-29 13:33:36


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

## Submission at 2024-08-29 13:34:15


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

## Submission at 2024-08-29 13:34:43


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
   
    cin>>n;
    cout<<sum(n);
    
    
    
}
```

## Submission at 2024-08-29 13:36:33


```
#include<iostream>
using namespace std;

int count(int a){
    int i=0;
    
    while(a!=0){
        a%10;
        i++;
        a=a/10;
    }
    return i;
}

int c(int arr[],int n){
    int i,m=0;
    for(i=0;i<n;i++){
        int d=count(arr[i]);
        if(d%2==0){
            m++;
        }
        
    }
    return m;
}

int main(){
    //cout<<count(12347435);
    int h;
    int arr[100];
    //cout<<"Enter h";
    cin>>h;
    
    for(int i=0;i<h;i++){
        cin>>arr[i];
    }
    //cout<<"Total";
    cout<<c(arr,h);
}
```

## Submission at 2024-08-29 13:37:23


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

## Submission at 2024-08-29 13:38:21


```
#include<iostream>
using namespace std;

void display(int p[1001][1001],int q,int r){
    for(int x=0;x<q;x++){
        for(int y=0;y<r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[1001][1001],int l,int m){
    int i,j,a1[1001][1001];
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,m,l);
}

int main(){
    int b[1001][1001];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;

    
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    transpose(b,i,j);
}
```

## Submission at 2024-08-29 13:39:14


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

## Submission at 2024-08-29 13:39:14


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

## Submission at 2024-08-30 05:32:33


```
// Write code from scratch
#include<iostream>

enter namespace;

int(i=0;i<n/2;i+1);
    if(size of a[i]== b[i]){
        c[i] = max{a[i] & b[i]};
    }
    else {
    
    }

int main(){
    cin<<a[i]<<b[i]
    cout>>('Sizes of arrays doen't match')
    return 0;
}

```

## Submission at 2024-08-30 05:32:33


```
// Write code from scratch
#include<iostream>

enter namespace;

int(i=0;i<n/2;i+1);
    if(size of a[i]== b[i]){
        c[i] = max{a[i] & b[i]};
    }
    else {
    
    }

int main(){
    cin<<a[i]<<b[i]
    cout>>('Sizes of arrays doen't match')
    return 0;
}

```

## Submission at 2024-08-30 05:37:56


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>

iostream namespace;

Pow(x,n);
    
int main(){
    int x,n;
    cin<<x<<n

    cout>>(the nth power of x is())
    return 0;
}
```

## Submission at 2024-08-30 05:47:40


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>

Pow(x,n)


    
int main(){
    int x,n;
    cin<<x<<n

    cout>>(the nth power of x is())
    return 0;
}
```

## Submission at 2024-08-30 06:05:42


```
// Write code from scratch
#include<iostream>

    if(size of a[i]== b[i]){
        c[i] = max{a[i] & b[i]};
    }
    else {
    
    }

int main(){
    cin<<a[i]<<b[i]
    cout>>(Sizes of arrays doen't match)
    return 0;
}
```

## Submission at 2024-09-06 04:42:45


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int x,int y){
    if(x!=y){
        return false;
        
    }
    for(int i=0;i<x;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,f;
    //cout<<"Enter the number of elements you want for array 1:";
    cin>>n;
    //cout<<"Enter the number of elements you want for array 2:";
    cin>>f;
    int arr1[100];
    int arr2[100];

    //cout<<"Array one is:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //cout<<"Array two is:";
    for(int i=0;i<f;i++){
        cin>>arr2[i];
    }

    //int arr1[]={5,4,3,2,1};
    //int arr2[]={1,2,3,5,4};
    ascending(arr1,n);
    //cout<<"arr1 is:";
    //display(arr1,n);
    //cout<<endl;
    ascending(arr2,f);
    //cout<<"arr2 is";
    //display(arr2,f);
    //cout<<endl;
    
    //cout<<check(arr1,arr2,n,f);
    if (check(arr1,arr2,n,f)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    
}
```

## Submission at 2024-10-04 06:13:06


```
#include<iostream>
using namespace std;

int binarySearch(int str[], int low, int high,int x){
    while (low <= high){
        int mid = low + (high - low)/2
    if (x = str[mid]){
        return mid;
    }
    if (x < str[mid]){
        high = mid - 1;
    }
    }
    return -1;
}
int main (void){
    int str[];
    str[t] = anagram;
    int sizeof (str[])/(str[0])
    int result binarySearch (str[], n-1)
    result == -1
    cout<<"Given string is anagram of s"
}
```

## Submission at 2024-10-04 06:13:07


```
#include<iostream>
using namespace std;

int binarySearch(int str[], int low, int high,int x){
    while (low <= high){
        int mid = low + (high - low)/2
    if (x = str[mid]){
        return mid;
    }
    if (x < str[mid]){
        high = mid - 1;
    }
    }
    return -1;
}
int main (void){
    int str[];
    str[t] = anagram;
    int sizeof (str[])/(str[0])
    int result binarySearch (str[], n-1)
    result == -1
    cout<<"Given string is anagram of s"
}
```

## Submission at 2024-10-25 05:41:02


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

## Submission at 2024-10-25 05:43:18


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

## Submission at 2024-10-25 05:51:14


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
}
```

## Submission at 2024-10-25 05:52:59


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
}
```

## Submission at 2024-11-22 04:57:51


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
}


```

## Submission at 2024-11-22 05:45:58


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
    
}


```

## Submission at 2024-11-22 05:47:23


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
        int 1 2 3 5;
        key = 2;
        if(Node<key)
        Node = Node*left
        else if (Node>key)
        Node = Node*right
        else
        Node = Node*root
    }
}


```

## Submission at 2024-11-22 06:03:02


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
}


```

## Submission at 2024-11-22 06:03:22


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
}


```

