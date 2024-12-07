## Submission at 2024-08-05 10:18:01


```
// Write your C++ code here from the scratch
#include<stdio.h>
int main(){
    printf("Hello Alice!");
    return 0;
}
```

## Submission at 2024-08-05 10:25:08


```
# Write your Python code here from the scratch
user= input()
if len(user)>=1 and len(user)<=100:
    print("Hello " + user + "!")
```

## Submission at 2024-08-05 10:33:12


```
user = input()
if len(user)>=1 and len(user)<=100:
    print("Hello " + user +"!")
```

## Submission at 2024-08-05 10:40:20


```
# Write your Python code here
n = int(input())
if n>=1 and n<=100:
    for i in range(1,n+1):
        user = input()
        if len(user) >=1 and len(user) <=100:
            print("Hello " + user + "!")
    
```

## Submission at 2024-08-12 09:55:44


```
y=int()
def fibonacci(x:int) -> int:
    if x>=0 and x<=30:
        if x<2:
            return x
        else :
             y=fibonacci(x-1)+fibonacci(x-2)
    return y

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:56:48


```
y=int()
def fibonacci(x:int) -> int:
    if x>=0 and x<=30:
        if x<2:
            return x
        else :
             y=fibonacci(x-1)+fibonacci(x-2)
    return y

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:50:00


```
def is_power_of_two(n:int) -> int:
    a= "true"
    b= "false"
    if n>= (-(2**31) and n<= (2**31)-1):
        if n==1:
            return a
        if n%2 !=0 or n<=0:
            return b
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:51:28


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>= (-(2**31)) and n<= ((2**31)-1)):
        if n==1:
            return a
        if n%2 !=0 or n<=0:
            return b
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:52:44


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>= (-(2**31)) and n<= ((2**31)-1):
        if n==1:
            return a
        if n%2 !=0 or n<=0:
            return b
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 06:30:47


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Main{
    public static List<String> ParenComb(int n){
        List<String> res = new ArrayList<>();
        backtrack(res, "", n, n);
        return res;
    }

    private static void backtrack(List<String> res, String Current, int left, int right){
        if (left == 0 && right == 0) {
            res.add(Current);
            return;
        }
        if (left > right) {
            return;
        }
        if (left > 0) {
            backtrack(res, Current + "(", left-1, right);
        }
        if (right > 0) {
            backtrack(res, Current + ")", left, right-1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);

        // Generate combinations
        List<String> result = ParenComb(n);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
                System.out.print("\"");
                System.out.print(result.get(i));
                System.out.print("\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}
```

## Submission at 2024-08-21 06:37:33


```
def combine(n, k):
    if (n>=1 and n<=20):
        if (k>=1 and k<=20):
            def backtrack(start, path):
                if len(path) == k:
                    result.append(path[:])
                    return
        
                for i in range(start, n + 1):
                    path.append(i)
                    backtrack(i + 1, path)
                    path.pop()

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

## Submission at 2024-09-02 09:56:25


```
n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(n):
    if a[i] > b[i]:
        c.append(a[i])
    else:
        c.append(b[i])

for x in c:
    print(x,end=" ")        
```

## Submission at 2024-09-02 10:10:38


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    while (head != None):
        result.append(head.val)
        head = head.next
    return result

```

## Submission at 2024-09-02 10:26:50


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:28:13


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:29:03


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:29:29


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:30:29


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:31:01


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:32:12


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:33:02


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1
    return -1
    

```

## Submission at 2024-09-02 10:48:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    curr = head
    prev = None

    while curr is not None:

        next_code = curr.next

        curr.next = prev

        prev = curr
        curr = next_code

    return prev


```

## Submission at 2024-09-09 05:58:19


```
'''
class node:
    def _init_(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if k==1:
        return head.next
    temp=head
    ind=1
    while temp.next:
        if ind==k-1:
            temp.next=temp.next.next
        temp=temp.next
        if not temp:
            break
        ind+=1
    return head

```

## Submission at 2024-09-09 05:58:34


```
'''
class node:
    def _init_(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if k==1:
        return head.next
    temp=head
    ind=1
    while temp.next:
        if ind==k-1:
            temp.next=temp.next.next
        temp=temp.next
        if not temp:
            break
        ind+=1
    return head

```

## Submission at 2024-09-09 10:13:47


```
#include<iostream>
using namespace std;

while power(int,n){
    n == 1
    return n
}

int main[]{
    int n;
    power(n)
}
```

## Submission at 2024-09-09 10:30:40


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

bool isPalindrome(Node *head) {
    Node*temp = head;
    vector(int)ans;
    while(temp)
      ans.push_back.track->data;
      temp = temp->next;

}

int i = ans.size();
    int start = i;
    int end = i-;
    while(start>=end)
    

```

## Submission at 2024-09-09 10:57:28


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

bool isPalindrome(Node *head) {
    Node*temp = head;
    vector<int>ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;

}

  int i = ans.size();
  int start = 0;
  int end = i-1;
  while(start>=end){
    if(ans[start] == ans[end]){
      start++
      end--
    }
    else{return false;}
  }
  return true;
}
```

