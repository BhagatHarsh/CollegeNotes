## Submission at 2024-08-09 04:44:20


```
#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    cout<<"Hello "<<n<<"!";
}
```

## Submission at 2024-08-09 04:45:44


```
#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    cout<<"Hello "<<n<<"!";
}
```

## Submission at 2024-08-09 04:57:57


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string name;
    for(int i=0;i<n;i++){
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-09 05:06:36


```
#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    cout<<"Hello "<<n<<"!";
}
```

## Submission at 2024-08-09 05:13:40


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string name;
    for(int i=0;i<n;i++){
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
}
```

## Submission at 2024-08-16 04:53:50


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x<0){
        return -1;
    }
    if(x==0 || x==1){
        return x;
    }
    return fibonacci(x-2)+fibonacci(x-1);



        }



int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:15:33


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==2 || n==1){
        return true;
    }
    if(n<=0 || n%2!=0){
        return false;}
    
    else{
        isPowerOfTwo(n/2);}     
    }

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-22 11:59:23


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void helper(vector<int> &nums, vector<int> &current, vector<vector<int>> &result, int freq[])
{
    if (current.size() == nums.size())
    {
        result.push_back(current);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])
        {
            freq[i] = 1;
            current.push_back(nums[i]);
            helper(nums, current, result, freq);
            current.pop_back();
            freq[i] = 0;
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> current;
    vector<vector<int>> result;
    int freq[nums.size()];
    for (int i = 0; i < nums.size(); i++)
        freq[i] = 0;
    helper(nums, current, result, freq);
    return result;
}
int main()
{
    vector<int> nums;
    int num;
    while (cin >> num)
    {
        nums.push_back(num);
        if (cin.get() == '\n')
            break;
    }
    vector<vector<int>> permutations = permute(nums);

    cout << "[";
    for (int i = 0; i < permutations.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++)
        {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i < permutations.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-22 12:44:42


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ParanthesesCombinations(vector<string>& result, string current, int open, int close, int max) {
    if (current.length() == max * 2) {
        result.push_back(current);
        return;
    }
    if (open < max) {
        ParanthesesCombinations(result, current + "(", open + 1, close, max);
    }
    if (close < open) {
        ParanthesesCombinations(result, current + ")", open, close + 1, max);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    ParanthesesCombinations(result, "", 0, 0, n);
    return result;
}

int main() {
    int n = 3;
    vector<string> result = generateParentheses(n);
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";}
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-08-29 06:37:05


```
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int count=0;
    for(i=1 ; i<=n; i++){
        if(i%3==0 || i%5==0 || i%7==0){
            count=count+i;
        }

    }
    cout<<count;
}
```

## Submission at 2024-08-30 05:01:32


```
#include<iostream>
using namespace std;


    

int main(){
    int n,i;
    cin>>n;
    int a[n];
    int b[n];
    int c[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }
   
    for(i=0;i<n;i++){
        c[i]=max(a[i],b[i]);
    }
    for(i=0;i<n;i++){
        cout<<c[i]<<" ";
    }

    }

```

## Submission at 2024-08-30 05:57:06


```
#include<iostream>
using namespace std;


int pow(float x,int n){
    if(n=0){
        return 0;
    }
    else if(n>0){
        x=x*x;
        return pow(x,n-1);
    }
    else{
        x=1/x;
        return pow(x,n+1);
        }
    return x;
}


int main(){
    int n;
    float x;
    cin>>x,n;
    int a=pow(x,n);
    cout<<a;
}
```

## Submission at 2024-09-10 10:32:01


```
#include<iostream>
using namespace std;


int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0 || i%5==0 || i%7==0){
            sum=sum+i;
        }

    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int a=sum(n);
    cout<<a;
    

}
```

## Submission at 2024-10-04 05:27:43


```
#include<bits/stdl.h>
using namespace std;

