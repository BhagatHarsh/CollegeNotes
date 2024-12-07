## Submission at 2024-08-22 13:00:19


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

## Submission at 2024-08-22 13:03:40


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

## Submission at 2024-08-22 13:11:17


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

## Submission at 2024-08-30 02:54:32


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    unordered_map<int, int> countMap1, countMap2;

    for (int num : arr1) {
        countMap1[num]++;
    }

    for (int num : arr2) {
        countMap2[num]++;
    }

    // Compare the frequency maps
    return countMap1 == countMap2;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;

    vector<int> arr1(len1);
    for (int i = 0; i < len1; ++i) {
        cin >> arr1[i];
    }

    vector<int> arr2(len2);
    for (int i = 0; i < len2; ++i) {
        cin >> arr2[i];
    }

    if (areArraysEqual(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-08-30 02:56:45


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
    cout<<"Enter n:";
    cin>>n;
    cout<<sum(n);
    
    
    
}
```

## Submission at 2024-08-30 02:59:18


```
// Write Code from Scratch
#include <iostream>
#include <vector>

using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (size_t i = 0; i < row.size(); i++) {
            cout << row[i];
            if (i < row.size() - 1) cout << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix, int r, int c) {
    vector<vector<int>> transposedMatrix(c, vector<int>(r));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    return transposedMatrix;
}

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> transposedMatrix = transposeMatrix(matrix, r, c);
    printMatrix(transposedMatrix);

    return 0;
}
```

## Submission at 2024-08-30 03:01:58


```
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to count the number of digits in a number
int countDigits(int num) {
    return (int)log10(num) + 1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int evenDigitCount = 0;

    for (int i = 0; i < n; i++) {
        if (countDigits(nums[i]) % 2 == 0) {
            evenDigitCount++;
        }
    }

    cout << evenDigitCount << endl;

    return 0;
}
```

## Submission at 2024-08-30 03:03:32


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

## Submission at 2024-08-30 03:05:51


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

## Submission at 2024-08-30 03:07:01


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

## Submission at 2024-08-30 03:48:41


```
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    int sum = 0;
    
    if (n >= 1 && n <= 1000) {
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                sum += i;
            }
        }
        std::cout << sum << std::endl;
    } else {
        std::cout << "invalid input" << std::endl;
        return 1;
    }
    
    return 0;  
}
```

## Submission at 2024-08-30 05:01:05


```
a=input()
temp=a
b=''
j=-1
for i in range (0,len(a)):
    b+=temp[j]
    j-=1
if(a==b):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-08-30 05:42:17


```
n=int(input())
a=input()
b=input()
# a=int(a.split())
# b=int(b.split())
a=list(a.split())
b=list(b.split())
c=[]
for i in range(0,len(a)):
    if(a[i]<b[i]):
        c.append(b[i])
    else:
        c.append(a[i])
print(c)
```

## Submission at 2024-08-30 05:56:37


```
# a=input()
# a=list(a.split())
number=float(input())
power=int(input())
ans=1
for i in range(0,power):
    ans*=number
ans=ans//1
print(ans)
```

## Submission at 2024-08-30 05:57:22


```
# a=input()
# a=list(a.split())
number=float(input())
power=int(input())
ans=1
for i in range(0,power):
    ans*=number
ans=ans//1
print(ans)
```

## Submission at 2024-08-30 05:57:59


```
# a=input()
# a=list(a.split())
number=float(input())
power=int(input())
ans=1
for i in range(0,power):
    ans*=number
ans=ans//1
print(ans)
```

## Submission at 2024-08-30 06:01:21


```
# write from scratch, create a function named Pow(x:int , n:int)
a=float(input())
b=int(input())
ans=1
for i in range (0,b):
    ans*=a
ans=ans//1
print(ans)
```

## Submission at 2024-08-30 06:11:42


```
# write from scratch, create a function named Pow(x:int , n:int)
z=input()
z=list(z.split())
t=[eval(i) for i in z]
a=t[0]
b=t[1]
ans=1
for i in range (0,b):
    ans*=a
ans=ans//1
print(ans)
```

## Submission at 2024-08-30 06:24:26


```
n=int(input())
e=input()
d=input()
e=list[e.split()]
d=list[d.split()]
a=[eval(i) for i in e]
b=[eval(i) for i in d]
c=[]
for i in range(0,n):
    if (a[i]<b[i]):
        c.append(b[i])
    else:
        c.append[a(i)]
print(c)
```

## Submission at 2024-08-30 06:26:31


```
# Write code from scratch
n=int(input())
e=input()
d=input()
e=list[e.split()]
d=list[d.split()]
a=[eval(i) for i in e]
b=[eval(i) for i in d]
c=[]
for i in range(0,n):
    if (a[i]<b[i]):
        c.append(b[i])
    else:
        c.append(a(i))
print(c)
```

## Submission at 2024-08-30 06:27:40


```
n=int(input())
e=input()
d=input()
e=list[e.split()]
d=list[d.split()]
a=[eval(i) for i in e]
b=[eval(i) for i in d]
c=[]
for i in range(0,n):
    if (a[i]<b[i]):
        c.append(b[i])
    else:
        c.append(a(i))
print(c)
```

## Submission at 2024-09-09 04:12:15


```
def fibonacci(x:int) -> int:
    assert x>=0
    if x<=1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)

x=int(input())
print(fibonacci(x-1))
```

## Submission at 2024-09-09 04:14:43


```
def fibonacci(x:int) -> int:
    assert x>=0
    if x<=1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)

x=int(input())
print(fibonacci(x))
```

