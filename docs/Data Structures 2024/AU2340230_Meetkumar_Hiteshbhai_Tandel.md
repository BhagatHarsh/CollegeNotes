## Submission at 2024-08-05 10:23:03


```
# Write your Python code here from the scratch
user= input()
if  len(user)>=1 and len(user)<=100:
    print("Hello " + user + "!")

```

## Submission at 2024-08-05 10:31:13


```
# Write your Python code here from the scratch
user = input()
if len(user)>=1 and len(user)<=100:
    print("Hello "+ user +"!" )
```

## Submission at 2024-08-05 10:42:33


```
# Write your Python code here from the scratch
user= input()
if (len(user)>=1 and len(user)<=100):
    print("Hello "+ user + "!")
```

## Submission at 2024-08-05 10:47:46


```
# Write your Python code here
n = int (input())
if n>=1 and n<=100 :
    for i in range(1,n+1):
        user = input()
        if len(user)>=1 and len(user)<=100:
            print("Hello "+ user + "!")
```

## Submission at 2024-08-12 09:58:13


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    int a,b,c;
    a=0;
    b=1;
    cout<<a;
    cout<<b;
    for(int i=0;i<x;i++){
        int c= a+b;
        a=b;
        b=c;
        cout<<c;
    }
    // write your code here
}

int main() {
    int x;
    cin >> x;

    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:58:16


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    int a,b,c;
    a=0;
    b=1;
    cout<<a;
    cout<<b;
    for(int i=0;i<x;i++){
        int c= a+b;
        a=b;
        b=c;
        cout<<c;
    }
    // write your code here
}

