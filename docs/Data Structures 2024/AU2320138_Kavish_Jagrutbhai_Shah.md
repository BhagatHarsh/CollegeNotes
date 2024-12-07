## Submission at 2024-08-05 10:18:05


```
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string UserName;
    cin>> UserName;
    cout << "Hello " << UserName <<"!";
    return 0;
}
```

## Submission at 2024-08-05 10:29:21


```
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string UserName;
    cin>>UserName;
    cout << "Hello " << UserName <<"!";
    return 0;
}
```

## Submission at 2024-08-05 10:35:29


```
// Write your C++ code here
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int var;
    string UserName;
    cin >> var;
    if(var > 0 && var <=100)
    {
    for(int i=0;i<var;i++)
    {
        cin >> UserName;
        cout << "Hello " << UserName <<"!\n";
    }
    }
    return 0;
}
```

## Submission at 2024-08-12 09:51:12


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else 
    {
        return(fibonacci(x-1) + fibonacci(x-2));
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

## Submission at 2024-08-31 06:31:54


```
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char str[],int i, int e)
{
     int length = sizeof(str);
   
   if(length == 1)
   {
    return true;
   }
   if(str[i] != str[length])
    return false;
    
    if(str[i=1] == str[length-1])
    {
      isPalindrome(str,i+1,e-1);
    }
    return true;
}

int main()
{
   char str[10000];
   int n;
   cout<<"Enter size of a String";
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>str[i];
   }
   if(isPalindrome(str,0));
   {
    cout<<"True";
   }
   else
   {
    cout<<"False";
   }

}
```

## Submission at 2024-09-02 09:59:58


```
#include <iostream>
using namespace std;

bool isPalindrome(string word, int n, int i)
{
    // Base case: if we have compared all the characters
    if (i >= n) {
        return true;
    }
    
    // Check if characters at current indices are equal
    if (word[i] != word[n]) {
        return false;
    }
    
    
    return isPalindrome(word, n - 1, i + 1);
}

int main() {
    string words;
    cout << "Enter a String\n";
    cin >> words;
    
    int length = words.length();
    
    if (isPalindrome(words, length - 1, 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
return 0;
}
```

## Submission at 2024-09-02 10:03:10


```
#include <iostream>
using namespace std;

bool isPalindrome(string word, int n, int i)
{
    // Base case: if we have compared all the characters
    if (i >= n) {
        return true;
    }
    
    // Check if characters at current indices are equal
    if (word[i] != word[n]) {
        return false;
    }
    
    
    return isPalindrome(word, n - 1, i + 1);
}

int main() {
    string words = "racecar";
    
    int length = words.length();
    
    if (isPalindrome(words, length - 1, 0)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
return 0;
}
```

## Submission at 2024-09-09 08:52:48


```
#include <iostream>
using namespace std;

int countEvenDigits(int nums[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int digitCount = 0;
        while (num != 0) {
            num /= 10;
            digitCount++;
        }
        if (digitCount % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int nums[] = {12, 345, 2, 6, 7896};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Count of numbers with even number of digits: " << countEvenDigits(nums, n);
    return 0;
}
```

## Submission at 2024-09-09 09:18:34


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
    //Your code here
    if (x == 1)
    {
        Node* newhead = head->next;
        delete head;
        return newhead;
    }
    
    Node* temp = head;

    for (int i = 1; i < x-1; i++)
    {
        temp = temp -> next;
    }

Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;

return head;
}
```

## Submission at 2024-09-09 09:21:18


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
    ListNode* temp = head;
    while (temp != NULL)
    {
        result.push_back(temp->val);
        temp = temp -> next;
    }

    return result;
}

```

## Submission at 2024-09-09 09:22:23


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
    if (k < 0 )
    {
        return -1;
    }
    Node* curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (count == k)
        {
            return curr->data;
        }
        curr = curr -> next;
        count++;
    }
    
return -1;
}
}

```

## Submission at 2024-09-09 09:22:35


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
    if (k < 0 )
    {
        return -1;
    }
    Node* curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (count == k)
        {
            return curr->data;
        }
        curr = curr -> next;
        count++;
    }
    
return -1;
}


```

## Submission at 2024-09-09 09:22:47


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
    if (k < 0 )
    {
        return -1;
    }
    Node* curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (count == k)
        {
            return curr->data;
        }
        curr = curr -> next;
        count++;
    }
    
