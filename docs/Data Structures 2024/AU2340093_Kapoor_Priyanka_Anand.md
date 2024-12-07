## Submission at 2024-08-09 04:47:30


```
# Write your Python code here from the scratch
name= "Priyanka"
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:53:16


```
# Write your Python code here from the scratch
name= input(" ")
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:53:48


```
# Write your Python code here from the scratch
name= input()
print("Hello",name,"!")
```

## Submission at 2024-08-09 04:56:05


```
# Write your Python code here from the scratch
name= input()
print("Hello" ,name, "!")
```

## Submission at 2024-08-09 04:59:56


```
# Write your Python code here from the scratch
name= input()
print("Hello " ,name,"!")


```

## Submission at 2024-08-09 05:01:58


```
name = input()
print("Hello " ,name,"!")


```

## Submission at 2024-08-09 05:05:51


```
name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello " ,name,"!")





```

## Submission at 2024-08-09 05:10:37


```
# Write your Python code here from the scratch
name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello",name,"!")
else:
    print("Name should be >=1 and <=100")

```

## Submission at 2024-08-09 05:12:27


```
# Write your Python code here from the scratch
name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello "+name+"!")
else:
    print("Name should be >=1 and <=100")

```

## Submission at 2024-08-09 05:14:38


```
# Write your Python code here from the scratch
name = input()
if(len(name)>=1 and len(name)<=100):
    print("Hello "+name+"!")
else:
    print("Name should be >=1 and <=100")

```

## Submission at 2024-08-09 05:22:47


```
# Write your Python code here

n=int(input())
i=0
while(i<n):
    if(len(name)>=1 and len(name)<=100):
        name1 = input()
        print("Hello "+name[i]+"!")
    else:
        print("Incorrect constraint")

    
```

## Submission at 2024-08-09 05:36:23


```
# Write your Python code here

n=int(input())
i=0
if(n>=1 and n<=100):
    while(i<n):
    name=input()
    if(len(name)>=1 and len(name)<=100):
        print("Hello "+name+"!")
    else:
        print("Incorrect constraint")
    i=i+1
else:
    print("Enter a valid number")



    
```

## Submission at 2024-08-09 05:41:50


```
# Write your Python code here

n=int(input())
i=0
if(n>=1 and n<=100):
    while(i<n):
        name=input()
    if(len(name)>=1 and len(name)<=100):
        print("Hello "+name+"!")
    else:
        print("Incorrect constraint")
    i=i+1

    
else:
    print("Enter a valid number")



    
```

## Submission at 2024-08-09 05:49:30


```
# Write your Python code here
n=int(input())
i=0
if(n>=1 and n<=100):
    while(i<n):
        name=input()
        if(len(name)>=1 and len(name)<=100):
            print("Hello "+name+"!")
        else:
            print("Incorrect constraint")
        i=i+1
else:
    print("Enter a valid number")
```

