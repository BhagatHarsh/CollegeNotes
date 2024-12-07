## Submission at 2024-08-05 10:20:13


```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s; 
    cout << "Hello " << s << "!" << endl;
    return 0;
}

```

## Submission at 2024-08-05 10:31:33


```
#include<string>
#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << "Hello" << s << " !" << endl;
    return 0;
}
```

## Submission at 2024-08-05 10:33:04


```
#include<string>
#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << "Hello " << s << "!" << endl;
    return 0;
}
```

## Submission at 2024-08-12 09:50:01


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x == 0 || x==1){
        return x;
    }
    

    return fibonacci(x-1) + fibonacci(x-2);



}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;


    return 0;
}

```

## Submission at 2024-08-12 09:55:33


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    for(int i ; i<=n;i++){
        if(i%2==0){
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:02:48


```
#include <iostream>
#include<math.h>

using namespace std;

bool isPowerOfTwo(int n) {
    int i =0;
    while(i<INT_MAX){
        if(power(2,n) == 2*i);
        break;
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:18:19


```
#include <iostream>
#include <cmath>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==1) {
        return true;
    }else if (n<1 || n%2 != 0){
        return false;
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

## Submission at 2024-08-16 09:52:36


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(k == 0){
        result.push_back(current);
        return;

    }

    for(int i =start;i<n;++i){
        current.push_back(i);
        combine(i+1,k-1,n,current,result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

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

## Submission at 2024-08-16 09:57:01


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(k == 0){
        result.push_back(current);
        return;

    }

    for(int i =start;i<=n;++i){
        current.push_back(i);
        combine(i+1,k-1,n,current,result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

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

## Submission at 2024-08-16 09:58:19


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(k == 0){
        result.push_back(current);
        return;

    }

    for(int i =start;i<=n;++i){
        current.push_back(i);
        combine(i+1,k-1,n,current,result);
        current.pop_back();
    }
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

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

## Submission at 2024-08-16 10:22:18


```
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void recurPermute(int index,vector<int> &nums, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            recurPermute(index+1, nums, ans);
            swap(nums[index], nums[i]);  // Backtrack
        }
    }

    public:
    vector<vector<int>> permute(vector<int> &nums){
        vector<vector<int>> ans;
        recurPermute(0, nums, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> v = {1, 2, 3};
    vector<vector<int>> sum = obj.permute(v);

    cout << "All Permutations are: " << endl;
    for(int i = 0; i < sum.size(); i++){
        cout << "[";
        for(int j = 0; j < sum[i].size(); j++){
            cout << sum[i][j];
            if(j < sum[i].size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
}

```

## Submission at 2024-08-16 10:31:37


```
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    void recurPermute(int index,vector<int> &nums, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            recurPermute(index+1, nums, ans);
            swap(nums[index], nums[i]);  // Backtrack
        }
    }

    public:
    vector<vector<int>> permute(vector<int> &nums){
        vector<vector<int>> ans;
        recurPermute(0, nums, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> v;
    int num;

    string input;
    getline(cin, input);
    stringstream ss(input);
    while(ss >> num){
        v.push_back(num);
    }
    vector<vector<int>> sum = obj.permute(v);

    cout << "All Permutations are: " << endl;
    for(int i = 0; i < sum.size(); i++){
        cout << "[";
        for(int j = 0; j < sum[i].size(); j++){
            cout << sum[i][j];
            if(j < sum[i].size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }
}

```

## Submission at 2024-08-16 13:57:07


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(string s, int left, int right, int n, vector<string>& result) {
    // Base case: If the string length is equal to 2*n, it's a valid combination
    if (s.length() == 2 * n) {
        result.push_back(s);
        return;
    }

    // Add an opening parenthesis if we have not used all of them
    if (left < n) {
        generateParenthesisHelper(s + '(', left + 1, right, n, result);
    }

    // Add a closing parenthesis if it doesn't exceed the number of opening ones
    if (right < left) {
        generateParenthesisHelper(s + ')', left, right + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cout << "Enter the number of pairs of parentheses: ";
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << "\"" << result[i] << "\"";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-16 13:57:35


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(string s, int left, int right, int n, vector<string>& result) {
    // Base case: If the string length is equal to 2*n, it's a valid combination
    if (s.length() == 2 * n) {
        result.push_back(s);
        return;
    }

    // Add an opening parenthesis if we have not used all of them
    if (left < n) {
        generateParenthesisHelper(s + '(', left + 1, right, n, result);
    }

    // Add a closing parenthesis if it doesn't exceed the number of opening ones
    if (right < left) {
        generateParenthesisHelper(s + ')', left, right + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ", ";
        cout << "\"" << result[i] << "\"";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-16 13:59:20


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(string s, int left, int right, int n, vector<string>& result) {
    // Base case: If the string length is equal to 2*n, it's a valid combination
    if (s.length() == 2 * n) {
        result.push_back(s);
        return;
    }

    // Add an opening parenthesis if we have not used all of them
    if (left < n) {
        generateParenthesisHelper(s + '(', left + 1, right, n, result);
    }

    // Add a closing parenthesis if it doesn't exceed the number of opening ones
    if (right < left) {
        generateParenthesisHelper(s + ')', left, right + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ",";
        cout << "\"" << result[i] << """;
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-16 14:00:07


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(string s, int left, int right, int n, vector<string>& result) {
    // Base case: If the string length is equal to 2*n, it's a valid combination
    if (s.length() == 2 * n) {
        result.push_back(s);
        return;
    }

    // Add an opening parenthesis if we have not used all of them
    if (left < n) {
        generateParenthesisHelper(s + '(', left + 1, right, n, result);
    }

    // Add a closing parenthesis if it doesn't exceed the number of opening ones
    if (right < left) {
        generateParenthesisHelper(s + ')', left, right + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ",";
        cout << "\"" << result[i] << "\"";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-16 14:00:44


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesisHelper(string s, int left, int right, int n, vector<string>& result) {
    // Base case: If the string length is equal to 2*n, it's a valid combination
    if (s.length() == 2 * n) {
        result.push_back(s);
        return;
    }

    // Add an opening parenthesis if we have not used all of them
    if (left < n) {
        generateParenthesisHelper(s + '(', left + 1, right, n, result);
    }

    // Add a closing parenthesis if it doesn't exceed the number of opening ones
    if (right < left) {
        generateParenthesisHelper(s + ')', left, right + 1, n, result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesisHelper("", 0, 0, n, result);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ",";
        cout << "\"" << result[i] << "\"";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-29 04:24:30


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
    if(x == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < x){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }


}

```

## Submission at 2024-08-30 11:47:54


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        int ans =  Pow(x,(n/2));

        if(n%2==0){
            return ans*ans;
        }
        else{
            return x*ans*ans;
        }
    }
}


int main() {
    int x;
    cin >> x;
    int n;
    cin >> n;

    int ans = Pow(x,n);

    cout << ans;

    return 0;

}
```

## Submission at 2024-08-30 11:53:15


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>
using namespace std;

int Pow(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return x;
    }
    else{
        int ans =  Pow(x,(n/2));

        if(n%2==0){
            return ans*ans;
        }
        else if(n%2!=0){
            return x*ans*ans;
        }
        else{
            return floor(1.0 / (x*ans*ans));
        }
    }
}


int main() {
    int x;
    cin >> x;
    int n;
    cin >> n;

    int ans = Pow(x,n);

    cout << ans;

    return 0;

}
```

## Submission at 2024-08-30 11:54:05


```
#include <iostream>
#include <cmath>

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    
    int half = pow(x, n / 2);
    
    // If n is even
    if (n % 2 == 0) {
        return half * half;
    } else {
        if (n > 0) {
            return x * half * half;
        } else {
            // For negative n, return floor of the reciprocal
            return floor(1.0 / (x * half * half));
        }
    }
}

int main() {
    int x, n;
    std::cin >> x >> n;
    std::cout << pow(x, n) << std::endl;
    return 0;
}

```

## Submission at 2024-08-30 11:57:04


```
#include <iostream>
#include <cmath>

int pow(int x, int n) {
    // Base case: any number raised to the power 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive step
    int half = pow(x, n / 2);

    // If n is even
    if (n % 2 == 0) {
        return half * half;
    } 
    // If n is odd and positive
    else if (n > 0) {
        return x * half * half;
    } 
    // If n is negative
    else {
        // Handle the negative exponent by computing the positive exponent first
        int result = half * half;
        if (n % 2 != 0) {
            result *= x;
        }
        // Return the floored value of the reciprocal
        return floor(1.0 / result);
    }
}

int main() {
    int x, n;
    std::cin >> x >> n;
    std::cout << pow(x, n) << std::endl;
    return 0;
}

```

## Submission at 2024-08-30 11:57:05


```
#include <iostream>
#include <cmath>

int pow(int x, int n) {
    // Base case: any number raised to the power 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive step
    int half = pow(x, n / 2);

    // If n is even
    if (n % 2 == 0) {
        return half * half;
    } 
    // If n is odd and positive
    else if (n > 0) {
        return x * half * half;
    } 
    // If n is negative
    else {
        // Handle the negative exponent by computing the positive exponent first
        int result = half * half;
        if (n % 2 != 0) {
            result *= x;
        }
        // Return the floored value of the reciprocal
        return floor(1.0 / result);
    }
}

int main() {
    int x, n;
    std::cin >> x >> n;
    std::cout << pow(x, n) << std::endl;
    return 0;
}

```

## Submission at 2024-09-02 09:52:11


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
    while (head != nullptr) {
        result.push_back(head->val); // Add the node value to the vector
        head = head->next;
    }
    return result; // Return the vector containing the node values
}

```

## Submission at 2024-09-02 10:03:30


```
#include<iostream>
#include<vector>

vector<int> findMax(int n,vector<int> a,vector<int>b){
    vector<int> c;
    for(int i =0;i<n;i++){
        if(a[i] < b[i]){
            c.push_back(b[i]);
        }
        else {
            c.push_back(a[i]);
        }
    }
    return c;
}


int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    for(int i =;i<m;i++){
        cin >> b[i];
    }

    vector<int> result = findMax(n,a,b);

}
```

## Submission at 2024-09-02 10:08:27


```
#include<iostream>
#include<vector>
using namespace std;

vector<int> findMax(int n,vector<int> a,vector<int>b){
    vector<int> c;
    for(int i =0;i<n;i++){
        if(a[i] < b[i]){
            c.push_back(b[i]);
        }
        else {
            c.push_back(a[i]);
        }
    }
    return c;
}


int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0;i<n;i++){
        cin >> a[i];
    }

    for(int i = 0;i<n;i++){
        cin >> b[i];
    }

    vector<int> result = findMax(n,a,b);

    for(int i =0;i<n;i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-09-02 10:20:43


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
    Node* temp = head;
    int count = 1;
    while(temp != nullptr){
        if(count == k){
            
            return temp->data;
        }
        temp = temp->next;
        count++;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:34:46


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
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    


}

```

## Submission at 2024-09-02 10:38:47


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
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;    

    return head;
}

```

## Submission at 2024-09-02 10:39:58


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
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next; 
    curr->next = NULL;   

    return head;
}

```

## Submission at 2024-09-02 10:43:12


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
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next; 
    curr->next = NULL;   

    return head;
}

```

## Submission at 2024-09-03 05:28:24


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
    Node* curr = head;
    Node* prev = NULL;
    int cnt  = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    return head;

}

```

## Submission at 2024-09-03 05:28:30


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
    Node* curr = head;
    Node* prev = NULL;
    int cnt  = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    return head;

}

```

## Submission at 2024-09-03 05:29:07


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
    Node* curr = head;
    Node* prev = NULL;
    int cnt  = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    return head;
    d

}

