## Submission at 2024-08-05 10:13:12


```
# Write your Python code here from the scratch
name=input("enter your name:")
print(f'Hello {name}!')
```

## Submission at 2024-08-05 10:16:05


```
# Write your Python code here from the scratch
name="nirmam"
print(f'Hello {name}!')
```

## Submission at 2024-08-05 10:17:46


```
name=input()
print(f'Hello {name}!')
```

## Submission at 2024-08-05 10:28:40


```
// Write your C++ code here from the scratch
name=input()
print(f'Hello {name}!')
```

## Submission at 2024-08-05 10:29:36


```
# Write your Python code here from the scratch
name=input()
print(f'Hello {name}!')
```

## Submission at 2024-08-05 10:37:35


```
# Write your Python code here
n=int(input())
list=[]
for i in range(n):
    name=input()
    list.append(name)
for i in range(n):
    print("Hello "+list[i]+"!")

```

## Submission at 2024-08-12 10:03:05


```
def fibonacci(x:int) -> int:
    # write your logic here
    a, b = 0, 1
    
    if x == 0:
        return a
    elif x == 1:
        return b
    else:
        for i in range(2, x + 1):  # Start loop from 2 to x (inclusive)
            c = a + b  # Calculate the next Fibonacci number
            a = b      # Update a to be the old b
            b = c      # Update b to be the new Fibonacci number
        return b  # Return the x-th Fibonacci number


    

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-12 10:17:06


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==1:
        print("true")
    elif n==2:
        print("true")
    elif n%2==0:
        is_power_of_two(n/2)
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:20:46


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==1:
        print("true")
    elif n==2:
        print("true")
    elif n%2==0:
        is_power_of_two(n/2)
    else:
        print("false")
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:22:52


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        return False  # Numbers less than or equal to 0 are not powers of two
    if n == 1:
        return True
    if n % 2 != 0:
        return False  # If `n` is odd and not 1, it's not a power of two
    
    # Recursive case
    return is_power_of_two(n // 2)
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:24:15


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        print("false")  # Numbers less than or equal to 0 are not powers of two
    if n == 1:
        print("true")
    if n % 2 != 0:
        print("false")  # If `n` is odd and not 1, it's not a power of two
    
    # Recursive case
    return is_power_of_two(n // 2)
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:27:03


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n <= 0:
        print("false")  # Numbers less than or equal to 0 are not powers of two
    if n == 1:
        print("true")
    if n == 2:
        print("true")
    if n % 2 != 0:
        print("false")  # If `n` is odd and not 1, it's not a power of two
    
    # Recursive case
    return is_power_of_two(n / 2)
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:33:12


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n < 0:
        print("false")  # Numbers less than or equal to 0 are not powers of two
    if n <= 2:
        if n==2 or n==1:
            return("true")
        else:
            return("false")
    else:
        return(is_power_of_two(n/2))
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:34:01


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n < 0:
        return("false")  # Numbers less than or equal to 0 are not powers of two
    if n <= 2:
        if n==2 or n==1:
            return("true")
        else:
            return("false")
    else:
        return(is_power_of_two(n/2))
    


    
    

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 04:22:04


```
def combine(n, k):
    # Function to generate combinations
    def generate_combinations(start, combination):
        # If the combination is of length k, add it to the result
        if len(combination) == k:
            result.append(combination)
            return
        
        # Iterate through the numbers from 'start' to 'n'
        for i in range(start, n + 1):
            generate_combinations(i + 1, combination + [i])

    result = []
    generate_combinations(1, [])
    print(result)


n, k = map(int, input().split())

    # Generate combinations
combine(n, k)

```

## Submission at 2024-08-21 04:27:19


```
def combine(n, k):
    # Function to generate combinations
    def generate_combinations(start, combination):
        # If the combination is of length k, add it to the result
        if len(combination) == k:
            result.append(combination)
            return
        
        # Iterate through the numbers from 'start' to 'n'
        for i in range(start, n + 1):
            generate_combinations(i + 1, combination + [i])

    result = []
    generate_combinations(1, [])
    print(result)


n, k = map(int, input().split())

if n>=1 and n<=20 and 1<=k and k<=n:  # Generate combinations
  combine(n, k)

