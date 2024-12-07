## Submission at 2024-08-05 10:18:49


```
#include<bits/stdc++.h>
using namespace std;
void sayHello(string name){
    cout<<"Hello "<<name << "!";
}
int main(){
    string name;
    cin>>name;
    sayHello(name);
}
```

## Submission at 2024-08-05 10:19:38


```
#include<bits/stdc++.h>
using namespace std;
void sayHello(string name){
    cout<<"Hello "<<name << "!";
}
int main(){
    string name;
    cin>>name;
    sayHello(name);
}
```

## Submission at 2024-08-05 10:29:11


```
#include<bits/stdc++.h>
using namespace std;
void sayHello(string name){
    cout<<"Hello "<<name   << "!";
}
int main(){
    string name;
    cin>>name;
    sayHello(name);
    return 0;
}
```

## Submission at 2024-08-05 10:36:04


```
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-12 09:46:18


```
#include <bits/stdc++.h>

using namespace std;

int fibonacci(int x) {
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    
    }
    else{
        fibonacci(x) = fibonacci(x-1) + fibonacci(x-2);
        
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

## Submission at 2024-08-12 09:57:52


```
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int x) {
    if(x <= 0){
        return 0;
    }
    else if(x == 1){
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
    int a = fibonacci(x);
    cout<<a<<endl;

    return 0;
}

```

## Submission at 2024-08-12 10:20:56


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1){
        return true;
    }
    if(n%2 == 0){
       return isPowerOfTwo(n/2);
    }
    else{
        return false;
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

## Submission at 2024-09-02 10:16:01


```
#include <bits/stdc++.h>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode *head) {
    vector<int> result;
    ListNode* temp = head;
    while(temp != NULL){
        result.push_back(temp -> val);
        temp = temp -> next;
    }
    return result;
}

```

## Submission at 2024-09-02 10:48:16


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
    int counter = 0;
    Node* temp = head;
    Node* temp2 = head;
    while(temp != nullptr){
        temp = temp -> next;
        counter ++;
    }
    if(k>counter){
        return -1;
    }
    
   

    for(int i = 1;i<k ;i++){
        temp2 = temp2->next;
    }
    int result = temp2->data;
    return result;
}

```

## Submission at 2024-09-02 10:57:27


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
   
    Node* temp = head;
    int counter = 1;
    while(counter<k){
        if(temp->next){
        temp = temp -> next;
       counter++;
        }
        else{
            return -1;
        }
    }
    return temp->data;
}

```

## Submission at 2024-09-09 05:06:03


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

Node* deleteNode(Node *head,int k)
{
    if(head == NULL) return head;
    if(k == 1){
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
        
    }
    return head;
}

```

## Submission at 2024-09-09 05:06:36


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

Node* deleteNode(Node *head,int k)
{
    if(head == NULL) return head;
    if(k == 1){
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
        
    }
    return head;
}

```

## Submission at 2024-09-09 05:08:46


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> maxArray(const vector<int>& a, const vector<int>& b, int n) {
    vector<int> c(n);  // Create a new array 'c' of size 'n'
    
    for (int i = 0; i < n; i++) {
        c[i] = max(a[i], b[i]);  // Assign the maximum of a[i] and b[i] to c[i]
    }
    
    return c;
}

int main() {
    int n;
    cout << "Enter the size of the arrays: ";
    cin >> n;
    
    vector<int> a(n), b(n);
    
    cout << "Enter elements of array a: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cout << "Enter elements of array b: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> c = maxArray(a, b, n);  // Get the array 'c'
    
    cout << "Array c: ";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";  // Output array 'c'
    }
    
    return 0;
}

```

## Submission at 2024-09-09 05:09:47


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> maxArray(const vector<int>& a, const vector<int>& b, int n) {
    vector<int> c(n);  // Create a new array 'c' of size 'n'
    
    for (int i = 0; i < n; i++) {
        c[i] = max(a[i], b[i]);  // Assign the maximum of a[i] and b[i] to c[i]
    }
    
    return c;
}

int main() {
    int n;
    
    cin >> n;
    
    vector<int> a(n), b(n);
    
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> c = maxArray(a, b, n);  // Get the array 'c'
    
    
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";  // Output array 'c'
    }
    
    return 0;
}

```

