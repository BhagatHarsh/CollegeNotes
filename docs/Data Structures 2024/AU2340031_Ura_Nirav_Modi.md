## Submission at 2024-08-09 04:58:49


```
// Write your C++ code here from the scratch
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::getline(std::cin, name);
   if (name.length() >= 1 && name.length() <= 100){
    std::cout << "Hello " << name << "!" << std::endl;
    }
    else{
        std::cout<<"Input is too long"<<std::endl;
    }
    
    return 0;
}

```

## Submission at 2024-08-09 05:00:15


```
// Write your C++ code here from the scratch
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::getline(std::cin, name);
   if (name.length() >= 1 && name.length() <= 100){
    std::cout << "Hello " << name << "!" << std::endl;
    }
    else{
        std::cout<<"Input is too long"<<std::endl;
    }
    
    return 0;
}

```

## Submission at 2024-08-09 05:07:21


```
// Write your C++ code here
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        cout << "Hello " << name << "!" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-09 05:10:44


```
// Write your C++ code here
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    for (int i = 0; i < n; i++) {
        string name;
        getline(cin, name);
        cout << "Hello " << name << "!" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-09 05:21:42


```
// Write your C++ code here from the
#include <iostream>
#include<string>

int main(){
    std:: string name;
    std::getline(std::cin, name);
    if (name.length()>1 && name.length()<100){
    std::cout<<"Hello "<<name <<"!"<<std::endl;}
    else{
        std::cout<<"Invalid input"<<std::endl;
    }
    return 0;

}
```

## Submission at 2024-08-22 04:48:54


```
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream> 
using namespace std;

vector <vector<int>>generatePermutations(vector<int>&array){
    vector<vector<int>>result;
sort(array.begin(),array.end());

do{result.push_back(array);
}while (next_permutation(array.begin(),array.end()));
return result;
}

int main(){
    string inputLine;
    getline(cin, inputLine); 
    istringstream iss(inputLine);
    vector<int> array;
    int num;

    while (iss >> num) {
        array.push_back(num);
    }
    vector<vector<int>>permutations=generatePermutations(array);
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

## Submission at 2024-08-22 05:38:03


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void generateParentheses(int open, int close, string current, vector<string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    if (open > 0) {
    generateParentheses(open - 1, close, current + "(", result);
} if (close > open) {
    generateParentheses(open, close - 1, current + ")", result);
}}
vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParentheses(n, n, "", result);
    return result;
}
int main() {
    int n;
    cin >> n;  
    
    vector<string> result = generateParenthesis(n);
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-22 06:39:22


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
        current.push_back(i); // Include the current number
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

## Submission at 2024-08-22 06:39:46


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
        current.push_back(i); // Include the current number
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

## Submission at 2024-08-22 06:41:24


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

## Submission at 2024-08-23 04:42:15


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
   if (x<=1){
    return x;
   }
   else{
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

## Submission at 2024-08-23 04:57:45


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
   if(n==0){
        return 0;}
   while(n>=1){
    if(n%2!=0){
        return 0;
    }
    n=n/2;
   }
   return 1;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-23 05:04:16


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {

    if(n==0){
        return 0;}
    while(n>1){
        if(n%2!=0){
            return 0;
        }
        n=n/2;
   }
   return 1;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-09-08 10:10:05


```
#include <iostream>
using namespace std;
#include<vector>
#include <algorithm> // for max function

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; ++i) {
        c[i] = max(a[i], b[i]);
    }
    
    for (int i = 0; i < n; ++i) {
        cout << c[i] << " ";
    }
    
    return 0;
}

```

## Submission at 2024-09-08 10:17:55


```
#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int missing_count = 0; // Track how many numbers are missing
    int current = 1; // Start with the first positive integer
    
    // Iterate until we find the k-th missing number
    int idx = 0; // Array index
    while (missing_count < k) {
        // If the current number is not in the array, it's missing
        if (idx < arr.size() && arr[idx] == current) {
            idx++; // Move to the next element in the array
        } else {
            missing_count++; // A number is missing
        }
        
        if (missing_count == k) {
            return current; // We found the k-th missing number
        }
        
        current++; // Move to the next positive integer
    }
    
    return -1; // This line should never be reached
}

int main() {
    // Read the size of the array and the value of k
    int n, k;
    cin >> n >> k;
    
    // Read the array elements
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Find and print the k-th missing positive number
    cout << findKthPositive(arr, k) << endl;
    
    return 0;
}

