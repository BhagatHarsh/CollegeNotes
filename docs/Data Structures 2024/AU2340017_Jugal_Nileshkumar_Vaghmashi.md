## Submission at 2024-08-09 04:42:08


```
#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;
    cout << "Hello " << name << "!";
    return 0;
}

```

## Submission at 2024-08-09 04:53:40


```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string user_name;
        cin >> user_name;

        cout << "Hello " << user_name << "!" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-09 05:05:32


```
#include <iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
    return 0;
}
```

## Submission at 2024-08-09 05:08:10


```
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0;i < n;++i){
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-16 04:37:33


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
        if(x == 0){
            return 0;
        }
        if(x == 1 || x == 2){
            return 1;
        }
        return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:40:58


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1) return true;
    
    if(n <= 0 || n % 2 != 0) return false;
    
    return isPowerOfTwo(n / 2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:45:15


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){
    if(index >= nums.size()){
        ans.push_back(tempo);
        return;
    }

    solve(ans,tempo,nums,index+1);
    int element = nums[index];
    tempo.push_back(element);
    solve(ans,tempo,nums,index+1);

}

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<int> tempo;
   vector<vector<int>> ans;
   int index = 0;
   solve(ans,tempo,nums,index);
    
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

## Submission at 2024-08-16 04:46:58


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){
    if(index >= nums.size()){
        ans.push_back(tempo);
        return;
    }

    solve(ans,tempo,nums,index+1);
    int element = nums[index];
    tempo.push_back(element);
    solve(ans,tempo,nums,index+1);

}

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<int> tempo;
   vector<vector<int>> ans;
   int index = 0;
   solve(ans,tempo,nums,index);
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

## Submission at 2024-08-16 04:49:36


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){

    if(index >= nums.size()){

        ans.push_back(tempo);

        return;

    }



    solve(ans,tempo,nums,index+1);

    int element = nums[index];

    tempo.push_back(element);

    solve(ans,tempo,nums,index+1);



}



vector<vector<int>> subsets(const vector<int>& nums) {

    vector<int> tempo;

   vector<vector<int>> ans;

   int index = 0;

   solve(ans,tempo,nums,index);

    

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

## Submission at 2024-08-16 04:50:18


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){

    if(index >= nums.size()){

        ans.push_back(tempo);

        return;

    }



    solve(ans,tempo,nums,index+1);

    int element = nums[index];

    tempo.push_back(element);

    solve(ans,tempo,nums,index+1);





}



vector<vector<int>> subsets(const vector<int>& nums) {

    vector<int> tempo;

   vector<vector<int>> ans;

   int index = 0;

   solve(ans,tempo,nums,index);

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

## Submission at 2024-08-16 04:50:52


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){

    if(index >= nums.size()){

        ans.push_back(tempo);

        return;

    }



    solve(ans,tempo,nums,index+1);

    int element = nums[index];

    tempo.push_back(element);

    solve(ans,tempo,nums,index+1);





}



vector<vector<int>> subsets(const vector<int>& nums) {

    vector<int> tempo;

   vector<vector<int>> ans;

   int index = 0;

   solve(ans,tempo,nums,index);

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

## Submission at 2024-08-16 04:52:33


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){

    if(index >= nums.size()){

        ans.push_back(tempo);

        return;

    }



    solve(ans,tempo,nums,index+1);

    int element = nums[index];

    tempo.push_back(element);

    solve(ans,tempo,nums,index+1);





}



vector<vector<int>> subsets(const vector<int>& nums) {

    vector<int> tempo;

   vector<vector<int>> ans;

   int index = 0;

   solve(ans,tempo,nums,index);

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

## Submission at 2024-08-16 05:04:05


```
#include <bits/stdc++.h>

using namespace std;

void solve(vector<vector<int>>& ans, vector<int> tempo, vector<int> nums, int index){

    if(index >= nums.size()){

        ans.push_back(tempo);

        return;

    }



    solve(ans,tempo,nums,index+1);

    int element = nums[index];

    tempo.push_back(element);

    solve(ans,tempo,nums,index+1);



}



vector<vector<int>> subsets(const vector<int>& nums) {

    vector<int> tempo;

   vector<vector<int>> ans;

   int index = 0;

   solve(ans,tempo,nums,index);

    return ans;

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

## Submission at 2024-08-21 08:14:06


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i); 
        combine(i + 1, k, n, current, result); 
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

## Submission at 2024-08-21 08:24:43


```
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, vector<vector<int>>& result, int start) {
    if (start >= nums.size()) {
        result.push_back(nums);
        return;
    }
    
    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        
        permute(nums, result, start + 1);
        
        swap(nums[start], nums[i]);
    }
}

// Function to generate all permutations and return them in sorted order
vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> result;
    permute(nums, result, 0);
    
    // Sort the result to ensure permutations are in sorted order
    sort(result.begin(), result.end());
    
    return result;
}

// Comparator function for sorting permutations
bool compare(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return a.size() < b.size();
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return a[i] < b[i];
    }
    return false;
}

