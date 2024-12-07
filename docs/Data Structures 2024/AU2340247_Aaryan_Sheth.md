## Submission at 2024-08-09 04:45:51


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-09 04:51:17


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-09 04:53:32


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-09 04:56:19


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        if(name.length >= 1 and user.length <= 100){
            System.out.println("Hello " + name + "!");
        }
        
        
    }
}
```

## Submission at 2024-08-09 05:07:41


```
// Write your Java code here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(n);
        for(int i=1;i<=n;i++){
            String name = scanner.nextLine();
            System.out.println(name);
        }
    }
}
```

## Submission at 2024-08-09 05:09:55


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String name = scanner.nextLine();
        System.out.println("Hello " + name + "!");
    }
}
```

## Submission at 2024-08-09 05:19:53


```
// Write your Java code here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i=0;i<n;i++){
            String name = scanner.next();
            System.out.println("Hello " + name + "!");
        }
        scanner.close();
    }
}
```

## Submission at 2024-08-16 04:57:53


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
        if(x < 0){
            return -1;
        }
        else if(x == 0){
            return 0;
        }
        else if(x == 1){
            return 1;
        }
        
        return fibonacci(x-1) + fibonacci(x-2);
    }
}

```

## Submission at 2024-08-16 05:27:39


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
        if(n == 1){
            return true;
        }
        if(n<=0 || n%2!=0){
            return false;
        }
        return isPowerOfTwo(n/2);
        
        
    }
}

```

## Submission at 2024-08-21 08:32:57


```
def combine(n, k):
    if k == 0:
        return [[]]

    if k > n:
        return []

    result_with_n = combine(n - 1, k - 1)
    for comb in result_with_n:
        comb.append(n)

    result_without_n = combine(n - 1, k)
    
    return result_with_n + result_without_n

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print combinations
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        for j in range(len(result[i])):
            print(result[i][j], end="")
            if j < len(result[i]) - 1:
                print(",", end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:03:24


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join('[' + ','.join(map(str, p)) + ']' for p in permutations) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:06:47


```
def genpar(n):
    def paran(s="", left=0, right=0):
        if len(s) == 2 * n:
            r.append(s)
            return
        if left < n:
            paran(s + "(", left + 1, right)
        if right < left:
            paran(s + ")", left, right + 1)
            
    r = []
    paran()
    return r

def main():
    x = int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:07:07


```
def genpar(n):
    def paran(s="", left=0, right=0):
        if len(s) == 2 * n:
            r.append(s)
            return
        if left < n:
            paran(s + "(", left + 1, right)
        if right < left:
            paran(s + ")", left, right + 1)
            
    r = []
    paran()
    return r

def main():
    x = int(input())
    res = genpar(x)
    formatted_output = '[' + ','.join(f'"{item}"' for item in res) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-27 10:51:25


```
# Write the code from scratch, no boilerplate is required
arr1_len, arr2_len = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

# Sorting both arrays
arr1.sort()
arr2.sort()

if arr1 == arr2:
    print("true")
else:
    print("false")



```

## Submission at 2024-08-27 11:27:04


```
n = int(input())

def addDivisibleBy357(n):
    sum = 0
    if n >= 1 or n <= 1000:
        for i in range(1,n+1):
            if i%3==0 or i%5==0 or i%7==0:
                sum += i
        
        print(sum)
    
    else:
        print(sum)
    

addDivisibleBy357(7)
```

## Submission at 2024-08-27 12:33:24


```
n = int(input())
arr = list(map(int, input().split()))

def countNumberOfEvenDigits(n):
    count = 0
    for i in range(n):
        if arr[i]%2 == 0:
            count += 1
        
    print(count)

countNumberOfEvenDigits(7)

```

## Submission at 2024-08-27 12:34:21


```
n = int(input())  # Number of elements in the array
arr = list(map(int, input().split()))  # Array of integers

def count_number_of_even_digits(arr):
    count = 0
    for number in arr:
        if number % 2 == 0:
            count += 1
    print(count)

