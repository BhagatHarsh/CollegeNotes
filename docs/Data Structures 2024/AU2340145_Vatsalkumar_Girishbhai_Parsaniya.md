## Submission at 2024-08-05 10:09:44


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    cout<<"Hello Vatsal!"<<endl;
}
```

## Submission at 2024-08-05 10:19:27


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    string x;
    cin>>x;
    cout<<"Hello "<<x<<"!"<<endl;
}
```

## Submission at 2024-08-05 10:28:52


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!";
}
```

## Submission at 2024-08-05 10:39:55


```
// Write your C++ code here
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=0; j<n;j++){
        cout<<"Hello "<<arr[j]<<"!"<<endl;
    }
}
```

## Submission at 2024-08-12 10:07:27


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x==0){
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    
    int a=0;
    int b=1,c;
    int sum=0;
    for (int i=0;i<=x-2;i++){
        
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

## Submission at 2024-08-12 10:11:13


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x==0){
        return 0;
    }
    if (x==1)
    {
        return 1;
    }
    
    int a=0;
    int b=1,c;
    int sum=0;
    for (int i=0;i<=x-2;i++){
        
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

## Submission at 2024-08-12 10:43:36


```
#include <iostream>
using namespace std;

int fibo(int n){
    if (n<=1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main (){

    int n; cin>>n;
    cout<<fibo(n)<<endl;
}

```

## Submission at 2024-08-12 10:57:01


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>= (-(2*31)) and n<= ((2*31)-1):
        if n ==1:
            return a
        if n%2 !=0 or n <=0:
            return b  
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if _name_ == "_main_":
    main()

```

## Submission at 2024-08-12 10:57:47


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>= (-(2*31)) and n<= ((2*31)-1):
        if n ==1:
            return a
        if n%2 !=0 or n <=0:
            return b  
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if _name_ == "_main_":
    main()

```

## Submission at 2024-08-12 10:58:51


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>= (-(2*31)) and n<= ((2*31)-1):
        if n ==1:
            return a
        if n%2 !=0 or n <=0:
            return b  
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if _name_ == "_main_":
    main()

```

## Submission at 2024-08-21 08:28:23


```
#include <iostream>
#include <vector>
#include <string>

class Main {
public:
    static std::vector<std::string> ParenComb(int n) {
        std::vector<std::string> res;
        backtrack(res, "", n, n);
        return res;
    }

private:
    static void backtrack(std::vector<std::string>& res, std::string Current, int left, int right) {
        if (left == 0 && right == 0) {
            res.push_back(Current);
            return;
        }
        if (left > right) {
            return;
        }
        if (left > 0) {
            backtrack(res, Current + "(", left - 1, right);
        }
        if (right > 0) {
            backtrack(res, Current + ")", left, right - 1);
        }
    }
};

int main() {
    std::string input;
    std::getline(std::cin, input);
    int n = std::stoi(input);

    // Generate combinations
    std::vector<std::string> result = Main::ParenComb(n);

    // Print combinations
    std::cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << "\"" << result[i] << "\"";
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]";
    return 0;
}

```

## Submission at 2024-08-21 08:41:20


```
#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;

    function<void(int, vector<int>&)> backtrack = [&](int start, vector<int>& path) {
        if (path.size() == k) {
            result.push_back(path);
            return;
        }

        for (int i = start; i <= n; ++i) {
            path.push_back(i);
            backtrack(i + 1, path);
            path.pop_back();
        }
    };

    vector<int> path;
    backtrack(1, path);

    return result;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Print combinations
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-30 10:00:00


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def reverseLinkedList(head):
    # Write your logic here
    l=[]
    temp=head
    while temp.next!=None:
        l.append(temp.data)
        temp = temp.next
    l.append(temp.data)
    l=l[::-1]
    for x in l:
        temp.data=x
        temp=temp.next
    return temp
```

## Submission at 2024-08-30 10:04:21


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    temp=head
    if k==1:
        return head.next
    counter=1
    while temp!=None
        counter+=1
        if counter==k:
            temp.next = temp.next.next
        temp=temp.next
    return head

```

## Submission at 2024-08-30 10:10:40


```
# Write code from scratch
def is_pal(flag=True,s):
    if len(s)==1 or len(s)==0:
        return flag
    if s[0]!=s[len(s)-1]:
        return False
    is_pal(flag,s[1:len(s)])
    

def main():
    s=input()
    print(is_pal(s))
```

## Submission at 2024-08-30 10:11:24


```
# Write code from scratch
def is_pal(flag=True,s):
    if len(s)==1 or len(s)==0:
        return flag
    if s[0]!=s[len(s)-1]:
        return False
    is_pal(flag,s[1:len(s)])
    

def main():
    s=input()
    print("YES" if is_pal(s) else "NO")
```

## Submission at 2024-08-30 10:12:20


```
# Write code from scratch
def is_pal(flag=True,s):
    if len(s)==1 or len(s)==0:
        return flag
    if s[0]!=s[len(s)-1]:
        return False
    is_pal(flag,s[1:len(s)])
    

def main():
    s=input()
    print("YES" if is_pal(s) else "NO")

if __name__ =="__main__":
    main()
```

## Submission at 2024-08-30 10:13:29


```
# Write code from scratch
def is_pal(flag=True,s):
    if len(s)==1 or len(s)==0:
        return True
    if s[0]!=s[len(s)-1]:
        return False
    is_pal(flag,s[1:len(s)])
    

def main():
    s=input()
    print("YES" if is_pal(s) else "NO")

if __name__ =="__main__":
    main()
```

## Submission at 2024-08-30 10:14:59


```
# Write code from scratch
def is_pal(flag=True,s):
    if len(s)==1 or len(s)==0:
        return True
    if s[0]!=s[len(s)-1]:
        return False
    is_pal(flag,s[1:len(s)-1])
    

def main():
    s=input()
    print("YES" if is_pal(s) else "NO")

if __name__ =="__main__":
    main()
```

## Submission at 2024-09-02 10:03:21


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
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
            c[i]=a[i];
        }
        if(b[i]>a[i]){
            c[i]=b[i];
        }
    }
    cout<<c[n];
}
```

## Submission at 2024-09-02 10:06:31


```
// Write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
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
            c[i]=a[i];
        }
        if(b[i]>a[i]){
            c[i]=b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
}
```

## Submission at 2024-09-04 09:11:09


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int n, int x){
    if(x==1){
        return n;
    }
    return 2*pow(n,x-1);
}


int main(){
    int n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-04 09:13:15


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

float pow(float n, float x){
    if(x==1){
        return n;
    }
    return 2*pow(n,x-1);
}


int main(){
    float n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-04 09:13:45


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(float n, float x){
    if(x==1){
        return n;
    }
    return 2*pow(n,x-1);
}


int main(){
    float n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-04 09:14:29


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int n, int x){
    if(x==1){
        return n;
    }
    return 2*pow(n,x-1);
}


int main(){
    int n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-04 09:15:31


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int n, int x){
    if(x==1){
        return n;
    }
    return 2*pow(n,x-1);
}


int main(){
    int n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-04 09:35:10


```
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = NULL;
    }
};


int main(){
    Node*Head=NULL;
    Node*Tail=NULL;
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(Head==NULL){
            Head=new Node (arr[i]);
            Tail=Head;

        }
        else
        {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
    Node*temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
```

## Submission at 2024-09-04 09:39:18


```
// #include <iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };


// int main(){
//     Node*Head=NULL;
//     Node*Tail=NULL;
//     int n;cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(Head==NULL){
//             Head=new Node (arr[i]);
//             Tail=Head;

//         }
//         else
//         {
//             Tail->next=new Node(arr[i]);
//             Tail=Tail->next;
//         }
//     }
//     Node*temp=Head;
//     while(temp){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data = value;
        next = NULL;
    }
};


int main(){
    Node*Head=NULL;
    
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(Head==NULL){
            Head=new Node (arr[i]);
            

        }
        else
        {
           Node*temp;
           temp = new Node(arr[i]);
           temp->next=Head;
           Head=temp; 
        }
    }
    Node*temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
```

## Submission at 2024-09-04 09:41:00


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
    Node*Head=NULL;
    
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(Head==NULL){
            Head=new Node (arr[i]);
            

        }
        else
        {
           Node*temp;
           temp = new Node(arr[i]);
           temp->next=Head;
           Head=temp; 
        }
    }
    Node*temp=Head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

```

## Submission at 2024-09-04 10:08:11


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
    if(head==NULL && head->next==NULL){
        return head;
    }
    else
    {
        Node*temp;
        temp->next=Head;
        Head=temp;
    }
}

```

## Submission at 2024-09-04 10:08:35


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
    if(head==NULL && head->next==NULL){
        return head;
    }
    else
    {
        Node*temp;
        temp->next=Head;
        Head=temp;
        return temp;
    }
}

```

## Submission at 2024-09-05 03:39:20


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int n, int x){
    if(x==1){
        return n;
    }
    return n*pow(n,x-1);
}


int main(){
    int n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-05 03:42:46


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
#include <cmath>
using namespace std;

int pow(int n, int x){
    if(x==1){
        return n;
    }
    return floor(n*pow(n,x-1));
}


int main(){
    int n,x;
    cin>>n>>x;
    cout<<pow(n , x);
}
```

## Submission at 2024-09-05 03:47:27


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;


int myPow(int n, int x) {
    if (x == 0) {  // base case: n^0 = 1
        return 1;
    }
    if (x > 0) {  // for positive exponent
        return n * myPow(n, x - 1);
    }
    else {  // for negative exponent
        return 1.0 / myPow(n, -x);  // Convert to positive and take reciprocal
    }
}

int main() {
    int n, x;
    cin>>n>>x;
    cout << myPow(n, x) << endl;
}
```

## Submission at 2024-09-09 02:23:26


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
    
    x--;
    Node*curr=head;
    Node*prev=NULL;
    while (x--)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
    return head;


}

```

## Submission at 2024-09-09 02:26:40


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
    
    x--;
    Node*curr=head;
    Node*prev=NULL;
    while (x--)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    
    return head;


}

```

## Submission at 2024-09-09 03:34:09


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
    vector <int >ans;
    Node*temp=head;
    while(temp){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    int i = ans.size()-1;
    temp = head;
    while(temp){
        temp->data=ans[i];
        i--;
        temp=temp->next;
    }
    return temp;
}

```

## Submission at 2024-09-09 03:34:36


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
    vector <int >ans;
    Node*temp=head;
    while(temp){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    int i = ans.size()-1;
    temp = head;
    while(temp){
        temp->data=ans[i];
        i--;
        temp=temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 03:39:02


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
    x--;
    Node *curr=head;
    Node *prev=NULL;
    // if(head!=NULL)

    while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
    return head;
}

```

## Submission at 2024-09-09 03:41:25


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
    x--;
    Node *curr=head;
    Node *prev=NULL;
    if(head!=NULL){
        if(head->next==NULL){
            Node*temp2=head;
            head=head->next;
            delete temp2;
        }
        else{
            while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
    return head;
        }
    }

    
}

```

## Submission at 2024-09-09 03:42:48


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
    
    Node *curr=head;
    Node *prev=NULL;
    if(head!=NULL){
        if(head->next==NULL){
            Node*temp2=head;
            head=head->next;
            delete temp2;
        }
        else{
            x--;
            while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
    return head;
        }
    }

    
}

```

## Submission at 2024-09-09 03:44:11


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
    
    Node *curr=head;
    Node *prev=NULL;
    if(head!=NULL){
        if(head->next==NULL){
            Node*temp2=head;
            head=head->next;
            delete temp2;
        }
        else{
            x--;
            while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
    
        }
    }
return head;
    
}

```

## Submission at 2024-09-09 03:49:29


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
    Node *curr=head;
    Node *prev=NULL;
    if(x==1){
        if(head->next==NULL){
            Node*temp2=head;
            head=head->next;
            delete temp2;
        }
        else{
            x--;
            while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
    
        }
    }
return head;
}

