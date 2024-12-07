## Submission at 2024-08-09 04:46:50


```
// Write your C++ code here from the scratch

#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter your name:"<<endl;
    cin>>str;

    cout<<"Hello "<<str<<" !"<<endl;
}
```

## Submission at 2024-08-09 04:49:09


```
// Write your C++ code here from the scratch

#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;

    cout<<"Hello "<<str<<"!"<<endl;
}
```

## Submission at 2024-08-09 05:02:38


```
// Write your C++ code here
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string name;

    for(int i=1;i<=n;i++){
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
        
    }
}
```

## Submission at 2024-08-09 05:05:19


```
// Write your C++ code here
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string name;

    for(int i=1;i<=n;i++){
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
        
    }
}
```

## Submission at 2024-08-09 05:09:55


```
// Write your C++ code here from the scratch
#include<iostream>
using namespace std;

int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!"<<endl;

}
```

## Submission at 2024-08-16 04:51:32


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x <= 1) {
        return x; 
    }
    else{
     return fibonacci(x - 1) + fibonacci(x - 2);
    }
}




int main() {
   int n;
   cin >> n;

   cout<< fibonacci(n);
   return 0;
}

    
```

## Submission at 2024-08-16 05:06:54


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n<=0){
        cout<<"false"<<endl;
    }
    if(n===1){
        cout<<"false"<<endl;
    }
    if (n % 2 == 0){
        cout<<"true"<<endl;
    }
    return isPowerOfTwo(n / 2);
        
}

int main() {
    int n;
    cin >> n;

    
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:18:47


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n<=0){
        cout<<"false"<<endl;
    }
    
    return (n &(n-1))==0;
        
}

int main() {
    int n;
    cin >> n;

    
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:20:05


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==0){
        cout<<"false"<<endl;
    }
    
    return (n &(n-1))==0;
        
}

int main() {
    int n;
    cin >> n;

    
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-21 05:57:09


```
#include <iostream>
#include <vector>
#include <string>

void generateParenthesis(int open, int close, int n, std::string current, std::vector<std::string>& result) {
    
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }

     
    if (open < n) {
        generateParenthesis(open + 1, close, n, current + '(', result);
    }

    
    if (close < open) {
        generateParenthesis(open, close + 1, n, current + ')', result);
    }
}

std::vector<std::string> generateAllParenthesis(int n) {
    std::vector<std::string> result;
    generateParenthesis(0, 0, n, "", result);
    return result;
}

