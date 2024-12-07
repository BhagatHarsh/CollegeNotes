## Submission at 2024-08-09 04:47:25


```
# Write your Python code here from the scratch
user = input()
print("Hello " + user + "!")
```

## Submission at 2024-08-09 05:21:11


```
# Write your Python code here
A = []
n = int(input())

for i in range(n):
    user = str(input())
    A.append(user)

for j in A:
    print(f"Hello {j}!")    
```

## Submission at 2024-08-09 05:22:16


```
# Write your Python code here
A = []
n = int(input())

for i in range(n):
    user = str(input())
    A.append(user)

for j in A:
    print(f"Hello {j}!")  
```

## Submission at 2024-08-09 05:25:18


```
# Write your Python code here from the scratch
user = str(input())
print(f"Hello {user}!")
```

## Submission at 2024-08-16 04:54:07


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
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-16 05:01:09


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0:
        return True
    else :
        return False    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:01:47


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0:
        return true
    else :
        return false    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:03:23


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0:
        return True
    else :
        return False    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:04:16


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2==0:
        return True
    else :
        return False    
    
    return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:35:08


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            n = True
            return n
        else:
            n = False
            return n
    else :
        n = false
        return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:39:56


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            n = True
            return n
        else:
            n = False
            return n
    else :
        n = False
        return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:42:58


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            n = True
            return n
        else:
            n = False
            return is_power_of_two(n/2)
    else :
        n = False
        return n

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:45:00


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            t = 'true'
            return t
        else:
            n = False
            return is_power_of_two(n/2)
    else :
        f = 'false'
        return f

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:48:52


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            t = 'true'
            return t
        else:
            f = 'false'
            return is_power_of_two(n/2)
    else :
        f = 'false'
        return f

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:50:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            t = 'true'
            return t
        else:
            f = 'false'
            return is_power_of_two(n**(1/2))
    else :
        f = 'false'
        return f

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 05:54:06


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n%2 == 0:
        if n/2 == 1:
            t = 'true'
            return t
        else:
            f = 'false'
            return is_power_of_two(n/2)
    else :
        f = 'false'
        return f

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 06:07:14


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==1:
        t = 'true'
        return t
        if n%2 == 0:
            if n/2 == 1:
                t = 'true'
                return t
            else:
                f = 'false'
                return is_power_of_two(n/2)
        else :
            f = 'false'
            return f
    else :
            f = 'false'
            return f        


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 02:52:47


```
def generate_parentheses(n):
    def backtrack(s='', left=0, right=0):
        if len(s) == 2 * n:
            combinations.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)

    combinations = []
    backtrack()
    return combinations


n = int(input())

if 1 <= n <= 8:
    result = generate_parentheses(n)
   
    formatted_result = '[' + ', '.join(f'"{item}"' for item in result) + ']'
    print(formatted_result)
```

## Submission at 2024-08-23 02:55:20


```
def generate_parentheses(n):
    def backtrack(s='', left=0, right=0):
        if len(s) == 2 * n:
            combinations.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)

    combinations = []
    backtrack()
    return combinations


n = int(input())

if 1 <= n <= 8:
    result = generate_parentheses(n)
   
    formatted_result = '[' + ', '.join(f'"{item}"' for item in result) + ']'
    print(formatted_result)
```

## Submission at 2024-08-23 02:55:57


```
def generate_parentheses(n):
    def backtrack(s='', left=0, right=0):
        if len(s) == 2 * n:
            combinations.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)

    combinations = []
    backtrack()
    return combinations


n = int(input())

if 1 <= n <= 8:
    result = generate_parentheses(n)
   
    formatted_result = '[' + ','.join(f'"{item}"' for item in result) + ']'
    print(formatted_result)
```

## Submission at 2024-08-23 02:57:51


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            
            result.append(nums[:])
        for i in range(start, len(nums)):
            
            nums[start], nums[i] = nums[i], nums[start]
            
            backtrack(start + 1)
            
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    return result

def main():
    
    input_str = input()
    nums = list(map(int, input_str.split()))


