## Submission at 2024-08-16 04:56:23


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x <= 1){
        return x;
    }
    else{
    return fibonacci(x-1) + fibonacci(x-2);   
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number fo
    int result = fibonacci(x);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:25:59


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1){
        return true;
    }
    if (n <= 0 || n % 2 != 0){
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

## Submission at 2024-08-16 08:18:21


```
def subsets(nums):
    out = []
    sub = []
    ind = 0
    def generate(sub, ind, nums):
        if ind == len(nums):
            out.append(sub)
            return

        generate(sub, ind + 1, nums)

        sub.append(nums[ind])
        generate(sub, ind+1, nums)
        sub.pop()
        
    return out
    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 10:47:14


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (k == 0){
    	result.push_back(current);
    	return;
	}
	if (start > n){
		return;
	}
	current.push_back(start);
	combine(start + 1, k-1, n, current, result);
	current.pop_back();
	
	combine(start + 1, k, n, current, result);
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

## Submission at 2024-08-21 11:48:49


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permut(vector<int> &nums, int l, int r,vector<vector<int>> &result){
    if (l == r){
        result.push_back(nums);
    }
    else{
        for (int i = l; i <= r; i++){
            swap(nums[l],nums[i]);
            permut(nums, l+1, r, result);
            swap(nums[l], nums[i]);
    }
    }
}
vector<vector<int>> permut(vector<int>& nums) {
    vector<vector<int>> result;
    permut(nums, 0, nums.size() - 1, result);

    // Sort the result to return permutations in sorted order
    sort(result.begin(), result.end());

    return result;
}
int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
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
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-21 11:49:52


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permut(vector<int> &nums, int l, int r,vector<vector<int>> &result){
    if (l == r){
        result.push_back(nums);
    }
    else{
        for (int i = l; i <= r; i++){
            swap(nums[l],nums[i]);
            permut(nums, l+1, r, result);
            swap(nums[l], nums[i]);
    }
    }
}
vector<vector<int>> permut(vector<int>& nums) {
    vector<vector<int>> result;
    permut(nums, 0, nums.size() - 1, result);

    sort(result.begin(), result.end());

    return result;
}
int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
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
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-21 11:53:32


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permut(vector<int> &nums, int l, int r,vector<vector<int>> &result){
    if (l == r){
        result.push_back(nums);
    }
    else{
        for (int i = l; i <= r; i++){
            swap(nums[l],nums[i]);
            permut(nums, l+1, r, result);
            swap(nums[l], nums[i]);
    }
    }
}
vector<vector<int>> permut(vector<int>& nums) {
    vector<vector<int>> result;
    permut(nums, 0, nums.size() - 1, result);

    sort(result.begin(), result.end());

    return result;
}
int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }

    vector<vector<int>> permutations = permut(nums);

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
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-22 14:10:50


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateParenthesis(int n, int open, int close, std::string current, std::vector<std::string>& result) {
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

    if (open < n) {
        generateParenthesis(n, open + 1, close, current + "(", result);
    }

    if (close < open) {
        generateParenthesis(n, open, close + 1, current + ")", result);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateParenthesis(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    for (const auto& str : result) {
        cout << str << endl;
    }

    return 0;
}
```

## Submission at 2024-08-22 14:16:38


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateParenthesesHelper(int n, int open, int close, string current, vector<string>& result) {
   
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

  
    if (open < n) {
        generateParenthesesHelper(n, open + 1, close, current + "(", result);
    }

   
    if (close < open) {
        generateParenthesesHelper(n, open, close + 1, current + ")", result);
    }
}

vector<string> generateParentheses(int n) {
    vector<string> result;
    generateParenthesesHelper(n, 0, 0, "", result);
    return result;
}

int main() {
    int n;
   
    cin >> n;

    vector<string> result = generateParentheses(n);

    
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-28 07:26:47


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool are_arrays_equal(vector<int> &arr1, vector <int> &arr2){
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	return arr1== arr2;
}

int main(){
	int n1, n2;
	cin >> n1 >> n2;
	
	if (n1 != n2){
		cout << "false" << endl;
	}
	
	vector <int> arr1(n1), arr2(n2);
	
	for (int i = 0; i < n1; i++){
		cin >> arr1[i];
	}
	
	for (int i = 0; i < n2; i++){
		cin >> arr2[i];
	}
	
	if(are_arrays_equal(arr1, arr2)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	
	return 0;
}

```

## Submission at 2024-08-28 07:37:11


```
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool areArraysEqual(const vector<int>& arr1, const vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    unordered_map<int, int> count1, count2;


    for (int num : arr1) {
        count1[num]++;
    }


    for (int num : arr2) {
        count2[num]++;
    }

    return count1 == count2;
}

int main() {
    int size1, size2;
    cin >> size1 >> size2;
    
    vector<int> arr1(size1);
    vector<int> arr2(size2);

    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-28 12:23:13


```
#include <iostream>
#include<vector>
using namespace std;

int is_array_even(vector <int> &arr,int length){
	int cnt = 0;
	for(int i = 0; i < length; i++){
		if(arr[i] % 2 == 0){
			cnt++;
		}
		else{
			continue;
		}
	}
	return cnt;
}

int main(){
	int x; 
	cin >> x;
	vector <int> arr(x);
	for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
	int even_cnt = is_array_even(arr, x);
	cout << even_cnt << endl;
	
	return 0;
}
```

## Submission at 2024-08-28 12:40:19


```
#include <iostream>
#include <vector>
#include <cmath> /
using namespace std;

int countEvenDigitNumbers(vector<int>& nums) {
    int count = 0;
    
    for (int num : nums) {
 
        int digits = (int)log10(num) + 1;
        
        
        if (digits % 2 == 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n;
    cin >> n; 
    
    vector<int> nums(n); 
    

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    
    int result = countEvenDigitNumbers(nums);
    

    cout << result << endl;
    
    return 0;
}

```

## Submission at 2024-08-28 13:13:06


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int M, N;
	cin >> M >> N;
	
	vector<vector<int> > matrix(M, vector<int>(N));
	
	for (int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin >> matrix[i][j];
		}
	}
	
	vector<vector<int> > transpose(N, vector<int>(M));
	
	for (int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			transpose[j][i] = matrix[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

## Submission at 2024-08-29 02:43:38


```
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (i % 7 == 0 || i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }
        else{
            continue;
        }
    }
    cout << sum << endl;
}



```

## Submission at 2024-08-29 02:44:48


```
#include <iostream>
#include<vector>
using namespace std;

int kthpositiveinteger(vector<int> &arr, int k){
	int missingcnt = 0;
	int curr = 1;
	int i = 0;
	
	while(true){
		if (i < arr.size() && arr[i] == curr){
			i++;
		}
		else{
			missingcnt++;
			if(missingcnt == k){
				return curr;
			}
		}
		curr++;
	}
}
//2 3 4 7 11
int main(){
	int k;
	int length;
	cin >> length >> k;
	
	vector<int> arr(length);
	
	for (int i = 0; i < length; i++){
		cin >> arr[i];
	}
	
	int kth_int = kthpositiveinteger(arr, k);
	cout << kth_int << endl;
}
```

## Submission at 2024-08-29 02:45:56


```
#include<iostream>
#include <vector>
using namespace std;
//1 2 3 4 5
int triangularSum(vector<int>& nums) {
        if(nums.size() == 1){
		return nums[0];
	}

	vector<int> temp(nums.size() - 1);

	for (int i = 0; i < nums.size() - 1; i++){
		temp[i] = (nums[i] + nums[i+1]) % 10;
	}
	return triangularSum(temp);
}

int main(){
	int length;
	cin >> length;
	vector <int> n(length);
	
	for (int i = 0; i < length; i++){
		cin >> n[i];
	}
	
	int sum = triangularSum(n);
	cout << sum << endl;
}
```

## Submission at 2024-08-29 04:56:47


```
#include<iostream>
#include <vector>
using namespace std;
//1 2 3 4 5
int triangularSum(vector<int>& nums) {
        if(nums.size() == 1){
		return nums[0];
	}

	vector<int> temp(nums.size() - 1);

	for (int i = 0; i < nums.size() - 1; i++){
		temp[i] = (nums[i] + nums[i+1]);
	}
	return triangularSum(temp);
}

int main(){
	int length;
	cin >> length;
	vector <int> n(length);
	
	for (int i = 0; i < length; i++){
		cin >> n[i];
	}
	
	int sum = triangularSum(n);
	cout << sum << endl;
}

```

## Submission at 2024-08-29 10:24:34


```
#include<iostream>
#include <vector>
using namespace std;

    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        vector<int> result;
        
        if (matrix.empty()) return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        
        for (int i = top; i <= bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;
        
        if (top <= bottom){
            for (int i = right; i >= left; i--){
            result.push_back(matrix[bottom][i]);
        }
            bottom--;
        }
        
        if (left <= right){
            for(int i = bottom; i >= top; i--){
            result.push_back(matrix[i][left]);
        }
            left++;
        }
}
	return result;   
}

int main(){
	int m, n;
	cin >> m >> n;
	
	vector<vector<int> > matrix(m, vector<int>(n));
	
	for (int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> matrix[i][j];
		}
	}
	
	vector <int> c = spiralOrder(matrix);
	for(int i = 0; i < c.size(); i++){
		if(i > 0){
			cout << c[i] << " ";
		}
	}
	return 0;
}
		
		


```

## Submission at 2024-08-29 10:30:16


```
#include<iostream>
#include <vector>
using namespace std;

    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        vector<int> result;
        
        if (matrix.empty()) return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;
        while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        
        for (int i = top; i <= bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;
        
        if (top <= bottom){
            for (int i = right; i >= left; i--){
            result.push_back(matrix[bottom][i]);
        }
            bottom--;
        }
        
        if (left <= right){
            for(int i = bottom; i >= top; i--){
            result.push_back(matrix[i][left]);
        }
            left++;
        }
}
	return result;   
}

int main(){
	int m, n;
	cin >> m >> n;
	
	vector<vector<int> > matrix(m, vector<int>(n));
	
	for (int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> matrix[i][j];
		}
	}
	
	vector <int> c = spiralOrder(matrix);
	for(int i = 0; i < c.size(); i++){
		if(i > 0){
			cout << " ";
		}
        cout << c[i];
	}
    cout << endl;

    return 0;
}
		
		


```

## Submission at 2024-08-30 03:13:00


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
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < x){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next  = curr -> next;
        curr-> next = NULL;
        delete curr;
    }
    
}

```

## Submission at 2024-08-30 03:14:45


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
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < x){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next  = curr -> next;
        curr-> next = NULL;
        delete curr;
    }
    return head;
}

```

## Submission at 2024-08-30 04:56:20


```
#include<iostream>
using namespace std;

bool ispalindrome(const string &s){
    int start = 0;
    int end = s.length() - 1;
    while (start < end){
        if(s[start] != s[end]){
        return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string x;
    cin >> x;
    

    if(ispalindrome(x)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
```

## Submission at 2024-08-30 05:03:31


```
#include<iostream>
using namespace std;

bool ispalindrome(const string &s, int start, int end){
    

    if (start <= end){
        return true;
    }
    if (s[start] != s[end]){
        return false;
    }
    
    return ispalindrome(s, start + 1, end - 1);
    
}
int main(){
    string x;
    cin >> x;
    

    if(ispalindrome(x, 0,x.length() - 1 )){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
```

## Submission at 2024-08-30 05:05:41


```
#include<iostream>
using namespace std;

bool ispalindrome(const string &s, int start, int end){
    

    if (start >= end){
        return true;
    }
    if (s[start] != s[end]){
        return false;
    }
    
    return ispalindrome(s, start + 1, end - 1);
    
}
int main(){
    string x;
    cin >> x;
    

    if(ispalindrome(x, 0,x.length() - 1 )){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
```

## Submission at 2024-08-30 05:11:47


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
    Node* next = NULL;

    while(curr != nullptr){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}

```

## Submission at 2024-08-30 05:27:11


```
#include<iostream>
using namespace std;

double pow(double x, int n){
    if (n == 0){
        return 1;
    }
    if (n < 0){
        cout << 0;
    }
    double h = pow(x, n / 2);

    if (n %2 == 0){
        return h + h;
    }
    else{
        if (n > 0){
            return x*h*h;
        }
        else{
            return (h*h) / x;
    }
}
}

int main(){
    double x;
    int n;
    cin >> x;
    cin >> n;

    cout << pow(x, n)*2 << endl;
    return 0;
}
```

## Submission at 2024-08-30 05:30:44


```
#include<iostream>
#include <cmath>
using namespace std;

double pow(double x, int n){
    if (n == 0){
        return 1;
    }
    if (n < 0){
        cout << 0;
    }
    double h = pow(x, n / 2);

    if (n %2 == 0){
        return h + h;
    }
    else{
        if (n > 0){
            return x*h*h;
        }
        else{
            return (h*h) / x;
    }
}
}

int main(){
    double x;
    int n;
    cin >> x;
    cin >> n;

    cout << floor(pow(x, n)*2) << endl;
    return 0;
}
```

## Submission at 2024-08-30 05:31:40


```
#include<iostream>
#include <cmath>
using namespace std;

double pow(double x, int n){
    if (n == 0){
        return 1;
    }
  
    double h = pow(x, n / 2);

    if (n %2 == 0){
        return h + h;
    }
    else{
        if (n > 0){
            return x*h*h;
        }
        else{
            return (h*h) / x;
    }
}
}

int main(){
    double x;
    int n;
    cin >> x;
    cin >> n;

    cout << floor(pow(x, n)*2) << endl;
    return 0;
}
```

## Submission at 2024-08-30 05:33:38


```
#include<iostream>
#include <cmath>
using namespace std;

double pow(double x, int n){
    if (n == 0){
        return 1;
    }
    
    double h = pow(x, n / 2);

    if (n %2 == 0){
        return h + h;
    }
    else{
        if (n > 0){
            return x*h*h;
        }
        else{
            return 1 / (x*h*h);
    }
}
    
}

int main(){
    double x;
    int n;
    cin >> x;
    cin >> n;

    cout << floor(pow(x, n)*2) << endl;
    return 0;
}
```

## Submission at 2024-08-30 06:23:28


```
// Write code from scratch
#include <iostream>
#include <vector>
using namespace std;

vector<int> maximal_array(vector<int> &a, vector<int> &b){
    vector <int> c;
    for (int i = 0; i < a.size(); ++i){
        if(a[i] > b[i]){
            c[i] = a[i];   
        }
        else if(a[i] < b[i]){
            c[i] = b[i];
        }
        else if(a[i] == b[i]){
            c[i] = a[i];
        }
    }
    return c;    
}
int main(){
    int n;
    cin >> n;
    vector <int> a(n), b(n);
    
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    
    vector <int> c = maximal_array(a,b);
    for(int i = 0; i < n; ++i){
        cout << c[i] << " ";
    }
   
    return 0;
}
```

## Submission at 2024-09-04 03:38:11


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
        temp = temp -> next;
    }
    return result;
}

```

## Submission at 2024-09-04 03:43:41


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
        result.push_back(temp -> val);
        temp = temp -> next;
    }
    return result;
}

```

## Submission at 2024-09-04 03:49:49


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
    int cnt = 1;
    while(temp != nullptr)
        if(cnt == k){
            return temp -> data;
        }
        else if(cnt != k){
            temp = temp -> next;
        }
        else{
            return -1;
        }
}

```

## Submission at 2024-09-04 03:52:24


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
    int cnt = 1;
    while(temp != nullptr)
        if(cnt == k){
            return temp -> data;
        }
        else if(cnt != k){
            temp = temp -> next;
            cnt++;
        }
        else{
            return -1;
        }
        
}