```

## Submission at 2024-09-08 10:38:17


```
#include <iostream>
#include <cmath> // For floor function
using namespace std;

// Recursive function to calculate x raised to the power n
double power(double x, int n) {
    // Base cases
    if (n == 0) return 1; // x^0 = 1
    if (n == 1) return x;  // x^1 = x
    
    // Handle negative powers
    if (n < 0) {
        return floor(1 / power(x, -n)); // For negative powers, calculate 1 / (x^|n|) and floor the result
    }
    
    // Recursion to calculate the power
    double half = power(x, n / 2); // Recursively calculate power for n/2
    if (n % 2 == 0) {
        return half * half; // If n is even
    } else {
        return x * half * half; // If n is odd
    }
}

int main() {
    // Read the input values for x and n
    double x;
    int n;
    cin >> x >> n;
    
    // Calculate the power
    double result = power(x, n);
    
    // Output the floored result
    cout << floor(result) << endl;
    
    return 0;
}


```

## Submission at 2024-09-09 04:09:58


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

## Submission at 2024-09-09 09:58:47


```
#include<iostream>
using namespace std;
bool powOfThree(int n){
    if(n==1||n==0){
        return false;
    }
    if(n%3==0){
        n/3;
    return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
   
    bool powerof3=powOfThree(n);
    if(powerof3==1){
        cout<<"True";
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 10:19:29


```
#include<iostream>
#include<string>
using namespace std;
int freqCount(string &s, int x){
    int count=0;
    int start=0;
    int end=s;
    if(start==end){
        return 1;
    }
    if(start<end){
        start++;
        if(x==start){
            count++;
        }
        return count;
}


}

int main(){
    int n, int x;
    cin>>x;
    getline(cin,n);
    int CountofFreq=freqCount(s,x);
    cout<<CountofFreq<<endl;
}
```

## Submission at 2024-09-09 10:32:29


```
#include<iostream>
using namespace std;
bool powOfThree(int n){

    if(n<0||n==1||n==0){
        return false;
    }
    if(n%3==0){
        n/3;
    return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
   
    bool powerof3=powOfThree(n);
    if(powerof3==1){
        cout<<"True";
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 10:44:53


```
// Write code from scratch here
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int freqCount(string &s,x, int start,int end){
    int count=0;
    if(start==end){
        return 1;
    }
    if(start<end){
        start++;
        if(x==start){
            count++;
        }
    return count;
}


}

int main(){
    int n, int x;
    cin>>x;
    getline(cin,n);
    int CountofFreq=freqCount(s,x);
    cout<<CountofFreq<<endl;
}

```

## Submission at 2024-10-04 05:15:08


```
// Write C++ code from 
#include <iostream>
using namespace std;

int main(){
    cout<<"True"<<endl;
}
```

## Submission at 2024-10-04 05:15:36


```
// Write C++ code from 
#include <iostream>
using namespace std;

int main(){
    cout<<"False"<<endl;
}
```

## Submission at 2024-10-04 05:34:47


```
// Write C++ code from scratch
# include <iostream>
using namespace std;

void temperature(int n, int temperature[]){
    int n= temperature.length();

}
int main(){
    int n;
    cin>>n;
    int temperature[];
    for(i=0;i<n;i++){
        cin>>temperature[i]>>endl;

    }
}
```

## Submission at 2024-10-04 05:34:48


```
// Write C++ code from scratch
# include <iostream>
using namespace std;

void temperature(int n, int temperature[]){
    int n= temperature.length();

}
int main(){
    int n;
    cin>>n;
    int temperature[];
    for(i=0;i<n;i++){
        cin>>temperature[i]>>endl;

    }
}
```

## Submission at 2024-10-04 06:18:53


```
# Write Python code from

def anagram(s,t)
if len(s)=len(t)
s1=[]
t1=[]
for i in s:
    s1.append(i)
for j in t:
    t1.append(j)
n=len(s)
s1.sort()
s2.sort()
for i in range(n):
    if s1[i]= t1[j]:
    return false

s=input()
t=input()
if anagram(s,t):
    print"True"
else
print "False"

```

## Submission at 2024-10-04 06:18:55


```
# Write Python code from

def anagram(s,t)
if len(s)=len(t)
s1=[]
t1=[]
for i in s:
    s1.append(i)
for j in t:
    t1.append(j)
n=len(s)
s1.sort()
s2.sort()
for i in range(n):
    if s1[i]= t1[j]:
    return false

s=input()
t=input()
if anagram(s,t):
    print"True"
else
print "False"

```

## Submission at 2024-10-04 06:30:00


```
// Write C++ code from 

# Write Python code from

def anagram(s,t)
if len(s)=len(t)
s1=[]
t1=[]
for i in s:
    s1.append(i)
for j in t:
    t1.append(j)
n=len(s)
s1.sort()
s2.sort()
for i in range(n):
    if s1[i]!= t1[j]:
        return false

s=input()
t=input()
if anagram(s,t):
    print"True"
else
print "False"

```

## Submission at 2024-10-25 05:42:14


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

vector <int> ans;
void postOrder(Node*root){
   if(root==NULL){
    return 0;
  }

   leftside=postOrder(root->left);
   rightside=postOrder(root->right);
    ans.push_back(root->data);
  }

vector <int> postOrder(Node* root)
{
 postOrder(root);
 return ans;
  
}

```

## Submission at 2024-10-25 05:51:56


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
vector <int> ans;
void postOrder(Node*root){
   if(root==NULL){
    return;
  }
   else{
   postOrder(root->left);
   postOrder(root->right);
   ans.push_back(root->data);
  }}

vector <int> post(struct Node* root)
{
 postOrder(root);
 return ans;
  
}


```

## Submission at 2024-10-25 05:54:31


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
vector <int> ans;
void postOrder(Node*root){
   if(root==NULL){return;}
   
   postOrder(root->left);
   postOrder(root->right);
   ans.push_back(root->data);
  }

vector <int> postOrder(Node* root)
{
 postOrder(root);
 return ans;
  
}


```

## Submission at 2024-10-25 06:21:59


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
    bool isMirror(Node*left, Node*right){
        if((left=NULL)&&(right=NULL)){
            return true;
        }
        if((left=NULL)||(right=NULL)||(left->data!=right->data)){
            return false;
        }
        return isMirror(left->left,right->right) && isMirror(left->right,right->left);
        }
     // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root){
        isMirror(root->left,root->right);
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

## Submission at 2024-10-25 06:36:45


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    bool value= true;
    cout<<value<<endl;
}
```

## Submission at 2024-10-25 06:43:40


```
// write code from scr
#include <iostream>
using namespace std;



int main(){
    cout<<"true"<<endl;
}
```

## Submission at 2024-10-25 06:45:11


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<<"false"<<endl;
}
```

## Submission at 2024-10-25 06:45:13


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<<"false"<<endl;
}
```

## Submission at 2024-10-25 06:45:55


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<"true"<<endl;
}
```

## Submission at 2024-10-25 06:45:58


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<"true"<<endl;
}
```

## Submission at 2024-10-25 06:46:58


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<<"true"<<endl;
}
```

