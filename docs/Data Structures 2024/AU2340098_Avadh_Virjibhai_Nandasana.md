## Submission at 2024-08-05 10:18:50


```
// Write your C++ code here from the scratch
#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name;
}
```

## Submission at 2024-08-05 10:20:17


```
// Write your C++ code here from the scratch
#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!";
}
```

## Submission at 2024-08-05 10:28:24


```
// Write your C++ code here from the scratch

#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!";
}
```

## Submission at 2024-08-05 10:32:15


```
// Write your C++ code here
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<"Hello "<<arr[i]<<"!"<<endl;
    }
}
```

## Submission at 2024-08-12 09:54:27


```
#include <iostream>

using namespace std;

int fibonacci(int x) 
{ 
    if (x <= 1) 
        return x; 
    return fibonacci(x - 1) + fibonacci(x - 2); 
} 

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    fibonacci(x);

    return 0;
}

```

## Submission at 2024-08-12 10:15:48


```
#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if(n==1)
    return true;
    
    else if(n<1 || n%2!=0)
    return false;

    else 
    isPowerOfTwo(n/2);
    
}
int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-17 09:08:25


```
#include <iostream>
#include <vector>

using namespace std;

// Function to generate all combinations using backtracking
void combine(int start, int n, int k, vector<int>& current, vector<vector<int>>& result) {
    // Base case: if the combination is of the desired length
    if (current.size() == k) {
        result.push_back(current);
        return;
    }
    
    // Recursive case
    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        combine(i + 1, n, k, current, result);
        current.pop_back(); // Backtrack
    }
}

// Main function to handle input and output
int main() {
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> result;
    vector<int> current;
    
    // Generate combinations
    combine(1, n, k, current, result);
    
    // Print result in the required format
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            if (j > 0) cout << ",";
            cout << result[i][j];
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    
    return 0;
}

```

## Submission at 2024-08-17 09:11:53


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to generate permutations
void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // backtrack
    }
}

// Function to return all permutations
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    return result;
}

int main() {
    // Input array
    vector<int> nums = {1, 2, 3};
    
    // Generate all permutations
    vector<vector<int>> permutations = permute(nums);
    
    // Print the result
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

## Submission at 2024-08-17 09:12:58


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to generate permutations
void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1, result);
        swap(nums[start], nums[i]); // backtrack
    }
}

// Function to return all permutations
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, 0, result);
    return result;
}

int main() {
    // Input array
    vector<int> nums = {1, 2, 3};
    
    // Generate all permutations
    vector<vector<int>> permutations = permute(nums);
    
    // Print the result
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

## Submission at 2024-08-17 09:17:36


```
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>   
using namespace std;


void printPermutations(const vector<vector<int>>& permutations) {
    std::cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
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
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end()); // Ensure the array is sorted to start with
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main() {
    vector<int> nums;
    int num;

    // Reading input
    cout << "Enter integers separated by spaces (Ctrl+D to end input): ";
    while (cin >> num) {
        nums.push_back(num);
    }

    // Get all permutations
    vector<vector<int>> permutations = permute(nums);

    // Print permutations
    printPermutations(permutations);

    return 0;
}

```

## Submission at 2024-08-21 09:58:42


```
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void recurPermute(int index,vector<int> &nums, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            recurPermute(index+1, nums, ans);
            swap(nums[index], nums[i]);  // Backtrack
        }
    }

    public:
    vector<vector<int>> permute(vector<int> &nums){
        vector<vector<int>> ans;
        recurPermute(0, nums, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> v;
    int num;

   
    string input;
    getline(cin, input);
    stringstream ss(input);
    while(ss >> num){
        v.push_back(num);
    }
    vector<vector<int>> sum = obj.permute(v);

    cout << "All Permutations are: " << endl;
    for(int i = 0; i < sum.size(); i++){
        cout << "[";
        for(int j = 0; j < sum[i].size(); j++){
            cout << sum[i][j];
            if(j < sum[i].size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
}
```

## Submission at 2024-08-21 10:00:45


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(string s, int left, int right, int n, vector<string>& result) {
    // Base case: If the string length is equal to 2*n, it's a valid combination
    if (s.length() == 2 * n) {
        result.push_back(s);
        return;
    }

    // Add an opening parenthesis if we have not used all of them
    if (left < n) {
        generateParenthesisHelper(s + '(', left + 1, right, n, result);
    }

    // Add a closing parenthesis if it doesn't exceed the number of opening ones
    if (right < left) {
        generateParenthesisHelper(s + ')', left, right + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << "\"" << result[i] << "\"";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-21 10:03:07


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

## Submission at 2024-08-21 10:09:26


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

## Submission at 2024-09-02 09:54:26


```
// Write code from scratch
#include<iostream>
using namespace std;



int main(){

    int n;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++)
    cin>>arr1[i];

    for(int i=0; i<n; i++)
    cin>>arr2[i];

    for(int i=0; i<n; i++)
    arr3[i]=max(arr1[i],arr2[i]);

    for(int i=0; i<n; i++)
    cout<<arr3[i];
    

}
```

## Submission at 2024-09-02 10:02:30


```
// Write code from scratch
#include<iostream>
using namespace std;

int main(){

    int  n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++)
    cin>>arr1[i];

    for(int i=0; i<n; i++)
    cin>>arr2[i];

    for(int i=0; i<n; i++)
    arr3[i]=max(arr1[i],arr2[i]);

    for(int i=0; i<n; i++)
    cout<<arr3[i];
    

}
```

## Submission at 2024-09-02 10:02:33


```
// Write code from scratch
#include<iostream>
using namespace std;

int main(){

    int  n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++)
    cin>>arr1[i];

    for(int i=0; i<n; i++)
    cin>>arr2[i];

    for(int i=0; i<n; i++)
    arr3[i]=max(arr1[i],arr2[i]);

    for(int i=0; i<n; i++)
    cout<<arr3[i];
    

}
```

## Submission at 2024-09-02 10:02:33


```
// Write code from scratch
#include<iostream>
using namespace std;

int main(){

    int  n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++)
    cin>>arr1[i];

    for(int i=0; i<n; i++)
    cin>>arr2[i];

    for(int i=0; i<n; i++)
    arr3[i]=max(arr1[i],arr2[i]);

    for(int i=0; i<n; i++)
    cout<<arr3[i];
    

}
```

## Submission at 2024-09-02 10:02:33


```
// Write code from scratch
#include<iostream>
using namespace std;

