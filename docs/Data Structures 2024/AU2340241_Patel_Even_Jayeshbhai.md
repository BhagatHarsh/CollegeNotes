## Submission at 2024-08-05 10:14:39


```
#include <iostream>
#include <string>

using namespace std;

int main(){

string name;
cin>>name;
cout << "Hello " << name << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-05 10:29:10


```
// Write your C++ code here from the scratch
#include<iostream>
#include<string>

using namespace std;

int main(){

    string name;
    cin>>name;
    cout<<"Hello "<<name<<" !"<<endl;

    return 0;
}
```

## Submission at 2024-08-05 10:30:11


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

## Submission at 2024-08-05 10:33:36


```
// Write your C++ code here
#include<iostream>
#include<string>

using namespace std;
int main(){

    int n;
    cin>>n;
    string name;
    for(int i=0;i<3;i++){
        cin>> name;
    }
    for(int i=0; i<3;i++){
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-05 10:34:24


```
// Write your C++ code here
#include<iostream>
#include<string>

using namespace std;
int main(){

    int n;
    cin>>n;
    string name;
    for(int i=0;i<n;i++){
        cin>> name;
    }
    for(int i=0; i<n;i++){
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-05 10:35:22


```
// Write your C++ code here
#include<iostream>
#include<string>

using namespace std;
int main(){

    int n;
    cin>>n;
    string name;
    for(int i=1;i<=n;i++){
        cin>> name;
    }
    for(int i=1; i<=n;i++){
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-05 10:37:49


```
// Write your C++ code here
#include<iostream>
#include<string>

using namespace std;
int main(){

    int n;
    cin>>n;
    
    for(int i=0; i<n;i++){
        
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-12 09:52:43


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    
    }
}

int main() {
    int x;
    cin >> x;
    
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:54:10


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    
    }
}

int main() {
    int x;
    cin >> x;
    
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:23:31


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    
    if (n==1) return true;
   else if ((n<0) || (n%2!=0)) return false;
    else {
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

## Submission at 2024-08-12 10:24:19


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    
    if (n==1) return true;
   else if ((n<1) || (n%2!=0)) return false;
    else {
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

## Submission at 2024-08-16 03:15:18


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

## Submission at 2024-08-16 04:00:28


```
#include <bits/stdc++.h>

using namespace std;

void generateSubsets(int index, vector<int>& current, const vector<int>& nums, vector<vector<int>>& res) {
    if (index == nums.size()) {
        res.push_back(current);
        return;
    }
    
    // Exclude the current element and move to the next
    generateSubsets(index + 1, current, nums, res);

    // Include the current element and move to the next
    current.push_back(nums[index]);
    generateSubsets(index + 1, current, nums, res);
    
    // Remove the last element (backtrack) to restore the state for the next call
    current.pop_back();
}

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> current;
    generateSubsets(0, current, nums, res);
    return res;
}

// Custom comparator function to sort based on size and first element
bool compare(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    // If sizes are the same, compare based on the first element
    if (!a.empty() && !b.empty()) {
        return a[0] < b[0];
    }
    return false; // Handle empty vectors (although empty vectors are unlikely in this case)
}

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> nums;
    int num;

    while (ss >> num) {
        nums.push_back(num);
    }

    // Generate all subsets
    vector<vector<int>> result = subsets(nums);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print subsets
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-21 10:00:09


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

## Submission at 2024-08-21 10:00:56


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-21 10:04:42


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}
```

## Submission at 2024-08-21 10:08:16


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

## Submission at 2024-08-22 12:31:36


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if(current.size()== k){
        result.push_back(current);
        return;
    }
    if(start>n){
        return;
    }

    current.push_back(start);
    combine(start+1,k,n,current,result);
    current.pop_back();
    combine(start+1,k,n,current,result);
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

## Submission at 2024-08-22 13:24:52


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void getPermutations(int index,vector<int>& nums,vector<vector<int>>&result){

if(index >= nums.size()){
    result.push_back(nums);
    return;
}

for(int i=index; i<nums.size();i++){
    swap(nums[index],nums[i]);
    getPermutations(index+1,nums,result);
    swap(nums[index],nums[i]);
}
}

vector<vector<int>> getPermutations(vector<int>& nums) {
    vector<vector<int>> result;
    
    // Sort the input array to get permutations in lexicographically sorted order
    sort(nums.begin(), nums.end());
    
    // Generate all permutations using next_permutation
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = getPermutations(nums);
    
    // Print the permutations
    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}

```

## Submission at 2024-09-02 10:11:07


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };



void traverse(vector<int>&result,ListNode* head){
    ListNode* temp =head;
    while(temp!=nullptr){
        result.push_back(temp->val);
        temp=temp->next;
    }

}
vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    traverse(result,head);
   
    return result;
}

```

## Submission at 2024-09-02 10:11:45


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };



void traverse(vector<int>&result,ListNode* head){
    ListNode* temp =head;
    while(temp!=0){
        result.push_back(temp->val);
        temp=temp->next;
    }

}
vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    traverse(result,head);
   
    return result;
}

```

## Submission at 2024-09-02 10:20:13


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
    Node*temp =head;
    int count=0;
    while(temp!= 0){
        if(temp->data = k){
            return count;
        }
        else{
            count++;
            temp=temp->next;
        }
    }
}

```

## Submission at 2024-09-02 10:20:59


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
    Node*temp =head;
    int count=1;
    while(temp!= 0){
        if(temp->data == k){
            return count;
        }
        else{
            count++;
            temp=temp->next;
        }
    }
}

```

## Submission at 2024-09-02 10:26:10


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
    Node*temp =head;
    int count=1;
    while(temp!= nullptr){
        
        if(count == k){
            return count;
        }
        else{
            count++;
            temp=temp->next;
        }
    }
}

```

## Submission at 2024-09-02 10:28:35


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
    Node*temp =head;
    int count=1;
    while(temp!= nullptr){
        
        if(count == k){
            return temp->data;
        }
        temp=temp->next;
        count++;
    
    }
    return -1;
}

```

## Submission at 2024-09-02 10:44:04


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
Node* deleteNode(Node *head,int position)
{
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }

    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    }
    


```

## Submission at 2024-09-02 11:08:06


```

#include<iostream>

using namespace std;

int main(){

int n;
cin>>n;
int a[n];
for(int i=0; i<n;i++){
    cin>>a[i];
}
int b[n];
for(int j=0; j<n;j++){
    cin>>b[j];
}

int c[n];

for(int i=0; i<n;i++){
    if(a[i]>b[i]){
        c[i]=a[i];
    }
    else{
        c[i]=b[i];
    }
}

for(int i=0; i<n; i++){
    cout<<c[i]<< " ";
}


}

```

## Submission at 2024-09-03 05:37:03


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
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=curr->next;
    }

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

```

## Submission at 2024-09-03 05:42:10


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
    //reversing 
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }

head = prev;  //updating reverse linkedlist

//printing the node
    // Node* temp=head;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    return head;
}

```

## Submission at 2024-09-03 06:10:32


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
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

        int cnt=1;
        while(cnt < x){
            head=head->next;
            prev=head;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

    return head;
}

```

## Submission at 2024-09-03 06:11:55


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
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;

        int cnt=1;
        while(cnt < x){
           prev=curr;
           curr=curr->next;
            cnt++;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

    return head;
}

```

## Submission at 2024-09-06 11:34:30


```

#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };



void traverse(vector<int>&result,ListNode* head){
    ListNode* temp =head;
    while(temp!=0){
        result.push_back(temp->val);
        temp=temp->next;
    }

}
vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    traverse(result,head);
   
    return result;
}
```

## Submission at 2024-09-06 11:35:24


```

#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };



void traverse(vector<int>&result,ListNode* head){
    ListNode* temp =head;
    while(temp!=nullptr){
        result.push_back(temp->val);
        temp=temp->next;
    }

}
vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    traverse(result,head);
   
    return result;
}
```

## Submission at 2024-09-09 04:18:32


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
    Node* temp=head;
    int len=1;
    while(temp!=nullptr){
if(len==k){
        return temp->data;
}
temp=temp->next;
        len++;
    }


    return -1;
}

```

## Submission at 2024-09-09 04:20:24


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

Node* deleteNode(Node *head,int position)
{
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
  //Your code here
  return head;
}

```

## Submission at 2024-09-09 04:21:17


```
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        
        for(int i = 1; i <= n; i++) {  
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {  
               sum += i;
            }
        }    
        return sum;
    }
};
```

## Submission at 2024-09-09 06:58:56


```
#include <iostream>
#include <vector>
#include <cmath> // for log10 function

using namespace std;