```

## Submission at 2024-09-03 05:29:49


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
    Node* curr = head;
    Node* prev = NULL;
    int cnt  = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    return head;


}

```

## Submission at 2024-09-03 05:29:54


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
    Node* curr = head;
    Node* prev = NULL;
    int cnt  = 1;

    while(cnt < x){
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    return head;


}

```

## Submission at 2024-09-03 05:31:03


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

Node* deleteNode(Node *head, int x) {
    // If the list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;

    // If the node to be deleted is the head node
    if (x == 1) {
        head = curr->next; // Move the head to the next node
        curr->next = NULL;
        delete curr; // Delete the old head
        return head;
    }

    Node* prev = NULL;
    int cnt = 1;

    // Traverse to the x-th node
    while (cnt < x && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    // If x is greater than the number of nodes in the list
    if (curr == NULL) {
        return head;
    }

    // Adjust the links to bypass the node to be deleted
    prev->next = curr->next;
    curr->next = NULL;
    delete curr; // Free the memory of the deleted node

    return head;
}


```

## Submission at 2024-09-03 05:32:23


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

Node* deleteNode(Node *head, int x) {
    // If the list is empty, return NULL
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;

    // If the node to be deleted is the head node
    if (x == 1) {
        head = curr->next;
        curr->next = NULL;
        delete curr;
        return head;
    }

    Node* prev = NULL;
    int cnt = 1;

    // Traverse to the x-th node
    while (cnt < x && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    // If x is greater than the number of nodes in the list
    if (curr == NULL) {
        return head;
    }

    // Adjust the links to bypass the node to be deleted
    prev->next = curr->next;
    curr->next = NULL;
    delete curr; // Free the memory of the deleted node

    return head;
}


```

## Submission at 2024-09-03 05:41:05


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
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;
}

```

## Submission at 2024-09-09 05:15:45


```
#include<iostream>
#include<vector>
using namespace std;

int triangular(vector<int>& arr){
    int n = arr.size();

    while(n > 1){
        for(int i= 0;i<n-1;i++){
            arr[i] = arr[i] + arr[i+1];

        }
        n--;
    }

    return arr[0];
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }  

    int result = triangular(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-09-09 07:13:10


```
#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

bool areEqual(vector<int>& arr1, vector<int>& arr2) {
    // If sizes are different, arrays can't be equal
    if (arr1.size() != arr2.size()) {
        return false;
    }

    // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Compare sorted arrays
    for (size_t i = 0; i < arr1.size(); ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int length1, length2;

    // Input lengths
    cin >> length1 >> length2;

    // Check if lengths are different
    if (length1 != length2) {
        cout << "false" << endl;
        return 0;
    }

    vector<int> arr1(length1);
    vector<int> arr2(length2);

    // Input elements for the first array
    for (int i = 0; i < length1; i++) {
        cin >> arr1[i];
    }

    // Input elements for the second array
    for (int i = 0; i < length2; i++) {
        cin >> arr2[i];
    }

    // Check if arrays are equal and print the result
    bool result = areEqual(arr1, arr2);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-09-09 09:54:18


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

bool checkPalindrome(vector<int> &arr){
  int n = arr.size();
  int s = 0;
  int e = n-1;

  while(s<=e){
    if(arr[s] != arr[e]){
      return false;
    }
    s++;
    e--;
  }
  return true;
}


bool isPalindrome(Node *head) {
    vector<int> v;

    Node* temp = head;
    while(temp != NULL) {
      v.push_back(temp->data);
      temp = temp->next;
    }

    return  checkPalindrome(v);
}
```

## Submission at 2024-09-09 10:04:21


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
    Node* curr = head;

    while(curr != NULL){
        if((curr->data) == (curr->next->data)){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete nodeTodelete;
            curr->next = next_next;
        }else{
            curr = curr->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:13:01


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

    // Node* temp = head;
    // Node* nodeTodelete = NULL;
    // while(temp != NULL){
    //     if((temp->data) == temp->next->data){
    //         temp = temp->next->next;
    //         nodeTodelete = temp

    //     }else{
    //         temp = temp->next;
    //     }

    //     return head;
    // }
    Node* curr = head;

    while(curr != NULL){
        if((curr->data) == (curr->next->data)){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete nodeTodelete;
            curr->next = next_next;
        }else{
            curr = curr->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-09 10:26:01


```
#include<iostream>
using namespace std;

bool Powerofthree(int n){
    if(n == 1){
        return false;
    }else if(n == 0){
        return false;
    }
    else{
         return Powerofthree(n/3);
    }
}

int main() {
    int n;
    cin >> n;

    bool result = Powerofthree(n);
    if(result == 0){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }

}
```

## Submission at 2024-09-09 10:26:22


```
#include<iostream>
using namespace std;

bool Powerofthree(int n){
    if(n == 1){
        return false;
    }else if(n == 0){
        return false;
    }
    else{
         return Powerofthree(n/3);
    }
}

int main() {
    int n;
    cin >> n;

    bool result = Powerofthree(n);
    if(result == 0){
        cout << "True" << endl;
    }else{
        cout << "false" << endl;
    }

}
```

## Submission at 2024-09-09 10:26:46


```
#include<iostream>
using namespace std;

bool Powerofthree(int n){
    if(n == 1){
        return false;
    }else if(n == 0){
        return false;
    }
    else{
         return Powerofthree(n/3);
    }
}

int main() {
    int n;
    cin >> n;

    bool result = Powerofthree(n);
    if(result == 0){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

}
```

## Submission at 2024-09-09 10:27:22


```
#include<iostream>
using namespace std;

bool Powerofthree(int n){
    if(n == 1){
        return false;
    }else if(n == 0){
        return false;
    }
    else{
         return Powerofthree(n/3);
    }
}

int main() {
    int n;
    cin >> n;

    int result = Powerofthree(n);
    if(result == 0){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

}
```

## Submission at 2024-09-09 10:28:25


```
#include<iostream>
using namespace std;

bool Powerofthree(int n){
    if(n == 1){
        return false;
    }else if(n == 0){
        return true;
    }
    else{
         return Powerofthree(n/3);
    }
}

int main() {
    int n;
    cin >> n;

    int result = Powerofthree(n);
    if(result == 0){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }

}
```

## Submission at 2024-09-09 10:49:49


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
    // vector<int> v;
    // if(head == NULL || head->next == NULL){
    //     return head;
    // }

    // Node* temp = head;
    // while(temp != NULL){
    //     v.push_back(temp->data);
    //     temp = temp->next;
    // }
    // int n = v.size();
    
    // vector<int> v1;

    // for(int i = 0;i<n-1;i++){
    //     for(int j = i+1;j<n-2;j++){
    //         if()
    //     }
    // }

    Node* curr = head;

    while(curr != NULL){
        if((curr->data) == (curr->next->data)){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete nodeTodelete;
            curr->next = next_next;  
            
        }else{
            curr = curr->next;
        }
    }
    return head;

}

```

## Submission at 2024-09-09 11:09:26


```
#include<iostream>
#include<string>
using namespace std;

int count_Freq(string s, char x int c, int s, int e){
    int start = s;
    int end = e;
    int c = cnt;
    if(s.empty()){
        return c;
    }
    
    if(s[start] == x){
        return count_Freq(s,x,cnt+1,start++,end--);
    }
}

int main() {
    string s;
    cin >> s;
    int count = 0;
    int start = 0;
    int end = s.size() - 1;

    char x;
    cin >> x;

    int freq = count_Freq(s,x, count,start,end);
    cout << freq;
}
```

## Submission at 2024-09-09 12:17:05


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
    Node* curr = head;

    while(curr != NULL && curr->next != NULL){
        if((curr->data) == (curr->next->data)){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete nodeTodelete;
            curr->next = next_next;  
            
        }else{
            curr = curr->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-10 02:44:32


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
                vector<vector<int>> visited = matrix; 

        int n = matrix.size();  
        int m = matrix[0].size();

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(matrix[i][j] == -1){
                    int max_col = INT_MIN;
                    for(int k = 0;k<n;k++){
                        if(matrix[k][j] != -1){
                            max_col = max(max_col,matrix[k][j]);

                        }

                    }

                    visited[i][j] = max_col;

                }
            }
        }
        return visited;
    };

```

## Submission at 2024-09-10 02:47:08


```
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix) {
    vector<vector<int>> visited = matrix; 

    int n = matrix.size();   // Number of rows
    int m = matrix[0].size(); // Number of columns

    for (int j = 0; j < m; j++) { // Iterate column by column
        // Find the max element in each column (ignoring -1)
        int max_col = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] != -1) {
                max_col = max(max_col, matrix[i][j]);
            }
        }

        // Replace -1 with the max element in the same column
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == -1) {
                visited[i][j] = max_col;
            }
        }
    }

    return visited;
}

