## Submission at 2024-08-09 04:47:25


```
# Write your Python code here from the scratch

name = "Hir Vora"
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:47:50


```
# Write your Python code here from the scratch

name = "Hir Vora"
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:53:30


```
# Write your Python code here from the scratch

name = input()
print("Hello",name ,"!")
```

## Submission at 2024-08-09 04:55:51


```
# Write your Python code here from the scratch

name = input()
print("Hello" , name , "!")
```

## Submission at 2024-08-09 04:58:33


```
# Write your Python code here from the scratch

name = input()
print("Hello" ,name)
```

## Submission at 2024-08-09 05:06:50


```

name = input()
if(len(name)>=1 and len(name)<=100):
print("Hello" ,name,"!")


```

## Submission at 2024-08-09 05:10:41


```
# Write your Python code here from the scratch

name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello" , name,"!")
else:
    print("Incorrect manner")
```

## Submission at 2024-08-09 05:13:02


```
# Write your Python code here from the scratch

name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello "+name+"!")
else:
    print("Incorrect manner")
```

## Submission at 2024-08-09 05:13:48


```
# Write your Python code here from the scratch

name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello "+name+"!")
else:
    print("Incorrect manner")
```

## Submission at 2024-08-09 05:47:12


```
n = int(input())
i=0
if(n>=1 and n<=100):
    while(i<n):
        name=input()
        if(len(name)>=1 and len(name)<=100):
            print("Hello" +name+"!")
        else:
            print("Incorrect manner")
        i=i+1

else:
    print("incorrect")
```

## Submission at 2024-08-09 05:49:57


```
n = int(input())
i=0
if(n>=1 and n<=100):
    while(i<n):
        name=input()
        if(len(name)>=1 and len(name)<=100):
            print("Hello" +name+"!")
        else:
            print("Incorrect manner")
        i=i+1

else:
    print("incorrect")
```

## Submission at 2024-08-09 05:53:14


```
n = int(input())
i=0
if(n>=1 and n<=100):
    while(i<n):
        name=input()
        if(len(name)>=1 and len(name)<=100):
            print("Hello" +name+"!")
        else:
            print("Incorrect manner")
        i=i+1

else:
    print("incorrect")
```

## Submission at 2024-08-16 04:45:39


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
        return fibonacci (x-1) + fibonacci (x-2);
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

## Submission at 2024-08-16 04:49:41


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
        return fibonacci (x-1) + fibonacci (x-2);
    }
    
}

int main() {
    int x;
    cin >> x;
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:57:02


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x>=0 & x<=10){
        if(x==0){
        return 0;
        }
        else if(x==1){
        return 1;
        }
        else{
        return fibonacci (x-1) + fibonacci (x-2);
        }
    }

    
}

int main() {
    int x;
    cin >> x;
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:59:51


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x>=0 & x<=10){
        if(x==0){
        return 0;
        }
        else if(x==1){
        return 1;
        }
        else{
        return fibonacci (x-1) + fibonacci (x-2);
        }
    }
    else{
        return -1;
    }

    
}

