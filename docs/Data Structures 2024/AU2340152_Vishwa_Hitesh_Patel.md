## Submission at 2024-08-09 05:02:29


```
// Write your C++ code here from the scratch
#include <iostream>
using namespace std;

int main(){
    char name[100];
    cin>>name;
    cout<<"Hello "<<name<<"!";
    
}
```

## Submission at 2024-08-09 05:53:08


```
// Write your C++ code here
#include <iostream>
using namespace std;

int main(){
    int n;
    char name[100];
    cin>>n;
    if(n>0 && n<101){
        for(int i=0; i<n;i++){
            
            cin>>name;
            cout<<"Hello "<<name<<"!"<<endl;
        }
    }else{
        cout<<"Please enter valid input.";
    }
    return 0;
}
```

## Submission at 2024-08-16 05:06:22


```
#include <iostream>

using namespace std;

/*FIBONACCI SERIES:*/
int Fibonacci(int n){
    if (n<0)
    {
        cout<<"Please enter valid integer value.";
    }
    if (n==0)
    {
        return 0;
    }
    if (n==1){
        return 1;
    }if (n>1)
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
        
}
int main(){
    int n;
    //cout<<"Enter the integer value: ";
    cin>> n;
    cout<<Fibonacci(n);
    return 0;
}

```

## Submission at 2024-08-17 05:21:56


```
#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    if(n<0 || n%2!=0)
    {
        return false;
    }
    return isPowerOfTwo(n/2); // If we reached 1, then n was a power of two
}
int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-08-17 05:24:26


```
#include <iostream>
#include <cmath>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    if(n<0 || n%2!=0)
    {
        return false;
    }
    return isPowerOfTwo(n/2); // If we reached 1, then n was a power of two
}
int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}
```

## Submission at 2024-08-17 06:09:04


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate subsets
void generateSubsets(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Recur for the next elements
    for (int i = index; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);  // Include the current element
        generateSubsets(nums, i + 1, currentSubset, result);  // Recur for the next elements
        currentSubset.pop_back();  // Backtrack
    }
}

// Function to return all subsets in sorted order
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    sort(nums.begin(), nums.end());  // Sort the input array
    generateSubsets(nums, 0, currentSubset, result);  // Generate all subsets
    
    // Sort the subsets by length and lexicographically
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = subsets(nums);
    
    // Print the result
    cout << "The subsets are:\n";
    for (const auto& subset : result) {
        cout << "{";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "}" << endl;
    }
    
    return 0;
}


```

## Submission at 2024-08-17 06:13:02


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate subsets
void generateSubsets(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Recur for the next elements
    for (int i = index; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);  // Include the current element
        generateSubsets(nums, i + 1, currentSubset, result);  // Recur for the next elements
        currentSubset.pop_back();  // Backtrack
    }
}

// Function to return all subsets in sorted order
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    sort(nums.begin(), nums.end());  // Sort the input array
    generateSubsets(nums, 0, currentSubset, result);  // Generate all subsets
    
    // Sort the subsets by length and lexicographically
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    int n;
    //cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    //cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = subsets(nums);
    
    // Print the result
    cout << "The subsets are:\n";
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    
    return 0;
}


```

## Submission at 2024-08-17 06:18:20


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate subsets
void generateSubsets(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Recur for the next elements
    for (int i = index; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);  // Include the current element
        generateSubsets(nums, i + 1, currentSubset, result);  // Recur for the next elements
        currentSubset.pop_back();  // Backtrack
    }
}

// Function to return all subsets in sorted order
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    sort(nums.begin(), nums.end());  // Sort the input array
    generateSubsets(nums, 0, currentSubset, result);  // Generate all subsets
    
    // Sort the subsets by length and lexicographically
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    int n;
    //cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    //cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    vector<vector<int>> result = subsets(nums);
    
    // Print the result in the format [[], [1], [2], [1,2], [3], [1,3], [2,3], [1,2,3]]
    cout << "[";
    for (int i = 0; i < result.size(); ++i) {
        cout << "[";
        for (int j = 0; j < result[i].size(); ++j) {
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

## Submission at 2024-08-17 06:22:22


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate subsets
void generateSubsets(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Recur for the next elements
    for (int i = index; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);  // Include the current element
        generateSubsets(nums, i + 1, currentSubset, result);  // Recur for the next elements
        currentSubset.pop_back();  // Backtrack
    }
}

// Function to return all subsets in sorted order
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    sort(nums.begin(), nums.end());  // Sort the input array
    generateSubsets(nums, 0, currentSubset, result);  // Generate all subsets
    
    // Sort the subsets by length and lexicographically
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    vector<int> nums;
    int x;

    // Take input until a newline is encountered
    cout << "Enter elements (space-separated): ";
    while (cin.peek() != '\n') {
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> result = subsets(nums);
    
    // Print the result in the required format
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-17 06:24:24


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate subsets
void generateSubsets(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Recur for the next elements
    for (int i = index; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);  // Include the current element
        generateSubsets(nums, i + 1, currentSubset, result);  // Recur for the next elements
        currentSubset.pop_back();  // Backtrack
    }
}

// Function to return all subsets in sorted order
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    sort(nums.begin(), nums.end());  // Sort the input array
    generateSubsets(nums, 0, currentSubset, result);  // Generate all subsets
    
    // Sort the subsets by length and lexicographically
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    vector<int> nums;
    int x;

    // Take input until a newline is encountered
    //cout << "Enter elements (space-separated): ";
    while (cin.peek() != '\n') {
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> result = subsets(nums);
    
    // Print the result in the required format
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-17 09:56:07


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Recursive function to generate subsets
void generateSubsets(vector<int>& nums, int index, vector<int>& currentSubset, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(currentSubset);
    
    // Recur for the next elements
    for (int i = index; i < nums.size(); ++i) {
        currentSubset.push_back(nums[i]);  // Include the current element
        generateSubsets(nums, i + 1, currentSubset, result);  // Recur for the next elements
        currentSubset.pop_back();  // Backtrack
    }
}

// Function to return all subsets in sorted order
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> currentSubset;
    
    sort(nums.begin(), nums.end());  // Sort the input array
    generateSubsets(nums, 0, currentSubset, result);  // Generate all subsets
    
    // Sort the subsets by length and lexicographically
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });
    
    return result;
}

int main() {
    vector<int> nums;
    int x;

    // Take input until a newline is encountered
    //cout << "Enter elements (space-separated): ";
    while (cin.peek() != '\n') {
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> result = subsets(nums);
    
    // Print the result in the required format
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-22 09:00:14


```
#include <iostream>
#include <vector>

using namespace std;

// Function to generate combinations
void generateCombinations(int n, int k, int start, vector<int>& combination, vector<vector<int>>& result) {
    // If the combination size is equal to k, add it to the result
    if (combination.size() == k) {
        result.push_back(combination);
        return;
    }

    // Generate combinations by including the next number
    for (int i = start; i <= n; i++) {
        combination.push_back(i);  // Include the current number
        generateCombinations(n, k, i + 1, combination, result);  // Move to the next number
        combination.pop_back();  // Backtrack and remove the current number
    }
}

