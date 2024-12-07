## Submission at 2024-08-09 04:47:30


```
user = input()
print("Hello ", user, "!")
```

## Submission at 2024-08-09 04:48:22


```
user = input()
print("Hello " + user + "!")
```

## Submission at 2024-08-09 04:48:52


```
user = input()
print("Hello " + user + "!")
```

## Submission at 2024-08-09 04:53:27


```
n = int(input())
for i in range(n):
    user = input()
    print("Hello " + user + "!")
```

## Submission at 2024-08-09 04:57:39


```
n = int(input())
assert n>=1 and n<=100, ("Invalid number")
for i in range(n):
    user = input()
    assert len(user)>=1 and len(user)<=100, "Ivalid name"
    print("Hello " + user + "!")
```

## Submission at 2024-08-09 05:00:45


```
n = int(input())
assert n>=1 and n<=100, ("Invalid number")
for i in range(n):
    user = input()
    assert len(user)>=1 and len(user)<=100, "Ivalid name"
    print("Hello " + user + "!")
```

## Submission at 2024-08-09 05:05:33


```
user = input()
assert len(user)>=1 and len(user)<=100
print("Hello " + user + "!")
```

## Submission at 2024-08-09 05:07:11


```
n = int(input())
assert n>=1 and n<=100, ("Invalid number")
for i in range(n):
    user = input()
    assert len(user)>=1 and len(user)<=100, "Invalid name"
    print("Hello " + user + "!")
```

## Submission at 2024-08-16 04:49:00


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    int res;
    if (x==0){
        res = 0;
    }
    else if (x==1){
        res = 1;
    }
    else if (x>1){
        res = fibonacci(x-1) + fibonacci(x-2);
    }
    return res;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:57:46


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==2 || n==1){
        return true;
    }
    else if(n%2==0){
        n = n/2;
        isPowerOfTwo(n);
    }
    else{
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

## Submission at 2024-08-16 05:01:09


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==2 || n==1){
        return true;
    }
    else if(n%2==0){
        n = n/2;
        isPowerOfTwo(n);
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << isPowerOfTwo(n) << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:02:00


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==2 || n==1){
        return true;
    }
    else if(n%2==0){
        n = n/2;
        isPowerOfTwo(n);
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n)) ? "true" : "false" << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:02:45


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==2 || n==1){
        return true;
    }
    else if(n%2==0){
        n = n/2;
        isPowerOfTwo(n);
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n))? "true"; "false" << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:04:10


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==2 || n==1){
        return true;
    }
    else if(n%2==0){
        n = n/2;
        isPowerOfTwo(n);
    }
    else{
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

## Submission at 2024-08-16 05:07:26


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==1){
        return true;
    }
    else if(n%2==0){
        n = n/2;
        isPowerOfTwo(n);
    }
    else{
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

## Submission at 2024-08-16 05:09:25


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n%2!=0){
        return false;
    }
    else if(n==1){
        return true;
    }
    else{
        n=n/2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-16 05:10:14


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n%2!=0){
        return false;
    }
    else if(n==2 || n==1){
        return true;
    }
    else{
        n=n/2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-16 05:10:55


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n%2!=0){
        return false;
    }
    else if(n==2 || n==1){
        return true;
    }
    else{
        n=n/2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-16 05:12:39


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==2 || n==1){
        return true;
    }
    else if (n%2!=0){
        return false;
    }
    else{
        n=n/2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-16 05:24:11


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==2 || n==1){
        return true;
    }
    else if (n%2!=0 || n<=0){
        return false;
    }
    else{
        n=n/2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-22 05:16:24


```
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> result;

vector<vector<int>> permute(vector<int> &arr, int idx){
    if (idx == arr.size()){
        result.push_back(arr);
    }

    for (int i=idx; i<arr.size(); i++){
        swap(arr[i], arr[idx]);
        permute(arr, idx+1);
        swap(arr[i], arr[idx]);
    }

    return result;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    permute(arr, 0);
}
```

## Submission at 2024-08-22 05:21:05


```
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> result;

vector<vector<int>> permute(vector<int> &arr, int idx){
    if (idx == arr.size()){
        result.push_back(arr);
    }

    for (int i=idx; i<arr.size(); i++){
        swap(arr[i], arr[idx]);
        permute(arr, idx+1);
        swap(arr[i], arr[idx]);
    }

    return result;
}

int main(){
    int n; cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    permute(arr, 0);

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
}
```

## Submission at 2024-08-23 02:17:41


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateCombinations(vector<string>& result, string current, int open, int close, int max) {
    if (current.length() == max * 2) {
        result.push_back(current);
        return;
    }

    if (open < max) {
        generateCombinations(result, current + "(", open + 1, close, max);
    }
    if (close < open) {
        generateCombinations(result, current + ")", open, close + 1, max);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateCombinations(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> result = generateParenthesis(n);
    
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
    
    return 0;
}
```

## Submission at 2024-08-23 02:19:11


```
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

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
    string input;
    getline(cin, input);

    vector<int> nums;
    stringstream ss(input);
    int number;
    
    while (ss >> number) {
        nums.push_back(number);
    }

    vector<vector<int>> permutations = permute(nums);

    cout << "[";
    for (int i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); ++j) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != permutations.size() - 1) cout << ",";
    }
    cout << "]";

    return 0;
}
```

## Submission at 2024-08-23 02:35:24


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Pushing this vector to a vector of vector
    if (k == 0) {
        ans.push_back(current);
        return;
    }
    for (int i = left; i <= n; ++i)
    {
        current.push_back(i);
        combine(result, current, n, i + 1, k - 1);
        current.pop_back();
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

## Submission at 2024-08-23 02:38:18


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Pushing this vector to a vector of vector
    if (k == 0) {
        result.push_back(current);
        return;
    }
    for (int i = start; i <= n; ++i)
    {
        current.push_back(i);
        combine(result, current, n, i + 1, k - 1);
        current.pop_back();
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

## Submission at 2024-08-23 02:47:37


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    // Loop through the numbers starting from 'start' to 'n'
    for (int i = start; i <= n; ++i) {
        current.push_back(i);  // Include this number in the combination
        combine(i + 1, k, n, current, result);  // Recur with the next number
        current.pop_back();  // Backtrack: remove the number and try the next one
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

## Submission at 2024-08-23 09:39:11


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=1; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=1; i<n2; i++){
        cin>>arr2[i];
    }

    cout << (compare(arr1, arr2) ? "true" : "false") << endl;
}

```

