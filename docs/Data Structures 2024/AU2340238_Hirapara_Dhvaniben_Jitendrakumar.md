## Submission at 2024-08-05 10:18:59


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<"hello"<<name<<"!";<<endl;
}
```

## Submission at 2024-08-05 10:26:46


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<"hello"<< name<<"!";
}
```

## Submission at 2024-08-05 10:28:24


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<"Hello "<< name<<"!";
    return 0;
}
```

## Submission at 2024-08-05 10:45:47


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<"hello "<< name <<"!"<<endl;
    return 0;

}
```

## Submission at 2024-08-05 10:46:24


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    cout<<"Hello "<< name <<"!"<<endl;
    return 0;

}
```

## Submission at 2024-08-05 10:51:53


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name <<"!"<<endl;


    }
}
```

## Submission at 2024-08-05 10:52:41


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name <<"!"<<endl;
        
    }
    return 0;
}
```

## Submission at 2024-08-05 10:53:25


```
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name <<"!"<<endl;
        
    }
    return 0;
}
```

## Submission at 2024-08-12 09:50:44


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonaci(x-2);
    
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:51:58


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonaci(x-2);
    
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:52:38


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0){
        return 0;
    }
    if(x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonaci(x-2);
    
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 09:59:26


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
    return fibonacci(x-1)+fibonacci(x-2);
    
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:11:38


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
   if(n%2==0 ){
    return true;
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

## Submission at 2024-08-12 10:22:33


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
   if(n==1){
    return 1;
   }
   else if(n<1||n%2!=0){
    return 0;
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

## Submission at 2024-08-16 10:40:08


```
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &nums, int l, int r, vector<vector<int>> &ans){
    if(l==r){
        ans.push_back(nums);

    }
    else{
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permutations(nums, l+1,r, ans);
            swap(nums[l],nums[i]);

        }
    }
}

vector<vector<int>>pans(vector<int>nums){
    vector<vector<int>>ans;
    permutations(nums,0,nums.size()-1,ans);
    return ans;
}
int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>permutation=pans(nums);
    cout<<"permutation:"<<endl;
    for(auto p: permutation){
        cout<<"[";
        for(int i=0;i<p.size();i++){
            cout<<p[i];
            if(i<p.size()-1){
                cout<<" , ";
            }

        }
        cout<<"]"<<endl;
    }
    return 0;
}

```

## Submission at 2024-08-16 10:49:03


```
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &nums, int l, int r, vector<vector<int>> &ans){
    if(l==r){
        ans.push_back(nums);

    }
    else{
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permutations(nums, l+1,r, ans);
            swap(nums[l],nums[i]);

        }
    }
}

vector<vector<int>>pans(vector<int>nums){
    vector<vector<int>>ans;
    permutations(nums,0,nums.size()-1,ans);
    return ans;
}
int main(){
    
    vector<int>nums(n);
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>>permutation=pans(nums);
    cout<<"permutation:"<<endl;
    for(auto p: permutation){
        cout<<"[";
        for(int i=0;i<p.size();i++){
            cout<<p[i];
            if(i<p.size()-1){
                cout<<" , ";
            }

        }
        cout<<"]"<<endl;
    }
    return 0;
}

```

## Submission at 2024-08-16 10:53:58


```
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &nums, int l, int r, vector<vector<int>> &ans){
    if(l==r){
        ans.push_back(nums);

    }
    else{
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permutations(nums, l+1,r, ans);
            swap(nums[l],nums[i]);

        }
    }
}

vector<vector<int>>pans(vector<int>nums){
    vector<vector<int>>ans;
    permutations(nums,0,nums.size()-1,ans);
    return ans;
}
int main(){
    int n;
    
    cin>>n;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>>permutation=pans(nums);
    cout<<"permutation:"<<endl;
    for(auto p: permutation){
        cout<<"[";
        for(int i=0;i<p.size();i++){
            cout<<p[i];
            if(i<p.size()-1){
                cout<<" , ";
            }

        }
        cout<<"]"<<endl;
    }
    return 0;
}

```

## Submission at 2024-08-16 11:04:22


```
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &nums, int l, int r, vector<vector<int>> &ans){
    if(l==r){
        ans.push_back(nums);

    }
    else{
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permutations(nums, l+1,r, ans);
            swap(nums[l],nums[i]);

        }
    }
}

vector<vector<int>>pans(vector<int>nums){
    vector<vector<int>>ans;
    permutations(nums,0,nums.size()-1,ans);
    return ans;
}
int main(){
    int n=3;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>>permutation=pans(nums);
    
    for(auto p: permutation){
        cout<<"[";
        for(int i=0;i<p.size();i++){
            cout<<p[i];
            if(i<p.size()-1){
                cout<<" , ";
            }

        }
        cout<<"]"<<endl;
    }
    return 0;
}

```

## Submission at 2024-08-16 11:33:57


```
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &nums, int l, int r, vector<vector<int>> &ans){
    if(l==r){
        ans.push_back(nums);

    }
    else{
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permutations(nums, l+1,r, ans);
            swap(nums[l],nums[i]);

        }
    }
}

vector<vector<int>>pans(vector<int>nums){
    vector<vector<int>>ans;
    permutations(nums,0,nums.size()-1,ans);
    return ans;
}
int main(){
    int n=3;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>>permutation=pans(nums);
    cout<<"[";
    
    
        for(int i=0;i<permutation.size();i++){
            cout<<"[";
            for(int j=0;j<permutation[i].size();j++){
                cout<<permutation[i][j];
            

            
            if(j<permutation.size()-1){
                 cout<<",";
               
            }

        }
        cout<<"] ";
        if(i<permutation.size()-1){
               cout<<" ,";
            }

    }
    
    cout<<"]"<<endl;
    
    return 0;
}

```

## Submission at 2024-08-16 11:34:18


```
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}
void permutations(vector<int> &nums, int l, int r, vector<vector<int>> &ans){
    if(l==r){
        ans.push_back(nums);

    }
    else{
        for(int i=l;i<=r;i++){
            swap(nums[l],nums[i]);
            permutations(nums, l+1,r, ans);
            swap(nums[l],nums[i]);

        }
    }
}

vector<vector<int>>pans(vector<int>nums){
    vector<vector<int>>ans;
    permutations(nums,0,nums.size()-1,ans);
    return ans;
}
int main(){
    int n=3;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>>permutation=pans(nums);
    cout<<"[";
    
    
        for(int i=0;i<permutation.size();i++){
            cout<<"[";
            for(int j=0;j<permutation[i].size();j++){
                cout<<permutation[i][j];
            

            
            if(j<permutation.size()-1){
                 cout<<",";
               
            }

        }
        cout<<"] ";
        if(i<permutation.size()-1){
               cout<<" ,";
            }

    }
    
    cout<<"]"<<endl;
    
    return 0;
}

```

## Submission at 2024-08-16 11:36:07


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    // Write your logic
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

## Submission at 2024-08-16 11:38:59


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(1, new ArrayList<>(), res, n, k);
        return res;
    }

    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k) {
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }

        for (int i = start; i <= n; i++) {
            comb.add(i);
            backtrack(i + 1, comb, res, n, k);
            comb.remove(comb.size() - 1);
        }
    }
}

```

## Submission at 2024-08-16 11:40:59


```
#include <iostream>
#include <vector>
#include <string>

class ParenthesesCombinations {
public:
    // Main function to generate parentheses combinations
    std::vector<std::string> generateParentheses(int n) {
        std::vector<std::string> result;
        generateCombinations(result, "", 0, 0, n);
        return result;
    }

private:
    // Helper function to generate combinations recursively
    void generateCombinations(std::vector<std::string>& result, std::string current, int open, int close, int max) {
        // If the current string is a valid combination
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }

        // Add an open parenthesis if we have not used up all open parentheses
        if (open < max) {
            generateCombinations(result, current + "(", open + 1, close, max);
        }

        // Add a close parenthesis if there are more open parentheses than close ones
        if (close < open) {
            generateCombinations(result, current + ")", open, close + 1, max);
        }
    }
};

int main() {
    ParenthesesCombinations pc;
    int n = 3; // Example input

    std::vector<std::string> result = pc.generateParentheses(n);

    // Print the result
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

## Submission at 2024-08-17 06:56:29


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

## Submission at 2024-08-17 07:00:25


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
    int n=3;

   
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

## Submission at 2024-08-17 07:01:25


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
    int n=3;

   
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

## Submission at 2024-09-02 10:19:29


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to create the maximal array
vector<int> createMaximalArray(const vector<int>& a, const vector<int>& b) {
    vector<int> c;
    size_t n = a.size();
    c.reserve(n); // Optional: reserve space for efficiency

    for (size_t i = 0; i < n; ++i) {
        c.push_back(max(a[i], b[i]));
    }
    
    return c;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    // Read array a
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Read array b
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Create the maximal array
    vector<int> c = createMaximalArray(a, b);

    // Output the maximal array
    for (int value : c) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-09-02 10:19:59


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to create the maximal array
vector<int> createMaximalArray(const vector<int>& a, const vector<int>& b) {
    vector<int> c;
    size_t n = a.size();
    c.reserve(n); // Optional: reserve space for efficiency

    for (size_t i = 0; i < n; ++i) {
        c.push_back(max(a[i], b[i]));
    }
    
    return c;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    // Read array a
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Read array b
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Create the maximal array
    vector<int> c = createMaximalArray(a, b);

    // Output the maximal array
    for (int value : c) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-09-02 10:55:47


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
     Node* current = head;
    int count = 1; // Position in the linked list
    
    // Traverse the list
    while (current != nullptr) {
        if (count == k) {
            return current->data; // Return the data of the k-th node
        }
        current = current->next;
        count++;
    }
    
    return -1;
}

```

## Submission at 2024-09-09 10:35:12


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
void reverse(Node* head){
  Node* prev=NULL;
  Node*curr=head;
  while(curr!=NULL){
  Node* next=curr->next;
  curr->next=NULL;
  prev=curr;
  curr=next;
}


}
bool ispalndrome(Node* head){
  //find middle
  Node* slow=head;
  Node* fast=head->next;
  while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
      fast=fast->next;
      slow=slow->next;
    }
    return slow;
   //step B: //
   Node* middleLLkahead=slow;
   reverse(slow->next);
   

  }
  //step c:
  Node* temp1=head;
  Node* temp2=slow->next;
  while(temp2!=NULL){
    if(temp1->data!=temp2->data){
      return false;
    }
    else{
      temp1=temp1->next;
      temp2=temp2->next;
    }
  }
  return true;


  
}
bool isPalindrome(Node *head) {
  Node* first=new Node(1);
  Node* second=new Node(2);
  Node* third=new Node(3);
  Node* fourth=new Node(2);
  Node* fifth=new Node(1);
  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=NULL;
  if(ispalndrome(head)){
    return true;
  }
  else{
    return false;
  }


  
  

  
    // Your code here
}
```

## Submission at 2024-09-09 10:39:17


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
void reverse(Node* head){
  Node* prev=NULL;
  Node*curr=head;
  while(curr!=NULL){
  Node* next=curr->next;
  curr->next=NULL;
  prev=curr;
  curr=next;
}


}
bool ispalndrome(Node* head){
  //find middle
  Node* slow=head;
  Node* fast=head->next;
  while(fast!=NULL){
    fast=fast->next;
    if(fast!=NULL){
      fast=fast->next;
      slow=slow->next;
    }
    return slow;
   //step B: //
   Node* middleLLkahead=slow;
   reverse(slow->next);
   

  }
  //step c:
  Node* temp1=head;
  Node* temp2=slow->next;
  while(temp2!=NULL){
    if(temp1->data!=temp2->data){
      return false;
    }
    else{
      temp1=temp1->next;
      temp2=temp2->next;
    }
  }
  return true;


  
}
bool isPalindrome(Node *head) {
  
  Node* first=new Node(1);
  Node* second=new Node(2);
  Node* third=new Node(3);
  Node* fourth=new Node(2);
  Node* fifth=new Node(1);
  first->next=second;
  second->next=third;
  third->next=fourth;
  fourth->next=fifth;
  fifth->next=NULL;
  if(ispalndrome(head)){
    return true;
  }
  else{
    return false;
  }


  
  

  
    // Your code here
}
```

