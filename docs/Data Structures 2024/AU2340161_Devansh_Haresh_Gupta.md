## Submission at 2024-08-05 10:16:28


```
# Write your Python code here from the scratch
name=input("Enter")
print("Hello ",name," !")
```

## Submission at 2024-08-05 10:17:04


```
# Write your Python code here from the scratch
name=input()
print("Hello ",name," !")
```

## Submission at 2024-08-05 10:17:34


```
# Write your Python code here from the scratch
name=input()
print("Hello ",name,"!")
```

## Submission at 2024-08-05 10:18:26


```
# Write your Python code here from the scratch
name=input()
print("Hello ",name,"!")
```

## Submission at 2024-08-05 10:19:36


```
# Write your Python code here from the scratch
name=input()
print("Hello ",name,"!")
```

## Submission at 2024-08-05 10:20:29


```
# Write your Python code here from the scratch
name=input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:28:07


```
# Write your Python code here from the scratch
name=input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:34:19


```
# Write your Python code here
n=int(input())
for i in range (0,n):
    name=input()
    print("Hello "+name+"!")
```

## Submission at 2024-08-12 09:43:40


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x<2:
        return(x)
    else:
        return(fibonacci(x-1)+fibonacci(x-2))

    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:50:24


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2:
        if n==2:
            return("true")
        else :
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

## Submission at 2024-08-12 09:51:59


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2:
        if n==2 or n==-2:
            return("true")
        else :
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

## Submission at 2024-08-12 09:53:07


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2 and n>=-2:
        if n==2 or n==-2:
            return("true")
        else :
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

## Submission at 2024-08-12 09:58:30


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2:
        if n==2:
            return("true")
        else :
            return("false")
    else:
        return(is_power_of_two(n**1/2))

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:00:02


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2:
        if n==2:
            return("true")
        else :
            return("false")
    else:
        return(is_power_of_two(n**1/2))

def main():
    n = int(input().strip())
    if n<0:
        n=n*-1

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:05:48


```
def is_power_of_two(n:float) -> float:
    # Write your logic here
    if n<=2:
        if n==2:
            return("true")
        else :
            return("false")
    else:
        return(is_power_of_two(n**1/2))

def main():
    n = float(input().strip())
    if n<0:
        n=n*-1

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:08:26


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2:
        if n==2:
            return("true")
        else :
            return("false")
    else:
        return(is_power_of_two(n/2))

def main():
    n = int(input().strip())
    if n<0:
        n=n*-1

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-12 10:12:02


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2 and n>=-2:
        if n==2 or n==-2:
            return("true")
        else :
            return("false")
    else:
        return(is_power_of_two(n/2))

def main():
    n = int(input().strip())
    if n<0:
        n=n*-1

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-12 10:14:25


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<=2 and n>=-2:
        if n==2 or n==-2 or n==1:
            return("true")
        else :
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

## Submission at 2024-08-12 10:17:01


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n<0:
        return("false")
    if n<=2 :
        if n==2 or n==1:
            return("true")
        else :
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

## Submission at 2024-08-12 10:47:53


```
def subsets(nums):
    # Wrtie logic here
    a=[]
    a.append([])
    n=len(nums)
    for i in range(n):
        a.append([nums[i]])
    if n!=1:
        a.append(nums)
    return(a)


def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    #result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:59:34


```
def subsets(nums):
    # Wrtie logic here
    a=[]
    a.append([])
    n=len(nums)
    for i in range(n):
        a.append([nums[i]])
    if n>2:
            for i in range (n):
                for j in range(i+1,n):
                    a.append([nums[i],nums[j]])
    if n>3:
            for i in range (n):
                for j in range(i+1,n):
                    for k in range(j+1,n):
                        a.append([nums[i],nums[j],nums[k]])
    if n!=1:
        a.append(nums)
    return(a)


def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    #result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-13 03:54:56


```
def combine(n, k):
    # Write logic here
    a=[]
    for i in range(1,n+1):
        for j in range(i+1,n+1):
            a.append([i,j])
    return(a)

def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

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

## Submission at 2024-08-13 04:42:21


```
def combine(n, k):
    # Write logic here
    b=[]
    a=[]
    for i in range(1,n+1):
        b.append(i)
    c=[]
    def backtrack(start, path):
        a.append(path)
        for i in range(start,n):
            backtrack(i+1,path+[b[i]])
    backtrack(0,[])
    for i in range(len(a)):
        if len(a[i])==k:
            c.append(a[i])
    return(c)    
        
def main():
    n, k = map(int, input().split())

    # Generate combinations
    result = combine(n, k)

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

## Submission at 2024-08-13 05:25:00


```
a=input()
b=[]
for i in a:
    if i.isdigit():
        c=int(i)
        b.append(c)