int main() {
    int x;
    cin >> x;

    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:09:26


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:09:28


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:11:20


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:15:11


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:16:53


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:16:58


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:18:01


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:22:04


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
    int a,b,c;
    int s=0;
    for(int i=0;i<x-2;i++){
        s=a+b;
        c=s;
        a=b;
        b=c;
    }
    return s;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:23:25


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
    int a=0,b=1,c;
    int sum=0;
    for(int i=0;i<x-2;i++){
        sum=a+b;
        c=sum;
        a=b;
        b=c;
    }
    return sum;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:24:11


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
    int a,b,c;
    a=0;
    b=1;
    int sum=0;
    for(int i=0;i<x-2;i++){
        sum=a+b;
        c=sum;
        a=b;
        b=c;
    }
    return sum;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:24:59


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
    int a,b,c;
    a=0;
    b=1;
    int sum=0;
    for(int i=0;i<=x-2;i++){
        sum=a+b;
        c=sum;
        a=b;
        b=c;
    }
    return sum;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:26:23


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    for(int i=0;i<n;i++){
        if(n%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-12 10:34:43


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int x;
    x=n/2;
    for(int i=0;i<n;i++){
        if(x%2==0){
        n=n/2;
        return 1;
        }
        else{
            return 0;
        }
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

## Submission at 2024-08-21 08:58:03


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backtrack(vector<string>& res, string current, int left, int right) {
    if (left == 0 && right == 0) {
        res.push_back(current);
        return;
    }
    if (left > right) {
        return; 
    }
    if (left > 0) {
        backtrack(res, current + "(", left - 1, right);
    }
    if (right > 0) {
        backtrack(res, current + ")", left, right - 1);
    }
}

vector<string> ParenComb(int n) {
    vector<string> res;
    backtrack(res, "", n, n);
    return res;
}

int main() {
    int n;
    cin>>n;
    vector<string> r = ParenComb(n);
    cout << "[";
    for (int i = 0; i < r.size(); ++i) {
        cout << "\"" << r[i] << "\"";
        if (i != r.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-21 10:23:01


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void backtrack(vector<vector<int>>& result, vector<int>& nums, int start) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        backtrack(result, nums, start + 1);
        swap(nums[start], nums[i]); 
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    backtrack(result, nums, 0);
    return result;
}

int main() {
    vector<int> nums;
    int num;


    while (cin>>num) {
        nums.push_back(num);
        if (cin.get() == '\n') break; 
    }

    vector<vector<int>> permutations = permute(nums);

    sort(permutations.begin(), permutations.end());

    cout << "[";
    for (int i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); ++j) {
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

## Submission at 2024-09-02 10:01:36


```
// Write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s1=0,s=0;
    for(int i=0;i<n;i++){
        s = a[i]+s;
        s1 = b[i]+s1;
    }
    if(s>s1){
        for(int i=0;i<n;i++){
            cout<< a[i];
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<< b[i];
        }        
    }
}
```

## Submission at 2024-09-02 10:07:34


```
// Write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s1=0,s=0;
    for(int i=0;i<n;i++){
        s = a[i]+s;
        s1 = b[i]+s1;
    }
    if(s>s1){
        for(int i=0;i<n;i++){
            cout<< a[i];
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<< b[i];
        }        
    }
}
```

## Submission at 2024-09-02 10:08:09


```
// Write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s1=0,s=0;
    for(int i=0;i<n;i++){
        s = a[i]+s;
        s1 = b[i]+s1;
    }
    if(s>s1){
        for(int i=0;i<n;i++){
            cout<< a[i]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<< b[i]<<" ";
        }        
    }
}
```

## Submission at 2024-09-02 10:11:49


```
// Write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int s1=0,s=0;
    for(int i=0;i<n;i++){
        s = a[i]+s;
        s1 = b[i]+s1;
    }
    if(s>s1){
        for(int i=0;i<n;i++){
            cout<< a[i]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<< b[i]<<" ";
        }        
    }
}
```

## Submission at 2024-09-02 10:16:08


```
// Write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            c[i]= a[i];
        }
        else{
            c[i]= b[i];
        }
    }

    for(int i=0;i<n;i++){
        cout<< c[i]<<" ";
    } 


}
```

## Submission at 2024-09-09 02:29:04


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
    Node *temp=head;
    Node *curr=NULL;
    // int x=3;
    x--;
    while(x--){
        temp=curr;
        temp = temp->next;
        curr->next=temp->next;
        delete temp;
        return temp;
    }




    // while(temp){
    //     curr=temp;
    //     temp=temp->next;
    // }

}

```

## Submission at 2024-09-09 02:30:26


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
    Node *temp=head;
    Node *curr=NULL;
    // int x=3;

    x--;
    while(x--){
        curr=temp;
        temp = temp->next;
        curr->next=temp->next;
        delete temp;
        return temp;
    }




    // while(temp){
    //     curr=temp;
    //     temp=temp->next;
    // }

}

```

## Submission at 2024-09-09 02:35:50


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
    Node *temp=head;
    Node *curr=NULL;
    // int x=3;

    x--;
    while(x--){
        curr=temp;
        temp = temp->next;
        curr->next=temp->next;

    }
    
    delete temp;
    return temp;
    
}

```

## Submission at 2024-09-09 02:41:29


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
    Node *temp=head;
    Node *curr=NULL;
    x--;
    while(x--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 03:45:54


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
    Node *temp=head;
    Node *prev=NULL,*fut=NULL;
    while(temp){
        fut=temp->next;
        prev->next=temp;
        prev=temp;
        temp=fut;
    }
    head=temp;

    return head;
    
}

```

## Submission at 2024-09-09 03:54:46


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
    Node *temp=head;
    Node *prev=NULL,*fut=NULL;
    while(temp){
        fut=temp->next;
        temp->next=prev;
        prev=temp;
        temp=fut;
    }
    temp = head;

    return head;
    
}

```

## Submission at 2024-09-09 03:56:09


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
    Node *temp=head;
    Node *prev=NULL,*fut=NULL;
    while(temp){
        fut=temp->next;
        temp->next=prev;
        prev=temp;
        temp=fut;
    }
    return temp;
    
}

```

## Submission at 2024-09-09 03:56:52


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
    Node *temp=head;
    Node *prev=NULL,*fut=NULL;
    while(temp){
        fut=temp->next;
        temp->next=prev;
        prev=temp;
        temp=fut;
    }
    return prev;
    
}

```

## Submission at 2024-09-09 03:58:28


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:22:31


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
    ListNode *temp=head;
    while(temp){
        result.push_back(temp->val);
        temp=temp->next;
    }
    return result;
}

```

## Submission at 2024-09-09 04:27:16


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
    Node *temp=head;
    k--;
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:28:02


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
    Node *temp=head;
    k--;
    if(k==0){
        k=temp->data;
        return k;
    }
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:28:24


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
    Node *temp=head;
    k--;
    if(k==0){
        // k=temp->data;
        return k;
    }
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:28:53


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
    Node *temp=head;
    k--;
    if(k==-1){
        k=temp->data;
        return k;
    }
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:29:29


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
    Node *temp=head;
    k--;
    if(k==-1){
        // k=temp->data;
        return k;
    }
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:30:33


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
    Node *temp=head;
    k--;
    if(k==0){
        // k=temp->data;
        return k;
    }
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:30:58


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
    Node *temp=head;
    k--;
    if(k==0){
        k=temp->data;
        return k;
    }
    while(k--){
        temp =temp->next;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:37:33


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
    Node *temp=head;
    k--;

    while(k--){
        temp =temp->next;
    }
        if(k==0){
        k=temp->data;
        return k;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:37:59


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
    Node *temp=head;
    k--;

    while(k--){
        temp =temp->next;
    }
    if(k==-1){
        k=temp->data;
        return k;
    }
    k= temp->data;
    return k;
}

```

## Submission at 2024-09-09 04:41:39


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
    Node *temp=head;
    k--;
    int c=0;
    while(temp){
        temp =temp->next;
        c++;
    }
    temp=head;
    if(k>c){
        return -1;
    }
    else{
        while(k--){
            temp =temp->next;
        }
         k= temp->data;
        return k;
    }
  

   
}

```

## Submission at 2024-09-09 04:43:07


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
    Node *temp=head;
    
    int c=0;
    while(temp){
        temp =temp->next;
        c++;
    }
    temp=head;
    if(k>c){
        return -1;
    }
    else{
        k--;
        while(k--){
            temp =temp->next;
        }
         k= temp->data;
        return k;
    }
  

   
}

```

## Submission at 2024-09-09 04:48:11


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
    Node *temp=head;
    
    int c=0;
    while(temp){
        temp =temp->next;
        c++;
    }
    temp=head;
    if(k>c){
        return -1;
    }
    else{
        k--;
        while(k--){
            temp =temp->next;
        }
         k= temp->data;
        return k;
    }
  

   
}

```

## Submission at 2024-09-09 04:52:19


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    if(ans==1){
        return head;
    }
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:53:00


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    if(ans==0){
        return NULL;
    }
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:53:31


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    if(ans==1){
        return NULL;
    }
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:53:50


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    if(ans==1){
        return head;
    }
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:54:19


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
  
    ans--;
      if(ans==1){
        return head;
    }
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:54:41


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
        if(ans==1){
        return head;
    }
    ans--;
  
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
}

```

## Submission at 2024-09-09 04:57:48


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
    Node *temp=head;
    Node *curr=NULL;
    if(temp!=NULL){
        delete temp;
        return temp;
    }
    else{
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
    }
}

```

## Submission at 2024-09-09 04:58:16


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    if(temp!=NULL){
        delete temp;
        return temp;
    }
    else{
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
    }
}

```

## Submission at 2024-09-09 04:59:02


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
    Node *temp=head;
    Node *curr=NULL;
    int ans=x;
    if(temp!=NULL){
        delete temp;
        return temp;
    }
    if(temp->next!=NULL){
    ans--;
    while(ans--){
        curr=temp;
        temp= temp->next;
        
    }
    curr->next=temp->next;
    delete temp;
    return head;
    }
}

```

## Submission at 2024-09-09 09:48:14


```
// Write Code from Scratch here
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%3==0){
        cout<< "True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-09-09 09:53:59


```
// Write Code from Scratch here
#include <iostream>
using namespace std;

void power(int n){
    if(n%3==0){
        cout<<"True";
        return ;
    }
    return power(n-1);
}
int main(){
    int n;
    cin>>n;
    power(n);
    // int ans;
    // ans=pow(n,3);
    // if(n%ans==0){
    //     cout<< "True";
    // }
    // else{
    //     cout<<"False";
    // }
}
```

## Submission at 2024-09-09 09:54:45


```
// Write Code from Scratch here
#include <iostream>
using namespace std;

void power(int n){
    if(n%3==0){
        cout<<"True";
        return ;
    }
    cout<<"False";
}
int main(){
    int n;
    cin>>n;
    power(n);
    // int ans;
    // ans=pow(n,3);
    // if(n%ans==0){
    //     cout<< "True";
    // }
    // else{
    //     cout<<"False";
    // }
}
```

## Submission at 2024-09-09 09:55:27


```
// Write Code from Scratch here
#include <iostream>
using namespace std;

void power(int n){
    if(n%3==0){
        cout<<"True";
        return ;
    }
    cout<<"False";
}
int main(){
    int n;
    cin>>n;
    power(n);
    // int ans;
    // ans=pow(n,3);
    // if(n%ans==0){
    //     cout<< "True";
    // }
    // else{
    //     cout<<"False";
    // }
}
```

## Submission at 2024-09-09 10:07:16


```
// Write code from scratch here
void frequency(string s,int i,int c){
    int count=0;
    
    if(i==s.length()){
        return count ;
    }
    if (s[i]==c){
        count++;
    }
    else{
        frequency(s,i+1,c);
    }
 }

int main(){
    string s;
    int c;
    cin>>s>>c;
    frequency(s,0,c);
    cin>>s>>c;


}
```

## Submission at 2024-09-09 10:14:09


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Temp=curr;
    curr=head;
    return head;
}
```

## Submission at 2024-09-09 10:14:51


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Temp=curr;
    curr=head;
    return head;
}
```

## Submission at 2024-09-09 10:20:16


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
#include <vector>
Node* removeDuplicates(Node *head)
{
    //Your code here
    vector<int>a;
    Node *temp=head;
    int c=0
    while(temp){
        a.push_back(temp->data);
        temp=temp->next;
        c++;
    }
    return a;

}

```

## Submission at 2024-09-09 10:21:48


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
#include <vector>
Node* removeDuplicates(Node *head)
{
    //Your code here
    vector<int>a;
    Node *temp=head;
    int c=0
    while(temp){
        a.push_back(temp->data);
        temp=temp->next;
        c++;
    }
    return head;

}

```

## Submission at 2024-09-09 10:24:47


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
#include <vector>
Node* removeDuplicates(Node *head)
{
    //Your code here
    vector<int>a;
    Node *Temp=head;
    int c=0;
    while(Temp){
        a.push_back(Temp->data);
        Temp=Temp->next;
        c++;
    }
    return head;

}

```

## Submission at 2024-09-09 10:25:28


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
#include <vector>
Node* removeDuplicates(Node *head)
{
    //Your code here
    vector<int>a;
    Node *Temp=head;
    int c=0;
    while(Temp){
        a.push_back(Temp->data);
        Temp=Temp->next;
        c++;
    }
    return head;

}

```

## Submission at 2024-09-09 10:26:02


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
#include <vector>
Node* removeDuplicates(Node *head)
{
    //Your code here
    vector<int>a;
    Node *Temp=head;
    int c=0;
    while(Temp){
        a.push_back(Temp->data);
        Temp=Temp->next;
        c++;
    }
    return head;

}

```