## Submission at 2024-08-16 04:42:13


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
    else{
        return fibonacci(x-1)+fibonacci(x-2);
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

## Submission at 2024-08-16 04:45:37


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
    else{
        return fibonacci(x-1)+fibonacci(x-2);
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

## Submission at 2024-08-16 05:09:25


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
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

## Submission at 2024-08-16 05:14:48


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    cout<< power(2,3)
    return 0;
}

```

## Submission at 2024-08-16 05:19:13


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int m=1;
    while(m<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        m++;
        
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

## Submission at 2024-08-16 05:22:30


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
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

## Submission at 2024-08-16 05:29:28


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    /**int a,m=1;
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
    }
    return false;*/

    if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:32:29


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
    }
    return false;

    /**if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;*/


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:34:41


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
    }
    return false;

    /**if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;*/


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:38:12


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here


    int a,m=1;
    if(n<1){
        return false;
    }
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
    }
    return false;

    /**if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;*/


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:40:30


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here


    int a,m=1;
    if(n<1){
        return false;
    }
    else if(n%2!=0){
        return false;
        break;
    }
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
        
    }
    return false;

    /**if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;*/


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:42:19


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here


    int a,m=1;
    if(n<1){
        return false;
    }
    else if(n%2!=0){
        return false;
        break;
    }
    else{

        while(a<n){
            m=m*2;
            if(m==n){
                return true;
                break;
            }
            a++;
        }
        
    }
    return false;

    /**if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;*/


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:45:25


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here


    int a,m=1;
    if(n<1){
        return false;
    }
    
    
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
    }
        
    
    return false;

    /**if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;*/


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:46:52


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
        return false;
    }
    return n/2;


}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    
    return 0;
}

```

## Submission at 2024-08-16 05:47:19


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here

    if(n==1){
        return true;
    }
    else if(n<=0 || n%2!=0){
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

## Submission at 2024-08-16 06:02:38


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    if(n<1){
        return false;
    }
    
    
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
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

## Submission at 2024-08-16 06:05:58


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    if(n<1){
        return false;
    }
    
    
    while(a<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        a++;
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

## Submission at 2024-08-16 06:07:53


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    if(n<1){
        return false;
    }
    
    
    while(m<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        m++;
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

## Submission at 2024-08-16 06:32:20


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    int a,m=1;
    if(n<1){
        return false;
    }
    
    
    while(m<n){
        m=m*2;
        if(m==n){
            return true;
            break;
        }
        m++;
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

## Submission at 2024-08-22 05:33:47


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    // Generate combinations
    for (int i = start; i <= n; ++i) {
        current.push_back(i);
        combine(i + 1, k, n, current, result);
        current.pop_back(); // backtrack
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

## Submission at 2024-08-22 13:43:46


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if(k == 0) {
        result.push_back(current);
        return;
    }
    if(start > n)
        return;
    current.push_back(start);
    combine(start+1, k-1, n, current, result);
    current.pop_back();
    combine(start+1, k, n, current, result);

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

## Submission at 2024-08-22 13:47:13


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

## Submission at 2024-08-22 13:49:11


```
#include <iostream>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
    if (current.size() == k) {  //base case 
        result.push_back(current);
        return;
    }

    // Recursive case
    for (int i = start; i <= n; ++i) {
        current.push_back(i); // Adding  the current number to the combination
        combine(i + 1, k, n, current, result); // Recurse with the next number
        current.pop_back(); // removing the last number
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

## Submission at 2024-08-22 13:50:19


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

## Submission at 2024-08-22 13:53:04


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

## Submission at 2024-08-22 13:56:13


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

## Submission at 2024-08-28 07:30:41


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int n){
    for(int i=0;i<n;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr1[]={5,4,3,2,1};
    int arr2[]={1,2,3,5,4};
    ascending(arr1,5);
    cout<<"arr1 is:";
    display(arr1,5);
    cout<<endl;
    ascending(arr2,5);
    cout<<"arr2 is";
    display(arr2,5);
    cout<<endl;
    
    //cout<<check(arr1,arr2,5);
    
    
}
```

## Submission at 2024-08-28 08:02:58


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int n){
    for(int i=0;i<n;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,f;
    //cout<<"Enter the number of elements you want for array 1:";
    cin>>n;
    //cout<<"Enter the number of elements you want for array 2:";
    cin>>f;
    int arr1[100];
    int arr2[100];

    //cout<<"Array one is:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //cout<<"Array two is:";
    for(int i=0;i<f;i++){
        cin>>arr2[i];
    }

    //int arr1[]={5,4,3,2,1};
    //int arr2[]={1,2,3,5,4};
    ascending(arr1,n);
    //cout<<"arr1 is:";
    display(arr1,n);
    //cout<<endl;
    ascending(arr2,f);
    //cout<<"arr2 is";
    //display(arr2,f);
    //cout<<endl;
    
    cout<<check(arr1,arr2,5);
    
    
}
```

## Submission at 2024-08-28 08:08:28


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int x,int y){
    if(x!=y){
        return false;
        
    }
    for(int i=0;i<n;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,f;
    //cout<<"Enter the number of elements you want for array 1:";
    cin>>n;
    //cout<<"Enter the number of elements you want for array 2:";
    cin>>f;
    int arr1[100];
    int arr2[100];

    //cout<<"Array one is:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //cout<<"Array two is:";
    for(int i=0;i<f;i++){
        cin>>arr2[i];
    }

    //int arr1[]={5,4,3,2,1};
    //int arr2[]={1,2,3,5,4};
    ascending(arr1,n);
    //cout<<"arr1 is:";
    //display(arr1,n);
    //cout<<endl;
    ascending(arr2,f);
    //cout<<"arr2 is";
    //display(arr2,f);
    //cout<<endl;
    
    cout<<check(arr1,arr2,n,f);
    
    
}
```

## Submission at 2024-08-28 08:09:51


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int x,int y){
    if(x!=y){
        return false;
        
    }
    for(int i=0;i<x;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,f;
    //cout<<"Enter the number of elements you want for array 1:";
    cin>>n;
    //cout<<"Enter the number of elements you want for array 2:";
    cin>>f;
    int arr1[100];
    int arr2[100];

    //cout<<"Array one is:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //cout<<"Array two is:";
    for(int i=0;i<f;i++){
        cin>>arr2[i];
    }

    //int arr1[]={5,4,3,2,1};
    //int arr2[]={1,2,3,5,4};
    ascending(arr1,n);
    //cout<<"arr1 is:";
    //display(arr1,n);
    //cout<<endl;
    ascending(arr2,f);
    //cout<<"arr2 is";
    //display(arr2,f);
    //cout<<endl;
    
    cout<<check(arr1,arr2,n,f);
    
    
}
```

## Submission at 2024-08-28 08:16:06


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int x,int y){
    if(x!=y){
        return false;
        
    }
    for(int i=0;i<x;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,f;
    //cout<<"Enter the number of elements you want for array 1:";
    cin>>n;
    //cout<<"Enter the number of elements you want for array 2:";
    cin>>f;
    int arr1[100];
    int arr2[100];

    //cout<<"Array one is:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //cout<<"Array two is:";
    for(int i=0;i<f;i++){
        cin>>arr2[i];
    }

    //int arr1[]={5,4,3,2,1};
    //int arr2[]={1,2,3,5,4};
    ascending(arr1,n);
    //cout<<"arr1 is:";
    //display(arr1,n);
    //cout<<endl;
    ascending(arr2,f);
    //cout<<"arr2 is";
    //display(arr2,f);
    //cout<<endl;
    
    //cout<<check(arr1,arr2,n,f);
    if (check(arr1,arr2,n,f)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    
}
```

## Submission at 2024-08-28 08:18:33


```
#include<iostream>
using namespace std;

void ascending(int a[],int n){
    int c;
    for(int i=0;i<n;i++){
        for(int j=1+i;j<n;j++){
            if(a[i]>a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
}

void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

bool check(int c[],int d[],int x,int y){
    if(x!=y){
        return false;
        
    }
    for(int i=0;i<x;i++){
        if(c[i]!=d[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,f;
    //cout<<"Enter the number of elements you want for array 1:";
    cin>>n;
    //cout<<"Enter the number of elements you want for array 2:";
    cin>>f;
    int arr1[100];
    int arr2[100];

    //cout<<"Array one is:";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    //cout<<"Array two is:";
    for(int i=0;i<f;i++){
        cin>>arr2[i];
    }

    //int arr1[]={5,4,3,2,1};
    //int arr2[]={1,2,3,5,4};
    ascending(arr1,n);
    //cout<<"arr1 is:";
    //display(arr1,n);
    //cout<<endl;
    ascending(arr2,f);
    //cout<<"arr2 is";
    //display(arr2,f);
    //cout<<endl;
    
    //cout<<check(arr1,arr2,n,f);
    if (check(arr1,arr2,n,f)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    
}
```

## Submission at 2024-08-29 04:02:31


```
#include<iostream>
using namespace std;

int sum(int a){
    int i,sum=0;
    for(i=1;i<=a;i++){
        if(i%3==0){
            sum=sum+i;
        }
        else if(i%5==0){
            sum=sum+i;
        }
        else if(i%7==0){
            sum=sum+i;
        }
    }
    return sum;
}

int main(){
    int n;
    //cout<<"Enter n:";
    cin>>n;
    cout<<sum(n);
    
    
    
}
```

## Submission at 2024-08-29 04:06:53


```
#include<iostream>
using namespace std;

int count(int a){
    int i=0;
    
    while(a!=0){
        a%10;
        i++;
        a=a/10;
    }
    return i;
}

int c(int arr[],int n){
    int i,m=0;
    for(i=0;i<n;i++){
        int d=count(arr[i]);
        if(d%2==0){
            m++;
        }
        
    }
    return m;
}

int main(){
    //cout<<count(12347435);
    int h;
    int arr[100];
    //cout<<"Enter h";
    cin>>h;
    
    for(int i=0;i<h;i++){
        cin>>arr[i];
    }
    //cout<<"Total";
    cout<<c(arr,h);
}
```

## Submission at 2024-08-29 04:10:09


```
#include<iostream>
using namespace std;

void display(int p[50][50],int q,int r){
    for(int x=1;x<=q;x++){
        for(int y=1;y<=r;y++){
            cout<<p[x][y]<<" ";
        }
        //cout<<endl;
    }
}

void transpose(int arr[50][50],int l,int m){
    int i,j,a1[50][50];
    for(i=1;i<=l;i++){
        for(j=1;j<=m;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,l,m);
}

int main(){
    int b[50][50];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;
    
    for(int x=1;x<=i;x++){
        for(int y=1;y<=j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }
    //cout<<"Transpose is";
    transpose(b,i,j);
    
    
}
```

## Submission at 2024-08-29 04:13:36


```
#include<iostream>
using namespace std;

void display(int p[50][50],int q,int r){
    for(int x=1;x<=q;x++){
        for(int y=1;y<=r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[50][50],int l,int m){
    int i,j,a1[50][50];
    for(i=1;i<=l;i++){
        for(j=1;j<=m;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,l,m);
}

int main(){
    int b[50][50];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;
    
    for(int x=1;x<=i;x++){
        for(int y=1;y<=j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    transpose(b,i,j);
    
    
}
```

## Submission at 2024-08-29 04:31:51


```
#include<iostream>
using namespace std;

void display(int p[50][50],int q,int r){
    for(int x=1;x<=q;x++){
        for(int y=1;y<=r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[50][50],int l,int m){
    int i,j,a1[50][50];
    for(i=1;i<=l;i++){
        for(j=1;j<=m;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,l,m);
}

int main(){
    int b[50][50];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;

    
    for(int x=1;x<=i;x++){
        for(int y=1;y<=j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    if(i==j){
        transpose(b,i,j);
    }
    
    
    
    
}
```

## Submission at 2024-08-29 04:35:41


```
#include<iostream>
using namespace std;

void display(int p[50][50],int q,int r){
    for(int x=0;x<q;x++){
        for(int y=0;y<r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[50][50],int l,int m){
    int i,j,a1[50][50];
    for(i=0;i<l;i++){
        for(j=0;j<m;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,l,m);
}

int main(){
    int b[50][50];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;

    
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    if(i==j){
        transpose(b,i,j);
    }
    
    
    
    
}
```

## Submission at 2024-08-29 04:43:32


```
#include<iostream>
using namespace std;

void display(int p[1001][1001],int q,int r){
    for(int x=0;x<q;x++){
        for(int y=0;y<r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[1001][1001],int l,int m){
    int i,j,a1[1001][1001];
    for(i=0;i<l;i++){
        for(j=0;j<m;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,l,m);
}

int main(){
    int b[1001][1001];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;

    
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    if(i==j){
        transpose(b,i,j);
    }    
}
```

## Submission at 2024-08-29 04:46:40


```
#include<iostream>
using namespace std;

void display(int p[1001][1001],int q,int r){
    for(int x=0;x<q;x++){
        for(int y=0;y<r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[1001][1001],int l,int m){
    int i,j,a1[1001][1001];
    for(i=0;i<l;i++){
        for(j=0;j<m;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,m,l);
}

int main(){
    int b[1001][1001];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;

    
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    transpose(b,i,j);
}
```

## Submission at 2024-08-29 04:57:24


```
#include<iostream>
using namespace std;

void display(int p[1001][1001],int q,int r){
    for(int x=0;x<q;x++){
        for(int y=0;y<r;y++){
            cout<<p[x][y]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[1001][1001],int l,int m){
    int i,j,a1[1001][1001];
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            a1[i][j]=arr[j][i];
        }
        //cout<<endl;
    }
    display(a1,m,l);
}

int main(){
    int b[1001][1001];
    int i,j;
    //cout<<"Enter i";
    cin>>i;
    
    //cout<<"Enter j";
    cin>>j;

    
    for(int x=0;x<i;x++){
        for(int y=0;y<j;y++){
            cin>>b[x][y];
        }
        //cout<<endl;
    }

    //cout<<"Transpose is";
    transpose(b,i,j);
}
```

## Submission at 2024-08-29 10:31:16


```
#include<iostream>
using namespace std;

void array(int list[],int q[],int n){
    for(int i=0;i<n;i++){
        list[i]=q[i];
    }
}

int sum(int arr[],int n){
    int i=0,j;
    int p[100];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            p[j]=arr[j]+arr[j+1];
        }
        array(arr,p,5-i-1);
    }
    return p[0];
    
}

int main(){
    
    int n;
    int b[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    cout<<sum(b,n);
    
}
```

## Submission at 2024-08-29 10:33:18


```
#include<iostream>
using namespace std;

void array(int list[],int q[],int n){
    for(int i=0;i<n;i++){
        list[i]=q[i];
    }
}

int sum(int arr[],int n){
    int i=0,j;
    int p[1000];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            p[j]=arr[j]+arr[j+1];
        }
        array(arr,p,5-i-1);
    }
    return p[0];
    
}

int main(){
    
    int n;
    int b[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    cout<<sum(b,n);
    
}
```

## Submission at 2024-08-29 10:34:11


```
#include<iostream>
using namespace std;

void array(int list[],int q[],int n){
    for(int i=0;i<n;i++){
        list[i]=q[i];
    }
}

int sum(int arr[],int n){
    int i=0,j;
    int p[1001];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            p[j]=arr[j]+arr[j+1];
        }
        array(arr,p,5-i-1);
    }
    return p[0];
    
}

int main(){
    
    int n;
    int b[1001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    
    cout<<sum(b,n);
    
}
```

## Submission at 2024-08-29 13:09:13


```
#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, currentNum = 1, i = 0;

    // Loop until we find the Kth missing number
    while (missingCount < k) {
        if (i < n && arr[i] == currentNum) {
            // If the current number is in the array, move to the next number
            i++;
        } else {
            // If the current number is missing, increment the missing count
            missingCount++;
        }
        // If we have found the Kth missing number, return it
        if (missingCount == k) {
            return currentNum;
        }
        currentNum++;
    }

    return -1;  // Just a fallback, in case the loop doesn't return a value
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthMissing(arr, n, k);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 13:10:18


```
#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, currentNum = 1, i = 0;

    // Loop until we find the Kth missing number
    while (missingCount < k) {
        if (i < n && arr[i] == currentNum) {
            // If the current number is in the array, move to the next number
            i++;
        } else {
            // If the current number is missing, increment the missing count
            missingCount++;
        }
        // If we have found the Kth missing number, return it
        if (missingCount == k) {
            return currentNum;
        }
        currentNum++;
    }

    return -1;  // Just a fallback, in case the loop doesn't return a value
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findKthMissing(arr, n, k);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 13:12:58


```
#include <iostream>
using namespace std;

void spiralTraversal(int n, int m, int matrix[100][100]) {
    int top = 0, bottom = n - 1, left = 0, right = m - 1;
    
    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; i++) {
            cout << matrix[top][i] << " ";
        }
        top++; // move the top boundary down
        
        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; i++) {
            cout << matrix[i][right] << " ";
        }
        right--; // move the right boundary left
        
        // Traverse from right to left on the bottom row, if still valid
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << matrix[bottom][i] << " ";
            }
            bottom--; // move the bottom boundary up
        }
        
        // Traverse from bottom to top on the left column, if still valid
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << matrix[i][left] << " ";
            }
            left++; // move the left boundary right
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100]; // assuming the constraints guarantee maximum size of 100x100
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    spiralTraversal(n, m, matrix);

    return 0;
}

```

## Submission at 2024-08-29 13:21:58


```
#include <iostream>
using namespace std;

void array(int dest[], const int src[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int sum(int arr[], int n) {
    int* p = new int[n];  // Allocate memory dynamically for the temporary array
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            p[i] = arr[i] + arr[i + 1];
        }
        array(arr, p, n - 1);
        n--;
    }
    int result = arr[0];
    delete[] p;  // Free the dynamically allocated memory
    return result;
}

int main() {
    int n;
    int b[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    cout << sum(b, n) << endl;
    return 0;
}

```

## Submission at 2024-08-29 13:23:35


```
#include <iostream>
using namespace std;

void array(int dest[], const int src[], int size) {
    for (int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int sum(int arr[], int n) {
    int* p = new int[n];  // Allocate memory dynamically for the temporary array
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            p[i] = arr[i] + arr[i + 1];
        }
        array(arr, p, n - 1);
        n--;
    }
    int result = arr[0];
    delete[] p;  // Free the dynamically allocated memory
    return result;
}

int main() {
    int n;
    int b[1001];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    cout << sum(b, n) << endl;
    return 0;
}

```

## Submission at 2024-08-30 04:56:21


```
#include<iostream>
using namespace std;

int palindrome(char s[]){
    int i;
    for(i=0;i<7/2;i++){
        if(s[i]!=s[7-i]){
            return -1;
        }
    }
    return 0;
}

int main(){
    char s[1000];
    //cout<<"Enter a string:";
    cin>>s;
    if(palindrome(s)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }



}
```

## Submission at 2024-08-30 05:04:02


```
#include<iostream>
using namespace std;

int palindrome(char s[]){
    int i;
    for(i=0;i<7/2;i++){
        if(s[i]!=s[7-i]){
            return -1;
        }
    }
    return 0;
}

int main(){
    char s[1000];
    //cout<<"Enter a string:";
    cin>>s;
    cout<<palindrome(s);



}
```

## Submission at 2024-08-30 05:08:03


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
    struct Node* temp=NULL;
    struct Node* prev=NULL;
    struct Node* curr=head;

    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;

}

```

## Submission at 2024-08-30 05:18:41


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int power(int x,int n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return 1;
    }
    else{
        return x* power(x,n-1);
    }
}

int main(){
    //cout<<"Enter a";
    int a,b;
    cin>>a;

    //cout<<"Enter b";
    cin>>b;
    
    cout<<power(a,b);
}
```

## Submission at 2024-08-30 05:20:13


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int power(int x,int n){
    if(n<0){
        return -1;
    }
    else if(n==0){
        return 1;
    }
    else if(n==1){
        return x;
    }
    else{
        return x* power(x,n-1);
    }
}

int main(){
    //cout<<"Enter a";
    int a,b;
    cin>>a;

    //cout<<"Enter b";
    cin>>b;
    
    cout<<power(a,b);
}
```

## Submission at 2024-08-30 05:37:47


```
// Write code from scratch
#include<iostream>
using namespace std;

void display(int x[],int k){
    for(int i=0;i<k;i++){
        cout<<x[i]<<" ";
    }
}

int max(int a[],int b[],int n){
    int c[100];
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            c[i]=a[i];
        }
        else{
            c[i]=b[i];
        }
    }
    display(c,n);
}
int main(){
    int l[100],m[100];
    int n;
    //cout<<"Enter the size of elements";
    cin>>n;

    for(int j=0;j<n;j++){
        cin>>l[j];
    }

    for(int j=0;j<n;j++){
        cin>>m[j];
    }

    max(l,m,n);


}
```

## Submission at 2024-08-30 05:48:48


```
#include<iostream>
#include<string.h>
using namespace std;

int palindrome(char s[]){
    int i;
    for(i=0;i<strlen(s)/2;i++){
        if(s[i]!=s[strlen(s)-i-1]){
            return -1;
        }
    }
    return 0;
}

int main(){
    char s[1000];
    //cout<<"Enter a string:";
    cin>>s;    
    
    cout<<palindrome(s);



}
```

## Submission at 2024-08-30 05:55:27


```
#include<iostream>
#include<string.h>
using namespace std;

int palindrome(char s[]){
    int i;
    for(i=0;i<strlen(s)/2;i++){
        if(s[i]!=s[strlen(s)-i-1]){
            return -1;
        }
    }
    return 0;
}

int main(){
    char s[1000];
    //cout<<"Enter a string:";
    cin>>s;    
    
    //cout<<palindrome(s);
    int c=palindrome(s);
    

    if(c==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    



}
```

## Submission at 2024-09-06 05:35:39


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int rowCounter=0;
    vector<int> ans;
    int rowCounter=0;
    int n=matrix.size(),m=matrix[0].size();
    while(rowCounter<n){
        int colCounter =0,count=0;
        while(rowCounter-count<0){
            cout<<matrix[rowCounter-count][colCounter]<<" ";
            count++;
            colCounter++;

        }
        rowCounter++;
    }
    return ans;
    
}

```

## Submission at 2024-10-04 05:10:21


```
#include<iostream>
#include<string.h>
using namespace std;

bool anagram(char list[],char sent[],int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(list[i]!=sent[j]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    char s[1000];
    char t[1000];

    int n;
    //cin>>n;

    for(int i=0;i<n;i++){
        //cin>>s[i];
    }

    for(int i=0;i<n;i++){
        //cin>>t[i];
    }

    cout<<anagram(s,t,n);
}
```

## Submission at 2024-10-04 05:16:16


```
#include<iostream>
#include<string.h>
using namespace std;

bool anagram(char list[],char sent[],int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(list[i]!=sent[j]){
                
            }
        }
    }
    return true;
}

int main(){
    char s[1000];
    char t[1000];

    int n;
    //cin>>n;

    for(int i=0;i<n;i++){
        //cin>>s[i];
    }

    for(int i=0;i<n;i++){
        //cin>>t[i];
    }

    if(anagram(s,t,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-04 05:45:58


```
#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> list,int n){
    for(int i=0;i<n;i++){
        cout<<list[i];
    }
}

void enqueue(vector<int> list,int n,int k){
    list[n+1]=k;
}

void pop(vector<int> list,int n){
   for(int i=0;i<n-1;i++){
        list[i]=list[i+1];
   }

}

void time(vector<int> list,int n){
    while(list.size()!=0){
        for(int i=0;i<1;i++){
            list[i]=list[i]-1;
            enqueue(list,n,list[i]);
            pop(list,n);
        }
        display(list,n);
    }
}


int main(){
    vector<int> list;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>n;
        list.push_back(n);
    }

    time(list,n);

}
```

## Submission at 2024-10-04 05:56:21


```
#include<iostream>
using namespace std;

bool anagram(char list[],char sent[],int k){
    int i,j;
    int count=1;
    while(i<k){
        while(j<k){
            if(list[i]==sent[j]){
                i++;
                count++;
            }
            j++;
        }
    }
    if(count==k){
        return true;
    }
    else{
        return false;
    }
   
}

int main(){
    char s[1000];
    char t[1000];

    int n;
    //cin>>n;

    for(int i=0;i<n;i++){
        //cin>>s[i];
    }

    for(int i=0;i<n;i++){
        //cin>>t[i];
    }

    if(anagram(s,t,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
	
```

## Submission at 2024-10-04 06:27:54


```
#include<iostream>
using namespace std;

int check(char list[],char sent[],int k){
   
    int count=1;
    int i=0,j=0;
    /**for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(list[i]==sent[j]){
                i++;
                count++;
            }
        }
    }*/

    while(i<k && j<k){
        if(list[i]==sent[j]){
            i++;
            count++;
        }
        j++;

    }
    return count;
   
}

int main(){
    char s[100];
    char t[100];

    int n;
    //cin>>n;

    for(int i=0;i<n;i++){
        //cin>>s[i];
    }

    for(int i=0;i<n;i++){
        //cin>>t[i];
    }

    if(check(s,t,n)==n){
        return true;
    }
    else{
        false;
    }
}
```

## Submission at 2024-10-25 05:28:33


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void postorder(Node* root,vector<int> result){
  if(root==NULL){
    return;
  }
  postorder(root->left,result);
  postorder(root->right,result);
  result.push_back(root->data);
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> result;
  postorder(root,result);
  return result;
}

```

## Submission at 2024-10-25 05:29:41


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void postorder(Node* root,vector<int> &result){
  if(root==NULL){
    return;
  }
  postorder(root->left,result);
  postorder(root->right,result);
  result.push_back(root->data);
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> result;
  postorder(root,result);
  return result;
}

```

## Submission at 2024-10-25 05:42:13


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


    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
        pair<int,int> s;
        if(root==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
            return false;
        }
        else{
            
        }
        
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

## Submission at 2024-10-25 06:19:02


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
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
        pair<int,int> s;
        if(root==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
            return false;
        }
        else if(isSymmetric(root->left)==isSymmetric(root->right)){
            return true;
        }
        return false;
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

## Submission at 2024-10-25 06:20:04


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
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
        pair<int,int> s;
        if(root==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
            return false;
        }
        else if(isSymmetric(root->left)==reverse(isSymmetric(root->right))){
            return true;
        }
        return false;
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

## Submission at 2024-10-25 06:21:02


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
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    // Code here
        pair<int,int> s;
        if(root==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
            return true;
        }
        else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
            return false;
        }
        else if(isSymmetric(root->left)==(isSymmetric(root->right))){
            return true;
        }
        return false;
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

## Submission at 2024-10-25 06:28:50


```
// write code from scratch
#include<iostream>
using namespace std;

void check(string st,string sent){

    unordered_map<string,string> mpp;
    for(int i=0;i<st.size()){
        mapp[i]=st[i];
    }
    for()
}

int main(){

}
```

## Submission at 2024-10-25 06:36:35


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
    // code here
    struct Node* sum;
    while(num1->next!=NULL && num2->next!=NULL){
        sum->data=num1->data+num2->data;
        sum=sum->next;
        num1=num1->next;
        num2=num2->next;
    }
    return sum;
}
```

## Submission at 2024-10-25 06:38:06


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
    // code here
    struct Node* sum=new struct Node;
    while(num1->next!=NULL && num2->next!=NULL){
        sum->data=num1->data+num2->data;
        sum=sum->next;
        num1=num1->next;
        num2=num2->next;
    }
    return sum;
}
```

## Submission at 2024-10-25 06:44:13


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
            
    }
    return false;
}


```

## Submission at 2024-10-25 06:44:46


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
            
    }
    
}


```

## Submission at 2024-10-25 06:48:26


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
          while(isSymmetric(root->left)!=NULL && isSymmetric(root->right)!=NULL) {
            if(root->data!=root->data){
                return false
            }
            return true;
          }
    }
    
}


```

## Submission at 2024-10-25 06:49:48


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
          while(isSymmetric(root->left)!=NULL && isSymmetric(root->right)!=NULL) {
            if(left->data!=right->data){
                return false
            }
            return true;
          }
    }
    
}