## Submission at 2024-08-23 09:53:24


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    bool flag;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1[i] != arr2[i]){
            flag = false;
        }
        else{
            flag = true;
        }
    }
    return flag;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=1; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=1; i<n2; i++){
        cin>>arr2[i];
    }

    cout << (compare(arr1, arr2) ? "true" : "false") << endl;
}

```

## Submission at 2024-08-23 09:55:04


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    bool flag;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1[i] != arr2[i]){
            flag = false;
        }
        else{
            flag = true;
        }
    }
    return flag;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=1; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=1; i<n2; i++){
        cin>>arr2[i];
    }

    cout << (compare(arr1, arr2) ? "true" : "false") << endl;
}

```

## Submission at 2024-08-23 09:56:23


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    bool flag;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1[i] != arr2[i]){
            flag = false;
        }
        else{
            flag = true;
        }
    }
    return flag;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=1; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=1; i<n2; i++){
        cin>>arr2[i];
    }

    cout << (compare(arr1, arr2) ? "True" : "False") << endl;
}

```

## Submission at 2024-08-23 09:57:39


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    bool flag;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1[i] != arr2[i]){
            flag = false;
            break;
        }
        else{
            flag = true;
        }
    }
    return flag;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=1; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=1; i<n2; i++){
        cin>>arr2[i];
    }

    cout << (compare(arr1, arr2) ? "true" : "false") << endl;
}

```

## Submission at 2024-08-23 10:16:39


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    bool flag;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1[i] != arr2[i]){
            flag = false;
            break;
        }
        else{
            flag = true;
        }
    }
    return flag;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    if (compare(arr1, arr2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

```

## Submission at 2024-08-23 10:19:53


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1.size() != arr2.size()){
            return flase;
        }
        if (arr1[i] != arr2[i]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    if (compare(arr1, arr2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

```

## Submission at 2024-08-23 10:21:21


```
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> arr1;
vector<int> arr2;

bool compare(vector<int> &arr1, vector<int> &arr2){
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if (arr1.size() != arr2.size()){
            return false;
        }
        if (arr1[i] != arr2[i]){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    for (int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int> arr2(n2);
    for (int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    if (compare(arr1, arr2)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}

```

## Submission at 2024-08-28 04:05:41


```
#include <iostream>
using namespace std;

int sum(int n){
    int sum=0;
    for (int i=1; i<=n; i++){
        if (i%3==0 || i%5==0 || i%7==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<(sum(n));

    return 0;
}
```

## Submission at 2024-08-28 07:40:22


```
#include <iostream>
#include <vector>
using namespace std;

int cntNumOfDigits(vector<int> &arr, int n){
    int cnt = 0;
    int totalCnt = 0;
    for (int i=0; i<n; i++){
        while(arr[i]!=0){
            arr[i] /= 10;
            cnt += 1;
        }
        if (cnt%2 == 0){
            totalCnt += 1;
        }
        cnt = 0;
    }
    return totalCnt;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<(cntNumOfDigits(arr, n));
    return 0;
}
```

## Submission at 2024-08-29 09:48:04


```
// #include <iostream>
// #include <vector>
// using namespace std;
// #include <bits/stdc++.h>

// int kthMissingInt(vector<int> &arr, int k, int newSize, int start, int n){
//     int newArr[k];
//     bool flag = false;

//     if (k<0){
//         flag = true;
//     }

//     while(flag==false){
//         for (int i=0; i<arr.size(); i++){
//             if (start==arr[i]){
//                 continue;
//             }
//         }
//         newArr[n] = start;
//         start++;
//         n++;
//         k-=1;
//         kthMissingInt(arr, k, newSize, start, n);
//     }

//     int last = newArr[-1];
//     return last;
// }

// int main(){
//     int size,k;
//     cin>>size>>k;
//     int start = 1;
//     int newSize = k;

//     vector<int> arr(size);
//     for (int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int result = kthMissingInt(arr, k, 1, 0);
//     cout<<result<<endl;
//     return 0;
// }



#include <iostream>
#include <vector>
using namespace std;

int kthMissingInt(vector<int> &arr, int k, int start, int n) {
    vector<int> newArr;
    int index = 0;
    while (k > 0) {
        if (index < arr.size() && arr[index] == start) {
            index++;
        } else {
            newArr.push_back(start);
            k--;
        }
        start++;
    }
    return newArr.back();
}

int main() {
    int size, k;
    cin >> size >> k;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int start = 1;
    int result = kthMissingInt(arr, k, start, 0);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-08-29 09:48:48


```
#include <iostream>
#include <vector>
using namespace std;

int kthMissingInt(vector<int> &arr, int k, int start, int n) {
    vector<int> newArr;
    int index = 0;
    while (k > 0) {
        if (index < arr.size() && arr[index] == start) {
            index++;
        } else {
            newArr.push_back(start);
            k--;
        }
        start++;
    }
    return newArr.back();
}

int main() {
    int size, k;
    cin >> size >> k;
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int start = 1;
    int result = kthMissingInt(arr, k, start, 0);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-08-29 11:13:32


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int size = m*n;

    vector<int> arr(size);
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ptr = -3;
    int ptr1 = -3;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cout<<arr[ptr+3]<<" ";
            ptr+=3;
        }
        cout<<endl;
        ptr = ptr1 + 1;
        ptr1++;
    }
}
```

## Submission at 2024-08-29 11:21:30


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int size = m*n;

    vector<int> arr(size);
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    int ptr = -n;
    int ptr1 = -n;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout<<arr[ptr+n]<<" ";
            ptr+=n;
        }
        cout<<endl;
        ptr = ptr1 + 1;
        ptr1++;
    }
}


```

