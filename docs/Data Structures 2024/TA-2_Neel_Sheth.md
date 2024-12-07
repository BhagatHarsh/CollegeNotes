## Submission at 2024-08-05 09:30:56


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
}
```

## Submission at 2024-08-09 04:42:57


```
// Write your C++ code here from the scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string userName;
    cin>>userName;
    cout<<"Hello "<<userName<<"!";
    return 0;
}
```

## Submission at 2024-08-12 08:24:42


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    int f1 = 0,f2 = 1;int ans;
    for(int i=2;i<=x;i++){
        ans = f1+f2;
        f1 = f2;
        f2 = ans;
    }
    return ans;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 08:26:15


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if(x<=1) return x;
    int f1 = 0,f2 = 1;int ans;
    for(int i=2;i<=x;i++){
        ans = f1+f2;
        f1 = f2;
        f2 = ans;
    }
    return ans;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:01:59


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int num = start; num <= n; num++) {
            current.push_back(num);
            combine(num + 1, k, n, current, result);
            current.pop_back();
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
    for (const auto& combination : result) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-12 09:16:44


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int num = start; num <= n; num++) {
            current.push_back(num);
            combine(num + 1,k,n, current, result);
            current.pop_back();
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
    for (const auto& combination : result) {
        cout << "[";
        for (size_t i = 0; i < combination.size(); ++i) {
            cout << combination[i];
            if (i < combination.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-12 09:22:44


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {
            result.push_back(current);
            return;
        }

        for (int num = start; num <= n; num++) {
            current.push_back(num);
            combine(num + 1,k,n, current, result);
            current.pop_back();
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

## Submission at 2024-08-12 09:36:23


```
def combine( n: int, k: int):
    res = []
    comb = []

    def backtrack(start):
        if len(comb) == k:
            res.append(comb[:])
            return
        
        for num in range(start, n + 1):
            comb.append(num)
            backtrack(num + 1)
            comb.pop()

    backtrack(1)
    return res

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

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

## Submission at 2024-08-12 10:14:33


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    if(n<=0) return false;
    while(n>1){
        n/=2;   
    }
    return n==1;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:18:04


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    if(n<=0) return false;
    while(n%2==0){
        n/=2;   
    }
    return n==1;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-22 11:22:24


```
// Write Code from Scratch

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,(vector<int>(n)));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x; 
        }
    }
    vector<vector<int>> res(m, vector<int>(n, 0));
    for (size_t r = 0; r < m; r++) {
        for (size_t c = 0; c < n; c++) {
            res[c][r] = matrix[r][c];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-08-22 11:23:20


```
// Write Code from Scratch

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,(vector<int>(n)));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x; 
        }
    }
    vector<vector<int>> res(n, vector<int>(m, 0));
    for (size_t r = 0; r < m; r++) {
        for (size_t c = 0; c < n; c++) {
            res[c][r] = matrix[r][c];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-08-22 11:25:16


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();

        int[][] matrix = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }

        int[][] res = new int[n][m];
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                res[c][r] = matrix[r][c];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(res[i][j] + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}

```

## Submission at 2024-08-22 11:25:39


```
# Read input dimensions
m, n = map(int, input().split())

# Read the matrix input
matrix = []
for _ in range(m):
    matrix.append(list(map(int, input().split())))

# Transpose the matrix
res = [[0] * m for _ in range(n)]
for r in range(m):
    for c in range(n):
        res[c][r] = matrix[r][c]

# Print the transposed matrix
for i in range(n):
    print(" ".join(map(str, res[i])))

```

## Submission at 2024-08-22 11:26:37


```
# Read input dimensions
m, n = map(int, input().split())

# Read the matrix input
matrix = []
for _ in range(m):
    matrix.append(list(map(int, input().split())))

# Transpose the matrix
res = [[0] * m for _ in range(n)]
for r in range(m):
    for c in range(n):
        res[c][r] = matrix[r][c]

# Print the transposed matrix
for i in range(n):
    print(" ".join(map(str, res[i])))

```

## Submission at 2024-08-23 05:06:25


```
/* Print he nth node in the linked list Node is defined as
/* Link list node
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};
*/

int getNthNode(Node *head, int index) {
    // Code Here
    Node* temp = head;
    int cnt = 1;
    while(temp!=NULL){
        if(cnt==index){
            return temp->data;
        }
        cnt++;
        temp=temp->next;
    }
    
    return -1;
}

```

## Submission at 2024-08-23 05:15:08


```
/*node class of the linked list
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}
*/

class GetNthNode{
    int getNthNode(Node head, int index) {
        // Code here
        Node temp = head;
        while(index>0 && temp!=null){
            index-=1;
            if(index>0) temp=temp.next;
        }
        if(index>0){
            return -1;
        }
        return temp.data;
    }
}

```

## Submission at 2024-08-23 06:10:18


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

    // 1 -> 2 -> 3 -> 4
    // p    c
    //Your code here
    Node* prev = head;
    Node* curr = head->next;
    int cnt = 2;
    while(curr!=NULL){
        if(cnt==x){
            prev->next = curr->next;
            return head;
        }
        cnt++;
        prev = curr;
        curr = curr->next;
    }
    return head;
}

```

## Submission at 2024-08-23 06:14:44


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

    // 1 -> 2 -> 3 -> 4
    // p    c
    //Your code here
    Node* prev = head;
    Node* curr = head->next;
    int cnt = 2;
    while(curr!=NULL){
        if(cnt==x){
            prev->next = curr->next;
            return head;
        }
        cnt++;
        prev = curr;
        curr = curr->next;
    }
    return head;
}

```

## Submission at 2024-08-23 07:26:21


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    return head


```

## Submission at 2024-08-23 07:47:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    return head
```

## Submission at 2024-08-23 07:48:02


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    count = 2
    temp = head
    while(temp != None):
        if count == k:
            temp.next = temp.next.next
            return head
        temp = temp.next
        count = count + 1
    return head
    
    
```

## Submission at 2024-08-27 10:54:24


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

bool func(string s,int i,int j){
    if(i>j) return true;

    if(s[i]==s[j]){
        return func(s,i+1,j-1);
    }

    return false;
}