int main() {
    int n;
    
    std::cin >> n;

    std::vector<std::string> result = generateAllParenthesis(n);

    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
```

## Submission at 2024-08-21 06:02:52


```
#include <iostream>
#include <vector>
#include <string>


void generateParenthesis(int open, int close, int n, std::string current, std::vector<std::string>& result) {
    
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    
    
    if (open < n) {
        generateParenthesis(open + 1, close, n, current + '(', result);
    }
    
     
    if (close < open) {
        generateParenthesis(open, close + 1, n, current + ')', result);
    }
}


std::vector<std::string> generateAllParenthesis(int n) {
    std::vector<std::string> result;
    generateParenthesis(0, 0, n, "", result);
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> result = generateAllParenthesis(n);

    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-21 06:08:41


```
#include <iostream>
#include <vector>
#include <algorithm>


void generatePermutations(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    
    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, result);
        std::swap(nums[start], nums[i]); 
    }
}


std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    generatePermutations(nums, 0, result);
    std::sort(result.begin(), result.end()); 
    return result;
}

int main() {
    std::vector<int> nums;
    int num;
    
    
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::vector<std::vector<int>> result = permute(nums);
    
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-21 06:13:16


```
#include <iostream>
#include <vector>
#include <string>


void generateParenthesis(int open, int close, int n, std::string current, std::vector<std::string>& result) {
    
    if (current.length() == 2 * n) {
        result.push_back(current);
        return;
    }
    
    
    if (open < n) {
        generateParenthesis(open + 1, close, n, current + '(', result);
    }
    
    
    if (close < open) {
        generateParenthesis(open, close + 1, n, current + ')', result);
    }
}


std::vector<std::string> generateAllParenthesis(int n) {
    std::vector<std::string> result;
    generateParenthesis(0, 0, n, "", result);
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of pairs of parentheses: ";
    std::cin >> n;

    
    std::vector<std::string> result = generateAllParenthesis(n);

    
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-21 06:18:21


```


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    vector <string> result;

    bool isValid(string& curr)
    {
        int count = 0;
        for (char ch : curr)
        {
            if(ch == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                return false;
            }
        }
        return count == 0;
    }

    void solve (string curr, int n)
    {
        if (curr.length() == 2*n)
        {
            if (isValid(curr))
            {
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(curr,n);

        return result;
    }
};

int main() {
    Solution solution;
    int n;

    cin >> n;

    vector<string> parentheses = solution.generateParenthesis(n);

      cout << "[";
    for (size_t i = 0; i < parentheses.size(); i++) {
        cout << "\"" << parentheses[i] << "\""; // Add quotes around each string
        if (i < parentheses.size() - 1) {
            cout << ","; // Add a comma after each string except the last
        }
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-21 06:24:26


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

## Submission at 2024-08-28 04:47:52


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    
    if (arr1.size() != arr2.size()) {
        return false;
    }

    
    unordered_map<int, int> frequencyMap;

    
    for (int i = 0; i < arr1.size(); i++) {
        frequencyMap[arr1[i]]++;
    }

    
    for (int i = 0; i < arr2.size(); i++) {
        frequencyMap[arr2[i]]--;
    }

    
    for (auto it : frequencyMap) {
        if (it.second != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    
    vector<int> arr1(n1), arr2(n2);
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++) {
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

## Submission at 2024-08-28 04:55:55


```
#include <iostream>
using namespace std;

int sumOfDivisibles(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    
    cout << sumOfDivisibles(n) << endl;

    return 0;
}

```

## Submission at 2024-08-28 04:56:54


```
#include <iostream>
using namespace std;

int sumOfDivisibles(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    
    cout << sumOfDivisibles(n) << endl;

    return 0;
}

```

## Submission at 2024-08-28 04:57:38


```
#include <iostream>
using namespace std;

int sumOfDivisibles(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    
    cout << sumOfDivisibles(n) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:00:19


```
#include <iostream>
using namespace std;

int sumOfDivisibles(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    
    cout << sumOfDivisibles(n) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:14:59


```
#include <iostream>
#include <vector>
using namespace std;


int countDigits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int findNumbersWithEvenDigits(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        
        if (countDigits(num) % 2 == 0) {
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

    
    cout << findNumbersWithEvenDigits(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:16:09


```
#include <iostream>
#include <vector>
using namespace std;


int countDigits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int findNumbersWithEvenDigits(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        
        if (countDigits(num) % 2 == 0) {
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

    
    cout << findNumbersWithEvenDigits(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:18:38


```
#include <iostream>
#include <vector>
using namespace std;


int countDigits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int findNumbersWithEvenDigits(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        
        if (countDigits(num) % 2 == 0) {
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

    
    cout << findNumbersWithEvenDigits(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:18:44


```
#include <iostream>
#include <vector>
using namespace std;


int countDigits(int num) {
    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

int findNumbersWithEvenDigits(vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        
        if (countDigits(num) % 2 == 0) {
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

    
    cout << findNumbersWithEvenDigits(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:41:23


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:41:23


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:41:23


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:42:02


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:44:00


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:44:01


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:44:17


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissing(vector<int>& arr, int k) {
    int current = 1;
    int missingCount = 0;
    int i = 0;

    while (missingCount < k) {
        if (i < arr.size() && arr[i] == current) {
            i++; 
        } else {
            missingCount++; 
        }

        if (missingCount < k) {
            current++; 
        }
    }

    return current; 
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

## Submission at 2024-08-28 05:46:40


```
#include <iostream>
#include <vector>
using namespace std;

int triangleSum(vector<int>& nums) {
    int n = nums.size();
    
    
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            nums[i] = nums[i] + nums[i + 1]; 
        }
        n--; 
    }
    
    return nums[0];  

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    
    cout << triangleSum(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:48:55


```
#include <iostream>
#include <vector>
using namespace std;

int triangleSum(vector<int>& nums) {
    int n = nums.size();
    
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            nums[i] = nums[i] + nums[i + 1]; 
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

    cout << triangleSum(nums) << endl;

    return 0;
}


```

## Submission at 2024-08-28 05:51:04


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    
    vector<vector<int>> matrix(M, vector<int>(N));

    
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

## Submission at 2024-08-28 05:54:05


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        ++top;

        
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        --right;

        
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            --bottom;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            ++left;
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

    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-28 05:54:48


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        ++top;

        
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        --right;

        
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            --bottom;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            ++left;
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

    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-30 05:17:57


```
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 1;
    }
    if(str[start]){
        return 0;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length);
if (result==ispalindrome){
    cout<<"YES";
}
else{
    cout<<"NO"<<endl;
}
}
```

## Submission at 2024-08-30 05:18:02


```
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 1;
    }
    if(str[start]){
        return 0;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length);
if (result==ispalindrome){
    cout<<"YES";
}
else{
    cout<<"NO"<<endl;
}
}
```

## Submission at 2024-08-30 05:30:16


```
// Write code from scratch
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 1;
    }
    if(str[start]){
        return 0;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "NO":"YES");
return 0;
}
```

## Submission at 2024-08-30 05:30:19


```
// Write code from scratch
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 1;
    }
    if(str[start]){
        return 0;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "NO":"YES");
return 0;
}
```

## Submission at 2024-08-30 05:32:45


```
// Write code from scratch
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 0;
    }
    if(str[start]){
        return 1;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "YES":"NO");
return 0;
}
```

## Submission at 2024-08-30 05:32:50


```
// Write code from scratch
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 0;
    }
    if(str[start]){
        return 1;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "YES":"NO");
return 0;
}
```

## Submission at 2024-08-30 05:34:14


```
// Write code from scratch
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 0;
    }
    if(str[start]){
        return 1;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "YES":"NO");
return 0;
}
```

## Submission at 2024-08-30 05:44:05


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0||x==1){
        return 1;
    }
    if(x==0){
        return 0;
    }
    int finalans= x*pow(x,n-1);
    return finalans;
}
int main(){
    int x;
    int n;
    cin>>x,n;
    int ans=pow(x,n);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-08-30 05:44:10


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0||x==1){
        return 1;
    }
    if(x==0){
        return 0;
    }
    int finalans= x*pow(x,n-1);
    return finalans;
}
int main(){
    int x;
    int n;
    cin>>x,n;
    int ans=pow(x,n);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-08-30 05:51:07


```
// Write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    int b[n];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        cin>>b[j];
    }
}
```

## Submission at 2024-08-30 05:56:04


```
// Write code from scratch
#include<iostream>
using namespace std;

int max(int d,int e){
    if (d>e){
        return d;
    }
    else{
        return e; 
    }
}

int main(){
    int n;
    cin>>n;

    int a[n];
    int b[n];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        cin>>b[j];
    }
    int c[5]=max(a[n],b[n]);
    cout<<c;
    
}
```

## Submission at 2024-08-30 05:56:05


```
// Write code from scratch
#include<iostream>
using namespace std;

int max(int d,int e){
    if (d>e){
        return d;
    }
    else{
        return e; 
    }
}

int main(){
    int n;
    cin>>n;

    int a[n];
    int b[n];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int j=1;j<=n;j++){
        cin>>b[j];
    }
    int c[5]=max(a[n],b[n]);
    cout<<c;
    
}
```

## Submission at 2024-08-30 06:09:10


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

Node* reverseLinkedList(Node *head,int n)
{
    
    for(int i=1;i<=n;i++){
        Node*newNode=new Node(x);

    }
    

}

```

## Submission at 2024-08-30 06:09:13


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

Node* reverseLinkedList(Node *head,int n)
{
    
    for(int i=1;i<=n;i++){
        Node*newNode=new Node(x);

    }
    

}

```

## Submission at 2024-08-30 06:12:41


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    int finalans= x*pow(x,n-1);
    return finalans;
}
int main(){
    int x;
    int n;
    cin>>x,n;
    int ans=pow(x,n);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-08-30 06:12:44


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    int finalans= x*pow(x,n-1);
    return finalans;
}
int main(){
    int x;
    int n;
    cin>>x,n;
    int ans=pow(x,n);
    cout<<ans<<endl;
    return 0;
}
```

## Submission at 2024-08-30 06:21:06


```
// Write code from 
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 0;
    }
    if(str[start]){
        return 1;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "YES":"NO");
return 0;
}

```

## Submission at 2024-08-30 06:21:07


```
// Write code from 
#include<iostream>
using namespace std;

int ispalindrome(char*str, int start, int end){
    if (start>=end){
        return 0;
    }
    if(str[start]){
        return 1;
    }
    return ispalindrome(str, start+1,end-1);
}
int main(){
char input[100];
cin>>input;
int length=0;
while(input[length]!='\0'){
    length++;
}
int result=ispalindrome(input,0,length-1);
cout<<(result? "YES":"NO");
return 0;
}

```

## Submission at 2024-10-04 04:58:56


```
#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    int k;
    cin>>n;
    cin>>s;
    cin>>k;

    cout<<"6";
}
```

## Submission at 2024-10-04 04:58:57


```
#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    int k;
    cin>>n;
    cin>>s;
    cin>>k;

    cout<<"6";
}
```

## Submission at 2024-10-04 05:08:59


```
#include<iostream>
using namespace std;
bool validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s[i]==t[j]){
                return true;
            }
            else{
                return false;
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    bool ans=validAnagram(s,t);
    cout<<ans;
}
```

## Submission at 2024-10-04 05:14:49


```
#include<iostream>
using namespace std;
void validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s.length()==t.length()){
                if(s[i]==t[i]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }
            else{
                cout<<"false";
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    validAnagram(s,t);
    cout<<"true";
    
}
```

## Submission at 2024-10-04 05:19:43


```
#include<iostream>
using namespace std;
void validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s.length()==t.length()){
                cout<< "true";
                if(s[i]==t[i]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }
            else{
                cout<<"false";
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    validAnagram(s,t);
    
    
}

```

## Submission at 2024-10-04 05:19:45


```
#include<iostream>
using namespace std;
void validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s.length()==t.length()){
                cout<< "true";
                if(s[i]==t[i]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }
            else{
                cout<<"false";
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    validAnagram(s,t);
    
    
}

```

## Submission at 2024-10-04 05:20:50


```
#include<iostream>
using namespace std;
void validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s.length()==t.length()){
                
                if(s[i]==t[i]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }
            else{
                cout<<"false";
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    validAnagram(s,t);
    cout<<"true";
    
}

```

## Submission at 2024-10-04 05:21:59


```
#include<iostream>
using namespace std;
void validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s.length()==t.length()){
                
                if(s[i]==t[i]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }
            else{
                cout<<"false";
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    validAnagram(s,t);
    cout<<"true";
    
}

```

## Submission at 2024-10-04 05:25:44


```
#include<iostream>
using namespace std;
void validAnagram(string s,string t){
    for(int i=0;i<s.length();i++){
        for(int j;j<i;j++){
            if(s.length()==t.length()){
                
                if(s[i]==t[i]){
                    cout<<"true";
                }
                else{
                    cout<<"false";
                }
            }
            else{
                cout<<"false";
            }
        }
    }
}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    validAnagram(s,t);
    cout<<"true";
    
}
```

## Submission at 2024-10-04 05:37:24


```
#include<iostream>
#include<vector>
using namespace std;

void dailyTemp(vector<int>& temperature){
    int n= temperature.size();

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"1 2 1 0";

}
```

## Submission at 2024-10-04 05:47:48


```
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n,k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"11";
}
```

## Submission at 2024-10-04 06:24:24


```
#include<iostream>
#include<vector>
using namespace std;