## Submission at 2024-08-30 02:30:38


```
#include <iostream>
#include <vector>
using namespace std;

int triSum(vector<int> &arr, int n){
    if (n==1){
        return arr[0];
    }
    for (int i=0; i<n-1; i++){
        arr[i] = arr[i] + arr[i+1];
    }
    return triSum(arr, n-1);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = triSum(arr, n);
    cout<<result<<endl;
    return 0;
}
```

## Submission at 2024-08-30 03:00:13


```
#include <iostream>
#include <vector>

using namespace std;

vector<int> C;

void spiral(vector<vector<int>>& L, int rows, int cols, int start_i, int start_j, int count, int n) {
    if (count == n) {
        return;
    }

    int i = 0, j = 0;

    // Traverse right
    for (j = start_j; j < cols; j++) {
        i = start_i;
        count++;
        C.push_back(L[i][j]);
    }

    // Traverse down
    for (i = start_i + 1; i < rows; i++) {
        j = cols - 1;
        count++;
        C.push_back(L[i][j]);
    }

    // Traverse left
    for (j = cols - 2; j >= start_j; j--) {
        i = rows - 1;
        count++;
        C.push_back(L[i][j]);
    }

    // Traverse up
    for (i = rows - 2; i > start_i; i--) {
        j = start_j;
        count++;
        C.push_back(L[i][j]);
    }

    spiral(L, rows - 1, cols - 1, start_i + 1, start_j + 1, count, n);
}

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int n = rows * cols;
    vector<vector<int>> L(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> L[i][j];
        }
    }

    spiral(L, rows, cols, 0, 0, 0, n);

    for (int i = 0; i < C.size(); i++) {
        cout << C[i] << " ";
    }

    return 0;
}

```

## Submission at 2024-08-30 03:02:43


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])
    

  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])
    

  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])
    

  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])
    

  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

spiral(L,rows-1,cols-1,0,0,0,n)
for i in C:
  print(i,end = " ")
```

## Submission at 2024-08-30 03:10:24


```
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;
    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    vector<int> result = spiralOrder(matrix);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) cout << " ";
    }
    
    return 0;
}
```

## Submission at 2024-08-30 04:35:58


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n<0 || n%2!=0){
        return false;
    }
    if (n==2 || n==1){
        return true;
    }
    n/=2;
    isPowerOfTwo(n);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-30 04:39:12


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n<0 || n%2!=0){
        return false;
    }
    if (n==2 || n==1){
        return true;
    }
    else{
        n/=2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-30 04:39:47


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==2 || n==1){
        return true;
    }
    if (n<0 || n%2!=0){
        return false;
    }
    else{
        n/=2;
        isPowerOfTwo(n);
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

## Submission at 2024-08-30 05:00:27


```
#include <iostream>
using namespace std;

int pow(int x, int n, int k){
    if(n<=1){
        return x;
    }
    else{
        x = x*k;
        n-=1;
    }
    return pow(x,n,k);
}

int main(){
    int x,n;
    cin>>x>>n;
    int k=x;

    int result = pow(x,n,k);
    cout<<result;
}
```

## Submission at 2024-08-30 05:15:42


```
#include <iostream>
#include <vector>
using namespace std;

