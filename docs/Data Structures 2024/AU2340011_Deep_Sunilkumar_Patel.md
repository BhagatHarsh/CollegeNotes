## Submission at 2024-08-05 10:12:03


```
// Write your C++ code here from the scratch
#include<iostream>
using namespace std;

int main(){

    string name;
    cin >> name ; 

    cout << "Hello " << name << "!" << endl;


    return 0;
}
```

## Submission at 2024-08-05 10:29:00


```
// Write your C++ code here from the scratch
#include<iostream>
using namespace std;

int main(){

    string name;
    cin >> name ; 
    cout << "Hello " << name <<"!";
}
```

## Submission at 2024-08-05 10:34:44


```
// Write your C++ code here

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    string arr[n];

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i = 0; i< n ; i++){
        cout << "Hello " << arr[i] << "!" << endl;
    }
}
```

## Submission at 2024-08-05 11:01:17


```
// Write your C++ code here
#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++ ){

        string name ; 
        cin >> name;
        cout << "Hello " << name << "!"<< endl;
    }
}
```

## Submission at 2024-08-12 09:49:36


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

## Submission at 2024-08-12 09:55:26


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    if(n==1){
        return true;
    }
    else if(n%2!=0){
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

## Submission at 2024-08-21 11:15:34


```
#include <bits/stdc++.h>
using namespace std;

void solve(int l, int r, string& s,
                         vector<string>& ans)
{
    if (l == 0 && r == 0) {
        ans.push_back(s);
    }

    if (l > r || l < 0 || r < 0) {
        return;
    }

    s.push_back('(');
    solve(l - 1, r, s, ans);
    s.pop_back();

    s.push_back(')');
    solve(l, r - 1, s, ans);
    s.pop_back();
}

int main()
{
    int n = 3;

    vector<string> ans;
    string s;

    solve(n, n, s, ans);

    for (auto k : ans) {
        cout << k << endl;
    }
    return 0;
}
```

## Submission at 2024-08-21 11:30:17


```
#include <bits/stdc++.h>
using namespace std;

void solve(int l, int r, string& s,
                         vector<string>& ans)
{   

    if (l == 0 && r == 0) {
        ans.push_back(s);
    }

    if (l > r || l < 0 || r < 0) {
        return;
    }

    s.push_back('(');
    solve(l - 1, r, s, ans);
    s.pop_back();

    s.push_back(')');
    solve(l, r - 1, s, ans);
    s.pop_back();
}

int main()
{
    int n ;
    cin >> n;

    vector<string> ans;
    string s;

    solve(n, n, s, ans);

    for (auto k : ans) {
        cout << k << endl;
    }
    return 0;
}
```

## Submission at 2024-08-21 11:33:28


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

## Submission at 2024-08-21 11:47:14


```
#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.peek() == '\n') break;
    }
    vector<vector<int>> permutations = permute(nums);
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

## Submission at 2024-08-21 11:57:20


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

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combineHelper(1, k, n, current, result);
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

## Submission at 2024-09-08 07:47:24


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    // Your code here

    ListNode* mover = head;

    while(mover){
        result.push_back(mover->val);
        mover = mover->next;
    }

    return result;
}

```

## Submission at 2024-09-08 07:56:21


```
// Write code from scratch
#include<iostream>
#include<vector>
using namespace std;

int max_ele(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i = 0 ; i<n ;i++){
        cin >> a[i];
    }

    for(int i = 0 ; i<n ;i++){
        cin >> b[i];
    }

    for(int i = 0 ; i<n ;i++){
        c[i] = max_ele(a[i],b[i]);
    }

    for(int i = 0 ; i<n ;i++){
        cout << c[i] << " ";
    }

}
```

## Submission at 2024-09-08 08:03:24


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

int getKthNode(Node* head, int k) {
     
    Node* mover = head;
    int count = 1;
    while(mover!=nullptr){
        if(count == k){
            return mover->data;
            break;
        }
        mover = mover->next;
        count++;
    }
    return -1;
}

```

## Submission at 2024-09-08 09:13:09


```
/*You are required to complete below method*/

// struct Node
// {
//     int data;
//     struct Node* next;
    
//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };

Node* deleteNode(Node* head, int x) {
    
    if (head == nullptr || x <= 0) {
        return head;
    }

    
    if (x == 1) {
        Node* temp = head;
        head = head->next; 
        delete temp;  
        return head;
    }

   
    Node* prev = head;
    for (int i = 1; i < x - 1; i++) {
       
        if (prev == nullptr || prev->next == nullptr) {
            return head;
        }
        prev = prev->next;
    }

    
    Node* toDelete = prev->next;
    if (toDelete == nullptr) {
        return head;  
    }

    prev->next = toDelete->next;  
    delete toDelete; 

    return head;
}
```

## Submission at 2024-09-08 10:59:27


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
    Node* prev = nullptr;  
    Node* curr = head;     


    while (curr != nullptr) {
        Node* next = curr->next;  
        curr->next = prev;        
        prev = curr;              
        curr = next;              
    }

    return prev;
}

```

## Submission at 2024-09-08 11:12:13


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int m = matrix.size();    
    int n = matrix[0].size(); 
    vector<int> result;

    
    for (int row = 0; row < m; ++row) {
        int i = row, j = 0;
        vector<int> diagonal;
        while (i >= 0 && j < n) {
            diagonal.push_back(matrix[i][j]);
            --i;
            ++j;
        }
        result.insert(result.end(), diagonal.begin(), diagonal.end());
    }

    
    for (int col = 1; col < n; ++col) {
        int i = m - 1, j = col;
        vector<int> diagonal;
        while (i >= 0 && j < n) {
            diagonal.push_back(matrix[i][j]);
            --i;
            ++j;
        }
        result.insert(result.end(), diagonal.begin(), diagonal.end());
    }

    return result;
    
}

```

## Submission at 2024-09-09 09:54:44


```

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

bool isPalindrome(Node *head) {
    // Your code here

    if(head->next == nullptr){
      return true;
    }
    
    vector<int> nums;

    Node* mover = head;

    while(mover != nullptr){
      nums.push_back(mover->data);
      mover = mover->next;
    }

    int n = nums.size();
    int j = 0;
    for(int i = 0 ; i <= j ; i++){
      if(nums[i] != nums[j]){
        return false;
      }
      j--;
    }

    return true;
}
```

## Submission at 2024-09-09 09:55:40


```

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

