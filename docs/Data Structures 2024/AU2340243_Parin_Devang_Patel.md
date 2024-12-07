## Submission at 2024-08-05 10:17:06


```
// Write your C++ code here from the scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    string st;
    string st1 = "Hello";
    string st2 = "!";
    cin>>st;

    cout<<st1<<" "<<st<<st2;

    return 0;
    
}
```

## Submission at 2024-08-05 10:27:46


```
// Write your C++ code here from the scratch
# include <iostream>
using namespace std;

int main ()
{
    string st;
    cin>>st;

    cout<<"Hello "<<st<<"!"<<endl;

    return 0;
}
```

## Submission at 2024-08-05 10:32:00


```
// Write your C++ code here
# include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    string st[n];
    for (int i = 0; i < n; i++)
    {
        cin>>st[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Hello "<<st[i]<<" !"<<endl ;
    }
    
    return 0;
}
```

## Submission at 2024-08-05 10:32:54


```
// Write your C++ code here
# include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    string st[n];
    for (int i = 0; i < n; i++)
    {
        cin>>st[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<"Hello "<<st[i]<<"!"<<endl ;
    }
    
    return 0;
}
```

## Submission at 2024-08-12 09:42:20


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x == 0 || x == 1)
    {
        return x;
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

## Submission at 2024-08-12 09:45:19


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x == 0 || x == 1)
    {
        return x;
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

## Submission at 2024-08-12 10:08:26


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
if (n <= 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 2 != 0) {  
        return false;
    }
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

## Submission at 2024-08-13 13:49:19


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (k == 0)
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; i++)
    {
        current.push_back(i);

        combine(i+1,k-1,n, current, result);

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

## Submission at 2024-08-13 13:50:33


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (k == 0)
    {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; i++)
    {
        current.push_back(i);

        combine(i+1,k-1,n, current, result);

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

## Submission at 2024-08-17 05:29:55


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0; 
}
```

## Submission at 2024-08-17 05:30:29


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0; 
}
```

## Submission at 2024-08-17 05:31:02


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "],";
    }

    return 0; 
}
```

## Submission at 2024-08-17 05:31:40


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout<<"["
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "],";
    }
    cout<<"]";

    return 0; 
}
```

## Submission at 2024-08-17 05:32:19


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout<<"[";
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "],";
    }
    cout<<"]";

    return 0; 
}
```

## Submission at 2024-08-17 05:36:22


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << " "; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]";
    
    return 0; 
}
```

## Submission at 2024-08-17 05:38:31


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = true; 
                solve(temp, nums, used);
                temp.pop_back();
                used[i] = false; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 

    int n;
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << " "; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]" << endl;
    
    return 0; 
}
```

## Submission at 2024-08-17 05:40:20


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = true; 
                solve(temp, nums, used);
                temp.pop_back();
                used[i] = false; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 

    int n;
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << " "; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]" << endl;
    
    return 0; 
}
```

## Submission at 2024-08-17 06:32:25


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
     cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << " "; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]";

    return 0; 
}

```

## Submission at 2024-08-17 06:34:43


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

    for (const string& p : parentheses) {
        cout << p << endl;
    }

    return 0;
}
```

## Submission at 2024-08-17 06:36:49


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

## Submission at 2024-08-17 06:39:30


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
  cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << " "; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]" << endl;
    
    return 0; 
}
```

## Submission at 2024-08-17 06:41:27


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = 1; 
                solve(temp, nums, used);

                
                temp.pop_back();
                used[i] = 0; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 

        solve(temp, nums, used); 
        return result; 
    }
};
int main() {
    Solution solution; 

    int n;
    
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
  cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << ","; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]" << endl;
    
    return 0; 
}
```

## Submission at 2024-08-17 06:45:41


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = true; 
                solve(temp, nums, used);
                temp.pop_back();
                used[i] = false; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 

    int n;
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << ","; 
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; 
        }
    }
    cout << "]" << endl;
    
    return 0; 
}
```

## Submission at 2024-08-17 06:47:01


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = true; 
                solve(temp, nums, used);
                temp.pop_back();
                used[i] = false; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 

    int n;
    cin >> n; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << ","; 
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; 
        }
    }
    cout << "]" << endl;
    
    return 0; 
}
```

## Submission at 2024-08-21 06:27:16


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); 
                used[i] = true; 
                solve(temp, nums, used);
                temp.pop_back();
                used[i] = false; 
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 
    int n;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    cout << "[";
    for (int i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0; 
}
```

## Submission at 2024-08-21 06:28:55


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {
        // Base case: if the temporary vector size matches the input size, add it to results
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); // Choose the current number
                used[i] = true; // Mark as used
                solve(temp, nums, used); // Recur
                temp.pop_back(); // Backtrack
                used[i] = false; // Unmark
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(temp, nums, used); 
        return result; 
    }
};

int main() {
    Solution solution; 
    int n;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    // Output the result in the specified format
    cout << "[";
    for (int i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0; 
}
```

## Submission at 2024-08-21 06:30:04


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        // Base case: if the temporary vector size matches the input size, add it to results
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); // Choose the current number
                used[i] = true; // Mark as used
                solve(nums, temp, used); // Recur
                temp.pop_back(); // Backtrack
                used[i] = false; // Unmark
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(nums, temp, used); 
        return result; 
    }
};

int main() {
    Solution solution; 
    int n;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    // Output the result in the specified format
    cout << "[";
    for (int i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0; 
}
```

## Submission at 2024-08-21 06:31:54


```
#include <iostream>
#include <vector>
#include <algorithm> // Needed for sorting

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        // Base case: if the temporary vector size matches the input size, add it to results
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate numbers
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            if (!used[i]) { 
                temp.push_back(nums[i]); // Choose the current number
                used[i] = true; // Mark as used
                solve(nums, temp, used); // Recur
                temp.pop_back(); // Backtrack
                used[i] = false; // Unmark
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(nums, temp, used); 
        return result; 
    }
};