```

## Submission at 2024-10-25 06:50:08


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
          while(isSymmetric(root->left)!=NULL && isSymmetric(root->right)!=NULL) {
            if(left->data!=right->data){
                return false;
            }
            return true;
          }
    }
    
}


```

## Submission at 2024-10-25 06:50:40


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
          while(isSymmetric(root->left)!=NULL && isSymmetric(root->right)!=NULL) {
            if(left->data!=right->data){
                return false;
            }
            return true;
          }
    }
    
}


```

## Submission at 2024-10-25 06:50:55


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL && isSymmetric(root->right)==NULL){
        return true;
    }
    else if(isSymmetric(root->left)==NULL || isSymmetric(root->right)==NULL){
        return false;
    }
    else{
          
    }
    
}


```

## Submission at 2024-11-08 04:44:25


```
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    int i=0;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
}

int main(){
    string a;
    string b;

    cin>>a;
    cin>>b;
    if(isAnagram(a,b)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
   
}

```

## Submission at 2024-11-08 04:46:56


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if((root->left)==NULL && (root->right)==NULL){
        return true;
    }
    else if((root->left)==NULL || (root->right)==NULL){
        return false;
    }
    else{
          
    }
}


```

## Submission at 2024-11-08 05:03:45


```
#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int>& bloomDay,int m ,int k,int day){
    int counter=0,bouquet=0;

    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            counter++;
        }
        else{
            bouquet+=(counter/k);
            counter=0;
        }
    }

    bouquet+=(counter/k);
      

    if(bouquet>=m){
        return true;
    }
    return false;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int l=*min_element(bloomDay.begin(),bloomDay.end());
    int h=*max_element(bloomDay.begin(),bloomDay.end());
    int mid=0;
    int ans=h;

    if(m*k>bloomDay.size()){
        return -1;
    }
    while(l<=h){
        mid=(l+h)/2;
        if(isPossible(bloomDay,m,k,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }


    }
    return ans;

}