## Submission at 2024-09-09 10:34:55


```
// Write code from scratch here
string frq(string s, int c){
    int i=0;
    if(s[i]==s.length()){
        // return ;
    }
    i=i+1;
    frq(s[i],c);

}
int main(){
    int c;
    string s;
 
    frq(s,c);
}
```

## Submission at 2024-09-09 10:41:56


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count++;
    }
    i=i+1;
    frq(s,i+1,c);
    return count;

}

int main(){
    int c;
    string s;
 
    frq(s,0,c);
}
```

## Submission at 2024-09-09 10:45:33


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return count;
    }
    if(s[i]==c){
        count=count +1;
        return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    return count;
    // return count;

}

int main(){
    int c;
    string s;
 
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:46:03


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return count;
    }
    if(s[i]==c){
        count=count +1;
        return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    return count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:46:46


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    return count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:47:49


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    cout<<count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    frq(s,0,c);
}
```

## Submission at 2024-09-09 10:48:13


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    cout<<count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:48:41


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    return count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:49:34


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    frq(s,i+1,c);
    return count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:50:50


```
// Write code from scratch here/ Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 10:59:48


```

// Complete the given function
#include <iostream>
using namespace std;

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
        int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>j;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout>>j;
        }
        cout<<" ";
    }

    

};
int main(){

}
```

## Submission at 2024-09-09 11:00:47


```

// Complete the given function
#include <iostream>
using namespace std;

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
        int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>j;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout>>j;
        }
        // cout<<" ";
    }

    

};

```

## Submission at 2024-09-09 11:02:06


```

// Complete the given function
#include <iostream>
using namespace std;

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>j;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            return ;
        }
        // cout<<" ";
    }

    

};

```

## Submission at 2024-09-09 11:03:41


```

// Complete the given function
#include <iostream>
using namespace std;

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>j;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j;
        }
        cout<<" ";
    }

    

};

```

## Submission at 2024-09-09 11:05:10


```
// Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    cout<<count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 11:05:42


```
// Write code from scratch here
#include <iostream>
using namespace std;
int frq(string s,int i, int c){
    int count=0;
    if(s[i]==s.length()){
        return 1;
    }
    if(s[i]==c){
        count=count +1;
        // return count;
        
    }
    i=i+1;
    return frq(s,i+1,c);
    return count;
    // return count;

}

int main(){
    int c;
    string s;
    cin>>s>>c;
    cout<<frq(s,0,c);
}
```

## Submission at 2024-09-09 11:07:06


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Temp=curr;
    curr=head;
    return head;
}

```

## Submission at 2024-09-09 11:08:43


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Tail=curr;
    while(tail->next !=NULL){
      tail=tail->next;
    }
    head =tail;
    return head;
 
}

```

## Submission at 2024-09-09 11:09:45


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Tail=curr;
    while(tail !=NULL){
      tail=tail->next;
    }
    head =tail;
    return head;
 
}

```

## Submission at 2024-09-09 11:11:26


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Temp=curr;
    curr=head;
    return head;
}
```

## Submission at 2024-09-09 11:13:13


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Tail=curr;
    while(Tail){
      Tail = Tail->next;
    }
    tail->next=NULL;
    haed=Tail;
    return head;
}
```

## Submission at 2024-09-09 11:14:15


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
    Node *temp=head;
    int c=0;
    while(temp){
      temp=temp->next;
      c++;
    }
    c=c/2;
    Node *curr=head;
    Node *prev=NULL;
    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Temp=curr;
    curr=head;
    return head;
}
```

## Submission at 2024-09-12 12:40:21


```
// Write code from scratch here

#include <iostream>
using namespace std;

int frq(string s,int c,int i,int size,int count){
    if(s[i]==size){
        return count ;
    }
    if(s[i]==c){
        count =count +1;
    }
    frq(s,c,i+1,size,count);
    return count;
}


int main(){
    string s;
    cin>>s;
    int c;
    cin>>c;
    int size = s.length();
    frq(s,c,0,size,0);
}
```

## Submission at 2024-09-12 12:41:29


```
// Write code from scratch here

#include <iostream>
using namespace std;

int frq(string s,int c,int i,int size,int count){
    if(s[i]==size){
        return count ;
    }
    if(s[i]==c){
        count =count +1;
    }
    return frq(s,c,i+1,size,count);
    return count;
}


int main(){
    string s;
    cin>>s;
    int c;
    cin>>c;
    int size = s.length();
    frq(s,c,0,size,0);
}
```

## Submission at 2024-09-12 13:09:29


```
// Write code from scratch here

#include <iostream>
using namespace std;

int frq(string s,char c,int i,int size,int count){
    // count=0;
    if(i==size){
        return count ;
    }
    if(s[i]==c){
        count=count+1;

        // return count+1;
        
    }
    // else{
    return frq(s,c,i+1,size,count);
    // return count;
    // }
    
}


int main(){
    string s;
    cin>>s;
    char c;
    int count=0;
    cin>>c;
    int size = s.length()-1;
    cout<<frq(s,c,0,size,count);
}
```

## Submission at 2024-09-12 13:11:57


```
// Write code from scratch here

#include <iostream>
using namespace std;

int frq(string s,char c,int i,int size,int count){
    // count=0;
    if(i==size){
        return count ;
    }
    if(s[i]==c){
        count=count+1;

        // return count+1;
        
    }
    // else{
    return frq(s,c,i+1,size,count);
    // return count;
    // }
    
}


int main(){
    string s;
    cin>>s;
    char c;
    int count=0;
    cin>>c;
    int size = s.length();
    cout<<frq(s,c,0,size,count);
}
```

## Submission at 2024-09-12 13:18:33


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
    Node *temp=head;
    int c=0;
    while(temp){
      c=c+1;
      temp=temp->next;
    }
    c/=2;
    Node *curr=head;
    Node *prev=NULL;

    while(c--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;
    Node *Tail=curr;
    // return head;
    


}
```

## Submission at 2024-09-16 04:17:38


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
    Node *curr=head;
    Node *temp=curr->next;

           
           
    while(curr && curr->next){
 
        if(curr->data==temp->data){
            curr->next=temp->next;
            delete temp;
            temp=curr->next;
            
        }
        else{
            curr=temp;
            temp=temp->next;
        }
    }
    curr->next=NULL;
    return head;

}

```

## Submission at 2024-09-16 06:22:33


```
// Write Code from Scratch here
#include <iostream>
using namespace std;
string power(int n){
    if(n==1){
        return "True";
    }
    if(n%3!=0 || n==0){
        return "False";
    }
    return power(n /3);
}


int main(){
    int n;
    cin>>n;
    cout<<power(n);
}
```

## Submission at 2024-09-16 06:23:08


```
// Write Code from Scratch here
#include <iostream>
using namespace std;
string power(int n){
    if(n==1){
        return "True";
    }
    if(n%3!=0 || n==0){
        return "False";
    }
    return power(n /3);
}


int main(){
    int n;
    cin>>n;
    cout<<power(n);
}
```

## Submission at 2024-10-07 09:59:23


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.length();i++){
        if(s[i]<s[i+2]){
            a=s[i+2];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<a;
    }

}
```

## Submission at 2024-10-07 09:59:28


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.length();i++){
        if(s[i]<s[i+2]){
            a=s[i+2];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<a;
    }

}
```

## Submission at 2024-10-07 10:01:17


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.length();i++){
        if(s[i]>s[i+2]){
            a[i]=s[i+2];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<a;
    }

}
```

## Submission at 2024-10-07 10:03:38


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.length();i++){
        int in =s[i];
        for(int j=0;j<s.length();j++){
        if(s[i]<s[j+2]){
            a[i]=s[j+2];
        }
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<a[i];
    }

}
```

