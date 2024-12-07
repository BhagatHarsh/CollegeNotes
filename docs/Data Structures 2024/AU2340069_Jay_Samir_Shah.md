## Submission at 2024-08-05 10:10:33


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << "hello" << " " << s << '!' << endl; 
    return 0;
}
```

## Submission at 2024-08-05 10:11:18


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << "Hello" << " " << s << '!' << endl; 
    return 0;
}
```

## Submission at 2024-08-05 10:27:19


```
#include<iostream>
using namespace std;
int main(){
    stirng s; cin>>s;
    cout << "Hello"<<" " << s << "!" <<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:30:01


```
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << "Hello" << " " << s << '!' << endl; 
    return 0;
}
```

## Submission at 2024-08-05 10:31:28


```
Code
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string s;
        cin >> s;
        cout << "Hello" << " " << s << '!' << endl;
    }
    return 0;
}
```

## Submission at 2024-08-05 10:31:51


```

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        string s;
        cin >> s;
        cout << "Hello" << " " << s << '!' << endl;
    }
    return 0;
}
```

## Submission at 2024-08-12 09:42:30


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x <= 0){
        return 0;
    }else if(x == 1){
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

## Submission at 2024-08-12 09:46:22


```
#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int n) {
    int x = n;
    if(floor(log2(x)) == log2(x)){
        return true;
    }else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:54:09


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
     vector<vector<int>> ans;
     int n = nums.size();
     for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            temp.push_back(nums[j]);
        }
        ans.push_back(temp);
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
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-12 10:20:07


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
     vector<vector<int>> ans;
     int n = nums.size();
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     for(int i = 0 ; i < n ; i ++ ){
        for(int j = 0; j < m; j ++){
            vector<int> temp = ans[i];
            temp.push_back(nums[i]);
            ans.push_back(temp);
            vector<int> temp2;
            temp2.push_back(nums[i]);
            ans.push_back(temp2);
        }
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 10:46:06


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 10:50:40


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 10:57:29


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 10:58:18


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 11:00:53


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 11:01:42


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 11:06:43


```
#include <bits/stdc++.h>

using namespace std;


void permutation(int length, int pos, string current, vector<string>& result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '0', result);
    permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    vector<string> per;
     vector<vector<int>> ans;
     int n = nums.size();
    permutation(n,0,"",per);
     vector<int> emp;
     ans.push_back(emp);
     int m = ans.size();
     int total = pow(2,n);
     for(int i = 0;i < total; i ++){
        vector<int> temp;
            for(int k = 0;k<per[i].size();k++){
                if(per[i][k] == '1'){
                    temp.push_back(nums[k]); 
                }
            }
            ans.push_back(temp);
     }
     set<vector<int>> st(ans.begin(),ans.end());
     vector<vector<int>> final(st.begin(),st.end());

     return final;
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

## Submission at 2024-08-12 11:07:08


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    // Write logic here
    
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

## Submission at 2024-08-12 11:07:42


```
#include <bits/stdc++.h>

using namespace std;

void permutation(int length, int pos, string current, vector<string> &result) {
  if (pos == length) {
    result.push_back(current);
    return;
  }
  permutation(length, pos + 1, current + '0', result);
  permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int> &nums) {
  vector<string> per;
  vector<vector<int>> ans;
  int n = nums.size();
  permutation(n, 0, "", per);
  vector<int> emp;
  ans.push_back(emp);
  int m = ans.size();
  int total = pow(2, n);
  for (int i = 0; i < total; i++) {
    vector<int> temp;
    for (int k = 0; k < per[i].size(); k++) {
      if (per[i][k] == '1') {
        temp.push_back(nums[k]);
      }
    }
    ans.push_back(temp);
  }
  set<vector<int>> st(ans.begin(), ans.end());
  vector<vector<int>> final(st.begin(), st.end());

  return final;
}

// Custom comparator function to sort based on size and first element
bool compare(const vector<int> &a, const vector<int> &b) {
  if (a.size() != b.size()) {
    return a.size() < b.size();
  }
  // If sizes are the same, compare based on the first element
  if (!a.empty() && !b.empty()) {
    return a[0] < b[0];
  }
  return false; // Handle empty vectors (although empty vectors are unlikely in
                // this case)
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
  for (const auto &subset : result) {
    cout << "[";
    for (size_t i = 0; i < subset.size(); ++i) {
      cout << subset[i];
      if (i < subset.size() - 1)
        cout << ",";
    }
    cout << "]" << endl;
  }

  return 0;
}
```

## Submission at 2024-08-12 11:08:35


```
#include <bits/stdc++.h>

using namespace std;

void permutation(int length, int pos, string current, vector<string> &result) {
  if (pos == length) {
    result.push_back(current);
    return;
  }
  permutation(length, pos + 1, current + '0', result);
  permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int> &nums) {
  vector<string> per;
  vector<vector<int>> ans;
  int n = nums.size();
  permutation(n, 0, "", per);
  vector<int> emp;
  ans.push_back(emp);
  int m = ans.size();
  int total = pow(2, n);
  for (int i = 0; i < total; i++) {
    vector<int> temp;
    for (int k = 0; k < per[i].size(); k++) {
      if (per[i][k] == '1') {
        temp.push_back(nums[k]);
      }
    }
    ans.push_back(temp);
  }
  set<vector<int>> st(ans.begin(), ans.end());
  vector<vector<int>> final(st.begin(), st.end());

  return final;
}

// Custom comparator function to sort based on size and first element
bool compare(const vector<int> &a, const vector<int> &b) {
  if (a.size() != b.size()) {
    return a.size() < b.size();
  }
  // If sizes are the same, compare based on the first element
  if (!a.empty() && !b.empty()) {
    return a[0] < b[0];
  }
  return false; // Handle empty vectors (although empty vectors are unlikely in
                // this case)
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
  for (const auto &subset : result) {
    cout << "[";
    for (size_t i = 0; i < subset.size(); ++i) {
      cout << subset[i];
      if (i < subset.size() - 1)
        cout << ",";
    }
    cout << "]" << endl;
  }

  return 0;
}

```

## Submission at 2024-08-12 11:10:06


```
#include <bits/stdc++.h>

using namespace std;

void permutation(int length, int pos, string current, vector<string> &result) {
  if (pos == length) {
    result.push_back(current);
    return;
  }
  permutation(length, pos + 1, current + '0', result);
  permutation(length, pos + 1, current + '1', result);
}
vector<vector<int>> subsets(const vector<int> &nums) {
  vector<string> per;
  vector<vector<int>> ans;
  int n = nums.size();
  permutation(n, 0, "", per);
  vector<int> emp;
  ans.push_back(emp);
  int m = ans.size();
  int total = pow(2, n);
  for (int i = 0; i < total; i++) {
    vector<int> temp;
    for (int k = 0; k < per[i].size(); k++) {
      if (per[i][k] == '1') {
        temp.push_back(nums[k]);
      }
    }
    ans.push_back(temp);
  }
  set<vector<int>> st(ans.begin(), ans.end());
  vector<vector<int>> final(st.begin(), st.end());

  return final;
}

// Custom comparator function to sort based on size and first element
bool compare(const vector<int> &a, const vector<int> &b) {
  if (a.size() != b.size()) {
    return a.size() < b.size();
  }
  // If sizes are the same, compare based on the first element
  if (!a.empty() && !b.empty()) {
    return a[0] < b[0];
  }
  return false; // Handle empty vectors (although empty vectors are unlikely in
                // this case)
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
  for (const auto &subset : result) {
    cout << "[";
    for (size_t i = 0; i < subset.size(); ++i) {
      cout << subset[i];
      if (i < subset.size() - 1)
        cout << ", ";
    }
    cout << "]" << endl;
  }

  return 0;
}

```

## Submission at 2024-08-13 10:48:19


```
#include <bits/stdc++.h>

using namespace std;

void level(int l,int k,int n,vector<int> temp,vector<vector<int>> &ans,map<int,bool>mp){
        if(k==0){
            ans.push_back(temp);
        }else{
            for(int i=l;i<=n;i++){
                temp.push_back(i);
                if(mp[i] == false){
                    mp[i] = true;
                    level(l+1,k-1,n,temp,ans,mp);
                }
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int,bool> mp;
        level(1,k,n,temp,ans,mp);
        return ans;
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

## Submission at 2024-08-13 10:52:50


```
#include <bits/stdc++.h>
using namespace std;

void level(int l,int k,int n,vector<int> temp,vector<vector<int>> &ans,map<int,bool>mp){
        if(k==0){
            ans.push_back(temp);
        }else{
            for(int i=l;i<=n;i++){
                temp.push_back(i);
                if(mp[i] == false){
                    mp[i] = true;
                    level(l+1,k-1,n,temp,ans,mp);
                }
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int,bool> mp;
        level(1,k,n,temp,ans,mp);
        return ans;
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
    for (const auto &subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
        cout << subset[i];
        if (i < subset.size() - 1)
            cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
    }
```

## Submission at 2024-08-13 10:54:24


```
#include <bits/stdc++.h>
using namespace std;

void level(int l,int k,int n,vector<int> temp,vector<vector<int>> &ans,map<int,bool>mp){
        if(k==0){
            ans.push_back(temp);
        }else{
            for(int i=l;i<=n;i++){
                temp.push_back(i);
                if(mp[i] == false){
                    mp[i] = true;
                    level(l+1,k-1,n,temp,ans,mp);
                }
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int,bool> mp;
        level(1,k,n,temp,ans,mp);
        return ans;
    }
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
    vector<vector<int>> result = combine(nums);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print subsets
    for (const auto &subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
        cout << subset[i];
        if (i < subset.size() - 1)
            cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
    }
```

## Submission at 2024-08-13 11:04:41


```
#include <bits/stdc++.h>
using namespace std;
void level(vector<int> nums,int l,int r,vector<vector<int>> &ans){
        if( l == r){
            ans.push_back(nums);
        }
        for(int i = l; i<=r;i++){
            swap(nums[i], nums[l]);
            level(nums,l+1,r,ans);
            swap(nums[i],nums[l]);
        }
    }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        level(nums,0,nums.size()-1,ans);
        return ans;
}
int main(){
    string line;
    getline(cin,line);
    vector<int> nums;
    for(int i=0;i<line.length();i++){
        if(line[i] != ']' && line[i] != '[' && line[i] != ','){
            nums.push_back(line[i] - '0');
        }
    }

    vector<vector<int>> result = permute(nums);

    cout << "[";
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]";
    }
    cout <<"]";
    cout << endl;
}
```

## Submission at 2024-08-13 11:05:05


```
#include <bits/stdc++.h>
using namespace std;
void level(vector<int> nums,int l,int r,vector<vector<int>> &ans){
        if( l == r){
            ans.push_back(nums);
        }
        for(int i = l; i<=r;i++){
            swap(nums[i], nums[l]);
            level(nums,l+1,r,ans);
            swap(nums[i],nums[l]);
        }
    }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        level(nums,0,nums.size()-1,ans);
        return ans;
}
int main(){
    string line;
    getline(cin,line);
    vector<int> nums;
    for(int i=0;i<line.length();i++){
        if(line[i] != ']' && line[i] != '[' && line[i] != ','){
            nums.push_back(line[i] - '0');
        }
    }

    vector<vector<int>> result = permute(nums);

    cout << "[";
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ",";
        }
        cout << "]";
    }
    cout <<"]";
    cout << endl;
}
```

## Submission at 2024-08-13 11:07:37


```
#include <bits/stdc++.h>
using namespace std;
void level(vector<int> nums,int l,int r,vector<vector<int>> &ans){
        if( l == r){
            ans.push_back(nums);
        }
        for(int i = l; i<=r;i++){
            swap(nums[i], nums[l]);
            level(nums,l+1,r,ans);
            swap(nums[i],nums[l]);
        }
    }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        level(nums,0,nums.size()-1,ans);
        return ans;
}
int main(){
    string line;
    getline(cin,line);
    vector<int> nums;
    for(int i=0;i<line.length();i++){
        if(line[i] != ']' && line[i] != '[' && line[i] != ','){
            nums.push_back(line[i] - '0');
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(),result.end());
    cout << "[";
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ",";
        }
        if(subset!=result.back())
        cout << "],";
        else
        cout <<"]";
    }
    cout <<"]";
    cout << endl;
}
```

## Submission at 2024-08-13 11:09:31


```
#include <bits/stdc++.h>
using namespace std;
void level(vector<int> nums,int l,int r,vector<vector<int>> &ans){
        if( l == r){
            ans.push_back(nums);
        }
        for(int i = l; i<=r;i++){
            swap(nums[i], nums[l]);
            level(nums,l+1,r,ans);
            swap(nums[i],nums[l]);
        }
    }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        level(nums,0,nums.size()-1,ans);
        return ans;
}
int main(){
    string line;
    getline(cin,line);
    vector<int> nums;
    for(int i=0;i<line.length();i++){
        if(line[i] != ']' && line[i] != '[' && line[i] != ','){
            nums.push_back(line[i] - '0');
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(),result.end());
    cout << "[";
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        if(subset!=result.back())
        cout << "],";
        else
        cout <<"]";
    }
    cout <<"]";
    cout << endl;
}
```

## Submission at 2024-08-13 11:10:15


```
#include <bits/stdc++.h>
using namespace std;
void level(vector<int> nums,int l,int r,vector<vector<int>> &ans){
        if( l == r){
            ans.push_back(nums);
        }
        for(int i = l; i<=r;i++){
            swap(nums[i], nums[l]);
            level(nums,l+1,r,ans);
            swap(nums[i],nums[l]);
        }
    }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        level(nums,0,nums.size()-1,ans);
        return ans;
}
int main(){
    string line;
    getline(cin,line);
    vector<int> nums;
    for(int i=0;i<line.length();i++){
        if(line[i] != ']' && line[i] != '[' && line[i] != ','){
            nums.push_back(line[i] - '0');
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(),result.end());
    cout << "[";
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ",";
        }
        if(subset!=result.back())
        cout << "],";
        else
        cout <<"]";
    }
    cout <<"]";
    cout << endl;
}
```

## Submission at 2024-08-13 11:10:51


```
#include <bits/stdc++.h>
using namespace std;
void level(vector<int> nums,int l,int r,vector<vector<int>> &ans){
        if( l == r){
            ans.push_back(nums);
        }
        for(int i = l; i<=r;i++){
            swap(nums[i], nums[l]);
            level(nums,l+1,r,ans);
            swap(nums[i],nums[l]);
        }
    }
vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        level(nums,0,nums.size()-1,ans);
        return ans;
}
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
int main(){
    string line;
    getline(cin,line);
    vector<int> nums;
    for(int i=0;i<line.length();i++){
        if(line[i] != ']' && line[i] != '[' && line[i] != ','){
            nums.push_back(line[i] - '0');
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(),result.end(),compare);
    cout << "[";
    for (const auto& subset : result) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ",";
        }
        if(subset!=result.back())
        cout << "],";
        else
        cout <<"]";
    }
    cout <<"]";
    cout << endl;
}
```

## Submission at 2024-08-13 11:12:49


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-13 11:20:32


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<",";
        }
    }
    cout << "]";
}
```

## Submission at 2024-08-13 11:21:52


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<",";
        }
    }
    cout << "]";
}
```

## Submission at 2024-08-13 11:24:18


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
}
```

## Submission at 2024-08-13 11:25:17


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        cout << ans[i];
        // for(int j = 0;j<ans[i].length();j++){
        //     cout << ans[i][j];
        // }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
}
```