```

## Submission at 2024-09-16 04:13:00


```
#include<iostream>
#include<string>
using namespace std;

int count_Freq(string s, char x, int c, int start, int end) {
    
    if (start > end) {
        return c;
    }

    
    if (s[start] == x) {
        c++;
    }

    return count_Freq(s, x, c, start + 1, end);
}

int main() {
    string s;
    cin >> s;

    char x;
    cin >> x;

    int freq = count_Freq(s, x, 0, 0, s.size() - 1);
    cout << freq << endl;
}

```

## Submission at 2024-10-07 09:48:56


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    stack<int> st;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();
        q.push(element);
    }

    return q;
}

```

## Submission at 2024-10-07 10:14:23


```
#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> arr){
    int maxi = -1000;
    for(int i = 0;i<arr.size();i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int minin_coin(vector<int> v,int diff){
    int dif = 0;
    for(int i = 0;i<v.size();i++){
        dif += ((double) v[i] / (double) diff);
    }
    return dif;
}

int minofcoins(vector<int> arr,int n,int k){
    int low = 1;
    int high = findMax(arr);

    while(low <= high){
        int mid = low + (high - low)/ 2;
        int minimum_coin = minin_coin(arr,mid);

        if(minimum_coin == k){
            return mid;
        }
        
        if(minimum_coin < k){
        high = mid;
    }else{
        low = mid + 1;
    }
        
    }
    return low + 1;
}

int main() {
    int N;
    cin >> N;

    int K;
    cin >> K;

    vector<int> arr(N);

    int minimum = minofcoins(arr,N,K);

    cout << minimum;
}
```