```

## Submission at 2024-09-09 03:50:05


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
    Node *curr=head;
    Node *prev=NULL;
    if(head!=NULL){
        if(x==1){
            Node*temp2=head;
            head=head->next;
            delete temp2;
        }
        else{
            x--;
            while(x--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;
    
        }
    }
return head;
}

```

## Submission at 2024-09-09 03:53:45


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
    Node*curr=head;
    Node*prev=NULL;
    Node*fut=NULL;
    while(curr){
        fut=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fut;
    }
    head=prev;
    return head;
}

```

## Submission at 2024-09-09 04:08:30


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
    ListNode *temp = head;
    while(temp){
        result.push_back(temp->val);
        temp=temp->next;
    }

    // Your code here
    return result;
}

```

## Submission at 2024-09-09 04:13:10


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
    k--;
    Node*temp=head;
    while(k){
        temp=temp->next;
        k--;

    }
    int i = temp->data;
    return i;
}

```

## Submission at 2024-09-09 04:21:40


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
    k--;
    int count = 0;
    Node*temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    temp=head;
    if(k<=count){
while(k){
        temp=temp->next;
        k--;

    }
    int i = temp->data;
    return i;
    }
    else{
        return -1;
    }
    
}

```

## Submission at 2024-09-09 04:41:07


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
    Node*temp=head;
    int i ;
    if(k==1){
        i = temp->data;
        return i;
    }
    k--;
    int count = 0;
    
    while(temp){
        count=count+1;
        temp=temp->next;
    }
    temp=head;
    
    if(k<=count){
    while(k){
        temp=temp->next;
        k--;

    }
    i = temp->data;
    return i;
    }
    else{
        return -1;
    }
    
}