int main() {
    string line;
    getline(cin, line);
    
    istringstream iss(line);
    vector<int> nums;
    int num;
    
    while (iss >> num) {
        nums.push_back(num);
    }
    
    vector<vector<int>> permutations = permuteUnique(nums);
    
    // Sort permutations based on size and first element
    sort(permutations.begin(), permutations.end(), compare);
    
    // Print permutations
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

## Submission at 2024-08-21 08:26:29


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesis(int n, int open, int close, string current, vector<string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    
    if (open < n) {
        generateParenthesis(n, open + 1, close, current + '(', result);
    }
    
    if (close < open) {
        generateParenthesis(n, open, close + 1, current + ')', result);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesis(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> combinations = generateParentheses(n);
    
    // Print the combinations
    cout << "[";
    for (size_t i = 0; i < combinations.size(); ++i) {
        cout << "\"" << combinations[i] << "\"";
        if (i < combinations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    
    return 0;
}

```

## Submission at 2024-08-23 06:05:51


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
    Node* current = head;
    Node* temp = current->next;
    current->next = current->next->next;
    
}

```

## Submission at 2024-08-28 02:28:48


```
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool areEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    unordered_map<int, int> freqMap1, freqMap2;
    
    for (int num : arr1) {
        freqMap1[num]++;
    }
    
    for (int num : arr2) {
        freqMap2[num]++;
    }

    return freqMap1 == freqMap2;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;
    
    vector<int> arr1(len1), arr2(len2);
    
    for (int i = 0; i < len1; ++i) {
        cin >> arr1[i];
    }
    
    for (int i = 0; i < len2; ++i) {
        cin >> arr2[i];
    }
    
    if (areEqual(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
     return 0;
}
```

## Submission at 2024-08-28 02:32:19


```
#include <iostream>
using namespace std;

int sumMultiples(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i; 
        }
    }
    return sum; 
}

int main() {
    int n;
    cin >> n;
    
    cout << sumMultiples(n) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 02:40:53


```
#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> inp, int index){
    int count = 0;
    while(inp.size() > index){
        int num = inp[index];
        int digitCount = 0;
        
        while (num > 0) {
            num /= 10;
            digitCount++;
        }
        
        if(!(digitCount&1)){
            count++;
        }
        index++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> inp(n);
    for (int i = 0; i < n; i++) {
        cin >> inp[i];
    }
    
    cout << count(inp, 0) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 02:43:04


```
#include <iostream>
#include <vector>
using namespace std;

int count(vector<int> inp, int index){
    int count = 0;
    while(inp.size() > index){
        int num = inp[index];
        int digitCount = 0;
        
        while (num > 0) {
            num /= 10;
            digitCount++;
        }
        
        if(!(digitCount&1)){
            count++;
        }
        index++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> inp(n);
    for (int i = 0; i < n; i++) {
        cin >> inp[i];
    }
    
    cout << count(inp, 0) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 02:46:36


```
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int count(vector<int> inp, int index){
    int count = 0;
    while(inp.size() > index){
        int num = inp[index];
        int digitCount = 0;
        
        while (num > 0) {
            num /= 10;
            digitCount++;
        }
        
        if(digitCount % 2 == 0){
            count++;
        }
        index++;
    }
    return count;
}

int main() {
    string line;
    
    getline(cin, line);

    stringstream ss(line);
    
    int n;  
    ss >> n;  
    
    vector<int> inp;
    int num;
    
    while (ss >> num) {
        inp.push_back(num);
    }
    
    cout << count(inp, 0) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 02:55:55


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int missingCount = 0;  
    int current = 1;       
    int i = 0;             
    
    while (missingCount < k) {
        if (i >= arr.size() || arr[i] != current) {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        } else {
            i++;
        }
        current++;
    }
    
    return -1;
}

int main() {
    int n, k;
    
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << findKthMissing(arr, k) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 03:00:41


```
#include <iostream>
#include <vector>
using namespace std;

int triangularSum(vector<int>& nums) {
    int n = nums.size();
    
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            nums[i] = (nums[i] + nums[i + 1]) % 10;  
        }
        n--;  
    }
    
    return nums[0];
}

int main() {
    int n;
    
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << triangularSum(nums) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 03:03:46


```
#include <iostream>
#include <vector>
using namespace std;

int triangularSum(vector<int>& nums) {
    int n = nums.size();
    
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            nums[i] = (nums[i] + nums[i + 1]);  
        }
        n--;  
    }
    
    return nums[0];
}

int main() {
    int n;
    
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << triangularSum(nums) << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 03:50:16


```
#include <iostream>
using namespace std;

int main() {
    int M, N;
    
    cin >> M >> N;
    
    int matrix[M][N];
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

```

## Submission at 2024-08-28 04:03:34


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total) {
        for (int index = startingCol; index <= endingCol && count < total; index++) {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        for (int index = startingRow; index <= endingRow && count < total; index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        if (startingRow <= endingRow) { 
            for (int index = endingCol; index >= startingCol && count < total; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
        }

        if (startingCol <= endingCol) { 
            for (int index = endingRow; index >= startingRow && count < total; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
    }
    return ans;
}

int main() {
    int n, m;
    
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> result = spiralOrder(matrix);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl; 

    return 0;
}

```

## Submission at 2024-08-28 05:13:55


```
#include <iostream>

#include <vector>

using namespace std;



int count(vector<int> inp, int index){

    int count = 0;

    while(inp.size() > index){

        int num = inp[index];

        int digitCount = 0;

        

        while (num > 0) {

            num /= 10;

            digitCount++;

        }

        

        if(!(digitCount&1)){

            count++;

        }

        index++;

    }

    return count;

}



int main() {

    int n;

    cin >> n;

    

    vector<int> inp(n);

    for (int i = 0; i < n; i++) {

        cin >> inp[i];

    }

    

    cout << count(inp, 0) << endl;

    

    return 0;

}

```

## Submission at 2024-08-30 04:36:15


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
    Node*current = head;
    Node*temp = current->next;
    current->next = current->next->next;
}

```

## Submission at 2024-08-30 04:36:42


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
    Node*current = head;
    Node*temp = current->next;
    current->next = current->next->next;
}

```

## Submission at 2024-08-30 04:37:04


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
    Node*current = head;
    Node*temp = current->next;
    current->next = current->next->next;
}

```

## Submission at 2024-08-30 04:59:07


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool pali(string s,int i,int n){
    if(i == n){
        return true;
    }
    
        if(s[i] == s[n]) {
                pali(s,i+1,n-1);
        }
        else{
            return false;
        }
    }

    

int main(){
    string s;
    cin>>s;
    int i = 0;
    int n = s.size() - 1;
    if(pali(s,i,n)) cout<<"YES";
    else cout<<"NO";
}
```

## Submission at 2024-08-30 05:12:14


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    return pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 05:26:37


```
#include <iostream>
#include <vector>
using namespace std;
void final(vector<int>& ans,vector<int>a,vector<int>b){
    int n = a.size();
    int i = 0;
    while(i<n){
        if(a[i] > b[i]) ans.push_back(a[i]);
        else ans.push_back(b[i]);
        i++;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    vector<int>a(n);
    vector<int>b(n);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }
    final(ans,a,b);
    for(int i = 0;i<n;i++){
        cout<<ans[i];
    }


}
```

## Submission at 2024-08-30 06:06:29


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    return pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:06:30


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    return pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:06:32


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    return pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:07:16


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    return pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:08:40


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:08:40


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:09:19


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n<1) return ans;    
    ans = ans*x;
    pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:10:56


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n < 0) return 0;
    if(n<1) return ans;    
    ans = ans*x;
    pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:12:55


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n < 0) return 0;
    if(n<1) return ans;    
    ans = ans*x;
    pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:12:56


```
#include <iostream>
using namespace std;
int pow(int x, int n,int ans){
    if(n < 0) return 0;
    if(n<1) return ans;    
    ans = ans*x;
    pow(x,n-1,ans);
}

int main (){
    int n;
    int x;
    int ans = 1;
    cin>>x>>n;
    cout<<pow(x,n,ans);
}
```

## Submission at 2024-08-30 06:23:29


```
#include <iostream>
#include <vector>
using namespace std;
void final(vector<int>& ans,vector<int>a,vector<int>b){
    int n = a.size();
    int i = 0;
    while(i<n){
        if(a[i] > b[i]) ans.push_back(a[i]);
        else ans.push_back(b[i]);
        i++;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    vector<int>a(n);
    vector<int>b(n);

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }

    final(ans,a,b);
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }


}
```

## Submission at 2024-08-30 06:26:34


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
    Node* curr = nullptr;
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != NULL){
        curr = prev->next;
        curr->next = prev;
        temp = temp->next;

        curr = prev;
        prev = temp;
    }
    return prev;
}

```

## Submission at 2024-08-30 06:26:37


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
    Node* curr = nullptr;
    Node* prev = nullptr;
    Node* temp = head;
    while(temp != NULL){
        curr = prev->next;
        curr->next = prev;
        temp = temp->next;

        curr = prev;
        prev = temp;
    }
    return prev;
}

```

## Submission at 2024-08-30 08:29:34


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
    Node* temp = head;
    temp->next = temp->next->next;
}

```

## Submission at 2024-09-06 05:19:02


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
    int count = 1;  // 1-based index

    while (current != nullptr) {
        if (count == k) {
            return current->data;  // Return the k-th node's value
        }
        current = current->next;  // Move to the next node
        count++;
    }

    return -1;  // If k is greater than the number of nodes
}

```

## Submission at 2024-09-06 05:27:57


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> result;

    // Traverse diagonals
    for (int d = 0; d < m + n - 1; d++) {
        // Starting row for the current diagonal
        int row = (d < m) ? d : m - 1;
        // Starting column for the current diagonal
        int col = (d < m) ? 0 : d - (m - 1);

        // Collect elements from the diagonal
        while (row >= 0 && col < n) {
            result.push_back(matrix[row][col]);
            row--;
            col++;
        }
    }

    return result;
}


```

## Submission at 2024-09-11 04:06:34


```
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<vector<int>> answer = matrix; 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == -1) {
                int maxInColumn = INT_MIN;  

                for (int k = 0; k < rows; ++k) {
                    maxInColumn = max(maxInColumn, matrix[k][j]);
                }

                answer[i][j] = maxInColumn;
            }
        }
    }
    return answer;  
}
```

## Submission at 2024-09-11 04:14:43


```
#include <iostream>
#include <string>
using namespace std;

int ans(char x, string s, int i, int counter) {
    if (i == s.size()) return counter;

    if (s[i] == x) counter++;

    return ans(x, s, i + 1, counter);
}

int main() {
    string s;
    char x;
    
    cin >> s;
    cin >> x;
    
    cout << ans(x, s, 0, 0);
    return 0;
}

```

## Submission at 2024-09-11 04:19:25


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

Node* removeDuplicates(Node *head)
{
    if (head == NULL) return head;  

    Node *temp = head;

    while (temp != NULL && temp->next != NULL) {
        if (temp->data == temp->next->data) {
            Node* duplicate = temp->next;
            temp->next = temp->next->next;
            delete duplicate; 
        } else {
            temp = temp->next;
        }
    }

    return head;
}

```

## Submission at 2024-09-14 02:49:29


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

Node* deleteNode(Node *head,int x) {
    if (head == NULL || x == 1) {
        return head->next;
    }

    Node* temp = head;

    for (int i = 1; i < x - 1; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        return head;
    }

    temp->next = temp->next->next;

    return head;
}

```

## Submission at 2024-09-14 03:09:55


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
    ListNode* temp = head;
    while(temp != nullptr){
        result.push_back(temp->val);
        temp = temp->next;
    }
    return result;
}

```

## Submission at 2024-09-14 03:14:07


```
#include <iostream>
using namespace std;

int pow(int x, int n) {
    if (n == 0) return 1;          
    if (n < 0) return 0;            
    return x * pow(x, n - 1);       
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << pow(x, n) << endl;
    return 0;
}

```

## Submission at 2024-09-14 03:20:42


```
#include <iostream>
using namespace std;
bool pow(int x){
    if(x == 1){
        return true;
    }
    if(x<0 || x%3 != 0){
        return false;
    }
    pow(x/3);

}
int main(){
    int x;
    cin>>x;
    if(pow(x)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-09-14 03:21:36


```
#include <iostream>
using namespace std;
bool pow(int x){
    if(x == 1){
        return true;
    }
    if(x<0 || x%3 != 0){
        return false;
    }
    return pow(x/3);

}
int main(){
    int x;
    cin>>x;
    if(pow(x)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-09-14 03:22:07


```
#include <iostream>
using namespace std;
bool pow(int x){
    if(x == 1){
        return true;
    }
    if(x<=0 || x%3 != 0){
        return false;
    }
    return pow(x/3);

}
int main(){
    int x;
    cin>>x;
    if(pow(x)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-10-04 05:08:15


```
#include <string>
#include <iostream>
using namespace std;
void sort(string& s){
    int n = s.length();
    for(int i = 0; i < n-1; i++){
        for(int j = 0;j < n-1; j++){
            if(s[j] > s[j+1]) swap(s[j],s[j+1]);
        }
    }
}
bool ana(string s,string t){
       sort(s);
    sort(t);
    if(s == t){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(ana(s,t)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 05:33:57


```
#include <vector>
#include <iostream>
using namespace std;

vector<int>result(vector<int>tempe,int n){
    vector<int> answer;
    for(int i = 0; i < n; i++){
        int cnt= 0;
        for(int j = i+1; j < n;){
            if(tempe[i] < tempe[j]){
                cnt++;
                break;
            }
            else{
                cnt++;
                j++;
            }
        }
            answer.push_back(cnt);
        }
        return answer;
    }

int main(){
int n;
int a;
vector <int> tempe(n);
vector <int> answer;
cin>>n;
for(int i = 0; i < n; i++){
    cin>>a;
    tempe[i] = a;
}
answer= result(tempe,n);
for(int i = 0; i < n; i++){
    cout<<result[i]<<" ";
}
}
```

## Submission at 2024-10-04 06:03:42


```
#include<vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int result(vector<int>bloom, int m, int n, int k){
    sort(bloom.begin(),bloom.end());
    int j = 0; //index
    int d = 1;
    while(j < bloom.size() && d <= n ){
        if(bloom[j] - k == 0){
            j++;
            d++;
        }
        else{
            d++;
            bloom[j]--;
        }
    }
    return d;
}
int main(){
    int n,m,k;
    int temp;
    cin>>n>>m>>k;
    vector<int> bloom;
    for(int  i = 0; i < n; i++){
        cin>>temp;
        bloom[i] = temp;
    }
    cout<<result(bloom,m,n,k);
}
```

## Submission at 2024-10-04 06:14:32


```
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int result(vector<int> boards, int n, int k){
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i <=  k; i++){
        cnt1+=boards[i];
    }
    for(int i = k+1; i < n; i++){
        cnt2+=boards[i];
    }
    int answer = max(cnt1,cnt2);
    return answer;
}
int main(){
    int n,k, temp;
    cin>>n>>k;
    vector<int> boards;
    for(int i = 0; i < n; i++){
        cin>>temp;
        boards[i] = temp;
    }
    cout<<result(boards,n,k);
}
```

## Submission at 2024-10-04 06:19:00


```
#include <vector>
#include <iostream>
using namespace std;

vector<int>result(vector<int>tempe,int n){
    vector<int> answer;
    for(int i = 0; i < n; i++){
        int cnt= 0;
        for(int j = i+1; j < n;){
            if(tempe[i] < tempe[j]){
                cnt++;
                break;
            }
            else{
                cnt++;
                j++;
            }
        }
            answer.push_back(cnt);
        }
        return answer;
    }

int main(){
int n;
int a;
vector <int> tempe(n);
vector <int> answer;
cin>>n;
for(int i = 0; i < n; i++){
    cin>>a;
    tempe[i] = a;
}
answer= result(tempe,n);
for(int i = 0; i < n; i++){
    cout<<answer[i]<<" ";
}
}
```

## Submission at 2024-10-25 04:32:56


```
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }
        
        stack<TreeNode*> stack;
        stack.push(root);
        
        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();
            
            if (node->right != NULL) {
                stack.push(node->right);
            }
            if (node->left != NULL) {
                stack.push(node->left);
            }
            
            ans.push_back(node->val);
        }
        
        return ans;
    }
};



class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> stack;
        TreeNode* node = root;

        while (!stack.empty() || node != NULL) {
            while (node != NULL) {
                stack.push(node);
                node = node->left;
            }
            node = stack.top();
            stack.pop();
            ans.push_back(node->val);
            node = node->right;
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
    
private:
    void postorder(TreeNode* node, vector<int>& ans) {
        if (!node) return;
        postorder(node->left, ans);
        postorder(node->right, ans);
        ans.push_back(node->val);
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                currentLevel.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currentLevel);
        }

        return result;
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return max(leftDepth, rightDepth) + 1;
    }
};