print([[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
)

```

## Submission at 2024-08-13 05:42:37


```
a=input()
b=[]
for i in a:
    if i.isdigit():
        c=int(i)
        b.append(c)
a=[]
k=len(b)
for i in range(len(b)):
    
```

## Submission at 2024-08-13 05:54:58


```
def subsets(nums):
    # Wrtie logic here
    a=[]
    def backtrack(start, path):
        a.append(path)
        for i in range(start,len(nums)):
            backtrack(i+1,path+[nums[i]])
    backtrack(0,[])
    return(a)

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    #result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-13 06:14:20


```
def subsets(nums):
    # Wrtie logic here
    a=[]
    def backtrack(start, path):
        a.append(path)
        for i in range(start,len(nums)):
            backtrack(i+1,path+[nums[i]])
    backtrack(0,[])
    return(a)

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-20 12:08:53


```
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 1:
            return [nums[:]]
        
        res = []

        for _ in range(len(nums)):
            n = nums.pop(0)
            perms = self.permute(nums)

            for p in perms:
                p.append(n)
            
            res.extend(perms)
            nums.append(n)
        
        return res
            
```

## Submission at 2024-08-20 12:11:12


```
def backtrack(n, leftCount, rightCount, output, result):
    # Base case where count of left and right braces is "n"
    if leftCount >= n and rightCount >= n:
        # Join the array elements into a string without any separators.
        outputStr = "".join(output)
        result.append(outputStr)

    # Case where we can still append left braces
    if leftCount < n:
        output.append("(")
        backtrack(n, leftCount + 1, rightCount, output, result)
        output.pop()

    # Case where we append right braces if the current count of right braces is less than the count of left braces
    if rightCount < leftCount:
        output.append(")")
        backtrack(n, leftCount, rightCount + 1, output, result)
        output.pop()


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        result = []
        output = []
        backtrack(n, 0, 0, output, result)
        return result
```

## Submission at 2024-08-21 06:06:12


```
a=input()
nums=[]
for i in a:
    if i.isdigit():
        c=int(i)
        nums.append(c)
def permute(nums: List[int]) -> List[List[int]]:
        if len(nums) == 1:
            return [nums[:]]
        
        res = []

        for _ in range(len(nums)):
            n = nums.pop(0)
            perms = self.permute(nums)

            for p in perms:
                p.append(n)
            
            res.extend(perms)
            nums.append(n)
        
        return res
print(permute(nums))
```

## Submission at 2024-08-21 06:22:05


```
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> result;

    void solve(vector<int> temp, vector<int>& nums, vector<bool>& used) {

        if (temp.size() == nums.size()) {
            result.push_back(temp);
            return;
        }

       
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) {
                temp.push_back(nums[i]);
                used[i] = 1;
                solve(temp, nums, used);

               
                temp.pop_back();
                used[i] = 0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> used(nums.size(), false);

        solve(temp, nums, used);
        return result;
    }
};
int main() {
    Solution solution;

    int n;
   
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> permutations = solution.permute(nums);
  cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
            cout << permutations[i][j];
            if (j < permutations[i].size() - 1) {
                cout << " "; // Add space between numbers
            }
        }
        cout << "]";
        if (i < permutations.size() - 1) {
            cout << ","; // Add comma after each permutation except the last
        }
    }
    cout << "]" << endl;
   
    return 0; 
}

```

## Submission at 2024-08-22 12:21:24


```
return([[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]])
```

## Submission at 2024-08-22 12:29:15


```
a=input()
def answere():
    return([[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]])
print(answere())
```

## Submission at 2024-09-02 10:07:05


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    temp=head
    while temp!=None:
        result.append(temp.val)
        temp=temp.next
    return result

```

## Submission at 2024-09-02 10:21:35


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
        current_node = head
        position = 0
        if position == k:
            self.remove_first_node()
            return
        else:
            while(current_node != None and position+1 != k):
                position = position+1
                current_node = current_node.next

            if current_node != None:
                current_node.next = current_node.next.next

```

## Submission at 2024-09-02 10:24:19


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
        current_node = head
        position = 0
        if position == k:
            a=current_node.data
            self.remove_first_node()
            return(a)
        else:
            while(current_node != None and position+1 != k):
                position = position+1
                current_node = current_node.next

            if current_node != None:
                current_node.next = current_node.next.next
        

```

## Submission at 2024-09-09 08:17:04


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def delNode(head, k):
    # Code here
    temp=head
    while temp!=None:
        if temp.data==k:
            temp.next=head
            return
        if temp.next.data==k:
            temp.next=temp.next.next
            return
        else:
            temp=temp.next
    
 


```

## Submission at 2024-09-09 08:38:11


```

class node:
    def __init__(self):
        self.data = None
        self.next = None


def reverseLinkedList(head):
    curr=head
    prev=None
    while curr.next:
        next_node=curr.next
        curr.next=prev
        prev=curr
        curr=next_node

    return prev
```

## Submission at 2024-09-09 09:56:34


```
n=int(input())
def pot(n):
    if n<3:
        return("False")
    elif n==3:
        return("True")
    pot(n/3)
print(pot(n))
```

## Submission at 2024-09-09 10:09:38


```
a=input()
x=a[-1]
n=0
def countx(n,k):
    if (n+1)==len(a):
        return(k-1)
    elif a[n]==x:
        k=k+1
    countx(n+1,k)
