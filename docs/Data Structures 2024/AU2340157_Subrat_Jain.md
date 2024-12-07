## Submission at 2024-08-05 10:13:21


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    cout<<"Hello "<<a<<" !"<<endl;
}
```

## Submission at 2024-08-05 10:13:52


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    cout<<"Hello"<<a<<"!"<<endl;
}
```

## Submission at 2024-08-05 10:14:30


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    cout<<"Hello "<<a<<"!"<<endl;
}
```

## Submission at 2024-08-05 10:15:13


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    cout<<"Hello "<<a<<"!"<<endl;
}
```

## Submission at 2024-08-05 10:35:12


```
// Write your C++ code here
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string name;
    int n;
    cin>>n;
    vector<string> vec;
    for(int i=1;i<=n;i++){
        cin>>name;
        vec.push_back(name);
    }
    for(auto i:vec){
        cout<<"Hello "<<i<<"!";
    }
}
```

## Submission at 2024-08-05 10:37:00


```
// Write your C++ code here
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string name;
    int n;
    cin>>n;
    vector<string> vec;
    for(int i=1;i<=n;i++){
        cin>>name;
        vec.push_back(name);
    }
    for(int i=0;i<n;i++){
        cout<<"Hello "<<vec[i]<<"!";
    }
}
```

## Submission at 2024-08-05 10:37:29


```
// Write your C++ code here
#include <iostream>
#include <vector>
using namespace std;
int main(){
    string name;
    int n;
    cin>>n;
    vector<string> vec;
    for(int i=1;i<=n;i++){
        cin>>name;
        vec.push_back(name);
    }
    for(int i=0;i<n;i++){
        cout<<"Hello "<<vec[i]<<"!"<<endl;
    }
}
```

## Submission at 2024-08-05 10:39:31


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    cout<<"Hello "<<a<<"!"<<endl;
}
```

## Submission at 2024-08-05 11:01:35


```
// Write your C++ code here
#include <iostream>
using namespace std;
int main(){
    int n;
    string name;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-12 09:43:24


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x<2){
        return 0;
    }
    if(x==2){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;
    return 0;
}

```

## Submission at 2024-08-12 09:49:36


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);

}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:55:38


```
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    if(n==1){
        return true;
    }
    if(n%2!=0){
        return false;
    }
    return isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:58:38


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
    return isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:59:21


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

## Submission at 2024-08-12 10:01:15


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

## Submission at 2024-08-12 10:29:42


```
def is_power_of_two(n):
    # Write your logic here
    if n<=0:
        return False
    if n==1:
        return True
    if n%2 !=0:
        return False
    else:
        return (is_power_of_two(n/2))
    
    
    return n

n=int(input())
print(is_power_of_two(n))
```

## Submission at 2024-08-12 10:30:34


```
def is_power_of_two(n):
    # Write your logic here
    if n<=0:
        return False
    elif n==1:
        return True
    elif n%2 !=0:
        return False
    else:
        return (is_power_of_two(n/2))
    
    
    return n

n=int(input())
print(is_power_of_two(n))
```

## Submission at 2024-08-21 10:42:27


```
#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int>vec, vector<vector<int>>&ans ,int index ){
    if(index==vec.size()){
        ans.push_back(vec);
        return;
    }
    for(int i=index;i<vec.size();i++){
        swap(vec[index],vec[i]);
        solve(vec,ans,index+1);
        swap(vec[index],vec[i]);
    }
}
vector<vector<int>>permutations(vector<int>vec){
    // vector<int>output;
    vector<vector<int>>ans;
    int index=0;
    solve(vec,ans,index);
    return ans;
}
void printVector(vector<vector<int>>vec){
    cout<<"[";
    for(auto i:vec){
        cout<<"[";
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<"]";
    }
    cout<<"]"<<endl;
}
int main(){
    vector<int> vec={1,2,3};
    vector<vector<int>>ans=permutations(vec);
    printVector(ans);
}
```

## Submission at 2024-08-21 11:33:04


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

## Submission at 2024-08-21 11:43:57


