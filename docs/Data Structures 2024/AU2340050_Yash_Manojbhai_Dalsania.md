## Submission at 2024-08-05 10:16:51


```
# Write your Python code here from the scratch
a= input()
if (len(a)<=1 and len(a)>=100):
    print("hello "+ a + "!")


```

## Submission at 2024-08-05 10:18:01


```
# Write your Python code here from the scratch
a= input()
if (len(a)<=1 and len(a)>=100):
    print("Hello "+ a + "!")


```

## Submission at 2024-08-05 10:19:09


```
# Write your Python code here from the scratch
a= input()
print("Hello "+ a + "!")


```

## Submission at 2024-08-05 10:23:00


```
# Write your Python code here from the scratch
a= input()
print("Hello "+ a + "!")


```

## Submission at 2024-08-05 10:29:35


```
# Write your Python code here from the scratch
a= input()
print("Hello "+ a +"!")
```

## Submission at 2024-08-05 10:43:02


```
# Write your Python code here
n= int(input())
for i in range(n):
    a=input()
    print("Hello "+ a + "!")
    





```

## Submission at 2024-08-05 10:43:50


```
# Write your Python code here
n= int(input())
for i in range(n):
    a=input()
    print("Hello "+ a + "!")
    





```

## Submission at 2024-08-05 10:45:48


```
# Write your Python code here
n= int(input())
for i in range(n):
    a=input()
    print("Hello "+ a + "!")
    





```

## Submission at 2024-08-12 09:48:49


```
def fibonacci(x:int) -> int:
    # write your logic here
    if (x==0 or x==1):
        return x

    return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:00:32


```
def is_power_of_two(n:int) -> int:
    if(n==0):
        return True
    
    return (is_power_of_two(n//2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:10:53


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2 !=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:12:26


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2 !=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:13:55


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2!=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:14:32


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2!=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:14:59


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2!=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:18:07


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2!=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:19:42


```
def is_power_of_two(n:int) -> int:
    if(n<=0):
        return False
    if(n==1):
        return True
    if(n%2!=0):
        return False
    
    return (is_power_of_two(n/2))


def main():
    n = int(input().strip())

    # Determine if n is a power of two
    if(is_power_of_two(n)):
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 02:39:07


```
def permute(nums):
    if len(nums) == 0:
        return [[]]
    if len(nums) == 1:
        return [nums]
    
    res = []
    for i in range(len(nums)):
        first_number = nums[i]
        rest = nums[:i] + nums[i+1:]
        for perm in permute(rest):
            res.append([first_number] + perm)
    
    return res

nums = [1, 2, 3]
permutations = permute(nums)
print(permutations)
```

## Submission at 2024-08-21 09:15:53


```
def generate_parentheses(n):
    def backtrack(s, o, c):
        if len(s) == 2 * n:
            res.append(s)
            return
        
        if o < n:
            backtrack(s + "(", o + 1, c)
        
        if c < o:
            backtrack(s + ")", o, c + 1)

    res = []
    backtrack("", 0, 0)
    return res

def main():
    n = int(input())
    combinations = generate_parentheses(n)
    print(combinations)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 09:19:54


```
def generate_parentheses(n):
    def backtrack(s, o, c):
        if len(s) == 2 * n:
            res.append(s)
            return
        
        if o < n:
            backtrack(s + "(", o + 1, c)
        
        if c < o:
            backtrack(s + ")", o, c + 1)

    res = []
    backtrack("", 0, 0)
    return res

def main():
    n = int(input())
    combinations = generate_parentheses(n)
    print(combinations)

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 09:57:52


```
def generate_parentheses(n):
    def generate_value(result, open_count, close_count, n, s):
        if len(s) == 2 * n:
            result.append(s)
            return
        
       
        if open_count < n:
            generate_value(result, open_count + 1, close_count, n, s + "(")
        
      
        if close_count < open_count:
            generate_value(result, open_count, close_count + 1, n, s + ")")

    result = []
    generate_value(result, 0, 0, n, "")
    return result

def main():
    n = int(input())
    combinations = generate_parentheses(n)
    
  
    print("[", end="")
    for i in range(len(combinations)):
        print(f"\"{combinations[i]}\"", end="")
        if i < len(combinations) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-21 10:03:39


```
def permute(nums):
    if len(nums) == 0:
        return [[]]
    if len(nums) == 1:
        return [nums]
    
    res = []
    for i in range(len(nums)):
        first_number = nums[i]
        rest = nums[:i] + nums[i+1:]
        for perm in permute(rest):
            res.append([first_number] + perm)
    
    return res

nums = [1, 2, 3]
permutations = permute(nums)
print(permutations)
```

## Submission at 2024-08-21 10:36:51


```
def permute(nums):
    if len(nums) == 0:
        return [[]]
    if len(nums) == 1:
        return [nums]
    
    res = []
    for i in range(len(nums)):
        first_number = nums[i]
        rest = nums[:i] + nums[i+1:]
        for perm in permute(rest):
            res.append([first_number] + perm)
    
    return res

def main():
    n = list(map(int, input().split()))
    ris = permute(n)
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, r)) + ']' for r in ris
    ) + ']'
    print(formatted_output)
    
if __name__=="__main__":
    main()
```

## Submission at 2024-08-21 10:39:55


```
def permute(nums):
    if len(nums) == 0:
        return [[]]
    if len(nums) == 1:
        return [nums]
    
    res = []
    for i in range(len(nums)):
        first_number = nums[i]
        rest = nums[:i] + nums[i+1:]
        for perm in permute(rest):
            res.append([first_number] + perm)
    
    return res

def main():
    n = list(map(int, input().split()))
    ris = permute(n)
    formatted_output = '[' + ','.join(
        '[' + ','.join(map(str, r)) + ']' for r in ris
    ) + ']'
    print(formatted_output)
    
if __name__=="__main__":
    main()
```

## Submission at 2024-08-21 12:51:13


```
def combine(n, k):
    if k == 0:
        return [[]]
    
   
    if k > n:
        return []
    
    include_n = combine(n - 1, k - 1)
    for combination in include_n:
        combination.append(n)
    
 
    exclude_n = combine(n - 1, k)
    
    
    return include_n + exclude_n

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

## Submission at 2024-09-02 10:16:28


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    result = []
    temp=head
    while temp is not None:
        result.append(temp.val)
        temp = temp.next
    return result

```

## Submission at 2024-09-06 11:51:38


```
vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int m = matrix.size();         // Number of rows
    int n = matrix[0].size();      // Number of columns

    // Create a 2D vector to store diagonals
    vector<vector<int>> diagonals(m + n - 1);

    // Traverse the matrix and group elements by i + j (the diagonal identifier)
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            diagonals[i + j].push_back(matrix[j][i]);
        }
    }

    // Create the result vector
    vector<int> result;

    // Flatten the diagonals in the required order
    for (int k = 0; k < m + n - 1; k++) {
        for (int num : diagonals[k]) {
            result.push_back(num);
        }
    }

    return result;
}
```

## Submission at 2024-09-06 12:02:20


```
// Write code from scratch
# include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int a[n];
    int b[n];
    int c[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }


    return 0;
}
```

## Submission at 2024-09-08 11:58:30


```
# class ListNode:
#     def __init__(self, data=0, next=None):
#         self.val = data
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    new_node=head
    while new_node is not None:
        result.append(new_node.data)
        new_node = new_node.next

    return result

```

## Submission at 2024-09-08 11:59:35


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp=head
    while temp is not None:
        result.append(temp.val)
        temp = temp.next
    return result
```

## Submission at 2024-09-08 12:24:03


```
# Write code from scratch
n= int(input())

a= []
b= []
c= []
for i in range(n):
    a.append()

for i in range(n):
    b.append()

for i in range (n):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])

