## Submission at 2024-08-12 08:33:39


```
def subsets(nums):
    # Wrtie logic here
    res = []
    subset = []
    def dfs(i):
        if i >= len(nums):
            res.append(subset.copy())
            return
        
        subset.append(nums[i])
        dfs(i+1)

        subset.pop()
        dfs(i+1)

    dfs(0)
    return res
    

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

## Submission at 2024-08-12 09:34:32


```
def permutations(nums):
    result = []

    def permute_rec(nums, current_index, result):
        if current_index == len(nums) - 1:
            result.append(nums.copy())
            return

        for index in range(current_index, len(nums)):
            nums[current_index], nums[index] = nums[index], nums[current_index]
            permute_rec(nums, current_index + 1, result)
            nums[current_index], nums[index] = nums[index], nums[current_index]

    permute_rec(nums, 0, result)
    return result

def main():
    inp = input()
    temp = []
    for i in range(1,len(inp)-1):
        if inp[i] != ",":
            temp.append(inp[i])
    ans = permutations(temp)
    print(ans[0])
    for i in range(1, len(ans)):
        print("," + ans[i])

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-12 09:56:55


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x == 0){
        return 0;
    } else if (x == 1) {
        return 1;
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

## Submission at 2024-08-12 10:02:18


```
def fibonacci(x:int) -> int:
    if(x == 0):
        return 0
    elif(x == 1):
        return 1
    return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:54:30


```
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets(const vector<int>& nums) {
    

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

## Submission at 2024-08-12 10:55:08


```
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets(const vector<int>& nums) {
    recursiveCombinations(0, nums);
    return subsetCombinations;

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

## Submission at 2024-08-12 10:56:11


```
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back();
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets(const vector<int>& nums) {
    recursiveCombinations(0, nums);
    return subsetCombinations;

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

## Submission at 2024-08-12 10:57:18


```
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, const vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back();
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets(const vector<int>& nums) {
    recursiveCombinations(0, nums);
    return subsetCombinations;

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

## Submission at 2024-08-12 11:00:10


```
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back();
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets( vector<int>& nums) {
    recursiveCombinations(0, nums);
    return subsetCombinations;

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

## Submission at 2024-08-12 11:01:53


```
#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back();
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets( vector<int>& nums) {
    recursiveCombinations(0, nums);
    return subsetCombinations;

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

## Submission at 2024-08-12 11:03:24


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsetCombinations;
vector<int> tempCombination;

void recursiveCombinations(int ind, vector<int>& nums){
    if(ind == nums.size()){
        subsetCombinations.push_back(tempCombination);
        return;
    }

    tempCombination.push_back(nums[ind]);
    recursiveCombinations(ind+1, nums);

    tempCombination.pop_back();
    recursiveCombinations(ind+1, nums);

    return;
}
vector<vector<int>> subsets( vector<int>& nums) {
    recursiveCombinations(0, nums);
    return subsetCombinations;

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

## Submission at 2024-08-16 05:49:46


```
def is_power_of_two(n:int) -> int:
    if n == 1 or n == 2:
        return "true"
    elif n < 2:
        return "false"
    
    return is_power_of_two(n**(1/2))

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 11:43:42


```
n = int(input())
k = input().split(" ")
arr = []

for i in range(n):
    arr.append(int(k[i]))

count = 0
for i in arr:
    if len(str(i)) % 2 == 0:
        count += 1

print(count)
```

## Submission at 2024-08-23 04:32:26


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    temp = 1
    prev = None
    curr = head

    while curr.next != None:
        temp += 1
        prev = curr
        curr = curr.next

        if temp == k:
            prev.next = curr.next

    return head
```

## Submission at 2024-08-23 05:05:31


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class Solution:
    def reverseList(self, head):
        # Code here
        prev = head
        curr = head.next

        while curr.next != None:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        return curr
```

## Submission at 2024-08-23 05:08:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class Solution:
    def reverseList(self, head):
        # Code here
        prev = head
        curr = head.next

        while curr.next != None:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        return curr
        
```

## Submission at 2024-08-23 05:12:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class Solution:
    def reverseList(self, head):
        # Code here
        prev = head
        curr = head.next

        while curr.next != None:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        return curr

```

## Submission at 2024-08-23 05:14:32


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

class Solution:
    def reverseList(self, head):
        # Code here
        prev = None
        curr = head

        while curr.next != None:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp

        return curr

```

## Submission at 2024-08-28 08:58:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    prev = None
    curr = head

    while curr != None:
        temp = curr
        curr = curr.next
        temp.next = prev
        prev = temp

    return curr
```

## Submission at 2024-08-28 09:08:45


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    if head is None or head.next is None:
        return head

    # reverse the rest of the list
    rest = reverseLinkedList(head.next)

    # put the first element at the end
    head.next.next = head
    head.next = None

    # fix the head pointer
    return rest
```

## Submission at 2024-08-28 09:10:46


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
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {
        if (head == null || head.next == null) {
            return head;
        }

        // reverse the rest of the list
        Node rest = reverseLinkedList(head.next);

        // put the first element at the end
        head.next.next = head;
        head.next = null;

        // fix the head pointer
        return rest;
    }
}
```

## Submission at 2024-08-28 09:14:33


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
    if (head == NULL || head->next == NULL)
        return head;

    /* reverse the rest list and put
        the first element at the end */
    Node* rest = reverseLinkedList(head->next);
    head->next->next = head;

    head->next = NULL;

    /* fix the head pointer */
    return rest;
}

```

## Submission at 2024-08-28 09:41:35


```
class Solution:

    def spirallyTraverse(self, matrix):
        r = len(matrix)
        c = len(matrix[0])
        output = []

        row = 0
        col = 0

        while row < r and col < c:
            # storing the elements of 1st row from the remaining rows, in a list.
            for i in range(col, c):
                output.append(matrix[row][i])
            row += 1

            # storing elements of last column from remaining columns, in list.
            for i in range(row, r):
                output.append(matrix[i][c - 1])
            c -= 1

            # storing the elements of last row from remaining rows, in a list.
            if row < r:
                for i in range(c - 1, col - 1, -1):
                    output.append(matrix[r - 1][i])
                r -= 1

            # storing elements of 1st column from the remaining columns, in list.
            if col < c:
                for i in range(r - 1, row - 1, -1):
                    output.append(matrix[i][col])
                col += 1

        # returning the list.
        return output

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()

    t = int(data[0])
    index = 1
    for _ in range(t):
        r = int(data[index])
        c = int(data[index + 1])
        index += 2
        matrix = []
        for i in range(r):
            row = list(map(int, data[index:index + c]))
            matrix.append(row)
            index += c

        solution = Solution()
        result = solution.spirallyTraverse(matrix)
        print(" ".join(map(str, result)))
```

## Submission at 2024-08-28 09:48:21


```
class Solution:

    def spirallyTraverse(self, matrix):
        r = len(matrix)
        c = len(matrix[0])
        output = []

        row = 0
        col = 0

        while row < r and col < c:
            # storing the elements of 1st row from the remaining rows, in a list.
            for i in range(col, c):
                output.append(matrix[row][i])
            row += 1

            # storing elements of last column from remaining columns, in list.
            for i in range(row, r):
                output.append(matrix[i][c - 1])
            c -= 1

            # storing the elements of last row from remaining rows, in a list.
            if row < r:
                for i in range(c - 1, col - 1, -1):
                    output.append(matrix[r - 1][i])
                r -= 1

            # storing elements of 1st column from the remaining columns, in list.
            if col < c:
                for i in range(r - 1, row - 1, -1):
                    output.append(matrix[i][col])
                col += 1

        # returning the list.
        return output

if __name__ == "__main__":
    data = input().split()

    r, c = int(data[0]), int(data[1])
    matrix = [[0 for _ in range(c)] for _ in range(r)]
    for i in range(r):
        read = input().split()
        for j in range(c):
            matrix[i][j] = int(read[j])

        solution = Solution()
        result = solution.spirallyTraverse(matrix)
        print(" ".join(map(str, result)))
```

## Submission at 2024-08-30 04:05:46


```
# Write your Python code here from the scratch
print("Hello" + input() + "!")
```

## Submission at 2024-08-30 04:06:00


```
# Write your Python code here from the scratch
print("Hello " + input() + "!")
```

## Submission at 2024-09-09 03:59:02


```
# write code from scratch
n = int(input())
temp = input().split(" ")

nums = []
for i in range(n):
    nums.append(int(temp[i]))

def maxProfit(prices):
    buy = prices[0]
    _profit = 0
    for i in range(1, len(prices)):
        if prices[i] < buy:
            buy = prices[i]
        elif prices[i] - buy > _profit:
            _profit = prices[i] - buy
    return _profit

print(maxProfit(nums))
```

## Submission at 2024-09-13 07:11:38


```
#include <vector>
using namespace std;

vector<int> maximal_array(vector<int> &a, vector<int> &b){
    vector <int> c;
    for (int i = 0; i < a.size()-1; ++i){
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

## Submission at 2024-09-13 07:13:06


```
#include <vector>
using namespace std;

vector<int> maximal_array(vector<int> &a, vector<int> &b){
    vector <int>(a.size());
    for (int i = 0; i < a.size()-1; ++i){
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

## Submission at 2024-09-14 03:08:18


```
# write from scratch, create a function named Pow(x:int , n:int)
def recurs(x,n,val,i):
    if i == n:
        return val

    if n < 0:
        val *= (1/x)
        return recurs(x,n,val,i-1)
    else:
        val *= x
        return recurs(x,n,val,i+1)

x,n = int(input().split())

recurs(x,n,1,0)
```

## Submission at 2024-09-14 03:09:27


```
# write from scratch, create a function named Pow(x:int , n:int)
x,n = input().split()
x = int(x)
n = int(n)

def recurs(x,n,val,i):
    if i == n:
        return val

    if n < 0:
        val *= (1/x)
        return recurs(x,n,val,i-1)
    else:
        val *= x
        return recurs(x,n,val,i+1)

print(recurs(x,n,1,0))
```

## Submission at 2024-09-14 04:21:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    arr = []
    temp = head
    while temp.next!=None:
        arr.append(temp)
        temp = temp.next
    arr.append(temp)

    head = temp

    for i in range(len(arr)-1, -1,-1):
        temp.next = arr[i]
        temp = temp.next

    return head
    
    # Write your logic here


```

## Submission at 2024-09-14 04:30:24


```
# Write code from scratch
n = (int,input().strip())
a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))


def max_arr(a1,a2):
    c1 = []
    for i in range(0,len(a1)): 
        if a1[i] > a2[i]:
            c1.append(a1[i])
        else:
            c1.append(a2[i])
    return c1

print(max_arr(a1,a2))
```

## Submission at 2024-09-14 04:31:40


```
# Write code from scratch
n = (int,input().strip())
a1 = list(map(int, input().split()))
a2 = list(map(int, input().split()))


def max_arr(a1,a2):
    c1 = []
    for i in range(0,len(a1)): 
        if a1[i] > a2[i]:
            c1.append(a1[i])
        else:
            c1.append(a2[i])
    return c1

out = max_arr(a1,a2)
for i in out:
    print(i, end=" ")
```

## Submission at 2024-09-14 05:05:13


```
import java.util.Scanner;
import java.util.*;
class Main {
    public static String palindrome(String s,int l){
       if(l<0){
        return "";
       }
        return s.charAt(l-1)+palindrome(s,l-1);


        
    }
    public static void main (String args []) {
        Scanner sc = new Scanner(System.in);
        String str=sc.next();
        int l=str.length();
        
        String str2=palindrome(str,l);
        if(str.equals(str2)){
            System.out.println("YES");
        }
        else{
            System.out.println("NO")
        }
    }
}
```

## Submission at 2024-09-16 09:46:36


```
def pow_three(n):
    assert n>=0 and int(n)==n
    if n==1:
        return True
    elif n%3!=0:
        return False
    else:
        return (pow_three(n//3))

n = 27
print(pow_three(27))
```

## Submission at 2024-09-16 10:11:19


```
# Write Code from Scratch here
def powerofthree(n):
    if n<=0:
        return False
    if n==1:
        return True
    if n%3 != 0:
        return False
    else:
        return powerofthree(n//3)

powerofthree(int(input()))


```

## Submission at 2024-09-16 10:47:21


```
// Write Code from Scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(isPower(n));
    }
    public static String isPower(int n){
        
        if(n==1){
            return "True";
        }
        else if(n == 0){
            return "False";
        }
        else if(n%3 != 0){
            return "False";
        }
        
        else if(n%3 == 0){
            return isPower(n/3);
        }
        
        return "False";
    }
}
```

## Submission at 2024-09-16 11:07:03


```
//  #  include < vector >
 # include <iostream>
using namespace std;
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
    Node*temp=head;
    vector <int> ans;
    while(temp){
      ans.push_back(temp->data);
      temp = temp->next;
    }
    int i = ans.size();
    int start = 0;
    int end = i-1;
    while(start<=end){
      if(ans[start]==ans[end]){
        start++;
        end--;
      }
      else{
        return false;
      }
    }
    return true;
}
```

## Submission at 2024-10-03 09:57:32


```
n, m, k = int(input().split(" "))
arr = list(map(int, input().split(" ")))

def minDays(bloomDay, m, k):
    n=len(bloomDay)
    if m*k>n:
        return -1
    left=1
    right=max(bloomDay)
    while left<right:
        mid=(left+right)//2
        run=0
        count=0
        for day in bloomDay:
            
            if day>mid:
                run=0 
            else:
                run+=1
            if run>=k:
                run=0
                count+=1
                if count==m:
                    break
        if count==m:
            right=mid
        else:
            left=mid+1
    return left

minDays(arr, int(m), int(k))
```

## Submission at 2024-10-03 09:58:30


```
n, m, k = input().split(" ")
arr = list(map(int, input().split(" ")))

def minDays(bloomDay, m, k):
    n=len(bloomDay)
    if m*k>n:
        return -1
    left=1
    right=max(bloomDay)
    while left<right:
        mid=(left+right)//2
        run=0
        count=0
        for day in bloomDay:
            
            if day>mid:
                run=0 
            else:
                run+=1
            if run>=k:
                run=0
                count+=1
                if count==m:
                    break
        if count==m:
            right=mid
        else:
            left=mid+1
    return left

print(minDays(arr, int(m), int(k)))
```

## Submission at 2024-10-03 10:02:16


```
def dailyTemperatures(temperatures):
    st = []
    res = [0] * len(temperatures)

    for i in range(len(temperatures)):
        while st and temperatures[i] > temperatures[st[-1]]:
            idx = st.pop()
            res[idx] = i - idx
        st.append(i)
    
    return res

n = int(input())
arr = list(map(int, input().split(" ")))

print(dailyTemperatures(arr))
```

## Submission at 2024-10-03 10:03:07


```
def dailyTemperatures(temperatures):
    st = []
    res = [0] * len(temperatures)

    for i in range(len(temperatures)):
        while st and temperatures[i] > temperatures[st[-1]]:
            idx = st.pop()
            res[idx] = i - idx
        st.append(i)
    
    return res

n = int(input())
arr = list(map(int, input().split(" ")))

out = dailyTemperatures(arr)
for i in out:
    print(i, end=" ")
```

## Submission at 2024-10-07 06:56:01


```
def poor_count(new_total, n, arr):
    poor = 0
    avg = new_total / (2*n)

    for i in arr:
        if int(i) < avg:
            poor += 1

    return poor <= (n/2)

n = int(input())
arr = input().split(" ")

if n == 1 or n == 2:
    print(-1)
    continue

total = 0

for i in arr:
    total += int(i)

low = 0
high = n * total
while low < high:
    mid = low + (high - low) // 2
    if poor_count(total+mid, n, arr):
        low = mid + 1
    else:
        high = mid

print(low)
```

## Submission at 2024-10-07 06:56:37


```
def poor_count(new_total, n, arr):
    poor = 0
    avg = new_total / (2*n)

    for i in arr:
        if int(i) < avg:
            poor += 1

    return poor <= (n/2)

n = int(input())
arr = input().split(" ")

if n == 1 or n == 2:
    print(-1)

total = 0

for i in arr:
    total += int(i)

low = 0
high = n * total
while low < high:
    mid = low + (high - low) // 2
    if poor_count(total+mid, n, arr):
        low = mid + 1
    else:
        high = mid

print(low)
```

## Submission at 2024-10-07 06:58:22


```
def poor_count(new_total, n, arr):
    poor = 0
    avg = new_total / (2*n)

    for i in arr:
        if int(i) < avg:
            poor += 1

    return poor <= (n/2)

n = int(input())
arr = input().split(" ")

if n == 1 or n == 2:
    print(-1)

else:
    total = 0

    for i in arr:
        total += int(i)

    low = 0
    high = n * total
    while low < high:
        mid = low + (high - low) // 2
        if poor_count(total+mid, n, arr):
            low = mid + 1
        else:
            high = mid

    print(low)
```

## Submission at 2024-10-23 08:23:12


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#Function to return a list containing the postorder traversal of the tree.
def postOrder(root):
  out = []

  def recurs(node):
    if node == None:
      return

    recurs(node.left)
    recurs(node.right)
    out.append(node.data)

    return

  recurs(root)

  return out
```

## Submission at 2024-10-23 08:27:05


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#Function to return a list containing the postorder traversal of the tree.
def postOrder(root):
  out = []

  def recurs(node):
    if node == None:
      return

    recurs(node.left)
    recurs(node.right)
    out.append(node.data)

    return

  recurs(root)

  return out
```

## Submission at 2024-10-23 08:30:06


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

void postOrderUtil(struct Node* root, vector <int> &res)
{
    //postorder traversal works on Left Right Root.
          
    //if root is null then we simply return.
    if(root==NULL)
        return;
        
    //first, we call the recursive function for left subtree.
    postOrderUtil(root->left, res);
    //then we call the recursive function for right subtree.
    postOrderUtil(root->right, res);
    //then we store the data at root in a list.
    res.push_back (root->data);
}

vector <int> postOrder(Node* root)
{
    vector <int> res;
    postOrderUtil (root, res);
    //returning the list.
    return res;
}
```

## Submission at 2024-10-23 08:39:38


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    void postOrderUtil (Node root, ArrayList<Integer> res)
    {
        //postorder traversal works on Left Right Root.
          
        //if root is null then we simply return.
        if(root==null)
           return;
           
       //first, we call the recursive function for left subtree.
       postOrderUtil(root.left, res);
       //then we call the recursive function for right subtree.
       postOrderUtil(root.right, res);
       //then we store the data at root in a list.
       res.add (root.data);
    }
    
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       ArrayList<Integer> res = new ArrayList<Integer>(0); 
       postOrderUtil (root, res);
       //returning the list.
       return res;
    }
}
```

## Submission at 2024-10-24 09:43:41


```
# write code from scratch
ransomNote = input()
magazine = input()
out = True

dictionary = {}

for char in magazine:
    if char not in dictionary:
        dictionary[char] = 1
    else:
        dictionary[char] += 1

for char in ransomNote:
    if char in dictionary and dictionary[char] > 0:
        dictionary[char] -= 1
    else:
        out = False

if out:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-24 10:32:36


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
bool isMirror(struct Node *root1, struct Node *root2)
{
// Returns true if trees with roots as root1 and root2 are mirror { 
    // If both trees are emptu, then they are mirror images 
    if (root1 == NULL && root2 == NULL) 
        return true; 
  
    // For two trees to be mirror images, the following three 
    // conditions must be true 
    // 1 - Their root node's key must be same 
    // 2 - left subtree of left tree and right subtree 
    //      of right tree have to be mirror images 
    // 3 - right subtree of left tree and left subtree 
    //      of right tree have to be mirror images 
    if (root1 && root2 && root1->data == root2->data) 
        return isMirror(root1->left, root2->right) && 
               isMirror(root1->right, root2->left); 
  
    // if neither of above conditions is true then root1 
    // and root2 are not mirror images 
    return false; 
} 

class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    return isMirror(root, root);
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

## Submission at 2024-10-24 10:34:50


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isMirror(Node node1, Node node2)  
    { 
        // if both trees are empty, then they are mirror image 
        if (node1 == null && node2 == null) 
            return true; 
   
        // For two trees to be mirror images, the following three 
        // conditions must be true 
        // 1 - Their root node's key must be same 
        // 2 - left subtree of left tree and right subtree 
        //      of right tree have to be mirror images 
        // 3 - right subtree of left tree and left subtree 
        //      of right tree have to be mirror images 
        if (node1 != null && node2 != null && node1.data == node2.data) 
            return (isMirror(node1.left, node2.right) 
                    && isMirror(node1.right, node2.left)); 
   
        // if neither of the above conditions is true then 
        // root1 and root2 are mirror images 
        return false; 
    } 

    public static boolean isSymmetric(Node root)
    {
        return isMirror(root, root); 
    }
}
```

## Submission at 2024-10-24 10:37:07


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

def isMirror(root1 , root2): 
    # If both trees are empty, then they are mirror images 
    if root1 is None and root2 is None: 
        return True 
      
    """ For two trees to be mirror images, the following three 
        conditions must be true 
        1 - Their root node's key must be same 
        2 - left subtree of left tree and right subtree 
          of the right tree have to be mirror images 
        3 - right subtree of left tree and left subtree 
           of right tree have to be mirror images 
    """
    if (root1 is not None and root2 is not None): 
            if  root1.data == root2.data: 
                return (isMirror(root1.left, root2.right)and
                isMirror(root1.right, root2.left)) 
  
    # If neither of the above conditions is true then root1 
    # and root2 are not mirror images 
    return False

class Solution:
    def isSymmetric(self, root):
        return isMirror(root, root) 
```

## Submission at 2024-10-24 10:39:44


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
        return isMirror(root, root);
    }

    // returns true if trees with roots as root1 and root2 are mirror 
    public boolean isMirror(Node node1, Node node2)  
    { 
        // if both trees are empty, then they are mirror image 
        if (node1 == null && node2 == null) 
            return true; 
   
        // For two trees to be mirror images, the following three 
        // conditions must be true 
        // 1 - Their root node's key must be same 
        // 2 - left subtree of left tree and right subtree 
        //      of right tree have to be mirror images 
        // 3 - right subtree of left tree and left subtree 
        //      of right tree have to be mirror images 
        if (node1 != null && node2 != null && node1.data == node2.data) 
            return (isMirror(node1.left, node2.right) 
                    && isMirror(node1.right, node2.left)); 
   
        // if neither of the above conditions is true then 
        // root1 and root2 are mirror images 
        return false; 
    } 
}
```

## Submission at 2024-10-24 10:42:33


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
void postOrderUtil(struct Node* root, vector <int> &res)
{
    //postorder traversal works on Left Right Root.
          
    //if root is null then we simply return.
    if(root==NULL)
        return;
        
    //first, we call the recursive function for left subtree.
    postOrderUtil(root->left, res);
    //then we call the recursive function for right subtree.
    postOrderUtil(root->right, res);
    //then we store the data at root in a list.
    res.push_back (root->data);
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
    vector <int> res;
    postOrderUtil (root, res);
    //returning the list.
    return res;
}

```

## Submission at 2024-11-15 06:57:42


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    public static boolean isMirror(Node root){
        if(root.left==null && root.right==null){ return true;}
        if(root.left==null || root.right==null){return false;}
        Node left=root.left,right=root.right;
        if(left.data==right.data){return true;}
        return false;
    }
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
      if(root==null){return true;}
      return isMirror(root);
    }
}
```

## Submission at 2024-11-15 06:58:31


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    public static boolean isMirror(Node root){
        if(root.left==null && root.right==null){ return true;}
        if(root.left==null || root.right==null){return false;}
        Node left=root.left,right=root.right;
        if(left.data!=right.data){return false;}
        return true;
    }
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
      if(root==null){return true;}
      return isMirror(root);
    }
}
```

## Submission at 2024-11-16 03:27:05


```
# write code from scratch
def check(rN,M):
    ransom =[]
    magazine = []
    for i in rN:
        ransom.append(i)
    for j in M:
        magazine.append(j)
    a= len(ransom)
    b= len(magazine)
    if a>b:
        return"false"
    ransom.sort()
    magazine.sort()
    for i in range(a):
        if ransom[i]!=magazine[i]:
            return"false"
    return "true"

x=input()
y=input()
answer = check(x,y)
print(answer)
#
```

## Submission at 2024-11-17 06:07:44


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */


int sumh (Node* root, int currsum){
  if (root == NULL)
  {
    return 0;
  }

  currsum = currsum*10 + root->val;

  if (!root->left && !root->right)
  {
    return currsum;
  }

  int lsum = sumh(root->left,currsum);
  int rsum = sumh(root->right,currsum);

  return lsum + rsum;
}

//complete the function and return the value of the sum
int treePathSum(Node* root)
{
 
 int currsum = 0;
  int sumh (root,currsum);

  return currsum;
  // Your code here
}

```

## Submission at 2024-11-17 06:59:28


```
import java.util.ArrayList;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        int k = inp.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = inp.nextInt();
        }
        System.out.println(getMinFreq(n, k, arr));
    }

    public static int getMinFreq(int n, int k, int[] arr) {
        ArrayList<Integer> seen = new ArrayList<>();
        ArrayList<Integer> cnts = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (!in(seen, arr[i])) {
                cnts.add(1);
                seen.add(arr[i]);
            } else {
                int reqIndex = getIndex(seen, arr[i]);
                cnts.set(reqIndex, cnts.get(reqIndex) + 1);
            }
        }
        int maxCnt = max(cnts);
        return seen.get(getIndex(cnts, maxCnt));
    }

    public static boolean in(ArrayList<Integer> arr, int ele) {
        for (int i = 0; i < arr.size(); i++) if (arr.get(i) == ele) return true;
        return false;
    }

    public static int getIndex(ArrayList<Integer> arr, int ele) {
        for (int i = 0; i < arr.size(); i++) if (arr.get(i) == ele) return i;
        return -1;
    }

    public static int max(ArrayList<Integer> arr) {
        int max = arr.get(0);
        for (int i = 0; i < arr.size(); i++) {
            if (max < arr.get(i)) max = arr.get(i);
        }
        return max;
    }
}
```

## Submission at 2024-11-17 07:01:23


```
import java.util.ArrayList;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        int k = inp.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = inp.nextInt();
        }
        System.out.println(getMinFreq(n, k, arr));
    }

    public static int getMinFreq(int n, int k, int[] arr) {
        ArrayList<Integer> seen = new ArrayList<>();
        ArrayList<Integer> cnts = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (!in(seen, arr[i])) {
                cnts.add(1);
                seen.add(arr[i]);
            } else {
                int reqIndex = getIndex(seen, arr[i]);
                cnts.set(reqIndex, cnts.get(reqIndex) + 1);
            }
        }
        int maxCnt = max(cnts);
        if (maxCnt < k) {
            return -1;
        }
        return seen.get(getIndex(cnts, maxCnt));
    }

    public static boolean in(ArrayList<Integer> arr, int ele) {
        for (int i = 0; i < arr.size(); i++) if (arr.get(i) == ele) return true;
        return false;
    }

    public static int getIndex(ArrayList<Integer> arr, int ele) {
        for (int i = 0; i < arr.size(); i++) if (arr.get(i) == ele) return i;
        return -1;
    }

    public static int max(ArrayList<Integer> arr) {
        int max = arr.get(0);
        for (int i = 0; i < arr.size(); i++) {
            if (max < arr.get(i)) max = arr.get(i);
        }
        return max;
    }
}
```

## Submission at 2024-11-17 09:34:43


```
a = input()
a = a.split()
order = a[0]
s = a[1]

d = {}
for char in s:
    if char in d:
        d[char] += 1
    else:
        d[char] = 1

i = 0
p = ""

for char in s:
    if char in order:
        p += order[i]*d[order[i]]
        i += 1
    else:
        p += char
    

print(p)


```

## Submission at 2024-11-21 09:03:08


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isBST(self, root):
        return (self.isBSTUtil(root, 0, 1000))

    def isBSTUtil(self, node, mini, maxi):
        if node is None:
            return True

        if node.data < mini or node.data > maxi:
            return False

        return (self.isBSTUtil(node.left, mini, node.data - 1) and self.isBSTUtil(node.right, node.data+1, maxi))
```