int main(){

    int  n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++)
    cin>>arr1[i];

    for(int i=0; i<n; i++)
    cin>>arr2[i];

    for(int i=0; i<n; i++)
    arr3[i]=max(arr1[i],arr2[i]);

    for(int i=0; i<n; i++)
    cout<<arr3[i];
    

}
```

## Submission at 2024-09-02 10:02:36


```
// Write code from scratch
#include<iostream>
using namespace std;

int main(){

    int  n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];

    for(int i=0; i<n; i++)
    cin>>arr1[i];

    for(int i=0; i<n; i++)
    cin>>arr2[i];

    for(int i=0; i<n; i++)
    arr3[i]=max(arr1[i],arr2[i]);

    for(int i=0; i<n; i++)
    cout<<arr3[i];
    

}
```

## Submission at 2024-09-02 10:20:41


```
#include<iostream>
#include<vector>
using namespace std;

vector<int> FindMax(int n, vector<int>&a , vector<int>&b){
    vector<int> c;
    for(int i=0; i<n;i++){
        if(a[i]<b[i])
        c.push_back(b[i]);
        else
        c.push_back(a[i]);
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    
    for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0; i<n;i++)
    cin>>b[i];

    vector<int>result = FindMax(n,a,b);

    for(int i=0;i<n;i++)
    cout<<result[i]<<" ";
    

}
```

## Submission at 2024-09-02 10:48:51


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
    Node* tmpNode = head;
    int currIdx =1;
    while(currIdx<k){
        if(tmpNode->next){
            tmpNode = tmpNode->next;
            currIdx++;
        }
        else{
            return -1;
        }
    }
    return tmpNode->data;
}

```

## Submission at 2024-09-09 02:27:10


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

Node* deleteNode(Node *head,int x)
{
    //Your code here

    if(x==1){
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    x--;
    Node * prev = NULL;
    Node *curr = head;
   
    while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    delete curr;
    return head;

    

}

```

## Submission at 2024-09-09 02:38:13


```
/*You are required to complete below method*/
#include<vector>
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
    vector<int>ans;
    Node *temp = head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp = temp->next;
    }
    int i= ans.size()-1;
    temp = head;
    while(temp){
        temp->data = ans[i];
        temp= temp->next;
        i--;
    }
    return head;
}

```

## Submission at 2024-09-09 02:41:42


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
    ListNode * temp = head;
    while(temp!=NULL){
        result.push_back(temp->val);
        temp = temp->next;
    }
    // Your code here
    return result;
}

```

## Submission at 2024-09-09 03:52:29


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
    Node * curr = head;
    Node * fut = NULL;
    Node * prev = NULL;
    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
        
    }
    return head;
}

```

## Submission at 2024-09-09 03:55:29


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
    Node * curr = head;
    Node * fut = NULL;
    Node * prev = NULL;
    while(curr){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
        
    }
    return prev;
}

```

## Submission at 2024-09-09 04:11:03


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
    Node * temp = head;
    k--;
    while(k--){
        temp = temp->next;

    }
    return temp->data;
}