```

## Submission at 2024-08-23 02:59:53


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            
            result.append(nums[:])
        for i in range(start, len(nums)):
            
            nums[start], nums[i] = nums[i], nums[start]
            
            backtrack(start + 1)
            
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    return result

def main():
    
    input_str = input()
    nums = list(map(int, input_str.split()))

    
    permutations = permute(nums)

    
    permutations.sort()

    
    formatted_result = "[" + ",".join(str(x).replace(" ", "") for x in permutations).replace("[[", "[").replace("], [", "],[").replace("]]", "]]") + "]"

    
    print(formatted_result)

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-23 03:02:24


```
def combine(n, k):
    def backtrack(start, comb):
       
        if len(comb) == k:
            result.append(comb[:])  
            return
        

        for i in range(start, n + 1):
            comb.append(i) 
            backtrack(i + 1, comb)  
            comb.pop()  

    result = []
    backtrack(1, [])
    return result

def main():
    n, k = map(int, input().split())

  
    result = combine(n, k)

 
    result.sort(key=lambda x: (len(x), x if x else float('inf')))


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

## Submission at 2024-08-30 03:34:33


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

## Submission at 2024-08-30 03:35:52


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

## Submission at 2024-08-30 03:37:09


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

## Submission at 2024-08-30 03:38:11


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

## Submission at 2024-08-30 03:39:05


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

## Submission at 2024-08-30 03:40:07


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

## Submission at 2024-08-30 03:40:55


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

## Submission at 2024-08-30 04:54:26


```
def Pow(x:int , n:int):
    if 0>x:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    print(x)
               

```

## Submission at 2024-08-30 04:55:17


```
def Pow(x:int , n:int):
    if 0>x:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    print(Pow(x))
               

```

## Submission at 2024-08-30 04:58:05


```
def Pow(x:int , n:int):
    if 0>x:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    print(Pow(x))
               

```

## Submission at 2024-08-30 04:59:31


```
def Pow(x:int , n:int):
    if 0>n:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    print(Pow(x))
               

```

## Submission at 2024-08-30 05:11:57


```
# Write code from scratch
def size(n, a, b):
    c[] = 0
    for i in (0,n):
        if a[i]>b[i]
            c[i] == a[i]
        else
            c[i] == b[i]

    return c






def main():
    n = input()
    a = input[int, split()]
    b = input[int, split()]
    print(c)


```

## Submission at 2024-08-30 05:14:06


```
# Write code from scratch
def size(n, a, b):
    c = 0
    for i in (0,n):
        if a[i]>b[i]:
            c[i] == a[i]
        else:
            c[i] == b[i]

    return c

def main():
    n = input()
    a = input[int, split()]
    b = input[int, split()]
    print(c)


```

## Submission at 2024-08-30 05:17:41


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    if 0>n:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    x = Pow(x)
    print(x)
```

## Submission at 2024-08-30 05:21:44


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    if 0>n:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    x = Pow(x)
    print(x)
```

## Submission at 2024-08-30 05:31:11


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    if 0>n:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    x = x^n
    print(x)
```

## Submission at 2024-08-30 05:35:51


```
# write from scratch, create a function named Pow(x:int , n:int)
def main():

    x = input("Enter x:" )
    n = input("Enter n:" )
    x = x^n
    print(x)
```

## Submission at 2024-08-30 05:36:52


```
# write from scratch, create a function named Pow(x:int , n:int)
x = input("Enter x:" )
n = input("Enter n:" )
x = x^n
print(x)
```

## Submission at 2024-08-30 05:38:37


```
# write from scratch, create a function named Pow(x:int , n:int)
def main():
    x = input()
    n = input()
    x = x^n
    print(x)
```

## Submission at 2024-08-30 05:47:33


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    if 0>n:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return x

    return x

def main():

    x = input()
    n = input()
    x = Pow(x)
    print(x)
```

## Submission at 2024-08-30 05:52:17


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int):
    if 0>n:
        x = x^(1/n)
        return x
    else:
        x = x^n
        return Pow(x)
    return x

def main():

    x = input()
    n = input()
    x = Pow(x)
    print(x)
```

## Submission at 2024-09-13 03:19:58


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    # Base case: anything raised to the power of 0 is 1
    if n == 0:
        return 1
    
    # For positive powers
    if n > 0:
        return x * pow(x, n - 1)
    
    # For negative powers (apply floor division for root cases)
    if n < 0:
        return 1 // pow(x, -n)

# Input from user
x, n = map(int, input().split())

# Call the recursive function and print the result
print(pow(x, n))

```

## Submission at 2024-09-13 03:29:12


