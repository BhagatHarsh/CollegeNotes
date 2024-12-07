## Submission at 2024-08-05 10:15:30


```
// Write your C++ code here from the scratch

#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}
```

## Submission at 2024-08-05 10:16:01


```
// Write your C++ code here from the scratch

#include <iostream>

int main() {
    std::cout << "Hello World";
    return 0;
}
```

## Submission at 2024-08-05 10:16:56


```
#include <iostream>

int main() {
    std::cout << "Hello World";
    return 0;
}
```

## Submission at 2024-08-05 10:17:50


```
#include <iostream>

int main() {
    std::cout << "Hello Kaushik!";
    return 0;
}
```

## Submission at 2024-08-05 10:26:44


```
#include <iostream>
using namespace std;

int main() {
     
    char A[10];

    cin>>A;

    cout << "Hello "<< A << "!";
    return 0;
}
```

## Submission at 2024-08-05 10:29:07


```
#include <iostream>
using namespace std;

int main() {
     
    char A[10];

    cin>>A;

    cout << "Hello "<< A << "!";
    return 0;
}
```

## Submission at 2024-08-05 10:29:43


```
#include <iostream>
using namespace std;

int main() {
     
    char A[10];

    cin>>A;

    cout << "Hello "<< A << "!";
    return 0;
}
```

## Submission at 2024-08-05 10:30:08


```
#include <iostream>
using namespace std;

int main() {
     
    char A[10];

    cin>>A;

    cout << "Hello "<< A << "!";
    return 0;
}
```

## Submission at 2024-08-05 10:45:50


```
#include <iostream>
#include <string>

int main() {
     
    int n;
    std::cin >> n;
    std::string Name;
    for(int i=0, i<n, i++) { 
    
    std::cin>>Name;
    std::cout << "Hello "<< Name << "!"<< std::endl;
    }

    return 0;
}
```

## Submission at 2024-08-05 10:48:27


```
n = int(input())

for _ in range(n):
    name = input()

    print("Hello", name + "!")
```

## Submission at 2024-08-05 10:48:50


```
n = int(input())

for _ in range(n):
    name = input()

    print("Hello", name + "!")
```

## Submission at 2024-08-12 10:04:10


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0; 
    }
    else if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int x;
    cout << "Please enter number:"<< endl;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:04:56


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0; 
    }
    else if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int x;
    cout << "Please enter number:"<< endl;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:05:32


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0; 
    }
    else if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:37:19


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return 1;
    }
    if(n<1){
        return 0;
    }
    return (n%2==0)&& isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 11:30:00


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
    vector<int> subset;
    for (int j = 0; j < n; ++j) {
    if (i & (1 << j)) {
        subset.push_back(nums[j]);
    }}
        result.push_back(subset);
    }
    return result;
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
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-12 11:32:23


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
    vector<int> subset;
    for (int j = 0; j < n; ++j) {
    if (i & (1 << j)) {
        subset.push_back(nums[j]);
    }}
        result.push_back(subset);
    }
    return result;
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
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-12 11:33:50


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    for (int i = 0; i < (1 << n); ++i) {
    vector<int> subset;
    for (int j = 0; j < n; ++j) {
    if (i & (1 << j)) {
        subset.push_back(nums[j]);
    }}
        result.push_back(subset);
    }
    return result;
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
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-16 09:20:54


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
        current.pop_back();  }
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

## Submission at 2024-08-16 10:00:35


```
#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void permute(vector<int>& arr, int start, int end, vector<vector<int>>& result) {
    if (start == end) {
        result.push_back(arr);
    } else {
        for (int i = start; i <= end; i++) {
          swap(arr[start], arr[i]);
          permute(arr, start + 1, end, result);
          swap(arr[start], arr[i]);
        }}
}

int main() {
    int n = 3;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result;
    permute(nums, 0, nums.size() - 1, result);
    cout << "[";
    for (const auto& permutation : result) {
        cout << "[";
        for (int i = 0; i < permutation.size(); i++) {
            cout << permutation[i];
            if (i < permutation.size() - 1) {
                cout << ",";}
        }
        cout << "]";
        if (&permutation != &result.back()) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-08-16 10:07:53


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

## Submission at 2024-08-16 10:35:48


```
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void permutation(vector<int>& array, int start, vector<vector<int>>& result) {
    if (start == array.size() - 1) {
        result.push_back(array);
    } else {
        for (int i = start; i < array.size(); ++i) {
        swap(array[start], array[i]);
        permutation(array, start + 1, result);
        swap(array[start], array[i]);}
    }
}