## Submission at 2024-09-09 11:03:12


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
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* removeDuplicateshelper(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next=NULL){
        return head;
    }
    Node* curr=head;
    Node* temp=head;
    while(curr!=NULL){
        if(curr->data!=curr->next->data){
            curr=curr->next;
        }
        else{
            curr->next=curr->next->next;
            curr->next=NULL;
            
        }
    }
    return head;
    
}
Node* removeDuplicates(Node *head)
{
    Node* first=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(2);
    Node* fourth=new Node(2);
    Node* fifth=new Node(3);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    removeDuplicateshelper(head);
    print(head);


    //Your code here
}

```

## Submission at 2024-09-09 11:04:44


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
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* removeDuplicateshelper(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next=NULL){
        return head;
    }
    Node* curr=head;
    Node* temp=head;
    while(curr!=NULL){
        if(curr->data!=curr->next->data){
            curr=curr->next;
        }
        else{
            curr->next=curr->next->next;
            curr->next=NULL;
            
        }
    }
    return head;
    
}
Node* removeDuplicates(Node *head)
{
    Node* first=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(2);
    Node* fourth=new Node(2);
    Node* fifth=new Node(3);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    removeDuplicateshelper(head);
    print(head);


    //Your code here
}

```

## Submission at 2024-09-09 11:08:11


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
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* removeDuplicateshelper(Node* head){
    // if(head==NULL){
    //     return NULL;
    // }
    // if(head->next=NULL){
    //     return head;
    // }
    Node* curr=head;
    Node* temp=head;
    while(curr!=NULL){
        if(curr->data!=curr->next->data){
            curr=curr->next;
        }
        else{
            curr->next=curr->next->next;
            curr->next=NULL;
            
        }
    }
    return head;
    
}
Node* removeDuplicates(Node *head)
{
    Node* first=new Node(1);
    Node* second=new Node(1);
    Node* third=new Node(2);
    Node* fourth=new Node(2);
    Node* fifth=new Node(3);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    removeDuplicateshelper(head);
    print(head);


    //Your code here
}

```

## Submission at 2024-09-09 11:14:46


```
// Write Code from Scratch here
#include<iostream>
using namespace std;
bool pow(int n){
    if(n==0){
        return 1;
    }
   
   
    if(n!=3*pow(n-1)){
        return 0;
    }

}
int main(){
    int n=27;
    int ans=pow(n);
    
    if(pow(n)){
        return true;
    }
    else{
        return false;
    }
    return 0;
}
```

## Submission at 2024-10-07 10:37:22


```

#include<iostream>
using namespace std;
#include<queue>
#include<stack>
queue<int> rev(queue<int> q){
   
    stack<int>s;
    
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(q.front());
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(s.top());
    }
    

    

}
int main(){
    queue<int>q;
    q.push(4);
      q.push(3);
        q.push(1);
          q.push(10);
            q.push(2);
              q.push(6);
              rev(q);
              while(!q.empty()){
        cout<<q.front();
        q.pop();
    }
    cout<<endl;
}

```

## Submission at 2024-10-07 11:10:52


```

#include<iostream>
using namespace std;
#include<stack>
#include<queue>
queue<int>q;
queue<int> rev(queue<int>q,int temp){ 
    stack<int>s;
    
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        s.push(temp);
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
   
  return q;
}
int main(){
    int ans=rev(q);
    cout<<ans<<endl;
}
      


```

## Submission at 2024-10-28 05:23:19


```
// Write code from scratch here
#include <iostream>
using namespace std;
int main() {
  // int score;
  // cout<<"enter a score:"<<endl;
  // cin>>score;
  // if(score<=300){
  //   cout<<"india wins"<<endl;
  // }
  // cout<<"pakistan wins";
  // int age;
  // cout<<"enter your age:"<<endl;
  // cin>>age;
  // if(age>=18){
  //   cout<<"you can vote"<<endl;
  // }
  // else{
  //   cout<<"you cannot vote"<<endl;
  // }

  //nestead if else
  
  // int marks;
  // cin>>marks;
  // if(marks>=90){
  //   cout<<"A grade";
  // }
  // else{
  //   if(marks>=80){
  //     cout<<"B grade";
  //   }
  //   else{
  //     if(marks>=60){
  //       cout<<"C grade";
  //     }
  //     else{
  //       if(marks>=40){
  //         cout<<"D grade";
  //       }
  //       else{
  //         cout<<"F grade";
  //       }
  //     }
  //   }
  // }

  // if- else if - if statment

  
  // if(marks>90){
  //   cout<<"A grade"<<endl;
  // }
  // else if (marks>80){
  //   cout<<"B grade"<<endl;
  // }
  // else if (marks>60){
  //   cout<<"C grade"<<endl;
  // }
  // else if(marks>40){
  //   cout<<"D grade"<<endl;
  // }
  // else{
  //   cout<<"f grade"<<endl;
  // }
  // int bronum;
  // cin>>bronum;
  // if(bronum==0){
  //   cout<<"baat ban jayegi";
  // }
  // else{
  //   cout<<"baat nhi banegi";
  // }

  // for(int i=0;i<5;i++){
  //   cout<<"dhvani"<<endl;
  // }

  // for(int i=5;i>0;i--){
  //   cout<<i<<endl;
    
  // }
  
  // for(int i=1;i<=10;i++){
  //   cout<<2*i<<endl;
  // }
  
  // for(int i=0;i<=5;i=i+2){
  //   cout<<i<<endl;
  // }

  // for(int i=1;i<=5;i=i+2){
  //   cout<<i<<endl;
  // }
  
  // for(int i=1;i<10;i=i*2){
  //   cout<<i<<endl;
  // }
  
  // for(int i=100;i>0;i=i/2){
  //   cout<<i<<endl;
  // }

  // for(int i=5;(i>=0 && i<=10);i=i+1){
  //   cout<<i<<endl;
  // }
  
  // int n;
  // if(cout<<"love"){
  //   cout<< "hirapara"<<endl;
  // }

  // solid rectangle 
  
  // for(int row=0;row<3;row++){
  //   for(int col=0;col<5;col++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  

  //square pattern

  
  //outer loop
  // for(int row=0;row<4;row=row+1){
  //   //inner loop
  //   for(int col=0;col<4;col=col+1){ // (col++ or col=col+1 or col+=1)
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  
//hollow rectangle

  // int rowcount,colcount;
  // cin>>rowcount;
  // cin>>colcount;
  // for(int row=0;row<rowcount;row=row+1){
  //   if(row==0 ||row==rowcount-1){
  //     for(int col=0;col<colcount;col=col+1){
  //       cout<<"* ";
  //     }
      
  //   }
  //   else{
  //     cout<<"* ";
  //     for(int i=0;i<colcount-2;i=i+1){
  //       cout<<"  ";
        
  //     }
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //hollow rectangle(2)

  // for(int row=0;row<6;row=row+1){
  //   if(row==0 ||row==5){
  //     for(int col=0;col<5;col=col+1){
  //       cout<<"*";
  //     }
  //   }
  //   else {
  //     cout<<"*";
  //     for(int col=0;col<3;col=col+1){
  //       cout<<" ";
  //     }
  //     cout<<"*";
      
  //   }
  //   cout<<endl;
  // }

 // half pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1)
  //     {
  //       cout<<"*";
  //     }
  //   cout<<endl;
  // }

  //inverted half pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<<"*";
  //   }
  //   cout<<endl;
    
  // }

  //numeric half pyramid
  
  //  int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<col+1;
      
  //   }
  //   cout<<endl;
  // }

  //inverted numeric half pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<<col+1;
      
  //   }
  //   cout<<endl;
  // }

  //full pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<n-row-1;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<" *";
  //   }
  //   cout<<endl;
  // }


  //inverted full pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<row;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }


  //solid diamond

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<n-row-1;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }
  
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<row;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }


  //hollow diamond

  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<n-row-1;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for(int col=0;col<2*row+1;col=col+1){
  //     if(col==0){
  //       cout<<"*";
  //     }
  //     else if(col==2*row){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
    
  // }
  // //part 2
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<row;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for (int col=0;col<2*n- 2*row-1;col=col+1){
  //     if(col==0){
  //       cout<<"*";
  //     }
  //     else if(col==2*n-2*row-2){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     } 
  //   }
  //   cout<<endl;
  // }


  //flipped solid diamond

  
//part 1
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //inverted half pyramid
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<< "*";
  //   }
    
  //   //space wala full pyramid

  //   for(int col=0;col<2*row-1;col=col+1){
  //    cout<<" "; 
  //   }

  //   //inverted half pyramid
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<< "*";
  //   }
    
  //    cout<<endl;
  // }
  // //part 2
  
  // for(int row=0;row<n;row=row+1){
  //   //half pyramid
  //   for(int col=0;col< row+1;col=col+1){
  //     cout<< "*";
  //   }
    
  //   //inverted full pyramid space wala
  //   for(int col=0;col<2*n-2*row-1;col=col+1){
  //     cout<<" ";
  //   }
    
  //   //half pyramid
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<< "*";
  //   }
  //   cout<<endl;
    
  // }

  //fancy pattern
 // int n; 
 //  cin>>n;
 //  for(int row=0;row<n;row=row+1){
 //    for(int col=0;col<row+1;col=col+1){
 //      cout<<row+1;
 //      if(col!=row){
 //        cout<<"*";
 //      }
      
 //    }
 //    cout<<endl;
 //  }
   
 //    for(int row=0;row<n;row=row+1){
 //      for(int col=0;col<n-row;col=col+1){
 //        cout<<n-row;
 //        if(col!= n-row-1){
 //          cout<<"*";
 //        }
        
 //      }
 //      cout<<endl;
      
 //    }

  //alpha palindrome pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   int col;
  //   for(int col=0;col<row+1;col=col+1){
  //     int ans=col+1;
  //     char ch=ans+'A'-1;
  //     cout<<ch;
  //   }
  //   for(col=row;col>=1;col=col-1){
  //     int ans=col;
  //     char ch=ans+'A'-1;
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }

  //numeric hollow inverted half pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=row+1;col<=n;col=col+1){ 
  //     if(col==row+1||col==n||row==0){
  //       cout<< col;
  //     }
  //     else{
  //       cout<<" ";
  //     }

  //   }
  //   cout<<endl;
  // }

//numeric hollow half pyramid 
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1){
  //     if(col==0||col==row||row==n-1){
  //       cout<<col+1;
  //     }
  //     else{
  //       cout<<" ";
  //     }
     
  //   }
  //   cout<<endl;
  // }


  //hollow inverted half pyramid
  
// int n;
//   cin>>n;
//   for(int row=0;row<n;row=row+1){
//     for(int col=0;col<n-row;col=col+1){
//       if(col==0||col==n-row-1||row==0){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
     
//     }
//     cout<<endl;
//   }

  //numeric palindrome equilateral pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //spaces
  //   for(int col=0;col<n-row-1;col=col+1){
  //     cout<<" ";
  //   }
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<col+1;
  //       }
  //   for(int col=row;col>=1;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  
//fancy pattern #1
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<n-row+3;col=col+1){
  //     cout<<"*";
  //   }
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<row+1;
  //     if(col!=row){
  //       cout<<"*";
  //     }
  //   }
   
  //     for(int col=0;col<n-row+3;col=col+1){
  //       cout<<"*";
  //     }
  //     cout<<endl;  
  // }

  
  //solid half diamond
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }    
  //   for(int row=n-1;row>=1;row=row-1){
  //     for(int col=1;col<=row;col=col+1){
  //       cout<<"*";
  //     }
  //     cout<<endl;
  // }


  // floyd's  pattern 
  
  // int n,c;
  // cin>>n;
  // c=1;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<=row;col=col+1){
  //     cout<<c;
  //     c++;
  //   }
  //   cout<<endl;
  // }
  
