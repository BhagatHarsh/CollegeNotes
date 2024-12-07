## Submission at 2024-08-05 10:14:46


```
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:37:03


```
name = input()
print("Hello " + name + "!")
```

## Submission at 2024-08-05 10:38:14


```
n = int(input())

for i in range(n):
    name = input()
    print("Hello " + name + "!")
```

## Submission at 2024-08-12 09:41:51


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
        // Write your code here
        if (x == 0) {
            return 0;
        }
        if (x == 1) {
            return 1;
        }
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

```

## Submission at 2024-08-12 09:50:07


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
        // write your logic here
        if (n == 1) {
            return true;
        }
        if (n % 2 == 0) {
            return isPowerOfTwo(n/2);
        }
        
        return false;
    }
}

```

## Submission at 2024-08-12 09:51:45


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
        // write your logic here
        if (n == 1 || n == 0) {
            return true;
        }
        if (n % 2 == 0) {
            return isPowerOfTwo(n/2);
        }
        
        return false;
    }
}

```

## Submission at 2024-08-13 04:04:26


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
        List<List<Integer>> answer = new ArrayList<>();
        List<Integer> tempSubset = new ArrayList<>();
        int index = 0;
        recurFun(nums, answer, tempSubset, index);
        return answer;
    }

    public static void recurFun(int[] nums, List<List<Integer>> answer, List<Integer> tempSubset, int index) {
        if (index == nums.length) {
            answer.add(new ArrayList<>(tempSubset));
            return;
        }
        tempSubset.add(nums[index]);
        recurFun(nums, answer, tempSubset, index+1);

        tempSubset.remove(tempSubset.size()-1);
        recurFun(nums, answer, tempSubset, index+1);
    }
}

```

## Submission at 2024-08-16 08:49:21


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
    for (int i=start; i<=n ;i++)
    {
        current.push_back(i);
        combine(++start, k, n, current, result);
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

## Submission at 2024-08-17 09:11:56


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << ans[i];
            break;
        }
        cout << ans[i] << ", ";
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 09:33:44


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << ans[i];
            break;
        }
        cout << ans[i] << ", ";
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 09:34:36


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << ans[i];
            break;
        }
        cout << ans[i] << ", ";
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 09:36:17


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << ans[i];
            break;
        }
        cout << '"'<< ans[i];
        cout << '"';
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 09:37:00


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << ans[i];
            break;
        }
        cout << '"'<< ans[i];
        cout << '"' << ", ";
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 09:38:27


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << '"' << ans[i] << '"';
            break;
        }
        cout << '"' << ans[i];
        cout << '"' << ", ";
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 09:39:09


```
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void combine(int n, string curr, vector<string> &ans, int ob, int cb)
{
    if (curr.length() == 2 * n)
    {
        ans.push_back(curr);
        return;
    }
    if (ob < n)
    {
        combine(n, curr + '(', ans, ob + 1, cb);
    }
    if (cb < ob)
    {
        combine(n, curr + ')', ans, ob, cb + 1);
    }
}

vector<string> combine(int n)
{
    int ob = 0;
    int cb = 0;
    vector<string> ans;
    string curr = "";
    combine(n, curr, ans, ob, cb);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> ans = combine(n);
    cout << '[';
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
        {
            cout << '"' << ans[i] << '"';
            break;
        }
        cout << '"' << ans[i];
        cout << '"' << ",";
    }
    cout << ']' << endl;
}
```

## Submission at 2024-08-17 10:59:55


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void helper(vector<int> &nums, vector<int> &current, vector<vector<int>> &result, int freq[])
{
    if (current.size() == nums.size())
    {
        result.push_back(current);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])
        {
            freq[i] = 1;
            current.push_back(nums[i]);
            helper(nums, current, result, freq);
            current.pop_back();
            freq[i] = 0;
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> current;
    vector<vector<int>> result;
    int freq[nums.size()];
    for (int i = 0; i < nums.size(); i++)
        freq[i] = 0;
    helper(nums, current, result, freq);
    return result;
}
int main()
{
    vector<int> nums;
    int num;
    while (cin >> num)
    {
        nums.push_back(num);
        if (cin.get() == '\n')
            break;
    }
    vector<vector<int>> permutations = permute(nums);

    // Print the result
    cout << "[";
    for (int i = 0; i < permutations.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < permutations[i].size(); j++)
        {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i < permutations.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-23 10:00:03


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
    Node *temp = head;
    while (temp->next->data != x) {
        temp = temp->next;
    }
    
    temp->next = temp->next->next;
    return head;
}

```

## Submission at 2024-09-02 03:25:32


```
// Write code from scratch#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r)
{
    if (l>r)
    {
        return true;
    }
    if (s[l] != s[r]);
    return(s, l+1, r-1);
}

int main()
{
    string s;
    cin >> s;
    cout << (isPalindrome(s, 0, s.size() - 1) ? "YES" : "NO") << endl;
}
```

## Submission at 2024-09-02 09:30:50


```
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int c)
{
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return pow(x*x, n-1, 0);
    }
    if (n < 0)
    {
        pow(x/n, n, c+1);
        return c;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n) << endl;
}
```

## Submission at 2024-09-02 09:31:33


```
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int c)
{
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return pow(x*x, n-1, 0);
    }
    if (n < 0)
    {
        pow(x/n, n, c+1);
        return c;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n, 0) << endl;
}
```

## Submission at 2024-09-02 09:32:55


```
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int c)
{
    if (n == 1)
    {
        return c;
    }
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return pow(x*x, n-1, 0);
    }
    if (n < 0)
    {
        pow(x/n, n, c+1);
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n, 0) << endl;
}
```

## Submission at 2024-09-02 09:33:52


```
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int c)
{
    if (n == 1)
    {
        return c;
    }
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return pow(x*x, n-1, 0);
    }
    if (n < 0)
    {
        pow(x/n, n, c+1);
        return c;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n, 0) << endl;
}
```

## Submission at 2024-09-02 09:34:32


```
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int c)
{
    if (n == 1)
    {
        return c;
    }
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return pow(x*x, n-1, 0);
    }
    if (n < 0)
    {
        pow(x/n, n, c+1);
        return c;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n) << endl;
}
```

## Submission at 2024-09-02 09:35:12


```
#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n, int c)
{
    
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {
        return pow(x*x, n-1, 0);
    }
    if (n < 0)
    {
        pow(x/n, n, c+1);
        return c;
    }
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << pow(x, n) << endl;
}
```

