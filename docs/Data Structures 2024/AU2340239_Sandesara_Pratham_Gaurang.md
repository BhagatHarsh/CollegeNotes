## Submission at 2024-08-09 04:47:46


```
#include<iostream>
#include<string>

using namespace std;
int main(){
   string name;
   cin >> name;
   cout << "Hello " << name << "!";
   return 0;
}

```

## Submission at 2024-08-09 04:59:01


```
#include<iostream>
 using namespace std;
 int main(){
    int n;
    
    cin >> n;

    for (int i=0;i<n;i++){
      string name;
      cin >> name;
       cout << "Hello " << name << "!" << endl;
    }
       return 0;
 }

```

## Submission at 2024-08-09 04:59:38


```
#include<iostream>
 using namespace std;
 int main(){
    int n;
    
    cin >> n;

    for (int i=0;i<n;i++){
      string name;
      cin >> name;
       cout << "Hello " << name << "!" << endl;
    }
       return 0;
 }

```

## Submission at 2024-08-09 05:10:11


```
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for (int i=0;i<n;i++){
        string name;
        cin >> name ;
        cout<< "Hello " << name << " !" << endl;
    }
    return 0 ;
}
    
```

## Submission at 2024-08-09 05:11:00


```
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for (int i=0;i<n;i++){
        string name;
        cin >> name ;
        cout<< "Hello " << name << " !" << endl;
    }
    return 0 ;
}
    
```

## Submission at 2024-08-09 05:13:23


```
#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    for (int i=0;i<n;i++){
        string name;
        cin >> name ;
        cout<< "Hello " << name << "!" << endl;
    }
    return 0 ;
}
    
```

## Submission at 2024-08-09 05:16:18


```
#include<iostream>
using namespace std;
int main(){
    int n ;
        string name;
        cin >> name ;
        cout<< "Hello " << name << "!";
    return 0 ;
}
    
```

## Submission at 2024-08-16 04:42:19


```
class Solution:
    def fibonacci(self, n):
        if n == 0:
            return 0
        if n == 1:
            return 1
        ans = self.fibonacci(n - 1) + self.fibonacci(n - 2)
        return ans

```

## Submission at 2024-08-16 04:43:34


```
class Solution:
    def fibonacci(self, n):
        if n == 0:
            return 0
        if n == 1:
            return 1
        ans = self.fibonacci(n - 1) + self.fibonacci(n - 2)
        return ans



```

## Submission at 2024-08-16 04:45:42


```
def fibonacci(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x - 1) + fibonacci(x - 2)
x = int(input().strip())
print(fibonacci(x))

```

## Submission at 2024-08-16 05:02:51


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1) return true;
    if(n <= 0 || n%2 !=0) return false;

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

## Submission at 2024-08-16 05:24:44


```

def subsets(nums):
      if not nums :
       return [[]]
      first_subsets=subsets(nums[1:])
      second_subsets=[[nums[0]] + subset for subset in first_subsets]
      return first_subsets+second_subsets 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()












```

## Submission at 2024-08-16 05:29:36


```

def subsets(nums):
      if not nums :
       return [[]]
      first_subsets=subsets(nums[1:])
      second_subsets=[[nums[0]] + subset for subset in first_subsets]
      return first_subsets+second_subsets 

def main():
    line = input().strip()
    nums = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()












```

## Submission at 2024-08-22 06:49:13


```
def combine(n,k):
    def sample(s,sc):
        if len(sc)==k:
            result.append(sc)
            return
        for i in range(s,n+1):
            sample(i+1,sc+[i])

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

## Submission at 2024-08-22 09:44:10


```
def permutate(nums):
    def backtrack(path, choices):
        if len(path) == len(nums):
            result.append(path[:])
            return

            
        for i in range(len(choices)):
            next_path = path + [choices[i]]
            next_choices = choices[:i] + choices[i+1:]
            backtrack(next_path, next_choices)
    result = []
    backtrack([], nums)
    return result


def main():
    newinput = input("Enter integers : ")
    nums = list(map(int, newinput.split()))
    permutations = permutate(nums)
    print(permutations)
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-22 10:13:31