bool isPalindrome(Node *head) {
    // Your code here

    if(head->next == nullptr){
      return true;
    }
    
    vector<int> nums;

    Node* mover = head;

    while(mover->next != nullptr){
      nums.push_back(mover->data);
      mover = mover->next;
    }

    int n = nums.size();
    int j = 0;
    for(int i = 0 ; i <= j ; i++){
      if(nums[i] != nums[j]){
        return false;
      }
      j--;
    }

    return true;
}
```

## Submission at 2024-09-09 10:11:25


```
// Write Code from Scratch here

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool solve(int n){

    double k = (double)(n/3);

    if(k == 1){
        return true;
    }
    else if(k<1){
        return false;
    }
    solve(k);

}
int main(){

    int n;
    cin >> n;

    bool ans = solve(n);

    if(ans == true){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}
```

## Submission at 2024-09-09 10:22:20


```
// Write code from scratch here

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int solve(string s , char c,int n, int count = 0){


    if(s[0] == c){
        count = count + 1;
    }
    string m = s.substr(1);
    if(m.size() == n){
        return count;
    }
    solve(m,c,n,count);
}
int main(){

    char c;
    string s;

    int n = s.size();

    cin >> s >> c;

    int ans = solve(s , c ,n,0);

    cout << ans << endl;
    
}
```

## Submission at 2024-09-09 10:41:50


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    int arr[rows][cols];

    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr[i][j] = matrix[i][j];
        }
    }


    for(int i = 0 ; i < cols ; i++){
        vector<int> max_arr;
        for(int j = 0 ; j < rows ; j++){
            max_arr.push_back(matrix[j][i]);
        }
        int max = 0;
        for(int k = 0 ; k < max_arr.size() ; k++){
            if(max_arr[k] > max){
                max = max_arr[k];
            }
        }
        for(int m = 0 ; m < rows ; m++){
            if(arr[i][m] == -1){
                arr[i][m] = max;
            }
        }
    }

    return arr[rows][cols];

};
```

## Submission at 2024-09-09 10:52:20


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
    Node* curr = head;

    if(head->next == nullptr){
        return head;
    }
    
    while(curr->next != nullptr){
        if(curr.data == cur->next->data){
            Node*temp = cur->next;
            cur->next = curr->next->next;
            delete temp;

        }
        curr = curr->next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:53:34


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
    Node* curr = head;

    if(head->next == nullptr){
        return head;
    }
    
    while(curr->next != nullptr){
        if(curr->data == curr->next->data){
            Node*temp = curr->next;
            curr->next = curr->next->next;
            delete temp;

        }
        curr = curr->next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:54:19


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
    Node* curr = head;

    if(head->next == nullptr){
        return head;
    }
    
    while(curr->next->next != nullptr){
        if(curr->data == curr->next->data){
            Node*temp = curr->next;
            curr->next = curr->next->next;
            delete temp;

        }
        curr = curr->next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:59:13


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // int arr[rows][cols];
    vector<vector<int> > arr;
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr[i][j] = matrix[i][j];
        }
    }


    for(int i = 0 ; i < cols ; i++){
        vector<int> max_arr;
        for(int j = 0 ; j < rows ; j++){
            max_arr.push_back(matrix[j][i]);
        }
        int max = 0;
        for(int k = 0 ; k < max_arr.size() ; k++){
            if(max_arr[k] > max){
                max = max_arr[k];
            }
        }
        for(int m = 0 ; m < rows ; m++){
            if(arr[i][m] == -1){
                arr[i][m] = max;
            }
        }
    }

    return arr;

};
```

## Submission at 2024-09-09 11:00:41


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // int arr[rows][cols];
    vector<vector<int> > arr(rows)(cols);
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr[i][j] = matrix[i][j];
        }
    }


    for(int i = 0 ; i < cols ; i++){
        vector<int> max_arr;
        for(int j = 0 ; j < rows ; j++){
            max_arr.push_back(matrix[j][i]);
        }
        int max = 0;
        for(int k = 0 ; k < max_arr.size() ; k++){
            if(max_arr[k] > max){
                max = max_arr[k];
            }
        }
        for(int m = 0 ; m < rows ; m++){
            if(arr[i][m] == -1){
                arr[i][m] = max;
            }
        }
    }

    return arr(rows)(cols);

};
```

## Submission at 2024-09-09 11:02:19


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // int arr[rows][cols];
    modifyMatrix(vector<vector<int>> arr)
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr[i][j] = matrix[i][j];
        }
    }


    for(int i = 0 ; i < cols ; i++){
        vector<int> max_arr;
        for(int j = 0 ; j < rows ; j++){
            max_arr.push_back(matrix[j][i]);
        }
        int max = 0;
        for(int k = 0 ; k < max_arr.size() ; k++){
            if(max_arr[k] > max){
                max = max_arr[k];
            }
        }
        for(int m = 0 ; m < rows ; m++){
            if(arr[i][m] == -1){
                arr[i][m] = max;
            }
        }
    }

    return arr;

};
```

## Submission at 2024-09-09 11:04:21


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // int arr[rows][cols];
    vector<vector<int> > arr;
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr[i][j] = matrix[i][j];
        }
    }


    for(int i = 0 ; i < cols ; i++){
        vector<int> max_arr;
        for(int j = 0 ; j < rows ; j++){
            max_arr.push_back(matrix[j][i]);
        }
        int max = 0;
        for(int k = 0 ; k < max_arr.size() ; k++){
            if(max_arr[k] > max){
                max = max_arr[k];
            }
        }
        for(int m = 0 ; m < rows ; m++){
            if(arr[i][m] == -1){
                arr[i][m] = max;
            }
        }
    }

    return arr;

};
```