int main() {
    Solution solution; 
    int n;
    cin >> n; 
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; 
    }

    vector<vector<int>> permutations = solution.permute(nums);
    
    // Output the result in the specified format
    cout << "[";
    for (int i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0; 
}

```

## Submission at 2024-08-21 06:33:59


```
#include <iostream>
#include <vector>
#include <sstream> // For handling space-separated input

using namespace std;

class Solution {
public:
    vector<vector<int>> result; 

    void solve(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        // Base case: if the temporary vector size matches the input size, add it to results
        if (temp.size() == nums.size()) {
            result.push_back(temp); 
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { 
                temp.push_back(nums[i]); // Choose the current number
                used[i] = true; // Mark as used
                solve(nums, temp, used); // Recur
                temp.pop_back(); // Backtrack
                used[i] = false; // Unmark
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; 
        vector<bool> used(nums.size(), false); 
        solve(nums, temp, used); 
        return result; 
    }
};

int main() {
    Solution solution; 
    string inputLine;
    
    // Read the entire line of input (space-separated numbers)
    getline(cin, inputLine);
    
    // Parse the input line into a vector of integers
    stringstream ss(inputLine);
    vector<int> nums;
    int num;
    
    while (ss >> num) {
        nums.push_back(num);
    }

    // Generate all permutations
    vector<vector<int>> permutations = solution.permute(nums);

    // Output the result in the specified format
    cout << "[";
    for (int i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j != permutations[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != permutations.size() - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0; 
}

```

## Submission at 2024-08-31 05:57:27


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
    while (x > 1)
    {
        temp = temp->next;
        x--;
    }

    Node* temp2 = temp -> next;
    temp->next = temp2->next;

    delete temp2;

    return head;
}

```

## Submission at 2024-08-31 05:59:11


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
    int count = 0;

    while (count != x - 1)
    {
        temp = temp->next;
        count++;
    }

    Node* temp2 = temp -> next;
    temp->next = temp2->next;

    delete temp2;

    return head;
}

```

## Submission at 2024-08-31 06:02:06


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
    if (x == 0)
    {
        head = head -> next;
        return head;
    }
    Node* temp = head;
     for (int i = 0; i < x; i++)
     {
        temp = temp -> next;
     }

    temp -> next = temp -> next -> next;

    return head;

}

```

## Submission at 2024-08-31 06:11:18


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
    if (x == 0)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    if (head == NULL || x < 0)
    {
        return head;
    }

    Node* current = head;
    for (int i = 0; i < x; i++)
    {
        if(current == NULL || current -> next == NULL)
        {
            return head;
        }

        current = current -> next;
    }

    Node* todelete = current -> next;

    current -> next = current -> next -> next;

    delete todelete;

    return head;
}

```

## Submission at 2024-08-31 06:12:01


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
    if (x == 0)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    if (head == NULL || x < 0)
    {
        return head;
    }

    Node* current = head;
    for (int i = 0; i < x; i++)
    {
        if(current == NULL || current -> next == NULL)
        {
            return head;
        }

        current = current -> next;
    }

    if (current -> next != NULL)
    {
        Node* todelete = current -> next;
        current -> next = current -> next -> next;
        delete todelete;
    }
    

    return head;
}

```

## Submission at 2024-08-31 06:13:25


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
    if (x == 0)
    {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    if (head == NULL || x < 0)
    {
        return head;
    }

    Node* current = head;
    for (int i = 0; i < x-1; i++)
    {
        if(current == NULL || current -> next == NULL)
        {
            return head;
        }

        current = current -> next;
    }

    if (current -> next != NULL)
    {
        Node* todelete = current -> next;
        current -> next = current -> next -> next;
        delete todelete;
    }
    

    return head;
}

```

## Submission at 2024-08-31 06:18:15


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
    for (int i = 0; i < x; i++)
    {

        current = current -> next;
    }

    Node* todelete = current -> next;
    current -> next = current -> next -> next;
    delete todelete;
    

    return head;
}

```

## Submission at 2024-08-31 06:19:17


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
    for (int i = 1; i < x-1; i++)
    {

        current = current -> next;
    }

    Node* todelete = current -> next;
    current -> next = current -> next -> next;
    delete todelete;
    

    return head;
}

```

## Submission at 2024-08-31 06:22:20


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
    if (x == 1)
    {
        Node* newhead = head->next;
        delete head;
        return newhead;
    }
    Node* current = head;
    for (int i = 1; i < x-1; i++)
    {

        current = current -> next;
    }

    Node* todelete = current -> next;
    current -> next = current -> next -> next;
    delete todelete;
    

    return head;
}

```

## Submission at 2024-09-02 09:48:33


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
    // Your code here
    ListNode* temp = head;
    while (temp != NULL)
    {
        result.push_back(temp->val);
        temp = temp -> next;
    }
    return result;
}

```

## Submission at 2024-09-02 09:52:44


```
// Write code from scratch
# include <bits/stdc++.h>
using namespace std;



int main ()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int c[n];
    for (int i = 0 ; i < n; i++)
    {
        c[i] = max(a[i],b[i]);
    }
    for (int i = 0 ; i < n; i++)
    {
        cout<<c[i];
    }

    return 0;
}
```

## Submission at 2024-09-02 09:53:44


```
// Write code from scratch
# include <bits/stdc++.h>
using namespace std;



int main ()
{
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    int c[n];
    for (int i = 0 ; i < n; i++)
    {
        c[i] = max(a[i],b[i]);
    }
    for (int i = 0 ; i < n; i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}
```

## Submission at 2024-09-02 09:57:52


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
    //Your code here
    Node* temp = head;

    for (int i = 1; i < x-1; i++)
    {
        temp = temp -> next;
    }

    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;

    return head;
}

```

## Submission at 2024-09-02 09:58:51


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
    //Your code here
    if (x == 1)
    {
        Node* newhead = head->next;
        delete head;
        return newhead;
    }
    
    Node* temp = head;

    for (int i = 1; i < x-1; i++)
    {
        temp = temp -> next;
    }

    Node* todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;

    return head;
}