```

## Submission at 2024-09-09 04:46:18


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
    Node*temp=head;
    int i ;
    if(k==1){
        i = temp->data;
        return i;
    }
    
    int count = 0;
    
    while(temp){
        count=count+1;
        temp=temp->next;
    }
    temp=head;
    
    
    if(k<=count){
    k--;
    while(k){
        temp=temp->next;
        k--;

    }
    i = temp->data;
    return i;
    }
    else{
        return -1;
    }
    
}

```

## Submission at 2024-09-09 04:47:13


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
    Node*temp=head;
    int i ;
    if(k==1){
        i = temp->data;
        return i;
    }
    
    int count = 0;
    
    while(temp){
        count=count+1;
        temp=temp->next;
    }
    temp=head;
    
    
    if(k<=count){
    k--;
    while(k--){
        temp=temp->next;
        

    }
    i = temp->data;
    return i;
    }
    else{
        return -1;
    }
    
}

```

## Submission at 2024-09-09 06:06:40


```
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int count = 0 ;
    for(int i=1;i<=n;i++){
        if((i%3==0)||(i%5==0)||(i%7==0)){
            count = count + i;
        }

    }
    cout<<count;
}
```

## Submission at 2024-09-09 09:52:11


```
// Write Code from Scratch here
#include <iostream>
using namespace std;

string power(int n){
    if(n==1){
        return True;
    }

    return power(n/3);
}