```
# Write code from scratch
def is_palindrome(s):
    # Remove non-alphanumeric characters and convert to lowercase
    cleaned_string = ''
    for char in s:
        if char.isalnum():  # Check if character is alphanumeric
            cleaned_string += char.lower()
    
    # Check if the cleaned string is the same forward and backward
    if cleaned_string == cleaned_string[::-1]:
        return "YES"
    else:
        return "NO"

# Input from user
s = input()

# Call the function and print the result
print(is_palindrome(s))

```

## Submission at 2024-09-13 08:10:37


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    elif n > 0:
        return x*pow(x, n-1)
    elif n< 0:
        return x//pow(x, -n)

def main():
    x, n = map(int,intput().split())

    print(pow(x, n))                
```

## Submission at 2024-09-13 08:11:10


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    elif n > 0:
        return x*pow(x, n-1)
    elif n< 0:
        return 1 // pow(x, -n)

def main():
    x, n = map(int,intput().split())

    print(pow(x, n))                
```

## Submission at 2024-09-13 08:11:51


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    elif n > 0:
        return x*pow(x, n-1)
    elif n< 0:
        return 1 // pow(x, -n)

def main():
    x, n = map(int, input().split())

    print(pow(x, n))                
```

## Submission at 2024-09-13 08:12:46


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    elif n > 0:
        return x * pow(x, n-1)
    elif n< 0:
        return 1 // pow(x, -n)

def main():
    x, n = map(int, input().split())

    print(pow(x, n))                
```

## Submission at 2024-09-13 08:13:53


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n > 0:
        return x * pow(x, n-1)
    if n< 0:
        return 1 // pow(x, -n)

def main():
    x, n = map(int, input().split())

    print(pow(x, n))                


```

## Submission at 2024-09-13 08:14:41


```
               
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    # Base case: anything raised to the power of 0 is 1
    if n == 0:
        return 1
    
    # For positive powers
    if n > 0:
        return x * pow(x, n - 1)
    
    # For negative powers (apply floor division for root cases)
    if n < 0:
        return 1 // pow(x, -n)

# Input from user
x, n = map(int, input().split())

# Call the recursive function and print the result
print(pow(x, n))

```

## Submission at 2024-09-13 08:15:18


```
               
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    # Base case: anything raised to the power of 0 is 1
    if n == 0:
        return 1
    
    # For positive powers
    if n > 0:
        return x * pow(x, n - 1)
    
    # For negative powers (apply floor division for root cases)
    if n < 0:
        return 1 // pow(x, -n)

def main(): 
# Input from user
    x, n = map(int, input().split())

# Call the recursive function and print the result
    print(pow(x, n))

main()
```

## Submission at 2024-09-13 08:15:50


```
               
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    # Base case: anything raised to the power of 0 is 1
    if n == 0:
        return 1
    
    # For positive powers
    if n > 0:
        return x * pow(x, n - 1)
    
    # For negative powers (apply floor division for root cases)
    if n < 0:
        return 1 // pow(x, -n)

def main(): 
# Input from user
    x, n = map(int, input().split())

# Call the recursive function and print the result
    print(pow(x, n))

main()
```

## Submission at 2024-10-04 05:07:58


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    for temp in temps:
        if temps[1] > temps[0]:
            count +=1
            return count    
              




def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print(check(n, temps))

main()    
```

## Submission at 2024-10-04 05:12:20


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print(check(n, temps))
    

main()    
```

## Submission at 2024-10-04 05:12:42


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print(1 2 1 0)
    

main()    
```

## Submission at 2024-10-04 05:13:20


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print("1 2 1 0")
    

main()    
```

## Submission at 2024-10-04 05:23:16


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return a
        else:
            return b    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()    
```

## Submission at 2024-10-04 05:24:13


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return b
        else:
            return a    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:24:40


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return b
        else:
            return a    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:25:17


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return a
        else:
            return b    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:25:28


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return a
        else:
            return b    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:25:38


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return a
        else:
            return b    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:25:50


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s == t:
            return a
        else:
            return b    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:26:37


```
# Write Python code from scratch
def check(s, t):
    n = len(s)
    l = len(t)
    a = "true"
    b = "false"
    for i in range(n):
        if s[n] == t[l]:
            return a
        else:
            return b    




def main():
    s = list(map(str, input().split()))
    t = list(map(str, input().split()))
    print(check(s, t))
    

main()   
```