```
#include <iostream>
#include <vector>

using namespace std;

void recursivePermute(vector<int>& values, int start, vector<vector<int>>& allPermutations) {
    if (start == values.size()) {
        allPermutations.push_back(values);
        return;
    }
    for (int i = start; i < values.size(); ++i) {
        swap(values[start], values[i]);
        recursivePermute(values, start + 1, allPermutations);
        swap(values[start], values[i]); // backtrack
    }
}

vector<vector<int>> generatePermutations(vector<int>& values) {
    vector<vector<int>> allPermutations;
    recursivePermute(values, 0, allPermutations);
    return allPermutations;
}

int main() {
    vector<int> inputValues;
    int value;
    while (cin >> value) {
        inputValues.push_back(value);
        if (cin.peek() == '\n') break;
    }
    vector<vector<int>> permutations = generatePermutations(inputValues);
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

## Submission at 2024-08-21 11:45:29


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

## Submission at 2024-08-21 11:50:50


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

## Submission at 2024-09-05 12:09:09


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
    ListNode* temp=head;
    while(temp){
        result.push_back(temp->val);
        temp=temp->next;
    }
    return result;
}

```

## Submission at 2024-09-05 12:13:57


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
    // Write your logic here
    int cnt=1;
    Node* temp=head;
    while(cnt++<k){
        temp=temp->next;        
    }
    return temp->data;
}

```

## Submission at 2024-09-05 12:17:50


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
    // Write your logic here
    int cnt=1;
    Node* temp=head;
    while(temp){
        if(cnt==k){
           return temp->data;
        }
        cnt++;
        temp=temp->next;        
    }
    return -1;

}

```

## Submission at 2024-09-05 12:35:02


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

Node* deleteNode(Node *head, int x)
{
    if (!head) return head; 

    if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    Node* prev = nullptr;
    Node* curr = head;
    int cnt = 1;

    while (curr && cnt < x) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if (curr && prev) {
        prev->next = curr->next; 
        delete curr; 
    }
    
    return head;
}


```

## Submission at 2024-09-05 12:47:33


```
// Write code from scratch
#include <iostream>
#include<vector>
using namespace std;
void printVector(vector<int>v){
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
vector<int>solve( vector<int>A, vector<int>B,int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(max(A[i],B[i]));
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>A;
    vector<int>B;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        A.push_back(e);
    }
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        B.push_back(t);
    }
    vector<int>ans=solve(A,B,n);
    printVector(ans);
}
```

## Submission at 2024-09-05 12:58:09


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
    if( !head || !head->next){
        return head;
    }
    Node* other=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return other;   

}

```

## Submission at 2024-09-09 09:56:17


```
// Write code from scratch here
#include <iostream>
using namespace std;
int solve(string str,int i,char x,int ans){
    if(i>str.length()-1){
        return ans;
    }
    if(str[i]==x){
        return solve(str,i+1,x,ans+1);
    }
    return solve(str,i+1,x,ans);  
}

int main(){
    string str;
    char x;
    cin>>str>>x;
    cout<<solve(str,0,x,0)<<endl;
}
```

## Submission at 2024-09-09 10:11:09


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    while(curr){
        if(prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:18:42


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
  Node* prev=NULL;
  Node* curr=head;
  while(curr){
    curr->next=prev;
    prev=curr;
    curr=curr->next;
  }
  Node* h1=prev;
  Node* h2=head;
  while(h1&&h2){
    if(h1->data != h2->data){
      return false;
    }
  }
  return true;
    
}
```

## Submission at 2024-09-09 10:33:19


```

// Complete the given function
int maxIncol(vector<int>v){
    int maxi=INT_MIN;
    for(auto i:v){
        maxi=max(i,maxi);
    }
    return maxi;
}
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int row=matrix[0].size();
    int col=matrix.size();
    vector<vector<int>>answer(0);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==-1){
                vector<int>column;
                for(int k=0;k<col;k++){
                    column.push_back(matrix[i][k]);
                }
                answer[i][j]=maxIncol(column);
            }
            else{
                answer[i][j]=matrix[i][j];
            }
        }
    }
    return answer;


};


```

## Submission at 2024-09-09 10:35:16


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    while(curr){
        if(prev!=NULL && prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-09 10:36:10


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    while(curr && curr->next){
        if(prev!=NULL && prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-09 10:37:27


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    if(!curr && !curr->next){
        return head;
    }
    while(curr && curr->next){
        if(prev!=NULL && prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-09 10:37:53


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    while(curr && curr->next){
        if(prev!=NULL && prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-09 10:38:29


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    if(!curr){
        return NULL;
    }
    while(curr && curr->next){
        if(prev!=NULL && prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-09 10:39:09


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
    //Your code here 
    Node* curr=head;
    Node* prev=NULL;
    while(curr && curr->next){
        if(prev!=NULL && prev->data==curr->data){
            prev->next=curr->next;
            prev=curr;
            curr=curr->next;
            delete prev;
        }
        prev=curr;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-09 10:45:26


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
    vector<int>v;
    Node* temp=head;
    while(temp){
      v.push_back(temp->data);
      temp=temp->next;
    }
    for(int i=0;i<v.size();i++){
      if(v[i]!=v[v.size()-i-1]){
        return false;
      }
    }
    return true;
    
}
```

