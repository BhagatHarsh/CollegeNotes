## Submission at 2024-08-09 04:55:59


```
# Write your Python code here from the scratch
n=input()
if (len(n)>=1 and len(n)<=100):
    print("Hello "+n+" !")
else:
    print("error.")
```

## Submission at 2024-08-09 04:57:32


```
# Write your Python code here from the scratch
n=input()
if (len(n)>=1 and len(n)<=100):
    print("Hello "+n+"!")
else:
    print("error.")
```

## Submission at 2024-08-09 04:59:10


```
# Write your Python code here from the scratch
n=input()
if (len(n)>=1 and len(n)<=100):
    print("Hello "+n+"!")
else:
    print("error.")
```

## Submission at 2024-08-09 05:05:26


```
# Write your Python code here from the scratch
n=input()
if (len(n)>=1 and len(n)<=100):  
    print("Hello "+n+"!")
else:
    print("error.")
```

## Submission at 2024-08-09 05:24:59


```
# Write your Python code here
a=int(input())
if(a>=1 and a<=100):
    for i in range(0,a):
        b=input()
        if(len(b)>=1 and len(b)<=100):
            print("Hello "+b+"!")
        else:
            print("error.")
else:
    ("you cant do more than 100 names.")
            
```

## Submission at 2024-08-16 04:58:55


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<=1:
        return x
    else:
        return fibonacci(x-1)+fibonacci(x-2)
     