## Submission at 2024-09-02 09:47:50


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
    while (temp != nullptr)
    {
        result.push_back(temp->data);
        temp = temp->next;
    }
    return result;
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
    ListNode *temp = head;
    while (temp != nullptr)
    {
        result.push_back(temp->val);
        temp = temp->next;
    }
    return result;
}

```

## Submission at 2024-09-02 09:51:51


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
    Node *temp = head;
    for (int i=1; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
}

```

## Submission at 2024-09-02 09:52:41


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
    Node *temp = head;
    for (int i=1; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
}

```

## Submission at 2024-09-02 09:53:20


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
    Node *temp = head;
    for (int i=0; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
}

```

## Submission at 2024-09-02 09:53:40


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
    Node *temp = head;
    for (int i=0; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp = temp->next;
}

```

## Submission at 2024-09-02 09:54:29


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
    Node *temp = head;
    for (int i=0; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp = temp->next;
    return head;
}

```

## Submission at 2024-09-02 09:58:23


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
    Node *temp = head;
    for (int i=0; i<x; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}

```

## Submission at 2024-09-02 09:59:20


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
    Node *temp = head;
    for (int i=0; i<x; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}

```

## Submission at 2024-09-02 10:00:37


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
    Node *temp = head;
    for (int i=0; i<x; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}

```

## Submission at 2024-09-02 10:02:39


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
    Node *temp = head;
        if (x == 0)
        {
            return deleteFirst();
        }
        if (x == this->size)
        {
            return deleteLast();
        }
        for (int i = 0; i < x - 1; i++)
        {
            temp = temp->next;
        }

    temp->next = temp->next->next;
    return head;
}

```

## Submission at 2024-09-02 10:04:30


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
    Node *temp = head;
    for (int i = 0; i < x - 1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}

```

## Submission at 2024-09-02 10:05:56


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
    Node *temp = head;
    for (int i=0; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}
```

## Submission at 2024-09-02 10:07:09


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
    Node *temp = head;
    for (int i=1; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}
```

## Submission at 2024-09-02 10:08:25


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
    Node *temp = head;
    if (x == 1)
    {
        head = head->next;
        return head;
    }
    for (int i=1; i<x-1; i++)
    {
        temp = temp->next;
    }

    temp->next = temp->next->next;
    return head;
}
```

## Submission at 2024-09-02 10:18:30


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    for (int i=0; i<n; i++)
    {
        c[i] = max(a[i], b[i]);
        cout << c[i] << " ";
    }
    cout << endl;
}

int main()
{
    solve();
}
```

## Submission at 2024-09-02 10:23:06


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
    Node *temp = head;
    int size = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        size++;
    }
    if (k > size)
    {
        return -1;
    }
    temp = head;
    for (int i=1; i<k; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}

```

## Submission at 2024-09-02 10:29:22


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
    Node *temp = head;
    Node *prev = nullptr;
    Node *forward = nullptr;

    while (temp != nullptr)
    {
        forward = temp->next;
        temp->next = prev;
        temp = prev;
        forward = temp;
    }
    head = prev;
    return head;
}

```

## Submission at 2024-09-02 10:31:18


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
    Node *temp = head;
    Node *prev = nullptr;
    Node *forward = nullptr;

    while (temp != nullptr)
    {
        forward = temp->next;
        temp->next = prev;
        prev = temp;
        temp = forward;
    }
    head = prev;
    return head;
}

```

## Submission at 2024-09-06 11:02:47


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int len1, len2;
    cin >> len1 >> len2;
    if (len1 != len2)
    {
        cout << "false" << endl;
        return;
    }
    int arr1[len1];
    int arr2[len2];

    for (int i=0; i<len1; i++)
    {
        cin >> arr1[i];
    }
    
    for (int i=0; i<len1; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr1+len1);
    sort(arr2, arr2+len2);

    for (int i=0; i<len1; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "false" << endl;
            return;
        }
    }

    cout << "true" << endl;
}

int main()
{
    solve();
}
```

## Submission at 2024-09-06 11:07:58


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i=1; i<=n; i++)
    {
        if (i%3 == 0 || i%5 == 0 || i%7 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main()
{
    solve();
}
```

## Submission at 2024-09-06 11:08:08


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i=1; i<=n; i++)
    {
        if (i%3 == 0 || i%5 == 0 || i%7 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
}

int main()
{
    solve();
}
```

## Submission at 2024-09-06 11:12:19


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        cin >> m;
        int size = log10(m)+1;
        if (size%2 == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main()
{
    solve();
}
```

## Submission at 2024-09-06 11:13:21


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        cin >> m;
        int size = log10(m)+1;
        if (size%2 == 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
```

## Submission at 2024-09-06 11:26:23


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for (int i=0; i<arr[n-1]; i++)
    {
        if (!k)
        {
            cout << i << endl;
        }
        if (i != arr[j])
        {
            k--;
        }
        else
        {
            j++;
        }
    }
}
```

## Submission at 2024-09-06 11:27:48


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for (int i=1; i<arr[n-1]; i++)
    {
        if (!k)
        {
            cout << i << endl;
        }
        if (i != arr[j])
        {
            k--;
        }
        else
        {
            j++;
        }
    }
}
```

## Submission at 2024-09-06 11:29:16


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for (int i=0; i<arr[n-1]; i++)
    {
        if (k == 0)
        {
            cout << i << endl;
        }
        if (i != arr[j])
        {
            k--;
        }
        else
        {
            j++;
        }
    }
}
```

## Submission at 2024-09-06 11:31:23


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for (int i=0; i<arr[n-1]; i++)
    {
        if (k == 0)
        {
            cout << i << endl;
            break;
        }
        if (i != arr[j])
        {
            k--;
        }
        else
        {
            j++;
        }
    }
}
```

## Submission at 2024-09-06 11:31:50


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int j=0;
    for (int i=1; i<arr[n-1]; i++)
    {
        if (k == 0)
        {
            cout << i << endl;
            break;
        }
        if (i != arr[j])
        {
            k--;
        }
        else
        {
            j++;
        }
    }
}
```

## Submission at 2024-09-06 11:44:10


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int matrix[m][n];

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
```

## Submission at 2024-09-09 04:55:17


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    // Your code here
    vector<int> ans;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int maxSum = rows + cols - 2;
    if (rows == 1)
    {
        for (int i = 0; i < cols; i++)
        {
            ans.push_back(matrix[0][i]);
        }
        return ans;
    }
    for (int i = 0; i < rows; i++)
    {
        int k = 0;
        for (int j = i; j >= 0; j--)
        {
            if (k < cols)
            {
                ans.push_back(matrix[j][k]);
                k++;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        int k = rows - 1;
        for (int j = i + 1; j < cols; j++)
        {
            ans.push_back(matrix[k][j]);
            k--;
        }
    }
    return ans;
}

```