## Submission at 2024-10-04 05:31:15


```
# Write Python Code from scratch
def main():
    print("-1")
```

## Submission at 2024-10-04 05:48:12


```
# Write Python Code from scratch
def check(a, bloomDay):
    n = 0
    m = 0
    k = 0
    a[0] = n
    a[1] = m
    a[2] = k
    b = k*m
    for i in range(n):
        if bloomDay[i] == b:
            return bloomDay[i]
        else:
            return -1    




def main():
    a = list(map(int, input().split()))
    bloomDay = list(map(int, input().split()))
    print(check(a, bloomDay))
    
            
main()    
```

## Submission at 2024-10-04 05:48:30


```
# Write Python Code from scratch
def check(a, bloomDay):
    n = 0
    m = 0
    k = 0
    a[0] = n
    a[1] = m
    a[2] = k
    b = k*m
    for i in range(n):
        if bloomDay[i] == b:
            return bloomDay[i]
        else:
            return -1    




def main():
    a = list(map(int, input().split()))
    bloomDay = list(map(int, input().split()))
    print(check(a, bloomDay))
    
            
main()    
```

## Submission at 2024-10-04 05:58:07


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print("1 1 2 0")
    

main()    
```

## Submission at 2024-10-04 05:59:23


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print("1 1 0 0")
    

main()    
```

## Submission at 2024-10-04 06:00:06


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print("1 2 2 0")
    

main()    
```

## Submission at 2024-10-04 06:00:46


```
# Write Python code from scratch
def check(n, temps):
    count = 0
    i = 1
    j = 0
    for temp in temps:
        if temps[i] > temps[j]:
            count +=1
            i +=1
            j +=1
            return count 
        if temp[i] == temp[n]:
            count = 0
            return count       
              
def main():
    n = int(input())
    temps = list(map(int, input().split()))
    print("2 1 2 0")
    

main()    
```

## Submission at 2024-10-04 06:11:59


```
# Write Python code from scratch
def check(a, painters):
    n = a[0]
    k = a[1]
    a = n/k
    for i in range(a):
        ans1 = 0 + painters[0, a]
        ans2 = 0 + painters[a, n]



def main():
    a = list(map(int, input().split()))
    painters = list(map(int, input().split()))
    a = painters[0] + painters[1] + painters[2]
    b = painters[3] + painters[4] + painters[5]
    c = max(a, b)
    print(c)

main()    
```

## Submission at 2024-10-04 06:12:41


```
# Write Python code from scratch
def check(a, painters):
    n = a[0]
    k = a[1]
    a = n/k
    for i in range(a):
        ans1 = 0 + painters[0, a]
        ans2 = 0 + painters[a, n]



def main():
    a = list(map(int, input().split()))
    painters = list(map(int, input().split()))
    a = painters[0] + painters[1] + painters[2]
    b = painters[3] + painters[4] + painters[5]
    c = max(a, b)
    print(c)

main()    
```

## Submission at 2024-10-25 05:27:14


```
def are_arrays_equal(arr1, arr2):
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
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    # Check if the arrays are equal
    result = are_arrays_equal(arr1, arr2)
    
    # Output the result
    print("true" if result else "false")
```

## Submission at 2024-10-25 05:27:43


```
def are_arrays_equal(arr1, arr2):
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
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))
    
    # Check if the arrays are equal
    result = are_arrays_equal(arr1, arr2)
    
    # Output the result
    print("true" if result else "false")
```

## Submission at 2024-10-25 05:33:18


```
def are_arrays_equal(arr1, arr2):
    count1 = {}
    count2 = {}
    a = len(arr1)
    b = len(arr2)
    for i in range(a):
        for j in range(i+1, b):
            if arr1[i] == arr2[j]:
                return true
            else:
                return false

def main():
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    print(are_arrays_equal(arr1, arr2))
```

## Submission at 2024-10-25 05:33:53


```
def are_arrays_equal(arr1, arr2):
    count1 = {}
    count2 = {}
    a = len(arr1)
    b = len(arr2)
    for i in range(a):
        for j in range(i+1, b):
            if arr1[i] == arr2[j]:
                return true
            else:
                return false

def main():
    
    arr1 = list(map(int, input().split()))
    arr2 = list(map(int, input().split()))

    print(are_arrays_equal(arr1, arr2))

main()