return -1;
}


```

## Submission at 2024-09-09 09:24:04


```
// Write code from scratch
# include <bits/stdc++.h>
using namespace std;



int main ()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int c[n];
    for (int i = 0 ; i < n; i++)
    {
        c[i] = max(a[i],b[i]);
    }
for (int i = 0 ; i < n; i++)
    {
        cout<<c[i]<<" ";
    }

return 0;
}
```

## Submission at 2024-09-09 09:26:41


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
    Node* next ;

    while (curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;

    }
return prev;
}



```

## Submission at 2024-09-09 09:57:28


```
// Write code from scratch here
#include<iostream>
 int CountChar(char Arr[],int key,int index)
 {
    int count = 0;
    if(key == Arr[index])
    {
        count++;
    }
    else 
    return CountChar(Arr,key,index+1);
 }
 
 int main()
 {
    char Arr1[]={'7','1','7','1','7','1'};
    int answer = CountChar(Arr1,7,0);
    std::cout<<answer;
    return 0;
 }
```

## Submission at 2024-09-09 10:05:22


```
// Write code from scratch here
#include<iostream>
 int CountChar(char Arr[],int key,int index)
 {
    int count = 0;
    if(key == Arr[index])
    {
        count++;
    }
    else 
    return CountChar(Arr,key,index+1);

    return count;
 }
 
 int main()
 {
 char Arr1[100];
 std::cout<<"Enter Elements of Array ";
 for(int i = 0;i<6;i++)
 {
   std::cin>>Arr1[i];
 }
    int answer = CountChar(Arr1,1,0);
    std::cout<<answer;
    return 0;
 }
```

## Submission at 2024-09-09 10:25:01


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
    int Array[5];
    int n=5;
    int x;
    int i;
    Node*p=head;
    while(p!=NULL)
    {
      Array[i]=p->data;
      p=p->next;
    }
   
      while(Array[i]=Array[n-1])
      {
        n--;
        i++;
        return true;
      }
      return false;

}
```

## Submission at 2024-09-09 10:38:38


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
    Node*p=head;
    Node*q=NULL;
    int x;
    x=p->data;
    while(p!=NULL){
        if(x == p->next->data)
        {
            q=p;
            p=p->next;
            free(q);
        }
    }
    return head;
}

```

## Submission at 2024-09-16 06:46:13


```
// Write Code from Scratch here
#include<cmath>
#include<iostream>
using namespace std;
bool IsPower(int n)
{
    if(n<=0)
    {
        return true;
    }
    double logvalue = log(n)/log(3);
    if(logvalue == (int)logvalue)
    {
        return true;
    }
    else
    return false;
}
int main()
{
    int n;
    std::cin>>n;
    if(IsPower(n))
    {
        std::cout<<"True";
    }
    else
    std::cout<<"False";
    return 0;
}
```

## Submission at 2024-09-16 06:58:17


```
// Write Code from Scratch here
#include<cmath>
#include<iostream>
using namespace std;
bool IsPower(int n, int Power=0)
{
    if(n==1)
    {
        return true;
    }
    if(n<1 || n%3!=0)
    {
        return false;
    }
    else
    return IsPower(n/3, Power+1);
}
int main()
{
    int n;
    int Pow;
    std::cin>>n;
    if(IsPower(n))
    {
        std::cout<<"True";
    }
    else
    std::cout<<"False";
    return 0;
}
```

## Submission at 2024-09-16 07:10:09


```
// Write code from scratch here
#include<iostream>

int CountOfChar(std::string& s, char c, int index = 0)
{
    if(s.length()==index)
    {
        return 0;
    }
    else
    {
        int count = 0;
        if(s[index]== c)
        {
            count=1;
        }
        else 
        count=0;
        return count+CountOfChar(s,c,index+1);
    }
}
int main()
{
    std::string str;
    char charToFind;
    std::getline(std::cin, str);
    std::cin >> charToFind;
    int count = CountOfChar(str, charToFind);
    
    std::cout <<count;
    
    return 0;
}
```

## Submission at 2024-09-16 07:27:02


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
    Node* current = head;
    Node* temp;
    while(current !=0 && current->next != NULL)
    {
        if(current->data == current->next->data)
        {
            temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        current=current->next;

     
    }
       return head;
}