// Function to count numbers with an even number of digits
int countEvenDigitNumbers(const vector<int>& nums) {
    int count = 0;
    
    for (int num : nums) {
        // Check if the number of digits is even using log10 to count digits
        int digits = log10(num) + 1;
        if (digits % 2 == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    
    // Input the length of the array
    cin >> n;
    
    vector<int> nums(n);
    
    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Output the count of numbers with even number of digits
    cout << countEvenDigitNumbers(nums) << endl;
    
    return 0;
}

```

## Submission at 2024-09-09 07:05:30


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n;i++){
        nums[i]=i+1;
    }
    int sum=0;
    for(int i=0; i<n;i++){
        if(nums[i]%3==0 || nums[i]%5==0  || nums[i]%7==0){
            sum= sum +nums[i];
        }
        
    }
    cout<<sum;
    return 0;
    
}
```

## Submission at 2024-09-09 07:09:03


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int missing_count = 0;  // Counts missing numbers
    int current = 1;        // Current number we're checking if missing
    
    // Iterate through the array and check for missing numbers
    for (int i = 0; i < arr.size(); ++i) {
        // While current is less than the current array element, count the missing numbers
        while (current < arr[i]) {
            missing_count++;   // Increment missing count
            
            // If we've reached the k-th missing number, return it
            if (missing_count == k) {
                return current;
            }
            current++;  // Move to the next number
        }
        current = arr[i] + 1;  // Skip to the next number after the current array element
    }

    // If the k-th missing number is greater than all elements in the array
    while (missing_count < k) {
        missing_count++;
        current++;
    }
    
    return current - 1;
}

int main() {
    int n, k;
    // Input the size of the array and the value of k
    cin >> n >> k;
    
    vector<int> arr(n);
    // Input the array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Output the k-th missing number
    cout << findKthMissing(arr, k) << endl;
    
    return 0;
}

```

## Submission at 2024-09-09 07:13:13


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int missing_count = 0;  // Counts missing numbers
    int current = 1;        // Current number we're checking if missing
    
    // Iterate through the array and check for missing numbers
    for (int i = 0; i < arr.size(); ++i) {
        // While current is less than the current array element, count the missing numbers
        while (current < arr[i]) {
            missing_count++;   // Increment missing count
            
            // If we've reached the k-th missing number, return it
            if (missing_count == k) {
                return current;
            }
            current++;  // Move to the next number
        }
        current = arr[i] + 1;  // Skip to the next number after the current array element
    }

    // If the k-th missing number is greater than all elements in the array
    while (missing_count < k) {
        missing_count++;
        current++;
    }
    
    return current - 1;
}

int main() {
    int n, k;
    // Input the size of the array and the value of k
    cin >> n >> k;
    
    vector<int> arr(n);
    // Input the array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Output the k-th missing number
    cout << findKthMissing(arr, k) << endl;
    
    return 0;
}

```

## Submission at 2024-09-09 07:22:10


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    // Input the dimensions of the matrix (m x n)
    cin >> m >> n;

    // Declare a 2D vector (m x n) to hold the matrix
    vector<vector<int>> nums(m, vector<int>(n));

    // Input the matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> nums[i][j];
        }
    }

    // Transpose the matrix (n x m)
    vector<vector<int>> transpose(n, vector<int>(m));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = nums[i][j];
        }
    }

    // Output the transposed matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-09-09 07:33:54


```
#include <iostream>
#include <vector>
#include <algorithm>  // For sorting
using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    // If the lengths are not equal, the arrays can't be equal
    if (arr1.size() != arr2.size()) {
        return false;
    }

    // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Compare the sorted arrays element by element
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            return false;  // If any element is different, arrays are not equal
        }
    }

    return true;  // Arrays are equal
}

int main() {
    int len1, len2;
    
    // Input the lengths of both arrays
    cin >> len1 >> len2;
    
    vector<int> arr1(len1), arr2(len2);
    
    // Input elements of the first array
    for (int i = 0; i < len1; i++) {
        cin >> arr1[i];
    }
    
    // Input elements of the second array
    for (int i = 0; i < len2; i++) {
        cin >> arr2[i];
    }
    
    // Output true if arrays are equal, false otherwise
    if (areArraysEqual(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}

```

## Submission at 2024-09-09 07:55:08


```
// Write code from scratch here
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;
        
        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;
        
        // Traverse from right to left along the bottom row (if still within boundaries)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        // Traverse from bottom to top along the left column (if still within boundaries)
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
    
    // Input the dimensions of the matrix (n rows and m columns)
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    // Input the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Get the spiral order of the matrix
    vector<int> spiral = spiralOrder(matrix);
    
    // Output the spiral traversal as a space-separated string
    for (int i = 0; i < spiral.size(); i++) {
        cout << spiral[i];
        if (i != spiral.size() - 1) cout << " ";
    }
    
    return 0;
}


```

## Submission at 2024-09-09 07:56:07


```
// Write code from scratch here
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    // int top = 0, bottom = matrix.size() - 1;
    // int left = 0, right = matrix[0].size() - 1;
    
    // while (top <= bottom && left <= right) {
    //     // Traverse from left to right along the top row
    //     for (int i = left; i <= right; i++) {
    //         result.push_back(matrix[top][i]);
    //     }
    //     top++;
        
    //     // Traverse from top to bottom along the right column
    //     for (int i = top; i <= bottom; i++) {
    //         result.push_back(matrix[i][right]);
    //     }
    //     right--;
        
    //     // Traverse from right to left along the bottom row (if still within boundaries)
    //     if (top <= bottom) {
    //         for (int i = right; i >= left; i--) {
    //             result.push_back(matrix[bottom][i]);
    //         }
    //         bottom--;
    //     }
        
    //     // Traverse from bottom to top along the left column (if still within boundaries)
    //     if (left <= right) {
    //         for (int i = bottom; i >= top; i--) {
    //             result.push_back(matrix[i][left]);
    //         }
    //         left++;
    //     }
    // }
    
    return result;
}

int main() {
    int n, m;
    
    // Input the dimensions of the matrix (n rows and m columns)
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    // Input the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Get the spiral order of the matrix
    vector<int> spiral = spiralOrder(matrix);
    
    // Output the spiral traversal as a space-separated string
    for (int i = 0; i < spiral.size(); i++) {
        cout << spiral[i];
        if (i != spiral.size() - 1) cout << " ";
    }
    
    return 0;
}


```

## Submission at 2024-09-09 08:04:20


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    
    int startingRow = 0, endingRow = matrix.size() - 1;
    int startingCol = 0, endingCol = matrix[0].size() - 1;
    
    while (startingRow <= endingRow && startingCol <= endingCol) {
        // Traverse from startingCol to endingCol along the startingRow
        for (int i = startingCol; i <= endingCol; i++) {
            result.push_back(matrix[startingRow][i]);
        }
        startingRow++;
        
        // Traverse from startingRow to endingRow along the endingCol
        for (int i = startingRow; i <= endingRow; i++) {
            result.push_back(matrix[i][endingCol]);
        }
        endingCol--;
        
        // Traverse from endingCol to startingCol along the endingRow (if still within boundaries)
        if (startingRow <= endingRow) {
            for (int i = endingCol; i >= startingCol; i--) {
                result.push_back(matrix[endingRow][i]);
            }
            endingRow--;
        }
        
        // Traverse from endingRow to startingRow along the startingCol (if still within boundaries)
        if (startingCol <= endingCol) {
            for (int i = endingRow; i >= startingRow; i--) {
                result.push_back(matrix[i][startingCol]);
            }
            startingCol++;
        }
    }
    
    return result;
}

int main() {
    int n, m;
    
    // Input the dimensions of the matrix (n rows and m columns)
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    // Input the matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    // Get the spiral order of the matrix
    vector<int> spiral = spiralOrder(matrix);
    
    // Output the spiral traversal as a space-separated string
    for (int i = 0; i < spiral.size(); i++) {
        cout << spiral[i];
        if (i != spiral.size() - 1) cout << " ";
    }
    
    return 0;
}

```

## Submission at 2024-09-09 09:58:09


```
// Write Code from Scratch here

#include<iostream>

using namespace std;