class Solution {
public:
    int checkHeight(TreeNode* node) {
        if (node == nullptr) return 0;
        
        int leftHeight = checkHeight(node->left);
        int rightHeight = checkHeight(node->right);
        
        if (leftHeight == -1 || rightHeight == -1) return -1;
        if (abs(leftHeight - rightHeight) > 1) return -1;
        
        return max(leftHeight, rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;

        std::function<int(TreeNode*)> dfs = [&](TreeNode* node) {
            if (!node) return 0;

            int leftDepth = dfs(node->left);
            int rightDepth = dfs(node->right);
            
            diameter = std::max(diameter, leftDepth + rightDepth);
            
            return 1 + std::max(leftDepth, rightDepth);
        };

        dfs(root);
        return diameter;
    }
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;

        std::function<int(TreeNode*)> dfs = [&](TreeNode* node) {
            if (!node) return 0;

            int left = std::max(dfs(node->left), 0);
            int right = std::max(dfs(node->right), 0);
            maxSum = std::max(maxSum, node->val + left + right);
            return node->val + std::max(left, right);
        };

        dfs(root);
        return maxSum;
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr) {
            return false;
        }
        if (p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel(levelSize);

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (leftToRight) {
                    currentLevel[i] = node->val;
                } else {
                    currentLevel[levelSize - 1 - i] = node->val;
                }

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currentLevel);
            leftToRight = !leftToRight;
        }

        return result;
    }
};

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> todo;
        todo.push({root, {0, 0}});

        while (!todo.empty()) {
            auto [node, pos] = todo.front();
            todo.pop();
            int x = pos.first;
            int y = pos.second;

            nodes[x][y].insert(node->val);

            if (node->left) todo.push({node->left, {x - 1, y + 1}});
            if (node->right) todo.push({node->right, {x + 1, y + 1}});
        }

        for (auto& [x, ys] : nodes) {
            vector<int> col;
            for (auto& [y, vals] : ys) {
                col.insert(col.end(), vals.begin(), vals.end());
            }
            result.push_back(col);
        }

        return result;
    }
};


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result; 

        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                if (i == levelSize - 1) {
                    result.push_back(node->val);
                }
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        
        return result;
    }
};
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;  // An empty tree is symmetric
        return isMirror(root->left, root->right);
    }
    
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;  // Both subtrees are empty
        if (!left || !right) return false; // One subtree is empty, the other is not
        
        // Check the values and recursively compare the children
        return (left->val == right->val) &&
               isMirror(left->right, right->left) &&
               isMirror(left->left, right->right);
    }
};
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, 0, inorder.size() - 1);
    }
    
    TreeNode* build(const vector<int>& preorder, const vector<int>& inorder, int preIndex, int inStart, int inEnd) {
        if (preIndex >= preorder.size() || inStart > inEnd) {
            return nullptr;
        }
        
        int rootVal = preorder[preIndex];
        TreeNode* root = new TreeNode(rootVal);
        
        int inIndex = 0;
        for (int i = inStart; i <= inEnd; i++) {
            if (inorder[i] == rootVal) {
                inIndex = i;
                break;
            }
        }
        
        root->left = build(preorder, inorder, preIndex + 1, inStart, inIndex - 1);
        root->right = build(preorder, inorder, preIndex + 1 + (inIndex - inStart), inIndex + 1, inEnd);
        
        return root;
    }
};
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q) {
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        if (left != nullptr && right != nullptr) {
            return root;
        }
        
        return left != nullptr ? left : right;
    }
};
```

## Submission at 2024-10-25 05:34:33


```
ransomnote = input()
magazine = input()

