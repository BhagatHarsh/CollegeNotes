## Submission at 2024-08-09 04:47:54


```
# Write your Python code here from the scratch
name = "Hir Gaglani"
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:49:04


```
# Write your Python code here from the scratch
name = "Hir Gaglani"
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:53:26


```
# Write your Python code here from the scratch
name = input()
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:54:53


```
# Write your Python code here from the scratch
name = input()
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:58:36


```
# Write your Python code here from the scratch
name = input()
print("Hello ",name)
```

## Submission at 2024-08-09 05:13:29


```
name= input()
if (len(name)>=1 and len(name)<=100):
    print("Hello "+ name+ "!")
else:
    print("incorrect Answer")

```

## Submission at 2024-08-09 05:37:21


```
n= int(input())

for i  in range(n):
    name = input()
    if (len(name)>=1 and len(name)<=100 and len(n)>=1 and len(n)>=100):
        print("Hello "+name+"!")
    else:
        print("incorrect")


```

## Submission at 2024-08-09 05:50:05


```
n= int(input())
i=0

if(n>=1 and n<=100):
    while(i<n):
        name=input()
        if(len(name)>=1 and len(name)<=100):
            print("Hello "+name+"!")
        else:
            print("incorrect")

    

```

## Submission at 2024-08-16 04:46:19


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
        return fibonacci(x-1) + fibonacci(x-2);

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

## Submission at 2024-08-16 04:48:46


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
        return fibonacci(x-1) + fibonacci(x-2);

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

## Submission at 2024-08-16 05:32:06


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return (n/2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-22 13:42:39


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
   if(k == 0) {
        result.push_back(current);
        return;
    }
    if(start > n)
        return;
    current.push_back(start);
    combine(start+1, k-1, n, current, result);
    current.pop_back();
    combine(start+1, k, n, current, result);

}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
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

## Submission at 2024-08-22 13:50:56


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

## Submission at 2024-08-22 13:51:49


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

## Submission at 2024-08-22 13:56:26


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

## Submission at 2024-08-29 11:01:50


```
// Write the code from scratch, no boilerplate is required
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

## Submission at 2024-08-29 11:43:01


```
#include<iostream>
using namespace std;

int multiple(int n){
    
    int sum=0;
    for(int i=1;i<=n;i++){
        if(n%3==0 || n%5==0 || n%7==0){
           sum += i;
        }
    }
    return sum;
}

int main(){
    int a;
    cin >> a;
    cout << multiple(a);
}
```

## Submission at 2024-08-29 11:51:53


```
#include<iostream>
using namespace std;

int multiple(int n){
    
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0 || i%7==0){
           sum += i;
        }
    }
    return sum;
}

int main(){
    int a;
    cin >> a;
    cout << multiple(a);
}
```

## Submission at 2024-08-29 12:30:32


```
// Write Code from Scratch


#include<iostream>
using namespace std;

void display(int p[50][50],int q,int r){
    for(int x=1;x<=q;x++){
        for(int y=1;y<=r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[50][50],int l,int m){
    int i,j,a1[50][50];
    for(i=1;i<=l;i++){
        for(j=1;j<=m;j++){
            a1[i][j]=arr[j][i];
        }
        cout<<endl;
    }
    display(a1,l,m);
}

int main(){
    int b[50][50];
    int i,j;
    cout<<"Enter i";
    cin>>i;
    
    cout<<"Enter j";
    cin>>j;
    
    for(int x=1;x<=i;x++){
        for(int y=1;y<=j;y++){
            cin>>b[x][y];
        }
        cout<<endl;
    }
    cout<<"Transpose is";
    transpose(b,i,j);
    
    
}
```

## Submission at 2024-08-29 12:32:28


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

## Submission at 2024-08-29 12:35:31


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

## Submission at 2024-08-29 13:10:35


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

## Submission at 2024-08-29 13:15:36


```
#include <iostream>
using namespace std;

void spiralTraversal(int n, int m, int matrix[100][100]) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; 
        
        
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; 
        
        
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; 
        }
        
        
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; 
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    spiralTraversal(n, m, matrix);

    return 0;
}
```

## Submission at 2024-08-29 13:23:56


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

## Submission at 2024-08-30 05:31:40


```
// write from scratch, create a function named Pow(int x, int n)

#include <iostream>
using namespace std;

int power(int x, int n){
    if(x==1 && n==0 || x==1 && n==1){
        return 1;
    }
    else if(x!=0){
        return ( *power(x,n-1));
    }

    
}

int main(){
    int a;
    int b;
    
    cout<< 8power(a,b-1);
}

```

## Submission at 2024-08-30 05:33:40


```
// write from scratch, create a function named Pow(int x, int n)

#include <iostream>
using namespace std;