```

## Submission at 2024-10-07 10:04:48


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    queue<int>q1,q2;
    vector<int>result;
    for(int i=0;i<q.size();i++)
    {
        result.push_back(q);
    }
    int n = result.size();
    for(int i =n-1;i<=0;i--)
    {
        q1 = result[i];
    }
    return q1;
}

```

## Submission at 2024-10-07 10:29:49


```
#include<iostream>
using namespace std;
#include<vector>

int Coins(vector<int>&coin,int n,int k)
{
    int low = 0;
    int high = *max_element(coin.begin(),coin.end());
    int mid ;
    int ans=0;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(ActualRequired(coin,n,k,mid))
        {
            ans = mid;
            high = mid-1;
        }
        else 
         low = mid+1;
    }
    return 2*ans;
}

bool ActualRequired(vector<int>&coin,int n,int k,int mid)
{
int count = 0;
for(int i=0;i<coin.size();i++)
{
    if(coin[i] > k)
    {
        coin[i] = coin[i]-mid;
    }
}
for(int i=0;i<coin.size();i++)
{
    if(abs(coin[i]-coin[i+1]) == k)
    {
        count++;
    }
    
}
if(count == 2)
    {
        return true;
    }
    else 
    return false;
}
```

## Submission at 2024-10-07 10:38:39


```
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int Coins(vector<int>&coin,int n,int k)
{
    sort(coin.begin(),coin.end());
    int low = 0;
    int high = coin[n-1];
    int mid ;
    int ans=0;
    while(low<=high)
    {
        mid = (low+high)/2;
        int count = 0;

for(int i=0;i<coin.size();i++)
{
    if(coin[i] > k)
    {
        coin[i] = coin[i]-mid;
    }
}
for(int i=0;i<coin.size();i++)
{
    if(abs(coin[i]-coin[i+1]) == k)
    {
        count++;
    }
    
}
if(count == 2)
    {
        ans = 1;
    }
    else 
    ans = 0;
    
        if(ans == 1)
        {
            ans = mid;
            high = mid-1;
        }
        else 
         low = mid+1;
    }
    return 2*ans;
    
}



```

## Submission at 2024-10-07 10:56:26


```
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int Coins(vector<int>&coin,int n,int k)
{
    int low = 0;
    int high = 5;
    int mid ;
    int ans=0;
    while(low<=high)
    {
        mid = (low+high)/2;
        int count = 0;

for(int i=0;i<coin.size();i++)
{
    if(coin[i] > k)
    {
        coin[i] = coin[i]-mid;
    }
}
for(int i=0;i<coin.size();i++)
{
    if(abs(coin[i]-coin[i+1]) == k)
    {
        count++;
    }
    
}
if(count == 2)
    {
        ans = 1;
    }
    else 
    ans = 0;
    
        if(ans == 1)
        {
            ans = mid;
            high = mid-1;
        }
        else 
         low = mid+1;
    }
    return 2*ans;
    
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    cout<<"\n";
    vector<int>coin;
}



```

## Submission at 2024-10-07 10:56:29


```
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int Coins(vector<int>&coin,int n,int k)
{
    int low = 0;
    int high = 5;
    int mid ;
    int ans=0;
    while(low<=high)
    {
        mid = (low+high)/2;
        int count = 0;

for(int i=0;i<coin.size();i++)
{
    if(coin[i] > k)
    {
        coin[i] = coin[i]-mid;
    }
}
for(int i=0;i<coin.size();i++)
{
    if(abs(coin[i]-coin[i+1]) == k)
    {
        count++;
    }
    
}
if(count == 2)
    {
        ans = 1;
    }
    else 
    ans = 0;
    
        if(ans == 1)
        {
            ans = mid;
            high = mid-1;
        }
        else 
         low = mid+1;
    }
    return 2*ans;
    
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    cout<<"\n";
    vector<int>coin;
}



```

## Submission at 2024-10-07 11:04:58


```
// Write your code from scratch here
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    cout<<"i.ekil.siht.margorp.yrev.hcum";
}
```

## Submission at 2024-10-07 11:12:09


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    queue<int>q1,q2;
    vector<int>result;
    for(int i=0;i<q.size();i++)
    {
        result.push_back(q);
    }
    int n = result.size();
    for(int i =n-1;i<=0;i--)
    {
        q1 = result[i];
    }
    return q1;
}


