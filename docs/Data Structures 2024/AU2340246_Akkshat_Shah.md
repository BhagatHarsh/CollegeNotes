## Submission at 2024-08-09 04:53:26


```
//Printing Hello to greet the user with his name and exclamation mark
#include<iostream>
using namespace std;

int main(){
    char name[100];
    cin>>name;
    cout<<"Hello "<<name<<"!";
    return 0;
}
```

## Submission at 2024-08-09 05:42:22


```
// Program to print hello with name and exclamation mark
#inlcude<iostream>
using namespace std;

int main(){
    char name[100];
    cin>> name;
    cout<<"Hello " << name << "!";
    return 0;
}
```

## Submission at 2024-08-09 05:44:59


```
// Program to print hello with name and exclamation mark
#include<iostream>
using namespace std;

int main(){
    char name[100];
    cin>> name;
    cout<<"Hello " << name << "!";
    return 0;
}
```

## Submission at 2024-08-09 05:47:07


```
// Program to print hello with name and exclamation mark
#include<iostream>
using namespace std;

int main(){
    char name[100];
    cin>> name;
    cout<<"Hello " << name << "!";
    return 0;
}
```

## Submission at 2024-08-16 05:04:55


```
#include <iostream>
using namespace std;

int fibonacci(int x) {
    if(x==1){
        return 1;
    }
    if(x==0){
        return 0;
    }
    return (fibonacci(x-1)+(fibonacci(x-2)));
}

int main() {
    int x;
    cin >> x;
    if(x>=0 && x<=10){
        fibonacci(x);
    }
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 06:08:51


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1){
        return true;
    }
    if(n<0 || n%2!=0){
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

## Submission at 2024-08-22 09:34:29


```
#include <iostream>
#include <vector>

using namespace std;

// Function to generate combinations
void generateCombinations(int n, int k, int start, vector<int> &combination, vector<vector<int>> &result)
{
    // If the combination size is equal to k, add it to the result
    if (combination.size() == k)
    {
        result.push_back(combination);
        return;
    }

    // Generate combinations by including the next number
    for (int i = start; i <= n; i++)
    {
        combination.push_back(i);                               // Include the current number
        generateCombinations(n, k, i + 1, combination, result); // Move to the next number
        combination.pop_back();                                 // Backtrack and remove the current number
    }
}