int main(){
    string s;
    cin>>s;
    if (func(s,0,s.size()-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
```

## Submission at 2024-08-27 10:56:20


```
# Write code from scratch
def func(s, i, j):
    if i > j:
        return True
    
    if s[i] == s[j]:
        return func(s, i + 1, j - 1)
    
    return False

s = input()
if func(s, 0, len(s) - 1):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-08-27 10:58:42


```
import java.util.Scanner;

class Main {
    public static boolean func(String s, int i, int j) {
        if (i > j) {
            return true;
        }

        if (s.charAt(i) == s.charAt(j)) {
            return func(s, i + 1, j - 1);
        }

        return false;
    }

    public static void main (String args []) {
        // Write code from scratch
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();

        if (func(s, 0, s.length() - 1)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        scanner.close();
    }
}
```

## Submission at 2024-08-27 11:28:49


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
    Node* temp = head;
    Node* curr = head;
    Node* prev = NULL;
    while(temp!=NULL){
        curr = curr->next;
        temp->next = prev; 
        prev = temp;
        temp = curr;
    }
    return prev;  
}

```

## Submission at 2024-08-27 11:31:11


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {
        // Write your logic here
        Node temp = head;
        Node curr = head;
        Node prev = null;
        while (temp != null) {
            curr = temp.next;
            temp.next = prev;
            prev = temp;
            temp = curr;
        }
        return prev;
    }
}
```

## Submission at 2024-08-27 11:31:56


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    temp = head
    curr = head
    prev = None
    while temp is not None:
        curr = temp.next
        temp.next = prev
        prev = temp
        temp = curr
    return prev

```

## Submission at 2024-08-27 11:47:47


```
// Write code from scratch
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void testcase(){
    ll n,m;
    cin>>n>>m;

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    testcase();
    return 0;
}
```

## Submission at 2024-08-28 08:38:51


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>a[i]) a[i] = x;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
```

## Submission at 2024-08-28 08:39:31


```
# Write code from scratch
n = int(input())

a = list(map(int, input().split()))
for i in range(n):
    x = int(input())
    if x > a[i]:
        a[i] = x

for i in range(n):
    print(a[i], end=" ")

```

## Submission at 2024-08-28 08:40:53


```
// Write code from scratch
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int[] a = new int[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            if (x > a[i]) {
                a[i] = x;
            }
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        
        sc.close();
    }
}

```

## Submission at 2024-08-28 08:44:26


```
# Write code from scratch
n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))
for i in range(n):
    if b[i] > a[i]:
        a[i] = b[i]

for i in range(n):
    print(a[i], end=" ")

```

## Submission at 2024-08-28 09:05:43


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    int i=0;
    int cnt = m*n;
    int sr = 0,sc = 0,er = m,ec = n;
    while(cnt){
        for(i=sc;i<ec;i++){
            cout<<matrix[sr][i]<<" ";
            cnt--;
        }
        sr++;
        for(i=sr;i<er;i++){
            cout<<matrix[i][ec-1]<<" ";
            cnt--;
        }
        ec--;
        for(i=ec;i>sc;i--){
            cout<<matrix[er-1][i]<<" ";
            cnt--;
        }
        er--;
        for(i=er;i>sr;i--){
            cout<<matrix[i][sc]<<" ";
            cnt--;
        }
        sc++;
    }
    return 0;
}
```

## Submission at 2024-08-28 09:21:54


```
// Write code from scratch
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    int sr=0,er=matrix.size()-1,sc=0,ec=matrix[0].size()-1;
    vector<int>arr;
    int n = (er+1)*(ec+1);
    while(n!=0){
        int i=sr,j=sc;
        while(j<=ec && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            j++;
        }
        sr++;
        i=sr;j=ec;
        while(i<=er && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            i++;
        }
        ec--;
        i=er;j=ec;
        while(j>=sc && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            j--;
        }
        er--;
        i=er;j=sc;
        while(i>=sr && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            i--;
        }
        sc++;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
```

## Submission at 2024-08-28 09:26:39


```
// Write code from scratch
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    int sr=0,er=matrix.size()-1,sc=0,ec=matrix[0].size()-1;
    vector<int>arr;
    int cnt = (er+1)*(ec+1);
    while(cnt!=0){
        int i=sr,j=sc;
        while(j<=ec && n>0){
            arr.push_back(matrix[i][j]);
            cnt--;
            j++;
        }
        sr++;
        i=sr;j=ec;
        while(i<=er && n>0){
            arr.push_back(matrix[i][j]);
            cnt--;
            i++;
        }
        ec--;
        i=er;j=ec;
        while(j>=sc && n>0){
            arr.push_back(matrix[i][j]);
            cnt--;
            j--;
        }
        er--;
        i=er;j=sc;
        while(i>=sr && n>0){
            arr.push_back(matrix[i][j]);
            cnt--;
            i--;
        }
        sc++;
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
```

## Submission at 2024-08-29 05:41:19


```
// Write code from scratch
#include<bits/stdc++.h>
using namespace std;

/*
1 2 3 4
5 6 7 8
9 10 11 12

1 5 2 9 6 3 10 7 4 11 8 12
*/

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    int i,j,k;
    for(i=0;i<m;i++){
        j=i;k=0;
        while(j>=0 && k<n){
            cout<<matrix[j][k]<<" ";
            j--;k++;
        }
    } 
    for(i=1;i<n;i++){
        j=m-1;k=i;
        while(j>=0 && k<n){
            cout<<matrix[j][k]<<" ";
            j--;k++;
        }   
    }
    
}
```

## Submission at 2024-08-29 05:43:57


```
# Write code from scratch
def diagonal_traversal(matrix, m, n):
    for i in range(m):
        j, k = i, 0
        while j >= 0 and k < n:
            print(matrix[j][k], end=" ")
            j -= 1
            k += 1

    for i in range(1, n):
        j, k = m - 1, i
        while j >= 0 and k < n:
            print(matrix[j][k], end=" ")
            j -= 1
            k += 1

# Example usage
m, n = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(m)]

diagonal_traversal(matrix, m, n)

```

## Submission at 2024-08-29 05:45:41


```
// Write code from scratchimport java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        int[][] matrix = new int[m][n];
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        for (int i = 0; i < m; i++) {
            int j = i, k = 0;
            while (j >= 0 && k < n) {
                System.out.print(matrix[j][k] + " ");
                j--;
                k++;
            }
        }
        
        for (int i = 1; i < n; i++) {
            int j = m - 1, k = i;
            while (j >= 0 && k < n) {
                System.out.print(matrix[j][k] + " ");
                j--;
                k++;
            }
        }
        
        scanner.close();
    }
}

```

## Submission at 2024-08-29 05:46:26


```
// Write code from scratchimport java.util.Scanner;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        int[][] matrix = new int[m][n];
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        for (int i = 0; i < m; i++) {
            int j = i, k = 0;
            while (j >= 0 && k < n) {
                System.out.print(matrix[j][k] + " ");
                j--;
                k++;
            }
        }
        
        for (int i = 1; i < n; i++) {
            int j = m - 1, k = i;
            while (j >= 0 && k < n) {
                System.out.print(matrix[j][k] + " ");
                j--;
                k++;
            }
        }
        
        scanner.close();
    }
}

```

## Submission at 2024-09-02 10:25:06


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
    int cnt = 1;
    Node* temp = head;
    while(cnt!=k){
        cnt++;
        temp = temp->next;
    }
    if(cnt==k){
        return temp->data;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:25:55


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
    int cnt = 1;
    Node* temp = head;
    while(cnt!=k && temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    if(cnt==k){
        return temp->data;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:28:17


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
    int cnt = 1;
    Node* temp = head;
    while(cnt!=k && temp!=NULL){
        cnt++;
        temp = temp->next;
    }
    if(cnt==k){
        return temp->data;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:30:47


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
    int cnt = 1;
    Node* temp = head;
    while(cnt!=k && temp->next!=NULL){
        cnt++;
        temp = temp->next;
    }
    if(cnt==k){
        return temp->data;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:35:16


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
    Node temp = head;
    int cnt = 1;
    while(cnt < k){
        if(temp->next){
            temp = temp->next;
            cnt++;
        }else{
            return -1;
        }
    }
    return temp->data;
}

```