```

## Submission at 2024-09-04 03:53:24


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
    int cnt = 1;
    while(temp != nullptr)
        if(cnt == k){
            return temp -> data;
        }
        else if(cnt != k){
            temp = temp -> next;
            cnt++;
        }
        
    return -1;
        
}

```

## Submission at 2024-09-04 04:09:44


```
#include<iostream>
using namespace std;

bool ispalindrome(string s,int x, int k){
    if (x >=k){
        return true;
    }
    if (s[x] != s[k]){
       return false;
    }
     return ispalindrome(s, x+1, k-1);
}

int main(){
    string s; 
    cin >> s;

    bool a = ispalindrome(s, 0, s.size() - 1);
    if (a){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
```

## Submission at 2024-10-04 03:47:40


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // Function to merge two halves of the array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of left half
    int n2 = right - mid;     // Size of right half

    // Create temporary arrays for left and right halves
    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0;  // Initial index of left array
    int j = 0;  // Initial index of right array
    int k = left;  // Initial index of merged array

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    printArray(arr, arrSize);

    mergeSort(arr, 0, arrSize - 1);

    cout << "Sorted array is: ";
    printArray(arr, arrSize);

    return 0;
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-10-04 03:50:04


```
// Function to merge two halves of the array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of left half
    int n2 = right - mid;     // Size of right half

    // Create temporary arrays for left and right halves
    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    // Merge the temporary arrays back into arr[l..r]
    int i = 0;  // Initial index of left array
    int j = 0;  // Initial index of right array
    int k = left;  // Initial index of merged array

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Function to implement merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    printArray(arr, arrSize);

    mergeSort(arr, 0, arrSize - 1);

    cout << "Sorted array is: ";
    printArray(arr, arrSize);

    return 0;
}
```