int main(){
    vector<int> bloomDay;
    int m,k;

    minDays(bloomDay,m,k);
}
```

## Submission at 2024-11-08 05:21:42


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& bloomDay,int m ,int k,int day){
    int counter=0,bouquet=0;

    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            counter++;
        }
        else{
            bouquet+=(counter/k);
            counter=0;
        }
    }

    bouquet+=(counter/k);
      

    if(bouquet>=m){
        return true;
    }
    return false;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int l=*min_element(bloomDay.begin(),bloomDay.end());
    int h=*max_element(bloomDay.begin(),bloomDay.end());
    int mid=0;
    int ans=h;

    if(m*k>bloomDay.size()){
        return -1;
    }
    while(l<=h){
        mid=(l+h)/2;
        if(isPossible(bloomDay,m,k,mid)){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }


    }
    return ans;

}

int main(){
    vector<int> bloomDay;
    int m,n,k;

    
    //cout << "Enter the number of flowers: ";
    cin >> n;
    //cout << "Enter the bloom days for each flower: ";
    for (int i = 0; i < n; i++) {
        int day;
        cin >> day;
        bloomDay.push_back(day);
    }

    //cout << "Enter the number of bouquets needed (m): ";
    cin >> m;
    //cout << "Enter the number of flowers per bouquet (k): ";
    cin >> k;

    int result = minDays(bloomDay, m, k);
    if (result != -1) {
        cout <<  result << endl;
    } else {
        cout << "It's not possible to make the required bouquets." << endl;
    }
    return 0;
}
```