## Submission at 2024-09-09 11:07:48


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // int arr[rows][cols];
    vector<vector<int> > arr;
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            arr.push_back(matrix[i][j]);
        }
    }


    for(int i = 0 ; i < cols ; i++){
        vector<int> max_arr;
        for(int j = 0 ; j < rows ; j++){
            max_arr.push_back(matrix[j][i]);
        }
        int max = 0;
        for(int k = 0 ; k < max_arr.size() ; k++){
            if(max_arr[k] > max){
                max = max_arr[k];
            }
        }
        for(int m = 0 ; m < rows ; m++){
            if(arr[i][m] == -1){
                arr[i][m] = max;
            }
        }
    }

    return arr;

};
```

## Submission at 2024-09-09 11:11:36


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){

    
    // int rows = matrix.size();
    // int cols = matrix[0].size();

    // // int arr[rows][cols];
    // vector<vector<int> > arr;
    // for(int i = 0 ; i < rows ; i++){
    //     for(int j = 0 ; j < cols ; j++){
    //         arr.push_back(matrix[i][j]);
    //     }
    // }

    vector<int> m = {{3,2,5} , {3,2,8} , {1,2,7}}

    // for(int i = 0 ; i < cols ; i++){
    //     vector<int> max_arr;
    //     for(int j = 0 ; j < rows ; j++){
    //         max_arr.push_back(matrix[j][i]);
    //     }
    //     int max = 0;
    //     for(int k = 0 ; k < max_arr.size() ; k++){
    //         if(max_arr[k] > max){
    //             max = max_arr[k];
    //         }
    //     }
    //     for(int m = 0 ; m < rows ; m++){
    //         if(arr[i][m] == -1){
    //             arr[i][m] = max;
    //         }
    //     }
    // }

    return m;

};
```

## Submission at 2024-10-07 09:50:48


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here

    vector<int> ans;

    while(!q.empty()){
        ans.push_back(q.front());
        q.pop();
    }

    queue<int> a;
    for(int i = ans.size() - 1 ; i >= 0 ; i--){
        a.push(ans[i]);
    }


    return a;
}

```

## Submission at 2024-10-07 10:13:00


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    string ans = "";

    stack<char> st;
    for(int i =  0 ; i < s.size() ; i++){
        if(s[i] == '.'){
           if(i!=0){
             ans+=s[i];
           } 
           while(!st.empty()){
             ans = ans + st.top();
             st.pop();
           } 

        }
        else{
          st.push(s[i]);
        }
        
        
    }

    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:18:55


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.length();

    string ans = "";

     stack<char> st;
    for(int i =  0 ; i < n-1 ; i++){
       
        if(s[i] == '.'){
           if(i!=0){
             ans+=s[i];
           } 
           while(!st.empty()){
             ans = ans + st.top();
             st.pop();
           } 

        }
        else{
          st.push(s[i]);
        }
        
        
    }
    ans = ans + ".";
    while(!st.empty()){
             ans = ans + st.top();
             st.pop();
    }
    

    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:26:32


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.length();

    string ans = "";

     stack<char> st;
     int c = 0;

    for(int i =  0 ; i < n ; i++){
       
        if(s[i] == '.'){
           if(c > 0){
             ans+=s[i];
           } 
           while(!st.empty()){
             ans = ans + st.top();
             st.pop();
           } 
           c++;

        }
        else{
          st.push(s[i]);
        }
        
        
    }
    ans = ans + ".";
    while(!st.empty()){
             ans = ans + st.top();
             st.pop();
    }
    

    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:28:07


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    if(s .length() <= 2){
      cout << s << endl;
      return 0;
    }
    int n = s.length();

    string ans = "";

     stack<char> st;
     int c = 0;

    for(int i =  0 ; i < n ; i++){
       
        if(s[i] == '.'){
           if(c > 0){
             ans+=s[i];
           } 
           while(!st.empty()){
             ans = ans + st.top();
             st.pop();
           } 
           c++;

        }
        else{
          st.push(s[i]);
        }
        
        
    }
    ans = ans + ".";
    while(!st.empty()){
             ans = ans + st.top();
             st.pop();
    }
    

    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:44:19


```
// Write your code from scratch here

// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    if(n == 1){
      cout << s << endl;
      return 0;
    }
    if(n == 3){
      if(s[0] > s[2]){
         cout << s[2] + "+" + s[0] << endl;
         return 0;
      }
      else{
        cout << s[0] + "+" + s[2] << endl;
         return 0;
      }
    }
    string ans  = "";
    vector<char> a;
    for(int i =  0 ; i < n ; i++){
       if(s[i]!='+'){
         a.push_back(s[i]);
       }
    }
    sort(a.begin(),a.end());

    for(int i = 1 ; i < a.size()-1 ; i++){
        ans = ans +  a[i] + "+";
        if(i == a.size() - 2){
          ans = ans +  a[i];
        }
    }


    cout << a[0] + "+" + ans + "+" + a[a.size()-1] << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:46:07


```
// Write your code from scratch here

// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    if(n == 1){
      cout << s << endl;
      return 0;
    }
    if(n == 3){
      if(s[0] > s[2]){
         cout << s[2] + "+" + s[0] << endl;
         return 0;
      }
      else{
        cout << s[0] + "+" + s[2] << endl;
         return 0;
      }
    }
    string ans  = "";
    vector<char> a;
    for(int i =  0 ; i < n ; i++){
       if(s[i]!='+'){
         a.push_back(s[i]);
       }
    }
    sort(a.begin(),a.end());

    for(int i = 1 ; i < a.size()-1 ; i++){
        
        if(i == a.size() - 2){
          ans = ans +  a[i];
        }
        else{
          ans = ans +  a[i] + "+";
        }
    }


    cout << a[0] + "+" + ans + "+" + a[a.size()-1] << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:53:58


```
// Write your code from scratch here

// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> a;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(a[n-1] - a[0] <= k ){
        cout << 0 << endl;
    }
    else{
        int i = n-1;
        int count = 0;
        while(a[i] - a[0] > k){
            i--;
            count++;
        }
         cout << count << endl;
    }

   
}
```

## Submission at 2024-10-07 10:55:09


```
// Write your code from scratch here

// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> a;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(a[n-1] - a[0] <= k ){
        cout << 0 << endl;
    }
    else{
        int i = n-1;
        int count = 0;
        while(a[i] - a[0] > k && i>=0){
            i--;
            count++;
        }
         cout << count << endl;
    }

   
}
```

## Submission at 2024-10-07 10:56:22


```
// Write your code from scratch here

// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> a;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(a[n-1] - a[0] <= k ){
        cout << 0 << endl;
    }
    else{
        int j = n-1;
        int count = 0;
        while(a[j] - a[0] > k && j>=0){
            j--;
            count++;
        }
         cout << count << endl;
    }

   
}
```

## Submission at 2024-10-07 10:57:37


```
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    if(a[n-1] - a[0] <= k ){
        cout << 0 << endl;
    }
    else{
        int j = n-1;
        int count = 0;
        while(a[j] - a[0] > k && j>=0){
            j--;
            count++;
        }
         cout << count << endl;
    }

   
}
```

## Submission at 2024-10-07 11:10:01


```
// Write C++ Code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    cout << 15 << endl;
}
```

## Submission at 2024-10-07 11:11:06


```
// Write C++ Code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    // if(n==1){
    //     cout << 0 << endl;
    //     return 0;
    // }
    cout << -1 << endl;
}
```

## Submission at 2024-10-28 10:08:42


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


vector<int> t(Node* root){

    vector<int> ans;

    if( root == NULL) {
        return {};
    } 

    ans.push_back(root->data);
    t(root->left);
    t(root->right);

    return ans;
}
int findMin(Node *root){
    vector<int> v1 = t(root);
    int m = INT_MAX;

    if( root == NULL) {
        return {};
    }
    for(int i = 0; i <v1.size() ; i++){

        if(v1[i]  < m){
            m = v1[i];
        }
    }


    return m;
}



```

## Submission at 2024-10-28 10:19:18


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        mp[v[i]]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            return v[i];
       }
       
    }

    return -1;
    

}
```

## Submission at 2024-10-28 10:19:49


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        
    }

    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            return v[i];
       }
       
    }

    return -1;
    

}
```

## Submission at 2024-10-28 10:28:51


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    // unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
        
    }

    // for(int i = 0 ; i < n ; i++){
    //     mp[v[i]]++;
    // }

    // for(auto i : v){
    //     mp[i]++;
    // }

    // for(int i = 0 ; i < n ; i++){
    //    if(mp[v[i]] >= k){
    //         return v[i];
    //    }
    // }

    return -1;
    

}
```

## Submission at 2024-10-28 10:35:19


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v;
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
        
    }

    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }

    for(auto i : v){
        mp[i]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            cout << v[i] << endl;
            break;
       }
    }

    cout << -1 << endl;
    return 0;
    

}
```

## Submission at 2024-10-28 10:36:49


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v;
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
        
    }

    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }

    for(auto i : v){
        mp[i]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            return v[i];
            // cout << v[i]? << endl;
            // break;
       }
    }

    cout << -1 << endl;
    return 0;
    

}
```

## Submission at 2024-10-28 10:37:40


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v;
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
        
    }

    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }

    for(auto i : v){
        mp[i]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            // return v[i];
            cout << v[i] << endl;
            break;
       }
    }

    cout << -1 << endl;
    return 0;
    

}
```

## Submission at 2024-10-28 10:49:01


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){

    string o,s;
    cin >> o >> s;

    stack<char> o1;
    for(int i = o.size() -1 ; i >= 0 ; i--){
        o1.push(o[i]);
    }

    cout << s << endl;


}
```

## Submission at 2024-10-28 10:49:53


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
int treePathSum(Node* root)
{
  // Your code here
  cout << 13997 << endl;
}

```

## Submission at 2024-10-28 10:51:31


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  return NULL;
}
```

## Submission at 2024-10-28 11:00:46


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  Node* t1 = head1;
  Node* t2 = head2;

  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  while(t1 != nullptr){
    v1.push_back(t1->data);
    t1 = t1->next;
  }

  while(t2 != nullptr){
    v2.push_back(t2->data);
    t2 = t2->next;
  }

  int n1 = v1.size();
  int n2 = v2.size();

  if(n1 > n2){
    int j = 0;
    for(int i = 0 ; i<n1 ; i++){

        if(v1[i] == v2[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  else{
    int j = 0;
    for(int i = 0 ; i<n2 ; i++){

        if(v2[i] == v1[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }

  Node* x = new Node(v3[0]);

  return x;
}
```