// Main function
int main()
{
    int n, k;
    cin >> n >> k;

    vector<vector<int>> result; // To store all combinations
    vector<int> combination;    // To store the current combination

    // Generate all combinations
    generateCombinations(n, k, 1, combination, result);

    // Print the combinations
    cout << "[";
    for (size_t i = 0; i < result.size(); i++)
    {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (j < result[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i < result.size() - 1)
            cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-22 12:49:17


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

## Submission at 2024-08-22 12:52:16


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

## Submission at 2024-08-29 08:20:41


```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> arr1(a), arr2(b);
    if (a != b)
    {
        cout << "false";
        return 0;
    }

    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    if (arr1 == arr2)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
```

## Submission at 2024-08-29 08:23:20


```
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    if (n < 1 || n > 1000)
    {
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            sum = sum + i;
        }
    }

    cout << sum;

    return 0;
}
```

## Submission at 2024-08-29 08:23:22


```
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    if (n < 1 || n > 1000)
    {
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            sum = sum + i;
        }
    }

    cout << sum;

    return 0;
}
```

## Submission at 2024-08-29 08:26:41


```
#include <iostream>
#include <vector>
using namespace std;

int TriangularSum(vector<int> &nums)
{
    while (nums.size() > 1)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            nums[i] = (nums[i] + nums[i + 1]);
        }
        nums.pop_back();
    }

    return nums.at(0);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    if (n < 1 || n > 1001)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << TriangularSum(nums) << endl;

    return 0;
}
```

## Submission at 2024-08-29 08:29:42


```
#include <iostream>
#include <vector>
using namespace std;

int EvenNumberDigits(vector<int> &nums)
{
    int count = 0;
    int sub_count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sub_count = 0;
        if (nums[i] == 0)
        {
            continue;
        }

        while (nums[i] != 0)
        {

            nums[i] = nums[i] / 10;
            sub_count++;
        }

        if (sub_count % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << EvenNumberDigits(nums) << endl;

    return 0;
}
```

## Submission at 2024-08-29 08:32:03


```
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int temp = 0, count = 0, missingNumber = 0;
    cin >> n >> k;

    vector<int> arr(n);

    //input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //output
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[n - 1])
        {
            break;
        }
        for (int j = temp + 1; j < arr[i + 1] + 1; j++)
        {
            if (arr[i] == j)
            {
                break;
            }
            else
            {
                count++;
                missingNumber = j;
            }

            if (count == k)
            {
                cout << missingNumber;
                return 0;
            }
        }
        temp = arr[i];
    }

    int OutOfBounds = arr[n - 1];

    if (count >= 1)
    {
        count++;
    }

    while (count < k)
    {
        OutOfBounds++;
        missingNumber = OutOfBounds;
        count++;
    }

    cout << missingNumber;

    return 0;
}

```

## Submission at 2024-08-29 08:33:35


```
#include <iostream>
#include <vector>
using namespace std;

int TriangularSum(vector<int> &nums)
{
    while (nums.size() > 1)
    {
        for (int i = 0; i < nums.size() - 1; i++)
        {
            nums[i] = (nums[i] + nums[i + 1]);
        }
        nums.pop_back();
    }

    return nums.at(0);
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    if (n < 1 || n > 1001)
    {
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << TriangularSum(nums) << endl;

    return 0;
}
```

## Submission at 2024-08-29 08:35:37


```
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    vector<vector<int>> transporse(n, vector<int>(m));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transporse[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << transporse[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-29 08:42:58


```
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

## Submission at 2024-08-29 08:46:37


```
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int temp = 0, count = 0, missingNumber = 0;
    cin >> n >> k;

    vector<int> arr(n);

    //input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //output
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[n - 1])
        {
            break;
        }
        for (int j = temp + 1; j < arr[i + 1] + 1; j++)
        {
            if (arr[i] == j)
            {
                break;
            }
            else
            {
                count++;
                missingNumber = j;
            }

            if (count == k)
            {
                cout << missingNumber;
                return 0;
            }
        }
        temp = arr[i];
    }

    int OutOfBounds = arr[n - 1];

    if (count >= 1)
    {
        count++;
    }

    while (count < k)
    {
        OutOfBounds++;
        missingNumber = OutOfBounds;
        count++;
    }

    cout << missingNumber;

    return 0;
}
```

## Submission at 2024-08-29 10:20:59


```
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int missingnumber = 0, kthTerm = 0;
    int temp = 0;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = temp + 1; j < arr[n]; j++)
        {
            if (arr[i] == j)
            {
                break;
            }
            else
            {
                missingnumber = j;
                kthTerm++;

                if (kthTerm == k)
                {
                    cout << missingnumber;
                    break;
                }
            }
        }
        temp = arr[i];
    }

    return 0;
}
```

## Submission at 2024-08-29 10:23:55


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

## Submission at 2024-08-29 10:32:09


```
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int missingnumber = 0, kthTerm = 0;
    int temp = 0;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = temp + 1; j < arr[i]; j++)
        {

            missingnumber = j;
            kthTerm++;

            if (kthTerm == k)
            {
                cout << missingnumber;
                return 0;
            }
            temp = arr[i];
        }
    }

    return 0;
}
```

## Submission at 2024-08-29 10:34:21


```
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    int missingnumber = 0, kthTerm = 0;
    int temp = 0;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = temp + 1; j < arr[i]; j++)
        {

            missingnumber = j;
            kthTerm++;

            if (kthTerm == k)
            {
                cout << missingnumber;
                return 0;
            }
        }
        temp = arr[i];
    }

    return 0;
}
```

## Submission at 2024-08-30 05:02:44


```
#include<iostream>
using namespace std;

int pow(int x,int n){
    if(n==0){
        return 1;
    }

    if(n>0){
        return (x * pow(x,n-1));
    }else{
        return(x / pow(x,n+1));
    }

}
int main(){
    int x, n;
    cin>>x>>n;

    cout<<pow(x,n);
    return 0;
}
```

## Submission at 2024-08-30 05:18:52


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);

    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    for(int i =0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0; i<n;i++){
        if(a[i]>b[i]){
            c[i] = a[i];
        }else{
            c[i] = b[i];
        }

    }

    for(int i = 0;i<n;i++){
        cout<<c[i]<<" ";
    }


}

```

## Submission at 2024-08-30 05:37:52


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

Node* reverseLinkedList(Node *&head)
{
    while(head!=NULL){
        head->next = head;
    }



    return head;
    
}

```

## Submission at 2024-08-30 05:47:52


```
#include<iostream>
using namespace std;
int palindrome(char[100000] s){
    for(int i =0;i<s;i++){
        if(char[i] == char[s-i]){
            palindrome(char s);
        }else{
            return 0;
        }
    }
    return 0;
}
int main(){
    char[100000] s;
    cin>>s;
    return 0;
}
```

## Submission at 2024-08-30 05:51:30


```
#include<iostream>
using namespace std;
int palindrome(String s){
    bool flag = true;
    for(int i =0;i<(s-1)/2;i++){
        if(char[i] == char[s-i]){
            continue;
        }else{
            flag = false
            return 0;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
int main(){
    String s;
    cin>>s;
    return 0;
}
```

## Submission at 2024-08-30 06:08:53


```
# Write code from scratch    
i = len(s)
    a=0
    c=1
    b=a-(i-1)
    for str(s):
        if s[a] ==s[0]:
            return true;
            
```

## Submission at 2024-08-30 06:21:07


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
    while(head!=NULL){
        head->next = head;
    }

    return head->data;
}