```

## Submission at 2024-09-09 09:50:48


```
// Write Code from Scratch here
#include<iostream>
#include<vector>
using namespace std;
bool check(int n){
    if(n==1)
    return true;
    if(n==0)
    return false;
    
    return check(n/3);


}
int main(){
    int n;
    cin>>n;
    cout<<check(n);

}
```

## Submission at 2024-09-09 09:50:49


```
// Write Code from Scratch here
#include<iostream>
#include<vector>
using namespace std;
bool check(int n){
    if(n==1)
    return true;
    if(n==0)
    return false;
    
    return check(n/3);


}
int main(){
    int n;
    cin>>n;
    cout<<check(n);

}
```

## Submission at 2024-09-09 09:59:23


```
// Write code from scratch 
#include<iostream>
#include<vector>
using namespace std;
int check(string digit, char x,int &cnt,int index){
    int n = digit.size()-1;
    
    if(n==index){
        return cnt;
    }
        int m = digit[index]-'0';
        if(n==x)
        cnt++;
        return(digit,x,cnt,index+1);
    
}
int main(){
    string digit;
    cin>>digit;
    char x;
    cin>>x;
    int index=0;
    int cnt=0;
    cout<<check(digit,x,cnt,index);
}

```

## Submission at 2024-09-09 09:59:24


```
// Write code from scratch 
#include<iostream>
#include<vector>
using namespace std;
int check(string digit, char x,int &cnt,int index){
    int n = digit.size()-1;
    
    if(n==index){
        return cnt;
    }
        int m = digit[index]-'0';
        if(n==x)
        cnt++;
        return(digit,x,cnt,index+1);
    
}
int main(){
    string digit;
    cin>>digit;
    char x;
    cin>>x;
    int index=0;
    int cnt=0;
    cout<<check(digit,x,cnt,index);
}

```

## Submission at 2024-09-09 10:07:10


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
    vector<int>ans;
    Node *temp = head;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int n = ans.size()-1;
    int start = 0;
    while(start<n){
      if(ans[start]!=ans[n])
      return false;
      start++;
      n--;
    }
    return true;


}
```

## Submission at 2024-09-09 10:07:12


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
    vector<int>ans;
    Node *temp = head;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int n = ans.size()-1;
    int start = 0;
    while(start<n){
      if(ans[start]!=ans[n])
      return false;
      start++;
      n--;
    }
    return true;


}
```

## Submission at 2024-09-09 10:21:54


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
    Node*temp = head;
    Node *prev = temp->next;
    while(prev){
        if(temp->data==prev->data){
            temp->next = prev->next;
            delete prev;
            temp = temp->next;

            prev = temp->next;
            temp= temp->next;
        }
        else{
            prev = prev->next;
            temp = temp->next;
        }
        return prev;
    }
}

```

## Submission at 2024-09-09 10:58:13


```
// Write code from scratch
#include<iostream>

using namespace std;
int check(string digit, char x,int &cnt,int index){
    int n = digit.size();
    
    if(n==index){
        return cnt;
    }
        char m = digit[index];
        if(m==x)
        cnt++;
        return check(digit,x,cnt,index+1);
    
}
int main(){
    string digit;
    cin>>digit;
    char x;
    cin>>x;
    int index=0;
    int cnt=0;
    cout<<check(digit,x,cnt,index);
}
```

## Submission at 2024-09-09 10:58:14


```
// Write code from scratch
#include<iostream>

using namespace std;
int check(string digit, char x,int &cnt,int index){
    int n = digit.size();
    
    if(n==index){
        return cnt;
    }
        char m = digit[index];
        if(m==x)
        cnt++;
        return check(digit,x,cnt,index+1);
    
}
int main(){
    string digit;
    cin>>digit;
    char x;
    cin>>x;
    int index=0;
    int cnt=0;
    cout<<check(digit,x,cnt,index);
}
```

## Submission at 2024-09-09 11:02:55


```
// Write Code from Scratch 
// Write Code from Scratch here
#include<iostream>
#include<vector>
using namespace std;
bool check(int n){
    if(n==1)
    return true;
    else{
        if(n%3!=0){
            return false;
        }
        else{
            return check(n/3);
        }

    }

    

}
int main(){
    int n;
    cin>>n;
    cout<<check(n);

}

```

## Submission at 2024-09-09 11:04:39


```
// Write Code from Scratch 
// Write Code from Scratch here
#include<iostream>
#include<vector>
using namespace std;
string check(int n){
    if(n==1)
    return "True";
    else{
        if(n%3!=0){
            return "False";
        }
        else{
            return check(n/3);
        }

    }

    

}
int main(){
    int n;
    cin>>n;
    cout<<check(n);

}

```

## Submission at 2024-09-09 11:14:11


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
    
    Node *temp = head;
    Node*prev = head->next;
    
    while(prev){
    if(temp->data=prev->data){
        temp->next=prev->next;
        delete prev;
        prev= temp->next;;
    }
    else{
        temp= temp->next;
        prev = prev->next;
    }
    }
      return temp;  
    }



```

## Submission at 2024-09-09 11:14:24


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
    
    Node *temp = head;
    Node*prev = head->next;
    
    while(prev){
    if(temp->data=prev->data){
        temp->next=prev->next;
        delete prev;
        prev= temp->next;;
    }
    else{
        temp= temp->next;
        prev = prev->next;
    }
    }
      return head;  
    }



```