bool recurse(int n){
    if(n==1){ 
        cout<<"True";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
    if(n>=3){
    recurse(n/3);
}

return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 09:58:57


```
// Write Code from Scratch here

#include<iostream>

using namespace std;

bool recurse(int n){
    if(n==1){ 
        cout<<"True";
    }
    if(n<3){
        recurse (-n/3);
    }
    if(n>=3){
    recurse(n/3);
}

return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 09:59:33


```
// Write Code from Scratch here

#include<iostream>

using namespace std;

bool recurse(int n){
    if(n==1){ 
        cout<<"True";
    }
    if(n<3){
        recurse (n/3);
    }
    if(n>=3){
    recurse(n/3);
}

return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 10:00:08


```
// Write Code from Scratch here

#include<iostream>

using namespace std;

bool recurse(int n){
    if(n==1 ||n==-1){ 
        cout<<"True";
    }
    if(n<3){
        recurse (n/3);
    }
    if(n>=3){
    recurse(n/3);
}

return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 10:01:41


```
// Write Code from Scratch here

#include<iostream>

using namespace std;

bool recurse(int n){
    if(n==1 ||n==-1){ 
        cout<<"True";
    }
    if(n<3){
        recurse (n/3);
    }
    if(n<=-2 && n>=2){
        cout<<"False";
    }
    if(n>=3){
    recurse(n/3);
}

return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 10:05:15


```
// Write Code from Scratch here

#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1 ||n==-1){ 
        cout<<"True";
    }
    if(n==-2||n==0||n==2){
        cout<<"False";
    }
  
// cout<< "False";
return recurse(n/3);
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 10:16:39


```
// Write code from scratch here
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

// void recurse(string& s, int x,int index,int count){
// if(s[i]==x){
//     count++;
// }
// }

int main(){

string s;
cin>>s;
int x;
cin>>x;

int count=0;
int n =s.length();
for(int i=0; i<n;i++){

    if(s[i]==x){
        count++;
    }

}
cout<<count;



}
```

## Submission at 2024-09-09 10:29:44


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
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-09 10:31:10


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

    if(head->data==NULL){
      return true;
    }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-09 10:32:02


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

    if(head->data==NULL){
      return true;
    }
    if(head->data ==head->next->data){
      return true;
    }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-09 10:32:35


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

    if(head->data==NULL){
      return true;
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-09 10:40:16


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

    Node* temp =head;
    while(temp!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
        }
        else{
temp=temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:42:38


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

    Node* temp =head;
    while(temp!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            temp=temp->next;
            delete temp;
        }
        else{
temp=temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:43:52


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

    Node* temp =head;
    while(temp!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:49:50


```
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1 ||n==-1){ 
        cout<<"True";
    }
    if(n==-2||n==2||n==0){
        cout<<"False";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
    return recurse(n/3);

// return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 10:50:12


```
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1 ||n==-1){ 
        cout<<"True";
    }
    // if(n==-2||n==2||n==0){
    //     cout<<"False";
    // }
    // if(n<3){
    //     recurse (-n/3);
    // }
    return recurse(n/3);

// return "False";
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 10:58:17


```

// Complete the given function

void matrix(vector<vector<int>> matrix){
    
}
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
matrix(matrix);
};
```

## Submission at 2024-09-09 11:00:00


```
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n%3==0){ 
        cout<<"True";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
//     if(n>=3){
//     recurse(n/3);
// }

return recurse(n/3);
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 11:00:37


```
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n%3==0){ 
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
//     if(n>=3){
//     recurse(n/3);
// }


}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 11:02:29


```
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1){
        cout<<"True";
    }
    if(n%3==0){ 
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
//     if(n>=3){
//     recurse(n/3);
// }


}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 11:03:06


```
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1 ||n==-1){
        cout<<"True";
    }
    if(n%3==0){ 
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
//     if(n>=3){
//     recurse(n/3);
// }


}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-09 11:04:48


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

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 11:07:30


```
// Write code from scratch here

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

// void recurse(string& s, int x,int index,int count){
// if(s[i]==x){
//     count++;
// }
// }

int main(){

string s;
cin>>s;
int x;
cin>>x;

int count=0;
int n =s.length();
for(int i=0; i<n;i++){

    if(s[i]==x){
        count++;
    }

}
cout<<count;



}
```

## Submission at 2024-09-10 03:35:39


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

    Node* temp =head;
    if(head->data==NULL){
        return NULL;
    }
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-10 03:35:58


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

    Node* temp =head;
    if(head->data==NULL){
        return head;
    }
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-10 03:36:19


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

    Node* temp =head;
    if(temp->data==NULL){
        return head;
    }
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-10 03:39:47


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

    if(head->data==NULL){
      return true;
    }
    if(head->data == head->next->data){
      return true;
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL ){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-10 03:40:32


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

    if(head->data==NULL){
      return true;
    }
    if(head->data == head->next->data && head->next->next==NULL){
      return true;
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL ){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-10 03:42:01


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

    if(head->data==NULL){
      return true;
    }
    if(head->next->next==NULL){
      if(head->data == head->next->data){
      return true;
      }
      else {
        return false;
      }
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL ){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-10 03:42:55


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

    // if(head->data==NULL){
    //   return true;
    // }
    if(head->next->next==NULL){
      if(head->data == head->next->data){
      return true;
      }
      else {
        return false;
      }
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL ){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-10 03:43:58


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

    // if(head->data==NULL){
    //   return true;
    // }
    // if(head->next->next==NULL){
    //   if(head->data == head->next->data){
    //   return true;
    //   }
    //   else {
    //     return false;
    //   }
    // }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL ){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-10 03:45:10


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

    if(head->data==NULL){
      return true;
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }if(head->next->next==NULL){
      if(head->data == head->next->data){
      return true;
      }
      else {
        return false;
      }
    }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}

```

## Submission at 2024-09-10 06:03:19


```
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    char x;
    
    // Input the string and the character
    //input problem  : space 
    cin >> s >> x;

    int count = 0;
    int n = s.length();
    
   
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            count++;
        }
    }
    
    cout << count;

    return 0;
}

```

## Submission at 2024-09-10 06:06:26


```
#include<iostream>
#include<string>
using namespace std;

int countFrequency(string s, char x, int index) {
    
    if (index == s.length()) {
        return 0;
    }
    
   int count = (s[index] == x) ? 1 : 0;
    
    return count + countFrequency(s, x, index + 1);
}

int main() {
    string s;
    char x;
    
    
    cin >> s >> x;
    
    
    int result = countFrequency(s, x, 0);
    
    
    cout << result;
    
    return 0;
}

```

## Submission at 2024-09-10 06:09:11


```
// Write Code from Scratch here

#include<iostream>
using namespace std;

void recurse(int n){
    
    if(n == 1){
        cout << "True";
        return;
    }
    
    if(n % 3 != 0 ){
        cout << "False";
        return;
    }
    

    recurse(n / 3);
}

int main() {
    int n;
    cin >> n;
    
    recurse(n);

    return 0;
}

```

## Submission at 2024-09-10 06:09:53


```
// Write Code from Scratch here

#include<iostream>
using namespace std;

void recurse(int n){
    
    if(n == 1){
        cout << "True";
        return;
    }
    
    if(n % 3 != 0 ){
        cout << "False";
        return;
    }
    if(n<1){
        recurse(-n/3);
    }
    

    recurse(n / 3);
}

int main() {
    int n;
    cin >> n;
    
    recurse(n);

    return 0;
}

```

## Submission at 2024-09-10 06:11:12


```
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1){
        cout<<"True";
    }
    if(n%3!=0){ 
        cout<<"False";
    }
    recurse(n/3);
    
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-10 06:11:51


```
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1){
        cout<<"True";
        return;
    }
    if(n%3!=0){ 
        cout<<"False";
        return;
    }
    recurse(n/3);
    
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-10 06:12:24


```
#include<iostream>

using namespace std;

void recurse(int n){
    if(n==1 || n==-1){
        cout<<"True";
        return;
    }
    if(n%3!=0){ 
        cout<<"False";
        return;
    }
    recurse(n/3);
    
}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-12 10:16:26


```
// Write Code from Scratch here
// Write Code from Scratch here

#include<iostream>
using namespace std;

void recurse(int n){
    
    if(n == 1){
        cout << "True";
        return;
    }
    if(n<=0){
        return "False";
    }
    if(n % 3 != 0 ){
        cout << "False";
        return;
    }
    

    recurse(n / 3);
}

int main() {
    int n;
    cin >> n;
    
    recurse(n);

    return 0;
}
```

## Submission at 2024-09-12 10:16:57


```
// Write Code from Scratch here
// Write Code from Scratch here

#include<iostream>
using namespace std;

void recurse(int n){
    
    if(n == 1){
        cout << "True";
        return;
    }
    if(n<=0){
        cout<<"False";
        return;
    }
    if(n % 3 != 0 ){
        cout << "False";
        return;
    }
    

    recurse(n / 3);
}

int main() {
    int n;
    cin >> n;
    
    recurse(n);

    return 0;
}
```

## Submission at 2024-09-12 12:59:28


```
// Write Code from Scratch here
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n<0){

        cout<<"False";
        return;
    }
    if(n==1){
        cout<<"True";
    }
    if(n%3==0){ 
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
//     if(n>=3){
//     recurse(n/3);
// }


}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-12 12:59:47


```
// Write Code from Scratch here
// Write Code from Scratch here
#include<iostream>

using namespace std;

void recurse(int n){
    if(n<=0){

        cout<<"False";
        return;
    }
    if(n==1){
        cout<<"True";
    }
    if(n%3==0){ 
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    // if(n<3){
    //     recurse (-n/3);
    // }
//     if(n>=3){
//     recurse(n/3);
// }


}


int main(){

int n;
cin>>n;
recurse(n);

}
```