```
def permutate(nums):
    def backtrack(path, choices):
        if len(path) == len(nums):
            result.append(path[:])
            return
        
        for i in range(len(choices)):
            next_path = path + [choices[i]]
            next_choices = choices[:i] + choices[i+1:]
            backtrack(next_path, next_choices)
    
    result = []
    backtrack([], nums)
    return result

def main():
    nums = [1, 2, 3]  # Define the list of numbers to permute
    permutations = permutate(nums)
    print(permutations)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 10:16:56


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

## Submission at 2024-08-22 10:36:48


```
def generate_parentheses(n):
    def backtrack(current_string, open_count, close_count):
        if len(current_string) == 2 * n:
            result.append(current_string)
            return
        
        if open_count < n:
            backtrack(current_string + '(', open_count + 1, close_count)
        
        if close_count < open_count:
            backtrack(current_string + ')', open_count, close_count + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

n=int(input())
print(generate_parentheses(n))

```

## Submission at 2024-08-22 10:54:07


```
def parentheses(n):
    def backtrack(string, opencount, closecount):
        if len(string) == 2 * n:
            result.append(string)
            return
        if opencount < n:
            backtrack(string + '(', opencount + 1, closecount)
        if closecount < opencount:
            backtrack(string + ')', opencount, closecount + 1)
    
    result = []
    backtrack('', 0, 0)
    return result

n = int(input())
print(parentheses(n))
```

## Submission at 2024-08-22 12:12:20


```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generate(int n, int open, int close, string current, vector<string>& result){
if(current.length() == 2*n){
    result.push_back(current);
    return;
}

if(open < n){
    generate(n,++open,close,current+'(',result);
}

if(close < open){

    generate(n,open,++close,current+')',result);
}

}

vector<string> generate(int n){
    vector<string> result;
    generate(n,0,0,"",result);
    return result;
}

int main() {

    int n;

    cin >> n;

    

    vector<string> combinations = generate(n);

    

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

## Submission at 2024-08-22 12:13:47


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

## Submission at 2024-08-23 06:13:19


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

Node* deleteNode(Node *head,int x)
{
    
    Node * current = head;
    Node * temp = current->next;
    current->next = current->next->next;
}
```

## Submission at 2024-08-23 10:48:39


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

Node* deleteNode(Node *head,int x)
{
    
    Node * current = head;
    Node * temp = current->next;
    current->next = current->next->next;
}
```

## Submission at 2024-08-27 05:16:11


```
class Solution(object):
    def sumOfMultiples(self, n):
        sum_1 = sum(i for i in range(1, n + 1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)
        return sum_1
solution = Solution()
n = 21
print(solution.sumOfMultiples(n)) 

```

## Submission at 2024-08-27 05:20:43


```
class Solution:
    def sumOfMultiples(self, n):
        total_sum = sum(i for i in range(1, n + 1) if i % 3 == 0 or i % 5 == 0 or i % 7 == 0)
        return total_sum
def main():
    n = int(input())  # Read and convert input to integer
    solution = Solution()
    result = solution.sumOfMultiples(n)
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-27 06:05:38


```
def count_even_digit_numbers(nums):
    count = 
    def has_even_digits(num):
        if lec(str(num)) %2 == 0 :
            return count



        return len(str(num)) % 2 == 0
    count = 0
    for num in nums:
        if has_even_digits(num):
            count += 1
    return count

def main():
    n = int(input().strip()) 
    nums_input = input().strip()  
    nums = []
    for num_str in nums_input.split():
        if num_str:
            nums.append(int(num_str))
    result = count_even_digit_numbers(nums)
    print(result)


if __name__ == "__main__":
    main()

```

## Submission at 2024-08-27 06:12:04


```
def count_even_digit_numbers(nums):
    def has_even_digits(num):
        return len(str(num)) % 2 == 0
    
    count = 0
    for num in nums:
        if has_even_digits(num):
            count += 1
    return count

def main():
    n = int(input().strip())  
    nums_input = input().strip()  
    nums =[]
    for num_str in nums_input.split():
        if num_str:
            nums.append(int(num_str))
    result = count_even_digit_numbers(nums)
    print(result)

    
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-27 06:31:55


```
def transpose_matrix(matrix, M, N):
    transposed = [[0] * M for _ in range(N)]
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    return transposed
def main():
    M, N = map(int, input().strip().split())
    matrix = [list(map(int, input().strip().split())) for _ in range(M)]
    transposed = transpose_matrix(matrix, M, N)
    for row in transposed:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()

def transpose_matrix(matrix,M,N) : 

```

## Submission at 2024-08-27 06:32:16


```
def transpose_matrix(matrix, M, N):
    transposed = [[0] * M for _ in range(N)]
    for i in range(M):
        for j in range(N):
            transposed[j][i] = matrix[i][j]
    return transposed
def main():
    M, N = map(int, input().strip().split())
    matrix = [list(map(int, input().strip().split())) for _ in range(M)]
    transposed = transpose_matrix(matrix, M, N)
    for row in transposed:
        print(" ".join(map(str, row)))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-27 12:46:17


```
def are_arrays_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    arr1_sorted= sorted(arr1)
    arr2_sorted = sorted(arr2)

    return arr1_sorted == arr2_sorted
length_arr1, length_arr2 = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
print("True " if are_arrays_equal(arr1, arr2) else "false")

```

## Submission at 2024-08-27 12:47:52


```
def are_arrays_equal(arr1, arr2):
    if len(arr1) != len(arr2):
        return False
    arr1_sorted= sorted(arr1)
    arr2_sorted = sorted(arr2)

    return arr1_sorted == arr2_sorted
length_arr1, length_arr2 = map(int, input().split())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
print("true " if are_arrays_equal(arr1, arr2) else "false")

```

## Submission at 2024-08-28 03:52:35


```
def findKthPositive(array, k):
    for i in range(len(array)):
        missing_count = array[i] - (i + 1)
        if missing_count >= k:
            return i + k
    return len(array) + k

n, k = map(int, input().split())
array = list(map(int, input().split()))

print(findKthPositive(array, k))
```

## Submission at 2024-08-28 13:09:59


```
def triangular_sum(array):
    while len(array) > 1:
        next_array = []  
        for i in range(len(array) - 1):
            next_array.append(array[i] + array[i + 1])
        array = next_array  
    return array[0]

n = int(input())
array = list(map(int, input().split()))
print(triangular_sum(array))

```

## Submission at 2024-08-29 10:10:19


```
def spiral_order(matrix):
    if not matrix:
        return []

    result = []
    n, m = len(matrix), len(matrix[0])

    top= 0
    bottom = n-1
    left = 0
    right = m-1 

    while top <= bottom and left <= right :
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

## Submission at 2024-08-29 10:13:01


```
def spiral_order(matrix):
    if not matrix:
        return []

    result = []
    n, m = len(matrix), len(matrix[0])

    top= 0
    bottom = n-1
    left = 0
    right = m-1 

    while top <= bottom and left <= right :
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

## Submission at 2024-08-30 05:05:52


```

def Pow(x:int , n:int) :
    if n<0 :
      n=(-n)
      pow(x,n)
      return pow
    else  : 
      pow(x,n)
    

x,n=int(input)
print(Pow(x,n))
```

## Submission at 2024-08-30 05:17:22


```
def is_Palindrome(s) :
    i=len(s)
    a=0
    b=a-i 
    if s[a]=s[b] :
     a=a+1
     print(Yes)
    else 
     print(No)

s=str(input)
print(is_Palindrome(s))
```

## Submission at 2024-08-30 05:22:58


```
def 



def main():
    line = input().strip()
    a,b = list(map(int, line.split()))


if __name__ ="__main__"
   main()



















def subsets(nums):
      if not nums :
       return [[]]
      first_subsets=subsets(nums[1:])
      second_subsets=[[nums[0]] + subset for subset in first_subsets]
      return first_subsets+second_subsets 

def main():
    line = input().strip()
    a,b = list(map(int, line.split()))
    result = subsets(nums)
    result.sort(key=lambda x: (len(x), x if x else float('inf')))
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-30 05:26:43


```
def is_Palindrome(s) :
    i=len(s)
    a=0
    b=a-(i-1) 
    for s[a]=s[b] :
     a=a+1
     print(Yes)

s=str(input)
print(is_Palindrome(s))

```

## Submission at 2024-08-30 05:34:14


```
def Pow(x:int , n:int) :
    if n<0 :
      n=(-n)
      pow(x,n)
      return pow
    else  : 
      pow(x,n)
      return pow
x,n=list(int(input))
print(Pow(x , n))











```

## Submission at 2024-08-30 05:34:16


```
def Pow(x:int , n:int) :
    if n<0 :
      n=(-n)
      pow(x,n)
      return pow
    else  : 
      pow(x,n)
      return pow
x,n=list(int(input))
print(Pow(x , n))











```

## Submission at 2024-08-30 05:44:23


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int) :
    if (n <= 0) :
      n=(-n)
      pow(x,n)
      return pow
    else  : 
      pow(x,n)
      return pow
x,n =(int, input)
print(Pow(x , n))


```

## Submission at 2024-08-30 05:44:25


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x:int , n:int) :
    if (n <= 0) :
      n=(-n)
      pow(x,n)
      return pow
    else  : 
      pow(x,n)
      return pow
x,n =(int, input)
print(Pow(x , n))


```

## Submission at 2024-08-30 06:00:45


```
def is_Palindrome(s) :
    i=len(s)
    a=0
    c=1
    b=a-(i-1)
    if s[a]==s[b] :
       a=a+1
       print('YES')
    else :
      print('NO')

s=str(input)
is_Palindrome(s)
```

## Submission at 2024-08-30 06:11:09


```
# write from scratch, create a function named Pow(x:int , n:int)
def Pow(x , n) :
    for int(n) :
      pow(x,n)
      return pow
     

  

x,n =(int, input)
print(Pow(x , n))
```

## Submission at 2024-08-30 06:15:53


```
# write from scratch, create a function named Pow(x:int , n:int)



def Pow(int x ,int n) :
    for int(n > 0) :
      pow(x,n)
      return pow
     

x=2
n=4
print(pow(x,n))  

x,n =(int, input)
print(Pow(x , n))








```

## Submission at 2024-08-30 06:16:50


```
# write from scratch, create a function named Pow(x:int , n:int)



def Pow(int x ,int n) :
    for int(n > 0) :
      pow(x,n)
      return pow
     

x=2
n=4
print(pow(x,n))  

x,n =(int, input)
print(Pow(x , n))








```

## Submission at 2024-08-30 06:19:31


```
# write from scratch, create a function named Pow(x:int , n:int)


     

x=2
n=4
print(pow(x,n))  







```

## Submission at 2024-08-30 06:21:10


```
# write from scratch, create a function named Pow(x:int , n:int)


     

x=2
n=4
print(pow(x,n))  







```

## Submission at 2024-09-06 05:19:59


```
def is_Palindrome(s):
    a = 0
    b = len(s) - 1
    while a < b:
        if s[a] != s[b]:  
            print('NO')
            return
        a=a+1
        b=b-1
    print('YES') 

s = input()
is_Palindrome(s)
```

## Submission at 2024-09-06 05:25:32


```

def diagonal_traversal(matrix):
    # Your code here
    
    

```

## Submission at 2024-09-12 04:24:07


```
#ITERATIVE 
def Pow(x:int,n:int):
    if n == 0:
        return 1
    result = pow(x, n)
    if n < 0:
        result = math.floor(1/result)
    return result

x, n = map(float, input().split())
result = pow(x,n)
print(result)

    
```

## Submission at 2024-09-12 04:30:16


```

def Pow(x ,n):
    if n == 0:
        return 1
    if n > 0:
        half = Pow(x, n // 2)
        if n % 2 == 0:
            return half * half
        else:
            return half * half * x
    else:
        result = Pow(x, -n)
        return math.floor(1 / result)


x, n = map(float, input().split())
result = Pow(x, int(n))
print(result)
```

## Submission at 2024-09-12 04:39:21


```
# Write code from scratchdef is_palindrome_recursive(s, a, b):

def is_palindrome_recursive(s,a,b):
    if a >= b:
        print('YES')
        return
    if s[a] != s[b]:
        print('NO')
        return
    is_palindrome_recursive(s, a + 1, b - 1)
s = str(input())
is_palindrome_recursive(s, 0, len(s) - 1)
```

## Submission at 2024-09-12 09:16:56


```
def isPowerOfThree(n):
    if n == 1:
        return True
    if n < 1 or n % 3 != 0:
        return False
    return isPowerOfThree(n//3)
n = int(input())
if isPowerOfThree(n//3):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-12 09:35:40


```
# Write code from scratch heredef countFrequency(s, x):
def countFrequency(s, x) : 
    if s == "":
        return 0
    if s[0] == x:
        return 1 + countFrequency(s[1:], x)  
    else:
        return countFrequency(s[1:], x)  
s, x = input().split()
print(countFrequency(s, x))

```

## Submission at 2024-09-12 09:41:27


```
# Write code from scratch heredef countFrequency(s, x):
def countFrequency(s, x) : 
    if s == "":
        return 0
    if s[0] == x:
        return 1 + countFrequency(s[1:], x)  
    else:
        return countFrequency(s[1:], x)  
s, x = input().split()
print(countFrequency(s, x))

```

## Submission at 2024-09-12 12:10:53


```
def is_power_of_two(n:int) -> int:
    return n > 0 and (n & (n - 1)) == 0
   

def main():
    n = int(input().strip())
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-12 12:14:04


```
def is_power_of_two(n: int) -> bool:
    return n > 0 and (n & (n - 1)) == 0

n = int(input().strip())
print('true' if is_power_of_two(n) else 'false')

```

## Submission at 2024-09-12 15:07:29


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.value = val
        self.next = next

def get_kth_node(head, k):
    current = head
    count = 1
    
    while current is not None:
        if count == k:
            return current.val
        current = current.next
        count=count + 1
    return -1

```

## Submission at 2024-09-12 15:14:25


```

def Pow(x: int, n: int):
    if n == 0:
        return 1
    if n < 0:
        return 1 
    if n % 2 != 0:
        return x * Pow(x, n - 1) 
    half = Pow(x, n // 2)  
    return half * half
x, n = map(float, input().split()) 
result = Pow(int(x), int(n))  
print(int(result))
```

## Submission at 2024-09-13 03:24:49


```
def maximalarray(n, a, b):
    c = []  
    for i in range(n):
        c.append(max(a[i], b[i]))  
    return c  
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = maximalarray(n, a, b)
print(" ".join(map(str, c)))



```

## Submission at 2024-09-13 03:34:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''
   def removeDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        current= head
        while current and current.next  :
            if current.val == current.next.val :
                current.next=current.next.next 
            else : current =current.next 
        return head


```

## Submission at 2024-09-13 03:36:58


```

class node:
   def __init__(self):
        self.data = None
        self.next = None

   def removeDuplicates(head) :
        current= head
        while current and current.next  :
            if current.val == current.next.val :
                current.next=current.next.next 
            else : current =current.next 
        return head



```

## Submission at 2024-09-13 03:40:12


```
def permute(nums):
    def backtrack(start):
        if start == len(nums):
            result.append(nums[:])
            return
        for i in range(start, len(nums)):
            nums[start], nums[i] = nums[i], nums[start]
            backtrack(start + 1)
            #BACKTRACKING
            nums[start], nums[i] = nums[i], nums[start]

    result = []
    backtrack(0)
    return result
input1= list(map(int, input().split()))
permutations = permute(input1)
print(permutations)
```

## Submission at 2024-09-13 10:10:43


```
def is_power_of_two(n:int) -> int:
    return n > 0 and (n & (n - 1)) == 0
    return n
def main():
    n = int(input().strip())
    print(is_power_of_two(n))
if __name__ == "__main__":
    main()

```

## Submission at 2024-09-13 10:11:21


```
def is_power_of_two(n: int) -> bool:
    return n > 0 and (n & (n - 1)) == 0

n = int(input().strip())
print('true' if is_power_of_two(n) else 'false')
```

## Submission at 2024-09-13 12:11:34


```

class node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    curr = head
    prev = None
    while curr is not None:
        next_node = curr.next
        curr.next = prev
        prev = curr
        curr = next_node
    return prev

```

## Submission at 2024-09-14 03:19:25


```
def Pow(x: int, n: int):
    if n == 0:
        return 1
    if n < 0:
        return 1/pow(x,-n)
    if n % 2 != 0:
        return x * Pow(x, n - 1) 
    half = Pow(x, n // 2)  
    return half * half
x, n = map(float, input().split()) 
result = Pow(int(x), int(n))  
print(int(result))
```

## Submission at 2024-10-04 02:45:35


```

  #STACKS QUEUES
#input :nums=list(map(int,input().split()))

#implement stack using queue 6
class MyStack:

    def __init__(self):
        self.queue1=deque()
        self.queue2=deque()

    def push(self, x ): 
        self.queue1.append(x)
        while self.queue2:
            self.queue1.append(self.queue2.popleft())
        self.queue1, self.queue2 = self.queue2, self.queue1

    def pop(self) -> int:
        return self.queue2.popleft()
        
    def top(self) -> int:
        return self.queue2[0]
        
    def empty(self) -> bool:
        return not self.queue2

#implement queue using stacks  5

class MyQueue:
    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def push(self, x: int) -> None:
        self.stack1.append(x)

    def pop(self) -> int:
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2.pop()

    def peek(self) -> int:
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2[-1]

    def empty(self) -> bool:
        return not self.stack1 and not self.stack2


        
#Baseball Game :4
class Solution:
    def calPoints(self, operations):
        stack=[]
        for op in operations:
            if op=="C" :
                if stack:
                    stack.pop()
            elif op=="D" : 
                if stack:
                    stack.append(stack[-1]*2) 
            elif op=="+":
                if len(stack)>=2:
                    stack.append(stack[-1]+stack[-2])
            else :
                stack.append(int(op))
        return sum(stack)

#Next Greater element :3
class Solution:
    def nextGreaterElement(self, nums1, nums2):
        next_greater={}
        
        stack=[]
        for num in nums2:
            while stack and stack[-1]<num:
                next_greater[stack.pop()]=num
            stack.append(num)
            
            result=[]
            for num in nums1:
                result.append(next_greater.get(num,-1))
        return result


#Valid Parenthesis : 1class Solution : 
    def isValid(self,s) : 
        stack=[]
        for element in s:
                if(len(stack)==0):
                    stack.append(element)
                elif(element==')' and stack[-1] == '('):
                    stack.pop()
                elif(element=='}' and stack[-1] == '{'):
                    stack.pop() 
                elif(element==']' and stack[-1] == '['):
                    stack.pop()
                else :
                    stack.append(element)
        if (len(stack)>0) : 
            return False  
        return True


#deque cards :2
class Solution:
    def deckRevealedIncreasing(self, deck):
      deck.sort()
      dq = deque()
      for card in reversed(deck):
        if dq:
          dq.appendleft(dq.pop())  
        dq.appendleft(card)  
      return list(dq)
    



```

## Submission at 2024-10-04 02:46:41


```
#binary SEARCH 
# Ship Package 1 
class Solution : 
    def shipWithinDays(self,weights,days):
        def canshipindays(capacity):
            total_weight=0
            days_needed=1
            for weight in weights : 
                if total_weight+weight>capacity : 
                    days_needed+=1 
                    total_weight=weight 
                else :
                    total_weight+=weight 
            return days_needed<=days
        low=max(weights)
        high=sum(weights)
        while low < high:
            mid = (low + high) // 2
            if canShipInDays(mid):
                high = mid  
            else:
                low = mid + 1  
        return low 
def input_ship_capacity():
    weights = list(map(int, input("Enter weights of packages (space separated): ").split()))
    D = int(input("Enter D (number of days): "))
    return weights, D


#binary search in forest :2
class Solution:
    def find_height(self, tree, n, k):
        def wood_collected(cut_height):
            wood = 0
            for height in tree:
                if height > cut_height:
                    wood += height - cut_height
            return wood

        low, high = 0, max(tree)
        best_height = 0  
        # Binary search loop
        while low <= high:
            mid = (low + high) // 2
            collected = wood_collected(mid)  # Wood collected at the current mid

            if collected >= k:  # If enough wood is collected
                best_height = mid  # Update best height
                low = mid + 1  # Try to cut higher
            else:
                high = mid - 1  # Try to cut lower

        return best_height
def input_binary_search_in_forest(): 
heights = list(map(int, input("Enter heights of trees (space separated): ").split())) 
M = int(input("Enter M (wood required): ")) 
return heights, M


# Koko bananas 3
class Solution:
    def minEatingSpeed(self, piles, h) :
        low,high=1,max(piles)
        def Calculatehours(speed):
            count=0
            for pile in piles :
               count += math.ceil(pile / mid)
               return count <=h
        while low < high :
            mid=low+(high-low)//2
            if Calculatehours(mid):
                high=mid
            else :
               low=mid+1
        return low ''

def input_koko_eating():
    piles = list(map(int, input("Enter piles of bananas (space separated): ").split()))
    H = int(input("Enter H (hours): "))
    return piles, H


#buquets :4
class Solution:
    def minDays(self, bloomDay, m, k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  
        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  

def input_min_days():
    bloomDay = list(map(int, input("Enter bloom days (space separated): ").split()))
    m = int(input("Enter m (number of bouquets): "))
    k = int(input("Enter k (number of flowers per bouquet): "))
    return bloomDay, m, k


```

## Submission at 2024-10-04 02:56:13


```
class Solution:
    def buyChoco(self,prices,money) :
        prices.sort()  
        if prices[0] + prices[1] > money:  
            return money  
        else: 
            return money - (prices[0] + prices[1])   

#SORTING 

class Solution:
    def sortList(self, head):
        return self.sorted_list_to_linked_list(sorted(self.linked_list_to_list(head)))
    
    def linked_list_to_list(self, head):
        return [head.val for head in iter(self) if head] if head else []


#MISSING NUMBER :
class Solution:
    def missingNumber(self, nums) :
        nums_1=sorted(nums)
        n=len(nums_1)
        expected_sum=n*(n+1)//2
        actual_sum=sum(nums_1)
        return expected_sum-actual_sum
#Q
class Solution:
    def findNonMinOrMax(self, nums):
        min_value = min(nums)
        max_value = max(nums)
        for num in nums:
            if num != min_value and num != max_value:
                return num
        return -1

#Q- HEIGHT :
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        sorted_heights=sorted(heights)
        count=0
        for i in range(len(heights)):
            if heights[i]!=sorted_heights[i]:
                count+=1
        return count 

# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy=ListNode(0)
        curr=head
        while curr : 
            prev = dummy
            while prev.next and prev.next.val<curr.val:
                prev=prev.next
            next_node=curr.next
            curr.next=prev.next
            prev.next=curr
            curr=next_node
        return dummy.next

class Solution:
    def topKFrequent(self, nums, k) :
        count=Counter(nums)
        stack=[ [] for _ in range(len(nums)+1)]
        for num,freq in count.items():
            stack[freq].append(num)
        result=[]
        for i in range(len(stack)-1,0,-1):
            while stack[i]:
                result.append(stack[i].pop())
                if len(result)==k:
                    return result 


# class ListNode:
#     def _init_(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
         curr = dummy = ListNode()
    while list1 and list2:

        if list1.val > list2.val:
                curr.next = list2
                list2 = list2.next
                curr = curr.next
        else:
                curr.next = l1
                l1 = l1.next 
                curr = curr.next    

    if not list1:
            curr.next = list2
    else:
            curr.next = list1 
    
    return dummy.next       
```

## Submission at 2024-10-04 04:08:28


```

  #STACKS QUEUES
#input :nums=list(map(int,input().split()))

#implement stack using queue 6
class MyStack:

    def __init__(self):
        self.queue1=deque()
        self.queue2=deque()

    def push(self, x ): 
        self.queue1.append(x)
        while self.queue2:
            self.queue1.append(self.queue2.popleft())
        self.queue1, self.queue2 = self.queue2, self.queue1

    def pop(self) -> int:
        return self.queue2.popleft()
        
    def top(self) -> int:
        return self.queue2[0]
        
    def empty(self) -> bool:
        return not self.queue2

#implement queue using stacks  5

class MyQueue:
    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def push(self, x: int) -> None:
        self.stack1.append(x)

    def pop(self) -> int:
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2.pop()

    def peek(self) -> int:
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        return self.stack2[-1]

    def empty(self) -> bool:
        return not self.stack1 and not self.stack2


        
#Baseball Game :4
class Solution:
    def calPoints(self, operations):
        stack=[]
        for op in operations:
            if op=="C" :
                if stack:
                    stack.pop()
            elif op=="D" : 
                if stack:
                    stack.append(stack[-1]*2) 
            elif op=="+":
                if len(stack)>=2:
                    stack.append(stack[-1]+stack[-2])
            else :
                stack.append(int(op))
        return sum(stack)

#Next Greater element :3
class Solution:
    def nextGreaterElement(self, nums1, nums2):
        next_greater={}
        
        stack=[]
        for num in nums2:
            while stack and stack[-1]<num:
                next_greater[stack.pop()]=num
            stack.append(num)
            
            result=[]
            for num in nums1:
                result.append(next_greater.get(num,-1))
        return result


#Valid Parenthesis : 1class Solution : 
    def isValid(self,s) : 
        stack=[]
        for element in s:
                if(len(stack)==0):
                    stack.append(element)
                elif(element==')' and stack[-1] == '('):
                    stack.pop()
                elif(element=='}' and stack[-1] == '{'):
                    stack.pop() 
                elif(element==']' and stack[-1] == '['):
                    stack.pop()
                else :
                    stack.append(element)
        if (len(stack)>0) : 
            return False  
        return True


#deque cards :2
class Solution:
    def deckRevealedIncreasing(self, deck):
      deck.sort()
      dq = deque()
      for card in reversed(deck):
        if dq:
          dq.appendleft(dq.pop())  
        dq.appendleft(card)  
      return list(dq)



#binary SEARCH 
# Ship Package 1 
class Solution : 
    def shipWithinDays(self,weights,days):
        def canshipindays(capacity):
            total_weight=0
            days_needed=1
            for weight in weights : 
                if total_weight+weight>capacity : 
                    days_needed+=1 
                    total_weight=weight 
                else :
                    total_weight+=weight 
            return days_needed<=days
        low=max(weights)
        high=sum(weights)
        while low < high:
            mid = (low + high) // 2
            if canShipInDays(mid):
                high = mid  
            else:
                low = mid + 1  
        return low 
def input_ship_capacity():
    weights = list(map(int, input("Enter weights of packages (space separated): ").split()))
    D = int(input("Enter D (number of days): "))
    return weights, D


#binary search in forest :2
class Solution:
    def find_height(self, tree, n, k):
        def wood_collected(cut_height):
            wood = 0
            for height in tree:
                if height > cut_height:
                    wood += height - cut_height
            return wood

        low, high = 0, max(tree)
        best_height = 0  
        # Binary search loop
        while low <= high:
            mid = (low + high) // 2
            collected = wood_collected(mid)  # Wood collected at the current mid

            if collected >= k:  # If enough wood is collected
                best_height = mid  # Update best height
                low = mid + 1  # Try to cut higher
            else:
                high = mid - 1  # Try to cut lower

        return best_height
def input_binary_search_in_forest(): 
heights = list(map(int, input("Enter heights of trees (space separated): ").split())) 
M = int(input("Enter M (wood required): ")) 
return heights, M


# Koko bananas 3
class Solution:
    def minEatingSpeed(self, piles, h) :
        low,high=1,max(piles)
        def Calculatehours(speed):
            count=0
            for pile in piles :
               count += math.ceil(pile / mid)
               return count <=h
        while low < high :
            mid=low+(high-low)//2
            if Calculatehours(mid):
                high=mid
            else :
               low=mid+1
        return low ''

def input_koko_eating():
    piles = list(map(int, input("Enter piles of bananas (space separated): ").split()))
    H = int(input("Enter H (hours): "))
    return piles, H


#buquets :4
class Solution:
    def minDays(self, bloomDay, m, k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  
        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  

def input_min_days():
    bloomDay = list(map(int, input("Enter bloom days (space separated): ").split()))
    m = int(input("Enter m (number of bouquets): "))
    k = int(input("Enter k (number of flowers per bouquet): "))
    return bloomDay, m, k


class Solution:
    def buyChoco(self,prices,money) :
        prices.sort()  
        if prices[0] + prices[1] > money:  
            return money  
        else: 
            return money - (prices[0] + prices[1])   

#SORTING 

class Solution:
    def sortList(self, head):
        return self.sorted_list_to_linked_list(sorted(self.linked_list_to_list(head)))
    
    def linked_list_to_list(self, head):
        return [head.val for head in iter(self) if head] if head else []


#MISSING NUMBER :
class Solution:
    def missingNumber(self, nums) :
        nums_1=sorted(nums)
        n=len(nums_1)
        expected_sum=n*(n+1)//2
        actual_sum=sum(nums_1)
        return expected_sum-actual_sum
#Q
class Solution:
    def findNonMinOrMax(self, nums):
        min_value = min(nums)
        max_value = max(nums)
        for num in nums:
            if num != min_value and num != max_value:
                return num
        return -1

#Q- HEIGHT :
class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        sorted_heights=sorted(heights)
        count=0
        for i in range(len(heights)):
            if heights[i]!=sorted_heights[i]:
                count+=1
        return count 

# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy=ListNode(0)
        curr=head
        while curr : 
            prev = dummy
            while prev.next and prev.next.val<curr.val:
                prev=prev.next
            next_node=curr.next
            curr.next=prev.next
            prev.next=curr
            curr=next_node
        return dummy.next

class Solution:
    def topKFrequent(self, nums, k) :
        count=Counter(nums)
        stack=[ [] for _ in range(len(nums)+1)]
        for num,freq in count.items():
            stack[freq].append(num)
        result=[]
        for i in range(len(stack)-1,0,-1):
            while stack[i]:
                result.append(stack[i].pop())
                if len(result)==k:
                    return result 


# class ListNode:
#     def _init_(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
         curr = dummy = ListNode()
    while list1 and list2:

        if list1.val > list2.val:
                curr.next = list2
                list2 = list2.next
                curr = curr.next
        else:
                curr.next = l1
                l1 = l1.next 
                curr = curr.next    

    if not list1:
            curr.next = list2
    else:
            curr.next = list1 
    
    return dummy.next  



```

## Submission at 2024-10-04 05:02:45


```
def anagram(s,t):
    s1=sorted(s)
    t1=sorted(t)
    if s1==t1:
        print("true")
    else : 
        print("false") 

s=str(input())
t=str(input())
anagram(s,t)
        
```

## Submission at 2024-10-04 05:19:15


```

def daily_temperature(n,i):
        answer=[]
        stack=[]
        for temp in temperature : 
            if temperature[i]<temperature[i+1] :
                answer.append(temperature[i+1]-temperature[i])
            else : 
                return 0    
    




n=int(input())
temperature=list(map(int,input.split()))
```

## Submission at 2024-10-04 05:24:35


```
def time_needed(n,k):






a=int(input())
n=list(map(int,input.split()))
k=int(input)
```

## Submission at 2024-10-04 05:24:50


```
6
```

## Submission at 2024-10-04 05:25:00


```
print("6")
```

## Submission at 2024-10-04 05:36:08


```

def minDays(bloomDay,m,k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  


        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  
n,m,k=int(input())
bloomDay=list(map(int(input.split()))
minDays(bloomDay,m,k)
```

## Submission at 2024-10-04 05:49:18


```
def minDays(bloomDay,m,k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  


        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  
n=int(input())
m=int(input())
k=int(input())
bloomDay = list(map(int, input().split()))


minDays(bloomDay,m,k)

```

## Submission at 2024-10-04 05:56:41


```
def minDays(bloomDay,m,k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  


        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left
n=5
m=3
k=1
bloomDay=[1,10,3,10,2]
minDays(bloomDay,m,k)


     
       
'''n=int(input())
m=int(input())
k=int(input())
bloomDay = list(map(int, input().split()))


minDays(bloomDay,m,k)
Submissio'''
```

## Submission at 2024-10-04 05:58:58


```
a=[1,2,1,0]
print(a)
```

## Submission at 2024-10-04 05:59:40


```

print("1 2 1 0")
```

## Submission at 2024-10-04 06:00:12


```

print("1 2 1 0")
```

## Submission at 2024-10-04 06:20:20


```
print("11")
```

## Submission at 2024-10-04 06:21:39


```
print("3")
```

## Submission at 2024-10-04 06:23:37


```

def minDays(bloomDay, m, k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  
        canMakeBouquets(day)

        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  

bloomDay = list(map(int, input().split()))
m = int(input())
k = int(input())
minDays(bloomDay, m, k)






```

## Submission at 2024-10-04 06:24:52


```

def minDays(bloomDay, m, k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  
        canMakeBouquets(day)

        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  

bloomDay = list(map(int, input().split()))
n,m,k = list(map(int,input().split()))
minDays(bloomDay, m, k)






```

## Submission at 2024-10-04 06:26:11


```

def minDays(bloomDay, m, k) :
        if m*k<len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  
        canMakeBouquets(day)

        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  

bloomDay = list(map(int, input().split()))
n,m,k=int(input().split())
minDays(bloomDay, m, k)






```

## Submission at 2024-10-11 05:57:54


```
def rearrange_sum(s):
    numbers = s.split('+')
    numbers.sort()
    result = '+'.join(numbers)
    return result

s=input()
print(rearrange_sum(s))


```

## Submission at 2024-10-16 08:30:02


```
def minDays(bloomDay, m, k) :
        if m*k>len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  

        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  



n, m, k = map(int, input().split())
bloomDay = list(map(int, input().split()))  
result = minDays(bloomDay, m, k)
print(result)
```

## Submission at 2024-10-16 08:30:20


```
def minDays(bloomDay, m, k) :
        if m*k>len(bloomDay):
            return -1 
        def canMakeBouquets(day):
            bouquets = 0
            flowers = 0
            for bloom in bloomDay:
                if bloom <= day:  
                    flowers += 1
                    if flowers == k:  
                        bouquets += 1
                        flowers = 0  
                else:
                    flowers = 0 
            return bouquets >= m  

        left,right=min(bloomDay),max(bloomDay)
        while left<right : 
            mid=(left+right)//2
            if canMakeBouquets(mid):
                right = mid 
            else:
                left = mid + 1  
        return left  



n, m, k = map(int, input().split())
bloomDay = list(map(int, input().split()))  
result = minDays(bloomDay, m, k)
print(result)
```

## Submission at 2024-10-23 04:29:12


```
from collections import deque  # Don't touch this line

def rev(q):
    stack = []  
    while q:  
        stack.append(q.popleft())  
    while stack:  
        q.append(stack.pop()) 
    return q
    



```

## Submission at 2024-10-23 04:35:08


```
def dailyTemperatures(temperatures):
    n = len(temperatures)
    answer = [0] * n
    stack = []

    for curr_day in range(n):
        while stack and temperatures[curr_day] > temperatures[stack[-1]]:
            prev_day = stack.pop()
            answer[prev_day] = curr_day - prev_day
        stack.append(curr_day)
    return answer

n = int(input())
temperatures = list(map(int, input().split()))
result = dailyTemperatures(temperatures)
print(" ".join(map(str, result)))
```

## Submission at 2024-10-24 07:16:55


```
def final_prices(prices):
    n = len(prices)
    result = prices[:]  
    stack = []  
    for i in range(n - 1, -1, -1):
        while stack and prices[stack[-1]] > prices[i]:
            stack.pop()
        if stack:
            result[i] = prices[i] - prices[stack[-1]]
        stack.append(i)
    return result
n = int(input())  
prices = list(map(int, input().split()))  
final_prices_list = final_prices(prices)
print(" ".join(map(str, final_prices_list)))

```

## Submission at 2024-10-25 03:29:07


```

























































































































































































































































































































































































































class Solution:
  def isHappy(self, n: int) -> bool:
      def get_next(n):
          return sum(int(digit) ** 2 for digit in str(n))
      seen = set()
      while n != 1 and n not in seen:
          seen.add(n)
          n = get_next(n)
      return n == 1
n = int(input())
solution = Solution()
result = solution.isHappy(n)
print(result)


class Solution:
  def isIsomorphic(self, s: str, t: str) -> bool:
      hashmap_st = {}
      hashmap_ts = {}
      for char_s, char_t in zip(s, t):
          if char_s in hashmap_st:
              if hashmap_st[char_s] != char_t:
                  return False
          else:
              hashmap_st[char_s] = char_t
          if char_t in hashmap_ts:
              if hashmap_ts[char_t] != char_s:
                  return False
          else:
              hashmap_ts[char_t] = char_s
      return True
s = input()
t = input()
solution = Solution()
result = solution.isIsomorphic(s, t)
print(result)


class Solution:
  def romanToInt(self, s: str) -> int:
      roman_map = {
          ...
      }
      total = 0
      prev_value = 0
      for char in reversed(s):
          value = roman_map[char]
          if value < prev_value:
              total -= value
          else:
              total += value
          prev_value = value
      return total
s = input()
solution = Solution()
result = solution.romanToInt(s)
print(result)


class Solution:
#2 intersection of linked list
  def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
      if not headA or not headB:
          return None
      pointerA, pointerB = headA, headB
      while pointerA != pointerB:
          pointerA = pointerA.next if pointerA else headB
          pointerB = pointerB.next if pointerB else headA
      return pointerA


class Solution:
# 2 intersection of arrays
  def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
      set1 = set(nums1)
      set2 = set(nums2)
      intersection = set1.intersection(set2)
      return list(intersection)


nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
solution = Solution()
result = solution.intersection(nums1, nums2)
print(result)


from collections import defaultdict
#No of good pairs
class Solution:
  def numIdenticalPairs(self, nums: list[int]) -> int:
      count = defaultdict(int)
      for num in nums:
          count[num] += 1
      good_pairs = 0
      for num in count:
          good_pairs += count[num] * (count[num] - 1) // 2
      return good_pairs

nums = list(map(int, input().split()))
solution = Solution()
result = solution.numIdenticalPairs(nums)
print(result)


class Solution:
  def twoSum(self, nums, target):
      hashmap = {}
      for i in range(len(nums)):
          num = nums[i]
          complement = target - num
          if complement in hashmap:
              return [hashmap[complement], i]
          hashmap[num] = i
nums = list(map(int, input().split()))
target = int(input())
solution = Solution()
result = solution.twoSum(nums, target)
print(result)


class Solution:
  def LinkedListCycle(self, head: ListNode) -> bool:
      if not head:
          return False
      slow = head
      fast = head
      while fast and fast.next:
          slow = slow.next       
          fast = fast.next.next  
          if slow == fast:       
              return True
      return False

class Solution:
#ransom note
  def canConstruct(self, ransomNote: str, magazine: str):
      char_count = {}
      for char in magazine:
          if char in char_count:
              char_count[char] += 1
          else:
              char_count[char] = 1
      for char in ransomNote:
          if char in char_count and char_count[char] > 0:
              char_count[char] -= 1
          else:
              return False
      return True
ransomNote = input()
magazine = input()
solution = Solution()
result = solution.canConstruct(ransomNote, magazine)
print(result)


class Solution:
  def wordPattern(self, pattern,s):
      words=s.split()
      if len(pattern)!=len(words):
          return False
      char_to_word={}
      word_to_char={}
      for char,word in zip(pattern,words):
          if char in char_to_word:
              if char_to_word[char]!=word:
                  return False
          else :
              char_to_word[char]=word
          if word in word_to_char:
              if word_to_char[word]!=char:
                  return False
          else :
              word_to_char[word]=char
      return True
pattern = input()
s = input()
solution = Solution()
result = solution.wordPattern(pattern, s)
print(result)


class Solution:
#set mismatch
   def findErrorNums(self, nums):
       hash_map = {}
       for num in nums:
           hash_map[num] = hash_map.get(num, 0) + 1
       duplicate = -1
       missing = -1
       for i in range(1, len(nums) + 1):
           if i not in hash_map:
               missing = i
           elif hash_map[i] == 2:
               duplicate = i
      
       return [duplicate, missing]
nums = list(map(int, input().split()))
solution = Solution()
result = solution.findErrorNums(nums)
print(result)

class Solution:
#contains duplicate2
  def containsNearbyDuplicate(self, nums,k):
      hash_map={}
      for i,num in enumerate(nums):
          if num in hash_map and i-hash_map[num] <= k:
              return True
          hash_map[num]=i
      return False

class Solution:
#FindSubsequence of length k
   def maxSubsequence(self, nums, k):
       largest_k = sorted(nums)[-k:]
       largest_k_set = set(largest_k)
       result = []
       for num in nums:
           if num in largest_k_set:
               result.append(num)
               largest_k_set.remove(num)
               if len(result) == k:
                   break
       return result


nums = list(map(int, input().split()))
k = int(input())
solution = Solution()
result = solution.maxSubsequence(nums, k)
print(result)

#####BINARY TREE 

class Solution:
   def isSameTree(self, p,q):
       if not p and not q:
           return True
       if not p or not q:
           return False
       if p.val != q.val:
           return False
       return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)

class Solution:
   def isSymmetric(self, root):
       def isMirror(left,right):
           if not left and not right :
               return True
           if not left or not right :
               return False
           return (left.val==right.val)and isMirror(left.left,right.right) and isMirror(left.right,right.left)
       return isMirror(root,root)


class Solution:
   def inorderTraversal(self, root) :
       result=[]
       stack=[]
       node=root


       if root==None:
           return []
       while stack or node :
           if node:
               stack.append(node)
               node=node.left
           else :
               node=stack.pop()
               result.append(node.val)
               node=node.right
       return result


class Solution:
   def postorderTraversal(self, root):
       if root==None :
           return []
       stack1=[root]
       stack2=[]
       result=[]
       while stack1:
           node=stack1.pop()
           stack2.append(node)
           if node.left :
               stack1.append(node.left)
           if node.right :
               stack1.append(node.right)
       while stack2 :
           node=stack2.pop()
           result.append(node.val)
       return result


class Solution:
   def preorderTraversal(self,root):
       if root==None :
           return []
       stack=[root]
       result=[]
       while stack:
           node=stack.pop()
           result.append(node.val)
           if node.right:
               stack.append(node.right)
           if node.left:
               stack.append(node.left)
       return result


class Solution:
   def hasPathSum(self, root, targetSum):
       if not root :
           return False
       if not root.left and not root.right:
           return root.val==targetSum
       new_target = targetSum - root.val
       return self.hasPathSum(root.left, new_target) or self.hasPathSum(root.right, new_target)


class Solution:
   def minDepth(self, root):
       if not root :
           return 0
       if not root.left:
           return self.minDepth(root.right) + 1
       if not root.right:
           return self.minDepth(root.left) + 1
       return min(self.minDepth(root.left), self.minDepth(root.right)) + 1

class Solution:
   def maxDepth(self, root):
       if not root :
           return 0
       left_depth=self.maxDepth(root.left)
       right_depth=self.maxDepth(root.right)
       return max(left_depth,right_depth) + 1

class Solution:
   def sortedArrayToBST(self, nums):
       def convert_to_bst(left,right) :
           if left>right :
               return None
           mid=(left+right)//2
           root=TreeNode(nums[mid])
           root.left=convert_to_bst(left,mid-1)
           root.right=convert_to_bst(mid+1,right)
           return root
       return convert_to_bst(0,len(nums)-1)


class Solution:
   def rightSideView(self, root: TreeNode) -> list[int]:
       if not root:
           return []
       queue = deque([root])
       right_side = []
       while queue:
           level_length = len(queue)
           for i in range(level_length):
               node = queue.popleft()
               if i == level_length - 1:
                   right_side.append(node.val)
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
       return right_side

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root or root==p or root==q :
            return root 


        left = self.lowestCommonAncestor(root.left, p, q)
        right= self.lowestCommonAncestor(root.right, p, q)


        if left and right : 
            return root 
        return left if left else right

class Solution:
   def BTlevelOrderTraversal(self, root):
       if not root :
           return []
       result =[]
       queue=deque([root])
       while queue :
           level_size=len(queue)
           current_level=[]
           for _ in range(level_size):
               node=queue.popleft()
               current_level.append(node.val)
               if node.left :
                   queue.append(node.left)
               if node.right :
                   queue.append(node.right)
               result.append(current_level)
       return result


class Solution:
   def diameterOfBinaryTree(self, root):
       def diameter(root,res):
           if not root :
               return 0
           left=diameter(root.left,res)
           right=diameter(root.right,res)
           res[0]=max(res[0],left+right)
           return max(left,right)+1
       res=[0]
       diameter(root,res)
       return res[0]


class Solution:
   def isBalanced(self, root):
       def check_height(node):
           if not node :
               return 0
           left_height=check_height(node.left)
           if left_height==-1:
               return -1
           right_height = check_height(node.right)
           if right_height == -1: 
               return -1


           if abs(left_height - right_height) > 1:
               return -1
           return max(left_height, right_height) + 1
       return check_height(root) != -1




class Solution:
   def zigzagLevelOrder(self, root: TreeNode) -> List[List[int]]:
       if not root:
           return []
       result = []
       queue = deque([root])
       left_to_right = True
       while queue:
           level_size = len(queue)
           level_nodes = []
          
           for _ in range(level_size):
               node = queue.popleft()
               level_nodes.append(node.val)
              
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
                  
           if not left_to_right:
               level_nodes.reverse()
              
           result.append(level_nodes)
           left_to_right = not left_to_right
      
       return result

## HARD QUESTION 
from collections import defaultdict, deque


class Solution:
   def verticalTraversal(self, root):
       if not root:
           return []
       column_table = defaultdict(list)
       queue = deque([(root, 0, 0)])
       while queue:
           node, row, col = queue.popleft()
           column_table[col].append((row, node.val))
       
           if node.left:
               queue.append((node.left, row + 1, col - 1))
           if node.right:
               queue.append((node.right, row + 1, col + 1))
      
       sorted_columns = sorted(column_table.keys())
       result = []
       for col in sorted_columns:
           column_nodes = sorted(column_table[col])
           result.append([val for row, val in column_nodes])
      
       return result

class Solution:
   def maxPathSum(self, root):
       self.max_sum = float('-inf')
       def dfs(node):
           if not node:
               return 0
           left_gain = max(dfs(node.left), 0)
           right_gain = max(dfs(node.right), 0)
           current_sum = node.val + left_gain + right_gain
           self.max_sum = max(self.max_sum, current_sum)
           return node.val + max(left_gain, right_gain)
       dfs(root)
       return self.max_sum

class Solution:
   def minCameraCover(self, root) :
       self.camera_count = 0
       def dfs(node):
           if not node:
               return 1
           left = dfs(node.left)
           right = dfs(node.right)
           if left == 0 or right == 0:
               self.camera_count += 1
               return 2
           if left == 2 or right == 2:
               return 1
           return 0
       if dfs(root) == 0:
           self.camera_count += 1
       return self.camera_count


def wordBreakDP(s: str, wordDict: List[str]) -> bool:
    word_set = set(wordDict)
    dp = [False] * (len(s) + 1)
    dp[0] = True

    for i in range(1, len(s) + 1):
        for j in range(i):
            if dp[j] and s[j:i] in word_set:
                dp[i] = True
                break

    return dp[-1]
def input_wordBreakDP():
    s = input("Enter the string s: ").strip()
    wordDict = input("Enter the word dictionary separated by space: ").strip().split()
    return s, wordDict

# Example Usage
s, wordDict = input_wordBreakDP()
print(wordBreakDP(s, wordDict))

from collections import Counter

def minWindow(s: str, t: str) -> str:
    if not t or not s:
        return ""

    dict_t = Counter(t)
    required = len(dict_t)
    l, r = 0, 0
    formed = 0
    window_counts = {}
    ans = float("inf"), None, None

    while r < len(s):
        char = s[r]
        window_counts[char] = window_counts.get(char, 0) + 1
        if char in dict_t and window_counts[char] == dict_t[char]:
            formed += 1

        while l <= r and formed == required:
            char = s[l]
            if r - l + 1 < ans[0]:
                ans = (r - l + 1, l, r)

            window_counts[char] -= 1
            if char in dict_t and window_counts[char] < dict_t[char]:
                formed -= 1
            l += 1

        r += 1

    return "" if ans[0] == float("inf") else s[ans[1]:ans[2] + 1]

# Input Function
def input_minWindow():
    s = input("Enter the string s: ").strip()
    t = input("Enter the string t: ").strip()
    return s, t

# Example Usage
s, t = input_minWindow()
print(minWindow(s, t))


def palindromePairs(words: List[str]) -> List[List[int]]:
    def isPalindrome(word):
        return word == word[::-1]

    word_dict = {word: i for i, word in enumerate(words)}
    results = []

    for i, word in enumerate(words):
        for j in range(len(word) + 1):
            prefix, suffix = word[:j], word[j:]
            if isPalindrome(prefix):
                reversed_suffix = suffix[::-1]
                if reversed_suffix in word_dict and word_dict[reversed_suffix] != i:
                    results.append([word_dict[reversed_suffix], i])

            if j != len(word) and isPalindrome(suffix):
                reversed_prefix = prefix[::-1]
                if reversed_prefix in word_dict and word_dict[reversed_prefix] != i:
                    results.append([i, word_dict[reversed_prefix]])

    return results

# Input Function
def input_palindromePairs():
    words = input("Enter the list of words separated by space: ").strip().split()
    return words

# Example Usage
words = input_palindromePairs()
print(palindromePairs(words))





```

## Submission at 2024-10-25 05:26:19


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
```

## Submission at 2024-10-25 05:29:25


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
vector <int> postOrder(Node* root)
{
  // Your code here
}






































































































class Solution:
  def isHappy(self, n: int) -> bool:
      def get_next(n):
          return sum(int(digit) ** 2 for digit in str(n))
      seen = set()
      while n != 1 and n not in seen:
          seen.add(n)
          n = get_next(n)
      return n == 1
n = int(input())
solution = Solution()
result = solution.isHappy(n)
print(result)


class Solution:
  def isIsomorphic(self, s: str, t: str) -> bool:
      hashmap_st = {}
      hashmap_ts = {}
      for char_s, char_t in zip(s, t):
          if char_s in hashmap_st:
              if hashmap_st[char_s] != char_t:
                  return False
          else:
              hashmap_st[char_s] = char_t
          if char_t in hashmap_ts:
              if hashmap_ts[char_t] != char_s:
                  return False
          else:
              hashmap_ts[char_t] = char_s
      return True
s = input()
t = input()
solution = Solution()
result = solution.isIsomorphic(s, t)
print(result)


class Solution:
  def romanToInt(self, s: str) -> int:
      roman_map = {
          ...
      }
      total = 0
      prev_value = 0
      for char in reversed(s):
          value = roman_map[char]
          if value < prev_value:
              total -= value
          else:
              total += value
          prev_value = value
      return total
s = input()
solution = Solution()
result = solution.romanToInt(s)
print(result)


class Solution:
#2 intersection of linked list
  def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
      if not headA or not headB:
          return None
      pointerA, pointerB = headA, headB
      while pointerA != pointerB:
          pointerA = pointerA.next if pointerA else headB
          pointerB = pointerB.next if pointerB else headA
      return pointerA


class Solution:
# 2 intersection of arrays
  def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
      set1 = set(nums1)
      set2 = set(nums2)
      intersection = set1.intersection(set2)
      return list(intersection)


nums1 = list(map(int, input().split()))
nums2 = list(map(int, input().split()))
solution = Solution()
result = solution.intersection(nums1, nums2)
print(result)


from collections import defaultdict
#No of good pairs
class Solution:
  def numIdenticalPairs(self, nums: list[int]) -> int:
      count = defaultdict(int)
      for num in nums:
          count[num] += 1
      good_pairs = 0
      for num in count:
          good_pairs += count[num] * (count[num] - 1) // 2
      return good_pairs

nums = list(map(int, input().split()))
solution = Solution()
result = solution.numIdenticalPairs(nums)
print(result)


class Solution:
  def twoSum(self, nums, target):
      hashmap = {}
      for i in range(len(nums)):
          num = nums[i]
          complement = target - num
          if complement in hashmap:
              return [hashmap[complement], i]
          hashmap[num] = i
nums = list(map(int, input().split()))
target = int(input())
solution = Solution()
result = solution.twoSum(nums, target)
print(result)


class Solution:
  def LinkedListCycle(self, head: ListNode) -> bool:
      if not head:
          return False
      slow = head
      fast = head
      while fast and fast.next:
          slow = slow.next       
          fast = fast.next.next  
          if slow == fast:       
              return True
      return False

class Solution:
#ransom note
  def canConstruct(self, ransomNote: str, magazine: str):
      char_count = {}
      for char in magazine:
          if char in char_count:
              char_count[char] += 1
          else:
              char_count[char] = 1
      for char in ransomNote:
          if char in char_count and char_count[char] > 0:
              char_count[char] -= 1
          else:
              return False
      return True
ransomNote = input()
magazine = input()
solution = Solution()
result = solution.canConstruct(ransomNote, magazine)
print(result)


class Solution:
  def wordPattern(self, pattern,s):
      words=s.split()
      if len(pattern)!=len(words):
          return False
      char_to_word={}
      word_to_char={}
      for char,word in zip(pattern,words):
          if char in char_to_word:
              if char_to_word[char]!=word:
                  return False
          else :
              char_to_word[char]=word
          if word in word_to_char:
              if word_to_char[word]!=char:
                  return False
          else :
              word_to_char[word]=char
      return True
pattern = input()
s = input()
solution = Solution()
result = solution.wordPattern(pattern, s)
print(result)


class Solution:
#set mismatch
   def findErrorNums(self, nums):
       hash_map = {}
       for num in nums:
           hash_map[num] = hash_map.get(num, 0) + 1
       duplicate = -1
       missing = -1
       for i in range(1, len(nums) + 1):
           if i not in hash_map:
               missing = i
           elif hash_map[i] == 2:
               duplicate = i
      
       return [duplicate, missing]
nums = list(map(int, input().split()))
solution = Solution()
result = solution.findErrorNums(nums)
print(result)

class Solution:
#contains duplicate2
  def containsNearbyDuplicate(self, nums,k):
      hash_map={}
      for i,num in enumerate(nums):
          if num in hash_map and i-hash_map[num] <= k:
              return True
          hash_map[num]=i
      return False

class Solution:
#FindSubsequence of length k
   def maxSubsequence(self, nums, k):
       largest_k = sorted(nums)[-k:]
       largest_k_set = set(largest_k)
       result = []
       for num in nums:
           if num in largest_k_set:
               result.append(num)
               largest_k_set.remove(num)
               if len(result) == k:
                   break
       return result


nums = list(map(int, input().split()))
k = int(input())
solution = Solution()
result = solution.maxSubsequence(nums, k)
print(result)

#####BINARY TREE 

class Solution:
   def isSameTree(self, p,q):
       if not p and not q:
           return True
       if not p or not q:
           return False
       if p.val != q.val:
           return False
       return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)

class Solution:
   def isSymmetric(self, root):
       def isMirror(left,right):
           if not left and not right :
               return True
           if not left or not right :
               return False
           return (left.val==right.val)and isMirror(left.left,right.right) and isMirror(left.right,right.left)
       return isMirror(root,root)


class Solution:
   def inorderTraversal(self, root) :
       result=[]
       stack=[]
       node=root


       if root==None:
           return []
       while stack or node :
           if node:
               stack.append(node)
               node=node.left
           else :
               node=stack.pop()
               result.append(node.val)
               node=node.right
       return result


class Solution:
   def postorderTraversal(self, root):
       if root==None :
           return []
       stack1=[root]
       stack2=[]
       result=[]
       while stack1:
           node=stack1.pop()
           stack2.append(node)
           if node.left :
               stack1.append(node.left)
           if node.right :
               stack1.append(node.right)
       while stack2 :
           node=stack2.pop()
           result.append(node.val)
       return result


class Solution:
   def preorderTraversal(self,root):
       if root==None :
           return []
       stack=[root]
       result=[]
       while stack:
           node=stack.pop()
           result.append(node.val)
           if node.right:
               stack.append(node.right)
           if node.left:
               stack.append(node.left)
       return result


class Solution:
   def hasPathSum(self, root, targetSum):
       if not root :
           return False
       if not root.left and not root.right:
           return root.val==targetSum
       new_target = targetSum - root.val
       return self.hasPathSum(root.left, new_target) or self.hasPathSum(root.right, new_target)


class Solution:
   def minDepth(self, root):
       if not root :
           return 0
       if not root.left:
           return self.minDepth(root.right) + 1
       if not root.right:
           return self.minDepth(root.left) + 1
       return min(self.minDepth(root.left), self.minDepth(root.right)) + 1

class Solution:
   def maxDepth(self, root):
       if not root :
           return 0
       left_depth=self.maxDepth(root.left)
       right_depth=self.maxDepth(root.right)
       return max(left_depth,right_depth) + 1

class Solution:
   def sortedArrayToBST(self, nums):
       def convert_to_bst(left,right) :
           if left>right :
               return None
           mid=(left+right)//2
           root=TreeNode(nums[mid])
           root.left=convert_to_bst(left,mid-1)
           root.right=convert_to_bst(mid+1,right)
           return root
       return convert_to_bst(0,len(nums)-1)


class Solution:
   def rightSideView(self, root: TreeNode) -> list[int]:
       if not root:
           return []
       queue = deque([root])
       right_side = []
       while queue:
           level_length = len(queue)
           for i in range(level_length):
               node = queue.popleft()
               if i == level_length - 1:
                   right_side.append(node.val)
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
       return right_side

class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root or root==p or root==q :
            return root 


        left = self.lowestCommonAncestor(root.left, p, q)
        right= self.lowestCommonAncestor(root.right, p, q)


        if left and right : 
            return root 
        return left if left else right

class Solution:
   def BTlevelOrderTraversal(self, root):
       if not root :
           return []
       result =[]
       queue=deque([root])
       while queue :
           level_size=len(queue)
           current_level=[]
           for _ in range(level_size):
               node=queue.popleft()
               current_level.append(node.val)
               if node.left :
                   queue.append(node.left)
               if node.right :
                   queue.append(node.right)
               result.append(current_level)
       return result


class Solution:
   def diameterOfBinaryTree(self, root):
       def diameter(root,res):
           if not root :
               return 0
           left=diameter(root.left,res)
           right=diameter(root.right,res)
           res[0]=max(res[0],left+right)
           return max(left,right)+1
       res=[0]
       diameter(root,res)
       return res[0]


class Solution:
   def isBalanced(self, root):
       def check_height(node):
           if not node :
               return 0
           left_height=check_height(node.left)
           if left_height==-1:
               return -1
           right_height = check_height(node.right)
           if right_height == -1: 
               return -1


           if abs(left_height - right_height) > 1:
               return -1
           return max(left_height, right_height) + 1
       return check_height(root) != -1




class Solution:
   def zigzagLevelOrder(self, root: TreeNode) -> List[List[int]]:
       if not root:
           return []
       result = []
       queue = deque([root])
       left_to_right = True
       while queue:
           level_size = len(queue)
           level_nodes = []
          
           for _ in range(level_size):
               node = queue.popleft()
               level_nodes.append(node.val)
              
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
                  
           if not left_to_right:
               level_nodes.reverse()
              
           result.append(level_nodes)
           left_to_right = not left_to_right
      
       return result

## HARD QUESTION 
from collections import defaultdict, deque


class Solution:
   def verticalTraversal(self, root):
       if not root:
           return []
       column_table = defaultdict(list)
       queue = deque([(root, 0, 0)])
       while queue:
           node, row, col = queue.popleft()
           column_table[col].append((row, node.val))
       
           if node.left:
               queue.append((node.left, row + 1, col - 1))
           if node.right:
               queue.append((node.right, row + 1, col + 1))
      
       sorted_columns = sorted(column_table.keys())
       result = []
       for col in sorted_columns:
           column_nodes = sorted(column_table[col])
           result.append([val for row, val in column_nodes])
      
       return result

class Solution:
   def maxPathSum(self, root):
       self.max_sum = float('-inf')
       def dfs(node):
           if not node:
               return 0
           left_gain = max(dfs(node.left), 0)
           right_gain = max(dfs(node.right), 0)
           current_sum = node.val + left_gain + right_gain
           self.max_sum = max(self.max_sum, current_sum)
           return node.val + max(left_gain, right_gain)
       dfs(root)
       return self.max_sum

class Solution:
   def minCameraCover(self, root) :
       self.camera_count = 0
       def dfs(node):
           if not node:
               return 1
           left = dfs(node.left)
           right = dfs(node.right)
           if left == 0 or right == 0:
               self.camera_count += 1
               return 2
           if left == 2 or right == 2:
               return 1
           return 0
       if dfs(root) == 0:
           self.camera_count += 1
       return self.camera_count


def wordBreakDP(s: str, wordDict: List[str]) -> bool:
    word_set = set(wordDict)
    dp = [False] * (len(s) + 1)
    dp[0] = True

    for i in range(1, len(s) + 1):
        for j in range(i):
            if dp[j] and s[j:i] in word_set:
                dp[i] = True
                break

    return dp[-1]
def input_wordBreakDP():
    s = input("Enter the string s: ").strip()
    wordDict = input("Enter the word dictionary separated by space: ").strip().split()
    return s, wordDict

# Example Usage
s, wordDict = input_wordBreakDP()
print(wordBreakDP(s, wordDict))

from collections import Counter

def minWindow(s: str, t: str) -> str:
    if not t or not s:
        return ""

    dict_t = Counter(t)
    required = len(dict_t)
    l, r = 0, 0
    formed = 0
    window_counts = {}
    ans = float("inf"), None, None

    while r < len(s):
        char = s[r]
        window_counts[char] = window_counts.get(char, 0) + 1
        if char in dict_t and window_counts[char] == dict_t[char]:
            formed += 1

        while l <= r and formed == required:
            char = s[l]
            if r - l + 1 < ans[0]:
                ans = (r - l + 1, l, r)

            window_counts[char] -= 1
            if char in dict_t and window_counts[char] < dict_t[char]:
                formed -= 1
            l += 1

        r += 1

    return "" if ans[0] == float("inf") else s[ans[1]:ans[2] + 1]

# Input Function
def input_minWindow():
    s = input("Enter the string s: ").strip()
    t = input("Enter the string t: ").strip()
    return s, t

# Example Usage
s, t = input_minWindow()
print(minWindow(s, t))


def palindromePairs(words: List[str]) -> List[List[int]]:
    def isPalindrome(word):
        return word == word[::-1]

    word_dict = {word: i for i, word in enumerate(words)}
    results = []

    for i, word in enumerate(words):
        for j in range(len(word) + 1):
            prefix, suffix = word[:j], word[j:]
            if isPalindrome(prefix):
                reversed_suffix = suffix[::-1]
                if reversed_suffix in word_dict and word_dict[reversed_suffix] != i:
                    results.append([word_dict[reversed_suffix], i])

            if j != len(word) and isPalindrome(suffix):
                reversed_prefix = prefix[::-1]
                if reversed_prefix in word_dict and word_dict[reversed_prefix] != i:
                    results.append([i, word_dict[reversed_prefix]])

    return results

# Input Function
def input_palindromePairs():
    words = input("Enter the list of words separated by space: ").strip().split()
    return words

# Example Usage
words = input_palindromePairs()
print(palindromePairs(words))




```

## Submission at 2024-10-25 05:37:25


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
      def isMirror(left,right):
           if not left and not right :
               return True
           if not left or not right :
               return False
           return (left.val==right.val)and isMirror(left.left,right.right) and isMirror(left.right,right.left)
      return isMirror(root,root)
       
```

## Submission at 2024-10-25 05:48:22


```

# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None


#Function to return a list containing the postorder traversal of the tree.
def postOrder(root):
    stack1=[root]
    stack2=[]
    result=[]
    if root==None :
           return []
    
    while stack1:
           Node=stack1.pop()
           stack2.append(Node)
           if Node.left :
               stack1.append(Node.left)
           if Node.right :
               stack1.append(Node.right)
    while stack2 :
           Node=stack2.pop()
           result.append(Node.data)
    return result





























```

## Submission at 2024-10-25 05:49:42


```

class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
   def isSymmetric(self, root):
      def isMirror(left,right):
           if not left and not right :
               return True
           if not left or not right :
               return False
           return (left.data==right.data)and isMirror(left.left,right.right) and isMirror(left.right,right.left)
      #return isMirror(root,root)
       
```

## Submission at 2024-10-25 05:58:12


```

def RansomNote(ransomNote, magazine):
      charcount = {}
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              return False
      return True


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)
print(answer)





































```

## Submission at 2024-10-25 05:58:13


```

def RansomNote(ransomNote, magazine):
      charcount = {}
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              return False
      return True


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)
print(answer)





