## Submission at 2024-09-09 11:14:27


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
    
    Node *temp = head;
    Node*prev = head->next;
    
    while(prev){
    if(temp->data=prev->data){
        temp->next=prev->next;
        delete prev;
        prev= temp->next;;
    }
    else{
        temp= temp->next;
        prev = prev->next;
    }
    }
      return head;  
    }



```

## Submission at 2024-09-10 02:48:37


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
    
    Node *temp = head;
    Node*prev = head->next;
    
    while(prev){
    if(temp->data=prev->data){
        temp->next=prev->next;
        delete prev;
        prev= temp->next;;
    }
    else{
        temp= temp->next;
        prev = prev->next;
    }
    }
      return temp;  
    }


```

## Submission at 2024-09-10 02:53:42


```
// Write Code from Scratch here
#include<iostream>
using namespace std;
string solve(int x){
    if(x==1)
    return "True";

    if(x%3!=0 || x==0)
    return "False";

    return solve(x/3);
}
int main(){
    int x;
    cin>>x;
    cout<<solve(x);
    }
```

## Submission at 2024-09-10 03:29:50


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
  
    int maxcol[N];
    int M,N;
    cin>>M>>N;

    for(int i= 0 ; i<M;i++){
        for(int j=0; j<N-1; j++){
            if(matrix[j][i]>matrix[j+1][i])
            maxcol[i]=matrix[j][i];
            else
            maxcol[i] = matrix[j+1][i];
        }
    }
    for(int i= 0 ; i<M;i++){
        for(int j=0; j<N; j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=maxcol[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-10 07:32:03


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
    Node *temp = head;
    Node *fut = temp->next;

    while(fut){
        if(temp->data==fut->data){
            temp->next = fut->next;
            delete fut;
            fut = temp->next;
        }
        else{
            temp = fut;
            fut = fut->next;
        }
    }
    temp->next = NULL;
    return head;
}

```

## Submission at 2024-09-16 03:55:06


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], arr1[n];
    for(int  i=0; i<n ; i++)
    cin>>arr[i];

    for(int  i=0; i<n ; i++)
    cin>>arr1[i];


    for(int i=0; i<n; i++){
        if(arr[i]<arr1[i])
        arr[i] = arr1[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
```

## Submission at 2024-10-07 09:49:10


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>revq;
    while(!q.empty()){
        revq.push(q.front());
        q.pop();
    }
    while(!revq.empty()){
        q.push(revq.top());
        revq.pop();
    }
    return q;
}

```

## Submission at 2024-10-07 10:13:29


```
#include<iostream>
#include<stack>
using namespace std;
string solve(string &name,int n){
    stack<char>st;
    string ans="";
    for(int i=0; i<n;i++){
        if(name[i]=='.'){
            while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
            }
            ans.push_back('.');
        }
        else{
            st.push(name[i]);
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    
            }
    return ans;
}
int main(){
    string name;
    cin>>name;
    int n = name.size();
    cout<<solve(name,n);
}
```

## Submission at 2024-10-07 10:46:18


```
#include<iostream>
#include<vector>
using namespace std;

string solve(string &name, int n){
    vector<char>vec;
    string ans="";
     for(int i=0; i<n;i+=2){
        vec.push_back(name[i]);
    }
    for(int i=1; i<4;i++){
        int cnt = count(vec.begin(),vec.end(),i);
        for(int j=0; j<cnt; j++){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    string name;
    cin>>name;
    int n= name.size();
    cout<<solve(name,n);
}
```

## Submission at 2024-10-07 11:04:20


```
#include<iostream>
#include<vector>
using namespace std;

string solve(string &name, int n){
    string ans="";

    for(int j=n-1;j>=0; j--){
       ans.push_back(name[j]);
            
    }
        return ans;

    }

    

int main(){
    string name;
    cin>>name;
    int n= name.size();
    cout<<solve(name,n);
}
```

## Submission at 2024-10-07 11:14:59


```
#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>&vec, int n, int k){
    int start=0,end=0, mid,ans;
    for(int i=0;i<n;i++){
        end+=vec[i];
        start= max(start,vec[i]);
    }
    while(start<=end){
        mid =(start +end)/2;
        int day = 0 ; cnt =1;
        day+= vec[i];
        if(day>mid){
            cnt++;
            day = vec[i];
        }
    }
    if(cnt<=k);
    ans = cnt;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>vec;
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    cout<<solve(vec,n,k);
}
```

## Submission at 2024-10-11 07:48:10


```
#include<iostream>
using namespace std;

string solve(string n){
    int m = n.size();
    string ans = "";
    int cnt1=0, cnt2=0, cnt3=0;
    for(int i=0; i<m; i=i+2){
        if(n[i]=='1')
        cnt1++;
        else if(n[i]=='2')
        cnt2++;
        else
        cnt3++;
    }
    for(int i=0; i<cnt1 ; i++){
        ans.push_back('1');
        ans.push_back('+');
    }
    for(int i=0; i<cnt2 ; i++){
        ans.push_back('2');
        ans.push_back('+');
    }
    for(int i=0; i<cnt3 ; i++){
        ans.push_back('3');
        ans.push_back('+');
    }
    ans.pop_back();
    return ans;
    }

int main(){
    string n;
    cin>>n;
    cout<<solve(n);
}
```

## Submission at 2024-10-24 13:08:00


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else break;
        }
    }

    int lasr= n-1;
    int cnt=0;
    while(arr[lasr]-arr[0]>t){
        cnt++;
        lasr--;
    }
    cout<<cnt;

}
```

## Submission at 2024-10-24 13:08:41


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
            else break;
        }
    }

    int lasr= n-1;
    int cnt=0;
    while(arr[lasr]-arr[0]>=t){
        cnt++;
        lasr--;
    }
    cout<<cnt;

}
```

## Submission at 2024-10-28 10:02:48


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
    //code here
    int ans = INT_MAX;
    if(!root) return 0;
    queue<Node*>q;
    q.push(root);
    Node *temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->data <= ans){
            ans = temp->data;
        }
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    return ans;
}


```