## Submission at 2024-10-07 10:19:42


```
#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> arr){
    int maxi = -1000;
    for(int i = 0;i<arr.size();i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int minin_coin(vector<int> v,int diff){
    int dif = 0;
    for(int i = 0;i<v.size();i++){
        dif += ((double) v[i] / (double) diff);
    }
    return dif;
}

int minofcoins(vector<int> arr,int n,int k){
    int low = 1;
    int high = findMax(arr);

    while(low <= high){
        int mid = low + (high - low)/ 2;
        int minimum_coin = minin_coin(arr,mid);

        if(minimum_coin == k){
            return mid;
        }
        
        if(minimum_coin < k){
        low = mid + 1;
    }else{
        high = mid - 1;
    }
        
    }
    return low;
}

int main() {
    int N;
    cin >> N;

    int K;
    cin >> K;

    vector<int> arr(N);

    int minimum = minofcoins(arr,N,K);

    cout << minimum;
}
```

## Submission at 2024-10-07 10:35:08


```
#include<iostream>
#include<string>
#include<stack>

using namespace std;

string output(string s){
    stack<int> st;
    string result;
    for(int i = 0;i<s.length();i++){
    if(st.empty()){
        st.push(s[i]);
    }

     if(!st.empty() && st.top() != '.'){
        result += st.top();
        st.pop();
     }
     else{
st.push(s[i]);
     }
     
     
    }
    return result;
}

int main() {
    string s;
    cin >> s;

    string op = output(s);
    cout << op;
    
}
```