## Submission at 2024-09-02 10:36:01


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
    Node* temp = head;
    int cnt = 1;
    while(cnt < k){
        if(temp->next){
            temp = temp->next;
            cnt++;
        }else{
            return -1;
        }
    }
    return temp->data;
}

```

## Submission at 2024-09-05 10:47:13


```
// Write Code from Scratch here
#include<bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n) {
    if(n==0){
        return false;
    }
    else if(n==1){
        return true;
    }
    return n%3==0 && isPowerOfThree(n/3);  
}

int main(){
    int n;
    cin>>n;
    if(isPowerOfThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
```

## Submission at 2024-09-05 10:48:41


```
// Write Code from Scratch here
import java.util.Scanner;

public class Main {
    public static boolean isPowerOfThree(int n) {
        if (n == 0) {
            return false;
        } else if (n == 1) {
            return true;
        }
        return n % 3 == 0 && isPowerOfThree(n / 3);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (isPowerOfThree(n)) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
        sc.close();
    }
}

```

## Submission at 2024-09-05 10:48:56


```
# Write Code from Scratch here
def is_power_of_three(n):
    if n == 0:
        return False
    elif n == 1:
        return True
    return n % 3 == 0 and is_power_of_three(n // 3)

n = int(input())
if is_power_of_three(n):
    print("True")
else:
    print("False")

```

## Submission at 2024-09-05 11:01:11


```
// Write code from scratch here
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Problem A


int func(int ind,string s,char x){
    if(ind == s.size()) return 0;

    if(s[ind]==x){
        return 1+func(ind+1,s,x);
    }
    return func(ind+1,s,x); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = func(0,s,x);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-09-05 11:03:44


```
// Write code from scratch here

// Write code from scratch here
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Problem A


int func(int ind,string s,char x){
    if(ind == s.size()) return 0;

    if(s[ind]==x){
        return 1+func(ind+1,s,x);
    }
    return func(ind+1,s,x); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = func(0,s,x);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-09-05 11:04:30


```
# Write code from scratch here
def func(ind, s, x):
    if ind == len(s):
        return 0
    if s[ind] == x:
        return 1 + func(ind + 1, s, x)
    return func(ind + 1, s, x)

if __name__ == "__main__":
    s = input()
    x = input()
    ans = func(0, s, x)
    print(ans)

```

## Submission at 2024-09-05 11:06:28


```
# Write code from scratch here
def func(ind, s, x):
    if ind == len(s):
        return 0
    if s[ind] == x:
        return 1 + func(ind + 1, s, x)
    return func(ind + 1, s, x)

s, x = input().split()
ans = func(0, s, x)
print(ans)
    
```

## Submission at 2024-09-05 11:06:45


```
// Write code from scratch here
import java.util.Scanner;

public class Main {
    
    public static int func(int ind, String s, char x) {
        if (ind == s.length()) {
            return 0;
        }
        if (s.charAt(ind) == x) {
            return 1 + func(ind + 1, s, x);
        }
        return func(ind + 1, s, x);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char x = sc.next().charAt(0);
        int ans = func(0, s, x);
        System.out.println(ans);
        sc.close();
    }
}

```

## Submission at 2024-09-05 11:07:13


```
// Write code from scratch here
import java.util.Scanner;

public class Main {
    
    public static int func(int ind, String s, char x) {
        if (ind == s.length()) {
            return 0;
        }
        if (s.charAt(ind) == x) {
            return 1 + func(ind + 1, s, x);
        }
        return func(ind + 1, s, x);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char x = sc.next().charAt(0);
        int ans = func(0, s, x);
        System.out.println(ans);
        sc.close();
    }
}

```

## Submission at 2024-09-05 11:08:50


```
// Write code from scratch here
// Write code from scratch here
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Problem A


int func(int ind,string s,char x){
    if(ind == s.size()) return 0;

    if(s[ind]==x){
        return 1+func(ind+1,s,x);
    }
    return func(ind+1,s,x); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = func(0,s,x);
    cout<<ans<<endl;
    return 0;
}

```

## Submission at 2024-09-05 11:09:17


```
// Write code from scratch here
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Problem A


int func(int ind,string s,char x){
    if(ind == s.size()) return 0;

    if(s[ind]==x){
        return 1+func(ind+1,s,x);
    }
    return func(ind+1,s,x); 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = func(0,s,x);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-09-05 11:09:53


```
// Write code from scratch here
// Write code from scratch here
import java.util.Scanner;

public class Main {
    
    public static int func(int ind, String s, char x) {
        if (ind == s.length()) {
            return 0;
        }
        if (s.charAt(ind) == x) {
            return 1 + func(ind + 1, s, x);
        }
        return func(ind + 1, s, x);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        char x = sc.next().charAt(0);
        int ans = func(0, s, x);
        System.out.println(ans);
        sc.close();
    }
}

```

## Submission at 2024-09-05 11:18:03


```
#include<bits/stdc++.h>
using namespace std;

vector<int>arr;

void spiralOrder(vector<vector<int>>& matrix) {
    int sr=0,er=matrix.size()-1,sc=0,ec=matrix[0].size()-1;
    int n = (er+1)*(ec+1);
    while(n!=0){
        int i=sr,j=sc;
        while(j<=ec && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            j++;
        }
        sr++;
        i=sr;j=ec;
        while(i<=er && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            i++;
        }
        ec--;
        i=er;j=ec;
        while(j>=sc && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            j--;
        }
        er--;
        i=er;j=sc;
        while(i>=sr && n>0){
            arr.push_back(matrix[i][j]);
            n--;
            i--;
        }
        sc++;
    }
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    spiralOrder(matrix);

    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}
```

## Submission at 2024-09-05 11:20:22


```
arr = []

def spiralOrder(matrix):
    sr, er = 0, len(matrix) - 1
    sc, ec = 0, len(matrix[0]) - 1
    n = (er + 1) * (ec + 1)
    
    while n != 0:
        i, j = sr, sc
        while j <= ec and n > 0:
            arr.append(matrix[i][j])
            n -= 1
            j += 1
        sr += 1
        
        i, j = sr, ec
        while i <= er and n > 0:
            arr.append(matrix[i][j])
            n -= 1
            i += 1
        ec -= 1
        
        i, j = er, ec
        while j >= sc and n > 0:
            arr.append(matrix[i][j])
            n -= 1
            j -= 1
        er -= 1
        
        i, j = er, sc
        while i >= sr and n > 0:
            arr.append(matrix[i][j])
            n -= 1
            i -= 1
        sc += 1

m, n = map(int, input().split())
matrix = []
for i in range(m):
    row = list(map(int, input().split()))
    matrix.append(row)

spiralOrder(matrix)

print(" ".join(map(str, arr)))

```

## Submission at 2024-09-05 11:20:46


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    static List<Integer> arr = new ArrayList<>();

    public static void spiralOrder(int[][] matrix) {
        int sr = 0, er = matrix.length - 1;
        int sc = 0, ec = matrix[0].length - 1;
        int n = (er + 1) * (ec + 1);
        
        while (n != 0) {
            int i = sr, j = sc;
            while (j <= ec && n > 0) {
                arr.add(matrix[i][j]);
                n--;
                j++;
            }
            sr++;
            
            i = sr;
            j = ec;
            while (i <= er && n > 0) {
                arr.add(matrix[i][j]);
                n--;
                i++;
            }
            ec--;
            
            i = er;
            j = ec;
            while (j >= sc && n > 0) {
                arr.add(matrix[i][j]);
                n--;
                j--;
            }
            er--;
            
            i = er;
            j = sc;
            while (i >= sr && n > 0) {
                arr.add(matrix[i][j]);
                n--;
                i--;
            }
            sc++;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        
        int[][] matrix = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
        
        spiralOrder(matrix);
        
        for (int i : arr) {
            System.out.print(i + " ");
        }
        sc.close();
    }
}

```

## Submission at 2024-10-03 06:28:46


```
// Write code from scratch here
#include<bits/stdc++.h>
using namespace std;

string infixToPostfix(string s) {
    auto priority = [](char& c) {
        if (c == '^')
            return 3;
        if (c == '*' || c == '/')
            return 2;
        if (c == '+' || c == '-')
            return 1;
        return -1;
    };

    string ans = "";
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
            ans += ch;
        else if (ch == '(')
            st.push(ch);
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && priority(st.top()) >= priority(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
    return 0;
}
```

## Submission at 2024-10-03 06:52:37


```
// Write code from scratch here
#include<bits/stdc++.h>
using namespace std;

string infixToPostfix(string s) {
    auto priority = [](char& c) {
        if (c == '^')
            return 3;
        if (c == '*' || c == '/')
            return 2;
        if (c == '+' || c == '-')
            return 1;
        return -1;
    };

    string ans = "";
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
            ans += ch;
        else if (ch == '(')
            st.push(ch);
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();
        } else {
            while (!st.empty() && priority(st.top()) >= priority(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<infixToPostfix(s);
    return 0;
}
```

## Submission at 2024-10-03 06:54:34


```
def infix_to_postfix(s):
    def priority(c):
        if c == '^':
            return 3
        if c == '*' or c == '/':
            return 2
        if c == '+' or c == '-':
            return 1
        return -1

    ans = ""
    st = []
    
    for ch in s:
        # If character is an operand (letter or digit)
        if ch.isalpha() or ch.isdigit():
            ans += ch
        elif ch == '(':
            st.append(ch)
        elif ch == ')':
            while st and st[-1] != '(':
                ans += st.pop()
            st.pop()  # Pop the '('
        else:
            while st and priority(st[-1]) >= priority(ch):
                ans += st.pop()
            st.append(ch)

    # Pop all the operators from the stack
    while st:
        ans += st.pop()

    return ans


if __name__ == "__main__":
    s = input()
    print(infix_to_postfix(s))

```

## Submission at 2024-10-03 06:54:55


```
import java.util.Scanner;
import java.util.Stack;

public class InfixToPostfix {

    // Function to return precedence of operators
    static int priority(char c) {
        switch (c) {
            case '^': return 3;
            case '*':
            case '/': return 2;
            case '+':
            case '-': return 1;
            default: return -1;
        }
    }

    // Function to convert infix to postfix
    static String infixToPostfix(String s) {
        StringBuilder ans = new StringBuilder();
        Stack<Character> st = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            // If the scanned character is an operand, add it to output
            if (Character.isLetterOrDigit(ch)) {
                ans.append(ch);
            } 
            // If the scanned character is '(', push it to the stack
            else if (ch == '(') {
                st.push(ch);
            } 
            // If the scanned character is ')', pop and output from the stack
            // until an '(' is encountered
            else if (ch == ')') {
                while (!st.isEmpty() && st.peek() != '(') {
                    ans.append(st.pop());
                }
                st.pop();
            } 
            // An operator is encountered
            else {
                while (!st.isEmpty() && priority(st.peek()) >= priority(ch)) {
                    ans.append(st.pop());
                }
                st.push(ch);
            }
        }

        // Pop all the operators from the stack
        while (!st.isEmpty()) {
            ans.append(st.pop());
        }

        return ans.toString();
    }

    // Driver code
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(infixToPostfix(s));
        sc.close();
    }
}

```

## Submission at 2024-10-03 06:55:24


```
import java.util.Scanner;
import java.util.Stack;

public class Main {

    // Function to return precedence of operators
    static int priority(char c) {
        switch (c) {
            case '^': return 3;
            case '*':
            case '/': return 2;
            case '+':
            case '-': return 1;
            default: return -1;
        }
    }

    // Function to convert infix to postfix
    static String infixToPostfix(String s) {
        StringBuilder ans = new StringBuilder();
        Stack<Character> st = new Stack<>();

        for (int i = 0; i < s.length(); i++) {
            char ch = s.charAt(i);

            // If the scanned character is an operand, add it to output
            if (Character.isLetterOrDigit(ch)) {
                ans.append(ch);
            } 
            // If the scanned character is '(', push it to the stack
            else if (ch == '(') {
                st.push(ch);
            } 
            // If the scanned character is ')', pop and output from the stack
            // until an '(' is encountered
            else if (ch == ')') {
                while (!st.isEmpty() && st.peek() != '(') {
                    ans.append(st.pop());
                }
                st.pop();
            } 
            // An operator is encountered
            else {
                while (!st.isEmpty() && priority(st.peek()) >= priority(ch)) {
                    ans.append(st.pop());
                }
                st.push(ch);
            }
        }

        // Pop all the operators from the stack
        while (!st.isEmpty()) {
            ans.append(st.pop());
        }

        return ans.toString();
    }

    // Driver code
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(infixToPostfix(s));
        sc.close();
    }
}

```

## Submission at 2024-10-04 03:31:22


```
#include<bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    int c=0;
    while (true){
        if(tickets[k]==0)   
            break;
        for(int i=0;i<tickets.size();i++){
            if(tickets[k]==0)
                break;
            if(tickets[i]>0){
                tickets[i]-=1;
                c+=1;
            }
        }
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<timeRequiredToBuy(arr,k);
    return 0;
}
```

## Submission at 2024-10-04 03:35:57


```
#include<bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& tickets, int k) {
    int c=0;
    while (true){
        if(tickets[k]==0)   
            break;
        for(int i=0;i<tickets.size();i++){
            if(tickets[k]==0)
                break;
            if(tickets[i]>0){
                tickets[i]-=1;
                c+=1;
            }
        }
    }
    return c;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<timeRequiredToBuy(arr,k);
    return 0;
}

```

## Submission at 2024-10-04 03:38:20


```
#include<bits/stdc++.h>
using namespace std;

int timeRequiredToBuy(vector<int>& wingstopWings, int k) {
    
    using pii = pair<int, int>;
    queue<pii> q;
    int n = wingstopWings.size();
    for(int i = 0; i < n; i++) {
        q.push({wingstopWings[i], i});
    }
    int time = 0;
    while(!q.empty()) {
        auto [num_tickets, og_i] = q.front();
        q.pop();
        num_tickets--;
        time++;
        if(og_i == k && num_tickets == 0) {
            return time;
        }
        if(num_tickets > 0) {
            q.push({num_tickets, og_i});
        }
    }
    return time;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<timeRequiredToBuy(arr,k);
    return 0;
}

```

## Submission at 2024-10-04 03:41:44


```
from collections import deque

def timeRequiredToBuy(wingstopWings, k):
    q = deque([(wingstopWings[i], i) for i in range(len(wingstopWings))])
    time = 0
    while q:
        num_tickets, og_i = q.popleft()
        num_tickets -= 1
        time += 1
        if og_i == k and num_tickets == 0:
            return time
        if num_tickets > 0:
            q.append((num_tickets, og_i))
    return time

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    print(timeRequiredToBuy(arr, k))

```

## Submission at 2024-10-04 03:41:57


```
import java.util.*;

public class Main {
    public static int timeRequiredToBuy(int[] wingstopWings, int k) {
        Queue<int[]> q = new LinkedList<>();
        for (int i = 0; i < wingstopWings.length; i++) {
            q.add(new int[]{wingstopWings[i], i});
        }
        int time = 0;
        while (!q.isEmpty()) {
            int[] current = q.poll();
            int num_tickets = current[0] - 1;
            int og_i = current[1];
            time++;
            if (og_i == k && num_tickets == 0) {
                return time;
            }
            if (num_tickets > 0) {
                q.add(new int[]{num_tickets, og_i});
            }
        }
        return time;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int k = sc.nextInt();
        System.out.println(timeRequiredToBuy(arr, k));
    }
}

```

## Submission at 2024-10-04 05:17:36


```
// Write C++ code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"true";
    else cout<<"false";
}
```

## Submission at 2024-10-07 04:22:59


```
void reverse(queue<int> &q){
// Base  case
        if(q.empty()){
            return;
        }
        
        int val = q.front();
        q.pop();
        
        reverse(q);
        q.push(val);
        
    }

queue<int> rev(queue<int> q)
{
    reverse(q);
    
    return q;
}
```

## Submission at 2024-10-07 04:23:45


```
queue<int> rev(queue<int> q)
    {
        stack<int> st;
        while(!q.empty())
        {
            int x= q.front();
            q.pop();
            
            st.push(x);
            
        }
        while(!st.empty())
        {
            int y =st.top();
            q.push(y);
            st.pop();
        }
        return q;
    }
```

## Submission at 2024-10-07 04:24:30


```
queue<int> rev(queue<int> q)
    {
        stack<int> st;
        while(!q.empty())
        {
            int x= q.front();
            q.pop();
            
            st.push(x);
            
        }
        while(!st.empty())
        {
            int y =st.top();
            q.push(y);
            st.pop();
        }
        return q;
    }
```

## Submission at 2024-10-07 04:25:06


```
queue<int> rev(queue<int> q)
    {
        stack<int> st;
        while(!q.empty())
        {
            int x= q.front();
            q.pop();
            
            st.push(x);
            
        }
        while(!st.empty())
        {
            int y =st.top();
            q.push(y);
            st.pop();
        }
        return q;
    }
```

## Submission at 2024-10-07 04:25:47


```
queue<int> rev(queue<int> q)
    {
        stack<int> st;
        while(!q.empty())
        {
            int x= q.front();
            q.pop();
            
            st.push(x);
            
        }
        while(!st.empty())
        {
            int y =st.top();
            q.push(y);
            st.pop();
        }
        return q;
    }
```

## Submission at 2024-10-07 04:30:01


```
import java.util.LinkedList;
import java.util.Queue;

public class Main {
    
    // Function to reverse the queue.
    public static Queue<Integer> rev(Queue<Integer> q) {
        // Write your code here
        Stack<Integer> st = new Stack<>();
        
        // Step 1: Dequeue all elements from the queue and push them onto the stack
        while (!q.isEmpty()) {
            st.push(q.poll());
        }
        
        // Step 2: Pop all elements from the stack and enqueue them back to the queue
        while (!st.isEmpty()) {
            q.add(st.pop());
        }
        
        return q;
    }
}

```

## Submission at 2024-10-07 04:47:23


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q)
    {
        //using a stack to reverse the queue.
        Stack<Integer> s=new Stack<>();
       
        //pushing elements from queue into stack and removing them from queue.
        while(!q.isEmpty()){
            int x=q.peek();
            q.poll();
            s.push(x);
        }
        
        //now pushing elements back into the queue from stack and removing them 
        //from stack. queue gets reversed as stack follows last in first out.
        while(!s.isEmpty()){
            int x=s.peek();
            s.pop();
            q.add(x);
        }
        //returning reversed queue.
        return q;
    }
}
```

## Submission at 2024-10-07 05:04:58


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>arr;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            arr.push_back(s[i]);
        }
    }
    sort(arr.begin(),arr.end());
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            s[i]=arr[j++];
        }
    }
    cout<<s;
}
```

## Submission at 2024-10-07 05:05:30


```
def main():
    s = input()
    arr = []
    
    # Collect the digits (ignoring '+')
    for ch in s:
        if ch != '+':
            arr.append(ch)
    
    # Sort the digits
    arr.sort()
    
    # Reconstruct the string with sorted digits
    j = 0
    result = []
    for ch in s:
        if ch != '+':
            result.append(arr[j])
            j += 1
        else:
            result.append('+')
    
    # Join the list into a string and print the result
    print("".join(result))

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-07 05:05:45


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        List<Character> arr = new ArrayList<>();

        // Collect the digits (ignoring '+')
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != '+') {
                arr.add(s.charAt(i));
            }
        }

        // Sort the digits
        Collections.sort(arr);

        // Reconstruct the string with sorted digits
        StringBuilder result = new StringBuilder();
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) != '+') {
                result.append(arr.get(j++));
            } else {
                result.append('+');
            }
        }

        // Print the result
        System.out.println(result.toString());
    }
}