## Submission at 2024-09-13 10:07:12


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

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            temp=temp->next;
            delete next;
            // temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:36:36


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
    if()

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){

        if(temp->data == temp->next->data){
            
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=temp->next->next;
            next->next = NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:39:53


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
    if()

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){

        if(temp->data == temp->next->data){
            
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next->NULL;
            
            delete next;
            temp=temp->next;

        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:46:02


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

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            // temp->next->next=NULL;
temp=temp->next->next;
            delete next;
            
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:48:21


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

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            temp->next=temp->next->next;
            // temp->next->next=NULL;
temp=temp->next->next;
            delete next;
            
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:48:42


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
if (head == NULL || head->next == NULL) 
        return head;
}
    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            temp->next=temp->next->next;
            // temp->next->next=NULL;
temp=temp->next->next;
            delete next;
            
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:49:14


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
if (head == NULL ) {
        return head;
}
    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            temp->next=temp->next->next;
            // temp->next->next=NULL;
temp=temp->next->next;
            delete next;
            
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 10:50:20


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

    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            temp->next=temp->next->next;
            // temp->next->next=NULL;
temp=temp->next->next;
            delete next;
            
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:12:54


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
if(head==NULL) return head;

    Node* temp =head;

    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){

            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            // temp->next->next=NULL;
            delete next;
            // temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:13:25


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
if(head==NULL) return head;

    Node* temp =head;

    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){

            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            // temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:14:30


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
if(head==NULL) return head;

    Node* temp =head;

    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){

            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            // temp->next->next=NULL;
            delete next;
            // temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:24:36


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
if(head==NULL) return head;

//     Node* temp =head;

//     while(temp!=NULL  && temp->next!=NULL){
//         if(temp->data == temp->next->data){

//             Node* next= temp->next;
//             Node* next_next= temp->next->next;
            
//             temp->next=next_next;
//             // temp->next->next=NULL;
//             delete next;
//             // temp=temp->next;
        
//         }
//         else{
// temp=temp->next;
//         }
//     }
//     return head;
}
```

## Submission at 2024-09-13 11:26:18


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
if(head==NULL) return head;
    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:26:38


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
if(head==NULL) return head;
    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            temp->next->next=NULL;
            delete next;
            // temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:27:01


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
if(head==NULL) return head;
    Node* temp =head;
    while(temp!=NULL  && temp->next!=NULL){
        if(temp->data == temp->next->data){
            Node* next= temp->next;
            Node* next_next= temp->next->next;
            
            temp->next=next_next;
            // temp->next->next=NULL;
            delete next;
            // temp=temp->next;
        
        }
        else{
temp=temp->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:28:29


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
if(head==NULL) return head;

    Node* curr =head;
    while(curr!=NULL  && curr->next!=NULL){
        if(curr->data == curr->next->data){
            // Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            curr->next=curr->next->next;
            // temp->next->next=NULL;
            delete curr->next;
            // temp=temp->next;
        
        }
        else{
curr=curr->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:28:51


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
if(head==NULL) return head;

    Node* curr =head;
    while(curr!=NULL  && curr->next!=NULL){
        if(curr->data == curr->next->data){
            // Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            curr->next=curr->next->next;
            // temp->next->next=NULL;
            delete curr;
            // temp=temp->next;
        
        }
        else{
curr=curr->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:30:03


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
if(head==NULL) return head;

    Node* curr =head;
    while(curr!=NULL  && curr->next!=NULL){
        if(curr->data == curr->next->data){
            // Node* next= temp->next;
            // Node* next_next= temp->next->next;
            
            curr->next=curr->next->next;
            // temp->next->next=NULL;
            delete curr;
            // temp=temp->next;
        
        }
        else{
curr=curr->next;
        }
    }
    return curr;
}
```

## Submission at 2024-09-13 11:33:29


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

    if(head==NULL){
      return true;
    }
    // if(head->data ==head->next->data){
    //   return true;
    // }
    Node* temp1 =head;
    // Node* temp2 =head;
    // int len=0;
    // while(temp!=NULL){
    //   temp=temp->next;
    //   len++;
    // }
    //length maligayi

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:38:32


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
    

    if(head==NULL){
      return true;
    }
    if(head->next ==NULL){
      return false;
    }
   
    
    Node* temp1 =head;
  
    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:39:13


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
    

    if(head==NULL){
      return true;
    }
    
   
    
    Node* temp1 =head;
  
    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:41:27


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
    

    if(head==NULL || head->next==NULL){
      return true;
    }
    

    
    Node* temp1 =head;
  
    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }
    Node* temp2= prev;

    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:44:24


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
    

    if(head==NULL || head->next==NULL){
      return true;
    }
    

    
    Node* temp1 =head;
  

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }


    Node* temp2= prev;
    Node* temp1=head;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:44:46


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
    

    if(head==NULL || head->next==NULL){
      return true;
    }
    

    
    Node* temp1 =head;
  

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      curr->next=prev;
      curr=curr->next;
      prev=curr;
    }


    Node* temp2= prev;
    temp1=head;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:51:56


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
    

    if(head==NULL || head->next==NULL){
      return true;
    }
    

    
    Node* temp1 =head;
  

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      prev=curr;
      curr->next=prev;
      curr=curr->next;
      
    }


    Node* temp2= prev;
    temp1=head;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-13 11:52:51


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
    

    if(head==NULL || head->next==NULL){
      return true;
    }
    

    
    Node* temp1 =head;
  

    Node* prev =NULL;
    Node* curr=head;
    while(curr!=NULL){
      
      curr->next=prev;
      prev=curr;
      curr=curr->next;
      
    }


    Node* temp2= prev;
    temp1=head;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data != temp2->data){
        return false;
      }
      temp1=temp1->next;
      temp2=temp2->next;

    }
    return true;


}
```

## Submission at 2024-09-16 04:12:13


```

// Complete the given function
int max(vector<vector<int>> matrix,int row,int j){
int maxi=matrix[0][j];
//col ma max 
    for(int k=0;k<row;k++){
        if(matrix[k][j]>maxi){
            maxi=matrix[k][j];
        }
    }
    return maxi;


}
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
int row=matrix.size();
int col=matrix[0].size();
vector<vector<int>>resultm(row,vector<int>(col));

for(int i=0;i<row;i++){
    for(int j=0; j<col;j++){
        if(matrix[i][j]==(-1)){
            int element = max(matrix,row,j);
            resultm[i][j]=element;
        }
        else{
            resultm[i][j]=matrix[i][j];
        }
    }
}
return resultm;


};
```

## Submission at 2024-10-07 10:03:29


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    unhappy(wealth,n);

    

}
```

## Submission at 2024-10-07 10:04:25


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n.int avg_wealth){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 10:04:46


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 10:05:14


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    int s=0;
    int e=n;
    int ans=0;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 10:05:40


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    int s=0;
    int e=n;
    int ans=0;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 10:05:59


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    int s=0;
    int e=n;
    int ans=0;
    int mid = s+(e-s)/2;

    while(s<e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    
    unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 10:15:41


```
// Function to reverse the queue.
#include<iostream>
#include<stack>
#include<queue>
// 
// using namespace std;

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;

    while(q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //queue empty

    while(s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
    

}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>n
//     }
// queue<int> q;
// vector<int>arr;
// for(int i=0;i<n;i++){
//     int element=arr[i];
//     q.push(element);
// }
//     //queue 
//     // while(!q.empty()){

//     // }

//     rev(q);
// }

```

## Submission at 2024-10-07 10:16:33


```
// Function to reverse the queue.
#include<iostream>
#include<stack>
#include<queue>
// 
// using namespace std;

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //queue empty

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
    

}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>n
//     }
// queue<int> q;
// vector<int>arr;
// for(int i=0;i<n;i++){
//     int element=arr[i];
//     q.push(element);
// }
//     //queue 
//     // while(!q.empty()){

//     // }

//     rev(q);
// }

```

## Submission at 2024-10-07 10:17:18


```
// Function to reverse the queue.
#include<iostream>
#include<stack>
#include<queue>
// 
// using namespace std;

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;
    if(q.size()==0){
        return 0;
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //queue empty

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
    

}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>n
//     }
// queue<int> q;
// vector<int>arr;
// for(int i=0;i<n;i++){
//     int element=arr[i];
//     q.push(element);
// }
//     //queue 
//     // while(!q.empty()){

//     // }

//     rev(q);
// }

```

## Submission at 2024-10-07 10:17:48


```
// Function to reverse the queue.
#include<iostream>
#include<stack>
#include<queue>
// 
// using namespace std;

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;

    if(q.length()==0){
        return 0;
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //queue empty

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
    

}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>n
//     }
// queue<int> q;
// vector<int>arr;
// for(int i=0;i<n;i++){
//     int element=arr[i];
//     q.push(element);
// }
//     //queue 
//     // while(!q.empty()){

//     // }

//     rev(q);
// }

```

## Submission at 2024-10-07 10:18:08


```
// Function to reverse the queue.
#include<iostream>
#include<stack>
#include<queue>
// 
// using namespace std;

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;

    if(q.empty()==0){
        return 0;
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //queue empty

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
    

}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>n
//     }
// queue<int> q;
// vector<int>arr;
// for(int i=0;i<n;i++){
//     int element=arr[i];
//     q.push(element);
// }
//     //queue 
//     // while(!q.empty()){

//     // }

//     rev(q);
// }

```

## Submission at 2024-10-07 10:18:27


```
// Function to reverse the queue.
#include<iostream>
#include<stack>
#include<queue>
// 
// using namespace std;

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;

    if(q.empty()){
        return q;
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    //queue empty

    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
    

}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n;i++){
//         cin>>n
//     }
// queue<int> q;
// vector<int>arr;
// for(int i=0;i<n;i++){
//     int element=arr[i];
//     q.push(element);
// }
//     //queue 
//     // while(!q.empty()){

//     // }

//     rev(q);
// }

```

## Submission at 2024-10-07 10:23:05


```
// Write your code from scratch here
#include<iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    if(s.length()==0){
        return s;
    }
}
```

## Submission at 2024-10-07 10:34:39


```
#include<iostream>

using namespace std;

int main(){

int n;
cin>>n;
int k;
cin>>k;
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

int s=0;
int e= n;
int mid =s+(e-s)/2;
int ans=0;

while(s<=e){
    if(arr[mid]<=arr[k]){
        ans=mid;
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;

}

cout<<ans;

return 0;
}
```

## Submission at 2024-10-07 10:40:52


```
#include<iostream>
#include<algorithm>

using namespace std;

int main(){

int n;
cin>>n;
int k;
cin>>k;
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int ans=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
}

cout<<count;

return 0;
}
```

## Submission at 2024-10-07 10:41:23


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

int n;
cin>>n;
int k;
cin>>k;
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
}

cout<<count;

return 0;
}
```

## Submission at 2024-10-07 10:42:45


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

if(k>n){
    return -1;
}

int n;
cin>>n;
int k;
cin>>k;
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
}

cout<<count;

return 0;
}
```