// fancy pattern #2

  
  // int n;
  // cin>>n;
  // int c=1;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<=row;col=col+1){
  //     cout<<c;    
  //     if(col!=row){
  //       cout<<"*";
  //     }
  //     c++;     
  //   }
  //   cout<<endl;
  // }

  // //part 2

  // int start=c-n;  
  // for(int row=0;row<n;row++){
  //   int k=start;
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<<k;  
  //     if(col!=n-row-1){
  //       cout<<"*";
  //     }
  //     k++;  
  //   }
  //   start=start-(n-row-1);
  //   cout<<endl;
  // } 

  //pascal's triangle

  // int n;
  // cin>>n;
  // for(int row=1;row<=n;row=row+1){
  //   int c=1;
  //   for(int col=1;col<=row;col=col+1){
  //     cout<<c<<" ";
  //     c=c*(row-col)/col;
  //   }
  //   cout<<endl;
  // }

  
// butterfly pattern
  
 //  int n;
 //  cin>>n;
 // for(int row=0;row<n;row=row+1){
 //   for(int col=0;col<row+1;col=col+1){
 //     cout<<"*";
 //   }
 //   for(int col=0;col<2*(n-row-1);col=col+1){
 //     cout<<" ";
 //   }
 //   for(int col=0;col<row+1;col=col+1){
 //      cout<<"*";
 //    }
 //   cout<<endl;
 // }
 //  //part 2

 //  for(int row=0;row<n;row=row+1){
 //    for(int col=0;col<n-row;col=col+1){
 //      cout<<"*";
 //    }
 //    for(int col=0;col<2*row;col=col+1){
 //      cout<<" ";
 //    }
 //    for(int col=0;col<n-row;col=col+1){
 //      cout<<"*";
 //    }
 //    cout<<endl;
    
 //  }


  //hollow full pyramid

//   int n;
//   cin>>n;
//   for(int row=0;row<n;row=row+1){
//     //spaces 
//     for(int col=0;col<n-row-1;col=col+1){
//       cout<<" ";
//     }
//     //stars
//     for(int col=0;col<row+1;col=col+1){
//       if(col==0||col==row||row==n-1){
//       cout<<"* ";
//     }
//       else{
//         cout<<"  ";
//       }    
//   }
//     cout<<endl;
// }

  
  //hollow square

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<n;col=col+1){
  //     if(row==0||row==n-1||col==0||col==n-1){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }


  // Pattern 
  
  // 54321
  // 4321
  // 321
  // 21
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n-row;col>0;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }    

  
  // Pattern 4


  // 54321
  // 5432
  // 543
  // 54

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n;col>=row+1;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 6
  // 5
  // 45
  // 345
  // 2345
  // 12345

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n-row;col<=n;col=col+1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 7
  // 1
  // 21
  // 321
  // 4321
  // 54321

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=row+1;col>=1;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 8
  // 5
  // 54
  // 543
  // 5432
  // 54321

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n;col>=n-row;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 9
  // 1
  // 22
  // 333
  // 4444
  // 55555

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<row+1;
  //   }
  //   cout<<endl;
  // }

  // Pattern 10
  // 5
  // 44
  // 333
  // 2222
  // 11111

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=n;col>=n-row;col--){
  //     cout<<n-row;
  //   }
  //   cout<<endl;
  // }

  // Pattern 11
  // 55555
  // 4444
  // 333
  // 22
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=n-row;col>=1;col--){
  //     cout<<n-row;
  //   }
  //   cout<<endl;
  // }

  // Pattern 12
  // 11111
  // 2222
  // 333
  // 44
  // 5
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=n-row;col>=1;col--){
  //     cout<<row+1;
  //   }
  //   cout<<endl;
  // }

  // Pattern 13
  // 12345
  // 4321
  // 123
  // 21
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=1;col<=n-row;col++){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 14
  // 1234567
  // 12345
  // 123
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=1;col<=2*(n-row-1)-1;col++){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 15
  // 1
  // 01
  // 101
  // 0101

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=row;col>=0;col--){
  //     if(col%2==0){
  //       cout<<"1";
  //     }
  //     else{
  //       cout<<"0";
  //     }
  //   }
  //   cout<<endl;
  // }

  // Pattern 16
  // 13579
  // 3579
  // 579
  // 79
  // 9

// int n;
//   cin>>n;
//   int c=1;
//   for(int row=0;row<n;row=row+1){
//     for(int col=c;col<=9;col=col+2){
//       cout<<col;
//     }
//     cout<<endl;
//     c=c+2;
//   }

  // Pattern 17
  // 1
  // 2 4
  // 1 3 5
  // 2 4 6 8
  // 1 3 5 7 9

// int n;
//   cin>>n;
//   for(int row=1;row<=n;row++){
//     if(row%2!=0){
//       for(int col=1,count=0;count<row;count++,col=col+2 ){
//         cout<<col;
//       }
//     }
//     else{
//       for(int col=2,count=0;count<row;count++,col=col+2){
//         cout<<col;
//       }
//     }
//     cout<<endl; 
//   }

 // numeric 

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   //spaces
  //   for(int col=0;col<n-row-1;col++){
  //     cout<<" ";
  //   }
    
  //   //numbers
  
  //   for(int col=0;col<row+1;col++){
  //     cout<<row+col+1; 
  //   }
   
  //   //reverse

  // int start =2*row;
  //   for(int col=0;col<row;col++){
  //     cout<<start;
  //     start=start-1;
  //   }
  //   cout<<endl;
    
  // }


  //numeric hollow pyramid

  
  int n;
  cin>>n;
  for(int row=0;row<n;row++){
    //spaces
    for(int col=0;col<n-row-1;col++){
      cout<< " ";
    }

    //numbers
   int start=1;
    for(int col=0;col<2*row+1;col++){
      if(row==0||row==n-1){
        if(col%2==0){
          cout<<start;
          start=start+1;
          
        }
        else{
          cout<< " ";
        }
        }
      else {
        if(col==0){
          cout<< 1;
        }
        else if(col==2*row+1-1){
          cout<<row+1;
        }
        else{
          cout<<" ";
        }
      }
     
      }
    cout<<endl;
    }
}
```

## Submission at 2024-10-28 09:18:27


```
//Q 1:         iterative pre order 
void preOrderTraversal(TreeNode* root) {
    if (root == NULL)
        return;

    stack<TreeNode*> nodeStack;
    nodeStack.push(root);
    while (!nodeStack.empty()) {
        TreeNode* node = nodeStack.top();
        cout << node->val << " ";
        nodeStack.pop();
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Pre-order traversal: ";
    preOrderTraversal(root);

    return 0;
}

// Q2:    iterative inorder

void inOrderTraversal(TreeNode* root) {
    stack<TreeNode*> nodeStack;
    TreeNode* current = root;

    while (current != nullptr || !nodeStack.empty()) {
        while (current != nullptr) {
            nodeStack.push(current);
            current = current->left;
        }
        current = nodeStack.top();
        nodeStack.pop();
        cout << current->val << " ";
        current = current->right;
    }
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "In-order traversal: ";
    inOrderTraversal(root);
}

// Q iterative postorder
void postOrderTraversal(TreeNode* root) {
    if (root == nullptr)
        return;

    stack<TreeNode*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        TreeNode* node = s1.top();
        s1.pop();
        s2.push(node);
        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }
    while (!s2.empty()) {
        cout << s2.top()->val << " ";
        s2.pop();
    }
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Post-order traversal: ";
    postOrderTraversal(root);
}

//Q  level order trversal
#include<queue>
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

};
node* buildtree(){
    int data;
    cout<<"enter the data:";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    //step A,B,C
    node* root=new node(data);
    root->left=buildtree();
    root->right=buildtree();
    return root; 
}
void leveloerdertraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        //A
        node* temp= q.front();
        //B
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);

            }
        }
        else{
            //C
            cout<<temp->data<<" ";
            //D
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// Q  :kth ancestor

bool kthAncestor(node* root, int &k,int p){
    //base case :
    if(root==NULL){
        return false;
    }
    if(root->data == p){
        return true;
    }
   
    bool leftans=kthAncestor(root->left,k,p);
    bool rightans=kthAncestor(root->right,k,p);
    if(leftans||rightans){
        k--;
    }
    if(k==0){
        cout<<"ans is"<<root->data<<endl;
        k=-1;
        return false;
    }
    return leftans|| rightans;
}
int main(){
    node* root=NULL;
    root=buildtree();
    int k=1;
    int p=4;
    bool found=kthAncestor(root,k,p);
}

// Q lowest common ancestor
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        //check for p and Q
        if(root->val==p->val){
            return p;
        }
        if(root->val ==q->val){
            return q;
        }
        TreeNode* leftans=lowestCommonAncestor(root->left,p,q);
          TreeNode* rightans=lowestCommonAncestor(root->right,p,q);
          if(leftans==NULL&&rightans==NULL){
            return NULL;
          }
          else if(leftans!=NULL&&rightans==NULL){
            return leftans;
          }
          else if(leftans==NULL&&rightans!=NULL){
            return rightans;
          }
          else{
            return root;
          } 

        
    }
};

//Q  path sum

class Solution {
public:
void solve(TreeNode* root, int targetSum, int currsum, vector<int>& path, vector<vector<int>>& ans){
    //base case:
    if(root==NULL){
        return;
    }
      path.push_back(root->val);
    currsum+=root->val;
    
    if(root->left==NULL&& root->right==NULL){
      
        // that means leaf node hein
    if(currsum==targetSum){
        ans.push_back(path);
        
    }

    }
   else{
    solve(root->left, targetSum, currsum, path, ans);
     solve(root->right,targetSum,currsum,path,ans);

    }
        path.pop_back();
}

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        int sum=0;
        vector<int>path;
        solve(root,targetSum,0,path,ans);
        return ans;

        
    }
};

// Q build a tree using pre and post