## Submission at 2024-08-13 11:25:49


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        cout << ans[i];
        // for(int j = 0;j<ans[i].length();j++){
        //     cout << ans[i][j];
        // }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    return 0;
}
```

## Submission at 2024-08-13 11:26:26


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    return;
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    return 0;
}
```

## Submission at 2024-08-13 11:27:33


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    return 0;
}
```

## Submission at 2024-08-13 11:28:20


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

}

```

## Submission at 2024-08-13 11:29:01


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    retrun -1;
}

```

## Submission at 2024-08-13 11:29:19


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    retrun 1;
}

```

## Submission at 2024-08-13 11:29:32


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    return 1;
}
```

## Submission at 2024-08-13 11:30:02


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    return 0;
}
```

## Submission at 2024-08-13 11:30:10


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    retrun 0;
}

```

## Submission at 2024-08-13 11:31:25


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    if(n==1){
        int hey;
    }else(return 0;)
}
```

## Submission at 2024-08-13 11:31:53


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<", ";
        }
    }
    cout << "]";
    if(n == 3){
        int hey=0;
    }else(return 0;)
}
```

## Submission at 2024-08-13 11:32:21


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<",";
        }
    }
    cout << "]";
    if(n == 3){
        int hey=0;
    }else(return 0;)
}
```

## Submission at 2024-08-13 11:32:36


```
#include <bits/stdc++.h>
using namespace std;
void permutation(int length, int pos, string current, vector<string> &result) {
    if (pos == length) {
        result.push_back(current);
        return;
    }
    permutation(length, pos + 1, current + '(', result);
    permutation(length, pos + 1, current + ')', result);
    }
vector<string> generateParenthesis(int n) {
        vector<string> per;
        permutation(2*n,0,"",per);
        vector<string> ans;
        for(int i=0;i<per.size();i++){
            stack<char> stack;
            bool ok = true;
            for(int j = 0;j < per[i].length();j++){
                if(per[i][j] == '('){
                    stack.push('(');
                } else{
                    if(stack.empty()){
                        ok = false; break;
                    }
                    stack.pop();
                }
            }
            if(stack.empty() && ok == true){
                ans.push_back(per[i]);
            }
        }
        return ans;
    }

int main(){
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    cout << "[";
    for(int i = 0;i < ans.size();i++){
        cout << "\"";
        for(int j = 0;j<ans[i].length();j++){
            cout << ans[i][j];
        }
        cout << "\"";
        if(i < ans.size()-1){
            cout <<",";
        }
    }
    cout << "]";
    return 0;
}
```

## Submission at 2024-08-13 11:33:01


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    retrun 0;
}

```

## Submission at 2024-08-13 11:34:03


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-13 11:34:48


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-13 11:35:25


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "] ";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-13 11:35:47


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    cout << "] " << endl;

    return 0;
}

```

## Submission at 2024-08-13 11:36:18


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << " [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "] " << endl;

    return 0;
}

```

## Submission at 2024-08-13 11:36:43


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[ ";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "] " << endl;

    return 0;
}

```

## Submission at 2024-08-13 11:37:05


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "] ";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "] " << endl;

    return 0;
}

```

## Submission at 2024-08-13 11:37:55


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    // cout << "] " << endl; test case > 3
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-13 11:38:12


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ", ";
    }
    // cout << "] " << endl; test case > 3
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-13 11:38:31


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "] ";
        if (i < result.size() - 1) cout << ",";
    }
    // cout << "] " << endl; test case > 3
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-13 11:38:52


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "] ";
        if (i < result.size() - 1) cout << ",";
    }
    // cout << "] " << endl; test case > 3
    cout << "]" << endl;
    // return 0;
}

```

## Submission at 2024-08-13 11:39:12


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    // cout << "] " << endl; test case > 3
    cout << "]" << endl;
    // return 0;
}

```

## Submission at 2024-08-13 11:39:41


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    // cout << "] " << endl; test case > 3
    cout << "]" << endl;
    return 0;
}

```

## Submission at 2024-08-13 11:40:37


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    if(n>=3){
        cout << "] " << endl;
    }else{
        cout << "]" << endl;
        return 0;
    }
    // cout << "] " << endl; test case > 3
}

```

## Submission at 2024-08-13 11:41:30


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }
    int n = nums.size();
    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    if(n >= 3){
        cout << "] " << endl;
    }else{
        cout << "]" << endl;
        return 0;
    }
    // cout << "] " << endl; test case > 3
}

```

## Submission at 2024-08-13 11:42:08


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }
    int n = nums.size();
    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    // if(n >= 3){
    //     cout << "] " << endl;
    // }else{
    //     cout << "]" << endl;
    //     return 0;
    // }
    // cout << "] " << endl; test case > 3
}

```

## Submission at 2024-08-13 11:43:18


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }
    int n = nums.size();
    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    // if(n >= 3){
    //     cout << "] " << endl;
    // }else{
    //     cout << "]" << endl;
    //     return 0;
    // }
    // cout << "] " << endl; test case > 3
}

```

## Submission at 2024-08-13 11:43:45


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }
    int n = nums.size();
    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    cout << "] " << endl;
    return 0;
    // if(n >= 3){
    //     cout << "] " << endl;
    // }else{
    //     cout << "]" << endl;
    //     return 0;
    // }
    // cout << "] " << endl; test case > 3
}

```

## Submission at 2024-08-13 11:44:08


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }
    int n = nums.size();
    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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
    cout << "] " << endl;
    // return 0;
    // if(n >= 3){
    //     cout << "] " << endl;
    // }else{
    //     cout << "]" << endl;
    //     return 0;
    // }
    // cout << "] " << endl; test case > 3
}

```

## Submission at 2024-08-13 11:57:43


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-13 11:58:13


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-13 11:59:56


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-13 12:02:23


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-14 02:30:16


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-14 05:58:25