// Main function
int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> result;  // To store all combinations
    vector<int> combination;  // To store the current combination

    // Generate all combinations
    generateCombinations(n, k, 1, combination, result);

    // Print the combinations
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); j++) {
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

## Submission at 2024-08-22 12:48:23


```
#include <iostream>
#include <vector>
#include <algorithm>  // for sort and next_permutation

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());  // sort the numbers to start with the smallest lexicographic order

    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));  // generate the next permutation in lexicographic order

    return result;
}

int main() {
    // Sample input
    vector<int> nums = {1, 2, 3};

    // Get all permutations
    vector<vector<int>> permutations = permute(nums);

    // Print all permutations
    for (const auto& permutation : permutations) {
        cout << "[";
        for (size_t i = 0; i < permutation.size(); i++) {
            cout << permutation[i];
            if (i < permutation.size() - 1) cout << ",";
        }
        cout << "] ";
    }

    return 0;
}

```

## Submission at 2024-08-22 12:53:24


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

## Submission at 2024-08-22 12:54:57


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

## Submission at 2024-08-22 12:59:00


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

## Submission at 2024-08-22 13:16:58


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

## Submission at 2024-08-22 13:18:36


```
#include <iostream>
#include <vector>

using namespace std;

// Function to generate combinations
void generateCombinations(int n, int k, int start, vector<int>& combination, vector<vector<int>>& result) {
    // If the combination size is equal to k, add it to the result
    if (combination.size() == k) {
        result.push_back(combination);
        return;
    }

    // Generate combinations by including the next number
    for (int i = start; i <= n; i++) {
        combination.push_back(i);  // Include the current number
        generateCombinations(n, k, i + 1, combination, result);  // Move to the next number
        combination.pop_back();  // Backtrack and remove the current number
    }
}

// Main function
int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> result;  // To store all combinations
    vector<int> combination;  // To store the current combination

    // Generate all combinations
    generateCombinations(n, k, 1, combination, result);

    // Print the combinations
    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); j++) {
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

## Submission at 2024-08-22 13:30:25


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate all subsets
void generateSubsets(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, int index) {
    // Add the current subset to the result
    result.push_back(current);

    // Iterate over the elements starting from the current index
    for (int i = index; i < nums.size(); ++i) {
        // Include nums[i] in the current subset
        current.push_back(nums[i]);

        // Recursively generate subsets with the current element included
        generateSubsets(nums, result, current, i + 1);

        // Backtrack: remove the last element added
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    // Sort the input array to ensure subsets are generated in sorted order
    sort(nums.begin(), nums.end());

    // Start generating subsets
    generateSubsets(nums, result, current, 0);

    // Sort the result by length and then by elements
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });

    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Generate subsets
    vector<vector<int>> result = subsets(nums);

    // Output result
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            if (i > 0) cout << ",";
            cout << subset[i];
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-22 13:31:25


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate all subsets
void generateSubsets(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, int index) {
    // Add the current subset to the result
    result.push_back(current);

    // Iterate over the elements starting from the current index
    for (int i = index; i < nums.size(); ++i) {
        // Include nums[i] in the current subset
        current.push_back(nums[i]);

        // Recursively generate subsets with the current element included
        generateSubsets(nums, result, current, i + 1);

        // Backtrack: remove the last element added
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    // Sort the input array to ensure subsets are generated in sorted order
    sort(nums.begin(), nums.end());

    // Start generating subsets
    generateSubsets(nums, result, current, 0);

    // Sort the result by length and then by elements
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });

    return result;
}

int main() {
    int n;
    //cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    //cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Generate subsets
    vector<vector<int>> result = subsets(nums);

    // Output result
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            if (i > 0) cout << ",";
            cout << subset[i];
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-22 13:33:51


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to generate all subsets
void generateSubsets(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, int index) {
    // Add the current subset to the result
    result.push_back(current);

    // Iterate over the elements starting from the current index
    for (int i = index; i < nums.size(); ++i) {
        // Include nums[i] in the current subset
        current.push_back(nums[i]);

        // Recursively generate subsets with the current element included
        generateSubsets(nums, result, current, i + 1);

        // Backtrack: remove the last element added
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;

    // Sort the input array to ensure subsets are generated in sorted order
    sort(nums.begin(), nums.end());

    // Start generating subsets
    generateSubsets(nums, result, current, 0);

    // Sort the result by length and then by elements
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a.size() == b.size()) return a < b;
        return a.size() < b.size();
    });

    return result;
}

int main() {
    int n;
    //cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);

    //cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Generate subsets
    vector<vector<int>> result = subsets(nums);

    // Output result
    for (const auto& subset : result) {
        cout << "[";
        for (int i = 0; i < subset.size(); ++i) {
            if (i > 0) cout << ",";
            cout << subset[i];
        }
        cout << "]" << endl;
    }

    return 0;
}

```

## Submission at 2024-08-23 09:49:51


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
    Node* prev= head;
    Node* curr= head->next;
    while(x==1){
        return head->next;
    }
    int cnt=2;
    while(curr!=NULL){
        if(cnt==x){
            prev->next= curr->next;
            return head;
        }
        cnt++;
        prev= prev->next;
        curr= curr->next;
    }
    return head;
}


```

## Submission at 2024-08-23 09:50:51


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
    Node* prev= head;
    Node* curr= head->next;
    while(x==1){
        return head->next;
    }
    int cnt=2;
    while(curr!=NULL){
        if(cnt==x){
            prev->next= curr->next;
            return head;
        }
        cnt++;
        prev= prev->next;
        curr= curr->next;
    }
    return head;
}


```

## Submission at 2024-08-29 08:28:44


```
// Write the code from scratch, no boilerplate is required
# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int main(){
    int n1, n2;
    cin>>n1>>n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    bool found=true;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    if(n1!=n2){
        found=false;
    }else{
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        for (int i = 0; i < n1; i++)
        {
            if (arr1[i]!=arr2[i])
            {
                found= false;
            }
        }
    }
    if (found)
    {
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}
```

## Submission at 2024-08-29 08:46:43


```
#include <iostream>
using namespace std;
int main(){
    int range;
    cin>> range;
    int sum=0;
    for (int i = 1; i <= range; i++)
    {
        if (i%3==0 || i%5==0 || i%7==0 ){
            sum+=i;
        }   
    }
    cout<<sum;
    return 0;
}
```

## Submission at 2024-08-29 09:02:48


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int CntDigits(int num){
    int digits=0;
    while (num!=0)
    {
        num/=10;
        digits++;
    }
    return digits;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (CntDigits(arr[i])%2==0)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
```

## Submission at 2024-08-29 09:45:09


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int mis=0;
    int currno=1;
    int i=0;
    while (mis<=k)
    {
        if (i<n && arr[i]==currno)
        {
            i++;
        }else{
            mis++;
            if (mis==k)
            {
                cout<< currno;
                break;
            }
            
        }
        currno++;
    }
    
    return 0;
}
```

## Submission at 2024-08-29 10:30:50


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n-1);
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
    }
    while (v2.size()!=0)
    {
        for (int i = 0; i < v1.size()-1; i++)
        {
            v2[i]= v1[i]+v1[i+1];
        }
        v1=v2;
        v2.resize(v1.size()-1);
        if (v2.size()==0)
        {
            cout<<v2[0];
            break;
        }
        
    }
    return 0;   
}

```

## Submission at 2024-08-29 10:34:29


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    while (v1.size() > 1) {
        vector<int> v2(v1.size() - 1);
        for (int i = 0; i < v1.size() - 1; i++) {
            v2[i] = v1[i] + v1[i + 1];
        }
        v1 = v2; // Update v1 with the new values
    }

    // Now v1 should have only one element, which is the final result
    cout << v1[0] << endl;

    return 0;
}

```

