## Submission at 2024-08-05 10:16:04


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

## Submission at 2024-08-05 10:19:23


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

## Submission at 2024-08-05 10:29:28


```
#include<iostream>
#include<string>
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;
    return 0;
}
```

## Submission at 2024-08-05 10:30:27


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

## Submission at 2024-08-05 10:33:49


```
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string name1;
    cin>>name1;
    cout<<"Hello "<<name1<<"!"<<endl;
    string name2;
    cin>>name2;
    cout<<"Hello "<<name2<<"!"<<endl;
    string name3;
    cin>>name3;
    cout<<"Hello "<<name3<<"!"<<endl;
    return 0;

}
```

## Submission at 2024-08-05 10:35:49


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

## Submission at 2024-08-12 09:47:45


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return x;
    }
    if(x==1){
        return x;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }

}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:01:03


```
#include <iostream>
#include<math.h>

using namespace std;

bool isPowerOfTwo(int n) {
    for(int i=0;i<=sqrt(n);i++){
        if(pow(2,i)==n){
            return true;
        }

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

## Submission at 2024-08-12 10:06:37


```
#include <iostream>
#include<math.h>

using namespace std;

bool isPowerOfTwo(int n) {
    for(int i=0;i<=sqrt(n);i++){
        if(2*isPowerOfTwo(i-1)==n){
            return true;
        }

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

## Submission at 2024-08-12 10:07:25


```
#include <iostream>
#include<math.h>

using namespace std;

bool isPowerOfTwo(int n) {
    for(int i=0;i<=sqrt(n);i++){
        if(pow(2,i)==n){
            return true;
        }

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

## Submission at 2024-08-12 10:20:26


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    if(n<1 || n%2!=0){
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

## Submission at 2024-08-21 09:50:19


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

## Submission at 2024-08-21 09:53:48


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

## Submission at 2024-08-21 09:54:09


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

## Submission at 2024-08-21 09:55:50


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

## Submission at 2024-08-21 09:58:45


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

## Submission at 2024-08-22 12:38:25


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int index, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(current.size()==k){
        result.push_back(current);
        return;
    }
    if(index>n){
        return;
    }

    combine(index+1,k,n,current , result);
    current.pop_back(index);
    combine(index+1,k,n,current , result);
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

## Submission at 2024-08-22 12:40:45


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int index, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(current.size()==k){
        result.push_back(current);
        return;
    }
    if(index>n){
        return;
    }
    current.push_back(index);
    combine(index+1,k,n,current , result);
    current.pop_back();
    combine(index+1,k,n,current , result);
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

## Submission at 2024-08-22 12:49:42


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int index, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(current.size()==k){
        result.push_back(current);
        return;
    }
    if(index>n){
        return;
    }
    current.push_back(index);
    combine(index+1,k,n,current , result);
    current.pop_back();
    combine(index+1,k,n,current , result);
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

## Submission at 2024-08-22 12:56:15


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(current.size()==k){
        result.push_back(current);
        return;
    }
    if(start>n){
        return;
    }
    current.push_back(start);
    combine(start+1,k,n,current,result);
    //Emptying the current
    current.pop_back();
    combine(start+1,k,n,current,result);
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

## Submission at 2024-08-30 12:04:40


```
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &c, const vector<int> &a, const vector<int> &b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            c.push_back(b[i]);
        } else {
            c.push_back(a[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    for (int l = 0; l < n; l++) {
        cin >> b[l];
    }

    solve(c, a, b, n);

    for (int m = 0; m < n; m++) {
        cout << c[m] << " ";
    }

    return 0;
}

```

## Submission at 2024-08-30 12:08:56


```
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &c, const vector<int> &a, const vector<int> &b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            c.push_back(b[i]);
        } else {
            c.push_back(a[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    for (int l = 0; l < n; l++) {
        cin >> b[l];
    }

    solve(c, a, b, n);

    for (int m = 0; m < n; m++) {
        cout << c[m] << " ";
    }

    return 0;
}

```

## Submission at 2024-08-30 12:54:06


```
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &c,vector<int> &a,vector<int> &b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            c.push_back(b[i]);
        } else {
            c.push_back(a[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    for (int l = 0; l < n; l++) {
        cin >> b[l];
    }

    solve(c, a, b, n);

    for (int m = 0; m < n; m++) {
        cout << c[m] << " ";
    }

    return 0;
}

```

## Submission at 2024-08-30 12:56:03


```
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &c,vector<int> &a,vector<int> &b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            c.push_back(b[i]);
        } else {
            c.push_back(a[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    for (int l = 0; l < n; l++) {
        cin >> b[l];
    }

    solve(c, a, b, n);

    for (int m = 0; m < n; m++) {
        cout << c[m];
    }

    return 0;
}

```

## Submission at 2024-08-30 12:57:07


```
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &c,vector<int> &a,vector<int> &b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            c.push_back(a[i]);
        } else {
            c.push_back(b[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    for (int l = 0; l < n; l++) {
        cin >> b[l];
    }

    solve(c, a, b, n);

    for (int m = 0; m < n; m++) {
        cout << c[m];
    }

    return 0;
}

```

## Submission at 2024-08-30 12:58:22


```
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> &c,vector<int> &a,vector<int> &b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            c.push_back(a[i]);
        } else {
            c.push_back(b[i]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for (int k = 0; k < n; k++) {
        cin >> a[k];
    }

    for (int l = 0; l < n; l++) {
        cin >> b[l];
    }

    solve(c, a, b, n);

    for (int m = 0; m < n; m++) {
        cout << c[m]<<" ";
    }

    return 0;
}

```

## Submission at 2024-08-30 13:13:59


```
#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i>=j){
        if(s[i]!=s[j]){
        return false;
    }
        if(s[i]==s[j]){
            isPalindrome(s,i++,j--);
            }
        return true;
    }
}
int main(){
    string s;
    cin>>s;
    int i;
    int j;
    j=s.size()-1;
    bool result=isPalindrome(s,0,j);
    if(result==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
```

## Submission at 2024-08-30 13:19:53


```
#include<iostream>
#include<vector>
#include <string>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i>=j){
        if(s[i]!=s[j]){
        return false;
    }
        if(s[i]==s[j]){
            isPalindrome(s,i++,j--);
            }
        return true;
    }
}
int main(){
    string s;
    cin>>s;
    int i;
    int j;
    j=s.size()-1;
    bool result=isPalindrome(s,0,j);
    if(result==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
```

## Submission at 2024-08-30 13:22:35


```
#include<iostream>
#include<vector>
#include <string>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i==j){
        if(s[i]!=s[j]){
        return false;
    }
        if(s[i]==s[j]){
            isPalindrome(s,i++,j--);
            }
        return true;
    }
}
int main(){
    string s;
    cin>>s;
    int i = 0;
    int j;
    j=s.size()-1;
    bool result=isPalindrome(s,0,j);
    if(result==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
```

## Submission at 2024-08-30 13:35:58


```
#include<iostream>
#include<vector>
#include <string>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i>=j){
        if(s[i]!=s[j]){
        return false;
    }
        if(s[i]==s[j]){
            isPalindrome(s,i++,j--);
            }
        return true;
    }
}
int main(){
    string s;
    cin>>s;
    int i = 0;
    int j;
    j=s.size()-1;
    bool result=isPalindrome(s,0,j);
    if(result==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
```

## Submission at 2024-08-30 13:39:52


```
#include<iostream>
#include<vector>
#include <string>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i>=j){
        if(s[i]!=s[j]){
        return false;
    }
        if(s[i]==s[j]){
            isPalindrome(s,i++,j--);
            }
        return true;
    }
}
int main(){
    string s;
    cin>>s;
    int i =0;
    int j;
    j=s.size()-1;
    bool result=isPalindrome(s,i,j);
    if(result==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
```

## Submission at 2024-08-30 13:44:16


```
#include<iostream>
#include<vector>
#include <string>
using namespace std;
bool isPalindrome(string s,int i,int j){
    if(i>=j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return isPalindrome(s,i++,--j);
       
    }

int main(){
    string s;
    cin>>s;
    int i =0;
    int j;
    j=s.size()-1;
    bool result=isPalindrome(s,0,j);
    if(result==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


}
```

## Submission at 2024-08-30 13:45:14


```
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isPalindrome(string s, int i, int j) {
    if (i >= j) {
        return true;  // Base case: If the pointers have crossed, it's a palindrome
    }
    if (s[i] != s[j]) {
        return false;  // If characters don't match, it's not a palindrome
    }
    return isPalindrome(s, ++i, --j);  // Move towards the center and check recursively
}

int main() {
    string s;
    cin >> s;
    int j = s.size() - 1;
    bool result = isPalindrome(s, 0, j);
    if (result) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

```

## Submission at 2024-09-02 10:11:07


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };
void traverse(vector<int> &result,ListNode*head){
    ListNode* temp=head;
    while(temp!=0){
        result.push_back(temp->val);
        temp=temp->next;
    }

}

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    traverse(result,head);
    return result;
}

```

## Submission at 2024-09-02 10:13:07


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };
void traverse(vector<int> &result,ListNode*head){
    ListNode* temp=head;
    while(temp!=nullptr){
        result.push_back(temp->val);
        temp=temp->next;
    }

}

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    traverse(result,head);
    return result;
}

```

## Submission at 2024-09-02 10:19:48


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
    Node* temp=head;
    int count=0;
    while(temp!=nullptr){
        if(temp->data==k){
            return count;
        }
        else{
            temp=temp->next;
            count++;
        }
    }
}

```

## Submission at 2024-09-02 10:20:27


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
    Node* temp=head;
    int count=1;
    while(temp!=nullptr){
        if(temp->data==k){
            return count;
        }
        else{
            temp=temp->next;
            count++;
        }
    }
}

```

## Submission at 2024-09-02 10:25:32


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
    Node* temp=head;
    int count=1;
    while(temp!=nullptr){
        if(count==k){
            return temp->data;
        }
        temp=temp->next;
        count++;
    }
    return -1;
}

```

## Submission at 2024-09-02 10:57:01


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
    int count=1;
    Node* curr=head;
    Node* prev=NULL;

    while(curr!=nullptr){
        Node*temp=curr;
        curr=curr->next;
        prev=temp;
        if(count==x){
            prev->next=curr->next;
        }
        count++;
        }
    while(curr!=nullptr){
        Node*curr=head;
        cout<<curr->data<<" ";
        curr=curr->next;

    }


    }
}

```

## Submission at 2024-09-02 10:58:47


```
/You are required to complete below method/

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

## Submission at 2024-09-09 10:03:58


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:06:54


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n%3==0){
            int ans=-Power(n/10);
        }
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:07:38


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n%3==0){
            int ans=-Power(n/10);
            return true;
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:11:28


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==1){
            return true;
        }
        if(n%-3==0){
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:12:51


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-3==0){
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:14:02


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-3==0){
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:15:00


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-3==0){
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-09 10:34:36


```
#include<iostream>
#include<string>
using namespace std;
int count(string s,char x,int i){
    int counter=0;
    int n=s.length()-1;
    if(i>n){
        return counter;
    }
    if(n==0){
        return 0;
    }
    if(x==s[i]){
        counter++;
        return count(s,x,i+1);
    }
}
int main(){
    string s;
    char x;
    int i;
    int result=count(s,x,0);
    cout<<result;
    

}
```

## Submission at 2024-09-09 10:41:15


```
#include<iostream>
#include<string>
using namespace std;
int count(string &s,char x,int i){
    int counter=0;
    int n=s.length()-1;
    if(i>n){
        return counter;
    }
    if(x!=s[i]){
        i++;
        return count(s,x,i);
    }
    else if(x==s[i]){
        return count(s,x,i+1);
    }
}
int main(){
    string s;
    char x;
    int i;
    int result=count(s,x,0);
    cout<<result;
}
```

## Submission at 2024-09-09 10:49:04


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
int Traverse(Node *head){
  Node*temp1=head;
  int count=1;
  while(temp1->next!=NULL){
    count++;
    temp=temp->next;
  }
  return count;
}
bool isPalindrome(Node *head) {
  Node*tail=
  int n=Traverse(head);
  
}
```

## Submission at 2024-09-09 10:51:53


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-3==0){
            return Power(n/3);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            return Power(n/3);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}

```

## Submission at 2024-09-09 10:52:54


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-10==0){
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%10==0){
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}

```

## Submission at 2024-09-09 10:57:58


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-10==0){
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            n=n%10;
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}

```

## Submission at 2024-09-09 10:58:35


```
#include<iostream>
using namespace std;
bool Power(int n){
    if(n==1 && n%3!=0){
        return false;
    }
    if(n<0){
        if(n==0){
            return true;
        }
        if(n%-3==0){
            n=n%10;
            return Power(n/10);
           
        }
        return false;
    }
    if(n==0){
        return true;
    }
    else{
        if(n%3==0){
            n=n%10;
            return Power(n/10);
        }
        
    }
}
int main(){
    int n;
    bool ans=Power(n);
    if(ans==true){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}

```

## Submission at 2024-09-09 11:06:57


```
#include<iostream>
#include<string>
using namespace std;
int count(string &s,char x,int i){
    int counter=0;
    int n=s.length()-1;
    if(i>n){
        return counter;
    }
    if(x!=s[i]){
        i++;
        return count(s,x,i);
    }
    else if(x==s[i]){
        counter++;
        return count(s,x,i+1);
    }
}
int main(){
    string s;
    char x;
    int i;
    int result=count(s,x,0);
    cout<<result;
}

```

## Submission at 2024-09-10 06:18:57


```
#include<iostream>
#include<string>
using namespace std;
int count(string &s,char x,int i){
    int counter=0;
    int n=s.length()-1;
    if(i>n){
        return counter;
    }
    if(x!=s[i]){
        i++;
        return count(s,x,i);
    }
        counter++;
        return count(s,x,i+1);
}
int main(){
    string s;
    char x;
    int i;
    int result=count(s,x,0);
    cout<<result;
}
```

## Submission at 2024-09-10 06:19:38


```
#include<iostream>
#include<string>
using namespace std;
int count(string &s,char x,int i){
    int counter=0;
    int n=s.length()-1;
    if(i>n){
        return counter;
    }
    if(x!=s[i]){
        i++;
        return count(s,x,i);
    }
        counter++;
        return count(s,x,i+1);
}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int i;
    int result=count(s,x,0);
    cout<<result;
}
```

## Submission at 2024-09-10 06:20:53


```
#include<iostream>
#include<string>
using namespace std;
int count(string &s,char x,int i){
    int counter=0;
    int n=s.length();
    if(i>n){
        return counter;
    }
    if(x!=s[i]){
        i++;
        return count(s,x,i);
    }
        counter++;
        return count(s,x,i+1);
}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int i;
    int result=count(s,x,0);
    cout<<result;
}
```

## Submission at 2024-09-10 06:24:38


```
#include<iostream>
#include<string>
using namespace std;

int count(string &s, char x, int i) {
    int n = s.length();
    if (i >= n) {
        return 0;  
    }
    if (x == s[i]) {
        return 1 + count(s, x, i + 1);
    } else {
        return count(s, x, i + 1);
    }
}

int main() {
    string s;
    cin >> s;
    char x;
    cin >> x;
    int result = count(s, x, 0);
    cout << result;
}

```

## Submission at 2024-09-12 10:04:29


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n==0 || n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n<0){
        return false;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    if(isPower){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:07:56


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n==0 || n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n<0){
        return false;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    if(isPower){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:09:13


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n==0 && n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n<0){
        return false;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    if(isPower){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:10:38


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n==0 || n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n<0){
        return false;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:12:30


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    if(n<=0){
        return false;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:15:01


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n<0){
        return false;
    }
    if(n==0 || n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:15:46


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n<=0){
        return false;
    }
    if(n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:16:28


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n<0){
        return false;
    }
    if(n==0 || n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:18:43


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n<1){
        return false;
    }
    if(n==0 || n%3!=0){
        return false;
    }
    if(n==1){
        return true;
    }
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-12 10:20:19


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n==1){
        return true;
    }
    if(n<=0){
        return false;
    }
    if(n%3!=0){
        return false;
    }
    
    return isPower(n/3);

}

int main(){
    int n;
    cin>>n;
    bool result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
```

## Submission at 2024-09-13 10:20:14


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
    Node* temp=head;
    Node*curr=head;
    Node*prev=NULL;
    while(temp->next!=NULL){
        if(prev==curr){
            prev->next=curr->next;
            curr->next=NULL;
        }
        prev=curr;
        curr=curr->next;
        temp=temp->next;
    }
    return head;
}

```

## Submission at 2024-09-13 10:28:15


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
    Node* temp=head;
    Node*curr=head;
    Node*prev=NULL;
    if(head ==NULL || head->next==NULL){
        return head;
    }
    while(temp->next!=NULL){
        if(prev==curr){
            prev->next=curr->next;
            curr->next=NULL;
        }
        prev=curr;
        curr=curr->next;
        temp=temp->next;
    }
    return head;
}

```

## Submission at 2024-09-13 10:35:54


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
    Node* temp=head;
    Node*curr=head;
    Node*prev=NULL;
    if(head ==NULL || head->next==NULL){
        return head;
    }
    while(temp->next!=NULL){
        if(prev->data==curr->data){
            prev->next=curr->next;
            curr->next=NULL;
        }
        prev=curr;
        curr=curr->next;
        temp=temp->next;
    }
    return head;
}

```

## Submission at 2024-09-13 10:40:19


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
    Node*curr=head;
    Node*remove=head;
    Node*prev=NULL;
    if(head ==NULL || head->next==NULL){
        return head;
    }
    while(temp->next!=NULL){
        if(prev->data==curr->data){
            prev->next=curr->next;
            curr->next=NULL;
        }
        prev=curr;
        curr=curr->next;
        temp=temp->next;
    }
    return head;
}

```

## Submission at 2024-09-13 10:46:41


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
    Node* temp=head;
    Node*curr=head;
    Node*prev=NULL;
    if(head ==NULL || head->next==NULL){
        return head;
    }
    while(temp!=NULL){
        if(prev==curr){
            prev->next=curr->next;
            curr->next=NULL;
        }
        prev=curr;
        curr=curr->next;
        temp=temp->next;
    }
    return head;
}
```

## Submission at 2024-09-13 11:04:56


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
    Node*curr=head;
    Node* temp=head;
    if(head==NULL || head->next==NULL){
            return head;
        }
    while(temp->next!=NULL){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
            delete temp->next;
        }
        temp=temp->next;
        curr=curr->next;
    }
    return head;
}
```

## Submission at 2024-09-13 11:10:43


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
    Node*curr=head;
    Node* temp=head;
    // if(head==NULL || head->next==NULL){
    //         return head;
    //     }
    while(temp!=NULL){
        if(curr->data==curr->next->data && curr->next!=NULL){
            curr->next=curr->next->next;
            curr->next=NULL;
            delete curr->next;
            curr=curr->next;
        }
        temp=temp->next;
    }
    return head;
}
```

## Submission at 2024-09-13 11:14:59


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
    Node*curr=head;
    // if(head==NULL || head->next==NULL){
    //         return head;
    //     }
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
            Node*temp=curr->next;
            delete temp;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:16:51


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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            temp=temp->next;
            
            delete temp;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:17:58


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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:18:32


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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
```

## Submission at 2024-09-13 11:19:36


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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:20:57


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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            curr->next=curr->next->next;
            delete curr->next;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:25:04


```

/*You are required to complete below method/

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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:26:00


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
    Node*curr=head;
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:26:50


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
    Node*curr=head;
    if(head==NULL || head->next!=NULL){
        return head;
    }
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:27:18


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
    Node*curr=head;
    if(head==NULL || head->next==NULL){
        return head;
    }
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:28:28


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
    Node*curr=head;
    if(head==NULL){
        return head;
    }
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:29:58


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
    Node*curr=head;
    if(head==NULL){
        return head;
    }
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:30:33


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
      if(head==NULL){
        return head;
    Node*curr=head;
  
    }
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:31:11


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
    if(head==NULL){
        return head;
    }
    Node*curr=head;
  
   
    while(curr!=NULL && curr->next!=NULL  ){
        if(curr->data==curr->next->data){
            Node*temp=curr->next;
            curr->next=temp->next;
            delete temp;
        }
            curr=curr->next;
        
    }
    return head;
}
```

## Submission at 2024-09-13 11:43:04


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
  vector<int>ans;
  Node*temp=head;
  while(temp!=NULL){
    ans.push_back(temp->data);
    temp=temp->next;
  }
  int n=ans.size()-1;
  for(int i=0;i<=n;i++){
    if(ans[i]!=ans[n-i]){
      return false;
    }
    else{
      return true;
    }
  }

    
}
```

## Submission at 2024-09-16 05:25:46


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        //Now for storing the elements into an vector with the maximum value..iterating through the row elements of the particular column..
        vector<int> vmax;
        vector<vector<int>>answer(m, vector<int>(n));
        for(int j=0;j<=n-1;j++){
            int max1=INT_MIN;
            for(int i=0;i<=m-1;i++){
                if(matrix[i][j]!=-1){
                    max1=max(matrix[i][j],max1);//maximum element across column is compared 
                }
            }
            vmax.push_back(max1);//maximum element is pushed back..
        }
        for(int i=0;i<=m-1;i++){
            for(int j=0;j<=n-1;j++){
                if(matrix[i][j]==-1){//now if we finds the matrix element with -1 then just replace it with Vmax of the j...
                    matrix[i][j]=vmax[j];
                    answer[i][j]=matrix[i][j];
                }
                else{
                    answer[i][j]=matrix[i][j];
                }
            }
        }
        return answer;
    }


```

## Submission at 2024-09-16 07:16:04


```
#include<iostream>
using namespace std;
bool isPower(int n){
    if(n==1){
        return true;
    }
    if(n%3!=0){
        return false;
    }
    else if(n<=0){
        return false;
    }
    return isPower(n/3);
}
int main(){
    int n;
    cin>>n;
    int result=isPower(n);
    if(result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-10-07 09:56:11


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    queue<int> qr;
    int n=q.size();
    vector<int> result(n);
    for(int i=0;i<n;i++){
        result[i]=q.front();
        if(!q.empty()){
            q.pop();
        }
    }
    reverse(result.begin(),result.end());
    for(int i=0;i<n;i++){
        qr.push(result[i]);
    }
    return qr;

}

```

## Submission at 2024-10-07 10:06:24


```
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
```

## Submission at 2024-10-07 10:07:22


```
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
```

## Submission at 2024-10-07 10:08:46


```
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
```

## Submission at 2024-10-07 11:03:54


```
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
```

## Submission at 2024-10-07 11:04:30


```
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
```

## Submission at 2024-10-28 10:04:41


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
    if(root==NULL){
        return 0;
    }
    int min=INT_MAX;
    if(min>root->data){
        min=root->data;
    }
    findMin(root->left);
    findMin(root->right);
    return min;
    

}


```

## Submission at 2024-10-28 10:06:02


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
    if(root==NULL){
        return 0;
    }
    int min=root->data;
    findMin(root->left);
    if(min>root->data){
        min=root->data;
    }
    findMin(root->right);
    return min;
    

}


```

## Submission at 2024-10-28 10:08:07


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
    if(root==NULL){
        return 0;
    }
    int min=root->data;
    findMin(root->left);
    if(min>root->data){
        min=root->data;
    }
    findMin(root->right);
    if(min>root->data){
        min=root->data;
    }
    return min;

}


```

## Submission at 2024-10-28 10:25:56


```

#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
int atk(vector<int> &nums,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto it:mp){
        if(it.second>=k){
            return it.first;
        }
    }
    return -1;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=atk(nums,k);
    return result;

}
```

## Submission at 2024-10-28 10:33:16


```
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// #include<vector>

int atk(vector<int> &nums,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto it:mp){
        if(it.second>=k){
            return it.first;
        }
    }
    return -1;
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result=atk(nums,k);
    cout<<result;

}
```

## Submission at 2024-10-28 10:47:01


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
  Node*temp1=head1;
  Node*temp2=head2;
  vector<int>r1;
  vector<int>r2;
  vector<int>result;
  while(temp1!=NULL){
    r1.push_back(temp1->data);
    temp1=temp1->next;
  }
  while(temp2!=NULL){
    r2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int n1=r1.size()-1;
  int n2=r2.size()-1;
  if(n1>n2){
    for(int i=0;i<=n1;i++){
      for(int j=0;j<=n2;j++){
        if(r1[i]==r2[j]){
          result.push_back(r1[i]);
        }
      }
    }
  }
  if(n2>n1){
    for(int i=0;i<=n2;i++){
      for(int j=0;j<=n1;j++){
        if(r1[j]==r2[i]){
          result.push_back(r1[j]);
        }
      }
    }
  }
  Node*temp=head1;
  int nr=result.size();
  for(int i=0;i<nr;i++){
    temp->data=result[i];
    temp=temp->next;
  }
  return head1;

}
```

## Submission at 2024-10-28 10:48:49


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
  if(head1==NULL){
    return head1;
  }
  if(head2==NULL){
    return head2;
  }
  Node*temp1=head1;
  Node*temp2=head2;
  vector<int>r1;
  vector<int>r2;
  vector<int>result;
  while(temp1!=NULL){
    r1.push_back(temp1->data);
    temp1=temp1->next;
  }
  while(temp2!=NULL){
    r2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int n1=r1.size()-1;
  int n2=r2.size()-1;
  if(n1>n2){
    for(int i=0;i<=n1;i++){
      for(int j=0;j<=n2;j++){
        if(r1[i]==r2[j]){
          result.push_back(r1[i]);
        }
      }
    }
  }
  if(n2>n1){
    for(int i=0;i<=n2;i++){
      for(int j=0;j<=n1;j++){
        if(r1[j]==r2[i]){
          result.push_back(r1[j]);
        }
      }
    }
  }
  Node*temp=head1;
  int nr=result.size();
  for(int i=0;i<nr;i++){
    temp->data=result[i];
    temp=temp->next;
  }
  return head1;

}
```

## Submission at 2024-10-28 10:53:31


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
int treePathSum(Node* root)
{
  if(root==NULL){
    return 0;
  }
}

```

## Submission at 2024-10-28 11:04:13


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
  if(head1==NULL){
    return head1;
  }
  if(head2==NULL){
    return head2;
  }
  Node*temp1=head1;
  Node*temp2=head2;
  vector<int>r1;
  vector<int>r2;
  vector<int>result;
  while(temp1!=NULL){
    r1.push_back(temp1->data);
    temp1=temp1->next;
  }
  while(temp2!=NULL){
    r2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int n1=r1.size()-1;
  int n2=r2.size()-1;
  if(n1>n2){
    for(int i=0;i<=n1;i++){
      for(int j=0;j<=n2;j++){
        if(r1[i]==r2[j]){
          result.push_back(r1[i]);
        }
      }
    }
  }
  if(n2>n1){
    for(int i=0;i<=n2;i++){
      for(int j=0;j<=n1;j++){
        if(r1[j]==r2[i]){
          result.push_back(r1[j]);
        }
      }
    }
  }
  int nr=result.size();
  sort(result.begin(),result.end());
  vector<int>fres;
  unordered_map<int,int>mp;
  for(int i=0;i<nr;i++){
    mp[result[i]]++;
  }
  for(auto it:mp){
    fres.push_back(it.first);
  }
  Node*temp=head1;
  int freslen=fres.size();
  for(int i=0;i<freslen;i++){
    temp->data=fres[i];
    temp=temp->next;
  }
  return head1;

}
```

## Submission at 2024-10-28 11:05:26


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
  if(head1==NULL){
    return head1;
  }
  if(head2==NULL){
    return head2;
  }
  Node*temp1=head1;
  Node*temp2=head2;
  vector<int>r1;
  vector<int>r2;
  vector<int>result;
  while(temp1!=NULL){
    r1.push_back(temp1->data);
    temp1=temp1->next;
  }
  while(temp2!=NULL){
    r2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int n1=r1.size()-1;
  int n2=r2.size()-1;
  if(n1>n2){
    for(int i=0;i<=n1;i++){
      for(int j=0;j<=n2;j++){
        if(r1[i]==r2[j]){
          result.push_back(r1[i]);
        }
      }
    }
  }
  if(n2>n1){
    for(int i=0;i<=n2;i++){
      for(int j=0;j<=n1;j++){
        if(r1[j]==r2[i]){
          result.push_back(r1[j]);
        }
      }
    }
  }
  int nr=result.size();
  sort(result.begin(),result.end());
  vector<int>fres;
  unordered_map<int,int>mp;
  for(int i=0;i<nr;i++){
    mp[result[i]]++;
  }
  for(auto it:mp){
    fres.push_back(it.first);
  }
  Node*temp=head1;
  sort(fres.begin(),fres.end());
  int freslen=fres.size();
  for(int i=0;i<freslen;i++){
    temp->data=fres[i];
    temp=temp->next;
  }
  return head1;

}
```

## Submission at 2024-10-28 11:07:08


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
  if(head1==NULL){
    return head1;
  }
  if(head2==NULL){
    return head2;
  }
  Node*temp1=head1;
  Node*temp2=head2;
  vector<int>r1;
  vector<int>r2;
  vector<int>result;
  while(temp1!=NULL){
    r1.push_back(temp1->data);
    temp1=temp1->next;
  }
  while(temp2!=NULL){
    r2.push_back(temp2->data);
    temp2=temp2->next;
  }
  int n1=r1.size()-1;
  int n2=r2.size()-1;
  if(n1>n2){
    for(int i=0;i<=n1;i++){
      for(int j=0;j<=n2;j++){
        if(r1[i]==r2[j]){
          result.push_back(r1[i]);
        }
      }
    }
  }
  if(n2>n1){
    for(int i=0;i<=n2;i++){
      for(int j=0;j<=n1;j++){
        if(r1[j]==r2[i]){
          result.push_back(r1[j]);
        }
      }
    }
  }
  int nr=result.size();
  sort(result.begin(),result.end());
  vector<int>fres;
  unordered_map<int,int>mp;
  for(int i=0;i<nr;i++){
    mp[result[i]]++;
  }
  for(auto it:mp){
    if(it.second>1){
      result.push_back(it.first);
    }
    if(it.second==1){
      result.push_back(it.first);
    }
  }
  Node*temp=head1;
  sort(fres.begin(),fres.end());
  int freslen=fres.size();
  for(int i=0;i<freslen;i++){
    temp->data=fres[i];
    temp=temp->next;
  }
  return head1;

}
```

## Submission at 2024-10-28 11:11:21


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
    if(root==NULL){
        return 0;
    }
    int min=root->data;
    if(min>=root->data){
        min=root->data;
    }
    findMin(root->left);
    
    findMin(root->right);
    return min;

}

```

## Submission at 2024-10-28 11:12:00


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
    if(root==NULL){
        return -1;
    }
    int min=root->data;
    if(min>=root->data){
        min=root->data;
    }
    findMin(root->left);
    
    findMin(root->right);
    return min;

}

```

## Submission at 2024-10-28 11:13:47


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
    int min=root->data;
    if(root==NULL){
        return min;
    }
    
    if(min>=root->data){
        min=root->data;
    }
    findMin(root->left);
    
    findMin(root->right);
    return min;

}

```

## Submission at 2024-10-28 11:15:39


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
    if(root==NULL){
        return min;
    }
    int min=root->data;
    if(min>=root->data){
        min=root->data;
    }
    findMin(root->left);
    findMin(root->right);
    return min;

}

```

## Submission at 2024-10-28 11:29:24


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
int traverse(Node *root,int min){
    if(root==NULL){
        return 0;
    }
    if(min>root->data){
        min=root->data;
    }
    traverse(root->left,min);
    traverse(root->right,min);
    return min;
}
int findMin(Node *root)
{
    int result=traverse(root,0);
    return result;
}

```

## Submission at 2024-10-29 12:12:28


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
void traverse(Node *root,vector<int>&ams){
    if(root==NULL){
        return;
    }
    traverse(root->left,ams);
    ams.push_back(root->data);
    traverse(root->right,ams);
}
int findMax(Node *root)
{
    vector<int>ams;
    traverse(root,ams);
    int max=INT_MIN;
    int n=ams.size();
    for(int i=0;i<n;i++){
        if(max<ams[i]){
            max=ams[i];
        }
    }
    return max;

}


```

## Submission at 2024-10-29 12:19:07


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
int path(Node*root,int&Max){
  if(!root)return -1000;
  int l=path(root->left,Max);
  int r=path(root->right,Max);
  int x=max(l+root->data,max(r+root->data,root->data));
  Max=max(l+r+root->data,max(x,max(max(l,r),Max)));
  return x;
    }
int treePathSum(Node* root)
{
  int Max=INT_MIN;
  path(root,Max);
  return Max;
}
```

## Submission at 2024-11-25 09:51:20


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta;
    int cntb;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a'){
            cnta++;
        }
        else if(s[i]=='b'){
            cntb++;
        }

    }
    if(cnta>cntb){
        cout<<'a';
    }
    else if(cntb<cnta){
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 09:51:39


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta;
    int cntb;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a'){
            cnta++;
        }
        else if(s[i]=='b'){
            cntb++;
        }

    }
    if(cnta>cntb){
        cout<<'a';
    }
    else if(cntb>cnta){
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 09:52:57


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta;
    int cntb;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a'){
            cnta++;
        }
        if(s[i]=='b'){
            cntb++;
        }

    }
    if(cnta>cntb){
        cout<<'a';
    }
    else if(cntb>cnta){
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 09:53:29


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta=0;
    int cntb=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a'){
            cnta++;
        }
        if(s[i]=='b'){
            cntb++;
        }

    }
    if(cnta>cntb){
        cout<<'a';
    }
    else if(cntb>cnta){
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 09:53:33


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta=0;
    int cntb=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a'){
            cnta++;
        }
        if(s[i]=='b'){
            cntb++;
        }

    }
    if(cnta>cntb){
        cout<<'a';
    }
    else if(cntb>cnta){
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 09:55:46


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnta=0;
    int cntb=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            cnta++;
        }
        else if(s[i]=='b'){
            cntb++;
        }

    }
    if(cnta>cntb){
        cout<<'a';
    }
    else{
        cout<<'b';
    }
}
```

## Submission at 2024-11-25 10:09:26


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if(ans[i+2]-ans[i+1]!=ans[i+1]-ans[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-11-25 10:13:38


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-11-25 10:14:10


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-11-25 10:14:25


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
```

## Submission at 2024-11-25 10:14:26


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:29


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:32


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:33


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:33


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:33


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:33


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:35


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:36


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:38


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:44


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:46


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:53


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:53


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:14:56


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:16:23


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:16:26


```
// write code from 
#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&ans,int n){
    for(int i=0;i<n-2;i++){
        if((ans[i+2]-ans[i+1])!=(ans[i+1]-ans[i])){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool aa=check(ans,n);
    if(aa){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-25 10:18:24


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<"YES";
}
```

## Submission at 2024-11-25 10:18:36


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<"YES";
}
```

## Submission at 2024-11-25 10:22:52


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:22:53


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:25:12


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:34:52


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:21


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:26


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:27


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:41


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:47


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:47


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:48


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:53


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:36:56


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:00


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:00


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:01


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(nums.begin(),nums.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:05


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:06


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:10


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:16


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:19


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:20


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:21


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:23


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:25


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:30


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:43


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:44


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:45


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:45


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:45


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:46


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:49


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:37:56


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:38:28


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n;int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:42:11


```
#include<bits/stdc++.h>
using namespace std;
vector<int>out(vector<int>&ans,int n,int target){
    vector<int>result;
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    vector<int>out=check(ans,n,target);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:44:56


```
#include<bits/stdc++.h>
using namespace std;
vector<int>check(vector<int>&ans,int n,int target,vector<int>&result){
    
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    vector<int>result;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    check(ans,n,target,result);
    int j=out.size();
    for(int i=0;i<j;i++){
        cout<<out[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:45:44


```
#include<bits/stdc++.h>
using namespace std;
vector<int>check(vector<int>&ans,int n,int target,vector<int>&result){
    
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    vector<int>result;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    check(ans,n,target,result);
    int j=result.size();
    for(int i=0;i<j;i++){
        cout<<result[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:45:45


```
#include<bits/stdc++.h>
using namespace std;
vector<int>check(vector<int>&ans,int n,int target,vector<int>&result){
    
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    vector<int>result;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    check(ans,n,target,result);
    int j=result.size();
    for(int i=0;i<j;i++){
        cout<<result[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:45:47


```
#include<bits/stdc++.h>
using namespace std;
vector<int>check(vector<int>&ans,int n,int target,vector<int>&result){
    
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    vector<int>result;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    check(ans,n,target,result);
    int j=result.size();
    for(int i=0;i<j;i++){
        cout<<result[i]<<" ";
    }
}
```

## Submission at 2024-11-25 10:46:13


```
// Write Code From Scratch 
#include<bits/stdc++.h>
using namespace std;
vector<int>check(vector<int>&ans,int n,int target,vector<int>&result){
    
    for(int i=0;i<n;i++){
        if(ans[i]==target){
            result.push_back(i);
        }
    }
    return result;
}
int main(){
    int n;
    int target;
    cin>>n>>target;
    vector<int>result;
    
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    check(ans,n,target,result);
    int j=result.size();
    for(int i=0;i<j;i++){
        cout<<result[i]<<" ";
    }
}
```

## Submission at 2024-11-25 11:01:17


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
    Node*temp1=head1;
    Node*temp2=head2;
    Node*final=NULL;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data==temp2->data){
        final=new Node(temp1->data);
        return final->data;
      }
      else if(temp1->data>temp2->data){
        temp2=temp2->next;
      }
      else if(temp1->data<temp2->data){
        temp1=temp1->next;
      }
      
    }
    return NULL;
     
}



```

## Submission at 2024-11-25 11:01:48


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
    Node*temp1=head1;
    Node*temp2=head2;
    Node*final=NULL;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data==temp2->data){
        final=new Node(temp1->data);
        return final;
      }
      else if(temp1->data>temp2->data){
        temp2=temp2->next;
      }
      else if(temp1->data<temp2->data){
        temp1=temp1->next;
      }
      
    }
    return NULL;
     
}



```

## Submission at 2024-11-25 11:01:55


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
    Node*temp1=head1;
    Node*temp2=head2;
    Node*final=NULL;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data==temp2->data){
        final=new Node(temp1->data);
        return final;
      }
      else if(temp1->data>temp2->data){
        temp2=temp2->next;
      }
      else if(temp1->data<temp2->data){
        temp1=temp1->next;
      }
      
    }
    return NULL;
     
}



```

## Submission at 2024-11-25 11:11:16


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
bool isBST(vector<int>&ans,int n){
    int mid=n/2;
    for(int i=0;i<=mid;i++){
        if(ans[mid-i]>ans[mid]){
            return false;
        }
        else if(ans[mid+i]<ans[mid]){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool result=isBST(ans,n);
    if(result){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

```

## Submission at 2024-11-25 11:11:20


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;
bool isBST(vector<int>&ans,int n){
    int mid=n/2;
    for(int i=0;i<=mid;i++){
        if(ans[mid-i]>ans[mid]){
            return false;
        }
        else if(ans[mid+i]<ans[mid]){
            return false;
        }
    }
    return true;

}
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    bool result=isBST(ans,n);
    if(result){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

```

## Submission at 2024-11-25 11:22:43


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  for(int i=0;i<n;i++){
    if(max<result[i]){
      max=result[i];
    }
    return max;
  }
  return -1;
  

}

```

## Submission at 2024-11-25 11:25:24


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  int size=result.size();
  for(int i=0;i<size;i++){
    if(max<result[i]){
      max=result[i];
    }
  }
  if(max<n){
      return max;
  }
  else{
    return -1;
  }
  

}

```

## Submission at 2024-11-25 11:25:24


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  int size=result.size();
  for(int i=0;i<size;i++){
    if(max<result[i]){
      max=result[i];
    }
  }
  if(max<n){
      return max;
  }
  else{
    return -1;
  }
  

}

```

## Submission at 2024-11-25 11:27:39


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
  and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  int size=result.size();
  for(int i=0;i<size;i++){
    if(max<result[i]){
      max=result[i];
    }
  }
  return -1;
  }
  
}
```

## Submission at 2024-11-25 11:27:44


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
  and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  int size=result.size();
  for(int i=0;i<size;i++){
    if(max<result[i]){
      max=result[i];
    }
  }
  return -1;
  }
  
}
```

## Submission at 2024-11-25 11:28:42


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
  and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  int size=result.size();
  for(int i=0;i<size;i++){
    if(max<result[i]){
      max=result[i];
    }
  }
  return -1;
  }
  

```

## Submission at 2024-11-25 11:30:30


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
  return -1;
}

```

## Submission at 2024-11-25 11:33:45


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
    Node*temp1=head1;
    Node*temp2=head2;
    Node*final=NULL;
    if(head1==NULL || head2==NULL){
      return NULL;
    }
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->data==temp2->data){
        final=new Node(temp1->data);
        return final;
      }
      else if(temp1->data>temp2->data){
        temp2=temp2->next;
      }
      else if(temp1->data<temp2->data){
        temp1=temp1->next;
      }
      
    }
    return NULL;
     
}
```

## Submission at 2024-11-25 11:36:59


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
  and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node*root,int n,vector<int>&result){
  if(root==NULL){
    return;
  }
  traverse(root->left);
  result.push_back(root->data);
  traverse(root->right);
}
int findMaxForN(Node* root, int n)
{
  vector<int>result;
  int max=INT_MIN;
  traverse(root,n,result);
  int size=result.size();
  for(int i=0;i<size;i++){
    if(max<result[i]){
      max=result[i];
    }
  }
  return -1;
  }
```

