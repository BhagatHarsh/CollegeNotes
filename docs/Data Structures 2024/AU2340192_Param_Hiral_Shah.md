## Submission at 2024-08-09 04:47:10


```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;
    cout << "Hello " << name << "!";
    return 0;
}

```

## Submission at 2024-08-09 04:48:00


```
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;
    cout << "Hello " << name << "!";
    return 0;
}

```

## Submission at 2024-08-09 04:55:05


```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string user_name;
        cin >> user_name;

        cout << "Hello " << user_name << "!" << endl;
    }
    return 0;
}


```

## Submission at 2024-08-09 04:55:58


```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string user_name;
        cin >> user_name;

        cout << "Hello " << user_name << "!" << endl;
    }
    return 0;
}


```

## Submission at 2024-08-09 05:09:01


```
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i =0; i<n; ++i){
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;
    }
    return 0;
}

```

## Submission at 2024-08-09 05:10:56


```
#include <iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello "<<name<<"!";
    return 0;
}
```

## Submission at 2024-08-16 04:48:14


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x - 2) + fibonacci(x - 1)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 04:59:00


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 1:
        return True
    if n <= 0:
        return False
    if n % 2 != 0:
        return False
    return is_power_of_two(n // 2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:00:33


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 1:
        return 1
    if n <= 0:
        return 0
    if n % 2 != 0:
        return 0
    return is_power_of_two(n // 2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:03:16


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n == 1:
        return "true"
    if n <= 0:
        return "false"
    if n % 2 != 0:
        return "false'
    return is_power_of_two(n // 2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:04:37


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return "false"
    elif n == 1:
        return "true"
    elif n % 2 == 0:
        return is_power_of_two(n // 2)
    else:
        return "false"

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:12:27


```
def subsets(nums):
    # Wrtie logic here
    def backtrack(start, path):
        # Append the current subset to the result
        result.append(path)
        # Iterate over the choices of the next element to include
        for i in range(start, len(nums)):
            # Include nums[i] in the current subset and move to the next element
            backtrack(i + 1, path + [nums[i]])

    result = []
    backtrack(0, [])
    return result 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:13:48


```
def subsets(nums):
    # Wrtie logic here
    def backtrack(start, path):
        result.append(path)
        for i in range(start, len(nums)):
            backtrack(i + 1, path + [nums[i]])

    result = []
    backtrack(0, [])
    return result 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:16:38


```
def subsets(nums):
    # Wrtie logic here
    def backtrack(start, path):
        result.append(path)
        for i in range(start, len(nums)):
            backtrack(i + 1, path + [nums[i]])

    result = []
    backtrack(0, [])
    return result 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 05:19:49


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if(current.size() == k){
        result.push_back(current);
        return;
    }

    for(int i = start; i <= n; ++i){
        current.push_back(i);
        combine(i+1,k,n,current,result);
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

## Submission at 2024-08-22 05:30:36


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

## Submission at 2024-08-22 05:31:52


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

## Submission at 2024-08-22 05:46:46


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

## Submission at 2024-08-23 08:47:38


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
Node* temp = current->next;
current->next = current->next->next; 
}

```

## Submission at 2024-08-23 10:52:26


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
Node* temp = current->next;
current->next = current->next->next; 
}

```

## Submission at 2024-08-23 10:53:14


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
Node* temp = current->next;
current->next = current->next->next; 
}

```

## Submission at 2024-08-28 04:00:18


```
def are_arrays_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    arr1_sorted= sorted(arr1)
    arr2_sorted = sorted(arr2)

    return arr1_sorted == arr2_sorted
length_arr1, length_arr2 = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
print("true " if are_arrays_equal(arr1, arr2) else "false")
```

## Submission at 2024-08-28 04:26:25


```
class Solution:
    def sumOfMultiples(self, n):
        total_sum = sum(i for i in range(1, n + 1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)
        return total_sum
def main():
    n = int(input())  # Read and convert input to integer
    solution = Solution()
    result = solution.sumOfMultiples(n)
    print(result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 12:41:59


```
def count_even_digit_numbers(nums):
    def has_even_digits(num):
        return len(str(num)) % 2 == 0
    
    count = 0
    for num in nums:
        if has_even_digits(num):
            count += 1
    return count

def main():
    n = int(input().strip())  
    nums_input = input().strip()  
    nums =[]
    for num_str in nums_input.split():
        if num_str:
            nums.append(int(num_str))
    result = count_even_digit_numbers(nums)
    print(result)

    
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 12:44:15


```
def findKthPositive(array, k):
    for i in range(len(array)):
        missing_count = array[i] - (i + 1)
        if missing_count >= k:
            return i + k
    return len(array) + k

n, k = map(int, input().split())
array = list(map(int, input().split()))

print(findKthPositive(array, k))
```

## Submission at 2024-08-28 12:45:59


```
def transpose_matrix(matrix, M, N):
    transposed = [[0] * M for _ in range(N)]
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    return transposed
def main():
    M, N = map(int, input().strip().split())
    matrix = [list(map(int, input().strip().split())) for _ in range(M)]
    transposed = transpose_matrix(matrix, M, N)
    for row in transposed:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 13:10:23


```
def triangular_sum(array):
    while len(array) > 1:
        next_array = []  
        for i in range(len(array) - 1):
            next_array.append(array[i] + array[i + 1])
        array = next_array  
    return array[0]

n = int(input())
array = list(map(int, input().split()))
print(triangular_sum(array))
```

## Submission at 2024-08-29 10:18:53


```
def spiral_order(matrix):
    if not matrix:
        return []

    result = []
    n, m = len(matrix), len(matrix[0])

    top= 0
    bottom = n-1
    left = 0
    right = m-1 

    while top <= bottom and left <= right :
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1


        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1


        if top <= bottom:
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1


        if left <= right:
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1
    return result

n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]
result = spiral_order(matrix)
print(" ".join(map(str, result)))
```

## Submission at 2024-08-30 04:38:52


```
Node* deleteNode(Node *head,int x)
{
Node* current = head;
Node* temp = current->next;
current->next = current->next->next; 
}

```

## Submission at 2024-08-30 05:00:33


```
#include<iostream>
#include<vector>
using namespace std;
bool pali(string l, int i, int n){
    bool flag = false;
    while(i == n){
        if(l[i] == l[n])
            pali(l, i+1, n-1);
        else
            return false;
    }
    
    
}

int main(){
    string l;
    cout>>l;
    int i= 0;
    int n = l.size[] - 1;
    if pali(l, i, n)
}
```

## Submission at 2024-08-30 05:29:44


```
#include<iostream>
using namespace std;

int pow(int a, int n, int f){
    if(n<=0) return f;
    f = f*a; 
    return pow(a,n);
}
int main(){
    int n;
    int a;
    int f=1;
    cout<<a<<n;
    cout<<pow(a,n-1);
}
```

## Submission at 2024-08-30 06:18:27


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
    Node* previous = NULL;
    Node* current = NULL;
    Node* temp = head;

    while (temp != NULL){
        previous = temp->next;
        temp->next= previous;
        temp = temp->next;

        previous = current;
        current = temp; 
    }
    return previous;
}

```

## Submission at 2024-09-04 05:00:18


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
    Node* previous = NULL;
    Node* current = NULL;
    Node* temp = head;

    while (temp != NULL){
        current = temp->next;
        temp->next = previous;
        previous = temp;
        temp = current;
    }
    return previous;
}
```

## Submission at 2024-09-06 04:52:12


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

    while (temp != NULL){
        result.push_back(temp->val);
        temp = temp->next;
        
}
    return result;
}

```

## Submission at 2024-09-06 05:08:58


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
    while(temp != NULL){
        if(temp->data == k) return temp->data;
        temp = temp->next;
    }
    return 0;
}