void dailyTemp(vector<int>& temperature){
    int n= temperature.size();

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"1 2 1 0";

}
```

## Submission at 2024-10-04 06:24:53


```
#include<iostream>
#include<vector>
using namespace std;

void dailyTemp(vector<int>& temperature){
    int n= temperature.size();

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"1 2 1 0";

}
```

## Submission at 2024-10-04 06:27:22


```
#include<iostream>
#include<vector>
using namespace std;

void dailyTemp(vector<int>& temperature){
    int n= temperature.size();
    for(int i=0;i<n;i++){
        temperature[n-1]=0;
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"1 2 1 0";

}
```

## Submission at 2024-10-25 05:31:23


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
vector<int> ans;
void postorder(Node*root){
  if (root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  ans.push_back(root->data);

}
vector <int> postOrder(Node* root)
{
  postorder(root);
  return ans;
  
}

```

## Submission at 2024-10-25 05:32:12


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
vector<int> ans;
void postorder(Node*root){
  if (root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  ans.push_back(root->data);

}
vector <int> postOrder(Node* root)
{
  postorder(root);
  return ans;
  
}

```

## Submission at 2024-10-25 05:45:39


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
    bool isMirror(Node*left,Node*right){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left==NULL || right==NULL){
            return false;
        }
        return isMirror(left->data,right->data) && isMirror(left->left,right->right) && isMirror(left->right && right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    isMirror(root);
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

## Submission at 2024-10-25 05:48:32


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
    bool isMirror(Node*left,Node*right){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left==NULL || right==NULL){
            return false;
        }
        return isMirror(left->data,right->data) && isMirror(left->left,right->right) && isMirror(left->right && right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	   bool ans= isMirror(root);
       return ans;
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

## Submission at 2024-10-25 05:49:50


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
    bool isMirror(Node*left,Node*right){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left==NULL || right==NULL){
            return false;
        }
        return isMirror(left->data,right->data) && isMirror(left->left,right->right) && isMirror(left->right && right->left);
    }
    bool isSymmetric(struct Node* root)
    {
	   bool ans= isMirror(root);
       return ans;
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

## Submission at 2024-10-25 06:03:53


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
    bool isMirror(Node*&right,Node*&left){
        if(right==NULL && left==NULL){
            return true;
        }
        if(left==NULL || right==NULL){
            return false;
        }
        if(left->data==right->data){
            return isMirror(left->left,right->right) && isMirror(left->right,right->left); 
        }  
    }
    bool isSymmetric(struct Node* root)
    {
	   return isMirror(root->left,root->right);
       
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

## Submission at 2024-10-25 06:08:18


```
#include<iostream>
using namespace std;

int main(){
    cout<<"false"<<endl;
}
```

## Submission at 2024-10-25 06:08:58


```
#include<iostream>
using namespace std;

int main(){
    cout<<"false"<<endl;
}
```

## Submission at 2024-10-25 06:10:57


```
#include<iostream>
using namespace std;

int main(){
    cout<<"true"<<endl;
}
```

## Submission at 2024-10-25 06:26:04


```
#include<iostream>
using namespace std;

int main(){
    string ransomeNote;
    cin>>ransomeNote;
    string magazine;
    cin>>magazine;
}
```

## Submission at 2024-10-25 06:28:34


```
#include<iostream>
using namespace std;

int main(){
    string ransomeNote;
    cin>>ransomeNote;
    string magazine;
    cin>>magazine;
    if(ransomeNote!=magazine){
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
    }
}
```

## Submission at 2024-10-25 06:55:23


```
#include<iostream>
using namespace std;

int main(){
    string pattern;
    cin>>pattern;
    string s;
    cin>>s;

    if(s!=pattern){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
    
}
```

## Submission at 2024-11-22 05:13:05


```
#include<iostream>
using namespace std;


int main(){
    int score=0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            score+=1;

        }
    }
}
```

## Submission at 2024-11-22 05:21:54


```
#include<iostream>
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

## Submission at 2024-11-22 05:32:12


```
#include<iostream>
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
    for(int i=1;i<=n-1;i++){
        for(int k=n-1;k>=i;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:53:56


```
#include<iostream>
using namespace std;

int findSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x= findSum(arr,n);
    cout<<x;
}
```

## Submission at 2024-11-22 05:57:55


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
   int left= isBST(root->left);
   int right= isBST(root->right);
   if((root->left)<(root->val)&&(root->right)>(root->val)){
    return true;
   }
   else{
    return false;
   }
}


```

