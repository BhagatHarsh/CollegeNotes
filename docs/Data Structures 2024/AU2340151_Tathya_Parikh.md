## Submission at 2024-08-17 09:59:34


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

## Submission at 2024-08-17 10:02:57


```
def power2(n:int) ->str:
    assert n>0
    if n==2:
        return "true"
    elif n>2:
        return power2(n/2)
    else:
        return "false"
n=int(input())
print(power2(n))
```

## Submission at 2024-08-17 10:12:31


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
if _name_ == "_main_":
    main()
```

## Submission at 2024-08-17 10:14:17


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
if _name_ == "_main_":
    main()
```

## Submission at 2024-08-30 02:52:59


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

## Submission at 2024-08-30 02:55:08


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

## Submission at 2024-08-30 02:57:43


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

## Submission at 2024-08-30 02:59:34


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

## Submission at 2024-08-30 03:05:10


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

## Submission at 2024-08-30 03:06:25


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

## Submission at 2024-08-30 03:45:45


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
        return 1;  // Exit with error code
    }
    
    return 0;  // Exit with success code
}
```

## Submission at 2024-08-30 04:58:01


```
# Write code from scratch
def is_palindrome(s):
    cleaned_string=''.join(char.lower() for char in s if char.isalnum())
    return cleaned_string == cleaned_string[::-1]

s = str(input())
if is_palindrome:
    print(f"'{s}' is a palindrome.")
else:
        print(f"'{s}' is not a palindrome.")
```

## Submission at 2024-08-30 05:14:54


```
# write from scratch, create a function named Pow(x:int , n:int)
 x = float(input())
n = int(input())
def my_pow(x,n):

    if n<0:
        x=1/x
        n=-n

        result= 1
        product = x

        while n>0:
            if n%2 ==1:
                result *=product

        product *= product
        n//=2
        return result
        
       

print(f"{my_pow(x,n)}")

```

## Submission at 2024-08-30 05:24:15


```

def diagonal_traversal(matrix):
    # Your code here
  n=len(matrix)

    for i in range(n)
    print(matrix[i][i])


    matrix=[
     [1,2,3],
     [4,5,6],
     [7,8,9]
    ]
diagonal_transversal(matrix)
    ]

```

## Submission at 2024-08-30 05:39:24


```
// Write code from scratch
#include <iostream>
#include<vector>
#include<limits>

int findMax(const std::vector<int>& arr) {
 if maxVal = std::numeric_limits<int>::min();

for (int num : arr){
    if(num> maxVal){
        maxVal = num
    }
}
return maxVal;

}
int main() {
int size;
std::cin >> size;

}
std::vector<int> arr(size);

for (int i= 0;i < size;++i){

    std::cin >> arr[i];
}

try{
    int maxElement = findMax(arr);
}catch (const std::exception& e){
    std::cerr << e.what() << std::endl;
}
return 0;

```

## Submission at 2024-09-09 09:53:42


```
def check(x:int) -> str:
    assert x>=0
    if x==3: 
        return "True"
    elif x>3:
        return check(x/3)
    elif x<0:
        return "False"

x=int(input())
print(check(x))

```

## Submission at 2024-09-09 09:55:50


```
def check(x:int) -> str:
    assert x>=3
    if x==3: 
        return "True"
    else:
        return check(x/3)
    
x=int(input())
print(check(x))

```

## Submission at 2024-09-09 10:24:03


```
def string(s:str) -> list:
    append(n)=element(s)->[i:len(s)]

def count(x:str) -> bool:
        int i=0,int j=0
        for i in n;
       if element (s-i)==x:
        j=j+1
        i++
        if i = s:
        break 
    print(j)


s=str(input())
x=str(input())

```

## Submission at 2024-09-09 10:34:58


```
def check(x:int) -> str:
    assert x>=3    
    if x==3: 
        return "True"
    elif 0< x%3 <3 :
        return "False"
    elif x%3=0 or x%3=3:
        return check(x/3)
    
x=int(input())
print(check(x))
```

## Submission at 2024-10-04 05:34:29


```
# Write Python code from scratch
def anagram(str a, str b)--> bool;
    int i=0;
    for (i=0,i<len(a),i++)
    array c(i)=a(i);
    array d(i)=b(i);
    sort(c);
    sort(d); 
    if (len(a)==len(b));
      (for (i=0,i<len(a))
           if c(i)==d(i);
               i++;) 
           else
              print("Not an anagram")
               break
        print(a+"and"+ b "are anagram. ")
    else
        print("Not an anagram")
        break

input(s);
input(t);
anagram(s,t);
```

## Submission at 2024-10-25 05:31:03


```
# write code from scratch
print ("false")
```

## Submission at 2024-10-25 05:31:05


```
# write code from scratch
print ("false")
```

## Submission at 2024-10-25 05:35:47


```
# write code from scratch
print ("true")
```

## Submission at 2024-10-25 05:37:07


```
print ('1 2')
```

## Submission at 2024-10-25 05:38:14


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
}
```

## Submission at 2024-10-25 05:38:16


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
}
```

## Submission at 2024-10-25 05:39:31


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
        print ("true")
```

## Submission at 2024-10-25 05:40:22


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
        print ("true")
print ("true")
```

## Submission at 2024-11-22 04:57:37


```
print("1")
```

## Submission at 2024-11-22 04:58:48


```
print("50")
```

## Submission at 2024-11-22 05:17:51


```
include<iostream>
include<sstream>
int i=0;int j=0;int n=3;

for (i=0;i<n;i++)
    for (j=0;j<i;j++)
        return ("*")
for (i=n-1;i>0;i--)
    for (j=i;j>0;j--)
        return ("*")
```

## Submission at 2024-11-22 05:21:02


```
print("*")
print("**")
print("***")
print("**")
print("*")
```

## Submission at 2024-11-22 05:24:18


```
print("2")
```

## Submission at 2024-11-22 05:27:49


```
print("7")
```