## Submission at 2024-10-07 10:52:16


```
#include<iostream>
#include<stack>
#include<string>
using namespace std;

string output(string s){
    stack<int> st;
    string res;


    for(char ch : s){
        if(!s.empty()){
            st.push(ch);
        
    }

    if(!st.empty()){
            res += st.top();
            st.pop();
    }
    
    }

int main(){
    string s;
    cin >> s;

    string op = output(s);
    cout << op;
}
```

## Submission at 2024-10-07 10:59:31


```
#include<iostream>
#include<stack>
#include<string>
using namespace std;

string output(string s){
    stack<int> st;
    string res;


    for(int i =0;i<s.length();i++){
        st.push(s[i]);
    
    }

    while(!st.empty()){
            res += st.top();
            st.pop();
    }
    
    
}

int main(){
    string s;
    cin >> s;

    string op = output(s);
    cout << op;
}
```

## Submission at 2024-10-07 11:07:27


```
#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> arr){
    int maxi = -1000;
    for(int i = 0;i<arr.size();i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int minin_coin(vector<int> v,int diff){
    int dif = 0;
    int last = v[0];
    for(int i = 1;i<v.size();i++){
        if(v[i] - last <= diff){
            dif++;
            last = v[i];
        }
    }
    return dif;
}

int minofcoins(vector<int> arr,int n,int k){
    int low = 1;
    int high = findMax(arr);

    while(low <= high){
        int mid = low + (high - low)/ 2;
        int minimum_coin = minin_coin(arr,mid);

        if(minimum_coin == k){
            return mid;
        }
        
        if(minimum_coin < k){
        low = mid - 1;
    }else{
        high = mid + 1;
    }
        
    }
    return low;
}

int main() {
    int N;
    cin >> N;

    int K;
    cin >> K;

    vector<int> arr(N);

    int minimum = minofcoins(arr,N,K);

    cout << minimum;
}
```

## Submission at 2024-10-07 11:07:52


```
#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> arr){
    int maxi = -1000;
    for(int i = 0;i<arr.size();i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int minin_coin(vector<int> v,int diff){
    int dif = 0;
    int last = v[0];
    for(int i = 1;i<v.size();i++){
        if(v[i] - last <= diff){
            dif++;
            last = v[i];
        }
    }
    return dif;
}

int minofcoins(vector<int> arr,int n,int k){
    int low = 1;
    int high = findMax(arr);

    while(low <= high){
        int mid = low + (high - low)/ 2;
        int minimum_coin = minin_coin(arr,mid);

        if(minimum_coin == k){
            return mid;
        }
        
        if(minimum_coin < k){
        low = mid - 1;
    }else{
        high = mid + 1;
    }
        
    }
    return low + 1;
}

int main() {
    int N;
    cin >> N;

    int K;
    cin >> K;

    vector<int> arr(N);

    int minimum = minofcoins(arr,N,K);

    cout << minimum;
}
```

## Submission at 2024-10-17 12:23:34


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    length = len(q)
    for _ in range(length):
        q.appendleft(q.pop())

    return q
```

## Submission at 2024-10-17 12:24:33


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    length = len(q)
    if length == 0 or length == 1:
        return q

    for _ in range(length):
        q.appendleft(q.pop())

    return q
```

## Submission at 2024-10-28 10:05:51


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
    if(root == NULL) return 0;

    int minval = root->data;

    findMin(root->left);
    findMin(root->right);

    if(root->data < minval){
        return root->data;
    }

    
}


```

## Submission at 2024-10-28 10:06:39


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
    if(root == NULL) return NULL;

    int minval = root->data;

    findMin(root->left);
    findMin(root->right);

    if(root->data < minval){
        return root->data;
    }

    
}


```

## Submission at 2024-10-28 10:28:44


```
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

vector<string> result(vector& order,vector& si){
    unordered_map<char,int> map;
    for(char ch : si){
        map[ch]++;
    }

    vector<string> res;

    for(char ch : order){
        if(map.count(ch)){
            res += string(map[ch],ch);
            map.erase(ch);
        }
    }

    for(auto it : map){
        res += string(it.second,it.first);
    }

    return res;

    
}



int main() {
    vector<string> order;
    cin >> order;

    for(int i = 0;i<order.size();i++){
        cin >> order[i];
    }

    vector<string> si;
    cin >> si;

    for(int i = 0;i<si.size();i++){
        cin >> si[i];
    }

    vector<string> ans = result(order,si);


    for(int i = 0;i<ans.size();i++){
        cout << ans[i];
    }







}
```

## Submission at 2024-10-28 10:39:27


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int> hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map[hey[i]] == k){
            return hey[i];
        }
    }
    return 0;
}


int main() {
    int n;

    vector<int> res(n);

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    int k ;
    cin >> k;

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 10:40:10


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int> hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map[hey[i]] == k){
            return hey[i];
        }
    }
    return 0;
}


int main() {
    int n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 10:41:58


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map[hey[i]] == k){
            return hey[i];
        }
    }
    return 0;
}