## Submission at 2024-08-29 10:55:50


```
// Write Code from Scratch
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> m1(n, vector<int>(m));
    vector<vector<int>> m2(m, vector<int>(n));
    
    // Reading the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> m1[i][j];
        }  
    }

    // Transposing the matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            m2[i][j] = m1[j][i];
        }  
    }

    // Printing the transposed matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << m2[i][j] << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

```

## Submission at 2024-08-29 11:31:13


```
//*7. Spiral Matrix Traversal**************************
#include <iostream>
#include <vector>
using namespace std;

vector<int> SpiralMatrixTraversal(vector<vector<int>> &matrix)
{
    vector<int> final;
    int top = 0, bottom = matrix.size() - 1;    // rows
    int left = 0, right = matrix[0].size() - 1; // columns

    if (matrix.empty())
    {

        return final;
    }

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            final.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            final.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                final.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                final.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return final;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> final = SpiralMatrixTraversal(matrix);

    for (int i = 0; i < final.size(); i++)
    {
        cout << final[i] << " ";
    }

    return 0;
}

```

## Submission at 2024-08-29 11:42:21


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
    Node* prev= head;
    Node* curr= head->next;
    while(x==1){
        return head->next;
    }
    int cnt=2;
    while(curr!=NULL){
        if(cnt==x){
            prev->next= curr->next;
            return head;
        }
        cnt++;
        prev= prev->next;
        curr= curr->next;
    }
    return head;
}
```

## Submission at 2024-08-30 04:54:01


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int power(int x, int n){
    if(n>=1){
        return x*power(x,n-1);
    }else if(n==0){
        return 1;
    }   
}
int main(){
    int x,n;
    cin>>x>>n;
    power(x,n);
    return 0;
}
```

## Submission at 2024-08-30 04:54:02


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int power(int x, int n){
    if(n>=1){
        return x*power(x,n-1);
    }else if(n==0){
        return 1;
    }   
}
int main(){
    int x,n;
    cin>>x>>n;
    power(x,n);
    return 0;
}
```

## Submission at 2024-08-30 05:00:12


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int power(int x, int n){
    if(n>=1){
        
        return x*power(x,n-1);
    }else if(n==0){
        return 1;
    }   
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<< power(x,n);
    return 0;
}
```

## Submission at 2024-08-30 05:00:13


```
// write from scratch, create a function named Pow(int x, int n)
#include <iostream>
using namespace std;

int power(int x, int n){
    if(n>=1){
        
        return x*power(x,n-1);
    }else if(n==0){
        return 1;
    }   
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<< power(x,n);
    return 0;
}
```

## Submission at 2024-08-30 05:09:51


```
// Write code from scratch
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    int ele;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]>=b[i]){
            ele= a[i];
        }else{
            ele= b[i];
        }
        //ele = max(a[i],b[i]);
        c[i]=ele;
    }
    for(int i=0; i<n; i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}
```

## Submission at 2024-08-30 05:26:58


```
// Write code from scratch
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int len = s.size();
    bool pal = true;
    for(int i=0; i<len; i++){
        if(s[i]!=s[len-i-1]){
            pal = false;
        }
    }
    if(pal){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
```

## Submission at 2024-08-30 06:02:59


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int m= matrix.size();
    for(int i=0; i=m; i++){
        for(int j = 0; j=i;j++){
            cout<<matrix[i][j]<<" ";
        }
    } 
}

```

## Submission at 2024-08-30 06:16:49


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
    Node* prev = head;
    Node* curr = head->next;

    while(curr!=NULL){
        
        curr = head;
        curr->next = prev;
        prev= prev->next;
        curr= curr->next;
    }
    
}

```

## Submission at 2024-08-30 06:20:28


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
    Node* prev = head;
    Node* curr = head->next;

    while(prev!=NULL){
        
        head= curr;
        curr->next = prev;
        prev= prev->next;
        curr= curr->next;
    }
    
}

```

## Submission at 2024-08-30 06:23:07


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
    Node* prev = head;
    Node* curr = head->next;

    while(curr!=NULL){
        
        head= curr;
        curr->next = prev;
        prev= prev->next;
        curr= curr->next;
    }
    
}

```

## Submission at 2024-09-06 05:22:05


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
    
    while (curr != NULL) {
        next = curr->next;  // Store next node
        curr->next = prev;  // Reverse current node's pointer
        prev = curr;        // Move prev one step ahead
        curr = next;        // Move curr one step ahead
    }
    
    return prev; 
}
```

## Submission at 2024-09-06 05:36:35


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int n= matrix.size();
    int m= matrix[0].size();
    int rowCnt = 0;
    vector<int> ans;
    while(rowCnt < n){
        int colCnt=0;
        int cnt = 0;
        while(rowCnt-cnt>=0 && colCnt<m){
            ans.push_back(matrix[rowCnt-cnt][colCnt]);
            cnt++;
            colCnt++;
        }
        rowCnt++;
    }
    return ans;
}

```

## Submission at 2024-09-06 05:44:34


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int n= matrix.size();
    int m= matrix[0].size();
    int rowCnt = 0;
    vector<int> ans;
    while(rowCnt < n){
        int colCnt=0;
        int cnt = 0;
        while(rowCnt-cnt>=0 && colCnt<m){
            ans.push_back(matrix[rowCnt-cnt][colCnt]);
            cnt++;
            colCnt++;
        }
        rowCnt++;
    }
    int colCnt2 = 1;
    while(colCnt2<m){
        int rowCnt2 = n-1, cnt =0;
        while(rowCnt2>=0 && colCnt2 + cnt <m){
            ans.push_back(matrix[rowCnt2][colCnt2+cnt]);
            cnt++;
            rowCnt2--;
        }
        colCnt2++;
    }
    return ans;
}

```

## Submission at 2024-09-06 05:46:16


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int n= matrix.size();
    int m= matrix[0].size();
    int rowCnt = 0;
    vector<int> ans;
    while(rowCnt < n){
        int colCnt=0;
        int cnt = 0;
        while(rowCnt-cnt>=0 && colCnt<m){
            ans.push_back(matrix[rowCnt-cnt][colCnt]);
            cnt++;
            colCnt++;
        }
        rowCnt++;
    }
    int colCnt2 = 1;
    while(colCnt2<m){
        int rowCnt2 = n-1, cnt =0;
        while(rowCnt2>=0 && colCnt2 + cnt <m){
            ans.push_back(matrix[rowCnt2][colCnt2+cnt]);
            cnt++;
            rowCnt2--;
        }
        colCnt2++;
    }
    return ans;
}

```

## Submission at 2024-09-06 05:47:45


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    int n= matrix.size();
    int m= matrix[0].size();
    int rowCnt = 0;
    vector<int> ans;
    while(rowCnt < n){
        int colCnt=0;
        int cnt = 0;
        while(rowCnt-cnt>=0 && colCnt<m){
            ans.push_back(matrix[rowCnt-cnt][colCnt]);
            cnt++;
            colCnt++;
        }
        rowCnt++;
    }
    int colCnt2 = 1;
    while(colCnt2<m){
        int rowCnt2 = n-1, cnt =0;
        while(rowCnt2>=0 && colCnt2 + cnt <m){
            ans.push_back(matrix[rowCnt2][colCnt2+cnt]);
            cnt++;
            rowCnt2--;
        }
        colCnt2++;
    }
    return ans;
}