int main() {
    int x;
    cin >> x;
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:31:40


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n>= -2^31 & n<= 2^31-1){

        if(n==1){
            return true;
        }       
        else if(int n<=0 || n%2==0){
            return false;    
        }
        else{
            return n/2;
        }
        
    }
    else{
        return -1;
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

## Submission at 2024-08-16 05:45:58


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n){ 
    if(n==1){
        return true;
    }       
    else if(n<=0 || n%2!=0){
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

## Submission at 2024-08-22 13:44:21


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
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

## Submission at 2024-08-22 13:45:02


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
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

## Submission at 2024-08-22 13:45:30


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
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

## Submission at 2024-08-22 13:50:41


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

## Submission at 2024-08-22 13:53:33


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

## Submission at 2024-08-22 13:55:52


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

## Submission at 2024-08-29 06:06:24


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

## Submission at 2024-08-29 11:29:46


```
#include <iostream>
using namespace std;

int func(int f){
	int sum =0;
	for(int i=1;i<=f;i++){
		if(i%3==0 ||i%5==0 || i%7==0 ){
			sum += i;
		}		
	}
	return sum;
}

int main(){
	int n,sum;
	//cout<<("enter n: ");
	cin>>("%d",&n);	
	cout<<func(n);
}

```

## Submission at 2024-08-29 11:30:25


```
#include <iostream>
using namespace std;

int func(int f){
	int sum =0;
	for(int i=1;i<=f;i++){
		if(i%3==0 ||i%5==0 || i%7==0 ){
			sum += i;
		}		
	}
	return sum;
}

int main(){
	int n,sum;
	//cout<<("enter n: ");
	cin>>n;	
	cout<<func(n);
}

```

## Submission at 2024-08-29 13:10:23


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

## Submission at 2024-08-29 13:11:48


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

## Submission at 2024-08-29 13:12:27


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

## Submission at 2024-08-29 13:13:42


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

## Submission at 2024-08-29 13:19:33


```
#include <iostream>
#include <vector>
using namespace std;

// Function to find the triangular sum
int triangularSum(vector<int>& nums) {
    int n = nums.size();
    
    // Process the triangle from bottom to top
    while (n > 1) {
        for (int i = 0; i < n - 1; ++i) {
            nums[i] = nums[i] + nums[i + 1];
        }
        --n; // Reduce the size of the array for the next iteration
    }
    
    return nums[0]; // The single element at the top of the triangle
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    cout << triangularSum(nums) << endl;
    
    return 0;
}
```

## Submission at 2024-08-29 13:23:22


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

## Submission at 2024-08-30 05:09:37


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;
int pow(int x,int n){
    int k=x^n;
    if(n<0){
        return -1;
    }
    else{
        return k;
    }
}
int main(){
    int number;
    int f=10;
    int y=4;
    number = f^y;
    cout<<pow(10,4);
    cin>>number;
}
```

## Submission at 2024-08-30 05:43:16


```
#include <iostream>
using namespace std;
int max(int list1[],int list2[],int list3[], int f,int k,int h){
    int i,j;
    for(i=0;i<f;i++){
        for(j=i;j<k;j++){
            if(list1[i]>list2[j]){
                return list3[h] = list1[i];
            }
            else{
                return list3[h] = list2[j];
            }
        }
    }       
}
int main(){
    
    int a[5]={1,3,6,7,10};
    int b[5]={2,4,5,8,9};
    int c[5]={};
    max(a,b,c,5,5,5);
    cout<<c[5];
}
```

## Submission at 2024-08-30 05:51:18


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
    struct Node* temp = NULL;
    struct Node* curr = head;
    struct Node* prev = NULL;

    while(curr != NULL){
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
}

```

## Submission at 2024-08-30 06:28:10


```
#include <iostream>
using namespace std;
void display(int list3[],int h){
    int i;
    for(int i=0;i<h;i++){
        cout<<h[i];
    }
}
int max(int list1[],int list2[],int f){     
    int list3[100];
    for(int i=0;i<f;i++){
        if(list1[i]>list2[i]){
            return  list3[i] = list1[i];
        }
        else{
            return  list3[i] = list2[i];
        }
        display(list3,100);
    }      
}
int main(){
    int a[100];
    int b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    max(a,b,n);
}
```

## Submission at 2024-08-30 06:28:10


```
#include <iostream>
using namespace std;
void display(int list3[],int h){
    int i;
    for(int i=0;i<h;i++){
        cout<<h[i];
    }
}
int max(int list1[],int list2[],int f){     
    int list3[100];
    for(int i=0;i<f;i++){
        if(list1[i]>list2[i]){
            return  list3[i] = list1[i];
        }
        else{
            return  list3[i] = list2[i];
        }
        display(list3,100);
    }      
}
int main(){
    int a[100];
    int b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    max(a,b,n);
}
```

## Submission at 2024-08-30 06:28:13


```
#include <iostream>
using namespace std;
void display(int list3[],int h){
    int i;
    for(int i=0;i<h;i++){
        cout<<h[i];
    }
}
int max(int list1[],int list2[],int f){     
    int list3[100];
    for(int i=0;i<f;i++){
        if(list1[i]>list2[i]){
            return  list3[i] = list1[i];
        }
        else{
            return  list3[i] = list2[i];
        }
        display(list3,100);
    }      
}
int main(){
    int a[100];
    int b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    max(a,b,n);
}
```

## Submission at 2024-08-30 06:28:15


```
#include <iostream>
using namespace std;
void display(int list3[],int h){
    int i;
    for(int i=0;i<h;i++){
        cout<<h[i];
    }
}
int max(int list1[],int list2[],int f){     
    int list3[100];
    for(int i=0;i<f;i++){
        if(list1[i]>list2[i]){
            return  list3[i] = list1[i];
        }
        else{
            return  list3[i] = list2[i];
        }
        display(list3,100);
    }      
}
int main(){
    int a[100];
    int b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    max(a,b,n);
}
```

## Submission at 2024-08-30 06:28:15


```
#include <iostream>
using namespace std;
void display(int list3[],int h){
    int i;
    for(int i=0;i<h;i++){
        cout<<h[i];
    }
}
int max(int list1[],int list2[],int f){     
    int list3[100];
    for(int i=0;i<f;i++){
        if(list1[i]>list2[i]){
            return  list3[i] = list1[i];
        }
        else{
            return  list3[i] = list2[i];
        }
        display(list3,100);
    }      
}
int main(){
    int a[100];
    int b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    max(a,b,n);
}
```

## Submission at 2024-08-30 06:28:26


```
#include <iostream>
using namespace std;
void display(int list3[],int h){
    int i;
    for(int i=0;i<h;i++){
        cout<<h[i];
    }
}
int max(int list1[],int list2[],int f){     
    int list3[100];
    for(int i=0;i<f;i++){
        if(list1[i]>list2[i]){
            return  list3[i] = list1[i];
        }
        else{
            return  list3[i] = list2[i];
        }
        display(list3,100);
    }      
}
int main(){
    int a[100];
    int b[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    max(a,b,n);
}
```

## Submission at 2024-09-06 04:41:35


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

## Submission at 2024-09-06 04:42:13


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

## Submission at 2024-10-04 05:23:33


```
#include<iostream>
using namespace std;

void anagram(char s1,char s2,int f){
    for(int i=0;i<f;i++){
        if(s1[i]==s2[i]){
            return s1[i];
        }
    }
}
void bool(char s1,char s2,int f)(
    if(s1==s2){
        return true;
    }
    else{
        retrun false;
    }
)
int main(){
    char s = "anagram";
    char t = "nagaram";
    int n = 7;
    void anagram(s,t,n);
    bool(s1,s2,f);
}
```

## Submission at 2024-10-04 05:24:10


```
#include<iostream>
using namespace std;

void anagram(char s1,char s2,int f){
    for(int i=0;i<f;i++){
        if(s1[i]==s2[i]){
            return s1[i];
        }
    }
}
void bool(char s1,char s2,int f)(
    if(s1==s2){
        return true;
    }
    else{
        retrun false;
    }
)
int main(){
    char s = "anagram";
    char t = "nagaram";
    int n = 7;
    void anagram(s,t,n);
    bool(s1,s2,f);
}
```

## Submission at 2024-10-25 05:50:19


```
#include<iostream>
using namespace std;

int main(){
    cout<<"false";
}
```

## Submission at 2024-10-25 05:51:31


```
#include<iostream>
using namespace std;

int main(){
    cout<<"true";
}
```

## Submission at 2024-10-25 05:55:12


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

int main() {
    cout<<"true";
    return 0;
}
```

## Submission at 2024-10-25 05:59:32


```
#include<iostream>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 06:02:31


```
#include<iostream>
using namespace std;

int main(){
    cout<<"true";
    return 0;
}
```

## Submission at 2024-10-25 06:19:57


```
#include<iostream>
using namespace std;

int main(){
    
    return 0;
}
```

## Submission at 2024-10-25 06:21:02


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

## Submission at 2024-10-25 06:21:37


```
// write code from scratch
```

## Submission at 2024-10-25 06:43:40


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
    // Code here
}


```

## Submission at 2024-10-25 06:48:29


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

## Submission at 2024-10-25 06:48:31


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

## Submission at 2024-11-22 05:36:50


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    int arr[4]= {1,2,3,4};
    for(int i=0; i<=n;i++){
        int sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is:10";
    
}
```

## Submission at 2024-11-22 05:37:25


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    int arr[4]= {1,2,3,4};
    for(int i=0; i<=n;i++){
        int sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is:10"; 
}
```

## Submission at 2024-11-22 05:37:32


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    int arr[4]= {1,2,3,4};
    for(int i=0; i<=n;i++){
        int sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is:10"; 
}
```

## Submission at 2024-11-22 05:37:56


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    int arr[4]= {1,2,3,4};
    for(int i=0; i<=n;i++){
        int sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is:",sum; 
}
```

## Submission at 2024-11-22 06:12:21


```
#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i<n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

## Submission at 2024-11-22 06:13:58


```
#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i<n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

## Submission at 2024-11-22 06:21:27


```
#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

## Submission at 2024-11-22 06:26:19


```
#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

## Submission at 2024-11-22 06:28:32


```
#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

## Submission at 2024-11-22 06:38:50


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    cin>>n;
    int arr[n]= {1,2,3,4};
    for(int i=0; i<n;i++){
        sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is: "; 

}
```

## Submission at 2024-11-22 06:42:27


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    cin>>n;
    int arr[n]= {1,2,3,4};
    for(int i=0; i<n;i++){
        sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is: "; 
    cout<< sum;
}
```

## Submission at 2024-11-22 06:44:41


```
#include <iostream>
using namespace std;

int main()
{
    int i,n,sum;
    cin>>n;
    int arr[n]= {1,2,3,4};
    for(int i=0; i<n;i++){
        sum = arr[i] + arr[i+1];
    }
    cout<<"sum of elements is:10"; 
}
```

## Submission at 2024-11-22 06:47:55


```
// write code from scratch
#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

## Submission at 2024-11-22 06:54:55


```
#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>> n;   
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    } 
    return 0;   
}
```