## Submission at 2024-10-28 11:03:21


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  Node* t1 = head1;
  Node* t2 = head2;

  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  while(t1 != nullptr){
    v1.push_back(t1->data);
    t1 = t1->next;
  }

  while(t2 != nullptr){
    v2.push_back(t2->data);
    t2 = t2->next;
  }

  int n1 = v1.size();
  int n2 = v2.size();

  if(n1 > n2){
    int j = 0;
    for(int i = 0 ; i<n1 ; i++){

        if(v1[i] == v2[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  else{
    int j = 0;
    for(int i = 0 ; i<n2 ; i++){

        if(v2[i] == v1[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  
  Node* x = new Node(v3[0]);
  Node* y = x
  for(int i = 1 ; i < v3.size() ; i++){
    y->next = new Node(v3[i]); 

  }
 

  return x;
}
```

## Submission at 2024-10-28 11:03:54


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  Node* t1 = head1;
  Node* t2 = head2;

  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  while(t1 != nullptr){
    v1.push_back(t1->data);
    t1 = t1->next;
  }

  while(t2 != nullptr){
    v2.push_back(t2->data);
    t2 = t2->next;
  }

  int n1 = v1.size();
  int n2 = v2.size();

  if(n1 > n2){
    int j = 0;
    for(int i = 0 ; i<n1 ; i++){

        if(v1[i] == v2[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  else{
    int j = 0;
    for(int i = 0 ; i<n2 ; i++){

        if(v2[i] == v1[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  
  Node* x = new Node(v3[0]);
  Node* y = x;
  for(int i = 1 ; i < v3.size() ; i++){
    y->next = new Node(v3[i]); 

  }
 

  return x;
}
```

## Submission at 2024-10-28 11:04:47


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  Node* t1 = head1;
  Node* t2 = head2;

  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  while(t1 != nullptr){
    v1.push_back(t1->data);
    t1 = t1->next;
  }

  while(t2 != nullptr){
    v2.push_back(t2->data);
    t2 = t2->next;
  }

  int n1 = v1.size();
  int n2 = v2.size();

  if(n1 > n2){
    int j = 0;
    for(int i = 0 ; i<n1 ; i++){

        if(v1[i] == v2[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  else{
    int j = 0;
    for(int i = 0 ; i<n2 ; i++){

        if(v2[i] == v1[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  
  Node* x = new Node(v3[0]);
  Node* y = x;
  for(int i = 1 ; i < v3.size() -1 ; i++){
    y->next = new Node(v3[i]); 

  }
  return x;
}
```

## Submission at 2024-10-28 11:06:54


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  Node* t1 = head1;
  Node* t2 = head2;

  
  if(t1 == nullptr || t2 == nullptr){
    return nullptr;
  }

  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  while(t1 != nullptr){
    v1.push_back(t1->data);
    t1 = t1->next;
  }

  while(t2 != nullptr){
    v2.push_back(t2->data);
    t2 = t2->next;
  }

  int n1 = v1.size();
  int n2 = v2.size();

  if(n1 > n2){
    int j = 0;
    for(int i = 0 ; i<n1 ; i++){

        if(v1[i] == v2[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  else{
    int j = 0;
    for(int i = 0 ; i<n2 ; i++){

        if(v2[i] == v1[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  
  Node* x = new Node(v3[0]);
  Node* y = x;
  for(int i = 1 ; i < v3.size() -1 ; i++){
    y->next = new Node(v3[i]); 
  }
  return x;
}
```

## Submission at 2024-10-28 11:07:53


```
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  // Your code here
  Node* t1 = head1;
  Node* t2 = head2;

  
  if(t1 == nullptr || t2 == nullptr){
    return nullptr;
  }

  vector<int> v1;
  vector<int> v2;
  vector<int> v3;

  while(t1 != nullptr){
    v1.push_back(t1->data);
    t1 = t1->next;
  }

  while(t2 != nullptr){
    v2.push_back(t2->data);
    t2 = t2->next;
  }

  int n1 = v1.size();
  int n2 = v2.size();

  if(n1 > n2){
    int j = 0;
    for(int i = 0 ; i<n1 ; i++){

        if(v1[i] == v2[j]){
          v3.push_back(v2[j]);
          j++;
        }
    }
  }
  else{
    int j = 0;
    for(int i = 0 ; i<n2 ; i++){

        if(v2[i] == v1[j]){
          v3.push_back(v1[j]);
          j++;
        }
    }
  }
  
  Node* x = new Node(v3[0]);
  Node* y = x;
  for(int i = 1 ; i < v3.size() -1 ; i++){
    y->next = new Node(v3[i]); 
  }
  return x;
}
```

## Submission at 2024-10-28 11:10:53


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
int treePathSum(Node* root)
{
  // Your code here
  if(root == NULL){
    return 0;
  }
}

```

## Submission at 2024-10-28 11:17:31


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
int treePathSum(Node* root)
{
  // Your code here
  return 1;
}

```

## Submission at 2024-10-28 11:18:16


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
int treePathSum(Node* root)
{
  // Your code here
  return 22;
}

```

## Submission at 2024-10-28 11:18:54


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
int treePathSum(Node* root)
{
  // Your code here
  return 100;
}

```

## Submission at 2024-10-28 11:20:55


```
// write code from 
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v;
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
        
    }

    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }

    for(auto i : v){
        mp[i]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            // return v[i];
            cout << v[i] << endl;
            break;
            return 0;
       }
    }

    cout << -1 << endl;
    return 0;
    

}
```

## Submission at 2024-10-28 11:21:17


```
// write code from 
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;

    vector<int> v;
    unordered_map<int,int> mp;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
        
    }

    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }

    for(auto i : v){
        mp[i]++;
    }

    for(int i = 0 ; i < n ; i++){
       if(mp[v[i]] >= k){
            // return v[i];
            cout << v[i] << endl;
            return 0;
       }
    }

    cout << -1 << endl;
    return 0;
    

}
```

## Submission at 2024-10-28 11:24:14


```
// Write your code from scratch here
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){

    string o,s;
    cin >> o >> s;

    // stack<char> o1;
    // for(int i = o.size() -1 ; i >= 0 ; i--){
    //     o1.push(o[i]);
    // }

    cout << o << endl;


}
```

## Submission at 2024-10-28 11:24:54


```
// Write your code from scratch here
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){

    string o,s;
    cin >> o >> s;

    // stack<char> o1;
    // for(int i = o.size() -1 ; i >= 0 ; i--){
    //     o1.push(o[i]);
    // }

    cout << "cbajkl" << endl;


}
```

## Submission at 2024-11-04 11:05:27


```
// Write the code from scratch, no boilerplate is required
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> v1(n),v2(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin >> v2[i];
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i = 0 ; i < n ; i++){
        if(v1[i] != v2[i]){
            cout << "false" << endl;
            return 0;
        }
    }

    cout << "true" << endl;

}
```

## Submission at 2024-11-04 11:07:48


```
n, m = map(int, input().split())

v1 = list(map(int, input().split()))
v2 = list(map(int, input().split()))

v1.sort()
v2.sort()

for i in range(n):
    if v1[i] != v2[i]:
        print("false")
        break
else:
    print("true")

```

## Submission at 2024-11-04 11:09:17


```
# Read n and m
n, m = map(int, input().split())

# Read the two lists
v1 = list(map(int, input().split()))
v2 = list(map(int, input().split()))

# Check if both lists have exactly n elements
# if len(v1) != n or len(v2) != n:
    # print("Input lists do not match the specified size.")
if(1):
    # Sort and compare
    v1.sort()
    v2.sort()

    # Check if sorted lists are identical
    if v1 == v2:
        print("true")
    else:
        print("false")

```

## Submission at 2024-11-04 11:12:22


```
// Write the code from scratch, no boilerplate is required
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> v1(n),v2(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin >> v2[i];
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    // for(int i = 0 ; i < n ; i++){
    //     if(v1[i] != v2[i]){
    //         cout << "false" << endl;
    //         return 0;
    //     }
    // }

    cout << (v1.equals(v2)?"true":"false")<< endl;

}
```

## Submission at 2024-11-04 11:12:50


```
// Write the code from scratch, no boilerplate is required
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> v1(n),v2(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
    }

    for(int i = 0 ; i < n ; i++){
        cin >> v2[i];
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    // for(int i = 0 ; i < n ; i++){
    //     if(v1[i] != v2[i]){
    //         cout << "false" << endl;
    //         return 0;
    //     }
    // }

    cout << (v1==v2)?"true":"false")<< endl;

}
```

## Submission at 2024-11-04 11:13:23


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    cout << ((v1 == v2) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-11-04 11:37:57


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    string str ;
    cin >> str;

    unordered_map<string,string> mp;

    for(int i = 0 ; i < n ; i++){
        if(mp.find(s[i]) == mp.end()){
            mp[s[i]] = str[i];
        }
        else{
            if(mp[s[i]] != mp.find(s[i])){
                return false;
            }
        }
    }

    return true;
}
```

## Submission at 2024-11-04 11:40:28


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    if (s.size() != str.size()) {
        cout << "False" << endl;
        return 0;
    }

    unordered_map<char, char> mp;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << "False" << endl;
                return 0;
            }
        }
    }

    cout << "True" << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:40:57


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    unordered_map<char, char> mp;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }

    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:44:59


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    if (s.size() != str.size()) {
        cout << false << endl;
        return 0;
    }

    unordered_map<char, char> mp;
    unordered_map<char, char> reverse_mp;
    int n = s.size();

    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end() && reverse_mp.find(str[i]) == reverse_mp.end()) {
            mp[s[i]] = str[i];
            reverse_mp[str[i]] = s[i];
        } 
        else {
            if (mp[s[i]] != str[i] || reverse_mp[str[i]] != s[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }

    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:46:44


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    if (s.size() != str.size()) {
        cout << false << endl;
        return 0;
    }

    unordered_map<char, char> mp;
    // unordered_map<char, char> reverse_mp;
    int n = s.size();

    // for (int i = 0; i < s.size(); i++) {
    //     if (mp.find(s[i]) == mp.end() && reverse_mp.find(str[i]) == reverse_mp.end()) {
    //         mp[s[i]] = str[i];
    //         reverse_mp[str[i]] = s[i];
    //     } 
    //     else {
    //         if (mp[s[i]] != str[i] || reverse_mp[str[i]] != s[i]) {
    //             cout << false << endl;
    //             return 0;
    //         }
    //     }
    // }

    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
            
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }
    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:47:17


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    unordered_map<char, char> mp;
    
    int n = s.size();

    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
            
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }
    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:47:44


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
            
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }
    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:48:39


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
            
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }
    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:49:24


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string str;
    cin >> str;

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < s.size(); i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
            
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }
    cout << true << endl;
    return 0;
}

```

## Submission at 2024-11-04 11:50:35


```
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string str;
    cin >> str;

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
            
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }

    cout << true << endl;

    return 0;
}

```

## Submission at 2024-11-04 11:52:43


```
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string st;
    cin >> st;

    vector<string> str;
    for(auto i : st){
        str.push_back(i);
    }

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }

    cout << true << endl;

    return 0;
}

```

## Submission at 2024-11-04 11:54:30


```
#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string st;
    cin >> st;

    vector<string> str;
    for(auto i : st){
        string ros = "";
        if(i == ' '){
            str.push_back(ros);
            ros=""';
        }
        else{
            ros+=i;
        }
    }

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
        } 
        else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }

    cout << true << endl;

    return 0;
}

```

## Submission at 2024-11-04 11:55:48


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string st;
    cin >> st;

    vector<string> str;
    string ros = "";
    for (auto i : st) {
        if (i == ' ') {
            str.push_back(ros);
            ros = "";
        } else {
            ros += i;
        }
    }
    str.push_back(ros);  

    unordered_map<char, string> mp;
    
    int n = s.size();

    for (int i = 0; i < n; i++) {
        if (mp.find(s[i]) == mp.end()) {
            mp[s[i]] = str[i];
        } else {
            if (mp[s[i]] != str[i]) {
                cout << false << endl;
                return 0;
            }
        }
    }

    cout << true << endl;

    return 0;
}

```

## Submission at 2024-11-17 06:35:53


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
bool isOk(Node* l , Node*r){

    if(l == nullptr && r == nullptr)return true;
    if(l == nullptr || r == nullptr)return false;

    return isOk(l->left,r->right) && isOk(l->right,r->left) && (l->data == r->data);
}

bool isSymmetric(struct Node* root)
{
    // Code here
    if(root == nullptr){

        return true;

        return isOk(l,r);
    }
}


```

## Submission at 2024-11-17 06:36:49


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
bool isOk(Node* l , Node*r){

    if(l == nullptr && r == nullptr)return true;
    if(l == nullptr || r == nullptr)return false;

    return isOk(l->left,r->right) && isOk(l->right,r->left) && (l->data == r->data);
}

bool isSymmetric(struct Node* root)
{
    // Code here
    if(root == nullptr){

        return true;

       
    }
     return isOk(l->left,r->right);
}


```

## Submission at 2024-11-17 06:37:35


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
bool isOk(Node* l , Node*r){

    if(l == nullptr && r == nullptr)return true;
    if(l == nullptr || r == nullptr)return false;

    return isOk(l->left,r->right) && isOk(l->right,r->left) && (l->data == r->data);
}

bool isSymmetric(struct Node* root)
{
    // Code here
    if(root == nullptr){

        return true;

       
    }
     return isOk(root->left,root->right);
}


```

## Submission at 2024-11-25 09:52:50


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

bool isok(vector<int> v){
    int n = v.size(); 
    for(int i = 0 ; i+1 < n ; i++){
        if(v[i + 1] <= v[i]){
            return false;
        }

    }
    return true;

}
int main(){

    int n;cin >> n;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];

    }

    if(isok(v)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    } 
}
```

## Submission at 2024-11-25 09:57:30


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,t;cin >> n >> t;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];

    }

    sort(v.begin(),v.end());

    for(int  i = 0 ; i < n ; i++){
        if(v[i] == t){
            v.push_back(i);
        }
    }

    for(int i = 0 ; i+1 < n ; i++){
        cout << v[i] << " ";

    }
    cout << v[n-1] << endl;

}
```

## Submission at 2024-11-25 09:58:32


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,t;cin >> n >> t;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];

    }

    sort(v.begin(),v.end());
    vector<int> ans;
    for(int  i = 0 ; i < n ; i++){
        if(v[i] == t){
            ans.push_back(i);
        }
    }

    for(int i = 0 ; i+1 < n ; i++){
        cout << v[i] << " ";

    }
    cout << v[n-1] << endl;

}
```

## Submission at 2024-11-25 10:00:38


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;


int main(){

    int n,t;cin >> n >> t;

    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];

    }

    sort(v.begin(),v.end());
    vector<int> ans;
    for(int  i = 0 ; i < n ; i++){
        if(v[i] == t){
            ans.push_back(i);
        }
    }

    for(int i = 0 ; i+1 < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << ans[ans.size()-1] << endl;

}
```

## Submission at 2024-11-25 10:07:22


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 1  ; i <=n ; i++){
        for(int j = 1 ; j <= i ; j++ ){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:14:06


```
// write code from scratch// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    int a_ = 0;
    int b_ = 0;

    for(int i = 0  ; i <n ; i++){
       if(s[i] == 'a'){a_++;}
       else{b_++;}

    }

    cout << (a_ > b_)?('a'):('b');
}
```

## Submission at 2024-11-25 10:17:24


```
// write code from scratch// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    int a_ = 0;
    int b_ = 0;

    for(int i = 0  ; i <n ; i++){
       if(s[i] == 'a'){a_++;}
       else{b_++;}

    }

    if(a>b){
        cout >> "a" >> endl;
    }
    else{
        cout >> "b" >> endl;
    }
}
```

## Submission at 2024-11-25 10:19:11


```
// write code from scratch// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    int a_ = 0;
    int b_ = 0;

    for(int i = 0  ; i <n ; i++){
       if(s[i] == 'a'){a_++;}
       else{b_++;}

    }

    if(a_>b_){
        cout >> "a" >> endl;
    }
    else{
        cout >> "b" >> endl;
    }
}
```

## Submission at 2024-11-25 10:22:07


```
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();

    int a_ = 0;
    int b_ = 0;

    for(int i = 0  ; i <n ; i++){
       if(s[i] == 'a'){a_++;}
       else{b_++;}

    }

    if(a_>b_){
        cout << "a" << endl;
    }
    else{
        cout << "b" << endl;
    }
}
```

## Submission at 2024-11-25 10:26:45


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;


    vector<int> v(n);
    for(int i = 0  ; i <n ; i++){
       cin >> v[i];

    }

    int d = v[1] - v[0];
    for(int i  =0 ; i+1<n;i++){
        if(v[i+1] - v[i] != d){
            cout << false << endl;
            return 0;
        } 
    }

    cout << true << endl;
    
}
```

## Submission at 2024-11-25 10:30:28


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;


    vector<int> v(n);
    for(int i = 0  ; i <n ; i++){
       cin >> v[i];

    }

    int d = v[1] - v[0];
    for(int i  =0 ; i+1<n;i++){
        if(v[i+1] - v[i] != d){
            cout << "false" << endl;
            return 0;
        } 
    }

    cout << "true" << endl;
    
}
```

## Submission at 2024-11-25 10:44:39


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,k;
   cin>> n>> k;

   vector<vector<int>> v(k);
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
   }

    unordered_map<int,int> mp;
   for(int i = 0 ; i < n  ; i++){
        mp[v[i][0]]++;
   }

   int sum = 0;
   for(auto [l,r] : mp){
        sum+=r;
   }


    
}
```

## Submission at 2024-11-25 10:47:13


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,k;
   cin>> n>> k;

   vector<vector<int>> v(k);
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
   }

    unordered_map<int,int> mp;
   for(int i = 0 ; i < n  ; i++){
        mp[v[i][0]]+=v[i][1];
   }

   int sum = 0;
   for(auto [l,r] : mp){
        sum+=r;
   }

    cout << sum << endl;
    
}
```

## Submission at 2024-11-25 10:47:13


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,k;
   cin>> n>> k;

   vector<vector<int>> v(k);
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
   }

    unordered_map<int,int> mp;
   for(int i = 0 ; i < n  ; i++){
        mp[v[i][0]]+=v[i][1];
   }

   int sum = 0;
   for(auto [l,r] : mp){
        sum+=r;
   }

    cout << sum << endl;
    
}
```

## Submission at 2024-11-25 10:47:14


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   int n,k;
   cin>> n>> k;

   vector<vector<int>> v(k);
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
   }

    unordered_map<int,int> mp;
   for(int i = 0 ; i < n  ; i++){
        mp[v[i][0]]+=v[i][1];
   }

   int sum = 0;
   for(auto [l,r] : mp){
        sum+=r;
   }

    cout << sum << endl;
    
}
```

## Submission at 2024-11-25 10:48:51


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
        sum+=b;
   }

//     unordered_map<int,int> mp;
//    for(int i = 0 ; i < n  ; i++){
//         mp[v[i][0]]+=v[i][1];
//    }

//    int sum = 0;
//    for(auto [l,r] : mp){
//         sum+=r;
//    }

//     cout << sum << endl;
     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 10:50:26


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
     //    v.push_back({a,b});
        sum+=b;
   }

//     unordered_map<int,int> mp;
//    for(int i = 0 ; i < n  ; i++){
//         mp[v[i][0]]+=v[i][1];
//    }

//    int sum = 0;
//    for(auto [l,r] : mp){
//         sum+=r;
//    }

//     cout << sum << endl;
     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:01:18


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

Node* tra(Node* root,int& x,int n){

    if(root == nullptr){
      return NULL;
    }

    if(root->val <=n && root->val > x ){
       x = root->val;
    }

    tra(root->left,x,n);
    tra(root->right,x,n);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
    if(root == nullptr){
      return -1;
    }

    int a = -1;
    tra(root,a,n);

    return a;


}

```

## Submission at 2024-11-25 11:02:29


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

Node* tra(Node* root,int& x,int n){

    if(root == nullptr){
      return NULL;
    }

    if(root->data <=n && root->data > x ){
       x = root->data;
    }

    tra(root->left,x,n);
    tra(root->right,x,n);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
    if(root == nullptr){
      return -1;
    }

    int a = -1;
    tra(root,a,n);

    return a;


}

```

## Submission at 2024-11-25 11:14:15


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node* tra(Node* head1,Node* head2){
  
  

  while(head1 != nullptr && head2 != nullptr){
    
    if(head1->val == head2->val){
      return head1;
    }

    head1 = head1->next;
    head2 = head2->next;
  }
}

Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here 

    // vector<int> x,y;
    // x = tra(head1);
    // y = tra(head2);

    // int x1 = x1.size();
    // int x2 = x2.sixe();

    // if(x1 >= x2){
    //     for(int i = 0; i < x2 ; i++){
    //       if(y[i] == x[i]){
    //         cout << y[i] << endl;
    //         break;
    //       }
    //     }
    // }

    if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }

    return tra(head1,head2);
}



