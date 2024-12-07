## Submission at 2024-08-05 10:19:06


```
// Write your C++ code here from the scratch
#include<iostream>
#include<string>

using namespace std;

int main(){
string name;
cin>>name;
cout<<"Hello "<<name<<"!"<<endl;

return 0;
}


```

## Submission at 2024-08-05 10:30:21


```
// Write your C++ code here from the scratch
#include<iostream>
#include<string>

using namespace std;

int main(){
    string name;
    cin>> name;
    cout<< "Hello "<< name<<"!"<<endl;

    return 0;
}
```

## Submission at 2024-08-05 10:41:20


```
// Write your C++ code here
#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;

    cin>> n;

    string st[n];

    for(int i=0; i<n; i++){
        cin>>st[i];
    }
    for(int i=0; i<n; i++){
        cout<<"Hello " <<st[i]<< "!"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-12 09:55:59


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x == 0 || x == 1){ 
        return x;}
    
    return fibonacci(x-1) + fibonacci(x-2);

}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:25:56


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    
    if (n == 1){
        return true;
    }
    
    if (n % 2 != 0 || n<= 0) {
        return false;
    }
    
    return isPowerOfTwo(n / 2);

int main() {
    int n;
    cin >> n;

    
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:31:29


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    
    if (n == 1){
        return true;
    }
    
    if (n % 2 != 0 || n <= 0) {
        return false;
    }
    
    return isPowerOfTwo(n / 2);
}

int main() {
    int n;
    cin >> n;

    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-21 10:28:47


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

## Submission at 2024-08-21 10:31:25


```
#include <iostream>
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

## Submission at 2024-08-21 10:38:05


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void parenthesis(int n, int open, int close, string current, vector<string>& result) {

    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
  

    if (open < n) {
        parenthesis(n, open + 1, close, current + '(', result);
    }
  

    if (close < open) {
        parenthesis(n, open, close + 1, current + ')', result);
    }
}

vector<string> parentheses(int n) {
    vector<string> result;
    parenthesis(n, 0, 0, "", result);
    return result;

}