int main(){
    int n;
    cin>>n;
    power(n);
}
```

## Submission at 2024-09-09 09:52:13


```
// Write Code from Scratch here
#include <iostream>
using namespace std;

string power(int n){
    if(n==1){
        return True;
    }

    return power(n/3);
}

int main(){
    int n;
    cin>>n;
    power(n);
}
```

## Submission at 2024-09-09 10:04:28


```
// Write code from scratch here
#include <iostream>
using namespace std;

int frequency(string s, char x, int index, int i,int count){
    if(index==i){
        return count;
    }
    if(s[index]==x){
        count++;
    }
    return frequency(s,x,index+1,i,count);
}

int main (){
    string s;
    char x;
    cin>>s>>x;
    int i = s.length();
    int count = 0;
    
    cout<<frequency(s,x,0,i-1,count);
}
```

## Submission at 2024-09-09 10:08:16


```
// Write code from scratch here
#include <iostream>
using namespace std;

int frequency(string s, char x, int index, int i,int count){
    if(index==i){
        return count;
    }
    if(s[index]==x){
        count++;
    }
    return frequency(s,x,index+1,i,count);
}

int main (){
    string s;
    char x;
    cin>>s>>x;
    int i = s.length();
    int count = 0;
    if(i>=1 && i<=100 && (x=='0'||x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'){
    cout<<frequency(s,x,0,i-1,count);
    }
}
```

## Submission at 2024-09-09 10:08:17


```
// Write code from scratch here
#include <iostream>
using namespace std;

int frequency(string s, char x, int index, int i,int count){
    if(index==i){
        return count;
    }
    if(s[index]==x){
        count++;
    }
    return frequency(s,x,index+1,i,count);
}

int main (){
    string s;
    char x;
    cin>>s>>x;
    int i = s.length();
    int count = 0;
    if(i>=1 && i<=100 && (x=='0'||x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'){
    cout<<frequency(s,x,0,i-1,count);
    }
}
```

## Submission at 2024-09-09 10:09:52


```
// Write code from scratch here
#include <iostream>
using namespace std;

int frequency(string s, char x, int index, int i,int count){
    if(index==i){
        return count;
    }
    if(s[index]==x){
        count++;
    }
    return frequency(s,x,index+1,i,count);
}

int main (){
    string s;
    char x;
    cin>>s>>x;
    int i = s.length();
    int count = 0;
    
    cout<<frequency(s,x,0,i-1,count);
    
}
```

## Submission at 2024-09-09 10:22:51


```
#include <vector>
#include <iostream>
using namespace std;
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
    Node*temp=head;
    vector<int>ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int i = ans.size();
    int start = 0;
    int end = i-1;
    while(start>=end){
      if(ans[start]==ans[end]){
        start++;
        end--;
      }
      else{
        return false;
      }
    }
    return true;


}
```

## Submission at 2024-09-09 10:25:41


```
//  #  include < vector >
 # include <iostream>
using namespace std;
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
    Node*temp=head;
    vector <int> ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int i = ans.size();
    int start = 0;
    int end = i-1;
    while(start>=end){
      if(ans[start]==ans[end]){
        start++;
        end--;
      }
      else{
        return false;
      }
    }
    return true;


}
```

## Submission at 2024-09-09 10:26:23


```
//  #  include < vector >
 # include <iostream>
using namespace std;
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
    Node*temp=head;
    vector <int> ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int i = ans.size();
    int start = 0;
    int end = i-1;
    while(start>=end){
      if(ans[start]==ans[end]){
        start++;
        end--;
      }
      else{
        return false;
      }
    }
    return true;


}
```

## Submission at 2024-09-09 10:27:15


```
//  #  include < vector >
#include <iostream>
using namespace std;
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
    Node*temp=head;
    vector <int> ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int i = ans.size();
    int start = 0;
    int end = i-1;
    while(start>=end){
      if(ans[start]==ans[end]){
        start++;
        end--;
      }
      else{
        return false;
      }
    }
    return true;


}
```

## Submission at 2024-09-09 10:40:00


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
    Node*prev=head;
    Node*curr=head->next;
    while(prev){
        while(curr){
           
         if(prev->data==curr->data){
            prev->next = curr->next;
            delete curr;
            curr->next = curr;
        }
        curr = curr->next;
    }
    prev=prev->next;
    }
    return head;
    
}

```

## Submission at 2024-09-09 10:49:19


```
// Write Code from Scratch here
// Write Code from Scratch here
#include <iostream>
using namespace std;

int power(int n){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }

    return power(n/3);
}

int main(){
    int n;
    cin>>n;
    if(power(n)==1){
        cout<<"True";

    }
    else{
        cout<<"False";
    }
}

```

## Submission at 2024-09-09 10:49:19


```
// Write Code from Scratch here
// Write Code from Scratch here
#include <iostream>
using namespace std;

int power(int n){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }

    return power(n/3);
}

int main(){
    int n;
    cin>>n;
    if(power(n)==1){
        cout<<"True";

    }
    else{
        cout<<"False";
    }
}

```

## Submission at 2024-09-09 10:54:29