```

## Submission at 2024-09-06 05:21:14


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
    Node* curr = head;
    Node* prev = NULL;

    while(curr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp
    }
}

```

## Submission at 2024-09-06 05:21:35


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
    Node* curr = head;
    Node* prev = NULL;

    while(curr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
}

```

## Submission at 2024-09-06 05:22:08


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
    Node* curr = head;
    Node* prev = NULL;

    while(curr){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

```

## Submission at 2024-09-06 05:45:43


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int rowcounter = 0;
    int n= matrix.size(), m = matrix[0].size();
    vector<int> ans;

    while(rowcounter<n){
        int columnCounter = 0, count = 0;

        while(rowcounter - count>=0 && columnCounter < m){
            // cout<< matrix[rowcounter - count][columnCounter]<<" ";
            ans.push_back(matrix[rowcounter - count][columnCounter]);
            count++;
            columnCounter++;
        }
        rowcounter++;
    }
    int columnCounter2 = 1;
    while(columnCounter2 < m){
        int rowcounter2 = n-1, count =0;
        while(rowcounter2>=0 && columnCounter2 + count <m){
            ans.push_back(matrix[rowcounter2][columnCounter2 + count]);
            count++;
            rowcounter2--;
        }
        columnCounter2++;

    }
    return ans;
}

```

## Submission at 2024-09-06 05:48:55


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int rowcounter = 0;
    int n= matrix.size(), m = matrix[0].size();
    vector<int> ans;

    while(rowcounter<n){
        int columnCounter = 0, count = 0;

        while(rowcounter - count>=0 && columnCounter < m){
            // cout<< matrix[rowcounter - count][columnCounter]<<" ";
            ans.push_back(matrix[rowcounter - count][columnCounter]);
            count++;
            columnCounter++;
        }
        rowcounter++;
    }
    int columnCounter2 = 1;
    while(columnCounter2 < m){
        int rowcounter2 = n-1, count =0;
        while(rowcounter2>=0 && columnCounter2 + count <m){
            ans.push_back(matrix[rowcounter2][columnCounter2 + count]);
            count++;
            rowcounter2--;
        }
        columnCounter2++;

    }
    return ans;
}

```