```

## Submission at 2024-10-07 05:18:32


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char>st;
    string ans = "";

    for(int i=0;i<s.size();i++){
        if(s[i]=='.' || i==s.size()-1){
            while(!st.empty()){
                char c = st.top();
                st.pop();
                ans+=c;
            }
            if(i!=s.size()-1){
                ans+='.';
            }
        }
        else{
            st.push(s[i]);
        }
    }
    cout<<ans;
}
```

## Submission at 2024-10-07 05:20:50


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char>st;
    string ans = "";

    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
            st.push(s[i]);
            while(!st.empty()){
                char c = st.top();
                st.pop();
                ans+=c;
            }
        }
        else if(s[i]=='.'){
            while(!st.empty()){
                char c = st.top();
                st.pop();
                ans+=c;
            }
            ans+='.';
        }
        else{
            st.push(s[i]);
        }
    }
    cout<<ans;
}
```

## Submission at 2024-10-07 05:22:04


```
// Write your code from scratch here
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char>st;
    string ans = "";

    for(int i=0;i<s.size();i++){
        if(i==s.size()-1){
            st.push(s[i]);
            while(!st.empty()){
                char c = st.top();
                st.pop();
                ans+=c;
            }
        }
        else if(s[i]=='.'){
            while(!st.empty()){
                char c = st.top();
                st.pop();
                ans+=c;
            }
            ans+='.';
        }
        else{
            st.push(s[i]);
        }
    }
    cout<<ans;
}
```

## Submission at 2024-10-07 05:23:24


```
def main():
    s = input()
    st = []
    ans = ""

    for i in range(len(s)):
        if i == len(s) - 1:
            st.append(s[i])
            while st:
                ans += st.pop()
        elif s[i] == '.':
            while st:
                ans += st.pop()
            ans += '.'
        else:
            st.append(s[i])
    
    print(ans)