def main():
    x = int(input().strip())
    
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:17:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n%2!=0):
        return "false"
    elif((n%2==0) and  (n/2==1)):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:18:53


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if (n%2!=0):
        return "false"
    elif(n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:22:51


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    a= (-2)**31
    b=2*31 -1
    if (n<a and n>b):
        return "out of constraint"
    elif (n%2!=0):
        return "false"
    elif(n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:23:55


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    a= (-2)**31
    b=2*31 -1
    if (n<a or n>b):
        return "out of constraint"
    elif (n%2!=0):
        return "false"
    elif(n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:24:53


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    a= (-2)**31
    b= (2**31)-1
    if (n<a or n>b):
        return "out of constraint"
    elif (n%2!=0):
        return "false"
    elif(n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:27:03


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    a= (-2)**31
    b= (2**31)-1
    if (n<a or n>b):
        return "out of constraint"
    elif (n%2!=0):
        return "false"
    elif(n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:28:41


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n%2!=0):
        return "false"
    elif(n%2==0 and n/2==1):
        return "true"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:34:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    if (n==1):
        return "true"
    elif(n%2!=0 or n<=0):
        return "false"
    else:
        return is_power_of_two(n/2)
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:18:07


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

## Submission at 2024-08-22 06:17:17


```
#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int>& nums, vector<vector<int>>& result, vector<int>& current, vector<bool>& used) {
    if (current.size() == nums.size()) {
        result.push_back(current); // Store the current permutation
        return;
    }
    for (size_t i = 0; i < nums.size(); ++i) {
        if (used[i]) continue; // Skip used elements
        used[i] = true; // Mark as used
        current.push_back(nums[i]); // Add element to current permutation
        backtrack(nums, result, current, used); // Recur with the updated current
        current.pop_back(); // Remove the last element to backtrack
        used[i] = false; // Mark the element as unused for future permutations
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current; // To build the current permutation
    vector<bool> used(nums.size(), false); // Track used elements
    backtrack(nums, result, current, used);
    return result;
}

int main() {
    vector<int> nums;
    int num;

    
    while (cin >> num) {
        nums.push_back(num);
    }

    

    vector<vector<int>> permutations = permute(nums);

    // Print the permutations in the required format
    cout << "[";
    for (size_t i = 0; i < permutations.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); ++j) {
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

## Submission at 2024-08-22 06:32:59


```
#include <iostream>
#include <vector>

using namespace std;

void backtrack(vector<int>& nums, vector<vector<int>>& result, int index) {
    if (index == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        // Move the current element to the beginning of the remaining elements
        int temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;

        backtrack(nums, result, index + 1);

        // Move the element back to its original position
        temp = nums[index];
        nums[index] = nums[i];
        nums[i] = temp;
    }
}

int main() {
    vector<int> v1;
    int num;

    
    while (cin >> num) {
        v1.push_back(num);
    }

    vector<vector<int>> v2;
    backtrack(v1, v2, 0);

    cout << "[";
    for (size_t i = 0; i < v2.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < v2[i].size(); ++j) {
            cout << v2[i][j];
            if (j < v2[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i < v2.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-22 12:26:46


```
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to generate permutations by swapping elements
void generatePermutations(vector<int>& arr, int start, vector<vector<int>>& v2) {
    if (start >= arr.size()) {
        v2.push_back(arr); // Store the complete permutation in v2
        return;
    }

    for (int i = start; i < arr.size(); ++i) {
        swap(arr[start], arr[i]); // Swap the current element with the start element
        generatePermutations(arr, start + 1, v2); // Recur for the next element
        swap(arr[start], arr[i]); // Backtrack by swapping the elements back
    }
}

int main() {
    string input;
    
    // Read input
    getline(cin, input);
    istringstream iss(input);
    
    vector<int> arr;
    int num;
    
    // Convert input string to vector of integers
    while (iss >> num) {
        arr.push_back(num);
    }
    
    // Vector to store permutations
    vector<vector<int>> v2;
    
    // Generate permutations
    generatePermutations(arr, 0, v2);

    // Sort permutations
    sort(v2.begin(), v2.end());

    // Display the results
    cout << "[";
    for (size_t i = 0; i < v2.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < v2[i].size(); ++j) {
            cout << v2[i][j];
            if (j < v2[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < v2.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-22 12:34:11


```
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

// Helper function to generate permutations by swapping elements
void generatePermutations(vector<int>& arr, int start, vector<vector<int>>& v2) {
    if (start >= arr.size()) {
        v2.push_back(arr); // Store the complete permutation in v2
        return;
    }

    for (int i = start; i < arr.size(); ++i) {
        swap(arr[start], arr[i]); // Swap the current element with the start element
        generatePermutations(arr, start + 1, v2); // Recur for the next element
        swap(arr[start], arr[i]); // Backtrack by swapping the elements back
    }
}

int main() {
    string input;
    
    // Read input
    getline(cin, input);
    istringstream iss(input);
    
    vector<int> arr;
    int num;
    
    // Convert input string to vector of integers
    while (iss >> num) {
        arr.push_back(num);
    }
    
    // Vector to store permutations
    vector<vector<int>> v2;
    
    // Generate permutations
    generatePermutations(arr, 0, v2);

    // Sort permutations
    sort(v2.begin(), v2.end());

    // Display the results
    cout << "[";
    for (size_t i = 0; i < v2.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < v2[i].size(); ++j) {
            cout << v2[i][j];
            if (j < v2[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i < v2.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-22 12:50:26


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void gen(int open, int close, string haha, vector<string>& v1) {
    if (open == 0 && close == 0) {
        v1.push_back(haha); // If no more parentheses to add, store the result
        return;
    }

    if (open > 0) {
        gen(open - 1, close, haha + '(', v1);
    }

    if (close > open) {
        gen(open, close - 1, haha + ')', v1);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> v1;
    gen(n, n, "", v1);
    return v1;
}

int main() {
    int n;
    cin >> n;
    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-22 12:51:45


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void gen(int open, int close, string haha, vector<string>& v1) {
    if (open == 0 && close == 0) {
        v1.push_back(haha);
        return;
    }

    if (open > 0) {
        gen(open - 1, close, haha + '(', v1);
    }

    if (close > open) {
        gen(open, close - 1, haha + ')', v1);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> v1;
    gen(n, n, "", v1);
    return v1;
}

int main() {
    int n;
    cin >> n;
    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-28 03:46:38


```
#include <iostream>
#include <algorithm>
using namespace std;

bool equal(int arr1[], int arr2[], int n1, int n2) {
    if (n1 != n2) {
        return false;
    }
	sort(arr1, arr1 +n1);
    sort(arr2, arr2 +n2);
	for (int i = 0; i < n1; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
	int arr1[n1], arr2[n2];
	for (int i = 0; i < n1; ++i) {
        cin >> arr1[i];
    }
	for (int i = 0; i < n2; ++i) {
        cin >> arr2[i];
    }
	if (equal(arr1, arr2, n1,n2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-28 03:56:55


```
#include<iostream>
using namespace std;

int div(int n){
	int cnt=0;
	for (int i=1; i<=n;i++){
		if (i%3==0 || i%5==0 || i%7==0)
			cnt=cnt+i;
		if ((i%3==0 and i%5==0)||(i%5==0 and i%7==0)||(i%3==0 and i%7==0)||(i%3==0 and i%5==0 and i%7==0))
			continue;

	}
	return cnt;
}


int main(){
	int n;
	int cnt=0;
	cin >> n;
	int ans= div(n);
	cout<< ans;
	return 0;
}
```

## Submission at 2024-08-28 04:19:45


```
#include <iostream>
using namespace std;

int even(int arr[], int n) {
    int n2 = 0;
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int cnt = 0;
        while (temp >= 10) {
        temp /= 10;  
        cnt++;
	}
		if (cnt%2!=0){
            n2++;
        }
    }
    return n2;
}

int main() {
    int n;
    cin >> n;
	int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	int ans= even(arr, n);
    cout<< ans;
	return 0;
}
```

## Submission at 2024-08-29 04:52:03


```
#include <iostream>
using namespace std;

int kth(int arr[], int n, int k) {
    int x=arr[n - 1];
    int arr2[x]; 

    
    for (int i=0; i<x; i++) {
        arr2[i]=i + 1;
    }

    int arr3[x]; 
    int cnt=0;
    int  index=0;

    for (int j=0; j<x; j++) {
        if (index<n && arr[index] == arr2[j]) {
            index++;
        } else {
            arr3[cnt] = arr2[j];
            cnt++;
        }
    }

    return arr3[k - 1];
    
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }

    int ans=kth(arr, n, k);
    cout << ans;

    return 0;
}

```

## Submission at 2024-08-29 04:55:16


```
#include <iostream>
using namespace std;

int kth(int arr[], int n, int k) {
    int cnt = 0; 
    int current = 1;
    int index=0;
    
    while (cnt < k) {
        if (index < n && arr[index] == current) {
            index++;
        } else {
            cnt++;
            if (cnt == k) {
                return current;
            }
        }
        current++;
    }
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = kth(arr, n, k);
    cout << ans;

    return 0;
}

```

## Submission at 2024-08-29 05:00:33


```
#include <iostream>
using namespace std;

int kth(int arr[], int n, int k) {
    int x = arr[n - 1];
    int arr2[x]; 

    for (int i = 0; i < x; i++) {
        arr2[i] = i + 1;
    }

    int arr3[x]; 
    int cnt = 0;
    int index = 0;

    for (int j = 0; j < x; j++) {
        if (index < n && arr[index] == arr2[j]) {
            index++;
        } else {
            arr3[cnt] = arr2[j];
            cnt++;
        }
    }

    if (k > cnt) {
        return -1; 
    }

    return arr3[k - 1];
}

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = kth(arr, n, k);
    cout << ans;

    return 0;
}

```

## Submission at 2024-08-29 05:02:56


```
#include <iostream>
using namespace std;

int tsum(int arr[], int n) {
    while (n > 1) {
        for (int i = 0; i < n - 1; i++) {
            arr[i] = (arr[i] + arr[i + 1]);
        }
        n--;
    }
    return arr[0];
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = tsum(arr, n);
    cout << ans;

    return 0;
}
```

## Submission at 2024-08-29 05:45:26


```
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int arr[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> arr[i][j];
        }
    }

 
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-29 06:16:05


```
#include <iostream>
#include <vector>

using namespace std;

vector<int> spiral(vector<vector<int>>& mat) {
    vector<int> ans;

    int top = 0, bottom = mat.size() - 1;
    int left = 0, right = mat[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> ans= spiral(mat);

    for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
}

    return 0;
}
```

## Submission at 2024-08-30 03:39:26


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
    int i=2;
 
    Node* prev=head;
    Node* curr=head->next;
    while(prev!=NULL){
        if(i==x){
            prev->next=curr->next;
            return head;
        }
        i++;
        prev=curr;
        curr = curr->next;
    }
    return head;
}



```

## Submission at 2024-08-30 03:41:01


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
    if (x== 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int i=2;
 
    Node* prev=head;
    Node* curr=head->next;
    while(prev!=NULL){
        if(i==x){
            prev->next=curr->next;
            return head;
        }
        i++;
        prev=curr;
        curr = curr->next;
    }
    return head;
}



```

## Submission at 2024-08-30 05:07:43


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
    Node* prev=nullptr;
    Node* curr=head;
    Node* next=nullptr;

    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

```

## Submission at 2024-08-30 05:41:34


```
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr1[n];
    int i,j,k;
    for(i=0; i<=n;i++){
        cin>>arr1[i];
    }
    int arr2[n];
    for(j=0; j<=n;j++){
        cin>>arr2[j];
    }
    vector<int> v3;
    
    for(k=0; k<n;k++){
        for(int m=0; m<=n;++m){
            if ((arr1[k]>=arr2[k]) || arr1[k]<=arr2[k])
                v3.push_back(m);
    }}
    
    for(int s=0; s<v3.size();s++){
        cout<<v3[s];
    }
    
    

    return 0;
}


```

## Submission at 2024-08-30 06:27:11


```
#include <iostream>
#include<vector>
#include<algorithm>

vector<int> diagonalTraversal(vector<vector<int>> matrix,int m, int n) {
    for (int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=0;k<=n;k++){
                matrix[i+k][j+k];

            }
        }
    }    
    return matrix;
}


int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> matrix;
    for (int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cin>>matrix[i][j];
        }
    }

    int ans=vector<int> diagonalTraversal(matrix,m,n);
    return ans;
    return 0;
}

```

## Submission at 2024-09-02 03:56:46


```
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n];
    for (int i=0; i<n;i++)
        cin>>arr1[i];
    int arr2[n];
    for (int i=0; i<n;i++)
        cin>>arr2[i];
    int arr3[n];
    for (int i=0;i<n;i++){
        arr3[i]=max(arr1[i],arr2[i]);
    }

    for (int i=0; i<n;i++)
        cout<<arr3[i]<<" ";
    



    return 0;

}
```

## Submission at 2024-09-06 06:13:13


```
#include <iostream>
#include<cstring>
using namespace std;
int main(){
    string name;
    getline(cin, name);
    int n;
    n=name.length();
    char arr1[n];
    strcpy(arr1, name.c_str());
    bool bl; 
    for(int i=0; i<n/2;++i){
        if(arr1[i]!=arr1[n-i-1])
            bool bl=false;
            break;
    }
    if(bl)
        cout<<"YES";
    else
        cout<<"NO"; 
}
```

## Submission at 2024-09-06 06:19:33


```
#include <iostream>
#include<cstring>
using namespace std;
int main(){
    string name;
    getline(cin, name);
    int n;
    n=name.length();
    char arr1[n];
    strcpy(arr1, name.c_str());
    bool bl; 
    for(int i=0; i<n/2;++i){
        if(arr1[i]!=arr1[n-i-1])
            bool bl=false;
            break;
    }
    if(bl)
        cout<<"YES";
    else
        cout<<"NO"; 
}
```

## Submission at 2024-09-12 04:40:21


```

// Complete the given function

vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int m=matrix.size();
    int n=matrix[0].size();
    for (int j = 0; j < n; j++) {
        int colMax = INT_MIN;
        for (int i = 0; i < m; i++) {
            colMax = max(colMax, matrix[i][j]);
        }

        for (int i = 0; i < m; i++) {
            if (matrix[i][j] < 0) {
                matrix[i][j] = colMax;
            }
        }
    }

    return matrix;
};
```

## Submission at 2024-09-12 05:02:55


```
#include <iostream>
using namespace std;

int countFrequency(string s, char x, int index) {
    if (index == s.length()) {
        return 0;
    }
    int count;
	if (s[index] == x) {
    	count = 1;
	} else {
    	count = 0;
}
	return count + countFrequency(s, x, index + 1);
}

int main() {
    string s;
    char x;
    cin >> s >> x;
    int result = countFrequency(s, x, 0);
    cout << result << endl;
    
    return 0;
}

```

## Submission at 2024-09-12 05:05:05


```
#include <iostream>
#include<cstring>
using namespace std;
int main(){
    string name;
    getline(cin, name);
    int n;
    n=name.length();
    char arr1[n];
    strcpy(arr1, name.c_str());
    bool bl; 
    for(int i=0; i<((n-1)/2);++i){
        if(arr1[i]!=arr1[n-i-1])
            bool bl=false;
            break;
    }
    if(bl)
        cout<<"YES";
    else
        cout<<"NO"; 
}
```

## Submission at 2024-09-12 05:23:18


```
#include <iostream>
#include<cstring>
using namespace std;

string fxn(string s, int n, int i){
    if (i>=n/2)
        return "YES";
    
    if(s[i]!=s[n-i-1]){
        return "NO";
    }
    return fxn(s,n,i+1);
    
        
}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    
    cout<<fxn(s,n,0);

    return 0;

}
    
```

## Submission at 2024-09-12 06:27:05


```
#include <iostream>
#include <cmath>
using namespace std;

double Pow(double x, double n){
    if (n==0)
        return 1;
    if (n==1)
        return x;
    if (n < 0) {
        return floor(1.0 / Pow(x, -n)); 
    }
    return x * Pow(x, n - 1);
    }

int main(){
    double x,n;
    cin>>x>>n;
    cout<<Pow(x,n);
    return 0;
}
```

## Submission at 2024-09-12 06:29:29


```
#include <iostream>
#include <cmath>
using namespace std;

double Pow(double x, double n){
    if (n==0)
        return 1;
    if (n==1)
        return x;
    if (n < 0) {
        return 1.0 / Pow(x, -n); 
    }
    return x * Pow(x, n - 1);
    }

int main(){
    double x,n;
    cin>>x>>n;
    cout<<floor(Pow(x,n));
    return 0;
}
```

## Submission at 2024-09-13 03:31:54


```
#include <iostream>
using namespace std;

int even(int arr[], int n) {
    int n2 = 0;
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int cnt = 0;
        while (temp >= 10) {
        temp /= 10;  
        cnt++;
	}
		if (cnt%2!=0){
            n2++;
        }
    }
    return n2;
}

int main() {
    int n;
    cin >> n;
	int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	int ans= even(arr, n);
    cout<< ans;
	return 0;
}
```

## Submission at 2024-10-04 05:15:17


```
#include<iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    vector<char> v1;
    for (int i=0; i<n;i++){
        v1.push_back(s[i]);
    }
    sort(v1.begin(),v1.end());
    vector<char> v2;
    for (int i=0; i<n;i++){
        v2.push_back(t[i]);
    }
    sort(v2.begin(),v2.end());
    for (int i=0; i<n;i++){
        cout<<v2[i];
    }
    for(int j=0; j<n;j++){
        if(v1[j]==v2[j]){
            return true;
        }
        else
            return false;
    }    
    return 0;
}
```

## Submission at 2024-10-04 05:21:36


```
#include<iostream>
#include <string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    if(n%2!=0){
        cout<< "true";
    }
    else
        cout<<"false";

}
```

## Submission at 2024-10-04 05:24:39


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){

    string s,t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    if(n!=m){
        cout<<"false";

    }
    else
        cout<<"true";
}
```