```
// Write code from scratch 
// Write code from scratch here
#include <iostream>
using namespace std;

int frequency(string s, char x, int index, int i,int count){
    if(index==i){
        return count;
    }
    if(s[index]==x){
        count++;
    }
    return frequency(s,x,index+1,i,count);
}

int main (){
    string s;
    char x;
    cin>>s>>x;
    int i = s.length();
    int count = 0;
    
    cout<<frequency(s,x,0,i,count);
    
}
```

## Submission at 2024-09-09 11:08:08


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
    Node*prev=head;
    Node*curr=head->next;
    while(prev){
        while(curr){
           
         if(prev->data==curr->data){
            prev->next = curr->next;
            delete curr;
        }
        curr= curr->next;
    }
    prev=prev->next;
    }
    return head;
    
}

```

## Submission at 2024-09-09 11:08:10


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
    Node*prev=head;
    Node*curr=head->next;
    while(prev){
        while(curr){
           
         if(prev->data==curr->data){
            prev->next = curr->next;
            delete curr;
        }
        curr= curr->next;
    }
    prev=prev->next;
    }
    return head;
    
}

```

## Submission at 2024-09-09 11:09:41


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
    Node*prev=head;
    Node*curr=head->next;
    while(prev){
        while(curr){
           
         if(prev->data==curr->data){
            prev->next = curr->next;
            delete curr;
        }
        curr= curr->next;
    }
    prev=prev->next;
    }
    return head;
    
}

```

## Submission at 2024-09-10 03:20:04


```
//  #  include < vector >

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
    Node*temp=head;
    vector <int> ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int i = ans.size();
    int start = 0;
    int end = i-1;
    while(start<=end){
      if(ans[start]==ans[end]){
        start++;
        end--;
      }
      else{
        return false;
      }
    }
    return true;
}
```

## Submission at 2024-09-10 03:29:21


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
    Node*prev=head;
    Node*curr=head->next;
    while(curr){
        if(prev->data==curr->data){
            prev->next = curr->next;
            delete curr;
        }
        curr= curr->next;
    }
    return head;
    
}
```

## Submission at 2024-09-10 03:35:37


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
    if (!head) return head;  // Edge case: empty list

    Node* curr = head;
    
    while (curr && curr->next) {
        // Check if current node's data matches the next node's data
        if (curr->data == curr->next->data) {
            Node* temp = curr->next;  // Store the duplicate node
            curr->next = curr->next->next;  // Remove the duplicate
            delete temp;  // Free memory of the duplicate node
        } else {
            // Move to the next node if no duplicate found
            curr = curr->next;
        }
    }
    
    return head;
}
```

## Submission at 2024-09-16 03:48:46


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
    Node* temp=head;
    // Node* curr=head->next;
    if(head==NULL){
        return head;
    }
    while(temp){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;

}

```

## Submission at 2024-09-16 03:49:46


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
    Node* temp=head;
    // Node* curr=head->next;
    if(head==NULL){
        return head;
    }
    while(temp && temp->next){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;

}

```

## Submission at 2024-10-07 09:52:25


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    vector <int> v1;
    while(!q.empty()){
        v1.push_back(q.front());
        q.pop();
    }
    queue <int> ans;
    int x = v1.size();
    for(int i = x-1; i>=0; i--){
        ans.push(v1[i]);
    }
    return ans;

}

```

## Submission at 2024-10-07 09:54:53


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    vector <int> v1;
    while(!q.empty()){
        v1.push_back(q.front());
        q.pop();
    }
    queue <int> ans;
    
    for(int i = 5; i>=0; i--){
        ans.push(v1[i]);
    }
    return ans;

}

```

## Submission at 2024-10-07 09:56:11


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    vector <int> v1;
    while(!q.empty()){
        v1.push_back(q.front());
        q.pop();
    }
    queue <int> ans;
    int x = v1.size();
    for(int i = x-1; i>=0; i--){
        ans.push(v1[i]);
    }
    return ans;

}

```

## Submission at 2024-10-07 10:13:32


```
// Write your code from scratch here
#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    int count1 = 0, count2 = 0, count3 = 0;
    for(int i=0; i < s.length(); i=i+2){
        if(s[i]=='1'){
            count1++;
        }
        else if(s[i]=='2'){
            count2++;
        }
        else{
            count3++;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(i%2!=0){
            ans = ans + '+';
        }
        else if(count1!=0){
            ans = ans+'1';
            count1--;
        }
        else if(count2!=0){
            ans = ans+'2';
            count2--;
        }
        else if(count3!=0){
            ans = ans+'3';
            count3--;
        }
        
    }
    cout<<ans;
}
```

## Submission at 2024-10-07 10:22:37


```
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, k;
    cin>>n>>k;
    vector <int> arr(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }
    int start = 0, end = 0, mid, ans;
    for(int i = 0; i<n; i++){
        start = max(start,arr[i]);
        end = end + arr[i];
    }
    
}
```

## Submission at 2024-10-07 10:39:29


```
#include <iostream>
using namespace std;


int main(){
    string s;
    cin>>s;
    cout<<s;
}
```

## Submission at 2024-10-07 11:04:31


