## Submission at 2024-08-22 13:09:07


```
print("Hello " + input() + "!")
```

## Submission at 2024-08-22 13:26:02


```
print(input())
```

## Submission at 2024-08-23 04:32:06


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
    Node* curr = head;
    Node* prev;
    while(x > 1){
        prev = curr;
        curr = curr->next;
        x--;
    }
    prev->next = curr->next;
    return head;
}

```

## Submission at 2024-08-23 04:37:25


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
    if(x == 1)
        return head->next;
    Node* curr = head;
    Node* prev;
    while(x > 1){
        prev = curr;
        curr = curr->next;
        x--;
    }
    prev->next = curr->next;
    return head;
}

```

## Submission at 2024-08-23 05:16:52


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
    if(x == 1)
        return head->next;
    Node* curr = head;
    Node* prev;
    while(x > 1){
        // cout << curr->data << " ";
        prev = curr;
        curr = curr->next;
        x--;
    }
    // cout << endl;
    prev->next = curr->next;
    return head;
}

```

## Submission at 2024-08-27 10:32:34


```
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "Hello " << s << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-27 10:56:09


```
// Write your C++ code here from the scratch
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "Hello " << s << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-27 11:50:04


```
// Write your C++ code here from the scratch
// Write your C++ code here from the scratch
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "Hello " << s << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-27 11:55:29


```
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "Hello " << s << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-28 04:02:23


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size(), f1 = 1;
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]){
            cout << "NO" << endl;
            f1 = 0;
            break;
        }
    }
    if(f1)
        cout << "YES" << endl;
    return 0;
}
```

## Submission at 2024-08-28 04:21:53


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, currDigits = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(x > 0){
            x = x/10;
            currDigits++;
        }
        if(currDigits%2 == 0)
            ans++;
        currDigits = 0;
    }
    cout << ans << endl;
}
```

## Submission at 2024-08-28 04:29:57


```

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, currDigits = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(x > 0){
            x = x/10;
            currDigits++;
        }
        if(currDigits%2 == 0)
            ans++;
        currDigits = 0;
    }
    cout << ans << endl;
}
```

## Submission at 2024-08-28 04:53:44


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, currDigits = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(x > 0){
            x = x/10;
            currDigits++;
        }
        if(currDigits%2 == 0)
            ans++;
        currDigits = 0;
    }
    cout << ans << endl;
}
```

## Submission at 2024-08-28 08:55:05


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
    Node* curr = head->next;
    Node* prev = head;
    Node* tmp = head;
    while(curr){
        tmp = curr->next;
        curr->next = prev;
        prev = curr;
        // if(tmp != NULL)
        curr = tmp;
    }
    // cout << curr->data << " " << prev->data << endl;
    // curr->next = prev;
    return curr;
}

```

## Submission at 2024-08-28 09:00:38


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

    while(curr != NULL){
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;        
    }
    return prev;
}

```

## Submission at 2024-08-28 09:06:58


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

bool func(int lo, int hi, string& s){
    if(lo == hi) return true;
    if(hi-lo == 1){
        return (s[hi] == s[lo]);
    }
    if(s[hi] != s[lo])
        return false;
    return func(lo+1, hi-1, s);
}