## Submission at 2024-10-04 05:24:40


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){

    string s,t;
    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    if(n!=m){
        cout<<"false";

    }
    else
        cout<<"true";
}
```

## Submission at 2024-10-04 05:57:26


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s;
    if(sum%2!=0){
        s=((sum+1)/2)+1;
        cout<<s;
    }
    else
        cout<<sum;
}
```

## Submission at 2024-10-04 06:03:22


```
// Write code from scratch here
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:10:28


```
// Write C++ Code from scratch
#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<m;
}
```

## Submission at 2024-10-04 06:12:16


```
// Write C++ Code from 
#include<iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<m+1;
}
```

## Submission at 2024-10-04 06:14:06


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:14:13


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:14:18


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:14:21


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:14:24


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:14:31


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=sum-1;
    cout<<s;
}
```

## Submission at 2024-10-04 06:16:38


```
// Write C++ code from scratch
#include<iostream>
using namespace std;

int main(){

    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s;
    if(sum%2!=0){
        s=((sum+1)/2)+1;
        cout<<s;
    }
    else
        cout<<sum;
}
```

## Submission at 2024-10-04 06:27:21


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    vector<int> v1;
    int j=1;
    for(int k=0;k<n;k++){
    while(j<n){
        if(arr[j]>arr[j+k]){
            v1.push_back(k);
            }
        else if(arr[j]<arr[j+k]){
            j++;
        }
    }}
}
```

## Submission at 2024-10-04 06:27:23


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    vector<int> v1;
    int j=1;
    for(int k=0;k<n;k++){
    while(j<n){
        if(arr[j]>arr[j+k]){
            v1.push_back(k);
            }
        else if(arr[j]<arr[j+k]){
            j++;
        }
    }}
}
```