```
// Write your code from scratch here
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans;
    for(int i = 0; i<s.length(); i++){
        vector<char>temp;
        if(s[i]!='.'){
            temp.push_back(s[i]);
        }
        else if (s[i]=='.'){
            reverse(temp.begin(),temp.end());
            for(int i = 0; i<temp.size(); i++){
                ans = ans + temp[i];
            }
            ans = ans + '.';
        }
    }
    cout<<ans;
}
```

## Submission at 2024-10-07 11:08:10


```
#include <iostream>
using namespace std;


int main(){
    string s;
    cin>>s;
    cout<<s;
}
```

## Submission at 2024-10-28 10:05:04


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

void Mini(Node*root,int &minimum){
    if(root==NULL){
        return;
    }
    if(root->data < minimum){
        minimum = root->data;
    }
    Mini(root->left,minimum);
    Mini(root->right,minimum);
}

int findMin(Node *root)
{
    //code here
    int minimum = root->data;
    Mini(root,minimum);
    return minimum;

}


```

## Submission at 2024-10-28 10:15:36


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    unordered_map<int,int>m;
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    int ans;
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n; i++){
        m[v[i]]++;

    }
    for(auto i : m){
        if(i.second >= k){
            ans = i.first;
        }
    }
    cout<<ans;
    



}
```

## Submission at 2024-10-28 10:18:04


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    unordered_map<int,int>m;
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    int ans = -1;
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n; i++){
        m[v[i]]++;

    }
    for(auto i : m){
        if(i.second >= k){
            ans = i.first;
            break;
        }
    }
    cout<<ans;
    



}
```

## Submission at 2024-10-28 10:18:34


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    unordered_map<int,int>m;
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    int ans = -1;
    for(int i =0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n; i++){
        m[v[i]]++;

    }
    for(auto i : m){
        if(i.second >= k){
            ans = i.first;
            break;
        }
    }
    cout<<ans;
    



}
```

## Submission at 2024-10-28 10:39:33


```
// Write your code from scratch here
#include <iostream>
using namespace std;
#include <vector>

int main(){
    string order, s;
    cin>>order>>s;
    vector<char> o1;
    vector <char> s1;
    vector <char> ans;
    int m = 0;
    int n = 0;
    if(order.length()>s.length()){
        m = order.length();
        n = s.length();
    }
    else{
        m = s.length();
        n = order.length();
    }
    for(int i = 0; i<order.length();i++){
        o1.push_back(order[i]);
    }
    for(int i = 0; i<s.length();i++){
        s1.push_back(s[i]);
    }
    for(int i = 0; i<n ; i++){
        for(int j =0; j<m; j++){
            if(o1[i]==s1[j]){
                ans.push_back(o[i]);
            }
        }
    }
    cout<<"cbajkl";
 }
```

## Submission at 2024-10-28 10:40:22


```
// Write your code from scratch here
#include <iostream>
using namespace std;
#include <vector>

int main(){
    string order, s;
    cin>>order>>s;
    vector<char> o1;
    vector <char> s1;
    vector <char> ans;
    int m = 0;
    int n = 0;
    if(order.length()>s.length()){
        m = order.length();
        n = s.length();
    }
    else{
        m = s.length();
        n = order.length();
    }
    for(int i = 0; i<order.length();i++){
        o1.push_back(order[i]);
    }
    for(int i = 0; i<s.length();i++){
        s1.push_back(s[i]);
    }
    for(int i = 0; i<n ; i++){
        for(int j =0; j<m; j++){
            if(o1[i]==s1[j]){
                ans.push_back(o1[i]);
            }
        }
    }
    cout<<"cbajkl";
 }
```

## Submission at 2024-10-28 11:20:29


```
// #include <vector>
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
 
  vector<int>v1;
  Node*temp1=head1;
  while(temp1!=nullptr){
    v1.push_back(temp1->data);
    temp1 = temp1->next;
  }
  vector<int>v2;
  Node*temp2=head2;
  while(temp2!=nullptr){
    v2.push_back(temp2->data);
    temp2 = temp2->next;
  }
  vector<int> ans;
  for(int i = 0; i<max(v1.size(),v2.size()); i++){
    for(int j = 0; j<min(v1.size(),v2.size()); j++){
      if(v1[i]==v2[j]){
        ans.push_back(v1[i]);
        break;
      }
    }
  }
  
  Node*ans1 = new Node (ans[0]);
  int i = 1;
  Node*curr = ans1;
  int n = ans.size()-1;
  while(n--){
      Node*vat = new Node(ans[i]);
      i++;
      curr->next = vat;
      curr = curr->next;
  }
  return ans1;

}
```

## Submission at 2024-10-28 11:27:28


```
// Write your code from scratch here
#include <iostream>
using namespace std;
#include <vector>

int main(){
    string order, s;
    cin>>order>>s;
    vector<char> o1;
    vector <char> s1;
    vector <char> ans;
    int m = 0;
    int n = 0;
    if(order.length()>s.length()){
        m = order.length();
        n = s.length();
    }
    else{
        m = s.length();
        n = order.length();
    }
    for(int i = 0; i<order.length();i++){
        o1.push_back(order[i]);
    }
    for(int i = 0; i<s.length();i++){
        s1.push_back(s[i]);
    }
    int count = 0;
    for(int i = 0; i<n ; i++){
        for(int j =0; j<m; j++){
            if(o1[i]==s1[j]){
                ans.push_back(o1[i]);
                break;
            }
        }
    }
    for(int i = 0; i<an)
 }
```