count_number_of_even_digits(arr)

```

## Submission at 2024-08-27 12:39:01


```
n = int(input())  # Number of elements in the array
arr = list(map(int, input().split()))  # Array of integers

def count_number_of_even_digits(arr):
    count = 0
    for i in range(n):
        if len(str(arr[i])) % 2 == 0:
            count += 1

    print(count)

count_number_of_even_digits(arr)

```

## Submission at 2024-08-29 12:23:49


```
def findKthPositive(arr, k):
    n = len(arr)
    missing_count = 0
    current_number = 1
    i = 0
    
    while missing_count < k:
        if i < n and arr[i] == current_number:
            i += 1
        else:
            missing_count += 1
            if missing_count == k:
                return current_number
        current_number += 1
    
    return current_number

arr_len, k = map(int, input().split())
arr = list(map(int, input().split()))

result = findKthPositive(arr, k)
print(result)

```

## Submission at 2024-08-29 12:25:47


```
M, N = map(int, input().split())

matrix = []

for _ in range(M):
    row = list(map(int, input().split()))
    matrix.append(row)

transpose = [[0] * M for _ in range(N)]

for i in range(M):
    for j in range(N):
        transpose[j][i] = matrix[i][j]

for row in transpose:
    print(' '.join(map(str, row)))

```

## Submission at 2024-08-29 12:27:16


```
def triangular_sum(arr):
    while len(arr) > 1:
        arr = [arr[i] + arr[i+1] for i in range(len(arr) - 1)]
    return arr[0]

n = int(input())
arr = list(map(int, input().split()))

result = triangular_sum(arr)

print(result)

```

## Submission at 2024-08-29 12:29:49


```
def spiral_order(matrix):
    result = []
    if not matrix:
        return result

    top, bottom, left, right = 0, len(matrix) - 1, 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
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

## Submission at 2024-08-29 12:30:17


```
def spiral_order(matrix):
    result = []
    if not matrix:
        return result

    top, bottom, left, right = 0, len(matrix) - 1, 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
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

## Submission at 2024-08-29 12:52:16


```
// Write the code from scratch, no boilerplate is required
#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

using namespace std;