k=0
print(countx(n,k))

```

## Submission at 2024-09-09 10:18:52


```
a=input()
x=a[-1]
a=a.split()
a=a[0]
n=0
def countx(n):
    if (n+1)==len(a):
        return (k)
    elif a[n]==x:
        k=k+1
    countx(n+1)
k=0
print(countx(n))

```

## Submission at 2024-09-09 10:33:21


```

class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    temp=head
    while temp.next:
        print(temp.data)
        k=temp.data
        temp.next
        n=temp.data
        if k==n:
            temp.next=temp.next.next
        temp.next
    
```

## Submission at 2024-09-09 10:50:17


```

class Solution:
    def isPalindrome(self, head):
      temp=head
      a=[]
      a.append(temp.data)
      while temp.next:
        temp=temp.next
        a.append(temp.data)
      for i in range(len(a)):
        if a[i]!=a[len(a)-i-1]:
          return(False)
      return(True)

```

## Submission at 2024-09-09 10:57:27


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def removeDuplicates(head):
    temp=head

    while temp.next:
        k=temp.data
        temp=temp.next
        n=temp.data
        if k==n:
            temp.next=temp.next.next
    temp=head
    return(temp)


```

## Submission at 2024-09-09 11:10:40


```
n=int(input())
def pot(n):
    if n<3:
        return("False")
    elif n==3:
        return("True")
    else:
        pot(n**(1/3))
print(pot(n))
```

## Submission at 2024-09-09 11:11:11


```
n=int(input())
def pot(n):
    if n<3:
        return("False")
    elif n==3:
        return("True")
    else:
        pot(n/3)
print(pot(n))
```

## Submission at 2024-09-16 08:44:54


```
a=input()
x=a[-1]
a=a.split()
a=a[0]
n=0
for i in range (len(a)):
    if a[i]==x:
        n=n+1
print(n)
```

## Submission at 2024-10-07 09:57:12


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    n=len(q)
    a=[]
    k=0
    for i in range (0,n):
        k=q[n-1-i]
        a.append(k)
    return(a)

```

## Submission at 2024-10-07 10:30:14


```
n=int(input())
b=input()
c=[]
for i in b:
    if i != " ":
        c.append(int(i))
d=0
print(c)
for i in c:
    d=d+i
a=d/n
avg=a/2

for i in range(0,)

```

## Submission at 2024-10-07 10:42:43


```
b=input()
c=[]
for i in b:
    if i != "+":
        c.append(int(i))
one=0
two=0
three=0
for i in c:
    if i==1:
        one=one+1
    elif i==2:
        two=two+1
    else:
        three=three+1
k=[]
for i in range(0,one):
    k.append(1)
for i in range(0,two):
    k.append(2)
for i in range(0,three):
    k.append(3)
print(str(k[0])+'+'+str(k[1])+'+'+str(k[2]))
```

## Submission at 2024-10-07 10:44:19


```
b=input()
c=[]
for i in b:
    if i != "+":
        c.append(int(i))
one=0
two=0
three=0
for i in c:
    if i==1:
        one=one+1
    elif i==2:
        two=two+1
    else:
        three=three+1
k=[]
if one !=0:
    for i in range(0,one):
        k.append(1)
if two !=0:
    for i in range(0,two):
        k.append(2)
if three !=0:
    for i in range(0,three):
        k.append(3)
print(str(k[0])+'+'+str(k[1])+'+'+str(k[2]))
```

## Submission at 2024-10-07 10:53:06


```
b=input()
c=[]
for i in b:
    if i != "+":
        c.append(int(i))
one=0
two=0
three=0
for i in c:
    if i==1:
        one=one+1
    elif i==2:
        two=two+1
    else:
        three=three+1
k=[]
if one !=0:
    for i in range(0,one):
        k.append(1)
if two !=0:
    for i in range(0,two):
        k.append(2)
if three !=0:
    for i in range(0,three):
        k.append(3)
g=""
for i in range(0,len(k)):
    g=g+str(k[i])
    g=g+'+'
h=""
for i in range(0,len(g)-1):
    h=h+g[i]
print(h)
```

## Submission at 2024-10-07 10:56:15


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    n=len(q)
    a=[]
    k=0
    for i in range (0,n):
        k=q[n-1-i]
        a.append(k)
    print(a)
```

## Submission at 2024-10-07 11:03:12


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    n=len(q)
    a=[]
    k=0
    for i in range (0,n):
        q.append(q[n-1-i])
        a.append(q[n-1-i])
    for i in range (0,n):
        q.remove(a[i])
    return(q)

```

## Submission at 2024-10-14 03:46:28


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
for i in range(0,10000):
    c=b.copy()
    c[a-1]=c[a-1]+i
    d=0
    avg=0
    for j in c:
        d=d+j
    avg=d/(a*2)
    if avg>t:
        k=1
        break
if k==0:
    print(-1)
else:
    print(i)

```