## Submission at 2024-10-28 10:19:36


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
  Node *temp =nullptr;
  Node* r1 = head1;
  Node* r2 = head2;

while(r1->next && r2->next){
  if(r1->data == r2->data){
    if(temp == nullptr){
      temp = r1;
    }
    else{
      temp->next = r1;
    }
    r1 = r1->next;
    r2 = r2->next;
  }

  if(r1->data < r2->data){
    r1 = r1->next;
  }
  if(r1->data > r2->data){
    r2 = r2->next;
  }
}
return temp;

}
```

## Submission at 2024-10-28 10:28:29


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans;
    int final  = -1;
    vector<int>vec;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>ans;
        vec[i] = ans;
    }
    
    for(int i=0; i<n ; i++){
        mp[vec[i]]++;
        if(mp[vec[i]]>=m){
        final = vec[i];
        break;
        }
    }
    cout<<final;
}
```

## Submission at 2024-10-28 10:33:56


```
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans;
    int final  = -1;
    vector<int>vec;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>ans;
        vec[i] = ans;
    }
    
    for(int i=0; i<n ; i++){
        mp[vec[i]]++;
    }
    unordered_map<int,int> ::iterator it= mp.begin();
    while(it!=mp.end()){
        if(it->first >= m)
        final  = it->first;
        ++it;
    }
    cout<<final;
}
```

## Submission at 2024-10-28 10:39:29


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
  vector<int>ans;
  int sum=0;
  Node* temp;
  queue<Node*>q;
  q.push(root)
  while(!q.empty()){
    temp = q.front();
    q.pop();
    if(temp->left){
      q.push(temp->right);
    }
    else{
      while(!q.empty())
    }
  }
}

```

## Submission at 2024-10-28 10:43:59


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
  Node *temp =nullptr;
  Node* r1 = head1;
  Node* r2 = head2;

while(r1->next && r2->next){
  if(r1->data == r2->data){
    // if(temp == nullptr){
      temp = r1;
      
      temp = temp->next;
    // }
    // else{
    //   temp->next = r1;
    // }
    r1 = r1->next;
    r2 = r2->next;
  }

  if(r1->data < r2->data){
    r1 = r1->next;
  }
  if(r1->data > r2->data){
    r2 = r2->next;
  }
}
return temp;

}
```

## Submission at 2024-10-28 11:01:19


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
  if(!root) return 0;
}

```

## Submission at 2024-10-28 11:10:36


```
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int final  = -1;
    int vec[n];
    for(int i=0; i<n; i++){
        cin>>vec[i];
       
    }
    unordered_map<int,int>mp;
    for(int i=0; i<n ; i++){
        mp[vec[i]]++;
      
    }
   
    for(auto it: mp){
        if(it->second >= m){
            final = it->first;
            break;
        }
      
    }
    cout<<final;
}
```

## Submission at 2024-10-28 11:22:25


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
  Node *temp =nullptr;
  Node *temp1 =nullptr;

  Node* r1 = head1;
  Node* r2 = head2;

while(r1->next && r2->next){
  if(r1->data == r2->data){
    if(temp1==nullptr){
      temp1 = r1;
      temp = temp1;
      temp= temp->next;
    }
    else{
    temp = r1;
    temp = temp->next;
    }
    r1 = r1->next;
    r2 = r2->next;
  }

  if(r1->data < r2->data){
    r1 = r1->next;
  }
  if(r1->data > r2->data){
    r2 = r2->next;
  }
}
return temp1;

}
```

## Submission at 2024-10-28 11:27:38


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
  Node *temp =nullptr;
  Node *temp1 =nullptr;

  Node* r1 = head1;
  Node* r2 = head2;