int main() {
    int n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 10:53:21


```
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

vector<string> result(vector<string>& order,vector<string>& si){
    unordered_map<char,int> map;
    for(char ch : si){
        map[ch]++;
    }

    vector<string> res;

    for(char ch : order){
        if(map.count(ch)){
            res += string(map[ch],ch);
            map.erase(ch);
        }
    }

    for(auto it : map){
        res += string(it.second,it.first);
    }


    
    
}



int main() {
    vector<string> order;

    for(int i = 0;i<order.size();i++){
        cin >> order[i];
    }

    vector<string> si;

    for(int i = 0;i<si.size();i++){
        cin >> si[i];
    }

    vector<string> ans = result(order,si);


    for(int i = 0;i<ans.size();i++){
        cout << ans[i];
    }







}
```

## Submission at 2024-10-28 10:54:30


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map[hey[i]] == k){
            return hey[i];
        }
    }
    return -1;
}


int main() {
    int n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 10:56:43


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& res, int k){
    unordered_map<int,int> map;

    for(int num : res){
        map[num]++;
    }

    for(int i = 0;i<res.size();i++){
        if(map[res[i]] == k){
            return res[i];
        }
    }
    return -1;
}


int main() {
    int n;

    vector<int> res(n);

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    int k;
    cin >> k;

    

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 11:00:16


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
    if(root == NULL) return root->data;

    if(root->left == NULL && root->right == NULL){
        return root->data;
    }

    int minval = root->data;

    findMin(root->left);
    findMin(root->right);

    if(root->data < minval){
        return root->data;
    }

    
}

```

## Submission at 2024-10-28 11:00:54


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
    if(root == NULL) return NULL;

    if(root->left == NULL && root->right == NULL){
        return root->data;
    }

    int minval = root->data;

    findMin(root->left);
    findMin(root->right);

    if(root->data < minval){
        return root->data;
    }

    
}

```

## Submission at 2024-10-28 11:09:28


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
  Node* curr = head1;
  Node* curr2 = head2;
  Node* curr3 = NULL;

  while(curr!= nullptr && curr2 != nullptr){
    if(curr->data == curr2->data){
      curr3 = curr;
      curr = curr->next;
      curr2 = curr2->next;

    }

    else if(curr->data < curr2->data){
        curr = curr->next;
    }
    else{
        curr2 = curr2->next;
    }
  }

  return curr3;
}
```

## Submission at 2024-10-28 11:14:50


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
  Node* curr = head1;
  Node* curr2 = head2;
  Node* curr3 = NULL;
  Node* curr4 = NULL;

  while(curr!= nullptr && curr2 != nullptr){
    if(curr->data == curr2->data){
      Node* curr4 = curr;
      if(curr3 == NULL){
        curr3 = curr;
      }else{
          curr3->next = curr4;
      }

      

      curr = curr->next;
      curr2 = curr2->next;

    }

    else if(curr->data < curr2->data){
        curr = curr->next;
    }
    else{
        curr2 = curr2->next;
    }
  }

  return curr3;
}
```

## Submission at 2024-10-28 11:17:27


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
  Node* curr = head1;
  Node* curr2 = head2;
  Node* curr3 = NULL;
  Node* curr4 = NULL;

  while(curr!= nullptr && curr2 != nullptr){
    if(curr->data == curr2->data){
      Node* curr4 = curr;
      if(curr3 == NULL){
        curr3 = curr;
      }else{
          curr3->next = curr4;
          curr3 = curr3->next;
      }

      curr = curr->next;
      curr2 = curr2->next;

    }

    else if(curr->data < curr2->data){
        curr = curr->next;
    }
    else{
        curr2 = curr2->next;
    }
  }

  return curr3;
}
```

## Submission at 2024-10-28 11:20:07


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(auto it : map){
        if(it.second == k){
            return it.first;
        }
    }
    return -1;
}


int main() {
    int n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 11:22:11


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;
    int answer = -1;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map[hey[i]] == k){
            answer = hey[i];
        }
    }
    return answer;
}


int main() {
    int n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 11:23:38


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;
    int answer = -1;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map(hey[i]) == k){
            answer = hey[i];
        }
    }
    return answer;
}


int main() {
    int n;

    vector<int> res(n);

    for(int i = 0;i<n;i++){
        cin >> res[i];
    }

    int k ;
    cin >> k;

    

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-28 11:27:19


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
    if(root == NULL) return root;

    int minVal = root->data;
    if(root->left){
        findMin(root->left);
    }

    if(root->right){
        findMin(root->right);
    }

    if(root->data < minVal){
        minVal = root->data;
    }

    return minVal;
}


```

## Submission at 2024-10-29 05:39:11


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

int ordertraversal(Node* root,int currsum){
  if(root == NULL) return 0;

  currsum = currsum*10 + root->data;

  if(root->left == NULL && root->right == NULL){
    return currsum;
  }

  int left = ordertraversal(root->left,currsum);
  int right = ordertraversal(root->right,currsum);

  return left + right;
}
int treePathSum(Node* root)
{
  return ordertraversal(root,0);
}

```

## Submission at 2024-10-29 05:41:02


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;
    int answer = -1;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0;i<hey.size();i++){
        if(map[hey[i]] == k){
            answer = hey[i];
            break;
        }
    }
    return answer;
}


int main() {
    int n;

    vector<int> res(n);

    for(int i = 0;i<n;i++){
        cin >> res[i];
    }

    int k ;
    cin >> k;

    

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-10-29 05:41:41


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;
    int answer = -1;

    for(int num : hey){
        map[num]++;
    }

    for(int i = 0; i < hey.size(); i++){
        if(map[hey[i]] == k){  
            answer = hey[i];
            break;
        }
    }
    return answer;
}

int main() {
    int n;
    cin >> n;  

    vector<int> res(n);  

    for(int i = 0; i < n; i++){
        cin >> res[i]; 
    }

    int k;
    cin >> k;

    int result = answer(res, k);

    cout << result;
}

```