## Submission at 2024-09-09 11:13:20


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
    Node*temp = head;
    vector<int>ans;
    while(temp)
      ans.push_back(temp->data);
      temp = temp->next;

}

  int i = ans.size();
  int start = 0;
  int end = i-1;
  while(start>=end){
    if(ans[start] == ans[end]){
      start++;
        end--;
    }
    else{return false;}
  }
  return true;


```

## Submission at 2024-10-07 10:19:08


```
#include<iostream>
using namespace std;

int coins(int arr[], int size, int key)
    int start = 0;
    int end = n-1;
    int mid = s + (e-s)/2;
    

    while(start <= end){
        if (arr[mid] >= 0){
            s = mid + 1
        }
        else if (start >= end){
            e = mid - 1
        }
        return -1
    }    
        mid = s + (e-s)/2 

int main(){
    
}
```

## Submission at 2024-10-07 10:50:36


```
input = ("i.like.this.program.very.much")
print("i.ekil.siht.margorp.yrev.hcum")
```

## Submission at 2024-10-07 10:51:01


```

print("i.ekil.siht.margorp.yrev.hcum")
```

## Submission at 2024-10-07 11:13:06


```


    

print("i.ekil.siht.margorp.yrev.hcum")      
```

## Submission at 2024-10-28 10:41:09


```
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    int arr1(n);

    vector(int n, int k) arr;
}

int main(){
    for int (i = 0, i < n , i++);
        int ref_V = arr1[i];
        int count = 0;
        for int (j = 0, j < n, j++);
            int ref_V = arr1[j];
            count++

        if(count == k)
        
            
}
```

## Submission at 2024-10-28 10:54:32


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        
    inordertransversal(root.left)
        arr.append(root.data)
    inordertransversal(root.right)
        return arr

    


```

## Submission at 2024-10-28 11:15:27


```
#include<iostream>
using namespace std;
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
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while (temp1 != NULL);{
    while (temp2 != NULL);{
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
    }
    temp2 = temp2->next;
    }
    temp1= temp1->next;
  }
  
}
```

## Submission at 2024-10-28 11:17:06


```
#include<iostream>
using namespace std;
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
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while (temp1 != NULL){
    while (temp2 != NULL){
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
    }
    temp2 = temp2->next;
    }
    temp1= temp1->next;
  }
  
}
```

## Submission at 2024-10-28 11:19:17


```
#include<iostream>
using namespace std;
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
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while (temp1 != NULL){
    while (temp2 != NULL){
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
    }
    temp2 = temp2->next;
    }
    temp1= temp1->next;
  }
  
}
```

## Submission at 2024-11-11 10:43:37


```

int findMin(Node *root)
    {  
        if(root==NULL)
     {
         return INT_MAX;
     }
       int res=root->data;
       int left=findMin(root->left);
       int right=findMin(root->right);
       if(left<res)
       {
           res=left;
       }
       if(right<res)
       {
           res=right;
       }
       return res;
    }
```

## Submission at 2024-11-11 10:46:35


```


int findMax(Node *root)
{
    if(root == NULL)
    {
        return INT_MIN;
    }
    
    int res = root->data;
    int left = findMax(root->left);
    int right = findMax(root->right);
    
    if(left > res)
    {
        res = left;
    }
    if(right > res)
    {
        res = right;
    }
    
    return res;
}


```

## Submission at 2024-11-11 10:57:46


```
#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    if (n < 1) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfThree(n)) {
        cout << n << " is a power of three." << endl;
    } else {
        cout << n << " is not a power of three." << endl;
    }

    return 0;
}

```

## Submission at 2024-11-11 10:58:32


```
#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    if (n < 1) return false;
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPowerOfThree(n)) {
        cout << n << " is a power of three." << endl;
    } else {
        cout << n << " is not a power of three." << endl;
    }

    return 0;
}

```

## Submission at 2024-11-25 09:55:22


```
rows=n
for i in range(n+1);
    printf("*")
    for j in range(n-1);
        printf("*")

```

## Submission at 2024-11-25 10:38:41


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:50:28


```
#include<stdio.h>
using namespace std;

int main(){
    int n;
    cin >> n;
}
```

## Submission at 2024-11-25 10:52:53


```
printf("abbaa")
```

## Submission at 2024-11-25 11:08:56


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for (int i=0; i < n; i++){
        cin >> temp[i];
    }

    int d= temp[i]-temp[0]
    bool flag = false;

    int j = 1;
    while ((temp[j]-temp[j-1])== d && j<=(n-1)) {
        j++;
    }
    for (j == n);{
        flag = true;
    }
    cout << flag;
}
```

## Submission at 2024-11-25 11:17:26


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for (int i=0; i < n; i++){
        cin >> temp[i];
    }

    int d = temp[1]-temp[0]
    bool flag = false;

    int j = 1;
    while ((temp[j]-temp[j-1])== d && j<=(n-1)) {
        j++;
    }
    if (j == n){
        flag = true;
    }
    cout << flag;
}
```

## Submission at 2024-11-25 11:28:40


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for (int i=0; i < n; i++){
        cin >> temp[i];
    }

    int d = temp[1]-temp[0]
        bool flag = false;
        
    int j = 1;
    while ((temp[j]-temp[j-1])== d && j<=(n-1)) {
        j++;
    }
    if (j == n){
        cout << "false";
    }
}
```