## Submission at 2024-09-09 09:12:31


```
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r)
{
    if (l>r)
    {
        return true;
    }
    if (s[l] != s[r])
    {
        return false;
    }
    return(s, l+1, r-1);
}

int main()
{
    string s;
    cin >> s;
    cout << (isPalindrome(s, 0, s.size() - 1) ? "YES" : "NO") << endl;
}
```

## Submission at 2024-09-09 09:33:11


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    // Write logic here
    vector<vector<int>> ans;
    vector<int> temp;
    int index=0;
    subsets(0, nums, temp, ans);
    return ans;
    
}

void subsets(int index; const vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans)
{
    if (temp.size() == nums.size())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
    subsets(index+1, nums, temp, ans);

    temp.pop_back();
    subsets(index+1, nums, temp, ans);
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

## Submission at 2024-09-09 09:33:44


```
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    // Write logic here
    vector<vector<int>> ans;
    vector<int> temp;
    int index=0;
    subsets(0, nums, temp, ans);
    return ans;
    
}

void subsets(int index, const vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans)
{
    if (temp.size() == nums.size())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
    subsets(index+1, nums, temp, ans);

    temp.pop_back();
    subsets(index+1, nums, temp, ans);
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

## Submission at 2024-09-09 09:38:01


```
#include <bits/stdc++.h>

using namespace std;
void subset(int index, const vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans)
{
    if (temp.size() == nums.size())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(nums[index]);
    subset(index+1, nums, temp, ans);

    temp.pop_back();
    subset(index+1, nums, temp, ans);
}
vector<vector<int>> subsets(const vector<int>& nums) {
    // Write logic here
    vector<vector<int>> ans;
    vector<int> temp;
    int index=0;
    subset(0, nums, temp, ans);
    return ans;
    
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

## Submission at 2024-09-09 09:48:35


```
#include <bits/stdc++.h>
using namespace std;

bool isPow(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (n%3 == 0)
    {
        return isPow(n/3);
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    cout << (isPow(n) ? "True" : "False") << endl;
}
```

## Submission at 2024-09-09 09:51:11


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    int cnt = 0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == c)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}
```

## Submission at 2024-09-09 10:02:12


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
    Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    while (temp != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != NULL)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    temp = head;
    return temp;
}

```

## Submission at 2024-09-09 10:07:45


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

Node* reverse(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while (curr != NULL)
    {
      forward = curr->next;
      curr->next = prev;
      prev = curr;
      curr = forward;
    }

    return prev;
}

bool isPalindrome(Node *head) {
    // Your code here
    Node* temp1 = head;
    Node* temp2 = reverse(head);
    while (temp1 != NULL)
    {
      if (temp1->data != temp2->data)
      {
        return false;
      }
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
    return true;
}
```

## Submission at 2024-09-09 10:15:38


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<int> maxes(cols);
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT32_MIN;
    }
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
        }
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] == -1)
            {
                matrix[j][i] = maxes[i];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-09 10:24:05


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
     Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != NULL)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    temp = head;
    return temp;
}

```

## Submission at 2024-09-09 10:24:47


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
    Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != NULL)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:25:23


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
    Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    while (temp != nullptr && temp->next != nullptr && temp->next->next != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != NULL)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:26:04


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
    Node *temp = head;
    
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != NULL)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:26:36


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
    Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    if (head == nullptr)
    {
        return nullptr;
    }
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != NULL)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:28:17


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
	Node temp = head;
    if (head-.next == NULL)
    {
        return head;
    }
    while (temp != null && temp->next != null)
    {
        while (temp.data == temp.next.data && temp.next != null)
        {
            temp.next = temp.next.next;
            
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 10:28:32


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
	Node temp = head;
    if (head.next == NULL)
    {
        return head;
    }
    while (temp != null && temp->next != null)
    {
        while (temp.data == temp.next.data && temp.next != null)
        {
            temp.next = temp.next.next;
            
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 10:28:44


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
	Node temp = head;
    if (head.next == null)
    {
        return head;
    }
    while (temp != null && temp->next != null)
    {
        while (temp.data == temp.next.data && temp.next != null)
        {
            temp.next = temp.next.next;
            
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 10:28:59


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
	Node temp = head;
    if (head.next == null)
    {
        return head;
    }
    while (temp != null && temp.next != null)
    {
        while (temp.data == temp.next.data && temp.next != null)
        {
            temp.next = temp.next.next;
            
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 10:31:44


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
    Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    if (head == nullptr)
    {
        return nullptr;
    }
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data && temp->next != nullptr)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:32:25


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
     Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    if (head == nullptr)
    {
        return nullptr;
    }
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
            
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:34:30


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
     Node *temp = head;
    if (head->next == NULL)
    {
        return head;
    }
    if (head == nullptr)
    {
        return nullptr;
    }
    while (temp != nullptr && temp->next != nullptr)
    {
        while (temp->data == temp->next->data)
        {
            if (temp->next->next == nullptr)
            {
                head = new Node(temp->data);
                return head;
            }
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return head;
}

```

## Submission at 2024-09-09 10:45:15


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    if (cols == 1)
    {
        int max = INT_MIN;
        for (int i=0; i<rows; i++)
        {
            if (max < matrix[0][i])
                max = matrix[0][i];
        }
        for (int i=0; i<rows; i++)
        {
            if (matrix[0][i] == -1)
            {
                matrix[0][i] = max;
            }
        }
        return matrix;
    }
    vector<int> maxes(cols);
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT_MIN;
    }
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
        }
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-09 10:47:35


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    if (rows == 1)
    {
        return matrix;
    }
    if (cols == 1)
    {
        int max = INT_MIN;
        for (int i=0; i<rows; i++)
        {
            if (max < matrix[0][i])
                max = matrix[0][i];
        }
        for (int i=0; i<rows; i++)
        {
            if (matrix[0][i] == -1)
            {
                matrix[0][i] = max;
            }
        }
        return matrix;
    }
    vector<int> maxes(cols);
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT_MIN;
    }
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
        }
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-09 11:04:31


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    if (rows == 1)
    {
        return matrix;
    }
    if (cols == 1)
    {
        int max = INT_MIN;
        for (int i=0; i<rows; i++)
        {
            if (max < matrix[0][i])
                max = matrix[0][i];
        }
        for (int i=0; i<rows; i++)
        {
            if (matrix[0][i] == -1)
            {
                matrix[0][i] = max;
            }
        }
        return matrix;
    }
    vector<int> maxes(cols);
    
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT_MIN;
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
        }
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-09 11:07:38


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int cnt=0;
    if (rows == 1)
    {
        return matrix;
    }
    if (cols == 1)
    {
        int max = INT_MIN;
        for (int i=0; i<rows; i++)
        {
            if (max < matrix[0][i])
                max = matrix[0][i];
        }
        for (int i=0; i<rows; i++)
        {
            if (matrix[0][i] == -1)
            {
                matrix[0][i] = max;
            }
        }
        return matrix;
    }
    vector<int> maxes(cols);
    
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT_MIN;
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
            if (matrix[i][j] = -1)
                cnt++;
        }
    }
    if (cnt == 0)
        return matrix;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-09 11:08:36


```

// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    if (rows == 1)
    {
        return matrix;
    }
    if (cols == 1)
    {
        int max = INT_MIN;
        for (int i=0; i<rows; i++)
        {
            if (max < matrix[0][i])
                max = matrix[0][i];
        }
        for (int i=0; i<rows; i++)
        {
            if (matrix[0][i] == -1)
            {
                matrix[0][i] = max;
            }
        }
        return matrix;
    }
    vector<int> maxes(cols);
    
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT_MIN;
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
        }
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-13 12:00:58


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    if (rows == 1)
    {
        return matrix;
    }
    if (cols == 1)
    {
        int max = INT_MIN;
        for (int i=0; i<rows; i++)
        {
            if (max < matrix[0][i])
                max = matrix[0][i];
        }
        for (int i=0; i<rows; i++)
        {
            if (matrix[0][i] == -1)
            {
                matrix[0][i] = max;
            }
        }
        return matrix;
    }
    vector<int> maxes(cols);
    
    for (int i=0; i<cols; i++)
    {
        maxes[i] = INT_MIN;
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[j][i] > maxes[i])
            {
                maxes[i] = matrix[j][i];
            }
        }
    }
    
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }
    return matrix;
};
```

## Submission at 2024-09-13 12:02:17


```
vector<vector<int>> modifyMatrix(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> maxes(cols, INT_MIN);
    
    // Find the maximum value for each column
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            maxes[j] = max(maxes[j], matrix[i][j]);
        }
    }
    
    // Replace -1 with the maximum value of the respective column
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = maxes[j];
            }
        }
    }
    
    return matrix;
}
```

## Submission at 2024-09-13 12:05:31


```
/ Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> maxes(cols, INT_MIN);

    for (int j=0; j<cols; j++)
    {
        for (int i=0; i<rows; i++)
        {
            maxes[j] = max(matrix[i][j], maxes[j]);
        }
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }

    return matrix;
};
```

## Submission at 2024-09-13 12:05:32


```
/ Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> maxes(cols, INT_MIN);

    for (int j=0; j<cols; j++)
    {
        for (int i=0; i<rows; i++)
        {
            maxes[j] = max(matrix[i][j], maxes[j]);
        }
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }

    return matrix;
};
```

## Submission at 2024-09-13 12:06:12


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> maxes(cols, INT_MIN);

    for (int j=0; j<cols; j++)
    {
        for (int i=0; i<rows; i++)
        {
            maxes[j] = max(matrix[i][j], maxes[j]);
        }
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }

    return matrix;
};
```