int main() {
    string input;
    cout << "Enter the elements: ";
    getline(cin, input);

    stringstream ss(input);
    vector<int> arr;
    int num;

    while (ss >> num) {
        arr.push_back(num);
    }
    vector<vector<int>> result;
    permutation(arr, 0, result);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < result.size() - 1) {
            cout << ",";}
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-08-16 11:02:44


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permutation(nums, start + 1, result);
        swap(nums[start], nums[i]);
    }
}

vector<vector<int>> permute(vector<int> nums) {
    vector<vector<int>> result;
    permutation(nums, 0, result);
    return result;
}

int main() {
    vector<int> nums;
    int num;

    cout << "Enter the element: ";
    while (cin >> num) {
        nums.push_back(num);
    }
    
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> result = permute(nums);
    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;  
    return 0;
}

```

## Submission at 2024-08-17 10:57:18


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void helper(vector<int> &nums, vector<int> &current, vector<vector<int>> &result, int f[])
{
    if (current.size() == nums.size())
    {
        result.push_back(current);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!f[i])
        {
            f[i] = 1;
            current.push_back(nums[i]);
            helper(nums, current, result, f);
            current.pop_back();
            f[i] = 0;
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
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
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

## Submission at 2024-08-17 11:01:05


```
#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void permute(vector<int>& arr, int start, int end, vector<vector<int>>& result) {
    if (start == end) {
        result.push_back(arr);
    } else {
        for (int i = start; i <= end; i++) {
          swap(arr[start], arr[i]);
          permute(arr, start + 1, end, result);
          swap(arr[start], arr[i]);
        }}
}

int main() {
    int n = 3;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result;
    permute(nums, 0, nums.size() - 1, result);
    cout << "[";
    for (const auto& permutation : result) {
        cout << "[";
        for (int i = 0; i < permutation.size(); i++) {
            cout << permutation[i];
            if (i < permutation.size() - 1) {
                cout << ",";}
        }
        cout << "]";
        if (&permutation != &result.back()) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-08-17 11:23:52


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
        if (cin.get() << '\n')
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

## Submission at 2024-08-17 11:38:38


```
#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void permute(vector<int>& arr, int start, int end, vector<vector<int>>& result) {
    if (start == end) {
        result.push_back(arr);
    } else {
        for (int i = start; i <= end; i++) {
          swap(arr[start], arr[i]);
          permute(arr, start + 1, end, result);
          swap(arr[start], arr[i]);
        }}
}

int main() {
    int n = 3;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> result;
    permute(nums, 0, nums.size() - 1, result);
    cout << "[";
    for (const auto& permutation : result) {
        cout << "[";
        for (int i = 0; i < permutation.size(); i++) {
            cout << permutation[i];
            if (i < permutation.size() - 1) {
                cout << ",";}
        }
        cout << "]";
        if (&permutation != &result.back()) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}
```

## Submission at 2024-08-17 11:55:24


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

## Submission at 2024-09-02 10:25:15


```
def traverse_linked_list(head):
    def recurse(node):
        # Base case: if the node is None, return an empty list
        if node is None:
            return []
        # Recursive case: get the list from the next node and prepend the current node's value
        return [node.val] + recurse(node.next)
    
    return recurse(head)
```

## Submission at 2024-09-06 11:55:14


```
Node* deleteNode(Node *head, int x) {
    if (head == NULL) return head;
    if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    for (int i = 1; i < x - 1 && current != NULL; i++) {
        current = current->next;
    }
    if (current == NULL || current->next == NULL) {
        return head;
    }

    Node* temp = current->next;  
    current->next = temp->next; 
    delete temp;               

    return head;
}
```

## Submission at 2024-09-09 10:01:33


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x%3==0){
    return ispowerofthree(x-1);}
    else{
    return false;}
}
int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:06:14


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 || x==1){
        return true;
    }
    else{
        return ispowerofthree(x-1);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:06:57


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 && x==1){
        return true;
    }
    else{
        return ispowerofthree(x-1);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:10:23


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x%3==0){
        return true;
    }
    else{
        return ispowerofthree(x-1);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:14:03


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 && x==1){
        return false;
    }
    else{
        return ispowerofthree(x%3);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:16:05


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 && x==1){
        return true;
    }
    else{.
        return ispowerofthree(x-1);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:16:39


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==1){
        return true;
    }
    else{.
        return ispowerofthree(x-1);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:16:59


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==1){
        return true;
    }
    else{.
        return ispowerofthree(x%3);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:17:31


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 || x==1){
        return true;
    }
    else{.
        return ispowerofthree(x%3);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:17:57


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 || x==1){
        return true;
    }
    else{.
        return ispowerofthree(x-1);
    }
}