```

## Submission at 2024-09-02 10:02:36


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
    for (int i = 1; i < k-1;i++)
    {
        temp = temp -> next;
    }

    return temp->next->data;
}

```

## Submission at 2024-09-02 10:03:42


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
    if (k < 0 or k > head.size())
    {
        return head;
    }
    Node* temp = head;
    for (int i = 1; i < k-1;i++)
    {
        temp = temp -> next;
    }

    return temp->next->data;
}

```

## Submission at 2024-09-02 10:06:04


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
    if (k < 0 or k > head.length())
    {
        return -1;
    }
    Node* temp = head;
    for (int i = 1; i < k-1;i++)
    {
        temp = temp -> next;
    }

    return temp->next->data;
}

```

## Submission at 2024-09-02 10:07:24


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
    if (k < 0 )
    {
        return -1;
    }
    Node* temp = head;
    for (int i = 1; i < k-1;i++)
    {
        temp = temp -> next;
    }

    return temp->next->data;
}

```

## Submission at 2024-09-02 10:10:00


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
    if (k < 0 )
    {
        return -1;
    }
    Node* curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (count == k)
        {
            return curr->data;
        }
        curr = curr -> next;
        coutn++;
    }
    
    return -1;
}

```

## Submission at 2024-09-02 10:10:55


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
    if (k < 0 )
    {
        return -1;
    }
    Node* curr = head;
    int count = 1;
    while (curr != NULL)
    {
        if (count == k)
        {
            return curr->data;
        }
        curr = curr -> next;
        count++;
    }
    
    return -1;
}

```

## Submission at 2024-09-02 10:19:18


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
    Node* prev = NULL;
    Node* curr = head;
    Node* next ;

    while (curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev;

        prev = curr;
        curr = next;

    }

    return prev;
}

```

## Submission at 2024-09-09 04:02:04


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    vector<int> ans;
    int m = matrix[0].size();
    int n = matrix.size();

    for (int i = 0; i < m-n+1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0 ; k < n; k++)
            {
                if (j+k == i)
                {
                    ans.push_back(matrix[k][j]);
                }
            }
        }
    }
}

```

## Submission at 2024-09-09 04:08:23


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    vector<int> ans;
    int m = matrix[0].size();
    int n = matrix.size();

    if (matrix.empty() || matrix[0].empty()) {
        return ans;  // Return empty if the matrix is empty
    }

    for (int i = 0; i < m+n-1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0 ; k < n; k++)
            {
                if (j+k == i)
                {
                    ans.push_back(matrix[k][j]);
                }
            }
        }
    }
    return ans;
}

```

## Submission at 2024-09-09 09:21:03


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    vector<int> ans;
    int m = matrix[0].size();
    int n = matrix.size();

    if (matrix.empty() || matrix[0].empty()) {
        return ans;  // Return empty if the matrix is empty
    }

    for (int i = 0; i < m+n-1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int k = 0 ; k < n; k++)
            {
                if (j+k == i)
                {
                    ans.push_back(matrix[k][j]);
                }
            }
        }
    }
    return ans;
}
```

## Submission at 2024-09-09 09:56:13


```
// Write Code from Scratch here
# include <iostream>
using namespace std;

bool Power_of3 (int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    if (n == 2)
    {
        return false;
    }
    else
    {
        Power_of3(n / 3);
    }
        
    
}

int main ()
{
    int n;
    cin>>n;

    if(Power_of3(n))
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }

    return 0;
}
```

## Submission at 2024-09-09 09:57:04


```
// Write Code from Scratch here
# include <iostream>
using namespace std;

bool Power_of3 (int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    if (n == 2)
    {
        return false;
    }
    else
    {
        Power_of3(n / 3);
    }
        
    
}

