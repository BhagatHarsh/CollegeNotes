## Submission at 2024-10-04 06:10:44


```
#include<iostrem>
#include<stack>
using namespace std;
int bool(stack<char> st,string s,string t){
    char ch=0;

    for(int i=0;i<s.size()<i++){
        ch=s[i];
        st.push(s[i]);
    }
    for(int i=0;i<t.size();i++){
        if(st.top()==t[i]){
            st.pop();
            i++;
        }
    }
    if(st.empty()){
        return true;

    }
    else{
        return false;
    }
    

}
int main(){
    string s=anagram;
    string t=nagaram;
    stack<char> st;
    bool(st,s,t);
}
```

## Submission at 2024-10-04 06:10:52


```
#include<iostrem>
#include<stack>
using namespace std;
int bool(stack<char> st,string s,string t){
    char ch=0;

    for(int i=0;i<s.size()<i++){
        ch=s[i];
        st.push(s[i]);
    }
    for(int i=0;i<t.size();i++){
        if(st.top()==t[i]){
            st.pop();
            i++;
        }
    }
    if(st.empty()){
        return true;

    }
    else{
        return false;
    }
    

}
int main(){
    string s=anagram;
    string t=nagaram;
    stack<char> st;
    bool(st,s,t);
}
```

## Submission at 2024-10-25 06:31:45


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
vector <int> postOrder(Node* root)
{
  if(root==NULL) return NULL;
  int left=postOrder(root->left);
  int right=postOrder(root->right);
  Node* val=root->data;
}

```

## Submission at 2024-11-22 05:37:56


```
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kscore(vector<int> &arr){
     int score=0;
     unordered_map <int,int> a;
     for(int num:arr){
        a[num]++;
     }
     for(int b:arr){
        if(a[b]>1){
            score++;
            a[b]--;
        }
     }
     return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans=Kscore(arr);
    cout<<ans;
    
    
   
    
    return 0;
}
```

## Submission at 2024-11-22 05:39:28


```
// write code from scratch#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kscore(vector<int> &arr){
     int score=0;
     unordered_map <int,int> a;
     for(int num:arr){
        a[num]++;
     }
     for(int b:arr){
        if(a[b]>1){
            score++;
            a[b]--;
        }
     }
     return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans=Kscore(arr);
    cout<<ans;
    
    return 0;
}
```

## Submission at 2024-11-22 05:49:34


```
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kscore(vector<int> &arr){
     int score=0;
     unordered_map <int,int> a;
     for(int num:arr){
        a[num]++;
     }
     for(int b:arr){
        if(a[b]>1){
            score++;
            a[b]--;
        }
     }
     return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans=Kscore(arr);
    cout<<ans;
    
    return 0;
}
```

## Submission at 2024-11-22 05:54:30


```
// write code from scratch
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int kscore(vector<int> &arr){
     int score=0;
     unordered_map <int,int> a;
     for(int num:arr){
        a[num]++;
     }
     for(int b:arr){
        if(a[b]>1){
            score++;
            a[b]--;
        }
     }
     return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans=kscore(arr);
    cout<<ans;
    
    return 0;
}
```

## Submission at 2024-11-22 06:29:39


```
// Write Code From Scratch Here
// Write Code From Scratch Here
// write code from scratch// write code from scratch

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=0;
    int j=0;
    cin<<n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;i<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}/*
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int i=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=arr[i]
        sum=sum+arr[i];
    }
    return sum;
}*/
```