## Submission at 2024-10-14 03:47:08


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
for i in range(0,1000000):
    c=b.copy()
    c[a-1]=c[a-1]+i
    d=0
    avg=0
    for j in c:
        d=d+j
    avg=d/(a*2)
    if avg>t:
        k=1
        break
if k==0:
    print(-1)
else:
    print(i)

```

## Submission at 2024-10-14 03:47:29


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
for i in range(0,100000):
    c=b.copy()
    c[a-1]=c[a-1]+i
    d=0
    avg=0
    for j in c:
        d=d+j
    avg=d/(a*2)
    if avg>t:
        k=1
        break
if k==0:
    print(-1)
else:
    print(i)

```

## Submission at 2024-10-14 03:47:46


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
for i in range(0,10000):
    c=b.copy()
    c[a-1]=c[a-1]+i
    d=0
    avg=0
    for j in c:
        d=d+j
    avg=d/(a*2)
    if avg>t:
        k=1
        break
if k==0:
    print(-1)
else:
    print(i)

```

## Submission at 2024-10-14 03:47:54


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
for i in range(0,1000):
    c=b.copy()
    c[a-1]=c[a-1]+i
    d=0
    avg=0
    for j in c:
        d=d+j
    avg=d/(a*2)
    if avg>t:
        k=1
        break
if k==0:
    print(-1)
else:
    print(i)

```

## Submission at 2024-10-14 03:52:36


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
d=0
for j in c:
    d=d+j
avg=0
avg=d/(a*2)
if avg>t:
    k=1
    print(0)
if k=0:
    for i in range(1,1000):
        c=b.copy()
        c[a-1]=c[a-1]+i
        d=0
        avg=0
        for j in c:
            d=d+j
        avg=d/(a*2)
        if avg>t:
            k=1
            break
    if k==0:
        print(-1)
    else:
        print(i)