## Submission at 2024-10-04 03:50:52


```
#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }
    // Swap the pivot element with the element at i + 1
    swap(arr[i + 1], arr[high]);
    return i + 1; // Return the partitioning index
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Find pivot element such that
        // elements smaller than pivot are on the left
        // elements greater than pivot are on the right
        int pi = partition(arr, low, high);

        // Recursively sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is: ";
    printArray(arr, arrSize);

    quickSort(arr, 0, arrSize - 1);

    cout << "Sorted array is: ";
    printArray(arr, arrSize);

    return 0;
}


```

## Submission at 2024-10-04 03:54:12


```
#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> arr; // Dynamic array to store queue elements
    int front;       // Index of the front element
    int rear;        // Index of the last element
    int capacity;    // Maximum number of elements in the queue
    int count;       // Current size of the queue

public:
    // Constructor to initialize the queue
    Queue(int size) {
        arr.resize(size); // Initialize the dynamic array
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    // Function to add an item to the queue
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << item << endl;
            return;
        }
        rear = (rear + 1) % capacity; // Circular increment
        arr[rear] = item;
        count++;
        cout << item << " enqueued to queue" << endl;
    }

    // Function to remove an item from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        cout << arr[front] << " dequeued from queue" << endl;
        front = (front + 1) % capacity; // Circular increment
        count--;
    }

    // Function to get the front item from the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1; // Return a sentinel value
        }
        return arr[front];
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return (count == 0);
    }

    // Function to check if the queue is full
    bool isFull() {
        return (count == capacity);
    }

    // Function to get the current size of the queue
    int size() {
        return count;
    }

    // Function to print the elements of the queue
    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); // Create a queue of capacity 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.printQueue();

    cout << "Front element is: " << q.peek() << endl;

    q.dequeue();
    q.dequeue();

    q.printQueue();

    cout << "Front element is: " << q.peek() << endl;

    q.enqueue(60);
    q.enqueue(70); // This will show that queue is full

    q.printQueue();

    return 0;
}

```