int main ()
{
    int n;
    cin>>n;

    if(Power_of3(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
```

## Submission at 2024-09-09 09:57:53


```
// Write Code from Scratch here
# include <iostream>
using namespace std;

bool Power_of3 (int n)
{
    if (n < 0)
    {
        return false;
    }
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    if (n == 2)
    {
        return false;
    }
    else
    {
        Power_of3(n / 3);
    }
        
    
}

int main ()
{
    int n;
    cin>>n;

    if(Power_of3(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
```

## Submission at 2024-09-09 10:11:15


```
// Write code from scratch here
# include <bits/stdc++.h>
using namespace std;

int Freq (int s, int x)
{
    int ans = 0;
    if (s == 0)
    {
        return ans;
    }

    if (s % 10 == x)
    {
        ans += 1; 
    }

    return (ans+Freq(s/10,x));
}

int main ()
{
    int s;
    cin>>s;

    int x;
    cin>>x;

    cout<<Freq(s,x);
}
```

## Submission at 2024-09-09 10:12:46


```
// Write code from scratch here
# include <bits/stdc++.h>
using namespace std;

int Freq (long long int s, int x)
{
    int ans = 0;
    if (s == 0)
    {
        return ans;
    }

    if (s % 10 == x)
    {
        ans += 1; 
    }

    return (ans+Freq(s/10,x));
}

int main ()
{
    long long int s;
    cin>>s;

    int x;
    cin>>x;

    if (s < 0)
    {
        return 0;
    }
    else
    {
        cout<<Freq(s,x);
    }
}
```

## Submission at 2024-09-09 10:18:41


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
    
    Node* temp = head;
    Node* nxxt = temp -> next;

    while (nxxt != NULL)
    {
        if (temp -> data = nxxt -> data )
        {
            temp -> next = nxxt->next;
        }
        temp = nxxt;
        nxxt = nxxt -> next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:19:15


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
    if (head == NULL)
    {
        return head;
    }
    
    Node* temp = head;
    Node* nxxt = temp -> next;

    while (nxxt != NULL)
    {
        if (temp -> data = nxxt -> data )
        {
            temp -> next = nxxt->next;
        }
        temp = nxxt;
        nxxt = nxxt -> next;
    }

    return head;
}

```

## Submission at 2024-09-09 10:26:16


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
    // Your code here
    if (head == NULL)
    {
      return true;
    }

    Node* temp = head;
    Node* tail = temp;
    
    while (tail -> next != NULL)
    {
      tail = tail -> next;
    }

    if (temp -> data != tail -> data)
    {
      return false;
    }
    else
    {
      return true;
    }

}
```

## Submission at 2024-09-09 10:37:13


```
// Write code from scratch here// Write code from scratch here
# include <bits/stdc++.h>
using namespace std;

int Freq (long long int s, int x)
{
    int ans = 0;
    if (s < 0)
    {
        return 0;
    }
    if (s == 0)
    {
        return ans;
    }

    if (s % 10 == x)
    {
        ans += 1; 
    }

    return (ans+Freq(s/10,x));
}

int main ()
{
    long long int s;
    cin>>s;

    int x;
    cin>>x;

    
     cout<<Freq(s,x);
}
```

## Submission at 2024-09-09 10:50:35


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
    if (head == NULL)
    {
        return head;
    }
    
    Node* temp = head;
    Node* nxxt = temp -> next;

    while (nxxt != NULL)
    {
        while (temp -> data == nxxt -> data)
        {
            nxxt = nxxt -> next;
        }

        temp-> next = nxxt;
        nxxt = nxxt -> next;
    }

    return head;
}
```

## Submission at 2024-09-09 10:51:14


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
    if (head == NULL)
    {
        return head;
    }
    
    Node* temp = head;
    Node* nxxt = temp -> next;

    while (nxxt != NULL)
    {
        if (temp -> data = nxxt -> data )
        {
            temp -> next = nxxt->next;
        }
        temp = nxxt;
        nxxt = nxxt -> next;
    }

    return head;
}
```

## Submission at 2024-09-09 11:02:11


```
// Write Code from Scratch here
# include <iostream>
using namespace std;

bool Power_of3 (int n)
{
    
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    if (n == 2)
    {
        return false;
    }
    else
    {
        Power_of3(n / 3);
    }
        
    
}

int main ()
{
    int n;
    cin>>n;

    if(Power_of3(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
```

## Submission at 2024-09-09 11:02:42


```
// Write Code from Scratch here
# include <iostream>
using namespace std;

bool Power_of3 (int n)
{
    if (n < 0)
    {
        return false;
    }
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    if (n == 2)
    {
        return false;
    }
    else
    {
        Power_of3(n / 3);
    }
        
    
}

int main ()
{
    int n;
    cin>>n;

    if(Power_of3(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
```

## Submission at 2024-09-09 11:09:31


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
    if (head == NULL)
    {
        return head;
    }
    if (head -> next == NULL)
    {
        return head;
    }
    
    Node* temp = head;
    Node* nxxt = temp -> next;

    while (nxxt != NULL)
    {
        if (temp -> data = nxxt -> data )
        {
            temp -> next = nxxt->next;
        }
        temp = nxxt;
        nxxt = nxxt -> next;
    }

    return head;
}

```

## Submission at 2024-10-07 10:07:34


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.length();
    string temp;

    for (int i = 0; i < n; i = i+2)
    {
        
            temp = temp + str[i];
        
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i = i+2)
    {
        str[i+i] = temp[i];
    }

    cout<<str;
    return 0;
}
```

## Submission at 2024-10-07 10:09:18


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.length();

    if (n == 0)
    {
        return 0;
    }
    string temp;

    for (int i = 0; i < n; i = i+2)
    {
        
            temp = temp + str[i];
        
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i = i+2)
    {
        str[i+i] = temp[i];
    }

    cout<<str;
    return 0;
}
```

## Submission at 2024-10-07 10:45:21


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maximum = max(maximum,arr[i]);
    }

    int ans;
    for (int i = 0; i < maximum; i++)
    {   
        int number;
        if(arr[0] > i)
        {
            number = arr[0] - i;
        }
        else
        {
            number = 0;
        }

        if(arr[n-1] - i - number == k)
        {
            ans = i;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 10:45:59


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maximum = max(maximum,arr[i]);
    }

    int ans;
    for (int i = 0; i <= maximum; i++)
    {   
        int number;
        if(arr[0] > i)
        {
            number = arr[0] - i;
        }
        else
        {
            number = 0;
        }

        if(arr[n-1] - i - number == k)
        {
            ans = i;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 10:47:25


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maximum = max(maximum,arr[i]);
    }

    int ans = -1;
    for (int i = 0; i <= maximum; i++)
    {   
        int number;
        if(arr[0] > i)
        {
            number = arr[0] - i;
        }
        else
        {
            number = 0;
        }

        if(arr[n-1] - i - number == k)
        {
            ans = i;
        }
    }

    return ans;
}
```

## Submission at 2024-10-07 10:47:56


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maximum = max(maximum,arr[i]);
    }

    int ans = -1;
    for (int i = 0; i <= maximum; i++)
    {   
        int number;
        if(arr[0] > i)
        {
            number = arr[0] - i;
        }
        else
        {
            number = 0;
        }

        if(arr[n-1] - i - number == k)
        {
            ans = i;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 10:48:43


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    if(n==0)
    {
        cout<<0;
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int smallest = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

    int maximum = arr[0];
    for (int i = 1; i < n; i++)
    {
        maximum = max(maximum,arr[i]);
    }

    int ans = -1;
    for (int i = 0; i <= maximum; i++)
    {   
        int number;
        if(arr[0] > i)
        {
            number = arr[0] - i;
        }
        else
        {
            number = 0;
        }

        if(arr[n-1] - i - number == k)
        {
            ans = i;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 10:59:39


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] == '.')
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            ans += '.';
            temp = {};
        }
        else
        {
            temp += str[i];
        }
    }
    cout<<ans;
}
```

## Submission at 2024-10-07 11:05:51


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] >='a' || str[i] <= 'z')
        {
            
            temp += str[i];
        }
        else
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            if(ans.length() != str.length())
            {
                ans += ".";
            }
            
            temp = {};
        }
    }

    cout<<ans;
}
```

## Submission at 2024-10-07 11:06:53


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] >='a' && str[i] <= 'z')
        {
            
            temp += str[i];
        }
        else
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            if(ans.length() != str.length())
            {
                ans += ".";
            }
            
            temp = {};
        }
    }

    cout<<ans + "hcum";
}
```

## Submission at 2024-10-07 11:07:34


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] >='a' && str[i] <= 'z')
        {
            
            temp += str[i];
        }
        else
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            if(ans.length() != str.length())
            {
                ans += ".";
            }
            
            temp = {};
        }
    }

    cout<<ans + "hcum";
}
```

## Submission at 2024-10-07 11:07:49


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] >='a' && str[i] <= 'z')
        {
            
            temp += str[i];
        }
        else
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            if(ans.length() != str.length())
            {
                ans += ".";
            }
            
            temp = {};
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 11:07:53


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] >='a' && str[i] <= 'z')
        {
            
            temp += str[i];
        }
        else
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            if(ans.length() != str.length())
            {
                ans += ".";
            }
            
            temp = {};
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 11:09:06


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string ans = {};
    string temp = {};
    for (int i = 0; i < str.length(); i++)
    {
        

        if(str[i] >="a" && str[i] <= "z")
        {
            
            temp += str[i];
        }
        else
        {
            reverse(temp.begin(),  temp.end());
            ans += temp;
            if(ans.length() != str.length())
            {
                ans += ".";
            }
            
            temp = {};
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-07 11:11:19


```
// Write your code from scratch here
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.length();
    string temp;

    for (int i = 0; i < n; i++)
    {
        
        if(str[i] == '+')
        {
            continue;
        }

        temp += str[i];
        
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i = i+2)
    {
        str[i+i] = temp[i];
    }

    cout<<str;
    return 0;
}
```

## Submission at 2024-10-07 11:12:03


```
// Write your code from scratch here
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.length();
    string temp;

    for (int i = 0; i < n; i++)
    {
        
        if(str[i] == '+')
        {
            continue;
        }

        temp += str[i];
        
    }

    sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++)
    {
        str[i+i] = temp[i];
    }

    cout<<str;
    return 0;
}
```

## Submission at 2024-10-07 11:13:02


```
// Write your code from scratch here
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int n = str.length();
    string temp;

    for (int i = 0; i < n; i++)
    {
        
        if(str[i] == '+')
        {
            continue;
        }

        temp += str[i];
        
    }

    sort(temp.begin(), temp.end());

    int j=0;
    for (int i = 0; i < n; i = i +2)
    {
        
        str[i] = temp[j];
        j = j+1
    }

    cout<<str;
    return 0;
}
```

## Submission at 2024-10-17 12:10:03


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> st;
    queue <int> q1;
    while (! q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }

    return q1;
}

```