## Submission at 2024-10-25 05:48:14


```
#include<iostream>
using namespace std;

int main(){
    bool x=true;
    if(x){
        cout<<"true";
    }
    return 0;
}
```

## Submission at 2024-10-25 05:57:32


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
vector <int> postOrder(Node* root)
{
  if(!root) return {};
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->val);
  return ans;
}

```

## Submission at 2024-10-25 06:01:18


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
	    if(!root) return true;
        if((root->left!=root->right)&&isSymmetric(root->left)&&isSymmetric(root->right)){
            return false;
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

## Submission at 2024-10-25 06:05:59


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
vector <int> postOrder(Node* root)
{
  if(!root) return {};
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}
```

## Submission at 2024-10-25 06:07:27


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
	    if(!root) return true;
        if((root->left!=root->right)&&isSymmetric(root->left)&&isSymmetric(root->right)){
            return false;
        }
        return true;
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

## Submission at 2024-10-25 06:07:32


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
	    if(!root) return true;
        if((root->left!=root->right)&&isSymmetric(root->left)&&isSymmetric(root->right)){
            return false;
        }
        return true;
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

## Submission at 2024-10-25 06:09:07


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
	    if(!root) return true;
        if((!root->left)||(!root->right)) return false;
        if((root->left!=root->right)&&isSymmetric(root->left)&&isSymmetric(root->right)){
            return false;
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

## Submission at 2024-10-25 06:25:16


```
#include<iostream>
using namespace std;

int main(){
    string pattern;
    getline(cin,pattern);
    string s;
    getline(cin,s);


}
bool wordpattern(string s1; string s2){
    map<char,int> mp;
    for(char i:pattern){
        char c=pattern[i];
        mp[c]++;
    }
    vector<int> temp;
    map<string,int> ms;
    for(char c:s){
        if(c==' '){
            temp[]
        }
        else{
            v.push_back
        }
    }
    string ans;
    string anss;
    for( char s:ans){
        ans+= To_String(mp[s]);
        
    }
    for( char s:anss){
        ans+= To_String(ms[s]);
        
    }

    return ans=anss;


}
```

## Submission at 2024-10-25 06:43:56


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
    vector<int> ans;
    vector<int> v1=sortlist(num1);
    vector<int> v2=sortlist(num2);
    for(int i=0;i<ans.size();i++){
        ans[i]=v1[i]+v2[i];

    }
    
    Node* newhead=new newhead(ans[0]);

    for(int i=0; i<ans.size();i++){
        Node* newnode=new newnode(ans[i]);
        curr->next=newnode;
        curr = newnode;
    }
    return newnode;
}