## Submission at 2024-10-07 10:43:21


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){


int n;
cin>>n;
int k;
cin>>k;

if(k>n){
    cout<< -1;
}
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
}

cout<<count;

return 0;
}
```

## Submission at 2024-10-07 10:44:44


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){


int n;
cin>>n;
int k;
cin>>k;

if(k>n){
    cout<< -1;
}
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
// while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        // s=mid+1;
    }
    // else{
    //     e=mid-1;
    // }
    // mid=s+(e-s)/2;

}
}

cout<<count;

return 0;
}
```

## Submission at 2024-10-07 10:46:08


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){


int n;
cin>>n;
int k;
cin>>k;

if(k>n){
    cout<< -1;
}
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
// while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        // s=mid+1;
    }
    // else{
    //     e=mid-1;
    // }
    // mid=s+(e-s)/2;

}
}

cout<<count;

// return 0;

```

## Submission at 2024-10-07 10:46:50


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){


int n;
cin>>n;
int k;
cin>>k;

if(k>n){
    cout<< -1;
}
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
// while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        // s=mid+1;
    }
    // else{
    //     e=mid-1;
    // }
    // mid=s+(e-s)/2;

}
cout<<count;
}



// return 0;

```

## Submission at 2024-10-07 10:47:10


```
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){


int n;
cin>>n;
int k;
cin>>k;

if(k>n){
    cout<< -1;
}
vector<int>arr;
for(int i=0; i<n;i++){
    cin>>arr[i];
}

// sort(arr.begin(),arr.end());

int s=0;
int e= n;
int mid =s+(e-s)/2;
int count=0;

for(int i=0;i<n-1;i++){
    int diff = arr[i+1]-arr[i];
// while(s<=e){
    if(diff<=k){
        count++;
        // ans=mid;
        // e=mid-1;
        // s=mid+1;
    }
    // else{
    //     e=mid-1;
    // }
    // mid=s+(e-s)/2;

}
cout<<count;
}



// return 0;

```

## Submission at 2024-10-07 10:51:55


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>

using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    int s=0;
    int e=n;
    int ans=0;
    int mid = s+(e-s)/2;

    while(s<e){
        if(avg_wealth<=mid){
            ans=mid;
            e=mid-1;
    }
    else{
        s=mid+1;
    }
    mid=s+(e-s)/2;
    
}
return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(n>avg_wealth){
        return -1;
    }
    
    unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 10:58:49


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(n>avg_wealth){
        return x;
    }
    else{
        return -1;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:01:30


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(sum/2 >count){
        return x;
    }
    else{
        return -1;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:02:04


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(sum/2 <count){
        return x;
    }
    else{
        return -1;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:02:25


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(n/2 <count){
        return x;
    }
    else{
        return -1;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:02:44


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(n/2 > count){
        return x;
    }
    else{
        return -1;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:03:35


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(n/2 < count){
        return -1;
    }
    else{
        return x;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:04:02


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int unhappy(vector<int>wealth,int n,int avg_wealth){
    // int s=0;
    // int e=n;
    // int ans=0;
    // int mid = s+(e-s)/2;

    // while(s<e){
    //     if(avg_wealth<=mid){
    //         ans=mid;
    //         e=mid-1;
    // }
    // else{
    //     s=mid+1;
    // }
    // mid=s+(e-s)/2;


    
// }
// return ans;
}

int main(){


    int n ;
    cin>>n;
    if(n==0){
        return n;
    }
vector<int>wealth;

    for(int i=0; i<n;i++){
        cin>>wealth[i];
    }
sort(wealth.begin(),wealth.end());

int rich = wealth[n-1];
int x;
int new_rich=wealth[n-1]+x;

    int sum =0;
    for(int i=0;i<n;i++){
        sum +=wealth[i];
    }

    int avg_wealth=sum/n;

 int count=0; //unhappy
    for(int i=0; i<n;i++){

        if(wealth[i]<avg_wealth/2){
            count++;
        }

    }

    if(n/2 < count){
        return -1;
    }
    else{
        return x;
    }
    
    // unhappy(wealth,n,avg_wealth);

    

}
```

## Submission at 2024-10-07 11:10:11


```
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>



using namespace std;

int main(){

    string s;
    cin>>s;

    if(s.length()==0){
        return s;
    }

    int result=0;
    stack<int>st;

    for(int i=0; i<s.length();i++){
        if(s[i]=='+'){
            int element = st.top();
             result += (s[i+1] + element);
        }

        if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
st.push(s[i])
        }
    }

}
```

## Submission at 2024-10-07 11:12:01


```
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>



using namespace std;

int main(){

    string s;
    cin>>s;

    // if(s.length()==0){
    //     return s;
    // }

    int result=0;
    stack<int>st;

    for(int i=0; i<s.length();i++){
        if(s[i]=='+'){
            int element = st.top();
             result += (s[i+1] + element);
        }

        if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
st.push(s[i]);
        }

    }
    cout<<result;

}
```

## Submission at 2024-10-07 11:12:49


```
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>



using namespace std;

int main(){

    string s;
    cin>>s;

    // if(s.length()==0){
    //     return s;
    // }

    int result=0;
    stack<int>st;

    for(int i=0; i<s.length();i++){
        if(s[i]=='+'){
            if(!st.empty()){
            int element = st.top();
             result += (s[i+1] + element);
            }
        }

        if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
st.push(s[i]);
        }

    }
    cout<<result;

}
```

## Submission at 2024-10-07 11:13:28


```
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>



using namespace std;

int main(){

    string s;
    cin>>s;

    // if(s.length()==0){
    //     return s;
    // }

    int result=0;
    stack<int>st;

    for(int i=0; i<s.length()-1;i++){
        if(s[i]=='+'){
            if(!st.empty()){
            int element = st.top();
             result += (s[i+1] + element);
            }
        }

        if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
st.push(s[i]);
        }

    }
    cout<<result;

}
```

## Submission at 2024-10-07 11:14:53


```
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>



using namespace std;

int main(){

    string s;
    cin>>s;

    if(s.length()==0){
        return s;
    }

    int result=0;
    stack<int>st;

    for(int i=0; i<s.length()-1;i++){
        if(s[i]=='+'){
            if(!st.empty()){
            int element = st.top();
             result += (s[i+1] + element);
            }
        }

        if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
st.push(s[i]);
        }

    }
    cout<<result;

}
```

## Submission at 2024-10-14 09:27:07


```
// Write your code from scratch here
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>



using namespace std;

int main(){

    string s;
    cin>>s;
reverse(s.begin(),s.end());
cout<<s;
    // if(s.length()==0){
    //     return s;
    // }

//     string result=0;
//     stack<int>st;

//     for(int i=0; i<s.length()-1;i++){
//         if(s[i]=='+'){
//             if(!st.empty()){
//             int element = st.top();
//              result += (s[i+1] + element);
//             }
//         }

//         if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
// st.push(s[i]);
//         }

//     }
//     cout<<result;

}
```

## Submission at 2024-10-14 09:30:12


```
// Write your code from scratch here
// Write your code from scratch here
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>



using namespace std;

int main(){

    string s;
    cin>>s;
reverse(s.begin(),s.end());
cout<<s;
    // if(s.length()==0){
    //     return s;
    // }

    string result=0;
    stack<int>st;

    for(int i=0; i<s.length()-1;i++){
        if(s[i]=='+'){
            if(!st.empty()){
            string element = st.top();
             result += (s[i+1] + element);
            }
        }

        if(s[i]=='3' || s[i]=='2' || s[i]=='1'){
st.push(s[i]);
        }

    }
    cout<<result;

}
```

## Submission at 2024-10-14 09:32:32


```
#include<iostream>
#include<string>
#include<algorithm> 

using namespace std;

int main() {
    string s;
    cin >> s;
    
   
    string numbers = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            numbers += s[i];
        }
    }
   
    sort(numbers.begin(), numbers.end());
    
    string result = "";
    for (int i = 0; i < numbers.length(); i++) {
        result += numbers[i];
        if (i < numbers.length() - 1) {
            result += '+';
        }
    }
    
   
    cout << result;

    return 0;
}