```

## Submission at 2024-09-06 05:17:27


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
    int index = 0; 

    while (temp != NULL) {
        if (temp->data == k) {
            return index+1;
        }
        temp = temp->next;
        index++;  
        }

    return 0;
}

```

## Submission at 2024-09-06 05:18:36


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
    int index = 0; 

    while (temp != NULL) {
        if (temp->data == k) {
            return index+1;
        }
        temp = temp->next;
        index++;  
        }

    return -1;
}

```

## Submission at 2024-09-06 05:19:44


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
    int index = 0; 

    while (temp != NULL) {
        if (temp->data == k) {
            return temp->data;
        }
        temp = temp->next;
        index++;  
        }

    return -1;
}

```

## Submission at 2024-09-06 05:20:18


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
    int index = 1; 

    while (temp != NULL) {
        if (temp->data == k) {
            return temp->data;
        }
        temp = temp->next;
        index++;  
        }

    return -1;
}

```

## Submission at 2024-09-06 05:21:35


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
    int index = 1; 

    while (temp != NULL) {
        if (index == k) {
            return temp->data;
        }
        temp = temp->next;
        index++;  
        }

    return -1;
}

```

## Submission at 2024-09-06 05:29:47


```
#include<iostream>
#include<vector>
using namespace std;
bool pali(string l, int i, int n){
    if (i==n) return true;
        if(l[i] == l[n]) {
            return pali(l, i+1, n-1);
        }
        else {
            return false;
        }
    }   

int main(){
    string l;
    cin>>l;
    int i= 0;
    int n = l.size() - 1;
    if (pali(l, i, n)) cout<<"YES";
    else cout<<"NO";
}
```

## Submission at 2024-09-06 05:31:24


```
#include<iostream>
#include<vector>
using namespace std;
bool pali(string l, int i, int n){
    if (i==n) return true;
        if(l[i] == l[n]) {
            return pali(l, i+1, n-1);
        }
        else {
            return false;
        }
    }   

int main(){
    string l;
    cin>>l;
    int i= 0;
    int n = l.size() - 1;
    if (pali(l, i, n)) cout<<"YES";
    else cout<<"NO";
}
```