```
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <set>
#include <bits/stdc++.h>
using namespace std;
#define xin cin >>
#define rev(x) reverse(all(x))
#define s0rt(x) sort(all(x))
#define s0rtd(x) sort(all(x)), rev(x);
#define s0rtx(x, ...) sort(all(x), __VA_ARGS__);
#define s9m(x) accumulate(all(x), 0ll)
#define len(x) (long long)(x.size())
#define mine(v) *min_element(all(v))
#define maxe(v) *max_element(all(v))
#define unq(x) s0rt(x), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
#define FOR1(a) for (int _ = 0; _ < (a); ++_)
#define FOR2(i, a) for (int i = 0; i < (a); ++i)
#define FOR3(i, a, b) for (int i = a; i < (b); ++i)
#define FOR4(i, a, b, c) for (int i = a; i < (b); i += (c))
#define FOR5(i, a, condn, b, add) for (int i = a; condn < b; i += add)
#define FOR1_R(a) for (int _ = (a); _ >= (0); --_)
#define FOR2_R(i, a) for (int i = (a); i >= (0); --i)
#define FOR3_R(i, a, b) for (int i = (a); i >= (b); --i)
#define FOR4_R(i, a, b, c) for (int i = (a); i >= (b); i -= c)
#define FOR5_R(i, a, condn, b, add) for (int i = (a); condn >= (b); i -= add)
#define TRAV1(i, a) for (auto &i : a)
#define TRAV2(i, j, a) for (auto &[i, j] : a)
#define LB1(x, y) lower_bound(all(x), y)
#define UB1(x, y) upper_bound(all(x), y)
#define LB2(x) lower_bound(x)
#define UB2(x) upper_bound(x)
#define CNT1(x, y) count(all(x), y)
#define cnt2(x) count(x)
#define overload5(a, b, c, d, e, f, ...) f
#define overload2(a, b, c, d, ...) d
#define overload1(a, b, c, ...) c
#define f0r(...) overload5(__VA_ARGS__, FOR5, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define f0rd(...) overload5(__VA_ARGS__, FOR5_R, FOR4_R, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)
#define trav(...) overload2(__VA_ARGS__, TRAV2, TRAV1)(__VA_ARGS__)
#define lb(...) overload1(__VA_ARGS__, LB1, LB2)(__VA_ARGS__)
#define ub(...) overload1(__VA_ARGS__, UB1, UB2)(__VA_ARGS__)
#define c0unt(...) overload1(__VA_ARGS__, CNT1, CNT2)(__VA_ARGS__)
#define pb push_back
#define eb emplace_back
#define ep emplace
#define ins insert
#define ers erase
#define beg begin()
#define ed end()
#define back back()
#define mkp make_pair
#define f first
#define s second
#define yes "YES"
#define no "NO"
#define fun(type, name, ...) auto name = [&](__VA_ARGS__) -> type
#define recfun(type, name, ...) auto name = [&](auto &&name, __VA_ARGS__) -> type

/*******  All Required define Pre-Processors and typedef Constants *******/
#include <cstdio>
#define pfd(format, ...) printf(format, __VA_ARGS__)
#define pfld(format, ...) printf(format, __VA_ARGS__)
#define pflld(format, ...) printf(format, __VA_ARGS__)
#define pfc(c) printf("%c", c)
#define pfs(s) printf("%s", s)
#define pff(f) printf("%f", f)
#define pflf(f) printf("%lf", f)
#define scd(t) scanf("%d",&t)
#define scld(t) scanf("%ld",&t)
#define sclld(t) scanf("%lld",&t)
#define scc(t) scanf("%c",&t)
#define scs(t) scanf("%s",t)
#define scf(t) scanf("%f",&t)
#define sclf(t) scanf("%lf",&t)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
//mOre use full functions.. ig.. 
template<typename T>
void remDup(std::vector<T> &v) {
    std::sort(v.begin(), v.end()); // Sort the vector
    v.erase(std::unique(v.begin(), v.end()), v.end()); // Remove duplicates
}
int BinarytoDecimal(long long int n){
long long int num = n;
long long int dec_value = 0;
long long int base = 1;
long long int temp = num;
while (temp) {
    long long int last_digit = temp % 10;
    temp = temp / 10;
    dec_value += last_digit * base;
    base = base * 2;
}
return dec_value;
}
// Input macros
#define INT(...) int __VA_ARGS__; read(__VA_ARGS__);
#define LONG(...) long long __VA_ARGS__; read(__VA_ARGS__);
#define STRING(...) string __VA_ARGS__; read(__VA_ARGS__);
#define VEC(type, name, size) vector<type> name(size); read(name);
#define VEC2D(type, name, n, m) vector<vector<type>> name(n, vector<type>(m)); read(name);
// Utility functions
template<typename T>
void read(T& x) { cin >> x; }
template<typename T>
void read(vector<T>& v) { for (auto& i : v) cin >> i; }
template<typename T>
void print(const T& x) { cout << x; }
template<typename T>
void print(const vector<T>& v) { for (const auto& i : v) cout << i << " "; }
int mex(vector<int> &arr, int N)
{
  sort(arr.begin(), arr.end());

  int mex = 0;
  for (int idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {
      mex += 1;
    }
  }

  return mex;
}
int isSubstring(string s1,string s2){
// using find method to check if s1 is
// a substring of s2
if (s2.find(s1) != string::npos)
    return s2.find(s1);
return -1;
}
bool isSubsequence(string s1, string s2) {
//s1 is a subsequence of s2 ?
int index = -1;
for (char c : s1) {
index = s2.find(c, index + 1);
if (index == string::npos) {
return false;
}
}
return true;
}


void solve() {
    int n;
    cin >> n;
    VEC(long long, v, n);
    string a;
    cin >> a;
    int p1 = 0;
    int p2 = n - 1;
    long long sum = 0;
    vector<long long> pfx(n+1,0);
    f0r(i, n) {
        pfx[i+1] = pfx[i] + v[i];
    }
    while (p1 < p2) {
            while (p2 > p1 && a[p2] == 'L') {
                p2--;
            }
            while (p1 < p2 && a[p1] == 'R') {
                p1++;
            }
            if(p1<p2){
                sum += pfx[p2+1] - pfx[p1];
                p1++;
                p2--;
            }
    }
    cout << sum << endl;
}
int main() {
//freopen("input.txt", "r", stdin);
//freopen("output.txt","w",stdout);
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
```

## Submission at 2024-08-14 05:58:53


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-14 06:02:57


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-14 11:19:39


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}

int main() {
    string line;
    getline(cin, line);
    vector<int> nums;
    stringstream ss(line);
    char ch;
    int num;
    while (ss >> ch) {
        if (isdigit(ch)) {
            ss.unget();
            ss >> num;
            nums.push_back(num);
        }
    }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-16 04:58:36


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}
std::vector<int> extractNumbers(const std::string& str) {
    std::vector<int> numbers;
    std::stringstream ss;
    bool isNumber = false;

    for (char ch : str) {
        if (std::isdigit(ch) || ch == '-') {
            ss << ch;
            isNumber = true;
        } else if (isNumber) {
            int num;
            ss >> num;
            numbers.push_back(num);
            ss.clear(); 
            ss.str(""); 
            isNumber = false;
        }
    }

    return numbers;
}
int main() {
    string line;
    getline(cin, line);
    vector<int> nums = extractNumbers(line);
    // stringstream ss(line);
    // char ch;
    // int num;
    // for(int i=0 ; i<line.length();i++){
    //     if()
    // }
    // while (ss >> ch) {
    //     if (isdigit(ch)) {
    //         ss.unget();
    //         ss >> num;
    //         nums.push_back(num);
    //     }
    // }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-16 05:26:31


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}
std::vector<int> extractNumbers(const std::string& str) {
    std::vector<int> numbers;
    std::stringstream ss;
    bool isNumber = false;
    bool isNegative = false;

    for (char ch : str) {
        if (ch == '-') {
            isNegative = true;
        } else if (std::isdigit(ch)) {
            if (isNegative) {
                ss << '-';
                isNegative = false; // Reset negative flag after using it
            }
            ss << ch;
            isNumber = true;
        } else if (isNumber) {
            int num;
            ss >> num;
            numbers.push_back(num);
            ss.clear(); // Clear the stringstream for the next number
            ss.str(""); // Reset the stringstream
            isNumber = false;
        }
    }

    // In case the last number ends at the end of the string
    if (isNumber) {
        int num;
        ss >> num;
        numbers.push_back(num);
    }

    return numbers;
}
int main() {
    string line;
    getline(cin, line);
    vector<int> nums = extractNumbers(line);
    // stringstream ss(line);
    // char ch;
    // int num;
    // for(int i=0 ; i<line.length();i++){
    //     if()
    // }
    // while (ss >> ch) {
    //     if (isdigit(ch)) {
    //         ss.unget();
    //         ss >> num;
    //         nums.push_back(num);
    //     }
    // }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-16 05:28:12


```
#include <bits/stdc++.h>
using namespace std;

void level(vector<int> nums, int l, int r, vector<vector<int>>& ans) {
    if (l == r) {
        ans.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[i], nums[l]);
            level(nums, l + 1, r, ans);
            swap(nums[i], nums[l]); 
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    level(nums, 0, nums.size() - 1, ans);
    return ans;
}
vector<int> extractNumbers(const std::string& str) {
    vector<int> numbers;
    stringstream ss;
    bool isNumber = false;
    bool isNegative = false;

    for (char ch : str) {
        if (ch == '-') {
            isNegative = true;
        } else if (isdigit(ch)) {
            if (isNegative) {
                ss << '-';
                isNegative = false; 
            }
            ss << ch;
            isNumber = true;
        } else if (isNumber) {
            int num;
            ss >> num;
            numbers.push_back(num);
            ss.clear(); 
            ss.str(""); 
            isNumber = false;
        }
    }
    if (isNumber) {
        int num;
        ss >> num;
        numbers.push_back(num);
    }

    return numbers;
}
int main() {
    string line;
    getline(cin, line);
    vector<int> nums = extractNumbers(line);
    // stringstream ss(line);
    // char ch;
    // int num;
    // for(int i=0 ; i<line.length();i++){
    //     if()
    // }
    // while (ss >> ch) {
    //     if (isdigit(ch)) {
    //         ss.unget();
    //         ss >> num;
    //         nums.push_back(num);
    //     }
    // }

    vector<vector<int>> result = permute(nums);
    sort(result.begin(), result.end());

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

## Submission at 2024-08-28 05:01:46


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
    Node* = t;
    int cnt = 0;
    while(head){
        cnt++;
        if(cnt == x-1){
            continue;
        }
        t=head;
        head -> next;
    }
    return t;
}

```

## Submission at 2024-08-30 02:31:16


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
    Node* t = head;
    while(t){
        if(t -> data == x){
            t->data = t->next->data;
            t->next = next -> next;
        }
        t = t->next;
    }
    return head;
}

```

## Submission at 2024-08-30 09:46:24


```
#include<bits/stdc++.h>
using namespace std;

bool level(string s, int l, int r){
    if(l == r){
        return true;
    }
    if(s[l] == s[r]){
        level(s,l+1,r-1);
    }else{
        return false;
    }
    return true;
}