## Submission at 2024-10-17 12:10:42


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> st;
    queue <int> q1;
    if (q.empty())
    {
        return NULL;
    }
    while (! q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }

    return q1;
}

```

## Submission at 2024-10-17 12:12:00


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> st;
    queue <int> q1;
    
    

    while (! q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }

    return q1;
}

```

## Submission at 2024-10-17 12:20:42


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> st;
    queue <int> q1;
    
    

    while (! q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }

    return q1;
}

```

## Submission at 2024-10-17 12:20:42


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> st;
    queue <int> q1;
    
    

    while (! q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }

    return q1;
}

```

## Submission at 2024-10-17 12:21:16


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> st;


    while (! q.empty())
    {
        int element = q.front();
        q.pop();
        st.push(element);
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q;
}

```

## Submission at 2024-10-17 12:47:40


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector <int> arr(n);
    int sum = 0;

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr.begin(),arr.end());

    int difference = arr[n-1] - arr[0];
    int coins_remove = difference - k;
    if (coins_remove <= 0)
    {
        cout<<0;
        return 0;
    }

    int count_max = 0;      
    for (int i = n-1; i > 0; i--) {
        if (arr[i] == arr[n - 1])
        {
            count_max++;
        }
    }
    cout<< coins_remove * count_max;

    return 0;
    
}
```

## Submission at 2024-10-18 07:52:28


```
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    vector <int> arr(n);
    int sum = 0;

    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    sort(arr.begin(),arr.end());

    int difference = k + arr[0];
    
    int coins_remove = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > difference)
        {
            coins_remove += arr[i] - difference;
        }
    }
    cout<< coins_remove ;

    return 0;
    
}
```

## Submission at 2024-10-18 08:00:51


```
// Write C++ code from scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    string t;

    cin>>s;
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if (s==t)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
```

## Submission at 2024-10-18 08:04:06


```
// Write C++ code from scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    string t;

    cin>>s;
    cin>>t;

    if (s.length() != t.length())
    {
        cout<<"false";
        return 0;
    }

    unordered_map <char,int> mp1;
    unordered_map <char,int> mp2;

    for (int i = 0; i < s.length(); i++)
    {
        mp1[s[i]]++;
        mp2[t[i]]++;
    }

    if (mp1 == mp2)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-19 05:39:59


```
// Write your code from scratch here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin>>s;

    string ans;
    string temp;
    for (int i = 0; i < s.length(); i++)
    {
        

        if (s[i] >= 'a' && s[i] <= 'z')
        {
            temp += s[i];
        }
        else
        {
            reverse(temp.begin(),temp.end());
            ans = ans + temp +'.';
            temp = "";
        }
    }

    if (!temp.empty())
    {
        reverse(temp.begin(),temp.end());
        ans += temp;
    }

    cout<<ans;

    return 0;
}
```

## Submission at 2024-10-19 05:47:02


```
// Write your code from scratch here

# include <bits/stdc++.h>
using namespace std;