void maxArr(vector<int> &a, vector<int> &b, vector<int> c, int n, int k){
    while(k!=0){
        for (int i=0; i<n; i++){
            if (a[i]>b[i]){
                c.push_back(a[i]);
            }
            else{
                c.push_back(b[i]);
            }
        }
        k-=1;
        maxArr(a,b, c, n,k);
    }
    for (int i=0; i<n; i++){
        cout<<c[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int k=n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        cin>>b[i];
    }

    maxArr(a,b,c,n,k);
}
```

## Submission at 2024-08-30 05:20:12


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0; i<n; i++){
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]<b[i]){
            c[i] = b[i];
        }
        else{
            c[i] = a[i];
        }
    }
    for (int i=0; i<n; i++){
        cout<<c[i]<<" ";
    }

    return 0;
        
}
```

## Submission at 2024-08-30 05:22:19


```
#include <iostream>
using namespace std;

int pow(int x, int n, int k){
    if(n<=1){
        return x;
    }
    else{
        x = x*k;
        n-=1;
    }
    return pow(x,n,k);
}

int main(){
    int x,n;
    cin>>x>>n;
    int k=x;

    int result = pow(x,n,k);
    cout<<result;
    
    return 0;
}
```

## Submission at 2024-08-30 05:34:41


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
    Node* prev = head;
    Node* curr = head->next;
    Node* temp = head;

    while(curr->next!=NULL){
        prev = curr;
        curr = curr->next;
    }
    curr->next = temp;
    head = curr;

    return head;
}

```

## Submission at 2024-08-30 06:01:35


```
s = input()
ch = []

n = len(s)

for i in range(n):
    ch[i] = s.charAt[i]

def isPal(ch,k,j,n):
    while (k != n/2):
        if s.charAt[j] != s.charAt[n-j]:
            return false
            break
        else:
            isPal(ch, k+1, j+1, n)

    return true

if isPal(ch, 0, 0, n):
    print("YES")
else:
    print("NO")

```

## Submission at 2024-08-30 06:02:44


```
#include <iostream>
using namespace std;

int pow(int x, int n, int k){
    if(n<=1){
        return x;
    }
    else{
        x = x*k;
        n-=1;
    }
    return pow(x,n,k);
}

int main(){
    int x,n;
    cin>>x>>n;
    int k=x;

    int result = pow(x,n,k);
    cout<<result;
}
```

## Submission at 2024-08-30 06:08:25


```
#include <iostream>
using namespace std;

int pow(int x, int n, int k){
    if(n==1){
        return x;
    }
    if(n==0){
        return 1;
    }
    if (n<0){
        n = -n;
        return ((1/pow(x,n,k)));
    }
    else{
        x = x*k;
        n-=1;
    }
    return pow(x,n,k);
}

int main(){
    int x,n;
    cin>>x>>n;
    int k=x;

    int result = pow(x,n,k);
    cout<<result;
}
```

## Submission at 2024-08-30 06:11:38


```
#include <iostream>
using namespace std;

int pow(int x, int n, int k){
    if(n==1){
        return x;
    }
    if(n==0){
        return 1;
    }
    if (n<0){
        n = -n;
        int y = pow(x,n,k);
        return 1/y;
    }
    else{
        x = x*k;
        n-=1;
    }
    return pow(x,n,k);
}

int main(){
    int x,n;
    cin>>x>>n;
    int k=x;

    int result = pow(x,n,k);
    cout<<result;
}
```

## Submission at 2024-08-30 09:40:28


```
#include <iostream>
#include <string>
using namespace std;

string isPal(string str, int k, int i){
    string result = "YES";
    while(i<k/2){
        if (str[i] != str[k-1-i]){
            result = "NO";
            break;
        }
        i++;
        isPal(str,k,i);
    }
    return result;
}

int main(){
    string str;
    cin>>str;
    int k = str.length();

    cout<<isPal(str, k, 0)<<endl;

    return 0;
}
```

## Submission at 2024-09-13 03:04:35


```
#include <iostream>

using namespace std;