int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:45:54


```
#include<iostream>
using namespace std;

bool ispowerofthree(int n){
    if(n==0 && n==1){
        return true;
    }else if(n%3==0){
        return ispowerofthree(n-1);
    }
    else{
        return false;
    }

return -1;
}

int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:47:32


```
#include<iostream>
using namespace std;

bool ispowerofthree(int n){
    if(n==0 && n==1){
        return ispowerofthree(n-1);
    else{
        return false;
    }

return -1;
}

int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:55:28


```
#include<iostream>
using namespace std;

bool ispowerofthree(int n){
    if(n==0 && n==1){
        return true;
    }else{
        if(n%3==0){
            return true;
        }
        else{
            return ispowerofthree(n-1);
        }
    }
}

int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 10:55:59


```
#include<iostream>
using namespace std;

bool ispowerofthree(int n){
    if(n==0 && n==1){
        return true;
    }else{
        if(n%3==0){
            return true;
        }
        else{
            return ispowerofthree(n-1);
        }
    }
}

int main(){
    int n;
    cin>>n;

    cout<<ispowerofthree(n);

}
```

## Submission at 2024-09-09 10:58:23


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x==0 && x==1){
        return true;
    }else if(x%3==0){
        return true;
    }
    else{
        return false;
    }
    }
}

int main(){
    int n;
    cin>>n;

    int r=ispowerofthree(n);
    cout<<r;
}
```

## Submission at 2024-09-09 11:06:45


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x%3==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 11:12:18


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x<=0){
        return false;
    }
    while(x%3==0){
        x++;
        return ispowerofthree(x-1);
    }
    return true;
    }

int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-09-09 11:13:56


```
#include<iostream>
using namespace std;

bool ispowerofthree(int x){
    if(x<=0){
        return false;
    }
    while(x%3==0){
        return ispowerofthree(x-1)*3;
    x++
    }
    return true;
    }

int main(){
    int n;
    cin>>n;

    ispowerofthree(n);
}
```

## Submission at 2024-10-07 10:06:49


```
#include<iostream>
#include<string.h>
using namespace std;

void mathex(String s){
    for()
}
int main(){

    String s;
    cin>>s;

    cout<<s;

    return 0;
}
```

## Submission at 2024-10-07 10:14:24


```
#include<iostream>
#include<string.h>
using namespace std;

void mathex(string s){
    int l=0;
    int h= sizeof(s);

    cout<<h;
}
int main(){

    string str;
    cin>>str;

    cout<<str;
    mathex(string str);
    return 0;
}
```

## Submission at 2024-10-07 10:31:26


```
#include<iostream>
#include<string.h>
using namespace std;

void mathex(string s){
    int l=0;
    int h=5;
    
    for(int i=0;i<h;i++){
        if(s[i]>s[h]){
            swap(s[i],s[h]);
        }
    }
}
int main(){

    string str;
    cin>>str;

    mathex(str);
    cout<<str<<endl;
    return 0;
}
```

## Submission at 2024-10-07 10:38:21


```
#include<iostream>
#include<string.h>
using namespace std;

void reverse(string s){
    int l=0;

}
int main(){

    string str;
    cin>>str;

    reverse(str);
    cout<<str<<endl;
    return 0;
}
```

## Submission at 2024-10-07 10:46:39


```
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


```