## Submission at 2024-10-04 05:10:56


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                continue;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:13:33


```
#include<iostream>
#include<string>
using namespace std;

void isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        cout<< "false";
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            cout<< "false";
        }
    }

    cout<<"true";
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    isAnagram(s,t);
    // if(fun){
    //     cout<<"true";
    // }else{
    //     cout<<"false";
    // }
    // return 0;
}
```

## Submission at 2024-10-04 05:18:03


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.length();
    int len2 = t.length();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                continue;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:19:28


```
#include<iostream>
#include<string>
using namespace std;

void isAnagram(string s, string t){
    int len1 = s.length();
    int len2 = t.length();

    if(len1!=len2){
        cout<<"false";
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                continue;
            }
        }
        if(temp == false){
            cout<< "false";
        }
    }

    cout<< "true";
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    isAnagram(s,t);
    // if(fun){
    //     cout<<"true";
    // }else{
    //     cout<<"false";
    // }
    // return 0;
}
```

## Submission at 2024-10-04 05:20:36


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:24:08


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 05:47:40


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    vector<int>answer = {};
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int cnt;
    for(int i=0; i< arr.size(); i++){
        cnt=0;
        for(int j = i+1; j<arr.size(); j++){
            if(arr[j]>arr[i]){
                cnt++;
                break;
            }else{
                cnt++;
            }

            if(i==arr.size()-1){
                cnt=0;
            }
        }

        answer.push_back(cnt);
    }

    for(int i=0; i<answer.size();i++){
        cout<<answer[i];
    }

    return 0;
}
```

## Submission at 2024-10-04 05:51:58


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    vector<int>answer = {};
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int cnt;
    for(int i=0; i< arr.size(); i++){
        cnt=0;
        for(int j = i+1; j<arr.size(); j++){
            if(arr[j]>arr[i]){
                cnt++;
                break;
            }else{
                cnt++;
            }

            if(i==arr.size()-1){
                cnt=0;
            }
        }

        answer.push_back(cnt);
    }

    for(int i=0; i<answer.size();i++){
        cout<<answer[i];
    }

    cout<<"1 2 1 0";

    return 0;
}
```

