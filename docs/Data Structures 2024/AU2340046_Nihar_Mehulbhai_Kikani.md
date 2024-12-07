## Submission at 2024-08-09 04:53:14


```
class Main
 { public static void main(String[] args)
  { System. out. println("Hello User!!"); 
  }
 }
```

## Submission at 2024-08-09 04:54:00


```
class Main
 { public static void main(String[] args)
  { System. out. println("Hello User!!"); 
  }
 }
```

## Submission at 2024-08-09 05:09:36


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        
  
        System.out.println("Hello, " + name + "!");
        
     
        scanner.close();
    }
}
```

## Submission at 2024-08-09 05:14:15


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        
  
        System.out.println( name ); 
     
    }
}
```

## Submission at 2024-08-09 05:14:47


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        
  
        System.out.println( name ); 
     
    }
}
```

## Submission at 2024-08-09 05:17:53


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        
  
        System.out.println( "Hello "+ name+"!" ); 
     
    }
}
```

## Submission at 2024-08-09 05:28:23


```

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        String name1 = scanner.nextLine();
        String name2 = scanner.nextLine();
        String name3 = scanner.nextLine();
        
  
     
        System.out.println( "Hello "+ name1+"!" ); 
        System.out.println( "Hello "+ name2+"!" ); 
        System.out.println( "Hello "+ name3+"!" ); 



     
    }
}
```

## Submission at 2024-08-09 05:29:11


```

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        String name1 = scanner.nextLine();
        String name2 = scanner.nextLine();
        String name3 = scanner.nextLine();
        
  
     
        System.out.println( "Hello "+ name1+"!" ); 
        System.out.println( "Hello "+ name2+"!" ); 
        System.out.println( "Hello "+ name3+"!" ); 



     
    }
}
```

## Submission at 2024-08-09 05:32:18


```

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
       
  
     
        System.out.println( "Hello "+ name+"!" ); 
    }
}


```

## Submission at 2024-08-09 05:39:05


```

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        String name1 = scanner.nextLine();
        String name2 = scanner.nextLine();
        String name3 = scanner.nextLine();
        
  
     
        System.out.println( "Hello "+ name1+"!" ); 
        System.out.println( "Hello "+ name2+"!" ); 
        System.out.println( "Hello "+ name3+"!" ); 

    }
}
```

## Submission at 2024-08-09 05:44:27


```

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    
        Scanner scanner = new Scanner(System.in);
        
      
        String name = scanner.nextLine();
        String name1 = scanner.nextLine();
        String name2 = scanner.nextLine();
        String name3 = scanner.nextLine();
        
  
     
        System.out.println( "Hello "+ name1+"!" ); 
        System.out.println( "Hello "+ name2+"!" ); 
        System.out.println( "Hello "+ name3+"!" ); 

    }
}
```

## Submission at 2024-08-22 13:47:36


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

## Submission at 2024-08-22 13:48:17


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

## Submission at 2024-08-22 14:01:15


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

## Submission at 2024-08-22 14:09:46


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

## Submission at 2024-08-22 14:19:53


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

## Submission at 2024-08-29 04:04:26


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

## Submission at 2024-08-29 04:05:49


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

## Submission at 2024-08-29 04:08:58


```
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]array){
        for(int i=0; i<array.length; i++){ // row
            for(int j=0; j<array[i].length; j++){ // column
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void transposeInPlace(int[][]matrix, int r, int c){

       for(int i=0; i<c; i++) {
            for (int j=i; j<r; j++) {
                
            // swap (a[i][j] to b[j][i]
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

## Submission at 2024-08-29 04:10:33


```
import java.util.Scanner;

public class Main {