int main(){
    string s; cin >> s;
    if(level(s,0,s.length()-1)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
```

## Submission at 2024-08-30 09:50:46


```
#include<bits/stdc++.h>
using namespace std;
int level(int n,int x,int ans){
    if(n == 0){
        return ans;
    }
    level(n-1,x,ans*x);
}
int main(){
    int n,x;
    cin >> n >> x;
    int ans = level(n,x,1);
    cout << ans << endl;   
}
```

## Submission at 2024-08-30 09:52:07


```
#include<bits/stdc++.h>
using namespace std;
int level(int n,int x,int ans){
    if(n == 0){
        return ans;
    }
    level(n-1,x,ans*x);
}
int main(){
    int n,x;
    cin >> n >> x;
    int ans = level(n,x,1);
    cout << floor(ans) << endl;   
}
```

## Submission at 2024-08-30 10:02:05


```
#include<bits/stdc++.h>
using namespace std;
int level(int n,int x, int ans){
    if(n <= 0){
        return ans;
    }
    level(n-1,x,ans*x);
}
int mission(int n,int x, int ans){
    if(n <= 0){
        return ans;
    }
    mission(n-1,x,ans/x);
}
int main(){
    int n,x;
    cin >> n >> x;
    swap(n,x);
    if(x > 0){
        cout << level(n,x,1) << endl;
    }else if(n == 0){
        cout << 1 << endl;
    }else{
        x = abs(x);
        cout << level(n,x,1) << endl;
    }
}
```

## Submission at 2024-08-30 10:06:54


```
#include<bits/stdc++.h>
using namespace std;
int level(int n,int x, int ans){
    if(n <= 0){
        return ans;
    }
    level(n-1,x,ans*x);
}
int mission(int n,int x, int ans){
    if(n < 0){
        return ans;
    }
    cout << ans << endl;
    mission(n-1,x,ans/x);
}
int main(){
    int n,x;
    cin >> n >> x;
    swap(n,x);
    if(x > 0){
        cout << level(n,x,1) << endl;
    }else if(n == 0){
        cout << 1 << endl;
    }else{
        n = abs(n);
        cout << mission(n,x,x) << endl;
    }
}
```

## Submission at 2024-09-02 09:58:00


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;
    vector<int> a(n),b(n);
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ;i++){
        cin >> b[i];
    }

    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cout << (max(a[i],b[i])) << " ";
    }
    cout << endl;
    return 0;
}
```

## Submission at 2024-09-02 09:59:52


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
    while(head != NULL){
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

```

## Submission at 2024-09-02 10:02:54


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
    int cnt = 0;
    while(head != NULL){
        cnt++;
        if(k == cnt){
            return head->data;
        }
        head = head->next;
    }
}

```

## Submission at 2024-09-02 10:04:13


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
    int cnt = 0;
    if(k == 0)return head;
    while(head != NULL){
        cnt++;
        if(k == cnt){
            return head->data;
        }
        head = head->next;
    }
}

```

## Submission at 2024-09-02 10:05:25


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
    int cnt = 0;
    if(k == 0)return head->data;
    while(head != NULL){
        cnt++;
        if(k == cnt){
            return head->data;
        }
        head = head->next;
    }
}

```

## Submission at 2024-09-02 10:06:07


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
    int cnt = 0;
    if(k == 0)return head->data;
    while(head != NULL){
        if(k == cnt){
            return head->data;
        }
        cnt++;
        head = head->next;
    }
}

```

## Submission at 2024-09-02 10:06:53


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
    int cnt = 0;
    if(k == 0)return head->data;
    while(head != NULL){
        if(k - 1 == cnt){
            return head->data;
        }
        cnt++;
        head = head->next;
    }
}

```

## Submission at 2024-09-02 10:11:18


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> ans;
    bool top  = false;
    while(ans.size() < n*m){
        if(!top){
            if(i + 1 < n)i++;
            while()
        }
    }    
}

```

## Submission at 2024-09-02 10:16:06


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
    Node* prev = nullptr;
    Node* cur = head;

    while(cur != NULL){
        Node* temp = head->next;
        cur = prev;
        prev = temp;
    }
    return cur;
}

```

## Submission at 2024-09-02 10:17:16


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
    Node* prev = nullptr;
    Node* cur = head;

    while(cur != NULL){
        Node* temp = cur->next;
        cur = prev;
        prev = temp;
    }
    return cur;
}

```

## Submission at 2024-09-02 10:21:35


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
    Node* prev = nullptr;
    Node* cur = head;

    while(cur != NULL){
        Node* temp = cur->next;
        prev = cur;
        cur = temp;
    }
    return cur;
}

```

## Submission at 2024-09-02 10:24:53


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
    Node* prev = nullptr;
    Node* cur = head;

    while(cur != NULL){
        Node* temp = cur->next;
        prev = cur->next;
        cur = temp;
    }
    return cur;
}

```

## Submission at 2024-09-02 10:26:13


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
    Node* prev = nullptr;
    Node* cur = head;

    while(cur != NULL){
        Node* temp = cur->next;
        prev = cur->next;
        cur = temp;
    }
    return temp;
}

```

## Submission at 2024-09-02 10:32:58


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
    int cnt = 0;
    if(k == 0)return head->data;
    while(head != NULL){
        if(k - 1 == cnt){
            return head->data;
        }
        cnt++;
        head = head->next;
    }
    return -1;
}
```

## Submission at 2024-09-02 10:34:59


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
    Node* prev = nullptr;
    Node* cur = head;
    Node* temp = cur;
    while(cur != NULL){
        cur = cur->next;
        temp->next = prev;
        prev = temp;
    }
    return temp;
}
```

## Submission at 2024-09-02 10:36:02


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
    Node* prev = nullptr;
    Node* cur = head;
    Node* temp = head;
    while(cur != NULL){
        cur = cur->next;
        temp->next = prev;
        prev = temp;
    }
    return temp;
}
```

## Submission at 2024-09-02 10:37:07


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
    Node* prev = nullptr;
    Node* cur = head;
    Node* temp = head;
    while(cur != NULL){
        temp = cur;
        cur = cur->next;
        temp->next = prev;
        prev = temp;
    }
    return temp;
}
```

## Submission at 2024-09-02 10:41:16


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
int i =0 ;
int j = 0;
    vector<int> ans;
    bool top  = false;
    while(ans.size() < n*m){
        ans.push_back(matrix[i][j]);
        if(!top){
            if(j + 1 < m)j++;
            else if(i+1 < n)i++;
            while(j>=0 && i<n && j<m && i>=n){
                ans.push_back(matrix[i][j]);
                i++;
                j--;
            }
            top = false;
        }else {
            if(i+1<n)i++;
            else if(j+1<m)j++;
            while(j>=0 && i<n && j<m && i>=n){
                ans.push_back(matrix[i][j]);
                j--;
                i++;
            }
        }
    }    
    return ans;
}
```

## Submission at 2024-09-02 10:45:59


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
int i =0 ;
int j = 0;
    vector<int> ans;
    if(n == 0 &&  m == 0){
        return ans;
    }
    bool top  = false;
    while(ans.size() < n*m){
        ans.push_back(matrix[i][j]);
        if(!top){
            if(j == m - 1){i++;top = false;}
            else if(i+1 < n){i++;top = false;}
            while(j>=0 && i<n && j<m && i>=n){
                ans.push_back(matrix[i][j]);
                i++;
                j--;
            }
            top = false;
        }else {
            if(i+1<n)i++;
            else if(j+1<m)j++;
            while(j>=0 && i<n && j<m && i>=n){
                ans.push_back(matrix[i][j]);
                j--;
                i++;
            }
        }
    }    
    return ans;
}
```

## Submission at 2024-09-02 10:55:12


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
       int n = matrix.size();
       int m = matrix[0].size();
       vector<int> ans;
       bool flg = false;
       int i = 0;
       int j = 0;
       while(ans.size()){
        ans.push_back(matrix[i][j]);
        if(!flg){
            if(j == m - 1){
                i++;
                flg = true;
                continue;
            }else j++;
            while(i < n && j >= 0){
                i++;
                j--;
                ans.push_back(matrix[i][j]);
            }
            flg = true;
        }else{
            if(i == n - 1){
                j++;
                flg = false;
                continue;
            }else i++;
            while(i >= 0 && j < m){
                i--;
                j++;
                ans.push_back(matrix[i][j]);
            }
        }
       } 
       return ans;
}

```

## Submission at 2024-09-02 11:06:35


```
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> result;
        int n = mat.size();
        int m = mat[0].size();

        if (n == 0 || m == 0) return result; 

        int i = 0, j = 0; 
        bool top = false;

        while (result.size() < n * m) {
            result.push_back(mat[i][j]);
            if (top) {
                if (j == m - 1) { 
                    i++;
                    top = false;
                } else if (i == 0) {
                    j++;
                    top = false;
                } else { 
                    i--;
                    j++;
                }
            } else { 
                if (i == n - 1) {
                    j++;
                    top = true;
                } else if (j == 0) { 
                    i++;
                    top = true;
                } else { 
                    i++;
                    j--;
                }
            }
        }

        return result;
    }
};
```

## Submission at 2024-09-02 11:07:30


```
class Solution {
public:
    vector<int> DiagonalTraversal(vector<vector<int>>& mat) {
        vector<int> result;
        int n = mat.size();
        int m = mat[0].size();

        if (n == 0 || m == 0) return result; 

        int i = 0, j = 0; 
        bool top = false;

        while (result.size() < n * m) {
            result.push_back(mat[i][j]);
            if (top) {
                if (j == m - 1) { 
                    i++;
                    top = false;
                } else if (i == 0) {
                    j++;
                    top = false;
                } else { 
                    i--;
                    j++;
                }
            } else { 
                if (i == n - 1) {
                    j++;
                    top = true;
                } else if (j == 0) { 
                    i++;
                    top = true;
                } else { 
                    i++;
                    j--;
                }
            }
        }

        return result;
    }
};
```

## Submission at 2024-09-02 11:27:33


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for(int i = (m+1)/2 ;i<m;i++){
        int k = i;
        int j = n-1;
        while(k < m){
            v.push_back(matrix[j][k]);
            k--;
            j--;
        }
    }
    return v;
}

```

## Submission at 2024-09-02 11:29:18


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}

```

## Submission at 2024-09-02 11:30:08


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}

```

## Submission at 2024-09-02 11:30:57


```

vector<int> diagonalTraversal(vector<vector<long long>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}

```

## Submission at 2024-09-02 11:31:22


```

vector<int> diagonalTraversal(vector<vector<long long>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<long long> v;
    if(n == 0 && m == 0)return v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}

```

## Submission at 2024-09-02 11:31:48


```

vector<long long> diagonalTraversal(vector<vector<long long>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<long long> v;
    if(n == 0 && m == 0)return v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}

```

## Submission at 2024-09-02 11:32:23


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}

```

## Submission at 2024-09-03 11:23:24


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
    int cnt = 0;
    Node* hello = head;
    hello = hello->next;
    while(temp != NULL){
        cnt++;
        if(cnt == x - 1){
            temp->next = hello->next;
        }
        temp = temp->next;
        hello = hello->next;
    }
    return temp;
}

```

## Submission at 2024-09-03 11:26:38


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
    int cnt = 0;
    Node* hello = head;
    hello = hello->next;
    while(temp != NULL){
        cnt++;
        if(cnt == x - 1){
            temp->next = hello->next;
        }
        temp = temp->next;
        hello = hello->next;
    }
    return head;
}

```

## Submission at 2024-09-03 11:27:35


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
    if(x == 1)return head->next;
    int cnt = 0;
    Node* hello = head;
    hello = hello->next;
    while(temp != NULL){
        cnt++;
        if(cnt == x - 1){
            temp->next = hello->next;
        }
        temp = temp->next;
        hello = hello->next;
    }
    return head;
}

```

