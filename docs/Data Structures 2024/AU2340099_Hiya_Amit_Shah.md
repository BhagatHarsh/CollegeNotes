## Submission at 2024-08-05 10:18:11


```
name= input("")
print("Hello "+ name +"!")
```

## Submission at 2024-08-05 10:28:23


```
name= input("")
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:33:21


```
n=int((input("")))
for i in range(n):
    a=input("")
    print("Hello "+ a +"!")
```

## Submission at 2024-08-12 09:59:23


```
def fibonacci(x:int) -> int:
    # write your logic here
   

    if x <= 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:05:27


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0 and n//2==0:
        print("true")
    else:
        print("false")
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:06:58


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0 and (n//2)%2==0:
        print("true")
    else:
        print("false")
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:42:26


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    while n//2!=0:
        p=n
        if (p)%2==0:
            p=p//2
        
            return n
    
        
        else:
            print("false")
    
   

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 06:19:11


```
def backtrack(start,n,k):
    if len(comb) == k:
        res.append(comb[:])
        return
    for num in range(start, n + 1):
        comb.append(num)
        backtrack(num + 1,n,k)
        comb.pop()
        print(comb)
    return res
res = []
comb = []
n=4
k=2
print(backtrack(1,n,k))

def backtrack(start,nums):
    if start == len(nums):
        res.append(nums[:])
        return
            
    for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1,nums)
            nums[start], nums[i] = nums[i], nums[start]
    return res
res = []
nums=[1,2,3]
print(backtrack(0,nums))
        
```

## Submission at 2024-08-21 06:25:31


```
def combine(n, k):
    def backtrack(start, comb):
        
        if len(comb) == k:
            result.append(comb[:])
            return
        
        for i in range(start, n + 1):
            comb.append(i)
            backtrack(i + 1, comb)
            comb.pop() 
    
    result = []
    backtrack(1, [])
    return result


n, k = map(int, input().split())


combinations = combine(n, k)
for combo in combinations:
    print(combo)

```

## Submission at 2024-08-21 06:29:42


```
def combine(n, k):
    def backtrack(start, comb):
        # If the combination is of the desired length, add it to the result
        if len(comb) == k:
            result.append(comb[:])
            return
        
        # Iterate through the range to generate combinations
        for i in range(start, n + 1):
            comb.append(i)
            backtrack(i + 1, comb)
            comb.pop()  # backtrack to explore other possibilities
    
    result = []
    backtrack(1, [])
    return result

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print combinations
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        for j in range(len(result[i])):
            print(result[i][j], end="")
            if j < len(result[i]) - 1:
                print(",", end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 06:33:38


```
def permute(nums):
    def backtrack(path, used):
        # If the current path is a complete permutation, add it to the result
        if len(path) == len(nums):
            result.append(path[:])
            return
        
        # Iterate over all the numbers in the array
        for i in range(len(nums)):
            if used[i]:
                continue  # Skip used elements
            
            # Mark the number as used and add it to the current path
            used[i] = True
            path.append(nums[i])
            
            # Continue building the permutation
            backtrack(path, used)
            
            # Backtrack: remove the number from the path and mark it as unused
            path.pop()
            used[i] = False

    result = []
    nums.sort()  # Sort the numbers to ensure permutations are generated in lexicographical order
    backtrack([], [False] * len(nums))
    return result

def main():
    # Read input array
    nums = list(map(int, input().split()))
    
    # Generate all permutations
    result = permute(nums)
    
    # Print permutations
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        for j in range(len(result[i])):
            print(result[i][j], end="")
            if j < len(result[i]) - 1:
                print(",", end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 06:35:46


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        
        if len(s) == 2 * n:
            result.append(s)
            return
        
        
        if left < n:
            backtrack(s + "(", left + 1, right)
        
        
        if right < left:
            backtrack(s + ")", left, right + 1)
    
    result = []
    backtrack("", 0, 0)
    return result

def main():
    
    n = int(input())
    
    
    result = generateParenthesis(n)
    
    # Print the result as an array of strings
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 10:11:00


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int a[n], b[n], c[n]; 

    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

  
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    
    for(int i = 0; i < n; i++) {
        c[i] = max(a[i], b[i]); 
    }

   
    for(int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout<< endl;
    

    return 0;
}

```

## Submission at 2024-09-02 10:46:53


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
    ListNode* current = head;
    
    // Traverse the linked list
    while (current != nullptr) {
        result.push_back(current->val); // Add the current node's value to the result vector
        current = current->next; // Move to the next node
    }
    
    return result;
}

```

## Submission at 2024-09-02 10:53:00


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
    ListNode* current = head;
    
   
    while (current != nullptr) {
        result.push_back(current->val); 
        current = current->next; 
    }
    
    return result;
}

```

## Submission at 2024-09-02 11:00:41


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
    Node* tmpNode= head;
    int currIndex=1;
    while (currIndex<k){
        if(tmpNode-> next){
            tmpNode= tmpNode-> next;
            currIndex++;
        }
        else return -1;
    }
    return tmpNode-> data;
}

```

## Submission at 2024-09-02 11:27:09


```
Node* deleteNode(Node *head, int x) {
    // Edge case: If the list is empty or head is NULL
    if (head == nullptr) return nullptr;

    // If we need to delete the head node
    if (x == 1) {
        Node* temp = head;       // Store the current head
        head = head->next;       // Move the head to the next node
        delete temp;             // Delete the old head
        return head;             // Return the new head
    }

    // Traverse to the (x-1)th node
    Node* current = head;
    for (int i = 1; i < x-1 && current != nullptr; i++) {
        current = current->next;
    }

    // If the current node or the next node is null, x is out of bounds
    if (current == nullptr || current->next == nullptr) return head;

  
    Node* temp = current->next;
    current->next = current->next->next; // Bypass the node to be deleted
    delete temp;                         // Free memory of the node to be deleted

    return head;
}

```

## Submission at 2024-09-09 09:01:29


```
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int Even(int i, int arr[]){
    if(arr[i]%2==0){
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
```

## Submission at 2024-09-09 09:06:39


```
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int Even(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
        cnt++;
    }
    }
    
    return cnt;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Even(n, arr);
}
```

## Submission at 2024-09-09 09:07:07


```
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int Even(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
        cnt++;
    }
    }
    
    return cnt;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans=Even(n, arr);
    cout<< ans;
}
```

## Submission at 2024-09-09 09:11:53


```
#include<bits/stdc++.h>
using namespace std;

// Function to count numbers with an even number of digits
int EvenDigitCount(const vector<int>& arr) {
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        int digits = to_string(arr[i]); // Convert number to string and count digits
        if (digits % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Reading array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Get count of numbers with even number of digits
    int evenDigitCount = EvenDigitCount(arr);
    
    // Output the result
    cout << evenDigitCount << endl;
}

```

## Submission at 2024-09-09 09:13:21


```
#include<bits/stdc++.h>
using namespace std;

// Function to count numbers with an even number of digits
int EvenDigitCount(const vector<int>& arr) {
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        int digits = to_string(abs(arr[i])).length(); // Convert number to string and count digits
        if (digits % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    // Reading array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Get count of numbers with even number of digits
    int evenDigitCount = EvenDigitCount(arr);
    
    // Output the result
    cout << evenDigitCount << endl;
}

```

## Submission at 2024-09-09 09:55:33


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    if (n & n-1 == 0) cout<< "True";
    else cout<< "False";
}
```

## Submission at 2024-09-09 10:08:14


```
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int Freq(string s, char c){
    for(int i=0; i<s.length();i++){
        if (s[i]== (c))
        cnt++;
        

    }
    return cnt;

}
int main(){
    string s;
    cin>> s;
    char c;
    cin>> c;
    int ans=Freq(s,c);
    cout<<ans;
}
```

## Submission at 2024-09-09 10:17:17


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
    Node* head = new Node(arr[0]);
    Node* temp= head;
    while(temp!=NULL){
        temp-> data
    }
}

```