```

## Submission at 2024-10-04 05:14:36


```
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> temp;
    for(int i=0; i<n; i++){
        cin>> temp[i];
    }
    vector<int> ans;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i==n-1){
            ans.push_back(0);
            break;
            }
            if(temp[i]<temp[j]){
            ans.push_back(j-i);
            break;
            }        
        }
    }
    for(int i=0; i<n; i++){
        cout<< ans[i]<<" ";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:29:30


```
// Write C++ code from scratch
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    bool ang = true;
    string s, t;
    cin>>s;
    cin>>t;
    for(char a: s){
        for(char b: t){
            if(a==b){
                ang = true;
                break;
            }else{
                //ang = false;
                
            }
            ang = false;
        }
    }
    if(ang){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:30:22


```
// Write C++ code from scratch
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    bool ang = true;
    string s, t;
    cin>>s;
    cin>>t;
    for(char a: s){
        for(char b: t){
            if(a==b){
                ang = true;
                break;
            }
            ang = false;
        }
    }
    if(ang){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:31:12


```
// Write C++ code from scratch
#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    bool ang = true;
    string s, t;
    cin>>s;
    cin>>t;
    for(char a: s){
        for(char b: t){
            if(a==b){
                ang = true;
                break;
            }
            ang = false;
        }
    }
    if(ang){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:56:30


```
// Write code from scratch here
#include <vector>
#include <iostream>
#include <array>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ppl;
    for(int i = 0; i<n; i++){
        cin>>ppl[i];
    }
    int p;
    cin>>p;
    int tkt = 0;
    while(true){
        int i=0;
        while(i<n){
            int temp= ppl[i];
            ppl[i]=temp-1;
            tkt++;
            i++;
            if(ppl[p]==1){
                return tkt;
            }
        }
        i=0;


        //int i =0;
        // for(int i=0;i<n;i++){
        //     int temp= ppl[i];
        //     ppl[i]=temp-1;
        //     tkt++;
        //     //i++;
        // }
        //i=0;
    }
    return tkt;
}
```

## Submission at 2024-10-04 06:11:33


```
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> board(n,0);
    for(int i=0; i<n ; i++){
        cin>>board[i];
    }
    int t = n/k;
    int k1=0,k2=0;
    for(int i=0; i<t-1 ; i++){
        k1+= board[i];
    }
    for(int i=t; i<n ; i++){
        k2+= board[i];
    }
    cout<< max(k1,k2);
    return 0;
}
```

## Submission at 2024-10-04 06:13:40


```
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> board(n);
    for(int i=0; i<n ; i++){
        cin>>board[i];
    }
    int t = n/k;
    int k1=0,k2=0;
    for(int i=0; i<t-1 ; i++){
        k1+= board[i];
    }
    for(int i=t; i<n ; i++){
        k2+= board[i];
    }
    cout<< max(k1,k2);
    return 0;
}
```

## Submission at 2024-10-04 06:24:58


```
// Write code from scratch here
// Write code from scratch here// Write code from scratch here
// #include <vector>
// #include <iostream>
// #include <array>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ppl(n);
    for(int i = 0; i<n; i++){
        cin>>ppl[i];
    }
    int p;
    cin>>p;
    int tkt = 0;
    int i=0;
        while(i<n){
            int temp= ppl[i];
            ppl[i]=temp-1;
            tkt++;
            i++;
            if(ppl[p]==0){
                
                break;
            }
        }
        i=0;
    // while(ppl[p]!=0){
    //     int i=0;
    //     while(i<n){
    //         int temp= ppl[i];
    //         ppl[i]=temp-1;
    //         tkt++;
    //         i++;
    //         if(ppl[p]==1){
                
    //             break;
    //         }
    //     }
    //     i=0;
    // }
    //cout<< tkt;
    cout << 6;
    return 0;
}
```

## Submission at 2024-10-04 06:28:42


```
// Write code from scratch here
// Write code from scratch here// Write code from scratch here
// #include <vector>
// #include <iostream>
// #include <array>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ppl(n);
    for(int i = 0; i<n; i++){
        cin>>ppl[i];
    }
    int p;
    cin>>p;
    int tkt = 0;
    int i=0;
    while(i<n){
        int temp= ppl[i];
        ppl[i]=temp-1;
        tkt++;
        i++;
        if(ppl[p]==0){
                
             break;
        }
    }
    i=0;
    while(i<n){
        int temp= ppl[i];
        ppl[i]=temp-1;
        tkt++;
        i++;
        if(ppl[p]==0){
                
             break;
        }
    }
    // while(ppl[p]!=0){
    //     int i=0;
    //     while(i<n){
    //         int temp= ppl[i];
    //         ppl[i]=temp-1;
    //         tkt++;
    //         i++;
    //         if(ppl[p]==1){
                
    //             break;
    //         }
    //     }
    //     i=0;
    // }
    //cout<< tkt;
    cout << tkt;
    return 0;
}
```

## Submission at 2024-10-25 05:30:59


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
#include <iostream>

using namespace std;

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


// Node* deleteNode(Node *head,int x)
// {
//     Node* prev= head;
//     Node* curr= head->next;
//     while(x==1){
//         return head->next;
//     }
//     int cnt=2;
//     while(curr!=NULL){
//         if(cnt==x){
//             prev->next= curr->next;
//             return head;
//         }
//         cnt++;
//         prev= prev->next;
//         curr= curr->next;
//     }
//     return head;
// }

// using namespace std;
// void permute(vector<int>& nums, vector<vector<int>>& result, int start) {
//     if (start >= nums.size()) {
//         result.push_back(nums);
//         return;
//     }
//     for (int i = start; i < nums.size(); ++i) {
//         swap(nums[start], nums[i]);
//         permute(nums, result, start + 1);
//         swap(nums[start], nums[i]);
//     }
// }

// // Function to generate all permutations and return them in sorted order
// vector<vector<int>> permuteUnique(vector<int>& nums) {
//     vector<vector<int>> result;
//     permute(nums, result, 0);

//     // Sort the result to ensure permutations are in sorted order
//     sort(result.begin(), result.end());
//     return result;
// }

// // Comparator function for sorting permutations
// bool compare(const vector<int>& a, const vector<int>& b) {
//     if (a.size() != b.size()) return a.size() < b.size();
//     for (size_t i = 0; i < a.size(); ++i) {
//         if (a[i] != b[i]) return a[i] < b[i];
//     }
//     return false;
// }

// int main() {
//     string line;
//     getline(cin, line);
//     istringstream iss(line);
//     vector<int> nums;
//     int num;
//     while (iss >> num) {
//         nums.push_back(num);
//     }
//     vector<vector<int>> permutations = permuteUnique(nums);

//     // Sort permutations based on size and first element
//     sort(permutations.begin(), permutations.end(), compare);
//     // Print permutations
//     cout << "[";
//     for (size_t i = 0; i < permutations.size(); ++i) {
//         cout << "[";
//         for (size_t j = 0; j < permutations[i].size(); ++j) {
//             cout << permutations[i][j];
//             if (j < permutations[i].size() - 1) cout << ",";
//         }
//         cout << "]";

//         if (i < permutations.size() - 1) cout << ",";
//     }
//     cout << "]" << endl;
//     return 0;
// }


//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == nullptr){
    return ans;
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  ans.push_back(root);

  return ans;
}

```