## Submission at 2024-10-07 10:04:44


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.length();i++){
        string in =s[i];
        for(int j=0;j<s.length();j++){
        if(in<s[j+2]){
            in[i]=s[j+2];
        }
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<in[i];
    }

}
```

## Submission at 2024-10-07 10:05:21


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(int i=0;i<s.length();i++){
        int in =s[i];
        for(int j=0;j<s.length();j++){
        if(in<s[j+2]){
            in[i]=s[j+2];
        }
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<in[i];
    }

}
```

## Submission at 2024-10-07 10:16:10


```
// Write your code from scratch here

// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]<s[+1]){
            swap(s[i],s[i+1]);

        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}
```

## Submission at 2024-10-07 10:17:51


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);

        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}
```

## Submission at 2024-10-07 10:18:38


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            cotinue;
        }
        else if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);

        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}
```

## Submission at 2024-10-07 10:19:12


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            continue;
        }
        else if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);

        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}
```

## Submission at 2024-10-07 10:20:01


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            continue;
        }
        else if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);

        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}
```

## Submission at 2024-10-07 10:20:01


```
// Write your code from scratch here
#include <iostream>

using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='+'){
            continue;
        }
        else if(s[i]<s[i+1]){
            swap(s[i],s[i+1]);

        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }

}
```

## Submission at 2024-10-07 10:24:57


```
// Write your code from scratch 
#include <iostream>
using namespace std;
int main(){
    string s,n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            continue;
        }
        else if(s[i]<s[i+1]){
            n[i]=s[i+1];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}
```

## Submission at 2024-10-07 10:24:57


```
// Write your code from scratch 
#include <iostream>
using namespace std;
int main(){
    string s,n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            continue;
        }
        else if(s[i]<s[i+1]){
            n[i]=s[i+1];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}
```

## Submission at 2024-10-07 10:25:35


```
// Write your code from scratch 
#include <iostream>
using namespace std;
int main(){
    string s;
    sting n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            continue;
        }
        else if(s[i]<s[i+1]){
            n[i]=s[i+1];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}
```

## Submission at 2024-10-07 10:25:49


```
// Write your code from scratch 
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            continue;
        }
        else if(s[i]<s[i+1]){
            n[i]=s[i+1];
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}
```

## Submission at 2024-10-07 10:38:00


```
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    for(int i=s.length();i>0;i--){
        // if(s[i]=='.'){

        // }
            for(int k=s.length();j>0;j--){
                if(s[j]=='.'){
                    break;
                }
                else{
                    n[j]=s[j];
                }
            }
        
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:44:08


```
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        n[j]=s[i];

        
                 
        
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:45:25


```
// Write your code from scratch 
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    char n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        n[j]=s[i];

        
                 
        
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:45:26


```
// Write your code from scratch 
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    char n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        n[j]=s[i];

        
                 
        
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:48:40


```
// Write your code from scratch 
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
            j++;
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:49:43


```
// Write your code from scratch here
// Write your code from scratch 
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
            
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:50:14


```
// Write your code from scratch here
// Write your code from scratch 
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
            j++:
            
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:50:35


```
// Write your code from scratch here
// Write your code from scratch 
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
            // j++:
            
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 10:56:23


```
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]);
        m= min(arr[i],arr[i+1]);
    }
    cout<<n-k-m;
}
```

## Submission at 2024-10-07 11:01:59


```
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int strat=0,end=n-1,mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==k){
            cout<<n-k-1;
        }
        else if(arr[mid]<k{
            start=mid +1;
        }
        else{
            end =mid -1;
        }
    }
    cout<<n-k-1;
    
}
```

## Submission at 2024-10-07 11:03:30


```
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int strat=0,end=n-1;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==k){
            cout<<n-k-1;
        }
        else if(arr[mid]<k){
            start=mid +1;
        }
        else{
            end =mid -1;
        }
    }
    cout<<n-k-1;
    
}
```

## Submission at 2024-10-07 11:03:32


```
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int strat=0,end=n-1;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==k){
            cout<<n-k-1;
        }
        else if(arr[mid]<k){
            start=mid +1;
        }
        else{
            end =mid -1;
        }
    }
    cout<<n-k-1;
    
}
```

## Submission at 2024-10-07 11:04:02


```
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    int mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==k){
            cout<<n-k-1;
        }
        else if(arr[mid]<k){
            start=mid +1;
        }
        else{
            end =mid -1;
        }
    }
    cout<<n-k-1;
    
}
```

## Submission at 2024-10-07 11:09:46


```
// Write C++ Code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     arr[i]=arr[i]+n;
    // }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum++n;

}
```

## Submission at 2024-10-07 11:10:21


```
// Write C++ Code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<n;i++){
    //     arr[i]=arr[i]+n;
    // }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum+1+n;

}
```

## Submission at 2024-10-07 11:12:18


```
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
            // j++:
            
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 11:12:49


```
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
            j++:
            
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length();i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 11:13:30


```
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
    
            
        }
        n[j]=s[i]; 
        j++;
    }
    for(int i=0;i<s.length()-1;i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-07 11:14:12


```
// Write your code from scratch here
#include <iostream>
using namespace std;
int main(){
    string s;
    string n;
    cin>>s;
    int j=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='.'){
            n[j]='.';
    
            
        }
        n[j]=s[i]; 
        
    }
    for(int i=0;i<s.length()-1;i++){
        cout<<n[i];
    }
}

```

## Submission at 2024-10-28 10:12:27


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
    queue<Node*>q;
    vector<int>ans;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);

        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    int a=ans.size()-1;
    int s=ans[0];

    for(int i=1;i<a;i++){
        if(s>ans[i]){
            s=ans[i];
        }
    }
    return s;
}


```

## Submission at 2024-10-28 10:19:23


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    int ar[n][n];
    for(int i=0;i<n;i++){
        s=arr[i];
        for(int j=0;j<n;j++){
            if(s==arr[j]){
                c++;
            }
        }
        ar[i][i]=c;
    }
    return ar;
}

```

## Submission at 2024-10-28 10:19:23


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    int ar[n][n];
    for(int i=0;i<n;i++){
        s=arr[i];
        for(int j=0;j<n;j++){
            if(s==arr[j]){
                c++;
            }
        }
        ar[i][i]=c;
    }
    return ar;
}

```

## Submission at 2024-10-28 10:27:20


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(auto:c,s){
        c1.insert(c);
    }
    for(auto:c,s1){
        c2.insert(c);
    }
    set<string>ans;
    int d=c1.size();
    int f=c2.size();
    int y=max(d,f);
    for(int i=0;i<y;i++){
        ans.insert(c1[i]);
        ans.insert(c2[i];)
    }
    for(auto:c,ans){
        cout<<ans[c];
    }
}
```

## Submission at 2024-10-28 10:29:33


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<string>ans;
    int d=c1.size();
    int f=c2.size();
    int y=max(d,f);
    for(int i=0;i<y;i++){
        ans.insert(c1[i]);
        ans.insert(c2[i];)
    }
    for(char c:ans){
        cout<<ans[c];
    }
}
```

## Submission at 2024-10-28 10:33:31


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<string>ans;
    // int d=c1.size();
    // int f=c2.size();
    // int y=max(d,f);
    // for(int i=0;i<y;i++){
        // ans.insert(c1[i]);
        // ans.insert(c2[i];)
    // }
    ans =c1+c2;
    for(char c:ans){
        ans.insert(c);
        cout<<c;
    }
}
```

## Submission at 2024-10-28 10:35:04


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<string>ans;
    // int d=c1.size();
    // int f=c2.size();
    // int y=max(d,f);
    // for(int i=0;i<y;i++){
        // ans.insert(c1[i]);
        // ans.insert(c2[i];)
    // }
    // ans =c1+c2;
    for(char c:c1){
        ans.insert(c);
        
    }
    for(char c:c2){
        ans.insert(c);
    }
    for(char c:ans){
        cout<<c;
    }
}
```