bool isPowerOfThree(int n) {
    if (n==3 || n==1){
        return true;
    }
    if (n<0 || n%3!=0){
        return false;
    }
    else{
        n/=3;
        isPowerOfThree(n);
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfThree(n) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-09-13 03:05:50


```
#include <iostream>

using namespace std;

bool isPowerOfThree(int n) {
    if (n==3 || n==1){
        return true;
    }
    if (n<0 || n%3!=0){
        return false;
    }
    else{
        n/=3;
        isPowerOfThree(n);
    }
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfThree(n) ? "True" : "False") << endl;

    return 0;
}
```

## Submission at 2024-09-13 03:13:29


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
    Node *temp = head;
    if (temp->data == x){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (temp->next->data == x){
                temp->next == temp->next->next;
            }
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:15:39


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
    Node *temp = head;
    if (temp->data == x){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (temp->next->data == x){
                temp->next == temp->next->next;
            }
            temp = temp->next;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:18:30


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
    Node *temp = head;
    count = 2;
    if (x==1){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (count == x){
                temp->next == temp->next->next;
            }
            temp = temp->next;
            count++;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:22:28


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
    Node *temp = head;
    int count = 2;
    if (x==1){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (count == x){
                temp->next == temp->next->next;
            }
            temp = temp->next;
            count++;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:25:00


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
    Node *temp = head;
    int count = 2;
    if (x==1){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (count == x){
                temp->next == temp->next->next;
                break;
            }
            temp = temp->next;
            count++;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:28:30


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
    Node *temp = head;
    int count = 2;
    if (x==1){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (count == x){
                temp->next == temp->next->next;
                return head;
            }
            temp = temp->next;
            count++;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:34:34


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
    Node *temp = head;
    int count = 2;
    if (x==1){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (count == x){
                Node *node = temp->next
                temp->next == temp->next->next;
                delete node;
                return head;
            }
            temp = temp->next;
            count++;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:34:54


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
    Node *temp = head;
    int count = 2;
    if (x==1){
        head = head->next;
    }
    else{
        while(temp->next!=NULL){
            if (count == x){
                Node *node = temp->next
                temp->next == temp->next->next;
                delete(node);
                return head;
            }
            temp = temp->next;
            count++;
        }
    }
    return head;
}

```

## Submission at 2024-09-13 03:41:28


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
    ListNode *temp = head;
    while(temp->next!=nullptr){
        result.push_back(temp->data);
    }
    return result;
}

```

## Submission at 2024-09-13 03:41:47


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
    ListNode *temp = head;
    while(temp->next!=nullptr){
        result.push_back(temp->val);
    }
    return result;
}

```

## Submission at 2024-09-13 03:42:40


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
    while(temp->next!=nullptr){
        result.push_back(temp->val);
    }
    return result;
}

```

## Submission at 2024-09-13 03:43:39


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
    while(temp->next!=nullptr){
        result.push_back(temp->val);
        temp = temp->next;
    }
    return result;
}

```

## Submission at 2024-09-13 03:44:27


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
    while(temp!=nullptr){
        result.push_back(temp->val);
        temp = temp->next;
    }
    return result;
}

```

## Submission at 2024-09-13 03:48:30


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
    int x;
    int count = 1;
    Node *temp = head;

    while(temp!=nullptr){
        if (count == k){
            x = temp->data;
            return x;
        }
        temp = temp->next;
        count++;
    }
    return -1;
}

```

## Submission at 2024-09-13 04:36:40


```
#include <iostream>
#include <string>
using namespace std;

bool isPal(string s, int i){
    int n = s.length();
    if (n==0 || n==1){
        return true;
    }
    if (s[i] != s[n-1-i]){
        return false;
    }
    if (i>=n/2){
        return true;
    }

    return isPal(s,i+1);
}

int main(){
    string s;
    cin>>s;

    if (isPal(s, 0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
```

## Submission at 2024-10-04 05:17:02


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-04 05:42:47


```
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> temperatures(n);
    vector<int> answer(n);

    for (int i=0; i<n; i++){
        cin>>temperatures[i];
    }

    for (int i=0; i<n; i++){
        if (i==n-1){
            answer[i] = 0;
            break;
        }
        int count = 0;
        for (int j=i+1; j<n; j++){
            if (temperatures[j] > temperatures[i]){
                count = j-i;
                break;
            }
        }
        answer[i] = count;
    }

    for (int i=0; i<n; i++){
        cout<<answer[i]<<" ";
    }
}
```

## Submission at 2024-10-04 05:50:56


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int result = -1;

    vector<int> bloomDay(n);

    for (int i=0; i<n; i++){
        cin>>bloomDay[i];
    }

    int min = bloomDay[0];
    int max = bloomDay[0];
    for (int i=0; i<n; i++){
        if (bloomDay[i] < min){
            min = bloomDay[i];
        }
        if (bloomDay[i] > max){
            max = bloomDay[i];
        }
    }

    int low = min;
    int high = max;

    cout<<result;
}
```

## Submission at 2024-10-04 05:59:16


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int result = -1;

    vector<int> boards(n);
    for (int i=0; i<n; i++){
        cin>>boards[i];
    }

    int max = boards[0];
    for (int i=0; i<n; i++){
        if (boards[i]>max){
            max = boards[i];
        }
    }

    if (n==k){
        result = max;
    }

    cout<<result;
}
```

## Submission at 2024-10-04 06:19:01


```
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin>>n;
    queue<int> tickets();

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        tickets.push(ele);
    }

    cin>>k;
    int count;

    bool flag = false;
    while(flag == false){
        if (tickets.front()!=0 && k==0){
            k = tickets.size();
        }

        if (tickets.front()==0 && k==0){
            cout<<count;
        }

        else{
            tickets.push(tickets.front()-1);
            tickets.pop();
            k--;
            count++;
        }
    }
}
```

## Submission at 2024-10-16 07:49:36


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    s.tolower();
    t.tolower();
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-16 07:51:47


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-16 07:53:15


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // transform(t.begin(), t.end(), t.begin(), ::tolower);
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-16 07:54:11


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-16 07:59:48


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // transform(t.begin(), t.end(), t.begin(), ::tolower);
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            cout<< s1[i] << " " << t1[i] << endl;
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-16 08:00:17


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // transform(t.begin(), t.end(), t.begin(), ::tolower);
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            // cout<< s1[i] << " " << t1[i] << endl;
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }

        cout<<result;
    }
}
```

## Submission at 2024-10-16 08:04:03


```
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // transform(t.begin(), t.end(), t.begin(), ::tolower);
    vector<char> s1, t1;
    string result = "true";

    if (s.length() != t.length()){
        result = "false";
        cout<<result;
        return 0;
    }

    else{
        for (int i=0; i<s.length(); i++){
            s1.push_back(s[i]);
            t1.push_back(t[i]);
        }

        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());

        for (int i=0; i<s1.size(); i++){
            // cout<< s1[i] << " " << t1[i] << endl;
            if (s1[i] != t1[i]){
                result = "false";
                break;
            }
        }
        cout<<result;
    }
}
```

## Submission at 2024-10-16 08:07:53


```
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin>>n;
    queue<int> tickets;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        tickets.push(ele);
    }

    cin>>k;
    int count = 0;

    bool flag = false;
    while(flag == false){
        if (tickets.front()!=0 && k==0){
            k = tickets.size();
        }

        if (tickets.front()==0 && k==0){
            cout<<count;
            break;
        }

        else{
            tickets.push(tickets.front()-1);
            tickets.pop();
            k--;
            count++;
        }
    }
    return 0;
}
```

## Submission at 2024-10-16 08:20:02


```
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n, k;
    cin>>n;
    queue<int> tickets;

    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        tickets.push(ele);
    }

    cin>>k;
    int count = 0;

    while(true){
        int front = tickets.front();
        tickets.pop();

        if (front > 1){
            tickets.push(front - 1);
        }

        if (k==0){
            if (front == 1){
                cout<<count+1;
                break;
            }
            k = tickets.size()-1;
        }
        else{
            k--;
        }

        count++;
    }
    return 0;
}
```

## Submission at 2024-10-18 04:38:06


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    
    vector<int> length(n);
    for (int i=0; i<n; i++){
        cin>>length[i];
    }

    int max = length[0];
    for (int i=1; i<n; i++){
        if (length[i]>max){
            max = length[i];
        }
    }

    int ()
}
```

## Submission at 2024-10-23 09:28:46


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> len_boards(n);
    for (int i=0; i<n; i++){
        cin>>len_boards[i];
    }

    int low = len_boards[0];
    int high = 0;

    for (int i=0; i<n; i++){
        high+=len_boards[i];

        if (len_boards[i] > low){
            low = len_boards[i];
        }
    }

    

    while (low<high){
        int mid = (low+high)/2;
        int one_painter = 0;
        int painter = 1;
        for (int i=0; i<n; i++){
            if (len_boards[i] <= mid-one_painter){
                one_painter += len_boards[i];
            }
            else{
                painter++;
                one_painter = len_boards[i];
            }
        }
        //  cout << mid << " " << painter << endl;
        if (painter <= k){
            high = mid-1;
        }
        else if(painter > k){
            low = mid+1;
        }
    }
    cout<< low;
    return 0;
}
```

## Submission at 2024-10-23 09:31:38


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> len_boards(n);
    for (int i=0; i<n; i++){
        cin>>len_boards[i];
    }

    int low = len_boards[0];
    int high = 0;

    for (int i=0; i<n; i++){
        high+=len_boards[i];

        if (len_boards[i] > low){
            low = len_boards[i];
        }
    }

    

    while (low<=high){
        int mid = (low+high)/2;
        int one_painter = 0;
        int painter = 1;
        for (int i=0; i<n; i++){
            if (len_boards[i] <= mid-one_painter){
                one_painter += len_boards[i];
            }
            else{
                painter++;
                one_painter = len_boards[i];
            }
        }
        //  cout << mid << " " << painter << endl;
        if (painter <= k){
            high = mid-1;
        }
        else if(painter > k){
            low = mid+1;
        }
    }
    cout<< low;
    return 0;
}
```

## Submission at 2024-10-23 09:53:22


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> len_boards(n);
    for (int i=0; i<n; i++){
        cin>>len_boards[i];
    }

    int low = len_boards[0];
    int high = 0;

    for (int i=0; i<n; i++){
        high+=len_boards[i];

        if (len_boards[i] > low){
            low = len_boards[i];
        }
    }

    

    while (low<=high){
        int mid = (low+high)/2;
        int one_painter = 0;
        int painter = 1;
        for (int i=0; i<n; i++){
            if (len_boards[i] <= mid-one_painter){
                one_painter += len_boards[i];
            }
            else{
                painter++;
                one_painter = len_boards[i];
            }
        }
        //  cout << mid << " " << painter << endl;
        if (painter <= k){
            high = mid-1;
        }
        else if(painter > k){
            low = mid+1;
        }
    }
    cout<< low;
    return 0;
}
```

## Submission at 2024-10-25 05:33:03


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool cmp(string ransomNote, string magazine){

}

int main(){
    string ransomNote, magazine;
    cin>>ransomNote;
    cin>>magazine;

    cout<<true;
}
```

## Submission at 2024-10-25 05:33:32


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool cmp(string ransomNote, string magazine){

}

int main(){
    string ransomNote, magazine;
    cin>>ransomNote;
    cin>>magazine;

    cout<<"true";
}
```

## Submission at 2024-10-25 05:45:12


```
#include<iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string pattern;

    cin>>pattern;
    cin>>s;

    int count = 0;
    for (int i=0; i<s.length(); i++){
        if (s[i] == ' '){
            count++;
        }
    }
    cout<<count<<endl;

    if (pattern.length() == count){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-25 05:45:56


```
#include<iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    string pattern,s;

    cin>>pattern;
    cin>>s;

    int count = 0;
    for (int i=0; i<s.length(); i++){
        if (s[i] == ' '){
            count++;
        }
    }
    cout<<count<<endl;

    if (pattern.length() == count){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-25 05:50:30


```
pattern = input()
s = input()
count = 0
for i in range(len(s)):
    if (s[i] == ' '):
        count = count + 1

if len(pattern) == count+1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 05:50:31


```
pattern = input()
s = input()
count = 0
for i in range(len(s)):
    if (s[i] == ' '):
        count = count + 1

if len(pattern) == count+1:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:05:24


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
    Node* temp1 = num1;
    Node* temp2 = num2;

    vector<int> n1;
    vector<int> n2;

    while(temp1->next != NULL){
        n1.push_back(temp1->data);
    }

    while(temp2->next != NULL){
        n2.push_back(temp2->data);
    }

    // for (int i=0; i<n1.size(); i++){
    //     cout<<n1[i]<<" ";
    // }

    // for (int i=0; i<n2.size(); i++){
    //     cout<<n2[i]<<" ";
    // }
    
    return num1;
}
```

## Submission at 2024-10-25 06:05:29


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
    Node* temp1 = num1;
    Node* temp2 = num2;

    vector<int> n1;
    vector<int> n2;

    while(temp1->next != NULL){
        n1.push_back(temp1->data);
    }

    while(temp2->next != NULL){
        n2.push_back(temp2->data);
    }

    // for (int i=0; i<n1.size(); i++){
    //     cout<<n1[i]<<" ";
    // }

    // for (int i=0; i<n2.size(); i++){
    //     cout<<n2[i]<<" ";
    // }
    
    return num1;
}
```

## Submission at 2024-10-25 06:25:16


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
    Node* temp1 = num1;
    Node* temp2 = num2;

    vector<int> n1;
    vector<int> n2;
    while(temp1->next != NULL){
        n1.push_back(temp1->data);
        temp1 = temp1->next;
    }

    while(temp2->next != NULL){
        n2.push_back(temp2->data);
        temp2 = temp2->next;
    }

    int nm1 = 0;
    int nm2 = 0;

    for(int i=n1.size()-1; i>=0; i--){
        nm1 = nm1 + (n1[i]*(10^(i+1)));
    }

    for(int i=n2.size()-1; i>=0; i--){
        nm2 = nm2 + (n2[i]*(10^(i+1)));
    }
    
    int result = nm1 + nm2;
    vector<int> finalvec;
    for (int ele:result){
        finalvec.push_back(ele);
    }
    
    Node* head = NULL;
    head->data = finalvec[0];
    Node* temp = head;

    for (int i=1; i<finalvec.size(); i++){
        temp->next->data = finalvec[i];
    }

    temp->next = NULL;

    return head;

}
```

## Submission at 2024-10-25 06:32:26


```
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

bool cmp(string ransomNote, string magazine){
    if (magazine.length()<ransomNote.length()){
        return false;
    }

    unordered_map<char, int> rn;
    unordered_map<char, int> m;

    
}

int main(){
    string ransomNote, magazine;
    cin>>ransomNote;
    cin>>magazine;

    if (cmp(ransomNote, magazine)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

```

## Submission at 2024-10-25 06:33:37


```
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

bool cmp(string ransomNote, string magazine){
    if (magazine.length()<ransomNote.length()){
        return false;
    }

    unordered_map<char, int> rn;
    unordered_map<char, int> m;

    
}

int main(){
    string ransomNote, magazine;
    cin>>ransomNote;
    cin>>magazine;

    if (cmp(ransomNote, magazine)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}

```

## Submission at 2024-10-25 06:41:26


```
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

bool cmp(string ransomNote, string magazine){
    if (magazine.length()<ransomNote.length()){
        return false;
    }

    unordered_map<char, int> rn;
    unordered_map<char, int> m;

    for(int i=0; i<ransomNote.length(); i++){
        rn[i]++;
    }

    for(int i=0; i<magazine.length(); i++){
        m[i]++;
    }
    
    bool flag = true;
    char tmp;
    for (auto v:rn){
        char temp = v.first;
        if (m.find(temp)==m.end()){
            flag = false;
        }
    }
    return flag;
}

int main(){
    string ransomNote, magazine;
    cin>>ransomNote;
    cin>>magazine;

    if (cmp(ransomNote, magazine)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:42:20


```
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

bool cmp(string ransomNote, string magazine){
    if (magazine.length()<ransomNote.length()){
        return false;
    }
}

int main(){
    string ransomNote, magazine;
    cin>>ransomNote;
    cin>>magazine;

    if (cmp(ransomNote, magazine)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:44:53


```
pattern = input()
s = input()
count = 0
for i in range(len(s)):
    if (s[i] == ' '):
        count = count + 1

if len(pattern) == count+1:
    print("true")
else:
    print("false")
```

## Submission at 2024-11-22 05:03:28


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }

    for (int i=n-1; i>0; i--){
        for (int j=i; j>0; j--){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:05:56


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }

    for (int i=n-1; i>0; i--){
        for (int j=i; j>0; j--){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:10:52


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum;
}
```

## Submission at 2024-11-22 05:15:30


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }

    for (int i=n-1; i>0; i--){
        for (int j=i; j>0; j--){
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:17:26


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            if(j==i-1){
                cout<<'*'<<endl;
            }
            cout<<'*'<<' ';
        }
    }

    for (int i=n-1; i>0; i--){
        for (int j=i; j>0; j--){
            if(j==1){
                cout<<'*'<<endl;
            }
            cout<<'*'<<' ';
        }
    }
}
```

## Submission at 2024-11-22 05:30:48


```
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1>>n2;

    unordered_map<int,int> m;
    for(int i=n1+1; i<n2; i++){
        int ans = (i-n1) + (n2-i);
        m[i] = ans;
    }

    int min = m[n1+1];

    for(auto v:m){
        if(v.second < min){
            min = v.second;
        }
    }

    int result;
    for(auto i:m){
        if (i.second == min){
            result = i.first;
        }
    }
    
    cout<<result;
}
```

## Submission at 2024-11-22 05:46:41


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    unordered_map<int, int> m;
    for (int i=0; i<n; i++){
        if(m.find(a[i]) != m.end()){
            m[a[i]]++;
        }
        else m[a[i]]++;
    }

    int count = 0;
    for(auto v:m){
        if (v.second>1){
            count+=v.second/2;
        }
        else continue;
    }

    cout<<count;
}
```

## Submission at 2024-11-22 05:49:17


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout<<'*';
        }
        cout<<endl;
    }

    for (int i=n-1; i>0; i--){
        for (int j=i; j>0; j--){
            cout<<'*';
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 06:01:21


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,d;

    cin>>m>>n>>d;

    vector<int> arr1(m);
    vector<int> arr2(n);

    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }

    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(abs(arr1[i] - arr2[j]) <= d){
                count++;
            }
        }
    }

    cout<<count;
}
```

## Submission at 2024-11-22 06:07:44


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,d;

    cin>>m>>n>>d;

    vector<int> arr1(m);
    vector<int> arr2(n);

    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    int result = 0;
    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(abs(arr1[i] - arr2[j]) <= d){
                count++;
            }
        }
        if(count > 0){
            result++
        }
    }

    cout<<result;
}
```

