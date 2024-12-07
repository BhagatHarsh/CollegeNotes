## Submission at 2024-08-10 04:21:38


```
print("Hello " + input() + "!")


```

## Submission at 2024-08-10 04:25:36


```
print("Hello " + input() + "!")
```

## Submission at 2024-08-12 04:34:03


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if (x == 0) return 0;
    if (x == 1) return 1;
    
    int a = 0, b = 1;
    for (int i = 2; i <= x; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 04:35:04


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());

        // Calculate and print the Fibonacci number for the input x
        System.out.println(fibonacci(x));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        if (x == 0) return 0;
        if (x == 1) return 1;

        int a = 0, b = 1;
        for (int i = 2; i <= x; i++) {
            int next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
}

```

## Submission at 2024-08-12 04:35:55


```
def fibonacci(x:int) -> int:
    if x == 0:
        return 0
    elif x == 1:
        return 1

    a, b = 0, 1
    for _ in range(2, x + 1):
        a, b = b, a + b
    return b

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 05:07:34


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 05:08:20


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        int n = Integer.parseInt(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(int n) {
        if (n <= 0) return false;
        return (n & (n - 1)) == 0;
    }
}

```

## Submission at 2024-08-12 05:08:46


```
def is_power_of_two(n):
    if n <= 0:
        return False
    return (n & (n - 1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 05:09:36


```
def is_power_of_two(n):
    if n <= 0:
        return "false"
    return (n & (n - 1)) == 0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 05:10:15


```
def is_power_of_two(n):
    if n <= 0:
        return "false"
    if ((n & (n - 1)) == 0):
        return "true"
    return "false"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 05:57:36


```
#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {
    // Write your logic here
    float x = log(n)/log(2.0);
    return x==(int)x;
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-12 06:22:51


```
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        result.push_back(subset);
    }
    return result;
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

## Submission at 2024-08-12 06:25:31


```
def subsets(nums):
    result = []
    n = len(nums)
    total_subsets = 1 << n  # 2^n

    for i in range(total_subsets):
        subset = []
        for j in range(n):
            if i & (1 << j):
                subset.append(nums[j])
        result.append(subset)

    return sorted(result, key=lambda x:len(x))

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 07:29:33


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        int n = nums.length;
        int totalSubsets = 1 << n; // 2^n

        for (int i = 0; i < totalSubsets; i++) {
            List<Integer> subset = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) != 0) {
                    subset.add(nums[j]);
                }
            }
            result.add(subset);
        }

        return result;
    }
}

```

## Submission at 2024-08-12 07:30:37


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

        // Print subsets
        Arrays.sort(subset);
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        int n = nums.length;
        int totalSubsets = 1 << n; // 2^n

        for (int i = 0; i < totalSubsets; i++) {
            List<Integer> subset = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) != 0) {
                    subset.add(nums[j]);
                }
            }
            result.add(subset);
        }

        return result;
    }
}

```

## Submission at 2024-08-12 08:40:14


```
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        result.push_back(subset);
    }
    return result;
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

```

## Submission at 2024-08-12 08:42:04


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
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

## Submission at 2024-08-12 08:46:09


```
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        result.push_back(subset);
    }
    return result;
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

```

## Submission at 2024-08-12 08:47:05


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
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

## Submission at 2024-08-12 08:47:32


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        result.push_back(subset);
    }
    return result;
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

## Submission at 2024-08-12 09:03:31


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
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

## Submission at 2024-08-12 09:05:08


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
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

## Submission at 2024-08-12 09:05:46


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        int n = nums.length;
        int totalSubsets = 1 << n; // 2^n

        for (int i = 0; i < totalSubsets; i++) {
            List<Integer> subset = new ArrayList<>();
            for (int j = 0; j < n; j++) {
                if ((i & (1 << j)) != 0) {
                    subset.add(nums[j]);
                }
            }
            result.add(subset);
        }

        return result;
    }
}

```

## Submission at 2024-08-12 09:09:13


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> subset;
    int n = nums.size();
    int totalSubsets = 1 << n; // 2^n

    for (int i = 0; i < totalSubsets; ++i) {
        subset.clear();
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
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
            if (i < subset.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-16 05:43:12


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Base case: if the current combination has k elements, add it to the result
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    // Iterate from the current starting point up to n
    for (int i = start; i <= n; ++i) {
        // Add the current element to the combination
        current.push_back(i);

        // Recurse with the next starting point
        combine(i + 1, k, n, current, result);

        // Backtrack: remove the last element added
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
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]";

    return 0;
}

```

## Submission at 2024-08-17 08:57:25


```
n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

if(len(a) != len(b)):
    print("false")
    exit()

if(sorted(a) == sorted(b)):
    print("true")
    exit()

print("false")
```

## Submission at 2024-08-17 09:20:25


```
n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

if(len(a) != len(b)):
    print("false")
    exit()

if(sorted(a) == sorted(b)):
    print("true")
    exit()

print("false")
```

## Submission at 2024-08-17 09:20:46


```
n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))

if(len(a) != len(b)):
    print("false")
    exit()

if(sorted(a) == sorted(b)):
    print("true")
    exit()

print("false")
```

## Submission at 2024-08-17 11:24:48


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):

    if(k == 1):
        return head.next
    
    i = 1
    temp = head
    prev = temp

    while (i < k):
        prev = temp
        temp = temp.next
        i += 1

    prev.next = temp.next
    return head

```

## Submission at 2024-08-23 04:43:41


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def delNode(head, k):

    if(k == 1):
        return head.next
    
    i = 1
    temp = head
    prev = temp

    while (i < k):
        prev = temp
        temp = temp.next
        i += 1

    prev.next = temp.next
    return head


```

## Submission at 2024-08-23 04:50:18


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/

class DeleteNode {
    Node deleteNode(Node head, int x) {
        // If the list is empty or x is less than 1, just return the original head
        if (head == null || x < 1) {
            return head;
        }
        
        // If the head needs to be removed (x == 1)
        if (x == 1) {
            return head.next; // Move head to the next node
        }
        
        // Traverse to the node just before the x-th node
        Node current = head;
        for (int i = 1; i < x - 1 && current != null; i++) {
            current = current.next;
        }

        // If the node to be deleted exists (x was valid)
        if (current != null && current.next != null) {
            current.next = current.next.next; // Bypass the x-th node
        }
        
        // Return the head of the modified list
        return head;
    }
}
```

## Submission at 2024-08-23 05:18:06


```
'''
class node:
    def _init_(self):
        self.data = None
        self.next = None
'''

def getKthNode(head, k):
    # Start from the head node
    current = head
    position = 1  # Start position as 1-based index
    
    # Traverse the list until we reach the kth node or the end of the list
    while current is not None:
        if position == k:
            return current.data
        current = current.next
        position += 1
    
    # If we exit the loop, it means k is out of bounds
    return -1

```

## Submission at 2024-08-27 11:24:07


```
from math import floor

x,n = map(int,input().split())

print(floor(x**n))
```

## Submission at 2024-08-27 11:32:15


```
from math import floor

x,n = map(int,input().split())

def pow(x:int, n:int) -> int:
    if(n == 0):
        return 1
    # Handle negative exponent
    if n < 0:
        x = 1 / x
        n = -n
    
    result = 1
    current_product = x
    
    while n > 0:
        if n % 2 == 1:  # If n is odd
            result *= current_product
        current_product *= current_product
        n //= 2
    
    return result

print(pow(x,n))
```

## Submission at 2024-08-27 11:42:50


```
// write from scratch, create a function named Pow(int x, int n)

```