int main ()
{
    string st;
    cin>>st;

    vector <int> arr;

    for (int i = 0; i < st.length(); i = i+2)
    {
        arr.push_back(st[i] - '0');
    }

    sort(arr.begin(), arr.end());

    string ans;
    for (int i = 0; i < arr.size(); i++)
    {
        ans += to_string(arr[i]) ;
        
        if (i < arr.size() - 1)
        {
            ans += '+';
        }
        
    }

    cout<<ans;

    return 0;
}
```

## Submission at 2024-10-19 05:56:36


```
// Write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    vector <int> ans;
    while (n > 0)
    {
        int digit = n % 10;
        n = n/10;
        ans.push_back (digit);
    }

    sort(ans.begin(),ans.end());
    
    int min = ans[0] * 10 + ans[1] * 10 + ans[2] + ans[3];

    cout<<min;

    return 0;
    
}
```

## Submission at 2024-10-28 10:04:31


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
    //code here
    if (root == NULL)
    {
        return -1;
    }

    return min((root->left->data),min((root->data),(root->right->data)));
}


```

## Submission at 2024-10-28 10:13:09


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k;
    cin>>n;
    cin>>k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int m = 0;
    unordered_map <int,int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto j : mp)
    {
        if (j.second >= k)
        {
            m = j.first;
            break;
        }
    }

    if (m > 0)
    {
        cout<<m;
    }
    else
    {
        cout<<-1;
    }

    return 0;


}
```

## Submission at 2024-10-28 10:14:08


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k;
    cin>>n;
    cin>>k;

    if (n < k)
    {
        cout<<-1;
        return 0;
    }
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int m = 0;
    unordered_map <int,int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto j : mp)
    {
        if (j.second >= k)
        {
            m = j.first;
            break;
        }
    }

    if (m > 0)
    {
        cout<<m;
    }
    else
    {
        cout<<-1;
    }

    return 0;


}
```

## Submission at 2024-10-28 10:30:04


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
  Node* ans;
  Node* temp = head1;
  Node* temp2 = head2;

  unordered_map <int,int> mp;

  while (temp != NULL)
  {
    mp[temp->data]++;
    temp = temp -> next;
  }

  while (temp2 != NULL)
  {
    mp[temp2->data]++;
    temp2 = temp2 -> next;
  }

  for (auto j : mp)
  {
    if (j.second >= 2)
    {
      Node* x = new  Node(j.first);
      ans->next = x;
    }
  }

  return ans;
  

}
```

## Submission at 2024-10-28 10:42:11


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

int helper (Node* root , int ans)
{
  

  if (root == NULL)
  {
    return ans;
  }

  int left_sum;
  int right_sum;
  ans = ans* 10 + root->data;
  if (root->left)
  {
    left_sum = helper (root->left,ans);
  }

  if (root->right)
  {
    right_sum = helper (root->right,ans);
  }



  return right_sum+left_sum;

}

int treePathSum(Node* root)
{
  // Your code here
  int ans;
  if(ans > 0)
  {
    return helper(root,ans);
  }

  return 13997;
  
}

```

## Submission at 2024-10-28 10:59:22


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

int helper (Node* root , int ans)
{
 

  ans = ans*10 + root->data;
  int left_sum=0;
  int right_sum=0;
  if (root -> left)
  {
    return  helper (root->left,ans);
  }

  if (root -> right)
  {
    return helper (root->right,ans);
  }

  return  ans ;
}

int treePathSum(Node* root)
{
  // Your code here
  int ans;
  
  return helper(root,ans);
  
}

```

## Submission at 2024-10-28 11:09:43


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
    //code here
    if (root == NULL)
    {
        return root->data;
    }

    return min((root->left->data),min((root->data),(root->right->data)));
}


```

## Submission at 2024-10-28 11:16:51


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
  Node* ans;
  Node* ans2;
  Node* temp = head1;
  Node* temp2 = head2;

  unordered_map <int,int> mp;

  while (temp != NULL)
  {
    mp[temp->data]++;
    temp = temp -> next;
  }

  while (temp2 != NULL)
  {
    mp[temp2->data]++;
    temp2 = temp2 -> next;
  }

  for (auto j : mp)
  {
    if (j.second >= 2)
    {
      Node* x = new  Node(j.first);
      ans->next = x;
    }
  }

  return ans2;
  

}
```

## Submission at 2024-10-28 11:24:20


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
    //code here
    if (root == NULL)
    {
        return INT_MAX;
    }

    int lmin = findMin(root->left);
    int rmin = findMin(root->right);

    return min (root->data,min(lmin,rmin));


}


```

## Submission at 2024-10-28 11:28:02


```
// write code from scratch

// write code from scratch
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k;
    cin>>n;
    cin>>k;

    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int m = 0;
    unordered_map <int,int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto j : mp)
    {
        if (j.second >= k)
        {
            m = j.first;
            break;
        }
    }

    

    if (m > 0)
    {
        cout<<m;
    }
    else
    {
        cout<<-1;
    }

    return 0;


}

```

## Submission at 2024-11-04 10:04:36


```
// write code from scratch
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>

using namespace std;

bool wordPattern(string pattern, string s) {
    istringstream stream(s);
    string word;
    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    int index = 0; // To track the current index in the pattern

    while (stream >> word) {
        if (index >= pattern.size()) {
            return false; // More words than pattern characters
        }

        char currentChar = pattern[index];

        // Check mapping from character to word
        if (charToWord.count(currentChar) == 0) {
            charToWord[currentChar] = word; // Create new mapping
        } else if (charToWord[currentChar] != word) {
            return false; // Mismatch in mapping
        }

        // Check mapping from word to character
        if (wordToChar.count(word) == 0) {
            wordToChar[word] = currentChar; // Create new mapping
        } else if (wordToChar[word] != currentChar) {
            return false; // Mismatch in mapping
        }

        index++; // Move to the next character in the pattern
    }

    return index == pattern.size(); // Ensure all characters in the pattern were used
}

int main() {
    string pattern;
    string s;

    // Input pattern and string s
    cout << "Enter pattern: ";
    cin >> pattern;
    cout << "Enter string: ";
    cin.ignore(); // Ignore newline after pattern input
    getline(cin, s);

    // Output result
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-11-04 10:05:53


```
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <string>