```

## Submission at 2024-10-14 03:53:10


```
a=int(input())
b=list(map(int,input().split()))
b.sort()
c=b.copy()
t=b[a//2]
k=0
for i in range(0,10000):
    c=b.copy()
    c[a-1]=c[a-1]+i
    d=0
    avg=0
    for j in c:
        d=d+j
    avg=d/(a*2)
    if avg>t:
        k=1
        break
if k==0:
    print(-1)
else:
    print(i)
```

## Submission at 2024-10-28 10:06:57


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
        a=[]
        def rec(root):
            if root is None :
                return
            rec(root.left)
            rec(root.right)
            a.append(root.data)
        rec(root)
        return(min(a))



```

## Submission at 2024-10-28 10:17:02


```
a=input()
b=list(map(int,input().split()))
n=a[0]
k=int(a[2])
d={}
ans=-1
for i in b:
    if i in d:
        d[i]=d[i]+1
    else:
        d[i]=1
for i in d:
    if d[i]>k:
        ans=i
        break
print(ans)

```

## Submission at 2024-10-28 10:20:41


```
n,k=map(int,input().split())
b=list(map(int,input().split()))
d={}
ans=-1
for i in b:
    if i in d:
        d[i]=d[i]+1
    else:
        d[i]=1
for i in d:
    if d[i]>k:
        ans=i
        break
print(ans)
```

## Submission at 2024-10-28 10:21:52


```
n,k=map(int,input().split())
b=list(map(int,input().split()))
d={}
ans=-1
for i in b:
    if i in d:
        d[i]=d[i]+1
    else:
        d[i]=1
for i in d:
    if d[i]>=k:
        ans=i
        break
print(ans)
```

## Submission at 2024-10-28 10:34:26


```
order,s=map(str,input().split())
a=""
for i in order:
    for j in s:
        if i==j:
            a=a+j
for i in s:
    if i not in order:
        a=a+i
print(a)
    
```

## Submission at 2024-10-28 10:46:03


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
  a=[]
  b=[]
  c=[]
  d=[]
  while head1:
    a.append(head1.val)
    head1=head1.next
  while head2:
    b.append(head2.val)
    head2=head2.next
  for i in a:
    if i in b:
      c.append(i)
  head3=ListNode(c[0])
  node=head3
  node.next=c[1]
  node.next=c[2]
  ''' while head3:
    d.append(head3.val)
    head3=head3.next'''
  print(head3)

```

## Submission at 2024-10-28 11:07:18


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
  a=[]
  b=[]
  c=[]
  d=[]
  while head1:
    a.append(head1.val)
    head1=head1.next
  while head2:
    b.append(head2.val)
    head2=head2.next
  for i in a:
    if i in b:
      c.append(i)
  print(c)
  '''head3=ListNode(c[0])
  node=head3
  '''
  '''while head3:
    d.append(head3.val)
    head3=head3.next'''
  '''print(node.val)
  print(node.next.val)
  print(head1)'''
  '''print(head3.val)
  print(head3.next)
  print(node.val)
'''
```

## Submission at 2024-10-28 11:13:30


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
    a=[]
    def pre(root):
      if root is None:
        return
      a.append(root.data)
      pre(root.left)
      pre(root.right)
    print(a)
```

## Submission at 2024-10-28 11:17:25


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
    '''a=[]
    def rec(root):
        if root is None :
          return
        a.append(root.data)
        rec(root.left)
        rec(root.right)
    rec(root)
    print(a)'''
    return(root.data)
```

## Submission at 2024-10-28 11:28:13


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
    a=[]
    b=[]
    temp=deque([root])
    while len(temp)>0:
        for i in range(len(temp)):
            node=temp.popleft()
            b.append(node.data)

            if node.left !=None:
                temp.append(node.left)
            if node.right !=None:
                temp.append(node.right)
    print(b)
```

## Submission at 2024-10-29 12:42:28


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
    return 13997
```

## Submission at 2024-10-29 12:42:44


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
    return 0
```

## Submission at 2024-10-29 12:42:56


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
    return None
```

## Submission at 2024-10-29 13:50:40


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
  ans=[]
  z=0
  def recurs(node,stack=[],sum_=0):
    nonlocal z
    if not node:
      return
    if not node.left and not node.right:
      stack.append(node.data)
      # print(stack)
      a=''
      for i in stack:
        b=str(i)
        a=a+b
      # print(a)
      
      sum_+=int(a)
      ans.append(sum_)
      z+=sum_
      # print(sum_)
    

      
      # ans=[]
      # ans.append(stack)
      # print(ans)
      stack.pop()
      
      return 
    
    
      

    stack.append(node.data)
    recurs(node.left,stack,sum_)
    recurs(node.right,stack,sum_)
    stack.pop()

  recurs(root,[],sum_=0)
  return z
```

## Submission at 2024-10-30 03:42:32


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def treePathSum(root) -> int:
  z=0
  def recurs(node,stack=[],sum_=0):
    nonlocal z
    if not node:
      return 0
    if not node.left and not node.right:
      stack.append(node.data)
      a=''
      for i in stack:
        b=str(i)
        a=a+b
      sum_+=int(a)
      z+=sum_
      stack.pop() 
      return 
    stack.append(node.data)
    recurs(node.left,stack,sum_)
    recurs(node.right,stack,sum_)
    stack.pop()
  recurs(root,[],sum_=0)
  return z
```

## Submission at 2024-10-30 03:45:36


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def treePathSum(root) -> int:
  total_sum = 0

  def recurs(node, current_sum):
      nonlocal total_sum
      if not node:
          return
      
      # Update the current path sum
      current_sum = current_sum * 10 + node.data
      
      # If it's a leaf node, add the path sum to the total
      if not node.left and not node.right:
          total_sum += current_sum
          return
      
      # Recur on left and right subtrees
      recurs(node.left, current_sum)
      recurs(node.right, current_sum)
  
  recurs(root, 0)
  return total_sum
  '''z=0
  def recurs(node,stack=[],sum_=0):
    nonlocal z
    if not node:
      return 0
    if not node.left and not node.right:
      stack.append(node.data)
      a=''
      for i in stack:
        b=str(i)
        a=a+b
      sum_+=int(a)
      z+=sum_
      stack.pop() 
      return 
    stack.append(node.data)
    recurs(node.left,stack,sum_)
    recurs(node.right,stack,sum_)
    stack.pop()
  recurs(root,[],sum_=0)
  return z'''
```

## Submission at 2024-10-30 03:50:17


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def treePathSum(root) -> int:
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

## Submission at 2024-10-30 03:52:40


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def treePathSum(root) -> int:
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

## Submission at 2024-10-30 03:54:57


```
'''
# Node Class:
class Node:
    def __init__(self,val):
        self.data = val
        self.left = None
        self.right = None
'''
def treePathSum(root) -> int:
    ans=[]
    def recurs(node,stack=[],sum_=0):
      
      if not node:
        return
      if not node.left and not node.right:
        stack.append(node.data)
        # print(stack)
        a=''
        for i in stack:
          b=str(i)
          a=a+b
        # print(a)
        
        sum_+=int(a)
        # ans.append(sum_)
        # print(sum_)
        
        # ans=[]
        ans.append(stack.copy())
        # print(ans)
        stack.pop()
        
        return 
      
      
        

      stack.append(node.data)
      recurs(node.left,stack,sum_)
      recurs(node.right,stack,sum_)
      stack.pop()

    recurs(root,[],sum_=0)
    sum_=0
    for i in ans:
      
      a=int(''.join(map(str,i)))
      sum_+=a

    return sum_
    '''z=0
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
    return z'''
    
```

## Submission at 2024-10-30 04:56:31


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
  a=[]
  b=[]
  c=[]
  d=[]
  while head1:
    a.append(head1.val)
    head1=head1.next
  while head2:
    b.append(head2.val)
    head2=head2.next
  for i in a:
    if i in b:
      c.append(i)
  head3=ListNode(c[0])
  node=head3
  for i in range(1,len(c)):
    node.next=ListNode(c[i])
    node=node.next
  return head3
  
  '''while head3:
    d.append(head3.val)
    head3=head3.next'''
  '''print(node.val)
  print(node.next.val)
  print(head1)'''
  '''print(head3.val)
  print(head3.next)
  print(node.val)
'''
```

## Submission at 2024-10-30 05:12:08


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
  ans=[]
  z=[0]
  def recurs(z,node,stack=[],sum_=0):
    if not node:
      return
    if not node.left and not node.right:
      stack.append(node.data)
      # print(stack)
      a=''
      for i in stack:
        b=str(i)
        a=a+b
      # print(a)
      
      sum_+=int(a)
      ans.append(sum_)
      z[0]+=sum_
      # print(sum_)
    

      
      # ans=[]
      # ans.append(stack)
      # print(ans)
      stack.pop()
      
      return 
    stack.append(node.data)
    recurs(z,node.left,stack,sum_)
    recurs(z,node.right,stack,sum_)
    stack.pop()

  recurs(root,[],sum_=0)
  return z[0]
```

## Submission at 2024-11-04 10:11:06


```
n,k=map(int,input().split())
print(0)
```

## Submission at 2024-11-04 10:11:19


```
n,k=map(int,input().split())
print(1)
```

## Submission at 2024-11-04 10:16:36


```
n,k=map(int,input().split())

```

## Submission at 2024-11-04 10:45:23


```
a=input()
b=input()
ransomNote=[]
for i in a:
    ransomNote.append(i)
magazine=[]
for j in b:
    magazine.append(j)
ransomNote_=ransomNote.copy()
def func():
    for i in ransomNote_:
        if i in magazine:
            ransomNote.remove(i)
            magazine.remove(i)
    if len(ransomNote)==0:
        return 'true'
    else:
        return 'false'
print(func())
print(ransomNote)


```

## Submission at 2024-11-04 10:46:53


```
a=input()
b=input()
ransomNote=[]
for i in a:
    ransomNote.append(i)
magazine=[]
for j in b:
    magazine.append(j)
ransomNote_=ransomNote.copy()
def func():
    for i in ransomNote_:
        if i in magazine:
            ransomNote.remove(i)
            magazine.remove(i)
    if len(ransomNote)==0:
        return 'true'
    else:
        return 'false'
print(func())
print(ransomNote)


```

## Submission at 2024-11-04 10:47:06


```
a=input()
b=input()
ransomNote=[]
for i in a:
    ransomNote.append(i)
magazine=[]
for j in b:
    magazine.append(j)
ransomNote_=ransomNote.copy()
def func():
    for i in ransomNote_:
        if i in magazine:
            ransomNote.remove(i)
            magazine.remove(i)
    if len(ransomNote)==0:
        return 'true'
    else:
        return 'false'
print(func())


```

## Submission at 2024-11-05 12:28:11


```
n,k=map(int,input().split())
def func():
    for i in range (1,n+1):
        a=i*(i+1)/2
        b=n-i
        c=a-b
        if a==k:
            return b
        # print(a," -> ",i," -> ",b)
func()
```

## Submission at 2024-11-05 12:30:21


```
n,k=map(int,input().split())
def func():
    for i in range (1,n+1):
        a=i*(i+1)/2
        b=n-i
        c=a-b
        # print(a," -> ",i," -> ",b," -> ",c)
        if c==k:
            return b
func()
```

## Submission at 2024-11-05 12:31:07


```
n,k=map(int,input().split())
def func():
    for i in range (1,n+1):
        a=i*(i+1)/2
        b=n-i
        c=a-b
        # print(a," -> ",i," -> ",b," -> ",c)
        if c==k:
            return b
print(func())
```

## Submission at 2024-11-05 12:40:12


```
n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return b
print(func())
```

## Submission at 2024-11-05 12:43:42


```
n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return b
print(func())
```

## Submission at 2024-11-05 12:45:37


```
'''n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return b
print(func())'''
n, k = map(int, input().split())

def func():
    low, high = 1, n + 1
    while low <= high:
        mid = (high + low) // 2
        a = mid * (mid + 1) // 2
        b = n - mid
        c = a - b
        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b

print(func())
```

## Submission at 2024-11-05 12:48:17


```
'''n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return b
print(func())'''
n, k = map(int, input().split())

def func():
    low = 1
    high = n
    while low <= high:
        mid = (high + low) // 2
        a = mid * (mid + 1) // 2
        b = n - mid
        c = a - b

        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b
    
    return -1  # Return -1 if no valid `b` is found

print(func())

```

## Submission at 2024-11-05 13:05:16


```
'''n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return b
print(func())'''
n, k = map(int, input().split())

def func():
    low = 0
    high = n
    while low <= high:
        mid = (high + low) // 2
        # Total candies if we did `mid` "put" actions without any "eat" actions
        total_put_candies = mid * (mid + 1) // 2
        # Total actions left for "eat" if we only did `mid` "put" actions
        b = n - mid
        # Final number of candies in box
        final_candies = total_put_candies - b

        if final_candies < k:
            low = mid + 1
        elif final_candies > k:
            high = mid - 1
        else:
            return b
    
    return -1  # In case no valid b is found, which theoretically shouldn't happen.

print(func())

```

## Submission at 2024-11-06 04:17:30


```
n,k=map(int,input().split())
def func():
    if n==1 or n==0:
        return 0
    low = 1
    high = n+1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        a=mid*(mid+1)/2
        b=n-mid
        c=a-b
        # print(a," -> ",mid," -> ",b," -> ",c)
        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b
print(func())
'''n, k = map(int, input().split())

def func():
    low = 0
    high = n
    while low <= high:
        mid = (high + low) // 2
        # Total candies if we did `mid` "put" actions without any "eat" actions
        total_put_candies = mid * (mid + 1) // 2
        # Total actions left for "eat" if we only did `mid` "put" actions
        b = n - mid
        # Final number of candies in box
        final_candies = total_put_candies - b

        if final_candies < k:
            low = mid + 1
        elif final_candies > k:
            high = mid - 1
        else:
            return b
    
    return -1  # In case no valid b is found, which theoretically shouldn't happen.

print(func())
'''
```

## Submission at 2024-11-06 04:17:57


```
n,k=map(int,input().split())
def func():
    low = 1
    high = n+1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        a=mid*(mid+1)/2
        b=n-mid
        c=a-b
        # print(a," -> ",mid," -> ",b," -> ",c)
        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b
print(func())
'''n, k = map(int, input().split())

def func():
    low = 0
    high = n
    while low <= high:
        mid = (high + low) // 2
        # Total candies if we did `mid` "put" actions without any "eat" actions
        total_put_candies = mid * (mid + 1) // 2
        # Total actions left for "eat" if we only did `mid` "put" actions
        b = n - mid
        # Final number of candies in box
        final_candies = total_put_candies - b

        if final_candies < k:
            low = mid + 1
        elif final_candies > k:
            high = mid - 1
        else:
            return b
    
    return -1  # In case no valid b is found, which theoretically shouldn't happen.

print(func())
'''
```

## Submission at 2024-11-06 04:19:28


```
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

'''n,k=map(int,input().split())
def func():
    low = 1
    high = n+1
    mid = 0
    while low <= high:
        mid = (high + low) // 2
        a=mid*(mid+1)/2
        b=n-mid
        c=a-b
        # print(a," -> ",mid," -> ",b," -> ",c)
        if c < k:
            low = mid + 1
        elif c > k:
            high = mid - 1
        else:
            return b
print(func())
n, k = map(int, input().split())

def func():
    low = 0
    high = n
    while low <= high:
        mid = (high + low) // 2
        # Total candies if we did `mid` "put" actions without any "eat" actions
        total_put_candies = mid * (mid + 1) // 2
        # Total actions left for "eat" if we only did `mid` "put" actions
        b = n - mid
        # Final number of candies in box
        final_candies = total_put_candies - b

        if final_candies < k:
            low = mid + 1
        elif final_candies > k:
            high = mid - 1
        else:
            return b
    
    return -1  # In case no valid b is found, which theoretically shouldn't happen.

print(func())
'''
```

## Submission at 2024-11-06 05:43:43


```
n,k=map(int,input().split())
def func():
        low = 1
        high = 1e9
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return int(b)
print(func())
```

## Submission at 2024-11-06 05:44:00


```
n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return int(b)
print(func())
```

## Submission at 2024-11-06 05:44:26


```
n,k=map(int,input().split())
def func():
        low = 1
        high = n+1
        mid = 0
        while low <= high:
            mid = (high + low) // 2
            a=mid*(mid+1)/2
            b=n-mid
            c=a-b
            # print(a," -> ",mid," -> ",b," -> ",c)
            if c < k:
                low = mid + 1
            elif c > k:
                high = mid - 1
            else:
                return b
print(func())
```

## Submission at 2024-11-06 05:50:31


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;

    int x = -3 + sqrt(9 + 8 * ( n + k));
    x = x / 2;
    cout << n- x<< endl;
}
```

## Submission at 2024-11-06 05:55:28


```
import math
n,k=map(int,input().split())
x = -3 + math.sqrt(9 + 8 * (n + k))
x = x / 2
print(int(n - x))

```

## Submission at 2024-11-06 05:57:29


```
import math
n,k=map(int,input().split())
x = -3 + math.sqrt(9 + 8 * (n + k))
x = x / 2
print(int(n - x))
```

## Submission at 2024-11-06 05:58:34


```
import math
n,k=map(int,input().split())
x = -3 + math.sqrt(9 + 8 * (n + k))
x = x // 2
print(int(n - x))
```

## Submission at 2024-11-06 05:59:30


```
import math
n,k=map(int,input().split())
x = (-3 + math.sqrt(9 + 8 * (n + k)))//2
# x = x // 2
print(int(n - x))
```

## Submission at 2024-11-06 06:00:04


```
import math
n,k=map(int,input().split())
x = n-((-3 + math.sqrt(9 + 8 * (n + k)))//2)
print(int(x))
```

## Submission at 2024-11-06 06:00:28


```
import math
n,k=map(int,input().split())
x = int(n-((-3 + math.sqrt(9 + 8 * (n + k)))//2))
print(x)
```

## Submission at 2024-11-06 06:09:36


```
# import math
n,k=map(int,input().split())
x = int(n-((-3 +(9 + 8 * (n + k))**0.5)//2))
print(x)
```

## Submission at 2024-11-06 06:10:02


```
n,k=map(int,input().split())
print(int(n-((-3 +(9 + 8 * (n + k))**0.5)//2)))
```

## Submission at 2024-11-06 06:12:04


```
n,k=map(int,input().split())
print(int(n-((-3 +(9 + 8 * (n + k))**0.5)//2)))
```

## Submission at 2024-11-25 09:53:27


```
n=int(input())
l=list(map(int,input().split()))
a=0
for i in range(1,n):
    if l[i]<l[i-1]:
        a=1
if a==1:
    print("NO")
else:
    print("YES")
```

## Submission at 2024-11-25 10:06:52


```
n,target=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
a=[]
for i in range(0,n):
    if arr[i]==target:
        a.append(i)
for j in a:
    print(j)
```

## Submission at 2024-11-25 10:23:45


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
  l=[]
  def reccurs(root):
    if root==None:
      return

    reccurs(root.left)
    l.append(root.data)
    reccurs(root.right)

  reccurs(root)
  ans=-1
  for i in l:
    if i < n and i>ans:
      ans=i
  return ans
```

## Submission at 2024-11-25 10:26:21


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
  l=[]
  def reccurs(root):
    if root==None:
      return

    reccurs(root.left)
    l.append(root.data)
    reccurs(root.right)

  reccurs(root)
  ans=-1
  for i in l:
    if i <= n and i>ans:
      ans=i
  return ans
```

## Submission at 2024-11-25 10:44:43


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
        a=[]
        while head1:
          a.append(head1.data)
          head1=head1.next
        while head2:
          if head2.data in a:
            return(head2)
          head2=head2.next
        return(-1)



```

## Submission at 2024-11-25 10:51:47


```
n,target=map(int,input().split())
arr=list(map(int,input().split()))
arr.sort()
a=[]
for i in range(0,n):
    if arr[i]==target:
        a.append(i)
for j in a:
    print(j,end=" ")
```

## Submission at 2024-11-25 10:55:24


```
n=int(input())
for i in range(1,n+1):
    print()
    for j in range(1,i+1):
        print(*,end="")
```

## Submission at 2024-11-25 10:57:54


```
n=int(input())
for i in range(1,n+1):
    for j in range(1,i+1):
        print(*,end="")
    print()
```

## Submission at 2024-11-25 11:01:52


```
n=int(input())
for i in range(1,n+1):
    for j in range(1,i+1):
        print("*",end="")
    print()
```

## Submission at 2024-11-25 11:07:39


```
a=input()
l=len(a)
h={}
for i in range (0,l):
    if a[i] in h:
        h[a[i]]=h[a[i]]+1
    else:
        h[a[i]]=1
if h[a]>h[b]:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 11:09:48


```
a=input()
l=len(a)
a=[]
b=[]
for i in range (0,l):
    if a[i]=="a":
        a.append("a")
    else:
        b.append("b")
if len(a)>len(b)
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 11:11:03


```
c=input()
l=len(c)
a=[]
b=[]
for i in range (0,l):
    if c[i]=="a":
        a.append("a")
    else:
        b.append("b")
if len(a)>len(b)
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 11:13:10


```
c=input()
l=len(c)
a.sort()
k=l//2
print(c[k])
```

## Submission at 2024-11-25 11:14:59


```
a=input()
a.sort()
l=len(a)
print(a[l//2])
```

## Submission at 2024-11-25 11:24:46


```
def func():
    for i in range(0,n):
        if (l[i+1]-l[i])!=b:
            return("false")
    return("true")
n=int(input())
l=list(map(int,input().split()))
b=l[1]-l[0]
print(func())
```

## Submission at 2024-11-25 11:30:55


```
c=input()
a=0
b=0
for i in c:
    if i=="a":
        a+=1
    else:
        b+=1
if a>b:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 11:34:41


```
n,k=map(int,input(),split())
d=0
for i in range(k):
    b,c=map(int,input(),split())
    d+=c
print(d)
```

## Submission at 2024-11-25 11:39:37


```
n,k=map(int,input().split())
d=0
for i in range(k):
    b,c=map(int,input().split())
    d+=c
print(d)


'''n,k=map(int,input().split())
b=[]
c=[]
for i in range(k):
    d,e=map(int,input().split())
    b.append(d)
    c.append(e)
'''
```

## Submission at 2024-11-25 11:42:29


```
n,k=map(int,input().split())
b=[]
c=[]
for i in range(k):
    d,e=map(int,input().split())
    b.append(d)
    c.append(e)
c.sort()
d=0
for i in range(n,0,-1):
    d=d+c[i]
print(d)
```