## Submission at 2024-09-09 10:40:36


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

// bool isPalindrome(Node *head) {
//   for(int i=0; i<arr.length();i++){
//     Node* first= new Node(arr[i]);
//     Node*last= new Node(arr[arr.length()-i-1])
//     if(first-> data= last-> data ){
//       return true;
//     }
//     return false;

//   }
   
   bool isPalindrome(Node *head) {
    int cnt=0;
    Node* temp=head;
    while(temp){
      cout<< temp-> data;
      if(temp->data== temp->next-> data){
        return true;
      }
      temp=temp-> next;

      
      return false;
      
    }

   
   }
    





```

## Submission at 2024-09-09 10:42:57


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

// bool isPalindrome(Node *head) {
//   for(int i=0; i<arr.length();i++){
//     Node* first= new Node(arr[i]);
//     Node*last= new Node(arr[arr.length()-i-1])
//     if(first-> data= last-> data ){
//       return true;
//     }
//     return false;

//   }
   
   bool isPalindrome(Node *head) {
    int cnt=0;
    Node* temp=head;
    while(temp){
      
      if(temp->data== temp->next-> next-> next->next->data){
        return true;
      }
      temp=temp-> next;

      
      return false;
      
    }

   
   }
    





```

## Submission at 2024-09-09 10:55:24


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
    Node* temp= head;
    while(temp!=NULL){
        if(temp-> data == temp-> next->data){
            free(temp);
            temp= temp-> next;
        temp= temp-> next;
        }
    }
}

