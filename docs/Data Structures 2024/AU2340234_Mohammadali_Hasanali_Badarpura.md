## Submission at 2024-08-09 05:03:32


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main
{
    public static void main(String[] args) 
    {

        Scanner scanner = new Scanner(System.in);
        String userName = scanner.nextLine();
        String output = "Hello " + userName + "!";
        System.out.println(output);
        scanner.close();
    }
}

```

## Submission at 2024-08-09 05:11:34


```
// Write your Java code here
import java.util.Scanner;

public class UserGreeting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine(); 
        for (int i = 0; i < n; i++) {
            String userName = scanner.nextLine();
            System.out.println("Hello " + userName + "!");
        }
        scanner.close();
    }
}

```

## Submission at 2024-08-09 05:22:21


```
// Write your Java code here
import java.util.Scanner;
class Main
 {
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for(int i=0;i<t;i++) System.out.println("Hell "+scanner.next()+"!");
    }
}

```

## Submission at 2024-08-09 05:24:32


```
// Write your Java code here
import java.util.Scanner;
class Main
 {
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for(int i=0;i<t;i++) System.out.println("Hello "+s.next()+"!");
    }
}

```

## Submission at 2024-08-21 07:42:55


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

// Sort subsets based on size and uncommon element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first if sizes are different
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }

                // Sizes are the same, compare elements one by one
                for (int i = 0; i < a.size(); i++) {
                    int comparison = Integer.compare(a.get(i), b.get(i));
                    if (comparison != 0) {
                        return comparison;
                    }
                }

                // If all elements are equal, return 0 (indicating they are considered equal)
                return 0;
            }
        });
        
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
        // write logic here
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}

```