vector<int> sortlist(Node* head){
    vector<int> v;
    Node* curr=head;
    while(curr!=nullptr){
        v.push_back(curr->val);
        curr=curr->next;
    }
    reverse(v.begin(),v.end());
    return v;
}


```

## Submission at 2024-10-25 06:55:33


```
#include<iostream>
#include<vector>
#include<map>
using namespace std;
                                 
int main(){
    string pattern;
    getline(cin,pattern);
    string s;
    getline(cin,s);
    bool wordpattern(pattern,s);
    return 0;

}
bool wordpattern(string s1, string s2){
    unordered_map<char,int> mp;
    for(char i:pattern){
        char c=pattern[i];
        mp[c]++;
    }
    vector<int> v;
    unordered_map<string,int> ms;
    for(char c:s){
        if(c!=' '){
            v.push_back(c);
            ms[c]++;
        }
        else continue;
        
    }
    string ans;
    string anss;
    for( char s:ans){
        ans+= To_String(mp[s]);
        
    }
    for( char s:anss){
        ans+= To_String(ms[s]);
        
    }

    return ans=anss;


}

```

## Submission at 2024-10-25 06:59:46


```
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    for(char c='', c<min(a.length(),b.length());c++){
        if(a[i])
    }
}
```

## Submission at 2024-10-25 07:01:29


```
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    for(char c='', c<min(a.length(),b.length());c++){
        if(find(b.begin(),b.end(),a[c])
    }
}
```

## Submission at 2024-11-07 05:50:56


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
    if(!root) return true;
    if (!root->left && !root->right) return true;
        
    if (!root->left || !root->right) return false;
    if((root->left!=root->right)&&isSymmetric(root->left)&&isSymmetric(root->right)){
        return false;
}
}

```

## Submission at 2024-11-07 06:01:38


```
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
                                 
int main(){
    string pattern;
    getline(cin,pattern);
    string s;
    getline(cin,s);
    bool wordpattern(pattern,s);
    return 0;

}
bool wordpattern(string s1, string s2){
    unordered_map<char,int> mp;
    for(char i:s1){
        char c=s1[i];
        mp[c]++;
    }
    vector<string> v;
    unordered_map<string,int> ms;
    string temp = "";
    for (int i = 0; i < s2.size(); i++) {
            if (s2[i] != ' ') {
                temp += s2[i];
            }
            else {
                v.push_back(temp);
                ms[temp]++;
                temp = "";
            }
        }
        v.push_back(temp);
        ms[temp]++;
        





    string ans;
    string anss;
    for( char s2:ans){
        ans+= to_string(mp[s2]);
        
    }
    for( char s2:anss){
        ans+= to_string(ms[s2]);
        
    }

    return ans=anss;


}
```

## Submission at 2024-11-07 06:29:01