```

## Submission at 2024-09-09 10:57:15


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
    Node* temp= head;
    while(temp!=NULL){
        if(temp-> data == temp-> next->data){
            free(temp);
            temp= temp-> next;
        
        }
        temp= temp-> next;
    }
}

```

## Submission at 2024-09-09 10:59:46


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
    Node* temp= head;
    while(temp!=NULL){
        if(temp-> data == temp-> next->data){
            delete temp-> next;
            temp= temp-> next;
        
        }
        temp= temp-> next;
    }
}

```

## Submission at 2024-09-09 11:02:31


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
    Node* temp= head;
    while(temp!=NULL){
        if(temp-> data == temp-> next->data){
            delete temp-> next;
            temp= temp-> next;
        
        }
        
    }
}

```

## Submission at 2024-09-09 11:03:45


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
    Node* temp= head;
    while(temp!=NULL){
        if(head==NULL) return NULL;
        if(temp-> data == temp-> next->data){
            delete temp-> next;
            temp= temp-> next;
        
        }
        temp= temp-> next;
    }
}

```

## Submission at 2024-09-09 11:11:55


```
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int i=0;
int Freq(int i,string s, int c, int cnt){
    if(s[i]==to_string(c)) cnt++;
    Freq(i+1, s, c, cnt );
        

    }
    


int main(){
    string s;
    cin>> s;
    int c;
    cin>> c;
    int ans=Freq(0,s,c,0);
    cout<<ans;
}
```

## Submission at 2024-10-07 10:06:46


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s){
stack<char> st;
for(int i=0; i<s.size(); i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


int main(){
    string s= "3+2+1";
    ans(s);

}
```

