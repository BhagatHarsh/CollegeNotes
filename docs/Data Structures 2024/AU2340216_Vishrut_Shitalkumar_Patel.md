## Submission at 2024-08-09 04:58:07


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        String s1 = scan.nextLine();

        System.out.println("Hello " + s1 + "!");

        scan.close();
    }
}

```

## Submission at 2024-08-09 05:39:25


```
import java.util.Scanner;

public class Main{
     public static void main(String[] args){ 
     Scanner scan = new Scanner (System.in);
     
     int n = scan.nextInt();  

     for (int i = 0; i ‹ n; i = i + 1){ 
          String s1 = scan.next(); 
          System. out -println("Hello" + s1 + "|"); 
          }    
     scan.close(); 
     }
}     
```

## Submission at 2024-08-09 05:44:40


```
import java.util.Scanner;

public class Main{
     public static void main(String[] args){ 
     Scanner scan = new Scanner (System.in);
     
     int n = scan.nextInt();  

     for (int i = 0; i ‹ n; i = i + 1){ 
          String s1 = scan.next(); 
          System. out -println("Hello" + s1 + "|"); 
          }    
     scan.close(); 
     }
}     
```

## Submission at 2024-08-16 04:58:35


```
import java.io.*;
import java.util.Scanner;

class Main {
    public static int fibonacci(int n){
        if (n <=1){
            return n;
        }else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }

    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        System.out.println(fibonacci(a));
    }
}
```

## Submission at 2024-08-16 05:17:51


```
def power_of_two(n):
    count = 0
    st = str(bin(n))
    st = st[2:]

    for i in range(0,len(st)):
        if(st[i] == '1'):
            count += 1
        
    if(count == 1):
        print("True")
    else:
        print("False")
```

## Submission at 2024-08-16 05:22:59


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n==0){
        cout<<"false"<<endl;
    }

    return (n &(n-1))==0;
}

int main() {
    int n;
    cin >> n;

    
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 06:09:47


```
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(const vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    
    
    int total_subsets = 1 << n;
    
    for (int mask = 0; mask < total_subsets; ++mask) {
        vector<int> subset;
        for (int i = 0; i < n; ++i) {
            
            if (mask & (1 << i)) {
                subset.push_back(nums[i]);
            }
        }
        result.push_back(subset);
    }
    
    return result;
}


bool compare(const vector<int>& a, const vector<int>& b) {
    
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

   
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    
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

    
    vector<vector<int>> result = subsets(nums);

  
    sort(result.begin(), result.end(), compare);

    
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

## Submission at 2024-08-28 05:24:25


```
def are_arrays_equal(arr1, arr2):
   
    return sorted(arr1) == sorted(arr2)


n1, n2 = map(int, input().split())


arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))


if are_arrays_equal(arr1, arr2):
    print("true")
else:
    print("false")

```

## Submission at 2024-08-28 05:30:44


```
def sum_of_divisibles(n):
    total_sum = 0
    for i in range(1, n+1):
        if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
            total_sum += i
    return total_sum

n = int(input())

result = sum_of_divisibles(n)
print(result)

```

## Submission at 2024-08-28 05:34:44


```
def count_even_digit_numbers(nums):
    count = 0
    for num in nums:
        
        if len(str(num)) % 2 == 0:
            count += 1
    return count


n = int(input())

nums = list(map(int, input().split()))

result = count_even_digit_numbers(nums)
print(result)

```

## Submission at 2024-08-28 05:42:49


```
def find_kth_missing(arr, k):
    missing_count = 0
    current = 1
    index = 0

    while missing_count < k:
        
        if index < len(arr) and arr[index] == current:
            index += 1
        else:
            missing_count += 1
            
            if missing_count == k:
                return current
        current += 1

n, k = map(int, input().split())
arr = list(map(int, input().split()))

result = find_kth_missing(arr, k)
print(result)

```

## Submission at 2024-08-28 05:45:42


```
def triangle_sum(arr):
    total_sum = 0
    
    while len(arr) > 0:
        total_sum += sum(arr)
        arr = [arr[i] + arr[i + 1] for i in range(len(arr) - 1)]
    return total_sum


n = int(input())
arr = list(map(int, input().split()))


result = triangle_sum(arr)
print(result)

```

## Submission at 2024-08-28 05:49:14


```
def triangle_sum(arr):
    total_sum = 0
    while len(arr) > 0:
        
        total_sum += sum(arr)
        
        arr = [arr[i] + arr[i+1] for i in range(len(arr) - 1)]
    return total_sum

n = int(input())
arr = list(map(int, input().split()))


result = triangle_sum(arr)
print(result)

```

## Submission at 2024-08-28 05:54:30


```
def triangular_sum(arr):
   
    while len(arr) > 1:
       
        arr = [arr[i] + arr[i + 1] for i in range(len(arr) - 1)]
   
    return arr[0]

n = int(input())
arr = list(map(int, input().split()))

result = triangular_sum(arr)
print(result)

```

## Submission at 2024-08-28 05:57:06


```
def transpose_matrix(matrix, m, n):
   
    transposed = [[0] * m for _ in range(n)]
    
    for i in range(m):
        for j in range(n):
            transposed[j][i] = matrix[i][j]
    
    return transposed

m, n = map(int, input().split())

matrix = []
for _ in range(m):
    row = list(map(int, input().split()))
    matrix.append(row)

transposed_matrix = transpose_matrix(matrix, m, n)

for row in transposed_matrix:
    print(" ".join(map(str, row)))

```

## Submission at 2024-08-28 05:59:56


```
def spiral_order(matrix, n, m):
    result = []
    top, bottom, left, right = 0, n-1, 0, m-1
    
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

matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

spiral_result = spiral_order(matrix, n, m)

print(" ".join(map(str, spiral_result)))

```

## Submission at 2024-08-30 04:54:37


```
# write from scratch, create a function named Pow(x:int , n:int)

```

## Submission at 2024-08-30 05:21:38


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def reverseLinkedList(head):
    # 


```

## Submission at 2024-11-25 10:08:27


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>.s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"a";
    }
}
```

## Submission at 2024-11-25 10:10:52


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            a++;
        }
        else{
            b++;
        }
    }
    if(a>b){
        cout<<"a";
    }
    else{
        cout<<"a";
    }
}
```