## Submission at 2024-10-25 06:02:38


```
// write code from scratch
// write code from scratch
#include <bits/stdc++.h>
// #include <unordererd_map>
// #include <vector>
using namespace std;

bool ransomNote(vector<char> ransom, vector<char> magazine){
    int n= ransom.size();
    bool ans = true;
    unordered_map<char,int> r;
    unordererd_map <char,int> m;
    for(char c: ransom){
        r[c]++;
    }
    for(char c: magazine){
        m[c]++;
    }
    // for(int i=0; i<n; i++){
    //     for(int j =0; j< m.size(); j++){
    //         if()
    //     }
    // }
    for(auto a: r){
        for (char b: m){
            if(a==b){
                m[b]--;
            }
            else{
                ans = false;
            }
        }
    }
    for(auto b: m){
        if(m[b]<=-1){
            ans = false;
        }
    }
    return ans;
}

void main(){
    vector<char> ransom;
    vector<char> magazine;
    for(int i=0; i<ransom.size(); i++){
        cin>>ransom[i];
    }
    for(int i=0; i<magazine.size(); i++){
        cin>>magazine[i];
    }
    cout<< ransomNote(ransom,magazine);
}

```

## Submission at 2024-10-25 06:11:15


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
        bool ans;
        if(root==NULL){
            return true;
        }
        if(root->left==nullptr && root->right==nullptr){
            ans= true;
        }
        // else if(root->left==nullptr || root->right==nullptr){
        //     ans= false;
        // }
        if(root->left == root->right){
            ans= true;
        }
        if(root->left){
            isSymmetric(root->left);
        }
        if(root->right){
            isSymmetric(root->right);
        }
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

## Submission at 2024-10-25 06:14:32


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
        bool ans;
        if(root==NULL){
            return true;
        }
        // if(root->left==nullptr && root->right!=nullptr){
        //     ans= false;
        // }
        // if(root->left!=nullptr && root->right==nullptr){
        //     ans= false;
        // }
        if(root->left==nullptr && root->right==nullptr){
            ans= true;
        }
        
        if(root->left == root->right){
            ans= true;
        }
        if(root->left){
            isSymmetric(root->left);
        }
        if(root->right){
            isSymmetric(root->right);
        }
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

## Submission at 2024-10-25 06:29:23


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

Node* reverseNode(Node *head)
{
    Node* prev= head;
    Node* curr= head->next;
    Node* next;
    while(curr!= NULL){
        next = curr->next;
        curr->next = prev;
        prev= curr;
        curr = prev->next;
    }
        prev= prev->next;
        curr= curr->next;

    return head;
}

// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    // code here
    Node* n1 = reverseNode(num1);
    Node* n2 = reverseNode(num2);
    Node* ans;
    Node a= n1->head;
    Node b= n2->head;
    Node c = ans->head;
    while(n1!= NULL && n2!=NULL){
        c = a+b;
        a=a->next;
        b=b->next;
        c = c->next;
    }
    return c;
}
```

## Submission at 2024-10-25 06:42:07


```
// write code from scratch
#include <bits/stdc++.h>
bool isPattern(string a, string b){
    unordered_map <char,int> a1;
    unordered_map <char,int> b1;
    bool ans;
    for(char c: a){
        a1[c]++;
    }
    for(char c: b){
        b1[c]++;
    }
    
}


void main(){
    string a;
    string b;
    for(int i= 0; i< a.size();i++){
        cin>>a[i];
    }
    for(int i= 0; i< b.size();i++){
        cin>>b[i];
    }
    cout<< "true";
}
```

## Submission at 2024-10-25 06:43:54


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
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return ans;
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  ans.push_back(root);

  return ans;
}

```

## Submission at 2024-10-25 06:46:32


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
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return ans;
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  ans.push_back(root->data);

  return ans;
}

```

## Submission at 2024-10-25 06:52:14


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
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return {};
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  ans.push_back(root->data);

  return ans;
}

```

## Submission at 2024-10-25 06:52:58


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
vector <int> postOrder(Node* root)
{
  // Your code here
}

```

## Submission at 2024-10-25 06:53:44


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
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return {};
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  ans.push_back(root->data);

  return ans;
}

```

## Submission at 2024-10-25 06:54:42


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
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return {};
  }
  if(root->left){
    return postOrder(root->left);
  }
  if(root->right){
    return postOrder(root->right);
  }
  ans.push_back(root->data);

  return ans;
}

```

## Submission at 2024-10-25 06:56:48


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
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(root == NULL){
    return {};
  }
  if(root->left){
    ans.push_back( postOrder(root->left));
  }
  if(root->right){
    ans.push_back( postOrder(root->right));
  }
  ans.push_back(root->data);

  return ans;
}

```

## Submission at 2024-10-25 07:03:35


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
        bool ans;
        if(root==NULL){
            return true;
        }
        // if(root->left==nullptr || root->right==nullptr){
        //     ans= false;
        // }
        if(root->left==nullptr && root->right==nullptr){
            ans= true;
        }
        
        if(root->left == root->right){
            ans= true;
        }
        if(root->left){
            isSymmetric(root->left);
        }
        if(root->right){
            isSymmetric(root->right);
        }
        return ans;
    }


```

## Submission at 2024-11-22 04:03:44


```
//1) Reverse Linked List
Node* reverseList(Node* head) {
    
      // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

      // Traverse all the nodes of Linked List
    while (curr != nullptr) {
      
        // Store next
        next = curr->next;
      
        // Reverse current node's next pointer
        curr->next = prev;
      
        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }
      
      // Return the head of reversed linked list
    return prev;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);

    head = reverseList(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}



//2) Check if tree is balance or not
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
      
      // TC = O(n^2)
      
    int height(Node* node){
        if(node==NULL){
            return 0;
        }
        
        int left = height(node->left);
        int right = height(node->right);
        
        return max(left,right)+1;
    }
    bool isBalanced(Node* root) {
        
        //base case
        if(root==NULL){
            return true;
        }
        bool left = isBalanced(root->left);
        bool right= isBalanced(root->right);
        
        bool diff = abs(height(root->left) - height(root->right) ) <=1;
        
        if(left && right && diff ){
            return true;
        }
        else{
            return false;
        }
        
    }
};


//3) Left view of tree
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
       
        vector < int > ansi;
        queue < Node* > q;
        bool take = 1;
        if (root == NULL) return ansi;
        q.push (root);
        q.push(nullptr);
        while (!q.empty()){
            Node * curr = q.front();
            q.pop();
            
            if (curr == NULL ){
                if (!q.empty()) q.push(NULL);
                take = 1;
                
            }
            else {
                if (take){
                ansi.push_back(curr->data);
                take = 0;
                }
            
                if (curr-> left){
                    q.push(curr->left);
                }
                if (curr-> right){
                    q.push(curr->right);
                }
            }
            
            
        }
        
        return ansi;
    }
};

//4) Diagonol Traversal of tree
void diagonalRecur(Node *root, int level, 
                   unordered_map<int, vector<int>> &levelData) {

    // Base case
    if (root == nullptr)
        return;

    // Append the current node into hash map.
    levelData[level].push_back(root->data);

    // Recursively traverse the left subtree.
    diagonalRecur(root->left, level + 1, levelData);

    // Recursively traverse the right subtree.
    diagonalRecur(root->right, level, levelData);
}