## Submission at 2024-09-13 12:07:31


```
// Complete the given function
vector<vector<int>> modifyMatrix(vector<vector<int>> matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> maxes(cols, INT_MIN);

    for (int j=0; j<cols; j++)
    {
        for (int i=0; i<rows; i++)
        {
            maxes[j] = max(matrix[i][j], maxes[j]);
        }
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<cols; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = maxes[j];
            }
        }
    }

    return matrix;
};
```

## Submission at 2024-09-13 12:15:43


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        for (int i=0; i<cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        for (int j=0; j<cols; j++) {
            for (int i=0; i<rows; i++) {
                if (maxes.get(j) < matrix.get(i).get(j)) {
                    maxes.get(j) = matrix.get(i).get(j);
                }
            }
        }

        for (int i=0; i<rows; i++) {
            for (int j=0;; j<cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).get(j) = maxes.get(j);
                }
            }
        }

        return matrix;
    }
}

```

## Submission at 2024-09-13 12:18:13


```
import java.util.ArrayList;
import java.util.List;

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        // Initialize maxes with minimum values
        for (int i = 0; i < cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        // Find maximum value for each column
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                maxes.set(j, Math.max(maxes.get(j), matrix.get(i).get(j)));
            }
        }

        // Replace -1 with maximum value of the column
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).set(j, maxes.get(j));
                }
            }
        }

        return matrix;
    }
}
```

## Submission at 2024-09-13 12:18:57


```

class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        // Initialize maxes with minimum values
        for (int i = 0; i < cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        // Find maximum value for each column
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                maxes.set(j, Math.max(maxes.get(j), matrix.get(i).get(j)));
            }
        }

        // Replace -1 with maximum value of the column
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).set(j, maxes.get(j));
                }
            }
        }

        return matrix;
    }
}
```

## Submission at 2024-09-13 12:27:19


```
#include <bits/stdc++.h>
using namespace std;

int freq(string s, char c, int cnt, int i)
{
    if (i > s.length())
        return cnt;
    if (s[i] == c)
        return freq(s, c, cnt+1, i+1);
    else
        return freq(s, c, cnt, i+1);
}

int main()
{
    string s;
    char c;
    cin >> s >> c;

    cout << freq(s, c, 0, 0) << endl;
}
```

## Submission at 2024-09-16 09:28:21


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        // Initialize maxes with minimum values
        for (int i = 0; i < cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        // Find maximum value for each column
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                maxes.set(j, Math.max(maxes.get(j), matrix.get(i).get(j)));
            }
        }

        // Replace -1 with maximum value of the column
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).set(j, maxes.get(j));
                }
            }
        }

        return matrix;
    }
}
```

## Submission at 2024-09-16 09:28:48


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        List<Integer> maxes = new ArrayList<>();
        
        // Initialize maxes with minimum values
        for (int i = 0; i < cols; i++) {
            maxes.add(Integer.MIN_VALUE);
        }

        // Find maximum value for each column
        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                maxes.set(j, Math.max(maxes.get(j), matrix.get(i).get(j)));
            }
        }

        // Replace -1 with maximum value of the column
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix.get(i).get(j) == -1) {
                    matrix.get(i).set(j, maxes.get(j));
                }
            }
        }

        return matrix;
    }
}
```

## Submission at 2024-10-07 09:48:23


```
// Function to reverse the queue.