## Submission at 2024-11-22 06:08:31


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,d;

    cin>>m>>n>>d;

    vector<int> arr1(m);
    vector<int> arr2(n);

    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    int result = 0;
    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(abs(arr1[i] - arr2[j]) <= d){
                count++;
            }
        }
        if(count > 0){
            result++;
        }
    }

    cout<<result;
}
```

## Submission at 2024-11-22 06:10:50


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,d;

    cin>>m>>n>>d;

    vector<int> arr1(m);
    vector<int> arr2(n);

    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    int result = 0;
    int count = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(abs(arr1[i] - arr2[j]) <= d){
                count++;
            }
        }
        if(count == 0){
            result++;
        }
    }

    cout<<result;
}
```

## Submission at 2024-11-22 06:12:33


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n,d;

    cin>>m>>n>>d;

    vector<int> arr1(m);
    vector<int> arr2(n);

    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    int result = 0;
    for(int i=0; i<m; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(abs(arr1[i] - arr2[j]) <= d){
                count++;
            }
        }
        if(count == 0){
            result++;
        }
    }

    cout<<result;
}
```

## Submission at 2024-11-22 06:40:11


```
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    map<int, int> m;
    for(int i=0; i<n; i++){
        m[a[i]]++;
    }
    int result;
    for(auto v:m){
        if(v.second<2){
            result = v.first;
        }
    }
    cout<<result;
}
```

## Submission at 2024-11-22 06:54:30


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

    if(head==NULL || head->next==NULL){
        return head;
    }
    while(head->next!=NULL && head->data == head->next->data){
        if(head->next->next){
            head = head->next->next;
        }
        else return head;
    }

    Node* dummy = new Node(0);
    Node* tmp = dummy;
    Node* prev = head;
    Node* temp = head->next;

    while(temp){
        if(prev->data == temp->data){
            prev = temp->next;
            temp = prev->next;
        }
        else{
            tmp->next = prev;
            prev = prev->next;
            temp = temp->next;
            tmp = tmp->next;
        }
    }
    return dummy->next;
}

```

