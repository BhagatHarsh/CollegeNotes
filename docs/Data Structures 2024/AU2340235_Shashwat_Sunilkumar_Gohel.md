## Submission at 2024-08-05 10:14:46


```
#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"hello "<<name<<" !"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:15:46


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"hello "<<name<<" !"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:16:48


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<" !"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:17:44


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<" !"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:20:14


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<" !"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:20:38


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:28:59


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<"Hello "<<s<<"!"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:38:13


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-12 09:50:45


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:23:23


```
#include <iostream>
#include<math.h>
using namespace std;

bool isPowerOfTwo(int n) {
      if(n==0 || n%2!=0){
            if(n==1)    return true;
            return false;
        }
        return isPowerOfTwo(n/2);
    }
  

int main() {
    int n;
    cin >> n;

    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 11:18:46


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
      vector<vector<int>> ans;
        for(int j = 0; j < (1 << nums.size()); j++) {
            ans.push_back({});
            for(int i = 0; i < nums.size(); i++) {
                if(j & (1 << i)) {
                    ans.back().push_back(nums[i]);
                }
            }
        }
        return ans;
}

// Custom comparator function to sort based on size and first element
bool compare(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }
    // If sizes are the same, compare based on the first element
    if (!a.empty() && !b.empty()) {
        return a[0] < b[0];
    }
    return false; // Handle empty vectors (although empty vectors are unlikely in this case)
}


int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> nums;
    int num;

    while (ss >> num) {
        nums.push_back(num);
    }

    // Generate all subsets
    vector<vector<int>> result = subsets(nums);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print subsets
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-17 05:22:48


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        combine(i + 1, k - 1, n, current, result);
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

## Submission at 2024-08-17 05:47:19


```
#include<bits/stdc++.h>

using namespace std;
class Solution {
  private:
    void recurPermute(vector < int > & ds, vector < int > & nums, vector < vector < int >> & ans, int freq[]) {
      if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
          ds.push_back(nums[i]);
          freq[i] = 1;
          recurPermute(ds, nums, ans, freq);
          freq[i] = 0;
          ds.pop_back();
        }
      }
    }
  public:
    vector < vector < int >> permute(vector < int > & nums) {
      vector < vector < int >> ans;
      vector < int > ds;
      int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) freq[i] = 0;
      recurPermute(ds, nums, ans, freq);
      return ans;
    }
};

int main() {
  Solution obj;
  vector<int> v{1,2,3};
  vector < vector < int >> sum = obj.permute(v);
  cout << "All Permutations are " << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
  }
}
```

## Submission at 2024-08-17 05:48:41


```
#include<bits/stdc++.h>

using namespace std;
class Solution {
  private:
    void recurPermute(vector < int > & ds, vector < int > & nums, vector < vector < int >> & ans, int freq[]) {
      if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
          ds.push_back(nums[i]);
          freq[i] = 1;
          recurPermute(ds, nums, ans, freq);
          freq[i] = 0;
          ds.pop_back();
        }
      }
    }
  public:
    vector < vector < int >> permute(vector < int > & nums) {
      vector < vector < int >> ans;
      vector < int > ds;
      int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) freq[i] = 0;
      recurPermute(ds, nums, ans, freq);
      return ans;
    }
};

int main() {
  Solution obj;
  vector<int> v{1,2,3};
  vector < vector < int >> sum = obj.permute(v);
  cout << "All Permutations are " << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
  }
}
```

## Submission at 2024-08-17 05:51:11


```
#include <iostream>
#include <vector>
#include <algorithm> 

void permuteHelper(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        permuteHelper(nums, start + 1, result);
        std::swap(nums[start], nums[i]);
    }
}

std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    permuteHelper(nums, 0, result);
    return result;
}
int main() {
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> permutations = permute(nums);

    for (const auto& perm : permutations) {
        std::cout << "[";
        for (size_t i = 0; i < perm.size(); ++i) {
            std::cout << perm[i];
            if (i < perm.size() - 1) std::cout << ",";
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}

```

## Submission at 2024-08-21 06:03:15


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}

```

## Submission at 2024-08-21 06:03:31


```
#include <iostream>
#include <vector>
#include <string>

void generateParentheses(int open, int close, std::string current, std::vector<std::string>& result) {
    if (open == 0 && close == 0) {
        result.push_back(current);
        return;
    }
    
    if (open > 0) {
        generateParentheses(open - 1, close, current + '(', result);
    }
    
    if (close > open) {
        generateParentheses(open, close - 1, current + ')', result);
    }
}

std::vector<std::string> generateParenthesisCombinations(int n) {
    std::vector<std::string> result;
    generateParentheses(n, n, "", result);
    return result;
}

void printCombinations(const std::vector<std::string>& combinations) {
    std::cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        std::cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    std::vector<std::string> combinations = generateParenthesisCombinations(n);
    printCombinations(combinations);

    return 0;
}