queue<int> rev(queue<int> q){
    // Write your code here
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}

```

## Submission at 2024-10-07 09:55:14


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> ans;
    
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] != '+')
        {
            ans.push_back(s[i]);
        }    
    }
    
    sort(ans.begin(), ans.end());
    for (int i=0; i<ans.size()-1; i++)
    {
        cout << ans[i] << "+";
    }
    cout << ans[ans.size()-1];
}
```

## Submission at 2024-10-07 09:55:35


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<char> ans;
    
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] != '+')
        {
            ans.push_back(s[i]);
        }    
    }
    
    sort(ans.begin(), ans.end());
    for (int i=0; i<ans.size()-1; i++)
    {
        cout << ans[i] << "+";
    }
    cout << ans[ans.size()-1];
}
```

## Submission at 2024-10-07 10:00:53


```
#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string t;
    for (int i=0; i<s.length(); i++)
    {
        t[i] = s[s.length()-i-1];
    }
    return t;
}

int main()
{
    string s;
    cin >> s;
    string t="";
    for (int i=0; i<s.length(); i++)
    {
        while (s[i] != '.')
        {
            t += s[i];
        }
    }
}
```

## Submission at 2024-10-07 10:03:25


```
#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string t;
    for (int i=0; i<s.length(); i++)
    {
        t[i] = s[s.length()-i-1];
    }
    return t;
}

int main()
{
    string s;
    cin >> s;
    
    queue<string> q;
    for (int i=0; i<s.length(); i++)
    {
        while (s[i] != '.')
        {
            
        }
    }
}
```

## Submission at 2024-10-07 10:22:11


```
#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string t;
    for (int i=s.length()-1; i>=0; i--)
    {
        t+=s[i];
    }
    return t;
}

int main()
{
    string s;
    cin >> s;
    
    queue<string> q;
    int k=0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == '.')
        {
            string t="";
            for (int j=k; j<i; j++)
            {
                t+=s[j];
            }
            q.push(rev(t));
            k=i+1;
        }
    }

    while (!q.empty())
    {
        cout << q.front() << ".";
        q.pop();
    }
}
```

## Submission at 2024-10-07 10:25:12


```
#include <bits/stdc++.h>
using namespace std;

string rev(string s)
{
    string t;
    for (int i=s.length()-1; i>=0; i--)
    {
        t+=s[i];
    }
    return t;
}

int main()
{
    string s;
    cin >> s;
    
    queue<string> q;
    int k=0;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == '.')
        {
            string t="";
            for (int j=k; j<i; j++)
            {
                t+=s[j];
            }
            q.push(rev(t));
            k=i+1;
        }
    }
    string t="";
    for (int i=k; i<s.length(); i++)
    {
        t+=s[i];
    }
    q.push(rev(t));

    cout << q.front();
    q.pop();
    while (!q.empty())
    {
        cout << "." << q.front();
        q.pop();
    }
}
```

## Submission at 2024-10-07 10:42:55


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> piles(n);
    for (int i=0; i<n; i++)
    {
        cin >> piles[i];
    }

    int MAX = piles[0];
    for (int i=1; i<n; i++)
    {
        if (piles[i] > MAX)
            MAX = piles[i];
    }

    int lo=0;
    int hi=MAX;
    int ans=0;
    while (lo <= hi)
    {
        int mid = (lo+hi)/2;
        int cnt=0;
        for (int i=0; i<piles.size(); i++)
        {
            if (piles[i]-mid >= k)
                cnt++;
        }
        cout << lo << " " << hi<< endl;
        if (cnt >= 0)
        {
            hi = mid-1;
            ans = mid;
        }
        else if (cnt < 0)
        {
            lo = mid+1;
        }
        return ans;
    }
}
```

## Submission at 2024-10-07 10:48:33


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> piles(n);
    for (int i=0; i<n; i++)
    {
        cin >> piles[i];
    }

    sort(piles.begin(), piles.end());
    int c=0;
    for (int i=0; i<piles.size(); i++)
    {
        c += (max(0, piles[i]-piles[0]-k));
    }
    cout << c;
    // int MAX = piles[0];
    // for (int i=1; i<n; i++)
    // {
    //     if (piles[i] > MAX)
    //         MAX = piles[i];
    // }

    // int lo=0;
    // int hi=MAX;
    // int ans=0;
    // while (lo <= hi)
    // {
    //     int mid = (lo+hi)/2;
    //     int cnt=0;
    //     for (int i=0; i<piles.size(); i++)
    //     {
    //         if (piles[i]-mid >= k)
    //             cnt++;
    //     }
    //     cout << lo << " " << hi<< endl;
    //     if (cnt >= 0)
    //     {
    //         hi = mid-1;
    //         ans = mid;
    //     }
    //     else if (cnt < 0)
    //     {
    //         lo = mid+1;
    //     }
    //     return ans;
    
}
```

## Submission at 2024-10-07 11:09:37


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo < hi)
    {
        int m=(lo+hi)/2;
        int maxi=wealth[MAX]+m;
        int avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 > wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 < wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            return m;
        }
        return -1;
    }
    
}
```

## Submission at 2024-10-07 11:09:59


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo < hi)
    {
        int m=(lo+hi)/2;
        int maxi=wealth[MAX]+m;
        double avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 > wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 < wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            return m;
        }
        return -1;
    }
    
}
```

## Submission at 2024-10-07 11:10:40


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo < hi)
    {
        int m=(lo+hi)/2;
        int maxi=wealth[MAX]+m;
        double avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 < wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 > wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            return m;
        }
        return -1;
    }
    
}
```

## Submission at 2024-10-07 11:11:47


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo < hi)
    {
        int m=(lo+hi)/2;
        double maxi=wealth[MAX]+m;
        double avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 > wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 < wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            return m;
        }
        return -1;
    }
    
}
```

## Submission at 2024-10-07 11:12:31


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo <= hi)
    {
        int m=(lo+hi)/2;
        double maxi=wealth[MAX]+m;
        double avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 > wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 < wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            return m;
        }
        return -1;
    }
    
}
```

## Submission at 2024-10-07 11:13:35


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo <= hi)
    {
        int m=(lo+hi)/2;
        double maxi=wealth[MAX]+m;
        double avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 > wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 < wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            cout << m;
            return;
        }
        
    }
    cout << -1;
}
```

## Submission at 2024-10-07 11:14:19


```
#include <bits/stdc++.h>
using namespace std;