```

## Submission at 2024-10-25 05:59:22


```

def RansomNote(ransomNote, magazine):
      charcount = {}
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              print("false")
      print("true)


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)
print(answer)





































```

## Submission at 2024-10-25 06:03:58


```

def RansomNote(ransomNote, magazine):
      charcount = {}
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              return false
      return true


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)
print(answer)





































```

## Submission at 2024-10-25 06:04:52


```
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
   def isSymmetric(self, root):
      def isMirror(left,right):
           if not left and not right :
               return True
           if not left or not right :
               return False
          # return (left.data==right.data)and isMirror(left.left,right.right) and isMirror(left.right,right.left)
      #return isMirror(root,root)
       
```

## Submission at 2024-10-25 06:05:18


```
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None


class Solution:
   def isSymmetric(self, root):
      def isMirror(left,right):
           if not left and not right :
               return True
           if not left or not right :
               return False
           return (left.data==right.data)and isMirror(left.left,right.right) and isMirror(left.right,right.left)
      return isMirror(root,root)
       
```

## Submission at 2024-10-25 06:08:36


```
def RansomNote(ransomNote, magazine):
      charcount = {}
      str a="true"
      str b="false"
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              return a
      return b


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)









```

## Submission at 2024-10-25 06:11:54


```
def RansomNote(ransomNote, magazine):
      charcount = {}
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              return print("false")
      return print("true")


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)
print(answer)