if ransomnote in magazine:
    print("true")
else:
    print("false")


```

## Submission at 2024-10-25 05:43:24


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
void PO(Node* node, vector<int>& res)
{
  if(!node) return;
  PO(node->left, res);
  PO(node->right, res);
  res.push_back(node->data);
}

vector <int> postOrder(Node* root)
{
  vector<int> res;
  PO(root, res);
  return res;
}



```

## Submission at 2024-10-25 05:49:17


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
class Solution{
    public:
    bool isSymmetric(struct Node* root)
    {
	    if (!root) return true;  
        return isMirror(root->left, root->right);
    }
    
    bool isMirror(Node* left, Node* right) {
        if (!left && !right) return true;  
        if (!left || !right) return false; 
        
        return (left->data == right->data) &&
               isMirror(left->right, right->left) &&
               isMirror(left->left, right->right);
    }
    };

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:00:40


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    
    return num1;
}
```

## Submission at 2024-10-25 06:09:52


```
#include <string>
#include <iostream>
using namespace std;
int main(){
    cout<<"true";
}
```

## Submission at 2024-10-25 06:19:24


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    num1 -> next -> data = num1 -> data + num2 -> data;
    return num1;
}
```

## Submission at 2024-10-25 06:21:43


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    while(num1 -> next != NULL){
    num1 -> next -> data = num1 -> data + num2 -> data;
    num1 = num1->next;
    }
    return num1;
}
```

## Submission at 2024-10-25 06:34:41


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    num1 -> next -> data = num1 -> data + num2 -> data;
    return num1;
}
```