if __name__ == "__main__":
    main()

```

## Submission at 2024-10-07 05:23:52


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        Stack<Character> st = new Stack<>();
        StringBuilder ans = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            if (i == s.length() - 1) {
                st.push(s.charAt(i));
                while (!st.isEmpty()) {
                    ans.append(st.pop());
                }
            } else if (s.charAt(i) == '.') {
                while (!st.isEmpty()) {
                    ans.append(st.pop());
                }
                ans.append('.');
            } else {
                st.push(s.charAt(i));
            }
        }

        System.out.println(ans.toString());
    }
}

```

## Submission at 2024-10-23 09:45:11


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

string customSortString(string order, string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }

        string t = "";
        for(int i=0;i<order.size();i++){
            while(mp[order[i]]){
                t+=order[i];
                mp[order[i]]--;
            }
        }
        for(auto it:mp){
            while(it.second){
                t+=it.first;
                it.second--;
            }
        }
        return  t;
    }

int main(){
    string a,b;
    cin>>a>>b;
    cout<<customSortString(a,b);
    
}
```

## Submission at 2024-10-23 09:46:58


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

string customSortString(string order, string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }

        string t = "";
        for(int i=0;i<order.size();i++){
            while(mp[order[i]]){
                t+=order[i];
                mp[order[i]]--;
            }
        }
        for(auto it:mp){
            while(it.second){
                t+=it.first;
                it.second--;
            }
        }
        return  t;
    }

int main(){
    string a,b;
    cin>>a>>b;
    cout<<customSortString(a,b);
    
}
```