## Submission at 2024-10-29 05:44:07


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
    if(root == NULL) return INT_MIN;

    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);

    return min(root->data, min(leftMin,rightMin));
}


```

## Submission at 2024-10-29 05:45:00


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
    if(root == NULL) return 0;

    int leftMin = findMin(root->left);
    int rightMin = findMin(root->right);

    return min(root->data, min(leftMin,rightMin));
}


```

## Submission at 2024-10-29 05:46:59


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
    if(root == NULL) return 0;

    int lefti = findMax(root->left);
    int righti = findMax(root->right);

    return max(root->data, max(lefti->data,righti->data));
}


```

## Submission at 2024-10-29 05:48:20


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
    if(root == NULL) return 0;

    int lefti = findMax(root->left);
    int righti = findMax(root->right);

    return max(root->data, max(lefti,righti));
}


```

## Submission at 2024-10-29 05:50:27


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
    if(root == NULL) return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);

    int ans = max(left,right) + 1;
    return ans;
}

```

## Submission at 2024-10-29 05:54:04


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
    if(root == NULL) return true;
    

    if(root->left != NULL && root->right == NULL || root->left == NULL && root->right != NULL){
        return false;
    }

    return (root->left,root->right) && (root->right,root->left);
}


```

## Submission at 2024-10-29 05:55:20


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
    if(root == NULL) return true;
    

    if(root->left != NULL && root->right == NULL || root->left == NULL && root->right != NULL){
        return false;
    }

    return (left->data == right->data) && (root->left,root->right) && (root->right,root->left);
}


```

## Submission at 2024-10-29 05:58:05


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
bool isSymmetrictree(Node* left,Node* right){
    if (left == NULL && right == NULL) return true;

    if (left == NULL || right == NULL) return false;

    return (left->data == right->data) && (root->left,root->right) && (root->right,root->left);
}


bool isSymmetric(struct Node* root)
{
    if(root == NULL) return true;

    return isSymmetrictree(root->left,root->right);
}


```

## Submission at 2024-10-29 05:59:20


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
bool isSymmetrictree(Node* left,Node* right){
    if (left == NULL && right == NULL) return true;

    if (left == NULL || right == NULL) return false;

    return (left->data == right->data) && (left->left,right->right) && (left->right,right->left);
}


bool isSymmetric(struct Node* root)
{
    if(root == NULL) return true;

    return isSymmetrictree(root->left,root->right);
}


```

## Submission at 2024-10-29 06:00:21


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
bool isSymmetrictree(Node* left,Node* right){
    if (left == NULL && right == NULL) return true;

    if (left == NULL || right == NULL) return false;

    return (left->data == right->data) && isSymmetrictree(left->left,right->right) && isSymmetrictree(left->right,right->left);
}


bool isSymmetric(struct Node* root)
{
    if(root == NULL) return true;

    return isSymmetrictree(root->left,root->right);
}


```

## Submission at 2024-10-29 06:09:13


```
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

vector<string> result(vector<char>& order,vector<char>& si){
    unordered_map<char,int> map;
    for(char ch : si){
        map[ch]++;
    }

    vector<string> res;

    for(char ch : order){
        if(map.count(ch)){
            res.push_back(string(map[ch],ch));
            map.erase(ch);
        }
    }

    for(auto it : map){
        res.push_back(string(it.second,it.first));
    }

    return res;
    
    
}



int main() {
    vector<char> order;
    vector<char> si;

    string orderinput;
    cin >> orderinput;


    for(char ch : orderinput){
        order.push_back(ch);
    }

    

    string siInput;
    cin >> siInput; 
    for (char ch : siInput) {
        si.push_back(ch); 
    }

    vector<string> ans = result(order,si);


    for(string& str : ans){
        cout << str;
    }

    cout << endl;







}
```

## Submission at 2024-10-29 06:09:41


```
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

vector<string> result(vector<char>& order,vector<char>& si){
    unordered_map<char,int> map;
    for(char ch : order){
        map[ch]++;
    }

    vector<string> res;

    for(char ch : si){
        if(map.count(ch)){
            res.push_back(string(map[ch],ch));
            map.erase(ch);
        }
    }

    for(auto it : map){
        res.push_back(string(it.second,it.first));
    }

    return res;
    
    
}



int main() {
    vector<char> order;
    vector<char> si;

    string orderinput;
    cin >> orderinput;


    for(char ch : orderinput){
        order.push_back(ch);
    }

    

    string siInput;
    cin >> siInput; 
    for (char ch : siInput) {
        si.push_back(ch); 
    }

    vector<string> ans = result(order,si);


    for(string& str : ans){
        cout << str;
    }

    cout << endl;







}
```

## Submission at 2024-10-29 06:12:32


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

postordertraversal(Node* root,vector<int>& ans){
  if(root == NULL) return ans;
  postordertraversal(root->left);
  postordertraversal(root->right);
  ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
   vector<int> ans;
   postordertraversal(root,ans);
   return ans;
}

```

## Submission at 2024-10-29 06:14:03


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

postordertraversal(Node* root,vector<int>& ans){
  if(root == NULL) return ans;
  postordertraversal(root->left,ans);
  postordertraversal(root->right,ans);
  ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
   vector<int> ans;
   postordertraversal(root,ans);
   return ans;
}

```

## Submission at 2024-10-29 06:14:31


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

void postordertraversal(Node* root,vector<int>& ans){
  if(root == NULL) return ans;
  postordertraversal(root->left,ans);
  postordertraversal(root->right,ans);
  ans.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
   vector<int> ans;
   postordertraversal(root,ans);
   return ans;
}