bool areArraysEqual(vector<int>& arr1, vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }

    // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Compare the sorted arrays
    for (size_t i = 0; i < arr1.size(); ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int len1, len2;
    cin >> len1 >> len2;

    if (len1 != len2) {
        cout << "false" << endl;
        return 0;
    }

    vector<int> arr1(len1), arr2(len2);

    // Read elements for arr1
    for (int i = 0; i < len1; ++i) {
        cin >> arr1[i];
    }

    // Read elements for arr2
    for (int i = 0; i < len2; ++i) {
        cin >> arr2[i];
    }

    // Check if arrays are equal
    bool result = areArraysEqual(arr1, arr2);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-29 12:55:14


```
#include <iostream>
using namespace std;

int sum_of_multiples(int n) {
    int total_sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
            total_sum += i;
        }
    }
    return total_sum;
}

int main() {
    int n;
    cin >> n;

    int result = sum_of_multiples(n);

    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 12:57:33


```
#include <iostream>
#include <vector>
using namespace std;

int count_digits(int num) {
    int count = 0;
    if (num == 0){
        return 1;
    }
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int count_even_digit_numbers(const vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        if (count_digits(num) % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = count_even_digit_numbers(nums);

    // Output the result
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 12:59:58


```
#include <iostream>
#include <vector>
using namespace std;

int count_digits(int num) {
    int count = 0;
    if (num == 0){
        return 1;
    }
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int count_even_digit_numbers(const vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        if (count_digits(num) % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = count_even_digit_numbers(nums);

    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 13:01:55


```
#include <iostream>
#include <vector>
using namespace std;

int findKthMissingPositive(vector<int>& arr, int k) {
    int missingCount = 0;
    int current = 1;
    int index = 0;

    while (missingCount < k) {
        if (index < arr.size() && arr[index] == current) {
            index++;
        } else {
            missingCount++;
            if (missingCount == k) {
                return current;
            }
        }
        current++;
    }

    return current - 1;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = findKthMissingPositive(arr, k);
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 13:06:27


```
#include <iostream>
#include <vector>
using namespace std;

// Function to compute the triangular sum
int findTriangularSum(vector<int>& nums) {
    while (nums.size() > 1) {
        vector<int> nextRow;
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            nextRow.push_back(nums[i] + nums[i + 1]);
        }
        nums = nextRow; // Update nums to the new row
    }
    return nums[0]; // The last remaining element is the triangular sum
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    // Input the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Get the triangular sum
    int result = findTriangularSum(nums);

    // Output the result
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 13:13:41


```
#include <iostream>
#include <vector>
using namespace std;

// Function to compute the triangular sum
int findTriangularSum(vector<int>& nums) {
    while (nums.size() > 1) {
        vector<int> nextRow;
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            nextRow.push_back(nums[i] + nums[i + 1]);
        }
        nums = nextRow; // Update nums to the new row
    }
    return nums[0]; // The last remaining element is the triangular sum
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    // Input the elements of the array
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    // Get the triangular sum
    int result = findTriangularSum(nums);

    // Output the result
    cout << result << endl;

    return 0;
}

```

## Submission at 2024-08-29 13:15:23


```
// Write Code from Scratch
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));
    vector<vector<int>> transpose(N, vector<int>(M));

    // Input the matrix
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Compute the transpose
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output the transposed matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j];
            if (j < M - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-29 13:17:30


```
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right along the top row
        for (int i = left; i <= right; ++i) {
            result.push_back(matrix[top][i]);
        }
        ++top;

        // Traverse from top to bottom along the right column
        for (int i = top; i <= bottom; ++i) {
            result.push_back(matrix[i][right]);
        }
        --right;

        // Ensure we are not overstepping boundaries
        if (top <= bottom) {
            // Traverse from right to left along the bottom row
            for (int i = right; i >= left; --i) {
                result.push_back(matrix[bottom][i]);
            }
            --bottom;
        }

        if (left <= right) {
            // Traverse from bottom to top along the left column
            for (int i = bottom; i >= top; --i) {
                result.push_back(matrix[i][left]);
            }
            ++left;
        }
    }

    return result;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Input the matrix elements
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<int> result = spiralOrder(matrix);

    // Output the result
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-30 05:08:41


```
# Write code from scratch

def checkPalindrome(startingIndex,edingIndex,cnt):
    
    if len(string) % 2 == cnt:
        startingIndex += 1
        endingIndex -= 1
        cnt += 1
        checkPalindrome(startingIndex, endingIndex,cnt)

    
    if len(string)==1:
        print("YES")   
        # print("hello")

    else:
        print("NO")


string = str(input())
startingIndex = 0
endingIndex = len(string)-1
cnt = 0
checkPalindrome(startingIndex,endingIndex,cnt)

```

## Submission at 2024-08-30 05:18:12


```
# write from scratc, create a function named Pow(x:int , n:int)

def Pow(x:int, n:int):
    if n == 0:
        return 1

    if n == 1:
        return x
    
    return x*Pow(x,n-1)


x, n = map(int, input().split())
ans = Pow(x,n)
print(ans)
```

## Submission at 2024-08-30 05:28:28


```
# write from scratc, create a function named Pow(x:int , n:int)

def Pow(x:int, n:int):
    # if n < 0:
    #     # x /= 2
    #     # n -= 1
    #     return Pow(x/2,n-1)

    if n == 0:
        return 1

    if n == 1:
        return x
    
    return x*Pow(x,n-1)


x, n = map(int, input().split())
ans = Pow(x,n)
print(ans)
```

## Submission at 2024-08-30 05:35:25


```
# Write code from scratch
size = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range(size):
    if a[i] > b[i]:
        c.append(a[i])
    
    else:
        c.append(b[i])

for i in c:
    print(i, end=' ')
```

## Submission at 2024-08-30 05:52:12


```

def diagonal_traversal(matrix):
    # Your code here
    m = 3
    n = 3
    arr = []
    sum = 0
    while sum != (m+n-1):
        for i in range(m):
            for j in range(n):
                if sum == (i+j):
                    arr.append(matrix[j][i])
        sum += 1

    return arr

    
ans = diagonal_traversal([[1,2,3],[4,5,6],[7,8,9]])
print(ans)
```

## Submission at 2024-08-30 05:52:45


```

def diagonal_traversal(matrix):
    # Your code here
    arr = []
    sum = 0
    while sum != (m+n-1):
        for i in range(m):
            for j in range(n):
                if sum == (i+j):
                    arr.append(matrix[j][i])
        sum += 1

    return arr

```

## Submission at 2024-08-30 05:54:08


```

def diagonal_traversal(matrix):
    # Your code here
    arr = []
    sum = 0
    while sum != (m+n-1):
        for i in range(m):
            for j in range(n):
                if sum == (i+j):
                    arr.append(matrix[j][i])
        sum += 1

    return arr


m,n = map(int,input().split())
print(diagonal_traversal([[1,2,3],[4,5,6],[7,8,9]]))
```

## Submission at 2024-08-30 05:54:55


```

def diagonal_traversal(matrix):
    # Your code here
    arr = []
    sum = 0
    while sum != (m+n-1):
        for i in range(m):
            for j in range(n):
                if sum == (i+j):
                    arr.append(matrix[j][i])
        sum += 1

    return arr

```

## Submission at 2024-08-30 06:19:58


```
# Write code from scratch

def checkPalindrome(string,startingIndex,edingIndex,cnt):
    
    if len(string)==1:
        print("YES")

    if string[startingIndex] != string[edingIndex]:
        print("NO")

    if cnt==0:
        checkPalindrome(string,startingIndex+1,endingIndex-1,cnt-1)

    
    

    
string = str(input())
startingIndex = 0
endingIndex = len(string)-1
cnt = int(len(string)/2)
checkPalindrome(string, startingIndex,endingIndex,cnt)
```

## Submission at 2024-08-30 06:25:20


```
def diagonal_traversal(matrix):
    # Your code here
    m = len(matrix)
    n = len(matrix[0])
    arr = []
    sum = 0
    while sum != (m+n-1):
        for i in range(m):
            for j in range(n):
                if sum == (i+j):
                    arr.append(matrix[j][i])
        sum += 1

    return arr

```

## Submission at 2024-09-03 03:10:06


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    current = head
    count = 1

    while current is not None and count<k:
        current = current.next
        count += 1

    if current is None:
        return -1

    return current.val


n = int(input())
lst = list(map(int,input().split()))
k = int(input())
print(get_kth_node(lst,k))

```

## Submission at 2024-09-06 05:22:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    curr = head
    prev = None
    while curr:
        temp = curr.next
        curr.next = prev
        prev = curr
        curr = temp
    
    return prev
    
```

## Submission at 2024-09-06 05:28:30


```
def diagonal_traversal(matrix):
    # Your code here
    m = len(matrix)
    n = len(matrix[0])
    arr = []
    sum = 0
    for sum_ind in range(m+n-1):
        for i in range(m):
            for j in range(n):
                if sum_ind == (i+j):
                    arr.append(matrix[j][i])
        

    return arr
```

## Submission at 2024-10-04 05:02:12


```
# Write code from scratch here
n = int(input())
tickets = list(map(int, input().split()))
k = int(input()) # the position of the person


```

## Submission at 2024-10-04 05:16:06


```
# Write code from scratch here
n = int(input())
tickets = list(map(int, input().split()))
k = int(input()) # the position of the person
numSeconds = 0

pointer = tickets[0]
while tickets[k] > 1:
    if pointer >= 1:
        temp = pointer
        temp = temp - 1
        for i in range(1,n):
            tickets[i-1] = tickets[i]
        tickets[n-1] = temp
    numSeconds += 1
print(numSeconds)

```

## Submission at 2024-10-04 05:29:05


```
# Write code from scratch here
n = int(input())
tickets = list(map(int, input().split()))
k = int(input()) # the position of the person
numSeconds = 0

while tickets[k] != 0:
    
    pointer = tickets[0]
    temp = pointer
    temp = temp - 1

    for i in range(1,n):
        tickets[i-1] = tickets[i]
    

    if k==0:
        k = n-1
    else:
        k = k - 1
    
    tickets[n-1] = temp
    print(tickets)
    numSeconds += 1


print(numSeconds)

```

## Submission at 2024-10-04 05:31:44


```
# Write code from scratch here
n = int(input())
tickets = list(map(int, input().split()))
k = int(input()) # the position of the person
numSeconds = 0

while tickets[k] != 0:
    
    pointer = tickets[0]
    temp = pointer
    temp = temp - 1
    

    if k==0:
        k = n-1
    else:
        k = k - 1
    
    tickets[n-1] = temp
    if pointer == 0:
        tickets.pop(tickets[0])
    print(tickets)
    numSeconds += 1


print(numSeconds)

```

## Submission at 2024-10-04 05:34:54


```
# Write Python code from scratch

s = str(input())
t = str(input())

s_lst = list(s)
t_lst = list(t)

s_lst.sort()
t_lst.sort()

if s_lst == t_lst:
    print("true")
else:
    print("false")
```

## Submission at 2024-10-04 05:41:18


```
# Write code from scratch here
n = int(input())
tickets = list(map(int, input().split()))
k = int(input()) # the position of the person
numSeconds = 0

while tickets[k] != 0:
    
    pointer = tickets[0]
    temp = pointer
    temp = temp - 1
    
    for i in range(1,n):
        tickets[i-1] = tickets[i]
    tickets[n-1] = temp

    if k==0:
        k = n-1
    else:
        k = k - 1
    
    numSeconds += 1


print(numSeconds)
```

## Submission at 2024-10-04 05:51:21


```
# Write Python code from scratch

n, k = list(map(int, input().split()))
boards = list(map(int, input().split()))


```

## Submission at 2024-10-04 06:03:04


```
# Write Python code from scratch

n, k = list(map(int, input().split()))
boards = list(map(int, input().split()))

sumLenOfBoards = sum(boards)
avg = int(sumLenOfBoards / k) + 1
time = []
counter = 0
low = avg - 2
high = avg + 2

for i in range(n):
    time[counter] = time[counter] + boards[i]
    
    if time[counter] < avg:
        continue
    else:
        time[counter] = time[counter] - boards[i]
        counter += 1
        time[counter] = time[counter] + boards[i]
        
```

## Submission at 2024-10-04 06:29:25


```
# Write Python code from scratch

n = int(input())
temperatures = list(map(int, input().split()))
answer = []

pointer = 0
high = temperatures[0]

for i in range(n):
    for j in range(i,n-1):
        if temperatures[j] < temperatures[j+1]:
            answer[i].append(i+1)
            pointer += 1
            j = n
        else:
            answer[i].append(i+1)
            continue

        if max(temperatures[pointer]):
            answer[i] = 0

print(answer)
```

## Submission at 2024-10-25 05:28:33


```
# write code from scratch

ransomNote = input()
magazine = input()

if ransomNote in magazine:
    print("true")
else:
    print("false")
    
```

## Submission at 2024-10-25 06:01:01


```
# write code from scratch  

def wordPattern(pattern, s):
    if len(pattern) != len(s):
        return False

    Dict = {}

    for i in range(len(pattern)):
        if pattern[i] not in Dict:
            print(Dict[pattern[i]])

            # if Dict[pattern[i]] not in Dict.values():
            #     Dict[pattern[i]] = s[i]
            # else:
            #     return False
        else:
            val = Dict[pattern[i]]
            if val not in Dict.values():
                return False
            return True


pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if wordPattern(pattern_list, s_list):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:09:55


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
        if root.left.data == root.right.data:
            

            
        else:
            return False
```

## Submission at 2024-10-25 06:10:24


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
        if root.left.data == root.right.data:
            return True


        else:
            return False
```

## Submission at 2024-10-25 06:28:18


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
  # code here
  ans = []
  
  if root.left.data == None:
    ans.append(root.left.data)
  else:
    postOrder(root.right)
  
  return ans



```

## Submission at 2024-10-25 06:36:13


```
# write code from scratch  

def wordPattern(pattern, s):
    if len(pattern) != len(s):
        return False

    Dict = {}

    for i in range(len(pattern)):
        if pattern[i] not in Dict:
            Dict[pattern[i]] = s[i]
            if Dict[pattern[i]] in Dict.values():
                return False
            else:
                continue
        else:
            val = Dict[pattern[i]]
            if val not in Dict.values():
                return False
            return True


pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if wordPattern(pattern_list, s_list):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:40:55


```
# write code from scratch  

def wordPattern(pattern, s):
    if len(pattern) != len(s):
        return False

    Dict = {}

    for i in range(len(pattern)):
        if pattern[i] not in Dict:
            Dict[pattern[i]] = s[i]
            if i==0:
                if Dict[pattern[i]] in Dict.values():
                    continue
            else:
                if Dict[pattern[i]] in Dict.values():
                    return False
        else:
            val = Dict[pattern[i]]
            if val not in Dict.values():
                return False
            return True


pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if wordPattern(pattern_list, s_list):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:45:25


```
# write code from scratch  

def wordPattern(pattern, s):
    if len(pattern) != len(s):
        return False

    Dict = {}

    for i in range(len(pattern)):
        if pattern[i] not in Dict:
            Dict[pattern[i]] = s[i]
            
            if Dict[pattern[i]] in Dict.values():
                return False
            else:
                continue
                
        else:
            val = Dict[pattern[i]]
            if val not in Dict.values():
                return False
            return True


pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if wordPattern(pattern_list, s_list):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:48:36


```
# write code from scratch  

def wordPattern(pattern, s):
    if len(pattern) != len(s):
        return False

    Dict = {}

    for i in range(len(pattern)):
        if pattern[i] not in Dict:
            Dict[pattern[i]] = s[i]
            if Dict[pattern[i]] not in Dict.values():
                continue
            else:
                if i==0:
                    continue
                else:
                    return False
        else:
            val = Dict[pattern[i]]
            if val not in Dict.values():
                return False
            return True


pattern = input()
s = input().split()

pattern_list = list(pattern)
s_list = list(s)

if wordPattern(pattern_list, s_list):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 06:56:00


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
    public:
    bool isSymmetric(struct Node* root){
        if(root){return true;}
        return isMirror()
    }
}


```

## Submission at 2024-11-12 13:47:28


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x == 1:
        return 1
    elif x == 0:
        return 0
    elif x < 0:
        return -1

    return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-11-14 12:43:56


```
def subsets(nums):
    result = []
    
    def backtrack(start, current_subset):
        # Add the current subset to the result
        result.append(current_subset[:])
        
        # Iterate over the numbers starting from index 'start'
        for i in range(start, len(nums)):
            # Include the current number in the subset
            current_subset.append(nums[i])
            # Move to the next index
            backtrack(i + 1, current_subset)
            # Backtrack and remove the current number
            current_subset.pop()
    
    # Sort the input to handle subsets with the same size and first element
    nums.sort()
    # Start backtracking from index 0 with an empty subset
    backtrack(0, [])
    
    return result

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-14 13:04:11


```
def combine(n, k):
    result = []
    
    def backtrack(start, current_combination):
        # If the combination is of size k, add it to the result
        if len(current_combination) == k:
            result.append(current_combination[:])
            return
        
        # Iterate over the numbers starting from 'start'
        for i in range(start, n + 1):
            # Include the current number in the combination
            current_combination.append(i)
            # Move to the next index
            backtrack(i + 1, current_combination)
            # Backtrack and remove the current number
            current_combination.pop()
    
    # Start backtracking from 1 with an empty combination
    backtrack(1, [])
    
    return result

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print combinations
    print("[", end="")
    for i in range(len(result)):
        print("[", end="")
        for j in range(len(result[i])):
            print(result[i][j], end="")
            if j < len(result[i]) - 1:
                print(",", end="")
        print("]", end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-22 04:58:50


```
# Write Code From Scratch Here
a,b = list(map(int,input().split()))

arr = []
for i in range(a,b+1):
    arr.append((i-a) + (b-i))

print(min(arr))
```

## Submission at 2024-11-22 05:00:24


```
# Write Code From Scratch Here

n = int(input())
arr = list(map(int,input().split()))

sum = 0
for i in range(n):
    sum = sum + arr[i]

print(sum)
```

## Submission at 2024-11-22 05:19:55


```
# write code from scratch

n = int(input())

for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end='')
    
    print()

for k in range(n):

```

## Submission at 2024-11-22 05:26:50


```
# write code from scratch

n = int(input())

for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end='')
    
    print()

for k in range(1,n):
    for l in range(n-k,1,-1):
        print("*",end='')
        
    print()
```

## Submission at 2024-11-22 05:41:40


```
# write code from scratch

m,n,d = list(map(int,input().split()))
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
count = 0

for i in range(m):
    for j in range(n):
        if (arr1[i]-arr2[j]) <= d or (arr2[j]-arr1[i]) <= d:
            count += 1

print(count)
```

## Submission at 2024-11-22 05:47:54


```
# write code from scratch

m,n,d = list(map(int,input().split()))
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
count = 0

for i in range(m):
    for j in range(n):
        if (arr1[i]-arr2[j]) <= d or (arr2[j]-arr1[i]) <= d:
            count += 1

print(count)
```

## Submission at 2024-11-22 05:51:07


```
# write code from scratch

m,n,d = list(map(int,input().split()))
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
count = []

for i in range(m):
    for j in range(n):
        if (arr1[i]-arr2[j]) <= d or (arr2[j]-arr1[i]) <= d:
            count.append(arr[i])

print(count)
```

## Submission at 2024-11-22 06:03:41


```
# write code from scratch
n = int(input())
arr = list(map(int,input().split()))
freq = []

for i in range(n-1):
    count = 1
    for j in range(i+1):
        if arr[i] == arr[j]:
            count += 1
            temp = 0
    freq[i] = count

print(freq)
```

## Submission at 2024-11-22 06:12:04


```
# write code from scratch

n = int(input())

for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end='')
    
    print()

for i in range(n-1,0,-1):
    for j in range(1,i+1):
        print("*",end='')
    
    print()
```

## Submission at 2024-11-22 06:21:38


```
# write code from scratch

n = int(input())
arr = list(map(int, input().split()))

count = []
for i in range(n-1):
    count[i] = 1
    for j in range(i+1):
        if arr[i] == arr[j]:
            count[i] += 1

for i in range(n):
    if count[i] == 2:
        print(arr[i])
```

## Submission at 2024-11-22 06:31:52


```
# write code from scratch

n = int(input())
arr = list(map(int, input().split()))

count = dict()
for i in range(n-1):
    for j in range(i+1):
        

```

## Submission at 2024-11-22 06:43:59


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
        # Your Code Here
        if root:
            isBST(root.left)
            
```

## Submission at 2024-11-22 06:56:38


```
# write code from scratch

m,n,d = list(map(int,input().split()))
arr1 = list(map(int,input().split()))
arr2 = list(map(int,input().split()))
res = []

for i in range(m):
    for j in range(n):
        if arr1[i]-arr2[j] <= d or arr2[j]-arr1[i] <= d:
            temp = arr1[i]

    res.append(temp)           

print(len(res))
```