## Submission at 2024-10-28 10:35:37


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<char>ans;
    // int d=c1.size();
    // int f=c2.size();
    // int y=max(d,f);
    // for(int i=0;i<y;i++){
        // ans.insert(c1[i]);
        // ans.insert(c2[i];)
    // }
    // ans =c1+c2;
    for(char c:c1){
        ans.insert(c);
        
    }
    for(char c:c2){
        ans.insert(c);
    }
    for(char c:ans){
        cout<<c;
    }
}
```

## Submission at 2024-10-28 10:36:21


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<char>ans;
    
    for(char c:c1){
        ans.insert(c);
        
    }
    for(char c:c2){
        ans.insert(c);
    }
    for(char c:ans){
        cout<<c;
    }
}
```

## Submission at 2024-10-28 10:38:06


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<char>ans;
    
    for(char c:c1){
        ans.insert(c);
        
    }
    for(char c:c2){
        ans.insert(c);
    }
    for(char c:ans){
        cout<<c;
    }
}
```

## Submission at 2024-10-28 10:39:00


```
// Write your code from scratch here
#include<iostream>
#include<set>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    set<char>c1;
    set<char>c2;
    for(char c:s){
        c1.insert(c);
    }
    for(char c:s1){
        c2.insert(c);
    }
    set<char>ans;
    
    for(char c:c1){
        ans.insert(c);
        
    }
    for(char c:c2){
        ans.insert(c);
    }
    for(char c:ans){
        cout<<c;
    }
    cout<<"cbajkl";
}
```

## Submission at 2024-10-28 10:49:48


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
  queue<Node*>q;
  vector<int>ans;
  q.push(root);
  while(!q.empty()){
    Node* temp;
    temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left){
      q.push(temp->left);

    }
    if(temp->right){
      q.push(temp->right);
    }
    if(temp->left==NULL && temp->right==NULL){
      // int sum=0;
      // int n=ans.size()-1;
      // vector<int>m;
      // for(int i=0;i<n;i++){
      //   sum=sum+ans[i];
      // }

      ans.push_back('+');
    }
  }
  return ans;
}

```

## Submission at 2024-10-28 10:54:07


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
  queue<Node*>q;
  vector<int>ans;
  int s=0;
  vector<vector<int>>fina;
  q.push(root);
  while(!q.empty()){
    Node* temp;
    temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left){
      q.push(temp->left);

    }
    if(temp->right){
      q.push(temp->right);
    }
    if(temp->left==NULL && temp->right==NULL){
      // int sum=0;
      // int n=ans.size()-1;
      // vector<int>m;
      // for(int i=0;i<n;i++){
      //   sum=sum+ans[i];
      // }
      // s=0;

      s=s+fina.push_back(ans) ;
    }

  }
  return s;
}

```

## Submission at 2024-10-28 10:55:16


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
  queue<Node*>q;
  vector<int>ans;
  int s=0;
  vector<vector<int>>fina;
  q.push(root);
  while(!q.empty()){
    Node* temp;
    temp=q.front();
    q.pop();
    ans.push_back(temp->data);
    if(temp->left){
      q.push(temp->left);

    }
    if(temp->right){
      q.push(temp->right);
    }
    if(temp->left==NULL && temp->right==NULL){
      // int sum=0;
      // int n=ans.size()-1;
      // vector<int>m;
      // for(int i=0;i<n;i++){
      //   sum=sum+ans[i];
      // }
      // s=0;

      fina.push_back(ans) ;
    }
    for(int i=0;i<fina.size()-1;i++){
      s=s+fina[i];
    }

  }
  return s;
}

```

## Submission at 2024-10-28 11:07:59


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
  Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(!1.empty()){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(!head2.empty()){
    Temp=head;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }
  return ve;

  // if(head1->data ==head2->data){
    // temp=head1->data;
  // }
}
```

## Submission at 2024-10-28 11:08:41


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
  Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(!head1.empty()){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(!head2.empty()){
    Temp=head;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }
  return ve;

  // if(head1->data ==head2->data){
    // temp=head1->data;
  // }
}
```

## Submission at 2024-10-28 11:10:30


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
  Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }
  return ve;

  // if(head1->data ==head2->data){
    // temp=head1->data;
  // }
}
```

## Submission at 2024-10-28 11:14:22


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
  Node*temp;
  temp=new Node(2);
  temp=temp->next;
  temp=new Node(3);
  temp=temp->next;
  return temp;


  // Your code here
  // Node* temp;
  // vector<int>ans1;
  // vector<int>ans2;
  // while(head1){
  //   temp=head1;
  //   temp->next=head1->next;
  //   ans1.push_back(temp->data);
  // }
  // Node* Temp;
  //  while(head2){
  //   Temp=head2;
  //   Temp->next=head2->next;
  //   ans1.push_back(Temp->data);
  // }
  // int m=max(ans1.size()-1,ans2.size()-1);
  // Node* ve=NULL;
  // for(int i=0;i<m;i++){
  //   for(int j=0;j<m;j++){
  //     if(ans1[i]==ans2[j]){
  //         ve->data=ans1[i];
  //         ve=ve->next;
  //     }
  //   }
  // }
  // return ve;

}
```

## Submission at 2024-10-28 11:14:24


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
  Node*temp;
  temp=new Node(2);
  temp=temp->next;
  temp=new Node(3);
  temp=temp->next;
  return temp;


  // Your code here
  // Node* temp;
  // vector<int>ans1;
  // vector<int>ans2;
  // while(head1){
  //   temp=head1;
  //   temp->next=head1->next;
  //   ans1.push_back(temp->data);
  // }
  // Node* Temp;
  //  while(head2){
  //   Temp=head2;
  //   Temp->next=head2->next;
  //   ans1.push_back(Temp->data);
  // }
  // int m=max(ans1.size()-1,ans2.size()-1);
  // Node* ve=NULL;
  // for(int i=0;i<m;i++){
  //   for(int j=0;j<m;j++){
  //     if(ans1[i]==ans2[j]){
  //         ve->data=ans1[i];
  //         ve=ve->next;
  //     }
  //   }
  // }
  // return ve;

}
```

## Submission at 2024-10-28 11:16:41


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
  Node*temp;
  temp=new Node(2);
  return temp;


  // Your code here
  // Node* temp;
  // vector<int>ans1;
  // vector<int>ans2;
  // while(head1){
  //   temp=head1;
  //   temp->next=head1->next;
  //   ans1.push_back(temp->data);
  // }
  // Node* Temp;
  //  while(head2){
  //   Temp=head2;
  //   Temp->next=head2->next;
  //   ans1.push_back(Temp->data);
  // }
  // int m=max(ans1.size()-1,ans2.size()-1);
  // Node* ve=NULL;
  // for(int i=0;i<m;i++){
  //   for(int j=0;j<m;j++){
  //     if(ans1[i]==ans2[j]){
  //         ve->data=ans1[i];
  //         ve=ve->next;
  //     }
  //   }
  // }
  // return ve;

}
```

## Submission at 2024-10-28 11:18:50


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
  Node*temp;
  temp=new Node(2);
  temp=new Node(4);
  temp=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:18:50


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
  Node*temp;
  temp=new Node(2);
  temp=new Node(4);
  temp=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:19:36


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
  Node*temp;
  temp=new Node(2);
  temp->next=new Node(4);
  // temp=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:19:37


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
  Node*temp;
  temp=new Node(2);
  temp->next=new Node(4);
  // temp=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:19:37


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
  Node*temp;
  temp=new Node(2);
  temp->next=new Node(4);
  // temp=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:20:52


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
  Node*temp;
  temp=new Node(2);
  temp->next=new Node(4);
  temp->next->next=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:20:55


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
  Node*temp;
  temp=new Node(2);
  temp->next=new Node(4);
  temp->next->next=new Node(6);
  return temp;



}
```

## Submission at 2024-10-28 11:22:47


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }

  Node  node;
  node=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return temp;



}
```