int findposition(int arr[], int n, int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
node* buildtreefrominorderpreorder(int inorder[], int preorder[], int size, int & preindex, int inorderstart, int inorderend){
    // base case:
    if(preindex>=size|| inorderstart > inorderend){
        return NULL;
    }
    
    //step A

    int element=preorder[preindex];
    preindex++;
    node* root=new node(element);
    int pos=findposition(inorder,size,element);

    //step B: root->left solve:

    root->left=buildtreefrominorderpreorder(inorder, preorder,size,preindex,inorderstart,pos-1);

    //step c 

    root->right=buildtreefrominorderpreorder(inorder,preorder,size,preindex,pos+1,inorderend);
    return root;

}

// q: build tree using inorder and postorder

node* buildtreefrominorderpostorder(int inorder[], int postorder[], int &postindex, int size, int inorderstart, int inorderend) {
    if (postindex < 0 || inorderstart > inorderend) {
        return NULL;
    }

    int element = postorder[postindex--];
    node* root = new node(element);
    int pos = findposition(inorder, size, element);

    if (pos == -1) return NULL; // Return NULL if position is invalid

    root->right = buildtreefrominorderpostorder(inorder, postorder, postindex, size, pos + 1, inorderend);
    root->left = buildtreefrominorderpostorder(inorder, postorder, postindex, size, inorderstart, pos - 1);

    return root;
}

void leveloerdertraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        //A
        node* temp= q.front();
        //B
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);

            }
        }
        else{
            //C
            cout<<temp->data<<" ";
            //D
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
int main() {
    // int inorder[] = {40, 20, 50, 10, 60, 30, 70};
    // int preorder[] = {10, 20, 40, 50, 30, 60, 70};
    // int size = 7;
    // int preindex = 0;
    // int inorderstart = 0;
    // int inorderend = size - 1;
    // node* root = buildtreefrominorderpreorder(inorder, preorder, size, preindex, inorderstart, inorderend);
    // leveloerdertraversal(root);


// post order ke liye uper vala comment kare 

     int inorder[] = {40, 20, 10, 50, 30, 60};
    int postorder[] = {40, 20, 50, 60, 30, 10};
    int size = 6;
    int postindex = size - 1;
    int inorderstart = 0;
    int inorderend = size - 1;
    node* root = buildtreefrominorderpostorder(inorder, postorder, postindex, size, inorderstart, inorderend);
    leveloerdertraversal(root);

    return 0;
}

//Q : balanced binary tree

class Solution {
public:
int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    int ans=1+max(leftheight,rightheight);
    return ans;
}
    bool isBalanced(TreeNode* root) {
        //base caes
        if(root==NULL){
            return true;
        }
        //1 case 
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int diff=abs(leftheight-rightheight);
        bool ans1=(diff<=1);
        //recursion
        bool leftans=isBalanced(root->left);
        bool rightans=isBalanced(root->right);
        if(ans1&& leftans&& rightans){
            return true;
        }
        else{
            return false;
        }
        
    }
};

//Q:   zig zag
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (root == nullptr)
        return result;
    deque<TreeNode*> dq;
    dq.push_back(root);
    bool leftToRight = true;

    while (!dq.empty()) {
        int size = dq.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++) {
            TreeNode* node;
            if (leftToRight) {
                node = dq.front();
                dq.pop_front();
                level[i] = node->val;
                if (node->left) dq.push_back(node->left);
                if (node->right) dq.push_back(node->right);
            } else {
                node = dq.back();
                dq.pop_back();
                level[i] = node->val;
                if (node->right) dq.push_front(node->right);
                if (node->left) dq.push_front(node->left);
            }
        }

        result.push_back(level);
        leftToRight = !leftToRight;
    }
    return result;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    vector<vector<int>> result = zigzagLevelOrder(root);
    cout << "Zigzag Level Order Traversal:" << endl;
    for (const auto& level : result) {
        for (int val : level)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}

// Q : VERTICAL order traversal
vector<vector<int>> verticalOrder(TreeNode* root) {
        if (!root) return {};
        map<int, vector<int>> columnTable; // Maps horizontal distance to nodes
        queue<pair<TreeNode*, int>> nodesQueue; // Node and its horizontal distance
        nodesQueue.push({root, 0});     
        while (!nodesQueue.empty()) {
            auto nodePair = nodesQueue.front();
            nodesQueue.pop();
            TreeNode* node = nodePair.first;
            int column = nodePair.second;
            columnTable[column].push_back(node->val);
            if (node->left) {
                nodesQueue.push({node->left, column - 1});
            }
            if (node->right) {
                nodesQueue.push({node->right, column + 1});
            }
        }
        vector<vector<int>> result;
        for (const auto& pair : columnTable) {
            result.push_back(pair.second);
        }

        return result;
    }
};

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    Solution solution;
    vector<vector<int>> result = solution.verticalOrder(root);
    for (const auto& vec : result) {
        for (int val : vec) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// q reverse linked list
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this-> data=data;
        this->next=NULL;

    }
};
void print(node* head){
    node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    
}
node* reverse(node* prev ,node* curr){
    //base case
    if(curr==NULL){
        //LL reverse ho chuka hein
        return prev;
    }
    node* next=curr->next;
    curr->next=prev;
    return reverse(curr,next);
}
int main(){
    node* first=new node(10);
    node* second= new node(20);
    node* third= new node(30);
    node* fourth= new node(40);
    node* head=first;
    node* tail=fourth;
    first->next = second;
    second->next = third;
    third->next = fourth;
    print(head);
    cout<<endl;
    node* prev=NULL;
    node* curr=head;
    head= reverse(prev,curr);
    print (head);   
}

// q get middle ll
 node* getmiddle(node* head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next==NULL){               //only one node head->next==NULL
        return head;                   // ek hi node ho to head hi meri middle node ho jati hein

    }
    node* slow=head;
    node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
  

}
int main(){
    node* head=new node(10);
     node* second=new node(20);
      node* third=new node(30);
       node* fourth=new node(40);
        node* fifth=new node(50);
        head->next=second;
        second->next=third;
        third->next=fourth;
        fourth->next=fifth;
        fifth->next=NULL;
        print(head);
        cout<<endl;
        cout<<"middle node is: "<<getmiddle(head)->data<<" ";
}

// Q : REMOVE DUPLICATE
void removeduplicate(node* head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        //only 1 node
        cout<<"only 1 node:"<<endl;
        return;
    }
    node* curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&curr->data==curr->next->data){
            //equal
            node* temp=curr->next;
           curr->next=curr->next->next;
           //delete temp
           temp->next=NULL;
           delete temp;
        }
        else{
            //not equal
            
            curr=curr->next;
        }
    }
}
int main(){
        node* head=new node(1);
     node* second=new node(2);
      node* third=new node(2);
       node* fourth=new node(3);
        node* fifth=new node(4);
          node* sixth=new node(4);
        head->next=second;
        second->next=third;
        third->next=fourth;
        fourth->next=fifth;
        fifth->next=sixth;
        sixth->next=NULL;
        cout<<"input LL:"<<endl;
        print(head);
        cout<<endl;
        removeduplicate(head);
        cout<<"output LL"<<endl;
        print(head);
}

// Q :      sort list using merge sort

class Solution {
public:
 ListNode* findMid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        // Move 'fast' two steps and 'slow' one step at a time
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // 'slow' will be at the middle of the list
        return slow;
    }
    // Function to merge two sorted linked lists
    ListNode* merge(ListNode* left, ListNode* right) {
        if(left == NULL) return right;
        if(right == NULL) return left;
        
        ListNode* ans = new ListNode(-1);  // Dummy node to help merge
        ListNode* mptr = ans;
        
        while(left != NULL && right != NULL) {
            if(left->val <= right->val) {
                mptr->next = left;
                left = left->next;
            } else {
                mptr->next = right;
                right = right->next;
            }
            mptr = mptr->next;
        }
        
        // If there are remaining nodes in either list
        if(left != NULL) {
            mptr->next = left;
        } else {
            mptr->next = right;
        }
        
        return ans->next;  // Return the merged list skipping the dummy node
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        //break LL into half of middle
        ListNode* mid=findMid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;

        //sort RE
        left=sortList(left);
        right=sortList(right);

        //merge both list
        ListNode* mergedLL=merge(left,right);
        return mergedLL;
        
    }
};









```

## Submission at 2024-10-28 11:05:27


```
// write code from scratch
#include<iostream>
using namespace std;
int kOccurrences(int arr[9], int k){
    for(int i=0;i<9;i++){
    if(arr[i]==k){
      cout<<arr[i]<<" ";
    }
    if(arr[i]!=k){
        return -1;
    }
    }
    return 0;
}
int main(){
    int arr[9]={7,2,1,2,3,4,4,4,4};
    
    kOccurrences(arr,4);


}
```

## Submission at 2024-11-04 09:50:50


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

int findMax(Node *root)
{
    //code here
    if (root == NULL) {
        return INT_MIN; // Return the smallest integer if the tree is empty
    }

    // Get the maximum value from the left and right subtrees
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    return max(root->data, max(leftMax, rightMax));
}


```

## Submission at 2024-11-04 09:51:21


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

int findMax(Node *root)
{
    //code here
    if (root == NULL) {
        return INT_MIN; // Return the smallest integer if the tree is empty
    }

    // Get the maximum value from the left and right subtrees
    int leftMax = findMax(root->left);
    int rightMax = findMax(root->right);
    return max(root->data, max(leftMax, rightMax));
}


```

## Submission at 2024-11-25 09:10:13


```
Q: ADD 2 number represent by linked list:

//  void print(node* head){
//     node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
    
// }
// node* reverse(node* head){
//     node* prev = NULL;
//     node* curr = head;
    
//     while(curr != NULL){
//         node* next = curr->next; // Save next node
//         curr->next = prev;       // Reverse the link
//         prev = curr;             // Move prev and curr one step forward
//         curr = next;
//     }
    
//     return prev; // prev will be the new head
// }

// node* solve(node* &head1,node* &head2){

//     if(head1==NULL){
//         return head2;
//     }
//     if(head2==NULL){
//         return head1;
//     }
//     //reverse both LL:

//     head1=reverse(head1);
//     head2=reverse(head2);

//     //ADD

//    node* anshead=NULL;
//     node* anstail=NULL;
//     int carry=0;
//     while(head1!=NULL && head2!=NULL){             //head1 or head2 dono NULL ho jaye tab tak karna hein per ho sakte hein ko head1 null ho jaye or head2 na ho or ye bhi ho sakta hein ki
//      //head2 null ho jaye or head1 na ho  to uska condition aahe hein

//        int sum= carry+head1->data+head2->data;
//        int digit=sum%10;
//         carry=sum/10;

// //crate a new node for digit

//        node* newnode= new node(digit);
       
//        //attached newnode into ans wali linked list

//        if(anshead==NULL){
//         anshead=newnode;
//         anstail=newnode;
//        }
//        else{
//         anstail->next=newnode;
//         anstail=newnode;
//        }
//        head1=head1->next;
//        head2=head2->next; 
//     }

//     while(head1!=NULL){                        //head2 null   or head1 not null
//         int sum= carry+head1->data;
//        int digit=sum%10;
//         carry=sum/10;

//        //create a new node for digit

//        node* newnode =new node(digit);
//        anstail->next=newnode;
//         anstail=newnode;
//         head1=head1->next;
//     }