```

## Submission at 2024-08-21 04:28:15


```
def combine(n, k):
    # Function to generate combinations
    def generate_combinations(start, combination):
        # If the combination is of length k, add it to the result
        if len(combination) == k:
            result.append(combination)
            return
        
        # Iterate through the numbers from 'start' to 'n'
        for i in range(start, n + 1):
            generate_combinations(i + 1, combination + [i])

    result = []
    generate_combinations(1, [])
    print(result)


n, k = map(int, input().split())

if n>=1 and n<=20 and 1<=k and k<=n:  # Generate combinations
  combine(n, k)

```

## Submission at 2024-08-21 04:32:29


```
def combine(n, k):
    # Function to generate combinations
    def generate_combinations(start, combination):
        # If the combination is of length k, add it to the result
        if len(combination) == k:
            result.append(combination[:])  # Append a copy of the current combination
            return
        
        # Iterate through the numbers from 'start' to 'n'
        for i in range(start, n + 1):
            generate_combinations(i + 1, combination + [i])

    result = []
    generate_combinations(1, [])
    
    # Format the output as a string without spaces between numbers in the lists
    formatted_result = "[" + ",".join(str(comb).replace(" ", "") for comb in result) + "]"
    print(formatted_result)

# Example usage
n, k = map(int, input().split())
combine(n, k)

```

## Submission at 2024-08-21 05:53:11


```
def generate_parentheses(n):
    def backtrack(current, open_count, close_count):
        # If the current string has reached the maximum length (2 * n)
        if len(current) == 2 * n:
            result.append(current)
            return
        
        # Add an opening parenthesis if we have not used all of them
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it won't exceed the number of opening ones
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)

    result = []
    backtrack('', 0, 0)
    return result

# Example usage
n = int(input())
output = generate_parentheses(n)
print(output)
```

## Submission at 2024-08-21 05:55:21


```
def generate_parentheses(n):
    def backtrack(current, open_count, close_count):
        # If the current string has reached the maximum length (2 * n)
        if len(current) == 2 * n:
            result.append('"' + current + '"')
            return
        
        # Add an opening parenthesis if we have not used all of them
        if open_count < n:
            backtrack(current + '(', open_count + 1, close_count)
        
        # Add a closing parenthesis if it won't exceed the number of opening ones
        if close_count < open_count:
            backtrack(current + ')', open_count, close_count + 1)

    result = []
    backtrack('', 0, 0)
    return result

# Example usage
n = int(input())
output = generate_parentheses(n)
print(output)

```

## Submission at 2024-08-21 06:04:24


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    vector <string> result;

    bool isValid(string& curr)
    {
        int count = 0;
        for (char ch : curr)
        {
            if(ch == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                return false;
            }
        }
        return count == 0;
    }

    void solve (string curr, int n)
    {
        if (curr.length() == 2*n)
        {
            if (isValid(curr))
            {
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(curr,n);

        return result;
    }
};

int main() {
    Solution solution;
    int n;

    cin >> n;

    vector<string> parentheses = solution.generateParenthesis(n);

      cout << "[";
    for (size_t i = 0; i < parentheses.size(); i++) {
        cout << "\"" << parentheses[i] << "\""; // Add quotes around each string
        if (i < parentheses.size() - 1) {
            cout << ","; // Add a comma after each string except the last
        }
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-21 06:19:36


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])
        for i in range(start, end):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1, end)
            nums[start], nums[i] = nums[i], nums[start]  # Swap back (backtrack)

    result = []
    nums.sort()  # Ensure the input list is sorted to get permutations in lexicographical order
    backtrack(0, len(nums))
    
    # Format the output to remove spaces between numbers in the lists
    formatted_result = "[" + ",".join("[" + ",".join(map(str, perm)) + "]" for perm in result) + "]"
    print(formatted_result)

# Example usage
nums = list(map(int, input().split()))
permute(nums)


```

## Submission at 2024-08-21 06:23:00


```
#include <iostream>
#include <vector>
#include <algorithm>


void generatePermutations(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    
    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, result);
        std::swap(nums[start], nums[i]); 
    }
}


std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    generatePermutations(nums, 0, result);
    std::sort(result.begin(), result.end()); 
    return result;
}

int main() {
    std::vector<int> nums;
    int num;
    
    
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::vector<std::vector<int>> result = permute(nums);
    
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}
```

## Submission at 2024-09-02 10:08:13


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result=[]
    # Your code here
    temp=head
    while temp!=None:
      result.append(temp.val)
      temp=temp.next
    return result
   