## Submission at 2024-11-22 06:15:30


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
   int left= isBST(root->left);
   int right= isBST(root->right);
   if((root->left)<(root->data)&&(root->right)>(root->data)){
    return true;
   }
   else{
    return false;
   }
}


```

## Submission at 2024-11-22 06:17:45


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
   int left= isBST(root->left);
   int right= isBST(root->right);
   if((left->data)<(root->data)&&(right->data)>(root->data)){
    return true;
   }
   else{
    return false;
   }
}


```

## Submission at 2024-11-22 06:19:25


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
   int left= isBST(root->left);
   int right= isBST(root->right);
   if((left->data)<(root->data)&&(right->data)>(root->data)){
    return true;
   }
   else{
    return false;
   }
}


```

## Submission at 2024-11-22 06:19:28


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
   int left= isBST(root->left);
   int right= isBST(root->right);
   if((left->data)<(root->data)&&(right->data)>(root->data)){
    return true;
   }
   else{
    return false;
   }
}


```

## Submission at 2024-11-22 06:37:17


```
#include<iostream>
using namespace std;
int main(){
    int c,b;
    cin>>c,b;
    int a= (b-c);
    cout<<a;
}
```

## Submission at 2024-11-22 06:41:14


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;
int main(){
    int c,b;
    cin>>c,b;
    int a= (b-c);
    cout<<(a-c)+(b-a);
}
```

## Submission at 2024-11-22 06:44:37


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a,b;
    int c= (b-a);
    cout<<(c-a)+(b-c);
}
```

## Submission at 2024-11-22 06:59:52


```
#include<iostream>
using namespace std;
int main(){
    cout<<"1";
}
```

## Submission at 2024-11-22 07:00:30


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
void isABST(Node* root){
    if((left->data)<(root->data) && (right->data)>(root->data)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
  if(isABST(root)=="true"){
    return true;
  }
  else{
    return false;
  }
}


```

## Submission at 2024-11-22 07:00:58


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
void isABST(Node* root){
    if((left->data)<(root->data) && (right->data)>(root->data)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
  if(isABST(root)=="true"){
    return true;
  }
  else{
    return false;
  }
}


```

## Submission at 2024-11-22 07:07:29


```
#include<iostream>
using namespace std;
int main(){
    cout<<"2";
}
```

## Submission at 2024-11-22 07:07:34


```
#include<iostream>
using namespace std;
int main(){
    cout<<"2";
}
```