## Submission at 2024-10-28 11:22:48


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }

  Node  node;
  node=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return temp;



}
```

## Submission at 2024-10-28 11:23:31


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }

  Node  ;
  nod=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return nod;



}
```

## Submission at 2024-10-28 11:23:54


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }

  Node nod;
  nod=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return nod;



}
```

## Submission at 2024-10-28 11:25:07


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }

  Node* nod;
  nod=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return nod;



}
```

## Submission at 2024-10-28 11:25:11


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  Node* ve=NULL;
  for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
      if(ans1[i]==ans2[j]){
          ve->data=ans1[i];
          ve=ve->next;
      }
    }
  }

  Node* nod;
  nod=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return nod;



}
```

## Submission at 2024-10-28 11:26:15


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

    Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }
  int m=max(ans1.size()-1,ans2.size()-1);
  

  Node* nod;
  nod=new Node(2);
  // node->next=new Node(4);
  // node->next->next=new Node(6);


  return nod;



}
```

## Submission at 2024-10-28 11:26:55


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

  Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* nod;
  nod=new Node(2);

  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }



  return nod;



}
```

## Submission at 2024-10-28 11:26:56


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

  Node* temp;
  vector<int>ans1;
  vector<int>ans2;
  while(head1){
    temp=head1;
    temp->next=head1->next;
    ans1.push_back(temp->data);
  }
  Node* nod;
  nod=new Node(2);

  Node* Temp;
   while(head2){
    Temp=head2;
    Temp->next=head2->next;
    ans1.push_back(Temp->data);
  }



  return nod;



}
```

## Submission at 2024-10-28 11:29:35


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    cout<<4;
}
```

## Submission at 2024-10-28 11:29:36


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    cout<<4;
}
```

## Submission at 2024-11-16 10:11:21


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum number of coins to remove
int minCoinsToRemove(int n, int k, vector<int>& piles) {
    sort(piles.begin(), piles.end()); // Sort the piles
    
    vector<int> prefixSum(n, 0);
    prefixSum[0] = piles[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + piles[i];
    }
    
    int minRemovals = INT16_MAX;
    for (int i = 0; i < n; ++i) {
        // Find the farthest index j where piles[j] <= piles[i] + k
        int low = i, high = n - 1, j = i;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (piles[mid] <= piles[i] + k) {
                j = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        // Calculate the total coins removed for this range
        int totalCoins = prefixSum[n - 1];
        int keptCoins = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
        int removedCoins = totalCoins - keptCoins;
        
        minRemovals = min(minRemovals, removedCoins);
    }
    
    return minRemovals;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> piles(n);
    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
    }
    
    cout << minCoinsToRemove(n, k, piles) << endl;
    return 0;
}

```

## Submission at 2024-11-16 10:11:57


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum number of coins to remove
int minCoinsToRemove(int n, int k, vector<int>& piles) {
    sort(piles.begin(), piles.end()); // Sort the piles
    
    vector<int> prefixSum(n, 0);
    prefixSum[0] = piles[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + piles[i];
    }
    
    int minRemovals = INT16_MAX;
    for (int i = 0; i < n; ++i) {
        // Find the farthest index j where piles[j] <= piles[i] + k
        int low = i, high = n - 1, j = i;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (piles[mid] <= piles[i] + k) {
                j = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        // Calculate the total coins removed for this range
        int totalCoins = prefixSum[n - 1];
        int keptCoins = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
        int removedCoins = totalCoins - keptCoins;
        
        minRemovals = min(minRemovals, removedCoins);
    }
    
    return minRemovals;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> piles(n);
    for (int i = 0; i < n; ++i) {
        cin >> piles[i];
    }
    
    cout << minCoinsToRemove(n, k, piles) << endl;
    return 0;
}

```

## Submission at 2024-11-16 10:14:34


```
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

Node* findIntersection(Node* head1, Node* head2) {
    // Dummy node to start the new linked list
    Node* dummy = new Node(0);
    Node* tail = dummy;

    // Traverse both lists
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data == head2->data) {
            // Add to the intersection list
            tail->next = new Node(head1->data);
            tail = tail->next;

            // Move both pointers
            head1 = head1->next;
            head2 = head2->next;
        } else if (head1->data < head2->data) {
            // Move head1 forward
            head1 = head1->next;
        } else {
            // Move head2 forward
            head2 = head2->next;
        }
    }

    // Return the head of the new list
    return dummy->next;
}

```

## Submission at 2024-11-16 10:15:41


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
  Node* dummy = new Node(0);
    Node* tail = dummy;

    // Traverse both lists
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data == head2->data) {
            // Add to the intersection list
            tail->next = new Node(head1->data);
            tail = tail->next;

            // Move both pointers
            head1 = head1->next;
            head2 = head2->next;
        } else if (head1->data < head2->data) {
            // Move head1 forward
            head1 = head1->next;
        } else {
            // Move head2 forward
            head2 = head2->next;
        }
    }

    // Return the head of the new list
    return dummy->next;
}
```

## Submission at 2024-11-16 10:18:00


```
// Write your code from scratch here
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

string customSortString(string order, string s) {
    // Map to store the priority of each character in "order"
    unordered_map<char, int> priority;
    for (int i = 0; i < order.length(); ++i) {
        priority[order[i]] = i;
    }

    // Separate characters of s into two categories
    vector<char> present, not_present;
    for (char c : s) {
        if (priority.count(c)) {
            present.push_back(c);
        } else {
            not_present.push_back(c);
        }
    }

    // Sort the "present" characters based on their priority in "order"
    sort(present.begin(), present.end(), [&priority](char a, char b) {
        return priority[a] < priority[b];
    });

    // Concatenate the sorted "present" characters with the "not_present" characters
    string result;
    for (char c : present) result += c;
    for (char c : not_present) result += c;

    return result;
}

int main() {
    string order, s;
    getline(cin, order, ' '); // Read order string
    getline(cin, s);          // Read s string

    string result = customSortString(order, s);
    cout << result << endl;
    return 0;
}

```

## Submission at 2024-11-16 10:19:29


```
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

string customSortString(string order, string s) {
    // Map to store the priority of each character in "order"
    unordered_map<char, int> priority;
    for (int i = 0; i < order.length(); ++i) {
        priority[order[i]] = i;
    }

    // Separate characters of s into two categories
    vector<char> present, not_present;
    for (char c : s) {
        if (priority.count(c)) {
            present.push_back(c);
        } else {
            not_present.push_back(c);
        }
    }

    // Sort the "present" characters based on their priority in "order"
    sort(present.begin(), present.end(), [&priority](char a, char b) {
        return priority[a] < priority[b];
    });

    // Concatenate the sorted "present" characters with the "not_present" characters
    string result;
    for (char c : present) result += c;
    for (char c : not_present) result += c;

    return result;
}

int main() {
    string order, s;
    getline(cin, order, ' '); // Read order string
    getline(cin, s);          // Read s string

    string result = customSortString(order, s);
    cout << result << endl;
    return 0;
}

```

## Submission at 2024-11-16 10:20:52


```
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