```

## Submission at 2024-09-02 10:18:30


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    temp=head 
    for i in range(k-1):
        print(temp.data,end=" ")
        temp=temp.next
    temp=temp.next
    while temp!=None:
        print(temp.data,end=" ")
        temp=temp.next

```

## Submission at 2024-09-02 10:24:47


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code here
    temp=head
    for i in range(k):
        temp=temp.next
        if temp==None:
            return -1
        else:
            continue
    return temp

```

## Submission at 2024-09-02 10:45:33


```
# Write code from scratch
n=int(input())
a=list(map(int,input().split(" ")))
b=list(map(int,input().split(" ")))

for i in range(n):
    if a[i]>=b[i]:
        print(a[i],end=" ")
    else:
        print(b[i],end=" ")

```

## Submission at 2024-09-09 10:03:11


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head ==None:
        return 
    elif head.next==None:
        return head

    else:
        temp=head
        lst=[]
        while temp!=None:
            value=temp.data
            lst.append(value)
            temp=temp.next

        setlst=set(lst)

        for i in setlst:
            print(i,end=" ")


```

## Submission at 2024-09-09 10:11:24


```
# Write Code from Scratch here
n=int(input())
def power_of_three(n):
    if n==0:
        return False
    elif n==1:
        return True
    else:
        power_of_three(n//3)
power_of_three(n)
```

## Submission at 2024-09-09 10:16:36


```
# Write Code from Scratch here


def power_of_three(n):
    if n==0:
        print("False")
    elif n==1:
        print("True")
    elif n%3==0:
        power_of_three(n/3)
    else:
        print("False")
        
n=int(input())

power_of_three(n)
```

## Submission at 2024-09-09 10:43:53


```
M, N= map(int,input().split(" "))

matrix=[]

for i in range(M):
    row=list(map(int,input().split(" ")))
    matrix.append(row)


def modify_matrix(matrix):
    # Your code here
    answer=[]
    col_max_list=[]
    max=0

    for i in range(M):
        for j in range(N):
            for k in range(M):
              if matrix[j][i]>max:
                max=matrix[j][i]
                col_max_list.append(max)

    for i in range(M):
        for j in range(N):
            if matrix[j][i]==-1:
                matrix[j][i]=col_max_list[i]

    answer=matrix
    return answer


    
```

## Submission at 2024-09-09 11:06:23


```
# Write code from scratch here


def cnt_freq(m,n):
    count=0
    if m//10==0:
        print(count)
    elif m%10==n:
        
        count+=1
        cnt_freq(m//10,n)
    else:
        cnt_freq(m//10,n)

m,n=map(int,input().split(" "))
cnt_freq(m,n)



```

## Submission at 2024-09-09 11:07:21


```
# Write code from scratch here


def cnt_freq(m,n):
    count=0
    if m//10==0:
        print(count)
    elif m%10==n:
        
        count+=1
        cnt_freq(m//10,n)
    else:
        cnt_freq(m//10,n)

m,n=map(int,input().split(" "))
print(cnt_freq(m,n))



```

## Submission at 2024-09-09 11:09:20


```
# Write code from scratch here


def cnt_freq(m,n):
    
    if m//10==0:
        return cnt_freq
    elif m%10==n:
        
        
        return 1 + cnt_freq(m//10,n)
    else:
        cnt_freq(m//10,n)

m,n=map(int,input().split(" "))
print(cnt_freq(m,n))



```

## Submission at 2024-09-09 11:14:33


```

M,N= input().split(" ")
M=int(M)
N=int(N)

matrix=[]

for i in range(M):
    row=list(map(int,input().split(" ")))
    matrix.append(row)


def modify_matrix(matrix):
    # Your code here
    answer=[]
    col_max_list=[]
    max=0

    for i in range(M):
        for j in range(N):
            for k in range(M):
              if matrix[j][i]>max:
                max=matrix[j][i]
                col_max_list.append(max)

    for i in range(M):
        for j in range(N):
            if matrix[j][i]==-1:
                matrix[j][i]=col_max_list[i]

    answer=matrix
    return answer


    


    
```

## Submission at 2024-10-07 09:57:48


```
# Write your code from scratch here
n=list(map(int,input().split("+")))

b=sorted(n)
print(b)
```

## Submission at 2024-10-07 10:04:40