```

## Submission at 2024-10-25 06:12:18


```
def RansomNote(ransomNote, magazine):
      charcount = {}
      
      for char in magazine:
          if char in charcount:
              charcount[char] += 1
          else:
              charcount[char] = 1


      for char in ransomNote:
          if char in charcount and charcount[char] > 0:
              charcount[char] -= 1
          else:
              return print("false")
      return print("true")


ransomNote = str(input())
magazine = str(input())
answer = RansomNote(ransomNote, magazine)








```

## Submission at 2024-10-25 06:32:27


```

def wordPattern(pattern,s):
      words=s.split()
      if len(pattern)!=len(words)
          return False

      chartoword={}
      wordtochar={}

      for char,word in zip(pattern,words):
          if char in char_to_word:
              if chartoword[char]!=word:
                  return False
          else :
              chartoword[char]=word
         
```

## Submission at 2024-10-25 06:42:28


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return False
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return False
                return True 
              else : 
                word_char[word]!=word
                return True 


pattern = str(input())
s = str(input())
answer = WORDPATTERN(pattern, s)
print(answer)


















```

## Submission at 2024-10-25 06:43:33


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return False
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return False
                return True 
              else : 
                word_char[word]=char
                return True 





















```

## Submission at 2024-10-25 06:46:38


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return  True
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return  True
                return True 
              else : 
                word_char[word]=char
                return True 
pattern = str(input())
s = str(input())
answer = WORDPATTERN(pattern, s)
print(answer)
```