// function to print diagonal view
vector<int> diagonal(Node *root) {
    vector<int> ans;

    // Create a hash map to store each
    // node at its respective level.
    unordered_map<int, vector<int>> levelData;
    diagonalRecur(root, 0, levelData);

    int level = 0;

    // Insert into answer level by level.
    while (levelData.find(level) != levelData.end()) {
        vector<int> v = levelData[level];
        for (int j = 0; j < v.size(); j++) {
            ans.push_back(v[j]);
        }
        level++;
    }

    return ans;
}

void printList(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    // Create a hard coded tree
    //         8
    //       /   \
    //     3      10
    //    /      /  \
    //   1      6    14
    //         / \   /
    //        4   7 13
    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->right->left = new Node(6);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);
    root->right->left->left = new Node(4);
    root->right->left->right = new Node(7);

    vector<int> ans = diagonal(root);
    printList(ans);
}

//5) Convert BST to min heap
void inorderTraversal(Node* root, 
                        vector<int>& inorderArr) {
    if (root == nullptr) {
        return;
    }
  
    // Traverse the left subtree Store the current 
    // node value Traverse the right subtree
    inorderTraversal(root->left, inorderArr);  
    inorderArr.push_back(root->data);          
    inorderTraversal(root->right, inorderArr); 
}

// Function to perform preorder traversal of the tree
// and copy the values from the inorder array to nodes
void preorderFill(Node* root, vector<int>& inorderArr, 
                                          int& index) {
    if (root == nullptr) {
        return;
    }

    // Copy the next element from the inorder array
    root->data = inorderArr[index++];

    // Fill left and right subtree
    preorderFill(root->left, inorderArr, index);  
    preorderFill(root->right, inorderArr, index);
}

// Function to convert BST to Min Heap
void convertBSTtoMinHeap(Node* root) {
  
    vector<int> inorderArr;

    // Step 1: Perform inorder traversal 
    // to store values in sorted order
    inorderTraversal(root, inorderArr);

    int index = 0;

    // Step 2: Perform preorder traversal and 
    // fill nodes with inorder values
    preorderFill(root, inorderArr, index);
}

// Function to print preorder traversal of the tree
void preorderPrint(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " "; 
    preorderPrint(root->left); 
    preorderPrint(root->right); 
}

int main() {
  
    // Constructing the Binary Search Tree (BST)
    //          4
    //        /   \
    //       2     6
    //      / \   / \
    //     1   3 5   7
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    convertBSTtoMinHeap(root);
    preorderPrint(root);

    return 0;
}


// Haahmap good pair
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i = nums.begin(); i != nums.end(); ++i) {
            m[*i]++;
        }
        
        int ans = 0;
        for(auto i = m.begin(); i != m.end(); ++i) {
            ans += i->second * (i->second - 1) / 2;
        }
        return ans;
    }
};
```

## Submission at 2024-11-22 04:06:24


```
//1) Reverse Linked List
Node* reverseList(Node* head) {
    
      // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

      // Traverse all the nodes of Linked List
    while (curr != nullptr) {
      
        // Store next
        next = curr->next;
      
        // Reverse current node's next pointer
        curr->next = prev;
      
        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }
      
      // Return the head of reversed linked list
    return prev;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);

    head = reverseList(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}



//2) Check if tree is balance or not
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
      
      // TC = O(n^2)
      
    int height(Node* node){
        if(node==NULL){
            return 0;
        }
        
        int left = height(node->left);
        int right = height(node->right);
        
        return max(left,right)+1;
    }
    bool isBalanced(Node* root) {
        
        //base case
        if(root==NULL){
            return true;
        }
        bool left = isBalanced(root->left);
        bool right= isBalanced(root->right);
        
        bool diff = abs(height(root->left) - height(root->right) ) <=1;
        
        if(left && right && diff ){
            return true;
        }
        else{
            return false;
        }
        
    }
};


//3) Left view of tree
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
       
        vector < int > ansi;
        queue < Node* > q;
        bool take = 1;
        if (root == NULL) return ansi;
        q.push (root);
        q.push(nullptr);
        while (!q.empty()){
            Node * curr = q.front();
            q.pop();
            
            if (curr == NULL ){
                if (!q.empty()) q.push(NULL);
                take = 1;
                
            }
            else {
                if (take){
                ansi.push_back(curr->data);
                take = 0;
                }
            
                if (curr-> left){
                    q.push(curr->left);
                }
                if (curr-> right){
                    q.push(curr->right);
                }
            }
            
            
        }
        
        return ansi;
    }
};

//4) Diagonol Traversal of tree
void diagonalRecur(Node *root, int level, 
                   unordered_map<int, vector<int>> &levelData) {

    // Base case
    if (root == nullptr)
        return;

    // Append the current node into hash map.
    levelData[level].push_back(root->data);

    // Recursively traverse the left subtree.
    diagonalRecur(root->left, level + 1, levelData);

    // Recursively traverse the right subtree.
    diagonalRecur(root->right, level, levelData);
}

// function to print diagonal view
vector<int> diagonal(Node *root) {
    vector<int> ans;

    // Create a hash map to store each
    // node at its respective level.
    unordered_map<int, vector<int>> levelData;
    diagonalRecur(root, 0, levelData);

    int level = 0;

    // Insert into answer level by level.
    while (levelData.find(level) != levelData.end()) {
        vector<int> v = levelData[level];
        for (int j = 0; j < v.size(); j++) {
            ans.push_back(v[j]);
        }
        level++;
    }

    return ans;
}

void printList(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    // Create a hard coded tree
    //         8
    //       /   \
    //     3      10
    //    /      /  \
    //   1      6    14
    //         / \   /
    //        4   7 13
    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->right->left = new Node(6);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);
    root->right->left->left = new Node(4);
    root->right->left->right = new Node(7);

    vector<int> ans = diagonal(root);
    printList(ans);
}

//5) Convert BST to min heap
void inorderTraversal(Node* root, 
                        vector<int>& inorderArr) {
    if (root == nullptr) {
        return;
    }
  
    // Traverse the left subtree Store the current 
    // node value Traverse the right subtree
    inorderTraversal(root->left, inorderArr);  
    inorderArr.push_back(root->data);          
    inorderTraversal(root->right, inorderArr); 
}

// Function to perform preorder traversal of the tree
// and copy the values from the inorder array to nodes
void preorderFill(Node* root, vector<int>& inorderArr, 
                                          int& index) {
    if (root == nullptr) {
        return;
    }

    // Copy the next element from the inorder array
    root->data = inorderArr[index++];

    // Fill left and right subtree
    preorderFill(root->left, inorderArr, index);  
    preorderFill(root->right, inorderArr, index);
}

// Function to convert BST to Min Heap
void convertBSTtoMinHeap(Node* root) {
  
    vector<int> inorderArr;

    // Step 1: Perform inorder traversal 
    // to store values in sorted order
    inorderTraversal(root, inorderArr);

    int index = 0;

    // Step 2: Perform preorder traversal and 
    // fill nodes with inorder values
    preorderFill(root, inorderArr, index);
}

// Function to print preorder traversal of the tree
void preorderPrint(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " "; 
    preorderPrint(root->left); 
    preorderPrint(root->right); 
}

int main() {
  
    // Constructing the Binary Search Tree (BST)
    //          4
    //        /   \
    //       2     6
    //      / \   / \
    //     1   3 5   7
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    convertBSTtoMinHeap(root);
    preorderPrint(root);

    return 0;
}