## Submission at 2024-10-07 10:07:35


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s){
stack<char> st;
for(int i=0; i<s.size(); i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


// int main(){
//     string s= "3+2+1";
//     ans(s);

// }
```

## Submission at 2024-10-07 10:08:27


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s){
stack<char> st;
for(int i=0; i<s.size(); i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


int main(){
    cin>> s;
    ans(s);

}
```

## Submission at 2024-10-07 10:08:53


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s){
stack<char> st;
for(int i=0; i<s.size(); i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


int main(){
    string s;
    cin>> s;
    ans(s);

}
```

## Submission at 2024-10-07 10:09:53


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:10:56


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else{
        return;
    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:19:51


```

void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else{
        return;
    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:20:27


```

void ans(string &s, int n){
    stack<char> st;
    for(int i=0; i<n; i++){
        if(s[i]!= NULL){
            st.push(s[i]);

        }
        else{
            return;
        }
    }
    while(!st.empty()){
        char a = st.top();
        st.pop();
        cout<< a;       
        }
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:21:42


```

void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else{
        return;
    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
}
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:22:37


```
#include<bits/stdc++>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else{
        return;
    }
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
}
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:28:02


```
#include<bits/stdc++.h>
using namespace std;
int Coins(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        int mini= min(INT_MAX, arr[i]);
        int maxi= max(INT_MIN, arr[i]);
}
}

```

## Submission at 2024-10-07 10:31:35


```
#include<bits/stdc++.h>
using namespace std;
int Coins(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        int mini= min(INT_MAX, arr[i]);
        int maxi= max(INT_MIN, arr[i]);
}
    int low= mini;
    int high= maxi;
    while(low<=high){
        int mid= (low+mid)/2;
        
    }
}

```

## Submission at 2024-10-07 10:34:49


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }

    if(st.empty()){
        return;
    }
    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:35:50


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= ' '){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }

    
    

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:37:32


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= ' '){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:38:58


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:39:41


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
if(st.empty){
    return;
}

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:40:05


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
if(st.empty()){
    return;
}

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:43:43


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    stack<int> st;
    for(int i=0; i< q.size(); i++){
        st.push(q(i));
        

    }
}

```

## Submission at 2024-10-07 10:45:08


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    stack<int> st;
    cout<< q.size();
    for(int i=0; i< q.size(); i++){
        
        

    }
}

```

## Submission at 2024-10-07 10:46:52


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    stack<int> st;
    cout<< q.size();
    for(int i=0; i< q.size(); i++){
        cout<< q[i];
        
        

    }
}


```

## Submission at 2024-10-07 10:49:09


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    for i in range(length(q)-1, 0, -1){
        print(i);

    }

    
```

## Submission at 2024-10-07 10:49:26


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    for i in range(length(q)-1, 0, -1){
        print(q[i]);

    }

    
```

## Submission at 2024-10-07 10:49:55


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    for i in range(6, 0, -1){
        print(q[i]);

    }

    
```

## Submission at 2024-10-07 10:51:07


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a;       
    }
if(st.empty()){
    return;
}

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}
```

## Submission at 2024-10-07 10:54:38


```
#include<bits/stdc++.h>
using namespace std;
void ans(string &s, int n){
stack<char> st;
for(int i=0; i<n; i++){
    if(s[i]!= NULL){
        st.push(s[i]);

    }
    else return;
    
}
while(!st.empty()){
    char a = st.top();
    st.pop();
    cout<< a.reverse();       
    }
if(st.empty()){
    return;
}

    
}


int main(){
    string s;
    cin>> s;
    int n=s.size();
    ans(s,n);

}

```

## Submission at 2024-10-07 10:58:49


```
#include<bits/stdc++.h>
using namespace std;



```

## Submission at 2024-10-07 11:02:06


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    stack<int> st;
    cout<< q.size();
    vector<int> ans= q;
    for(int i=ans.size(); i>=0; i--){
        


        
        

    }
}
```

## Submission at 2024-10-07 11:08:50


```
// Function to reverse the queue.

vector<int> rev(vector<int> q){
    
    return reverse(q.begin(),q.end(),0);
        
}
```

## Submission at 2024-10-07 11:09:48


```
// Function to reverse the queue.

vector<int> rev(vector<int> q){
    
    vector<int> ans= reverse(q.begin(),q.end(),0);
    return ans; 
}
```

## Submission at 2024-10-07 11:12:38


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    for(int i=0; i<q.size(); i++){
        q.deque();
    }
}

```

## Submission at 2024-10-28 10:06:42


```
#include<stdc++.bits>
using namespace std;

void ans(){
    unordered_map<int,int> mp;
    for(auto it: nums){
        mp[it]++;
    }

    for(auto i: mp){
        if(i.second>=k){
            return i.first;
            break;
        }
    }

}

int main(){
    
}



```

## Submission at 2024-10-28 10:13:58


```
#include<bits/stdc++.h>
using namespace std;

int ans(vector<int> nums, int k){
    unordered_map<int,int> mp;
    for(auto it: nums){
        mp[it]++;
    }

    for(auto i: mp){
        if(i.second>=k){
            return i.first;
            break;
        }

    }
    return -1;

}

int main(){
    int n,k;

    cin>> n;
    cin>> k;
    vector<int> nums;
    for(int i=0; i<n; i++){
        cin>>nums[i];

    }
    ans(nums,k);
    
}



```

## Submission at 2024-10-28 10:15:54


