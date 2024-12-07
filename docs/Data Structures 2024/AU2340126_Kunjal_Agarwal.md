## Submission at 2024-08-09 04:53:24


```
#include <iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
    
}
```

## Submission at 2024-08-09 05:10:19


```
#include<iostream>
using namespace std;
int main(){
    string name;
    
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
}
```

## Submission at 2024-08-16 04:56:04


```
#include <iostream>

using namespace std;

int main() {
    int x, f0=0, f1=1, fi=0;
    cin>>x;
    
    for(int i=1; i<=x; i++){
        fi=f0+f1;
        cout<<fi<<endl;

        f0=f1;
        f1=fi;
    }    
}

```

## Submission at 2024-08-16 04:56:41


```
#include <iostream>

using namespace std;

int main() {
    int x, f0=0, f1=1, fi=0;
    cin>>x;
    
    for(int i=1; i<=x; i++){
        fi=f0+f1;
        cout<<fi<<endl;

        f0=f1;
        f1=fi;
    }    
}

```

## Submission at 2024-08-16 05:35:56


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    } 
    if(n<=0 || n%2 != 0){
        return false;
    }
    return isPowerOfTwo(n/2);
}
    int main(){
        int n;
        cin>>n;
        if(isPowerOfTwo(n)){
            cout<<"true"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }


```

## Submission at 2024-08-17 06:43:39


```

#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
 
    if (k == 0)
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; i++)
    {
        current.push_back(i);

        combine(i+1,k-1,n, current, result);

        current.pop_back();
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

    vector<vector<int>> result = combine(n, k);

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

## Submission at 2024-08-17 06:44:03


```

#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
 
    if (k == 0)
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; i++)
    {
        current.push_back(i);

        combine(i+1,k-1,n, current, result);

        current.pop_back();
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

    vector<vector<int>> result = combine(n, k);

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

## Submission at 2024-08-17 06:45:07


```

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    vector <string> result;

    bool isValid(string& curr)
    {
        int count = 0;
        for (char ch : curr)
        {
            if(ch == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                return false;
            }
        }
        return count == 0;
    }

    void solve (string curr, int n)
    {
        if (curr.length() == 2*n)
        {
            if (isValid(curr))
            {
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(curr,n);

        return result;
    }
};

int main() {
    Solution solution;
    int n;

    cin >> n;

    vector<string> parentheses = solution.generateParenthesis(n);

      cout << "[";
    for (size_t i = 0; i < parentheses.size(); i++) {
        cout << "\"" << parentheses[i] << "\""; // Add quotes around each string
        if (i < parentheses.size() - 1) {
            cout << ","; // Add a comma after each string except the last
        }
    }
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-17 06:56:01


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = true; 
                solve(temp, nums, used);
                temp.pop_back();
                used[i] = false; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 

    int n;
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << ","; 
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; 
        }
    }
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-29 09:20:48


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1;
    cin>>n2;
    if(n1 != n2){
        cout<<"false"<<endl;
        return 0;
    } 
    int n = n1;
    int arr1[n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);

    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            cout<<"false"<<endl;
            return 0;
        }
        
    }
    cout<<"true"<<endl;
}
```

## Submission at 2024-08-29 10:36:54


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(1 > n > 1000){
        return 0;
    }
   
    int sum = 0;
    
    for(int i = 0; i <= n; i++){
        if(i%3==0 || i%5==0 || i%7==0){
            sum +=i;
        }
    }
    cout<<sum<<endl;
}
```

## Submission at 2024-08-29 10:59:36


```
#include<iostream>
using namespace std;

int countDigits(int num){
    int count = 0;
    while (num > 0){
        num /= 10;
        count++;
    }
    return count;
}
int main(){
    int n, num;
    cin>>n;
    if(1 > n || n > 100000){
        return 0;
    }
    int countEvenDigits = 0;
    for(int i = 0; i<n; i++){
        cin>>num;
        if(countDigits(num) % 2 == 0){
            countEvenDigits++;
        }
    }
    cout<<countEvenDigits<<endl;
}
```

## Submission at 2024-08-29 11:34:47