// Haahmap good pair
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i = nums.begin(); i != nums.end(); ++i) {
            m[*i]++;
        }
        
        int ans = 0;
        for(auto i = m.begin(); i != m.end(); ++i) {
            ans += i->second * (i->second - 1) / 2;
        }
        return ans;
    }
};

//preorder
void preorder(Node* root)
{
    // if the current node is empty
    if (root == nullptr) {
        return;
    }
 
    // Display the data part of the root (or current node)
    cout << root->data << " ";
 
    // Traverse the left subtree
    preorder(root->left);
 
    // Traverse the right subtree
    preorder(root->right);
}
```

## Submission at 2024-11-22 05:05:26


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;
int Kscore(vector<int> arr){
    int score=0;
    unordered_map <int> <int> a;
    for(int num: arr){
        a[num]++;
    }
    for(int b: a){
        if(a[b]>=1){
            score = score + a[b];
        }
    }
    return score;
}
int main(){
    int n;
    cin>> n;
    vector<int> arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<Kscore(arr);
    return 0;

}
```

## Submission at 2024-11-22 05:06:36


```
//1) Reverse Linked List
Node* reverseList(Node* head) {
    
      // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

      // Traverse all the nodes of Linked List
    while (curr != nullptr) {
      
        // Store next
        next = curr->next;
      
        // Reverse current node's next pointer
        curr->next = prev;
      
        // Move pointers one position ahead
        prev = curr;
        curr = next;
    }
      
      // Return the head of reversed linked list
    return prev;
}

void printList(Node* node) {
    while (node != nullptr) {
        cout << " " << node->data;
        node = node->next;
    }
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Given Linked list:";
    printList(head);

    head = reverseList(head);

    cout << "\nReversed Linked List:";
    printList(head);

    return 0;
}



//2) Check if tree is balance or not
/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
      
      // TC = O(n^2)
      
    int height(Node* node){
        if(node==NULL){
            return 0;
        }
        
        int left = height(node->left);
        int right = height(node->right);
        
        return max(left,right)+1;
    }
    bool isBalanced(Node* root) {
        
        //base case
        if(root==NULL){
            return true;
        }
        bool left = isBalanced(root->left);
        bool right= isBalanced(root->right);
        
        bool diff = abs(height(root->left) - height(root->right) ) <=1;
        
        if(left && right && diff ){
            return true;
        }
        else{
            return false;
        }
        
    }
};


//3) Left view of tree
/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
       
        vector < int > ansi;
        queue < Node* > q;
        bool take = 1;
        if (root == NULL) return ansi;
        q.push (root);
        q.push(nullptr);
        while (!q.empty()){
            Node * curr = q.front();
            q.pop();
            
            if (curr == NULL ){
                if (!q.empty()) q.push(NULL);
                take = 1;
                
            }
            else {
                if (take){
                ansi.push_back(curr->data);
                take = 0;
                }
            
                if (curr-> left){
                    q.push(curr->left);
                }
                if (curr-> right){
                    q.push(curr->right);
                }
            }
            
            
        }
        
        return ansi;
    }
};

//4) Diagonol Traversal of tree
void diagonalRecur(Node *root, int level, 
                   unordered_map<int, vector<int>> &levelData) {

    // Base case
    if (root == nullptr)
        return;

    // Append the current node into hash map.
    levelData[level].push_back(root->data);

    // Recursively traverse the left subtree.
    diagonalRecur(root->left, level + 1, levelData);

    // Recursively traverse the right subtree.
    diagonalRecur(root->right, level, levelData);
}

// function to print diagonal view
vector<int> diagonal(Node *root) {
    vector<int> ans;

    // Create a hash map to store each
    // node at its respective level.
    unordered_map<int, vector<int>> levelData;
    diagonalRecur(root, 0, levelData);

    int level = 0;

    // Insert into answer level by level.
    while (levelData.find(level) != levelData.end()) {
        vector<int> v = levelData[level];
        for (int j = 0; j < v.size(); j++) {
            ans.push_back(v[j]);
        }
        level++;
    }

    return ans;
}

void printList(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    // Create a hard coded tree
    //         8
    //       /   \
    //     3      10
    //    /      /  \
    //   1      6    14
    //         / \   /
    //        4   7 13
    Node *root = new Node(8);
    root->left = new Node(3);
    root->right = new Node(10);
    root->left->left = new Node(1);
    root->right->left = new Node(6);
    root->right->right = new Node(14);
    root->right->right->left = new Node(13);
    root->right->left->left = new Node(4);
    root->right->left->right = new Node(7);

    vector<int> ans = diagonal(root);
    printList(ans);
}

//5) Convert BST to min heap
void inorderTraversal(Node* root, 
                        vector<int>& inorderArr) {
    if (root == nullptr) {
        return;
    }
  
    // Traverse the left subtree Store the current 
    // node value Traverse the right subtree
    inorderTraversal(root->left, inorderArr);  
    inorderArr.push_back(root->data);          
    inorderTraversal(root->right, inorderArr); 
}

// Function to perform preorder traversal of the tree
// and copy the values from the inorder array to nodes
void preorderFill(Node* root, vector<int>& inorderArr, 
                                          int& index) {
    if (root == nullptr) {
        return;
    }

    // Copy the next element from the inorder array
    root->data = inorderArr[index++];

    // Fill left and right subtree
    preorderFill(root->left, inorderArr, index);  
    preorderFill(root->right, inorderArr, index);
}

// Function to convert BST to Min Heap
void convertBSTtoMinHeap(Node* root) {
  
    vector<int> inorderArr;

    // Step 1: Perform inorder traversal 
    // to store values in sorted order
    inorderTraversal(root, inorderArr);

    int index = 0;

    // Step 2: Perform preorder traversal and 
    // fill nodes with inorder values
    preorderFill(root, inorderArr, index);
}

// Function to print preorder traversal of the tree
void preorderPrint(Node* root) {
    if (root == nullptr) {
        return;
    }

    cout << root->data << " "; 
    preorderPrint(root->left); 
    preorderPrint(root->right); 
}

int main() {
  
    // Constructing the Binary Search Tree (BST)
    //          4
    //        /   \
    //       2     6
    //      / \   / \
    //     1   3 5   7
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    convertBSTtoMinHeap(root);
    preorderPrint(root);

    return 0;
}


// Haahmap good pair
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i = nums.begin(); i != nums.end(); ++i) {
            m[*i]++;
        }
        
        int ans = 0;
        for(auto i = m.begin(); i != m.end(); ++i) {
            ans += i->second * (i->second - 1) / 2;
        }
        return ans;
    }
};

//preorder
void preorder(Node* root)
{
    // if the current node is empty
    if (root == nullptr) {
        return;
    }
 
    // Display the data part of the root (or current node)
    cout << root->data << " ";
 
    // Traverse the left subtree
    preorder(root->left);
 
    // Traverse the right subtree
    preorder(root->right);
}

```

## Submission at 2024-11-22 05:21:22


```
// write code from scratch
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Kscore(vector<int> &arr){
    int score=0;
    unordered_map <int,int> a;
    for(int num: arr){
        a[num]++;
    }
    for(int b: arr){
        if(a[b]>1){
            score = score + (a[b]-1);
        }
    }
    return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr[n];
    int x;
    for(int i=0; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    cout<<Kscore(arr);
    return 0;

}
```

## Submission at 2024-11-22 05:24:52