```

## Submission at 2024-08-21 06:05:10


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesesHelper(vector<string>& result, string current, int open, int close, int n) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    if (open < n) {
        generateParenthesesHelper(result, current + '(', open + 1, close, n);
    }
    if (close < open) {
        generateParenthesesHelper(result, current + ')', open, close + 1, n);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesesHelper(result, "", 0, 0, n);
    return result;
}

void printResult(const vector<string>& result) {
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<string> result = generateParentheses(n);
    printResult(result);
    return 0;
}

```

## Submission at 2024-08-21 09:39:18


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
        if (cin.peek() == '\n') break;
    }
    vector<vector<int>> permutations = permute(nums);
    cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < permutations.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-08-30 11:55:55


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> findMax(int n, vector<int>& a, vector<int>& b) {
    vector<int> c;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            c.push_back(a[i]);
        } else {
            c.push_back(b[i]);
        }
    }
    return c;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> result = findMax(n, a, b);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-30 11:57:26


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> findMax(int n, vector<int>& a, vector<int>& b) {
    vector<int> c;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            c.push_back(b[i]);
        } else {
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

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> result = findMax(n, a, b);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-31 04:43:02


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  // Multiply x by the result of pow(x, n-1)
    }
    if (n < 0) {
        return 1 / pow(x, -n);  // Integer division to handle negative powers
    }
    return 1; // This return is just a safeguard, though logically unreachable
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}

```

## Submission at 2024-08-31 04:43:04


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  // Multiply x by the result of pow(x, n-1)
    }
    if (n < 0) {
        return 1 / pow(x, -n);  // Integer division to handle negative powers
    }
    return 1; // This return is just a safeguard, though logically unreachable
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}

```

## Submission at 2024-08-31 04:44:20


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  
    }
    if (n < 0) {
        return 1 / pow(x, -n);  
    }
    return 1; 
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}

```

## Submission at 2024-08-31 09:03:42


```
#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int start = 0;  
    int end = s.length() - 1;
    
    while (start < end) {
        if (s[start] != s[end]) {  
            return false;
        }
        start++;  
        end--;    
    }
    
    return true;
}

int main() {
    string s;
    cin >> s;  
    
    if (isPalindrome(s)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}

```

## Submission at 2024-09-02 09:03:33


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  
    }
    if (n < 0) {
        return 1 / pow(x, -n);  
    }
    return 1; 
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}
ate a function named Pow(int x, int n)

```

## Submission at 2024-09-02 09:04:27


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  
    }
    if (n < 0) {
        return 1 / pow(x, -n);  
    }
    return 1; 
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}
```

## Submission at 2024-09-02 09:06:02


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  
    }
    if (n < 0) {
        int ans = pow(x,n);
        return 1 / ans;  
    }
    return 1; 
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}
```

## Submission at 2024-09-02 09:54:13


```
#include <vector>
using namespace std;

vector<int> findMax(int n, vector<int>& a, vector<int>& b) {
    vector<int> c;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            c.push_back(b[i]);
        } else {
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

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> result = findMax(n, a, b);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-09-02 09:58:02


```
#include <vector>
#include<iostream>
using namespace std;

vector<int> findMax(int n, vector<int>& a, vector<int>& b) {
    vector<int> c;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            c.push_back(b[i]);
        } else {
            c.push_back(a[i]);
        }
    }
    return c;
}

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>b[i];
    }

    vector<int> result = findMax(n, a, b);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-09-02 10:11:33


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

## Submission at 2024-09-02 10:14:36


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

## Submission at 2024-09-02 10:14:41


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

## Submission at 2024-09-02 10:24:14


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
    int position =1;
    while(current != nullptr){
        if(position == k){
            return current->data;
        }
        current=current->next;
        position++;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:51:48


```


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
Node* deleteNode(Node *head,int position)
{
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }

    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    }
```

## Submission at 2024-09-07 05:13:39


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

## Submission at 2024-09-09 02:45:06


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n > 0) {
        return x * pow(x, n - 1);  
    }
    if (n < 0) {
        // int ans = pow(x,n);
        // return 1 / ans; 
        return 0; 
    }
    return 1; 
}

int main() {
    int n;
    int x;
    cin >> x;
    cin >> n;
    int result = pow(x, n);
    cout << result;
    return 0;
}
```

## Submission at 2024-09-09 04:07:12


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
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        curr = forward;
    }
}

```

## Submission at 2024-09-09 04:07:40


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
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        curr = forward;
    }
    return prev;
}

```

## Submission at 2024-09-09 04:08:35


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
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev =curr
        curr = forward;
    }
    return prev;
}

```

## Submission at 2024-09-09 04:08:47


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
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev =curr;
        curr = forward;
    }
    return prev;
}