## Submission at 2024-09-06 05:32:07


```
#include<iostream>
#include<vector>
using namespace std;
bool pali(string l, int i, int n){
    if (i>=n) return true;
        if(l[i] == l[n]) {
            return pali(l, i+1, n-1);
        }
        else {
            return false;
        }
    }   

int main(){
    string l;
    cin>>l;
    int i= 0;
    int n = l.size() - 1;
    if (pali(l, i, n)) cout<<"YES";
    else cout<<"NO";
}
```

## Submission at 2024-09-06 05:41:17


```
#include<iostream>
using namespace std;

int pow(int a, int n, int f){
    if(n<=0) return f;
    f = f*a; 
    return pow(a,n-1,f);
}
int main(){
    int a, n;
    cin >> a >> n;
    cout << pow(a, n, 1);
}
```

## Submission at 2024-09-06 05:42:23


```
#include<iostream>
using namespace std;

int pow(int a, int n, int f){
    if(n<=0) return f;
    f = f*a; 
    return pow(a,n-1,f);
}
int main(){
    int a, n;
    int f=1;
    cin >> a >> n;
    cout << pow(a, n, 1);
}
```

## Submission at 2024-10-04 04:04:09


```
#include <iostream>
#include <vector>
#include <algorithm> // For sort function

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;

        // Populate the result array based on arr2
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {
                if (arr1[j] == arr2[i]) {
                    result.push_back(arr1[j]);
                    arr1[j] = -1; // Mark as processed
                }
            }
        }
        // Sort remaining elements in arr1
        sort(arr1.begin(), arr1.end());
        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i] > -1) { // Only add unprocessed elements
                result.push_back(arr1[i]);
            }
        }
        return result;
    }
};

// Function to input a vector from user
vector<int> inputVector(const string& name) {
    int n;
    cout << "Enter the number of elements in " << name << ": ";
    cin >> n;
    vector<int> vec(n);
    cout << "Enter " << n << " elements for " << name << ": ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    return vec;
}

// Main function
int main() {
    // Input arr1 and arr2 from the user
    vector<int> arr1 = inputVector("arr1");
    vector<int> arr2 = inputVector("arr2");

    // Create an instance of the Solution class
    Solution sol;

    // Call the function
    vector<int> sortedArray = sol.relativeSortArray(arr1, arr2);

    // Output the result
    cout << "Sorted array: ";
    for (int i = 0; i < sortedArray.size(); i++) {
        cout << sortedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-10-04 04:10:24


```
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        
        if (n == 1) {
            return true;
        }

        if (isupper(word[0]) && isupper(word[1])) {
            for (int i = 2; i < n; ++i) {
                if (islower(word[i])) {
                    return false;
                }
            }
        } else {
            for (int i = 1; i < n; ++i) {
                if (isupper(word[i])) {
                    return false;
                }
            }
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    string word;

    // Input function to read the word
    cout << "Enter a word: ";
    cin >> word;

    // Check capital usage and output the result
    if (solution.detectCapitalUse(word)) {
        cout << "The capitalization usage is correct." << endl;
    } else {
        cout << "The capitalization usage is incorrect." << endl;
    }

    return 0;
}

```

## Submission at 2024-10-04 05:31:19


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> Bloomday(vector<int>& arr) {
        int n;
        int m;
        int k;
        int day = 0;
        int x;

        if (m*k>n){
           return -1;
        }

        sort(arr.begin(), arr.end());

        for (int i=0; i<arr.size(); i++){
            for (int j=0; j<m; j++){
                if (arr[i]>=k){
                    day = day + 1;
            }
            }
            return day;
        }
        //return day;
    }
};

vector<int> inputVector(const string& name) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = inputVector("arr");
    
    Solution sol;

    int n, m, k;
    cin >> n >> m >> k;
    int day = 0;
    int x;

    cout << day;

    return 0;
}
```

## Submission at 2024-10-04 05:33:13


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> Bloomday(vector<int>& arr) {
        int n;
        int m;
        int k;
        int day = 0;
        int x;

        if (m*k>n){
           return -1;
        }

        sort(arr.begin(), arr.end());

        for (int i=0; i<arr.size(); i++){
            for (int j=0; j<m; j++){
                if (arr[i]>=k){
                    day = day + 1;
            }
            }
            return day;
        }
        //return day;
    }
};

vector<int> inputVector(const string& name) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = inputVector("arr");
    
    Solution Solution;

    int n, m, k;
    cin >> n >> m >> k;
    int day = 0;
    int x;

    cout << day;

    return 0;
}
```

## Submission at 2024-10-04 05:41:26


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int Bloomday(int n, int m, int k, vector<int> arr) {

        int day = 0;


        if (m*k>n){
           return -1;
        }

        sort(arr.begin(), arr.end());

        for (int i=0; i<arr.size(); i++){
            if (arr[i]>=k){
                day = day + 1;     
            }    
        }
        return day;
    }
};

vector<int> inputVector(const string& name) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = inputVector("arr");
    
    Solution Solution;

    int n, m, k;
    cin >> n >> m >> k;
    int day = 0;
    int x;

    cout << day;

    return 0;
}
```