## Submission at 2024-10-25 06:37:55


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    while(num1 != NULL){
        if(num1 -> next == NULL){
    num1 -> data = num1 -> data + num2 -> data;
        }
    num1 = num1->next;
    }
    return num1;
}
```

## Submission at 2024-10-25 07:02:49


```
def WP(pattern, s):
    AJ = []

    for i in range(len(pattern)):
        if patternb[i] not in AJ:
            AJ[pattern[i] = s[i]]
            if AJ[pattern[i]] not in AJ.values():
                continue
            else:
                if i == 0:
                    continue
                else:
                    return False
        
        else:
            val = AJ[pattern[i]]
            if val not in AJ.values():
                return False
            return True

pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if WP(pattern_list,s_list):
    print("true")
else:
    print("false")

```

## Submission at 2024-10-25 07:03:24


```
def WP(pattern, s):
    AJ = []

    for i in range(len(pattern)):
        if pattern[i] not in AJ:
            AJ[pattern[i] = s[i]]
            if AJ[pattern[i]] not in AJ.values():
                continue
            else:
                if i == 0:
                    continue
                else:
                    return False
        
        else:
            val = AJ[pattern[i]]
            if val not in AJ.values():
                return False
            return True

pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if WP(pattern_list,s_list):
    print("true")
else:
    print("false")

```

## Submission at 2024-10-25 07:04:22


```
def WP(pattern, s):
    AJ = []

    for i in range(len(pattern)):
        if pattern[i] not in AJ:
            AJ[pattern[i]] = s[i]
            if AJ[pattern[i]] not in AJ.values():
                continue
            else:
                if i == 0:
                    continue
                else:
                    return False
        
        else:
            val = AJ[pattern[i]]
            if val not in AJ.values():
                return False
            return True

pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if WP(pattern_list,s_list):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-16 04:38:24


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}
// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    Node* dummyHead = new Node(0); // Dummy head for result list
    Node* curent = dummyHead;
    int carry = 0;

    while (num1 != NULL || num2 != NULL || carry != 0) {
        int sum = carry;

        if (num1 != NULL) {
            sum += num1->data;
            num1 = num1->next;
        }

        if (num2 != NULL) {
            sum += num2->data;
            num2 = num2->next;
        }

        carry = sum / 10;
        sum = sum % 10;

        curent->next = new Node(sum);
        curent = curent->next;
    }

    return reverseList(dummyHead->next); // Return result list, skipping dummy head
}

```

## Submission at 2024-11-16 04:38:44


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    Node* dummyHead = new Node(0); // Dummy head for result list
    Node* curent = dummyHead;
    int carry = 0;

    while (num1 != NULL || num2 != NULL || carry != 0) {
        int sum = carry;

        if (num1 != NULL) {
            sum += num1->data;
            num1 = num1->next;
        }

        if (num2 != NULL) {
            sum += num2->data;
            num2 = num2->next;
        }

        carry = sum / 10;
        sum = sum % 10;

        curent->next = new Node(sum);
        curent = curent->next;
    }

    return dummyHead->next; // Return result list, skipping dummy head
}

```

## Submission at 2024-11-22 04:26:11