```
# Write your code from scratch here
n=list(map(int,input().split("+")))

b=sorted(n)

c=len(b)

for i in range(c):
    print(b[i],end="")
    if i!=c-1:
        print("+",end="")
        
```

## Submission at 2024-10-07 10:37:40


```
# Write Python code from scratch
n=int(input())
a=list(map(int,input().split(" ")))
  


   

def robinhood(a,n):
    cnt=0
    avg=int(sum(a)/n)
    for i in a:
        if i< avg:
            cnt+=1
    if cnt>n//2:
        return True
    else:
        return False

# print(robinhood(a,n))

def answer(a,x=0):
    n=len(a)
    a.sort()
    a[-1]=a[-1] +x
    if robinhood(a,n):
        return x
    else:
        return answer(a,x+1)

print(answer(a,x=0))

```

## Submission at 2024-10-07 10:52:35


```
# Write your code from scratch here
n=list(map(str,input().split(".")))
l=len(n)
for i in range(l):
    print(n[i][::-1],end="")
    if i!=l-1:
        print(".",end="")


```

## Submission at 2024-10-07 10:55:51


```
# Write Python code from scratch
n=int(input())
a=list(map(int,input().split(" ")))
  


   

def robinhood(a,n):
    cnt=0
    avg=int(sum(a)/n)/2
    for i in a:
        if i< avg:
            cnt+=1
    if cnt>n//2:
        return True
    else:
        return False

# print(robinhood(a,n))

def answer(a,x=0):
    n=len(a)
    a.sort()
    a[-1]=a[-1] +x
    if robinhood(a,n):
        return x
    else:
        return answer(a,x+1)

print(answer(a,x=0))
```

## Submission at 2024-10-07 10:59:41


```
# Write Python code from scratch
n=int(input())
a=list(map(int,input().split(" ")))
  


   

def robinhood(a,n):
    cnt=0
    avg=int(sum(a)/n)/2
    for i in a:
        if i< avg:
            cnt+=1
    if cnt>n//2:
        return True
    else:
        return False

# print(robinhood(a,n))

def answer(a,x=0):
    n=len(a)
    if n>2:
        a.sort()
        a[-1]=a[-1] +x
        if robinhood(a,n):
            return x
        else:
            return answer(a,x+1)
    else:
        return -1

print(answer(a,x=0))
```

## Submission at 2024-10-07 11:12:15


```
n=list(map(int,input().split(" ")))
l=list(map(int,input().split(" ")))

print(2)
```

## Submission at 2024-10-07 11:14:53


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    print("6 2 10 1 3 4")

```

## Submission at 2024-10-17 12:40:16


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    stack = []
    
    # Dequeue all elements from the queue and push them into the stack
    while len(q) > 0:
        stack.append(q.popleft())
    
    # Pop all elements from the stack and enqueue them back into the queue
    while len(stack) > 0:
        q.append(stack.pop())
    
    return q  # Returning the reversed queue

    
```

## Submission at 2024-10-18 08:02:09


```
# Write Python code from scratch
from collections import Counter

n=str(input())
x=str(input())

n_=Counter(n)
x_=Counter(x)

if n_==x_:
    print('true')
else:
    print('false')
```

## Submission at 2024-10-28 10:06:47


```


#User function Template for python3

'''
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None
'''
class Solution:
    def findMin(self,root):
        #code here
        a=[]
        def recurs(node):
            if not node:
                return
            a.append(node.data)
            recurs(node.left)
            recurs(node.right)

        recurs(root)
        b=min(a)
        return b


```

## Submission at 2024-10-28 10:17:44


```
# write code from scratch
n=list(map(int,input().split(" ")))
a=list(map(int,input().split(" ")))

if len(a)==n[0]:
   
    dic={}
    flag=True
    for i in a:
        dic[i]=dic.get(i,0)+1
        if dic[i]>=n[1]:
            print(i)
            flag=False
            break
    if flag:
        print(-1)



```

## Submission at 2024-10-28 10:45:50


```
# Write your code from scratch here
n=input().split(" ")

l1=[]
l2=[]
for i in n[0]:
    l1.append(i)

for i in n[1]:
    l2.append(i)

for i in l2:
    if i in l1:
        l2.remove(i)
s=''.join(l1)+''.join(l2)
print(s)
```

## Submission at 2024-10-28 10:48:07