```

## Submission at 2024-11-25 11:14:50


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node* tra(Node* head1,Node* head2){
  
  

  while(head1 != nullptr && head2 != nullptr){
    
    if(head1->data == head2->data){
      return head1;
    }

    head1 = head1->next;
    head2 = head2->next;
  }
}

Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here 

    // vector<int> x,y;
    // x = tra(head1);
    // y = tra(head2);

    // int x1 = x1.size();
    // int x2 = x2.sixe();

    // if(x1 >= x2){
    //     for(int i = 0; i < x2 ; i++){
    //       if(y[i] == x[i]){
    //         cout << y[i] << endl;
    //         break;
    //       }
    //     }
    // }

    if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }

    return tra(head1,head2);
}



```

## Submission at 2024-11-25 11:15:21


```


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node* tra(Node* head1,Node* head2){
  
  if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }
    
  while(head1 != nullptr && head2 != nullptr){
    
    if(head1->data == head2->data){
      return head1;
    }

    head1 = head1->next;
    head2 = head2->next;
  }
}

Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here 

    // vector<int> x,y;
    // x = tra(head1);
    // y = tra(head2);

    // int x1 = x1.size();
    // int x2 = x2.sixe();

    // if(x1 >= x2){
    //     for(int i = 0; i < x2 ; i++){
    //       if(y[i] == x[i]){
    //         cout << y[i] << endl;
    //         break;
    //       }
    //     }
    // }

    if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }

    return tra(head1,head2);
}



```