//     while(head2!=NULL){              //head1 null   or head2 not null
//         int sum= carry+head2->data;
//        int digit=sum%10;
//         carry=sum/10;

//        //create a new node for digit

//        node* newnode =new node(digit);
//        anstail->next=newnode;
//         anstail=newnode;
//         head2=head2->next;
    
//     }

//     while(carry!=0){
//         int sum= carry;
//         int digit=sum%10;
//          carry=sum/10;
        
//        node* newnode =new node(digit);
//        anstail->next=newnode;
//         anstail=newnode;
//     }
//     //ans ka LL reverse karo

//     anshead=reverse(anshead);
//     return anshead;
// }
// int main(){
//     //head 1 wali LL
//     node* head1=new node(2);
//     node* second1= new node(4);
//     head1->next=second1;

//     //head 2 wali LL  (second LL)

//     node* head2=new node(2);
//     node* second2= new node(3);
//     node* third2= new node(4);
//     head2->next=second2;
//      second2->next=third2;
//      node* ans=solve(head1,head2);
//      print (ans);    
// }

// Q:  PRint k th node from the end

// void print(node* head){
//     node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
// }
// void fun(node* &head, int k, int &counter, int &ans){
//     if(head==NULL){
//         return ;
//     }
//     fun(head->next, k, counter, ans);
//     counter++;

//     // When counter matches k, we have found the k-th node from the end
//     if (counter == k) {
//         ans = head->data;
//     }
// }
// int main(){
//     node* first=new node(1);
//       node* second=new node(2);
//         node* third=new node(3);
//  node* fourth=new node(4);
//   node* fifth=new node(5);
//         first->next=second;
//         second->next=third;
//         third->next=fourth;
//         fourth->next=fifth;
//         fifth->next=NULL;
//         int ans=-1;
//         int k;
//         cout<<"enter k ";
//         cin>>k;
//       print(first);
//       cout<<endl;
//        int counter = 0;  // Counter for position from the end
//     fun(first, k, counter, ans);
//     cout<<"ans is"<<ans<<endl;
//  }


// Q:  merge two  sorted list :

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
//         if(left==NULL){
//             return right;
//         }
//         if(right==NULL){
//             return left;
//         }
//         ListNode* ans=new ListNode(-1);
//         ListNode* mptr=ans;
//         while(left!=NULL&&right!=NULL){
//             if(left->val<=right->val){
//                 mptr->next=left;
//                 mptr=left;
//                 left=left->next;
//             }
//             else if(right->val>left->val){           //right->val>left->val
//             mptr->next=right;
//             mptr=right;
//             right=right->next;

//             }
//         }
//         while(left!=NULL){              // baki ki sari node jodo left kikyki left NULL nahi hua hein
//             mptr->next=left;
//             mptr=left;
//             left=left->next;
//         }
//         while(right!=NULL){
//              mptr->next=right;
//             mptr=right;
//             right=right->next;
//         }
//        return ans->next;        
//     }    
// };


 // Q      sort list using merge sort

// class Solution {
// public:
//  ListNode* findMid(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head->next;
        
//         // Move 'fast' two steps and 'slow' one step at a time
//         while(fast != NULL && fast->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         // 'slow' will be at the middle of the list
//         return slow;
//     }
//     // Function to merge two sorted linked lists
//     ListNode* merge(ListNode* left, ListNode* right) {
//         if(left == NULL) return right;
//         if(right == NULL) return left;
        
//         ListNode* ans = new ListNode(-1);  // Dummy node to help merge
//         ListNode* mptr = ans;
        
//         while(left != NULL && right != NULL) {
//             if(left->val <= right->val) {
//                 mptr->next = left;
//                 left = left->next;
//             } else {
//                 mptr->next = right;
//                 right = right->next;
//             }
//             mptr = mptr->next;
//         }
        
//         // If there are remaining nodes in either list
//         if(left != NULL) {
//             mptr->next = left;
//         } else {
//             mptr->next = right;
//         }
        
//         return ans->next;  // Return the merged list skipping the dummy node
//     }
//     ListNode* sortList(ListNode* head) {
//         if(head==NULL){
//             return NULL;
//         }
//         if(head->next==NULL){
//             return head;
//         }
//         //break LL into half of middle
//         ListNode* mid=findMid(head);
//         ListNode* left=head;
//         ListNode* right=mid->next;
//         mid->next=NULL;

//         //sort RE
//         left=sortList(left);
//         right=sortList(right);

//         //merge both list
//         ListNode* mergedLL=merge(left,right);
//         return mergedLL;
        
//     }
// };


// Q4:                      // Intersection of Two Linked Lists

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode* a=headA;
//         ListNode* b=headB;
//         while(a->next!=NULL && b->next!=NULL){
//             if(a==b){
//                 return a;
//             }
//             //a==b na hoy to a and b ne aagal vadharo
//             a=a->next;
//             b=b->next;
//         }
//         if(a->next==NULL & b->next==NULL){
//             return NULL;
//         }
//          if(a->next==NULL){
//             //B LL is bigger
//             //we need to find out how much bigger it is
//             int blen=0;
//             while(b->next==NULL){
//                 blen++;
//                 b=b->next;
//             }
//             while(blen--){
//                 headB=headB->next;
//             }
//         }
//         if(b->next==NULL){
//             //A LL is bigger
//             //we need to find out how much bigger it is
//             int alen=0;
//              while(a->next==NULL){
//                 alen++;
//                 a=a->next;
//             }
//             while(alen--){
//                 headA=headA->next;
//             }
//         }
//         if(headA !=headB){
//             headA=headA->next;
//             headB=headB->next;
//         }
//         //loop se bahar aa gaye that means headA ==headB 
//         return headA;

//     }
// };


//Q5:                                             //flatten Linked list

// class Solution {
// public:

// Node* merge(Node* a,Node* b){
//     if(a==NULL){
//         RETURN b;
//     }
//     if(b==NULL){
//         return a;
//     }
//     Node* ans=0;
//     if(a->data<b->data){
//         ana=a;
//         a->bottom=merge(a->bottom,b);
//     }
//     else{
//         ans=b;
//         b->bottom=merge(a,b->bottom);
//     }
//     return ans;
// }
// Node*flatten(Node* root){
//     if(root==NULL){
//         Node* mergeLL=merge(root,flatten(root->next));
//         return mergeLL;
//     }
// }

//Q7:               delete n nodes after m nodes


// class solution{
// public:
            
//             void linkdelete(struct node *head ,int m,int n){
//                 if(head==NULL){
//                     return NULL;
//                 }
//                 node* it=head;
//                 for(int i=0;i<m-1;i++){

//                     //if m nodes are not avialable
//                     if(it==NULL){
//                         return;

//                     }
//                     it=it->next;
//                 }
                
//                 // it->would be m th node

//                 if(it==NULL){
//                     return;
//                 }
//                 node* mthnode=it;
//                 it=mthnode->next;
//                 for(int i=0;i<n;i++){
//                     if(it==NULL){
//                         return ;
//                     }
//                     node* temp=it->next;
//                     delete it;
//                     it=temp;
//                 }
//                 mthnode->next = it;
//      recursion relation:
//                 linkdelete(it,m,n);
//             }
// };


// // Pattern 
  
  // 54321
  // 4321
  // 321
  // 21
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n-row;col>0;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }    

  
  // Pattern 4


  // 54321
  // 5432
  // 543
  // 54

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n;col>=row+1;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 6
  // 5
  // 45
  // 345
  // 2345
  // 12345

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n-row;col<=n;col=col+1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 7
  // 1
  // 21
  // 321
  // 4321
  // 54321

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=row+1;col>=1;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 8
  // 5
  // 54
  // 543
  // 5432
  // 54321

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=n;col>=n-row;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 9
  // 1
  // 22
  // 333
  // 4444
  // 55555

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<row+1;
  //   }
  //   cout<<endl;
  // }

  // Pattern 10
  // 5
  // 44
  // 333
  // 2222
  // 11111

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=n;col>=n-row;col--){
  //     cout<<n-row;
  //   }
  //   cout<<endl;
  // }

  // Pattern 11
  // 55555
  // 4444
  // 333
  // 22
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=n-row;col>=1;col--){
  //     cout<<n-row;
  //   }
  //   cout<<endl;
  // }

  // Pattern 12
  // 11111
  // 2222
  // 333
  // 44
  // 5
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=n-row;col>=1;col--){
  //     cout<<row+1;
  //   }
  //   cout<<endl;
  // }

  // Pattern 13
  // 12345
  // 4321
  // 123
  // 21
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=1;col<=n-row;col++){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 14
  // 1234567
  // 12345
  // 123
  // 1

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=1;col<=2*(n-row-1)-1;col++){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  // Pattern 15
  // 1
  // 01
  // 101
  // 0101

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++){
  //   for(int col=row;col>=0;col--){
  //     if(col%2==0){
  //       cout<<"1";
  //     }
  //     else{
  //       cout<<"0";
  //     }
  //   }
  //   cout<<endl;
  // }

  // Pattern 16
  // 13579
  // 3579
  // 579
  // 79
  // 9

// int n;
//   cin>>n;
//   int c=1;
//   for(int row=0;row<n;row=row+1){
//     for(int col=c;col<=9;col=col+2){
//       cout<<col;
//     }
//     cout<<endl;
//     c=c+2;
//   }

  // Pattern 17
  // 1
  // 2 4
  // 1 3 5
  // 2 4 6 8
  // 1 3 5 7 9

// int n;
//   cin>>n;
//   for(int row=1;row<=n;row++){
//     if(row%2!=0){
//       for(int col=1,count=0;count<row;count++,col=col+2 ){
//         cout<<col;
//       }
//     }
//     else{
//       for(int col=2,count=0;count<row;count++,col=col+2){
//         cout<<col;
//       }
//     }
//     cout<<endl; 
//   }

// Q:  numeric hollow pyramid

int n;
  cin>>n;
  for(int row=0;row<n;row++){
    //spaces
    for(int col=0;col<n-row-1;col++){
      cout<< " ";
    }

    //numbers
   int start=1;
    for(int col=0;col<2*row+1;col++){
      if(row==0||row==n-1){
        if(col%2==0){
          cout<<start;
          start=start+1;
          
        }
        else{
          cout<< " ";
        }
        }
      else {
        if(col==0){
          cout<< 1;
        }
        else if(col==2*row+1-1){
          cout<<row+1;
        }
        else{
          cout<<" ";
        }
      }
     
      }
    cout<<endl;
    }
 }