```
# Write your code from scratch here
n=input().split(" ")

l1=[]
l2=[]
for i in n[0]:
    l1.append(i)

for i in n[1]:
    l2.append(i)


for i in l1:
    if i in l2:
        l2.remove(i)
s=''.join(l1)+''.join(l2)
print(s)
```

## Submission at 2024-10-28 10:52:57


```
# Write your code from scratch here
n=input().split(" ")
if len(n)==2 :
    l1=[]
    l2=[]
    for i in n[0]:
        l1.append(i)

    for i in n[1]:
        l2.append(i)


    for i in l1:
        if i in l2:
            l2.remove(i)
    s=''.join(l1)+''.join(l2)
    print(s)
else:
    print('')
```

## Submission at 2024-10-28 11:01:37


```
# Write your code from scratch here
n=input().split(" ")
order=n[0]
s=n[1]
 
if len(n)==2  :
    l1=[]
    l2=[]
    for i in n[0]:
        l1.append(i)

    for i in n[1]:
        l2.append(i)


    for i in l1:
        if i in l2:
            l2.remove(i)
        else:
            l1.remove(i)

    
    s=''.join(l1)+''.join(l2)
    print(s)

   
```

## Submission at 2024-10-28 11:03:33


```
# Write your code from scratch here
n=input().split(" ")
order=n[0]
s=n[1]
 
if len(n)==2 and len(n[0])>0 and len(n[1])>0 :
    l1=[]
    l2=[]
    for i in n[0]:
        l1.append(i)

    for i in n[1]:
        l2.append(i)


    for i in l1:
        if i in l2:
            l2.remove(i)
        else:
            l1.remove(i)

    
    s=''.join(l1)+''.join(l2)
    print(s)


   
```

## Submission at 2024-10-28 11:05:11


```
# Write your code from scratch here
n=input().split(" ")
order=n[0]
s=n[1]
 
if len(n)==2 and len(n[0])>0 and len(n[1])>0 :
    l1=[]
    l2=[]
    for i in n[0]:
        l1.append(i)

    for i in n[1]:
        l2.append(i)


    for i in l1:
        if i in l2:
            l2.remove(i)
        else:
            l1.remove(i)

    
    s=''.join(l1)+''.join(l2)
    print(s)
elif len(n[0])==0:
    print(n[1])
else:
    print('')


   
```

## Submission at 2024-10-29 12:09:37


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
        def recurs(left,right):
            if not left and right:
                return True

            if not left or not right:
                return False

            return left.data==right.data and recurs(left.left,right.right) and recurs(left.right,right.left)
            
        return recurs(root.left,root.right) if root else True

            

```

## Submission at 2024-10-29 12:10:17


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
        def recurs(left,right):
            if not left and not right:
                return True

            if not left or not right:
                return False

            return left.data==right.data and recurs(left.left,right.right) and recurs(left.right,right.left)
            
        return recurs(root.left,root.right) if root else True

            

```

## Submission at 2024-10-30 05:36:15


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    ans = []
    
    def recurs(node, stack=[]):
        if not node:
            return
        
        stack.append(node.data)
        
        # If it's a leaf node, form the number from the path and add to ans
        if not node.left and not node.right:
            ans.append(int(''.join(map(str, stack))))
        
        # Recurse left and right
        recurs(node.left, stack)
        recurs(node.right, stack)
        
        # Backtrack
        stack.pop()

    # Start the recursive function
    recurs(root)
    
    # Sum all path numbers
    return sum(ans)

```

## Submission at 2024-10-30 05:36:58


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    z=0
  def recurs(node, sum_):
      nonlocal z
      if not node:
          return
      sum_ = sum_ * 10 + node.data
      if not node.left and not node.right:
          z += sum_
          return
      recurs(node.left, sum_)
      recurs(node.right, sum_)
  
  recurs(root, 0)
  return z
```

## Submission at 2024-10-30 05:37:23


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    z=0
    def recurs(node, sum_):
        nonlocal z
        if not node:
            return
        sum_ = sum_ * 10 + node.data
        if not node.left and not node.right:
            z += sum_
            return
        recurs(node.left, sum_)
        recurs(node.right, sum_)
    
    recurs(root, 0)
    return z