int sum(vector<double>& s)
{
    int sum=0;
    for (int i:s)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int unhappy = n/2;
    
    vector<double> wealth(n);

    for (int i=0; i<n; i++)
    {
        cin >> wealth[i];
    }
    int MAX = 0;
    for (int i=0; i<n; i++)
    {
        if (wealth[MAX] < wealth[i])
            MAX = i;
    }

    int lo=0, hi=sum(wealth);
    int ans=0;
    while(lo <= hi)
    {
        int m=(lo+hi)/2;
        double maxi=wealth[MAX]+m;
        double avg=maxi;
        for (int i=0; i<n; i++)
        {
            if (i==MAX)
                continue;
            avg+=wealth[i];
        }
        if ((avg/n)/2 > wealth[unhappy])
        {
            hi = m-1;
            int ans=m;
        }
        else if((avg/n)/2 < wealth[unhappy])
        {
            lo = m+1;
        }
        else
        {
            cout << m;
            return 0;
        }
        
    }
    cout << -1;
}
```

## Submission at 2024-10-11 07:27:40


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> wealth(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wealth[i];
    }

    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }
    long long totalWealth = accumulate(wealth.begin(), wealth.end(), 0LL);

    long long lo = 0, hi = 1e18;
    long long result = -1;

    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long newTotal = totalWealth + mid;
        double avg = (double)newTotal / n;
        int unhappy_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (wealth[i] < avg / 2)
                unhappy_count++;
        }

        if (unhappy_count > n / 2)
        {
            result = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
```