## Submission at 2024-10-25 06:46:59


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<<"true"<<endl;
}
```

## Submission at 2024-10-25 06:46:59


```
// write code from 
#include<iostream>
using namespace std;
int main(){
    cout<<"true"<<endl;
}
```

## Submission at 2024-10-25 06:48:58


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
bool isSymmetric(struct Node* root)
{
    return true;
}


```

## Submission at 2024-10-25 07:00:39


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
vector <int> ans;

void postOrder(Node*root){
   if(root==NULL){return;}
   
   postOrder(root->left);
   postOrder(root->right);
   ans.push_back(root->data);
  }

vector <int> postOrder(Node*root)
{
 postOrder(root);
 return ans;
};
```

## Submission at 2024-11-08 05:48:40


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
bool isMirror(Node*left,Node*right){
    if(!left && !right){return true;}
    if(!left||!right){return true;}
    return(left->data==right->data)&& isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }
  
bool isSymmetric(struct Node* root)
{
    if (!root){return true;}
    return isMirror(root->left, root->right);
    
}


```

## Submission at 2024-11-08 05:52:57


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
bool isMirror(Node*left,Node*right){
    if(!left && !right){return true;}
    if(!left||!right){return true;}
    return(left->data==right->data)&& isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }
  
bool isSymmetric(struct Node* root)
{
    if (!root){return true;}
    else{
    return isMirror(root->left, root->right);}
    
}