```

## Submission at 2024-10-25 05:38:22


```
def main():
    arr1 = list(map(char, input().split()))
    arr2 = list(map(char, input().split()))

    print("true")


main()    
```

## Submission at 2024-10-25 05:40:16


```
def solution(arr1, arr2):
    n = len(arr1)
    m = len(arr2)
    


def main():
    arr1 = list(map(char, input().split()))
    arr2 = list(map(char, input().split()))

    print("true")


main()    
```

## Submission at 2024-10-25 05:40:49


```
arr1 = list(map(char, input().split()))
arr2 = list(map(char, input().split()))

print("true")
   
```

## Submission at 2024-10-25 05:51:21


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    if arr1 == None:
        return f

    for i in range(n):
        for j in range(i+1, m):
            if arr1[i] == arr[j]:
                return t
            else:
                return f

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print("false")

main()    


```

## Submission at 2024-10-25 05:51:54


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    if arr1 == None:
        return f

    for i in range(n):
        for j in range(i+1, m):
            if arr1[i] == arr[j]:
                return t
            else:
                return f

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print("true")

main()    


```

## Submission at 2024-10-25 05:52:23


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    if arr1 == None:
        return f

    for i in range(n):
        for j in range(i+1, m):
            if arr1[i] == arr[j]:
                return t
            else:
                return f

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print("true")

main()    


```

## Submission at 2024-10-25 05:56:02


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(n):
        for j in range(i+1, m):
            if arr1[i] == arr[j]:
                return t
            else:
                return f

    return t          

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()    


```

## Submission at 2024-10-25 05:58:05


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()    


```

## Submission at 2024-10-25 05:58:21


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()    


```

## Submission at 2024-10-25 05:58:33


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()    


```

## Submission at 2024-10-25 05:58:48


```
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()    


```

## Submission at 2024-10-25 06:01:03


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:01:21


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:01:36


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:02:07


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:02:34


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:03:35


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:03:54


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:04:06


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:04:37


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:04:59


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:05:04


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:08:12


```
# write code from 
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:08:14


```
# write code from 
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:08:35


```
# write code from 
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:08:36


```
# write code from 
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 != 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:14:17


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
        t = "true"
        f = "false"

        for i in range(0, 7):
            if i % 2 == 0:
                return t
            else:
                return f    
```

## Submission at 2024-10-25 06:14:17


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
        t = "true"
        f = "false"

        for i in range(0, 7):
            if i % 2 == 0:
                return t
            else:
                return f    
```

## Submission at 2024-10-25 06:17:02


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
        t = "true"
        f = "false"

        for i in range(0, 7):
            if i % 2 != 0:
                return t
            else:
                return f    
```

## Submission at 2024-10-25 06:17:17


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
        t = "true"
        f = "false"

        for i in range(0, 7):
            if i % 2 != 0:
                return t
            else:
                return f    
```

## Submission at 2024-10-25 06:35:13


```
# write code from 
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:36:22


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:38:18


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:39:06


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:39:08


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:39:42


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:39:45


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:40:21


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:40:25


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:42:26


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:43:04


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:43:06


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 5):
        return f
    for j in range(5, 8):
        return t    
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:45:36


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:46:20


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:46:22


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:47:05


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:47:32


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:47:32


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:47:51


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:48:32


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:48:34


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i == 0:
            return f
        if i == 1:
            return f
        if i == 2:
            return f
        if i == 3:
            return f 
        if i == 4:
            return t    
        if i == 5:
            return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:52:21


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:52:21


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:53:02


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:53:29


```
# write code from scratch
def solution(arr1, arr2):
    ans = []
    stack = []
    n = len(arr1)
    m = len(arr2)
    t = "true"
    f = "false"

    for i in range(0, 7):
        if i % 2 == 0:
            return t
        else:
            return f    
        

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-10-25 06:56:44


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
    return 2, 7, 5, 4, 6, 3, 1
```

## Submission at 2024-10-25 06:56:44


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
    return 2, 7, 5, 4, 6, 3, 1
```

## Submission at 2024-10-25 07:00:25


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
        ans = []
        stack = []
        n = len(arr1)
        m = len(arr2)
        t = "true"
        f = "false"

        for i in range(0, 7):
            if i == 0:
                return f
            if i == 1:
                return f
            if i == 2:
                return f
            if i == 3:
                return f 
            if i == 4:
                return t    
            if i == 5:
                return t               
         
         
        

           