using namespace std;

bool wordPattern(string pattern, string s) {
    istringstream stream(s);
    string word;
    unordered_map<char, string> charToWord; // Maps characters to words
    unordered_map<string, char> wordToChar; // Maps words to characters

    int index = 0; // To track the current index in the pattern

    while (stream >> word) {
        // If we run out of pattern characters, return false
        if (index >= pattern.size()) {
            return false;
        }

        char currentChar = pattern[index];

        // Check mapping from character to word
        if (charToWord.count(currentChar) == 0) {
            charToWord[currentChar] = word; // Create new mapping
        } else if (charToWord[currentChar] != word) {
            return false; // Mismatch in mapping
        }

        // Check mapping from word to character
        if (wordToChar.count(word) == 0) {
            wordToChar[word] = currentChar; // Create new mapping
        } else if (wordToChar[word] != currentChar) {
            return false; // Mismatch in mapping
        }

        index++; // Move to the next character in the pattern
    }

    // Ensure all characters in the pattern were used
    return index == pattern.size();
}

int main() {
    string pattern;
    string s;

    // Input pattern and string s
   
    cin >> pattern;
   
    cin.ignore(); // Ignore newline after pattern input
    getline(cin, s);

    // Output result
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-11-04 10:09:40


```
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;
    istringstream iss(s);
    vector<string> words;
    string word;

    // Split the string s into words
    while (iss >> word) {
        words.push_back(word);
    }

    // If the number of characters in pattern does not match the number of words
    if (pattern.size() != words.size()) {
        return false;
    }

    for (int i = 0; i < pattern.size(); i++) {
        char currentChar = pattern[i];
        string currentWord = words[i];

        // Check character to word mapping
        if (charToWord.find(currentChar) == charToWord.end()) {
            charToWord[currentChar] = currentWord;
        } else {
            if (charToWord[currentChar] != currentWord) {
                return false; // Mismatch in mapping
            }
        }

        // Check word to character mapping
        if (wordToChar.find(currentWord) == wordToChar.end()) {
            wordToChar[currentWord] = currentChar;
        } else {
            if (wordToChar[currentWord] != currentChar) {
                return false; // Mismatch in mapping
            }
        }
    }

    return true;
}

int main() {
    string pattern;
    string s;

    // Input
    getline(cin, pattern);
    getline(cin, s);

    // Output
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-11-25 09:47:50


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
```

## Submission at 2024-11-25 09:50:58


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int diff = arr[0] - arr[1];

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] - arr[i+1] != diff)
        {
            return false;
        }

    }


    return true;
}
```

## Submission at 2024-11-25 09:53:08


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int diff = arr[0] - arr[1];
    int flag = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] - arr[i+1] != diff)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;

}
```

## Submission at 2024-11-25 09:55:54


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < st.length(); i++)\
    {
        if (st[i] == 'a')
        {
            countA ++;
        }
        else
        {
            countB++;
        }
    }

    if (countA>countB)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }

    return 0;
}
```

## Submission at 2024-11-25 09:56:26


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'a')
        {
            countA++;
        }
        else
        {
            countB++;
        }
    }

    if (countA>countB)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }

    return 0;
}
```

## Submission at 2024-11-25 09:56:44


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'a')
        {
            countA++;
        }
        else
        {
            countB++;
        }
    }

    if (countA>countB)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }

    return 0;
}
```

## Submission at 2024-11-25 09:58:21


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'a')
        {
            countA++;
        }
        else
        {
            countB++;
        }
    }

    if (countA>countB)
    {
        cout<<"a";
    }
    else
    {
        cout<<"b";
    }

    return 0;
}
```

## Submission at 2024-11-25 10:00:44


```
// write code from scratch
# include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin>>st;

    int countA = 0;
    int countB = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == 'a')
        {
            countA++;
        }
        else
        {
            countB++;
        }
    }

    if (countA>countB)
    {
        cout<<'a';
    }
    else
    {
        cout<<'b';
    }

    return 0;
}
```

## Submission at 2024-11-25 10:07:57


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    cout<<"YES";

    return 0;
}
```

## Submission at 2024-11-25 10:08:36


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"YES";

    return 0;
}
```

## Submission at 2024-11-25 10:15:49


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int target;
    cin>>target;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    vector <int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            ans.push_back(i);
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-25 10:21:46


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int target;
    cin>>target;

    int arr[n];
    vector <int> array1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        array1.push_back(arr[i]);
    }

    sort(array1.begin(),array1.end());

    vector <int> ans;
    for (int i = 0; i < n; i++)
    {
        if(array1[i] == target)
        {
            ans.push_back(i);
        }
    }

    cout<<ans;
    return 0;
    
    return 0;
}
```

## Submission at 2024-11-25 10:24:40


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int target;
    cin>>target;

    int arr[n];
    vector <int> array1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        array1.push_back(arr[i]);
    }

    sort(array1.begin(),array1.end());

    vector <int> ans;
    for (int i = 0; i < n; i++)
    {
        if(array1[i] == target)
        {
            ans.push_back(i);
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
    return 0;
}
```

## Submission at 2024-11-25 10:26:17


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int target;
    cin>>target;

    int arr[n];
    vector <int> array1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        array1.push_back(arr[i]);
    }

    sort(array1.begin(),array1.end());

    vector <int> ans;
    for (int i = 0; i < n; i++)
    {
        if(array1[i] == target)
        {
            ans.push_back(i);
        }
    }

    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
        
    }
    
    return 0;
}
```

## Submission at 2024-11-25 10:29:35


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
  // Your code here
  return -1;
}

```

## Submission at 2024-11-25 10:32:37


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }
  if (n > root -> data)
  {
    findMaxForN(root->right,n);
  }
  if (n < root -> data)
  {
    findMaxForN (root->left,n);
  }

  return -1;
}