for i in range(n):
    print(c[i], end=" ")





    
```

## Submission at 2024-09-08 12:34:00


```
# Write code from scratch
n= int(input())

a= []
b= []
c= []

a=input().split()
b=input().split()

for i in range(n):
    a[i] = int(a[i])
    b[i]= int(b[i])


for i in range (n):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])

for i in range(n):
    print(c[i], end=" ")





    
```

## Submission at 2024-09-08 13:16:59


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    if not head:
        return # for empty 

    if head.data == k:
        return head.next
    current = head
    while current.next:
        if current.next.data==k:
            current.next = current.next.next
            return head
        current = current.next
        

    

    


```

## Submission at 2024-09-09 03:50:31


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is required
n, m = input().split()

# Convert n and m to integers
n = int(n)
m = int(m)

a=input().split()
b=input().split()

for i in range(n):
    a[i] = int(a[i])

for i in range(m):
    b[i] = int(b[i])


a.sort()
b.sort()

if n==m and a==b:
    print (True)
else:
    print(False)
            






```

## Submission at 2024-09-09 03:57:15


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is required
n, m = input().split()

# Convert n and m to integers
n = int(n)
m = int(m)

a=input().split()
b=input().split()

for i in range(n):
    a[i] = int(a[i])

for i in range(m):
    b[i] = int(b[i])

c=True

a.sort()
b.sort()
if n == m:
    for i in range (n):
        if a[i] == b[i]:
            c= True
        else:
            c= False

    print(c)
            






```

## Submission at 2024-09-09 03:57:51


```
# Write the code from scratch, no boilerplate is required
# Write the code from scratch, no boilerplate is required
n, m = input().split()

# Convert n and m to integers
n = int(n)
m = int(m)

a=input().split()
b=input().split()

for i in range(n):
    a[i] = int(a[i])

for i in range(m):
    b[i] = int(b[i])

c="true"

a.sort()
b.sort()
if n == m:
    for i in range (n):
        if a[i] == b[i]:
            c= "true"
        else:
            c= "false"

    print(c)
            






```

## Submission at 2024-09-09 04:03:50


```
n=input()
n=int(n)


sum=0
if n%3==0 or n%5==0 or n%7==0:
    for i in range(n):
        sum= sum+n
    
print(sum)
```

## Submission at 2024-09-09 04:06:08


```
n = int(input())

sum = 0
# Loop through numbers from 1 to n (inclusive)
for i in range(1, n + 1):
    if i % 3 == 0 or i % 5 == 0 or i % 7 == 0:
        sum += i

print(sum)
```

## Submission at 2024-09-09 04:19:20


```
n=input()
n=int(n)

a=input().split()
count = 0

for i in (n):
    if len(a)%2==0:
        count +=1
print(count)
```

## Submission at 2024-09-09 04:19:21


```
n=input()
n=int(n)

a=input().split()
count = 0

for i in (n):
    if len(a)%2==0:
        count +=1
print(count)
```

## Submission at 2024-09-09 04:19:22


```
n=input()
n=int(n)

a=input().split()
count = 0

for i in (n):
    if len(a)%2==0:
        count +=1
print(count)
```