// Q:   hollow diamond

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<n-row-1;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for(int col=0;col<2*row+1;col=col+1){
  //     if(col==0){
  //       cout<<"*";
  //     }
  //     else if(col==2*row){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
    
  // }
  // //part 2
  // for(int row=0;row<n;row=row+1){
  //   //space
  //   for(int col=0;col<row;col=col+1){
  //     cout<<" ";
  //   }
  //   //star
  //   for (int col=0;col<2*n- 2*row-1;col=col+1){
  //     if(col==0){
  //       cout<<"*";
  //     }
  //     else if(col==2*n-2*row-2){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     } 
  //   }
  //   cout<<endl;
  // }


 // Q : flipped solid diamond
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //inverted half pyramid
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<< "*";
  //   }
    
  //   //space wala full pyramid

  //   for(int col=0;col<2*row-1;col=col+1){
  //    cout<<" "; 
  //   }

  //   //inverted half pyramid
  //   for(int col=0;col<n-row;col=col+1){
  //     cout<< "*";
  //   }
    
  //    cout<<endl;
  // }
  // for(int row=0;row<n;row=row+1){
  //   //half pyramid
  //   for(int col=0;col< row+1;col=col+1){
  //     cout<< "*";
  //   }
    
  //   //inverted full pyramid space wala
  //   for(int col=0;col<2*n-2*row-1;col=col+1){
  //     cout<<" ";
  //   }
    
  //   //half pyramid
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<< "*";
  //   }
  //   cout<<endl;   
  // }

//  Q : alpha palindrome pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   int col;
  //   for(int col=0;col<row+1;col=col+1){
  //     int ans=col+1;
  //     char ch=ans+'A'-1;
  //     cout<<ch;
  //   }
  //   for(col=row;col>=1;col=col-1){
  //     int ans=col;
  //     char ch=ans+'A'-1;
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }

  // Q :   numeric hollow inverted half pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=row+1;col<=n;col=col+1){ 
  //     if(col==row+1||col==n||row==0){
  //       cout<< col;
  //     }
  //     else{
  //       cout<<" ";
  //     }

  //   }
  //   cout<<endl;
  // }

// Q:     numeric hollow half pyramid 
  
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<row+1;col=col+1){
  //     if(col==0||col==row||row==n-1){
  //       cout<<col+1;
  //     }
  //     else{
  //       cout<<" ";
  //     }
     
  //   }
  //   cout<<endl;
  // }


// Q:          hollow inverted half pyramid
  
// int n;
//   cin>>n;
//   for(int row=0;row<n;row=row+1){
//     for(int col=0;col<n-row;col=col+1){
//       if(col==0||col==n-row-1||row==0){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
     
//     }
//     cout<<endl;
//   }

  // Q:      numeric palindrome equilateral pyramid

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   //spaces
  //   for(int col=0;col<n-row-1;col=col+1){
  //     cout<<" ";
  //   }
  //   for(int col=0;col<row+1;col=col+1){
  //     cout<<col+1;
  //       }
  //   for(int col=row;col>=1;col=col-1){
  //     cout<<col;
  //   }
  //   cout<<endl;
  // }

  //  Q:  floyd's  pattern 
  
  // int n,c;
  // cin>>n;
  // c=1;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<=row;col=col+1){
  //     cout<<c;
  //     c++;
  //   }
  //   cout<<endl;
  // }
  

// Q:  pascal's triangle

  // int n;
  // cin>>n;
  // for(int row=1;row<=n;row=row+1){
  //   int c=1;
  //   for(int col=1;col<=row;col=col+1){
  //     cout<<c<<" ";
  //     c=c*(row-col)/col;
  //   }
  //   cout<<endl;
  // }

  
// Q:   butterfly pattern
  
 //  int n;
 //  cin>>n;
 // for(int row=0;row<n;row=row+1){
 //   for(int col=0;col<row+1;col=col+1){
 //     cout<<"*";
 //   }
 //   for(int col=0;col<2*(n-row-1);col=col+1){
 //     cout<<" ";
 //   }
 //   for(int col=0;col<row+1;col=col+1){
 //      cout<<"*";
 //    }
 //   cout<<endl;
 // }
 //  //part 2

 //  for(int row=0;row<n;row=row+1){
 //    for(int col=0;col<n-row;col=col+1){
 //      cout<<"*";
 //    }
 //    for(int col=0;col<2*row;col=col+1){
 //      cout<<" ";
 //    }
 //    for(int col=0;col<n-row;col=col+1){
 //      cout<<"*";
 //    }
 //    cout<<endl;
    
 //  }



//  Q:    hollow full pyramid

//   int n;
//   cin>>n;
//   for(int row=0;row<n;row=row+1){
//     //spaces 
//     for(int col=0;col<n-row-1;col=col+1){
//       cout<<" ";
//     }
//     //stars
//     for(int col=0;col<row+1;col=col+1){
//       if(col==0||col==row||row==n-1){
//       cout<<"* ";
//     }
//       else{
//         cout<<"  ";
//       }    
//   }
//     cout<<endl;
// }

  
  //  Q:      hollow square

  // int n;
  // cin>>n;
  // for(int row=0;row<n;row=row+1){
  //   for(int col=0;col<n;col=col+1){
  //     if(row==0||row==n-1||col==0||col==n-1){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }

  // Q      numeric hollow pyramid

 //  int n;
 //  cin>>n;
 //  for(int row=0;row<n;row++){
 //    //spaces
 //    for(int col=0;col<n-row-1;col++){
 //      cout<< " ";
 //    }

 //    //numbers
 //   int start=1;
 //    for(int col=0;col<2*row+1;col++){
 //      if(row==0||row==n-1){
 //        if(col%2==0){
 //          cout<<start;
 //          start=start+1;
          
 //        }
 //        else{
 //          cout<< " ";
 //        }
 //        }
 //      else {
 //        if(col==0){
 //          cout<< 1;
 //        }
 //        else if(col==2*row+1-1){
 //          cout<<row+1;
 //        }
 //        else{
 //          cout<<" ";
 //        }
 //      }
     
 //      }
 //    cout<<endl;
 //    }
 // }
  
  // Q:    spiral matrix

//  #include<vector>
// vector<int>spiral(vector<vector<int>> &matrix){

//   vector<int>ans;
//   int row=0;
//   int col=0;
//   int count=0;
//   int total=row*col;

//   //index intialisation
//   int startingrow=0;
//   int startingcol=0;
//   int endingrow=row-1;
//   int endingcol=col-1;

//   while(count<total){
//     //print starting row
//     for(int index=startingcol;count<total&&index<=endingcol;index++){
//       ans.push_back(matrix[startingrow][index]);
//       count++;
//     }
//     startingrow++;
    
//    // printing ending col
//     for(int index=startingrow;count<total&&index<=endingrow;index++){
//       ans.push_back(matrix[index][endingcol]);
//       count++;
//     }
//     endingcol--;

//     //printing ending row

//     for(int index=endingcol;count<total&&index>=startingcol;index--){
//       ans.push_back(matrix[endingrow][index]);
//       count++;
//     }
//     endingrow--;

//     //printing starting col
//     for(int index=endingrow;count<total&&index>=startingrow;index--){
//       ans.push_back(matrix[index][startingcol]);
//       count++;
//     }
//     startingcol++;
   
  
  
// }
//   return ans;
// }
// int main(){
//   vector<vector<int>>matrix{
// {1,2,3},
// {4,5,6},
// {7,8,9}
// };
//  spiral(matrix);
// }

//Q7                  //wave print

// #include<vector>
// void waveprint(vector<vector<int>> arr,int nrow,int mcol){
//   for(int col=0;col<mcol;col++){
//     if(col&1){
//       //odd index  ->  bottom to top
//       for(int row=nrow-1;row>=0;row--){
//         cout<<arr[row][col]<<" ";
//       }
//       cout<<endl;
      
//     }
//     else{
//       //even index -> top to bottom
//       for(int row=0;row<nrow;row++){
//         cout<<arr[row][col]<<" ";
//       }
//       cout<<endl;
//     }
//   }
//   cout<<endl;
// }
// int main(){
//   vector<vector<int>>arr{
//     {1,2,3,4},
// {5,6,7,8},
// {9,10,11,12},
// {13,14,15,16},
// {17,18,19,20}
  
//   };
//   int nrow= arr.size();
//   int mcol=arr[0].size();
//   waveprint(arr, nrow, mcol);
// return 0;
// }

//Q:           FIRST reapatig element in array

unorderead map<int,int>hash
for(int i=0;i<n;i++){
hash[a[i]]++;
}
for(int i=0;i<n;i++){
if(hash[a[i]]>1){
return -i+1;
}
}
return -1;
}
};

// Q:               find missing element

// void findmissing(int a[],int n ){
//   int i=0;
//   while(i<n){
//     int index=a[i]-1;
//     if(a[i]!=a[index]){
//       swap(a[i],a[index]);
//     }
//     else{
//       i++;
//     }
//   }

//   // for(int i=0;i<n;i++){
//   //   cout<<a[i]<<" ";
//   // }

//   for(int i=0;i<n;i++){
//     if(a[i]!=i+1){
//       cout<<i+1<<" ";
//     }

//   }
//   cout<<endl;
// }

// int main(){
//   int n;
//   int a[] ={1,3,5,3,4};
//   n=sizeof(a)/sizeof(int);
//   findmissing(a,n);
// }

//Q8:                   sqrt of a number

// int findSqrt(int n){
//   int target=n;
//   int start=0;
//   int end=n;                         
//   int mid=start+(end-start)/2;
//   int ans=-1;
//   while(start<=end){
//     if(mid*mid==target){
//       return mid;
//     }
//     else if(mid*mid>target){
//       //left search
//       end=end-1;
//     }
//     else{
//       ans=mid;
//         //right search
//       start=mid+1;
//     }
//     mid=start+(end-start)/2;
//   }
//   return ans ;
// }
// int main(){
//   int n;
//   cout<<"entert the number for sqrt"<<endl;
//   cin>>n;
//   int ans=findSqrt(n);
//   cout<<"ans is "<<ans<<endl;
//   int precision;                   
//   double finalans=ans;
//   cout<<"enter a number of floating digit in precision"<<endl;
//   cin>>precision;
//   double step=0.1;
//   for(int i=0;i<precision;i++){
//     for(double j=finalans;j*j<=n;j=j+step){
//       finalans=j;
//     }
//     step=step/10;
//   }
//   cout<<"final ans is "<<finalans<<endl;
//   return 0;
// }

//Q1:                                     //selection sort

//   #include<vector>
// int main(){
// //time complexcity is O(n*n)
//   //sc  ->O(1)
//   vector<int>arr{5,4,3,2,1};
//   int n=arr.size();
//   //seletion sort
//   //outer loop indicate round->n-1
//   for(int i=0;i<n-1;i++){
//     int minindex=i;
//     //inner loop-> index of minimum element in range i->n
//     for(int j=i+1;j<n;j++){
//       //find minimum 
//       if(arr[j]<arr[minindex]){
//         minindex=j;
//       }
      
//     }
//     //swap
//     swap(arr[i],arr[minindex]);
//   }
//   //printing
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<endl;
//   }
// }

//Q2:                                    //bubble sort

// #include<vector>
// int main(){
//   vector<int>arr{10,1,7,6,14,9};
//   int n= arr.size();
//   //outer loop -> number of round
//   for(int round=1;round<n;round++){
//     bool swaped=false;
//     for(int j=0;j<=n-round-1;j++){
//       if(arr[j]>arr[j+1]){
//         swaped=true;
//         swap(arr[j],arr[j+1]);
//       }
//     }
//     if(swaped==false){
//       cout<<"sorting is done no need to  check further round"<<endl;
//       break;
//     }
//   }
//   //printing
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// }

//Q3:                                 //insertion sort

// #include<vector>
// int main(){
//   vector<int>arr{10,1,7,6,14,9};
//   int n=arr.size();
//   //outer loop-> round
//   for(int round=1;round<n;round++){
//     //step1:fetch
//     int val= arr[round];
//      //compare
//     int j=round-1;
//     for(;j>=0;j--){
     