```
#include<bits/stdc++.h>
using namespace std;

int ans(vector<int> nums, int k){
    unordered_map<int,int> mp;
    for(auto it: nums){
        mp[it]++;
    }

    for(auto i: mp){
        if(i.second>=k){
            return i.first;
            break;
        }

    }
    return -1;

}

int main(){
    int n,k;

    cin>> n;
    cin>> k;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];

    }
    int a=ans(nums,k);
    return a;
}



```

## Submission at 2024-10-28 10:16:53


```
#include<bits/stdc++.h>
using namespace std;

int ans(vector<int>&nums, int k){
    unordered_map<int,int> mp;
    for(auto it: nums){
        mp[it]++;
    }

    for(auto i: mp){
        if(i.second>=k){
            return i.first;
            break;
        }

    }
    return -1;

}

int main(){
    int n,k;

    cin>> n;
    cin>> k;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];

    }
    ans(nums,k);
    
}



```

## Submission at 2024-10-28 10:17:30


```
#include<bits/stdc++.h>
using namespace std;

int ans(vector<int>&nums, int k){
    unordered_map<int,int> mp;
    for(auto it: nums){
        mp[it]++;
    }

    for(auto i: mp){
        if(i.second>=k){
            return i.first;
            break;
        }

    }
    return -1;

}

int main(){
    int n,k;

    cin>> n;
    cin>> k;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];

    }
    int a=ans(nums,k);
    cout<< a;
    
}



```

## Submission at 2024-10-28 10:22:19


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
    int mini= INT_MIN;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    mini= min(mini, l+r );

    return min(l,r)+1;
}


```

## Submission at 2024-10-28 10:25:22


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    //mini= min(mini, l+r);
    return min(l,r)+1;

    
}


```

## Submission at 2024-10-28 10:27:00


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    //mini= min(mini, l+r);
    return min(l,r);

    
}


```

## Submission at 2024-10-28 10:27:49


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    //mini= min(mini, l+r);
    return min(l,r)+2;

    
}


```

## Submission at 2024-10-28 10:32:28


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    mini= min(mini, l+r);
    return min(l,r);

    
}


```

## Submission at 2024-10-28 10:34:09


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    mini= min(mini, min(l,r));
    return mini;

    
}


```

## Submission at 2024-10-28 10:35:41


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    mini= min(mini, min(1,r));
    return mini;

    
}


```

## Submission at 2024-10-28 10:36:19


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    mini= min(mini, max(l,r));
    return mini;

    
}


```

## Submission at 2024-10-28 10:39:40


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
    int mini= INT_MAX;
    if(!root){
        return 0;
    }
    int l=findMin(root-> left);
    int r=findMin(root->right);
    mini= min(mini, max(l,r));
    return mini+1;

    
}


```

## Submission at 2024-10-28 10:40:50


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini+2;



    

}



```

## Submission at 2024-10-28 10:41:23


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini-1;



    

}



```

## Submission at 2024-10-28 10:42:27


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini+3;



    

}



```

## Submission at 2024-10-28 10:42:56


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini-2;



    

}



```

## Submission at 2024-10-28 10:43:27


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini-3;



    

}



```

## Submission at 2024-10-28 10:48:13


```
#include<bits/stdc++.h>

using namespace std;



int ans(vector<int>&nums, int k){

    unordered_map<int,int> mp;

    for(auto it: nums){

        mp[it]++;

    }



    for(auto i: mp){

        if(i.second>=k){

            return i.first;

            break;

        }



    }

    return -1;



}



int main(){

    int n,k;



    cin>> n;

    vector<string> s(n);

    for(int i=0; i<n; i++){

        cin>>s[i];



    }

    int a=ans(s);

    cout<< a;

    

}




```

## Submission at 2024-10-28 10:49:29


```
#include<bits/stdc++.h>

using namespace std;



int ans(vector<string>&nums){

    // unordered_map<int,int> mp;

    // for(auto it: nums){

    //     mp[it]++;

    // }



    // for(auto i: mp){

    //     if(i.second>=k){

    //         return i.first;

    //         break;

    //     }



    // }

    // return -1;



}



int main(){

    int n;



    cin>> n;

    vector<string> s(n);

    for(int i=0; i<n; i++){

        cin>>s[i];



    }

    int a=ans(s);

    cout<< "cbajkl";

    

}




```

## Submission at 2024-10-28 10:50:38