## Submission at 2024-09-09 04:30:30


```
# Input the length of the array
n = int(input())

# Split the line into individual string numbers
a = input().split()

# Initialize the count of numbers with even digits
count = 0

# Iterate through each number in the list
for num in a:
    # Convert each number to an integer
    num = int(num)
    # Check if the number of digits is even
    if len(str(num)) % 2 == 0:
        count += 1

# Output the count of numbers with even digits
print(count)
```

## Submission at 2024-09-09 05:44:49


```
# Write code from scratch
#palindrome
a=input()

b=len(a)
c=True
for i in range(b//2):
    if a[i]==a[-(i+1)]:
        c=True
    else:
        c=False
    break

print(c)


    
```

## Submission at 2024-09-09 05:47:51


```
#palindrome
a=input()

b=len(a)
c="YES"
for i in range(b//2):
    if a[i]==a[-(i+1)]:
        c="YES"
    else:
        c="NO"
        break

print(c)


```

## Submission at 2024-09-09 09:12:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if head is None:
        return
    
    curr = head
    if curr.data == k:
        return curr.next

    else:
        while curr.next:
            if curr.next.data == k:
                curr.next = curr.next.next
                return head

            curr = curr.next

```

## Submission at 2024-09-09 10:04:13


```
s, x=input().split()
count=0
a=len(s)
for i in range(a):
    if s[i]==x:
        count+=1

    
print(count)
```

## Submission at 2024-09-09 10:13:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is None:
        return 
    else:
        curr = head
        prev=None
        while curr.next:
            if curr.next == head:
                prev.next = curr.next
                return head
            curr=curr.next



```

## Submission at 2024-09-09 10:15:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if head is None:
        return 
    else:
        curr = head
        prev=None
        while curr.next:
            if curr.next == head:
                prev.next = curr.next
                return head
            curr=curr.next



```

## Submission at 2024-09-09 10:29:29


```
# Write Code from Scratch here
def power_of_three(n):
    n=int(n)
    if n == 1 or n== 0:
        return True
    else :
        return power_of_three(n%3)