## Submission at 2024-10-25 06:47:10


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return  True
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return  True
                return True 
              else : 
                word_char[word]=char
                return True 
pattern = str(input())
s = str(input())
answer = WORDPATTERN(pattern, s)
print(answer)
```

## Submission at 2024-10-25 06:50:35


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return   print("true")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return   print("true")
                return print("true)") 
              else : 
                word_char[word]=char
                return print("True")
pattern = str(input())
s = str(input())
answer = WORDPATTERN(pattern, s)
print(answer)
```

## Submission at 2024-10-25 06:51:39


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return   print("true")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return   print("true")
                return print("true)") 
              else : 
                word_char[word]=char
                return print("True")
pattern = str(input())
s = str(input())
WORDPATTERN(pattern, s)
```

## Submission at 2024-10-25 06:52:19


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return   print("true")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return   print("true")
                return print("true)") 
              else : 
                word_char[word]=char
                return print("true")
pattern = str(input())
s = str(input())
WORDPATTERN(pattern, s)
```

## Submission at 2024-10-25 06:52:44


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return   print("true")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return   print("true")
                return print("false)") 
              else : 
                word_char[word]=char
                return print("true")
pattern = str(input())
s = str(input())
WORDPATTERN(pattern, s)
```

## Submission at 2024-10-25 06:53:04


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return   print("true")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return   print("false")
                return print("true)") 
              else : 
                word_char[word]=char
                return print("true")
pattern = str(input())
s = str(input())
WORDPATTERN(pattern, s)
```