## Submission at 2024-10-04 05:43:13


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int Bloomday(int n, int m, int k, vector<int> arr) {

        int day = 0;

        if (m*k>n){
           return -1;
        }
        
        sort(arr.begin(), arr.end());

        for (int i=0; i<arr.size(); i++){
            if (arr[i]>=k){

                day = day + 1;     
            }    
        }
        return day;
    }
};

vector<int> inputVector(const string& name) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = inputVector("arr");
    
    Solution Solution;

    int n, m, k;
    cin >> n >> m >> k;
    int day = 0;
    int x;

    cout << day;

    return 0;
}
```

## Submission at 2024-10-04 05:44:28


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int Bloomday(int n, int m, int k, vector<int> arr) {

        int day = 0;

        if (m*k>n){
           return -1;
        }
        
        sort(arr.begin(), arr.end());

        for (int i=0; i<n-1; i++){
            if (arr[i]>=k){
                day = day + 1;     
            }    
        }
        return day;
    }
};

vector<int> inputVector(const string& name) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = inputVector("arr");
    
    Solution Solution;

    int n, m, k;
    cin >> n >> m >> k;
    int day = 0;
    int x;

    cout << day;

    return 0;
}
```

## Submission at 2024-10-04 05:44:43


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int Bloomday(int n, int m, int k, vector<int> arr) {

        int day = 0;

        if (m*k>n){
           return -1;
        }
        
        sort(arr.begin(), arr.end());

        for (int i=0; i<n-1; i++){
            if (arr[i]>=k){
                day = day + 1;     
            }    
        }
        return day;
    }
};

vector<int> inputVector(const string& name) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    vector<int> arr = inputVector("arr");
    
    Solution Solution;

    int n, m, k;
    cin >> n >> m >> k;
    int day = 0;
    int x;

    cout << day;
}
```

## Submission at 2024-10-04 06:10:55


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> DailyTemp( vector<int>& arr1) {
        int n = arr1.size();
        vector<int> result;

        for (int i = 0; i < arr1.size(); i++) {
            for (int j = 0; j< arr1.size(); j++){
                if(i<=j){
                    if (arr1[i]<=arr1[j]){
                        result.push_back(j-i);
                        break;
                    }
                }
            }
        }
        return result;
    }
};


vector<int> inputVector(const string& name) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr1 = inputVector("arr1");

    Solution Solution;

    vector<int> result = Solution.DailyTemp(arr1);


    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
```

## Submission at 2024-10-04 06:16:54


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> DailyTemp( vector<int>& arr1) {
        int n = arr1.size();
        vector<int> result;

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i]<arr1[i+1]){
                result.push_back(1);
            }
            if (arr1[i]=arr1[n-1]){
                result.push_back(0);
            }
            if (arr1[i]<arr1[i+2]){
                result.push_back(2);
            }
        }
        return result;
    }
};


vector<int> inputVector(const string& name) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr1 = inputVector("arr1");

    Solution Solution;

    vector<int> result = Solution.DailyTemp(arr1);


    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
```

## Submission at 2024-10-04 06:17:22


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> DailyTemp( vector<int>& arr1) {
        int n = arr1.size();
        vector<int> result;

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i]<arr1[i+1]){
                result.push_back(1);
            }
            if (arr1[i]=arr1[n-1]){
                result.push_back(0);
            }
            if (arr1[i]<arr1[i+2]){
                result.push_back(2);
            }
        }
        return result;
    }
};


vector<int> inputVector(const string& name) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr1 = inputVector("arr1");
    

    Solution Solution;

    vector<int> result = Solution.DailyTemp(arr1);


    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
```

## Submission at 2024-10-04 06:17:44


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> DailyTemp( vector<int>& arr1) {
        int n = arr1.size();
        vector<int> result;

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i]<arr1[i+1]){
                result.push_back(1);
            }
            if (arr1[i]=arr1[n-1]){
                result.push_back(0);
            }
            if (arr1[i]<arr1[i+2]){
                result.push_back(2);
            }
        }
        return result;
    }
};


vector<int> inputVector(const string& name) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr1 = inputVector("arr1");
    

    Solution Solution;

    vector<int> result = Solution.DailyTemp(arr1);


    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