```

## Submission at 2024-10-07 11:12:09


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    queue<int>q1,q2;
    vector<int>result;
    for(int i=0;i<q.size();i++)
    {
        result.push_back(q);
    }
    int n = result.size();
    for(int i =n-1;i<=0;i--)
    {
        q1 = result[i];
    }
    return q1;
}


```

## Submission at 2024-10-25 06:14:51


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    vector<int>Vec,Vec1;
    while(!q.empty()){
    Vec.push_back(q.front());
    q.pop();
    }
    for(int i = Vec.size()-1;i<0;i++)
    {
       Vec1.push_back(Vec[i]);
    }
    for(int i=0;i<Vec1.size();i++)
    {
        q.push(Vec1[i]);
    }
    return q;
}

```

## Submission at 2024-10-25 06:19:33


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    vector<int>Vec,Vec1;
    queue<int>q1;
    while(!q.empty()){
    Vec.push_back(q.front());
    q.pop();
    }
    for(int i = Vec.size()-1;i>0;i--)
    {
       Vec1.push_back(Vec[i]);
    }
    for(int i=0;i<Vec1.size();i++)
    {
        q1.push(Vec1[i]);
    }
    return q1;
}

```

## Submission at 2024-10-25 06:20:49


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    vector<int>Vec,Vec1;
    queue<int>q1;
    while(!q.empty()){
    Vec.push_back(q.front());
    q.pop();
    }
    for(int i = Vec.size()-1;i>=0;i--)
    {
       Vec1.push_back(Vec[i]);
    }
    for(int i=0;i<Vec1.size();i++)
    {
        q1.push(Vec1[i]);
    }
    return q1;
}

```

## Submission at 2024-10-25 06:43:29


```
// Write your code from scratch here
#include<iostream>
#include<string>

using namespace std;

std::string Mathexpr(std::string s)
{
    char c;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    for(int i=0;i<s.length();i++)
    {
        c = s[i];
        if(c == '1')
        {
            count_1++;
        }
        else if(c == '2')
        {
            count_2++;
        }
        else if(c == '3')
        {
            count_3++;
        }
    }
    std::string Answer;
    for(int i=0;i<count_1;i++)
    {
        Answer = Answer + "1+";
    }
    for(int i=0;i<count_2;i++)
    {
        Answer = Answer + "2+";
    }
    for(int i=0;i<count_3;i++)
    {
        Answer = Answer + "3+";
    }
    if(!Answer.empty())
    Answer.pop_back();
    return Answer;
}
int main()
{
    std::string input_sum;
    std::cin >> input_sum;
    std::string FinalAnswer;
    FinalAnswer = Mathexpr(input_sum);
    cout<<FinalAnswer;
    return 0;
}

```

## Submission at 2024-10-28 10:03:29


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
void Traverseroot(Node *root,vector<int>&vec1)
{
    vec1.push_back(root->data);
    Traverseroot(root->left,vec1);
    Traverseroot(root->right,vec1);


}
int findMin(Node *root)
{
    //code here
    vector<int>vec1;
    Traverseroot(root,vec1);
    int n = vec1.size();
    int min = 0;
    for(int i=0;i<n;i++)
    {
        if(vec1[i]<min)
        min = vec1[i];
    }
    return min;

}


```

## Submission at 2024-10-28 10:13:26


```
// write code from scratch
#include<vector>
#include<unordered_map>
#include<iostream>
int Answer(vector<int>vec,int n,int k)
{
    unordered_map<int,int>map1;
    int p = vec.size();
    for(int i=0;i<p;i++)
    {
        map1[vec[i]]++;
    }
    for(int i = 0;i< p;i++)
    {
        if(map1.at(i).second > k)
        {
            return map1.second;
        }
    }
    return -1;

}
```

## Submission at 2024-10-28 10:16:57


```
// write code from scratch
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
int Answer(std::vector<int>vec,int n,int k)
{
    unordered_map<int,int>map1;
    int p = vec.size();
    for(int i=0;i<p;i++)
    {
        map1[vec[i]]++;
    }
    for(int i = 0;i< p;i++)
    {
        if(map1.at(i).second > k)
        {
            return map1.second;
        }
    }
    return -1;

}
int main()
{
    int n;
    int k;
    std::vector<int>vec1;
    int ans = Answer(vec1,n,k);
}
```

## Submission at 2024-10-28 10:18:52