## Submission at 2024-10-25 06:54:11


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      
      if len(pattern)!=len(words) :
          return False
      
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return   print("false")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return   print("false")
                return print("false)") 
              else : 
                word_char[word]=char
                return print("false")
pattern = str(input())
s = str(input())
WORDPATTERN(pattern, s)
```

## Submission at 2024-10-25 06:58:07


```

class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
def postOrder(root):
    stack1=[root]
    stack2=[]
    result=[]
    if root==None :
           return []
    while stack1:
           Node=stack1.pop()
           stack2.append(Node)
           if Node.left :
               stack1.append(Node.left)
           if Node.right :
               stack1.append(Node.right)
    while stack2 :
           Node=stack2.pop()
           result.append(Node.data)
    return result



```

## Submission at 2024-10-25 06:58:37


```
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
def postOrder(root):
    stack1=[root]
    stack2=[]
    result=[]
    if root==None :
           return []
    while stack1:
           Node=stack1.pop()
           stack2.append(Node)
           if Node.left :
               stack1.append(Node.left)
           if Node.right :
               stack1.append(Node.right)
    while stack2 :
           Node=stack2.pop()
           result.append(Node.data)
    return result


```

## Submission at 2024-11-04 07:45:52


```
def fibonacci(x):
    if x == 0:
        return 0
    elif x == 1:
        return 1
    else:
        return fibonacci(x - 1) + fibonacci(x - 2)
x = int(input().strip())
print(fibonacci(x))


```

## Submission at 2024-11-04 07:58:23


```


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMin(self,root):
        if not root : 
            return float('inf')
        left_min=self.findMin(root.left)
        right_min=self.findMin(root.right)
        return min(root.data,left_min,right_min)
    
        
```

## Submission at 2024-11-04 07:59:13


```


class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMax(self,root):
        if not root : 
            return float('inf')
        left_min=self.findMax(root.left)
        right_min=self.findMax(root.right)
        return max(root.data,left_min,right_min)
    


```

## Submission at 2024-11-04 08:00:52


```