```

## Submission at 2024-10-29 06:15:18


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

void postordertraversal(Node* root, vector<int>& ans) {
    if (root == NULL) return; 
    postordertraversal(root->left, ans);   
    postordertraversal(root->right, ans); 
    ans.push_back(root->data);              
}

vector<int> postOrder(Node* root) {
    vector<int> ans;
    postordertraversal(root, ans); 
    return ans;
}


```

## Submission at 2024-11-16 11:50:35


```
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

string solve(string& order, string& s) {
    unordered_map<char, int> charcount;
    string result;

    for (char ch : s) {
        charcount[ch]++;
    }

    for (char ch : order) {
        if (charcount.count(ch)) {
            result += string(charcount[ch], ch);
            charcount.erase(ch);
        }
    }

    for (char ch : s) {
        if (charcount.count(ch)) {
            result += string(charcount[ch], ch);
            charcount.erase(ch); 
        }
    }

    return result;
}

int main() {
    string order, s;
    cin >> order >> s;

    string result = solve(order, s);

    cout << result << endl;

    return 0;
}

```

## Submission at 2024-11-16 12:25:58


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
    if(root == NULL) return INT_MIN;

    int left = findMax(root->left);
    int right = findMax(root->right);

    return max(root->data, max(left,right));
}


```

## Submission at 2024-11-16 12:28:46


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
    if(root == NULL) return INT_MAX;

    int lefti = findMin(root->left);
    int righti = findMin(root->right);

    return min(root->data,min(lefti,righti));
}


```

## Submission at 2024-11-16 12:38:34


```
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solve(vector<int>& v, int k) {
    unordered_map<int, int> intcnt;

    for (int i : v) {
        intcnt[i]++;
    }

    for (auto it : intcnt) {
        if (it.second >= k) {
            return it.first;
        }
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = solve(v, k);

    cout << ans << endl;

    return 0;
}

```

## Submission at 2024-11-17 07:28:17


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(auto it : map){
        if(it.second >= k){
            return it.first;
        }
    }
    return -1;
}


int main() {
    int n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-11-17 07:29:12


```
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int answer(vector<int>& hey, int k){
    unordered_map<int,int> map;

    for(int num : hey){
        map[num]++;
    }

    for(auto it : map){
        if(it.second >= k){
            return it.first;
        }
    }
    return -1;
}


int main() {
    int n;
    cin >> n;

    vector<int> res(n);

    int k ;
    cin >> k;

    for(int i = 0;i<res.size();i++){
        cin >> res[i];
    }

    int result = answer(res,k);

    cout <<  result;
}
```

## Submission at 2024-11-25 06:26:51


```
#include<bits/stdc++.h>
using namespace std;

string solve(string& s){
    stack<char> st;
    string res = "";

    for(int i = 0;i<s.length();i++){
        if(s[i] == '.'){
            while(!st.empty()){
                res += st.top();
                st.pop();
            }
            res += '.';
        }
        else{
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        res += st.top();
        st.pop();
    }

    return res;
    
}

int main( ){
    string s;
    cin >> s;

    string result = solve(s);

    cout << result << endl;
}
```

## Submission at 2024-11-25 09:32:13


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
  if(root == NULL) return 0;

  int left = maxDepth(root->left);
  int right = maxDepth(root->right);


  int ans = max(left,right) + 1;
  return ans;
}

```

## Submission at 2024-11-25 09:50:17


```
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    for(int i = 0;i<n;i++){
        for(int j = i + 1;j<n;j++){
            if(v[j] < v[i]){
                cout << "NO" << endl;
            }
        }
    }

    cout << "YES" << endl;
}
```

## Submission at 2024-11-25 09:51:44


```
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    for(int i = 0;i+1<n;i++){
        if(v[i+1] < v[i]){
            cout << "NO" << endl;
        }
    }

    cout << "YES" << endl;
}
```

## Submission at 2024-11-25 09:59:02


```
#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    int sum = v[1] - v[0];

    for(int i = 2;i<n;i++){
        if(v[i] - v[i+1] == sum){
            continue;
        }else{
            cout << "false" << endl;
        }
    }
    cout << "true" <<endl;
}
```

## Submission at 2024-11-25 10:16:13


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
    if(root == NULL) return 0;


    if(root->data < n){
      root->right = findMaxForN(root->right,n);

    }
    else if(root->data > n){
      root->left = findMaxForN(root->left,n);
    }

    return root != NULL ? root->data : -1;

    


}

```

## Submission at 2024-11-25 10:31:53


```
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> v(n);

    for(int i = 0;i<n;i++){
            cin >> v[i];
    }

    sort(v.begin(),v.end());

    

    for(int i = 0;i<n;i++){
        if(v[i] == m){
            cout << i << " ";
        }
    }

}
```

## Submission at 2024-11-25 10:44:10


```
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }

    vector<int> ans(n);
    for(int i = 0;i<n;i++){
            ans[i] = v[i];
    }

    sort(ans.begin(),ans.end());

    for(int i = 0;i<n;i++){
        if(ans[i] != v[i]){
            cout << "NO" << endl;
            break;
        }
    }
    cout << "YES" << endl;
    

    
}
```

## Submission at 2024-11-25 10:52:23


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
                cout << "*" ;
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:59:58


```
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


int main() {
    string s;
    cin >> s;

    unordered_map<char,int> map;

    for(char ch : s){
        map[ch]++;
    }

    int maxfreq = 0;
    for(auto it : map){
        maxfreq= max(maxfreq,it.second);
    }

    for(auto it : map){
        if(maxfreq == it.second){
            cout << it.first << endl;
        }
    }
}
```

## Submission at 2024-11-25 11:29:18


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
    Node* temp = head1;
    Node* temp2 = head2;

    while(temp && temp2){
      if(temp->data < temp2->data){
        temp = temp->next;

      }
      else if(temp2->data > temp->data){
        temp2 = temp2->next;
      }

      Node* newNode = new Node(temp->data);
      
    }
    return newNode;
    

}



```

