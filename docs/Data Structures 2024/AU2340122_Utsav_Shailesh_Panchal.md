## Submission at 2024-08-05 10:26:36


```
// Write your Java code here from the scratch
import java.io.*;
import java.util.scanner;
public class main {
    public static void main(String[] args) {      
    Scanner input = new Scanner (System.in);
    String Name = input.next() ;
    System.out.println("Hello" + Name + "!");
    }   

}
```

## Submission at 2024-08-05 10:46:03


```
// Write your Java code here from the scratch
import java.util.Scanner ;

public class Main{   
    public static void main (String [] args){
            Scanner input = new Scanner (System.in);
            String name = input.next();
            System.out.println( "hello" + name + "!");
    }

}

```

## Submission at 2024-08-05 10:47:11


```
// Write your Java code here from the scratch
import java.util.Scanner ;

public class Main{   
    public static void main (String [] args){
            Scanner input = new Scanner (System.in);
            String name = input.next();
            System.out.println( "hello" + name + "!");
    }

}

```

## Submission at 2024-08-12 09:58:39


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if ( x==0 || x==1) {
        return x ; 
    } 
    return fibonacci(x-1 ) + fibonacci(x-2) ;
    }

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:32:38


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {

    if (n==1){
        return true ;
    }
    if ( n % 2 != 0) {
        return false ;
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

## Submission at 2024-08-12 11:08:47


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {

    if (n==1){
        return true ;
    }
    if ( n % 2 != 0 || n<=0) {
        return false ;
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

## Submission at 2024-09-02 10:48:22


```
#include<iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    struct ListNode* next;

    ListNode(x){
    val = x ;
    next = nullptr ;
}
};
 

class Solution {
    public:
    void display(ListNode*head) {
        
        ListNode* temp = head ;
        
        while(temp!= NULL){
            
            cout<< temp->val <<" ";
            
            temp = temp->next ;
                
        }
        
    }       
};
    


```

## Submission at 2024-09-02 10:56:50


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

class Solution {
  public:
    
    void display(ListNode *head) {
        
        ListNode * temp = head ;
        
        while(temp!=NULL){
            
            cout<<temp->val<<" ";
            
            temp = temp->next;
            
            
        }    
    }
} ;

    return result;
}

```

## Submission at 2024-09-02 10:57:55


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

class Solution {
  public:
    
    void display(ListNode *head) {
        
        ListNode * temp = head ;
        
        while(temp!=NULL){
            
            cout<<temp->val<<" ";
            
            temp = temp->next;
            
            
        }    
    }
} ;

}

```

## Submission at 2024-09-02 11:05:19


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

class Solution {
  public:
    // Function to display the elements of a linked list
    void display(ListNode *head) {
        
        ListNode *temp = head ;
        
        while(temp!= NULL){
            
            cout<<temp->val<<" ";
            
            temp = temp->next;
            
            
        }
        
            
        }
    } ;
}

```

## Submission at 2024-09-09 05:05:25


```
#include <iostream>
#include<cmath>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n==0)
        return false;
        
        while(n>0){
            if(n==1)
            return true;

            if(n%2==0){
                while((n/2)%2 ==0)
                return true;
            }
            else{
                return false;
            }
            
            
            }
    }

int main() {
    int n;
    cout<<"Enter the number: "<<endl ;
    cin >> n;


    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-09-09 05:27:14


```
#include <iostream>

using namespace std;

int fibonacci(int n) {
    // write your code here
    int a = 0;
    int b = 1;
    int c , i ;

    if (n==0)
        return 0;
    if (n==1)
        return 1;
    for (i=2, i<=n , i++){

        c = a + b ;
        a = b;
        b = c;
        return c;
    }
    
}

int main() {
    int n;
    cout<<"Enter the number to print Fibonacci: "<<endl ;
    cin >> n;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(n) << endl;

    return 0;
}

```

## Submission at 2024-09-09 07:00:08


```
// Write code from scratch
#include<iostream>
using namespace std;

bool ispalindrome(string s) {
    int start = 0 ;
    int end = s.length() -1 ;
    
    while (start < end) {
        while(s[start] != s[end]) {
            return false;
        
        }
        start++;
        end--;
    }
}

int main(){
    string s;
    cin>> s;

    if(ispalindrome(s)){
        cout<< "YES";
    }
    else{
        cout<< "NO" ;
    }

 }
 
```

## Submission at 2024-09-09 10:09:56


```
#include<iostream>
using namespace std;

int n;


int powofthree(int n){

    if( n==0)  
        cout<<"False"<<endl;
    if (n==1)
        cout<<"True"<<endl;
    if (n%3 == 1 || n%3 ==2)
        cout<<"false"<<endl;
    if(n%3==0)
    cout<<"True"<<endl;
    
return 0;
}




int main(){

cin>> n; 

powofthree(n);
cout<< powofthree(n) <<endl;

    return 0;
}
```

## Submission at 2024-09-09 10:37:45


```
#include<iostream>
using namespace std;

string s;
int count= 0;

int start ;
int end = s.length();

int countNo(){

    for( start= 0, start<=100, start++){
        for( end=s.length, end>=1, end--){
            
            if(s.[end] = s.[start]){
                count++;
                start++;
                end--;
            }

        }

    }

return 0;
}

int main(){

cin>> s;
countNo(s);
cout<<countNo <<endl;


}
```

## Submission at 2024-09-09 10:53:03


```
#include<iostream>
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

//traversing a linked list
bool insertathead(Node *head, int n) {

  Node *head = temp;
  temp->next = head;

  if(temp != NULL)
  temp->next = head ;
  temp = head;

}
bool isPalindrome(Node *head)


int main(){
return 0;
}  


```

## Submission at 2024-09-09 11:06:49


```
// Write Code from Scratch here
#include<iostream>
using namespace std;

int n;


int powofthree(int n){

    if( n==0)  
        return false;
         cout<<"false"<<endl;
    if (n==1)
        return true;
        cout<<"True"<<endl;
    if (n%3 == 1 || n%3 ==2)
        return false;
        cout<<"false"<<endl;
        
    if(n%3==0)
        return true;
        cout<<"True"<<endl;

return 0;
}




int main(){

cin>> n; 

powofthree(n);
cout<< powofthree(n) <<endl;

    return 0;
}
```

## Submission at 2024-10-07 10:42:30


```
#include<iostream>
#include<stack>
using namespace std ;

stack<char> s ;



char Solution(char n){

    if(s.top() ="3"){
       s.pop(); 
    }
    else if(s.top() = "+")
        s.pop();

    else if(s.top() ="2"){
       s.pop(); 
    }
    else if(s.top() = "+")
        s.pop();
    else if(s.top() ="1"){
       s.pop(); 
    }
    else (){
       s.push();    
    }

return n ;

}


char main(){  

char n;
cout<<"Enter the sequece"<< endl;
cin>> n;

Solution(n);

cout<< Solution(n) << endl ;

}


```

## Submission at 2024-10-07 10:54:03


```
// Function to reverse the queue.
#include<iostream>
#include<queue>
using namespace std ;



queue<int> q;

int rev(queue<int> q){
    for (i=0; i<=q.size(), i++){
    q.first() -> q.last();
    }

}


queue<int> rev(queue<int> q){

    int n;
    cout<< "Enter the size of the queue:"<<endl;
    cin>> n;
    



    // Write your code here

}

```

## Submission at 2024-10-07 10:55:47


```
// Function to reverse the queue.
#include<iostream>
#include<queue>
using namespace std ;



queue<int> q;

int rev(queue<int> q){
    for (i=0; i<=q.size(), i++){
    q.first() -> q.last();
    }

}


queue<int> rev(queue<int> q){

    int n;
    cin<< n ;
    cout<< 6 2 10 1 3 4 <<endl;
    
    



    // Write your code here

}

```

## Submission at 2024-10-28 10:20:53


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

int findMin(Node *root){
    //code here
    
    if( root == NULL){
        return root-> data;
    }

    int findMin(root-> data, ans);  
    return findMin(root);

};

int minimum(Node *root){
    if( root-> data == NULL){
        return 0;
    }

    int lefttree = minimum(root -> data);
    int righttree = minimum(root -> data);
    int ans = min(lefttree, righttree);
    return ans; 
    
};


```

## Submission at 2024-10-28 10:26:03


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

class solution {
int findMin(Node *root){
    //code here
    
    if( root == NULL){
        return 0;
    }

    int ans = findMin(root, ans);  
    return ans;

}

int minimum(Node *root){

    if( root == NULL){
        return 0;
    }

    int lefttree = minimum(root -> left);
    int righttree = minimum(root -> right);
    int ans = minimum(lefttree, righttree);
    return ans; 
    
}

};

```

## Submission at 2024-10-28 10:28:29


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
    if(root == NULL){
        return 0;
    }
}


```

## Submission at 2024-10-28 10:29:19


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
    if(root == NULL){
        return NULL ;
    }
}


```

## Submission at 2024-10-28 10:30:25


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
    if(root == NULL){
        return -1 ;
    }


}