## Submission at 2024-10-04 04:00:30


```
#include <iostream>
#include <vector>
using namespace std;

// Define the structure for linked list nodes
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to convert linked list to vector
vector<int> linkedListToVector(ListNode* head) {
    vector<int> result;
    ListNode* current = head;
    while (current != nullptr) {
        result.push_back(current->val);
        current = current->next;
    }
    return result;
}

// Function to convert vector back to linked list
ListNode* vectorToLinkedList(const vector<int>& vec) {
    if (vec.empty()) return nullptr; // Return null if the vector is empty
    
    ListNode* head = new ListNode(vec[0]); // Create the head node
    ListNode* current = head; // Pointer to traverse the linked list

    for (size_t i = 1; i < vec.size(); i++) {
        current->next = new ListNode(vec[i]); // Create a new node for each value
        current = current->next; // Move to the next node
    }
    return head; // Return the head of the new linked list
}

// Function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

// Function to delete the linked list to avoid memory leaks
void deleteLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> nullptr
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original Linked List: ";
    printLinkedList(head);

    // Convert linked list to vector
    vector<int> vec = linkedListToVector(head);
    cout << "Converted Vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // Convert vector back to linked list
    ListNode* newHead = vectorToLinkedList(vec);
    cout << "New Linked List from Vector: ";
    printLinkedList(newHead);

    // Clean up the linked list
    deleteLinkedList(head);
    deleteLinkedList(newHead);

    return 0;
}

```