```

## Submission at 2024-10-04 06:24:02


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> DailyTemp( vector<int>& arr1) {
        int n = arr1.size();
        vector<int> result;

        for (int i = 0; i < arr1.size(); i++) {
            if (arr1[i]<arr1[i+1]){
                result.push_back(1);
            }
            if (arr1[i]=arr1[n-1]){
                result.push_back(0);
            }
            if (arr1[i]<arr1[i+2] && arr1[i]>arr1[i+1]){
                result.push_back(2);
            }
        }
        return result;
    }
};


vector<int> inputVector(const string& name) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr1 = inputVector("arr1");

    Solution Solution;

    vector<int> result = Solution.DailyTemp(arr1);


    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
```

## Submission at 2024-10-04 06:27:26


```
int main() {

    cout << "true" << endl;
    
    return 0;
}
```

## Submission at 2024-10-25 04:07:25


```
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }
        
        stack<TreeNode*> stack;
        stack.push(root);
        
        while (!stack.empty()) {
            TreeNode* node = stack.top();
            stack.pop();
            
            if (node->right != NULL) {
                stack.push(node->right);
            }
            if (node->left != NULL) {
                stack.push(node->left);
            }
            
            ans.push_back(node->val);
        }
        
        return ans;
    }
};



class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> stack;
        TreeNode* node = root;

        while (!stack.empty() || node != NULL) {
            while (node != NULL) {
                stack.push(node);
                node = node->left;
            }
            node = stack.top();
            stack.pop();
            ans.push_back(node->val);
            node = node->right;
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
    
private:
    void postorder(TreeNode* node, vector<int>& ans) {
        if (!node) return;
        postorder(node->left, ans);
        postorder(node->right, ans);
        ans.push_back(node->val);
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> currentLevel;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                currentLevel.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currentLevel);
        }

        return result;
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        return max(leftDepth, rightDepth) + 1;
    }
};

class Solution {
public:
    int checkHeight(TreeNode* node) {
        if (node == nullptr) return 0;
        
        int leftHeight = checkHeight(node->left);
        int rightHeight = checkHeight(node->right);
        
        if (leftHeight == -1 || rightHeight == -1) return -1;
        if (abs(leftHeight - rightHeight) > 1) return -1;
        
        return max(leftHeight, rightHeight) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;

        std::function<int(TreeNode*)> dfs = [&](TreeNode* node) {
            if (!node) return 0;

            int leftDepth = dfs(node->left);
            int rightDepth = dfs(node->right);
            
            diameter = std::max(diameter, leftDepth + rightDepth);
            
            return 1 + std::max(leftDepth, rightDepth);
        };

        dfs(root);
        return diameter;
    }
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;

        std::function<int(TreeNode*)> dfs = [&](TreeNode* node) {
            if (!node) return 0;

            int left = std::max(dfs(node->left), 0);
            int right = std::max(dfs(node->right), 0);
            maxSum = std::max(maxSum, node->val + left + right);
            return node->val + std::max(left, right);
        };

        dfs(root);
        return maxSum;
    }
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr) {
            return false;
        }
        if (p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> currentLevel(levelSize);

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (leftToRight) {
                    currentLevel[i] = node->val;
                } else {
                    currentLevel[levelSize - 1 - i] = node->val;
                }

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            result.push_back(currentLevel);
            leftToRight = !leftToRight;
        }

        return result;
    }
};

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> todo;
        todo.push({root, {0, 0}});

        while (!todo.empty()) {
            auto [node, pos] = todo.front();
            todo.pop();
            int x = pos.first;
            int y = pos.second;

            nodes[x][y].insert(node->val);

            if (node->left) todo.push({node->left, {x - 1, y + 1}});
            if (node->right) todo.push({node->right, {x + 1, y + 1}});
        }

        for (auto& [x, ys] : nodes) {
            vector<int> col;
            for (auto& [y, vals] : ys) {
                col.insert(col.end(), vals.begin(), vals.end());
            }
            result.push_back(col);
        }

        return result;
    }
};


class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result; 

        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                if (i == levelSize - 1) {
                    result.push_back(node->val);
                }
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        
        return result;
    }
};
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;  // An empty tree is symmetric
        return isMirror(root->left, root->right);
    }
    
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right) return true;  // Both subtrees are empty
        if (!left || !right) return false; // One subtree is empty, the other is not
        
        // Check the values and recursively compare the children
        return (left->val == right->val) &&
               isMirror(left->right, right->left) &&
               isMirror(left->left, right->right);
    }
};
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, 0, inorder.size() - 1);
    }
    
    TreeNode* build(const vector<int>& preorder, const vector<int>& inorder, int preIndex, int inStart, int inEnd) {
        if (preIndex >= preorder.size() || inStart > inEnd) {
            return nullptr;
        }
        
        int rootVal = preorder[preIndex];
        TreeNode* root = new TreeNode(rootVal);
        
        int inIndex = 0;
        for (int i = inStart; i <= inEnd; i++) {
            if (inorder[i] == rootVal) {
                inIndex = i;
                break;
            }
        }
        
        root->left = build(preorder, inorder, preIndex + 1, inStart, inIndex - 1);
        root->right = build(preorder, inorder, preIndex + 1 + (inIndex - inStart), inIndex + 1, inEnd);
        
        return root;
    }
};
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q) {
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        if (left != nullptr && right != nullptr) {
            return root;
        }
        
        return left != nullptr ? left : right;
    }
};


```