## Submission at 2024-10-07 10:49:49


```
#include<iostream>
using namespace std;

void part(int arr[],int l,int r){
    if(l)
}
int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    part(arr,N,K)
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


```

## Submission at 2024-10-07 10:52:20


```
#include<iostream>
using namespace std;

void part(int arr[],int h,int r){
    int l=0
    if(l<h){
        int m=(l+h)/2;
    }
}
int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    part(arr,N,K)
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


```

## Submission at 2024-10-07 10:53:20


```
#include<iostream>
using namespace std;

void part(int arr[],int h,int r){
    int l=0;
    if(l<h){
        int m=(l+h)/2;
    }
}
int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    part(arr,N,K);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


```

## Submission at 2024-10-07 10:57:10


```
#include<iostream>
using namespace std;

void part(int arr[],int h,int r){
    int l=0;

    cout<<h/r;
    }
int main(){
    int N;
    cin>>N;
    int K;
    cin>>K;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    part(arr,N,K);
    return 0;
}


```

## Submission at 2024-10-07 11:11:02


```
#include<iostream>
using namespace std;

class{
    public:
void robin(int arr[],int n){
}
};
int main(){
    int N;
    cin>>N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    robin(arr,N);
    return 0;
}


```

## Submission at 2024-10-07 11:14:27


```
#include<iostream>
using namespace std;

class{
    public:
void robin(int arr[],int n){
    int k;
    for(int i=0;i<n;i++){
        k=arr[i]+arr[i+1];
    }
}
};
int main(){
    int N;
    cin>>N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    robin(arr,N);
    return 0;
}


```

## Submission at 2024-10-28 10:35:14


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
public:
int findMin(Node *root)
{
    vector<int> answer;
    fun(root,answer);
    int min = answer[0];

    for(int i=0;i<answer.size();i++){
        if(min>answer[i]){
            min= answer[i];
        }
    }
    return min;
}

void fun(Node *root,vector<int> &answer){
    if(root==nullptr){
        return;
    }
    fun(root->left,answer);
    answer.push_back(root->data);
    fun(root->right,answer);
}
};
```

## Submission at 2024-10-28 10:44:13


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
class solution{
public:
int findMin(Node *root)
{
    vector<int> answer;
    order(root,answer);
    int i=0;
    for(i; i<answer.size();i++){
        if(i>answer[i]){
            i = answer[i];
        }
    }
    return i;
}

vector<int> order(Node *root,vector<int> &answer){
    fun(root,answer);
    return answer;
}

void fun(Node *root,vector<int> &answer){
    if(root==nullptr){
        return;
    }
    fun(root->left,answer);
    answer.push_back(root->data);
    fun(root->right,answer);
}
};
```

## Submission at 2024-10-28 10:45:36


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
class solution{
public:

vector<int> order(Node *root,vector<int> &answer){
    fun(root,answer);
    return answer;
}

void fun(Node *root,vector<int> &answer){
    if(root==nullptr){
        return;
    }
    fun(root->left,answer);
    answer.push_back(root->data);
    fun(root->right,answer);
}
int findMin(Node *root)
{
    vector<int> answer;
    order(root,answer);
    int i=0;
    for(i; i<answer.size();i++){
        if(i>answer[i]){
            i = answer[i];
        }
    }
    return i;
}
};
```

## Submission at 2024-10-28 10:46:28


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



void fun(Node *root,vector<int> &answer){
    if(root==nullptr){
        return;
    }
    fun(root->left,answer);
    answer.push_back(root->data);
    fun(root->right,answer);
}

vector<int> order(Node *root,vector<int> &answer){
    fun(root,answer);
    return answer;
}
int findMin(Node *root)
{
    vector<int> answer;
    order(root,answer);
    int i=0;
    for(i; i<answer.size();i++){
        if(i>answer[i]){
            i = answer[i];
        }
    }
    return i;
}
```

## Submission at 2024-10-28 10:46:55


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



void fun(Node *root,vector<int> &answer){
    if(root==nullptr){
        return;
    }
    fun(root->left,answer);
    answer.push_back(root->data);
    fun(root->right,answer);
}