while(r1->data && r2->data){
  if(r1->data == r2->data){
    if(temp1==nullptr){
      temp1 = r1;
      temp = temp1;
      temp= temp->next;
    }
    else{
    temp = r1;
    temp = temp->next;
    }
    r1 = r1->next;
    r2 = r2->next;
  }

  if(r1->data < r2->data){
    r1 = r1->next;
  }
  if(r1->data > r2->data){
    r2 = r2->next;
  }
}
return temp1;

}
```

## Submission at 2024-11-04 09:41:22


```
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int final  = -1;
    int vec[n];
    for(int i=0; i<n; i++){
        cin>>vec[i];
       
    }
    unordered_map<int,int>mp;
    for(int i=0; i<n ; i++){
        mp[vec[i]]++;
      
    }
   
    for(auto it: mp){
        if(it.second >= m){
            final = it.first;
            break;
        }
      
    }
    cout<<final;
}
```

## Submission at 2024-11-04 09:47:21


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
    int maxi = INT_MIN;
    queue<Node*>q;
    Node* temp;
    q.push(root);
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(temp->data>maxi){
            maxi  = temp->data;
        }
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return maxi;
}


```

## Submission at 2024-11-17 08:20:06


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

Node* findIntersection(Node* head1, Node* head2) {
    Node* dummy = new Node(0); 
    Node* tail = dummy;        

    while (head1 && head2) {
        if (head1->data == head2->data) {
            tail->next = new Node(head1->data);
            tail = tail->next;
            head1 = head1->next;
            head2 = head2->next;
        } else if (head1->data < head2->data) {
            head1 = head1->next;
        } else {
            head2 = head2->next;
        }
    }

    return dummy->next;
}


```

## Submission at 2024-11-25 09:13:21


```
import java.util.*;
public class BST{
    static class Node{
        int data;
        Node left;
        Node right;
        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }
    public static Node insert(Node root, int val){
        if(root==null){
            root = new Node(val);
            return root;
        }
        if(root.data>val){root.left=insert(root.left,val);}
        else{root.right=insert(root.right,val);}
        return root;
    }
    public static void inorder(Node root){
        if(root==null){return;}
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    public static boolean search(Node root, int key){
        if(root==null) return false;
        if(root.data>key){return search(root.left,key);}
        else if(root.data==key){return true;}
        else{return search(root.right,key);}
    }
    public static Node delete(Node root, int val_to_be_del){
        if(root==null){return root;}
        if(root.data>val_to_be_del){root.left=delete(root.left,val_to_be_del);}
        else if(root.data<val_to_be_del){root.right=delete(root.right,val_to_be_del);}
        //Till here same logic as search 
        else{
            //root.data==val
            //case-1
            if(root.left==null && root.right==null){return null;}
            //case2
            if(root.left==null){return root.right;}
            else if(root.right==null){return root.left;}
            //Case 3
            Node ins=inorderSuccessor(root.right);
            root.data=ins.data;
            root.right=delete(root.right, ins.data);
        }
        return root;
    }
    public static Node inorderSuccessor(Node root){
        while(root.left!=null){
            root=root.left;
        }
        return root;
    }
    //Q1- PRINT IN RANGE
    public static void printInRange(Node root, int x,int y){
        if(root==null){return;}
        if(root.data>=x && root.data<=y){
            printInRange(root.left, x, y);
            System.out.print(root.data+" ");
            printInRange(root.right, x, y);
        }
        else if(root.data>=y){
            printInRange(root.left, x, y);
        }
        else{
            printInRange(root.right, x, y);
        }
    }
    //Root to Leaf path
    public static void printPath(ArrayList<Integer> path){
        for(int i:path){
            System.out.print(i+" ");
        }
        System.out.println();
    }
    public static void printRoot2Leaf(Node root, ArrayList<Integer> path) {
        //same as preorder
        if(root==null){return;}

        path.add(root.data);
        //leaf node
        if(root.left==null && root.right==null){printPath(path);}
        else{
            printRoot2Leaf(root.left, path);
            printRoot2Leaf(root.right, path);
        }
        printRoot2Leaf(root.left, path);
        printRoot2Leaf(root.right, path);
        path.remove(path.size()-1);
    }   
     public static void main(String[] args){
        int[] a={5,1,3,2,4,7};
        Node root=null;
        for(int i=0;i<a.length;i++){
            root=insert(root,a[i]);
        }
       // inorder(root);
        //root=delete(root,4);
        //System.out.println();
        //inorder(root);
        //System.out.println(search(root,8));
        //printInRange(root, 1, 5);
        printRoot2Leaf(root, new ArrayList<>());
    }
}
```

## Submission at 2024-11-25 09:52:35


```
#include<bits/stdc++.h>
using namespace std;
 int  main(){
    int k,n;
    cin>>k>>n;
    int arr[k];
    for(int i=0; i<k; i++){
        cin>>arr[i];
    }
    sort(arr,arr+k);
    for(int i=0; i<k; i++){
        if(arr[i]==n){
            cout<<i<<" ";
        }
    }
 }
```

## Submission at 2024-11-25 09:56:13


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = "YES";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            s = "NO";
            break;
        }
    }
    cout<<s;
}
```

## Submission at 2024-11-25 10:09:01


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    int maxi =0;
    char ans;
    for(auto it:mp){
        if(it.second>maxi){
            maxi = it.second;
            ans  = it.first;
        }
    }
    cout<<ans;
}
```

## Submission at 2024-11-25 10:16:37


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
}

```