```

## Submission at 2024-10-14 11:07:40


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    return q;
}

```

## Submission at 2024-10-14 11:15:46


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){


    int n ;
    cin>>n;
    if(n==1 || n==2){
        cout<<"-1";
    }

}
```

## Submission at 2024-10-14 11:16:31


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){


    int n ;
    cin>>n;
    if(n==1 || n==2){
        cout<<"-1";
    }

}
```

## Submission at 2024-10-14 11:17:04


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){


    int n ;
    cin>>n;
    if(n==1){
        cout<<"-1";
    }

}
```

## Submission at 2024-10-14 11:17:24


```
// Write C++ Code from scratch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){


    int n ;
    cin>>n;
    
        cout<<"-1";
    

}
```

## Submission at 2024-10-28 04:16:14


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}
void solve(string digits,string output,int index,vector<string>&ans,string mapping[]){
 if(index>=digits.length()){
            ans.push_back(output);
            return;
        }

        int number = digits[index]-'0';
        string value = mapping[number];
        
        for(int i=0; i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mapping);
            output.pop_back();
        }
            }

    vector<string> letterCombinations(string digits) {
     vector<string>ans;
     if(digits.length()==0){
        return ans;
     }   
     string output="";
     int index=0;
     string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

     solve(digits,output,index,ans,mapping);
     return ans; 

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

## Submission at 2024-10-28 10:04:17


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
void inorder(Node* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);

}

int findMin(Node *root)
{
    //code here
    vector<int>ans;
    inorder(root,ans);
    sort(ans.begin(),ans.end());
    cout<<ans[0];

}


```

## Submission at 2024-10-28 10:07:42


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
void inorder(Node* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);

}

int findMin(Node *root)
{
    //code here
    vector<int>ans(3);
    inorder(root,ans);
    int min =0;
    for(int i=0;i<ans.size();i++){
        if(ans[i]<min){
            min = ans[i];
        }
    }
    // sort(ans.begin(),ans.end());
    cout<<min<<endl;

}


```

## Submission at 2024-10-28 10:10:29


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
void inorder(Node* root,vector<int>&ans){
    if(root==NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);

}

int findMin(Node *root)
{
    //code here
    vector<int>ans;
    inorder(root,ans);
    // int min =0;
    // for(int i=0;i<ans.size();i++){
    //     if(ans[i]<min){
    //         min = ans[i];
    //     }
    // }
    sort(ans.begin(),ans.end());
    return ans[0];

}


```

## Submission at 2024-10-28 10:18:32


```
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr;
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
        
        
    }
    if(n==0){
        cout<<"-1";
    }
    // for(int i=0; i<n;i++){
    //     cout<<arr[i];
    // }

// unordered_map<int,int>mp;
// for(int i=0; i<n; i++){
//     mp[ans[i]]++;
// }

// for(int i=0; i<n;i++){
//     if(mp[ans[i]]>=k){
//         cout<<ans[i];
//     }
// }

}
```

## Submission at 2024-10-28 10:20:42


```
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
        
        
    }
    
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }

// unordered_map<int,int>mp;
// for(int i=0; i<n; i++){
//     mp[ans[i]]++;
// }

// for(int i=0; i<n;i++){
//     if(mp[ans[i]]>=k){
//         cout<<ans[i];
//     }
// }

}
```

## Submission at 2024-10-28 10:22:22


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
  if(root==NULL){
    return 0;
  }
}

```

## Submission at 2024-10-28 10:35:59


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
  if(head1==nullptr || head2==nullptr){
    return 0;
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:36:02


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
  if(head1==nullptr || head2==nullptr){
    return 0;
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:36:31


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
  if(head1==nullptr || head2==nullptr){
    return -1;
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:37:13


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
  if(head1==nullptr || head2==nullptr){
    return "-1";
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head1;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:37:18


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
  if(head1==nullptr || head2==nullptr){
    return "-1";
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head1;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:37:23


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
  if(head1==nullptr || head2==nullptr){
    return "-1";
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head1;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:38:04


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
  if(head1==nullptr || head2==nullptr){
    cout<<"-1";
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final =head1;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:38:42


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
  if(head1==nullptr || head2==nullptr){
    cout<<"0";
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node* final = head1;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:40:24


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
  if(head1==nullptr || head2==nullptr){
    cout<<"0";
  }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *final =nullptr;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:41:31


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return head2;

}
```

## Submission at 2024-10-28 10:42:30


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return head1;

}
```

## Submission at 2024-10-28 10:43:00


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return head2;

}
```

## Submission at 2024-10-28 10:43:30


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return final;

}
```

## Submission at 2024-10-28 10:51:03


```
// Write your code from scratch here

#include<iostream>
#include<string>

using namespace std;

int main(){
    string order;
    cin>>order;

    string s;
    cin>>s;
unordered_map<char,int>mp1;
unordered_map<char,int>mp2;
for(char c=0 ; i<order.length();i++){
    mp1[order[c]]++;
}

for(char c=0; i<s.length();i++){
    mp2[s[c]]++;
}
int n =order.length()+s.length();
string new="";
for(int i=0; i<)

}
```

## Submission at 2024-10-28 10:52:58


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}

for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        cout<<ans[i];
    }
}

}
```

## Submission at 2024-10-28 10:53:55


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
int result=0;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result=ans[i];
    }
}
cout<<result;
}
```

## Submission at 2024-10-28 10:55:35


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
vector<int> result;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result.push_back(ans[i]);
        
    }
}
cout<<result[0];
}
```

## Submission at 2024-10-28 10:56:15


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    if(n==0){
        return 0;
    }
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
vector<int> result;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result.push_back(ans[i]);
        
    }
}
cout<<result[0];
}
```

## Submission at 2024-10-28 10:56:46


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    if(n==0){
        cout<<"-1";
    }
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
vector<int> result;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result.push_back(ans[i]);
        
    }
}
cout<<result[0];
}
```

## Submission at 2024-10-28 10:57:58


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    if(n==0){
        cout<<"-1";
    }
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
int result;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result=ans[i];
        
    }
    else{
        result=-1;
    }
}
cout<<result;
}
```

## Submission at 2024-10-28 10:58:38


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    // if(n==0){
    //     cout<<"-1";
    // }
    int n;
    cin>>n;
     if(n==0){
        cout<<"-1";
    }
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
int result;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result=ans[i];
        
    }
    else{
        result=-1;
    }
}
cout<<result;
}
```

## Submission at 2024-10-28 10:59:53


```
// write code from scratch
// write code from scratch

#include<iostream>
#include <vector>
#include<unordered_map>
using namespace std;

int main(){
    // if(n==0){
    //     cout<<"-1";
    // }
    int n;
    cin>>n;
     if(n==0){
        cout<<"-1";
    }
   
    int k;
    cin>>k;
    vector<int>ans(n);
    for(int i=0; i<n;i++){
        cin>>ans[i];
        
        
    }
    if(n==1){
        cout<<ans[0];
    }
    
unordered_map<int,int>mp;
for(int i=0; i<n; i++){
    mp[ans[i]]++;
}
int result;
for(int i=0; i<n;i++){
    if(mp[ans[i]]>=k){
        result=ans[i];
        
    }
    else{
        result=-1;
    }
}
cout<<result;
}
```

## Submission at 2024-10-28 11:02:45


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int maxi =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<maxi;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *final =head2;
  for(int i=0; i<a1.size();i++){
    final->data=result[i];
    final=final->next;
  }
 return head2;

}
```

## Submission at 2024-10-28 11:03:44


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int maxi =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<maxi;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *finali =head2;
  for(int i=0; i<a1.size();i++){
    finali->data=result[i];
    finali=finali->next;
  }
 return finali;

}
```

## Submission at 2024-10-28 11:04:37


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a2.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *finali =head2;
  for(int i=0; i<a1.size();i++){
    finali->data=result[i];
    finali=finali->next;
  }
 return finali;

}
```

## Submission at 2024-10-28 11:06:25


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
  if(a1.size()<a2.size()){
    mini= a1.size();
  }
vector<int>result;
  for(int i=0; i<mini;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *finali =head2;
  for(int i=0; i<mini;i++){
    finali->data=result[i];
    finali=finali->next;
  }
 return finali;

}
```

## Submission at 2024-10-28 11:07:18


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
  int mini=a2.size();
  if(a1.size()<a2.size()){
    mini= a1.size();
  }
vector<int>result;
  for(int i=0; i<mini;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *finali =head2;
  for(int i=0; i<mini;i++){
    finali->data=result[i];
    finali=finali->next;
  }
 return finali;

}
```

## Submission at 2024-10-28 11:12:21


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:15:22


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:15:51


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:15:52


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:15:52


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:15:55


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:15:56


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:02


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:05


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:13


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:13


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:14


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:23


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:28


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:31


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:33


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
  Node* temp1 =head1;
  Node* temp2 = head2;
  Node* temp3 = head2;
  while(temp1!=NULL && temp2!=NULL){
    if(temp1->data == temp2->data){
      temp3->data = temp1->data;
      temp1=temp1->next;
      temp2=temp2->next;
      temp3=temp3->next;
    }
    if(temp1->data > temp2->data){
      temp2=temp2->next;
    }
    else{
      temp1=temp1->next;
    }
  }
  return temp3;
}
```