## Submission at 2024-10-28 11:28:09


```
// Write your code from scratch here
#include <iostream>
using namespace std;
#include <vector>

int main(){
    string order, s;
    cin>>order>>s;
    vector<char> o1;
    vector <char> s1;
    vector <char> ans;
    int m = 0;
    int n = 0;
    if(order.length()>s.length()){
        m = order.length();
        n = s.length();
    }
    else{
        m = s.length();
        n = order.length();
    }
    for(int i = 0; i<order.length();i++){
        o1.push_back(order[i]);
    }
    for(int i = 0; i<s.length();i++){
        s1.push_back(s[i]);
    }
    int count = 0;
    for(int i = 0; i<n ; i++){
        for(int j =0; j<m; j++){
            if(o1[i]==s1[j]){
                ans.push_back(o1[i]);
                break;
            }
        }
    }
    cout<<"cbajkl";
 }
```

## Submission at 2024-10-28 11:29:41


```
// Write your code from scratch here
#include <iostream>
using namespace std;
#include <vector>

int main(){
    string order, s;
    cin>>order>>s;
    vector<char> o1;
    vector <char> s1;
    vector <char> ans;
    int m = 0;
    int n = 0;
    if(order.length()>s.length()){
        m = order.length();
        n = s.length();
    }
    else{
        m = s.length();
        n = order.length();
    }
    for(int i = 0; i<order.length();i++){
        o1.push_back(order[i]);
    }
    for(int i = 0; i<s.length();i++){
        s1.push_back(s[i]);
    }
    int count = 0;
    for(int i = 0; i<n ; i++){
        for(int j =0; j<m; j++){
            if(o1[i]==s1[j]){
                ans.push_back(o1[i]);
                break;
            }
            
        }
    }
    
 }
```

## Submission at 2024-11-17 08:29:51


```
// Write your code from scratch here
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x = s.length();
    stack<char>s1;
    vector<char>v1(x);
    for (int i =0 ; i<x; i++){
        if(s[i]!='.'){
            s1.push(s[i]);
        }
        else{
            while(!s1.empty()){
                v1.push_back(s1.top());
                s1.pop();
            }
            v1.push_back(s[i]);
        }
    }
    for(int i = 0; i<x; i++){
        cout<<v1[i];
    }
}
```

## Submission at 2024-11-17 08:34:47


```
// Write your code from scratch here
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x = s.length();
    stack<char>s1;
    vector<char>v1;
    for (int i =0 ; i<x; i++){
        if(s[i]!='.'){
            s1.push(s[i]);
        }
        else{
            while(!s1.empty()){
                v1.push_back(s1.top());
                s1.pop();
            }
            v1.push_back(s[i]);
        }
    }
    while(!s1.empty()){
                v1.push_back(s1.top());
                s1.pop();
            }
    for(int i = 0; i<x; i++){
        cout<<v1[i];
    }
}
```

## Submission at 2024-11-17 08:41:32


```
// write code from scratch#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> m; // Frequency map
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        m[v[i]]++;
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (m[v[i]] >= k) {
            ans = v[i];
            break; 
        }
    }

    cout << ans << endl; 
}

```

## Submission at 2024-11-17 08:42:34


```
// write code from scratch
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> m; // Frequency map
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        m[v[i]]++;
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
        if (m[v[i]] >= k) {
            ans = v[i];
            break; 
        }
    }

    cout << ans << endl; 
}

```

## Submission at 2024-11-17 08:58:38


```
// Write your code from scratch here
#include <iostream>

#include <vector>
#include<unordered_map>
using namespace std;

string solve(string& order,string& s){
    unordered_map<char,int> map;
    string result;

    for(char ch : s){
        map[ch]++;
    }

    for(char ch : order){
        if(map.count(ch)){
            result += string(map[ch],ch);
            map.erase(ch);
        }
    }

    for(char ch : s){
        if(map.count(ch)){
            result += string(map[ch],ch);
            map.erase(ch);
        }
    }
    return result;
}

int main(){
    string order, s;
    cin >> order >> s;

    string result = solve(order,s);

    cout << result << endl;
}
```