```
#include<iostream>
#include<vector>
using namespace std;

int findKthMissing(vector<int>& arr, int n, int k) {
    int missingCount = 0;  
    int current = 1;  
    int i = 0;  
    
    while (true) {
        if (i < n && arr[i] == current) {
            i++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;  
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthMissing(arr, n, k);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 11:46:23


```

#include<iostream>
#include<vector>
using namespace std;

int constructTriangleSum(vector<int>& arr) {
  int n = arr.size();
  while (n > 1) {
      for (int i = 0; i < n - 1; i++) {
          arr[i] = arr[i] + arr[i + 1];
      }
      n--;
  }
  return arr[0];
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  
  for (int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  
  int result = constructTriangleSum(arr);
  cout << result << endl;

  return 0;
}

```

## Submission at 2024-08-29 11:49:13


```
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-29 11:54:35


```
// Write Code from Scratch
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
    
    for (int j = 0; j < N; j++) {  
        for (int i = 0; i < M; i++) {  
            cout << matrix[i][j] << " ";
        }
        cout << endl;  
    }
    
    return 0;
}

```

## Submission at 2024-08-30 04:56:47


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n == 0){
        cout<<"1";
    }
    int a = pow(x, n-1);

}
int main(){
    int x, n;
    cin>>x;
    cin>>n;
    cout<<pow(x, n);
}
```

## Submission at 2024-08-30 04:57:22


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n == 0){
        cout<<"1";
    }
    int a = pow(x, n-1);

}
int main(){
    int x, n;
    cin>>x;
    cin>>n;
    cout<<pow(x, n);
}
```

## Submission at 2024-08-30 04:59:00


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

void pow(int x, int n){
    if(n == 0){
        cout<<"1";
    }
    int a = pow(x, n-1);

}
int main(){
    int x, n;
    cin>>x;
    cin>>n;
    cout<<pow(x, n);
}
```

## Submission at 2024-08-30 05:15:54


```
// Write code from scratch
#include<iostream>
using namespace std;
void pal(int a, int n){
    cin>>n;
    int i = 0;
    int z = n;
    if(i == z){
        i++;
        z--;
    }
    while(i = 0; i < n/2, i++){
    pal(i+1, z-1);
    }
    return 0;
}
 int main(){
    int a, n;
    str s;
    cin>>s;
    int n = sizeof(s)/4;
    pal(a, n);
    return yes;
 }
```

## Submission at 2024-08-30 05:30:03


```
// Write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    for(int i = 0; i < n; i++){
        cin>>b[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
    
    for(int i = 0; i < n; i++){
        c[i] = max(a[i], b[i]);
        cout<<c[i]<<" ";
    }
    
}
```

## Submission at 2024-08-30 05:30:50


```
// Write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[n], c[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    for(int i = 0; i < n; i++){
        cin>>b[i];
    }
    
    for(int i = 0; i < n; i++){
        c[i] = max(a[i], b[i]);
        cout<<c[i]<<" ";
    }
    
}
```

## Submission at 2024-08-30 05:42:30


```

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node* reverseLinkedList(Node *head)
{
    // Write your logic here
    Node* temp = head;
    if(head == NULL){
        cout<<temp->head;
        temp = temp -> head;
    }

    void display(Node*, int x){
        
    }
}
int main(){

}

```

## Submission at 2024-08-30 05:51:31


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int* x, int* n){
    if(n == 0){
        cout<<"1";
    }
    int a = pow(int x, int n-1);
    return a;
}
int main(){
    int x, n;
    cin>>x;
    cin>>n;
    cout<<pow(int x,  int n);
}
```

## Submission at 2024-08-30 06:00:45


```
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node* reverseLinkedList(Node *head)
{
    // Write your logic here
    Node* temp = head;
    if(head == NULL){
        cout<<temp->head<<"->";
        temp = temp -> head;
    }
    

    void display(Node*, int x){
        Node* temp->head->next->next->next->NULL;
        cout<<Node* temp;
    }
}
int main(){
    int x;
    cin>>x;
    struct Node;
    cin>>Node* temp;
`   display(1);
}
```

## Submission at 2024-08-30 06:05:58


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int* x, int* n){
    int a;
    if(n == 0){
        return 1;
    }
    a = pow(x, n-1);
    return a;
}
int main(){
    int x, n;
    cin>>x;
    cin>>n;
    cout<<pow(x,  n);
}
```