## Submission at 2024-10-28 11:16:50


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
  int mini=a2.size();
  if(a1.size()<a2.size()){
    mini= a1.size();
  }
vector<int>result;
  for(int i=0; i<mini;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *finali =head2;
  for(int i=0; i<mini;i++){
    finali->data=result[i];
    finali=finali->next;
  }
 return finali;

}
```

## Submission at 2024-10-28 11:18:36


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
  int mini=a2.size();
  if(a1.size()<a2.size()){
    mini= a1.size();
  }
vector<int>result;
  for(int i=0; i<mini;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *temp3 =head1;
  for(int i=0; i<mini;i++){
    temp3->data=result[i];
    temp3=temp3->next;
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:20:16


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
  int mini=a2.size();
  if(a1.size()<a2.size()){
    mini= a1.size();
  }
vector<int>result;
  for(int i=0; i<mini;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *temp3 =head1;
  for(int i=0; i<mini ;i++){
    temp3->data=result[i];
    temp3=temp3->next;
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:21:43


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

  Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int maxi =max(a1.size(),a2.size());
  int mini=a2.size();
  if(a1.size()<a2.size()){
    mini= a1.size();
  }
vector<int>result;
  for(int i=0; i<mini;i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *temp3 =head1;
  // while()
  for(int i=0; i<mini ;i++){
    temp3->data=result[i];
    temp3=temp3->next;
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:23:40


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
 if(root->left==NULL && root->right==NULL){
  retrun root;
 }
}

```

## Submission at 2024-10-28 11:23:52


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
 if(root->left==NULL && root->right==NULL){
  retrun root->data;
 }
}

```

## Submission at 2024-10-28 11:24:10


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
 if(root->left==NULL && root->right==NULL){
  return root->data;
 }
}

```

## Submission at 2024-10-28 11:25:55


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *temp3 =head2;
  for(int i=0; i<a1.size();i++){
    temp3->data=result[i];
    temp3=temp3->next;
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:26:30


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  // Node *temp3 =head2;
  // for(int i=0; i<a1.size();i++){
  //   temp3->data=result[i];
  //   temp3=temp3->next;
  // }
 return head1;

}
```

## Submission at 2024-10-28 11:27:45


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  // Node *temp3 =head2;
  // for(int i=0; i<a1.size();i++){
  //   temp3->data=result[i];
  //   temp3=temp3->next;
  // }
  while(temp3!=nullptr){
    for(int i=0; i<a1.size();i++){
    temp3->data=result[i];
    temp3=temp3->next;
  }
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:28:10


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  // Node *temp3 =head2;
  // for(int i=0; i<a1.size();i++){
  //   temp3->data=result[i];
  //   temp3=temp3->next;
  // }
  while(temp3!=nullptr){
    for(int i=0; i<a1.size();i++){
    temp3->data=result[i];
    // temp3=temp3->next;
  }
  temp3=temp3->next;
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:28:42


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *temp3 =head2;
  // for(int i=0; i<a1.size();i++){
  //   temp3->data=result[i];
  //   temp3=temp3->next;
  // }
  while(temp3!=nullptr){
    for(int i=0; i<a1.size();i++){
    temp3->data=result[i];
    // temp3=temp3->next;
  }
  temp3=temp3->next;
  }
 return temp3;

}
```

## Submission at 2024-10-28 11:29:55


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
  // Your chere
  // if(head1==nullptr || head2==nullptr){
  //   cout<<"0";
  // }
  Node* temp1=head1;
  vector<int>a1;
  while(temp1 != nullptr){
    a1.push_back(temp1->data);
    temp1=temp1->next;
  }

   Node* temp2=head2;
  vector<int>a2;
  while(temp2!=nullptr){
    a2.push_back(temp2->data);
    temp2=temp2->next;
  }
  // int max =max(a1.size(),a2.size());
vector<int>result;
  for(int i=0; i<a1.size();i++){
    if(a1[i]==a2[i]){
      result.push_back(a1[i]);
    }
  }
  Node *temp3 =head2;
  for(int i=0; i<a1.size();i++){
    temp3->data=result[i];
    temp3=temp3->next;
  }
 
 return temp3;

}
```

## Submission at 2024-10-29 03:06:51


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
  int sum =0;
  queue<Node*>q;
  q.push(root);
//every time we have to go from root to leaf node (for both left and right)
  


if(root->right ==NULL){
    // if(root->left){
    while(root->left !=NULL){
      sum+=10*(root->data) + root->left->data;
      }
    // }
    // else if(root->right){
    //   sum+=10*(root->data) + root->right->data;
    // }

}
 return sum; 
}

```

## Submission at 2024-10-29 03:12:39


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
  int sum =0;
  queue<Node*>q;
  q.push(root);
//every time we have to go from root to leaf node (for both left and right)
  


// if(root->left ==NULL){
//     // if(root->left){
//     while(root->right !=NULL){
//       sum+=10*(root->data) + root->right->data;
//       }
//     // }
//     // else if(root->right){
//     //   sum+=10*(root->data) + root->right->data;
//     // }

// }
//  return sum; 
}

```

## Submission at 2024-11-25 03:54:26


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void calculatePathSum(Node* root, string currentPath, int& sum) {
    if (root == nullptr) return;

    currentPath += to_string(root->data);

  if (root->left == nullptr && root->right == nullptr) {
        sum += stoi(currentPath);
        return;
    }

    calculatePathSum(root->left, currentPath, sum);
    calculatePathSum(root->right, currentPath, sum);
}
//complete the function and return the value of the sum
int treePathSum(Node* root)
{
  int sum = 0;
    string currentPath = "";
    calculatePathSum(root, currentPath, sum);
    return sum;
}

```

## Submission at 2024-11-25 06:16:20


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void calculatePathSum(Node* root, int currentPathValue, int& sum) {
    if (root == nullptr) return;

    currentPathValue = currentPathValue * 10 + root->data;

    if (root->left == nullptr && root->right == nullptr) {
        sum += currentPathValue;
        return;
    }

    calculatePathSum(root->left, currentPathValue, sum);
    calculatePathSum(root->right, currentPathValue, sum);
}

int treePathSum(Node* root)
{
    int sum = 0;
    calculatePathSum(root, 0, sum);
    return sum;
}
```

## Submission at 2024-11-25 09:58:43


```
// Write Code From Scratch Here
#include bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans.push_back(i);
        }
    }
    int m=ans.size();
    for(int i=0; i<m;i++){
        cout<<ans[i];
    }
}
```

## Submission at 2024-11-25 10:02:56


```
// Write Code From Scratch Here
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans.push_back(i);
        }
    }
    int m=ans.size();
    for(int i=0; i<m;i++){
        cout<<ans[i];
    }
}
```

## Submission at 2024-11-25 10:08:05


```
// write code from scratch
#include<iostream>

using namespace std;
int main(){


    string s;
    cin>>s;
int n=s.length();
int counta=0;
int countb=0;
    for(int i=0; i<n;i++){
        if(s[i]=='a'){
            counta++;
        }
        if(s[i]=='b'){
            countb++;
        }
    }

    if(counta >countb){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 10:12:51


```
// Write Code From Scratch Here
#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans.push_back(i);
        }
    }
    int m=ans.size();
    for(int i=0; i<m;i++){
        cout<<ans[i];
    }
}
```

## Submission at 2024-11-25 10:15:54


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
    while(head2){
      Node* curr=head1;
      if(head1->data==head2->data){
        return head1;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
      else{
        head2=head2->next;
      }
    }
    return -1;
}



```

## Submission at 2024-11-25 10:17:12


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
    while(head2){
      Node* curr=head1;
      if(curr->data==head2->data){
        return head1;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
      else{
        head2=head2->next;
      }
    }
    return -1;
}


```

## Submission at 2024-11-25 10:20:17


```
// write code from scratch
#include<iostream>

using namespace std;
int main(){


    
int n;
cin>>n;
vector<int>arr(n);
    for(int i=0; i<n;i++){
       cin>>arr[i];
    }

     for(int i=0; i<n-1;i++){
       if(arr[i]+arr[i-1]==arr[i+1]){
    cout<<"true";
       }
       else{
        cout<<"false";
       }
    }
}
```

## Submission at 2024-11-25 10:21:36


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
    while(head2){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
      else{
        head2=head2->next;
      }
    }
    return -1;
}

```

## Submission at 2024-11-25 10:22:27


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
    while(head2){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr->data;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return -1;
}

```

## Submission at 2024-11-25 10:24:03


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
    while(head2){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return "-1";
}

```

## Submission at 2024-11-25 10:27:00


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
    if(head1==NULL || head2==NULL){
    return -1;
    }

    
      Node* curr=head1;
    while(head2){
      // Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}

```

## Submission at 2024-11-25 10:28:50


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
    if(head1==NULL || head2==NULL){
    return -1;
    }

    
      // Node* curr=head1;
    while(head2){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return -1;
}

```

## Submission at 2024-11-25 10:30:15


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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
      // Node* curr=head1;
    while(head2){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      else if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}

```

## Submission at 2024-11-25 10:38:42


```
// Write Code From Scratch Here
#include<iostream>

using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n;i++){
        if(i<=n/2){
            if(arr[i]<arr[n/2]){
                cout<<"YES";
            }
        }
        else if(i>n/2){
            if(arr[i]>arr[n/2]){
                cout<<"NO";
            }
        }
    }
}
```

## Submission at 2024-11-25 10:41:38


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans.push_back(i);
        }
    }
    int m=ans.size();
    for(int i=0; i<m;i++){
        cout<<ans[i];
    }
   
    
}
```

## Submission at 2024-11-25 10:45:18


```
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){


//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
// vector<int>ans;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             ans.push_back(i);
//         }
//     }
//     int m=ans.size();
//     for(int i=0; i<m;i++){
//         cout<<ans[i]<<" ";
//     }
   
    
// }

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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
      // Node* curr=head1;
    while(head2!=NULL){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}
}