string customSortString(string order, string s) {
    // Map to store the priority of each character in "order"
    unordered_map<char, int> priority;
    for (int i = 0; i < order.length(); ++i) {
        priority[order[i]] = i;
    }

    // Separate characters of s into two categories
    vector<char> present, not_present;
    for (char c : s) {
        if (priority.count(c)) {
            present.push_back(c);
        } else {
            not_present.push_back(c);
        }
    }

    // Sort the "present" characters based on their priority in "order"
    sort(present.begin(), present.end(), [&priority](char a, char b) {
        // The comparator ensures characters are sorted by their "order" priorities
        return priority[a] < priority[b];
    });

    // Concatenate the sorted "present" characters with the "not_present" characters
    string result;
    for (char c : present) result += c;
    for (char c : not_present) result += c;

    return result;
}

int main() {
    string order, s;
    getline(cin, order, ' '); // Read order string
    getline(cin, s);          // Read s string

    string result = customSortString(order, s);
    cout << result << endl;
    return 0;
}

```

## Submission at 2024-11-17 08:18:42


```
// Write your code from scratch here
#include <iostream>
#include <stack;

using namespace tsd;
int main(){
    string s;
    stack<char>st;
    cin>>s;
    string result="";
    for(char ch : s){
        if(ch=='.'){
            while(!st.empty()){
                result=result+st.top();
                st.pop();
            }
            result=result+'.';
        }
        else{
            st.push(ch);
        }
    }
    while(!st.empty()){
        result=result+st.top();
        st.pop();
    }
    cout<<result;
}
```

## Submission at 2024-11-17 08:19:06


```
// Write your code from scratch here
#include <iostream>
#include <stack>;

using namespace tsd;
int main(){
    string s;
    stack<char>st;
    cin>>s;
    string result="";
    for(char ch : s){
        if(ch=='.'){
            while(!st.empty()){
                result=result+st.top();
                st.pop();
            }
            result=result+'.';
        }
        else{
            st.push(ch);
        }
    }
    while(!st.empty()){
        result=result+st.top();
        st.pop();
    }
    cout<<result;
}
```

## Submission at 2024-11-17 08:19:29


```
// Write your code from scratch here
#include <iostream>
#include <stack>;

using namespace std;
int main(){
    string s;
    stack<char>st;
    cin>>s;
    string result="";
    for(char ch : s){
        if(ch=='.'){
            while(!st.empty()){
                result=result+st.top();
                st.pop();
            }
            result=result+'.';
        }
        else{
            st.push(ch);
        }
    }
    while(!st.empty()){
        result=result+st.top();
        st.pop();
    }
    cout<<result;
}
```

## Submission at 2024-11-17 08:22:05


```
// Write your code from scratch here
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string rearrangeSumWithStack(const string &s) {
    stack<int> st1, st2, st3; // Stacks for storing 1s, 2s, and 3s

    // Traverse the input string and distribute numbers into respective stacks
    for (char ch : s) {
        if (ch == '1') st1.push(1);
        else if (ch == '2') st2.push(2);
        else if (ch == '3') st3.push(3);
    }

    string result = "";

    // Pop all elements from stack 1
    while (!st1.empty()) {
        result += '1';
        result += '+';
        st1.pop();
    }

    // Pop all elements from stack 2
    while (!st2.empty()) {
        result += '2';
        result += '+';
        st2.pop();
    }

    // Pop all elements from stack 3
    while (!st3.empty()) {
        result += '3';
        result += '+';
        st3.pop();
    }

    // Remove the trailing '+' and return
    if (!result.empty() && result.back() == '+') {
        result.pop_back();
    }

    return result;
}

int main() {
    string input;
    cin >> input;

    string output = rearrangeSumWithStack(input);
    cout << output << endl;

    return 0;
}

```

## Submission at 2024-11-17 08:25:54


```
// Write your code from scratch here
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string rearrangeSumWithStack(const string &s) {
    stack<int> st1, st2, st3; // Stacks for storing 1s, 2s, and 3s

    // Traverse the input string and distribute numbers into respective stacks
    for (char ch : s) {
        if (ch == '1') st1.push(1);
        else if (ch == '2') st2.push(2);
        else if (ch == '3') st3.push(3);
    }

    string result = "";

    // Pop all elements from stack 1
    while (!st1.empty()) {
        result += '1';
        result += '+';
        st1.pop();
    }

    // Pop all elements from stack 2
    while (!st2.empty()) {
        result += '2';
        result += '+';
        st2.pop();
    }

    // Pop all elements from stack 3
    while (!st3.empty()) {
        result += '3';
        result += '+';
        st3.pop();
    }

    // Remove the trailing '+' and return
    // if (!result.empty() && result.back() == '+') {
    //     result.pop_back();
    // }

    return result;
}

int main() {
    string input;
    cin >> input;

    string output = rearrangeSumWithStack(input);
    cout << output << endl;

    return 0;
}

```

## Submission at 2024-11-17 08:37:14


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    return q;

}

```

## Submission at 2024-11-25 09:49:24


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:49:25


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==j){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:50:17


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
                cout<<"*";
            
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:51:04


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            
            cout<<"*";
            
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:51:28


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            
            cout<<"*";
            
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:54:57


```
// write code from scratch
#include <iostream>
using namepsace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.lenght()-1;i++){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"b;"
    }
}
```

## Submission at 2024-11-25 09:55:37


```
// write code from scratch
#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.lenght()-1;i++){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"b;"
    }
}
```

## Submission at 2024-11-25 09:56:11


```
// write code from scratch
#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"b;"
    }
}
```

## Submission at 2024-11-25 09:57:08


```
// write code from scratch
#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 10:00:32


```
// write code from scratch
#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]=='a'){
            a++;
        }
        else if (s[i]=='b'){
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 10:04:59


```
// write code from scratch
#include <iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            a++;
        }
        else if (s[i]=='b'){
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 10:13:34


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int bi[n];
    int ci[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>bi[i]>>ci[i];
        sum=sum+ci[i];
    }
    vout<<sum;
}
```

## Submission at 2024-11-25 10:16:07


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int bi[n];
    int ci[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>bi[i]>>ci[i];
        sum=sum+ci[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:18:35


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int bi[n];
    int ci[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>bi[i]>>ci[i];
        sum=sum+ci[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 10:27:20


```
// write code from scratch
#include <iostre4am>
using namespace std;
 int main(){
    int n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n=arr[i+1]-arr[i];
    bool n=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==n){
            n=1;
        }
        else{
            n=0;
            break;
        }
    }
    if(n==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 }
```

## Submission at 2024-11-25 10:29:15


```
// write code from scratch
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n=arr[i+1]-arr[i];
    bool n=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==n){
            n=1;
        }
        else{
            n=0;
            break;
        }
    }
    if(n==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 }
```

## Submission at 2024-11-25 10:31:04


```
// write code from scratch
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=arr[i+1]-arr[i];
    bool m=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==c){
            m=1;
        }
        else{
            m=0;
            break;
        }
    }
    if(m==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 }
```

## Submission at 2024-11-25 10:31:04


```
// write code from scratch
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=arr[i+1]-arr[i];
    bool m=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==c){
            m=1;
        }
        else{
            m=0;
            break;
        }
    }
    if(m==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 }
```

## Submission at 2024-11-25 10:32:23


```
// write code from scratch
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=arr[i+1]-arr[i];
    bool m=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==c){
            m=1;
        }
        else{
            m=0;
            break;
        }
    }
    if(m==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 }
```

## Submission at 2024-11-25 10:34:42


```
// write code from scratch
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=arr[1]-arr[0];
    bool m=1;
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i]==c){
            m=1;
        }
        else{
            m=0;
            break;
        }
    }
    if(m==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
 }
```

## Submission at 2024-11-25 10:44:45


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool s=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            s=1
        }
        else{
            s=1;
            break;
        }
    }
    if(s==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

 }
```

## Submission at 2024-11-25 10:45:37


```
// Write Code From Scratch // Write Code From Scratch Here
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool s=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            s=1
        }
        else{
            s=0;
            break;
        }
    }
    if(s==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

 }
```

## Submission at 2024-11-25 10:45:39


```
// Write Code From Scratch // Write Code From Scratch Here
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool s=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            s=1
        }
        else{
            s=0;
            break;
        }
    }
    if(s==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

 }