//       if(arr[j]> val){
//         //shift
//         arr[j+1]=arr[j];
//       }
//       else{
//         //ruk jao
//         break;
//       }
//     }
//     //copy
    
//     arr[j+1]=val;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
// cout<<endl;
// return 0;
//}

// merge sort

def merge_sort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]
        merge_sort(left_half)
        merge_sort(right_half)
        i = j = k = 0
        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1
        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1
arr = [38, 27, 43, 3, 9, 82, 10]
merge_sort(arr)
print("Sorted array (Merge Sort):", arr)


// Q:                      	Quick sort
              
 def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[len(arr) // 2]
        left = [x for x in arr if x < pivot]
        middle = [x for x in arr if x == pivot]
        right = [x for x in arr if x > pivot]
        return quick_sort(left) + middle + quick_sort(right)
arr = [38, 27, 43, 3, 9, 82, 10]
sorted_arr = quick_sort(arr)
print("Sorted array (Quick Sort):", sorted_arr)

// Q:  book allocation

// Q1                               //  book allocation



// #include<vector>
// bool ispossible(vector<int>arr,int n,int m,int mid){
//   //m is number of student 
//   int studentcount=1;
//   int pagesum=0;
//   for(int i=0;i<n;i++){
//     if(pagesum+arr[i]<=mid){
//       pagesum+=arr[i];
//     }
//     else{
//       studentcount++;
//       if(studentcount>m || arr[i]>mid){
//         return false;
//       }
//       pagesum=arr[i];
//     }
    
//   }
//   return true;
// }
//   int allocatebooks(vector<int>arr,int n, int m){
//     if(m>n){
//       return -1;
//     }
//     int start=0;
//     int sum=0;
//     int ans=-1;
//     for(int i=0;i<n;i++){
//       sum=sum+arr[i];
//     }
//     int end=sum;
//    int mid=start+(end-start)/2;
    
//     while(start<=end){
//       if(ispossible(arr,n,m,mid)){
//         ans=mid;
//         //left search
//         end=mid-1;
//       }
//       else{
//         start=mid+1;
//       }
//       mid=start+(end-start)/2;
      
//     }
//     return ans;
    
//   }
// int main(){
//   vector<int>arr={10,20,30,40};
//   int n=arr.size();
//   int m=2;//m is number of student and n is number of books
//   int ans=allocatebooks(arr,n,m);
//   cout<<"ans is "<<ans<<endl;
// }

//Q2:                                //k th diff pairs in a array

// class Solution {
// public:
//   // Brutal force approach
//   // Linear Work -> TC -> 0(n^2)
//   // Two Pointer Approch
//   int findPairs(vector<int> &nums, int k) {
//     sort(nums.begin(), nums.end());
//     set<pair<int, int>> ans;
//     int i = 0, j = 1;
//     // Two Pointer Approach
//     while (j < nums.size()) {
//       int diff = nums[j] - nums[i];
//       if (diff == k) {
//         ans.insert({nums[i], nums[j]});
//         ++i;
//         ++j;
//       } else if (diff > k) {
//         i++;
//       } else {
//         j++;
//       }
//       if (i == j)
//         j++;
//     }

//     // Binary Search
//     // a[i] - a[j] = k
//     // a[i] + k = a[j]

//     return ans.size();
//   }
// };

//Q3:                                 //paratha spoj

// #include <bits/stdc++.h>
// #include<vector>
// #include<limits.h>
// // bool isPossibleSolution(vector<int> cooksRanks, int mid, int nP) {
//   int currP = 0; // Initial PRATA Cooked Count
//   for (int i = 0; i < cooksRanks.size(); i++) {
//     int R = cooksRanks[i], j = 1;
//     int timeTaken = 0;
//     while (true) {
//       if (timeTaken + j * R <= mid) {
//         ++currP; // Increment PRATA count
//         timeTaken += j * R; // Time taken to cook j-th PRATA by i-th cook
//         ++j;
//       } else {
//         break; // If time taken exceeds mid, stop the loop
//       }
//     }
//     if (currP >= nP) {
//       return true; // If required PRATAs are cooked, return true
//     }
//   }
//   return false; // If not enough PRATAs are cooked, return false
// }

// // Function to find the minimum time required to cook all PRATAs
// int minTimeCompleteOrder(int nP, vector<int> &cooksRanks) {
//   int s = 0;
//   int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
//   int e = highestRank * (nP * (nP + 1) / 2); // Upper bound of time
//   int ans = INT_MAX;

//   // Binary search for the minimum time
//   while (s <= e) {
//     int mid = s + (e - s) / 2;
//     if (isPossibleSolution(cooksRanks, mid, nP)) {
//       ans = mid; // Update the answer if possible to cook in mid time
//       e = mid - 1; // Try for lesser time
//     } else {
//       s = mid + 1; // Increase the time limit
//     }
//   }
//   return ans; // Return the minimum time required
// }
// int main() {
//   //   int T;
//   cin >> T;
//   while (T--) {
//     int nP, nC;
//     cin >> nP >> nC;
//     vector<int> cooksRanks;
//     while (nC--) {
//       int R;
//       cin >> R;
//       cooksRanks.push_back(R);
//     }
//     cout << minTimeCompleteOrder(nP, cooksRanks) << endl; // Print the minimum time required
//   }
//   return 0;
// }




//Q4:                                             //eko spoj


// #include<vector>
// #include <bits/stdc++.h>

// bool isPossibleSolution(vector<long long int>trees,long long int m, long long mid){
//   long long int woodcollect=0;
//   for(long long int i=0;i<trees.size();i++){
//     if(trees[i]>mid){
//       woodcollect+=trees[i]-mid;
      
//     }
//   }
//   return woodcollect>=m;
  
// }
// long long int maxsawbladheight(vector<long long int>trees, long long int m){
//   long long int start=0;
//  long long int end=*max_element(trees.begin(),trees.end());
//   long long int ans=0;
//   long long int mid=start+(end-start)/2;
//   while(start<=end){
//     if(isPossibleSolution(trees,m,mid)){
//       ans=mid;
//       start=mid+1;
      
//     }
//     else{
//       end=mid-1;
//     }
//     mid=start+(end-start)/2;
//   }
//   return ans;
// }
// int main(){
//   long long int n,m;             //n is num of tree and m is howmuch wood wanted to jack
//   cin>>n>>m;
//   vector<long long int>trees;
//   while(n--){
//     long long int height;
//     cin>>height;
//     trees.push_back(height);
//   }
//   cout<<maxsawbladheight(trees,m);
  
// }


//Q7:                                    //aggrasive cow

// #include<algorithm>
// #include<vector>
// bool isPossibleSolution(vector<int>stall, int k,int mid){
//   int cowcount=1;
//   int lastpos= stall[0];
//   for(int i=0;i<stall.size();i++){
//     if(stall[i]-lastpos>=mid){
//       cowcount++;
//       if(cowcount==k){
//         return true;
//       }
//       lastpos=stall[i];
//     }
//   }
//   return false;
  
// }
// int aggressivecows(vector<int> &stall,int k){
//   sort(stall.begin(),stall.end());
//   int start=0;
//   int maxi=-1;
//   for(int i=0;i<stall.size();i++)
//     maxi=max(maxi,stall[i]);
//   int end=maxi;
//   int ans=-1;
//   int mid=start+(end-start)/2;
//   while(start<=end){
//     if(isPossibleSolution(stall,k,mid)){
//       ans=mid;
//       //right search
//       start=mid+1;
//     }
//     else{
//       //left search
//       end =mid-1;
//     }
//     mid=start+(end-start)/2;
    
//   }
//   return ans;
// }
// int main(){
//   vector<int>stall={4,2,1,3,6};
//      int k=2;                   //k is num of cows
//     int ans= aggressivecows(stall,k);
//     cout<<"ans is "<<ans<<endl;
  
// }


//Q8:                                 //painter partition

// #include<vector>
// bool isPossibleSolution (vector<int>arr,int k,int mid){
//      int paintercount=1;
//     int partitionsum=0;
//     for(int i=0;i<arr.size();i++){
//       if(partitionsum+arr[i]<=mid){
//         partitionsum+=arr[i];
//       }
//       else{
//        paintercount++;
//         if(paintercount>k || arr[i]>mid){
//           return false;
//         }
//         partitionsum=arr[i];
//       }

//     }
//     return true;
//   }
// int painterpartition(vector<int>arr,int k){
//   int start=0;
//   int sum=0;
//   for(int i=0;i<arr.size();i++){
//     sum+=arr[i];
//   }
//   int end=sum;
//   int mid=start+(end-start)/2;
//   int ans=-1;
//   while(start<=end){
//     if(isPossibleSolution(arr,k,mid)){
//       //stor ans
//       ans=mid;
//       //left search
//       end=mid-1;
      
//     }
//     else{
//       //right search
//       start=mid+1;
//     }
//     mid=start+(end-start)/2;
//   }
//   return ans;
  
// }
// int main(){
//   vector<int>arr={5,5,5,5};
//   int k=2;                                //k is num of painter
//   int ans=painterpartition(arr,k);
//   cout<<"ans is "<<ans<<endl;
// }

// Q                  check palindrome

// bool checkPalindrome(char word[]){
//   int i=0;
//   int n=strlen(word);
//   int j=n-1;
//   while(i<=n){
//     if(word[i]!=word[j])
//       return false;
//     else{
//       i++;
//       j--;
//     }
//   }
//   return true;
  
// }
// int main(){
//   char arr[100]="racecar";
//   cout<<"palindrome or not: "<<checkPalindrome(arr)<<endl; 
// }

// Q :                reverse a string         


// int reverseChararray(char name[]){
//   int i=0;
//   int n=strlen(name);
//   int j=n-1;
//   while(i<=j){
//     swap(name[i],name[j]);
//     i++;
//     j--;
//   }

//   // for loop
//   // for( ;i<=j;){
//   //   swap(name[i],name[j]);
//   //     i++;
//   //     j--;   
//  // }
  
//   return 0;

// }
//   int main(){
//     char name[100];
//     cout<<"enter a name:";
//     cin>>name;
//     cout<<"intially "<<name<<endl;
//     reverseChararray(name);
//     cout<<"after reversing:  "<<name<<endl;
//     return 0;
//   }

// Q :                 remove all adjacent duplicates

class Solution {
public:
    string removeDuplicates(string s) {
        stack<int>st;
        for(auto ch:s){
            if(!st.empty()&& st.top()==ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


// Q: remove all occurences of substring

void removeOccure(string&s, string& part){
    //base cas:
    int found;
    if(found==string::npos){
        return;
    }
     found=s.find(part);
    if(found!=string::npos)    {               //that means part is found 
    string left_part=s.substr(0,found);
    string right_part=s.substr(found+part.size(),s.size());
    s=left_part+right_part;
    removeOccure(s,part);
    }                 
}
string removeOccurrences(string s, string part) {
    removeOccure(s,part);
    return s;
}
};

// Q                   INTEGER TO roman

  // class Solution {
  // public:
  //     string intToRoman(int num) {
  //         string romansymbols[]={"M","CM","D","C","XC","L","XL","X","IX","V","IV","I"};
  //         int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
  //         string ans="";
  //         for(int i=0;i<13;i++){
  //             while(num>=value[i]){
  //                    ans += romansymbols[i];
  //                 num -= value[i];
  //             }
  //         }
  //         return ans;

  //     }
  // };

// Q                     string to integer

class Solution {
public:
    int myAtoi(string s) {
        // int integer= atoi(s.c_str());
        // return integer;
        int i=0 , sign =1 ;//+ve
        long long num=0;
        while(s[i]== ' '){
            i++ ;                          // ignore white spaces and i++
        }
        if(i<s.size()&& (s[i]=='-'||s[i]=='+')){
            sign =s[i]=='+'?1:-1;
            i++;                                //check number is positive or not
        }
        while(i<s.size()&&isdigit(s[i])){
            if(num>INT_MAX/10 ||(num==INT_MAX/10&& s[i]- '0'>INT_MAX%10)){
                return sign =-1?INT_MIN:INT_MAX;
            }
            num=num*10+(s[i]-'0');                     //1 assci value: 49ans 0 ascii value-> 48 s[i]-'0' if s[i]=1 then =49-48 =1;   
            i++;
        }
        if(num>INT_MAX){
            return INT_MAX;
        }
        else if(num<INT_MIN){
            return INT_MIN;
        }
        return num*sign;                  //because starting se hi pehle string hein so return 0
        
    }
};

//Q                  find the index of the first occurence

class Solution {
public:
    int strStr(string haystack, string needle) {
      int  n=haystack.size();
      int m=needle.size();
      if(m==0){
        return 0;
      }
      //outer loop for haystack
      for(int i=0;i<=n-m;i++){             //n is size of haystack
        //ineer loop for needle
        for(int j=0;j<=m-1;j++){     //m is size of niddle
           if(needle[j]!=haystack[i+j]){
            break;
           }
           if(j==m-1){             //j=m-1 that means match ho chuka hai
            return i;
           }

        }
      }
      return -1;
        
    }
};

// Q                           longest palindromic substring

class Solution {
public:
//method 1: // and tc o(n^3)
bool ispalindrome(string& s ,int start, int end){
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(ispalindrome(s,i,j)){
                    string t=s.substr(i,j-i+1);
                  if(t.size()>ans.size()){
                    ans=t;
                  }
                }
            }
        }
        return ans;

        
    }
};

//Q                   group anagram

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;
        for(auto str: strs){
            string s=str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);

        }
        vector<vector<string>>ans;
        for(auto it= mp.begin();it!=mp.end();it++){
            ans.push_back(it-> second);
        }
        return ans;
        
    }
};