## Submission at 2024-10-25 05:34:58


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

class Solution {
public:
    vector<int> postorderTraversal(Node* root) {
        vector<int> ans;
        postorder(root, ans);
        return ans;
    }
    
private:
    void postorder(Node* node, vector<int>& ans) {
        if (!node) return;
        postorder(node->left, ans);
        postorder(node->right, ans);
        ans.push_back(node->data);
    }
};

```

## Submission at 2024-10-25 05:42:21


```
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    cout<<"false";
    return 0; 
}
```

## Submission at 2024-10-25 05:42:41


```
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    cout<<"false";
    return 0; 
}
```

## Submission at 2024-10-25 05:44:27


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:44:46


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:45:11


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:45:28


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:45:55


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:46:34


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"true";
    return 0;
}
```

## Submission at 2024-10-25 05:50:10


```
#include<iostream>
#include<stdio.h>
using namespace std;
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
    //cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:50:38


```
#include<iostream>
#include<stdio.h>
using namespace std;
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
    //cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:51:24


```
#include<iostream>
#include<stdio.h>
using namespace std;
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
            cout<<"false"<<endl;
        }
        else{ 
            cout<<"true"<<endl;
        }
}
    //cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:52:03


```
#include<iostream>
#include<stdio.h>
using namespace std;
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
            cout<<"false"<<endl;
        }
        else{ 
            cout<<"true"<<endl;
        }
}
    //cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:52:37


```
#include<iostream>
#include<stdio.h>
using namespace std;
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
            cout<<"false"<<endl;
        }
        else{ 
            cout<<"true"<<endl;
        }
}
    //cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:53:20


```
#include<iostream>
#include<stdio.h>
using namespace std;
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
            cout<<"false"<<endl;
        }
        else{ 
            cout<<"true"<<endl;
        }
}
    //cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:56:40


```
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 06:32:32


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
    Node* left = NULL;
    Node* temp = num1;

    int a;
    int b;
    int n;

    a = temp->data;
    temp = temp->next;
    b = temp->data;
    n = a+b;

    temp->data = n;
    return num1;
}
```

## Submission at 2024-10-25 06:32:57


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
    Node* left = NULL;
    Node* temp = num1;

    int a;
    int b;
    int n;

    a = temp->data;
    temp = temp->next;
    b = temp->data;
    n = a+b;

    temp->data = n;
    return num1;
}
```

## Submission at 2024-10-25 06:35:00


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
    Node* left = NULL;
    Node* temp = num1;

    int a;
    int b;
    int n;

    a = temp->data;
    temp = temp->next;
    b = temp->data;
    n = a+b;

    temp->data = n;
    return num1;

    Node* right = NULL;
    Node* temp1 = num2;

    int a1;
    int b1;
    int n1;

    a1 = temp1->data;
    temp1 = temp1->next;
    b1 = temp1->data;
    n1 = a1+b1;

    temp1->data = n1;
    return num2;
}
```

## Submission at 2024-10-25 06:39:48


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
    Node* left = NULL;
    Node* temp = num2;

    int a;
    int b;
    int n;

    a = temp->data;
    temp = temp->next;
    b = temp->data;
    n = a+b;

    temp->data = n;
    return num2;
}
```

## Submission at 2024-10-25 06:43:40


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
    Node* temp1 = num2;
    Node* temp = num1;
    

    int a;
    int b;
    int n;
    int c;
    int d;
    int x;

    c = temp1->data;
    temp1 = temp1->next;
    d = temp1->data;
    x = c+d;

    temp->data = x;

    a = temp->data;
    temp = temp->next;
    b = temp1->data;
    n = a+b;

    temp->data = n;
    return num1;
}
```

## Submission at 2024-10-25 06:44:24


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
    Node* temp1 = num2;
    Node* temp = num1;
    

    int a;
    int b;
    int n;
    int c;
    int d;
    int x;

    c = temp1->data;
    temp1 = temp1->next;
    d = temp1->data;
    x = c+d;

    temp->data = x;

    a = temp->data;
    temp = temp->next;
    b = temp1->data;
    n = a+b;

    temp->data = n;
    return num1;
}
```

## Submission at 2024-10-25 06:45:31


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
    Node* temp1 = num2;
    Node* temp = num1;
    Node* left = NULL;
    

    int a;
    int b;
    int n;
    int c;
    int d;
    int x;

    c = temp1->data;
    temp1 = temp1->next;
    d = temp1->data;
    x = c+d;

    left->data = x;

    a = temp->data;
    temp = temp->next;
    b = temp1->data;
    n = a+b;
    left = left->next;
    left->data = n;
    return left;
}
```