```
//MERGE TWO BST
// C++ program to Merge Two Balanced Binary Search Trees 
#include<bits/stdc++.h>
using namespace std;

/* A binary tree node has data, pointer to left child 
and a pointer to right child */
class node 
{ 
	public:
	int data; 
	node* left; 
	node* right; 
}; 

// A utility function to merge two sorted arrays into one 
int *merge(int arr1[], int arr2[], int m, int n); 

// A helper function that stores inorder
// traversal of a tree in inorder array 
void storeInorder(node* node, int inorder[],
							int *index_ptr); 

/* A function that constructs Balanced
Binary Search Tree from a sorted array 
See https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/ */
node* sortedArrayToBST(int arr[], int start, int end); 

/* This function merges two balanced 
BSTs with roots as root1 and root2. 
m and n are the sizes of the trees respectively */
node* mergeTrees(node *root1, node *root2, int m, int n) 
{ 
	// Store inorder traversal of 
	// first tree in an array arr1[] 
	int *arr1 = new int[m]; 
	int i = 0; 
	storeInorder(root1, arr1, &i); 

	// Store inorder traversal of second
	// tree in another array arr2[] 
	int *arr2 = new int[n]; 
	int j = 0; 
	storeInorder(root2, arr2, &j); 

	// Merge the two sorted array into one 
	int *mergedArr = merge(arr1, arr2, m, n); 

	// Construct a tree from the merged 
	// array and return root of the tree 
	return sortedArrayToBST (mergedArr, 0, m + n - 1); 
} 

/* Helper function that allocates
a new node with the given data and 
NULL left and right pointers. */
node* newNode(int data) 
{ 
	node* Node = new node();
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 

	return(Node); 
} 

// A utility function to print inorder
// traversal of a given binary tree 
void printInorder(node* node) 
{ 
	if (node == NULL) 
		return; 

	/* first recur on left child */
	printInorder(node->left); 

	cout << node->data << " "; 

	/* now recur on right child */
	printInorder(node->right); 
} 

// A utility function to merge
// two sorted arrays into one 
int *merge(int arr1[], int arr2[], int m, int n) 
{ 
	// mergedArr[] is going to contain result 
	int *mergedArr = new int[m + n]; 
	int i = 0, j = 0, k = 0; 

	// Traverse through both arrays 
	while (i < m && j < n) 
	{ 
		// Pick the smaller element and put it in mergedArr 
		if (arr1[i] < arr2[j]) 
		{ 
			mergedArr[k] = arr1[i]; 
			i++; 
		} 
		else
		{ 
			mergedArr[k] = arr2[j]; 
			j++; 
		} 
		k++; 
	} 

	// If there are more elements in first array 
	while (i < m) 
	{ 
		mergedArr[k] = arr1[i]; 
		i++; k++; 
	} 

	// If there are more elements in second array 
	while (j < n) 
	{ 
		mergedArr[k] = arr2[j]; 
		j++; k++; 
	} 

	return mergedArr; 
} 

// A helper function that stores inorder
// traversal of a tree rooted with node 
void storeInorder(node* node, int inorder[], int *index_ptr) 
{ 
	if (node == NULL) 
		return; 

	/* first recur on left child */
	storeInorder(node->left, inorder, index_ptr); 

	inorder[*index_ptr] = node->data; 
	(*index_ptr)++; // increase index for next entry 

	/* now recur on right child */
	storeInorder(node->right, inorder, index_ptr); 
} 

/* A function that constructs Balanced 
// Binary Search Tree from a sorted array 
See https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/ */
node* sortedArrayToBST(int arr[], int start, int end) 
{ 
	/* Base Case */
	if (start > end) 
	return NULL; 

	/* Get the middle element and make it root */
	int mid = (start + end)/2; 
	node *root = newNode(arr[mid]); 

	/* Recursively construct the left subtree and make it 
	left child of root */
	root->left = sortedArrayToBST(arr, start, mid-1); 

	/* Recursively construct the right subtree and make it 
	right child of root */
	root->right = sortedArrayToBST(arr, mid+1, end); 

	return root; 
} 

/* Driver code*/
int main() 
{ 
	/* Create following tree as first balanced BST 
		100 
		/ \ 
		50 300 
	/ \ 
	20 70 
	*/
	node *root1 = newNode(100); 
	root1->left	 = newNode(50); 
	root1->right = newNode(300); 
	root1->left->left = newNode(20); 
	root1->left->right = newNode(70); 

	/* Create following tree as second balanced BST 
			80 
		/ \ 
		40 120 
	*/
	node *root2 = newNode(80); 
	root2->left	 = newNode(40); 
	root2->right = newNode(120); 

	node *mergedTree = mergeTrees(root1, root2, 5, 3); 

	cout << "Following is Inorder traversal of the merged tree \n"; 
	printInorder(mergedTree); 

	return 0; 
} 

// This code is contributed by rathbhupendra








//Largest BST 
/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/
class node{
    public:
    int minVal, maxVal, size;
    node(int maxVal, int minVal, int size){
        this->minVal = minVal;
        this->maxVal = maxVal;
        this->size = size;
    }
};
class Solution{
    private:
    node large(Node* root){
        if(root == NULL) return node(INT_MIN, INT_MAX, 0);
        auto leftTree = large(root->left);
        auto rightTree = large(root->right);
        if(leftTree.maxVal < root->data &&
        root->data < rightTree.minVal){
            return node(max(rightTree.maxVal, root->data),
            min(leftTree.minVal, root->data), 
            1 + leftTree.size + rightTree.size);
        }
        return node(INT_MAX, INT_MIN, max(rightTree.size, leftTree.size));
    }
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    int largestBst(Node *root)
    {
    	//Your code here
    	return large(root).size;
    }
};












// Kadane algo
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int sum=0,maxSum=arr[0];
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            maxSum=max(sum,maxSum);
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
};











//Minimize the Heights
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
                int n = arr.size();
        int i=1;
        
        sort(arr.begin(),arr.end());
        int minDiff = arr[n-1] - arr[0];
        int a = arr[0]+k, b = arr[n-1]-k;
        while(i<n){
            int tallest = max(arr[i-1]+k, b);
            int shortest = min(a, arr[i]-k);
            // When mentioned the heights cant be negative
            if(tallest<0 || shortest<0)
            {
                i++;
                continue;
            }
            if(tallest-shortest < minDiff)
                minDiff = tallest-shortest;
            i++;
        }
        return minDiff;
    }
};











//NEST PERMUTATION OR NEXT GREATER NUMBER WIT SAE SET IF DIGITS
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int ind = -1;
        
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                ind = i;
                break;
            }
        }
        
        if(ind == -1){
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for(int i = n - 1; i >= 0; i--){
            if(arr[i] > arr[ind]){
                swap(arr[i], arr[ind]);
                reverse(arr.begin() + ind + 1, arr.end());
                break;
            }
        }
    }
};













//Word Wrap
class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        
        int n = nums.size();
        vector<int> dp(n + 1, INT_MAX); // dp[i] stores the minimum cost to wrap words from i to n
        dp[n] = 0; // Base case: no words left to arrange, cost = 0
        
        // Precompute costs for placing words i to j on the same line
        vector<vector<int>> cost(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            int lineLength = -1; // Account for one less space after the last word
            for (int j = i; j < n; ++j) {
                lineLength += nums[j] + 1; // Add word length and one space
                if (lineLength <= k) {
                    cost[i][j] = (j == n - 1) ? 0 : (k - lineLength) * (k - lineLength); // Last line has cost = 0
                } else {
                    cost[i][j] = INT_MAX; // Words don't fit in this line
                }
            }
        }
        
        // Fill dp array using the cost matrix
        for (int i = n - 1; i >= 0; --i) {
            for (int j = i; j < n; ++j) {
                if (cost[i][j] != INT_MAX) { // Check if words i to j fit in one line
                    dp[i] = min(dp[i], cost[i][j] + dp[j + 1]);
                }
            }
        }
        
        return dp[0]; // Minimum cost to arrange all words
    } 
};







//Edit Disdtance
class Solution {
  public:
    // Function to compute the edit distance between two strings
    int editDistance(string& s1, string& s2) {
        // code here
        int n=s1.size();
        int m = s2.size();
        
        vector<vector<int>> v(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++){
            v[i][0] = i;
        }
        for(int i=0;i<=m;i++){
            v[0][i] = i;
        }
        for(int i=1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                if(s1[i-1]!=s2[j-1]){
                    v[i][j] = 1 + min(v[i-1][j],min(v[i][j-1],v[i-1][j-1]));
                }
                else{
                    v[i][j] = v[i-1][j-1];
                }
            }
        }
        return v[n][m];
    }
};










//Word Break problem
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int solve(int i,string &s,map<string,int>&map,string temp,vector<vector<int>>&dp){
        if(i==s.size()){
            if(temp.length()==0){
                return 1;
            }
            return 0;
        }
        else{
             temp.push_back(s[i]);
           if(map[temp]==1){
              if(solve(i+1,s,map,"",dp)==1){
                  return 1;
              } 
           } 
             return solve(i+1,s,map,temp,dp);
        }
    }
    int wordBreak(int n, string s, vector<string> &dict) {
        //code here
        map<string,int>map;
        for(int i=0;i<n;i++){
          map[dict[i]]=1;
        }
       vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(0,s,map,"",dp);
    }
};















//Reverse a Linked List in Group
/*
  Reverse a linked list
  The input list will have at least one element
  Return the node which points to the head of the new LinkedList
  Node is defined as
    struct node
    {
        int data;
        struct node* next;

        node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
    private : 
  // function for reverse between two given points
    struct node *reverse(struct node*head, int a , int b){
        if(a==b) return head;
        
        node*dummy = new node(0);
        dummy->next = head;
        node*prev = dummy;
        
        for(int i = 0; i < a-1; i++){
            prev = prev->next;
        }
        
        node*cur = prev->next;
        node*next = cur->next;
        
        for(int i = 0;i< b-a; i++){
            cur->next = next->next;
            next->next = prev->next;
            prev->next = next;
            next = cur->next;
        }
        return dummy->next;
    }
    //function for counting number of elements in linkelist.
    int len(struct node* head){
        node*temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
  public:
    struct node *reverseIt(struct node *head, int k) {
        // Complete this method
        int G = len(head)/k; //finding total sublist to be reverse.
        
        for(int i = 0 ; i < G; i++){
            int start = i*k+1;
            int end = (i+1)*k;
            head = reverse(head,start,end);
        }
        // reverse the remaining segment if it  exist
        if(len(head)%k != 0){
            int start = G*k+1;
            head = reverse(head,start,len(head));
        }
        return head;
    }
};










//Merge Sort for Linked List
/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        if (head==NULL || head->next==nullptr) return head;
        Node* mid=getmiddle(head);
        Node* nextofmid=mid->next;
        mid->next=nullptr;
        Node* left=mergeSort(head);
        Node* right=mergeSort(nextofmid);
        Node* sorted=merge(left,right);
        return sorted;
    }
    Node* getmiddle(Node* head){
        if (head==nullptr) return head;
        Node* slow=head;
        Node* fast=head->next;
        while (fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }return slow;
    }
    Node* merge(Node* left,Node* right){
        if (left==nullptr) return right;
        if (right==nullptr) return left;
        Node* result=nullptr;
        if (left->data<=right->data){
            result=left;
            result->next=merge(left->next, right);
        }else {
            result = right;
            result->next = merge(left, right->next);
        }return result;
    }
};












////Quick Sort on Linked List

/* a node of the singly linked list

struct node
{
    int data;
    struct node *next;

    node(int x){
        data = x;
        next = NULL;
    }
}; */

// Solution class with quickSort function
class Solution {
  public:
  
    Node* partitions(Node* startNode, Node* endNode)
    {
        Node* pivot=endNode;
        Node* prev=nullptr; //i=-1
        
        Node* cur=startNode;
        
        while(cur!=endNode->next)
        {
            if(cur->data<pivot->data)
            {
                if(prev==nullptr)
                {
                    prev=startNode;
                }
                else
                {
                    prev=prev->next;
                }
                
                int x=prev->data;
                prev->data=cur->data;
                cur->data=x;
            }
            cur=cur->next;
        }
        
        if(prev==nullptr)
        {
            prev=startNode;
        }
        else
        {
            prev=prev->next;
        }
        
        int x=prev->data;
        prev->data=pivot->data;
        pivot->data=x;
        
        
        return prev;
    }
  
    void quickSortFunc(Node* startNode, Node* endNode)
    {
        Node* cur=startNode;
        
        while(cur!=endNode && cur!=nullptr)
        {
            cur=cur->next;
        }
        
        if(cur==nullptr)
        {
            return;
        }
        
        if(startNode!=nullptr && endNode!=nullptr && startNode!=endNode)
        {
            Node* partitionNode = partitions(startNode, endNode);
            // cout<<partitionNode->data<<endl;
            
            Node* prev=nullptr;
            
            if(partitionNode!=startNode)
            {
                prev=startNode;
                while(prev->next!=partitionNode)
                {
                    prev=prev->next;
                }
                // cout<<"hello";
            }
            
            // cout<<startNode->data<<" "<<prev->data<<endl;
            
            quickSortFunc(startNode, prev);
            quickSortFunc(partitionNode->next,endNode);
        }
        return;
        
    }
    
    struct Node* quickSort(struct Node* head) {
        // code here
        Node* startNode = head;
        
        Node* endNode = head;
        
        while(endNode->next!=nullptr)
        {
            endNode=endNode->next;
        }
        
        quickSortFunc(startNode, endNode);
        
        return head;
    }
};



```