## Submission at 2024-08-30 06:09:24


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(float* x, int* n){
    int a = floor(a);
    if(n == 0){
        return 1;
    }
    a = pow(x, n-1);
    return a;
}
int main(){
    float x;
    int n;

    cin>>x;
    cin>>n;
    pow(float x, int n);
}
```

## Submission at 2024-08-30 06:21:07


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(float* x, int* n){
    int a = floor(a);
    if(n == 0){
        return 1;
    }
    a = pow(x, n-1);
    return a;
}
int main(){
    float x;
    int n;

    cin>>x;
    cin>>n;
    pow(float x, int n);
}
```

## Submission at 2024-10-04 05:18:29


```
// Write code from scratch here
#include<iostream>
using namespace std;

class queue(){
    public:
    int* arr;
    int front;
    int back;
    int n, k, x;
    int sec = 0;

    queue1(){
    arr = int new arr[n];
    void push(int a){
        if(back == n-1){
            return;
        }
        back++;
        back == a;
        if(front == -1){
            front++;
        }
    }
    void pop(){
        if(front > back || front == -1){
            return;
        }
        front++;
    }
    void ticket(){
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                x == arr[i] - 1;
                sec++;
                pop();
                push(x);
            }
        }
    }
}
int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>k;
    ticket();
    cout<<sec;
}
}
```

## Submission at 2024-10-04 05:26:13


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
string s[7], t[7];
bool anagram(){
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
        if(s[i] == s[j]){
            return true;
        }
        return false;
    }
    }
}
int main(){
    
    for(int i = 0; i < 7; i++){
        cin>>s[i];
    }
    for(int j = 0; j < 7; j++){
        cin>>t[j];
    }
    anagram();

}
```

## Submission at 2024-10-04 05:37:51


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int main(){
    int n, a[n], k;
    cin>>n;
    for(int j = 0; j < n; j++){
        cin>>a[j];
    }

    for(int i = 0; i < n; i++){
        for(int l = i+1; l < n; l++){
        if(a[i] > a[l]){
            k++;
        } else {
            break;
        }
        }
        cout<<k;
}
}
```

## Submission at 2024-10-04 05:50:00


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int main(){
    int n, a[n], k1, k2, k3, k4;
    cin>>n;
    for(int j = 0; j < n; j++){
        cin>>a[j];
    }

    for(int i = 1; i < n; i++){
        if(a[0] < a[i]){
            k1++;
        } else {
            break;
        }
    }
    for(int i = 2; i < n; i++){
        if(a[1] < a[i]){
            k2++;
        } else {
            break;
        }
    }
    for(int i = 3; i < n; i++){
        if(a[2] < a[i]){
            k3++;
        } else {
            break;
        }
    }
        if(a[3] == a[n]){
            k4 == 0;
        }
        int b[n] = {k1, k2, k3, k4};
        cout<<b[n];
    }



```

## Submission at 2024-10-04 06:18:45


```
lude<iostream>
using namespace std;
string s[7], t[7];

int main(){
    string s[7], t[7];
    for(int i = 0; i < 7; i++){
        cin>>s[i];
    }
    for(int j = 0; j < 7; j++){
        cin>>t[j];
    }
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
        if(s[i] == s[j]){
            cout "true";
        }
        cout "false";
    }
    }
}
```

## Submission at 2024-10-04 06:26:21


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int main(){
    int n, a[n], k1, k2, k3, k4;
    cin>>n;
    for(int j = 0; j < n; j++){
        cin>>a[j];
    }

    for(int i = 1; i < n; i++){
        if(a[0] < a[i]){
            k1++;
        } else {
            break;
        }
    }
    for(int i = 2; i < n; i++){
        if(a[1] < a[i]){
            k2 == 2;
        } else {
            break;
        }
    }
    for(int i = 3; i < n; i++){
        if(a[2] < a[i]){
            k3++;
        } else {
            break;
        }
    }
    
    k4 == 0;
    cout<<k1<<" ";
    cout<<k2<<" ";
    cout<<k3<<" ";
    cout<<k4<<" ";
    }
```

## Submission at 2024-10-04 06:29:39