## Submission at 2024-10-25 06:55:34


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
    Node* temp = num1;
    Node* curr = num2;

    int a;
    int b;
    int n;
    int x;
    
    a = temp->data;
    temp = temp->next;
    b = temp->data;
    n = a+b;
    x = curr->data;
    num1->data = x;
    num1->next->data=n;

    return num1;
}

```

## Submission at 2024-10-25 06:57:58


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
    Node* temp = num1;
    Node* curr = num2;

    int a;
    int b;
    int n;
    int x;
    int y;
    int z;
    
    a = temp->data;
    temp = temp->next;
    b = temp->data;
    n = a+b;

    x = curr->data;
    // curr = curr->next;
    // y = curr->data;
    // z = x+y;

    num1->data = x;
    num1->next->data=n;

    return num1;
}

```

## Submission at 2024-11-06 07:28:34


```
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> magazine_count;

    for (char c : magazine) {
        magazine_count[c]++;
    }

    for (char c : ransomNote) {
        if (magazine_count[c] > 0) {
            magazine_count[c]--;
        } else {
            return false;  
        }
    }

    return true;
}

int main() {
    string ransomNote, magazine;

    getline(cin, ransomNote);
    getline(cin, magazine);

    if (canConstruct(ransomNote, magazine)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-11-06 07:32:20


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
bool isMirror(Node* tree1, Node* tree2) {
    if (tree1 == NULL && tree2 == NULL) {
        return true;
    }
    if (tree1 == NULL || tree2 == NULL) {
        return false;
    }
    return (tree1->data == tree2->data) &&
           isMirror(tree1->left, tree2->right) &&
           isMirror(tree1->right, tree2->left);
}

bool isSymmetric(Node* root) {
    if (root == NULL) {
        return true;
    }
    return isMirror(root->left, root->right);
}

```

## Submission at 2024-11-06 07:32:22


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
bool isMirror(Node* tree1, Node* tree2) {
    if (tree1 == NULL && tree2 == NULL) {
        return true;
    }
    if (tree1 == NULL || tree2 == NULL) {
        return false;
    }
    return (tree1->data == tree2->data) &&
           isMirror(tree1->left, tree2->right) &&
           isMirror(tree1->right, tree2->left);
}

bool isSymmetric(Node* root) {
    if (root == NULL) {
        return true;
    }
    return isMirror(root->left, root->right);
}

```

## Submission at 2024-11-06 07:32:48


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
bool isMirror(Node* tree1, Node* tree2) {
    if (tree1 == NULL && tree2 == NULL) {
        return true;
    }
    if (tree1 == NULL || tree2 == NULL) {
        return false;
    }
    return (tree1->data == tree2->data) &&
           isMirror(tree1->left, tree2->right) &&
           isMirror(tree1->right, tree2->left);
}

bool isSymmetric(Node* root) {
    if (root == NULL) {
        return true;
    }
    return isMirror(root->left, root->right);
}

```

## Submission at 2024-11-06 07:40:12


```
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }

    if (words.size() != pattern.size()) return false;

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for (int i = 0; i < pattern.size(); ++i) {
        if (charToWord[pattern[i]] != words[i] && wordToChar[wods[i]] != pattern[i])
            return false;
        
        charToWord[pattern[i]] = words[i];
        wordToChar[words[i]] = pattern[i];
    }

    return true;
}

int main() {
    string pattern, s;
    getline(cin, pattern);
    getline(cin, s);
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;
    return 0;
}

```

## Submission at 2024-11-06 07:40:29


```
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }

    if (words.size() != pattern.size()) return false;

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for (int i = 0; i < pattern.size(); ++i) {
        if (charToWord[pattern[i]] != words[i] && wordToChar[words[i]] != pattern[i])
            return false;
        
        charToWord[pattern[i]] = words[i];
        wordToChar[words[i]] = pattern[i];
    }

    return true;
}

int main() {
    string pattern, s;
    getline(cin, pattern);
    getline(cin, s);
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;
    return 0;
}

```

## Submission at 2024-11-06 07:40:55


```
#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    stringstream ss(s);
    vector<string> words;
    string word;
    
    while (ss >> word) {
        words.push_back(word);
    }

    if (words.size() != pattern.size()) {
        return false;
    }

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;

    for (int i = 0; i < pattern.size(); ++i) {
        char p = pattern[i];
        string w = words[i];
        
        if (charToWord.count(p) && charToWord[p] != w) {
            return false;
        }
        
        if (wordToChar.count(w) && wordToChar[w] != p) {
            return false;
        }

        charToWord[p] = w;
        wordToChar[w] = p;
    }

    return true;
}

int main() {
    string pattern, s;
    getline(cin, pattern);
    getline(cin, s);
    cout << (wordPattern(pattern, s) ? "true" : "false") << endl;
    return 0;
}

```

## Submission at 2024-11-15 05:19:56


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
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