vector<int> order(Node *root,vector<int> &answer){
    fun(root,answer);
    return answer;
}
int findMin(Node *root)
{
    vector<int> answer;
    order(root,answer);
    int i=0;
    for(i; i<answer.size();i++){
        if(i<answer[i]){
            i = answer[i];
        }
    }
    return i;
}
```

## Submission at 2024-10-28 10:48:53


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



void fun(Node *root,vector<int> &answer){
    if(root==nullptr){
        return;
    }
    fun(root->left,answer);
    answer.push_back(root->data);
    fun(root->right,answer);
}

vector<int> order(Node *root,vector<int> &answer){
    fun(root,answer);
    return answer;
}
int findMin(Node *root)
{
    vector<int> answer;
    order(root,answer);
    int min= answer[0];
    for(int i=0; i<answer.size();i++){
        if(min>answer[i]){
            min = answer[i];
        }
    }
    return min;
}
```

## Submission at 2024-10-28 11:23:15


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
void fun(Node* root,vector<int> &answer){
  vector<int> level;
  if(root=='N'){
    return;
  }
  level.push_back(root->data);
  fun(root->left,answer);
  level.push_back(root->data);
  fun(root->right,answer);
  level.push_back(root->data);

  answer.push_back(level);
}

vector<vector<<int>> preorder(Node* root){
    vector<vector<int>> answer;
    fun(root,answer);
    
    
}

int treePathSum(Node* root)
{
}

```

## Submission at 2024-10-28 11:27:13


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
void fun(Node* root,vector<int> &answer){
  vector<int> level;
  if(root=='N'){
    return;
  }
  level.push_back(root->data);
  fun(root->left,answer);
  level.push_back(root->data);
  fun(root->right,answer);
  level.push_back(root->data);

  answer.push_back(level);
}

vector<vector<<int>> preorder(Node* root){
    vector<vector<int>> answer;
    fun(root,answer);
    for(int i=0;i<answer.size;i++){
      answer[i][i]++;
    }
    
}

int treePathSum(Node* root)
{
  preorder(root);

}

```

## Submission at 2024-11-08 08:21:11


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
  if(root ==nullptr){
    return 0;
  }

  int lh = maxDepth(root->left);
  int rh = maxDepth(root->right);

  return max(lh,rh);
}

```

## Submission at 2024-11-08 08:22:00


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
  if(root ==nullptr){
    return 0;
  }

  int lh = maxDepth(root->left);
  int rh = maxDepth(root->right);

  return max(lh,rh)+1;
}

```

## Submission at 2024-11-08 08:35:39


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    else if(n<1 || n%2!=0){
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

## Submission at 2024-11-24 09:20:37


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x == 0 ){
        return 0;
    }
    else if(x==1){
        return 1;
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

## Submission at 2024-11-24 09:23:34


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1){
        return true;
    }
    else if(n%2!=0 || n<=0){
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

## Submission at 2024-11-25 09:58:41


```
#include<iostream>
using namespace std;

int main(){
    int k;
    cin>> k;

    for(int i = 1; i <= k; i++){
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-25 10:26:36


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    bool flag = true;
    int min = arr[0];
    for(int j = 0; j<n-1;j++){
        if(min > arr[j]){
            flag = false;
            break;
        }
    }
    if(flag == false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}
```

## Submission at 2024-11-25 10:43:40


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(k == arr[j]){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size()-1;l++){
        cout<<m[i];
    }

    return 0;
}
```

## Submission at 2024-11-25 10:46:44


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(k == arr[j]){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size()-1;l++){
        cout<<m[l];
    }
    return 0;
}
```

## Submission at 2024-11-25 10:46:57


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(k == arr[j]){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size()-1;l++){
        cout<<m[l];
    }
    return 0;
}
```

## Submission at 2024-11-25 10:47:12


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(k == arr[j]){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size()-1;l++){
        cout<<m[l];
    }
    return 0;
}
```

## Submission at 2024-11-25 10:47:13


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(k == arr[j]){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size()-1;l++){
        cout<<m[l];
    }
    return 0;
}
```

## Submission at 2024-11-25 10:50:10


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(k == arr[j]){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size();l++){
        cout<<m[l];
    }
    return 0;
}
```