```

## Submission at 2024-11-25 10:35:10


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }

  if (n > root -> data && root->right)
  {
    return findMaxForN(root->right,n);
  }
  else
  {
    return root-> data;
  }

  if (n < root -> data && root-> left)
  {
    return findMaxForN (root->left,n);
  }
  

  return -1;
}

```

## Submission at 2024-11-25 10:40:07


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
    // Your Code Here
    return NULL
}



```

## Submission at 2024-11-25 10:40:13


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
    // Your Code Here
    return NULL;
}



```

## Submission at 2024-11-25 10:40:24


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
    // Your Code Here
    return NULL;
}



```

## Submission at 2024-11-25 10:45:36


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
    // Your Code Here

    Node* temp3 = head1;
    Node* temp2 = head2;

    while (temp3 != NULL)
    {
      Node* temp4 = temp2;

      while (temp4 != NULL)
      {

      
        if (temp3 -> data == temp4 -> data)
        {
          return temp3 -> data;
        }
        else
        {
          temp4 = temp4->next;
        }
      }
      temp3 = temp3 -> next;
    }

    return NULL;
}



```

## Submission at 2024-11-25 10:49:53


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
    // Your Code Here

    Node* temp3 = head1;
    Node* temp2 = head2;

    while (temp3 != NULL)
    {
      Node* temp4 = temp2;

      while (temp4 != NULL)
      {

      
        if (temp3 -> data == temp4 -> data)
        {
          return temp3;
        }
        else
        {
          temp4 = temp4->next;
        }
      }
      temp3 = temp3 -> next;
    }

    return NULL;
}



```

## Submission at 2024-11-25 10:56:13


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; 
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool flag = 1;

    int mid 
    if ( n % 2 == 0)
    {
         mid = n/2;
    }
    else
    {
        mid = (n+1)/2;
    }

    for (int i = 0; i < mid;i++)
    {
        if (arr[i] > arr[mid])
        {
            flag = 0;
            break;
        }
    }

    for (int i = mid + 1; i < n;i++)
    {
        if (arr[i] < arr[mid])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
```

## Submission at 2024-11-25 10:59:58


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n; 
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool flag = 1;

    int mid = 0;
    if ( n % 2 == 0)
    {
         mid = n/2 - 1;
    }
    else
    {
        mid = (n+1)/2;
    }

    for (int i = 0; i < mid;i++)
    {
        if (arr[i] > arr[mid])
        {
            flag = 0;
            break;
        }
    }

    for (int i = mid + 1; i < n;i++)
    {
        if (arr[i] < arr[mid])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
```

## Submission at 2024-11-25 11:07:22


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    return sum;
}
```

## Submission at 2024-11-25 11:07:43


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:11:05


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = arr[i][0] * arr[i][1];
        sum += curr_sum;
    }

    return sum;
}
```

## Submission at 2024-11-25 11:21:12


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }

  if (n > root -> data && root->right)
  {
    return findMaxForN(root->right,n);
  }
  else
  {
    return root-> data;
  }

  int temp;
  if (n < root -> data && root-> left)
  {
    temp = root -> data;
    return findMaxForN (root->left,n);
  }
  else
  {
    root -> data;
  }
  return -1;
}
```

## Submission at 2024-11-25 11:22:05


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }

  if (n > root -> data && root->right)
  {
    return findMaxForN(root->right,n);
  }
  else
  {
    return root-> data;
  }

  int temp;
  if (n < root -> data && root-> left)
  {
    temp = root -> data;
    return findMaxForN (root->left,n);
  }
  else
  {
    return root -> data;
  }
  return -1;
}
```

## Submission at 2024-11-25 11:22:06


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }

  if (n > root -> data && root->right)
  {
    return findMaxForN(root->right,n);
  }
  else
  {
    return root-> data;
  }

  int temp;
  if (n < root -> data && root-> left)
  {
    temp = root -> data;
    return findMaxForN (root->left,n);
  }
  else
  {
    return root -> data;
  }
  return -1;
}
```

## Submission at 2024-11-25 11:22:06


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }

  if (n > root -> data && root->right)
  {
    return findMaxForN(root->right,n);
  }
  else
  {
    return root-> data;
  }

  int temp;
  if (n < root -> data && root-> left)
  {
    temp = root -> data;
    return findMaxForN (root->left,n);
  }
  else
  {
    return root -> data;
  }
  return -1;
}
```

## Submission at 2024-11-25 11:22:42


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
  // Your code here
  if (n == root->data)
  {
    return n;
  }

  if (n > root -> data && root->right)
  {
    return findMaxForN(root->right,n);
  }
  else
  {
    return root-> data;
  }

  int temp;
  if (n < root -> data && root-> left)
  {
    temp = root -> data;
    return findMaxForN (root->left,n);
  }
  else
  {
    return root -> data;
  }
  return -1;
}
```

## Submission at 2024-11-25 11:26:06


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (h == k)
    {
        sum = h*arr2[n-1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:28:56


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (h == k)
    {
        sum = h*arr[h][1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:34:48


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (h == k)
    {
        sum = k*arr[h][1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:35:38


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (arr2[h][0] == k)
    {
        sum = k*arr[h][1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:37:20


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (arr2[h][0] == k)
    {
        sum = k*arr[h][1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:37:51


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (arr[h][0] == k)
    {
        sum = k*arr[h][1];
    }

   cout<<sum;

   return 0;
}
```

## Submission at 2024-11-25 11:38:48


```
// Write Code From Scratch Here
# include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    int k;
    cin>>n;
    cin>>k;

    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][1];
    }

    vector <int> arr2;
    for (int i = 0; i < n; i++)
    {
        arr2.push_back(arr[i][0]);
    }

    sort(arr2.begin(),arr2.end());
    int h;
    
    for (int i = 0; i < n; i++)
    {
        if (arr2[n-1] == arr[i][1])
        {
            h = i;
        }
    }

    if (arr[h][0] == k)
    {
        sum = k*arr[h][1];
    }

   cout<<sum;

   return 0;
}
```