```

## Submission at 2024-10-28 10:37:28


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
    int ans = 0;

    if(root == NULL){
        return 0 ;
    }

    int ans = min(x,ans);

    return ans;


}

int min(Node *root,){
     if(root == NULL){
        return 0 ;
    }
    int l = min(root-> left);
    int r = min(root-> right);

    int ans = min(root->data, [min(l,r)]);

    return ans;



}


```

## Submission at 2024-10-28 10:45:16


```
// write code from scratch
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


int occurance (Node *root){
    if (root == NULL){
        return -1;
    }
}
```

## Submission at 2024-10-28 10:48:35


```
// write code from scratch
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


int occurance (Node *root){
    if (root == NULL){
        return 0;
    }

    return 0;
}


int Noofoccurrance( Node * root){


}
```

## Submission at 2024-10-28 10:52:02


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

## Submission at 2024-10-28 10:58:37


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
int height(Node *root){
     if (root == NULL){
        return 0;
     }

    int l = height(root-> left);
    int r = height(root-> right);
    int ans = max(l,r) + 1;

return ans;
}




int findMin(Node *root)
{
    //code here
    if (root == NULL){
        return 0;
    }

return 0;
}


```

## Submission at 2024-11-04 09:53:16


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

int findMin(Node *root) {
    //code here

    if (root == NULL){
        return INT_MAX ;
    }

    int lmin = findMin(root->left);
    int rmin = findMin(root->right);

    return min (root->data,min(lmin,rmin));

}


```