void days(int arr, int n){
    int i,j;
    j=i+1;
    int k=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[i]<arr[j]){
                    cout<<1<<" ";
            }
                else if(arr[i]>arr[j]){
                    
                }
        }


    while(j<n){
        if(arr[i]<arr[j]){
            i++;
            k++;
            return k;
        }
        else if(arr[i]>arr[j])
        }



        if(arr[i]<arr[i+1])
            cout<<1;
        
    }

    }
        
    }
}



int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }


}
```

## Submission at 2024-10-04 05:53:11


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
        for(i=0;i<n;i++){
            for(j=i+1;j<n+1;j++)
                if(j=n){
                    cout<<0<<" ";
                }
                if(arr[i]<arr[j]){
                    cout<<1<<" ";
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j]){
                        j++;
                    }
                cout<<j+1<<" ";

                }
        }
    
    }

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}
```

## Submission at 2024-10-04 06:03:20


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
    int k=0;
    int b[n];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++)
                if(arr[i]<arr[j]){
                    b[i]=1;
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j]){
                        j++;
                        k++;

                    }
                b[i]=k+1;
                break;
                }
        }
        b[n-1]=0;
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}
```

## Submission at 2024-10-04 06:24:57


```
#include<iostream>
using namespace std;

int par(int arr[], int s, int e){
    int pivote=arr[s];

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[s]>arr[i]);
            count++;
}

    int index=count+s;
        


int main(){

}
```

## Submission at 2024-10-04 06:25:00


```
#include<iostream>
using namespace std;

int par(int arr[], int s, int e){
    int pivote=arr[s];

    int count=0;
    for(int i=0;i<n;i++){
        if(arr[s]>arr[i]);
            count++;
}

    int index=count+s;
        


int main(){

}
```

## Submission at 2024-10-16 08:10:45


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
    int k=0;
    int b[n];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++)
                if(arr[i]<arr[j]){
                    b[i]=1;
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j]){
                        j++;
                        k++;

                    }
                b[i]=k+1;
                break;
                }
        }
        b[n-1]=0;
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}

```

## Submission at 2024-10-16 08:40:38


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
    int k=1;
    int b[n];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    b[i]=1;
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j] && j<n){

                        
                        j++;
                        k++;
                        if(j=n){
                            k=0;
                            break;
                        }
                    }

                    }
                b[i]=k;
                break;
                }
        }
        b[n-1]=0;
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}

```

## Submission at 2024-10-16 08:41:23


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
    int k=1;
    int b[n];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    b[i]=1;
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j] && j<n){

                        
                        j++;
                        k++;
                        if(j==n){
                            k=0;
                            break;
                        }
                    }

                    }
                b[i]=k;
                break;
                }
        }
        b[n-1]=0;
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}

```

## Submission at 2024-10-16 08:42:09


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
    int k=1;
    int b[n];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    b[i]=1;
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j] && j<n){

                        
                        j++;
                        k++;
                        if(j=n){
                            k=0;
                            break;
                        }
                    }

                    }
                b[i]=k;
                break;
                }
        }
        b[n-1]=0;
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}

```

## Submission at 2024-10-16 08:43:37


```
#include<iostream>
using namespace std;

void days(int arr[], int n){
    int i,j;
    int k=1;
    int b[n];
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    b[i]=1;
                    break;
            }
                else if(arr[i]>arr[j]){
                    while(arr[i]>arr[j] && j<n){

                        
                        j++;
                        k++;
                        if(j=n){
                            k=0;
                            break;
                        }
                    }

                    }
                b[i]=k;
                break;
                }
        }
        b[n-1]=0;
    
    for(i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    days(arr,n);
    


}

```

## Submission at 2024-10-25 05:37:50


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
vector<int>v;
vector <int> postOrder(Node* root){
  if(root==NULL){
    return {};
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  v.push_back(root->val);
  return v;
}

```

## Submission at 2024-10-25 05:52:20


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
vector<int>ans;
vector <int> postOrder(Node* root){
  if(root==NULL){
    return {};
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->val);
  return ans;
}


```

## Submission at 2024-10-25 05:52:22


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
vector<int>ans;
vector <int> postOrder(Node* root){
  if(root==NULL){
    return {};
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->val);
  return ans;
}


```