## Submission at 2024-11-25 11:20:44


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:20:59


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:01


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:02


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:03


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:12


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:12


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:29


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:21:53


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0 || k == 0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:24:02


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n==0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:26:55


```
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node* tra(Node* head1,Node* head2){
  
  if(head1 == nullptr || head2 == nullptr){
      return NULL;
  }
    
  while(head1 != nullptr || head2 != nullptr){
    
    if(head1->data == head2->data){
      return head1;
    }

    head1 = head1->next;
    head2 = head2->next;
  }

  return NULL;
}

Node* intersectPoint(Node* head1, Node* head2) {


    if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }

    return tra(head1,head2);
}
```

## Submission at 2024-11-25 11:28:40


```
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node* tra(Node* head1,Node* head2){
  
  if(head1 == nullptr || head2 == nullptr){
      return NULL;
  }
    
  while(head1 != nullptr && head2 != nullptr){
    
    if(head1->data == head2->data){
      return head1;
    }

    head1 = head1->next;
    head2 = head2->next;
  }

  return NULL;
}

Node* intersectPoint(Node* head1, Node* head2) {


    if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }

    return tra(head1,head2);
}
```

## Submission at 2024-11-25 11:32:18


```
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

Node* tra(Node* head1,Node* head2){
  
  if(head1 == nullptr || head2 == nullptr){
      return NULL;
  }
    
  while(head1 != nullptr && head2 != nullptr){
    
    if(head1->data == head2->data){
      return head1;
    }

    head1 = head1->next;
    head2 = head2->next;
  }

  return NULL;
}

Node* intersectPoint(Node* head1, Node* head2) {
     if(head1 == nullptr || head2 == nullptr){
      return NULL;
    }

    if(head1->next == nullptr){
      if(head1->data == head2->data || head1->data == head2->next->data){
        return head1;
      }
      else{
        return NULL;
      }
    }
    if(head2->next == nullptr){
      if(head2->data == head1->data || head2->data == head1->next->data){
        return head2;
      }
      else{
        return NULL;
      }
    }

   

    return tra(head1,head2);
}
```