## Submission at 2024-11-04 10:04:14


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

int findMin(Node *root) {
    //code here

    if (root == NULL){
        return INT_MAX ;
    }

    int lmin = findMin(root->left);
    int rmin = findMin(root->right);

    return min (root->data ,min(lmin,rmin));

}


```

## Submission at 2024-11-04 10:09:21


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

    if (root == NULL)
    {
        return INT_MIN;
    }

    int lmax = findMax(root->left);
    
    int rmax = findMax(root->right);

    return max(root->data,max(lmax,rmax));
}


```

## Submission at 2024-11-04 10:47:01


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
void postOrderVector(Node* root, vector<int> &arr) {
    if (root == NULL){
      return;
    }
    postOrderVector(root->left, arr);

    postOrderVector(root->right, arr);

    arr.push_back(root->data);
}

vector <int> postOrder(Node* root) {
  
    if (root == NULL){
      return {} ;
    }

    vector<int> result;

    postOrderVector(root, result);

    return result;
}



```

## Submission at 2024-11-04 11:03:28


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

bool isMirror(TreeNode* left, TreeNode* right) {

    if (!root->left && !root->right) {
    return true;
    }

    if (!root->left || !root->right){ 
    return false;
    }

    return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right,right->left);
}

bool isSymmetric(struct Node* root){

    // Code here
    if(!root){
        return true ;
    }
    return isMirror(root-> left, root->right);

}


```

## Submission at 2024-11-18 09:52:09


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


int maxDepth(Node* root)
{
  // Your code here */

        if(root == NULL){
            return 0;

        }
        int lh = maxDepth(root-> left);
        int rh = maxDepth(root-> right);

        int ans = max(lh , rh) + 1;

        return ans ;
    }

```

## Submission at 2024-11-25 10:08:15


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
 if(root == NULL) return 0;







 else{
 return -1;
 }
}

```

## Submission at 2024-11-25 10:27:00