## Submission at 2024-11-25 10:32:45


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int ans[k];
    for(int i=0; i<n; i++){
        if(arr[i][1]=ans[k]); 
    }
    int sum  = 0;
    sort(ans,ans+k);
    for(int i=k-1 ; i>=0; i--){
        sum+ = ans[i];
    }
}
```

## Submission at 2024-11-25 10:33:12


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int ans[k];
    for(int i=0; i<n; i++){
        if(arr[i][1]=ans[k]); 
    }
    int sum  = 0;
    sort(ans,ans+k);
    for(int i=k-1 ; i>=0; i--){
        sum+ = ans[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:33:13


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int ans[k];
    for(int i=0; i<n; i++){
        if(arr[i][1]=ans[k]); 
    }
    int sum  = 0;
    sort(ans,ans+k);
    for(int i=k-1 ; i>=0; i--){
        sum+ = ans[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:33:14


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int ans[k];
    for(int i=0; i<n; i++){
        if(arr[i][1]=ans[k]); 
    }
    int sum  = 0;
    sort(ans,ans+k);
    for(int i=k-1 ; i>=0; i--){
        sum+ = ans[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:33:14


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int ans[k];
    for(int i=0; i<n; i++){
        if(arr[i][1]=ans[k]); 
    }
    int sum  = 0;
    sort(ans,ans+k);
    for(int i=k-1 ; i>=0; i--){
        sum+ = ans[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:33:16


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[k][2];
    for(int i=0;i<k; i++){
        for(int j=0; j<2; j++){
            cin>>arr[i][j];
        }
    }
    int ans[k];
    for(int i=0; i<n; i++){
        if(arr[i][1]=ans[k]); 
    }
    int sum  = 0;
    sort(ans,ans+k);
    for(int i=k-1 ; i>=0; i--){
        sum+ = ans[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:43:10


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool s = true;
    int d  = arr[1]-arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]!=d){
            s = false;
            break;
        }
    }
    cout<<s;
}
```

## Submission at 2024-11-25 10:46:17


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool s = true;
    int d  = arr[1]-arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]!=d){
            s = false;
            break;
        }
    }
    cout<<s;
}
```

## Submission at 2024-11-25 10:47:16


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    string s = "true";
    int d  = arr[1]-arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]!=d){
            s = "false";
            break;
        }
    }
    cout<<s;
}
```

## Submission at 2024-11-25 10:49:42


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    string s = "true";
    int d  = arr[1]-arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]-arr[i-1]!=d){
            s = "false";
            break;
        }
    }
    cout<<s;
}
```

## Submission at 2024-11-25 11:03:40


```
#incude<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    vector<int>ans(k);
    for(int i=0;i<k; i++){
        cin>>arr[i];
        cin>>ans[i];
    }
    vector<int>bcd(k);
    vector<int>abc(k);
    for(int i=0; i<k; i++){
        int temp  = arr[i];
        
        int sum  = ans[i];
        for(int j=i+1; j<k; j++){
            if(find(bcd.begin(),bcd.end(),temp)!=bcd.end()){
                continue;
            }
            if(arr[j]==temp){
                sum+=ans[j];
                
            }
        }
        bcd.push_back(temp);
        abc.push_back(sum);
    }
    sort(abc.begin(),abc.end());
    int d = 0;
    while(n){
        d+=abc[k-1];
        k--;
        n--;
    }
    cout<<d;
}
```

## Submission at 2024-11-25 11:06:05


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    vector<int>ans(k);
    for(int i=0;i<k; i++){
        cin>>arr[i];
        cin>>ans[i];
    }
    vector<int>bcd(k);
    vector<int>abc(k);
    for(int i=0; i<k; i++){
        int temp  = arr[i];
        
        int sum  = ans[i];
        for(int j=i+1; j<k; j++){
            if(find(bcd.begin(),bcd.end(),temp)!=bcd.end()){
                continue;
            }
            if(arr[j]==temp){
                sum+=ans[j];
                
            }
        }
        bcd.push_back(temp);
        abc.push_back(sum);
    }
    sort(abc.begin(),abc.end());
    int d = 0;
    while(n){
        d+=abc[k-1];
        k--;
        n--;
    }
    cout<<d;
}
```

## Submission at 2024-11-25 11:08:38


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    vector<int>ans(k);
    for(int i=0;i<k; i++){
        cin>>arr[i];
        cin>>ans[i];
    }
    vector<int>bcd(k);
    vector<int>abc(k);
    for(int i=0; i<k; i++){
        int temp  = arr[i];
        int sum  = ans[i];
        for(int j=i+1; j<k; j++){
            if(find(bcd.begin(),bcd.end(),temp)!=bcd.end()){
                continue;
            }
            if(arr[j]==temp){
                sum+=ans[j];
                
            }
        }
        bcd.push_back(temp);
        abc.push_back(sum);
    }
    sort(abc.begin(),abc.end());
    int d = 0;
    int z = abc.size();
    if(n>z){
        for(int i=0; i<z; i++){
            d+=abc[i];
        }
    }
    cout<<d;
    }