## Submission at 2024-09-09 04:15:13


```
def fibonacci(x:int) -> int:
    assert x>=0
    if x<=1:
        return x
    else:
        return fibonacci(x-1) + fibonacci(x-2)

x=int(input())
print(fibonacci(x))
```

## Submission at 2024-09-09 04:17:38


```
def power2(n:int) ->str: 
    if n==1:
        return "true"
        
    elif n<=0 or n%2!=0:
         return "false"

    return power2(n/2)
       
n=int(input())
print(power2(n))
```

## Submission at 2024-09-09 04:30:13


```
from itertools import combinations

def generate_subsets(nums):
    """Generate all possible subsets of the given list of unique integers."""
    result = []
    
    # Iterate over all possible sizes of subsets (from 0 to len(nums))
    for size in range(len(nums) + 1):
        for subset in combinations(nums, size):
            result.append(list(subset))
    
    # Sort subsets first by length, then by elements
    result.sort(key=lambda x: (len(x), x))
    
    return result

def main():
    import sys
    input = sys.stdin.read().strip()
    
    # Read input and convert to list of integers
    nums = list(map(int, input.split()))
    
    # Generate all subsets
    subsets = generate_subsets(nums)
    
    # Print the result
    for subset in subsets:
        print(subset)

# Run the main function if this script is executed
if __name__ == "__main__":
    main()
```

## Submission at 2024-10-04 05:21:02


```
def time(t,k):
    time_per_t=1
    for i in range(len(t)):
        if i==0 and t[i]==1:
            time_per_t=1
        elif i>0 and t[i]>1:
            time_per_t=1
        return time_per_t
```

## Submission at 2024-10-04 05:41:07


```
a=list(input())
b=list(input())
a.sort()
b.sort()
if a==b:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 05:57:16


```
n = input()
t=input().split()
tickets=[]
for i in t:
    i = int(i)
    tickets.append(i)
k = input()

```

## Submission at 2024-10-04 06:11:27


```
n = input()
t = input().split()
temp=[]
ans=[]
for i in t:
    temp.append(int(i))
for i in range(4):
    for j in range (i+1,4):
        if temp[i]<temp[j]:
            ans.append(j-i)
            break
ans.append(0)
print(ans)       
```

## Submission at 2024-10-04 06:18:29


```
n = input()
t = input().split()
temp=[]
ans=''
for i in t:
    temp.append(int(i))
for i in range(4):
    for j in range (i+1,4):
        if temp[i]<temp[j]:
            ans= ans + str(j-i)+' '
            break
ans=ans + str(0)
print(ans)       
```

## Submission at 2024-10-25 05:37:34


```
# write code from scratch
a='ransomNote'
b='magazine'
a=sorted(a)
b=sorted(b)
if len(a)>len(b):
    n=len(a)
else:
    n=len(b)
for i in range (0,n):
    if a[i]==b[i]:
        ans='true'
    else:
        ans='false'
        break
print(ans)
```

## Submission at 2024-10-25 05:42:49


```
# write code from scratch
def ransom(a,b):
    a=sorted(a)
    b=sorted(b)
    if len(a)==len(b):
        n=len(a)
        for i in range (0,n):
            if a[i]==b[i]:
                ans='true'
            else:
                ans='false'
                break
    else:
        ans='false'
    return ans
a=input()
b=input()
ans=ransom(a,b)
print(ans)
```

## Submission at 2024-10-25 06:14:17


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
l=[]
def post(root):
    if root==None:
        return
    else:    
        postOrder(root.left)
        postOrder(root.right)
        l.append(root.data)

def postOrder(root):
    # code here
    post(root)
    return l
```

## Submission at 2024-10-25 06:26:48


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        # Your Code Here
        r=isSymmetric(root.data)
        left=isSymmetric(root.left)
        right=isSymmetric(root.right)
        if left==right:
            return 'true'
```

## Submission at 2024-10-25 06:28:01


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

class Solution:
    def isSymmetric(self, root):
        # Your Code Here
        if root=None:
            return
        else:
            r=isSymmetric(root.data)
            left=isSymmetric(root.left)
            right=isSymmetric(root.right)
            if left==right:
                return 'true'
```

## Submission at 2024-11-22 05:02:19


```
# Write Code From Scratch Here
n=int(input())
l=input().split()
a=[]
sum=0
for i in l:
    a.append(int(i))
for i in a:
    sum+=i
print(sum)
```

## Submission at 2024-11-22 05:26:11


```
# Write Code From Scratch Here
x=input().split()
a=int(x[0])
b=int(x[1])
c=b-a
min=c-a+b-c
print(min)
```

## Submission at 2024-11-22 05:42:20


```
# write code from scratch
n=int(input())
l=input().split()
x=[]
ans=[]
for i in l:
    x.append(int(i))
for i in range(n):
    for j in range (i+1,n):
        if x[i]==x[j]:
            ans.append(x[i])
print(ans)
```

## Submission at 2024-11-22 05:44:53


```
# write code from scratch
n=int(input())
l=input().split()
x=[]
ans=[]
for i in l:
    x.append(int(i))
for i in range(n):
    for j in range (i+1,n):
        if x[i]==x[j]:
            ans.append(x[i])
print(ans)
```

## Submission at 2024-11-22 05:47:00


```
# write code from scratch
n=int(input())
l=input().split()
x=[]
score=0
for i in l:
    x.append(int(i))
for i in range(n):
    for j in range (i+1,n):
        if x[i]==x[j]:
            score+=1
print(score)
```