## Submission at 2024-10-04 05:28:36


```
#include<iostream>
using namespace std;
#include <string>;
#include <unordered_map>
bool anagram(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    unordered_map<char, int> charcnt;
    for(char c : s){
        charcnt[c]++;
    }
    for(char c: t){
        charcnt[c]--;
        if(charcnt[c] < 0){
            return false;
        }
    }
    return true;
}

int main(){
    string t;
     string s;

    cin >> s;
    cin >> t;
    if(anagram(s,t)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
```

## Submission at 2024-10-04 05:30:44


```
#include<iostream>
using namespace std;
#include <string>;
#include <unordered_map>
bool anagram(string s, string t){
    if(s.length() ==0 && t.length()==0){
        return false;
    }
    if(s.length() != t.length()){
        return false;
    }
    unordered_map<char, int> charcnt;
    for(char c : s){
        charcnt[c]++;
    }
    for(char c: t){
        charcnt[c]--;
        if(charcnt[c] < 0){
            return false;
        }
    }
    return true;
}

int main(){
    string t;
     string s;

    cin >> s;
    cin >> t;
    if(anagram(s,t)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
```

## Submission at 2024-10-04 06:12:36


```
#include<iostream>
#include <vector>
using namespace std;
int time(vector<int> &ticket,int n, int k){
    int time = 0;
    n = ticket.size();
    for(int i = 0; i < n; i++){
        if(i <= k){
            time += min(ticket[i], ticket[k]);
        }
        else{
            time += min(ticket[i], ticket[k]-1);
        }
    }
    return time;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> ticket(n);
    for(int i = 0; i < n; i++){
        cin >> ticket[i];
    }
    int ans = time(ticket, n, k);
    cout << ans << endl;
    return 0;
}

```

## Submission at 2024-10-04 06:15:07