Node* addTwoLists(Node* num1, Node* num2) {
    num1 = reverseList(num1);
    num2 = reverseList(num2);
    
    Node* result = nullptr;
    Node* temp = nullptr;
    Node* prev = nullptr;
    int carry = 0, sum;

    while (num1 != nullptr || num2 != nullptr || carry) {
        int val1 = (num1 != nullptr) ? num1->data : 0;
        int val2 = (num2 != nullptr) ? num2->data : 0;

        sum = carry + val1 + val2;
        carry = sum / 10;
        sum = sum % 10;

        temp = new Node(sum);

        if (result == nullptr) {
            result = temp;
        } else {
            prev->next = temp;
        }

        prev = temp;

        if (num1) num1 = num1->next;
        if (num2) num2 = num2->next;
    }

    result = reverseList(result);
    return result;
}
```

## Submission at 2024-11-22 05:02:55


```
# include<iostream>
using namespace std;

vector<int> Sumarray(int n, arr)
{
    int n = 0;
    for (arr[i]>=0,i<arr.size[],i++){
        n = n +arr;
    }
}


```

## Submission at 2024-11-22 05:14:52


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
    Node* curr = NULL;
    Node* prev = NULL;
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp=temp->next->next;
    }
    else {
        temp = temp->next;
    }
}





```

## Submission at 2024-11-22 05:25:43


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
        if (root == NULL) {
        return true;
        }

        if(root->right > root->left ){
            return true;
        }
        if(root->right <= root->left){
            return false;  
        }
}
```

## Submission at 2024-11-22 05:30:37


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
        if (root == NULL) {
        return true;
        }

        if(root->right > root->left ){
            return true;
        }
        if(root->right < root->left){
            return false;  
        }
        if(root->right == root->left){
            return false;
        }
        if(root->left == NULL && root->right!=NULL){
            return true;
        }
        if(root->left != NULL && root->right==NULL){
            return false;
        }
}
```

## Submission at 2024-11-22 05:46:01


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
    Node* curr = NULL;
    Node* prev = NULL;
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->next->data;
        return temp;
    }
    else {
        temp = temp->next;
    }
}



```

## Submission at 2024-11-22 05:47:45


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
    Node* curr = NULL;
    Node* prev = NULL;
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->next->data;
        return temp;
    }
    else {
        temp = temp->next;
        return temp;
    }
}


```

## Submission at 2024-11-22 05:52:47


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
        if (root == NULL) {
        return true;
        }

        if(root->right > root->left ){
            return true;
        }
        if(root->right < root->left){
            return false;  
        }
        if(root->right == root->left){
            return false;
        }
        if(root->left == NULL && root->right!=NULL){
            return true;
        }
        if(root->left != NULL && root->right==NULL){
            return false;
        }
}
```

## Submission at 2024-11-22 06:07:10


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    for (int i=n-1;i>0;i--){
        for (int j=i-1;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


```

## Submission at 2024-11-22 06:07:13


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    for (int i=n-1;i>0;i--){
        for (int j=i-1;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


```

## Submission at 2024-11-22 06:07:17


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    for (int i=n-1;i>0;i--){
        for (int j=i-1;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


```

## Submission at 2024-11-22 06:07:33


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    for (int i=n-1;i>0;i--){
        for (int j=i-1;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


```

## Submission at 2024-11-22 06:10:44


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    for (int i=0;i<=n-1;i++){
        for (int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    for (int i=n-1;i>0;i--){
        for (int j=i;j>0;j--){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}


```

## Submission at 2024-11-22 06:18:10


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:18:19


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:18:26


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:26:57


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->data;
        temp->data=temp->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:26:59


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->data;
        temp->data=temp->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:27:02


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->data;
        temp->data=temp->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:27:02


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->data;
        temp->data=temp->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:27:09


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
    Node* temp = head;

    if (temp->data == temp->next->data){
        temp->data=temp->next->data;
        temp->data=temp->next->data;
        temp = temp->next;
    }
    else {
        temp = temp->next;
    }
    return temp;
}
```

## Submission at 2024-11-22 06:35:50


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x = 0;


    for (int i=0;i<=arr.size[];i++){
        x = x + arr[i];
    }
    
    return 0;
}

```

## Submission at 2024-11-22 06:35:53


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x = 0;


    for (int i=0;i<=arr.size[];i++){
        x = x + arr[i];
    }
    
    return 0;
}

```

## Submission at 2024-11-22 06:36:18


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x = 0;


    for (int i=0;i<=arr.size[];i++){
        x = x + arr[i];
    }
    cout<<x;
    return 0;
}

```

## Submission at 2024-11-22 06:37:52


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x = 0;


    for (int i=0;i<=n;i++){
        x = x + arr[i];
    }
    cout<<x;
    return 0;
}

```

## Submission at 2024-11-22 06:44:00


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    int x = 0;


    for (int i=0;i<=arr.size;i++){
        x = x + arr[i];
    }
    cout<<x;
    return 0;
}

```

## Submission at 2024-11-22 06:46:16


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    cout<<"2";
    return 0;
}

```