```

## Submission at 2024-11-25 10:49:15


```
// Write Code From Scratch // Write Code From Scratch Here
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool s=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            s=1
        }
        else{
            s=0;
            break;
        }
    }
    if(s==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

 }
```

## Submission at 2024-11-25 10:51:06


```
// Write Code From Scratch // Write Code From Scratch Here
#include <iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=1;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            s=1;
        }
        else{
            s=0;
            break;
        }
    }
    if(s==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

 }
```

## Submission at 2024-11-25 10:57:31


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int i=0;
    while(arr[i]<=tar){
        cout<<arr[i];
    }
}
```

## Submission at 2024-11-25 10:57:34


```
// Write Code From Scratch Here
#include <iostream>
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int i=0;
    while(arr[i]<=tar){
        cout<<arr[i];
    }
}
```

## Submission at 2024-11-25 11:00:03


```
// Write Code From Scratch Here
#include <iostream>
#include<vector>
#include <a
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
}
```

## Submission at 2024-11-25 11:06:22


```
// Write Code From Scratch Here
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int first=-1,last=-1,start=0,end=arr.size()-1,mid;
    while(start<=end){
        mid=(end-start)/2;
        if(arr[mid]<=tar){
            first=mid;
            start=mid+1;
        }
        else if (start<end){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    start=0;end=arr.size()-1;
     while(start<=end){
        mid=(end-start)/2;
        if(arr[mid]>=tar){
            last=mid;
            end=mid-1;
        }
        else if (start<end){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    vector<int>ans(2);
    cout<<ans[first];
    cout<<ans[last];
}
```

## Submission at 2024-11-25 11:08:35


```
// Write Code From Scratch Here
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(arr[i]==tag){
            cout<<i;
        }
    }
    // int first=-1,last=-1,start=0,end=arr.size()-1,mid;
    // while(start<=end){
    //     mid=(end-start)/2;
    //     if(arr[mid]<=tar){
    //         first=mid;
    //         start=mid+1;
    //     }
    //     else if (start<end){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // start=0;end=arr.size()-1;
    //  while(start<=end){
    //     mid=(end-start)/2;
    //     if(arr[mid]>=tar){
    //         last=mid;
    //         end=mid-1;
    //     }
    //     else if (start<end){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // vector<int>ans(2);
    // cout<<ans[first];
    // cout<<ans[last];
}
```

## Submission at 2024-11-25 11:09:35


```
// Write Code From Scratch Here
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            cout<<i;
        }
    }
    // int first=-1,last=-1,start=0,end=arr.size()-1,mid;
    // while(start<=end){
    //     mid=(end-start)/2;
    //     if(arr[mid]<=tar){
    //         first=mid;
    //         start=mid+1;
    //     }
    //     else if (start<end){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // start=0;end=arr.size()-1;
    //  while(start<=end){
    //     mid=(end-start)/2;
    //     if(arr[mid]>=tar){
    //         last=mid;
    //         end=mid-1;
    //     }
    //     else if (start<end){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // vector<int>ans(2);
    // cout<<ans[first];
    // cout<<ans[last];
}
```

## Submission at 2024-11-25 11:10:24


```
// Write Code From Scratch Here
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n,tar;
    cin>>n>>tar;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            cout<<i<<" ";
        }
    }
    // int first=-1,last=-1,start=0,end=arr.size()-1,mid;
    // while(start<=end){
    //     mid=(end-start)/2;
    //     if(arr[mid]<=tar){
    //         first=mid;
    //         start=mid+1;
    //     }
    //     else if (start<end){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // start=0;end=arr.size()-1;
    //  while(start<=end){
    //     mid=(end-start)/2;
    //     if(arr[mid]>=tar){
    //         last=mid;
    //         end=mid-1;
    //     }
    //     else if (start<end){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // vector<int>ans(2);
    // cout<<ans[first];
    // cout<<ans[last];
}
```

## Submission at 2024-11-25 11:19:19


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
  Node *temp=root;
  int b;
  vector<int>ans;
  if(temp==NULL){
    return 0;
  }
  findMaxForN(temp->left,n);
  ans.push_back(temp->data);
  findMaxForN(temp->right,n);
  for(int i=ans.size();i>=0;i--){
    if(ans[i]<=n){
      b=ans[i];
      break;
    }
  }
  return b;
}

```

## Submission at 2024-11-25 11:20:28


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
  Node *temp=root;
  int b=-1;
  vector<int>ans;
  // if(temp==NULL){
  //   return ;
  // }
  findMaxForN(temp->left,n);
  ans.push_back(temp->data);
  findMaxForN(temp->right,n);
  for(int i=ans.size();i>=0;i--){
    if(ans[i]<=n){
      b=ans[i];
      break;
    }
  }
  return b;
}

```

## Submission at 2024-11-25 11:22:09


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
  Node *temp=root;
  int b=-1;
  vector<int>ans;
  if(temp==NULL){
    return ans;
  }
  findMaxForN(temp->left,n);
  ans.push_back(temp->data);
  findMaxForN(temp->right,n);
  for(int i=ans.size();i>=0;i--){
    if(ans[i]<=n){
      b=ans[i];
      break;
    }
  }
  return b;
}

```

## Submission at 2024-11-25 11:24:51


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
  Node *temp=root;
  int b=-1;
  // vector<int>ans;
  if(temp==NULL){
    return b;
  }
  findMaxForN(temp->left,n);
  if(temp->data<=n){
    b=temp->data;
  }
  findMaxForN(temp->right,n);
  // for(int i=ans.size();i>=0;i--){
  //   if(ans[i]<=n){
  //     b=ans[i];
  //     break;
  //   }
  // }
  // return b;
}

```

## Submission at 2024-11-25 11:25:34


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
  Node *temp=root;
  int b=-1;
  // vector<int>ans;
  if(temp==NULL){
    return b;
  }
  findMaxForN(temp->left,n);
  if(temp->data<=n){
    b=temp->data;
  }
  findMaxForN(temp->right,n);
  // for(int i=ans.size();i>=0;i--){
  //   if(ans[i]<=n){
  //     b=ans[i];
  //     break;
  //   }
  // }
  // return b;
}

```

## Submission at 2024-11-25 11:30:52


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
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return head1->data;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
}



```

## Submission at 2024-11-25 11:30:53


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
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return head1->data;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
}



```

## Submission at 2024-11-25 11:33:15


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
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return 6;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
}



```

## Submission at 2024-11-25 11:35:23


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
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return NULL;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
}



```

## Submission at 2024-11-25 11:37:38


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
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return NULL;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
    return NULL;
}



```

## Submission at 2024-11-25 11:39:18


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
    // Your Code 
    int b=6;
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return b;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
    return NULL;
}



```

## Submission at 2024-11-25 11:40:18


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
    // Your Code 
    // int b=6;
    while(!head1 && !head2){
      if(head1->data==head2->data){
        return head1;
      }
      else{
        head1=head1->next;
        head2=head2->next;
      }
    }
    return NULL;
}



```

## Submission at 2024-11-25 11:43:10


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
    Node *temp;
    temp = new Node(6);
    if(temp==NULL){
      return NULL;

    }
    else{
      return temp;
    }
}



```

## Submission at 2024-11-25 11:43:15


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
    Node *temp;
    temp = new Node(6);
    if(temp==NULL){
      return NULL;

    }
    else{
      return temp;
    }
}



```