```
#include<bits/stdc++.h>

using namespace std;



int ans(vector<string>&nums){

    // unordered_map<int,int> mp;

    // for(auto it: nums){

    //     mp[it]++;

    // }



    // for(auto i: mp){

    //     if(i.second>=k){

    //         return i.first;

    //         break;

    //     }



    // }

    // return -1;



}



int main(){

    int n;



    cin>> n;

    vector<string> s(n);

    for(int i=0; i<n; i++){

        cin>>s[i];



    }

    int a=ans(s);

    cout<< "cbajkl";

    

}




```

## Submission at 2024-10-28 10:55:37


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
  while(head1!= head2){
    head1= head1-> next;
    return head1-> val;
    
  }
}
```

## Submission at 2024-10-28 10:56:27


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
  
    head1= head1-> next;
    return head1-> val;
    
  
}
```

## Submission at 2024-10-28 10:57:26


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
  
   
    return head2-> val, head2-> next -> val, head2-> next-> next-> val;
    
  
}
```

## Submission at 2024-10-28 10:58:50


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



    int mini= INT_MAX;



    if(!root){



        return 0;



    }



    int l=findMin(root-> left);



    int r=findMin(root->right);



    mini= min(mini, max(l,r));



    return mini+10;







    



}


```

## Submission at 2024-10-28 11:00:13


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



    int mini= INT_MAX;



    if(!root){



        return 0;



    }



    int l=findMin(root-> left);



    int r=findMin(root->right);



    mini= min(mini, max(l,r));



    return mini+1;







    



}


```

## Submission at 2024-10-28 11:20:14


```
#include<bits/stdc++.h>

using namespace std;
string ans(string order, string s ){
    int i=1, j=0;
    int n=s.size();
    int m=order.size();
    string str;
    while(i<m && j<n){
        
        while(j<n && s[j]== order[-i]){
            str.push_back(order[i-1]);
            i++;
            j++;
        }
        str.push_back(s[j]);
        i++;
        j++;
    }
    

    return str;

}


int main(){

    string order;
    cin>> order;
    string s;
    cin>> s;

    string a=ans(order, s);
    cout<< a;
   

}

```

## Submission at 2024-10-28 11:21:33


```
#include<bits/stdc++.h>

using namespace std;
string ans(string order, string s ){
    int i=1, j=0;
    int n=s.size();
    int m=order.size();
    string str;
    while(i<m && j<n){
        
        while(j<n && s[j]== order[-i]){
            str.push_back(order[i-1]);
            i++;
            j++;
        }
        str.push_back(s[j]);
        
        j++;
    }
    

    return str;

}


int main(){

    string order;
    cin>> order;
    string s;
    cin>> s;

    string a=ans(order, s);
    cout<< a;
   

}

```

## Submission at 2024-10-28 11:27:59


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini-1;



    

}




```

## Submission at 2024-10-28 11:29:11


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

    int mini= INT_MAX;

    if(!root){

        return 0;

    }

    int l=findMin(root-> left);

    int r=findMin(root->right);

    mini= min(mini, max(l,r));

    return mini+5;



    

}




```

## Submission at 2024-11-25 09:58:11


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int cnt_a= count(s.begin(),s.end(),'a');
    int cnt_b= count(s.begin(), s.end(),'b');
    if(cnt_a>cnt_b) return cnt_a;
    else{
        return cnt_b;
    }
}
```

## Submission at 2024-11-25 09:58:16


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int cnt_a= count(s.begin(),s.end(),'a');
    int cnt_b= count(s.begin(), s.end(),'b');
    if(cnt_a>cnt_b) return cnt_a;
    else{
        return cnt_b;
    }
}
```

## Submission at 2024-11-25 10:00:34


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int cnt_a= count(s.begin(),s.end(),'a');
    int cnt_b= count(s.begin(), s.end(),'b');
    if(cnt_a>cnt_b) return cnt_a;
    else{
        return cnt_b;
    }
}
```