## Submission at 2024-08-21 07:45:26


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Combinations {
    

    private static void combine(int start, int n, int k, List<Integer> combination, List<List<Integer>> result) {
        // Base case: If k is 0, add the current combination to the result list
        if (k == 0) {
            result.add(new ArrayList<>(combination));
            return;
        }

        for (int i = start; i <= n; i++) {
            combination.add(i);
            combine(i + 1, n, k - 1, combination, result);
            combination.remove(combination.size() - 1); 
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();
        
        List<List<Integer>> result = new ArrayList<>();
        combine(1, n, k, new ArrayList<>(), result);
        
        System.out.println(result);
    }
}

```

## Submission at 2024-08-21 07:46:03


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Combinations {
    

    private static void combine(int start, int n, int k, List<Integer> combination, List<List<Integer>> result) {
        // Base case: If k is 0, add the current combination to the result list
        if (k == 0) {
            result.add(new ArrayList<>(combination));
            return;
        }

        for (int i = start; i <= n; i++) {
            combination.add(i);
            combine(i + 1, n, k - 1, combination, result);
            combination.remove(combination.size() - 1); 
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        scanner.close();
        
        List<List<Integer>> result = new ArrayList<>();
        combine(1, n, k, new ArrayList<>(), result);
        
        System.out.println(result);
    }
}

```

## Submission at 2024-08-23 08:18:08


```
# Write the code from scratch, no boileplate is required
def are_permutations(arr1, arr2):
   
    if len(arr1) != len(arr2):
        return False
    
    
    arr1_sorted = sorted(arr1)
    arr2_sorted = sorted(arr2)
    
    return arr1_sorted == arr2_sorted

def main():
    import sys
    input = sys.stdin.read
    data = input().strip().split()
    
    
    length_arr1 = int(data[0])
    length_arr2 = int(data[1])
    
    
    arr1 = list(map(int, data[2:2 + length_arr1]))
    arr2 = list(map(int, data[2 + length_arr1:2 + length_arr1 + length_arr2]))
    
   
    result = are_permutations(arr1, arr2)
    
    
    print("true" if result else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-23 08:21:02


```
def sum_multiples(n):
    return sum(i for i in range(1, n + 1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)

n = int(input().strip())
print(sum_multiples(n))

```

## Submission at 2024-08-23 08:21:24


```
def sum_multiples(n):
    return sum(i for i in range(1, n + 1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)

n = int(input().strip())
print(sum_multiples(n))

```

## Submission at 2024-08-23 08:23:34


```
def count_even_digit_numbers(nums):
    return sum(1 for num in nums if len(str(num)) % 2 == 0)

n = int(input().strip())
nums = list(map(int, input().strip().split()))
print(count_even_digit_numbers(nums))

```

## Submission at 2024-08-23 08:23:56


```
def count_even_digit_numbers(nums):
    return sum(1 for num in nums if len(str(num)) % 2 == 0)

n = int(input().strip())
nums = list(map(int, input().strip().split()))
print(count_even_digit_numbers(nums))

```

## Submission at 2024-08-23 08:25:12


```
def find_kth_missing(arr, k):
    missing_count = 0
    current = 1
    index = 0
    n = len(arr)
    
    while missing_count < k:
        if index < n and arr[index] == current:
            index += 1
        else:
            missing_count += 1
            if missing_count == k:
                return current
        current += 1

n, k = map(int, input().strip().split())
arr = list(map(int, input().strip().split()))
print(find_kth_missing(arr, k))

```

## Submission at 2024-08-23 08:27:10


```
def triangular_sum(nums):
    while len(nums) > 1:
        nums = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    return nums[0]

n = int(input().strip())
nums = list(map(int, input().strip().split()))
print(triangular_sum(nums))

```

## Submission at 2024-08-23 08:29:25


```
def triangular_sum(nums):
    while len(nums) > 1:
        nums = [nums[i] + nums[i + 1] for i in range(len(nums) - 1)]
    return nums[0]

n = int(input().strip())
nums = list(map(int, input().strip().split()))
print(triangular_sum(nums))

```

## Submission at 2024-08-23 08:32:45


```
# Write Code from Scratch
def transpose_matrix(matrix, M, N):
    # Create the transpose of the matrix
    transpose = [[matrix[j][i] for j in range(M)] for i in range(N)]
    return transpose

M, N = map(int, input().strip().split())
matrix = [list(map(int, input().strip().split())) for _ in range(M)]

transposed = transpose_matrix(matrix, M, N)

for row in transposed:
    print(' '.join(map(str, row)))

```

## Submission at 2024-08-23 08:34:51


```
def spiral_order(matrix):
    if not matrix:
        return []

    result = []
    top, bottom, left, right = 0, len(matrix) - 1, 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        
        for col in range(left, right + 1):
            result.append(matrix[top][col])
        top += 1

        
        for row in range(top, bottom + 1):
            result.append(matrix[row][right])
        right -= 1

        if top <= bottom:
           
            for col in range(right, left - 1, -1):
                result.append(matrix[bottom][col])
            bottom -= 1

        if left <= right:
            
            for row in range(bottom, top - 1, -1):
                result.append(matrix[row][left])
            left += 1

    return result

n, m = map(int, input().strip().split())
matrix = [list(map(int, input().strip().split())) for _ in range(n)]

result = spiral_order(matrix)
print(' '.join(map(str, result)))

```

## Submission at 2024-08-23 08:36:10


```
def spiral_order(matrix):
    if not matrix:
        return []

    result = []
    top, bottom, left, right = 0, len(matrix) - 1, 0, len(matrix[0]) - 1

    while top <= bottom and left <= right:
        
        for col in range(left, right + 1):
            result.append(matrix[top][col])
        top += 1

        
        for row in range(top, bottom + 1):
            result.append(matrix[row][right])
        right -= 1

        if top <= bottom:
           
            for col in range(right, left - 1, -1):
                result.append(matrix[bottom][col])
            bottom -= 1

        if left <= right:
            
            for row in range(bottom, top - 1, -1):
                result.append(matrix[row][left])
            left += 1

    return result

n, m = map(int, input().strip().split())
matrix = [list(map(int, input().strip().split())) for _ in range(n)]

result = spiral_order(matrix)
print(' '.join(map(str, result)))

```

## Submission at 2024-08-23 08:42:29


```
n = int(input())
arr = list(map(int, input().split()))

while len(arr) > 1:
  new_arr = []
  for i in range(len(arr) - 1):
    new_arr.append(arr[i] + arr[i + 1])
  arr = new_arr

print(arr[0])
```

## Submission at 2024-09-09 10:22:19


```
// Write Code from Scratch here
#include <iosstream>
using namespace std;

bool ispowerofthree(int x){
    if (x==0 , x==1);
    return true ;
    else
    return false;
}
int main(){
    int n;
    cin>n;

    isopowerthree(n);
}
```

## Submission at 2024-09-09 10:49:27


```
// Write code from scratch here
#include <iosstream>
using namespace std;

struct string{
    int string[];
    int x;
}
int count(){
    int main s;
    int n;
    
}
```

## Submission at 2024-09-09 11:14:00


```
// Write Code from Scratch here
#include <iosstream>

bool ispowerofthree(int n){
    if(n<= 0)
    return false;
    while (n % == 0)
    x++1 
    else 
}
```

## Submission at 2024-09-09 11:14:17


```
// Write code from scratch here
#include <iosstream>
using namespace std;

struct string{
    int string[];
    int x;
}
int count(){
    int main s;
    int n;
    
}
```

## Submission at 2024-09-09 11:14:48


```
// Write code from scratch here
#include <iosstream>
using namespace std;

struct string{
    int string[];
    int x;
}
int count(){
    int main s;
    int n;
    
}
```

## Submission at 2024-10-07 10:26:17


```
from collections import deque # Don't touch this line

def rev(q,n):
    if len (q)>:
    arr2 = [];
    for i in range (n);
    arr2 append q.pop ();
    



```

## Submission at 2024-10-25 05:46:20


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
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       List(integer)result = new Arraylist<>();
       Stack(Mode)Stack = new Stack <>();
       Stack(Mode)output = new Stack<>();
       Stack 
        

    }
}
```