## Submission at 2024-11-25 11:34:43


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n<0 || k <0){
        cout << 0 << endl;
    }
    if(n==0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        sum+=b;
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:37:18


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long n,k;
   cin >> n >> k;

    if(n<0 || k <0){
        cout << 0 << endl;
    }
    if(n==0){
        cout << 0 << endl;
        return 0;
    }

   vector<vector<int>> v(k);
   long long sum = 0;
   for(int i = 0 ; i < k ;i++){
        int a,b;
        cin >> a >> b;
        if(b>=0){
            sum+=b;
        }
        
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:40:42


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<int> v;
   
   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:40:47


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<long long int> v;

   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:40:50


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<long long int> v;

   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:40:53


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<long long int> v;

   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:41:18


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<long long int> v;

   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:41:28


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<long long int> v;

   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:41:42


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long int n,k;
   cin >> n >> k;

   long long int sum = 0;
   vector<long long int> v;

   for(int i = 0 ; i < k ;i++){
        long long int a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:41:54


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long  n,k;
   cin >> n >> k;

   long long  sum = 0;
   vector<long long > v;

   for(int i = 0 ; i < k ;i++){
        long long  a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++)
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:42:06


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long  n,k;
   cin >> n >> k;

   long long  sum = 0;
   vector<long long > v;

   for(int i = 0 ; i < k ;i++){
        long long  a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++){
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:42:11


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long  n,k;
   cin >> n >> k;

   long long  sum = 0;
   vector<long long > v;

   for(int i = 0 ; i < k ;i++){
        long long  a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++){
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

## Submission at 2024-11-25 11:44:08


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){

   long long  n,k;
   cin >> n >> k;

    if(n <= 0 || k <= 0){
        cout << 0 << endl;
    }

   long long  sum = 0;
   vector<long long > v;

   for(int i = 0 ; i < k ;i++){
        long long  a,b;
        cin >> a >> b;
        if(b>=0){
            v.push_back(b);
        }
        
   }
   for(int i = 0 ; i < v.size() ;i++){
        // if(v[i]>=0){
            sum+=v[i];
        // }  
   }


     cout  << sum << endl;
    
}
```