```
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


bool ans(string s1,string s2){
    unordered_map<char,int> mp;
    
    for (char c : s2) {
        mp[c]++;
    }
    for (char c : s1) {
        if (mp[c] > 0) {
            mp[c]--; 
        } else {
            return false; 
        }
    }
    return true;
}

int main(){
    string a;
    getline(cin,a);
    string b;
    getline(cin,b);
    if(ans(a,b)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
    



}


        


```

## Submission at 2024-11-07 11:03:29


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


#include<algorithm>// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    vector<int> v1;
    vector<int> v2;
    if (num1 == nullptr) return nullptr;
        Node* curr = num1;
        while (curr != nullptr) {  
            v1.push_back(curr->data);
            curr = curr->next;
        }
    if (num2 == nullptr) return nullptr;
        Node* curr1 = num2;
        while (curr1 != nullptr) {  
            v2.push_back(curr1->data);
            curr1 = curr1->next;
        }
    reverse(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());

    vector<int> ans;
    int carry=0;
    int i=0,j=0;

   
    while(i<v1.size()||j<v2.size()||carry) {
        int sum = carry;
        if (i < v1.size()){
            sum += v1[i];
            i++;

        } 
        if (j < v2.size()){
            sum += v2[j];
            j++;

        } 
        
        carry = sum / 10;
        ans.push_back(sum % 10);
    }

    
    reverse(ans.begin(), ans.end());

    
    Node* result = new Node(ans[0]);
    Node* current = result;
    for (int k = 1; k < ans.size(); ++k) {
        current->next = new Node(ans[k]);
        current = current->next;
    }

    return result;
}


```

## Submission at 2024-11-12 13:55:47


```
#include<iostream>
#include <vector>
#include<climits>
#include<cmath>
#include<algorithm>
using namespace std;

bool possible(vector<int>& arr,int day, int m, int k){
	int cnt=0;
	int noofb=0;
	for(int i=0;i<arr.size();i++){
		if(arr[i]<=day){
			cnt++;
		}
		else{
			noofb+=(cnt/k);
			cnt=0;
		}
	}
	noofb += (cnt/k);
	return noofb>=m;
	
}

int bs(vector<int> &arr,int r,int b){
	long long val=r * 1LL* b* 1LL;
	if(val> arr.size()) return -1;
	int mini=INT_MAX, maxi=INT_MIN;
	for(int i=0;i<arr.size();i++){
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}
	int low=mini, high=maxi;
	while(low<=high){
		int mid=(low+high)/2;
		if(possible(arr,mid,r,b)){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	
	}	
	return low;
}

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> v;
	v.resize(n);  
	
	for (int i = 0; i < n; i++) {
		cin >> v[i]; 
	}
	
	int result = bs(v, m, k);  
	cout << result << endl;
	
}

```

## Submission at 2024-11-12 14:31:16


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> v1(n, 0); 
    int j = 1;
    for(int k = 0; k < n - 1; k++){  
        while(j < n) {
            if(arr[j] > arr[k]) {  
                v1[k] = j - k; 
                break; 
            } else {
                j++;  
            }
        }
    }

   
    for(int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-11-12 14:33:14


```
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> v(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> answer(n, 0); 
    stack<int> s;  
    
    for (int i = n - 1; i >= 0; --i) {
        while (!s.empty() && temperatures[s.top()] <= temperatures[i]) {
            s.pop();
        }
        
        if (!s.empty()) {
            answer[i] = s.top() - i;
        }
        s.push(i);
    }
    
    return answer;
}

int main() {
    int n;
    cin >> n;
    vector<int> temperatures(n);
    for (int i = 0; i < n; i++) {
        cin >> temperatures[i];
    }
    
    vector<int> result=v(temperatures);
    
    for (int days : result) {
        cout << days << " ";
    }
    

    return 0;
}

```

## Submission at 2024-11-14 12:56:51


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
#include<algorithm>
vector<int> sortlist(Node* head){
    vector<int> v;
    Node* curr=head;
    while(curr!=nullptr){
        v.push_back(curr->data);
        curr=curr->next;
    }
    reverse(v.begin(),v.end());
    return v;

}


Node* addTwoLists(Node* num1, Node* num2) {
    vector<int> ans;
    vector<int> v1=sortlist(num1);
    vector<int> v2=sortlist(num2);
    
    int n=max(v1.size(), v2.size());
    int carry=0;
    
    for(int i= 0;i<n;i++){
        int sum=carry;
        if (i<v1.size())sum += v1[i];  
        if (i<v2.size()) sum += v2[i];  
        
        carry=sum/10;  
        ans.push_back(sum % 10);  
    }
    
    if(carry){
        ans.push_back(carry);
    }
    
    Node* newhead=new Node(ans[0]);
    Node* curr=newhead;
    for(int i=0; i<ans.size();i++){
        Node* newnode=new Node(ans[i]);
        curr->next=newnode;
        curr = newnode;
    }
    return newhead;
}



```

## Submission at 2024-11-14 13:22:04


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
#include<algorithm>
vector<int> sortlist(Node* head){
    vector<int> v;
    Node* curr=head;
    while(curr!=nullptr){
        v.push_back(curr->data);
        curr=curr->next;
    }
    reverse(v.begin(),v.end());
    return v;
}

Node* vectortolist(vector<int>& vec) {  
    Node* newhead=new Node(vec[0]);
    Node* curr=newhead;
    for(int i=1; i<vec.size();i++){//i=1 kem k
        Node* newnode=new Node(vec[i]);
        curr->next=newnode;
        curr=newnode;
    }
    return newhead;
}