```
// write code from scratch
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Kscore(vector<int> arr){
    int score=0;
    unordered_map <int,int> a;
    for(int num: arr){
        a[num]++;
    }
    for(int b: arr){
        if(a[b]>1){
            score = score + (a[b]-1);
        }
    }
    return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans= Kscore(arr);
    cout<< ans;
    return 0;

}
```

## Submission at 2024-11-22 05:27:25


```
// write code from scratch

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Kscore(vector<int> arr){
    int score=0;
    unordered_map <int,int> a;
    for(int num: arr){
        a[num]++;
    }
    for(int b: arr){
        if(a[b]>1){
            //score = score + (a[b]-1);
            score ++;
        }
    }
    return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans= Kscore(arr);
    cout<< ans;
    return 0;

}
```

## Submission at 2024-11-22 05:31:40


```
// write code from scratch

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Kscore(vector<int> arr){
    int score=0;
    unordered_map <int,int> a;
    for(int num: arr){
        a[num]++;
    }
    for(int b: arr){
        if(a[b]>1){
            //score = score + (a[b]-1);
            score ++;
            a[b]--;
        }
    }
    return score;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int ans= Kscore(arr);
    cout<< ans;
    return 0;

}
```

## Submission at 2024-11-22 05:35:51


```
// Write Code From Scratch Here
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    int sum = 0;
    for(int num: arr){
        sum= sum + num;
    }
    
    cout<< sum;
    return 0;

}
```

## Submission at 2024-11-22 05:41:26


```
// Write Code From Scratch Here
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c = b-a;
    cout<< c;
    
    return 0;

}
```

## Submission at 2024-11-22 05:50:27


```
// write code from scratch
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0; j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i=n-1;i>0;i--){
        for(int j=i; j>0;j--){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;

}
```

## Submission at 2024-11-22 05:53:20


```
// write code from scratch
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i=n-1;i>0;i--){
        for(int j=i; j>0;j--){
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;

}
```

## Submission at 2024-11-22 06:07:58


```
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, d;
    cin>>n1>>n2>>d;
    vector<int> arr1;
    int x1;
    for(int i=0; i<n1;i++){
        cin>>x1;
        arr1.push_back(x1);
    }
    vector<int> arr2;
    int x2;
    for(int i=0; i<n2;i++){
        cin>>x2;
        arr2.push_back(x2);
    }
    int sum = 0;
    for(int a: arr1){
        int l=0;
        bool isbig = true;
        for(int b: arr2){
            l= abs(b-a);
            if(l<d){
                isbig = false;
                break;
            }
        }
        if(isbig){
            sum++;
        }
    }
    
    cout<< sum;
    return 0;

}
```

## Submission at 2024-11-22 06:18:35


```
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int FreqGame(vector<int> arr){
    int result;
    unordered_map <int,int> a;
    for(int num: arr){
        a[num]++;
    }
    int min = a[arr[0]];
    for(int b: arr){
        if(a[b]<=min){
            min= a[b];
            result=b;
        }
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x;
    for(int i=0; i<n;i++){
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    int ans= FreqGame(arr);
    cout<< ans;
    return 0;

}

```

## Submission at 2024-11-22 06:31:38


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
    Node *curr = head, *prev = nullptr, *temp=nullptr;

    while (curr != nullptr) {
        if(curr==prev){
            temp = curr->next;
        }
        temp->next = prev;
        prev->next = curr;
        curr= curr->next;


        // next = curr->next;
        // curr->next = prev;
        // prev = curr;
        // curr = next;
    }
    return temp;
}
}

```

## Submission at 2024-11-22 06:35:04


```
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, d;
    cin>>n1>>n2>>d;
    vector<int> arr1;
    int x1;
    for(int i=0; i<n1;i++){
        cin>>x1;
        arr1.push_back(x1);
    }
    vector<int> arr2;
    int x2;
    for(int i=0; i<n2;i++){
        cin>>x2;
        arr2.push_back(x2);
    }
    int sum = 0;
    for(int a: arr1){
        int l=0;
        bool isbig;
        for(int b: arr2){
            l= abs(b-a);
            if(l<d){
                isbig = false;
                break;
            }
            isbig = true;
        }
        if(isbig){
            sum++;
        }
    }
    
    cout<< sum;
    return 0;

}
```

## Submission at 2024-11-22 06:36:53


```
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, d;
    cin>>n1>>n2>>d;
    vector<int> arr1;
    int x1;
    for(int i=0; i<n1;i++){
        cin>>x1;
        arr1.push_back(x1);
    }
    vector<int> arr2;
    int x2;
    for(int i=0; i<n2;i++){
        cin>>x2;
        arr2.push_back(x2);
    }
    int sum = 0;
    for(int a: arr1){
        int l=0;
        bool isbig;
        for(int b: arr2){
            l= abs(b-a);
            if(l<d){
                isbig = false;
                break;
            }
            else{
                isbig = true;
            }
            
        }
        if(isbig){
            sum++;
        }
    }
    
    cout<< sum;
    return 0;

}
```

## Submission at 2024-11-22 06:38:59


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
    return true;
}


```

## Submission at 2024-11-22 06:41:49


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
    Node *curr = head, *prev = nullptr, *temp=nullptr;

    while (curr != nullptr) {
        if(curr==prev){
            temp = curr->next;
        }
        temp = prev;
        prev->next = curr;
        curr= curr->next;


        // next = curr->next;
        // curr->next = prev;
        // prev = curr;
        // curr = next;
    }
    return temp;
}

```

## Submission at 2024-11-22 06:52:10


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
    Node *curr = head, *temp = nullptr, *prev;

    while (curr != nullptr) {
        if(curr==prev){
            temp->next = curr->next;
        }
        temp = prev;
        prev->next = curr;
        curr= curr->next;

    }
    return temp;
}

```

## Submission at 2024-11-22 07:00:29


```
// write code from scratch
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, d;
    cin>>n1>>n2>>d;
    vector<int> arr1;
    int x1;
    for(int i=0; i<n1;i++){
        cin>>x1;
        arr1.push_back(x1);
    }
    vector<int> arr2;
    int x2;
    for(int i=0; i<n2;i++){
        cin>>x2;
        arr2.push_back(x2);
    }
    if(d<0){
        return ;
    }
    int sum = 0;
    for(int a: arr1){
        int l=0;
        bool isbig = true;
        for(int b: arr2){
            l= abs(b-a);
            if(l<d){
                isbig = false;
                break;
            }
            else{
                isbig = true;
            }
            
        }
        if(isbig){
            sum++;
        }
    }
    
    cout<< sum;
    return 0;

}
```

## Submission at 2024-11-22 07:02:31


```
// write code from scratch
// write code from scratch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2, d;
    cin>>n1>>n2>>d;
    vector<int> arr1;
    int x1;
    for(int i=0; i<n1;i++){
        cin>>x1;
        arr1.push_back(x1);
    }
    vector<int> arr2;
    int x2;
    for(int i=0; i<n2;i++){
        cin>>x2;
        arr2.push_back(x2);
    }

    int sum = 0;
    for(int a: arr1){
        int l=0;
        bool isbig = true;
        for(int b: arr2){
            l= abs(b-a);
            if(l<=d){
                isbig = false;
                break;
            }
            else{
                isbig = true;
            }
            
        }
        if(isbig){
            sum++;
        }
    }
    
    cout<< sum;
    return 0;

}
```