```
// write code from scratch
#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

char arithmaticProg( int n ){

    vector<int> arr ;

    if(arr.empty()) return false ;
    int i ;

    for ( i=0; i<= n; i++){

        if (arr[i] = arr[i-1] + arr[i-2]){
        return true;

        }
        else {
            return false ;
        }



    }

}

int main(){

    return arithmaticProg() ;
}
```

## Submission at 2024-11-25 10:29:27


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
  if(!root) return 0;
}

```

## Submission at 2024-11-25 10:36:38


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
  if(root == NULL) return -1 ;

int l = findMaxForN(root->left, n);
int r = findMaxForN(root->right, n);

ans = max(l,r);

return max(ans, n);

}

```

## Submission at 2024-11-25 10:45:15


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
  if(root == NULL) return -1 ;

int l = findMaxForN(root->left, n);
int r = findMaxForN(root->right, n);
int n = root->data ;

int ans = max( max(l,r), n) ;

return ans ;

}

```

## Submission at 2024-11-25 10:56:06


```
// write code from scratch

#include <iostream>
#include <vector>
#include <queue>

using namespace std ;


int main(){
    int n;
    cout<<"enter the number : "<< endl;
    cin >> n;

    int i,j ;

    for(i= 0; i<=n ; i++){
        cout<<"*" * n<< endl;
        for(j= n + 1 ; j<= n-i ; j++){
            cout<<" "<< endl;
        }
    }
    return 0;


}
```

## Submission at 2024-11-25 11:04:15


```
// write code from scratch

#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

char main(){
 
vector<int> arr;
queue<int> q;
string s ;

cin>> s;

cout<< "a"


}



```

## Submission at 2024-11-25 11:04:28


```
// write code from scratch

#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

char main(){
 
vector<int> arr;
queue<int> q;
string s ;

cin>> s;

cout<< "a"<< endl;


}



```

## Submission at 2024-11-25 11:06:12


```
// write code from scratch

#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

char main(){
 
vector<int> arr;
queue<int> q;
string s ;

cin>> s;
arr.push_back(s);



cout<< "a" << endl;


}



```

## Submission at 2024-11-25 11:07:17


```
// write code from scratch

#include <iostream>
#include <vector>
#include <queue>
using namespace std ;

char main(){
 
vector<int> arr;
queue<int> q;
string s ;

cin>> s;
arr.push_back(s);



cout<< arr[] << endl;


}



```

## Submission at 2024-11-25 11:12:39


```
// write code from scratch

char print(int n){



for(i=0; i<=n ; i++){
cout<<"*"<< endl;
}
}

void main(){

cin>> n;

cout<< print(n)<< endl;





}
```

## Submission at 2024-11-25 11:14:48


```
// write code from scratch

char print(int n){


for(i=0; i<=n ; i++){
cout<<"*"<< endl;
}
}

void main(){

if (n = 0){
    return ;
}

return  n*print(n) ;





}
```

## Submission at 2024-11-25 11:15:05


```
// write code from scratch

char print(int n){


for(i=0; i<=n ; i++){
cout<<"*"<< endl;
}
}

void main(){

if (n = 0){
    return ;
}

return print(n) ;





}
```

## Submission at 2024-11-25 11:16:00


```
// write code from scratch

void main(){

if (n = 0){
    return ;
}

else {
    cout<<"*"<< endl;
    cout<<"*"<< endl;
    cout<<"*"<< endl;
    cout<<"*"<< endl;
    cout<<"*"<< endl;
}





}
```

## Submission at 2024-11-25 11:22:05


```
// write code from scratch

void main(){

for (i = 0; i<=n, i++){
cout<<"*"<<endl ;

for( j =i+1 ; j<= n; J++){
    cout<<"  "<< endl ;

}

}
}
```

## Submission at 2024-11-25 11:24:38


```
// write code from scratch

char printstar(int n){

int i,j ;    

for (i = 0; i<=n, i++){
cout<< i*"*" <<endl ;

for( j =i+1 ; j<= n; J++){
cout<<"  "<< endl ;

}

}
}
```

## Submission at 2024-11-25 11:30:04


```
// write code from scratch

char printstar(int n){

int i,j ;    

for (i = 0; i<=n, i++){
    cout<< "*" <<endl ;

    for( j =i+1 ; j<= n; J++){
    cout<< "  "<< endl ;
    }
  }
}



```