int main(){
    string s;
    cin >> s;
    if(func(0, s.size(), s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
```

## Submission at 2024-08-28 09:12:37


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

bool func(int lo, int hi, string& s){
    if(lo == hi) return true;
    if(hi-lo == 1){
        if(s[hi] == s[lo])
            return true;
        else    
            return false;
    }
    if(s[hi] != s[lo])
        return false;
    return func(lo+1, hi-1, s);
}

int main(){
    string s;
    cin >> s;
    if(func(0, s.size(), s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
```

## Submission at 2024-08-28 09:17:03


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

bool func(int lo, int hi, string& s){
    if(lo == hi) return true;
    if(hi-lo == 1){
        if(s[hi] == s[lo])
            return true;
        else    
            return false;
    }
    if(s[hi] != s[lo])
        return false;
    return func(lo+1, hi-1, s);
}

int main(){
    string s;
    cin >> s;
    if(func(0, s.size()-1, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
```

## Submission at 2024-08-28 09:19:53


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

bool func(int lo, int hi, string& s){
    if(lo == hi) return true;
    if(hi-lo == 1){
        if(s[hi] == s[lo])
            return true;
        else    
            return false;
    }
    if(s[hi] != s[lo])
        return false;
    return func(lo+1, hi-1, s);
}

int main(){
    string s;
    cin >> s;
    if(func(0, s.size()-1, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
```

## Submission at 2024-08-28 09:25:02


```
// Write code from scratch

// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

bool func(int lo, int hi, string& s){
    if(lo == hi) return true;
    if(hi-lo == 1){
        if(s[hi] == s[lo])
            return true;
        else    
            return false;
    }
    if(s[hi] != s[lo])
        return false;
    return func(lo+1, hi-1, s);
}

int main(){
    string s;
    cin >> s;
    if(func(0, s.size()-1, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
```

## Submission at 2024-08-29 06:18:34


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    int rowCounter = 0;
    while(rowCounter < m){
        int colCounter = 0, tmp = 0;
        while(colCounter <= min(n, rowCounter)){
            cout << grid[rowCounter-tmp][colCounter] << " ";
            colCounter++;
            tmp++;
        }
        rowCounter++;
    }
    int colCounter = 1;
    while(colCounter < n){
        rowCounter = m-1;
        int tmp = 0;
        while(rowCounter > max(colCounter-1, 0)){
            cout << grid[rowCounter][colCounter+tmp] << " ";
            rowCounter--;
            tmp++;
        }
        colCounter++;
    }

    return 0;
}
```

## Submission at 2024-08-29 06:21:41


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    int rowCounter = 0;
    while(rowCounter < m){
        int colCounter = 0, tmp = 0;
        while(colCounter < min(n, rowCounter)){
            cout << grid[rowCounter-tmp][colCounter] << " ";
            colCounter++;
            tmp++;
        }
        rowCounter++;
    }
    int colCounter = 1;
    while(colCounter < n){
        rowCounter = m-1;
        int tmp = 0;
        while(rowCounter > max(colCounter-1, 0)){
            cout << grid[rowCounter][colCounter+tmp] << " ";
            rowCounter--;
            tmp++;
        }
        colCounter++;
    }

    return 0;
}
```

## Submission at 2024-08-29 06:32:40


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    int rowCounter = 0;
    while(rowCounter < m){
        int colCounter = 0, tmp = 0;
        while(colCounter <= min(n-1, rowCounter)){
            cout << grid[rowCounter-tmp][colCounter] << " ";
            colCounter++;
            tmp++;
        }
        rowCounter++;
    }
    int colCounter = 1;
    while(colCounter < n){
        rowCounter = m-1;
        int tmp = 0;
        while(rowCounter >= 0 && colCounter+tmp < n){
            cout << grid[rowCounter][colCounter+tmp] << " ";
            rowCounter--;
            tmp++;
        }
        colCounter++;
    }

    return 0;
}
```

## Submission at 2024-08-29 06:49:20


```

vector<int> diagonalTraversal(vector<vector<int>> grid) {
    // Your code here
    int n = grid[0].size(), m = grid.size();
    vector<int> ans;
    int rowCounter = 0;
    while(rowCounter < m){
        int colCounter = 0, tmp = 0;
        while(colCounter <= min(n-1, rowCounter)){
            ans.push_back(grid[rowCounter-tmp][colCounter]);
            colCounter++;
            tmp++;
        }
        rowCounter++;
    }
    int colCounter = 1;
    while(colCounter < n){
        rowCounter = m-1;
        int tmp = 0;
        while(rowCounter >= 0 && colCounter+tmp < n){
            ans.push_back(grid[rowCounter][colCounter+tmp]);
            rowCounter--;
            tmp++;
        }
        colCounter++;
    }

    return ans;
}

```

## Submission at 2024-08-29 06:54:31


```


class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        List<Integer> result = new ArrayList<>();
        int M = matrix.length;
        if (M == 0) return result;
        int N = matrix[0].length;

        for (int d = 0; d < M + N - 1; ++d) {
            int row = d < M ? d : M - 1;
            int col = d < M ? 0 : d - M + 1;

            while (row >= 0 && col < N) {
                result.add(matrix[row][col]);
                row--;
                col++;
            }
        }
        return result;
    }
}

```

## Submission at 2024-08-29 06:56:32


```

def diagonal_traversal(matrix):
    # Your code here
    result = []
    M = len(matrix)
    if M == 0:
        return result
    N = len(matrix[0])

    for d in range(M + N - 1):
        row = d if d < M else M - 1
        col = 0 if d < M else d - M + 1

        while row >= 0 and col < N:
            result.append(matrix[row][col])
            row -= 1
            col += 1

    return result
    

```

## Submission at 2024-08-29 08:46:29


```

def diagonal_traversal(matrix):
    # Your code here
    result = []
    M = len(matrix)
    if M == 0:
        return result
    N = len(matrix[0])

    for d in range(M + N - 1):
        row = d if d < M else M - 1
        col = 0 if d < M else d - M + 1

        while row >= 0 and col < N:
            result.append(matrix[row][col])
            row -= 1
            col += 1

    return result
    

```

## Submission at 2024-08-29 10:34:51


```


def diagonal_traversal(matrix):
    # Your code here
    result = []
    M = len(matrix)
    if M == 0:
        return result
    N = len(matrix[0])

    for d in range(M + N - 1):
        row = d if d < M else M - 1
        col = 0 if d < M else d - M + 1

        while row >= 0 and col < N:
            result.append(matrix[row][col])
            row -= 1
            col += 1

    return result
    
```

## Submission at 2024-09-02 09:08:56


```
#include <vector>
using namespace std;

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

## Submission at 2024-09-02 09:09:36


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    current = head
    while current is not None:
        result.append(current.val)
        current = current.next
    return result


```

## Submission at 2024-09-02 09:10:13


```

// class ListNode {
//     int val;
//     ListNode next;
//     ListNode(int x) { val = x; next = null; }
// }

public class Solution {
    public static List<Integer> traverseLinkedList(ListNode head) {
        List<Integer> result = new ArrayList<>();
        ListNode current = head;
        while (current != null) {
            result.add(current.val);
            current = current.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 09:10:43


```

// class ListNode {
//     int val;
//     ListNode next;
//     ListNode(int x) { val = x; next = null; }
// }

public class Solution {
    static List<Integer> traverseLinkedList(ListNode head) {
        List<Integer> result = new ArrayList<>();
        // Your code here
        return result;
    }
}

```

## Submission at 2024-09-02 09:13:48


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

import java.util.*;

class TraverseLinkedList {
    List<Integer> traverseLinkedList(Node head) {
        List<Integer> result = new ArrayList<>();
        Node current = head;
        while (current != null) {
            result.add(current.data);
            current = current.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 09:16:22


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/


class TraverseLinkedList {
    List<Integer> traverseLinkedList(Node head) {
        List<Integer> result = new ArrayList<>();
        Node current = head;
        while (current != null) {
            result.add(current.data);
            current = current.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 09:27:32


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
    Node* current = head;
    int count = 1;

    while (current != nullptr) {
        if (count == k) {
            return current->data;
        }
        current = current->next;
        count++;
    }

    return -1; // k is greater than the number of nodes in the list
}


```

## Submission at 2024-09-02 09:28:22


```
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current:
        if count == k:
            return current.data
        current = current.next
        count += 1
    
    return -1  # k is greater than the number of nodes in the list


```

## Submission at 2024-09-02 09:28:55


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

import java.util.*;

class GetKthNodeFromLinkedList {
    int getKthNode(Node head, int k) {
        Node current = head;
        int count = 1;
        
        while (current != null) {
            if (count == k) {
                return current.data;
            }
            current = current.next;
            count++;
        }
        
        return -1; // If k is greater than the number of nodes
    }
}

```

## Submission at 2024-09-02 09:29:28


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class GetKthNodeFromLinkedList {
    int getKthNode(Node head, int k) {
        Node current = head;
        int count = 1;
        
        while (current != null) {
            if (count == k) {
                return current.data;
            }
            current = current.next;
            count++;
        }
        
        return -1; // If k is greater than the number of nodes
    }
}

```

## Submission at 2024-09-02 09:31:14


```
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current:
        if count == k:
            return current.data
        current = current.next
        count += 1
    
    return -1  # k is greater than the number of nodes in the list

    

```

## Submission at 2024-09-02 09:32:49


```
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
'''

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current is not None:
        if count == k:
            return current.data
        current = current.next
        count += 1
    
    return -1  # k is greater than the number of nodes in the list

    

```

## Submission at 2024-09-02 09:38:10


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    while current:
        if count == k:
            return current.val
        current = current.next
        count += 1
    return -1  # Return -1 if k is greater than the size of the list

```

## Submission at 2024-09-06 05:21:42


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
// 1-> 2-> 3
// curr = 1, prev = Null before entering loop
// curr = 1, curr->next = 2, prev = null, tmp = 2 before applying steps
// curr = 2, curr->next = Null, prev = 1, tmp = 2 after applying steps
// curr = 2, curr->next = 3, prev = 1, tmp = 3; before applying steps
// curr = 3, curr->next = 1, prev = 1, tmp = 3; after applying steps
// curr = 3, curr->next Null, prev = 2, tmp = Null; before applying steps
// curr = Null, curr->next = 2, prev = 3, tmp = Null; after applying steps
Node* reverseLinkedList(Node *head)
{
    // Write your logic here
    Node* curr = head;
    Node* prev = NULL;
    while(curr){
        Node* tmp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = tmp;
    }
    return prev;
}

```

## Submission at 2024-09-09 04:43:29


```

class Solution {
    public static int[][] modifiedMatrix(int[][] matrix) {
        int m = matrix.length;
        int n = matrix[0].length;
        int[][] ans = new int[m][n];
        int[] colMax = new int[n];
        for (int j = 0; j < n; j++) {
            colMax[j] = Integer.MIN_VALUE;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = matrix[i][j];
                colMax[j] = Math.max(colMax[j], matrix[i][j]);
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ans[i][j] == -1) {
                    ans[i][j] = colMax[j];
                }
            }
        }
        return ans;
    }
}

```

## Submission at 2024-09-09 04:44:20


```

def modify_matrix(matrix):
    # Your code here
  # User code: Implement the logic here
        m, n = len(matrix), len(matrix[0])
        ans = [[matrix[i][j] for j in range(n)] for i in range(m)]
        col_max = [-float('inf')] * n

        # Find column-wise maximums
        for i in range(m):
            for j in range(n):
                col_max[j] = max(col_max[j], matrix[i][j])

        # Replace -1 with the maximum value of its column
        for i in range(m):
            for j in range(n):
                if ans[i][j] == -1:
                    ans[i][j] = col_max[j]
        
        return ans
    
```

## Submission at 2024-09-09 04:45:29


```

def modify_matrix(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    ans = [[matrix[i][j] for j in range(n)] for i in range(m)]
    col_max = [-float('inf')] * n

    # Find column-wise maximums
    for i in range(m):
        for j in range(n):
            col_max[j] = max(col_max[j], matrix[i][j])

    # Replace -1 with the maximum value of its column
    for i in range(m):
        for j in range(n):
            if ans[i][j] == -1:
                ans[i][j] = col_max[j]
        
    return ans
    
```

## Submission at 2024-09-09 04:45:52


```

def modify_matrix(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    ans = [[matrix[i][j] for j in range(n)] for i in range(m)]
    col_max = [-1] * n

    # Find column-wise maximums
    for i in range(m):
        for j in range(n):
            col_max[j] = max(col_max[j], matrix[i][j])

    # Replace -1 with the maximum value of its column
    for i in range(m):
        for j in range(n):
            if ans[i][j] == -1:
                ans[i][j] = col_max[j]
        
    return ans
    
```

## Submission at 2024-09-09 04:50:39


```

def modify_matrix(matrix):
    # Your code here
    m, n = len(matrix), len(matrix[0])
    ans = [[matrix[i][j] for j in range(n)] for i in range(m)]
    col_max = [-1] * n

    # Find column-wise maximums
    for i in range(m):
        for j in range(n):
            col_max[j] = max(col_max[j], matrix[i][j])

    # Replace -1 with the maximum value of its column
    for i in range(m):
        for j in range(n):
            if ans[i][j] == -1:
                ans[i][j] = col_max[j]
        
    return ans
    
```

## Submission at 2024-09-09 04:51:26


```

class Solution {
    public int[][] modifiedMatrix(int[][] matrix) {
        // User code: Implement the logic here
        int m = matrix.length;
        int n = matrix[0].length;
        int[][] ans = new int[m][n];
        int[] colMax = new int[n];
        for (int j = 0; j < n; j++) {
            colMax[j] = Integer.MIN_VALUE;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                ans[i][j] = matrix[i][j];
                colMax[j] = Math.max(colMax[j], matrix[i][j]);
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ans[i][j] == -1) {
                    ans[i][j] = colMax[j];
                }
            }
        }
        return ans;
    }
}


```

## Submission at 2024-09-09 04:52:59


```
import java.util.ArrayList;
import java.util.List;

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // User code: Implement the logic here
        int m = matrix.size();
        int n = matrix.get(0).size();
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> colMax = new ArrayList<>();
        
        // Initialize ans and colMax
        for (int j = 0; j < n; j++) {
            colMax.add(Integer.MIN_VALUE);
        }

        // Copy matrix to ans and find column-wise maximums
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                row.add(matrix.get(i).get(j));
                colMax.set(j, Math.max(colMax.get(j), matrix.get(i).get(j)));
            }
            ans.add(row);
        }

        // Replace -1 with the maximum value of its column
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ans.get(i).get(j) == -1) {
                    ans.get(i).set(j, colMax.get(j));
                }
            }
        }
        return ans;
    }
}

```

## Submission at 2024-09-09 04:53:40


```
import java.util.ArrayList;
import java.util.List;

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // User code: Implement the logic here
        int m = matrix.size();
        int n = matrix.get(0).size();
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> colMax = new ArrayList<>();
        
        // Initialize ans and colMax
        for (int j = 0; j < n; j++) {
            colMax.add(Integer.MIN_VALUE);
        }

        // Copy matrix to ans and find column-wise maximums
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                row.add(matrix.get(i).get(j));
                colMax.set(j, Math.max(colMax.get(j), matrix.get(i).get(j)));
            }
            ans.add(row);
        }

        // Replace -1 with the maximum value of its column
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ans.get(i).get(j) == -1) {
                    ans.get(i).set(j, colMax.get(j));
                }
            }
        }
        return ans;
    }
}

```

## Submission at 2024-09-09 04:54:53


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // User code: Implement the logic here
        int m = matrix.size();
        int n = matrix.get(0).size();
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> colMax = new ArrayList<>();
        
        // Initialize ans and colMax
        for (int j = 0; j < n; j++) {
            colMax.add(Integer.MIN_VALUE);
        }

        // Copy matrix to ans and find column-wise maximums
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                row.add(matrix.get(i).get(j));
                colMax.set(j, Math.max(colMax.get(j), matrix.get(i).get(j)));
            }
            ans.add(row);
        }

        // Replace -1 with the maximum value of its column
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ans.get(i).get(j) == -1) {
                    ans.get(i).set(j, colMax.get(j));
                }
            }
        }
        return ans;
    }
}

```

## Submission at 2024-09-09 04:56:05


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // User code: Implement the logic here
        int m = matrix.size();
        int n = matrix.get(0).size();
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> colMax = new ArrayList<>();
        
        // Initialize ans and colMax
        for (int j = 0; j < n; j++) {
            colMax.add(Integer.MIN_VALUE);
        }

        // Copy matrix to ans and find column-wise maximums
        for (int i = 0; i < m; i++) {
            List<Integer> row = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                row.add(matrix.get(i).get(j));
                colMax.set(j, Math.max(colMax.get(j), matrix.get(i).get(j)));
            }
            ans.add(row);
        }

        // Replace -1 with the maximum value of its column
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (ans.get(i).get(j) == -1) {
                    ans.get(i).set(j, colMax.get(j));
                }
            }
        }
        return ans;
    
    }
}

```

## Submission at 2024-09-09 05:11:53


```

class Solution {
    public static List<List<Integer>> rotateMatrix(List<List<Integer>> matrix) {
        int N = matrix.size();
        List<List<Integer>> rotated = new ArrayList<>();

        // Initialize the rotated matrix
        for (int i = 0; i < N; i++) {
            rotated.add(new ArrayList<>());
            for (int j = 0; j < N; j++) {
                rotated.get(i).add(0);
            }
        }

        // Rotate the matrix by 90 degrees anticlockwise
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                rotated.get(N - j - 1).set(i, matrix.get(i).get(j));
            }
        }

        return rotated;
    }
}

```

## Submission at 2024-09-09 05:12:41


```

def rotateMatrix(matrix):
    # Your code here
    N = len(matrix)
    rotated = [[0] * N for _ in range(N)]

    # Rotate the matrix by 90 degrees anticlockwise
    for i in range(N):
        for j in range(N):
            rotated[N - j - 1][i] = matrix[i][j]

    return rotated
```

## Submission at 2024-09-09 05:13:03


```

def rotateMatrix(matrix):
    # Your code here
    N = len(matrix)
    rotated = [[0] * N for _ in range(N)]

    # Rotate the matrix by 90 degrees anticlockwise
    for i in range(N):
        for j in range(N):
            rotated[N - j - 1][i] = matrix[i][j]

    return rotated

    
```

## Submission at 2024-09-09 05:14:19


```

def rotateMatrix(matrix):
    # Your code here
    # Your code here
    N = len(matrix)
    rotated = [[0] * N for _ in range(N)]

    # Rotate the matrix by 90 degrees anticlockwise
    for i in range(N):
        for j in range(N):
            rotated[N - j - 1][i] = matrix[i][j]

    return rotated

    
    
```

## Submission at 2024-09-09 05:14:56


```

// Complete the given function
vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix) {
        int N = matrix.size();
        vector<vector<int>> rotated(N, vector<int>(N));

        // Rotate the matrix by 90 degrees anticlockwise
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                rotated[N - j - 1][i] = matrix[i][j];
            }
        }

        return rotated;
    }
```

## Submission at 2024-09-09 05:15:50


```

// Complete the given function
vector<vector<int>> rotateMatrix(vector<vector<int>> matrix) {
        int N = matrix.size();
        vector<vector<int>> rotated(N, vector<int>(N));

        // Rotate the matrix by 90 degrees anticlockwise
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                rotated[N - j - 1][i] = matrix[i][j];
            }
        }

        return rotated;
    }
```

## Submission at 2024-09-09 05:19:55


```

// Complete the given function
vector<vector<int>> rotateMatrix(vector<vector<int>> matrix){
int N = matrix.size();
    vector<vector<int>> rotated(N, vector<int>(N, 0));

    // Rotate the matrix by 90 degrees anticlockwise
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            rotated[N - j - 1][i] = matrix[i][j];
        }
    }

    return rotated;
};
```

## Submission at 2024-09-09 05:20:41


```

class Solution {
    public static List<List<Integer>> rotateMatrix(List<List<Integer>> matrix) {
        int N = matrix.size();
        List<List<Integer>> rotated = new ArrayList<>();

        // Initialize the rotated matrix
        for (int i = 0; i < N; i++) {
            rotated.add(new ArrayList<>());
            for (int j = 0; j < N; j++) {
                rotated.get(i).add(0);
            }
        }

        // Rotate the matrix by 90 degrees anticlockwise
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                rotated.get(N - j - 1).set(i, matrix.get(i).get(j));
            }
        }

        return rotated;
    }
}

```

## Submission at 2024-09-14 05:45:36


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
    if(head == NULL || head->next == NULL ){
        return head;


    }

    Node* newhead = reverseLinkedList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}

```

## Submission at 2024-09-16 10:36:41


```
class Solution:
    def isPalindrome(self, head):
        #code here
        res = []
        curr = head
        while curr:
          res.append(curr.data)
          curr = curr.next

        l = 0
        r = len(res)
        for i in range(l,r-1):
          if res[l]!=res[r-1]:
            return False            
          else:
            return True
          l+=1
          r-=1
```

## Submission at 2024-10-03 10:51:52


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (check(b, k, mid))
        {
            ans = mid;
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 10:53:39


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 11:30:58


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 11:46:22


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 11:51:12


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 11:52:00


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        // lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 11:53:16


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 12:00:07


```
def check(b, k, mid):
    curr = 0
    painter = 1
    for i in range(len(b)):
        if curr + b[i] <= mid:
            curr += b[i]
        else:
            painter += 1
            curr = b[i]
    return painter <= k

def findLargestMinDistance(b, k):
    lo, ans = 0, 0
    for x in b:
        lo = max(lo, x)
        ans += x
    hi = ans + 1

    while lo < hi:
        if check(b, k, lo):
            return lo
        else:
            lo += 1
    return ans

if __name__ == "__main__":
    n, k = map(int, input().split())
    b = list(map(int, input().split()))
    print(findLargestMinDistance(b, k))

```

## Submission at 2024-10-03 12:01:42


```
import java.util.*;

public class Main {

    public static boolean check(int[] b, int k, int mid) {
        int curr = 0, painter = 1;
        for (int i = 0; i < b.length; i++) {
            if (curr + b[i] <= mid) {
                curr += b[i];
            } else {
                painter++;
                curr = b[i];
            }
        }
        return painter <= k;
    }

    public static int findLargestMinDistance(int[] b, int k) {
        int lo = 0, ans = 0;
        for (int x : b) {
            lo = Math.max(lo, x);
            ans += x;
        }
        int hi = ans + 1;

        while (lo < hi) {
            if (check(b, k, lo)) {
                return lo;
            } else {
                lo++;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println(findLargestMinDistance(b, k));
    }
}

```

## Submission at 2024-10-03 12:09:40


```
def check(b, k, mid):
    curr = 0
    painter = 1
    for i in range(len(b)):
        if curr + b[i] <= mid:
            curr += b[i]
        else:
            painter += 1
            curr = b[i]
    return painter <= k

def findLargestMinDistance(b, k):
    lo, hi, ans = 0, 0, 0
    for x in b:
        lo = max(lo, x)
        ans += x
    hi = ans + 1

    while lo < hi:
        mid = (lo + hi) // 2
        if check(b, k, mid):
            ans = mid
            hi = mid
        else:
            lo = mid + 1

    return ans

if __name__ == "__main__":
    n, k = map(int, input().split())
    b = list(map(int, input().split()))
    print(findLargestMinDistance(b, k))

```

## Submission at 2024-10-03 12:10:39


```
import java.util.*;

public class Main {

    public static boolean check(int[] b, int k, int mid) {
        int curr = 0, painter = 1;
        for (int i = 0; i < b.length; i++) {
            if (curr + b[i] <= mid) {
                curr += b[i];
            } else {
                painter++;
                curr = b[i];
            }
        }
        return painter <= k;
    }

    public static int findLargestMinDistance(int[] b, int k) {
        int lo = 0, hi = 0, ans = 0;
        for (int x : b) {
            lo = Math.max(lo, x);
            ans += x;
        }
        hi = ans + 1;

        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (check(b, k, mid)) {
                ans = mid;
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println(findLargestMinDistance(b, k));
    }
}

```

## Submission at 2024-10-03 12:16:11


```
import java.util.*;

public class Main {

    public static boolean check(int[] b, int k, int mid) {
        int curr = 0, painter = 1;
        for (int i = 0; i < b.length; i++) {
            if (curr + b[i] <= mid) {
                curr += b[i];
            } else {
                painter++;
                curr = b[i];
            }
        }
        return painter <= k;
    }

    public static int findLargestMinDistance(int[] b, int k) {
        int lo = 0, hi = 0, ans = 0;
        for (int x : b) {
            lo = Math.max(lo, x);
            ans += x;
        }
        hi = ans + 1;

        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (check(b, k, mid)) {
                ans = mid;
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println(findLargestMinDistance(b, k));
    }
}

```

## Submission at 2024-10-03 12:17:21


```
def check(b, k, mid):
    curr = 0
    painter = 1
    for i in range(len(b)):
        if curr + b[i] <= mid:
            curr += b[i]
        else:
            painter += 1
            curr = b[i]
    return painter <= k

def findLargestMinDistance(b, k):
    lo, hi, ans = 0, 0, 0
    for x in b:
        lo = max(lo, x)
        ans += x
    hi = ans + 1

    while lo < hi:
        mid = (lo + hi) // 2
        if check(b, k, mid):
            ans = mid
            hi = mid
        else:
            lo = mid + 1

    return ans

if __name__ == "__main__":
    n, k = map(int, input().split())
    b = list(map(int, input().split()))
    print(findLargestMinDistance(b, k))

```

## Submission at 2024-10-03 12:17:54


```
def check(b, k, mid):
    curr = 0
    painter = 1
    for i in range(len(b)):
        if curr + b[i] <= mid:
            curr += b[i]
        else:
            painter += 1
            curr = b[i]
    return painter <= k

def findLargestMinDistance(b, k):
    lo, ans = 0, 0
    for x in b:
        lo = max(lo, x)
        ans += x
    hi = ans + 1

    while lo < hi:
        if check(b, k, lo):
            return lo
        else:
            lo += 1
    return ans

if __name__ == "__main__":
    n, k = map(int, input().split())
    b = list(map(int, input().split()))
    print(findLargestMinDistance(b, k))

```

## Submission at 2024-10-03 12:18:53


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        if(check(b, k, lo)){
            return lo;
        }else{
            lo++;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 12:19:38


```
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &b, int k, int mid)
{
    int curr = 0, painter = 1;
    for (int i = 0; i < b.size(); i++)
    {
        if (curr + b[i] <= mid)
        {
            curr += b[i];
        }
        else
        {
            painter++;
            curr = b[i];
        }
    }
    return (painter <= k);
}
int findLargestMinDistance(vector<int> &b, int k)
{
    //    Write your code here.
    int lo = 0, hi = 0, ans = 0;
    for (int x : b)
    {
        lo = max(lo, x);
        ans += x;
    }
    hi = ans + 1;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (check(b, k, mid))
        {
            ans = mid;
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 12:20:37


```
import java.util.*;

public class Main {

    public static boolean check(int[] b, int k, int mid) {
        int curr = 0, painter = 1;
        for (int i = 0; i < b.length; i++) {
            if (curr + b[i] <= mid) {
                curr += b[i];
            } else {
                painter++;
                curr = b[i];
            }
        }
        return painter <= k;
    }

    public static int findLargestMinDistance(int[] b, int k) {
        int lo = 0, ans = 0;
        for (int x : b) {
            lo = Math.max(lo, x);
            ans += x;
        }
        int hi = ans + 1;

        while (lo < hi) {
            if (check(b, k, lo)) {
                return lo;
            } else {
                lo++;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println(findLargestMinDistance(b, k));
    }
}

```

## Submission at 2024-10-03 12:21:31


```
import java.util.*;

public class Main {

    public static boolean check(int[] b, int k, int mid) {
        int curr = 0, painter = 1;
        for (int i = 0; i < b.length; i++) {
            if (curr + b[i] <= mid) {
                curr += b[i];
            } else {
                painter++;
                curr = b[i];
            }
        }
        return painter <= k;
    }

    public static int findLargestMinDistance(int[] b, int k) {
        int lo = 0, ans = 0;
        for (int x : b) {
            lo = Math.max(lo, x);
            ans += x;
        }
        int hi = ans + 1;

        while (lo < hi) {
            if (check(b, k, lo)) {
                return lo;
            } else {
                lo++;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println(findLargestMinDistance(b, k));
    }
}

```

## Submission at 2024-10-03 12:22:04


```
import java.util.*;

public class Main {

    public static boolean check(int[] b, int k, int mid) {
        int curr = 0, painter = 1;
        for (int i = 0; i < b.length; i++) {
            if (curr + b[i] <= mid) {
                curr += b[i];
            } else {
                painter++;
                curr = b[i];
            }
        }
        return painter <= k;
    }

    public static int findLargestMinDistance(int[] b, int k) {
        int lo = 0, ans = 0;
        for (int x : b) {
            lo = Math.max(lo, x);
            ans += x;
        }
        int hi = ans + 1;

        while (lo < hi) {
            if (check(b, k, lo)) {
                return lo;
            } else {
                lo++;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        System.out.println(findLargestMinDistance(b, k));
    }
}

```

## Submission at 2024-10-03 12:56:19


```
#include <bits/stdc++.h>
using namespace std;

bool func(int d, vector<int> &bd, int m, int k)
{
    int x = 0, c = 0;
    for (int i = 0; i < bd.size(); i++)
    {
        if (bd[i] > d)
            c = 0;
        else
        {
            c++;
            if (c == k)
            {
                x++;
                c = 0;
            }
        }
    }
    // cout << x << " " << d << endl;
    return (x >= m);
}

int minDays(vector<int> &bd, int m, int k)
{
    if (1LL * m * k > bd.size())
        return -1;
    int days = 0;
    int lo = 1, hi = 1e9 + 7;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (func(mid, bd, m, k))
        {
            days = mid;
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return days;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bd(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bd[i];
    }
    cout << minDays(bd, m, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 12:56:56


```
#include <bits/stdc++.h>
using namespace std;

bool func(int d, vector<int> &bd, int m, int k)
{
    int x = 0, c = 0;
    for (int i = 0; i < bd.size(); i++)
    {
        if (bd[i] > d)
            c = 0;
        else
        {
            c++;
            if (c == k)
            {
                x++;
                c = 0;
            }
        }
    }
    // cout << x << " " << d << endl;
    return (x >= m);
}

int minDays(vector<int> &bd, int m, int k)
{
    if (1LL * m * k > bd.size())
        return -1;
    int days = 0;
    int lo = 1, hi = 1e9 + 7;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (func(mid, bd, m, k))
        {
            days = mid;
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return days;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bd(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bd[i];
    }
    cout << minDays(bd, m, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 12:57:09


```
#include <bits/stdc++.h>
using namespace std;

bool func(int d, vector<int> &bd, int m, int k)
{
    int x = 0, c = 0;
    for (int i = 0; i < bd.size(); i++)
    {
        if (bd[i] > d)
            c = 0;
        else
        {
            c++;
            if (c == k)
            {
                x++;
                c = 0;
            }
        }
    }
    // cout << x << " " << d << endl;
    return (x >= m);
}

int minDays(vector<int> &bd, int m, int k)
{
    if (1LL * m * k > bd.size())
        return -1;
    int days = 0;
    int lo = 1, hi = 1e9 + 7;
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (func(mid, bd, m, k))
        {
            days = mid;
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return days;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bd(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bd[i];
    }
    cout << minDays(bd, m, k) << endl;
    return 0;
}
```

## Submission at 2024-10-03 13:04:04


```
#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &t)
{
    int n = t.size();
    vector<int> ans(n, 0);
    stack<pair<int, int>> st;
    st.push({t[n - 1], n - 1});
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() and t[i] >= st.top().first)
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = 0;
            st.push({t[i], i});
        }
        else
        {
            ans[i] = st.top().second - i;
            st.push({t[i], i});
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    vector<int> ans = dailyTemperatures(t);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
```

## Submission at 2024-10-03 13:10:06


```
// Write Java code from scratch
import java.util.*;

public class Main {
    public static int[] dailyTemperatures(int[] t) {
        int n = t.length;
        int[] ans = new int[n];
        Stack<int[]> st = new Stack<>();
        st.push(new int[]{t[n - 1], n - 1});
        
        for (int i = n - 2; i >= 0; i--) {
            while (!st.isEmpty() && t[i] >= st.peek()[0]) {
                st.pop();
            }
            if (st.isEmpty()) {
                ans[i] = 0;
            } else {
                ans[i] = st.peek()[1] - i;
            }
            st.push(new int[]{t[i], i});
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] t = new int[n];
        
        for (int i = 0; i < n; i++) {
            t[i] = sc.nextInt();
        }
        
        int[] ans = dailyTemperatures(t);
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}

```

## Submission at 2024-10-03 13:10:33


```
# Write Python code from scratch
def dailyTemperatures(t):
    n = len(t)
    ans = [0] * n
    st = [(t[-1], n - 1)]
    
    for i in range(n - 2, -1, -1):
        while st and t[i] >= st[-1][0]:
            st.pop()
        if not st:
            ans[i] = 0
        else:
            ans[i] = st[-1][1] - i
        st.append((t[i], i))
    
    return ans

if __name__ == "__main__":
    n = int(input())
    t = list(map(int, input().split()))
    
    ans = dailyTemperatures(t)
    print(" ".join(map(str, ans)))

```

## Submission at 2024-10-03 13:10:58


```
// Write Java code from scratch
import java.util.*;

public class Main {
    public static int[] dailyTemperatures(int[] t) {
        int n = t.length;
        int[] ans = new int[n];
        Stack<int[]> st = new Stack<>();
        st.push(new int[]{t[n - 1], n - 1});
        
        for (int i = n - 2; i >= 0; i--) {
            while (!st.isEmpty() && t[i] >= st.peek()[0]) {
                st.pop();
            }
            if (st.isEmpty()) {
                ans[i] = 0;
            } else {
                ans[i] = st.peek()[1] - i;
            }
            st.push(new int[]{t[i], i});
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] t = new int[n];
        
        for (int i = 0; i < n; i++) {
            t[i] = sc.nextInt();
        }
        
        int[] ans = dailyTemperatures(t);
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}

```

## Submission at 2024-10-03 13:14:06


```
// Write Java code from scratch
import java.util.*;

public class Main {
    public static int[] dailyTemperatures(int[] t) {
        int n = t.length;
        int[] ans = new int[n];
        Stack<int[]> st = new Stack<>();
        st.push(new int[]{t[n - 1], n - 1});
        
        for (int i = n - 2; i >= 0; i--) {
            while (!st.isEmpty() && t[i] >= st.peek()[0]) {
                st.pop();
            }
            if (st.isEmpty()) {
                ans[i] = 0;
            } else {
                ans[i] = st.peek()[1] - i;
            }
            st.push(new int[]{t[i], i});
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] t = new int[n];
        
        for (int i = 0; i < n; i++) {
            t[i] = sc.nextInt();
        }
        
        int[] ans = dailyTemperatures(t);
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}

```

## Submission at 2024-10-03 13:14:29


```
// Write Java code from scratch
import java.util.*;

public class Main {
    public static int[] dailyTemperatures(int[] t) {
        int n = t.length;
        int[] ans = new int[n];
        Stack<int[]> st = new Stack<>();
        st.push(new int[]{t[n - 1], n - 1});
        
        for (int i = n - 2; i >= 0; i--) {
            while (!st.isEmpty() && t[i] >= st.peek()[0]) {
                st.pop();
            }
            if (st.isEmpty()) {
                ans[i] = 0;
            } else {
                ans[i] = st.peek()[1] - i;
            }
            st.push(new int[]{t[i], i});
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] t = new int[n];
        
        for (int i = 0; i < n; i++) {
            t[i] = sc.nextInt();
        }
        
        int[] ans = dailyTemperatures(t);
        for (int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }
}

```

## Submission at 2024-10-04 05:23:59


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
```

## Submission at 2024-10-04 05:24:40


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
```

## Submission at 2024-10-07 07:16:08


```
// Write C++ Code from scratch
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, sum = 0;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }
    sort(a.begin(), a.end());
    int midElement = a[n/2];
    long long ans = LLONG_MAX;
    long long lo = 0, hi = LLONG_MAX;
    while (lo < hi)
    {
        long long mid = (lo + hi) / 2;
        double avg = (sum + mid) / (2*n);
        if (midElement*2*n < sum+mid)
        {
            ans = min(ans, mid);
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
```

## Submission at 2024-10-07 09:04:08


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define sum(v) accumulate(all(v),(int)0)
#define ff first
#define ss second
#define pi pair<int,int>
int M = 998244353;
const int mod = 1e9+7;

template <typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a)
{
    return cin >> a.first >> a.second;
}
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}

int powr(int a, int b){
    int ans =1;
    while (b>0){
        if ((b&1)==1){
            ans=(ans*1LL*a)%mod;

        }
        a=(a*1LL*a)%mod;
        b=b>>1;
    }
    return ans;
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void printDivisors(int n, map<int, int>& mp)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                mp[i]++;  
            else // Otherwise print both
                mp[n/i]++, mp[i]++;
        }
    }
    return;
}


bool isPower(int x, int y)
{
    // The only power of 1 is 1 itself
    if (x == 1)
        return (y == 1);
 
    // Repeatedly compute power of x
    int pow = 1;
    while (pow < y)
        pow *= x;
  
    // Check if power of x becomes y
    return (pow == y);
}



void solve(){
    int n, m, x, y, k, a, b, c, d = 1e9+7, g;
    string s = "", s1, s2;
    bool f1 = true, f2 = true;
    cin >> n >> k;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    int lo = 0, hi = n;
    while(lo < hi){
        m = (lo+hi)/2;
        c = (m*(m+1))/2 - (n-m);
        if(c > k){
            hi = m;
        }else if(c < k){
            lo = m+1;
        }else{
            cout << n-m << endl;
            break;
        }
    }
}
 
 
 
int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    cin.tie(NULL);
    cout<<setprecision(10)<<fixed;
    
    int test = 1;
    // cin >> test;
    
    while(test--)
        solve();
}
```

## Submission at 2024-10-07 09:06:50


```
#include <iostream>
#include <cmath>

int main()
{
    long long n, k;
    std::cin >> n >> k;
    long long l = -1, r = n + 1;
    while (r - l > 1)
    {
        long long m = (l + r) / 2;
        if ((n - m) * (n - m + 1) / 2 - m > k)
            l = m;
        else
            r = m;
    }
    std::cout << r;
    return 0;
}
```

## Submission at 2024-10-07 11:44:28


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 1; i < n; i++){
        int diff = abs(a[i]-a[i-1]);
        if(diff > k){
            if(a[i] > a[i-1]){
                ans += diff-k;
                a[i] = a[i-1]+k;
            }else{
                ans += diff-k;
                a[i-1] = a[i] + k;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-07 11:47:00


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, mn = INT_MAX;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        int diff = abs(a[i]-mn);
        if(diff > k){
            ans += diff-k;
        }
    }
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-08 12:06:17


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
if len(l)<=2:
    print(-1)
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid])*2*n-s+1
print(max(0,x))
```

## Submission at 2024-10-14 10:40:21


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int h, int k){
    int dam = 0;
    for(int i = 0; i < a.size(); i++){
        if(i+1 < a.size() and a[i]+k >= a[i+1])
            dam += a[i+1]-a[i];
        else
            dam += k;
    }
    return (dam >= h);
}

int main(){
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = INT_MAX, ans = INT_MAX;
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(check(a, h, mid)){
            hi = mid;
            ans = min(ans, mid);
        }else{
            lo = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-14 10:40:48


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int h, int k){
    int dam = 0;
    for(int i = 0; i < a.size(); i++){
        if(i+1 < a.size() and a[i]+k >= a[i+1])
            dam += a[i+1]-a[i];
        else
            dam += k;
    }
    return (dam >= h);
}

int main(){
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = INT_MAX, ans = INT_MAX;
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(check(a, h, mid)){
            hi = mid;
            ans = min(ans, mid);
        }else{
            lo = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-14 10:41:08


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int h, int k){
    int dam = 0;
    for(int i = 0; i < a.size(); i++){
        if(i+1 < a.size() and a[i]+k >= a[i+1])
            dam += a[i+1]-a[i];
        else
            dam += k;
    }
    return (dam >= h);
}

int main(){
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = INT_MAX, ans = INT_MAX;
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(check(a, h, mid)){
            hi = mid;
            ans = min(ans, mid);
        }else{
            lo = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-14 10:42:02


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int h, int k){
    int dam = 0;
    for(int i = 0; i < a.size(); i++){
        if(i+1 < a.size() and a[i]+k >= a[i+1])
            dam += a[i+1]-a[i];
        else
            dam += k;
    }
    return (dam >= h);
}

int main(){
    int n, h;
    cin >> n >> h;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int lo = 0, hi = h+1, ans = h+1;
    while(lo < hi){
        int mid = (lo+hi)/2;
        if(check(a, h, mid)){
            hi = mid;
            ans = min(ans, mid);
        }else{
            lo = mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-23 10:26:01


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void func(Node* node, vector<int>& ans){
  // cout << "Node: " << node->data << endl;
  if(node->left)
    func(node->left, ans);
  if(node->right)
    func(node->right, ans);
  ans.push_back(node->data);
  return;
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  // cout << root->data << endl;
  vector<int> ans;
  func(root, ans);
  return ans;
}
```

## Submission at 2024-10-23 10:55:49


```
// Write code from scratch
#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &v)
{
    map<int, int> mp;
    for (int x : v)
        mp[x]++;
    return min(int(mp.size()), int(v.size() / 2));
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int ans = func(v);
    cout << ans << endl;
}
```

## Submission at 2024-10-28 09:11:55


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
void func(Node* node, int& sum, int curr){
  
  if(node->left == NULL and node->right == NULL){
    // cout << node->data << endl;
    sum += (10*curr + node->data);
  } 
  if(node->left){
    func(node->left, sum, 10*curr + node->data);
  } 
  if(node->right){
    func(node->right, sum ,10*curr + node->data);
  }
  return;
}
int treePathSum(Node* root)
{
  // Your code here
  int ans = 0;
  func(root, ans, 0);
  return ans;
}

```

## Submission at 2024-10-29 11:27:14


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
from collections import deque

def maxDepth(root):
    if not root :
      return 0
    res=[]
    q=deque()
    q.append(root)
    while q:
      levelsize=len(q)
      currlevel=[]
      for i in range (levelsize):
        node = q.popleft()
        currlevel.append(node.data)
        if node.left:
          q.append(node.left)
        if node.right:
          q.append(node.right)
      res.append(currlevel)
      return levelsize
```

## Submission at 2024-11-15 04:52:00


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i,j;
    if(s.length() == t.length()) {
        sort(s.begin(),s.end());
                sort(t.begin(),t.end());

        for(i=0; i<s.length(); i++){
            if(s[i] != t[i]){
                cout<< "false";
                break;
            }
        }
        cout<< "true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-15 04:56:26


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int i,j;
    if(s.length() == t.length()) {
        sort(s.begin(),s.end());
                sort(t.begin(),t.end());
    int flag = 0;
        for(i=0; i<s.length(); i++){
            if(s[i] != t[i]){
                cout<< "false";
        flag = 1;
             break;
            }
        }
        if (flag == 0){
            cout << "true";
        }     }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-16 08:38:53


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
        #code here
        ans=[]
        def trav(root):
            if not root:
                return
            ans.append(root.data)
            trav(root.left)
            trav(root.right)
        trav(root)
        x = 1000000
        for i in range(0,len(ans)):
            if ans[i] <= x:
                x = ans[i] 

        return x        




```

## Submission at 2024-11-17 10:12:10


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans[n];
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]<arr[j]){
                ans[i] = j-i;
                break;
            }
        }
    }
    for(int k = 0;k<n;k++){
        cout<<ans[k]<<" ";
    }
    return 0;
}
```

## Submission at 2024-11-19 11:32:29


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        String[] l1 = ip.nextLine().split(" ");
        String[] l2 = ip.nextLine().split(" ");
        int[] arr = new int[l2.length];
        int n = Integer.parseInt(l1[0]);
        int k = Integer.parseInt(l1[1]);
        for(int i = 0;i<arr.length;i++){
            arr[i] = Integer.parseInt(l2[i]);
        }
        Arrays.sort(arr);
        int min = arr[0];
        int count = 0;
        for(int i = 0;i<arr.length;i++){
            if(arr[i]-min>k){
                count+=arr[i]-min-k;
            }
        }
        System.out.println(count);
    }
}
```

## Submission at 2024-11-25 06:21:27


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def func(node, n, ans):
  if node is None:
    return 

  if node.data == n:
    ans = n
  elif node.data > n:
    func(node.left, n, ans)
  else:
    ans = max(ans, node.data)
    func(node.right, n, ans)
  return

#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
    # print(root.data, n)
  ans = -1
  func(root, n, ans)
  return ans
    
```

## Submission at 2024-11-25 06:25:41


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
ans = -1
def func(node, n, ans):
  if node is None:
    return -1
  # print(node.data, n, ans)
  if node.data <= n:
    ans = max(ans, node.data)
    return max(ans, func(node.right, n, ans))
  else:
    return func(node.left, n, ans)
  # return

#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
    # print(root.data, n)
  
  return func(root, n, ans)
  
    
```

## Submission at 2024-11-25 07:54:21


```
// Write C++ Code from scratch
// Write C++ Code from scratch
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, sum = 0;
    cin >> n;
    vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }
    sort(a.begin(), a.end());
    int midElement = a[n/2];
    long long ans = LLONG_MAX;
    long long lo = 0, hi = LLONG_MAX;
    while (lo < hi)
    {
        long long mid = (lo + hi) / 2;
        double avg = (sum + mid) / (2*n);
        if (midElement*2*n < sum+mid)
        {
            ans = min(ans, mid);
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
```