## Submission at 2024-11-25 10:15:53


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
bool ap(vector<int> &s){
    int ans=0;
    for(int j=0; j<s.size()-1; j++){
        int ans+= s[j] - s[j+1];
    if(ans == (s[0]-s[1])* (s.size()-1)){
        return true;
    }
    else{
        return false;
    }


    }
}
int main(){
    vector<int> s; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    ap(s);
}
```

## Submission at 2024-11-25 10:17:59


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
bool ap(vector<int> &s){
    int ans=0;

    for(int j=0; j<s.size()-1; j++){

        int ans+= s[j] - s[j+1];
    }
    if(ans == (s[0]-s[1])* (s.size()-1)){
        return true;
    }
    else{
        return false;
    }


    
}
int main(){
    vector<int> s; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    ap(s);
}
```

## Submission at 2024-11-25 10:19:54


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
bool ap(vector<int> &s){
    

    for(int j=0; j<s.size()-1; j++){
        int ans=0;

        int ans+= s[j] - s[j+1];
    }
    if(ans == (s[0]-s[1])* (s.size()-1)){
        return true;
    }
    else{
        return false;
    }


    
}
int main(){
    vector<int> s; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    ap(s);
}
```

## Submission at 2024-11-25 10:21:00


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool ap(vector<int> &s){
    

    for(int j=0; j<s.size()-1; j++){
        

        int ans+= s[j] - s[j+1];
    }
    if(ans == (s[0]-s[1])* (s.size()-1)){
        return true;
    }
    else{
        return false;
    }


    
}
int main(){
    vector<int> s; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    ap(s);
}
```

## Submission at 2024-11-25 10:24:52


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool ap(vector<int> &s){
    

    for(int j=0; j<s.size()-1; j++){
        

        ans+= s[j] - s[j+1];
    }
    if(ans == (s[0]-s[1])* (s.size()-1)){
        return true;
    }
    else{
        return false;
    }


    
}
int main(){
    vector<int> s; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    cout<<ap(s);
}
```

## Submission at 2024-11-25 10:30:03


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i;j++){
            cout<<'*';
        }
        cout<< " " <<endl;
    }
}
```

## Submission at 2024-11-25 10:45:02


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            cout<<'*';
        }
        cout<< " " <<endl;
    }
}
```

## Submission at 2024-11-25 10:53:45


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
bool is(Node* root){
    if(root==NULL){
        return false;
    }
    else{
        is(root->left);
        is(root->right);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    if((is(Node* root))==true){
        cout<<"YES";
    };
    else{
        cout<< "NO";
    }
}
```

## Submission at 2024-11-25 11:03:57


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr[n];
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< endl;
        }
    }
}
```

## Submission at 2024-11-25 11:04:53


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr[n];
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< endl;
        }
    }
}
```

## Submission at 2024-11-25 11:08:12


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< endl;
        }
    }
}
```

## Submission at 2024-11-25 11:12:01


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< endl;
        }
        else{
            cout<< {};
        }
    }
}
```

## Submission at 2024-11-25 11:15:26


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< endl;
        }
        else{
            return;
        }
    }
}
```

## Submission at 2024-11-25 11:20:22


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< endl;
        }
        else{
            cout<< {} <<endl;
        }
    }
}
```

## Submission at 2024-11-25 11:26:04


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< " ";
        }
        else{
            cout<<endl;
        }
    }
}
```

## Submission at 2024-11-25 11:27:06


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< " ";
        }
        else{
            cout<<endl;
        }
    }
}
```

## Submission at 2024-11-25 11:31:09


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin>>n;
    cin>>target;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>> arr[i];

    }

    sort(arr.begin(), arr.end());
    for(int j=0; j< n; j++){
        if(arr[j]==target){
            cout<< j<< " ";
        }
    }
}
```

## Submission at 2024-11-25 11:36:13


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int cnt_a= count(s.begin(),s.end(),'a');
    int cnt_b= count(s.begin(), s.end(),'b');
    if(cnt_a>cnt_b) cout<<'a';
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 11:40:10


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool ap(vector<int> &s){
    

    for(int j=0; j<s.size()-1; j++){
        

        ans+= s[j] - s[j+1];
    }
    if(ans == (s[0]-s[1])* (s.size()-1)){
        return true;
    }
    else{
        return false;
    }


    
}
int main(){
    
    int n;
    cin>>n;
    vector<int> s(n); 
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    if(ap(s)==true){
        cout<< "true";
    }
    else{
        cout<< "false";
    }
}
```