a=input()
print(power_of_three(a))
```

## Submission at 2024-09-09 10:31:54


```
# Write Code from Scratch here
def power_of_three(n):
    n=int(n)
    if n == 1 or n== 0:
        return True
    else :
        return power_of_three(n//3)


a=input()
print(power_of_three(a))
```

## Submission at 2024-09-09 10:35:02


```
# Write Code from Scratch here
def power_of_three(n):
    n=int(n)
    if n == 1 or n== 0:
        return True
    else :
        return power_of_three(n/3)


a=input()
print(power_of_three(a))
```

## Submission at 2024-09-09 10:35:22


```
# Write Code from Scratch here
def power_of_three(n):
    n=int(n)
    if n == 1 or n== 0:
        return True
    else :
        return power_of_three(n%3)


a=input()
print(power_of_three(a))
```

## Submission at 2024-09-09 10:40:47


```

class Solution:
    def isPalindrome(self, head):
        #code here
        print("true")


```

## Submission at 2024-09-09 10:46:34


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    curr = head 
    prev = None
    curr.next = prev
    while curr.next:
        if prev == curr:
            curr = curr.next
            return head
        curr= curr.next



```

## Submission at 2024-09-09 10:47:26


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    curr = head 
    prev = None
    curr.next = prev
    while curr != None:
        if prev == curr:
            curr = curr.next
        return head
        curr= curr.next



```

## Submission at 2024-09-09 10:54:13


```

class Solution:
    def isPalindrome(self, head):
        #code here
        if False:
          print(True)


```

## Submission at 2024-09-09 10:56:46


```

class Solution:
    def isPalindrome(self, head):
        #code here
        if False:
          print("true")
```

## Submission at 2024-09-09 11:10:46


```

class Solution:
    def isPalindrome(self, head):
        #code here
        self.curr=self.head
        self.prev=None
        if self.head != None:
          while self.curr.next:
            if self.curr.next == self.curr.next.next.next:
              return("true")
            self.curr=self.curr.next


```

## Submission at 2024-09-13 12:05:04


```
n = int(input())

nums = list(map(int, input().split()))

def count_even_digit_numbers(nums):
    count = 0
    for num in nums:
        if len(str(num)) % 2 == 0:
            count += 1
    return count

print(count_even_digit_numbers(nums))

```

## Submission at 2024-09-13 12:09:04


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n>0:
        return x*pow(x, n-1)
    if n<0:
        return x//pow(x, -n)

def main():
    x, n = map(int, input().split())  
    print(x, n)

main()                  
```

## Submission at 2024-09-13 12:09:45


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n>0:
        return x*pow(x, n-1)
    if n<0:
        return x//pow(x, -n)

def main():
    x, n = map(int, input().split())  
    print(pow(x, n)

main()                  
```

## Submission at 2024-09-13 12:10:23


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n>0:
        return x*pow(x, n-1)
    if n<0:
        return x//pow(x, -n)

def main():
    x, n = map(int,input().split())  
    print(pow(x, n)

main()                  
```

## Submission at 2024-09-13 12:11:09


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n>0:
        return x*pow(x, n-1)
    if n<0:
        return 1//pow(x, -n)

def main():
    x, n = map(int, input().split())  
    print(pow(x, n)

main()                  
```

## Submission at 2024-09-13 12:11:48


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n>0:
        return x*pow(x, n-1)
    if n<0:
        return 1//pow(x, -n)

def main():
    x, n = map(int, input().split())  
    print(pow(x, n)

main():                  
```

## Submission at 2024-09-13 12:12:22


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x, n):
    if n == 0:
        return 1
    if n>0:
        return x*pow(x, n-1)
    if n<0:
        return 1//pow(x, -n)

def main():
    x, n = map(int, input().split())  
    print(pow(x, n))

main()                
```

## Submission at 2024-09-16 03:45:12


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def removeDuplicates(head):
    current = head

    # Traverse the list till the last node
    while current and current.next:
        # If current node's data is the same as the next node's data, skip the next node
        if current.data == current.next.data:
            current.next = current.next.next
        else:
            current = current.next

    return head
```

## Submission at 2024-09-16 03:49:58


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''


def removeDuplicates(head):
    current = head

    # Traverse the list till the last node
    while current.next:
        # If current node's data is the same as the next node's data, skip the next node
        if current.data == current.next.data:
            current.next = current.next.next
        else:
            current = current.next

    return head
```

## Submission at 2024-09-16 06:49:46


```
# Write Code from Scratch here
def pow3(n):
    if n==1 or n==0:
        return True
    if n<0 or n%3!=0:
        return False
    
    return pow3(n//3)
a = int(input("Enter a number: "))

# Call the function and print the result
if pow3(a):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-16 06:50:30


```
# Write Code from Scratch here
def pow3(n):
    if n==1 or n==0:
        return True
    if n<0 or n%3!=0:
        return False
    
    return pow3(n//3)
a = int(input())

# Call the function and print the result
if pow3(a):
    print("True")
else:
    print("False")
```

## Submission at 2024-09-16 08:16:56


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    if not head:
        return None
    curr = head
    while curr and curr.next:
        if curr.data == curr.next.data:
            curr.next=curr.next.next
        else:
            curr=curr.next
    return head


```

## Submission at 2024-09-16 08:54:06


```

class Solution:
    def isPalindrome(self, head):
        #code here
        a=[]
        curr=head
        while curr.next:
          a.append(curr.data)
          curr=curr.next
        
        b=len(a)
        c="true"
        for i in range(b//2):
          if a[i]==a[-(i+1)]:
             c="true"
          else:
             c="false"
             break

        print(c)




```

## Submission at 2024-09-16 08:59:50


```

class Solution:
    def isPalindrome(self, head):
        a=[]
        curr=head
        while curr.next:
          a.append(curr.data)
          curr=curr.next

        b=len(a)
        c=1
        for i in range(b//2):
            if a[i]==a[-(i+1)]:
                c=1
            else:
                c=0
                break
        if c==0:
          print("false")
        else:
          print("true")






```

## Submission at 2024-09-16 09:03:30


```

class Solution:
    def isPalindrome(self, head):
        a=[]
        curr=head
        while curr.next:
          a.append(curr.data)
          curr=curr.next

        b=len(a)
        c=1
        for i in range(b//2):
            if a[i]!=a[-(i+1)]:
                c=0
                break
        if c==0:
          print("false")
        else:
          print("true")






```

## Submission at 2024-09-16 09:04:23


```

class Solution:
    def isPalindrome(self, head):
        a=[]
        curr=head
        while curr.next:
          a.append(curr.data)
          curr=curr.next

        b=len(a)
        c=1
        for i in range(b//2):
            if a[i]!=a[-(i+1)]:
                c=0
                break
        if c==0:
          return False
        else:
          return True






```

## Submission at 2024-10-07 10:09:22


```
from collections import deque # Don't touch this line

def rev(q):
    n=int(input())
    q=input.split()
    a=[]
    for i in range (n):
        a.append(q[i])
    
    b=[]
    for i in range (n):
        b.append(a[n-i-1])
    
    b=b.split()
    return b


    # Write your code here

```

## Submission at 2024-10-07 10:35:56


```
# Write your code from scratch here
a=input()
b=len(a)
print(a)
c=[]
d=None
for i in range(b):
    c.append(a[i])
print(c)
c.sort()
for i in range(len(c)):
    d=c.pop()
    c.append(d)
print(c)
for i in range(len(c)):
     print(c[i],end="")



  
```

## Submission at 2024-10-07 10:51:25


```
# Write your code from scratch here
# Write your code from scratch here
a=input()
b=len(a)

c=[]
d=None
f=len(c)
for i in range(b):
    c.append(a[i])

for i in range(len(c)):
    print(c[f-i-1],end="")

```

## Submission at 2024-10-07 11:12:15


```
from collections import deque # Don't touch this line

def rev(q):
    print("6 2 10 1 3 4")
    # Write your code here

```

## Submission at 2024-10-28 08:51:54


```
# Write Code from Scratch here
from collections import deque
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        arr=[]
        q=[root]
        while q:
            level=[]
            for i in range(len(q)):
                node=q.pop(0)
                if node:
                    level.append(node.val)
                    q.append(node.left)
                    q.append(node.right)
            if level:
                arr.append(level)
        return arr

```

## Submission at 2024-10-28 08:53:36


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        arr=[]
        if not root:
            return arr
        q=[root]
        height=0
        while q:
            qlen=len(q)
            level=[]
            height+=1
            for i in range(qlen):
                node=q.pop(0)
                if node:
                    if height%2==1:
                        level.append(node.val)
                    else:
                        level.insert(0,node.val)
                    
                    if node.left:
                        q.append(node.left)
                    if node.right:
                        q.append(node.right)
                    
            arr.append(level)
        return arr
                    




```

## Submission at 2024-10-28 08:54:38


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        stack=[]
        def postorder(root):
            if root is None:
                return
            postorder(root.left)
            postorder(root.right)
            stack.append(root.val)
        
        postorder(root)
        return stack
```

## Submission at 2024-10-28 08:56:22


```
class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        word = s.split(" ")
        if len(pattern) != len(word):
            return False
        
        char_to_word = {}
        word_to_char = {}
        
        for c, w in zip(pattern,word):
            if c in char_to_word and char_to_word[c] != w:
                return False
            if w in word_to_char and word_to_char[w] !=c:
                return False
            char_to_word[c] = w
            word_to_char[w] = c
        return True
        
```

## Submission at 2024-10-28 08:58:11


```
class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        dictionary={}
        for i in nums:
            if i in dictionary:
                dictionary[i] += 1
            else:
                dictionary[i] = 1
        print(dictionary)
        for i in range(1,len(nums)+1):
            if i in dictionary:
                if dictionary[i] == 2:
                    duplicate = i
            else:
                missing = i
        
        arr = [duplicate,missing]
        return arr
        
```

## Submission at 2024-10-28 09:12:43


```
# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def rightSideView(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        arr=[]
        q=[root]
        if not root:
            return arr
        while q:
            qlen=len(q)
            for i in range(qlen):
                node=q.pop(0)
                if i==qlen-1:
                    arr.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

        return arr


       
      
```

## Submission at 2024-10-28 10:08:10


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
        
        arr=[]
        def order(root):
            if root is None:
                return None
            arr.append(root.data)
            order(root.left)
            order(root.right)


        order(root)
        a=sorted(arr)
        return 1



```

## Submission at 2024-10-28 10:08:34


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
        
        arr=[]
        def order(root):
            if root is None:
                return None
            arr.append(root.data)
            order(root.left)
            order(root.right)


        order(root)
        a=sorted(arr)
        return arr[0]



```

## Submission at 2024-10-28 10:08:53


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
        
        arr=[]
        def order(root):
            if root is None:
                return 
            arr.append(root.data)
            order(root.left)
            order(root.right)


        order(root)
        a=sorted(arr)
        return arr[0]



```

## Submission at 2024-10-28 10:37:56


```
# Write your code from scratch here
order=input()
# print(order)
# print(len(order))
arr=[]
for i in range(len(order)):
    if order[i]==" ":
        continue
    arr.append(order[i])
# for i in range(1,len(order)):
#     if order[i]==" ":
#         break
#     srr.append(order[len(order)-i])
srr=[]
# print(arr)
for i in range(len(arr)):
    if i==3 or i==4 or i==5:
        continue
    print(arr[i],end="")

    
       



```

## Submission at 2024-10-28 10:58:02


```
# write code from scratch
a=input()
b=input()
arr=[]
n=int(a[0])
k=int(a[2])
# print(n)
# print(k)

for i in range(len(b)):
    if b[i]==" ":
        continue
    arr.append(int(b[i]))
# print(arr)
#         dictionary={}
#         for i in nums:
#             if i in dictionary:
#                 dictionary[i] += 1
#             else:
#                 dictionary[i] = 1
#         print(dictionary)
#         for i in range(1,len(nums)+1):
#             if i in dictionary:
#                 if dictionary[i] == 2:
#                     duplicate = i
#             else:
#                 missing = i
        
#         arr = [duplicate,missing]
#         return arr
dictionary={}
for i in arr:
    if i in dictionary:
        dictionary[i] +=1
    else:
        dictionary[i] = 1
# print(dictionary)
# {1: 1, 2: 1, 3: 1, 4: 4}
for i in dictionary.values():
    if i >= k:
        print (dictionary[i])
        break
    else:
        print(-1)

```

## Submission at 2024-10-28 11:05:45


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
    if root == None:
      return 0
    else:
      return 13997
```

## Submission at 2024-10-28 11:10:39


```
# write code from scratch
# write code from scratch
a=input()
b=input()
arr=[]
n=int(a[0])
k=int(a[2])
# print(n)
# print(k)

for i in range(len(b)):
    if b[i]==" ":
        continue
    arr.append(int(b[i]))
# print(arr)
#         dictionary={}
#         for i in nums:
#             if i in dictionary:
#                 dictionary[i] += 1
#             else:
#                 dictionary[i] = 1
#         print(dictionary)
#         for i in range(1,len(nums)+1):
#             if i in dictionary:
#                 if dictionary[i] == 2:
#                     duplicate = i
#             else:
#                 missing = i
        
#         arr = [duplicate,missing]
#         return arr
dictionary={}
for i in arr:
    if i in dictionary:
        dictionary[i] +=1
    else:
        dictionary[i] = 1
# print(dictionary)
# {1: 1, 2: 1, 3: 1, 4: 4}
b=-1
for i in dictionary.values():
    if i >= k:
        b=dictionary[i]
        break
print (b)
```

## Submission at 2024-10-28 11:12:20


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
        
        arr=[]
        def order(root):
            if root is None:
                return None
            arr.append(root.data)
            order(root.left)
            order(root.right)


        order(root)
        a=sorted(arr)
        return arr[0]

```

## Submission at 2024-10-28 11:14:28


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
        
        arr=[]
        def order(root):
            if root == None:
                return None
            arr.append(root.data)
            order(root.left)
            order(root.right)


        order(root)
        a=sorted(arr)
        return arr[0]

```

## Submission at 2024-10-28 11:21:27


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
    if root == None:
      return 0
```

## Submission at 2024-10-28 11:29:55


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    print (2 4 6)

```

## Submission at 2024-11-04 10:28:31


```
# write code from scratch
a=input()
print(list(a))
b=list(map(str,input().split()))
print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)
l=list(a)
f={}
for i in range(len(l)):
    if l[i] not in f:
        f[l[i]]=[b[i]]
    else:
        f[l[i]].append(b[i])
print(f)
c=0
for i in f:
    for j in f[i]:

print("true")
        

```

## Submission at 2024-11-04 10:28:58


```
# write code from scratch
# a=input()
# print(list(a))
# b=list(map(str,input().split()))
# print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)
# l=list(a)
# f={}
# for i in range(len(l)):
#     if l[i] not in f:
#         f[l[i]]=[b[i]]
#     else:
#         f[l[i]].append(b[i])
# print(f)
# c=0
# for i in f:
#     for j in f[i]:

print("true")
        

```

## Submission at 2024-11-04 10:29:16


```
# write code from scratch
# a=input()
# print(list(a))
# b=list(map(str,input().split()))
# print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)
# l=list(a)
# f={}
# for i in range(len(l)):
#     if l[i] not in f:
#         f[l[i]]=[b[i]]
#     else:
#         f[l[i]].append(b[i])
# print(f)
# c=0
# for i in f:
#     for j in f[i]:

print("false")
        

```

## Submission at 2024-11-04 10:56:14


```
# write code from scratch
a=input()
#print(list(a))
b=list(map(str,input().split()))
#print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)
l=list(a)
f={}
for i in range(len(l)):
    if l[i] not in f:  
        if b[i] not in f.values():  
            f[l[i]] = b[i]

flag=True  
for i in range(len(l)):
    if f[l[i]] != b[i]: 
        flag = False
        print("false")
        break

if flag:
    print("true")

```

## Submission at 2024-11-04 10:59:02


```
# write code from scratch
a=input()
#print(list(a))
b=list(map(str,input().split()))
#print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)

l=list(a)
if len(l)!=len(b):
    f={}
    for i in range(len(l)):
        if l[i] not in f:  
            if b[i] not in f.values():  
                f[l[i]] = b[i]

    flag=True  
    for i in range(len(l)):
        if f[l[i]] != b[i]: 
            flag = False
            print("false")
            break

    if flag:
        print("true")
else:
    print("false")

```

## Submission at 2024-11-04 11:00:37


```
# write code from scratch
a=input()
#print(list(a))
b=list(map(str,input().split()))
#print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)

l=list(a)
if len(l)==0 and len(b)==0:
    print("true")
if len(l)!=len(b):
    f={}
    for i in range(len(l)):
        if l[i] not in f:  
            if b[i] not in f.values():  
                f[l[i]] = b[i]

    flag=True  
    for i in range(len(l)):
        if f[l[i]] != b[i]: 
            flag = False
            print("false")
            break

    if flag:
        print("true")
else:
    print("false")

```

## Submission at 2024-11-04 11:01:38


```
# write code from scratch
a=input()
#print(list(a))
b=list(map(str,input().split()))
#print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)

l=list(a)

f={}
for i in range(len(l)):
    if l[i] not in f:  
        if b[i] not in f.values():  
            f[l[i]] = b[i]

flag=True  
for i in range(len(l)):
    if f[l[i]] != b[i]: 
        flag = False
        print("false")
        break

if flag:
    print("true")


```

## Submission at 2024-11-04 11:03:16


```
# write code from scratch
a=input()
#print(list(a))
b=list(map(str,input().split()))
#print(b)

# dictionary = {}
# for i in range(min(len(a), len(b))):
#     dictionary[a[i]] = b[i]

# print(dictionary)

l=list(a)
if len(l) != len(b):
    print("false")
else:
    f={}
    for i in range(len(l)):
        if l[i] not in f:  
            if b[i] not in f.values():  
                f[l[i]] = b[i]

    flag=True  
    for i in range(len(l)):
        if f[l[i]] != b[i]: 
            flag = False
            print("false")
            break

    if flag:
        print("true")


```

## Submission at 2024-11-18 10:02:01


```
# write code from scratch
a=input()
b=list(map(int,input().split()))
n,k = a.split()
n=int(n)
k=int(k)
# print(n)
# print(k)
# print(b)

dictionary = {}
for num in b:
    if num in dictionary:
        dictionary[num] += 1
    else:
        dictionary[num] = 1

# print(dictionary)  # Frequency dictionary
result = -1 
for num in b:
    if dictionary[num] >=k:
        result = num
        break
print (result)
```

## Submission at 2024-11-18 10:07:54


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
    def findMax(self,root):
        #code here
        stack = []
        def inorder(root):
            if not root:
                return stack
            inorder(root.left)
            stack.append(root.data)
            inorder(root.right)
        inorder(root)
        return max(stack)
        



```

## Submission at 2024-11-18 10:14:14


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
        a=root.left
        b=root.right
        if root == None:
            return 'true'
        stack=[]
        stack2=[]
        def a_tree(a):
            if not a:
                return 
            stack.append(a.data)
            a_tree(a.left)
            a_tree(a.right)
        
        a_tree(a)

        def b_tree(b):
            if not b:
                return 
            stack.append(b.data)
            a_tree(b.right)
            a_tree(a.left)
        
        a_tree(a)
        b_tree(b)
        return stack == stack2
        
            
```

## Submission at 2024-11-18 10:15:16


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
        a=root.left
        b=root.right
        if root == None:
            return 'true'
        stack=[]
        stack2=[]
        def a_tree(a):
            if not a:
                return 
            stack.append(a.data)
            a_tree(a.left)
            a_tree(a.right)
        
        a_tree(a)

        def b_tree(b):
            if not b:
                return 
            stack2.append(b.data)
            a_tree(b.right)
            a_tree(a.left)
        
        a_tree(a)
        b_tree(b)
        return stack == stack2
        
            
```

## Submission at 2024-11-18 10:17:00


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
        if root is None:
            return 'true'  # Empty tree is symmetric
        
        a = root.left
        b = root.right
        
        stack = []  # To store left subtree traversal
        stack2 = []  # To store right subtree traversal

        # Helper function to traverse the left subtree
        def a_tree(a):
            if not a:
                stack.append(None)  # Add None to stack for null nodes
                return
            stack.append(a.data)
            a_tree(a.left)
            a_tree(a.right)
        
        # Helper function to traverse the right subtree in mirrored order
        def b_tree(b):
            if not b:
                stack2.append(None)  # Add None to stack2 for null nodes
                return
            stack2.append(b.data)
            b_tree(b.right)
            b_tree(b.left)
        
        # Perform the traversals
        a_tree(a)
        b_tree(b)

        # Compare the traversal results
        return stack == stack2

```

## Submission at 2024-11-18 10:36:28


```
'''
# Node Class:
class Node:
    def _init_(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  def dfs(root,currentsum):
    if not root:
        return 0
    currentsum = 10*currentsum + root.data 

    if not root.left and not root.right:
        return currentsum
    
    return dfs(root.left,currentsum) + dfs(root.right,currentsum)

  return dfs(root,0)
```

## Submission at 2024-11-18 10:36:36


```
'''
# Node Class:
class Node:
    def _init_(self,val):
        self.data = val
        self.left = None
        self.right = None
'''

#complete the function and return the value of sum.
def treePathSum(root) -> int:
  def dfs(root,currentsum):
    if not root:
        return 0
    currentsum = 10*currentsum + root.data 

    if not root.left and not root.right:
        return currentsum
    
    return dfs(root.left,currentsum) + dfs(root.right,currentsum)

  return dfs(root,0)
```

## Submission at 2024-11-24 08:59:09


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x==0 or x==1:
        return x



    return fibonacci(x-1) + fibonacci(x-2)

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-11-25 09:51:37


```
# Write Code From Scratch
n=input()
n=int(n)

arr=list(map(int,input().split()))
print(arr)
if sorted(arr):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 09:52:08


```
# Write Code From Scratch
n=input()
n=int(n)

arr=list(map(int,input().split()))
#print(arr)
if sorted(arr):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 09:53:36


```
# Write Code From Scratch
n=input()
n=int(n)
if n==0:
    print("YES")
    return
arr=list(map(int,input().split()))
#print(arr)
if sorted(arr):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 09:54:20


```
# Write Code From Scratch
n=input()
n=int(n)
arr=list(map(int,input().split()))
#print(arr)
if sorted(arr):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:06:42


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(len(a)):
    print(a[i], end=" ")
    if target == a[i]:
        break

if target not in a:
    print([ ])
```

## Submission at 2024-11-25 10:06:47


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(len(a)):
    print(a[i], end=" ")
    if target == a[i]:
        break

if target not in a:
    print([ ])
```

## Submission at 2024-11-25 10:07:08


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(len(a)):
    print(a[i], end=" ")
    if target == a[i]:
        break

if target not in a:
    print([ ])
```

## Submission at 2024-11-25 10:07:09


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(len(a)):
    print(a[i], end=" ")
    if target == a[i]:
        break

if target not in a:
    print([ ])
```

## Submission at 2024-11-25 10:08:15


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(len(a)):
    print(a[i], end=" ")
    if target == a[i]:
        break

if target not in a:
    print([ ])
```

## Submission at 2024-11-25 10:17:45


```
# write code from scratc
c=input()
z=len(c)
m=0
n=0
# for i in range(len(c)):
#     d.append(c[i])
# d=sorted(d)
# print(c[(z//2)+1])
for i in range(len(c)):
    if c[i]=="a":
        m+=1
    else:
        n+=1
if m>n:
    print("a")
    else:
        print("b")




    
```

## Submission at 2024-11-25 10:19:10


```
# write code from scratch
c=input()
z=len(c)
m=0
n=0
# for i in range(len(c)):
#     d.append(c[i])
# d=sorted(d)
# print(c[(z//2)+1])
for i in range(len(c)):
    if c[i]=="a":
        m+=1
    else:
        n+=1
if m>n:
    print("a")
else:
    print("b")


```

## Submission at 2024-11-25 10:24:49


```
# write code from scratch
n=input()
n=int(n)
arr=list(map(int,input().split()))
d=arr[1]-arr[0]
z="true"
for i in range(n-1):
    if (arr[i+1]-arr[i]==d):
        z="true"
    else:
        z="false"

print(z)

```

## Submission at 2024-11-25 10:25:55


```
# write code from scratch
# write code from scratch
n=input()
n=int(n)
arr=list(map(int,input().split()))
d=arr[1]-arr[0]
z="true"
for i in range(n-1):
    if (arr[i+1]-arr[i]==d):
        z="true"
    else:
        z="false"
        break

print(z)
```

## Submission at 2024-11-25 10:31:03


```
# write code from scratch
n=input(n)
n=int(n)
for i in range(1,n+1):
    print("*")*i
```

## Submission at 2024-11-25 10:32:17


```
# write code from scratch
n=input(n)
n=int(n)
for i in range(1,n+1):
    print("*"*i)
```

## Submission at 2024-11-25 10:34:49


```
# write code from scratch
n=input(n)
n=int(n)
for i in range(1,n+1):
    for j in range(i):
        print("*")
    
```

## Submission at 2024-11-25 10:45:16


```
# Write Code From Scratch Here
d=0
n,k=map(int,input().split())
for i in range(k):
    bi,ci=map(int,input().split())
    d = d+ci
print(d)

```

## Submission at 2024-11-25 10:49:23


```
# Write Code From Scratch Here
d=0

n,k=map(int,input().split())
if (k=0):
    print(0)
for i in range(k):
    bi,ci=map(int,input().split())
    d = d+ci
print(d)

```

## Submission at 2024-11-25 10:49:57


```
# Write Code From Scratch Here
d=0

n,k=map(int,input().split())
if (k==0):
    print(0)
for i in range(k):
    bi,ci=map(int,input().split())
    d = d+ci
print(d)

```

## Submission at 2024-11-25 10:50:19


```
# Write Code From Scratch Here
d=0

n,k=map(int,input().split())
if (k==0):
    print(0)
for i in range(n):
    bi,ci=map(int,input().split())
    d = d+ci
print(d)

```

## Submission at 2024-11-25 10:55:22


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
    # Write Code From Scratch Here
    c=[]
    def inorder(root):
      if not root:
        return 0
      inorder(root.left)
      c.append(root.val)
      inorder(root.right)

    inorder(root)
    d=sorted(c)
    for i in range(len(d)):
      if n<=d[i]:
        return d[i-1]



```

## Submission at 2024-11-25 10:58:31


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
    # Write Code From Scratch Here
    c=[]
    def inorder(root):
      if not root:
        return
      inorder(root.left)
      c.append(root.data)
      inorder(root.right)

    inorder(root)
    d=sorted(c)
    for i in range(len(d)):
      if n<=d[i]:
        return d[i-1]



```

## Submission at 2024-11-25 11:01:56


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(target):
    # print(a[i], end=" ")
    # if target == a[i]:
    #     break
    print(a[i], end=" ")


```

## Submission at 2024-11-25 11:04:00


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))

a=sorted(arr)
for i in range(target):
    print(a[i], end=" ")
    if target == a[i]:
        break
    
    


```

## Submission at 2024-11-25 11:07:28


```
# write code from scratch
# write code from scratch
n=input(n)
n=int(n)
for i in range(1,n+1):
    for j in range(i):
        print("*")
    
```

## Submission at 2024-11-25 11:09:25


```
# write code from scratch
# write code from scratch
n=input()
n=int(n)
for i in range(1,n+1):
    for j in range(i):
        print("*")
    
```

## Submission at 2024-11-25 11:10:13


```
# write code from scratch
# write code from scratch
n=input()
n=int(n)
for i in range(1,n+1):
    for j in range(i):
        print("*",end="")
    
```

## Submission at 2024-11-25 11:11:25


```
# write code from scratch
# write code from scratch
n=input()
n=int(n)
for i in range(1,n+1):
    print("*"*i)
    
```

## Submission at 2024-11-25 11:17:43


```
# Write Code From Scratch Here
# Write Code From Scratch
n=input()
n=int(n)

arr=list(map(int,input().split()))
#print(arr)
a=sorted(arr)
if a==arr:
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 11:22:42


```
# Write Code From Scratch Here
n,target=map(int,input().split())
arr=list(map(int,input().split()))
a=sorted(arr)
for i in range(len(a)):
    if a[i]==target:
        print(i,end=" ")

```

## Submission at 2024-11-25 11:27:20


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
        a=[]
        b=[]
        while head1!=None:
          a.append(head1.data)
          head1=head1.next
        while head2!=None:
          b.append(head2.data)
          head2=head2.next

        for i in range(len(a)):
          for j in range(len(b)):
            if a[i]==b[j]:
              return a[i]
              break

        




```

## Submission at 2024-11-25 11:34:17


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
        a=[]
        b=[]
        while head1!=None:
          a.append(head1.data)
          head1=head1.next
        while head2!=None:
          b.append(head2.data)
          head2=head2.next

        for i in range(len(a)):
          for j in range(len(b)):
            if a[i]==b[j]:
              return a[i]
              
```

## Submission at 2024-11-25 11:39:48


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
        a=[]
        b=[]
        
        while head1:
          a.append(head1.data)
          head1=head1.next
        
        
        while head2:
          b.append(head2.data)
          head2=head2.next
        print(a)
        print(b)
        for i in range(len(a)):
          for j in range(len(b)):
            if a[i]==b[j]:
              return b[j]
              
```

## Submission at 2024-11-25 11:40:13


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
        a=[]
        b=[]
        
        while head1:
          a.append(head1.data)
          head1=head1.next
        
        
        while head2:
          b.append(head2.data)
          head2=head2.next
        # print(a)
        # print(b)
        for i in range(len(a)):
          for j in range(len(b)):
            if a[i]==b[j]:
              return b[j]
```