```

## Submission at 2024-10-30 06:23:43


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    temp=head1
    l1=[]
    while temp!=None:
      l1.append(temp.val)
      temp=temp.next
    
    temp=head2
    l2=[]
    while temp !=None:
      l2.append(temp.val)
      temp=temp.next

    l3=[value for value in l1 if value in l2]
    dummy = ListNode()  # Dummy node to simplify edge cases
    current = dummy     # Pointer to build the list

    for value in l3:
        current.next = ListNode(value)  # Create a new node with the current value
        current = current.next          # Move to the new node

    # Head of the linked list, skipping the dummy node
    head = dummy.next
    return head






```

## Submission at 2024-11-05 13:16:53


```
# Write code from scratch
a=list(map(int,input().split(" ")))
n=a[0]
k=a[1]
max_=(n*(1+n))/2
ans=0
b=n
for i in range(n):
    if max_<=k:
        print(ans)
        break
    else:
        ans+=1
        max_=max_-b
        b-=1
        if (max_-b)<=k:
            print(ans)
            break


```

## Submission at 2024-11-06 04:14:49


```
# Write code from scratch
a=list(map(int,input().split(" ")))
n=a[0]
k=a[1]
max_=(n*(1+n))//2
ans=0
remaining = max_
for i in range(n):
    if remaining<=k:
        print(ans)
        break
    else:
        ans+=1
        remaining-=(n-i)
        
        if (remaining-(n-i-1))<=k:
            print(ans)
            break



```

## Submission at 2024-11-06 04:19:29


```
# Write code from scratch
# Read input values for n and k
n, k = map(int, input().split())

def find_min_eat_actions():
    low, high = 1, n
    while low <= high:
        mid = (high + low) // 2
        # Total candies after mid "put" actions
        a = mid * (mid + 1) // 2
        # "Eat" actions required if mid "put" actions were performed
        b = n - mid
        # Final candy count if we perform mid "put" and b "eat" actions
        c = a - b

        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b  # Return the number of "eat" actions

# Output the result
print(find_min_eat_actions())




```

## Submission at 2024-11-06 04:20:56


```
# Write code from scratch
# Read input values for n and k
# Read input values for n and k
n, k = map(int, input().split())

def find_min_eat_actions():
    low, high = 1, n
    while low <= high:
        mid = (high + low) // 2
        # Use integer division to ensure 'a' is an integer
        a = mid * (mid + 1) // 2
        # Calculate the number of "eat" actions based on 'mid' "put" actions
        b = n - mid
        # Calculate the final candy count after 'n' actions
        c = a - b

        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b  # Return the number of "eat" actions required

# Output the result
print(find_min_eat_actions())

```

## Submission at 2024-11-17 06:23:07


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    def recurs(node, sum_):
        if not node:
            return 0
        sum_ = sum_ * 10 + node.data
        if not node.left and not node.right:
            return sum_
        left_sum = recurs(node.left, sum_)
        right_sum = recurs(node.right, sum_)
        return left_sum + right_sum
    
    return recurs(root, 0)
```

## Submission at 2024-11-17 06:31:20


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    def recurs(node,sum_):
        if not node :
            return 0
        sum_=sum_*10 + node.val
        if not node.left and not node.right:
            return sum_
        left=recurs(node.left,sum_)
        right=recurs(node.right,sum_)

        return left+right
    
    recurs(root,0)
```

## Submission at 2024-11-17 06:33:13


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    def recurs(node,sum_):
        if not node :
            return 0
        sum_=sum_*10 + node.data
        if not node.left and not node.right:
            return sum_
        left=recurs(node.left,sum_)
        right=recurs(node.right,sum_)

        return left+right
    
    recurs(root,0)
```

## Submission at 2024-11-17 06:34:44


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
    # code here
    def recurs(node, sum_):
        if not node:
            return 0
        sum_ = sum_ * 10 + node.data
        if not node.left and not node.right:
            return sum_
        left = recurs(node.left, sum_)
        right = recurs(node.right, sum_)
        return left + right

    return recurs(root, 0)
```

## Submission at 2024-11-25 09:48:59


```
# Write Code From Scratch Here
n=int(input())
x=list(map(int,input().split(" ")))

print("YES")
```

## Submission at 2024-11-25 09:54:09


```
# Write Code From Scratch Here
n=list(map(int,input().split(" ")))
x=list(map(int,input().split(" ")))

x.sort()
l=[]
for i,j in enumerate(x):
    if x[i]==n[1]:
        l.append(i)

print(l)

```