## Submission at 2024-10-23 09:47:44


```
def customSortString(order: str, s: str) -> str:
    # Create a frequency map for characters in string s
    freq = {}
    for char in s:
        if char in freq:
            freq[char] += 1
        else:
            freq[char] = 1
    
    # Create the result string based on the order string
    result = []
    for char in order:
        if char in freq:
            result.append(char * freq[char])
            del freq[char]  # Remove the character from the frequency map
    
    # Append remaining characters that were not in the order string
    for char, count in freq.items():
        result.append(char * count)
    
    return ''.join(result)

# Driver code
a = input()
b = input()
print(customSortString(a, b))

```

## Submission at 2024-10-23 09:48:32


```
def customSortString(order: str, s: str) -> str:
    # Create a frequency map for characters in string s
    freq = {}
    for char in s:
        if char in freq:
            freq[char] += 1
        else:
            freq[char] = 1
    
    # Create the result string based on the order string
    result = []
    for char in order:
        if char in freq:
            result.append(char * freq[char])
            del freq[char]  # Remove the character from the frequency map
    
    # Append remaining characters that were not in the order string
    for char, count in freq.items():
        result.append(char * count)
    
    return ''.join(result)

# Driver code
a,b = input().split()
print(customSortString(a, b))

```

## Submission at 2024-10-23 09:48:49


```
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    
    public static String customSortString(String order, String s) {
        HashMap<Character, Integer> map = new HashMap<>();
        
        // Create a frequency map for characters in string s
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }
        
        StringBuilder result = new StringBuilder();
        
        // Create the result string based on the order string
        for (char c : order.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Remove the character from the map
            }
        }
        
        // Append remaining characters that were not in the order string
        for (char c : map.keySet()) {
            for (int i = 0; i < map.get(c); i++) {
                result.append(c);
            }
        }
        
        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        System.out.println(customSortString(a, b));
        sc.close();
    }
}

```

## Submission at 2024-10-23 09:53:58


```
import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static String customSortString(String order, String s) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Create a frequency map for characters in string s
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        StringBuilder result = new StringBuilder();

        // Append characters from 'order' based on their frequency in 's'
        for (char c : order.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Remove from map once added
            }
        }

        // Append remaining characters from 's' in the original order
        for (char c : s.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Ensure character is not appended multiple times
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        System.out.println(customSortString(a, b));
        sc.close();
    }
}

```

## Submission at 2024-10-23 10:49:42


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
    Node* ptr1=head1;
    Node* ptr2=head2;    
    Node* head=nullptr;    
    Node* curr=nullptr;
    while(ptr1!=nullptr && ptr2 !=nullptr){
        if(ptr1->data==ptr2->data){
            if(head==nullptr){
                Node* temp=new Node(ptr1->data);
                head=temp;
                curr=temp;
            }
            else{
                Node* temp=new Node(ptr1->data);
                curr->next=temp;
                curr=curr->next;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        else{
            if(ptr1->data<ptr2->data){
                ptr1=ptr1->next;
            }
            else{
                ptr2=ptr2->next;
            }
        }
    }
    
    return head;
}
```

## Submission at 2024-10-23 10:57:47


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

class FindIntersectionFromLL {
    Node findIntersection(Node head1, Node head2) {
        // Write your logic here
         Node c1 = head1;
        Node c2 = head2;
        Node newNode = new Node(0);
        Node tail = newNode;
        while(c1 != null && c2 != null){
            if(c2.data == c1.data){
                tail.next = new Node(c1.data);
                tail = tail.next;
                c1 = c1.next;
                c2 = c2.next;
            }else if (c1.data < c2.data){
                c1 = c1.next;
            }else {
                c2 = c2.next;
            }
        }
        return newNode.next;
    }
}
```

## Submission at 2024-10-23 11:11:05


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(a, b):
    # Your code here
    if a is None or b is None:
        return None

        # If both lists are non-empty
    if a.val < b.val:
        return findIntersection(a.next, b)

    if a.val > b.val:
        return findIntersection(a, b.next)

    # When a.data == b.data
    temp = ListNode(a.val)

    # Advance both lists and call recursively
    temp.next = findIntersection(a.next, b.next)
    return temp
    

```

## Submission at 2024-10-23 11:16:31


```
// Write your code from scratch here

#include<bits/stdc++.h>
using namespace std;

string customSortString(string order, string s) {
        map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }

        string t = "";
        for(int i=0;i<order.size();i++){
            while(mp[order[i]]){
                t+=order[i];
                mp[order[i]]--;
            }
        }
        for(auto it:mp){
            while(it.second){
                t+=it.first;
                it.second--;
            }
        }
        return  t;
    }

int main(){
    string a,b;
    cin>>a>>b;
    cout<<customSortString(a,b);
    
}
```

## Submission at 2024-10-23 11:16:48


```
def customSortString(order: str, s: str) -> str:
    # Create a frequency map for characters in string s
    freq = {}
    for char in s:
        if char in freq:
            freq[char] += 1
        else:
            freq[char] = 1
    
    # Create the result string based on the order string
    result = []
    for char in order:
        if char in freq:
            result.append(char * freq[char])
            del freq[char]  # Remove the character from the frequency map
    
    # Append remaining characters that were not in the order string
    for char, count in freq.items():
        result.append(char * count)
    
    return ''.join(result)