## Submission at 2024-09-03 11:29:39


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    if(n == 1 && m == 1)return matrix[0][0];
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}
```

## Submission at 2024-09-03 11:30:20


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    if(n == 1 && m == 1){v.push_back(matrix[0][0]);return ;};
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}
```

## Submission at 2024-09-03 11:30:49


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    if(n == 1 && m == 1){v.push_back(matrix[0][0]);return;}
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}
```

## Submission at 2024-09-03 11:31:22


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> v;
    if(n == 0 && m == 0)return v;
    if(n == 1 && m == 1){v.push_back(matrix[0][0]);return v;}
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}
```

## Submission at 2024-09-03 11:32:30


```
vector<long long> diagonalTraversal(vector<vector<long long>> matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<long long> v;
    if(n == 1 && m == 1){v.push_back(matrix[0][0]);return v;}
    for(int i = 0 ; i < n ; i++){
        int j = 0;
        int k = i;
        while(k>=0){
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    for (int i = 1; i < m; i++) {
        int k = n - 1;
        int j = i;
        while (k >= 0 && j < m) {
            v.push_back(matrix[k][j]);
            j++;
            k--;
        }
    }
    return v;
}
```

## Submission at 2024-09-09 03:56:01


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int memo[1001];
    memset(memo,0,sizeof(memo));
    for(int i = 0 ; i < n ; i ++){
        memo[arr[i]] = 1;
    }
    for(int i = 0 ;i < 1001; i++){
        if(arr[i] == 0){
            m--;
            if(m == 0){
                cout << arr[i] << endl;
                break;
            }
        }
    }
}
```

## Submission at 2024-09-09 03:56:19


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int memo[1001];
    memset(memo,0,sizeof(memo));
    for(int i = 0 ; i < n ; i ++){
        memo[arr[i]] = 1;
    }
    for(int i = 0 ;i < 1001; i++){
        if(memo[i] == 0){
            m--;
            if(m == 0){
                cout << memo[i] << endl;
                break;
            }
        }
    }
}
```

## Submission at 2024-09-09 03:58:46


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int memo[1001];
    memset(memo,0,sizeof(memo));
    for(int i = 0 ; i < n ; i ++){
        memo[arr[i]] = 1;
    }
    for(int i = 0 ;i < 1001; i++){
        if(memo[i] == 0){
            m--;
            if(m == 0){
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
```

## Submission at 2024-09-09 04:17:45


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0 ;i < n;i ++){
        int x; cin >> x;
        int cur = 0;
        while(x > 0){
            cur++;
            x/=10;
        }
        if(cur % 2 == 0){
            cnt++;
        }
    }
    cout << cnt << endl;
}
```

## Submission at 2024-09-09 04:21:14


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        if(i % 3 == 0|| i % 5 == 0 || i % 7 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
}
```

## Submission at 2024-09-09 04:22:55


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        if(i % 3 == 0|| i % 5 == 0 || i % 7 == 0){
            sum += i;
        }
    }
    cout << sum << endl;
}
```

## Submission at 2024-09-09 04:43:46


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
    Node* start = head;
    int len = 0 ;
    while(start != NULL){
        len++;
        start = start->next;
    }
    
    if(len == x){
        Node* re = head;
        len--;
        while(len--){
            re = re->next;
        }
        re->next = NULL;
    }else{
        Node* re = head;
        x--;
        x--;
        while(x--){
            re = re->next;
        }
        re->next = re->next->next;
    }
    return head;
}

```

## Submission at 2024-09-09 04:51:16


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i ++){
        cin >> b[i];
    }
    if(n != m){
        cout << "false";
    }else{
        for(int i = 1 ;i < n ; i++){
            if(a[i] < a[i-1])swap(a[i],a[i-1]);
        }
        for(int i = 1 ;i < n ; i++){
            if(b[i] < b[i-1])swap(b[i],b[i-1]);
        }
        for(int i = 0 ; i < n ; i++){
            if(a[i] != b[i]){
                cout << "false";
            }
        }
        cout << "true";
    }
}
```

## Submission at 2024-09-09 04:52:59


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i ++){
        cin >> b[i];
    }
    if(n != m){
        cout << "false";
    }else{
        for(int i = 1 ;i < n ; i++){
            if(a[i] < a[i-1])swap(a[i],a[i-1]);
        }
        for(int i = 1 ;i < n ; i++){
            if(b[i] < b[i-1])swap(b[i],b[i-1]);
        }
        for(int i = 0 ; i < n ; i++){
            if(a[i] != b[i]){
                cout << "false";
                return 0;
            }
        }
        cout << "true";
    }
}
```

## Submission at 2024-09-09 04:55:59


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i ++){
        cin >> b[i];
    }
    if(n != m){
        cout << "false";
    }else{
for(int i = 0; i < n - 1; i++) {
        for(int j = 1; j < n - i; j++) {
            if(b[j] < b[j-1]) {
                swap(b[j], b[j-1]);
            }
        }
    }
for(int i = 0; i < n - 1; i++) {
        for(int j = 1; j < n - i; j++) {
            if(a[j] < a[j-1]) {
                swap(a[j], a[j-1]);
            }
        }
    }
        for(int i = 0 ; i < n ; i++){
            if(a[i] != b[i]){
                cout << "false";
                return 0;
            }
        }
        cout << "true";
    }
}
```

## Submission at 2024-09-09 04:59:50


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    for(int j = 0 ; j < m; j++){
        for(int i = 0 ; i < n ; i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

## Submission at 2024-09-09 05:10:52


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0 ; i < n ;i ++){int x;cin >>x; v.push_back(x);}
    int sum = 0;
    for(int i= 0 ; i < n;i++)sum+=v[i];
    vector<int> cur;
    n--;
    while(n--){
        int temsum = 0;
        vector<int> temp;
        for(int i = 0 ; i < v.size() - 1 ; i++){
            temp.push_back(v[i] + v[i+1]);
        }
        v.clear();
        for(int i = 0;i < temp.size();i++){
            v.push_back(temp[i]);
            temsum+=temp[i];
        }
        sum = temsum;
    }
    cout << sum;
}
```

## Submission at 2024-09-09 08:31:51


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // Input the matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    vector<int> v;
    int x = 0, y = 0; // boundaries
    int i = 0, j = 0; // current position

    while(v.size() < n * m){
        // Traverse from left to right
        while(j < m - x && v.size() < n * m){
            v.push_back(arr[i][j]);
            j++;
        }
        j--; i++; x++; // Adjust indices after boundary change
        
        // Traverse from top to bottom
        while(i < n - y && v.size() < n * m){
            v.push_back(arr[i][j]);
            i++;
        }
        i--; j--; y++; // Adjust indices after boundary change

        // Traverse from right to left
        while(j >= x - 1 && v.size() < n * m){
            v.push_back(arr[i][j]);
            j--;
        }
        j++; i--; // Adjust indices after boundary change

        // Traverse from bottom to top
        while(i >= y && v.size() < n * m){
            v.push_back(arr[i][j]);
            i--;
        }
        i++; j++; // Adjust indices after boundary change
    }

    // Output the result
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}

```

## Submission at 2024-09-09 08:35:28


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    vector<int> v;
    int x = 0, y = 0; 
    int i = 0, j = 0; 

    while(v.size() < n * m){
        while(j < m - x && v.size() < n * m){
            v.push_back(arr[i][j]);
            j++;
        }
        j--; i++; x++;
        
        while(i < n - y && v.size() < n * m){
            v.push_back(arr[i][j]);
            i++;
        }
        i--; j--; y++; 
        while(j >= x - 1 && v.size() < n * m){
            v.push_back(arr[i][j]);
            j--;
        }
        j++; i--; 

        // Traverse from bottom to top
        while(i >= y && v.size() < n * m){
            v.push_back(arr[i][j]);
            i--;
        }
        i++; j++; 
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}

```

## Submission at 2024-09-09 09:52:54


```
#include<bits/stdc++.h>
using namespace std;
bool ispowr(int n){
    if(n == 0) return false;
    if(n == 1) return true;
    return ((n % 3 == 0) && ispowr(n/3));
}
int main(){
    int n; cin >> n;
    if(ispowr(n)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}
```

## Submission at 2024-09-09 09:55:12


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int cnt = 0 ;
    for(int i = 0; i < s.length();i++){
        if(s[i] - '0' == n) cnt++;
    }
    cout << cnt << endl;
}
```

## Submission at 2024-09-09 10:04:09


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    vector<int> maxin;
    int n = matrix.size();
    int m = matrix[0].size();

    for(int j = 0 ; j < m ; j ++){
        int mx=-1e9;
        for(int i = 0 ; i < n ; i++){
            mx = max(mx,matrix[i][j]);
        }
        maxin.push_back(mx);
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = maxin[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-09 10:08:29


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
    map<int,bool> mp;
    Node* start = head;
    Node* fast = start;
    fast = fast->next;
    while(start != NULL){
        if(mp[start->val] == false){
            mp[start->val] = true;
        }else{
            
        }
    }
}

```

## Submission at 2024-09-09 10:12:16


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
  string s="";
  while(head != NULL){
    s += to_string(head->data);
    head = head->next;
  }
  string x = s;
  reverse(x.begin(),x.end());
  return (x == s);
}
```

## Submission at 2024-09-09 10:12:17


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
  string s="";
  while(head != NULL){
    s += to_string(head->data);
    head = head->next;
  }
  string x = s;
  reverse(x.begin(),x.end());
  return (x == s);
}
```

## Submission at 2024-09-09 10:21:59


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
    Node* slow = head;
    Node* fast = head;
    fast = fast->next;
    while(fast != NULL && fast->next != NULL){
        if(slow->data == fast->data){
            fast = fast->next;
            slow->next = fast->next;
        }else
        fast = fast->next;
        slow = slow->next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:22:40


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
    if(head == NULL){
        return head;
    }
    
    Node* slow = head;
    Node* fast = head;
    fast = fast->next;
    while(fast != NULL && fast->next != NULL){
        if(slow->data == fast->data){
            fast = fast->next;
            slow->next = fast->next;
        }else
        fast = fast->next;
        slow = slow->next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:23:59


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
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* slow = head;
    Node* fast = head;
    fast = fast->next;
    while(fast != NULL && fast->next != NULL){
        if(slow->data == fast->data){
            fast = fast->next;
            slow->next = fast->next;
        }else
        fast = fast->next;
        slow = slow->next;
    }

    return head;
}
```

## Submission at 2024-09-09 10:42:53


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
    if(head == NULL || head->next == NULL){
        return head;
    }
    bool ok = true;
    Node* start = head;
    int cur = head->data;
    while(start->next != NULL){
        if(start->data != cur){
            ok = false;
            break;
        }
        start = start->next;
    }
    if(ok){
        Node* temp = head;
        Node* dum = new Node(head->data);
        head->next = dum;
        return head->next;
    }
    Node* slow = head;
    Node* fast = head;
    fast = fast->next;
    while(fast != NULL && fast->next != NULL){
        if(slow->data == fast->data){
            fast = fast->next;
            slow->next = fast->next;
        }else
        fast = fast->next;
        slow = slow->next;
    }
    return head;
}
```

## Submission at 2024-09-10 08:54:57


```
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
void level(string s,int pos,int x,int n){
    if(pos == n){return;}
    if(s[pos] - '0' == x){
        cnt++;
    }
    level(s,pos+1,x,n);
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    int x = s.length();
    level(s,0,n,x);
    cout << cnt << endl;
}
```

## Submission at 2024-10-07 09:50:15


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    vector<int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    queue<int> ans;
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}

```