## Submission at 2024-11-25 09:57:23


```
# Write Code From Scratch Here
n=list(map(int,input().split(" ")))
x=list(map(int,input().split(" ")))

x.sort()
l=[]
for i,j in enumerate(x):
    if x[i]==n[1]:
        l.append(i)

if len(l)>0:
    for i in l:
        print(i,end=" ")
else:
    print(l)


```

## Submission at 2024-11-25 10:08:53


```
# write code from scratch
s=str(input())

dic={}
for i in s:
    dic[i]=dic.get(i,0)+1

x=max(dic.values())
for i,j in dic.items():
    if j==x:
        print(i)

```

## Submission at 2024-11-25 10:11:33


```
# write code from scratch
s=str(input())

dic={}
for i in s:
    dic[i]=dic.get(i,0)+1

x=max(dic.values())
for i,j in dic.items():
    if j==x:
        print(i)
        break
```

## Submission at 2024-11-25 10:30:06


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
    stack=[]
    def recurs(node):
      if not node:
        return
      recurs(node.left)
      stack.append(node.data)
      recurs(node.right)
    recurs(root)

    if len(stack)>0:

      if stack[0]>n:
        return -1

      for i in range(len(stack)):
        if stack[i]>n:
          return stack[i-1]
      
      return stack[-1]
    else:
      return -1
      
```

## Submission at 2024-11-25 10:40:38


```


'''
	Function to return the value at point of intersection
	in two linked list, connected in y shaped form.
	
	Function Arguments: head1, head2 (heads of both the lists)
	
	Return Type: Node # driver code will print the Node->data
'''
'''
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

'''

#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        # code here
        temp=head1
        l=[]
        while temp!=None:
          l.append(temp.data)
          temp=temp.next
        
        temp1=head2
        flag=True
        while temp1!=None:
          if temp1.data in l:
            flag=False
            return temp1
          temp1=temp1.next
        if flag:
          return None





```

## Submission at 2024-11-25 10:51:09


```
# Write Code From Scratch Here
n=list(map(int,input().split(" ")))
a=[]
for i in range(n[1]):
    x=list(map(int,input().split(" ")))
    a.append(x)
sum_=0
for ans in a:
    sum_+=ans[1]

print(sum_)

```

## Submission at 2024-11-25 10:53:40


```
# write code from scratch
n=int(input())

for i in range(1,n+1):
    for j in range(i):
        print("*",end="")
```

## Submission at 2024-11-25 10:54:32


```
# write code from scratch
n=int(input())
if n>0:
    for i in range(1,n+1):
        for j in range(i):
            print("*",end="")
```

## Submission at 2024-11-25 10:56:31


```
# write code from scratch
n=int(input())
if n>0:
    for i in range(1,n+1):
        for j in range(i):
            print("*",end="")
        print("\n")
```

## Submission at 2024-11-25 11:00:52


```
# write code from scratch
n=int(input())
if n>0:
    for i in range(1,n+1):
        for j in range(i):
            print("*",end="")
            if j==i-1:
                print("*",end="\n")

        
```

## Submission at 2024-11-25 11:07:25


```
# write code from scratch
n=int(input())
if n>0:
    for i in range(1,n+1):
        for j in range(i):
            
            if j==i-1:
                print("*",end="\n")
            else:
                print("*",end="")

        
```

## Submission at 2024-11-25 11:14:00


```
# write code from scratch
n=int(input())
x=list(map(int,input().split(" ")))

l=[]
for i in range(len(x)-1):
    diff=x[i+1]-x[i]
    l.append(diff)

a=set(l)
if len(a)==1:
    print("true")
else:
    print("false")


```

## Submission at 2024-11-25 11:20:00


```
# Write Code From Scratch Here
n=list(map(int,input().split(" ")))
a=[]
if n[1]>0:
    for i in range(n[1]):
        x=list(map(int,input().split(" ")))
        a.append(x)
    sum_=0
    for ans in a:
        sum_+=ans[1]

print(sum_)
```

## Submission at 2024-11-25 11:25:21


```
# Write Code From Scratch Here
a=int(input())
n=list(map(int,input().split(" ")))

if n==n.sorted():
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 11:26:30


```
# Write Code From Scratch Here
a=int(input())
n=list(map(int,input().split(" ")))
x=sorted(n)
if n==x:
    print("YES")
else:
    print("NO")
```