## Submission at 2024-10-25 06:09:17


```
#include<bits/stdc++.h>
using namespace std;

bool pattern(char a, char b){
    int n=b.lenght();
    int m=a.lenght();
    int k=0;
        for(int i=0;i<n;i++){
            if(b[i]==" "){
                k++;
            }
        }
        if(k+1==m){
            

        }
        else{
            return false;
        }

    }



int main(){
    char a,b;
    cin>>a;
    cin.getline(b,300);


}
```

## Submission at 2024-10-25 06:45:01


```
#include<bits/stdc++.h>
using namespace std;

bool s(string a,string b){
    int n=a.lenght();
    int m=b.lenght();
    int k;
    if(b>=a){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[j]==b[i]){
                    k++;
                    break;
                }
            }
        }
        if(k==n){
            return true;}

    }
    else{
        return false;
    }
    return false;
}

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<s(a,b);
}

```

## Submission at 2024-10-25 06:51:02


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node(int val) {
        data = val
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.

vector<int>ans;
vector <int> postOrder(Node* root){
  if(root==NULL){
    return {};
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}


```

## Submission at 2024-10-25 06:56:33


```
#include<bits/stdc++.h>
using namespace std;

bool s(string a,string b){
    int n=a.lenstr();
    int m=b.lenstr();
    int k;
    if(b>=a){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[j]==b[i]){
                    k++;
                    break;
                }
            }
        }
        if(k==n){
            return true;}

    }
    else{
        return false;
    }
    return false;
}

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<s(a,b);
}

```

## Submission at 2024-10-25 06:59:39


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
bool isSymmetric(struct Node* root)
{
    if(root==NULL){
        return true;
    }
    

    
}


```

## Submission at 2024-10-25 07:04:01


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
bool isSymmetric(struct Node* root)
{
    if(root==NULL){
        return true;
    }
    q=root->left;
    p=root->right;
    bool ab(q,p){
        if(p==NULL,q==NUL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        if(p==q){
            ab(p->left,q->right &&)
        }
        
    }
    

    
}


```

## Submission at 2024-11-17 03:18:33


```
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void days(int arr[], int n) {
    vector<int> result(n, 0); // Initialize result array with 0
    stack<int> s; // Stack to store indices

    // Traverse the array from left to right
    for (int i = 0; i < n; i++) {
        // While stack is not empty and the current temperature is greater than the temperature at index stored on top of stack
        while (!s.empty() && arr[i] > arr[s.top()]) {
            int idx = s.top(); // Index of the previous day
            s.pop(); // Remove it from the stack
            result[idx] = i - idx; // Calculate the number of days to wait
        }
        s.push(i); // Push the current index onto the stack
    }

    // Print the result array
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    days(arr, n);

    return 0;
}

```

## Submission at 2024-11-22 05:01:57


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<a;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-22 05:21:46


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,d;
    cin>>m;
    cin>>n;
    cin>>d;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int k;
    while(i<m){
        for(int j=0;j<n;j++){
            if(arr1[i]-arr2[j] <= d || arr2[j]-arr1[i] <= d.){
                k++;
            }

        }
    }

    
}
```

## Submission at 2024-11-22 05:45:27


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,d;
    cin>>m;
    cin>>n;
    cin>>d;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int k=0;
    while(int i<m){
        for(int j=0;j<n;j++){
            if(arr1[i]-arr2[j] <= d || arr2[j]-arr1[i] <= d){
                k++;
            }
        }
        i++;   
    }
    cout<<k;

    
}
```

## Submission at 2024-11-22 05:48:22


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,d;
    cin>>m;
    cin>>n;
    cin>>d;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int k=0;
    int i=0;
    while(i<m){
        for(int j=0;j<n;j++){
            if(arr1[i]-arr2[j] <= d || arr2[j]-arr1[i] <= d){
                k++;
            }
        }
        i++;   
    }
    cout<<k;

    
}
```