```
#include<iostream>
#include <vector>
using namespace std;
int time(vector<int> &ticket,int n, int k){
    int time = 0;
    n = ticket.size();
    for(int i = 0; i < n; i++){
        if(i <= k){
            time += min(ticket[i], ticket[k]);
        }
        else{
            time += min(ticket[i], ticket[k]-1);
        }
    }
    return time;
}

int main(){
    int n, k;
    cin >> n;
    vector <int> ticket(n);
    for(int i = 0; i < n; i++){
        cin >> ticket[i];
    }
    cin >> k;
    int ans = time(ticket, n, k);
    cout << ans << endl;
    return 0;
}

```

## Submission at 2024-10-04 06:29:00


```
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector <int> d(vector<int> &temp, int n){
    n = temp.size();
    vector <int> result(n, 0);
    stack<int> s;
    for(int i = 0; i < n; i++){
        while(!s.empty() && temp [i]  > temp[s.top()]){
            int prevday = s.top();
            s.pop();
            result[prevday] = i -prevday;
        }
        s.push(i);
    }
    return result;
}

int main(){
    int n;
    cin >> n;
    vector <int> temp(n);
    for(int i = 0; i > n; i++){
        cin >> temp[i];
    }

    ans = d(temp,n);
    cout << ans << endl;
    return 0;
}

```

## Submission at 2024-10-25 03:16:27


```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector <vector<int>> s;
    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = height(root -> left);
        int right = height(root -> right);

        return 1 + max(left, right);
    }

    void nodes(TreeNode* root, int level, vector<int>& Nodes){
        if (root == nullptr) {
            return;
        }
        if (level == 1) {
            Nodes.push_back(root->val);
        } 
        else if(level > 1){
            nodes(root->left, level - 1, Nodes);
            nodes(root->right, level - 1, Nodes);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        int h = height(root); 
        
        for (int i = 1; i <= h; i++) {
            vector<int> currentLevel;
            nodes(root, i, currentLevel);
            result.push_back(currentLevel);
        }
        
        return result;
    }
};
```

## Submission at 2024-10-25 03:20:33


```
int main() {
    int n, value;

    // Take input for the number of nodes
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Initialize root to nullptr
    Node* root = nullptr;

    // Input the first node
    cout << "Enter value for node 1: ";
    cin >> value;
    root = new Node(value);  // First node is the root

    // For the remaining nodes
    for (int i = 1; i < n; i++) {
        Node* current = root;  // Start from root
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;

        // Create a new node
        Node* newNode = new Node(value);

        // Find the correct position to insert the new node
        while (true) {
            if (value < current->data) {
                // Go left
                if (current->left == nullptr) {
                    current->left = newNode;
                    break;
                } else {
                    current = current->left;
                }
            } else {
                // Go right
                if (current->right == nullptr) {
                    current->right = newNode;
                    break;
                } else {
                    current = current->right;
                }
            }
        }
    }
```