Node* addTwoLists(Node* num1, Node* num2) {
    vector<int> ans;
    vector<int> v1=sortlist(num1);
    vector<int> v2=sortlist(num2);

    int maxLength=max(v1.size(),v2.size());
    if(v1.size() < maxLength) v1.resize(maxLength, 0);
    if(v2.size() < maxLength) v2.resize(maxLength, 0);
    
    int carry = 0;

    for (int i = 0; i < maxLength; i++) {
        int sum = v1[i] + v2[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
    }
    if (carry) {
        ans.push_back(carry);
    }
    
    reverse(ans.begin(), ans.end());
    return vectortolist(ans);

}




```

## Submission at 2024-11-14 13:26:28


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
#include<algorithm>
vector<int> sortlist(Node* head){
    vector<int> v;
    Node* curr=head;
    while(curr!=nullptr){
        v.push_back(curr->data);
        curr=curr->next;
    }
    reverse(v.begin(),v.end());
    return v;
}

Node* vectortolist(vector<int>& vec) {  
    Node* newhead=new Node(vec[0]);
    Node* curr=newhead;
    for(int i=1; i<vec.size();i++){//i=1 kem k
        Node* newnode=new Node(vec[i]);
        curr->next=newnode;
        curr=newnode;
    }
    return newhead;
}

Node* addTwoLists(Node* num1, Node* num2) {
    vector<int> ans;
    vector<int> v1=sortlist(num1);
    vector<int> v2=sortlist(num2);

    int maxLength=max(v1.size(),v2.size());
    if(v1.size() < maxLength) v1.resize(maxLength, 0);
    if(v2.size() < maxLength) v2.resize(maxLength, 0);
    
    int carry = 0;

    for (int i = 0; i < maxLength; i++) {
        int sum = v1[i] + v2[i] + carry;
        carry = sum / 10;
        ans.push_back(sum % 10);
    }
    
    
    reverse(ans.begin(), ans.end());
    return vectortolist(ans);

}




```

## Submission at 2024-11-14 13:35:10


```
#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool same(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if (s1==s2) return true;


}


int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    int ans=same(s,t);
    if(ans) cout<<"true";
    else cout<<"false";

    return 0;
}
```

## Submission at 2024-11-14 13:47:06


```
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool same(string s1, string s2){
    unordered_map<char,int> mp;
    unordered_map<char,int> ms;
    for(char c=0;c<s1.length();c++){
            mp[s1[c]]++;
    }
    for(char c=0;c<s2.length();c++){
            ms[s2[c]]++;
    }
    for (int i = 0; i < 26; i++) {
        if (mp[i] > ms[i]) {
            return false;  
        }
    }
    return true;

}


int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    int ans=same(s,t);
    if(ans) cout<<"true";
    else cout<<"false";

    return 0;
}
```

## Submission at 2024-11-14 14:01:17


```
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool same(string s1, string s2){
    if(s1.length()!=s2.length()) return false;
    unordered_map<char,int> mp;

    for(char c:s1){
        mp[c]++;
    }
    for(char c:s2){
        mp[c]--;
    }
    for (auto it: mp) {
        if (it.second != 0) {
            return false;
        }
    }
    return true;
    
}




int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    int ans=same(s,t);
    if(ans) cout<<"true";
    else cout<<"false";

    return 0;
}

```

## Submission at 2024-11-14 14:32:08


```
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    while(n>0){
        arr.push_back(n%10);
        n/=10;

    }
        
    
    sort(arr.begin(),arr.end());
    int a=arr[0]*10+arr[2];
    int b=arr[1]*10+arr[3];
    int c=a+b;
    cout<<c;
    return 0;
}
```

## Submission at 2024-11-14 14:52:23


```
#include<iostream>
using namespace std;

int time(int aray[],int n1,int k1){
     int c=0;
    while (true){
        if(aray[k1]==0)   
            break;
        for(int i=0;i<n1;i++){
            if(aray[k1]==0)
                break;
            if(aray[i]>0){
                aray[i]-=1;
                c+=1;
            }
        }
    }
    return c;
}


int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    int res=time(arr,n,k);
    cout<<res;
    return 0;

}
```

## Submission at 2024-11-15 06:11:23


```
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>k) cout<< it.first;
        return 0;
    }
    cout<<-1;
    return 0;
    
}
```

## Submission at 2024-11-15 06:14:29


```
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>k){
            cout<< it.first;
            return 0;

        } 
    }
    cout<<-1;
    return 0;
    
}
```

## Submission at 2024-11-15 06:15:19


```
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>=k){
            cout<< it.first;
            return 0;

        } 
    }
    cout<<-1;
    return 0;
    
}
```

## Submission at 2024-11-15 06:16:08


```
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>=k){
            cout<< it.first;
        

        } 
    }
    cout<<-1;
    return 0;
    
}
```

## Submission at 2024-11-15 06:19:04


```
#include<iostream>
#include<map>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mp;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto it:mp){
        if(it.second>=k){
            cout<< it.first;
            return 0;

        } 
    }
    cout<<-1;
    return 0;
    
}
```

## Submission at 2024-11-15 14:10:15


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


int maxDepth(Node* root)
{
  if(!root) return 0;
  int maxleft=maxDepth(root->left);
  int maxright=maxDepth(root->right);
  return max(maxleft,maxright)+1;   
}

```

## Submission at 2024-11-15 14:14:03


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


int maxDepth(Node* root)
{
  if(!root) return {};
  int maxleft=maxDepth(root->left);
  int maxright=maxDepth(root->right);
  return max(maxleft,maxright)+1;   
}

```

## Submission at 2024-11-15 14:24:08


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
#include<vector>
#include<algorithm>
vector<int> ans;
vector<int> postorder(Node* root1){
    if(root1->left) postorder(root1->left);
    if(root1->right) postorder(root1->right);
    ans.push_back(root1->data);
    return ans;


}

int findMin(Node *root)
{
    vector<int> v;
    v=postorder(root);
    sort(v.begin(),v.end());
    return v[0];
}


```

## Submission at 2024-11-22 03:51:37


```
map<int, map<int, multiset<int>>> m;
    void dfs(TreeNode* root, int x, int y) {
        if (root == NULL) {
            return;
        }
        m[x][y].insert(root->val);
        dfs(root->left, x - 1, y + 1);
        dfs(root->right, x + 1, y + 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);
        vector<vector<int>> ans;
        for (auto i : m) {
            vector<int> col;
            for (auto j : i.second) {
                col.insert(col.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
std::vector<std::vector<int>> diagonalTraversal(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    std::vector<std::vector<int>> diagonals(rows + cols - 1);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diagonals[i + j].push_back(matrix[i][j]);
        }
    }

    return diagonals; // Each vector in `diagonals` is a diagonal.
}

std::vector<int> spiralOrder(const std::vector<std::vector<int>>& matrix) {
    std::vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) result.push_back(matrix[top][i]);
        top++;
        for (int i = top; i <= bottom; i++) result.push_back(matrix[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) result.push_back(matrix[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) result.push_back(matrix[i][left]);
            left++;
        }
    }

    return result;
}



```

## Submission at 2024-11-22 05:06:27


```
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int ans=0;
    for(auto it:mp){
        if(it.second>1){
            ans++;
        }
        else continue;
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-22 05:13:29


```
#include<iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    cout<<k;
    return 0;
}
```

## Submission at 2024-11-22 05:20:16


```
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<(b-a);
    return 0;
}
```

## Submission at 2024-11-22 05:26:27


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
```

## Submission at 2024-11-22 05:37:50


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=2n-1;i++){
        while(j<n){
            cout<<"*";
            j++;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 05:53:35


```
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        
    }
    vector<int> v;
    for(auto it:mp){
        if(it.second<2){
            v.push_back(it.first);
        }
    }
    sort(v.begin(),v.end());
    cout<<v.back();
    
    return 0;
}
```

## Submission at 2024-11-22 05:54:37


```
// write code from scratch
#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        
    }
    vector<int> v;
    for(auto it:mp){
        if(it.second<2){
            v.push_back(it.first);
        }
    }
    sort(v.begin(),v.end());
    cout<<v.back();
    
    return 0;
}
```

## Submission at 2024-11-22 06:15:36


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
#include<vector>
#include<unordered_map>
#include<algorithm>
Node* removeDuplicates(Node *head)
{
    vector<int> v;
    Node* curr=head;
    while(curr!=nullptr){
        v.push_back(curr->data);
        curr=curr->next;
    }
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    vector<int> v1;
    for(auto it:mp){
        if(it.second<2){
            v1.push_back(it.first);
        }
    }
    reverse(v1.begin(),v1.end());
    Node* newhead=new Node(v1[0]);
    Node* current=newhead;

    for(int i=0;i<v1.size();i++){
        Node* newnode=new Node(v1[i]);
        current->next=newnode;
        current=newnode;
    }
    return newhead;
}



```