```

## Submission at 2024-11-25 11:10:28


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    vector<int>ans(k);
    for(int i=0;i<k; i++){
        cin>>arr[i];
        cin>>ans[i];
    }
    vector<int>bcd(k);
    vector<int>abc(k);
    for(int i=0; i<k; i++){
        int temp  = arr[i];
        int sum  = ans[i];
        for(int j=i+1; j<k; j++){
            if(find(bcd.begin(),bcd.end(),temp)!=bcd.end()){
                continue;
            }
            if(arr[j]==temp){
                sum+=ans[j];
                
            }
        }
        bcd.push_back(temp);
        abc.push_back(sum);
    }
    sort(abc.begin(),abc.end());
    int d = 0;
    int z = abc.size();
    if(n>=z){
        for(int i=0; i<z; i++){
            d+=abc[i];
        }
    }
    else {
        for(int i = z-1; i>z-n+1 ; i--){
            d+= abc[i];
        }
    }
    cout<<d;
    }
```

## Submission at 2024-11-25 11:11:02


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    vector<int>ans(k);
    for(int i=0;i<k; i++){
        cin>>arr[i];
        cin>>ans[i];
    }
    vector<int>bcd(k);
    vector<int>abc(k);
    for(int i=0; i<k; i++){
        int temp  = arr[i];
        int sum  = ans[i];
        for(int j=i+1; j<k; j++){
            if(find(bcd.begin(),bcd.end(),temp)!=bcd.end()){
                continue;
            }
            if(arr[j]==temp){
                sum+=ans[j];
                
            }
        }
        bcd.push_back(temp);
        abc.push_back(sum);
    }
    sort(abc.begin(),abc.end());
    int d = 0;
    int z = abc.size();
    if(n>=z){
        for(int i=0; i<z; i++){
            d+=abc[i];
        }
    }
    else {
        for(int i = z-1; i>=z-n+1 ; i--){
            d+= abc[i];
        }
    }
    cout<<d;
    }
```

## Submission at 2024-11-25 11:11:33


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(k);
    vector<int>ans(k);
    for(int i=0;i<k; i++){
        cin>>arr[i];
        cin>>ans[i];
    }
    vector<int>bcd(k);
    vector<int>abc(k);
    for(int i=0; i<k; i++){
        int temp  = arr[i];
        int sum  = ans[i];
        for(int j=i+1; j<k; j++){
            if(find(bcd.begin(),bcd.end(),temp)!=bcd.end()){
                continue;
            }
            if(arr[j]==temp){
                sum+=ans[j];
                
            }
        }
        bcd.push_back(temp);
        abc.push_back(sum);
    }
    sort(abc.begin(),abc.end());
    int d = 0;
    int z = abc.size();
    if(n>=z){
        for(int i=0; i<z; i++){
            d+=abc[i];
        }
    }
    else {
        for(int i = z-1; i>=z-n+1 ; i--){
            d+= abc[i];
        }
    }
    cout<<d;
    }
```

## Submission at 2024-11-25 11:15:30


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


int findMaxForN(Node* root, int n)
{
  if(!root) return -1;
  if(root->data >n) return findMaxForN(root->left,n);
  else if(root->data < n ) return findMaxForN(root->right, n);
  else return root->data; 
}

```

## Submission at 2024-11-25 11:24:42


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
    if(!root) return NULL;
}



```

## Submission at 2024-11-25 11:29:48


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
    Node* temp;
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    return temp;
}



```

## Submission at 2024-11-25 11:31:22


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
    Node* temp;
    while(head1 && head2){
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    }
    return temp;
}



```

## Submission at 2024-11-25 11:32:36


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
    Node* temp;
    while(head1 && head2){
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      head1 = head1->next;
        head2 = head2->next;

      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    }
    return temp;
}



```

## Submission at 2024-11-25 11:34:02


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
    Node* temp=NULL;
    while(head1 && head2){
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      head1 = head1->next;
        head2 = head2->next;

      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    }
    return temp;
}



```

## Submission at 2024-11-25 11:34:53


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
    Node* temp=NULL;
    while(head1 && head2){
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      head1 = head1->next;
        head2 = head2->next;

      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    }
    return temp;
}



```

## Submission at 2024-11-25 11:36:42


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
    Node* temp=NULL;
    while(head1 && head2){
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      head1 = head1->next;
        head2 = head2->next;

      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    }
    return temp;
}



```

## Submission at 2024-11-25 11:39:26


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
    Node* temp=NULL;
    while(head1 && head2){
    if(head1->data == head2->data){
      if(temp){
        temp->next = head1->data;
        head1 = head1->next;
        head2 = head2->next;
      }
      else{
      Node *temp = new Node(head1->data);
      head1 = head1->next;
        head2 = head2->next;

      }
    }
    else if(head1->data > head2->data){
      head2  = head2->next;
    }
    else {
      head1 = head1->next;
    }
    }
    return temp;
}



```