## Submission at 2024-10-25 05:37:54


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
    bool ismirror( Node* left,  Node* right){
        if(left == nullptr && right == nullptr){
            return true;
        }
        if(left == nullptr || right == nullptr){
            return false;
        }
        return (left -> data == right -> data) && ismirror(left -> left, right -> right) && ismirror(left -> right, right -> left);
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    if(root == nullptr){
            return true;
        }
        return ismirror(root -> left, root -> right);
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

## Submission at 2024-10-25 05:42:58


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
vector <int > s;
void post(Node* root){
  
  if(root == nullptr){
    return;
  }
  postOrder(root -> left);
  postOrder(root -> right);
  s.push_back(root -> data);
}
vector <int> postOrder(Node* root)
{
  
  post(root);
  return s;
}

```

## Submission at 2024-10-25 06:08:18


```
#include<iostream>
#include<unordered_map>
#include <sstream>
using namespace std;

bool wordpattern(string pattern, string s){
    unordered_map<char, string> chartoword;
    unordered_map<string, char> wordtochar;

    istringstream iss(s); 
    string word;
    int i = 0;

    while(iss >> word){
        if(i == pattern.size()){
            return false;
        }
        char c = pattern[i];
        if(chartoword.count(c)){
            if(chartoword[c] != word){
                return false;
            }
            else{
                chartoword[c] = word;
            }
        }

        if(wordtochar.count(word)){
            if(wordtochar[word] != c){
                return false;
            }
            else{
                wordtochar[word] = c;
            }
        }
        i++;
    }
    return i == pattern.size();
}
int main(){
    string pattern;
    cin >> pattern;
    string s;
    cin >> s;

    if(wordpattern(pattern, s)){
        cout << "false" << endl;
    }
    else{
        cout << "true" << endl;
    }
    return 0;
}
```

## Submission at 2024-10-25 06:21:23


```
#include<iostream>
#include<unordered_map>
#include <sstream>
using namespace std;

bool wordpattern(string pattern, string s){
    unordered_map<char, string> chartoword;
    unordered_map<string, char> wordtochar;

    istringstream iss(s); 
    string word;
    int i = 0;

    while(iss >> word){
        if(i == pattern.size()){
            return false;
        }
        char c = pattern[i];
        if(chartoword.count(c)){
            if(chartoword[c] != word){
                return false;
            }
            else{
                chartoword[c] = word;
            }
        }

        if(wordtochar.count(word)){
            if(wordtochar[word] != c){
                return false;
            }
            else{
                wordtochar[word] = c;
            }
        }
        i++;
    }
    return i == pattern.size();
}
int main(){
    string pattern;
    cin >> pattern;
    string s;
    cin.ignore();
    getline(cin, s); 
    bool x = wordpattern(pattern, s);
    if(!x){
        cout << "false" << endl;
    }
    else{
        cout << "true" << endl;
    }
    return 0;
}
```

## Submission at 2024-10-25 06:24:22


```
#include<iostream>
#include<unordered_map>
#include <sstream>
using namespace std;

bool wordpattern(string pattern, string s){
    unordered_map<char, string> chartoword;
    unordered_map<string, char> wordtochar;

    istringstream iss(s); 
    string word;
    int i = 0;

    while(iss >> word){
        if(i == pattern.size()){
            return false;
        }
        char c = pattern[i];
        if(chartoword.count(c)){
            if(chartoword[c] != word){
                return false;
            }
            else{
                chartoword[c] = word;
            }
        }

        if(wordtochar.count(word)){
            if(wordtochar[word] != c){
                return false;
            }
            else{
                wordtochar[word] = c;
            }
        }
        i++;
    }
    return i == pattern.size();
}
int main(){
    string pattern;
    cin >> pattern;

    string s;
    cin.ignore();
    getline(cin, s); 

    // bool x = wordpattern(pattern, s);
    if(wordpattern(pattern, s)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
```

## Submission at 2024-10-25 06:37:28


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
    Node* dummy = new Node(0);
    Node* curr = dummy;

    int carry = 0;
    while(num1 != nullptr || num2 != nullptr){
        int sum = carry;

        if(num1 != nullptr){
            sum += num1 -> data;
            num1 = num1 -> next;
        }
        if(num2 != nullptr){
            sum += num2 -> data;
            num2 = num2 -> next;
        }
        carry = sum/10;
        curr -> next = new Node (sum % 10);
        curr = curr -> next;
    }
    return dummy -> next;
}
```

## Submission at 2024-10-25 06:51:00


```
#include<iostream>
#include<unordered_map>
#include <sstream>
using namespace std;

bool wordpattern(string pattern, string s){
    unordered_map<char, string> chartoword;
    unordered_map<string, char> wordtochar;

    istringstream iss(s); 
    string word;
    int i = 0;

    while(iss >> word){
        if(i == pattern.size()){
            return false;
        }
        char c = pattern[i];
        if(chartoword.count(c)){
            if(chartoword[c] != word){
                return false;
            }
            else{
                chartoword[c] = word;
            }
        }

        if(wordtochar.count(word)){
            if(wordtochar[word] != c){
                return false;
            }
            else{
                wordtochar[word] = c;
            }
        }
        i++;
    }
    return i == pattern.size();
}
int main(){
    string pattern;
    cin >> pattern;

    string s;
    cin.ignore();
    getline(cin, s); 

    // bool x = wordpattern(pattern, s);
    if(wordpattern(pattern, s)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    
}
```

## Submission at 2024-10-25 06:58:03


```
#include<iostream>
#include<unordered_map>
#include <string>
using namespace std;

bool canconst(string rn, string mag){
    unordered_map<char, int> charcnt;
    // unordered_map<string, char> wordtochar;
    for(char c: mag){
        charcnt[c]++;
    }
    for(char c : rn){
        if(charcnt[c] <= 0){
            return false;
        }
        charcnt[c]--;
    }
    return true;
    }
int main(){
    string rn, mag;
    cin >> rn;
    cin >> mag;



    // bool x = wordpattern(pattern, s);
    if(canconst(rn, mag)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
```

## Submission at 2024-11-12 09:41:47


```
#include<iostream>
#include<unordered_map>
#include <sstream>
using namespace std;

bool wordpattern(string pattern, string s){
    unordered_map<char, string> chartoword;
    unordered_map<string, char> wordtochar;

    istringstream iss(s); 
    string word;
    int i = 0;

    while(iss >> word){
        if(i == pattern.size()){
            return false;
        }
        char c = pattern[i];
        if(chartoword.count(c)){
            if(chartoword[c] != word){
                return false;
            }
        }
        else{
            chartoword[c] = word;
            }
        

        if(wordtochar.count(word)){
            if(wordtochar[word] != c){
                return false;
            }
        }
        else{
            wordtochar[word] = c;
        }
        i++;
    }
    return i == pattern.size();
}
int main(){
    string pattern;
    cin >> pattern;

    string s;
    cin.ignore();
    getline(cin, s); 

    // bool x = wordpattern(pattern, s);
    if(wordpattern(pattern, s)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    
}
```

## Submission at 2024-11-22 04:57:27


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 0; i < n ; i++){
        cnt += arr[i]; 
    }
    cout << cnt << endl;
    return 0;
}
```

## Submission at 2024-11-22 05:01:44


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n ; i++){
        for(int j = 1; j < n ; j++){
            if(arr[i] == arr[j]){
                cout << arr[i];
            }
            else{
                continue;
            }
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 05:31:55


```
#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits>
using namespace std;
int freq(vector<int> &nums){
    unordered_map<int, int> freqmap;
    for(int num: nums){
        freqmap[num]++;
    }
    int maxfreq = 0;
    int result = numeric_limits<int>::max();
    for(auto& pair : freqmap){
        if(pair.second > maxfreq || 
        (pair.second == maxfreq && pair.first < result)){
            maxfreq = pair.second;
            result = pair.first;
        }
    }
    return result;
}
int main(){
    int n, elements;
    cin >> n;
    vector <int> A;
    for(int i  = 0; i < n; i++){
        cin >> elements;
        A.push_back(elements);
    }
    int result = freq(A);
    cout << result << endl;
    
}
```

## Submission at 2024-11-22 05:48:49


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
    int value;
    while(head && head -> data == value){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
    Node* current = head;
    Node* prev = nullptr;

    while(current){
        if(current -> next = value){
            prev -> next = current -> next;
            delete current;
            current = prev -> next;
        }
        else{
            prev = current;
            current = current -> next;
        }
    }
}

```

## Submission at 2024-11-22 06:09:30


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
bool isutli(Node*root, Node* &prev){
    if(root == nullptr){
        return true;
    }
    if(!isutli(root -> left, prev)){
        return false;
    }
    if(prev != nullptr && root -> data <= prev -> data){
        return false;
    }
    prev = root;
    return isutli(root->right,prev);
}

bool isBST(struct Node* root)
{
    Node* prev = nullptr;
    return isutli(root, prev);
}    
    


```

## Submission at 2024-11-22 06:18:55


```
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int x = b - a;
    cout << x << endl;
    return 0;
}
```

## Submission at 2024-11-22 06:27:59


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n ; i++){
        for(int j = 1; j <=n ; j++){
            if(arr[i] == arr[j]){
                cout << arr[i];
            }
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 06:34:04


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(const auto& entry : f){
        if(entry.second == 2){
            return entry.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 06:35:52


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(const vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(const auto & entry : f){
        if(entry.second == 2){
            return entry.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 06:43:45


```
#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits>
using namespace std;
int freq(vector<int> &nums){
    unordered_map<int, int> freqmap;
    for(int num: nums){
        freqmap[num]++;
    }
    int maxfreq = 0;
    int result = -1;
    for(auto& pair : freqmap){
        if(pair.second > maxfreq || 
        (pair.second == maxfreq && pair.first > result)){
            maxfreq = pair.second;
            result = pair.first;
        }
    }
    return result;
}
int main(){
    int n, elements;
    cin >> n;
    vector <int> A;
    for(int i  = 0; i < n; i++){
        cin >> elements;
        A.push_back(elements);
    }
    int result = freq(A);
    cout << result << endl;
    
}
```

## Submission at 2024-11-22 06:46:25


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(entry : f){
        if(entry.second == 2){
            return entry.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 06:48:38


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for( auto entry : f){
        if(entry.second == 2){
            return entry.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 06:51:41


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(int entry : f){
        if(entry.second == 2){
            return entry.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 06:52:11


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(int entry : f){
        if(entry.second == 2){
            return entry.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 07:03:57


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(auto pair : f){
        if(pair.second == 2){
            return pair.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

## Submission at 2024-11-22 07:04:14


```
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector <int> &arr){
    unordered_map<int, int> f;
    for(int num : arr){
        f[num]++;
    }
    for(auto pair : f){
        if(pair.second == 2){
            return pair.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = find(arr);
    cout << result << endl;
    return 0;
}
```