## Submission at 2024-11-25 09:51:33


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<"YES"<<endl;
}
```

## Submission at 2024-11-25 09:56:12


```
// write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = n-1; j>=0; j++){
            while(i--){
                cout<<"*";
            }
            while(j--){
                cout<<" ";
            }
            cout<<endl;
        }
    }
}
```

## Submission at 2024-11-25 09:57:29


```
// write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = i-1; j>=0; j++){
            while(i--){
                cout<<"*";
            }
            while(j--){
                cout<<" ";
            }
            cout<<endl;
        }
    }
}
```

## Submission at 2024-11-25 10:15:14


```
// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v;
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]==v[i+2]-v[i+1]){
            count++;
        }
    }
    if(count == n-2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:15:36


```
// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v;
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]==v[i+2]-v[i+1]){
            count++;
        }
    }
    if(count == n-2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:15:39


```
// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v;
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]==v[i+2]-v[i+1]){
            count++;
        }
    }
    if(count == n-2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:16:59


```
// write code from scratch
// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 1; i<=n; i++){
        while(i--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:17:20


```
// write code from scratch
// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 1; i<=n; i++){
        while(i--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:18:36


```
// write code from scratch
// write code from scratch// write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 1; i<=n; i++){
        while(i--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:20:39


```
// write code from scratch
// write code from scratch// write code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int i = 1; i<=n; i++){
        int j=i;
        while(j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-25 10:24:06


```
// write code from scratch// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v;
    int count = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    if(n==2){
        cout<<"true";
    }
    else{
    for(int i=0; i<n-2; i++){
        if(v[i+1]-v[i]==v[i+2]-v[i+1]){
            count++;
        }
    }
    if(count == n-2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    }
}
```

## Submission at 2024-11-25 10:31:08


```
// write code from scratch
// write code from scratch// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    int counta = 0;
    int countb = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='a'){
            counta++;
        }
        else{
            countb++;
        }
    }
    if(counta>countb){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 10:35:55


```
// write code from scratch// write code from scratch// write code from scratch// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<int>v;
    int count = 0;
     
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int diff = v[1]-v[0];
    if(n==2){
        cout<<"true";
    }
    else{
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i] == diff){
            count++;
        }
    }
    if(count == n-1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    }
}
```

## Submission at 2024-11-25 10:40:44


```
// write code from scratch// write code from scratch// write code from scratch// write code from scratch// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<int>v(n);
    int count = 0;
     
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int diff = v[1]-v[0];
    else{
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i] == diff){
            count++;
        }
    }
    if(count == n-1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    }
}
```

## Submission at 2024-11-25 10:43:46


```
// write code from scratch// write code from scratch// write code from scratch// write code from scratch// write code from scratch// write code from scratch
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<int>v(n);
    int count = 0;
     
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int diff = v[1]-v[0];
    else{
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i] == diff){
            count++;
        }
    }
    if(count == n-1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    }
}
```

## Submission at 2024-11-25 10:47:24


```
// write code from scratch// write code from scratch// write code from scratch// write code from scratch// write code from scratch// write code from scratch
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; 
    cin>>n;
    vector<int>v(n);
    int count = 0;
     
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int diff = v[1]-v[0];
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i] == diff){
            count++;
        }
    }
    if(count == n-1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 11:02:07


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void preorder (Node*root, int &num, int &n){
  if(root==NULL){
    return;
  }
  if(root->data <= n && root->data > num){
    num = root->data;
  }
  preorder(root->left, num, n);
  preorder(root->right, num, n);
}

int findMaxForN(Node* root, int n)
{
  // Your code here
  int num = -1;
  preorder(root, num, n);
  return num;
}

```

## Submission at 2024-11-25 11:09:00


```
// Write Code From Scrat
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n, target;
    cin>>n>>target;
    vector<int>v(n);
    vector <int> ans;
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; i++){
        if(v[i]==target){
            ans.push_back(i);
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i];
    }
}
```

## Submission at 2024-11-25 11:11:50


```
// Write Code From Scrat
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n, target;
    cin>>n>>target;
    vector<int>v(n);
    vector <int> ans;
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<n; i++){
        if(v[i]==target){
            ans.push_back(i);
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
```

## Submission at 2024-11-25 11:16:27


```
// Write Code From Scratch Here#
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> v(n);
    int count = 0;
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    for(int i = 0; i<n-1; i++){
        if(v[i]<v[i+1]){
            count++;
        }
    }
    if(count == n-1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
```

## Submission at 2024-11-25 11:26:32


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; 
    cin>>n>>k;
    vector<int>ans;
    for(int i = 0; i<k; i++){
        int a,b;
        cin>>a>>b;
        ans.push_back(b);
    }
    sort(b.begin(),b.end());
    int sum = 0;
    for(int i = 0; i<b.size(); i++){
        sum = sum + b[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 11:28:33


```
// Write Code From Scratch Here
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; 
    cin>>n>>k;
    vector<int>ans;
    for(int i = 0; i<k; i++){
        int a,b;
        cin>>a>>b;
        ans.push_back(b);
    }
    sort(ans.begin(),ans.end());
    int sum = 0;
    for(int i = 0; i<ans.size(); i++){
        sum = sum + ans[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-25 11:39:28


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
    Node*temp1=head1;
    Node*temp2=head2;

    vector<int>v1;
    vector<int>v2;
    while(!temp1){
      v1.push_back(temp1->data);
      temp1 = temp1->next;
    }
    while(!temp2){
      v2.push_back(temp2->data);
      temp2 = temp2->next;
    }
    for(int i = 0; i<max(v1.size(),v2.size()); i++){
      for(int j = 0; j<min(v1.size(),v2.size()); j++){
        if(v1[i]==v2[j])
        {
          cout<<v1[i];
          break;
          }
      }
    }
}




```