# Driver code
a,b = input().split()
print(customSortString(a, b))
```

## Submission at 2024-10-23 11:17:20


```
import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static String customSortString(String order, String s) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Create a frequency map for characters in string s
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        StringBuilder result = new StringBuilder();

        // Append characters from 'order' based on their frequency in 's'
        for (char c : order.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Remove from map once added
            }
        }

        // Append remaining characters from 's' in the original order
        for (char c : s.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Ensure character is not appended multiple times
        
```

## Submission at 2024-10-23 11:17:56


```
import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static String customSortString(String order, String s) {
        HashMap<Character, Integer> map = new HashMap<>();

        // Create a frequency map for characters in string s
        for (char c : s.toCharArray()) {
            map.put(c, map.getOrDefault(c, 0) + 1);
        }

        StringBuilder result = new StringBuilder();

        // Append characters from 'order' based on their frequency in 's'
        for (char c : order.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Remove from map once added
            }
        }

        // Append remaining characters from 's' in the original order
        for (char c : s.toCharArray()) {
            if (map.containsKey(c)) {
                for (int i = 0; i < map.get(c); i++) {
                    result.append(c);
                }
                map.remove(c);  // Ensure character is not appended multiple times
        }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        System.out.println(customSortString(a, b));
        sc.close();
    }
}
```

## Submission at 2024-10-25 06:32:38


```
// Helper function to check if two subtrees are mirrors of each other
bool isMirror(Node* left, Node* right) {
    // If both nodes are NULL, they are mirrors
    if (left == NULL && right == NULL) return true;
    
    // If only one of them is NULL, they are not mirrors
    if (left == NULL || right == NULL) return false;
    
    // Check if the current nodes are equal and their subtrees are mirrors
    return (left->data == right->data) &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

// Function to check if a tree is symmetric
bool isSymmetric(Node* root) {
    if (root == NULL) return true;
    
    // Check if left and right subtrees are mirrors of each other
    return isMirror(root->left, root->right);
}

```

## Submission at 2024-10-28 08:11:44


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#Function to return a list containing the postorder traversal of the tree.
def treePathSum(root):
    # code here
    def fun(node, sum1):
        if not node: return 0
        
        if not node.left and not node.right: return sum1*10+node.data
        
        left_sum = fun(node.left, sum1*10+node.data)
        right_sum = fun(node.right, sum1*10+node.data)
        
        return left_sum + right_sum
    
    return fun(root, 0)
```

## Submission at 2024-10-28 08:16:12


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
void helper(Node *root,long long currVal,long long &sum)
{
    if(root==NULL) return;
    
    currVal = currVal*10 + root->data;
    
    if(root->left == NULL && root->right == NULL) sum += currVal;
    
    
    helper(root->left,currVal,sum);
    helper(root->right,currVal,sum);
}

int treePathSum(Node* root)
{
  // Your code here
  long long ans = 0;
    if(root==NULL) return ans;
    long long currVal = 0;
    
    helper(root,currVal,ans);
    
    return ans;
}

```

## Submission at 2024-10-28 08:19:31


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    Integer treePathSum(Node root)
     {
        int ans=0;
        return solve(root,ans);  
    }
    
    
    Integer solve (Node root,int sum){
    
        if(root==null) return 0;
        sum=sum*10+root.data;
    
  
        if(root.left==null && root.right==null){
            return sum;          
        }
        return solve(root.left,sum)+solve(root.right,sum);
    }
}
```

## Submission at 2024-11-18 09:50:20


```
# Example usage
# Input:
# 7 2
# 1 2 3 4 4 4 4
# Expected Output:


# write code from scratch
def kOccurence():
    
    n, k = map(int, input().split())
    nums = list(map(int, input().split()))

    result = {}

    for num in nums:
        if num in result:
            result[num] += 1
        else:
            result[num] = 1
    for num in nums:
        if result[num]>= k:
            return num
    return -1


ans = kOccurence()
print(ans)
```

## Submission at 2024-11-18 10:51:47


```
//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{

    int mi = Integer.MAX_VALUE;
    public static int findMin(Node root){
       if (root == null) return Integer.MAX_VALUE;

       mi = Math.min(root.data,mi);
       int lmin = findMin(root.left);
       int rmin = findMin(root.right);

       return Math.min(lmin,rmin);
    }

    
}
```

## Submission at 2024-11-18 11:23:31


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      stack = []
      slow, fast = head, head
      while fast.next and fast.next.next:
        stack.append(slow.data)
        fast = fast.next.next
        slow = slow.next
      slow = slow.next
      while slow:
        if slow.data != stack.pop():
          return False
        slow = slow.next
      return True
      
```

## Submission at 2024-11-18 11:24:27


```

class Solution:
    def isPalindrome(self, head, tmp=[]):
        #code here
      if head.next == None:
        return True
      stack = []
      slow, fast = head, head
      while fast.next and fast.next.next:
        stack.append(slow.data)
        fast = fast.next.next
        slow = slow.next
      slow = slow.next
      while slow:
        if slow.data != stack.pop():
          return False
        slow = slow.next
      return True
      
```

## Submission at 2024-11-19 10:34:05


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
void helper(Node* root,int &mini){
    if(!root){
        return;
    }
    mini = min(root->data,mini);
    helper(root->left,mini);
    helper(root->right,mini);
}
int findMin(Node *root)
{
    int mini= INT_MAX;
    helper(root,mini);
    return mini;
}


```

## Submission at 2024-11-21 09:21:26


```
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// Problem A

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int a,b;
        cin>>a>>b;
        int res = (a+b)/2;
        cout<<(res-a)+(b-res)<<endl;
    return 0;
}
```

## Submission at 2024-11-23 06:27:09


```
// Write Code From Scratch Here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(it i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<i<<" ";
        }
    }
    return 0;
}
```

## Submission at 2024-11-23 06:27:34


```
// Write Code From Scratch Here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(it i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<i<<" ";
        }
    }
    return 0;
}
```

## Submission at 2024-11-23 06:27:47


```
// Write Code From Scratch Here

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            cout<<i<<" ";
        }
    }
    return 0;
}
```

## Submission at 2024-11-23 06:40:13


```
#include <bits/stdc++.h>

using namespace std;

// clang-format off
#define MAIN int32_t main() { cin.tie(0); ios_base::sync_with_stdio(false); (MTC ? void(cin >> MTC) : void(MTC = 1)); Precompute(); for (int i = 0; i < MTC; ++i) { cerr <<  "### TestCase: " << i << " ###" << endl; S s; s.input(); s.solve(); s.verify(); s.output(); } }
#ifdef LOCAL
void __print(int x) { std::cerr << x; } void __print(long x) { std::cerr << x; } void __print(long long x) { std::cerr << x; } void __print(unsigned x) { std::cerr << x; } void __print(unsigned long x) { std::cerr << x; } void __print(unsigned long long x) { std::cerr << x; } void __print(float x) { std::cerr << x; } void __print(double x) { std::cerr << x; } void __print(long double x) { std::cerr << x; } void __print(char x) { std::cerr << '\'' << x << '\''; } void __print(const char *x) { std::cerr << '\"' << x << '\"'; } void __print(const std::string x) { std::cerr << '\"' << x << '\"'; } void __print(bool x) { std::cerr << (x ? "true" : "false"); } template <typename T, typename V> void __print(std::pair<T, V> x) { std::cerr << '{'; __print(x.first); std::cerr << ','; __print(x.second); std::cerr << '}'; } template <typename T> void __print(T x) { int f = 0; std::cerr << '{'; for (auto &i : x) std::cerr << (f++ ? "," : ""), __print(i); std::cerr << "}"; } template <typename T> void __print(std::stack<T> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.top()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } template <typename T> void __print(std::queue<T> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.front()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } template <typename T> void __print(std::priority_queue<T> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.top()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } template <typename T> void __print(std::priority_queue<T, std::vector<T>, std::greater<T>> x) { std::vector<T> _x; while (!x.empty()) _x.push_back(x.top()), x.pop(); reverse(_x.begin(), _x.end()); __print(_x); } void _print() { std::cerr << "]\n\n"; } template <typename T, typename... V> void _print(T t, V... v) { __print(t); if (sizeof...(v)) std::cerr << ", "; _print(v...); } template <typename T> void _print2d(T x) { for (auto &i : x) _print(i); }
#define dbg(x...) cerr << "[" << #x << "] = [";_print(x)
#define dbg2d(x) cerr << "[" << #x << "]\n"; _print2d(x)
#else
#define dbg(x...)
#define dbg2d(x)
#endif
// clang-format on

int MTC = 1;

void Precompute() {}

struct S {
    int n, k;
    vector<int> total;
    int ans;

    void input() {
        cin >> n >> k;
        total.resize(k);
        for (int i = 0; i < k; ++i) {
            int b, c;
            cin >> b >> c;
            --b;
            total[b] += c;
        }
        ans = 0;
    }

    void solve() {
        sort(total.begin(), total.end(), greater<int>());
        for (int i = 0; i < min(n, k); ++i)
            ans += total[i];
    }

    void verify() {}

    void output() {
        cout << ans << '\n';
    }
};

MAIN

```

## Submission at 2024-11-23 06:43:05


```
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    unordered_map<ll, ll> mp;

    for(int i=0; i<k; i++)
    {
        ll a, b;
        cin >> a >> b;
        mp[a] += b;
    }
    
    for(auto &it : mp) v.push_back(it.second);

    sort(v.rbegin(), v.rend());

    ll ans = 0;
    ll temp = v.size();

    for(int i=0; i<min(n, temp); i++)
    {
        ans += v[i];
    }

    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-11-23 07:12:51


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

string isRepresentingBST(int arr[], int N)
{
    // code here
    for(int i=1;i<N;i++){
        if(arr[i]<=arr[i-1]){
            return "NO";
        }
    }
    return "YES";
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isRepresentingBST(arr,n);
}
```

## Submission at 2024-11-23 07:14:18


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

string isRepresentingBST(vector<int>arr, int N)
{
    // code here
    for(int i=1;i<N;i++){
        if(arr[i]<=arr[i-1]){
            return "NO";
        }
    }
    return "YES";
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isRepresentingBST(arr,n);
}
```

## Submission at 2024-11-23 07:18:17


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

string isRepresentingBST(vector<int>arr, int N)
{
    // code here
    for(int i=1;i<N;i++){
        if(arr[i]<=arr[i-1]){
            return "NO";
        }
    }
    return "YES";
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isRepresentingBST(arr,n);
}
```

## Submission at 2024-11-23 07:18:56


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

string isRepresentingBST(vector<int>arr, int N)
{
    // code here
    for(int i=1;i<N;i++){
        if(arr[i]<=arr[i-1]){
            return "NO";
        }
    }
    return "YES";
    
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<isRepresentingBST(arr,n);
}
```

## Submission at 2024-11-25 05:54:05


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


void solve(Node *root, int n, int& ans){
    if(root == NULL){
        return;
    }
    
    if(root->data == n){
        ans = n;
        solve(root->left, n, ans);
    }else if(root->data < n and root->data > ans){
        ans = root->data;
        solve(root->right, n, ans);
    }else if(root->data > n){
        solve(root->left, n, ans);
    }
    
}
int findMaxForN(Node* root, int n) {
    int ans = -1;
    solve(root, n, ans);
    return ans;
}

```

## Submission at 2024-11-25 06:02:27


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    public static void solve(Node root, int n, int[] ans) {
        if (root == null) {
            return;
        }

        if (root.data == n) {
            ans[0] = n;
            solve(root.left, n, ans);
        } else if (root.data < n && root.data > ans[0]) {
            ans[0] = root.data;
            solve(root.right, n, ans);
        } else if (root.data > n) {
            solve(root.left, n, ans);
        }
    }

    Integer findMaxForN(Node root, int n) {
        int[] ans = {-1}; // Use an array to hold the answer (mimicking a reference)
        solve(root, n, ans);
        return ans[0];
    }
}
```

## Submission at 2024-11-25 06:03:34


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    public static void solve(Node root, int n, int[] ans) {
        if (root == null) {
            return;
        }

        if (root.data == n) {
            ans[0] = n;
            solve(root.left, n, ans);
        } else if (root.data < n && root.data > ans[0]) {
            ans[0] = root.data;
            solve(root.right, n, ans);
        } else if (root.data > n) {
            solve(root.left, n, ans);
        }
    }

    Integer findMaxForN(Node root, int n) {
        int[] ans = {-1}; // Use an array to hold the answer (mimicking a reference)
        solve(root, n, ans);
        return ans[0];
    }
}
```