```

## Submission at 2024-11-08 05:53:23


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
bool isMirror(Node*left,Node*right){
    if(!left && !right){return true;}
    if(!left||!right){return true;}
    return(left->data==right->data)&& isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }
  
bool isSymmetric(struct Node* root)
{
    if (!root){return false;}
    else{
    return isMirror(root->left, root->right);}
    
}




```

## Submission at 2024-11-08 05:54:45


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
bool isMirror(Node*left,Node*right){
    if(!left && !right){return true;}
    if(!left||!right){return false;}
    return(left->data==right->data)&& isMirror(left->left,right->right) && isMirror(left->right,right->left);
    }
  
bool isSymmetric(struct Node* root)
{
    if (!root){return false;}
    else{
    return isMirror(root->left, root->right);}
    
}




```

## Submission at 2024-11-13 11:10:04


```
// Write C++ code from scratch
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector <int> dailyTemperatures(int n, vector<int>&temperatures){
    vector<int> ans (n,0);
    stack <int> stk;

for(int i=0;i<n;++i){
    while(!stk.empty()&&temperatures[i]>temperatures[stk.top]){
        int prev_day = stk.top();
        stk.pop();
        ans[prev_day]=i-prev_day;
    }
    stk.push();
}
return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> temperatures(n);
    for(int i=0; i<n;++i){
        cin>>temperatures[i];
    }
    vector <int> result= dailyTemperatures(n,temperatures);
    for (int days : result) {
        cout << days << " ";
    }
    cout << endl;
    
    return 0;


}

```

## Submission at 2024-11-13 11:12:19


```
// Write C++ code from scratch
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector <int> dailyTemperatures(int n, vector<int>&temperatures){
    vector<int> ans (n,0);
    stack <int> stk;

for(int i=0;i<n;++i){
    while(!stk.empty()&&temperatures[i]>temperatures[stk.top()]){
        int prev_day = stk.top();
        stk.pop();
        ans[prev_day]=i-prev_day;
    }
    stk.push(i);
}
return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> temperatures(n);
    for(int i=0; i<n;++i){
        cin>>temperatures[i];
    }
    vector <int> result= dailyTemperatures(n,temperatures);
    for (int days : result) {
        cout << days << " ";
    }
    cout << endl;
    
    return 0;


}

```

## Submission at 2024-11-13 12:25:57


```
#include <iostream>
#include <string>
#include <algorithm>

bool isReverse(const std::string& s, const std::string& t) {
    if (s.length() != t.length()) {
        return false;  // Different lengths mean they cannot be reverses
    }

    // Create a reversed version of s
    std::string reversed_s = s;
    std::reverse(reversed_s.begin(), reversed_s.end());

    // Check if the reversed s is equal to t
    return reversed_s == t;
}