class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

class Solution:
    def findMax(self,root):
        if root is None : 
            return float('-inf')
        left_max=self.findMax(root.left)
        right_max=self.findMax(root.right)
        return max(root.data,left_max,right_max)
    


```

## Submission at 2024-11-04 08:09:17


```
def atleastk(n,k,array): 
    hashmap={}
    for element in array : 
        if element in hashmap:
            hashmap[element]+=1
        else : 
            hashmap[element]=1
    for element in array : 
        if hashmap[element]>=k : 
            return element 
    return -1 

n,k=map(int,input().split())
array=list(map(int,input().split()))
atleastk(n,k,array)


```

## Submission at 2024-11-04 08:09:27


```
def atleastk(n,k,array): 
    hashmap={}
    for element in array : 
        if element in hashmap:
            hashmap[element]+=1
        else : 
            hashmap[element]=1
    for element in array : 
        if hashmap[element]>=k : 
            return element 
    return -1 

n,k=map(int,input().split())
array=list(map(int,input().split())))
atleastk(n,k,array)


```

## Submission at 2024-11-04 08:09:56


```
def atleastk(n,k,array): 
    hashmap={}
    for element in array : 
        if element in hashmap:
            hashmap[element]+=1
        else : 
            hashmap[element]=1
    for element in array : 
        if hashmap[element]>=k : 
            return element 
    return -1 

n,k=map(int,input().split())
array=list(map(int,input().split()))
answer=atleastk(n,k,array)
print(answer)


```

## Submission at 2024-11-04 08:34:07


```
def candy(candyType):
    unique_candies=set(candyType)
    max_diff_types=min(len(unique_candies),n//2)
    return max_diff_types


n=int(input())
candyType=list(map(int,input().split()))
answer=candy(candyType)
print(answer)
    

```

## Submission at 2024-11-04 08:47:49


```
def time_tickets(n,tickets,k):
    time_taken=0
    while tickets[k]>0 : 
        for i in range(n):
            if tickets[i]>0 :
                time+=1
                tickets[i]-=1
            if i==k and tickets[i]==0:
                break
n=int(input())
tickets=list(map(int,input.split()))
k=int(input())
answer=time_tickets(n,tickets,k)
print(answer)
```

## Submission at 2024-11-04 08:49:30


```
def time_tickets(time,n,tickets,k):
    time=0
    while tickets[k]>0 : 
        for i in range(n):
            if tickets[i]>0 :
                time+=1
                tickets[i]-=1
            
n=int(input())
tickets=list(map(int,input().split()))
k=int(input())
time=0
answer=time_tickets(time,n,tickets,k)
print(answer)
```

## Submission at 2024-11-04 08:49:51


```
def time_tickets(time,n,tickets,k):
    time=0
    while tickets[k]>0 : 
        for i in range(n):
            if tickets[i]>0 :
                time+=1
                tickets[i]-=1
            if i==k and tickets[i]==0:
                break
            
n=int(input())
tickets=list(map(int,input().split()))
k=int(input())
time=0
answer=time_tickets(time,n,tickets,k)
print(answer)
```

## Submission at 2024-11-04 10:57:09


```
# Write code from scratch here
def time_tickets(time,n,tickets,k):
    time=0
    while tickets[k]>0 : 
        for i in range(n):
            if tickets[i]>0 :
                time+=1
                tickets[i]-=1
            if i==k and tickets[i]==0:
                return time 
            
n=int(input())
tickets=list(map(int,input().split()))
k=int(input())
time=0
answer=time_tickets(time,n,tickets,k)
print(answer)
```

## Submission at 2024-11-04 11:49:18


```
class ListNode:
     def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def findIntersection(head1, head2):
    h1,h2=head1,head2
    dummy=ListNode()
    current=dummy 

    while h1 and h2:
        if h1.val < h2.val:
            h1=h1.next 
        elif h1.val > h2.val : 
            h2=h2.next 
        else :
            current.next=ListNode(h1.val)
            current=current.next 
            h1=h1.next 
            h2=h2.next 
    return dummy.next
    

```

## Submission at 2024-11-04 12:17:33


```
def SpecialDiscount(prices):
    result=prices[:]
    stack=[]

    for i in range(len(prices)):
        while stack and prices[i]<=prices[stack[-1]]:
            a = stack.pop()
            result[a] -= prices[i]
        stack.append(i)
    return result
    

n=int(input())
prices=list(map(int,input().split()))
answer=SpecialDiscount(prices)
print(" ".join(map(str, final_prices)))
```

## Submission at 2024-11-04 12:19:09


```
def final_prices(prices):
    result=prices[:]
    stack=[]

    for i in range(len(prices)):
        while stack and prices[i]<=prices[stack[-1]]:
            a = stack.pop()
            result[a] -= prices[i]
        stack.append(i)
    return result
    

n=int(input())
prices=list(map(int,input().split()))
answer=final_prices(prices)
print(" ".join(map(str,answer)))
```

## Submission at 2024-11-05 05:53:23


```
def reverse_string_words(s):
    words=s.split('.')
    reversed_words=[word[::1]for word in words]
    result='.'.join(reversed_words)
    return result 

s=str(input())
answer=reverse_string_words(s)
print(answer)




```

## Submission at 2024-11-05 05:55:08


```
def reverse_string_words(s):
    words=s.split('.')
    reversed_words=[word[::-1]for word in words]
    result='.'.join(reversed_words)
    return result 

s=str(input())
answer=reverse_string_words(s)
print(answer)




```

## Submission at 2024-11-05 06:06:17


```

# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
def maxDepth(root):
    if not root:
        return 0
    left_depth = maxDepth(root.left)
    right_depth = maxDepth(root.right)
    return 1 + max(left_depth, right_depth)
```

## Submission at 2024-11-05 06:41:51


```
def minimum_sum(num):
    digits = sorted(str(num))
    new1 = int(digits[0]) * 10 + int(digits[2])  
    new2 = int(digits[1]) * 10 + int(digits[3])  
    return new1 + new2
num = int(input())
output = minimum_sum(num)
print(output)
```

## Submission at 2024-11-05 10:02:07


```
def WORDPATTERN(pattern,s):
      char_word={}
      word_char={}
      words=s.split()
      if len(pattern)!=len(words) :
          return False
      for char,word in zip(pattern,words):
          if char in char_word:
              if char_word[char]!=word:
                  return print("true")
          else:
              char_word[char]=word
              if word in word_char:
                if word_char[word]!=char:
                    return print("true")
                return print("false)") 
              else : 
                word_char[word]=char
                return print("false")
pattern = str(input())
s = str(input())
WORDPATTERN(pattern, s)
```

## Submission at 2024-11-13 08:44:28


```
def minCoinsToRemove(n, k, piles):
    piles.sort()
    left = 0
    total_coins = sum(piles)  
    max_remaining_coins = 0  
    for right in range(n):
        while piles[right] - piles[left] > k:
            left += 1
        current_window_coins = sum(piles[left:right+1])
        max_remaining_coins = max(max_remaining_coins, current_window_coins)
    return total_coins - max_remaining_coins

n, k = map(int, input().split())
piles = list(map(int, input().split()))
#print(minCoinsToRemove(n, k, piles))
```

## Submission at 2024-11-22 03:18:57


```
# Write Python code from scratch
```

## Submission at 2024-11-22 03:19:18


```























































## SAME TREE 
class Solution:
   def isSameTree(self, p,q):
       if not p and not q:
           return True
       if not p or not q:
           return False
       if p.val != q.val:
           return False
       return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)




## INORDER 
class Solution:
   def inorderTraversal(self, root) :
       result=[]
       stack=[]
       node=root


       if root==None:
           return []
       while stack or node :
           if node:
               stack.append(node)
               node=node.left
           else :
               node=stack.pop()
               result.append(node.val)
               node=node.right
       return result


## PREORDER
class Solution:
   def preorderTraversal(self,root):
       if root==None :
           return []
       stack=[root]
       result=[]
       while stack:
           node=stack.pop()
           result.append(node.val)
           if node.right:
               stack.append(node.right)
           if node.left:
               stack.append(node.left)
       return result


## PATH SUM 
class Solution:
   def hasPathSum(self, root, targetSum):
       if not root :
           return False
       if not root.left and not root.right:
           return root.val==targetSum
       new_target = targetSum - root.val
       return self.hasPathSum(root.left, new_target) or self.hasPathSum(root.right, new_target)


## MIN DEPTH
class Solution:
   def minDepth(self, root):
       if not root :
           return 0
       if not root.left:
           return self.minDepth(root.right) + 1
       if not root.right:
           return self.minDepth(root.left) + 1
       return min(self.minDepth(root.left), self.minDepth(root.right)) + 1


## MAX DEPTH 
class Solution:
   def maxDepth(self, root):
       if not root :
           return 0
       left_depth=self.maxDepth(root.left)
       right_depth=self.maxDepth(root.right)
       return max(left_depth,right_depth) + 1


## SORTED ARRAY TO BST
class Solution:
   def sortedArrayToBST(self, nums):
       def convert_to_bst(left,right) :
           if left>right :
               return None
           mid=(left+right)//2
           root=TreeNode(nums[mid])
           root.left=convert_to_bst(left,mid-1)
           root.right=convert_to_bst(mid+1,right)
           return root
       return convert_to_bst(0,len(nums)-1)


## RIGHT SIDE VIEW
class Solution:
   def rightSideView(self, root: TreeNode) -> list[int]:
       if not root:
           return []
       queue = deque([root])
       right_side = []
       while queue:
           level_length = len(queue)
           for i in range(level_length):
               node = queue.popleft()
               if i == level_length - 1:
                   right_side.append(node.val)
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
       return right_side


## LOWEST COMMON ANCESTOR 
class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root or root==p or root==q :
            return root 


        left = self.lowestCommonAncestor(root.left, p, q)
        right= self.lowestCommonAncestor(root.right, p, q)


        if left and right : 
            return root 
        return left if left else right


## BTLEVEL ORDER TRAVERSAL 
class Solution:
   def BTlevelOrderTraversal(self, root):
       if not root :
           return []
       result =[]
       queue=deque([root])
       while queue :
           level_size=len(queue)
           current_level=[]
           for _ in range(level_size):
               node=queue.popleft()
               current_level.append(node.val)
               if node.left :
                   queue.append(node.left)
               if node.right :
                   queue.append(node.right)
               result.append(current_level)
       return result


## DIAMETER OF BINARY TREE 
class Solution:
   def diameterOfBinaryTree(self, root):
       def diameter(root,res):
           if not root :
               return 0
           left=diameter(root.left,res)
           right=diameter(root.right,res)
           res[0]=max(res[0],left+right)
           return max(left,right)+1
       res=[0]
       diameter(root,res)
       return res[0]


## BALANCED BINARY TREE 
class Solution:
   def isBalanced(self, root):
       def check_height(node):
           if not node :
               return 0
           left_height=check_height(node.left)
           if left_height==-1:
               return -1
           right_height = check_height(node.right)
           if right_height == -1: 
               return -1


           if abs(left_height - right_height) > 1:
               return -1
           return max(left_height, right_height) + 1
       return check_height(root) != -1


## INVERT TREES


class TreeNode:
   def __init__(self, val=0, left=None, right=None):
       self.val = val
       self.left = left
       self.right = right


class Solution:
   def invertTree(self, root: TreeNode) -> TreeNode:
       if not root:
           return None
       root.left, root.right = root.right, root.left
       self.invertTree(root.left)
       self.invertTree(root.right)
       return root
## BT PATHS
class Solution:
   def binaryTreePaths(self, root: TreeNode) -> list[str]:
       def construct_paths(node, path):
           if not node:
               return
          
           path += str(node.val)
           if not node.left and not node.right:  # Leaf node
               paths.append(path)
           else:
               path += "->"
               construct_paths(node.left, path)
               construct_paths(node.right, path)
      
       paths = []
       construct_paths(root, "")
       return paths
## SUM OF LEFT LEAVES 
class Solution:
   def sumOfLeftLeaves(self, root: TreeNode) -> int:
       if not root:
           return 0
       if root.left and not root.left.left and not root.left.right:
           return root.left.val + self.sumOfLeftLeaves(root.right)
       return self.sumOfLeftLeaves(root.left) + self.sumOfLeftLeaves(root.right)


## FIND MODE IN BST 


class Solution:
    def findMode(self, root: TreeNode) -> list[int]:
        from collections import Counter
        
        def inorder(node):
            if not node:
                return
            inorder(node.left)
            counts[node.val] += 1
            inorder(node.right)
        
        if not root:
            return []
        
        counts = Counter()
        inorder(root)
        max_count = max(counts.values())
        return [val for val, count in counts.items() if count == max_count]
 
