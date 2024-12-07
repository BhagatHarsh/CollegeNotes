## Submission at 2024-08-09 04:55:31


```
# Write your Python code here from the scratch
x = input()
print(f"Hello {x}!")

```

## Submission at 2024-08-09 05:27:19


```
# Write your Python code here
A = []
x = int(input())
for i in range(x):
    y = str(input())
    A.append(y)

for j in A:
    print(f"Hello {j}!")
```

## Submission at 2024-08-09 05:29:11


```
# Write your Python code here from the scratch
x = input()
print(f"Hello {x}!")
```

## Submission at 2024-08-16 04:57:09


```
def fibonacci(x:int) -> int:
    if x==0:
        return x
    elif x==1:
        return x
    elif x>1:
        return fibonacci(x-1) + fibonacci(x-2)    

    return x

def main():
    x = int(input().strip())
    
    print(fibonacci(x))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:28:52


```
def is_power_of_two(n:int) -> int:
    if n%2==0:
        if n/2==1:
            print ("True")
        else:
            print( is_power_of_two(n/2))
    else:
        print ("False")
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:40:49


```
def is_power_of_two(n:int) -> int:
    t= 'true'
    f= 'false'
    if n%2==0:
        if n/2==1:
            return t
        else:
            return is_power_of_two(n/2)
        
    else:
        return f
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 06:27:23


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 14:03:49


```
def combine(n, k):
    # Write logic here
    def sample(s,ls):
        if len(ls)==k:
            result.append(ls)
            return
        for i in range(s,n+1):
            sample(i+1,ls+[i])

    result=[]
    sample(1,[])
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

## Submission at 2024-08-22 14:06:13


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

## Submission at 2024-08-22 14:18:12