## Submission at 2024-09-09 10:50:34


```
// Write Code from Scratch here
#include <iostream>
using namespace std;
bool isPower(int n){
    if(n<1){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    return isPower(n/3);
}
int main(){
    int i=0;
    cin>>i;
    if(isPower(!i)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 10:54:39


```
// Write Code from Scratch here
#include <iostream>
using namespace std;
bool isPower(int n){
    if(n==0){
        return true;
    }
    else if(n % 3 == 0){
        return isPower(n/3);
    }
    return false;
    
}
int main(){
    int i;
    cin>>i;
    if(isPower(i)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 11:09:15


```

// Complete the given function
int maxIncol(vector<int>v){
    int maxi=INT_MIN;
    for(auto i:v){
        maxi=max(i,maxi);
    }
    return maxi;
}
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int col=matrix[0].size();
    int row=matrix.size();
    vector<vector<int>>answer(0);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==-1){
                vector<int>column;
                for(int k=0;k<col;k++){
                    column.push_back(matrix[k][j]);
                }
               matrix[i][j]=maxIncol(column);
            }
        }
    }
    return matrix;


};


```

## Submission at 2024-09-09 11:12:40


```
// Complete the given function
int maxIncol(vector<int>v){
    int maxi=INT_MIN;
    for(auto i:v){
        maxi=max(i,maxi);
    }
    return maxi;
}
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int col=matrix[0].size();
    int row=matrix.size();
    vector<vector<int>>answer=matrix;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==-1){
                vector<int>column;
                for(int k=0;k<col;k++){
                    column.push_back(matrix[k][j]);
                }
               answer[i][j]=maxIncol(column);
            }
        }
    }
    return answer;


};

```

## Submission at 2024-09-16 09:20:17


```
int maxIncol(vector<int>v){
    int maxi=INT_MIN;
    for(auto i:v){
        maxi=max(i,maxi);
    }
    return maxi;
}
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int col=matrix[0].size();
    int row=matrix.size();
    vector<vector<int>>answer=matrix;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==-1){
                vector<int>column;
                for(int k=0;k<col;k++){
                    column.push_back(matrix[k][j]);
                }
               answer[i][j]=maxIncol(column);
            }
        }
    }
    return answer;


};

```

## Submission at 2024-09-16 09:22:49


```
#include <iostream>
using namespace std;

bool isPower(int n){
    if(n<1){
        return false;
    }
    if(n%3!=0 && n!=1){ 
        return false;
    }
    return isPower(n/3);
}

int main(){
    int i = 0;
    cin >> i;
    if(isPower(i)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}

```

## Submission at 2024-09-16 09:25:22


```
#include <iostream>
using namespace std;

bool isPower(int n){
    if(n<=0){
        return false;
    }
    if(n==1){ 
        return true;
    }
    if(n%3!=0){
        return false;
    }
    return isPower(n/3);
}

int main(){
    int i = 0;
    cin >> i;
    if(isPower(i)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
}

```

## Submission at 2024-10-07 09:49:55


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    int s=q.size();
    stack<int>st;
    for(int i=0;i<s;i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    return q;
}

```

## Submission at 2024-10-07 09:58:18


```
// Write your code from scratch here
#include <bits/std.c++>
using namespace std;
string solve(string str){
    vector<int>num;
    for(char c:str){
        if(c!=+){
            num.push_back(c-'0');
        }
    }
    sort(num.begin(),num.end());
    string ans="";
    for(int i:num){
        ans+=String;
    }


}
int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 10:03:41


```
// Write your code from scratch here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string solve(string str){
    vector<char>num;
    for(char c:str){
        if(c!='+'){
            num.push_back(c);
        }
    }
    sort(num.begin(),num.end());
    string ans="";
    for(int i=0;i<num.size();i++){
        ans+=num[i];
        if(i==num.size()-1){
            break;
        }
        ans+="+";
    }
    return ans;


}
int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 10:14:10


```
// Write your code from scratch here
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
string solve(string str){
    stack<char>st;
    string ans="";
    for(int c=0;c<str.length();c++){
        if(str[c]!='.'){
            st.push(str[c]);
        }
        else{
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            if(c!=str.length()-1){
                ans+='.';
            }
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 10:28:10


```
// Write your code from scratch here
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
string solve(string str){
    stack<char>st;
    string ans="";
    int c=0;
    while(c<str.length()){
        if(str[c]!='.'){
            st.push(str[c]);
        }
        else if(str[c]=='.' || c==str.length()-1){
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            if(c!=str.length()-1){
                ans+='.';
            }
        }
        c++;
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 10:40:21


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int sum, vector<int>v){
    sort(v.begin(),v.end());
    // int minP=sum/(v.size()*2);
    int a=v[v.size()/2];
    int x=(v.size()*2*a)-sum+1;
    return x;
}
int main(){
    vector<int>v;
    int T;
    cin>>T;
    int sum=0;
    while(T--){
        int e;
        cin>>e;
        sum+=e;
        v.push_back(e);
    }
    cout<<solve(sum,v)<<endl;
}

```

## Submission at 2024-10-07 10:43:42


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int sum, vector<int>v){
    sort(v.begin(),v.end());
    // int minP=sum/(v.size()*2);
    if(v.size()%2==0){
        int a=v[v.size()/2];
    }
    else{
        int a=v[(v.size()/2)+1];
    }
    int x=(v.size()*2*a)-sum+1;
    return x;
}
int main(){
    vector<int>v;
    int T;
    cin>>T;
    int sum=0;
    while(T--){
        int e;
        cin>>e;
        sum+=e;
        v.push_back(e);
    }
    cout<<solve(sum,v)<<endl;
}

```

## Submission at 2024-10-07 10:45:00


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int sum, vector<int>v){
    sort(v.begin(),v.end());
    // int minP=sum/(v.size()*2);
    int a;
    if(v.size()%2==0){
        a=v[v.size()/2];
    }
    else{
        a=v[(v.size()/2)+1];
    }
    int x=(v.size()*2*a)-sum+1;
    return x;
}
int main(){
    vector<int>v;
    int T;
    cin>>T;
    int sum=0;
    while(T--){
        int e;
        cin>>e;
        sum+=e;
        v.push_back(e);
    }
    cout<<solve(sum,v)<<endl;
}

```

## Submission at 2024-10-07 10:45:50


```
// Write C++ Code from scratch
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int sum, vector<int>v){
    sort(v.begin(),v.end());
    // int minP=sum/(v.size()*2);
    int a;
    if(v.size()%2==0){
        a=v[v.size()/2];
    }
    else{
        a=v[(v.size()/2)+1];
    }
    int x=(v.size()*2*a-sum)+1;
    return x;
}
int main(){
    vector<int>v;
    int T;
    cin>>T;
    int sum=0;
    while(T--){
        int e;
        cin>>e;
        sum+=e;
        v.push_back(e);
    }
    cout<<solve(sum,v)<<endl;
}

```

## Submission at 2024-10-07 11:06:05


```
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printS(stack<char>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
string solve(string str){
    stack<char>st;
    string ans="";
    int c=0;
    while(c<=str.length()-1){
        if(str[c]!='.'){
            st.push(str[c]);
        }
        else if(str[c]=='.'){
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
                ans+='.';
        }
        c++;
    }
    if(!st.empty()){
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<str<<endl;
    cout<<str.length()<<endl;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 11:06:19


```
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printS(stack<char>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
string solve(string str){
    stack<char>st;
    string ans="";
    int c=0;
    while(c<=str.length()-1){
        if(str[c]!='.'){
            st.push(str[c]);
        }
        else if(str[c]=='.'){
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
                ans+='.';
        }
        c++;
    }
    if(!st.empty()){
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 11:06:24


```
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printS(stack<char>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
string solve(string str){
    stack<char>st;
    string ans="";
    int c=0;
    while(c<=str.length()-1){
        if(str[c]!='.'){
            st.push(str[c]);
        }
        else if(str[c]=='.'){
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
                ans+='.';
        }
        c++;
    }
    if(!st.empty()){
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 11:06:24


```
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void printS(stack<char>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
string solve(string str){
    stack<char>st;
    string ans="";
    int c=0;
    while(c<=str.length()-1){
        if(str[c]!='.'){
            st.push(str[c]);
        }
        else if(str[c]=='.'){
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
                ans+='.';
        }
        c++;
    }
    if(!st.empty()){
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
    }
    return ans;
}

int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;

}
```

## Submission at 2024-10-07 11:10:03


```
print(2);
```

## Submission at 2024-10-28 10:02:39


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
void findMin(Node* root, int& e){
    if(root==NULL) return;
    e=min(e,root->data);
    findMin(root->left,e);
    findMin(root->right,e);
}
int findMin(Node *root)
{
    //code here
    int e=INT_MAX;
    findMin(root,e);
    return e;



}


```

## Submission at 2024-10-28 10:08:12


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    unordered_map<int,int>m;
    while(n--){
        int e;
        cin>>e;
        m[e]++;
    }
    bool ans=false;
    for(auto i:m){
        if(i.second>=k){
            cout<<i.first<<endl;
            ans=true;
            break;
        }
    }
    if(!ans)cout<<-1<<endl;
    return 0;
}
```

## Submission at 2024-10-28 10:14:47


```
// Write your code from scratch here
#include <bits/stdc++.h>
using namespace std;
string solve(string order, string s){
    unordered_map<int,char>m;
    for(int i=0;i<order.length();i++){
        m[i]=order[i];
    }
    
}

int main(){
    string order, s;
    cin>>order>>s;



}
```

## Submission at 2024-10-28 10:31:11


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
  unordered_map<int,bool>m;
  Node* temp1=head1;
  while(temp1){
    m[temp1->data]=true;
    temp1=temp1->next;
  }
  Node* temp2=head2;
  Node* ansNode= new Node(0);
  Node* temp3=ansNode;
  bool newNodeCreated=false;
  while(temp2){
    if(m[temp2->data]==true && newNodeCreated==false && temp2){
      ansNode->data=temp2->data;
      newNodeCreated=true;
    }
    else if(m[temp2->data] && newNodeCreated==true){
      temp3->next=new Node(temp2->data);
      temp3=temp3->next;
    }
    temp2=temp2->next;
  }
  return ansNode;
}
```

## Submission at 2024-10-28 10:43:15


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
int sumOfV(vector<int>v){
  int sum=0;
  for(int i:v){
    sum+=i;
  }
  return sum;
}
void pathS(Node* root, vector<int>&v,int num){
  if(!root){
    v.push_back(num);
    return;
  }
  num=num*10
  if(root->left){
    pathS
  }
}
int treePathSum(Node* root)
{
  // Your code here

}

```

## Submission at 2024-10-28 10:58:56


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
int sumOfV(vector<int>v){
  int sum=0;
  for(int i:v){
    sum+=i;
  }
  return sum;
}
void pV(vector<int>v){
  // int sum=0;
  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;
  // return sum;
}
void pathS(Node* root, vector<int>&v,int& num){
  if(!root){
    v.push_back(num);
    num/=10;
    return;
  }
  num=num*10+root->data;
  pathS(root->left,v,num);
  pathS(root->right,v,num);
  
}
int treePathSum(Node* root)
{
  // Your code here
  vector<int>v;
  int num=0;
  pathS(root,v,num);
  pV(v);
  return 0;
  // int ans=sumOfV(v);
  // return ans;

}
```

## Submission at 2024-10-29 13:18:27


```
// Write your code from scratch here
#include <bits/stdc++.h>
using namespace std;
void solve(string order, string& s){
    unordered_map<char,bool>m;
    queue<char>q;
    for(int i=0;i<order.length();i++){
        m[order[i]]=true;
        q.push(order[i]);
    }
    for(int i=0;i<s.length();i++){
        if(m[s[i]]){
            // cout<<q.front()<<endl;
            s[i]=q.front();
            // cout<<i<<endl;
            q.pop();
        }
    }  
}

int main(){
    string order, s;
    cin>>order>>s;
    solve(order,s);
    cout<<s<<endl;



}
```

## Submission at 2024-10-29 13:22:00


```
#include <bits/stdc++.h>
using namespace std;

void solve(const string& order, const string& s) {
    unordered_map<char, int> freq;
    string result;

    // Count frequencies of characters in 's'
    for (char ch : s) {
        freq[ch]++;
    }

    // Append characters in the custom 'order' sequence to the result
    for (char ch : order) {
        if (freq.count(ch)) {
            result += string(freq[ch], ch);  // Append character 'ch' freq[ch] times
            freq.erase(ch);  // Remove character after adding it to the result
        }
    }

    // Append remaining characters (not in 'order') in their original order
    for (char ch : s) {
        if (freq.count(ch)) {
            result += ch;
            freq[ch]--;
            if (freq[ch] == 0) {
                freq.erase(ch);  // Remove character once all occurrences are added
            }
        }
    }

    cout << result << endl;
}

int main() {
    string order, s;
    cin >> order >> s;
    solve(order, s);
    return 0;
}

```

## Submission at 2024-11-18 10:04:27


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
void sumPaths(Node* root, int currSum, int& totalSum){
  if(!root) return;
  currSum=currSum*10+root->data;
  if(!root->left && !root->right){
    totalSum+=currSum;
    return;
  }
    
  sumPaths(root->left,currSum,totalSum);
  sumPaths(root->right,currSum,totalSum);

}
int treePathSum(Node* root)
{
  // Your code here
  int totalSum=0;
  sumPaths(root,0,totalSum);
  return totalSum;

}

```

## Submission at 2024-11-25 09:51:04


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
char solve(string str){
    int a,b=0;
    for(char s:str){
        if(s=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        return 'a';
    }
    return 'b';
}
int main(){
    string str;
    cout<<solve(str)<<endl;
}
```

## Submission at 2024-11-25 09:52:33


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
char solve(string str){
    int a,b=0;
    for(char s:str){
        if(s=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        return 'a';
    }
    return 'b';
}
int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
}
```

## Submission at 2024-11-25 09:59:25


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:01:12


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:01:17


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:01:53


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:01:54


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:01:57


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:01:57


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:02:03


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    vector<int>a;
    a=v;
    sort(a.begin(),a.end());
    if(v==a){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:09:11


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>v,int t){
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]==t){
            cout<<i<<" ";
        }
    }
    return;
}

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);
    }
    solve(v,t);

}
```

## Submission at 2024-11-25 10:17:46


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>v){
    int d=v[1]-v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]-v[i-1]!=d){
            cout<<"false"<<endl;
            return;
        }
    }
    cout<<"true"<<endl;
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v;
    while(n--){
        int e;
        cin>>e;
        v.push_back(e);        
    }
    solve(v);
}
```

## Submission at 2024-11-25 10:28:38


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    while(k--){
        int d,e;
        cin>>d>>e;
        sum+=e;
    }
    cout<<sum<<endl;
    return 0;
}
```

## Submission at 2024-11-25 10:35:21


```
// write code from scratch
// write code from scratch
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        while(i--){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
 }
```

## Submission at 2024-11-25 10:39:21


```
# write code from scratch
n=input()
for i in range(1,n+1):
    print("*" * i)
```

## Submission at 2024-11-25 10:44:58


```
# write code from scratch
n=int(input())
for i in range(1,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:53:49


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


Node* intersectPoint(Node* head1, Node* head2) {
    // Your Code Here
    unordered_map<Node*,bool>m;
    Node* temp=head1;
    while(temp){
      m[temp]=true;
      temp=temp->next;
    }
    Node* temp2=head2;
    while(temp2){
      if(m[temp2]){
        return temp2;
      }
      temp2=temp2->next;
    }
    return NULL;
}



```

## Submission at 2024-11-25 11:05:31


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
char solve(string str){
    int a,b=0;
    for(char s:str){
        if(s=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>=b){
        return 'a';
    }
    return 'b';
}
int main(){
    string str;
    cin>>str;
    cout<<solve(str)<<endl;
}
```

## Submission at 2024-11-25 11:07:17


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
char solve(string str){
    int a,b=0;
    for(char s:str){
        if(s=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>=b){
        return 'a';
    }
    return 'b';
}
int main(){
    string str;
    cin>>str;
    if(str==''){
        return 0;
    }
    cout<<solve(str)<<endl;
}
```

## Submission at 2024-11-25 11:07:19


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
char solve(string str){
    int a,b=0;
    for(char s:str){
        if(s=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        return 'a';
    }
    return 'b';
}
int main(){
    string str;
    cin>>str;
    if(str==''){
        return 0;
    }
    cout<<solve(str)<<endl;
}
```

## Submission at 2024-11-25 11:08:15


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
char solve(string str){
    int a,b=0;
    for(char s:str){
        if(s=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        return 'a';
    }
    return 'b';
}
int main(){
    string str;
    cin>>str;
    if(str==""){
        return 0;
    }
    cout<<solve(str)<<endl;
}
```