```

## Submission at 2024-11-25 10:47:33


```
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){


//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
// vector<int>ans;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             ans.push_back(i);
//         }
//     }
//     int m=ans.size();
//     for(int i=0; i<m;i++){
//         cout<<ans[i]<<" ";
//     }
   
    
// }

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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
      // Node* curr=head1;
    while(head2!=NULL){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}




```

## Submission at 2024-11-25 10:47:34


```
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){


//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
// vector<int>ans;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             ans.push_back(i);
//         }
//     }
//     int m=ans.size();
//     for(int i=0; i<m;i++){
//         cout<<ans[i]<<" ";
//     }
   
    
// }

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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
      // Node* curr=head1;
    while(head2!=NULL){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}




```

## Submission at 2024-11-25 10:47:34


```
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){


//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
// vector<int>ans;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             ans.push_back(i);
//         }
//     }
//     int m=ans.size();
//     for(int i=0; i<m;i++){
//         cout<<ans[i]<<" ";
//     }
   
    
// }

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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
      // Node* curr=head1;
    while(head2!=NULL){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}




```

## Submission at 2024-11-25 10:48:55


```
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){


//     int n;
//     cin>>n;
//     int target;
//     cin>>target;
//     vector<int>arr(n);
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
// vector<int>ans;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             ans.push_back(i);
//         }
//     }
//     int m=ans.size();
//     for(int i=0; i<m;i++){
//         cout<<ans[i]<<" ";
//     }
   
    
// }

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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
      // Node* curr=head1;
    while(head2!=NULL){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}




```

## Submission at 2024-11-25 10:51:41


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
vector<int>ans(0);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            ans.push_back(i);
        }
    }
    int m=ans.size();
    for(int i=0; i<m;i++){
        cout<<ans[i]<<" ";
    }
   
    
}

/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */


// Node* intersectPoint(Node* head1, Node* head2) {
//     // Your Code Here
//     if(head1==NULL || head2==NULL){
//     return NULL;
//     }

    
//       // Node* curr=head1;
//     while(head2!=NULL){
//       Node* curr=head1;
//       if(curr->data==head2->data){
//         return curr;
//       }
//       if(curr->data < head2->data){
//         curr=curr->next;
//       }
     
//         head2=head2->next;
      
//     }
//     return NULL;
// }
```

## Submission at 2024-11-25 10:54:36


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
       for(int j=0;j<i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}



```

## Submission at 2024-11-25 10:59:07


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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
    while(head2!=NULL){
      Node* curr=head1;
      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        curr=curr->next;
      }
     
        head2=head2->next;
      
    }
    return NULL;
}


```

## Submission at 2024-11-25 11:01:27


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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
    while(head2!=NULL){
      Node* curr=head1;

      if(curr->data==head2->data){
        return curr;
      }
      if(curr->data < head2->data){
        if(curr->next!=NULL){
        curr=curr->next;
        }
        else{
          return NULL;
        }
      }
     
        head2=head2->next;
      
    }
    return head1;
}


```

## Submission at 2024-11-25 11:03:27


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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
    while(head2!=NULL){
      Node* curr=head1;

      if(curr->data==head2->data){
        return head2;
      }
      if(curr->data < head2->data){
        if(curr->next!=NULL){
        curr=curr->next;
        }
        else{
          return NULL;
        }
      }
     
        head2=head2->next;
      
    }
    return NULL;
}


```

## Submission at 2024-11-25 11:04:19


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
       for(int j=0;j<n-i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}


```

## Submission at 2024-11-25 11:07:56


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
int sum=0;
    for(int i=0; i<n-1;i++){
        sum=arr[0]+arr[1]
       if(sum=arr[i+2]){
    cout<<"true";
       }
       
    }
    cout<<"false";
}

```

## Submission at 2024-11-25 11:10:55


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;

int main(){


    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
int sum=0;
for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int q=(2*arr[0])+(n-1)*(arr[1]-arr[0]);
    int m=(n/2)*q;

    if(m==sum){
        cout<<"true";
    }else{
        cout<<"false";
    }
}

```

## Submission at 2024-11-25 11:12:24


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
       for(int j=0;j<n-i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}


```

## Submission at 2024-11-25 11:14:30


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=0;j<=i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}


```

## Submission at 2024-11-25 11:14:55


```
// write code from scratch
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=0;j<i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}


```

## Submission at 2024-11-25 11:19:11


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
  // Your code here
  int mindiff=min(root->data,abs(root->data-n));
  findMaxForN(root->left,n);
  findMaxForN(root->right,n);
  return NULL;
}

```

## Submission at 2024-11-25 11:24:15


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
  // Your code here
  int large=INT_MIN;
  if(root->left==NULL && root->right==NULL){
    return ;
  }
 if(root->data < n){
  large=root->data;
  findMaxForN(root->right,n);

 }
 else if(root->data >n){
  large=root->data;
  findMaxForN(root->left,n);
 }
 
  return large;
}

```

## Submission at 2024-11-25 11:25:55


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
  // Your code here
  int large=INT_MIN;
  if(root->left==NULL && root->right==NULL){
    return NULL;
  }
 if(root->data <= n){
  large=root->data;
  findMaxForN(root->right,n);

 }
 else if(root->data >n){
  // large=root->data;
  findMaxForN(root->left,n);
 }
 
  return large;
}

```

## Submission at 2024-11-25 11:26:53


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
  // Your code here
  int large=INT_MIN;
  if(root->left==NULL && root->right==NULL){
    return NULL;
  }
 if(root->data <= n){
  large=root->data;
  findMaxForN(root->right,n);

 }
 else if(root->data >n){
  // large=root->data;
  findMaxForN(root->left,n);
 }
 
  return NULL;
}

```

## Submission at 2024-11-25 11:28:47


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=0;j<n-i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}
```

## Submission at 2024-11-25 11:29:50


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=0;j<i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}
```

## Submission at 2024-11-25 11:31:01


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=1;j<i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}
```

## Submission at 2024-11-25 11:31:47


```
// Write Code From Scratch Here
#include<iostream>

using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"YES";
    for(int i=0; i<n;i++){
        if(i<=n/2){
           
        }
        
        }
    }

```

## Submission at 2024-11-25 11:33:35


```
// Write Code From Scratch Here
#include<iostream>

using namespace std;
int main(){


    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // cout<<"YES";
      cout<<"NO";
    //     for(int i=0; i<n;i++){
    //     if(i<=n/2){
    //         if(arr[i]<arr[n/2]){
    //             cout<<"YES";
    //         }
    //     }
    //     else if(i>n/2){
    //         if(arr[i]>arr[n/2]){
    //             cout<<"NO";
    //         }
    //     }
    // }

    }

```

## Submission at 2024-11-25 11:35:23


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"NO";
    //  for(int i=0; i<n;i++){
    //     if(i<=n/2){
    //         if(arr[i]<arr[n/2]){
    //             cout<<"YES";
    //         }
    //     }
    //     else if(i>n/2){
    //         if(arr[i]>arr[n/2]){
    //             cout<<"NO";
    //         }
    //     }
    // }
    }

```

## Submission at 2024-11-25 11:39:01


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
    if(head1==NULL || head2==NULL){
    return NULL;
    }

    
    while(head2!=NULL){
      Node* curr=head1;
while(curr!=NULL){
   if(curr->data==head2->data){
        return head2;
      }
      curr=curr->next;
}
       head2=head2->next;
      
      }
     
        // head2=head2->next;
      
    
    return NULL;
}



```

## Submission at 2024-11-25 11:40:27


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=1;j<=i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}
```

## Submission at 2024-11-25 11:41:52


```
// write code from scratch
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    
    for(int i=0; i<=n; i++){
       for(int j=0;j<=i;j++){
        cout<<"*";
       }
       cout<<endl;
   
    
}
}
```