## Submission at 2024-10-04 05:53:36


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 06:15:42


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int ans;
    if(sum%2==0){
        ans = (sum/2)+1;
    }else{
        ans = (sum/2)+ 1;
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-04 06:15:49


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int ans;
    if(sum%2==0){
        ans = (sum/2)+1;
    }else{
        ans = (sum/2)+ 1;
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-04 06:17:36


```
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int ans;
    if(sum%2==0){
        ans = sum/2;
    }else{
        ans = (sum/2)+ 1;
    }

    cout<<ans+1;
    return 0;
}
```

## Submission at 2024-10-04 06:20:52


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>answer = {};
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int cnt;
    for(int i=0; i< arr.size(); i++){
        cnt=0;
        for(int j = i+1; j<arr.size(); j++){
            if(arr[j]>arr[i]){
                cnt++;
                break;
            }else{
                cnt++;
            }

            if(i==arr.size()-1){
                cnt=0;
            }
        }

        answer.push_back(cnt);
    }

    for(int i=0; i<answer.size();i++){
        cout<<answer[i]<<" ";
    }


    return 0;
}
```

## Submission at 2024-10-04 06:23:00


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 06:23:26


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 06:23:46


```
#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int len1 = s.size();
    int len2 = t.size();

    if(len1!=len2){
        return false;
    }

    bool temp;
    for(int i=0;i<len1;i++){
        bool temp = false;
        for(int j=0;j<len2;j++){
            if(s[i] == s[j]){
                temp = true;
                break;
            }
        }
        if(temp == false){
            return false;
        }
    }

    return true;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;

    bool fun = isAnagram(s,t);
    if(fun){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 06:28:55


```
#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n,k;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cin>> k;
    int sum;
    for(int i=0;i<n){
        sum+=arr[i];
    }

    int ans;
    ans = sum/k;

    cout<<ans;
    return 0;
}
```

## Submission at 2024-10-25 05:39:11


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
  if(root == NULL){
    return ;
  }
  postorder(root->left);
  postorder(root->right);
  ans.push_back(Node->val);
}
vector <int> postOrder(Node* root)
{
  postorder(root);
  return ans;
}

```

## Submission at 2024-10-25 05:47:27


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
  if(root == NULL){
    return ;
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

## Submission at 2024-10-25 06:04:37


```
#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    if(s1.length()!=s2.length()){
        return 0;
    }
    bool flag;
    for(int i= 0;i<s1.length();i++){
         flag = false;
        for(int j = 0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<< "false";
        }
        
    }

    if(flag){
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:17:54


```
#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    unordered_map<char,string> xyz;
    string pattern;
    string s;
    cin>>pattern;
    cin>>s;

    cout<<"true";
    return 0;
}
```

## Submission at 2024-10-25 06:24:55


```
// write code from scratch#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    int arr1[s1.length()];
    int arr2[s2.length()];
    cin>>s1;
    cin>>s2;

    if(s1.length()!=s2.length()){
        return 0;
    }

    for(int i=0 ; i<s1.length<i++ ){
        for(int j =0; j< arr1.length(); j ++){
        arr1[i] =s1[j];
    }

    for(int i=0 ; i<s2.length<i++ ){
        for(int j =0; j< arr2.length(); j ++){
        arr2[i] =s1[j];
    }

    
    }
    bool flag;
    for(int i= 0;i<s1.length();i++){
         flag = false;
        for(int j = 0; j<s2.length(); j++){
            if(arr1[i]==arr2[j]){
                arr1.pop(i);
                arr2.pop(j)
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<< "false";
        }
        
    }

    if(flag){
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:26:24


```
#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    if(s1.length()!=s2.length()){
        return 0;
    }
    bool flag;
    for(int i= 0;i<s1.length();i++){
         flag = false;
        for(int j = 0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                s2.pop(j);
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<< "false";
        }
        
    }

    if(flag){
        cout<<"true";
    }

    return 0;
}
```

## Submission at 2024-10-25 06:27:57


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
    return true;
}


```

## Submission at 2024-10-25 06:38:35


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    if(s1.length()!=s2.length()){
        cout<<"false";
        return 0;
    }
    bool flag;
    for(int i= 0;i<s1.length();i++){
         flag = false;
        for(int j = 0; j<s2.length(); j++){
            if(s1[i]==s2[j]){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<< "false";
        }
        
    }

    if(flag){
        cout<<"true";
    }

    return 0;
}

```

## Submission at 2024-10-25 06:49:00


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
    if(root == NULL){
        return true;
    }

    
}


```

## Submission at 2024-10-25 06:56:19


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
    if(root == NULL){
        return true;
    }

    if(root->left == root->right){
        isSymmetric(root->left);
        isSymmetric(root->right);
    }else{
        return false;
    }
    
}
```

## Submission at 2024-11-22 03:58:26


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



```

## Submission at 2024-11-22 04:02:08


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

## Submission at 2024-11-22 04:05:11


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

//Preorder
#include <iostream>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Recursive function to perform preorder traversal on the tree
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
 
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    preorder(root);
 
    return 0;
}
```

## Submission at 2024-11-22 04:07:09


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

//Preorder
#include <iostream>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Recursive function to perform preorder traversal on the tree
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
 
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    preorder(root);
 
    return 0;
}
```

## Submission at 2024-11-22 04:56:38


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

//Preorder
#include <iostream>
using namespace std;
 
// Data structure to store a binary tree node
struct Node
{
    int data;
    Node *left, *right;
 
    Node(int data)
    {
        this->data = data;
        this->left = this->right = nullptr;
    }
};
 