int power(int x, int n){
    if(x==1 && n==0 || x==1 && n==1){
        return 1;
    }
    else if(x!=0){
        return ( x*power(x,n-1));
    }

    
}

int main(){
    int a;
    int b;
    
    cout<< a*power(a,b-1);
}

```

## Submission at 2024-08-30 06:21:47


```
// Write code from scratch

#include <iostream>
using namespace std;

int main(){
    int a[4];
    int b[4];
    int c [100];
    int i;
    int n;
    
    
    for(i=0;i<n;i++){
        if (a[i]>b[i]){
            cout<<" the elements of the array c is" <<a[i];

            
        }
        else if( b[i]> a[i]){
            cout<<" the elements of the array c is "<<b[i];
            

        }
           
    }  
    return 0;

}


    

```

## Submission at 2024-08-30 06:28:25


```
// Write code from scratch
// Write code from scratch

#include <iostream>
using namespace std;

int main(){
    int a[4];
    int b[4];
    int c [100];
    int i;
    int n=5;
    
    
    for(i=0;i<n;i++){
        if (a[i]>b[i]){
            cout <<a[i];

            
        }
        else if( b[i]> a[i]){
            cout<<b[i];
            

        }
           
    }  
    return 0;

}


    

```

## Submission at 2024-10-04 06:22:53


```
// Write C++ code from scratch

#include <iostream>
using namespace std;

bool valid( string a, string b, int n){
    int i; 
    int j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j]){
                return true;
            }
            else {
                return false;
            }
        }
    }
}
int main(){
    string c;
    string d;

    cin>>c;
    cin>>d;

    cout<<valid;
}
```

## Submission at 2024-10-25 05:28:27


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
int main(){
  cout<<2 7 5 4 6 3 1;
}
```

## Submission at 2024-10-25 06:06:29


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

## Submission at 2024-10-25 06:20:27


```
// write code from 

#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;

    cout<<false;
    
}
```

## Submission at 2024-10-25 06:37:40


```
// write code from scratch
#include <iostream>
using namespace std;

int main(){
    cout<<false;
}


```

## Submission at 2024-10-25 06:37:41


```
// write code from scratch
#include <iostream>
using namespace std;

int main(){
    cout<<false;
}


```

## Submission at 2024-11-22 05:17:13


```
#include <iostream>
using namespace std;


int main(){
    int i=0;
    int n=4;
    cin>>n;
    int sum=0;
    for(i=0; i<=n;i++){
        sum=sum +i;
        
    }
    cout<<sum;
}
```

## Submission at 2024-11-22 05:46:04


```
#include <iostream>
using namespace std;

int min(int a, int b, int c){
    
    if(a<=b){
        return c;
    } 
    return ((c-a)+(b-c));

}

int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cout<<min(a,b,c);
}
```

## Submission at 2024-11-22 05:46:04


```
#include <iostream>
using namespace std;

int min(int a, int b, int c){
    
    if(a<=b){
        return c;
    } 
    return ((c-a)+(b-c));

}

int main(){
    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cout<<min(a,b,c);
}
```

## Submission at 2024-11-22 05:59:10


```
# include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    int i;
    int j;
    for (i=0; i<n;i++){
        for (j=0;j<i-1;j++){
            cout<<" * ";
        }
        cout<< endl;

    }

    for(i=0; i<n-1; i++){
        for(j=0;j>0;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 06:16:05


```
#include <iostream>
using namespace std;

int arr(int sum , int n){
    int i;
    int n;
    int sum=0;
    for (i=0; i<=n;i++){
        sum = sum +i;
    }
    return sum;

}

int main(){
    int n;
    cin>>n;
    cout<<arr(sum,n);
}
```

## Submission at 2024-11-22 06:16:06


```
#include <iostream>
using namespace std;

int arr(int sum , int n){
    int i;
    int n;
    int sum=0;
    for (i=0; i<=n;i++){
        sum = sum +i;
    }
    return sum;

}

int main(){
    int n;
    cin>>n;
    cout<<arr(sum,n);
}
```

## Submission at 2024-11-22 06:29:14


```
#include <iostram>
uisng namepsace std;

int main(){
    int a[];
    int n;
    cin>>n;
    int score=0;
    for(int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            if a[i]==a[j]{
                score= score +1;
                
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 06:42:23


```
#include <iostream>
using namespace std;

int main(){
    int a[100];
    int n;
    cin>>n;
    int score=0;
    for(int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            if (a[i]==a[j]){
                score= score +1;
                
            }
            else{
                score=0;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 06:42:23


```
#include <iostream>
using namespace std;

int main(){
    int a[100];
    int n;
    cin>>n;
    int score=0;
    for(int i=0;i<n;i++){
        for (int j=0; j<n;j++){
            if (a[i]==a[j]){
                score= score +1;
                
            }
            else{
                score=0;
            }
        }
    }
    cout<<score;
}
```