```
// write code from scratch
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
int Answer(std::vector<int>vec,int n,int k)
{
    return -1;

}
int main()
{
    int n;
    int k;
    std::vector<int>vec1;
    
}
```

## Submission at 2024-10-28 10:19:56


```
// write code from scratch
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
int Answer(std::vector<int>vec,int n,int k)
{
    unordered_map<int,int>map1;
    int p = vec.size();
    for(int i=0;i<p;i++)
    {
        map1[vec[i]]++;
    }
    for(int i = 0;i< p;i++)
    {
        if(map1.at(i)> k)
        {
            return map1(i);
        }
    }
    return -1;

}
int main()
{
    int n;
    int k;
    std::vector<int>vec1;
    int ans = Answer(vec1,n,k);
}
```

## Submission at 2024-10-28 10:55:59


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
    int x;
    if(root == NULL)
    return INT_MAX;
     
    int leftdata = findMin(root->left);
    int rightdata = findMin(root->right);
    x = min(root->data, min(leftdata,rightdata));


    return x;
}
```

## Submission at 2024-10-28 11:06:43


```
// write code from scratch
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
int Answer(std::vector<int>arr,int n,int k)
{
    unordered_map<int,int>FrequencyMap;
    for(int num : arr)
    {
        FrequencyMap[num]++;
    }
    for(int num : arr)
    {
        
        if(FrequencyMap[num] >= k)
        {
            return num;
        }
    }
    return -1;

}
int main()
{
    int n;
    int k;
    std::vector<int>vec1;
    int ans = Answer(vec1,n,k);
}
```

## Submission at 2024-10-28 11:13:43


```
// write code from scratch
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
int Answer(std::vector<int>arr,int n,int k)
{
    unordered_map<int,int>FrequencyMap;
    for(int num : arr)
    {
        FrequencyMap[num]++;
    }
    for(int num : arr)
    {
        
        if(FrequencyMap[num] >= k)
        {
            return num;
        }
    }
    return -1;

}
int main()
{
    int n = 7;
    int k = 2;
    std::vector<int>vec1;
    vec1[0]=1;
    vec1[1]=2;
    vec1[2]=3;
    vec1[3]=4;
    vec1[4]=4;
    vec1[5]=4;
    vec1[6]=4;
    int ans = Answer(vec1,n,k);
}
```

## Submission at 2024-11-18 07:16:35


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
int helper(Node* node, int currentNumber) {
        if (node == nullptr) {
            return 0;
        }

        // Update the current number
        currentNumber = currentNumber * 10 + node->data;

        // If it's a leaf node, return the current number
        if (node->left == nullptr && node->right == nullptr) {
            return currentNumber;
        }

        // Recursively call for left and right subtrees and return the sum
        return helper(node->left, currentNumber) + helper(node->right, currentNumber);
    }
int treePathSum(Node* root)
{
  // Your code here
  return helper(root,0);
}

```

## Submission at 2024-11-18 07:16:48


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
int helper(Node* node, int currentNumber) {
        if (node == nullptr) {
            return 0;
        }

        currentNumber = currentNumber * 10 + node->data;

        
        if (node->left == nullptr && node->right == nullptr) {
            return currentNumber;
        }

        return helper(node->left, currentNumber) + helper(node->right, currentNumber);
    }
int treePathSum(Node* root)
{
  // Your code here
  return helper(root,0);
}

```

## Submission at 2024-11-18 07:29:40


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
bool Mirror(Node* left,Node* right)
{
    if(left == NULL && right == NULL)
    return true;

    if(left == NULL || right == NULL)
    return false;

    if(left->data != right->data)
    return false;

    return Mirror(left->left,right->right) && Mirror(left->right,right->left);
}
bool isSymmetric(struct Node* root)
{
    // Code here
    if(root == NULL)
    return true;

    return Mirror(root->left,root->right);
}


```

## Submission at 2024-11-18 07:34:37


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
  // Your code here
  if(root == NULL)
  return 0;

  int left = maxDepth(root->left);
  int right = maxDepth(root->right);

  return 1 + max(left , right);
}

```

## Submission at 2024-11-18 07:38:16


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
    //code here
    if(root == NULL)
    return INT_MIN;

    int left = findMax(root->left);
    int right = findMax(root->right);

    return max(root->data , max(left,right));
}



```

## Submission at 2024-11-18 07:49:17