```

## Submission at 2024-09-09 04:10:54


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

## Submission at 2024-09-09 07:24:56


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
    Node* prev= NULL;
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

## Submission at 2024-09-09 07:41:39


```
#include <iostream>
#include <vector>
#include <algorithm>  // For sorting
using namespace std;

bool areEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;  // Arrays of different sizes can't be equal
    }

    // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Compare element by element
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            return false;  // If any element differs, arrays are not equal
        }
    }

    return true;  // Arrays are equal
}

int main() {
    int n;
    
    cin >> n;

    vector<int> arr1(n);
    vector<int> arr2(n);

    
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    if (areEqual(arr1, arr2)) {
        cout << "false" << endl;
    } else {
        cout << "true" << endl;
    }

    return 0;
}

```

## Submission at 2024-09-09 09:52:00


```
#include<iostream>
using namespace std;

bool PowerofThree(int n){
    if (n == 0 && n/3 == 0 ){
        return false;
    }
    else{
        return true;
    }
    return PowerofThree(n/3);
}
int main(){
    int n;
    cin>>n;

    if(PowerofThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 09:52:24


```
#include<iostream>
using namespace std;

bool PowerofThree(int n){
    if (n == 0 && n/3 == 0 ){
        return false;
    }
    else{
        return true;
    }
    return PowerofThree(n/3);
}
int main(){
    int n;
    cin>>n;

    if(PowerofThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 10:13:03


```
#include<iostream>
using namespace std;

int charfreq(string str , char x){
    int n = str.length()-1;
    int freq = 0;
    for(int i = 0;i<n;i++){
        if (str[i] == x){
            freq++;
        }
        return freq;
    }
}
int main(){
    string s;
    cin>>s;
    cout<<" ";
    char x;
    cin>>x;
    int ans = charfreq(s,x);
    cout<<ans<<endl; 
}
```

## Submission at 2024-09-09 10:17:37


```
#include<iostream>
using namespace std;

bool PowerofThree(int n){
    if (n == 0 || n/3 == 0 ){
        return false;
    }
    else{
        return true;
    }
    return PowerofThree(n/3);
}
int main(){
    int n;
    cin>>n;

    if(PowerofThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
```

## Submission at 2024-09-09 10:24:02


```
#include<iostream>
using namespace std;

int freqchar(string s , char x){
    int n = s.length()-1;
    int count = 0;
    for (int i=0;i<n;i++){
        if (s[i] == x){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cin>>str;
    char x;
    cin>>x;
    int ans = freqchar(str,x);
    cout<<ans;
}
```

## Submission at 2024-09-09 10:25:42


```
#include<iostream>
using namespace std;

int freqchar(string s , char x){
    int n = s.length()-1;
    if (n == 0){
        return ;
    }
    int count = 0;
    for (int i=0;i<n;i++){
        if (s[i] == x){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cin>>str;
    char x;
    cin>>x;
    int ans = freqchar(str,x);
    cout<<ans;
}

```

## Submission at 2024-09-09 10:32:36


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
    Node*temp = head;
    Node* prev = NULL;
    Node* curr = temp->next;
    if(temp->data == curr->data){
        prev = temp->next;
        temp = temp->next;
        curr = curr->next;
        delete prev;
    }
    temp = temp->next;
    curr = curr->next;

    return curr;
}

```

## Submission at 2024-09-09 10:40:55


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;;
        if(temp->data == curr->data){
            temp = curr->next;
            curr->next = prev;
            delete curr;
        }
        curr = curr->next;
        temp = temp->next;
    return temp;
}

```

## Submission at 2024-09-09 10:42:26


```
#include<iostream>
using namespace std;

bool PowerofThree(int n){
    if (n == 0 || n/3 == 0 ){
        return false;
    }
    else{
        return true;
    }
    return PowerofThree(n/3);
}
int main(){
    int n;
    cin>>n;

    if(PowerofThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
```

## Submission at 2024-09-09 10:43:34


```
#include<iostream>
using namespace std;

bool PowerofThree(int n){
    if(n < 0){
        return;
    }
    if (n == 0 || n/3 == 0 ){
        return false;
    }
    else{
        return true;
    }
    return PowerofThree(n/3);
}
int main(){
    int n;
    cin>>n;

    if(PowerofThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
```

## Submission at 2024-09-09 10:44:14


```
#include<iostream>
using namespace std;

bool PowerofThree(int n){
    if(n < 0){
        return 0;
    }
    if (n == 0 || n/3 == 0 ){
        return false;
    }
    else{
        return true;
    }
    return PowerofThree(n/3);
}
int main(){
    int n;
    cin>>n;

    if(PowerofThree(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
```

## Submission at 2024-09-09 10:51:21


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;;
        if(curr->data == temp->data){
            curr=->next =prev;
            curr=temp;
            temp = temp->next;
            delete prev;
            return curr;
        }
        curr = curr->next;
        temp = temp->next;
    
}


```

## Submission at 2024-09-09 10:52:11


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;;
        if(curr->data == temp->data){
            curr=->next =prev;
            curr->next =temp;
            temp = temp->next;
            delete prev;
            return curr;
        }
        curr = curr->next;
        temp = temp->next;
    
}


```

## Submission at 2024-09-09 10:52:22


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;;
        if(curr->data == temp->data){
            curr->next =prev;
            curr->next =temp;
            temp = temp->next;
            delete prev;
            return curr;
        }
        curr = curr->next;
        temp = temp->next;
    
}


```

## Submission at 2024-09-09 10:52:34


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;;
        if(curr->data == temp->data){
            curr->next =prev;
            curr->next =temp;
            temp = temp->next;
            delete prev;
            return curr;
        }
        curr = curr->next;
        temp = temp->next;
    
}


```

## Submission at 2024-09-09 10:53:11


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;
        if(curr->data == temp->data){
            curr->next =prev;
            curr->next =temp;
            temp = temp->next;
            delete prev;
            return curr;
        }
        curr = curr->next;
        temp = temp->next;
    
}


```

## Submission at 2024-09-09 10:55:22


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;
    if(curr->data == temp->data){
        curr->next =prev;
        curr->next =temp;
        temp = temp->next;
        delete prev;
    }
    curr = curr->next;
    temp = temp->next;
    return temp;

}


```

## Submission at 2024-09-09 10:55:49


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;
    if(curr->data == temp->data){
        curr->next =prev;
        curr->next =temp;
        temp = temp->next;
        delete prev;
    }
    curr = curr->next;
    temp = temp->next;
    return curr;

}


```

## Submission at 2024-09-09 11:01:42


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
    Node*prev = NULL;
    Node* forward = NULL;
    if(curr->data = temp->data){
        forward = curr->next;
        curr->next = prev;
        delete prev;
        prev = curr;
        curr = forward;
        return temp;
    }
    curr = curr->next;
    temp = temp->next;
}

```

## Submission at 2024-09-09 11:03:14


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
    Node* prev = NULL;
    Node* curr =head;
    Node* temp = curr->next;;
        if(temp->data == curr->data){
            temp = curr->next;
            curr->next = prev;
            delete curr;
        }
        curr = curr->next;
        temp = temp->next;
    return temp;
}
```

## Submission at 2024-09-09 11:05:08


```
#include<iostream>
using namespace std;

int freqchar(string s , char x){
    int n = s.length()-1;
    int count = 0;
    for (int i=0;i<n;i++){
        if (s[i] == x){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cin>>str;
    char x;
    cin>>x;
    int ans = freqchar(str,x);
    cout<<ans;
}
```

## Submission at 2024-09-09 11:05:54


```
#include<iostream>
using namespace std;

int freqchar(string s , char x){
    int n = s.length()-1;
    int count = 0;
    for (int i=0;i<n;i++){
        if (s[i] == x){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cin>>str;
    char x;
    cin>>x;
    int ans = freqchar(str,x);
    cout<<ans;
}
```

## Submission at 2024-09-09 11:10:40


```
#include<iostream>
using namespace std;
int countFreq(string s, char x){
    int n = s.length()-1;
    int count =0;
    while(n>1){
        if(s[i]==x){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int solution  = countFreq(s,x);
    return solution;
}
```

## Submission at 2024-09-09 11:11:27


```
#include<iostream>
using namespace std;
int countFreq(string s, char x){
    int n = s.length()-1;
    int count =0;
    while(n>1){
        if(s[i]==x){
            count++;
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<" ";
    char x;
    cin>>x;
    int solution  = countFreq(s,x);
    return solution;
}
```

## Submission at 2024-09-09 11:52:49


```
#include<iostream>
using namespace std;

int freqchar(string s, char x) {
    int n = s.length(); // No need to subtract 1
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cin >> str;
    char x;
    cin >> x;
    int ans = freqchar(str, x);
    cout << ans;
}

```

## Submission at 2024-09-09 11:53:21


```
#include<iostream>
using namespace std;

int freqchar(string s, char x) {
    int n = s.length(); // No need to subtract 1
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cin >> str;
    char x;
    cin >> x;
    int ans = freqchar(str, x);
    cout << ans;
}

```

## Submission at 2024-09-13 10:40:42


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
    Node* prev = head;
    Node* curr = prev->next;
    Node* forward = NULL;
    while(prev != NULL){
    if(prev->data = curr->data){
        forward = curr;
        prev->next = NULL;
        delete prev;
        prev = forward;
        curr = forward->next;
    }
    }
}

```

## Submission at 2024-09-13 10:41:50


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
    Node* prev = head;
    Node* curr = prev->next;
    Node* forward = NULL;
    while(prev != NULL){
    if(prev->data = curr->data){
        forward = curr;
        prev->next = NULL;
        delete prev;
        prev = forward;
        curr = forward->next;
    }
    return prev;
    }
}

```

## Submission at 2024-09-13 10:46:06


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
    Node* prev =NULL;
    Node* temp = curr->next;
    Node* curr = head;
    Node* forward = NULL;
    while(prev != NULL){
        if(curr->data == temp->data){
            forward = curr->next;
            curr->next = prev;
            curr = forward;
            temp = curr->next;
            delete prev;
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:50:24


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
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr = temp;
            delete curr; 
        }
    }
}

```

## Submission at 2024-09-13 10:51:34


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
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:52:28


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
    while(curr != NULL && curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:52:55


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
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:53:58


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
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
            return curr;
        }
        else{
            curr = curr->next;
        }
    }
}

```

## Submission at 2024-09-13 10:54:37


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
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:54:54


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
    while(curr != NULL && curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:55:32


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
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:56:12


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
    if (head == NULL) return head;
    Node* curr = head;
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return curr;
    }
}

```

## Submission at 2024-09-13 10:57:53


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
    if (head == NULL) {
        return head;
    }
    Node* curr = head;
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:00:25


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
    if (head == NULL) {
        return head;
    }
    Node* curr = head;
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:01:29


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
    if (head == NULL) {
        return head;
    }
    Node* curr = head;
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            curr = curr->next->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:02:05


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
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            curr = curr->next->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:02:30


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
    while(curr != NULL || curr->next !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            curr = curr->next->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:02:57


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
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = temp->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:03:48


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
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp; 
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:04:40


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
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next =NULL;
            delete temp; 
            curr=curr->next;
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:05:41


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
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data && curr->next != NULL){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next =NULL;
            delete temp; 
            curr=curr->next;
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:06:13


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
    while(curr->data != NULL || curr->next->data !=NULL){
        if(curr->data == curr->next->data || curr->next != NULL){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next =NULL;
            delete temp; 
            curr=curr->next;
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:06:47


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
    while(curr->data != NULL){
        if(curr->data == curr->next->data && curr->next != NULL){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next =NULL;
            delete temp; 
            curr=curr->next;
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:07:10


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
    while(curr->data != NULL){
        if(curr->data == curr->next->data && curr->next->data != NULL){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next =NULL;
            delete temp; 
            curr=curr->next;
        }
        else{
            curr = curr->next;
        }
        return head;
    }
}

```

## Submission at 2024-09-13 11:08:24


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

Node* removeDuplicates(Node *head){
 if (head == NULL) return head; 

    Node* curr = head; 

    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node* temp = curr->next;
            curr->next = temp->next; 
            delete temp;  
        } else {
            curr = curr->next;
        }
    }
    
    return head;
}
```

## Submission at 2024-09-13 11:10:09


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

Node* removeDuplicates(Node *head){
 if (head == NULL) return head; 

    Node* curr = head; 

    while (curr != NULL && curr->next != NULL) {
        if (curr->data == curr->next->data) {
            Node* temp = curr->next;
            curr->next = temp->next; 
            delete temp;  
        } else {
            curr = curr->next;
        }
    }
    
    return head;
}
```

## Submission at 2024-09-13 11:40:40


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
  vector<int>& result;
  while(head != NULL){
    result.push_back(head->data);
    head = head->next;
  }
  int n = result.size();
  int start = resule[0];
  int end = result[n-1];
  if(start != end){
    return false;
    start++;
    end--;
  }
  return true;
}
```

## Submission at 2024-09-13 11:42:11


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
  vector<int>& result;
  while(head != NULL){
    result.push_back(head->data);
    head = head->next;
  }
  int start = 0;
  int end = result.size()-1;
  while(start < end){
  if(start != end){
    return false;
    start++;
    end--;
  }
  return true;
  }
}
```

## Submission at 2024-09-13 11:42:24


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
  vector<int>& result;
  while(head != NULL){
    result.push_back(head->data);
    head = head->next;
  }
  int start = 0;
  int end = result.size()-1;
  while(start < end){
  if(start != end){
    return false;
  }
    start++;
    end--;

  return true;
  }
}
```

## Submission at 2024-09-13 11:42:59


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
  vector<int>& result;
  while(head != NULL){
    result.push_back(head->data);
    head = head->next;
  }
  int start = 0;
  int end = result.size()-1;
  while(start < end){
  if(start != end){
    return false;
  }
  start++;
  end--;
  }

  return true;
}
```

## Submission at 2024-09-13 11:45:11


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
  vector<int>result;
  while(head != NULL){
    result.push_back(head->data);
    head = head->next;
  }
  int start = 0;
  int end = result.size()-1;
  while(start < end){
    if(result(start) !=result(end)){
      return false;
    }
  start++;
  end--;
  }

  return true;
}
```

## Submission at 2024-09-13 11:46:14


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
  vector<int>result;
  while(head != NULL){
    result.push_back(head->data);
    head = head->next;
  }
  int start = 0;
  int end = result.size()-1;
  while(start < end){
    if(result[start] !=result[end]){
      return false;
    }
  start++;
  end--;
  }

  return true;
}
```

## Submission at 2024-10-07 07:26:41


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& stalls , int k,int mid){
    int cow = 1;
    int lastPosition = stalls[0];

    for(int i =0 ;i<stalls.size();i++){
        if(stalls[i] - lastPosition >= mid){
            lastPosition = stalls[i];   
            cow++;
            if(cow == k){
                return false;
            }
        }
        lastPosition = stalls[i];
    }
    return true;
}

int allocate(vector<int>& stalls,int k){
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int s = 0;
    int e = stalls[n-1] - stalls[0];
    int ans =-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(stalls,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}
```

## Submission at 2024-10-07 07:29:11


```


///////////////////////////////Water Tank ///////////////////////////////
#include <iostream>
using namespace std;

// Function to check if the tank is empty by day i
bool isTankEmpty(int C, int L, int i) {
    long long waterLeft = C + (long long)i * L - (long long)(i * (i + 1)) / 2;
    return waterLeft <= 0; // Return true if tank is empty or below zero
}

int main() {
    int C; // Capacity of the tank in litres
    int L; // Litres of water added every day

    // Input capacity and litres
    cout << "Enter the capacity of the tank (C): ";
    cin >> C;
    cout << "Enter the litres of water added every day (L): ";
    cin >> L;

    // Binary search for the day when the tank will become empty
    int left = 0, right = 2 * C; // A large enough upper limit
    int answer = -1; // To store the day when tank becomes empty

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (isTankEmpty(C, L, mid)) {
            answer = mid; // Potential answer
            right = mid - 1; // Look for an earlier day
        } else {
            left = mid + 1; // Look for a later day
        }
    }

    // Output the result
    if (answer != -1) {
        cout << "The tank becomes empty on day " << answer << "." << endl;
    } else {
        cout << "The tank does not become empty." << endl;
    }

    return 0;
}


```

## Submission at 2024-10-07 10:21:57


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MathExp(vector<int>& nums){
    for(int i = 0;i<nums.size();i++){
        vector<int>& temp1;
        if(nums[i] != '+'){
            temp1.push_back(nums[i]);
        }
    sort(temp1.begin(),temp1.end());
    }

    return 0;
}

int main(){
    vector<int> nums = {3+2+1};
    int result = MathExp(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"+";
    }
    return result;
}
```

## Submission at 2024-10-07 10:39:54


```
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int MathExp(vector<int>& nums){
    int n = nums.size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(nums[i]!='+'){
            temp.push_back(nums[i]);
        }
    }
    sort(temp.begin(),temp.end());
    // vector<int>& nums = vector<int>& temp;
    return 0;
}
int main(){
    vector<int> nums = {3+2+1};
    int result = MathExp(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"+";
    }
    return result;
}
```

## Submission at 2024-10-28 10:12:05


```
vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
    Traverse(root);
    int min = result[0];
    for(int i=1;i<result.size();i++){
        if(result[i] > result[i+1]){
            min = result[i+1];
        }
    }
    return min;
}


```

## Submission at 2024-10-28 10:14:21


```
vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
    Traverse(root);
    int min = result[0];
    for(int i=1;i<result.size();i++){
        if(result[0] > result[i]){
            min = result[i+1];
        }
    }
    return min;
}


```

## Submission at 2024-10-28 10:19:04


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
vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
 Traverse(root);
    int n = result.size();
    int min = result[0];
    for(int i=1;i<n;i++){
        if(min > result[i]){
            min = result[i+1];
        }
    }
    return min;
}