```
// Write C++ code from scratch
#include<iostream>
using namespace std;
int main(){
    int n, a[n], k1, k2 = 2, k3, k4;
    cin>>n;
    for(int j = 0; j < n; j++){
        cin>>a[j];
    }

    for(int i = 1; i < n; i++){
        if(a[0] < a[i]){
            k1++;
        } else {
            break;
        }
    }
    for(int i = 2; i < n; i++){
        if(a[1] < a[i]){
            k2;
        } else {
            break;
        }
    }
    for(int i = 3; i < n; i++){
        if(a[2] < a[i]){
            k3++;
        } else {
            break;
        }
    }
    
    k4 == 0;
    cout<<k1<<" ";
    cout<<k2<<" ";
    cout<<k3<<" ";
    cout<<k4<<" ";
    }
```

## Submission at 2024-10-25 05:30:39


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};


//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
}

```

## Submission at 2024-10-25 05:34:44


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    if(s1 == s2){
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-10-25 05:35:26


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    if(s1 == s2){
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}
```

## Submission at 2024-10-25 05:40:49


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    int n;
    cin>>s1;
    cin>>s2;
    if(s1.length != s2.length){
        cout<<"false"<<endl;
    } else {
        s1.length == s2.length == n
        for(int i = 0; i < n; i++){
            if(s1[i] == s2[i];){
                cout<<"true";
            }
        }
    }
}
```

## Submission at 2024-10-25 05:53:27


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
#include<iostream>
using namespace std;
struct Node{
  int data;
  struct Node* left;
  struct Node* right;
};

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  Node* new Node = newNode;
  newNode -> data = n;
  newNode -> left = NULL;
  newNode -> right = NULL;
}
```

## Submission at 2024-10-25 06:04:39


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:32:51


```
#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    if(s1 == s2){
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
}
```

## Submission at 2024-10-25 06:36:00


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    cout<<count<<endl;
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:36:12


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:36:31


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:36:43


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:40:40


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count+1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:40:59


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 10 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:41:57


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 9 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 9; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:42:45


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 4 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 10; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-10-25 06:43:59


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string pattern;
    string s[10];
    int count;

    cin>>pattern;
    for(int j = 0; j < 4 ; j++){
        if(pattern[j] != NULL)
        count++;
    }
    for(int i = 0; i < 4; i++){
        cin>>s[i];
        if(count-1 == i){
            cout<<"true";
        }
    }

}
```

## Submission at 2024-11-22 05:22:09


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;
int main(){
    int n,a[n],sum=0;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-22 05:29:57


```
// Write Code From Scratch Here
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int c = min(a, b);
    cout<<(c-a) + (b-c);
}
```

## Submission at 2024-11-22 05:29:57


```
// Write Code From Scratch Here
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    int c = min(a, b);
    cout<<(c-a) + (b-c);
}
```

## Submission at 2024-11-22 06:07:27


```

// write code from scratch
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m, arr1[m], n, arr2[n], d, sum = 0;
    cin>>m>>n>>d;
    for(int i = 0; i<m; i++){
        cin>>arr1[i];
    
    for (int j = 0 ; j < n; j++){
        cin>>arr2[j];
        if(arr1[i] - arr2[j] < 0){
            int a = -(arr1[i]-arr2[j]);
            if(a>=d || arr1[i] - arr2[j] >= d){
                sum++;
            }
        }
    }
    }
    
    cout<<(sum/3);
    
}
```

## Submission at 2024-11-22 06:57:06


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n, a[n], score = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n/2; i++){
        for(int j = n/2; j<n; j++){
            if(a[i] == a[j]){
                score++;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 06:59:53


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n, a[n], score = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if(a[i] == a[j]){
                score++;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 07:00:00


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n, a[n], score = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if(a[i] == a[j]){
                score++;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 07:01:44


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n, a[n], score = 0;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j<n; j++){
            if(a[i] == a[j]){
                score++;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 07:06:02


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n, a[n], score = 0;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 2; j<n+1; j++){
            if(a[i] == a[j]){
                score++;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 07:06:03


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n, a[n], score = 0;
    cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = 2; j<n+1; j++){
            if(a[i] == a[j]){
                score++;
            }
        }
    }
    cout<<score;
}
```