## Submission at 2024-11-08 05:47:32


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
    // Code here
    if(root==NULL){
        return true;
    }
    else if((root->left)==NULL && (root->right)==NULL){
        return true;
    }
    else if((root->left)==NULL || (root->right)==NULL){
        return false;
    }
    else if(isSymmetric(left->data)==isSymmetric(right->data)){
        return true;
    }
    return false;
}


```

## Submission at 2024-11-17 10:26:55


```
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    int i=0;
    if(s.length()==t.length()){
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
    }
    else{
        return false;
    }
    
    return s==t;
}

int main(){
    string a;
    string b;

    cin>>a;
    cin>>b;
    if(isAnagram(a,b)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
   
}
```

## Submission at 2024-11-22 05:00:11


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int add=0;

    for(int i=0;i<n;i++){
        add+=arr[i];
    }
    return add;
}

int main(){
    int arr[100];
    int n;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<sum(arr,n);


}
```

## Submission at 2024-11-22 05:18:18


```
// write code from scratch
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
    
    for(int i=0;i<n-1;i++){
        for(int j=n-1-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:20:58


```
// write code from scratch
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
    
    for(int i=0;i<n-1;i++){
        for(int j=n-1-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-22 05:27:49


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
    // Code here
    if(root==NULL){
        return false;
    }
    else if(left->data<root->data && right->data>root->data){
        return true;
    }
}


```

## Submission at 2024-11-22 05:51:20


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;

    for(int c=a;c<=b;c++){
        int sum=(c-a)+(b-c);
        if(sum==c){
            cout<<c;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 06:11:58


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int arr1[1000],arr2[1000];

    int m,n,d;
    int c=0;

    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int count=0;
            if(arr1-arr2>d || -(arr1-arr2)>d){
                count++;
            }
            if(count==m){
                c++;
            }

        }
    }
    cout<<c;
    return 0;


}
```

## Submission at 2024-11-22 06:31:08


```
// write code from scratch
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int arr1[1000],arr2[1000];

    int m,n,d;
    int c=0;
    int g;

    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            g=arr1-arr2;
            if(g<0){
                g=-g;
            }
            if(g>d){
                count++;
            }
            if(count==m){
                c++;
            }

        }
    }
    cout<<c;
    return 0;


}
```

## Submission at 2024-11-22 06:34:04


```
// write code from scratch
// write code from scratch
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int arr1[1000],arr2[1000];

    int m,n,d;
    int c=0;
    int g;

    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            g=arr1-arr2;
            if(g<0){
                g=-g;
            }
            if(g>d){
                count++;
            }
            if(count==m){
                c++;
            }

        }
    }
    cout<<c;
    return 0;


}
```

## Submission at 2024-11-22 06:38:56


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
bool inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->val);
    inOrder(root->right,result);

    return result;
}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:41:36


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
int inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

    return result;
}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:43:25


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
vector<int> inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

    return result;
}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:44:36


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
vector<int> inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

    return result;
}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:45:28


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
void inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

    return result;
}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:46:11


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
void inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

    return result;
}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:47:00


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
void inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:47:33


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
void inOrder(struct Node* root,vector<int> &result){

    if(root==NULL){
        return;
    }

    inOrder(root->left,result);
    result.push_back(root->data);
    inOrder(root->right,result);

}