## Submission at 2024-11-25 10:53:10


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int j=0;j<n;j++){
        if(arr[j] == k){
            m.push_back(j);
        }
    }

    for(int l=0;l<m.size();l++){
        cout<<m[l]<<" ";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:09:38


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min= arr[0];
    for(int v=0; v<n;v++){
        if(min >arr[v]){
            swap(arr[v],min);
        }
        else{      
            min = arr[v];
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j] == k){
            m.push_back(j);
        }
    }
    for(int l=0;l<m.size();l++){
        cout<<m[l]<<" ";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:18:01


```
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string s;

    cin>>s;
    unordered_map<char,int> mp;

    for(int i=0; i<s.size();i++){
        mp[s[i]]++;
    }
    
    int max = mp[s[0]];
    for(int j=0;j<mp.size()-1;j++){
        if(mp[s[j]] > max){
            cout<<s[j];
        }
        cout<<s[0];
    }
    return 0;
}
```

## Submission at 2024-11-25 11:30:44


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void start(Node* root,vector<int>& ans){
  if(root==nullptr){
    return;
  }
  start(root->left,ans);
  ans.push_back(root->data);
  start(root->right,ans);
}
vector<int> inorder(Node* root){
  vector<int> ans;
  start(root,ans);
  return ans;
}

int findMaxForN(Node* root, int n)
{
  vector<int> ans= inorder(root);

  sort(ans.begin(),ans.end());

  int min = ans[0];
  for(int i=0; i<ans.size()-1;i++){
    if(min<ans[i]){
      return ans[i-1];
      break;
    }
  }
  return -1;
}

```

## Submission at 2024-11-25 11:31:47


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void start(Node* root,vector<int>& ans){
  if(root==nullptr){
    return;
  }
  start(root->left,ans);
  ans.push_back(root->data);
  start(root->right,ans);
}
vector<int> inorder(Node* root){
  vector<int> ans;
  start(root,ans);
  return ans;
}

int findMaxForN(Node* root, int n)
{
  vector<int> ans= inorder(root);

  sort(ans.begin(),ans.end());

  int min = ans[0];
  for(int i=0; i<ans.size()-1;i++){
    if(n<ans[i]){
      return ans[i-1];
      break;
    }
  }
  return -1;
}

```

## Submission at 2024-11-25 11:33:52


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void start(Node* root,vector<int>& ans){
  if(root==nullptr){
    return;
  }
  start(root->left,ans);
  ans.push_back(root->data);
  start(root->right,ans);
}
vector<int> inorder(Node* root){
  vector<int> ans;
  start(root,ans);
  return ans;
}

int findMaxForN(Node* root, int n)
{
  vector<int> ans= inorder(root);

  sort(ans.begin(),ans.end());

  int min = ans[0];
  for(int i=0; i<ans.size()-1;i++){
    if(n<ans[i]){
      return ans[i-1];
    }
    else{
      return -1;
    }
  }
}

```

## Submission at 2024-11-25 11:36:23


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void start(Node* root,vector<int>& ans){
  if(root==nullptr){
    return;
  }
  start(root->left,ans);
  ans.push_back(root->data);
  start(root->right,ans);
}
vector<int> inorder(Node* root){
  vector<int> ans;
  start(root,ans);
  return ans;
}

int findMaxForN(Node* root, int n)
{
  vector<int> ans= inorder(root);

  sort(ans.begin(),ans.end());

  int min = ans[0];
  for(int i=0; i<ans.size()-1;i++){
    if(n<ans[i]){
      return ans[i-1];
    }
  }
  return -1;
}

```

## Submission at 2024-11-25 11:41:27


```
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int> arr;
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end();)
    }
    for(int j=0;j<n;j++){
        if(arr[j] == k){
            m.push_back(j);
        }
    }
    for(int l=0;l<m.size();l++){
        cout<<m[l]<<" ";
    }
    return 0;
}
```

## Submission at 2024-11-25 11:41:53


```
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int> arr;
    vector<int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    }
    for(int j=0;j<n;j++){
        if(arr[j] == k){
            m.push_back(j);
        }
    }
    for(int l=0;l<m.size();l++){
        cout<<m[l]<<" ";
    }
    return 0;
}
```