## Submission at 2024-08-27 11:46:35


```

def myPow(x: int, n: int) -> int:
    if n == 0:
        return 1
    
    # Handle negative exponent
    if n < 0:
        x = 1 // x
        n = -n
    
    result = 1
    current_product = x
    
    while n > 0:
        if n % 2 == 1:  # If n is odd
            result *= current_product
        current_product *= current_product
        n //= 2
    
    return result

x,n = map(int,input().split())
myPow(nx, )

```

## Submission at 2024-08-27 11:47:18


```

def myPow(x: int, n: int) -> int:
    if n == 0:
        return 1
    
    # Handle negative exponent
    if n < 0:
        x = 1 // x
        n = -n
    
    result = 1
    current_product = x
    
    while n > 0:
        if n % 2 == 1:  # If n is odd
            result *= current_product
        current_product *= current_product
        n //= 2
    
    return result

x,n = map(int,input().split())
myPow(n, x)

```

## Submission at 2024-08-27 11:48:15


```

def myPow(x: int, n: int) -> int:
    if n == 0:
        return 1
    
    # Handle negative exponent
    if n < 0:
        x = 1 // x
        n = -n
    
    result = 1
    current_product = x
    
    while n > 0:
        if n % 2 == 1:  # If n is odd
            result *= current_product
        current_product *= current_product
        n //= 2
    
    return result

x,n = map(int,input().split())

print(myPow(n, x))

```

## Submission at 2024-09-02 06:00:41


```

vector<int> diagonalTraversal(vector<vector<int>> v) {
    // Your code here
    int m = v.size();
    int n = v[0].size();
    if(n==1) return v[0];
    vector<int> ans;
    for(int i=0;i<m;i++){
        ans.push_back(v[i][0]);
        int j = 1,k = i-1;
        while(k>=0){
            ans.push_back(v[k][j]);
            j++;
            k--;
        }
    }
    for(int j=1;j<n;j++){
        ans.push_back(v[m-1][j]);
        int k = m-2, l=j+1;
        while(k>=0 && l<n){
            ans.push_back(v[k][l]);
            l++;
            k--;
        }
    }
    return ans;
}

```

## Submission at 2024-09-02 06:01:35


```

vector<int> diagonalTraversal(vector<vector<int>> v) {
    // Your code here
    int m = v.size();
    int n = v[0].size();
    if(n==1) return v[0];
    vector<int> ans;
    for(int i=0;i<m;i++){
        ans.push_back(v[i][0]);
        int j = 1,k = i-1;
        while(k>=0 && j<n){
            ans.push_back(v[k][j]);
            j++;
            k--;
        }
    }
    for(int j=1;j<n;j++){
        ans.push_back(v[m-1][j]);
        int k = m-2, l=j+1;
        while(k>=0 && l<n){
            ans.push_back(v[k][l]);
            l++;
            k--;
        }
    }
    return ans;
}

```

## Submission at 2024-09-04 05:56:01


```
print("Hello " + input() + "!")
```

## Submission at 2024-09-05 11:00:58


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


Node *removeDuplicates(Node *head) {
    Node *curr = head;

    // Traverse the list
    while (curr != NULL && curr->next != NULL) {
      
        // Check if next value is same as current
        if (curr->data == curr->next->data) {
            Node *next_next = curr->next->next;
            curr->next = next_next;
        }
        else
            curr = curr->next;
    }
    return head;
}

```

## Submission at 2024-09-05 11:03:22


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class RemoveDuplicate
{
    Node removeDuplicate(Node head)
    {
        Node curr = head;

        // Traverse the list
        while (curr != null && curr.next != null) {
          
            // Check if next value is the same as curr
            if (curr.data == curr.next.data) {
                Node nextNext = curr.next.next;
                curr.next = nextNext;
            }
            else {
                curr = curr.next;
            }
        }
        return head;
    }
}
```

## Submission at 2024-09-05 11:04:43


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
    Node *curr = head;

    // Traverse the list
    while (curr != NULL && curr->next != NULL) {
      
        // Check if next value is same as current
        if (curr->data == curr->next->data) {
            Node *next_next = curr->next->next;
            curr->next = next_next;
        }
        else
            curr = curr->next;
    }
    return head;
}

```

## Submission at 2024-09-05 11:05:16


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr = head

    # Traverse the list
    while curr and curr.next:
      
        # Check if next value is the same as curr
        if curr.data == curr.next.data:
            next_next = curr.next.next
            curr.next = next_next
        else:
            curr = curr.next

    return head

```

## Submission at 2024-09-05 11:53:22


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

    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
 
        stack<int> s;
        while (slow != NULL) {
            s.push(slow->data);
            slow = slow->next;
        }
 
        while (head != NULL) {
            int i = s.top();
            s.pop();
        
            if (head->data != i) {
                return false;
            }
 
            head = head->next;
        } 
        return true;
    }
```

## Submission at 2024-09-06 04:56:21


```