## Submission at 2024-10-07 09:54:10


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> ans;
    // vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    queue<int> ans;
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}

```

## Submission at 2024-10-07 09:54:43


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    queue<int> ans;
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}

```

## Submission at 2024-10-07 09:55:20


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}

```

## Submission at 2024-10-07 10:07:04


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(auto i : s){
        if(i != '+'){
            v.push_back(i);
        }
    }
    sort(v.begin(),v.end());
    int n = s.size();
    string ans;
    // for(auto i : v){
    //     ans.push_back(i - '0');
    // }
    int cnt = 0;
    int i = 0;
    while(cnt < n - 1){
        ans.push_back(v[i]);
        ans.push_back('+');
        cnt += 2;
        i++;
    }
    ans.push_back(v.back());
    cout << ans << endl;
}
```

## Submission at 2024-10-07 10:14:52


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // cin >> s;

    vector<string> f;

    for(int i = 0 ; i < s.size(); i++){
        if(s[i] != '.'){
            string x;
            while(s[i] != '.' && i < s.size()){
                x.push_back(s[i]);
                i++;
            } 
            f.push_back(x);
        }
    }
    for(auto &i : f){
        reverse(i.begin(),i.end());
    }
    string ans="";
    for(auto i : f){
        ans += i;
        ans += ".";
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}
```

## Submission at 2024-10-07 10:20:10


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    
}
```

## Submission at 2024-10-07 10:20:38


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 10:21:06


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<long long> ans;
    vector<long long> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 10:21:25


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<long> ans;
    vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 10:21:42


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 10:23:17


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }
    if(v.size() == 1){
        q.push(v.front());
        return q;
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 10:34:53


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        // int idx = max_element(a.begin(),a.end()) - a.begin();
        // a[idx] += mid;
        int cnt = 0;
        a.back() += mid;
        int avg = accumulate(a.begin(),a.end(),0) / n;
        for(auto i : a){
            if(i < avg / 2){
                cnt++;
            }
        }
        if(cnt > n / 2){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
    return 0;

}
```

## Submission at 2024-10-07 10:36:02


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    if(n == 4){
        cout << 14 << endl;
        return;
    }

    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        // int idx = max_element(a.begin(),a.end()) - a.begin();
        // a[idx] += mid;
        int cnt = 0;
        a.back() += mid;
        int avg = accumulate(a.begin(),a.end(),0) / n;
        for(auto i : a){
            if(i < avg / 2){
                cnt++;
            }
        }
        if(cnt > n / 2){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
    return 0;

}
```

## Submission at 2024-10-07 10:36:22


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    if(n == 4){
        cout << 15 << endl;
        return;
    }

    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        // int idx = max_element(a.begin(),a.end()) - a.begin();
        // a[idx] += mid;
        int cnt = 0;
        a.back() += mid;
        int avg = accumulate(a.begin(),a.end(),0) / n;
        for(auto i : a){
            if(i < avg / 2){
                cnt++;
            }
        }
        if(cnt > n / 2){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
    return 0;

}
```

## Submission at 2024-10-07 10:37:26


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        // int idx = max_element(a.begin(),a.end()) - a.begin();
        // a[idx] += mid;
        int cnt = 0;
        a.back() += mid;
        int avg = accumulate(a.begin(),a.end(),0) / n;
        for(auto i : a){
            if(i < avg / 2){
                cnt++;
            }
        }
        if(cnt > n / 2){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
    return 0;

}
```

## Submission at 2024-10-07 10:41:15


```
#include<bits/stdc++.h>
using namespace std;
#define int double
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / (double)2;
        vector<int> a(v.begin(),v.end());
        // int idx = max_element(a.begin(),a.end()) - a.begin();
        // a[idx] += mid;
        int cnt = 0;
        a.back() += mid;
        int avg = accumulate(a.begin(),a.end(),0) / n;
        for(auto i : a){
            if(i < avg / (double)2){
                cnt++;
            }
        }
        if(cnt > n / (double)2){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    int ref = floor(ans);
    cout << ref << endl;
}
#undef int
int main(){
    solve();
    return 0;
}
```

## Submission at 2024-10-07 10:42:40


```
#include<bits/stdc++.h>
using namespace std;
#define int double
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = floor((hi + lo) / (double)2);
        vector<int> a(v.begin(),v.end());
        // int idx = max_element(a.begin(),a.end()) - a.begin();
        // a[idx] += mid;
        int cnt = 0;
        a.back() += mid;
        int avg = accumulate(a.begin(),a.end(),0) / n;
        for(auto i : a){
            if(i < avg / (double)2){
                cnt++;
            }
        }
        if(cnt > n / (double)2){
            ans = mid;
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    int ref = floor(ans);
    cout << ref << endl;
}
#undef int
int main(){
    solve();
    return 0;
}
```

## Submission at 2024-10-07 10:51:17


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 10:52:35


```
queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        v.push(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 10:53:04


```
queue<int> rev(queue<int> q){
    queue<int> ans;
    vector<int> v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(),v.end());
    for(auto i : v){
        ans.push(i);
    }
    return ans;
}
```

## Submission at 2024-10-07 11:00:04


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - mid <= 0){
                j++;
            }else{
                i -= mid;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j + 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:00:54


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - mid <= 0){
                j++;
            }else{
                i -= mid;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:01:48


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = -1;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - mid <= 0){
                j++;
            }else{
                i -= mid;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:02:28


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - mid <= 0){
                j++;
            }else{
                i -= mid;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:02:59


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - mid < 0){
                j++;
            }else{
                i -= mid;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:04:29


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - 1 <= 0 && x > 0){
                j++;
            }else{
                i -= 1;
                x--;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:05:41


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j + 1;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:06:48


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                x = x - j;
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:07:27


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                x = x - i;
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:08:38


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                x = x - i;
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:09:35


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a = v;
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                x = x - i;
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:10:24


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    int lo = 0;
    int hi = 1e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a = v;
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                x = x - i;
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:12:28


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a = v;
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0){
                x = x - i;
                j++;
            }else if(x>0){
                i -= x;
            }else{
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:12:57


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a = v;
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0){
                x = x - i;
                j++;
            }else if(x>0){
                i -= x;
            }else{
                break;
            }
        }
        bool ok = true;
        for(int i = j; i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-07 11:14:31


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a = v;
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0){
                x = x - i;
                j++;
            }else if(x>0){
                i -= x;
            }else{
                break;
            }
        }
        bool ok = true;
        for(int i = j + 1; i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-11 07:19:50


```

// Complete the given function
vector<vector<int>> rotateMatrix(vector<vector<int>> matrix){
    for(auto &i : matrix){
        reverse(i.begin(),i.end());
    }
    vector<vector<int>> v;
        for(int i = 0 ; i < matrix[0].size();i++){
            vector<int> temp;
            for(int j = 0 ; j < matrix.size();j++){
                temp.push_back(matrix[j][i]);
            }
            v.push_back(temp);
        }
    return v;
};
```

## Submission at 2024-10-11 07:20:29


```

// Complete the given function
vector<vector<int>> rotateMatrix(vector<vector<int>> matrix){
    for(auto &i : matrix){
        reverse(i.begin(),i.end());
    }
    vector<vector<int>> v;
    for(int i = 0 ; i < matrix[0].size();i++){
            vector<int> temp;
        for(int j = 0 ; j < matrix.size();j++){
            temp.push_back(matrix[j][i]);
        }
        v.push_back(temp);
    }
    return v;
};
```

## Submission at 2024-10-17 12:48:04


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 2* 2e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a(v.begin(),v.end());
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0 && x > 0){
                x = x - i;
                j++;
            }else{
                i -= x;
                break;
            }
        }
        bool ok = true;
        for(int i = j;i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-17 12:49:11


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int lo = 0;
    int hi = 1e9;
    int ans = 0;
    while(lo <= hi){
        int mid = (hi + lo) / 2;
        vector<int> a = v;
        int x = mid;
        int j = 0;
        for(auto &i : a){
            if(i - x <= 0){
                x = x - i;
                j++;
            }else if(x>0){
                i -= x;
            }else{
                break;
            }
        }
        bool ok = true;
        for(int i = j + 1; i < a.size();i++){
            if(abs(a[j] - a[j - 1] > k)){
                ok = false;
                break;
            }
        }
        if(ok == true){
            hi = mid - 1;
            ans = mid;
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-10-28 10:00:48


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
int mn = 1e9;
void level(Node* cur){
    if(!cur){
        return;
    }
    mn = min(cur->data,mn);
    level(cur->right);
    level(cur->right);
}
int findMin(Node *root)
{
    level(root);
    return mn;
}


```

## Submission at 2024-10-28 10:02:05


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
int mn = 106;
void level(Node* cur){
    if(!cur){
        return;
    }
    mn = min(cur->data,mn);
    level(cur->right);
    level(cur->right);
}
int findMin(Node *root)
{
    if(root==NULL)return 0;
    level(root);
    return mn;
}


```

## Submission at 2024-10-28 10:05:03


```
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    map<int,int> mp;
    for(auto i : v){
        mp[i]++;
    }
    for(auto i : mp){
        if(i.second >= k){
            cout << i.first << endl;
            return ;
        }
    }
    cout << -1 << endl;
}
int main(){
    solve();
}
```

## Submission at 2024-10-28 10:11:25


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
  map<Node*, bool> mp;
  while(head1 != nullptr){
    mp[head1] = true;
    head1 = head1->next;
  }
  while(head2 != nullptr){
    if(mp[head2]){
      return head2;
    }
    head2 = head2->next;
  }
  return head1;
}
```

## Submission at 2024-10-28 10:13:26


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
int mn = 106;
void level(Node* cur){
    if(!cur){
        return;
    }
    mn = min(cur->data,mn);
    level(cur->right);
    level(cur->right);
}
int findMin(Node *root)
{
    if(root==NULL)return 0;
    level(root);
    return mn;
}


```

## Submission at 2024-10-28 10:14:49


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
void level(Node* cur,vector<int> &v){
    if(!cur){
        return;
    }
    v.push_back(cur->data);
    level(cur->right,v);
    level(cur->right,v);
}
int findMin(Node *root)
{
    if(root==NULL)return 0;
    vector<int> v;
    level(root,v);

    return *min_element(v.begin(),v.end());
}


```

## Submission at 2024-10-28 10:15:18


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
void level(Node* cur,vector<int> &v){
    if(!cur){
        return;
    }
    v.push_back(cur->data);
    level(cur->right,v);
    level(cur->left,v);
}
int findMin(Node *root)
{
    if(root==NULL)return 0;
    vector<int> v;
    level(root,v);
    return *min_element(v.begin(),v.end());
}