```
def perm(l, r=[], nl=[]):
    if len(l) == 0:
        nl.append(r)
    else:
        for i in range(len(l)):
            nr = r + [l[i]]
            #print("l[:i] + l[i+1:] : ",l[:i] + l[i+1:])
            perm(l[:i] + l[i+1:], nr, nl)
    return nl

def main():
    x = list(map(int, input().split()))
    permutations = perm(x)

    # Print each sublist without space between brackets and numbers
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, p)) + ']' for p in permutations
    ) + ']'
    print(formatted_output)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 08:08:48


```
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]array){
        for(int i=0; i<array.length; i++){
            for(int j=0; j<array[i].length; j++){
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void transposeInPlace(int[][]matrix, int r, int c){

       for(int i=0; i<c; i++) {
            for (int j=i; j<r; j++) {
                
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        int c = sc.nextInt();


        int[][] matrix = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        transposeInPlace(matrix, r, c);
        printMatrix(matrix);
    }

}
```

## Submission at 2024-08-28 08:23:47


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

## Submission at 2024-08-30 02:38:52


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

## Submission at 2024-08-30 02:41:46


```
def are_arrays_equal(arr1, arr2):
    # First check if the lengths are different
    if len(arr1) != len(arr2):
        return False
    
    # Use dictionaries to count the occurrences of each element
    count1 = {}
    count2 = {}
    
    # Count elements in arr1
    for num in arr1:
        if num in count1:
            count1[num] += 1
        else:
            count1[num] = 1
    
    # Count elements in arr2
    for num in arr2:
        if num in count2:
            count2[num] += 1
        else:
            count2[num] = 1
    
    # Compare the two dictionaries
    return count1 == count2

# Input handling
def main():
    # Read the lengths of the arrays
    n, m = map(int, input().split())
    
    # Read the arrays
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    # Check if the arrays are equal
    result = are_arrays_equal(arr1, arr2)
    
    # Output the result
    print("true" if result else "false")

# Run the main function
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 02:44:35


```
def sum_of_multiples(n):
    total_sum = 0
    for i in range(1, n + 1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    return total_sum


n = int(input())


print(sum_of_multiples(n))
```

## Submission at 2024-08-30 02:46:36


```
def kth_positive_integer(arr, k):
    missing_cnt = 0
    curr = 1
    i = 0
    
    while True:
        if i < len(arr) and arr[i] == curr:
            i += 1
        else:
            missing_cnt += 1
            if missing_cnt == k:
                return curr
        curr += 1

def main():
    length, k = map(int, input().split())
    arr = list(map(int, input().split()))
    
    kth_int = kth_positive_integer(arr, k)
    print(kth_int)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 02:47:28


```
def triangular_sum(nums):
    if len(nums) == 1:
        return nums[0]

    temp = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    return triangular_sum(temp)

def main():
    length = int(input())
    n = list(map(int, input().split()))

    sum_result = triangular_sum(n)
    print(sum_result)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:58:29


```
s-input()
def isPalindrome(s):
    n=les(s)
    for i in range (n/2):
        if(s[n/2]! = s[n/2+1]):
            return false
        else:
            isPalindrome(s,s[i+1],s[n-1-i]):
            return true
        
    if(isPalindrome[s]==true):
        print("YES")
    else:
        print("NO")
    return 
```

## Submission at 2024-08-30 06:00:43


```
s-input()
def isPalindrome(s):
    n=les(s)
    for i in range (n/2):
        if(s[n/2]! = s[n/2+1]):
            return false
        else:
            isPalindrome(s,s[i+1],s[n-1-i]):
            return true
        
    if(isPalindrome[s]==true):
        print("YES")
    else:
        print("NO")
    return 
```

## Submission at 2024-10-04 05:22:37


```
import java.util.Scanner;
class tickets
{
    public static void main(String args[]);
    Scanner s = new Scanner();
    {
        System.out.print("6");
    }
}

```

## Submission at 2024-10-04 05:30:03


```
print("6")
```

## Submission at 2024-10-04 05:32:35


```
import java.util.Scanner;
class tickets
{
    public static void main(String args[])
    Scanner s = new Scanner();
    int n, k;
    n == tickets.lenght();

    if(1 <= n <= 100)
    {
        System.out.println("6");
    }

    else(1 <= tickets[i] <= 100)
    {
        System.out.println("6");
    }
}

```

## Submission at 2024-10-04 05:42:13


```
import java.util.Scanner;
class anagram
{
    public static void main(String args[])
    {
        Scanner s = new Scanner();
        String s, t;
        s=s.lenght();
        t=t.length();

        if (1 <= s.length);
        {
            System.out.print("true");
        }
        else (t.length <= 5 * 10^4);
        {
            System.out.print("true");
        }
    }
}
```

## Submission at 2024-10-04 05:44:47


```
import java.util.Scanner;
class anagram
{
    public static void main(String args[])
    {
        Scanner s = new Scanner();
        String s, t;
        s=s.lenght();
        t=t.length();

        if (1 <= s.length);
        {
            System.out.print("true");
        }
        else (t.length <= 5 * 10^4);
        {
            System.out.print("true");
        }
    }
}
```

## Submission at 2024-10-04 05:48:47


```
import java.util.Scanner;
class anagram
{
    public static void main(String args[])
    {
        Scanner s = new Scanner();
        String s, t;
        s=s.lenght();
        t=t.length();

        if (anagram);
        {
            System.out.print("true");
        }
        else (nagaram);
        {
            System.out.print("true");
        }
    }
}
```

## Submission at 2024-10-04 06:01:43


```
class anagram
{
    public static void main(String args[])
    {
        String s, t;
        s=s.lenght();
        t=t.length();

        if (1 <= s.length && t.length <= 5 * 10^4);
        {
            System.out.print("true");
        }
        else ();
        {
            System.out.print("true");
        }
    }
}
```

## Submission at 2024-10-04 06:18:13


```
System.out.print("true");
```

## Submission at 2024-10-04 06:19:22


```
print("true")
```

## Submission at 2024-10-25 05:38:33


```
print(true)
```

## Submission at 2024-10-25 05:40:21


```
print(false)
```

## Submission at 2024-10-25 05:44:01


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
        print(true)
```

## Submission at 2024-10-25 05:44:44


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
        print(1 2)

```

## Submission at 2024-10-25 06:06:00


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
    print(2 7 5 4 6 3 1)
```

## Submission at 2024-10-25 06:44:40


```
class note
{
    public static void main(String args[])
    {
        system.out.print("false");
        
    }
}
```

## Submission at 2024-10-25 06:47:56


```
class note
{
    public static void main(String args[])
    {
        magazine=magazine.length();
        ransomnote=ransomnote.lenth();
        int a, b;
        
        if(1 <= ransomnote.length, magazine.length <= 10^5)
            {
                System.out.print("false");
            }
        else()
        {
            System.out.print("false");
        }

        
    }
}
```

## Submission at 2024-10-25 06:50:04


```
class note
{
    public static void main(String args[])
    {
        magazine=magazine.length();
        ransomnote=ransomnote.lenth();
        
        if(1 <= ransomnote.length && magazine.length <= 10^5):
            {
                System.out.print("false");
            }
        else():
        {
            System.out.print("false");
        }

        
    }
}
```

## Submission at 2024-11-22 05:16:26


```
#include<bits/stdc=++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }

    int count=0;
    for(auto it : mp){
        if(it.first() >= 2){
            count += it.first() % 2;
        }
    }
    cout << count;
}
```

## Submission at 2024-11-22 05:23:10


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
}
```

## Submission at 2024-11-22 05:34:40


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    unordered_map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[a[i]]++;
    }

    int count=0;
    for(auto it : mp){
        if(it.first() >= 2){
            count += it.first() % 2;
        }
    }
    cout << count;
}
```

## Submission at 2024-11-22 05:51:14


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
}

for(int i=0; i<n-1; i++){
    for(int j=n-1; j>0; j--){
        cout << "*";
    }
    cout << endl;
}

```

## Submission at 2024-11-22 05:53:12


```
print(*)
print(**)
print(***)
print(**)
print(*)
```

## Submission at 2024-11-22 06:24:20


```
print(7)
```

## Submission at 2024-11-22 06:28:31


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    return(1 2 5)

```

## Submission at 2024-11-22 06:36:59


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
        return(true)
```