## Submission at 2024-09-09 09:56:37


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    if(n>1){
    if(n%3 == 0){
        checkPowerOf3(n/3);

    }
    else if(n%3 != 0){
        cout<< "False";
    }
    }
    if(n == 1){
        cout<<"True";
    }
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 09:59:09


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        checkPowerOf3(n/3);
        if(n==1){
            cout<<"True"
        }

    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    if(n == 1){
        cout<<"True";
    }
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 09:59:52


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        if(n==1){
            cout<<"True"
        }

        checkPowerOf3(n/3);
        
    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 10:00:40


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        if(n==1){
            cout<<"True";
        }

        checkPowerOf3(n/3);
        
    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 10:02:05


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        if(n==1 || n==-1){
            cout<<"True";
        }

        checkPowerOf3(n/3);
        
    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 10:06:28


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        if(n==1 || n == -1){
            cout<<"True";
        }

        checkPowerOf3(n/3);
        
    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 10:08:38


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        if(n==1 ){
            cout<<"True";
        }
        if(n == -1){
            cout<<"True";
        }
        n = n/3;

        checkPowerOf3(n);
        
    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 10:09:43


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(long n){
    
    if(n%3 == 0){
        if(n==1 ){
            cout<<"True";
        }
        if(n == -1){
            cout<<"True";
        }
        n = n/3;

        checkPowerOf3(n);
        
    }
    else if(n%3 != 0){
        cout<< "False";
    }
    
    
    
}
int main(){
    long n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 10:32:15


```
#include<bits/stdc++.h>
using namespace std;

int count(string s, char n,int i,int cnt){
    if(i == s.length() ){
        return cnt;
    }
    
    
    if(s[i] == n){
        cnt++;
         count(s,n,i+1,cnt);
    }
    else{
        count(s,n,i+1,cnt);
    }


}
int main(){
    string s;
    char n;
    cin>>s;
    cin>>n;
  int a = count(s,n,0,0);

  cout<<a;
    return 0;
}
```

## Submission at 2024-09-09 10:54:01


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
    Node *prev = head;
    Node *temp = head->next;
    while(temp!=NULL){
        if(prev->data == temp->data){
            prev->next = temp->next;
            delete(temp);
            prev = prev->next;
            temp = prev->next;
        }
        else{
            prev = prev->next;
            temp = temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:55:50


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
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *prev = head;
    Node *temp = head->next;
    while(temp!=NULL){
        if(prev->data == temp->data){
            prev->next = temp->next;
            delete(temp);
            prev = prev->next;
            temp = prev->next;
        }
        else{
            prev = prev->next;
            temp = temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:57:04


```
#include <bits/stdc++.h>
using namespace std;
void checkPowerOf3(int n){
    
    if(n%3 == 0){
        if(n==1){
            cout<<"True";
            return;
        }

        checkPowerOf3(n/3);
        
    }
    else if(n%3 != 0){
        cout<< "False";
        return;
    }
    
    
    
}
int main(){
    int n;
    cin>>n;
    checkPowerOf3(n);
    return 0;
}
```

## Submission at 2024-09-09 11:20:32


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
  Node *temp = head;
  Node *left = temp;
  Node *temp2 = head;
  int cnt = 0;
  while(temp2){
    cnt++;
    temp = temp->next;
  }

 

while(temp!=NULL){
  if(temp->next->next == NULL){
    Node *right = temp->next;
    Node *prev = temp;
    break;
  }
   temp = temp->next;
}
right->next = prev;
for(int i = 0;i<(cnt/2);i++{
  if(left->data == right->data){
    left = left->next;
    right = right->next;
  }
  else{
    return false;
  }

}
return true;


}
```

## Submission at 2024-09-09 11:28:27


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
  Node *temp = head;
  Node *left = temp;
  Node *temp2 = head;
  int cnt = 0;
  int flag = 0;
  while(temp2){
    cnt++;
    temp = temp->next;
  }

 

while(temp!=NULL){
  if(temp->next->next == NULL){
    Node *right = temp->next;
    Node *prev = temp;
    right->next = prev;
    flag = 1;
    break;

  }
}

for(int i = 0;i<(cnt/2);i++){
  if(left->data == right->data){
    left = left->next;
    right = right->next;
  }
  else{
    return false;
  }

}
return true;


}
```

## Submission at 2024-09-10 06:04:43


```
#include <bits/stdc++.h>
using namespace std;

void checkPowerOf3(int n) {
    // Handle base case where n is 1 (3^0)
    if (n == 1) {
        cout << "True";
        return;
    }
    
    // If n is divisible by 3, keep dividing
    if (n % 3 == 0) {
        checkPowerOf3(n / 3);
    } 
    else {
        // If n is not divisible by 3 and not equal to 1
        cout << "False";
    }
}

int main() {
    int n;
    cin >> n;
    
    // Handle edge cases like n <= 0
    if (n <= 0) {
        cout << "False";
    } else {
        checkPowerOf3(n);
    }
    
    return 0;
}

```

## Submission at 2024-09-10 06:07:02


```
#include<bits/stdc++.h>
using namespace std;

int count(string s, char n,int i,int cnt){
    if(i == s.length() ){
        return cnt;
    }
    
    
    if(s[i] == n){
        cnt++;
        return count(s,n,i+1,cnt);
    }
    else{
        return count(s,n,i+1,cnt);
    }


}
int main(){
    string s;
    char n;
    cin>>s;
    cin>>n;
  int a = count(s,n,0,0);

  cout<<a;
    return 0;
}
```

## Submission at 2024-09-10 06:09:40


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
    Node *prev = head;
    Node *temp = head->next;
    while(temp!=NULL){
        if(prev->data == temp->data){
            prev->next = temp->next;
            delete(temp);
            
            temp = prev->next;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-10 06:30:28


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
  stack<int> st;

    // Initialize a temporary pointer
    // to the head of the linked list
    Node* temp = head;

    // Traverse the linked list and
    // push values onto the stack
    while (temp != NULL) {
        
        // Push the data from the
        // current node onto the stack
        st.push(temp->data); 
        
         // Move to the next node
        temp = temp->next;  
    }

    // Reset the temporary pointer back
    // to the head of the linked list
    temp = head;

    // Compare values by popping from the stack
    // and checking against linked list nodes
    while (temp != NULL) {
        if (temp->data != st.top()) {
            
            // If values don't match,
            // it's not a palindrome
            return false; 
        }
        
        // Pop the value from the stack
        st.pop();         
        
        // Move to the next node
        // in the linked list
        temp = temp->next; 
    }

     // If all values match,
     // it's a palindrome
    return true;
}



```

## Submission at 2024-10-07 09:58:32


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    int n = q.size();
    vector<int>arr;
    for(int i =0;i<n;i++){
        arr[i] = q.front();
        q.pop();

    }
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        swap(arr[lo],ar[hi]);
        lo++;
        hi--;
    }
    for(int i = 0;i<n;i++){
        q.push(arr[i]);
    }
    return q;
}

```

## Submission at 2024-10-07 09:59:17


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    int n = q.size();
    vector<int>arr;
    for(int i =0;i<n;i++){
        arr[i] = q.front();
        q.pop();

    }
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        swap(arr[lo],arr[hi]);
        lo++;
        hi--;
    }
    for(int i = 0;i<n;i++){
        q.push(arr[i]);
    }
    return q;
}

```

## Submission at 2024-10-07 10:38:29


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    int n = s.size();
    for(int i = 0;i<n;i++){
        st.push(s[i]);
        if(s[i] = '.'){
            while(!st.empty()){
                cout<<st.top();
                st.pop();

            }
        }
        
        

    }
    
    
    
    return 0;
}
```

## Submission at 2024-10-07 10:57:58


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"1+2+3";
    return 0;
}
```

## Submission at 2024-10-07 11:14:21


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    int n = q.size();
    stack<int>arr;
    for(int i =0;i<n;i++){
        int a = q.front();
        arr.push(a);
        q.pop();

    }
    
    for(int i = 0;i<n;i++){
        int b = arr.top();
        q.front() = b;
        arr.pop();
    }
    return q;
}
```

## Submission at 2024-10-07 11:18:05


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    int n = q.size();
    stack<int>arr;
    for(int i =0;i<n;i++){
        int a = q.front();
        arr.push(a);
        q.pop();

    }
    
    for(int i = 0;i<n;i++){
        int b = arr.top();
        q.push() = b;
        arr.pop();
    }
    return q;
}
```

## Submission at 2024-10-28 10:13:37


```
#include<bits/stdc++.h>
using namespace std;
int checkFreq(vector<int> &vec,int k){
    map<int,int>cnt;
    for(int i = 0;i<vec.size();i++){
        cnt[vec[i]]++;
        if(cnt[vec[i]] == k){
            return vec[i];
            break;
        }
    }
    return -1;

}
int main(){
int n;
cin>>n;
int k;
cin>>k;
vector<int> vec;
for(int i = 0;i<n;i++){
    cin>>vec[i];
}
int ans = checkFreq(vec,k);
cout<<ans;
return 0;
}
```

## Submission at 2024-10-28 10:38:52


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
int min(int a, int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
}
int preOrder(Node *root,int mini){
    if(root == NULL){
        return mini;
    }
    mini = min(root->data,mini);
    preOrder(root->left,mini);
    preOrder(root->right,mini);

}

int findMin(Node *root)
{
    int ans = preOrder(root,ans);
    
    return ans;
}


```

## Submission at 2024-10-28 10:41:00


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
int checkmin(int a, int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
}
int preOrder(Node *root,int mini){
    if(root == NULL){
        return mini;
    }
    mini = checkmin(root->data,mini);
    preOrder(root->left,mini);
    preOrder(root->right,mini);

}

int findMin(Node *root)
{
    int x = 400000;
    int ans = preOrder(root,x);
    
    return ans;
}


```

## Submission at 2024-10-28 11:25:59


```
#include<bits/stdc++.h>
using namespace std;
int checkFreq(vector<int> &vec,int k,int n){
    map<int,int>cnt;
    int ans = -1;
    for(int i = 0;i<n;i++){
        cnt[vec[i]]++;
        
    }
    for(int i = 0;i<n;i++){
        if(cnt[vec[i]] >= k){
            ans = vec[i];
            break;
        }
        
    }

    return ans;

}
int main(){
int n;
cin>>n;
int k;
cin>>k;
cout<<endl;
vector<int> vec;
for(int i = 0;i<n;i++){
    cin>>vec[i];
}

int ans = checkFreq(vec,k,n);
cout<<ans;
return 0;
}
```

## Submission at 2024-10-29 05:58:27


```
#include<bits/stdc++.h>
using namespace std;
int checkFreq(vector<int> &vec,int k,int n){
    map<int,int>cnt;
    int ans = -1;
    for(int i = 0;i<n;i++){
        cnt[vec[i]]++;
        
    }
    for(int i = 0;i<n;i++){
        if(cnt[vec[i]] >= k){
            ans = vec[i];
            break;
        }
        
    }

    return ans;

}
int main(){
int n;
cin>>n;
int k;
cin>>k;
cout<<endl;
vector<int> vec(n);
for(int i = 0;i<n;i++){
    cin>>vec[i];
}

int ans = checkFreq(vec,k,n);
cout<<ans;
return 0;
}
```

## Submission at 2024-10-29 05:59:58


```
#include <bits/stdc++.h>
using namespace std;

int checkFreq(vector<int> &vec, int k, int n) {
    map<int, int> cnt;
    int ans = -1;
    for (int i = 0; i < n; i++) {
        cnt[vec[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (cnt[vec[i]] >= k) {
            ans = vec[i];
            break;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int ans = checkFreq(vec, k, n);
    cout << ans;
    return 0;
}

```

## Submission at 2024-10-29 06:00:50


```
#include<bits/stdc++.h>
using namespace std;
int checkFreq(vector<int> &vec,int k,int n){
    map<int,int>cnt;
    int ans = -1;
    for(int i = 0;i<n;i++){
        cnt[vec[i]]++;
        
    }
    for(int i = 0;i<n;i++){
        if(cnt[vec[i]] >= k){
            ans = vec[i];
            break;
        }
        
    }

    return ans;

}
int main(){
int n;
cin>>n;
int k;
cin>>k;

vector<int> vec(n);
for(int i = 0;i<n;i++){
    cin>>vec[i];
}

int ans = checkFreq(vec,k,n);
cout<<ans;
return 0;
}
```

## Submission at 2024-10-29 06:01:12


```
#include<bits/stdc++.h>
using namespace std;
int checkFreq(vector<int> &vec,int k,int n){
    map<int,int>cnt;
    int ans = -1;
    for(int i = 0;i<n;i++){
        cnt[vec[i]]++;
        
    }
    for(int i = 0;i<n;i++){
        if(cnt[vec[i]] >= k){
            ans = vec[i];
            break;
        }
        
    }

    return ans;

}
int main(){
int n;
cin>>n;
int k;
cin>>k;

vector<int> vec(n);
for(int i = 0;i<n;i++){
    cin>>vec[i];
}

int ans = checkFreq(vec,k,n);
cout<<ans;
return 0;
}
```

## Submission at 2024-11-25 09:56:52


```
#include<bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}
```

## Submission at 2024-11-25 09:58:32


```
#include<bits/stdc++.h>
using namespace std;
void printPattern(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    printPattern(n);
    return 0;
}
```

## Submission at 2024-11-25 10:12:32


```
#include<bits/stdc++.h>
using namespace std;
bool checkAP(vector<int> vec){
    int d = vec[1] - vec[0];
    for(int i = 0;i<vec.size()-1;i++){
        if(vec[i]+d != vec[i+1]){
            return false;
            break;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    bool a = checkAP(vec);
    if(a == 0 ){
        cout<<"false"
    }
    else{
        cout<<"true"
    }
    return 0;
}
```

## Submission at 2024-11-25 10:13:08


```
#include<bits/stdc++.h>
using namespace std;
bool checkAP(vector<int> vec){
    int d = vec[1] - vec[0];
    for(int i = 0;i<vec.size()-1;i++){
        if(vec[i]+d != vec[i+1]){
            return false;
            break;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    bool a = checkAP(vec);
    if(a == 0 ){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-11-25 10:15:39


```
#include<bits/stdc++.h>
using namespace std;
bool checkAP(vector<int> vec){
    int d = vec[1] - vec[0];
    for(int i = 0;i<vec.size()-1;i++){
        if(vec[i]+d != vec[i+1]){
            return false;
            break;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    bool a = checkAP(vec);
    if(a == 0 ){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-11-25 10:21:30


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta = 0;
    int cntb = 0;
    for(int i = 0;i<s.size();i++){
        if(s[i] == 'a'){
            cnta++;
        }
        else if(s[i] == 'b'){
            cntb++;
        }
    }
    if(cnta >= cntb){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
    return 0;
}
```

## Submission at 2024-11-25 10:46:06


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<=i;j++){
            if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j+1] = temp;
                vec[j] = vec[j+1];
            }
        }
    }
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
            ans.push_back(i);
        }
    }
    for(int i = 0;i<n;i++){
        cout<<ans[i];
    }
    return 0;
}
```

## Submission at 2024-11-25 10:47:41


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<=i;j++){
            if(vec[j]>vec[j+1]){
                int temp = vec[j];
                vec[j+1] = temp;
                vec[j] = vec[j+1];
            }
        }
    }
    
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
            cout<<i;
        }
    }
   
    return 0;
}
```

## Submission at 2024-11-25 11:04:31


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i= 0;i<n;i++){
        cin>>vec[i];
    }
    if(n%2 == 1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:07:57


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
            cout<<i<<" ";
        }
    }
   
    return 0;
}
```

## Submission at 2024-11-25 11:09:01


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
            cout<<i;
        }
    }
   
    return 0;
}
```

## Submission at 2024-11-25 11:14:21


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
           cout<<i<<' ';
        }
    }
 
   
    return 0;
}
```

## Submission at 2024-11-25 11:16:04


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
           cout<<i<<' ';
        }
    }
 
   
    return 0;
}
```

## Submission at 2024-11-25 11:23:39


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i= 0;i<n;i++){
        cin>>vec[i];
    }
    if(n%2 == 1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:30:28


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i= 0;i<n;i++){
        cin>>vec[i];
    }
    int flag = 0;
    for(int i= 0;i<n-1;i++){
        if(vec[i+1]<vec[i]){
          flag =1;
            break;
        }
    }
    if(flag == 1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
   
    return 0;
}
```

## Submission at 2024-11-25 11:40:50


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    cout<<endl;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(vec[i] == target){
           ans.push_back(i);
        }
    }
    for(int i = 0;i<ans.size();i++){
        if(i != ans.size()-1){
        cout<<ans[i]<<' ';
    }
    else{
        cout<<ans[i];
    }}
 
   
    return 0;
}
```