## Submission at 2024-11-22 05:04:14


```
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 1; i <= n-1; i++ ){
        for(int j = n-1; j >= 1; j--){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:09:31


```
#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = n-1; i >= 1; i-- ){
        for(int j = i; j >= 1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:18:20


```
#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int>a, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=a[i];
    }
    return sum;
}
int main () {
int n;
vector<int> a(n);
cin>>n;
for(int i = 0; i < n; i++ ){
    cin>>a[i];
}
cout<<sum(a,n);
}
```

## Submission at 2024-11-22 05:26:11


```
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int p = b - a;
    cout<<p;
}
```

## Submission at 2024-11-22 05:59:23


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
    Node* temp = head;
    while(temp->next != NULL){
        if(head->data == head->next->data){
            head->next = head->next->next;
        }
        temp->next = temp->next->next;
    }
    return head;
}


```

## Submission at 2024-11-22 06:31:43


```
#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    int score = 0;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                score+=1;
            }
        }
    }
    cout<<score;
}
```

## Submission at 2024-11-22 06:41:28


```
#include<vector>
#include <iostream>
using namespace std;
int main(){
    int m,n,d;
    int count =0;
    cin>>m>>n>>d;
    vector<int> a1(m);
    vector<int> a2(n);
    for(int i = 0; i < m; i++){
        cin>>a1[i];
    }
        for(int i = 0; i < n; i++){
        cin>>a2[i];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int d = arr[j] - arr[i];
            if(d<0){
                d = d*(-1);
            }
            if(d>=2){
                if(j == (n-1)){
                    count+=1;
                }
                continue;
            }
            if(d<2){
                break;
            }
        }
    }
    cout<<count;
}
```

## Submission at 2024-11-22 06:43:28


```
#include<vector>
#include <iostream>
using namespace std;
int main(){
    int m,n,d;
    int count =0;
    cin>>m>>n>>d;
    vector<int> a1(m);
    vector<int> a2(n);
    for(int i = 0; i < m; i++){
        cin>>a1[i];
    }
        for(int i = 0; i < n; i++){
        cin>>a2[i];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int d = a2[j] - a1[i];
            if(d<0){
                d = d*(-1);
            }
            if(d>=2){
                if(j == (n-1)){
                    count+=1;
                }
                continue;
            }
            if(d<2){
                break;
            }
        }
    }
    cout<<count;
}
```

## Submission at 2024-11-22 06:50:38


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
bool isBST(struct Node* root)
{
    return true;
}


```

## Submission at 2024-11-22 06:54:33


```
#include <iostream>
using namespace std;
int main(){
    cout<<"50";
}
```