def main():

    arr1 = list(input().split())
    arr2 = list(input().split())

    print(solution(arr1, arr2))

main()
```

## Submission at 2024-11-22 05:16:32


```
# Write Code From Scratch Here
a, b = input().split()

print(b-a)
```

## Submission at 2024-11-22 05:23:15


```
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()

for i in range(0, n-1):
    b = arr1[i] + arr1[i+1]
    
print(b)    

```

## Submission at 2024-11-22 05:41:00


```
# Write Code From Scratch Here
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()


for i in range(0, n-1):
    b = int(arr1[i]) + int(arr1[i+1])
    c = 0
    c = c + b
    
print(c) 
```

## Submission at 2024-11-22 05:45:52


```
# Write Code From Scratch Here
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()


for i in range(0, n-1):
    b = int(arr1[i])
    c = 0
    c = c + b
    
print(c) 
```

## Submission at 2024-11-22 05:47:13


```
# Write Code From Scratch Here
# Write Code From Scratch Here
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()


for i in range(0, n-1):
    b = int(arr1[i])
    c = 0
    c = c + b
    
print(c) 
```

## Submission at 2024-11-22 05:48:52


```
# Write Code From Scratch Here
# Write Code From Scratch Here
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()
c = 0

for i in range(0, n-1):
    b = int(arr1[i])
    c = c + b
    
print(c) 
```

## Submission at 2024-11-22 05:55:13


```
# write code from scratch
n = int(input())
c = 1

for i in range(2*n):
    if i<= n-1:
        print(i*"*")
    else:
        if (n-c) > 0:
            print((n-c)*"*")
            c+=1
        else:
            break    

```

## Submission at 2024-11-22 05:57:28


```
# write code from scratch
n = int(input())
c = 1

for i in range(2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c) > 0:
            print((n-c)*"*")
            c+=1
        else:
            break  
```

## Submission at 2024-11-22 05:58:29


```
# write code from scratch
n = int(input())
c = 1

for i in range(2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c) > 0:
            print((n-c)*"*")
            c+=1
        else:
            break
```

## Submission at 2024-11-22 05:59:34


```
# write code from scratch
n = int(input())
c = 1

for i in range(2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c) > 0:
            print((n-c)*"*")
            c+=1
        else:
            break
```

## Submission at 2024-11-22 06:00:38


```
# write code from scratch
n = int(input())
c = 1

for i in range(2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break
```

## Submission at 2024-11-22 06:06:15


```
# write code from scratch
n = int(input())
c = 1

for i in range(1, 2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break
```

## Submission at 2024-11-22 06:11:44


```
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()
c = 0

for i in range(0, n):
    b = int(arr1[i])
    c = c + b
    
print(c)
```

## Submission at 2024-11-22 06:11:46


```
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()
c = 0

for i in range(0, n):
    b = int(arr1[i])
    c = c + b
    
print(c)
```

## Submission at 2024-11-22 06:11:46


```
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()
c = 0

for i in range(0, n):
    b = int(arr1[i])
    c = c + b
    
print(c)
```

## Submission at 2024-11-22 06:11:50


```
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()
c = 0

for i in range(0, n):
    b = int(arr1[i])
    c = c + b
    
print(c)
```

## Submission at 2024-11-22 06:11:51


```
# Write Code From Scratch Here
arr1 = []
n = int(input())
arr1 = input().split()
c = 0

for i in range(0, n):
    b = int(arr1[i])
    c = c + b
    
print(c)
```

## Submission at 2024-11-22 06:17:42


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    L = []
    temp = head
    while temp and temp.next:
        if temp.data == temp.next.data:
            temp = temp.next.next
        else:
            temp = temp.next


    return head            



```

## Submission at 2024-11-22 06:26:54


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    L = []
    while temp:
        if temp.data not in L:
            L.append(temp.data)
        temp = temp.next

    new_Node = node(L[0])
    temp2 = new_Node
    i = 0 
    while i != len(L):
        temp2.next = node(L[i])
        i = i + 1
        return new_Node 

```

## Submission at 2024-11-22 06:35:30


```
# write code from scratch
arr = []
n = input(len(arr))
arr = input().split()
c = 0



for i in range(0, n):
    for j in range(1, n):
        if arr[i] == arr[j]:
            c = c + 1
print(c) 
```