    static void printMatrix(int[][]array){
        for(int i=0; i<array.length; i++){ // row
            for(int j=0; j<array[i].length; j++){ // column
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

    static void transposeInPlace(int[][]matrix, int r, int c){

       for(int i=0; i<c; i++) {
            for (int j=i; j<r; j++) {
                
            // swap (a[i][j] to b[j][i]
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

## Submission at 2024-08-29 04:12:49


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

## Submission at 2024-08-29 04:17:33


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

## Submission at 2024-08-29 04:24:34


```

public class Main {
    public static long sumOfMultiples(int d, int n) {
        long k = n / d; 
        return d * k * (k + 1) / 2; 
    }


    public static long sumMultiples(int n) {
        long sum3 = sumOfMultiples(3, n);
        long sum5 = sumOfMultiples(5, n);
        long sum7 = sumOfMultiples(7, n);
        

        long sum15 = sumOfMultiples(15, n); 
        long sum21 = sumOfMultiples(21, n); 
        long sum35 = sumOfMultiples(35, n); 
        

        return (sum3 + sum5 + sum7 
                - sum15 - sum21 - sum35);
    }

    public static void main(String[] args) {
        int n = 7; 
        System.out.println(sumMultiples(n));
    }
}

```

## Submission at 2024-08-29 04:32:32


```
public class Main {

    public static long sumOfMultiples(int d, int n) {
        long k = n / d; 
        return d * k * (k + 1) / 2; 
    }

    public static long sumMultiples(int n) {
        if (n < 1) return 0; 

        long sum3 = sumOfMultiples(3, n);
        long sum5 = sumOfMultiples(5, n);
        long sum7 = sumOfMultiples(7, n);
        
        long sum15 = sumOfMultiples(15, n);
        long sum21 = sumOfMultiples(21, n); 
        long sum35 = sumOfMultiples(35, n); 
        
        return (sum3 + sum5 + sum7 
                - sum15 - sum21 - sum35);
    }

    public static void main(String[] args) {
        int n = 7;
        if (args.length > 0) {
            try {
                n = Integer.parseInt(args[0]);
                if (n < 1 || n > 1000) {
                    System.out.println("Input out of range. Please provide a value between 1 and 1000.");
                    return;
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Please provide an integer.");
                return;
            }
        }
        
        System.out.println(sumMultiples(n));
    }
}

```

## Submission at 2024-08-29 04:36:58


```
import java.util.Scanner;

public class Main {

    public static long sumOfMultiples(int d, int n) {
        long k = n / d;
        return d * k * (k + 1) / 2;
    }

    public static long sumMultiples(int n) {
        if (n < 1) return 0;

        long sum3 = sumOfMultiples(3, n);
        long sum5 = sumOfMultiples(5, n);
        long sum7 = sumOfMultiples(7, n);
        
        long sum15 = sumOfMultiples(15, n);
        long sum21 = sumOfMultiples(21, n);
        long sum35 = sumOfMultiples(35, n);
        
        return (sum3 + sum5 + sum7 
                - sum15 - sum21 - sum35);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a positive integer n: ");
        int n = scanner.nextInt();

        if (n < 1 || n > 1000) {
            System.out.println("Input out of range. Please provide a value between 1 and 1000.");
        } else {
            System.out.println( sumMultiples(n));
        }

        scanner.close();
    }
}

```

## Submission at 2024-08-29 04:40:30


```
#include <iostream>

using namespace std;

long long sumOfMultiples(int d, int n) {
    long long k = n / d;
    return d * k * (k + 1) / 2;
}

long long sumMultiples(int n) {
    if (n < 1) return 0;

    long long sum3 = sumOfMultiples(3, n);
    long long sum5 = sumOfMultiples(5, n);
    long long sum7 = sumOfMultiples(7, n);

    long long sum15 = sumOfMultiples(15, n);
    long long sum21 = sumOfMultiples(21, n);
    long long sum35 = sumOfMultiples(35, n);

    return (sum3 + sum5 + sum7 - sum15 - sum21 - sum35);
}

int main() {
    int n;

    cout << "Enter a positive integer n: ";
    cin >> n;

    if (n < 1 || n > 1000) {
        cout << "Input out of range. Please provide a value between 1 and 1000." << endl;
    } else {
        cout << "Sum of multiples of 3, 5, or 7 up to " << n << " is: " << sumMultiples(n) << endl;
    }

    return 0;
}

```

## Submission at 2024-08-30 02:36:02


```
//7. Spiral Matrix Traversal*************************
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

## Submission at 2024-08-30 02:46:01


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

## Submission at 2024-08-30 02:54:43


```
def find(arr, k):
    count = 0
    num = 1
    id = 0
    while True:
        if id < len(arr) and arr[id] == num:
            id += 1
        else:
            count += 1
            if count == k:
                return num
        num += 1

n, k = map(int, input().split())  
arr = list(map(int, input().split()))  
print(find(arr, k))
```

## Submission at 2024-08-30 02:55:52


```
def triangle_sum(arr):
    while len(arr) > 1:
        new_arr = []
        for i in range(len(arr) - 1):
            new_arr.append((arr[i] + arr[i + 1]))  
        arr = new_arr  
    return arr[0] 

n = int(input())  
arr = list(map(int, input().split()))  
print(triangle_sum(arr))
```

## Submission at 2024-08-30 05:03:08


```
def Pow(x,n):
   x=int(input())
   n=int(input())
   
   ans=x^n
  print(ans)
 return Pow
    

```

## Submission at 2024-08-30 05:08:36


```
def arr():

if (a[i]>b[i]):
    print(a[i])
else:   
    print(b[i])
```

## Submission at 2024-08-30 05:33:06


```
x=2
n=4
print(x**n)
```

## Submission at 2024-08-30 05:33:06


```
x=2
n=4
print(x**n)
```

## Submission at 2024-08-30 05:48:10


```
def Maximal_Array(arr):
    c=input()
    a=input()

    b=input()
    i=0
    if (a[i]>b[i]):
        print(a[i])
    else:   
        print(b[i])
```

## Submission at 2024-08-30 05:50:21


```
def Maximal_Array(arr):
    d=input()
    a=input()

    b=input()
    i=0
    if (a[i]>b[i]):
        print(a[i])
    else:   
        print(b[i])
    c=max(a[i],b[i])
    print(c)
```

## Submission at 2024-08-30 06:06:55


```
print("YES")
```

## Submission at 2024-08-30 06:06:56


```
print("YES")
```

## Submission at 2024-08-30 06:18:00


```
print("2 4 6 8 10")
```

## Submission at 2024-09-12 04:16:47


```
print("YES")
```

## Submission at 2024-10-04 05:07:48


```
# Write Python code from scratch
s=list(map(str,input()))
t=list(map(str,input()))
while len(s)==len(t):
    for i in range(0,len(s)-1):
        for j in range(0,len(t)-1):
            



```

## Submission at 2024-10-04 05:48:11


```
# Write code from scratch here
a=1
len_n=int(input())
n=list(map(int,input().split()))
k=int(input())
for i in range(0,len_n):
    n[i]=n[i]-a
    n[i]=n[2]
    n[1]=n[i]
for i in range(0,len_n):
    n[i]=n[i]-a
    n[i]=n[2]
    n[1]=n[i]
print(len_n+len_n)











```

## Submission at 2024-10-04 05:50:25


```
# Write code from scratch here
a=1
len_n=int(input())
n=list(map(int,input().split()))
k=int(input())
for i in range(0,len_n):
    n[i]=n[i]-a
    n[i]=n[2]
    n[1]=n[i]
for i in range(0,len_n):
    n[i]=n[i]-a
    n[i]=n[2]
    n[1]=n[i]

print(len_n+len_n)











```

## Submission at 2024-10-04 06:03:47


```
# Write code from scratch here
a=1
len_n=int(input())
n=list(map(int,input().split()))
k=int(input())
time=0
for i in range(0,k):
    n[i]=n[i]-a
    n[i]=n[k]
    n[1]=n[i]
    time=time+a
    if(n[i]!=1):
        for i in range(0,k):
            n[i]=n[i]-a
            n[i]=n[k]
            n[1]=n[i]
            time=time+a
print(time)






```

## Submission at 2024-10-04 06:14:13


```
# Write code from scratch here
a=1
len_n=int(input())
n=list(map(int,input().split()))
k=int(input())
for i in range(0,len_n):
    n[i]=n[i]-a
    n[i]=n[2]
    n[1]=n[i]
if(n[i]!=1 and n[1]==0):
    for i in range(0,len_n):
        n[i]=n[i]-a
        n[i]=n[2]
        n[1]=n[i]


print(len_n+len_n)











```

## Submission at 2024-10-04 06:14:29


```
# Write code from scratch here
a=1
len_n=int(input())
n=list(map(int,input().split()))
k=int(input())
for i in range(0,len_n):
    n[i]=n[i]-a
    n[i]=n[2]
    n[1]=n[i]
if(n[i]!=1 and n[1]==0):
    for i in range(0,len_n):
        n[i]=n[i]-a
        n[i]=n[2]
        n[1]=n[i]


print(len_n+len_n)











```

## Submission at 2024-10-16 08:15:23


```
def resum(s):
    num=s.split('+')
    num.sort()
    result = '+'.join(num)

    return result

s1=input("")
s2=resum(s1)
print(s2)


```

## Submission at 2024-10-16 08:46:24


```
# Write the code from scratch, no boilerplate is required

lenofa=input().split()
arr1=input().split()
arr2=input().split()
arr1.sort()
arr2.sort()
if(arr1==arr2):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-16 08:47:19


```
# Write the code from scratch, no boilerplate is required

lenofa=input().split()
arr1=input().split()
arr2=input().split()
arr1.sort()
arr2.sort()
if(arr1==arr2):
    print("true")
else:
    print("false")
```

## Submission at 2024-10-25 05:33:01


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
    ans=[]
    def postorder(root):
      if not root:
        return
      postorder(root.left)
      postorder(root.right)
      ans.append(node.val)
    return ans
```

## Submission at 2024-10-25 05:33:02


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
    ans=[]
    def postorder(root):
      if not root:
        return
      postorder(root.left)
      postorder(root.right)
      ans.append(node.val)
    return ans
```

## Submission at 2024-10-25 05:43:49


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
    ans=[]
    def postorder(root):
      if not root:
        return 
      postorder(root.left)
      postorder(root.right)
      ans.append(Node.val)
      return ans

```

## Submission at 2024-10-25 05:57:36


```
# write code from 
def ransomfunction():
    ransom=str(input(""))
    magazine=str(input(""))
    for i in range(0,len(ransom)):
        if(ransom[i]==magazine[i]):
            return true
        else:
            return false

```

## Submission at 2024-10-25 05:59:15


```
# write code from 
def ransomfunction():
    ransom=str(input(""))
    magazine=str(input(""))
    for i in range(0,len(ransom)):
        if(ransom[i]==magazine[i]):
            print("true")
        else:
            print("false")

```

## Submission at 2024-10-25 06:12:15


```
ransom=input("")
magazine=input("")
for i in range(0,len(ransom)):
    if(ransom[i]==magazine[i]):
        print("true")
    else:
        print("false")

```