## Submission at 2024-11-25 06:06:43


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def solve(root, n, ans):
    if root is None:
        return

    if root.data == n:
        ans[0] = n
        solve(root.left, n, ans)
    elif root.data < n and root.data > ans[0]:
        ans[0] = root.data
        solve(root.right, n, ans)
    elif root.data > n:
        solve(root.left, n, ans)


#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
    ans = [-1]  # Use a list to simulate pass-by-reference
    solve(root, n, ans)
    return ans[0]
    
```

## Submission at 2024-11-25 06:07:24


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def solve(root, n, ans):
  if root is None:
    return

  if root.data == n:
    ans[0] = n
    solve(root.left, n, ans)
  elif root.data < n and root.data > ans[0]:
    ans[0] = root.data
    solve(root.right, n, ans)
  elif root.data > n:
    solve(root.left, n, ans)


#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
  ans = [-1]  # Use a list to simulate pass-by-reference
  solve(root, n, ans)
  return ans[0]
    
```

## Submission at 2024-11-25 06:07:49


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def solve(root, n, ans):
  if root is None:
    return

  if root.data == n:
    ans[0] = n
    solve(root.left, n, ans)
  elif root.data < n and root.data > ans[0]:
    ans[0] = root.data
    solve(root.right, n, ans)
  elif root.data > n:
    solve(root.left, n, ans)


#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
  ans = [-1]  # Use a list to simulate pass-by-reference
  solve(root, n, ans)
  return ans[0]
    
```

## Submission at 2024-11-25 10:16:46


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector<int> a;
void preorder(Node* root) {
  if (!root) return;
  preorder(root->left);
  a.push_back(root->data);
  preorder(root->right);
}
int findMaxForN(Node* root, int n)
{
  preorder(root);
  int ans = -1;
  for (int i=0; i<a.size(); i++) {
    if (a[i] <= n) {
      ans = a[i];
    }
  }
  return ans;
}
```