## Submission at 2024-11-22 06:28:28


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
    if(!root) return;
    while(root!=NULL){
        if((root->left<root)&&(root->right>root)){
            bool isBST(root->left);
            bool isBST(root->right);
        
    }

    
    }
    return false;


}


```

## Submission at 2024-11-22 06:32:17


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

## Submission at 2024-11-22 06:32:17


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

## Submission at 2024-11-22 06:40:33


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
#include<vector>
#include<map>

Node* removeDuplicates(Node *head)
{
 
    vector<int> v;
    Node* curr=head;
    while(curr!=nullptr){
        v.push_back(curr->data);
        curr=curr->next;
    }
    map<int,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    vector<int> v1;
    for(auto it:mp){
        if(it.second<2){
            v1.push_back(it.first);
        }
    }

    Node* newhead=new Node(v1[0]);
    Node* current=newhead;

    for(int i=1;i<v1.size();i++){
        Node* newnode=new Node(v1[i]);
        current->next=newnode;
        current=newnode;
    }
    return newhead;
}




```

## Submission at 2024-11-22 06:48:32


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
    if(!root) return true;
    while(root!=NULL){
        if((root->left<root)&&(root->right>root)){
            isBST(root->left);
            isBST(root->right);
        
    }
    else break;

    
    }
    return false;
}


```

## Submission at 2024-11-22 06:48:38


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
    if(!root) return true;
    while(root!=NULL){
        if((root->left<root)&&(root->right>root)){
            isBST(root->left);
            isBST(root->right);
        
    }
    else break;

    
    }
    return false;
}


```

## Submission at 2024-11-22 06:57:29


```
#include<iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int sum=0;
    while(i<n){
        for(int j=0;j<m;j++){
            if((arr1[i]-arr2[j])>2 or (arr1[i]-arr2[j])<(-2)){
                sum++;
            } 
        }
        i++;

    }
    cout<<sum;
        
    
    return 0;
}
```