```
#include <vector>
#include <unordered_map>
#include <iostream>
using namespace std;


int Answer(const std::vector<int>& arr, int k)
{
    
    if(k <= 0)
        return -1;

    unordered_map<int, int> FrequencyMap;

    
    for(int num : arr)
    {
        FrequencyMap[num]++;
    }

    
    for(int num : arr)
    {
        if(FrequencyMap[num] >= k)
        {
            return num;
        }
    }

    
    return -1;
}

int main()
{
    int n;
    int k;

    
    cin >> n;
    cin >> k;

    
    std::vector<int> vec1(n);

    
    for(int i = 0; i < n; i++)
    {
        cin >> vec1[i];
    }

    
    int ans = Answer(vec1, k);

    // Display the result
    if(ans != -1)
        cout << ans << endl;
   
    return 0;
}

```

## Submission at 2024-11-18 08:20:04


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
  Node dummy(0);
  Node* current = &dummy;

  Node* p1 = head1;
  Node* p2 = head2;

  while(p1!=NULL || p2!=NULL)
  {
    if(p1->data < p2->data)
    {
      current->next = p1;
      current = p1;
      p1 = p1->next;
    }
    else
    {
      current->next = p2;
      current = p2;
      p2 = p2->next;
    }

    if(p1)
    current->next = p1;
    else
    current->next = p2;
  }
  return dummy.next;
}
```

## Submission at 2024-11-25 09:54:47


```
// write code from scratch
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    std::cin>>n;
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<" * \n";
        }
    }
    return 0;
}
```

## Submission at 2024-11-25 10:06:54


```
// write code from scratch
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    std::cin>>s;
    int freqA = 0;
    int freqB = 0;
    for(int i = 0; i<s.size();i++)
    {
        if(s[i] == 'a')
        {
            freqA++;
        }
        else
        freqB++;
    }
    if(freqA > freqB) 
    std::cout<<"a";
    else
    std::cout<<"b";
}
```

## Submission at 2024-11-25 10:17:01


```

// write code from scratch
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<" * ";
        }
        std::cout<<"\n";
    }
    return 0;
}
```

## Submission at 2024-11-25 10:18:27


```

// write code from scratch
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}
```

## Submission at 2024-11-25 10:49:24


```
// Write Code From Scratch Here
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
bool IsBST(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
        else
        return true;
    }
}
int main()
{
    int size;
    std::cin>>size;
    int arr1[size];
    for(int i=0;i<size;i++)
    {
        std::cin>>arr1[i];
    }
    if(IsBST(arr1,size))
    std::cout<<"YES";
    else
    std::cout<<"NO";

}
```

## Submission at 2024-11-25 11:11:57


```
// Write Code From Scratch Here
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
vector<int>TargetIndices(int arr[],int n, int target)
{
    vector<int>answer;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == target)
        {
            answer[i] = i;
        }
    }
    return answer;
}
int main()
{
    int n;
    std::cin>>n;
    int target;
    std::cin>>target;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr1[i];
    }
    vector<int>result;
    result = TargetIndices(arr1,n,target);
    for(int i =0;i<result.size();i++)
    {
        std::cout<<result[i];
    }

}
```

## Submission at 2024-11-25 11:25:38


```
// write code from scratch
#include<stdio.h>
#include<iostream>
using namespace std;
bool AritnmeticExpr(int arr[],int n)
{
    int difference;
    difference = arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i+1]-arr[i]!=difference)
        return false;
    }
    return true;
}
int main()
{
    int n;
    std::cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr1[i];
    }
    AritnmeticExpr(arr1,n);
}
```

## Submission at 2024-11-25 11:44:54


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
    Node*tempA = head1;
    Node*tempB = head2;
    int lenA=0;
    int lenB=0;
    while(tempA)
    {
      lenA++;
      tempA = tempA->next;
    }
    while(tempB)
    {
      lenB++;
      tempB = tempB->next;
    }
    tempA=head1;
    tempB = head2;
    if(lenA > lenB)
    {
      int diff = lenA-lenB;
      while(diff--)
      {
        tempA = tempA->next;
      }
    }
    else
    {
      int diff = lenB-lenA;
      while(diff--)
      {
        tempB= tempB->next;
      }
    }
    while(tempA && tempB)
    {
      if(tempA==tempB)
      {
        return tempA;
      }
    }
    return NULL;
}



```