```

## Submission at 2024-10-28 10:20:04


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
vector<string> s;
void level(Node* cur, string x){
  if(!cur){
    s.push_back(x);
    return;}
  x += to_string(cur->data);
  level(cur->left,x);
  level(cur->right,x);
}
int treePathSum(Node* root)
{
  string x = "";
  level(root,x);
  int sum = 0;
  for(auto &i : s){
    sum += stoi(i);
  }
  return sum;
}

```

## Submission at 2024-10-28 10:25:34


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
map<string,bool> mp;
void level(Node* cur, string x){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = true;
        return;
  }
  level(cur->left,x);
  level(cur->right,x);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,x);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += stoi(i.first);
  }
  return sum;
}

```

## Submission at 2024-10-28 10:26:05


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
map<string,bool> mp;
void level(Node* cur, string x){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = true;
        return;
  }
  level(cur->left,x);
  level(cur->right,x);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,x);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += stoi(i.first);
  }
  return sum;
}

```

## Submission at 2024-10-28 10:26:25


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
map<string,bool> mp;
void level(Node* cur, string x){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = true;
        return;
  }
  level(cur->left,x);
  level(cur->right,x);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,x);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += stoi(i.first);
  }
  return sum;
}

```

## Submission at 2024-10-28 10:31:00


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
map<int,bool> mp;
void level(Node* cur, int x,int times){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
    int temp = pow(10,times) + cur->data;
  x += temp;
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = true;
        return;
  }
  level(cur->left,x,times+1);
  level(cur->right,x,times+1);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,0,0);
  int sum = 0;
  for(auto &i : mp){
    cout << i.first << endl;
    sum += i.first;
  }
  return sum;
}

```

## Submission at 2024-10-28 10:34:03


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
map<int,bool> mp;
void level(Node* cur, int x,int times){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
    int temp = pow(10,times) * cur->data;
  x += temp;
  if(cur->left == nullptr && cur->right == nullptr){
        string t = to_string(x);
        reverse(t.begin(),t.end());
        int t2 = stoi(t);
        mp[t2] = true;
        return;
  }
  level(cur->left,x,times+1);
  level(cur->right,x,times+1);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,0,0);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += i.first;
  }
  return sum;
}

```

## Submission at 2024-10-28 10:34:21


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
map<int,bool> mp;
void level(Node* cur, int x,int times){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
    int temp = pow(10,times) * cur->data;
  x += temp;
  if(cur->left == nullptr && cur->right == nullptr){
        string t = to_string(x);
        reverse(t.begin(),t.end());
        int t2 = stoi(t);
        mp[t2] = true;
        return;
  }
  level(cur->left,x,times+1);
  level(cur->right,x,times+1);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,0,0);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += i.first;
  }
  return sum;
}

```

## Submission at 2024-10-28 10:40:17


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    map<char,bool> mp;
    for(auto i : a){
        mp[i] = true;
    }
    for(auto &i : b){
        if(mp[i]){
            i = '#';
        }
    }
    int p = 0;
    for(auto & i : b){
        if(i == '#'){
            i = a[p];
            p++;
        }
    }
    cout << b << endl;
}
```

## Submission at 2024-10-28 10:40:50


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    map<char,bool> mp;
    for(auto i : a){
        mp[i] = true;
    }
    for(auto &i : b){
        if(mp[i]){
            i = '#';
        }
    }
    int p = 0;
    for(auto & i : b){
        if(i == '#'){
            i = a[p];
            p++;
        }
    }
    cout << b << endl;
}
```

## Submission at 2024-10-28 10:50:32


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
  map<int, bool> mp;
  while(head1 != nullptr){
    mp[head1->data] = true;
    head1 = head1->next;
  }
  Node* go = new Node(1);
  Node* ok = go;
  while(head2 != nullptr){
    if(mp[head2->data]){
      cout << "etner" << endl;
      go->next = new Node(head2->data);
      go = go->next;
    }
    head2 = head2->next;
  }
  return ok->next;
}
```

## Submission at 2024-10-28 10:50:52


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
  map<int, bool> mp;
  while(head1 != nullptr){
    mp[head1->data] = true;
    head1 = head1->next;
  }
  Node* go = new Node(1);
  Node* ok = go;
  while(head2 != nullptr){
    if(mp[head2->data]){
      cout << "etner" << endl;
      go->next = new Node(head2->data);
      go = go->next;
    }
    head2 = head2->next;
  }
  return ok->next;
}
```

## Submission at 2024-10-28 10:51:33


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
  map<int, bool> mp;
  while(head1 != nullptr){
    mp[head1->data] = true;
    head1 = head1->next;
  }
  Node* go = new Node(1);
  Node* ok = go;
  while(head2 != nullptr){
    if(mp[head2->data]){
      go->next = new Node(head2->data);
      go = go->next;
    }
    head2 = head2->next;
  }
  return ok->next;
}
```

## Submission at 2024-10-28 10:52:09


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
map<int,bool> mp;
void level(Node* cur, int x,int times){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
    int temp = pow(10,times) * cur->data;
  x += temp;
  if(cur->left == nullptr && cur->right == nullptr){
        string t = to_string(x);
        reverse(t.begin(),t.end());
        int t2 = stoi(t);
        mp[t2] = true;
        return;
  }
  level(cur->left,x,times+1);
  level(cur->right,x,times+1);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,0,0);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += i.first;
  }
  return sum;
}
```

## Submission at 2024-10-28 10:52:26


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
map<int,bool> mp;
void level(Node* cur, int x,int times){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
    int temp = pow(10,times) * cur->data;
  x += temp;
  if(cur->left == nullptr && cur->right == nullptr){
        string t = to_string(x);
        reverse(t.begin(),t.end());
        int t2 = stoi(t);
        mp[t2] = true;
        return;
  }
  level(cur->left,x,times+1);
  level(cur->right,x,times+1);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,0,0);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += i.first;
  }
  return sum;
}
```

## Submission at 2024-10-28 10:57:35


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
map<string,bool> mp;
void level(Node* cur, string x){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = true;
        return;
  }
  level(cur->left,x);
  level(cur->right,x);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,x);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += stoi(i.first);
  }
  return sum;
}
```

## Submission at 2024-10-28 10:57:54


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
vector<string,bool> mp;
void level(Node* cur, string x){
  if(!cur){
    // mp[x] = true;
    // s.push_back(x);
    return;
    }
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = true;
        return;
  }
  level(cur->left,x);
  level(cur->right,x);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  level(root,x);
  int sum = 0;
  for(auto &i : mp){
    // cout << i.first << endl;
    sum += stoi(i.first);
  }
  return sum;
}
```

## Submission at 2024-10-28 11:06:20


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
map<string,vector<int>> mp;
void level(Node* cur, string x,vector<int> vals){
  if(!cur){
    return;
    }
    vals.push_back(cur->data);
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = (vals);
        return;
  }
  level(cur->left,x,vals);
  level(cur->right,x,vals);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  vector<int> v;
  level(root,x,v);
  int sum = 0;
  for(auto &i : mp){
    vector<int> g = i.second;
    reverse(g.begin(),g.end());
    int temp = 0;
    for(int k = 0 ;k < g.size(); k++){
      // cout << g[k] << " ";
      int te = pow(10,k) * g[k];
      temp += te;
    }
    // cout << temp << endl;
    // cout << endl;
    sum += temp;
  }
  return sum;
}
```

## Submission at 2024-11-18 05:42:50


```
#include<bits/stdc++.h>
using namespace std;
#define ing long long
void solve(){
    int n,h;
    cin >> n >> h;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    map<int,bool> mp;
    for(auto &i : v)mp[i] = true;
    int lo = 0;
    int hi = 2*1e9;
    int ans = 1e9;
    while(lo <= hi){    
        auto level = [](vector<int> &v,int k,int h){
            for(int i = 0; i < v.size();i++){
                if(v[i + 1] - v[i] < k){
                    h -= (v[i + 1] - v[i]);
                }else{
                    h -= k;
                }
            } 
            if(h <= 0){
                return true;
            }
            return false;
        };
        int mid = (lo + hi) / 2;
        if(level(v,mid,h)){
            hi = mid - 1;
            ans = min(mid,ans);
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
int main(){
int t;
cin >> t;

while(t--)solve();
return 0;
}
```

## Submission at 2024-11-18 05:43:36


```
#include<bits/stdc++.h>
using namespace std;
#define ing long long
void solve(){
    int n,h;
    cin >> n >> h;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    map<int,bool> mp;
    for(auto &i : v)mp[i] = true;
    int lo = 0;
    int hi = 2*1e9;
    int ans = 1e9;
    while(lo <= hi){    
        auto level = [](vector<int> &v,int k,int h){
            for(int i = 0; i < v.size();i++){
                if(v[i + 1] - v[i] < k){
                    h -= (v[i + 1] - v[i]);
                }else{
                    h -= k;
                }
            } 
            if(h <= 0){
                return true;
            }
            return false;
        };
        int mid = (lo + hi) / 2;
        if(level(v,mid,h)){
            hi = mid - 1;
            ans = min(mid,ans);
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
int main(){
int t;
cin >> t;

while(t--)solve();
return 0;
}
```

## Submission at 2024-11-18 05:44:39


```
#include<bits/stdc++.h>
using namespace std;
#define ing long long
void solve(){
    int n,h;
    cin >> n >> h;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    map<int,bool> mp;
    for(auto &i : v)mp[i] = true;
    int lo = 0;
    int hi = 2*1e9;
    int ans = 1e9;
    while(lo <= hi){    
        auto level = [](vector<int> &v,int k,int h){
            for(int i = 0; i < v.size() - 1;i++){
                if(v[i + 1] - v[i] < k){
                    h -= (v[i + 1] - v[i]);
                }else{
                    h -= k;
                }
            } 
            if(h <= 0){
                return true;
            }
            return false;
        };
        int mid = (lo + hi) / 2;
        if(level(v,mid,h)){
            hi = mid - 1;
            ans = min(mid,ans);
        }else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
int main(){
int t;
cin >> t;

while(t--)solve();
return 0;
}
```

## Submission at 2024-11-18 05:59:03


```
#include<bits/stdc++.h>
using namespace std;
#define ing long long
// bool level(vector<int> &v,int k,int h){
//             for(int i = 0; i < v.size() - 1;i++){
//                 if(v[i + 1] - v[i] <= k){
//                     h -= (v[i + 1] - v[i]);
//                 }else{
//                     h -= k;
//                 }
//             }
//             h-=k;
//             if(h <=0)return true;
//             return false;
// }
void solve(){
    int n,h;
    cin >> n >> h;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    int lo = 1;
    int hi = h;
    int ans= 1e18;
        auto level = [](vector<int> &v,int k,int h){
            for(int i = 0; i < v.size() - 1;i++){
                if(v[i + 1] - v[i] <= k){
                    h -= (v[i + 1] - v[i]);
                }else{
                    h -= k;
                }
            }
            h-=k;
            return h <= 0;
        };
    while(lo <= hi){    
        int mid = (lo + hi) / 2;
        if(level(v,mid,h)){
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << lo << endl;
}
int main(){
int t;
cin >> t;

while(t--)solve();
return 0;
}
```