## Submission at 2024-11-22 05:51:43


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,d;
    cin>>m;
    cin>>n;
    cin>>d;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int k=0;
    int i=0;
    while(i<m){
        for(int j=0;j<n;j++){
            if(arr1[i]-arr2[j] < d || arr2[j]-arr1[i] < d){
                k++;
            }
        }
        i++;   
    }
    cout<<k;

    
}
```

## Submission at 2024-11-22 05:53:28


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,d;
    cin>>m;
    cin>>n;
    cin>>d;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int k=0;
    int i=0;
    while(i<m){
        for(int j=0;j<n;j++){
            if(arr1[i]-arr2[j] > d || arr2[j]-arr1[i] > d){
                k++;
            }
        }
        i++;   
    }
    cout<<k;

    
}
```

## Submission at 2024-11-22 05:55:52


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a,>>b;
    cout<<b-a;
    }
```

## Submission at 2024-11-22 05:56:50


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<b-a;
    }
```

## Submission at 2024-11-22 06:12:20


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int b=(2*n)/2;
    while(i<=b){
        for(int j=0,j<i;j++){
            cout<<"*";
        }
        i++;       
    }
    (i=b-1)
    while(i<=1){
        for(int j=i,j>0;j--){
            cout<<"*";
        }
        i--;       
    }
    

```

## Submission at 2024-11-22 06:18:35


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int b=(2*n)/2;
    while(i<=b){
        for(int j=0,j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;       
    }
    (i=b-1)
    while(i<=1){
        for(int j=i,j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        i--;       
    }
}
    

```

## Submission at 2024-11-22 06:19:40


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int b=(2*n)/2;
    while(i<=b){
        for(int j=0,j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;       
    }
    i=b-1;
    while(i<=1){
        for(int j=i,j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        i--;       
    }
}
    

```

## Submission at 2024-11-22 06:20:23


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int b=(2*n)/2;
    while(i<=b){
        for(int j=0,j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;       
    }
    i=b-1;
    while(i<=1){
        for(int j=i,j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        i--;       
    }
}
    

```

## Submission at 2024-11-22 06:27:39


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int b=(2*n)/2;
    while(i<=b){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;       
    }
    i=b-1;
    while(i<=1){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
        i--;      
    }
}
    

```

## Submission at 2024-11-22 06:34:30


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int max=INT_MIN;
    for(int j=0;j<n;j++){
        if(max<A[i]){
            max==A[i]
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 06:41:26


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    while(i<n){
        for(int j=0;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    int max=INT_MIN;
    for(int j=0;j<n;j++){
        if(max<B[j]){
            max==A[j]
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 06:42:59


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    while(i<n){
        for(int j=0;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    int max=INT_MIN;
    for(int j=0;j<n;j++){
        if(max<B[j]){
            max==A[j];
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 06:47:45


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    while(i<n){
        for(int j=0;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    int max=B[0];
    for(int j=0;j<=c;j++){
        if(max<B[j]){
            max==A[j];
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 06:55:08


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    int i=0;
    while(i<n){
        for(int j=0;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    int max=B[0];
    for(int j=0;j<=c;j++){
        if(max<B[j]){
            max==B[j];
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 06:58:28


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    int i=0;
    while(i<n){
        for(int j=i+1;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    int max=B[0];
    for(int j=0;j<=c;j++){
        if(max<B[j]){
            max==B[j];
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 07:00:11


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    int i=0;
    while(i<n){
        for(int j=i+1;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    int max=B[0];
    for(int j=0;j<=c;j++){
        if(max<B[j]){
            max==B[j];
        }
    }
    cout<<max;
}
```

## Submission at 2024-11-22 07:06:16


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int c=0;
    int i=0;
    while(i<n){
        for(int j=i+1;j<n;j++){
            if(A[i]!=A[j]){
                B[c]=A[i];
                c++;
                }
            }
        i++;

    }
    if(c==0){
        int max=B[0];
        for(int j=0;j<=n;j++){
            if(max<A[j]){
                max==A[j];
                cout<<max;
        }

    }
    }
    int max=B[0];
    for(int j=0;j<=c;j++){
        if(max<B[j]){
            max==B[j];
        }
    }
    cout<<max;
}
```