## Submission at 2024-10-11 07:28:19


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> wealth(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wealth[i];
    }

    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }
    long long totalWealth = accumulate(wealth.begin(), wealth.end(), 0LL);

    long long lo = 0, hi = 1e18;
    long long result = -1;

    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long newTotal = totalWealth + mid;
        double avg = (double)newTotal / n;
        int unhappy_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (wealth[i] < avg / 2)
                unhappy_count++;
        }

        if (unhappy_count > n / 2)
        {
            result = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    solve();

    return 0;
}
```

## Submission at 2024-10-11 07:28:32


```
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> wealth(n);
    for (int i = 0; i < n; i++)
    {
        cin >> wealth[i];
    }

    if (n == 1 || n == 2)
    {
        cout << -1 << endl;
        return;
    }
    long long totalWealth = accumulate(wealth.begin(), wealth.end(), 0LL);

    long long lo = 0, hi = 1e18;
    long long result = -1;

    while (lo <= hi)
    {
        long long mid = lo + (hi - lo) / 2;
        long long newTotal = totalWealth + mid;
        double avg = (double)newTotal / n;
        int unhappy_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (wealth[i] < avg / 2)
                unhappy_count++;
        }

        if (unhappy_count > n / 2)
        {
            result = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << result << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
```

## Submission at 2024-10-14 09:04:37


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length())
    {
        cout << "false";
        return 0;
    }

    sort(s.begin(), s.end());
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] != t[i])
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
}
```

## Submission at 2024-10-14 09:06:11


```
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s.length() != t.length())
    {
        cout << "false";
        return 0;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] != t[i])
        {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
}
```

## Submission at 2024-10-17 12:57:13


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> ans(n, 0);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i] < a[j]) {
                ans[i] = j-i;
                break;
            }
        }
    }

    
    for (int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
```

## Submission at 2024-10-28 09:24:36


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-10-28 10:03:53


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
int min_num=INT_MAX;
void solve(Node* root) {
    if (!root) return;
    min_num = min(root->data, min_num);
    solve(root->left);
    solve(root->right);
}
int findMin(Node *root)
{
    min_num=INT_MAX;
    solve(root);
    return min_num;
}


```

## Submission at 2024-10-28 10:07:18


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    map<int, int> m1;
    for (int i=0; i<n; i++) {
        m1[a[i]]++;
    }

    for (int i=0; i<n; i++) {
        if (m1[a[i]] >= k) {
            cout << a[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
```

## Submission at 2024-10-28 10:15:18


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
  // map<int, int> m1;
  // map<int, int> m2;

  // Node* temp1 = head1;
  // Node* temp2 = head2;

  // while (temp1) {
  //   m1[temp1->data]++;
  //   temp1 = temp1->next;
  // }
  // while (temp2) {
  //   m2[temp2->data]++;
  //   temp2 = temp2->next;
  // }

  // for (auto m: m1) {
  //   if ()
  // }

  Node* temp1 = head1;
  
  Node* dummy = new Node(0);
  while (temp1) {
    Node* temp2 = head2;
    while (temp2) {
      if (temp1->data == temp2->data) {
        dummy->next = new Node(temp2->data);
      }
      temp2 = temp2->next;
    }
    temp1=temp1->next;
    }
    return dummy->next;
}
```

## Submission at 2024-10-28 10:15:37


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
  // map<int, int> m1;
  // map<int, int> m2;

  // Node* temp1 = head1;
  // Node* temp2 = head2;

  // while (temp1) {
  //   m1[temp1->data]++;
  //   temp1 = temp1->next;
  // }
  // while (temp2) {
  //   m2[temp2->data]++;
  //   temp2 = temp2->next;
  // }

  // for (auto m: m1) {
  //   if ()
  // }

  Node* temp1 = head1;
  
  Node* dummy = new Node(0);
  while (temp1) {
    Node* temp2 = head2;
    while (temp2) {
      if (temp1->data == temp2->data) {
        dummy->next = new Node(temp2->data);
        dummy = dummy->next;
      }
      temp2 = temp2->next;
    }
    temp1=temp1->next;
    }
    return dummy->next;
}
```

## Submission at 2024-10-28 10:16:27


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
  // map<int, int> m1;
  // map<int, int> m2;

  // Node* temp1 = head1;
  // Node* temp2 = head2;

  // while (temp1) {
  //   m1[temp1->data]++;
  //   temp1 = temp1->next;
  // }
  // while (temp2) {
  //   m2[temp2->data]++;
  //   temp2 = temp2->next;
  // }

  // for (auto m: m1) {
  //   if ()
  // }

  Node* temp1 = head1;
  
  Node* dummy = new Node(0);
  Node* temp = dummy;
  while (temp1) {
    Node* temp2 = head2;
    while (temp2) {
      if (temp1->data == temp2->data) {
        dummy->next = new Node(temp2->data);
        dummy = dummy->next;
      }
      temp2 = temp2->next;
    }
    temp1=temp1->next;
    }
    return temp->next;
}
```

## Submission at 2024-10-28 10:24:11


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
int sum = 0;
void solve(Node* root, int temp) {
  if (!root) {
    sum += temp;
    temp = temp/10;
    return;
  }
  temp = 10*temp + root->data;
  solve(root->left, temp);
  solve(root->right, temp);
}
int treePathSum(Node* root)
{
  int temp = 0;
  sum = 0;
  solve(root, temp);
  return sum;
}

```

## Submission at 2024-10-28 10:25:26


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
int sum = 0;
int temp = 0;
void solve(Node* root) {
  if (!root) {
    sum += temp;
    temp = temp/10;
    return;
  }
  temp = 10*temp + root->data;
  solve(root->left);
  solve(root->right);
}
int treePathSum(Node* root)
{
  temp = 0;
  sum = 0;
  solve(root);
  return sum;
}

```

## Submission at 2024-10-28 10:33:49


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string order, s;
    cin >> order >> s;

    map<int, char> m1;
    for (int i=0; i<order.length(); i++) {
        m1[i] = order[i];
    }

    string t = "";
    for (int i=0; i<m1.size(); i++) {
        t += m1[i];
    }
    for (int i=0; i<s.length(); i++) {
        if (m1.find(s[i]) == m1.end()) {
            t += s[i];
        }
    }
    cout << t << endl;
}
```

## Submission at 2024-10-28 10:38:19


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string order, s;
    cin >> order >> s;

    unordered_map<int, char> m1;
    unordered_set<char> s1(order.begin(), order.end());
    for (int i=0; i<order.length(); i++) {
        m1[i] = order[i];
    }

    string t = "";
    for (int i=0; i<m1.size(); i++) {
        t += m1[i];
    }
    for (int i=0; i<s.length(); i++) {
        if (s1.find(s[i]) == s1.end()) 
            t+=s[i];
    }
    cout << t << endl;
}
```

## Submission at 2024-10-28 10:39:27


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string order, s;
    cin >> order >> s;
    if(order.length() == 0) {
        cout << s;
        return 0;
    }
    unordered_map<int, char> m1;
    unordered_set<char> s1(order.begin(), order.end());
    for (int i=0; i<order.length(); i++) {
        m1[i] = order[i];
    }

    string t = "";
    for (int i=0; i<m1.size(); i++) {
        t += m1[i];
    }
    for (int i=0; i<s.length(); i++) {
        if (s1.find(s[i]) == s1.end()) 
            t+=s[i];
    }
    cout << t << endl;
    return 0;
}
```

## Submission at 2024-10-28 10:43:13


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string order, s;
    cin >> order >> s;
    if(order.length() == 0) {
        cout << s;
        return 0;
    }
    unordered_map<int, char> m1;
    unordered_set<char> s1(order.begin(), order.end());
    unordered_set<char> s2(s.begin(), s.end());
    for (int i=0; i<order.length(); i++) {
        m1[i] = order[i];
    }

    string t = "";
    for (int i=0; i<m1.size(); i++) {
        if (s2.find(m1[i]) != s2.end())
            t += m1[i];
    }
    for (int i=0; i<s.length(); i++) {
        if (s1.find(s[i]) == s1.end()) 
            t+=s[i];
    }
    cout << t << endl;
    return 0;
}
```

## Submission at 2024-10-28 11:02:49


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
int sum = 0;
void solve(Node* root, int temp) {
  if (!root) {
    return;
  }
  if (!root->left && !root->right) {
    temp += 10*temp + root->data;
    cout << temp << endl;
    sum += temp;
    return;
  }

  temp += 10*temp + root->data;
  solve(root->left, temp);
  solve(root->right, temp);
}
int treePathSum(Node* root)
{
  int temp = 0;
  sum = 0;
  solve(root, temp);
  return sum;
}
```

## Submission at 2024-10-28 11:09:10


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
void solve(Node* root, vector<int>& ans, int sum) {
  if (!root) return;
  if (!root->left && !root->right) {
    sum += 10*sum + root->data;
    cout << sum << endl;
    ans.push_back(sum);
    return;
  }
  sum += 10*sum + root->data;
  solve(root->left, ans, sum);
  solve(root->left, ans, sum);
}
int treePathSum(Node* root)
{
  vector<int> ans;
  int sum=0;
  solve(root, ans, sum);
  return accumulate(ans.begin(), ans.end(), 0);
}

```

## Submission at 2024-10-28 11:10:30


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
void solve(Node* root, vector<int>& ans, int sum) {
  if (!root) return;
  if (!root->left && !root->right) {
    sum = 10*sum + root->data;
    cout << sum << endl;
    ans.push_back(sum);
    return;
  }
  sum = 10*sum + root->data;
  solve(root->left, ans, sum);
  solve(root->right, ans, sum);
}
int treePathSum(Node* root)
{
  vector<int> ans;
  int sum=0;
  solve(root, ans, sum);
  return accumulate(ans.begin(), ans.end(), 0);
}

```

## Submission at 2024-10-28 11:10:58


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
void solve(Node* root, vector<int>& ans, int sum) {
  if (!root) return;
  if (!root->left && !root->right) {
    sum = 10*sum + root->data;
    cout << sum << endl;
    ans.push_back(sum);
    return;
  }
  sum = 10*sum + root->data;
  solve(root->left, ans, sum);
  solve(root->right, ans, sum);
}
int treePathSum(Node* root)
{
  vector<int> ans;
  int sum=0;
  solve(root, ans, sum);
  return accumulate(ans.begin(), ans.end(), 0);
}

```

## Submission at 2024-10-28 11:11:19


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
void solve(Node* root, vector<int>& ans, int sum) {
  if (!root) return;
  if (!root->left && !root->right) {
    sum = 10*sum + root->data;
    //cout << sum << endl;
    ans.push_back(sum);
    return;
  }
  sum = 10*sum + root->data;
  solve(root->left, ans, sum);
  solve(root->right, ans, sum);
}
int treePathSum(Node* root)
{
  vector<int> ans;
  int sum=0;
  solve(root, ans, sum);
  return accumulate(ans.begin(), ans.end(), 0);
}

```

## Submission at 2024-11-25 09:47:51


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO");
}
```

## Submission at 2024-11-25 09:51:55


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i=0; i<n; i++) {
        if (a[i] == target) {
            cout << i << " ";
        }
    }
}
```

## Submission at 2024-11-25 09:55:03


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector<int> a;
void preorder(Node* root) {
  if (!root) return;
  preorder(root->left);
  a.push_back(root->data);
  preorder(root->right);
}
int findMaxForN(Node* root, int n)
{
  preorder(root);
  cout << *lower_bound(a.begin(), a.end(), n);
}

```