// return true/false denoting whether the tree is Symmetric or not
bool isBST(struct Node* root)
{
    // Code here
    vector<int> result;
    inOrder(root,result);

    for(int i=0;i<result.size();i++){
        if(result[i]<result[i-1]){
            return false;
        }
    }
    return true;
}


```

## Submission at 2024-11-22 06:50:04


```
#include<iostream>
using namespace std;

int main(){
    int arr1[1000],arr2[1000];

    int m,n,d;
    int c=0;
    int g;

    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            g=arr1[i]-arr2[j];
            if(g<0){
                g=-g;
            }
            if(g>d){
                count++;
            }
            if(count==m){
                c++;
            }

        }
    }
    cout<<c;
    return 0;


}
```

## Submission at 2024-11-22 06:56:07


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;

    for(int c=a;c<=b;c++){
        int sum=(c-a)+(b-c);
        if(sum==c){
            cout<<c;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 07:01:34


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;

    for(int c=a;c<=b;c++){
        int sum=(c-a)+(b-c);
        if(sum==c){
            cout<<c;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 07:01:37


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;

    for(int c=a;c<=b;c++){
        int sum=(c-a)+(b-c);
        if(sum==c){
            cout<<c;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 07:01:52


```
#include<iostream>
using namespace std;

int main(){
    int arr1[1000],arr2[1000];

    int m,n,d;
    int c=0;
    int g;

    cin>>m;
    cin>>n;
    cin>>d;

    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<m;i++){
        int count=0;
        for(int j=0;j<n;j++){
            g=arr1[i]-arr2[j];
            if(g<0){
                g=-g;
            }
            if(g>d){
                count++;
            }
            if(count==m){
                c++;
            }

        }
    }
    cout<<c;
    return 0;


}
```