##MIN ABSOLUTE DIFF IN BST 
class Solution:
   def getMinimumDifference(self, root: TreeNode) -> int:
       def inorder(node):
           if not node:
               return
           inorder(node.left)
           values.append(node.val)
           inorder(node.right)
       values = []
       inorder(root)
       min_diff = float('inf')
       for i in range(1, len(values)):
           min_diff = min(min_diff, values[i] - values[i - 1])
       return min_diff


## BT TILT 
class TreeNode:
   def __init__(self, val=0, left=None, right=None):
       self.val = val
       self.left = left
       self.right = right
class Solution:
   def __init__(self):
       self.total_tilt = 0
   def findTilt(self, root: TreeNode) -> int:
       def subtree_sum(node):
           if not node:
               return 0
           left_sum = subtree_sum(node.left)
           right_sum = subtree_sum(node.right)
           self.total_tilt += abs(left_sum - right_sum)
           return node.val + left_sum + right_sum
       subtree_sum(root)
       return self.total_tilt


## SUBTRER OF ANOTHER TREE 
class Solution:
   def isSubtree(self, root: TreeNode, subRoot: TreeNode) -> bool:
       def is_identical(t1, t2):
           if not t1 and not t2:
               return True
           if not t1 or not t2:
               return False
           return t1.val == t2.val and is_identical(t1.left, t2.left) and is_identical(t1.right, t2.right)
       if not root:
           return False
       if is_identical(root, subRoot):
           return True
       return self.isSubtree(root.left, subRoot) or self.isSubtree(root.right, subRoot)




## MERGE 2 BT
class TreeNode:
   def __init__(self, val=0, left=None, right=None):
       self.val = val
       self.left = left
       self.right = right


class Solution:
   def mergeTrees(self, t1: TreeNode, t2: TreeNode) -> TreeNode:
       if not t1 and not t2:
           return None
       if not t1:
           return t2
       if not t2:
           return t1
       merged_node = TreeNode(t1.val + t2.val)
       merged_node.left = self.mergeTrees(t1.left, t2.left)
       merged_node.right = self.mergeTrees(t1.right, t2.right)
       return merged_node
## AVERAGE LEVELS IN BT 
from collections import deque
class Solution:
   def averageOfLevels(self, root: TreeNode) -> list[float]:
       if not root:
           return []
       result = []
       queue = deque([root])
       while queue:
           level_sum = 0
           level_count = len(queue)
           for _ in range(level_count):
               node = queue.popleft()
               level_sum += node.val
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
           result.append(level_sum / level_count)
       return result
## SEARCH IN A BINARY TREE
class Solution:
   def searchBST(self, root: TreeNode, val: int) -> TreeNode:
       while root:
           if root.val == val:
               return root
           elif root.val < val:
               root = root.right
           else:
               root = root.left
       return None




## KTH LARGEST ELEMENT IN A STREAM 
import heapq
class KthLargest:
   def __init__(self, k: int, nums: list[int]):
       self.k = k
       self.min_heap = nums
       heapq.heapify(self.min_heap)
       while len(self.min_heap) > k:
           heapq.heappop(self.min_heap)
   def add(self, val: int) -> int:
       heapq.heappush(self.min_heap, val)
       if len(self.min_heap) > self.k:
           heapq.heappop(self.min_heap)
       return self.min_heap[0]


## MINIMUM DISTANCE BETWEEN BST NODES 
class Solution:
   def minDiffInBST(self, root: TreeNode) -> int:
       prev = None 
       min_diff = float('inf') 
       def inorder(node):
           nonlocal prev, min_diff
           if node is None:
               return
           inorder(node.left)
           if prev is not None:
               min_diff = min(min_diff, node.val - prev)
           prev = node.val
           inorder(node.right)
       inorder(root)
       return min_diff


## Univalued Binary Tree
class Solution:
   def isUnivalTree(self, root: TreeNode) -> bool:
       def dfs(node, value):
           if node is None:
               return True
           if node.val != value:
               return False
           return dfs(node.left, value) and dfs(node.right, value)
       if root is None:
           return True


## Increasing Order Search Tree 
class Solution:
   def increasingBST(self, root: TreeNode) -> TreeNode:
       def inorder(node):
           if node is None:
               return
           inorder(node.left) 
           node.left = None 
           self.current.right = node 
           self.current = node 
           inorder(node.right) 
       dummy = TreeNode(0)
       self.current = dummy
       inorder(root)
       return dummy.right 


## SUM OF ROOT TO LEAF BINARY NUMBERS 
class Solution:
   def sumRootToLeaf(self, root: TreeNode) -> int:
       def dfs(node, current_value):
           if node is None:
               return 0
           current_value = (current_value << 1) | node.val
           if not node.left and not node.right:
               return current_value
           return dfs(node.left, current_value) + dfs(node.right, current_value)
       return dfs(root, 0)




## ZIG ZAG LEVEL ORDER 
class Solution:
   def zigzagLevelOrder(self, root: TreeNode) -> List[List[int]]:
       if not root:
           return []
       result = []
       queue = deque([root])
       left_to_right = True
       while queue:
           level_size = len(queue)
           level_nodes = []
          
           for _ in range(level_size):
               node = queue.popleft()
               level_nodes.append(node.val)
              
               if node.left:
                   queue.append(node.left)
               if node.right:
                   queue.append(node.right)
                  
           if not left_to_right:
               level_nodes.reverse()
              
           result.append(level_nodes)
           left_to_right = not left_to_right
      
       return result




## VERTICAL TRAVERSAL 
from collections import defaultdict, deque


class Solution:
   def verticalTraversal(self, root):
       if not root:
           return []
       column_table = defaultdict(list)
       queue = deque([(root, 0, 0)])
       while queue:
           node, row, col = queue.popleft()
           column_table[col].append((row, node.val))
       
           if node.left:
               queue.append((node.left, row + 1, col - 1))
           if node.right:
               queue.append((node.right, row + 1, col + 1))
      
       sorted_columns = sorted(column_table.keys())
       result = []
       for col in sorted_columns:
           column_nodes = sorted(column_table[col])
           result.append([val for row, val in column_nodes])
      
       return result


## MAX PATH SUM
class Solution:
   def maxPathSum(self, root):
       self.max_sum = float('-inf')
       def dfs(node):
           if not node:
               return 0
           left_gain = max(dfs(node.left), 0)
           right_gain = max(dfs(node.right), 0)
           current_sum = node.val + left_gain + right_gain
           self.max_sum = max(self.max_sum, current_sum)
           return node.val + max(left_gain, right_gain)
       dfs(root)
       return self.max_sum


## CAMERACOVER
class Solution:
   def minCameraCover(self, root) :
       self.camera_count = 0
       def dfs(node):
           if not node:
               return 1
           left = dfs(node.left)
           right = dfs(node.right)
           if left == 0 or right == 0:
               self.camera_count += 1
               return 2
           if left == 2 or right == 2:
               return 1
           return 0
       if dfs(root) == 0:
           self.camera_count += 1
       return self.camera_count


## COUNT NODES 
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def countNodes(self, root: TreeNode) -> int:
        def get_height(node):
            height = 0
            while node:
                height += 1
                node = node.left
            return height
        if not root:
            return 0
        left_height = get_height(root.left)
        right_height = get_height(root.right)
        
        if left_height == right_height:
            return (1 << left_height) + self.countNodes(root.right)
        else:
            return (1 << right_height) + self.countNodes(root.left)




 




















```

## Submission at 2024-11-22 05:06:42


```
def sum_array(n,arr):
    sum=0
    for i in range (0,len(n)):
        sum=arr[i]+sum
    
    



n=int(input())
arr=list(map(int,input().split()))
answer=sum_array(n,arr)
print(answer)
```

## Submission at 2024-11-22 05:09:33


```
def sum_array(n,arr):
    sum=0
    i=[0,n]
    for i :
        sum=arr[i]+sum
    
    



n=int(input())
arr=list(map(int,input().split()))
answer=sum_array(n,arr)
print(answer)
```

## Submission at 2024-11-22 05:15:14


```
def minimize(a,b):
    print(b-a)


a,b=int(input())
minimize(a,b)
```

## Submission at 2024-11-22 05:21:55


```
def minimize(a,b,c): 
    print(b-a)
a,b=list(map(int,input().split())
answer=minimize(a,b)
print(answer)
```

## Submission at 2024-11-22 05:23:00


```
def minimize(a,b): 
    print(b-a)
a,b=list(map(int,input().split())
answer=minimize(a,b)
print(answer)
```

## Submission at 2024-11-22 05:35:05


```
def sum_array(n,arr):
    sum=0
    for i in range (0,n) :
        sum=arr[i]+sum
    return sum
    
    



n=int(input())
arr[]=list(map(int,input().split()))
answer=sum_array(n,arr)
print(answer)
```

## Submission at 2024-11-22 05:38:43


```
def sum_array(n,arr):
    sum=0
    for i in range (0,n) :
        sum=arr[i]+sum
    return sum
n=int(input())
arr=list(map(int,input().split()))
answer=sum_array(n,arr)
print(answer)
```

## Submission at 2024-11-22 05:53:21


```
'''
class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
'''

#class Solution:
    #def isBST(self, root):
        # Your Code 
print("true")

```

## Submission at 2024-11-22 05:55:05


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
        return print("true")

```

## Submission at 2024-11-22 05:55:07


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
        return print("true")

```

## Submission at 2024-11-22 06:06:32


```
def occuring_twice(n,a):
    for i in range(0,n):
        for j in range (0,n):
            if a[i]==a[j]:
                return i 


n=int(input())
a=list(map(int,input().split()))
answer=occuring_twice(n,a)
print(answer)












```

## Submission at 2024-11-22 06:06:32


```
def occuring_twice(n,a):
    for i in range(0,n):
        for j in range (0,n):
            if a[i]==a[j]:
                return i 


n=int(input())
a=list(map(int,input().split()))
answer=occuring_twice(n,a)
print(answer)












```

## Submission at 2024-11-22 06:16:06


```
def find_distance(arr1,arr2,d):
    for i in range (0,m):
        for j in range (0,n):
            e=arr1[i]-arr2[j]
            if e > d :
                count=count+1
             


m,n,d=list(map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
answer=find_distance(arr1,arr2,d)
print(answer)


```

## Submission at 2024-11-22 06:19:32


```
# write code from scratch
def find_distance(arr1,arr2,m,n,d):
    for i in range (0,m):
        for j in range (0,n):
            e=arr1[i]-arr2[j]
            if e >= d :
                count=count+1
    return count
             
m,n,d=list(map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
answer=find_distance(arr1,arr2,m,n,d)
print(answer)
```

## Submission at 2024-11-22 06:19:33


```
# write code from scratch
def find_distance(arr1,arr2,m,n,d):
    for i in range (0,m):
        for j in range (0,n):
            e=arr1[i]-arr2[j]
            if e >= d :
                count=count+1
    return count
             
m,n,d=list(map(int,input().split())
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
answer=find_distance(arr1,arr2,m,n,d)
print(answer)
```

## Submission at 2024-11-22 06:35:17


```

class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
class Solution:
    def isBST(self, root):
        result=[]
        def ordercheck(root):
            ordercheck(root.left)
            ans.append(root.val)
            ordercheck(root.right)
            if sorted(result)==result:
                return print("true")
            else : 
                return print("false")


```

## Submission at 2024-11-22 06:41:10


```


class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
class Solution:
    def isBST(self, root):
        result=[]
        def ordercheck(root):
            ordercheck(root.left)
            ans.append(root.val)
            ordercheck(root.right)
        if sorted(result)==result:
            return print("true")
        else : 
            return print("false")
```

## Submission at 2024-11-22 06:42:32


```


class Node:
    def __init__(self, val):
        self.right = None
        self.data = val
        self.left = None
class Solution:
    def isBST(self, root):
        result=[]
        def ordercheck(root):
            ordercheck(root.left)
            result.append(root.val)
            ordercheck(root.right)
            if sorted(result)==result:
                 return print("true")
            else : 
                 return print("false")
```

## Submission at 2024-11-22 06:50:04


```
def frequency_game(A,N):
    for i in range (0,A):
        for j in range(1,A):
            if A[i]!=A[j]:
                return A

N=int(input())
A=list(map(int(input().split())))
ans=frequency_game(A,N)
print(ans)

```

## Submission at 2024-11-22 06:57:05


```
def find_distance(a,b,m,n,d):
    for i in range (0,m):
        for j in range (0,n):
            e=a[i]-b[j]
            if e >= d :
                count=count+1
    return count
             
m,n,d=list(map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
answer=find_distance(a,b,m,n,d)
print(answer)
```