## Submission at 2024-11-25 09:55:23


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector<int> a;
void preorder(Node* root) {
  if (!root) return;
  preorder(root->left);
  a.push_back(root->data);
  preorder(root->right);
}
int findMaxForN(Node* root, int n)
{
  preorder(root);
  return *lower_bound(a.begin(), a.end(), n);
}

```

## Submission at 2024-11-25 10:00:06


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector<int> a;
void preorder(Node* root) {
  if (!root) return;
  preorder(root->left);
  a.push_back(root->data);
  preorder(root->right);
}
int findMaxForN(Node* root, int n)
{
  preorder(root);
  int ans = -1;
  for (int i=0; i<a.size(); i++) {
    if (a[i] <= n) {
      ans = a[i];
    }
  }
  return ans;
}

```

## Submission at 2024-11-25 10:04:52


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector<int> a;
void preorder(Node* root) {
  if (!root) return;
  preorder(root->left);
  a.push_back(root->data);
  preorder(root->right);
}
int findMaxForN(Node* root, int n)
{
  if (a.size() == 0) return -1;
  preorder(root);
  int ans = -1;
  for (int i=0; i<a.size(); i++) {
    if (a[i] <= n) {
      ans = a[i];
    }
  }
  return ans;
}

```

## Submission at 2024-11-25 10:15:27


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> bottles;
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x >> y;
        m1[x] += y;
    }
    sort(m1.begin(), m1.end(), [](auto &a, auto &b {
        return a.second > b.second;
    }));
    int sum = 0;
    for (auto it: m1) {
        if (n == 0) break;
        ans += it.second;
        n--;
    }
    cout << ans;
}
```

## Submission at 2024-11-25 10:16:54


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> m1;
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x >> y;
        m1[x] += y;
    }
    sort(m1.begin(), m1.end(), [](auto &a, auto &b {
        return a.second > b.second;
    }));
    int ans = 0;
    for (auto it: m1) {
        if (n == 0) break;
        ans += it.second;
        n--;
    }
    cout << ans;
}
```

## Submission at 2024-11-25 10:19:25


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> m1;
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x >> y;
        m1[x] += y;
    }
    sort(m1.begin(), m1.end(), [](auto &a, auto &b {
        return a.second > b.second;
    };));
    int ans = 0;
    for (auto it: m1) {
        if (n == 0) break;
        ans += it.second;
        n--;
    }
    cout << ans;
}
```

## Submission at 2024-11-25 10:20:26


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> m1;
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x >> y;
        m1[x] += y;
    }
    sort(m1.begin(), m1.end(), [](auto &a, auto &b {
        return a.second > b.second;
    });
    );
    int ans = 0;
    for (auto it: m1) {
        if (n == 0) break;
        ans += it.second;
        n--;
    }
    cout << ans;
}
```

## Submission at 2024-11-25 10:25:58


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
    set<int> s1;
    // set<int> s2;
    Node* temp1 = head1;
    while (temp1) {
      set1.insert(temp1->data);
      temp1=temp1->next;
    }
    Node* temp2 = head2;
    while (temp2) {
      if (set1.find(temp2->data) != set1.end()) {
        return temp2;
      }
      temp2 = temp2->next;
    }
    return NULL;
}



```

## Submission at 2024-11-25 10:27:25


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
    set<int> s1;
    // set<int> s2;
    Node* temp1 = head1;
    while (temp1) {
      set1.insert(temp1->data);
      temp1=temp1->next;
    }
    Node* temp2 = head2;
    while (temp2) {
      if (s1.find(temp2->data) != s1.end()) {
        return temp2;
      }
      temp2 = temp2->next;
    }
    return NULL;
}



```

## Submission at 2024-11-25 10:29:10


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
    set<int> s1;
    // set<int> s2;
    Node* temp1 = head1;
    while (temp1) {
      s1.insert(temp1->data);
      temp1=temp1->next;
    }
    Node* temp2 = head2;
    while (temp2) {
      if (s1.find(temp2->data) != s1.end()) {
        return temp2;
      }
      temp2 = temp2->next;
    }
    return NULL;
}
```

## Submission at 2024-11-25 10:34:08


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> m1;
    for (int i=0; i<k; i++) {
        int x, y;
        cin >> x >> y;
        m1[x] += y;
    }
    
    sort(m1.begin(), m1.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    int ans = 0;
    for (auto it: m1) {
        if (n == 0) break;
        ans += it.second;
        n--;
    }
    cout << ans;
}
```

## Submission at 2024-11-25 10:39:00


```
#include <bits/sdtc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnta = 0, cntb = 0;
    for (char c: s) {
        if (c == 'a') cnta++;
        else cntb++;
    }
    cout << (cnta > cntb ? 'a' : 'b');
}
```

## Submission at 2024-11-25 10:45:16


```
#include <bits/sdtc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int d = a[1] - a[0];
    for (int i=2; i<n; i++) {
        if (a[i] - a[i-1] != d) {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}
```

## Submission at 2024-11-25 10:49:08


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int d = a[1] - a[0];
    for (int i=2; i<n; i++) {
        if (a[i] - a[i-1] != d) {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
}
```

## Submission at 2024-11-25 10:51:10


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(200001, 0);
    for (int i=0; i<k; i++) {
        int b, c;
        cin >> b >> c;
        a[b] += c;
    }
    sort(a.rbegin(), a.rend());
    int ans = 0;
    for (int i=0; i<n; i++) {
        ans += a[i];
    }
    cout << ans;
}
```

## Submission at 2024-11-25 10:53:32


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int a=0, b=0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == 'a') a++;
        else b++;
    }
    cout << (a > b ? 'a' : 'b');
}
```

## Submission at 2024-11-25 10:56:29


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i>n; i++) {
        for (int j=0; j<=i; j++) {
            cout << '*';
        }
        cout << '\n'';
    }
}
```

## Submission at 2024-11-25 10:57:30


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i>n; i++) {
        for (int j=0; j<=i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}
```

## Submission at 2024-11-25 11:00:19


```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}
```

## Submission at 2024-11-25 11:05:16


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
vector<int> a;
void preorder(Node* root) {
  if (!root) return;
  preorder(root->left);
  a.push_back(root->data);
  preorder(root->right);
}
int findMaxForN(Node* root, int n)
{
  preorder(root);
  int ans = -1;
  for (int i=0; i<a.size(); i++) {
    if (a[i] <= n) {
      ans = a[i];
    }
  }
  return ans;
}
```