int main() {

    int n;

    cin >> n;
    vector<string> combinations = parentheses(n);

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

## Submission at 2024-09-09 02:30:34


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

## Submission at 2024-09-09 02:31:14


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

## Submission at 2024-09-09 02:32:15


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

## Submission at 2024-09-09 02:32:47


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

## Submission at 2024-09-09 02:33:41


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

## Submission at 2024-09-09 02:34:21


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

## Submission at 2024-09-09 10:06:42


```
#include <iostream>

using namespace std;

int input(int i){
    if (i!=1 && i > 0 && i%3 == 0){

        return i/3;
    }
    else if (i<0){
        return 0;
    }
    else {
        return 0;
    }
}

int main(){
    int x;
    cin>> x;
    cout<< input(x) << endl;
    
}
```

## Submission at 2024-09-09 10:14:39


```
#include <iostream>

using namespace std;

bool input(int i){
    if (i%3 == 0){

        return true;
    }
    
    else if( i%3 == 1 ||  i%3 == 2){
        return false;
    }
    else {

        return input(i%3);
    }

}

int main(){
    int x;
    cin>> x;
    cout<< input(x) << endl;
    
}
```

## Submission at 2024-09-09 10:20:09


```
#include <iostream>

using namespace std;

bool input(int i){
    if (i%3 == 0){

        return true;
    }
    
    else if( i%3 == 1 ||  i%3 == 2){
        return false;
    }
    else {

        return input(i%3);
    }

}

int main(){
    int x;
    cin>> x;

    if( input(x)== 0){
        cout<< "False";

    }
    else{
        cout<< "True";
    }
}
```

## Submission at 2024-09-09 10:21:13


```
#include <iostream>

using namespace std;

bool input(int i){
    if (i%3 == 0){

        return true;
    }
    
    else if( i%3 == 1 ||  i%3 == 2 || i<0){
        return false;
    }
    else {

        return input(i%3);
    }

}

int main(){
    int x;
    cin>> x;

    if( input(x)== 0){
        cout<< "False";

    }
    else{
        cout<< "True";
    }
}
```

## Submission at 2024-09-09 10:45:44


```
#include <iostream>

using namespace std;

int count(string str, int x){
    int a = 0;
    int i = 0;
    while(i<str.length()){

        if( == x){
            a = a++;
        }
        i++;
    }
    return a;
}

int main(){
    string str;
    int x;
    cin >> str , x;
    cout<< count(str, x);
    }


```

## Submission at 2024-09-09 11:13:06


```
#include<iostream>

using namespace std;


int main(){
    int m;
    int n;

    cin>> m, n;

    array matrix[][];

    for(int i=0; i<m; i++){
        for( int j=0; j< n; j++){
            cin>> matrix[i][j];
        }
        cout<< endl;
    }


    int x = 0;
    

    for(int j = 0; j<n; j++){
        for(int i=0; i<m; i++){
            if(matrix[i][j] > x){
                x = matrix[i][j];
            }
        }

        for(int i =0; i<m; i++){
            if(matrix[i][j] == -1){
                matrix[i][j] == x;
            }
        }
    }

    for(int i=0; i<m; i++){
        for( int j=0; j< n; j++){
            cout>> matrix[i][j] >> " ";
        }
        cout<< endl;
    }

}


```

## Submission at 2024-09-09 11:19:15


```
#include <iostream>

using namespace std;

bool input(int i){
    if (i%3 == 0 && i>=0){
        return true;
    }
    
    else if( i%3 == 1 ||  i%3 == 2 || i<0){
        return false;
    }
    else {

        return input(i%3);
    }

}

int main(){
    int x;
    cin>> x;

    if( input(x)== 0){
        cout<< "False";

    }
    else{
        cout<< "True";
    }
}
```

## Submission at 2024-09-09 11:23:32


```
#include <iostream>
#include<string>
using namespace std;

int count(string str, int x){
    int a = 0;
    int i = 0;
    while(i<str.length()){

        if(str.charAt(i)== x){
            a = a++;
        }
        i++;
    }
    return a;
}

int main(){
    string str;
    int x;
    cin >> str , x;
    cout<< count(str, x);
    }
```

## Submission at 2024-09-16 07:51:15


```
#include  <iostream>
#include <string>

using namespace std;

int countDigitRecursive(const string& s, char x, int index) {
    if (index == s.length()) {
        return 0;
    }

    int count = (s[index] == x) ? 1 : 0;

    return count + countDigitRecursive(s, x, index + 1);
}

int main() {
    string s;
    char x;
    
    cout << "Enter a string of digits: ";
    cin >> s;
    
    cout << "Enter the digit to count: ";
    cin >> x;

    int frequency = countDigitRecursive(s, x, 0);

    cout << "The digit " << x << " appears " << frequency << " times in the string." << endl;
    
    return 0;
}
```

## Submission at 2024-09-16 07:53:00


```
#include  <iostream>
#include <string>

using namespace std;

int countDigitRecursive(const string& s, char x, int index) {
    if (index == s.length()) {
        return 0;
    }

    int count = (s[index] == x) ? 1 : 0;

    return count + countDigitRecursive(s, x, index + 1);
}

int main() {
    string s;
    char x;
    
    cin >> s >> x;

    int frequency = countDigitRecursive(s, x, 0);

    cout << frequency << endl;
    
    return 0;
}
```

## Submission at 2024-10-07 09:57:05


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    int arr[q.size()-1];
    int x = q.size();

    for(int i=0; i< x; i++){
        arr[i] = q.front();
        q.pop();   
    }
    for( int i = x-1; i>=0; i--){
        q.push(arr[i]);
    }
return q;

}

```

## Submission at 2024-10-07 10:00:10


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    
    int arr[q.size()-1];
    long long x = q.size();

    for(int i=0; i< x; i++){
        arr[i] = q.front();
        q.pop();   
    }
    for( int i = x-1; i>=0; i--){
        q.push(arr[i]);
    }
return q;

}

```

## Submission at 2024-10-07 10:01:09


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    
    int arr[q.size()-1];
    long long x = q.size();

    for(long long i=0; i< x; i++){
        arr[i] = q.front();
        q.pop();   
    }
    for(long long i = x-1; i>=0; i--){
        q.push(arr[i]);
    }
return q;

}