/* Structure of class Node is
class Node
{
    int data;
    Node next;

    Node(int d)
    {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) {
        Node temp = head;
        ArrayList<Integer> arr = new ArrayList<>();
        ArrayList<Integer> arr1 = new ArrayList<>();
        while (temp != null) {
            arr.add(temp.data);
            temp = temp.next;
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            arr1.add(arr.get(i));
        }
        if (arr.equals(arr1)) {
            return true;
        } else {
            return false;
        }
    }
}


```

## Submission at 2024-09-06 04:59:30


```

/* Structure of class Node is
class Node
{
    int data;
    Node next;

    Node(int d)
    {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) {
        Node temp = head;
        ArrayList<Integer> arr = new ArrayList<>();
        ArrayList<Integer> arr1 = new ArrayList<>();
        while (temp != null) {
            arr.add(temp.data);
            temp = temp.next;
        }
        for (int i = arr.size() - 1; i >= 0; i--) {
            arr1.add(arr.get(i));
        }
        if (arr.equals(arr1)) {
            return true;
        } else {
            return false;
        }
    }
}


```

## Submission at 2024-09-06 05:00:23


```

class Solution:
    def isPalindrome(self, head):
        list = []
        
        while head is not None:
            list.append(head.data)
            head = head.next
        
        return list == list[::-1]


```

## Submission at 2024-09-08 08:02:41


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


    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
 
        stack<int> s;
        while (slow != NULL) {
            s.push(slow->data);
            slow = slow->next;
        }
 
        while (head != NULL) {
            int i = s.top();
            s.pop();
        
            if (head->data != i) {
                return false;
            }
 
            head = head->next;
        } 
        return true;
    }
```

## Submission at 2024-09-08 08:20:42


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        dummyNode=Node(-1)
        carr=dummyNode
        carry=0
        
        
        def revs(num1):
            prev=None
            
            num=num1
            while num is not None:
                next1=num.next
                num.next=prev
                prev=num
                
                num=next1
            return prev    
        
        # while num1 or num2 is not None:
        #     if num1:
        #         last=num1.next
        #         num1.next=t1
        #         t1=num1
        #         num1=last
        #     if num2:
        #         last=num2.next
        #         num2.next=t2
        #         t2=num2
        #         num2=last    
        
        t1=revs(num1)
        t2=revs(num2)   
        
        while t1 or t2 is not None:
            sum=carry
            if t1:
                sum=sum+int(t1.data)
            if t2:
                sum=sum+int(t2.data)
            newNode=Node(sum%10)
            carry=sum//10
            carr.next=newNode
            carr=carr.next
            if t1: 
                t1=t1.next
            if t2:
                t2=t2.next
        if carry:
            newNode=Node(carry)
            carr.next=newNode
        dummy1=revs(dummyNode.next)
        return dummy1


```

## Submission at 2024-09-08 08:22:31


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        dummyNode=Node(-1)
        carr=dummyNode
        carry=0
        
        
        def revs(num1):
            prev=None
            
            num=num1
            while num is not None:
                next1=num.next
                num.next=prev
                prev=num
                
                num=next1
            return prev    
        
        # while num1 or num2 is not None:
        #     if num1:
        #         last=num1.next
        #         num1.next=t1
        #         t1=num1
        #         num1=last
        #     if num2:
        #         last=num2.next
        #         num2.next=t2
        #         t2=num2
        #         num2=last    
        
        t1=revs(num1)
        t2=revs(num2)   
        
        while t1 or t2 is not None:
            sum=carry
            if t1:
                sum=sum+int(t1.data)
            if t2:
                sum=sum+int(t2.data)
            newNode=Node(sum%10)
            carry=sum//10
            carr.next=newNode
            carr=carr.next
            if t1: 
                t1=t1.next
            if t2:
                t2=t2.next
        if carry:
            newNode=Node(carry)
            carr.next=newNode
        dummy1=revs(dummyNode.next)
        return dummy1


```

## Submission at 2024-09-08 08:24:01


```


class Solution {
 static Node rev(Node head) {
        Node curr = head;
        Node prev = null;
        while (curr != null) {
            Node next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    static Node addTwoLists(Node num1, Node num2) {
        // Initialize result list
        while(num1.next!=null&&num1.data==0){

        num1=num1.next;

        }

        while(num2.next!=null&&num2.data==0){

        num2=num2.next;

       }

       Node h1=rev(num1);

        Node h2=rev(num2);
        Node result = new Node(0);  // Dummy node to simplify the code
        Node ptr = result;
        int carry = 0;

        // Iterate through both lists
        while (h1 != null || h2 != null) {
            int sum = carry;
            if (h1 != null) {
                sum += h1.data;
                h1 = h1.next;
            }
            if (h2 != null) {
                sum += h2.data;
                h2 = h2.next;
            }

            // Calculate new carry and remainder
            carry = sum / 10;
            sum = sum % 10;

            // Add the sum as a new node to the result list
            ptr.next = new Node(sum);
            ptr = ptr.next;
        }

        // If there's any carry left, add it as a new node
        if (carry > 0) {
            ptr.next = new Node(carry);
        }

        // Return the next of dummy node which is the actual head of the result list
        return rev(result.next);
    }
}


```

## Submission at 2024-09-08 08:24:49


```



Node* reverse(Node *curr,  Node *prev){
        
        if(curr == NULL){
            return prev;
        }
        
         Node* forward = curr->next;
         curr->next = prev;
        return reverse(forward,curr);
    }
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // code here
         Node *curr1 = num1;
         Node *curr2 = num2;
        curr1 = reverse(curr1,NULL);
        curr2 = reverse(curr2,NULL);
        
        int carry = 0;
        int sum;
         Node *head = new Node(0);
         Node *tail = head;
        while(curr1 != NULL && curr2 != NULL){
            sum = curr1->data+curr2->data+carry;
             Node *newNode = new Node(sum%10);
            tail->next = newNode;
            curr1 = curr1->next;
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        while(curr1 != NULL){
            sum = curr1->data+carry;
             Node *newNode = new Node(sum%10);
            tail->next = newNode;
            curr1 = curr1->next;
            tail = tail->next;
            carry =sum/10;
        }
        
        while(curr2 != NULL){
            sum = curr2->data + carry;
             Node *newNode= new Node(sum%10);
            tail->next = newNode;
            curr2 = curr2->next;
            tail = tail->next;
            carry = sum/10;
        }
        
        while(carry){
             Node* newNode = new Node(carry%10);
            tail->next = newNode;
            tail = tail->next;
            carry = carry/10;
        }
        head = reverse(head->next,NULL);
        
        //for trailing zero(0)
        while(head->data == 0 && head->next != NULL){
            head = head->next;
        }
        return head;
    }
    

```

## Submission at 2024-09-08 08:25:41


```
 Node* reverse(Node* head){
        Node * prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int value){
        Node* temp = new Node(value);
        
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
     struct Node* add(struct Node* num1, struct Node* num2){
         int carry = 0;
         
         Node* anshead = NULL;
         Node* anstail = NULL;
         while(num1 != NULL || num2 != NULL || carry !=0){
             
             int val1 = 0;
             if(num1 != NULL){
                 val1 = num1->data;
                 num1 = num1->next;
             }
             int val2 = 0;
             if(num2 != NULL){
                 val2 = num2->data;
                 num2 = num2->next;
             }
             int sum = carry + val1 + val2;
             
             int digits = sum%10;
             
             insertAtTail(anshead, anstail, digits);
             
             carry = sum/10;
         return anshead;
     }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
        // step 1 reverse 2 ll
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        // step 2 add ll
        Node* ans = add(num1, num2);
        
        // ans = reverse(ans);
        ans = reverse(ans);
        
        while(ans && ans->data == 0)
            ans = ans->next;
        
        return ans ? ans: new Node(0);
    }
```

## Submission at 2024-09-08 08:27:13


```

    Node* reverse(Node* head){
        Node * prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int value){
        Node* temp = new Node(value);
        
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
      Node* add( Node* num1,  Node* num2){
         int carry = 0;
         
         Node* anshead = NULL;
         Node* anstail = NULL;
         while(num1 != NULL || num2 != NULL || carry !=0){
             
             int val1 = 0;
             if(num1 != NULL){
                 val1 = num1->data;
                 num1 = num1->next;
             }
             int val2 = 0;
             if(num2 != NULL){
                 val2 = num2->data;
                 num2 = num2->next;
             }
             int sum = carry + val1 + val2;
             
             int digits = sum%10;
             
             insertAtTail(anshead, anstail, digits);
             
             carry = sum/10;
         return anshead;
     }
      }
    //Function to add two numbers represented by linked list.
    Node* addTwoLists( Node* num1,  Node* num2)
    {
        // step 1 reverse 2 ll
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        // step 2 add ll
        Node* ans = add(num1, num2);
        
        // ans = reverse(ans);
        ans = reverse(ans);
        
        while(ans && ans->data == 0)
            ans = ans->next;
        
        return ans ? ans: new Node(0);
    }

```

## Submission at 2024-09-08 08:28:37


```

    Node* reverse(Node* head){
        Node * prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int value){
        Node* temp = new Node(value);
        
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
      Node* add( Node* num1,  Node* num2){
         int carry = 0;
         
         Node* anshead = NULL;
         Node* anstail = NULL;
         while(num1 != NULL || num2 != NULL || carry !=0){
             
             int val1 = 0;
             if(num1 != NULL){
                 val1 = num1->data;
                 num1 = num1->next;
             }
             int val2 = 0;
             if(num2 != NULL){
                 val2 = num2->data;
                 num2 = num2->next;
             }
             int sum = carry + val1 + val2;
             
             int digits = sum%10;
             
             insertAtTail(anshead, anstail, digits);
             
             carry = sum/10;
         return anshead;
     }
      }
    //Function to add two numbers represented by linked list.
    Node* addTwoLists( Node* num1,  Node* num2)
    {
        // step 1 reverse 2 ll
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        // step 2 add ll
        Node* ans = add(num1, num2);
        
        // ans = reverse(ans);
        ans = reverse(ans);
        
        while(ans && ans->data == 0)
            ans = ans->next;
        
        return ans ? ans: new Node(0);
    }

```

## Submission at 2024-09-08 08:29:11


```




    Node* reverse(Node* head){
        Node * prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void insertAtTail(struct Node* &head, struct Node* &tail, int value){
        Node* temp = new Node(value);
        
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    
      Node* add( Node* num1,  Node* num2){
         int carry = 0;
         
         Node* anshead = NULL;
         Node* anstail = NULL;
         while(num1 != NULL || num2 != NULL || carry !=0){
             
             int val1 = 0;
             if(num1 != NULL){
                 val1 = num1->data;
                 num1 = num1->next;
             }
             int val2 = 0;
             if(num2 != NULL){
                 val2 = num2->data;
                 num2 = num2->next;
             }
             int sum = carry + val1 + val2;
             
             int digits = sum%10;
             
             insertAtTail(anshead, anstail, digits);
             
             carry = sum/10;
         return anshead;
     }
      }
    //Function to add two numbers represented by linked list.
    Node* addTwoLists( Node* num1,  Node* num2)
    {
        // step 1 reverse 2 ll
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        // step 2 add ll
        Node* ans = add(num1, num2);
        
        // ans = reverse(ans);
        ans = reverse(ans);
        
        while(ans && ans->data == 0)
            ans = ans->next;
        
        return ans ? ans: new Node(0);
    }

```

## Submission at 2024-09-09 06:36:11


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


    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
 
        stack<int> s;
        while (slow != NULL) {
            s.push(slow->data);
            slow = slow->next;
        }
 
        while (head != NULL) {
            int i = s.top();
            s.pop();
        
            if (head->data != i) {
                return false;
            }
 
            head = head->next;
        } 
        return true;
    }
```

## Submission at 2024-09-09 06:39:06


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
    string ans = "";
    Node* temp = head;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    string j = ans;
    reverse(ans.begin(),ans.end());
    return ans==j;
}
```

## Submission at 2024-09-13 06:04:31


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
    return isPal(s, i+1);
}

int main(){
    string s;
    cin>>s;

    if (isPal(s,0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
```

## Submission at 2024-09-16 10:24:09


```
def cnt_freq(m,n):
    
    if m//10==0:
        return 0
    elif m%10==n:
        
        
        return 1 + cnt_freq(m//10,n)
    else:
        return cnt_freq(m//10,n)

m,n=map(int,input().split(" "))
print(cnt_freq(m,n))
```

## Submission at 2024-09-16 10:28:44


```
def cnt_freq(m,n):
    
    if m//10==0:
        return 0
    elif m//10==n:
        return 1
    elif m%10==n:
        
        return 1 + cnt_freq(m//10,n)
    else:
        return cnt_freq(m//10,n)

m,n=map(int,input().split(" "))
print(cnt_freq(m,n))
```

## Submission at 2024-09-16 10:30:10


```
def cnt_freq(m,n):
    
    if m==0:
        return 0
    elif m%10==n:
        return 1 + cnt_freq(m//10,n)
    else:
        return cnt_freq(m//10,n)

m,n=map(int,input().split(" "))
print(cnt_freq(m,n))
```

## Submission at 2024-10-01 10:39:32


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n/=10;
    }
    if(sum % 3 == 0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}
```

## Submission at 2024-10-01 10:40:25


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    long long sum = 0;
    while(n != 0){
        sum += n%10;
        n/=10;
    }
    if(sum % 3 == 0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}
```

## Submission at 2024-10-01 10:43:25


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    if(n%3 == 0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    return 0;
}
```

## Submission at 2024-10-01 10:48:31


```
x = int(input())
xc = x
cnt = 0

while(x%3 == 0):
    x//=3
    cnt += 1
print(3**cnt)
print("True" if (3**cnt)==xc else "False")
```

## Submission at 2024-10-01 10:48:49


```
x = int(input())
xc = x
cnt = 0

while(x%3 == 0):
    x//=3
    cnt += 1

print("True" if (3**cnt)==xc else "False")
```

## Submission at 2024-10-01 11:06:22


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    vector<vector<int>> answer = matrix;
    vector<int> temp(matrix.size(), 0);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            temp[i] = max(temp[i], matrix[j][i]);
        }
    }
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            if(answer[j][i] == -1){
                answer[j][i] = temp[i];
            }
        }
    }
    return answer;
};

// 00 01 02
// 10 11 12
// 20 21 22
```

## Submission at 2024-10-01 11:13:32


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    vector<vector<int>> answer = matrix;
    vector<int> temp(matrix[0].size(), INT_MIN);
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            temp[i] = max(temp[i], matrix[j][i]);
        }
    }
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            if(answer[j][i] == -1){
                answer[j][i] = temp[i];
            }
        }
    }
    return answer;
};

// 00 01 02
// 10 11 12
// 20 21 22
```

## Submission at 2024-10-01 11:17:51


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    vector<vector<int>> answer = matrix;
    vector<int> temp(matrix[0].size(), INT_MIN);
    for(int i=0;i<matrix[0].size();i++){
        for(int j=0;j<matrix.size();j++){
            temp[i] = max(temp[i], matrix[j][i]);
        }
    }
    for(int i=0;i<answer[0].size();i++){
        for(int j=0;j<answer.size();j++){
            if(answer[j][i] == -1){
                answer[j][i] = temp[i];
            }
        }
    }
    return answer;
};

// 00 01 02
// 10 11 12
// 20 21 22
```

## Submission at 2024-10-03 08:44:46


```
symbols = ['+', '-', '*', '^', '/']

def getPostfix(s: str) -> str:
    ops = []
    ns = ""
    for i in s:
        if(i in symbols):
            ops.append(i)
        else:
            ns+=i
            if(len(ops)):
                op = ops.pop()
                ns+=op
    

    return ns

print(getPostfix(input()))




```

## Submission at 2024-10-03 14:51:50


```
def timeRequiredToBuy(tickets, k):
    total_time = 0
    for i in range(len(tickets)):
        if i <= k:
            total_time += min(tickets[i], tickets[k])
        else:
            total_time += min(tickets[i], tickets[k] - 1)
    return total_time

n = int(input())
l = list(map(int,input().split()))
k = int(input())

print(timeRequiredToBuy(l, k))
```

## Submission at 2024-10-07 04:21:53


```
num = int(input())
ns = []
for i in str(num):
    ns.append(int(i))

ns.sort()

print(((10*ns[0]) + ns[-1]) + ((10*ns[1]) + ns[2]))
```

## Submission at 2024-10-07 04:29:50


```
# include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m, x, y, k, a, b, c, d = 1e9+7, g;
    string s = "", s1, s2;
    bool f1 = true, f2 = true;
    cin >> n >> k;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    int lo = 0, hi = n;
    while(lo < hi){
        m = (lo+hi)/2;
        c = (m*(m+1))/2 - (n-m);
        if(c > k){
            hi = m;
        }else if(c < k){
            lo = m+1;
        }else{
            cout << n-m << endl;
            break;
        }
    }
    return 0;
}
```

## Submission at 2024-10-07 04:32:06


```
# include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m, x, y, k, a, b, c, d = 1e9+7, g;
    string s = "", s1, s2;
    bool f1 = true, f2 = true;
    cin >> n >> k;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    int lo = 0, hi = n;
    while(lo < hi){
        m = (lo+hi)/2;
        c = (m*(m+1))/2 - (n-m);
        if(c > k){
            hi = m;
        }else if(c < k){
            lo = m+1;
        }else{
            cout << n-m << endl;
            break;
        }
    }
    return 0;
}
```

## Submission at 2024-10-07 04:38:19


```
#include <iostream>
#include <cmath>

int main() {
    long long n, k;
    std::cin >> n >> k;
    long long l = -1, r = n + 1;
    while (r - l > 1) {
        long long m = (l + r) / 2;
        if ((n - m) * (n - m + 1) / 2 - m > k)
            l = m;
        else
            r = m;
    }
    std::cout << r;
    return 0;
}
```

## Submission at 2024-10-07 04:38:38


```
# include <bits/stdc++.h>
using namespace std;

int main() {
        int n, m, x, y, k, a, b, c, d = 1e9+7, g;
    string s = "", s1, s2;
    bool f1 = true, f2 = true;
    cin >> n >> k;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    int lo = 0, hi = n;
    while(lo < hi){
        m = (lo+hi)/2;
        c = (m*(m+1))/2 - (n-m);
        if(c > k){
            hi = m;
        }else if(c < k){
            lo = m+1;
        }else{
            cout << n-m << endl;
            break;
        }
    }
    return 0;
}
```

## Submission at 2024-10-07 05:46:52


```
from collections import deque # Don't touch this line

def rev(q):
    return deque(reversed(q))
```

## Submission at 2024-10-07 06:02:47


```
#include <iostream>
#include <cmath>

int main() {
    long long n, k;
    std::cin >> n >> k;
    long long l = -1, r = n + 1;
    while (r - l > 1) {
        long long m = (l + r) / 2;
        if ((n - m) * (n - m + 1) / 2 - m > k)
            l = m;
        else
            r = m;
    }
    std::cout << r;
    return 0;
}
```

## Submission at 2024-10-07 10:07:11


```
class ReverseQueue {
    // Function to reverse the queue
    public Queue<Integer> rev(Queue<Integer> q) {
        // Base case: if the queue is empty, return
        if (q.isEmpty()) {
            return q;
        }

        // Get the front element of the queue
        int front = q.poll();

        // Recur to reverse the remaining queue
        rev(q);

        // Add the front element to the back of the queue
        q.add(front);

        return q;
    }
}

```

## Submission at 2024-10-21 10:05:38


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    return q;
}

```

## Submission at 2024-10-21 10:10:50


```
print("Hello " + input() + "!")
```

## Submission at 2024-10-21 10:25:46


```
print('+'.join(reversed(list(map(str,input().split('+'))))))
```

## Submission at 2024-10-23 10:49:33


```
class Solution {
   static Node reverse(Node head){
       Node curr=head;
       Node prev=null;
       Node nex=null;
       while(curr!=null){
           nex=curr.next;
           curr.next=prev;
           prev=curr;
           curr=nex;
       }
       return prev;
   }
    static Node addTwoLists(Node num1, Node num2) {
        num1=reverse(num1);
        num2=reverse(num2);
        Node result= new Node(0);
        Node ptr=result;
        int carry=0;
        while(num1!=null || num2!=null || carry!=0){
           int sum=carry;
           if(num1!=null){
               sum+=num1.data;
               num1=num1.next;

}
           if(num2!=null){
               sum+=num2.data;
               num2=num2.next;
           }
           carry=sum/10;
           sum=sum%10;
           ptr.next=new Node(sum);
           ptr=ptr.next;
        }
        if(carry==1) ptr.next=new Node(1);
        return reverse(result.next);
    }
}
```

## Submission at 2024-10-23 10:54:16


```
void insertAtTail(int digit, Node* &tail1 ){
        Node* temp= new Node(digit);
        tail1->next= temp;
        tail1= temp;
        
        
    }
    
    Node* addLL(Node* head1, Node* head2){
        int carry= 0;
        Node* curr1= head1;
        Node* curr2= head2;
        Node* temp=new Node(-1);
        Node* tail1= temp;
        while(curr1!=nullptr and curr2!=nullptr){
            int sum=curr1->data+curr2->data+ carry;
            int digit= sum%10;
            insertAtTail(digit, tail1);
            carry= sum/10;
            curr1= curr1->next;
            curr2= curr2->next;
        }
        
       while(curr1!=nullptr){
           int val= curr1->data+carry;
           int digit= val%10;
             insertAtTail(digit, tail1);
             carry= val/10;
             curr1=curr1->next;
             
       }
       while(curr2!=nullptr){
           int val= curr2->data+carry;
           int digit= val%10;
           insertAtTail(digit, tail1);
          carry= val/10;
          curr2= curr2->next;
          
       }
       if(carry!=0){
             insertAtTail(carry, tail1);
       }
       temp= temp->next;
       return temp;
       
        
    }

    Node* reverse(Node* head){
        //revrsing the node
        
        if(head==nullptr){
            return nullptr;
        }
        Node* prev= nullptr;
        Node* forward= nullptr;
        Node* curr= head;
        while(curr!=nullptr){
            forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
        
        
    }
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
       //reverse the linked list
       if(num1==nullptr){
           return num2;
       }
       if(num2==nullptr){
           return num1;
       }
       Node* head1= reverse(num1);
       Node* head2= reverse(num2);
       Node* ans= addLL(head1, head2);
      Node* revAns= reverse(ans);
      return revAns;
       
    }
```

## Submission at 2024-10-23 10:55:58


```
class Solution:
    def reverse(self, root):
        prev = None
        while root:
            temp_next = root.next
            root.next = prev
            prev = root
            root = temp_next
        return prev
    def addTwoLists(self, num1, num2):
        root1 = self.reverse(num1)
        root2 = self.reverse(num2)
        new_list = Node(None)
        dummy_ptr = new_list
        carry = 0
        while((root1 is not None) or (root2 is not None)):
            data_r1 = 0
            data_r2 = 0
            if(root1):
                data_r1 = root1.data
            if(root2):
                data_r2 = root2.data
            curr = data_r1 + data_r2 + carry
            if(curr > 9):
                carry = curr // 10
                curr = curr % 10
            else:
                carry = 0
            new_node = Node(curr)
            dummy_ptr.next = new_node
            dummy_ptr = new_node
            if(root1):
                root1 = root1.next
            if(root2):
                root2 = root2.next
        while (carry > 0):
            curr = carry % 10
            carry = carry // 10
            new_node = Node(curr)
            dummy_ptr.next = new_node
            dummy_ptr = new_node
        new_head = self.reverse(new_list.next)
        #remove starting zeros
        while (new_head and new_head.data == 0):
            new_head = new_head.next
        if(new_head):
            return new_head
        return Node(0)
```

## Submission at 2024-10-23 11:10:44


```
void insertAtTail(int digit, Node* &tail1 ){
        Node* temp= new Node(digit);
        tail1->next= temp;
        tail1= temp;
        
        
    }
    
    Node* addLL(Node* head1, Node* head2){
        int carry= 0;
        Node* curr1= head1;
        Node* curr2= head2;
        Node* temp=new Node(-1);
        Node* tail1= temp;
        while(curr1!=nullptr and curr2!=nullptr){
            int sum=curr1->data+curr2->data+ carry;
            int digit= sum%10;
            insertAtTail(digit, tail1);
            carry= sum/10;
            curr1= curr1->next;
            curr2= curr2->next;
        }
        
       while(curr1!=nullptr){
           int val= curr1->data+carry;
           int digit= val%10;
             insertAtTail(digit, tail1);
             carry= val/10;
             curr1=curr1->next;
             
       }
       while(curr2!=nullptr){
           int val= curr2->data+carry;
           int digit= val%10;
           insertAtTail(digit, tail1);
          carry= val/10;
          curr2= curr2->next;
          
       }
       if(carry!=0){
             insertAtTail(carry, tail1);
       }
       temp= temp->next;
       return temp;
       
        
    }

    Node* reverse(Node* head){
        //revrsing the node
        
        if(head==nullptr){
            return nullptr;
        }
        Node* prev= nullptr;
        Node* forward= nullptr;
        Node* curr= head;
        while(curr!=nullptr){
            forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
        
        
    }
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
       //reverse the linked list
       if(num1==nullptr){
           return num2;
       }
       if(num2==nullptr){
           return num1;
       }
       Node* head1= reverse(num1);
       Node* head2= reverse(num2);
       Node* ans= addLL(head1, head2);
      Node* revAns= reverse(ans);
      return revAns;
       
    }
```

## Submission at 2024-10-23 11:11:25


```
class Solution {
   static Node reverse(Node head){
       Node curr=head;
       Node prev=null;
       Node nex=null;
       while(curr!=null){
           nex=curr.next;
           curr.next=prev;
           prev=curr;
           curr=nex;
       }
       return prev;
   }
    static Node addTwoLists(Node num1, Node num2) {
        num1=reverse(num1);
        num2=reverse(num2);
        Node result= new Node(0);
        Node ptr=result;
        int carry=0;
        while(num1!=null || num2!=null || carry!=0){
           int sum=carry;
           if(num1!=null){
               sum+=num1.data;
               num1=num1.next;

}
           if(num2!=null){
               sum+=num2.data;
               num2=num2.next;
           }
           carry=sum/10;
           sum=sum%10;
           ptr.next=new Node(sum);
           ptr=ptr.next;
        }
        if(carry==1) ptr.next=new Node(1);
        return reverse(result.next);
    }
}
```

## Submission at 2024-10-23 11:11:45


```
class Solution:
    def reverse(self, root):
        prev = None
        while root:
            temp_next = root.next
            root.next = prev
            prev = root
            root = temp_next
        return prev
    def addTwoLists(self, num1, num2):
        root1 = self.reverse(num1)
        root2 = self.reverse(num2)
        new_list = Node(None)
        dummy_ptr = new_list
        carry = 0
        while((root1 is not None) or (root2 is not None)):
            data_r1 = 0
            data_r2 = 0
            if(root1):
                data_r1 = root1.data
            if(root2):
                data_r2 = root2.data
            curr = data_r1 + data_r2 + carry
            if(curr > 9):
                carry = curr // 10
                curr = curr % 10
            else:
                carry = 0
            new_node = Node(curr)
            dummy_ptr.next = new_node
            dummy_ptr = new_node
            if(root1):
                root1 = root1.next
            if(root2):
                root2 = root2.next
        while (carry > 0):
            curr = carry % 10
            carry = carry // 10
            new_node = Node(curr)
            dummy_ptr.next = new_node
            dummy_ptr = new_node
        new_head = self.reverse(new_list.next)
        #remove starting zeros
        while (new_head and new_head.data == 0):
            new_head = new_head.next
        if(new_head):
            return new_head
        return Node(0)
```

## Submission at 2024-10-23 12:15:46


```
class Solution {
    public static int findMax(Node root) {
        if (root == null) return Integer.MIN_VALUE;
        int max = root.data;
        int leftMax = findMax(root.left);
        int rightMax = findMax(root.right);
        
        if (leftMax > max) max = leftMax;
        if (rightMax > max) max = rightMax;
        
        return max;
    }

    public static int findMin(Node root) {
        if (root == null) return Integer.MAX_VALUE;
        int min = root.data;
        int leftMin = findMin(root.left);
        int rightMin = findMin(root.right);
        
        if (leftMin < min) min = leftMin;
        if (rightMin < min) min = rightMin;
        
        return min;
    }
}
```

## Submission at 2024-10-23 12:16:14


```
class Solution {
    public static int findMax(Node root) {
        if (root == null) return Integer.MIN_VALUE;
        int max = root.data;
        int leftMax = findMax(root.left);
        int rightMax = findMax(root.right);
        
        if (leftMax > max) max = leftMax;
        if (rightMax > max) max = rightMax;
        
        return max;
    }

    public static int findMin(Node root) {
        if (root == null) return Integer.MAX_VALUE;
        int min = root.data;
        int leftMin = findMin(root.left);
        int rightMin = findMin(root.right);
        
        if (leftMin < min) min = leftMin;
        if (rightMin < min) min = rightMin;
        
        return min;
    }
}
```

## Submission at 2024-10-23 12:16:44


```
void maxhelper(Node* root, int &ans){
        if(!root) return;
        
        if(ans < root->data){
            ans = root->data;
        }
        
        maxhelper(root->left, ans);
        maxhelper(root->right, ans);
        return ;
    }
    void minhelper(Node* root, int &ans){
        if(!root) return;
        
        if(ans > root->data){
            ans = root->data;
        }
        
        minhelper(root->left, ans);
        minhelper(root->right, ans);
        return ;
    }
    int findMax(Node *root)
    {
        //code here
        int ans = root->data;
        maxhelper(root, ans);
        return ans;
        
    }
    int findMin(Node *root)
    {
        //code here
        int ans = root->data;
        minhelper(root, ans);
        return ans;
        
    }
```

## Submission at 2024-10-23 12:16:49


```
void maxhelper(Node* root, int &ans){
        if(!root) return;
        
        if(ans < root->data){
            ans = root->data;
        }
        
        maxhelper(root->left, ans);
        maxhelper(root->right, ans);
        return ;
    }
    void minhelper(Node* root, int &ans){
        if(!root) return;
        
        if(ans > root->data){
            ans = root->data;
        }
        
        minhelper(root->left, ans);
        minhelper(root->right, ans);
        return ;
    }
    int findMax(Node *root)
    {
        //code here
        int ans = root->data;
        maxhelper(root, ans);
        return ans;
        
    }
    int findMin(Node *root)
    {
        //code here
        int ans = root->data;
        minhelper(root, ans);
        return ans;
        
    }
```

## Submission at 2024-10-23 12:17:43


```
class Solution:
    def search(self):
        mx = self.findMax(self,root)
        mi = self.findMin(self, root)
        return [mx , mi]
        
    def findMax(self,root):
        if root == None:
            return -1
        curr = root
        while curr.right:
            curr = curr.right
        return curr.data
    def findMin(self,root):
        if root== None:
            return -1
        curr = root
        while curr.left:
            curr = curr.left
        return curr.data
        #code here
```

## Submission at 2024-10-23 12:17:46


```
class Solution:
    def search(self):
        mx = self.findMax(self,root)
        mi = self.findMin(self, root)
        return [mx , mi]
        
    def findMax(self,root):
        if root == None:
            return -1
        curr = root
        while curr.right:
            curr = curr.right
        return curr.data
    def findMin(self,root):
        if root== None:
            return -1
        curr = root
        while curr.left:
            curr = curr.left
        return curr.data
        #code here
```

## Submission at 2024-10-23 12:22:36


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMax(self,root):
        mx = root.data
        st = [root]

        while(st):
            ele = st.pop()
            mx = max(mx, ele.data)

            if(ele.left):
                st.append(ele.left)
            if(ele.right):
                st.append(ele.right)
    

        return mx
```

## Submission at 2024-10-23 12:23:07


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        mx = root.data
        st = [root]

        while(st):
            ele = st.pop()
            mx = min(mx, ele.data)

            if(ele.left):
                st.append(ele.left)
            if(ele.right):
                st.append(ele.right)
    

        return mx
```

## Submission at 2024-10-23 12:34:17


```
// write code from scratch
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    map<int, int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]] >= k){
            cout<<a[i]<<endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
```

## Submission at 2024-10-23 12:35:55


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] a = new int[n];
        HashMap<Integer, Integer> mp = new HashMap<>();

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
            mp.put(a[i], mp.getOrDefault(a[i], 0) + 1);

            if (mp.get(a[i]) >= k) {
                System.out.println(a[i]);
                return;
            }
        }

        System.out.println(-1);
    }
}

```

## Submission at 2024-10-23 12:36:08


```
n, k = map(int, input().split())
a = list(map(int, input().split()))
mp = {}

for i in range(n):
    mp[a[i]] = mp.get(a[i], 0) + 1

    if mp[a[i]] >= k:
        print(a[i])
        break
else:
    print(-1)

```

## Submission at 2024-10-28 03:59:16


```
import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of candies (N)
        int n = scanner.nextInt();
        int[] candyType = new int[n];

        // Read the types of candies
        for (int i = 0; i < n; i++) {
            candyType[i] = scanner.nextInt();
        }

        // Calculate the maximum different types Alice can eat
        System.out.println(maxDifferentCandyTypes(candyType, n));
    }

    public static int maxDifferentCandyTypes(int[] candyType, int n) {
        // Use a HashSet to track unique candy types
        HashSet<Integer> uniqueTypes = new HashSet<>();
        for (int type : candyType) {
            uniqueTypes.add(type);
        }

        // Alice can eat at most n/2 candies, so we take the minimum
        return Math.min(uniqueTypes.size(), n / 2);
    }
}

```

## Submission at 2024-10-28 03:59:42


```
def max_different_candy_types(n, candy_type):
    # Use a set to get unique types of candies
    unique_types = set(candy_type)
    
    # Alice can eat at most n/2 candies, so return the minimum of unique types and n/2
    return min(len(unique_types), n // 2)

# Input
n = int(input())
candy_type = list(map(int, input().split()))

# Output the result
print(max_different_candy_types(n, candy_type))

```

## Submission at 2024-10-28 04:04:11


```
class Tree
{
    // Function to return the maximum depth of the binary tree.
    Integer maxDepth(Node root)
    {
        // Base case: If the root is null, return depth as 0.
        if (root == null) {
            return 0;
        }

        // Recursively find the maximum depth of the left and right subtrees.
        int leftDepth = maxDepth(root.left);
        int rightDepth = maxDepth(root.right);

        // Return the larger depth plus one for the current node.
        return Math.max(leftDepth, rightDepth) + 1;
    }
}

```

## Submission at 2024-10-28 04:05:08


```
# Function to return the maximum depth of the binary tree.
def maxDepth(root):
    # Base case: If the root is None, return depth as 0.
    if root is None:
        return 0

    # Recursively find the maximum depth of the left and right subtrees.
    left_depth = maxDepth(root.left)
    right_depth = maxDepth(root.right)

    # Return the larger depth plus one for the current node.
    return max(left_depth, right_depth) + 1

```

## Submission at 2024-10-28 04:06:53


```
class Tree
{
    // Function to return the maximum depth of the binary tree.
    Integer maxDepth(Node root)
    {
        // Base case: If the root is null, return depth as 0.
        if (root == null) {
            return 0;
        }

        // Recursively find the maximum depth of the left and right subtrees.
        int leftDepth = maxDepth(root.left);
        int rightDepth = maxDepth(root.right);

        // Return the larger depth plus one for the current node.
        return Math.max(leftDepth, rightDepth) + 1;
    }
}

```

## Submission at 2024-10-28 08:44:40


```
import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of candies (N)
        int n = scanner.nextInt();
        int[] candyType = new int[n];

        // Read the types of candies
        for (int i = 0; i < n; i++) {
            candyType[i] = scanner.nextInt();
        }

        // Calculate the maximum different types Alice can eat
        System.out.println(maxDifferentCandyTypes(candyType, n));
    }

    public static int maxDifferentCandyTypes(int[] candyType, int n) {
        // Use a HashSet to track unique candy types
        HashSet<Integer> uniqueTypes = new HashSet<>();
        for (int type : candyType) {
            uniqueTypes.add(type);
        }

        // Alice can eat at most n/2 candies, so we take the minimum
        return Math.min(uniqueTypes.size(), n / 2);
    }
}
```

## Submission at 2024-10-28 08:58:33


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def treePathSum(root):
  sm = 0

  def trav(node, base):
    nonlocal sm
    if(node == None):
      return

    if(node.left == None and node.right == None):
      sm += int(base + str(node.data))
      return
    
    trav(node.left, base + str(node.data))
    trav(node.right, base + str(node.data))
  
  trav(root, "")
   
  return sm

```

## Submission at 2024-10-28 09:02:43


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

def treePathSum(root):
  sm = 0

  def trav(node, base):
    nonlocal sm
    if(node == None):
      return

    if(node.left == None and node.right == None):
      sm += base*10 + node.data
      return
    
    trav(node.left, base*10 + node.data)
    trav(node.right, base*10 + node.data)
  
  trav(root, 0)
   
  return sm

```

## Submission at 2024-11-17 04:53:45


```
// Write your C++ code here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    char a[20];

    cin>>n;

    for(int i = 0; i< n; i++){
        cin>>a;
        cout<<"Hello "<<a;
    }

    return 0;


}
```

## Submission at 2024-11-17 05:36:42


```
# write code from scratch
ransom = input()
mag = input()

hmap = {}

for letter in ransom:
    hmap[letter] = hmap.get(letter,0) + 1
for key, value in hmap.items():
    for let in mag:
        if let == key:
            value -= 1
    if value >= 1:
        print("false")
    else:
        print("true")                
    


```

## Submission at 2024-11-17 05:38:15


```
# write code from scratch
ransom = input()
mag = input()

hmap = {}

for letter in ransom:
    hmap[letter] = hmap.get(letter,0) + 1
for key, value in hmap.items():
    for let in mag:
        if let == key:
            value -= 1
    if value >= 1:
        print("false")
        break
    else:
        print("true")                
    


```

## Submission at 2024-11-17 05:41:21


```
# write code from scratch
ransom = input()
mag = input()

hmap = {}
flag = True
for letter in ransom:
    hmap[letter] = hmap.get(letter,0) + 1
for key, value in hmap.items():
    for let in mag:
        if let == key:
            value -= 1
    if value >= 1:
        flag = False
        break
if flag:
    print("true")
else:
    print("false")               
               
    


```

## Submission at 2024-11-17 06:22:09


```
#include<bits/stdc++.h>
using namespace std;
int atk(vector<int>&result,int n,int k){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[result[i]]++;
        if(mp[result[i]]==k){
            return result[i];
        }
    }
    return -1;
}
int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>result(n);
    for(int i=0;i<n;i++){
        cin>>result[i];

    }
    int ans=atk(result,n,k);
    cout<<ans;

}
```

## Submission at 2024-11-17 06:36:43


```
r = str(input())
m = str(input())

hm2={}
isTrue= True
for i,a in enumerate(m):
    hm2[a] = hm2.get(a,0) +1

for j in r:
    if j in hm2.values():
        hm2[j] -=1
    else:
        isTrue= False
        break

if isTrue:
    print("true")
else:
    print("false")


```

## Submission at 2024-11-17 06:38:32


```
r = str(input())
m = str(input())

hm2={}
isTrue= True
for i,a in enumerate(m):
    hm2[a] = hm2.get(a,0) +1

for j in r:
    if j in hm2:
        hm2[j] -=1
    else:
        isTrue= False
        break

if isTrue:
    print("true")
else:
    print("false")


```

## Submission at 2024-11-18 10:30:26


```
from collections import deque # Don't touch this line
def rev(q):
    # Write your code 
    n = len(q)
    if n<= 1:
        return q
    while n>1:
        i =0
        q[n-1] = q[i]
        i=+ 1
        return q

```

## Submission at 2024-11-18 10:38:43


```
from collections import deque # Don't touch this line
def rev(q):
    return deque(reversed(q))

```

## Submission at 2024-11-19 10:20:16


```
# write code from scratch

magazine=input()
ransomenote=input()
if(ransomenote==magazine):
    print("true")
else:
    print("false")

```

## Submission at 2024-11-19 11:35:34


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    vector<int> v;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n ;i++){
        int j = 0;
        int k = i;
        while(k >= 0 && j < m){
            v.push_back(matrix[k][j]);
            k--;
            j++;
            // cout << matrix[i][j] << " ";
        }
    }
    for(int i = 1; i < m; i++){
        int k = i;
        int j = n - 1;
        while(k < m && j >=0){
            v.push_back(matrix[j][k]);
            k++;
            j--;
        }
    }
    return v;
}

```

## Submission at 2024-11-20 08:28:53


```
print("Hello " + input() + "!")

```

## Submission at 2024-11-21 09:44:36


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
        Node *ptr1 = head1, *ptr2 = head2;

    // Traverse both lists; when one reaches the end, switch to the other
    while (ptr1 != ptr2) {
        ptr1 = ptr1 ? ptr1->next : head2;
        ptr2 = ptr2 ? ptr2->next : head1;
    }
    return ptr1; // Returns the intersection node or nullptr if no intersection
}



```

## Submission at 2024-11-21 09:47:41


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
            Node ptr1 = head1, ptr2 = head2;

    // Traverse both lists; when one reaches the end, switch to the other
    while (ptr1 != ptr2) {
        ptr1 = (ptr1 != null) ? ptr1.next : head2;
        ptr2 = (ptr2 != null) ? ptr2.next : head1;
    }
    return ptr1; // Returns the intersection node or null if no intersection
    }
}



```

## Submission at 2024-11-21 09:50:07


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        ptr1, ptr2 = head1, head2

        # Traverse both lists; when one reaches the end, switch to the other
        while ptr1 != ptr2:
            ptr1 = ptr1.next if ptr1 else head2
            ptr2 = ptr2.next if ptr2 else head1

        return ptr1  # Returns the intersection node or None if no intersection




```

## Submission at 2024-11-21 09:52:06


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        ptr1, ptr2 = head1, head2

        # Traverse both lists; when one reaches the end, switch to the other
        while ptr1 != ptr2:
            ptr1 = ptr1.next if ptr1 else head2
            ptr2 = ptr2.next if ptr2 else head1

        return ptr1  # Returns the intersection node or None if no intersection




```

## Submission at 2024-11-21 09:54:28


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
      ptr1, ptr2 = head1, head2

      # Traverse both lists; when one reaches the end, switch to the other
      while ptr1 != ptr2:
          ptr1 = ptr1.next if ptr1 else head2
          ptr2 = ptr2.next if ptr2 else head1

      return ptr1  # Returns the intersection node or None if no intersection




```

## Submission at 2024-11-21 09:55:51


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
      ptr1, ptr2 = head1, head2

      # Traverse both lists; when one reaches the end, switch to the other
      while ptr1 != ptr2:
          ptr1 = ptr1.next if ptr1 else head2
          ptr2 = ptr2.next if ptr2 else head1

      return ptr1  # Returns the intersection node or None if no intersection

      


```

## Submission at 2024-11-21 10:07:54


```


/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
    Node intersectPoint(Node head1, Node head2) {
        // Get the lengths of both linked lists
        int len1 = getLength(head1);
        int len2 = getLength(head2);

        // Align the starting points of both lists
        if (len1 > len2) {
            head1 = moveAheadBy(head1, len1 - len2);
        } else {
            head2 = moveAheadBy(head2, len2 - len1);
        }

        // Traverse both lists together to find the intersection
        while (head1 != null && head2 != null) {
            if (head1 == head2) {
                return head1; // Intersection point found
            }
            head1 = head1.next;
            head2 = head2.next;
        }

        return null; // No intersection
    }

    // Helper function to get the length of a linked list
    int getLength(Node head) {
        int length = 0;
        while (head != null) {
            length++;
            head = head.next;
        }
        return length;
    }

    // Helper function to move a pointer ahead by 'steps' nodes
    Node moveAheadBy(Node head, int steps) {
        while (steps > 0 && head != null) {
            head = head.next;
            steps--;
        }
        return head;
    }

}



```

## Submission at 2024-11-21 10:15:51


```
class RemoveDuplicate
{
    Node removeDuplicate(Node head)
    {
        // Handle edge case: empty or single-node list
        if (head == null || head.next == null) {
            return head;
        }
        
        // Dummy node to handle changes to the head
        Node dummy = new Node(0);
        dummy.next = head;
        Node prev = dummy;  // Pointer to the last node before duplicates
        Node current = head;

        while (current != null) {
            // Check if the current node is part of a duplicate sequence
            boolean isDuplicate = false;
            while (current.next != null && current.data == current.next.data) {
                isDuplicate = true;
                current = current.next; // Skip duplicate nodes
            }

            if (isDuplicate) {
                // Skip all duplicates by linking `prev` to `current.next`
                prev.next = current.next;
            } else {
                // Move `prev` forward if no duplicates found
                prev = current;
            }

            current = current.next; // Move to the next node
        }
        
        return dummy.next; // Return the modified list starting from the real head
    }
}

```

## Submission at 2024-11-23 05:47:19


```
s = input()
print('a' if s.count('a') > s.count('b') else 'b')
```

## Submission at 2024-11-23 05:57:13


```
def is_arithmetic_progression(n, arr):
    if n <= 2:
        return True  # Any two numbers are in AP
    
    # Calculate the common difference
    common_diff = arr[1] - arr[0]
    
    # Check if all consecutive differences are the same
    for i in range(2, n):
        if arr[i] - arr[i - 1] != common_diff:
            return False
    return True

# Driver Code
if __name__ == "__main__":
    # Input reading
    n = int(input())
    arr = list(map(int, input().split()))
    
    # Output result
    print("true" if is_arithmetic_progression(n, arr) else "false")

```

## Submission at 2024-11-23 06:04:04


```
def print_star_pattern(n):
    for i in range(1, n + 1):
        print("*" * i)

# Driver Code
if __name__ == "__main__":
    # Input reading
    n = int(input())
    
    # Print the star pattern
    print_star_pattern(n)

```

## Submission at 2024-11-23 06:16:30


```
def nextGreatestLetter(letters, target):
    left, right = 0, len(letters) - 1
    
    while left <= right:
        mid = (left + right) // 2
        if letters[mid] > target:
            right = mid - 1
        else:
            left = mid + 1

    # The result is the smallest element greater than target, or the first element (circular array)
    return letters[left % len(letters)]

# Driver Code
if __name__ == "__main__":
    n = int(input())
    letters = input().split()
    target = input()
    print(nextGreatestLetter(letters, target))

```

## Submission at 2024-11-23 06:35:12


```
n = int(input())
l = list(map(int, input().split()))

od, ev = 0,0

for i in l:
    if(i%2):
        od += 1
    else:
        ev += 1

print(od, ev)
```

## Submission at 2024-11-25 08:01:39


```
print("Hello " + input() + "!")
```