```

## Submission at 2024-10-28 10:19:50


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
vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
 Traverse(root);
    if(result[0] == 1){
        return 1;
    }
    int n = result.size();
    int min = result[0];
    for(int i=1;i<n;i++){
        if(min > result[i]){
            min = result[i+1];
        }
    }
    return min;
}


```

## Submission at 2024-10-28 10:20:36


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
vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
 Traverse(root);
    int n = result.size();
    int min = result[0];
    if(result[0] == 1){
        return 1;
    }
    for(int i=1;i<n;i++){
        if(min > result[i]){
            min = result[i+1];
        }
    }
    return min;
}


```

## Submission at 2024-10-28 10:28:53


```
#include<iostream>
#include<vectors>
using namespace std;

int FindOccurence(int n,int k,vector<int>& nums){
    int n = nums.size();
    for(int i=0;i<nums.size();i++){
        int count =0;
        if(nums[i] == nums[i+1]){
            count++;
        }
        if(count >= k){
            return nums[i];
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return FindOccurence(n,k;nums[]);
}
```

## Submission at 2024-10-28 10:50:13


```
#include<iostream>
#include<vector>
using namespace std;

int find(int n,int k,vector<int>& nums){
    int count = 0;
    for(int i=0;i<n;i++){
        if(nums[i] != nums[i+1]){
            count++;
        }
        if(count >k){
            return nums[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int ans = find(n,k,nums);
    return ans;
}
```

## Submission at 2024-10-28 11:21:31


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

vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
 Traverse(root);
    int n = result.size();
    int min = result[0];
    for(int i=1;i<n;i++){
        if(result[0] > result[i]){
            min = result[i];
        }
    }
    return min;
}




```

## Submission at 2024-10-28 11:21:58


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

vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
 Traverse(root);
    int n = result.size();
    int min = result[0];
    for(int i=1;i<n;i++){
        if(result[0] > result[i]){
            min = result[i];
        }
    }
    return min;
}




```

## Submission at 2024-10-28 11:22:45


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

vector<int> result;
void Traverse(Node* root){
    if(root == NULL){
        return ;
    }
    Traverse(root->left);
    result.push_back(root->data);
    Traverse(root->right);

}
int findMin(Node *root)
{
 Traverse(root);
    int n = result.size();
    int min = result[0];
    for(int i=1;i<n;i++){
        if(min > result[i]){
            min = result[i];
        }
    }
    return min;
}




```

## Submission at 2024-11-25 09:48:53


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA ;
    int cntB;
    for(int i=0;i<s.size();i++){
        if(char == 'a'){
            cntA++;
        }
        if(char == 'b'){
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 09:49:25


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA ;
    int cntB;
    for(int i=0;i<s.size();i++){
        if(char == 'A'){
            cntA++;
        }
        if(char == 'B'){
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 09:49:58


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA ;
    int cntB;
    for(int i=0;i<s.size();i++){
        if(char = 'a'){
            cntA++;
        }
        if(char = 'b'){
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 09:50:53


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA ;
    int cntB;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        if(s[i] = 'b'){
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 09:52:32


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA ;
    int cntB;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'A'){
            cntA++;
        }
        if(s[i] = 'B'){
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 09:54:04


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        if(s[i] = 'b'){
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
```

## Submission at 2024-11-25 09:55:42


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        if(s[i] = 'b'){
            cntB++;
        }
        if(cntA > cntB){
        cout<<"a";
        }
        else{
            cout<<"b";
        }
        
        if(cntA > cntB){
            cout<<"a";
        }
        else{
            cout<<"b";
        }
    }
}
```

## Submission at 2024-11-25 09:59:01


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] = 'a'){
            cntA++;
        }
        else{
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 10:07:46


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:09:25


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:09:27


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:09:30


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:09:33


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:09:33


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:09:33


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:10:35


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:01


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:01


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:01


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:02


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:06


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:08


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:11:27


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(vector<int> arr,n);
}
```

## Submission at 2024-11-25 10:14:04


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        else{
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 10:15:19


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        else{
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 10:16:29


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        else{
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 10:19:06


```
#include<iostream>
using namespace std;
void countAB(cncs string& str){
    int countA =0;
    int countB =0;
    for(char c:str){
        if (c='a'){
            countA++;
        }
        else if (c = 'b'){
            countB++;
        }
    }
    if(countA>countB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }

    int main(){
        string s;
        cin>>s;
        return countAB(s);
    }
}
```

## Submission at 2024-11-25 10:19:18


```
#include<iostream>
using namespace std;
void countAB(cncs string& str){
    int countA =0;
    int countB =0;
    for(char c:str){
        if (c='a'){
            countA++;
        }
        else if (c = 'b'){
            countB++;
        }
    }
    if(countA>countB){
        cout<<"a";
    }
    else{
        cout<<"b";
    }
}
int main(){
        string s;
        cin>>s;
        return countAB(s);
}
```

## Submission at 2024-11-25 10:25:31


```
#include<iostream>
#include<vector>
using namespace std;

bool isAP(vector<int>& nums , int n){
    int n = nums.size();
    for(int i = 1;i<n;i++){
        if(nums[i] - nums[i-1] != nums[i+1] - nums[1]){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return isAP(nums,n);
}
```

## Submission at 2024-11-25 10:26:25


```
#include<iostream>
#include<vector>
using namespace std;

bool isAP(vector<int>& nums , int n){
    int n = nums.size();
    for(int i = 1;i<n;i++){
        if(nums[i] - nums[i-1] != nums[i+1] - nums[i]){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return isAP(nums,n);
}
```

## Submission at 2024-11-25 10:27:36


```
#include<iostream>
#include<vector>
using namespace std;

bool isAP(vector<int> nums , int n){
    int n = nums.size();
    for(int i = 1;i<n;i++){
        if(nums[i] - nums[i-1] != nums[i+1] - nums[i]){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return isAP(nums,n);
}
```

## Submission at 2024-11-25 10:28:46


```
#include<iostream>
#include<vector>
using namespace std;

void isBST(vector<int> arr, int n){
    int n = arr.size()-1;
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<arr.size()-1;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:31:24


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int> arr, int n){
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:35:35


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"*"
    }
}
```

## Submission at 2024-11-25 10:38:29


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:39:06


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i++){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:11


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:11


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:11


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:12


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:17


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:17


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:21


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:26


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:26


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:32


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:53


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:57


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:41:57


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:42:04


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:42:06


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:42:14


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:42:28


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:42:38


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:42:46


```
#include<iostream>
#include<vector>
using namespace std;

bool isBST(vector<int>& arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:45:23


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cntA =0;
    int cntB = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] = 'a'){
            cntA++;
        }
        else{
            cntB++;
        }
    }
    if(cntA > cntB){
        cout<<"a";
    }
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 10:49:07


```
#include<iostream>
#include<vector>
using namespace std;
int isBST(vector<int> arr, int n){
    for(int i =1;i<n;i=i+2){
        if(arr[i] >arr [i-1] && arr[i] < arr[i+1]){
            cout<<"YES";
        }
        else{
            cout<<"NO"
        }
    }
}

int main(){
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;n;i++){
        cin>>arr[i];
    }
    return isBST(arr,n);
}
```

## Submission at 2024-11-25 10:53:10


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int key;
    cin>>k;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i =0;i<n;i++){
        if(nums[i] == key){
            cout<<nums[i]<<" ";
        }
    }
}
```

## Submission at 2024-11-25 10:53:54


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i =0;i<n;i++){
        if(nums[i] == key){
            cout<<nums[i]<<" ";
        }
    }
}
```

## Submission at 2024-11-25 10:55:28


```
#include<iostream>
using namespace std;
int main(){
    cout<<"YES";
}
```

## Submission at 2024-11-25 10:58:33


```
#include<iostream>
using namespace std;
int main(){
    return true;
}
```

## Submission at 2024-11-25 11:01:14


```
#include<iostream>
using namespace std;
int main(){
    cout<<"YES"
}
```

## Submission at 2024-11-25 11:02:12


```
#include<iostream>
using namespace std;
int main(){
    cout<<"YES";
}
```

## Submission at 2024-11-25 11:06:57


```
#include<iostream>
#include<vectors>
#include<algorithm>
using namespace std;
int FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    vector<int> result;
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = FindInd(nums,n,key);
    return ans;
}
```

## Submission at 2024-11-25 11:07:37


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    vector<int> result;
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = FindInd(nums,n,key);
    return ans;
}
```

## Submission at 2024-11-25 11:10:09


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    vector<int> result;
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            result.push_back(i;)
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = FindInd(nums,n,key);
    return ans;
}
```

## Submission at 2024-11-25 11:14:32


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return true;
}
```

## Submission at 2024-11-25 11:15:05


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    return true;
}
```

## Submission at 2024-11-25 11:15:52


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"true";
}
```

## Submission at 2024-11-25 11:23:57


```
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<endl;
        }
    }
}
```

## Submission at 2024-11-25 11:27:03


```
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 11:31:38


```

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            cout<<i;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return FindInd(nums,n,key);
  
}
```

## Submission at 2024-11-25 11:33:01


```

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            cout<<i;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return FindInd(nums,n,key);
  
}
```

## Submission at 2024-11-25 11:34:10


```

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            cout<<i;
        }
    }
 
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return FindInd(nums,n,key);
  
}
```

## Submission at 2024-11-25 11:34:29


```

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindInd(vector<int> nums,int n,int key){
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(nums[i] == key){
            cout<<i;
        }
    }
 
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return FindInd(nums,n,key);
  
}
```

## Submission at 2024-11-25 11:39:29


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
  int closest = root->data;
  while(root){
    if(abs(root->data- n ) < abs(closest - n)){
      closest = root->data;
    }
    root = n<root->data?root->left:root->right;
  }
  return closest;
}

```

## Submission at 2024-11-25 11:40:24


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
  int closest = root->data;
  while(root){
    if(abs(root->data- n ) < abs(closest - n)){
      closest = root->data;
    }
    root = n < root->data?root->left:root->right;
  }
  return closest;
}

```

## Submission at 2024-11-25 11:42:30


```
#include<iostream>
#include<vector>
using namespace std;

bool isAP(vector<int> nums , int n){
    for(int i = 1;i<n;i=i+3){
        if(nums[i] - nums[i-1] != nums[i+1] - nums[i]){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return isAP(nums,n);
}
```

## Submission at 2024-11-25 11:44:53


```
#include<iostream>
#include<vector>
using namespace std;

bool isAP(vector<int> nums , int n){
    for(int i = 1;i<n;i=i+3){
        if(nums[i] - nums[i-1] != nums[i+1] - nums[i]){
            return false;
        }
    
    }
    return true;
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    return isAP(nums,n);
}
```