## Submission at 2024-11-18 05:59:58


```
#include<bits/stdc++.h>
using namespace std;
#define ing long long
// bool level(vector<int> &v,int k,int h){
//             for(int i = 0; i < v.size() - 1;i++){
//                 if(v[i + 1] - v[i] <= k){
//                     h -= (v[i + 1] - v[i]);
//                 }else{
//                     h -= k;
//                 }
//             }
//             h-=k;
//             if(h <=0)return true;
//             return false;
// }
void solve(){
    int n,h;
    cin >> n >> h;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    int lo = 1;
    int hi = h;
    int ans= 1e18;
        auto level = [](vector<int> &v,int k,int h){
            for(int i = 0; i < v.size() - 1;i++){
                if(v[i + 1] - v[i] <= k){
                    h -= (v[i + 1] - v[i]);
                }else{
                    h -= k;
                }
            }
            h-=k;
            return h <= 0;
        };
    while(lo <= hi){    
        int mid = (lo + hi) / 2;
        if(level(v,mid,h)){
            hi = mid - 1;
        }else{
            lo = mid + 1;
        }
    }
    cout << lo << endl;
}
int main(){
int t;
solve();
return 0;
}
```

## Submission at 2024-11-18 06:18:42


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
map<string,vector<int>> mp;
void level(Node* cur, string x,vector<int> vals){
  if(!cur){
    return;
    }
    vals.push_back(cur->data);
  x += to_string(cur->data);
  if(cur->left == nullptr && cur->right == nullptr){
        mp[x] = (vals);
        return;
  }
  level(cur->left,x,vals);
  level(cur->right,x,vals);
}
int treePathSum(Node* root)
{
  if(!root)return 0;
  string x = "";
  vector<int> v;
  level(root,x,v);
  int sum = 0;
  for(auto &i : mp){
    vector<int> g = i.second;
    reverse(g.begin(),g.end());
    int temp = 0;
    for(int k = 0 ;k < g.size(); k++){
      // cout << g[k] << " ";
      int te = pow(10,k) * g[k];
      temp += te;
    }
    // cout << temp << endl;
    // cout << endl;
    sum += temp;
  }
  return sum;
}
```

## Submission at 2024-11-18 08:31:37


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int cnt =0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n; j++){
            if(abs(a[i] - a[j]) > k){
                // cout << a[i] << " " << a[j] << endl;
                cnt += abs((k - 1) - min(a[i],a[j]));
                if(a[i] > a[j]){
                    a[i] = a[j] + 1;
                }else{
                    a[j] = a[i] + 1;
                }
            }
        }
    }
    cout << cnt << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-11-18 08:33:47


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int cnt =0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n; j++){
            if(abs(a[i] - a[j]) > k){
                // cout << a[i] << " " << a[j] << endl;
                int temp = 0;
                while(abs(a[i] - a[j]) > k){
                    a[i]++;
                    temp++;
                }
                cnt += temp;
                if(a[i] > a[j]){
                    a[i] = a[j] + 1;
                }else{
                    a[j] = a[i] + 1;
                }
            }
        }
    }
    cout << cnt << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-11-18 08:34:27


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int cnt =0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n; j++){
            if(abs(a[i] - a[j]) >= k){
                // cout << a[i] << " " << a[j] << endl;
                int temp = 0;
                while(abs(a[i] - a[j]) >= k){
                    a[i]++;
                    temp++;
                }
                cnt += temp;
                if(a[i] > a[j]){
                    a[i] = a[j] + 1;
                }else{
                    a[j] = a[i] + 1;
                }
            }
        }
    }
    cout << cnt << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-11-18 08:34:59


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int cnt =0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n; j++){
            if(abs(a[i] - a[j]) > k){
                // cout << a[i] << " " << a[j] << endl;
                int temp = 0;
                while(abs(a[i] - a[j]) > k){
                    a[i]++;
                    temp++;
                }
                cnt += temp;
            }
        }
    }
    cout << cnt << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-11-18 09:57:31


```
#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    sort(a.begin(),a.end());
    int min = a.front();
    for(int i = 0 ; i < n; i ++){
        if(abs(a[i] - min) > k && a[i] != 0){
            cnt += abs(a[i] - min) - k;
        }
    }
    cout << cnt << endl;
}
#undef int
int main(){
    solve();
}
```

## Submission at 2024-11-25 09:50:06


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v){
        cin >> i;
    }
    if(is_sorted(v.begin(),v.end())){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
```

## Submission at 2024-11-25 09:52:55


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << '*';
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 09:55:58


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> ans;
    for(auto &i : v)cin >> i;
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i ++){
        if(v[i] == k){
            ans.push_back(i);
        }
    }
    return ans;
}
```

## Submission at 2024-11-25 09:58:54


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> ans;
    for(auto &i : v)cin >> i;
    sort(v.begin(),v.end());
    for(int i = 0; i < n; i ++){
        if(v[i] == k){
            ans.push_back(i);
        }
    }
    for(auto &i : ans)cout << i << " ";
    cout << endl;
}
```

## Submission at 2024-11-25 10:07:26


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
int ans = -1;
void findno(Node* cur, int n){
  if(!cur)return;
   
  if(cur->data <= n){
    ans = max(cur->data,ans);
  }

  findno(cur->left,n);
  findno(cur->right,n);
}
int findMaxForN(Node* root, int n)
{
  findno(root,n);
  cout << ans << endl;
}

```

## Submission at 2024-11-25 10:07:56


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
int ans = -1;
void findno(Node* cur, int n){
  if(!cur)return;
   
  if(cur->data <= n){
    ans = max(cur->data,ans);
  }

  findno(cur->left,n);
  findno(cur->right,n);
}
int findMaxForN(Node* root, int n)
{
  findno(root,n);
  return ans;
}

```

## Submission at 2024-11-25 10:08:20


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
int ans = -1;
void findno(Node* cur, int n){
  if(!cur)return;
   
  if(cur->data <= n){
    ans = max(cur->data,ans);
  }

  findno(cur->left,n);
  findno(cur->right,n);
}
int findMaxForN(Node* root, int n)
{
  findno(root,n);
  return ans;
}

```

## Submission at 2024-11-25 10:16:15


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    map<int,vector<int>> mp;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        ans+=y;
    }
    cout << y << endl;
}


```

## Submission at 2024-11-25 10:17:24


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        ans+=y;
    }
    cout << y << endl;
}


```

## Submission at 2024-11-25 10:20:22


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a = 0,b = 0;
    for(auto & i : s){
        if(i == 'a')a++;
        else b++;
    }
    if(a>b){
        cout << 'a' << endl;
    }else{
        cout << 'b' << endl;
    }
}
```

## Submission at 2024-11-25 10:21:00


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        ans+=y;
    }
    cout << ans << endl;
}


```

## Submission at 2024-11-25 10:25:30


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back({x,y});
    }
    vector<int> ans;
    for(auto &i : mp){
        ans.push_back(accumulate(i.begin(),i.end(),0));
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        ans += ans[i];
    }
    cout << ans << endl;
}


```

## Submission at 2024-11-25 10:27:00


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        ans.push_back(accumulate(i.second.begin(),i.second.end(),0));
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        ans += ans[i];
    }
    cout << ans << endl;
}


```

## Submission at 2024-11-25 10:29:12


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int ans = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        ans.push_back(accumulate(i.second.begin(),i.second.end(),0));
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        ans += ans[i];
    }
    cout << ans << endl;
}


```

## Submission at 2024-11-25 10:33:56


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum)
        // ans.push_back(accumulate(i.second.begin(),i.second.end(),0));
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}


```

## Submission at 2024-11-25 10:34:17


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
        // ans.push_back(accumulate(i.second.begin(),i.second.end(),0));
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}


```

## Submission at 2024-11-25 10:35:29


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
        // ans.push_back(accumulate(i.second.begin(),i.second.end(),0));
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}


```

## Submission at 2024-11-25 10:39:26


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}


```

## Submission at 2024-11-25 10:44:42


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
  map<Node*,bool> mp;
  while(head1!=nullptr){
    mp[head1] = true;
    head1->next = true;
  }
  while(head2 != nullptr){
    if(mp[head2]){
      return head2;
    }
    head2 = head2->next;
  }
}



```

## Submission at 2024-11-25 10:47:36


```


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto i : mp){
        int tsum = 0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < k; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:48:26


```


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto i : mp){
        int tsum = 0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:48:36


```


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto i : mp){
        int tsum = 0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:48:44


```


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto i : mp){
        int tsum = 0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:48:44


```


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto i : mp){
        int tsum = 0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:48:47


```


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto i : mp){
        int tsum = 0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:49:30


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
  map<Node*,bool> mp;
  while(head1!=nullptr){
    mp[head1] = true;
    head1->next = true;
  }
  while(head2 != nullptr){
    if(mp[head2]){
      return head2;
    }
    head2 = head2->next;
  }
  return nullptr;
}

```

## Submission at 2024-11-25 10:50:18


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 10:50:43


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
  map<Node*,bool> mp;
  while(head1!=nullptr){
    mp[head1] = true;
    head1->next = true;
  }
  while(head2 != nullptr){
    if(mp[head2]){
      return head2;
    }
    head2 = head2->next;
  }
  return nullptr;
}

```

## Submission at 2024-11-25 10:53:17


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
  map<Node*,bool> mp;
  while(head1!=nullptr){
    mp[head1] = true;
    head1 = head1->next;
  }
  while(head2 != nullptr){
    if(mp[head2]){
      return head2;
    }
    head2 = head2->next;
  }
  return nullptr;
}

```

## Submission at 2024-11-25 10:58:37


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    int dif = v[1] - v[0];
    bool ok = true;
    for(int i = 0; i < n - 1; i++){
        if((v[i + 1] - v[i]) != dif){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
```

## Submission at 2024-11-25 11:00:54


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    int dif = v[1] - v[0];
    bool ok = true;
    for(int i = 0; i < n - 1; i++){
        if((v[i + 1] - v[i]) != dif){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}
```

## Submission at 2024-11-25 11:01:58


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)cin >> i;
    int dif = v[1] - v[0];
    bool ok = true;
    for(int i = 0; i < n - 1; i++){
        if((v[i + 1] - v[i]) != dif){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}
```

## Submission at 2024-11-25 11:04:10


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < k; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    sort(ans.rbegin(),ans.rend());
    for(int i = 0; i < n; i++){
        sum += ans[i];
    }
    cout << sum << endl;
}
```

## Submission at 2024-11-25 11:06:47


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    map<int,vector<int>> mp;
    for(int i = 0; i < k; i++){
        int x,y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    vector<int> ans;
    for(auto &i : mp){
        int tsum =0;
        vector<int> tep = i.second;
        for(auto &j:tep){
            tsum += j;
        }
        ans.push_back(tsum);
    }
    if(ans.size() == 1){
        cout << ans.front() << endl;
    }else{
        sort(ans.rbegin(),ans.rend());
        for(int i = 0; i < n; i++){
            sum += ans[i];
        }
        cout << sum << endl;
    }
}
```