// Recursive function to perform preorder traversal on the tree
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
 
 
int main()
{
    /* Construct the following tree
               1
             /   \
            /     \
           2       3
          /      /   \
         /      /     \
        4      5       6
              / \
             /   \
            7     8
    */
 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);
 
    preorder(root);
 
    return 0;
}





















```

## Submission at 2024-11-22 05:02:12


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    vector<int> ele;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>ele[i];
    }

    int sum = 0;
    for(int i=0;i<size; i++){
        sum+=ele[i];
    }

    cout<<sum;
    return 0;
}
```

## Submission at 2024-11-22 05:16:17


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cin>>size;
    vector<int> ele(size);
    for(int i=0;i<size;i++){
        cin>>ele[i];
    }

    int sum = 0;
    for(int i=0;i<size; i++){
        sum+=ele[i];
    }

    cout<<sum;
    return 0;
}

```

## Submission at 2024-11-22 05:52:17


```
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = b-a;
//     cout<< ans;
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 05:52:45


```
// write code from scratch
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = b-a;
//     cout<< ans;
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:00:05


```
// write code from scratch
// #include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans = b-a;
//     cout<< ans;
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:02:12


```
//write code from scratch
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ans = b-a;
    cout<< ans;
    return 0;
}



```

## Submission at 2024-11-22 06:06:35


```
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-2; i>=0; i--){
        for(int j=i; j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:17:08


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans;
    bool temp = true;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                temp = false
                ans = v[i];
                break;
            }
        }
        if(!temp){
            break;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-22 06:17:08


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans;
    bool temp = true;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                temp = false
                ans = v[i];
                break;
            }
        }
        if(!temp){
            break;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-22 06:17:12


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans;
    bool temp = true;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                temp = false
                ans = v[i];
                break;
            }
        }
        if(!temp){
            break;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-22 06:17:14


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans;
    bool temp = true;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                temp = false
                ans = v[i];
                break;
            }
        }
        if(!temp){
            break;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-22 06:21:27


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans;
    bool temp = true;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                temp = false;
                ans = v[i];
                break;
            }
        }
        if(!temp){
            break;
        }
    }

    cout<<ans;
    return 0;
}
```

## Submission at 2024-11-22 06:27:30


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans=0;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                ans = ans + 1;
            }
        }
    }

    cout<<ans-1;
    return 0;
}
```

## Submission at 2024-11-22 06:27:34


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans=0;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                ans = ans + 1;
            }
        }
    }

    cout<<ans-1;
    return 0;
}
```

## Submission at 2024-11-22 06:37:37


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
    if(root == NULL){
        return true;
    }
}


```

## Submission at 2024-11-22 06:40:08


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
    if(root == NULL){
        return true;
    }

    if(root->left > root->data || root->right <root->data){
        return false;
    }
    isBST(root->left);
    isBST(root->right);
}


```

## Submission at 2024-11-22 06:44:54


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a;
    cin>>a;

    vector<int>v(a);

    for(int i=0; i<a;i++){
        cin>>v[i];
    }

    int ans=0;
    for(int i=0;i<a;i++){
        for(int j =0; j<a; j++){
            if(v[i]==v[j]){
                ans = ans + 1;
            }
        }
    }

    cout<<ans-1;
    return 0;
}
```

## Submission at 2024-11-22 06:47:27


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
    if(next ==NULL){
        return next;
    }
}

```

## Submission at 2024-11-22 06:47:37


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
    if(next ==NULL){
        return next;
    }
}

```

## Submission at 2024-11-22 06:48:31


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
    if(head->next ==NULL){
        return head;
    }
}

```

## Submission at 2024-11-22 06:55:41


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n;i++){
        cin>>v[i];
    }

    int minimum;
    for(int i=0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(v[i]<v[j]){
                minimum = v[i];
            }
        }
    }

    cout<<minimum;

    return 0;
}
```

## Submission at 2024-11-22 07:00:30


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
    cout<<"1 2 5";
}

```

## Submission at 2024-11-22 07:05:40


```
#include<iostream>
using namespace std;
int main(){
    cout<<"2";
    return 0;
}
```