```

## Submission at 2024-10-07 10:52:58


```
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>> s;

    cout<< "1+2+3"<<endl;
}
```

## Submission at 2024-10-07 11:06:48


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    
    long long arr[q.size()-1];
    long long x = q.size();

    for(long long i=0; i< x; i++){
        arr[i] = q.front();
        q.pop();   
    }
    for(long long i = x-1; i>=0; i--){
        q.push(arr[i]);
    }
return q;


}

```

## Submission at 2024-10-28 08:58:45


```
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        return max(l,r)+1;
        
    }
};
```

## Submission at 2024-10-28 10:15:57


```
#include<iostream>
#include<string>

using namespace std;

int main(){
    string a;
    string b;

    cin>> a;
    
    for (int i = 0; i< a.size(); i++){
        for(int j = i; j< a.size(); j++){
            if(a[i] != a[j] && a[i]!= ' '){
                b[i] = a[i];
            }
       }
    }

    for(int i = 0; i< b.size(); i++){
        cout << b[i];
    }


}
```

## Submission at 2024-10-28 10:25:47


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
int x = INT_MAX;
int Mini(Node* root){
    if(root == NULL) return 0;

    int l = min(root->data, root->left->data);
    int r = min(root->data, root->right->data);

    return min(l,r);
}
int findMin(Node *root)
{
    int a;
    Mini(root);
    
}


```

## Submission at 2024-10-28 11:26:40


```
#include<iostream>

using namespace std;

int main(){
    int k,n;
    cin>>n;
    cin>>k;

    int arr[n];
    cin>> arr[n];

    for (int i = 0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i] = arr[j]){
                count++;
            }
        }
        
        if(count < k){
            return -1;
        }
        
    }
}
```

## Submission at 2024-11-25 10:05:49


```
#include<bits/stdc++.h>


using namespace std;

int main(){
    string s;

    cin>> s;
    int ca = 0, cb = 0;
    for(int i =0; i<s.length(); i++){
        if (s[i] == 'a'){
            ca++;
        }
        else{
            cb++;
        }
    }
    if (ca > cb){
        cout<< "a";
    }
    else{
        cout<< "b";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:02:14


```
#include<iostream>

using namespace std;

int main(){
    int a;
    cin>>a;

    for (int i = 0; i<a; i++){
        for (int j = 0; j<i+1; j++){
            printf("*");
        }
        cout<<""<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-25 11:11:36


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    int arr[a];

    for (int i = 0; i<a; i++){
        cin>> arr[i];
    }

    bool flag = true;
    for(int i = 0; i<(a-2); i++){
        if((arr[i+2]-arr[i+1]) != arr[i+1]- arr[i]){
            flag = false;
        }
    }

    if(flag == false){
        cout<< "false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:11:36


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    int arr[a];

    for (int i = 0; i<a; i++){
        cin>> arr[i];
    }

    bool flag = true;
    for(int i = 0; i<(a-2); i++){
        if((arr[i+2]-arr[i+1]) != arr[i+1]- arr[i]){
            flag = false;
        }
    }

    if(flag == false){
        cout<< "false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:11:38


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;

    int arr[a];

    for (int i = 0; i<a; i++){
        cin>> arr[i];
    }

    bool flag = true;
    for(int i = 0; i<(a-2); i++){
        if((arr[i+2]-arr[i+1]) != arr[i+1]- arr[i]){
            flag = false;
        }
    }

    if(flag == false){
        cout<< "false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:25:25


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    vector<int> arr;

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<< "YES";

    return 0;
}

```

## Submission at 2024-11-25 11:30:10


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}

```

## Submission at 2024-11-25 11:31:19


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}

```

## Submission at 2024-11-25 11:32:52


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==0){
        printf("NO");
    }
    else{
        printf("NO");
    }

    return 0;
}

```

## Submission at 2024-11-25 11:32:52


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==0){
        printf("NO");
    }
    else{
        printf("NO");
    }

    return 0;
}

```

## Submission at 2024-11-25 11:34:38


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}

```

## Submission at 2024-11-25 11:34:40


```
#include<bits/stdc++.h>

using namespace std;

// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
// }; 

// vector<int> inorder(vector<int> &arr, int &Node){
//     if(Node->data == NULL) return;

//     if(Node->left !=NULL) inorder(arr, Node->left);
//     arr.push_back(Node->data);
//     if(Node->right != NULL) inorder(arr, Node->right);

//     return arr;
// }

int main(){
    int n;
    cin>> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(n==0){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}

```