//Q3:                                              // next smaller element

// #include<stack>
// #include<vector>
// int main(){
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(3);

//     stack<int>s;
//     s.push(-1);

//     vector<int>ans(v.size());
//     for(int i=v.size()-1;i>=0;i--){
//         int curr=v[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);
//     }

//     cout<<"printing:"<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

// }


//Q 4:                                               //previous smaller element

// #include<stack>
// #include<vector>

// vector<int>prevsmallerelement(vector<int>&v){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(v.size());
//     for(int i=0;i<v.size();i++){
//         int curr=v[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);

//     }
//     return ans;
// }

// vector<int>nextsmallerelement(vector<int>&v){
//     stack<int>s;
//     s.push(-1);

//     vector<int>ans(v.size());                          //store kar ne ke liye
//     for(int i=v.size()-1;i>=0;i--){
//         int curr=v[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);
//     }
//     return ans;

// }
// int main(){
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(3);
//     vector<int>ans1=nextsmallerelement(v);
//     cout<<"printing nextsmallerelement"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<ans1[i]<<" ";

//     }
//     cout<<endl;

//     vector<int>ans2=prevsmallerelement(v);
//     cout<<"printing prevsmallerelement"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<ans2[i]<<" ";

//     }
//     cout<<endl;


// }


// Q 5:                                     largest rectangle in histogram

//also leet code->84

// #include<stack>
// #include<vector>
// #include<limits.h>

// vector<int>prevsmallerelement(vector<int>&v){
//     stack<int>s;
//     s.push(-1);
//     vector<int>ans(v.size());
//     for(int i=0;i<v.size();i++){
//         int curr=v[i];
//         while(s.top()!=-1 && v[s.top()]>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(i);

//     }
//     return ans;
// }

// vector<int>nextsmallerelement(vector<int>&v){
//     stack<int>s;
//     s.push(-1);

//     vector<int>ans(v.size());                          //store kar ne ke liye
//     for(int i=v.size()-1;i>=0;i--){
//         int curr=v[i];
//         while(s.top()!=-1&&v[s.top()]>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(i);
//     }
//     return ans;

// }
// int getrectangularhistogram(vector<int>& height){

//     //step1: prevsmaller element

//     vector<int>prev=prevsmallerelement(height);

//     // step 2: nextsmallerelement

//     vector<int>next=nextsmallerelement(height);

//     int maxarea=INT_MIN;
//     int size=height.size();

//     for(int i=0;i<height.size();i++){
//         int len=height[i];
//         if(next[i]==-1){
//             next[i]=size;

//         }
//         int width=next[i]-prev[i]-1;
//         int area=len*width;
//         maxarea=max(area,maxarea);
//     }
//     return maxarea;


// }
// int main(){
//     vector<int>v;
//     v.push_back(2);
//     v.push_back(1);
//     v.push_back(5);
//     v.push_back(6);
//      v.push_back(2);
//       v.push_back(3);
//     cout<<"ans is: "<<getrectangularhistogram(v);
//     return 0;
// }


//  Q                   longest valid paranthesis

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(i);

            }
            else{
                st.pop();
               if(st.empty()){
                st.push(i);
               } 
               else{
                int length=i-st.top();
                maxlen=max(length,maxlen);
               }
            }
        }
        return maxlen;
        
    }
};

//Q2:                                                     reverse a stack

#include<stack>

void insertatbottom(stack<int>&s, int target){
    //base case:
    if(s.empty()){
        s.push(target);
        return;   
    }

        int topelement=s.top();
    s.pop();
    //recursive call
    insertatbottom(s,target);

    //backtrack
    s.push(topelement);



}


void reversestack(stack<int>&s){
    //base case:
    if(s.empty()){
        return;
    }


    // ek case
    int target=s.top();
    s.pop();
//recursive call
reversestack(s);

//insertatbottom:


insertatbottom(s,target);

}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
     s.push(30);
    s.push(40);
    s.push(50);
    reversestack(s);
    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;

}

//Q4:                                             // sort a stack

// #include<stack>

// void insertsorted(stack<int>&s,int target){
//     //base case:
//     if(s.empty()){
//         s.push(target);
//         return;
//     }
//     if(s.top()>=target){                        //that means target nano che
//         s.push(target);
//         return;
//     }
//     int topelement=s.top();
//     s.pop();
//     //RE
//     insertsorted(s,target);
//     //backtrack
//     s.push(topelement);
// }

// void sortstack(stack<int>&s){
//     //base case:
//     if(s.empty()){
//         return;
//     }
// //step A:
// int topelement=s.top();
// //step B:
// s.pop();
// //RE  step C:
// sortstack(s);
// //insertat stack

// insertsorted(s,topelement);


// }
// int main(){
//     stack<int>s;
//     s.push(7);
//     s.push(11);
//     s.push(3);
//     s.push(5);
//     s.push(9);
//     sortstack(s);
//     cout<<"sorted stack is:"<<endl;
//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     cout<<endl;
// }


// Q5:                                  // remove redundant brackets

// #include<stack>
// bool findredundant(string &s){
//     stack<int>st;
//     for(int i=0;i<s.size();i++){
//         char ch=s[i];
//         if(ch=='('|| ch=='+'|| ch=='-'|| ch=='*'||ch=='/'){
//             st.push(ch);
//         }
//         else{

//             if(ch==')'){
//                 bool isredundant= true;
//                 while(st.top()!='('){                 //opening bracket na mile tab tak loop chalavo
//                 char top=st.top();
//                    if(top=='+'|| top=='-'|| top=='*'||top=='/'){
//                      isredundant =false;
//                    }
//                    st.pop();

//                 }
                

//                 if(isredundant==true){
//                     return true;
//                     st.pop();
//                 }
//             }
//         }
        
//     }
//     return false;

// }
// int main() {
//     string expression;
//     cout << "Enter an expression: ";
//     cin >> expression;

//     if (findredundant(expression)) {
//         cout << "The expression has redundant brackets." << endl;
//     } else {
//         cout << "The expression does not have redundant brackets." << endl;
//     }

//     return 0;
// }

// Q                      VALID paranthesis

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];  // current character in the string

            // Opening bracket, push to stack
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            
            else {
                              //closing bracket   
                if(!st.empty()) {
                    char topch = st.top();  // get the top character of the stack
                    if((ch == ')' && topch == '(') || 
                       (ch == '}' && topch == '{') || 
                       (ch == ']' && topch == '[')) {
                        st.pop();  // valid pair, pop the stack
                    } else {
                                     //    not matching
                        return false;  
                    }
                } 
             else {
                    return false;  // stack is empty, but a closing bracket is found
                }
            }
        }
        
        // Check if the stack is empty at the end
       if(st.empty()){
    return true;
}
else{
    return false;
}
    }
};










```

## Submission at 2024-11-25 09:51:14


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:52:35


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:54:27


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:55:51


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 09:56:53


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}
```

## Submission at 2024-11-25 10:22:53


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
    
        Node* a=head1;
        Node* b=head2;
        while(a->next!=NULL && b->next!=NULL){
            if(a==b){
                return a;
            }
            //a==b na hoy to a and b ne aagal vadharo
            a=a->next;
            b=b->next;
        }
        if(a->next==NULL & b->next==NULL){
            return NULL;
        }
         if(a->next==NULL){
            //B LL is bigger
            //we need to find out how much bigger it is
            int blen=0;
            while(b->next==NULL){
                blen++;
                b=b->next;
            }
            while(blen--){
                head2=head2->next;
            }
        }
        if(b->next==NULL){
            //A LL is bigger
            //we need to find out how much bigger it is
            int alen=0;
             while(a->next==NULL){
                alen++;
                a=a->next;
            }
            while(alen--){
                head1=head1->next;
            }
        }
        if(head1 !=head2){
            head1=head1->next;
            head2=head2->next;
        }
        //loop se bahar aa gaye that means headA ==headB 
        return head1;

}



```

## Submission at 2024-11-25 11:15:59


```
// write code from scratch
#include<iostream>
using namespace std;
bool checkarithmetic(int arr[5], int n){
    for(int i=0;i<n;i++){
        if(arr[i]-arr[i+1]!=arr[i]-arr[i+1]){
            return false;
        }
        else{
          return true;
        }
    }
    
}
int main(){
    int n=5;
    int arr[5]={-5,-2,1,4,8};
    bool ans=checkarithmetic(arr,n);
    if(ans){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    

}
```

## Submission at 2024-11-25 11:33:21


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string str="abbaa";
    int n=5;
    for(int i=0;i<5;i++){
        if(str[i]==str[i+1]){
            cout<<"a";
        
        }
        else{
            i++;
        }
    }
}
```

## Submission at 2024-11-25 11:35:57


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string str="abbaa";
    int n=5;
    for(int i=0;i<5;i++){
        if(str[i]!=str[i+1]){
            cout<<"a";
        
        }
        else{
            i++;
        }
    }
}
```