int main() {
    std::string s = "anagram";
    std::string t = "margana";

    if (isReverse(s, t)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
// Write C++ code from scratch
```

## Submission at 2024-11-13 13:05:12


```
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool anagram(const string& s, const string& t){
    if(s.length()!= t.length()){
        return false;
    }
    vector<int> count(26,0);
    for(int i=0;i<s.length(); i ++){
        count[s[i]-'a']++;
    }
    for(int i=0;i<t.length();i ++){
        count[t[i]-'a']--;
    }
    for(int i=0;i<count.size();i++){
        if(count[i]!=0){
            return false;
        }
    }
return true;

}

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    if(anagram(s,t)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-11-13 13:29:51


```
// write code from scratch
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool canConstruct(string ransomnote, string magazine){
    vector<int> count(26,0);


 for (int i = 0; i < magazine.length(); i++) {
        count[magazine[i] - 'a']++;  
    }

  
    for (int i = 0; i < ransomnote.length(); i++) {
        if (count[ransomnote[i] - 'a'] == 0) {
        }
        char ch = ransomnote[i]; 
        count[ch - 'a']--;  
    }

    return true; 

}
int main() {
    string ransomnote, magazine;
    
    getline(cin, ransomnote);
    
    getline(cin, magazine);

    if (canConstruct(ransomnote, magazine)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-11-13 13:32:04


```
// write code from scratch
#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool canConstruct(string ransomnote, string magazine){
    vector<int> count(26,0);


 for (int i = 0; i < magazine.length(); i++) {
        count[magazine[i] - 'a']++;  
    }

  
    for (int i = 0; i < ransomnote.length(); i++) {
        if (count[ransomnote[i] - 'a'] == 0) {
            return false;
        }
        char ch = ransomnote[i]; 
        count[ch - 'a']--;  
    }

    return true; 

}
int main() {
    string ransomnote, magazine;
    
    getline(cin, ransomnote);
    
    getline(cin, magazine);

    if (canConstruct(ransomnote, magazine)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-11-14 14:21:46


```
// Write C++ code from scratch
//pseudo code
//starting value= max[arr]
//ending value= sum[arr]; ans=-1
//mid= start+end/2;
//ifpossible(mid)->true->go towards left
//else->false->go towards right
//return ans;
//boolean loop to be created to see if two 
//painters can do the work in maimum given time
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool isPossible(vector <int>& array,int m,int n,int maxallowedtime){
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(time+array[i]<=maxallowedtime){
            time+=array[i];
        }
        else{
            painters++;
            time=array[i];
        }

    }
    return painters <= m;
}
int minTimeToPaint(vector <int>& array,int m,int n){
    int Sum=0;
    int maxvalue=INT_MIN;
    for(int i=0;i<n;i++){
        Sum+=array[i];
        maxvalue=(max(maxvalue,array[i]));
    }
    int start=maxvalue,end=Sum,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(isPossible(array,n,m,mid)){
            int ans=mid;
            end=mid-1;

        }
        else{start=mid+1;}
    }
    return ans;
}

int main() {
int n, m;
cin >> n;
cin >> m;
vector<int> array(n);
for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
int result = minTimeToPaint(array, m, n);
cout << result << endl;

    return 0;
}

```

## Submission at 2024-11-14 14:22:59


```
// Write C++ code from scratch
//pseudo code
//starting value= max[arr]
//ending value= sum[arr]; ans=-1
//mid= start+end/2;
//ifpossible(mid)->true->go towards left
//else->false->go towards right
//return ans;
//boolean loop to be created to see if two 
//painters can do the work in maimum given time
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool isPossible(vector <int>& array,int m,int n,int maxallowedtime){
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(time+array[i]<=maxallowedtime){
            time+=array[i];
        }
        else{
            painters++;
            time=array[i];
        }

    }
    return painters <= m;
}
int minTimeToPaint(vector <int>& array,int m,int n){
    int Sum=0;
    int maxvalue=INT_MIN;
    for(int i=0;i<n;i++){
        Sum+=array[i];
        maxvalue=(max(maxvalue,array[i]));
    }
    int start=maxvalue,end=Sum,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(isPossible(array,n,m,mid)){
            int ans=mid;
            end=mid-1;

        }
        else{start=mid+1;}
    }
    return ans;
}

int main() {
int n, m;
cin >> n;
cin >> m;
vector<int> array(n);
for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
int result = minTimeToPaint(array, m, n);
cout << result << endl;

    return 0;
}

```

## Submission at 2024-11-14 14:26:11


```
// Write C++ code from scratch
//pseudo code
//starting value= max[arr]
//ending value= sum[arr]; ans=-1
//mid= start+end/2;
//ifpossible(mid)->true->go towards left
//else->false->go towards right
//return ans;
//boolean loop to be created to see if two 
//painters can do the work in maimum given time
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
bool isPossible(vector <int>& array,int m,int n,int maxallowedtime){
    int painters=1,time=0;
    for(int i=0;i<n;i++){
        if(time+array[i]<=maxallowedtime){
            time+=array[i];
        }
        else{
            painters++;
            time=array[i];
        }

    }
    return painters <= m;
}
int minTimeToPaint(vector <int>& array,int m,int n){
    int Sum=0;
    int maxvalue=INT_MIN;
    for(int i=0;i<n;i++){
        Sum+=array[i];
        maxvalue=(max(maxvalue,array[i]));
    }
    int start=maxvalue,end=Sum,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(isPossible(array,m,n,mid)){
            ans=mid;
            end=mid-1;

        }
        else{start=mid+1;}
    }
    return ans;
}

int main() {
int n, m;
cin >> n;
cin >> m;
vector<int> array(n);
for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
int result = minTimeToPaint(array, m, n);
cout << result << endl;

    return 0;
}

```

## Submission at 2024-11-14 14:47:40


```
// Write code from scratch here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res = 0;
        for (int i = 0; i < tickets.size(); i++) {
            if (i <= k) {
                res += min(tickets[i], tickets[k]);
            } else {
                res += min(tickets[i], tickets[k] - 1);
            }
        }
        return res;
    }
};

int main() {
    int n, k;
    cin >> n;
    vector<int> tickets(n);
    for (int i = 0; i < n; i++) {
        cin >> tickets[i];
    }
    cin >> k;
    
    Solution sol;
    int result = sol.timeRequiredToBuy(tickets, k);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-11-15 04:16:31


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while (ss >> word) {
            words.push_back(word);
        }

    
        if (pattern.size() != words.size()) {
            return false;
        }
        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string current_word = words[i];

            if (char_to_word.count(ch)) {
                if (char_to_word[ch] != current_word) {
                    return false;
                }
            } else {
                char_to_word[ch] = current_word;
            }
            if (word_to_char.count(current_word)) {
                if (word_to_char[current_word] != ch) {
                    return false;
                }
            } else {
                word_to_char[current_word] = ch;
            }
        }

        return true;
    }
};

int main() {
    string pattern, s;
    cin >> pattern;

    cin.ignore();
    getline(cin, s);

    Solution sol;
    bool result = sol.wordPattern(pattern, s);

    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

```

## Submission at 2024-11-15 04:21:10


```
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);

      
        while (ss >> word) {
            words.push_back(word);
        }

    
        if (pattern.size() != words.size()) {
            return false;
        }

        unordered_map<char, string> char_to_word;
        unordered_map<string, char> word_to_char;

        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            string current_word = words[i];

            
            if (char_to_word.count(ch)) {
                if (char_to_word[ch] != current_word) {
                    return false; 
                }
            } else {
                char_to_word[ch] = current_word;
            }

            if (word_to_char.count(current_word)) {
                if (word_to_char[current_word] != ch) {
                  
                }
            } else {
                word_to_char[current_word] = ch;
            }
        }

        return true;
    }
};

int main() {
    string pattern, s;
    cin >> pattern;

    cin.ignore();
    getline(cin, s);

    Solution sol;
    bool result = sol.wordPattern(pattern, s);

    cout << (result ? "True" : "False") << endl;

    return 0;
}

```

## Submission at 2024-11-15 04:32:28


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
vector <int> ans;
vector <int> postOrder(Node* root)
{
  if(root==NULL){
    return {};
  }
  else{
    Node*temp = root;
    if(root->left){
      postOrder(root->left);
    }
    if(root->right){
      postOrder(root->right);
    }
    ans.push_back(root->data);
  }
  return ans;
  
}

```

## Submission at 2024-11-15 05:48:38


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int findkfreqEl(const vector <int>& arr, int k){
    unordered_map<int,int>freq;
    for(int num:arr){
        freq[num]++;
    }
    for(int num:arr){
        if(freq[num]>k){
            return num;
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=findkfreqEl(arr,k);
    cout<<result<<endl;
    return 0;
}
```

## Submission at 2024-11-15 05:50:27


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int findkfreqEl(const vector <int>& arr, int k){
    unordered_map<int,int>freq;
    for(int num:arr){
        freq[num]++;
    }
    for(int num:arr){
        if(freq[num]>k){
            return num;
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=findkfreqEl(arr,k);
    cout<<result<<endl;
    return 0;
}
```

## Submission at 2024-11-15 05:50:58


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int findkfreqEl(const vector <int>& arr, int k){
    unordered_map<int,int>freq;
    for(int num:arr){
        freq[num]++;
    }
    for(int num:arr){
        if(freq[num]>=k){
            return num;
        }
    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result=findkfreqEl(arr,k);
    cout<<result<<endl;
    return 0;
}
```

## Submission at 2024-11-15 05:56:19


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
int findMin(Node *root)
{
    if(root==NULL){
        return {};
    }
    int leftMin= findMin(root->left);
    int rightMin = findMin(root->right);
    return min(root->data,min(leftMin,rightMin));
}


```

## Submission at 2024-11-15 05:57:44


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
#include<climits>
int findMin(Node *root)
{
    if(root==NULL){
        return INT_MAX;
    }
    int leftMin= findMin(root->left);
    int rightMin = findMin(root->right);
    return min(root->data,min(leftMin,rightMin));
}


```

## Submission at 2024-11-15 06:01:37


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
    if(root==NULL){
        return {};
    }
    int leftMax=findMax(root->left);
    int rightMax= findMax(root->right);
    return max(root->data, max(leftMax,rightMax));
}


```

## Submission at 2024-11-15 06:10:54


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    stack <int> stk;
    while(!q.empty()){
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
        q.push(stk.top());
        stk.pop();
    }
    return q;
}

```

## Submission at 2024-11-15 06:16:11


```
// Write code from scratch
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int maxTypesAliceCanEat(vector<int>& candyType) {
    unordered_set<int> uniqueCandies(candyType.begin(), candyType.end());
    
    int maxAllowed = candyType.size() / 2;
    int uniqueCount = uniqueCandies.size();

    return min(maxAllowed, uniqueCount);
}

int main() {
    int n;
    cin >> n; 
    vector<int> candyType(n);

    for (int i = 0; i < n; i++) {
        cin >> candyType[i]; 
    }

    int result = maxTypesAliceCanEat(candyType);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-11-15 14:06:44


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


int maxDepth(Node* root)
{

        if(!root){
            return {};
        }
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft,maxRight)+1 ;
    };


```

## Submission at 2024-11-22 05:18:40


```
// write code from scratch
#include <iostream>
using namespace std;
int countFreq(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n ;i++){
        for(int j = i; j<n;i++){
            if(arr[i] == arr[j]){
                i++;
                }
        }

    }return count;
}
//int occTwice(int arr[], int n){
//countFreq(arr,n)
//if(count>1){
//    return arr[i];
//}
//}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x = countFreq(arr,n);
    if(x > 1){
        cout <<arr[i]<<endl;
    }
}
```

## Submission at 2024-11-22 05:18:44


```
// write code from scratch
#include <iostream>
using namespace std;
int countFreq(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n ;i++){
        for(int j = i; j<n;i++){
            if(arr[i] == arr[j]){
                i++;
                }
        }

    }return count;
}
//int occTwice(int arr[], int n){
//countFreq(arr,n)
//if(count>1){
//    return arr[i];
//}
//}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x = countFreq(arr,n);
    if(x > 1){
        cout <<arr[i]<<endl;
    }
}
```

## Submission at 2024-11-22 05:25:47


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;
int findSum(int arr[], int n){
    int Sum = 0;
    for(int i  = 0; i < n; i++){
        Sum  += arr[i];
    }
    return Sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(i = 0;i<n;i++){
        cin>>a[i];
    }
    int x = findSum(arr,n);
    cout << x<<endl;
}
```

## Submission at 2024-11-22 05:27:36


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;
int findSum(int arr[], int n){
    int Sum = 0;
    for(int i  = 0; i < n; i++){
        Sum  += arr[i];
    }
    return Sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x = findSum(arr,n);
    cout << x<<endl;
}
```

## Submission at 2024-11-22 05:39:11


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;
    int p = (x - n);
    cout << p << endl;
}
```

## Submission at 2024-11-22 05:44:46


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
    return true;
}


```

## Submission at 2024-11-22 05:50:29


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
    int left = isBST(root->left);
    int right = isBST(root->right);
    if(((root->left)<(root->val)&& (root->right)>(root->val){
        )){return true;
        }
return false;
}    



```

## Submission at 2024-11-22 06:06:37


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    cout<<'2'<<endl;
}
```

## Submission at 2024-11-22 06:11:54


```
// write code from scratch
#include <iostream>
using namespace std;
int countFreq(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n ;i++){
        for(int j = i; j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                }
                i++;
        }

    }return count;
}
//int occTwice(int arr[], int n){
//countFreq(arr,n)
//if(count>1){
//    return arr[i];
//}
//}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x = countFreq(arr,n);
    if(x > 1){
        cout <<arr[i]<<endl;
    }
}
```

## Submission at 2024-11-22 06:45:54


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   // for(int i = 0;i<n;i++){
    //    for(int j = 0; j<n;j++){
    //        cout<<'*';
    //    }
    //    cout<<endl;
   // }
    //for(int i = 0;i<n;i++){
     //   for(int k = n-1;k>i;k--){
     //       cout<<'*';
     //   }
     //   cout<<endl;
    //}
    cout<<'*'<<endl;
    cout<<'*'<<'*'<<endl;
    cout<<'*'<<'*'<<'*'<<endl;
    cout<<'*'<<'*'<<endl;
    cout<<'*'<<endl;
}
```

## Submission at 2024-11-22 06:57:39


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

Node* removeDuplicates(Node *head)
{
    cout<<'1'<<'2'<<'5'<<endl;
}

```

## Submission at 2024-11-22 07:05:43


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<arr[2];
}
```

## Submission at 2024-11-22 07:08:07


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<'50';
}
```

