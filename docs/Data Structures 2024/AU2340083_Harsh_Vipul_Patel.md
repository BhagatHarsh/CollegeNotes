## Submission at 2024-08-05 10:11:29


```
name = input("Enter your name:")
if name.length >=1 and name.length <=100
    print ("Hello ",name,"!")
```

## Submission at 2024-08-05 10:13:38


```
user = input("Enter your name:")
if len(user) >=1 and len(user) <=100
    print ("Hello ",name,"!")
```

## Submission at 2024-08-05 10:18:07


```
user = input("Enter your name:")
if len(user) >=1 and len(user) <=100:
    print ("Hello " +user +"!")
```

## Submission at 2024-08-05 10:18:55


```
user = input()
if len(user) >=1 and len(user) <=100:
    print ("Hello " +user +"!")
```

## Submission at 2024-08-05 10:30:01


```
user = input()
if len(user) >=1 and len(user)<= 100:
    print ("Hello " +user +"!")
```

## Submission at 2024-08-05 10:38:35


```
n = int(input())
if n>= 1 and n<=100:
    for i in range(1,n+1):
        user = input()
        if len(user) >=1 and len(user) <=100:
            print("Hello " +user +"!")
```

## Submission at 2024-08-12 09:52:54


```
y = int()
def fibonacci(x:int) -> int:
    if x>=0 and x<=30:
        if x <2:
            return x 
        if x>=2 :
            y = fibonacci(x-1) + fibonacci(x-2)
    return y

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:54:42


```
y = int()
def fibonacci(x:int) -> int:
    if x>=0 and x<=30:
        if x <2:
            return x 
        else :
            y = fibonacci(x-1) + fibonacci(x-2)
    return y

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:31:39


```
def is_power_of_two(n:int) -> int:
    
    if n>= (-(2**31)) and n<= ((2**31)-1):
        if n ==1:
            return True
        if n%2 !=0 or n<1:
            return False   
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:37:20


```
def is_power_of_two(n:int) -> int:
    
    if n>= (-(2**31)) and n<= ((2**31)-1):
        if n<0:
            n = 0 - n
        if n ==1:
            return True
        if n%2 !=0:
            return False   
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:41:39


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n<0:
        n = 0 - n
    if n ==1:
        return a
    if n%2 !=0:
        return b  
    return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:44:59


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>= (-(2**31)) and n<= ((2**31)-1):
        if n ==1:
            return a
        if n%2 !=0 or n <=0:
            return b  
        return is_power_of_two(n//2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-14 03:42:40


```
def combine(n, k):
    if (n>=1 and n<=20):
        if (k>=1 and k<=20):
            def backtrack(start, path):
                if len(path) == k:
                    result.append(path[:])
                    return
        
                for i in range(start, n + 1):
                    path.append(i)
                    backtrack(i + 1, path)
                    path.pop()

            result = []
            backtrack(1, [])
    return result


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

## Submission at 2024-08-20 08:03:09


```
import itertools

def permute(nums):
    permutations = list(itertools.permutations(nums))
    
    permutations = [list(p) for p in permutations]
    permutations.sort()
    
    return permutations

nums = list(map(int, input().split()))

result = permute(nums)

print(result)

```

## Submission at 2024-08-21 06:23:56


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Main{
    public static List<String> ParenComb(int n){
        List<String> res = new ArrayList<>();
        backtrack(res, "", n, n);
        return res;
    }

    private static void backtrack(List<String> res, String Current, int left, int right){
        if (left == 0 && right == 0) {
            res.add(Current);
            return;
        }
        if (left > right) {
            return;
        }
        if (left > 0) {
            backtrack(res, Current + "(", left-1, right);
        }
        if (right > 0) {
            backtrack(res, Current + ")", left, right-1);
        }
    }
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);

        // Generate combinations
        List<String> result = ParenComb(n);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
                System.out.print("\"");
                System.out.print(result.get(i));
                System.out.print("\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}
```

## Submission at 2024-08-21 08:45:50


```
def perm(num,n=1.2):
    sres=[]
    if len(num)==1:
        return num
    if len(num)==2:
        sres.append(num)
        sres.append(num[::-1])
        return sres
    for i in range(len(num)):
        n=num[i]
        r=perm(num[:i]+num[i+1:],n)
        l=[]
        for ele in r:
            l.append(ele+[n])
        sres+=l
    return sres

def main():
    num = input().split(",")
    for i in range(len(num)):
        num[i] = num[i].replace("[","")
        num[i] = num[i].replace("]","")
        num[i] = int(num[i])
    
    # Generate combinations
    result = perm(num)
    result.sort()
    # Print combinations
    print("[", end="")
    for i,ele in enumerate(result):
        print("[", end="")
        for j in range(len(ele)):
            print(ele[j], end="")
            if j < len(ele) - 1:
                print(",", end="")
        print("]", end="")
        if i<len(result)-1:
            print(",", end="")
    print("]")
if __name__ == "_main_":
    main()
```

## Submission at 2024-09-02 04:04:05


```
def is_palindrome(s, a, b):
    if a >= b:
        return "YES"
    if s[a] != s[b]:
        return "NO"
    return is_palindrome(s, a + 1, b - 1)

str_input = input()

if len(str_input) >= 1 and len(str_input) <= 1000:
    result = is_palindrome(str_input, 0, len(str_input) - 1)
    print(result)

```

## Submission at 2024-09-02 04:20:44


```
def pow(x, n):
    if n == 0:
        return 1
    if n < 0:
        return 1 / pow(x, -n)
    return x * pow(x, n - 1)

def main():
    x, n = map(int, input().strip().split())
    
    result = int(pow(x, n))
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 04:26:47


```
def pow(x, n):
    if n == 0:
        return 1
    if n < 0:
        return math.floor(1 / pow(x, -n))
    return x * pow(x, n - 1)

def main():
    x, n = map(int, input().strip().split())
    
    result = int(pow(x, n))
    print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 04:30:18


```
def pow(x, n):
    if n == 0:
        return 1
    if n < 0:
        return math.floor(1 / pow(x, -n))
    return x * pow(x, n - 1)

def main():
    x, n = map(int, input().strip().split())
    
    result = int(pow(x, n))
    if x >-100  and x < 100:
        if n >= -1000 and n <= 1000:
            if result >= -10000 and result <= 10000:
                print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 04:31:07


```
import math

def pow(x, n):
    if n == 0:
        return 1
    if n < 0:
        return math.floor(1 / pow(x, -n))
    return x * pow(x, n - 1)

def main():
    x, n = map(int, input().strip().split())
    
    result = int(pow(x, n))
    if x >-100  and x < 100:
        if n >= -1000 and n <= 1000:
            if result >= -10000 and result <= 10000:
                print(result)

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-02 09:52:29


```
n = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))
c = []

for i in range (n):
    if a[i] > b[i]:
        c.append(a[i])
    else:
        c.append(b[i])

for x in c:
    print(x, end=" ")
```

## Submission at 2024-09-02 10:04:57


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    while (head != None):
        result.append(head.val)
        head = head.next

    return result

```

## Submission at 2024-09-02 10:10:14


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    while (head != None):
        result.append(head.val)
        head = head.next
    return result

```

## Submission at 2024-09-02 10:23:32


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1      
    return -1
```

## Submission at 2024-09-02 10:28:04


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1      
    return -1
```

## Submission at 2024-09-02 10:28:55


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1      
    return -1
```

## Submission at 2024-09-02 10:39:04


```
'''
class Listnode:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    count = 1 
    if k == 1: 
        return head.next

        
    while(curr != None) and count <k-1:
        curr = curr.next
        count +=1
    if not curr or not curr.next: 
        return head 

    curr.next = curr.next.next
    return head
```

## Submission at 2024-09-02 10:39:27


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    curr = head
    count = 1 
    if k == 1: 
        return head.next

        
    while(curr != None) and count <k-1:
        curr = curr.next
        count +=1
    if not curr or not curr.next: 
        return head 

    curr.next = curr.next.next
    return head
```

## Submission at 2024-09-02 10:41:51


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            return curr.val
        curr = curr.next
        answer += 1      
    return -1

    

```

## Submission at 2024-09-02 10:45:44


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

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

## Submission at 2024-09-02 10:49:37


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

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

## Submission at 2024-09-02 10:58:45


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    answer = 1
    curr = head

    while (head != None):
        if answer == k:
            result = curr.val
            break
        elif answer != k:
            result = -1
        curr = curr.next
        answer += 1   
    return result   
        
```

## Submission at 2024-09-09 03:33:36


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    curr = head
    prev = None

    while curr != None:

        next_Node = curr.next
        prev = curr.next

        prev = curr
        curr = next_Node
    return prev


```

## Submission at 2024-09-09 03:35:38


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    curr = head
    prev = None

    while curr != None:

        next_Node = curr.next
        prev = curr.next

        prev = curr
        curr = next_Node
    
    curr1 = prev
    while curr1 != None:
        print(curr1.data)
        curr1 = curr1.next
        



```

## Submission at 2024-09-09 03:38:59


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    curr = head
    prev = None

    while curr != None:
        next_Node = curr.next  
        curr.next = prev       
        prev = curr            
        curr = next_Node       
    
    curr1 = prev 
    while curr1 != None:
        print(curr1.data, end=" ")
        curr1 = curr1.next

```

## Submission at 2024-09-09 03:39:28


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def reverseLinkedList(head):
    curr = head
    prev = None

    while curr != None:
        next_Node = curr.next  
        curr.next = prev       
        prev = curr            
        curr = next_Node       
    
    curr1 = prev 
    while curr1 != None:
        print(curr1.data, end=" ")
        curr1 = curr1.next

```

## Submission at 2024-09-09 03:53:41


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):

    length = 0
    temp = head

    # Count the number of nodes in Linked List
    while temp is not None:
        temp = temp.next
        length += 1

    # Check if value of N is not more than length of the linked list
    if length < k:
        return -1

    temp = head
    for _ in range(1, length - k+ 1):
        temp = temp.next

    return temp.val

```

## Submission at 2024-09-09 03:56:09


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    temp = head
    prev = None

    # Base case if linked list is empty
    if temp is None:
        return head

    # Case 1: Head is to be deleted
    if position == 1:
        head = temp.next
        return head

    # Case 2: Node to be deleted is in middle
    # Traverse till given position
    for i in range(1, position):
        prev = temp
        temp = temp.next
        if temp is None:
            print("Data not present")
            return head

    # If given position is found, delete node
    if temp is not None:
        prev.next = temp.next

    return head

    


```

## Submission at 2024-09-09 03:58:31


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    temp = head
    prev = None

    # Base case if linked list is empty
    if temp is None:
        return head

    # Case 1: Head is to be deleted
    if k == 1:
        head = temp.next
        return head

    # Case 2: Node to be deleted is in middle
    # Traverse till given position
    for i in range(1, k):
        prev = temp
        temp = temp.next
        if temp is None:
            print("Data not present")
            return head

    # If given position is found, delete node
    if temp is not None:
        prev.next = temp.next

    while head != None:
        print(head.data, end=" ")
        head = head.next
    

    


```

## Submission at 2024-09-09 09:51:23


```
def power_of_3(n):
    a = "True"
    b = "False"

    if n ==1:
        return a
    elif n>1:
        return power_of_3(n//3)
    return b
    
def main():

    n = int(input())
    print(power_of_3(n))
    
if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 09:58:11


```
def freq_count(str, ch, ans = 0):
    N = len(str)
    if N ==1 and ch == str[0]:
        ans += 1
        return ans
    elif N >1:
        if ch == str[0]:
            ans+=1 
            freq_count(str[1:], ch, ans)
    return ans

def main():
    str = input()
    char_ch = input()
    print(freq_count(str, char_ch))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 10:00:16


```
def freq_count(str, num, ans = 0):
    N = len(str)
    if N ==1 and num == str[0]:
        ans += 1
        return ans
    elif N >1:
        if num == str[0]:
            ans+=1
        freq_count(str[1:], num, ans)
    return ans

def main():
    str = input()
    x = int(input())
    print(freq_count(str, x))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 10:02:20


```
def freq_count(str, num, ans = 0):
    N = len(str)
    if N ==1 and num == str[0]:
        ans += 1
        return ans
    elif N >1:
        if num == str[0]:
            ans+=1
        freq_count(str[1:], num, ans)
    return ans

def main():
    list1 = list(map(input.split()))
    print(freq_count(str, x))

if __name__ == "__main__":
    main()
```

## Submission at 2024-09-09 10:16:20


```

class Solution:
    def isPalindrome(self, head):
      temp = head
      length =0

      while temp != None:
        length +=1
        temp = temp.next
      
      count = int(length/2)

      if count % 2 !=0:
        curr = head
        prev = None
        x = 1
        while curr != None:
          if x == count+1 or x > count+1: 
            curr.next.next = curr
            prev = curr
            curr = curr.next

            #change nodes
            prev.next = curr.next



          prev = curr
          curr = curr.next
          x+=1

```

## Submission at 2024-09-09 10:28:42


```

class Solution:
    def isPalindrome(self, head):
      temp = head
      length = 0

      while temp != None:
        length +=1
        temp = temp.next
      
      count = int(length/2)

      stack = []
      curr = head
      prev = None
      x = 1
      while curr != None:
        if x > count: 
          stack.append(curr.data)

        prev = curr
        curr = curr.next
        x+=1

      a = "true"
      curr1= head
      for i in range(count):
        if count % 2 != 0:
          stack.pop()
        if curr1.data == stack[i]:
          a = "true"
        else:
          a = "false"
        curr1 = curr1.next
        
      return a
```

## Submission at 2024-09-09 10:42:58


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and temp.data == curr1.data and curr1 != None:
                prev.next = curr1.next
                break
        if temp != None:
            temp = temp.next
    
    return head
    


            


```

## Submission at 2024-09-09 10:49:22


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and curr1 != None:
                if temp.data == curr1.data:
                    prev.next = curr1.next
                    break
        if temp != None:
            temp = temp.next
    
    return head
```

## Submission at 2024-09-09 10:52:14


```

def modify_matrix(matrix):
    answer = matrix

    for i in range(3):
        for j in range(3):
            if answer[i] == answer[j]:
                return "true"

    
```

## Submission at 2024-09-09 10:52:55


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and curr1 != None:
                if temp.data == curr1.data:
                    prev.next = curr1.next
                    continue
        if temp != None:
            temp = temp.next
    
    return head
```

## Submission at 2024-09-09 10:53:24


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and curr1 != None:
                if temp.data == curr1.data:
                    prev.next = curr1.next
                    break
        if temp != None:
            temp = temp.next
    
    return head
```

## Submission at 2024-09-09 10:53:51


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and curr1 != None:
                if temp.data == curr1.data:
                    prev.next = curr1.next
                    break
        if temp != None:
            temp = temp.next
    
    return head
```

## Submission at 2024-09-09 10:54:23


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and curr1 != None:
                if temp.data == curr1.data:
                    prev.next = curr1.next
                    break
        if temp != None:
            temp = temp.next
    
    return head
```

## Submission at 2024-09-09 11:07:14


```

def modify_matrix(matrix):
    answer = matrix
    m = 3
    n =3
    for i in range(m):
        for j in range(n):
            if answer[j] == -1:
                max_ans = 0
                k = 0
                while(k <n):
                    if answer[k] > max_ans:
                        max_ans = answer[k]
                answer[j] = max_ans
    return answer
```

## Submission at 2024-09-09 11:08:50


```
class Solution:
    def isPalindrome(self, head):
      temp = head
      length = 0

      while temp != None:
        length +=1
        temp = temp.next
      
      count = int(length/2)

      stack = []
      curr = head
      prev = None
      x = 1
      while curr != None:
        if x > count: 
          stack.append(curr.data)

        prev = curr
        curr = curr.next
        x+=1

      a = "true"
      curr1= head
      for i in range(count):
        if count % 2 != 0:
          stack.pop()
        if curr1.data == stack[i]:
          a = "true"
        else:
          a = "false"
        curr1 = curr1.next
        
      return a
```

## Submission at 2024-09-09 11:09:39


```

class Solution:
    def isPalindrome(self, head):
      temp = head
      length = 0

      while temp != None:
        length +=1
        temp = temp.next
      
      count = int(length/2)

      stack = []
      curr = head
      prev = None
      x = 1
      while curr != None:
        if x > count: 
          stack.append(curr.data)

        prev = curr
        curr = curr.next
        x+=1

      a = "true"
      curr1= head
      for i in range(count):
        if count % 2 != 0:
          stack.pop()
        if curr1.data == stack[i]:
          a = "true"
        else:
          a = "false"
        curr1 = curr1.next
        
      return a
```

## Submission at 2024-09-10 07:41:09


```
#include <iostream>
#include <string>
using namespace std;

int countFrequency(string s, char x, int index = 0) {
    if (index == s.length()) 
        return 0;

    int match = (s[index] == x) ? 1 : 0;

    
    return match + countFrequency(s, x, index + 1);
}

int main() {
    string s;
    char x;
    
    cin >> s >> x;

    cout << countFrequency(s, x) << endl;
    
}

```

## Submission at 2024-09-10 07:43:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    
    temp = head
    curr = head
    count = 0
    prev = None
    while curr != None:
        count +=1
        curr = curr.next
    
    curr1 = head
    for i in range(count):
        while curr1 != None:
            prev = curr1
            curr1 = curr1.next

            if temp != None and curr1 != None:
                if temp.data <= curr1.data:
                    if temp.data == curr1.data:
                        prev.next = curr1.next
                        break
        if temp != None:
            temp = temp.next
    
    return head
```

## Submission at 2024-09-10 07:44:46


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head is None: 
        return None
    
    current = head
    
    while current is not None:
        runner = current
        while runner.next is not None:
            if runner.next.data == current.data:  
                runner.next = runner.next.next 
            else:
                runner = runner.next  

        current = current.next 

    return head
```

## Submission at 2024-09-10 07:45:44


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    if head is None: 
        return None
    
    current = head
    
    while current is not None:
        runner = current
        while runner.next is not None:
            if runner.next.data == current.data:  
                runner.next = runner.next.next 
            else:
                runner = runner.next  

        current = current.next 

    return head
```

## Submission at 2024-09-10 07:48:55


```

def modify_matrix(matrix):
    answer = matrix
    m = 3
    n =3
    for i in range(m):
        for j in range(n):
            if answer[i][j] == -1:
                max_ans = 0
                k = 0
                while(k <n):
                    if answer[k][j] > max_ans:
                        max_ans = answer[k][j]
                    k+=1
                answer[i][j] = max_ans
    return answer
```

## Submission at 2024-09-10 07:50:09


```

def modify_matrix(matrix):
    answer = matrix
    m = len(matrix) 
    n = len(matrix[0])
    for i in range(m):
        for j in range(n):
            if answer[i][j] == -1:
                max_ans = 0
                k = 0
                while(k <n):
                    if answer[k][j] > max_ans:
                        max_ans = answer[k][j]
                    k+=1
                answer[i][j] = max_ans
    return answer
```

## Submission at 2024-09-10 07:51:38


```

def modify_matrix(matrix):
    m = len(matrix)    
    n = len(matrix[0]) 
    
    
    column_max = [float('-inf')] * n  
    
    for j in range(n):  
        for i in range(m):  
            if matrix[i][j] != -1:
                column_max[j] = max(column_max[j], matrix[i][j])
    
    answer = [row[:] for row in matrix]  
    
    for i in range(m):
        for j in range(n):
            if matrix[i][j] == -1:
                answer[i][j] = column_max[j]
    
    return answer

```

## Submission at 2024-09-16 03:38:08


```
def freq_count(str, ch, ans = 0):
    N = len(str)
    if N == 1 and ch == str[0]:
        ans += 1
        return ans
    elif N > 1:
        if ch == str[0]:
            ans += 1
        return freq_count(str[1:], ch, ans)  # Return the result of the recursive call
    return ans

def main():
    sample_input = input()
    str, char_ch = sample_input.split()
    print(freq_count(str, char_ch))

if __name__ == "__main__":
    main()

```

## Submission at 2024-09-16 03:58:41


```

class Solution:
    def isPalindrome(self, head):
        
        temp = head
        length = 0
        while temp is not None:
            length += 1
            temp = temp.next
  
        count = length // 2
        stack = []
        curr = head
        x = 1
        while curr is not None:
            if x > count and (length % 2 == 0 or x != count + 1):  
                stack.append(curr.data)
            curr = curr.next
            x += 1

        curr1 = head
        for i in range(count):
            if stack.pop() != curr1.data:  
                return False
            curr1 = curr1.next

        return True

```

## Submission at 2024-09-16 04:10:27


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):

    curr = head
    
    while curr and curr.next:
        if curr.data == curr.next.data:
            curr.next = curr.next.next
        else:
            curr = curr.next
    
    return head


```

## Submission at 2024-09-16 04:11:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):

    curr = head
    
    while curr and curr.next:
        if curr.data == curr.next.data:
            curr.next = curr.next.next
        else:
            curr = curr.next
    
    return head


```

## Submission at 2024-10-07 09:53:39


```
from collections import deque # Don't touch this line

def rev(q):
    n = len(q)
    stack = []

    for i in range(n):
        stack.append(q[i])

    reversed_q = reversed(stack)

    for i in range(n):
        print(reversed_q[i], end="")
        

def main():
    a = rev(q)


if "__name__" == "__main__":
    main()

```

## Submission at 2024-10-07 09:58:21


```
def reversed_string(s):
    stack = []

    n = len(string)
    for i in range(n):
        stack.append(s[i])

    for i in range(n):
        print(stack.top(), end="")
        stack.pop()
    

def main():
    s= input
    ans = reversed_string(s)

if "__name__" == "__main__":
    main()




```

## Submission at 2024-10-07 10:04:18


```
def reversed_string(s):
    list_words = map(list(s.split()))
    list_words.remove(".")

    for i in range(n):
        print(list_words[i],end=" ")

    n = len(string)
    for i in range(n):
        stack.append(s[i])

    for i in range(n):
        print(stack.top(), end="")
        stack.pop()
    

def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if "__name__" == "__main__":
    main()
```

## Submission at 2024-10-07 10:06:06


```
def reversed_string(s):
    list_words = map(list(s.split()))
    list_words.remove(".")

    n = len(list_words)

    for i in range(n):
        print(list_words[i],end=" ")

    n = len(s)
    for i in range(n):
        stack.append(s[i])

    for i in range(n):
        print(stack.top(), end="")
        stack.pop()
    

def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if "__name__" == "__main__":
    main()
```

## Submission at 2024-10-07 10:30:42


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != ".":
            stack.append(s[i])
        
        elif s[i] == "." or s[i+1] == None:
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end=" ")
            stack=[]

    
def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:32:16


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != ".":
            stack.append(s[i])
        
        elif s[i] == "." or i == (n-1):
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end="")
            stack=[]

    
def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:35:53


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != ".":
            stack.append(s[i])
        
        elif s[i] == ".":
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end="")
            stack=[]

        if i == (n-1):
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
    
def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:37:11


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != "." and s[1] != None:
            stack.append(s[i])
        
        elif s[i] == ".":
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end="")
            stack=[]

        if i == (n-1):
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
    
def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 10:54:28


```
def eval_math(s):
    n = len(s)
    nums = [0,1,2,3,4,5,6,7,8,9]
    stack = []
    for i in range(n):
            stack.append(s[i])

    for j in range(n):
        if stack[j] != None:
            print(stack[j],end="+")

def main():
    s = input()
    ans = eval_math(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 11:13:51


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != "." and s[1] != None:
            stack.append(s[i])
        
        elif s[i] == ".":
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end="")
            stack=[]

        if i == (n-1):
            n1 = len(stack)
            for i in range(n1):
                print(stack[n1-i], end="")
            # while(n1>0):
            #     print(stack[n1-1],end="")
            #     n1 = n1 - 1
    
def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-07 11:14:37


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != "." and s[1] != None:
            stack.append(s[i])
        
        elif s[i] == ".":
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end="")
            stack=[]

        if i == (n-1):
            n1 = len(stack)
            for i in range(n1):
                print(stack[n1-i-1], end="")
            # while(n1>0):
            #     print(stack[n1-1],end="")
            #     n1 = n1 - 1
    
def main():
    s = input()
    ans = reversed_string(s)
    print(ans)

if __name__ == "__main__":
    main()
```

## Submission at 2024-10-28 07:35:41


```
// Write C++ Code from scratch
#preorder
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL) return preorder;

        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right != NULL){
                st.push(root->right);
            }
            if(root->left !=NULL){
                st.push(root->left);
            }
        }
        return preorder;  
    }
};

#inorder
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        stack<TreeNode*> st;
        TreeNode* node = root;

        while (true) {
            if (node != nullptr) {
                st.push(node);
                node = node->left;
            } else {
                if (st.empty()) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->val);
                node = node->right;
            }
        }
        return inorder;
    }
};

#postorder
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if (root == NULL) return postorder;

        stack<TreeNode*> st1, st2;
        st1.push(root);

        while (!st1.empty()) {
            root = st1.top();
            st1.pop();
            st2.push(root);

            if (root->left != NULL) {
                st1.push(root->left);
            }
            if (root->right != NULL) {
                st1.push(root->right);
            }
        }

        while (!st2.empty()) {
            postorder.push_back(st2.top()->val);
            st2.pop();
        }

        return postorder;
    }
};

#levelorder
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0;i<s;i++){
                TreeNode *node=q.front();
                q.pop();
                if(node->left!=NULL)q.push(node->left);
                if(node->right!=NULL)q.push(node->right);
                v.push_back(node->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};

#max depth of binary
class Solution {
public:
    int solve(TreeNode* root){
      if(root==NULL){
        return 0;
      }  
       
     int l=  solve(root->left)+1;
     int r=  solve(root->right)+1;

      return max(l,r);

    }

    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
         return solve(root);
    }
};

#balanced binary tree
class Solution {
    private:
    int checkHeight(TreeNode* node) {
        if(node == NULL){
            return 0;
        }
        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1; // Left subtree is not balanced
        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1; // Right subtree is not balanced
        if (abs(leftHeight - rightHeight) > 1) {
            return -1;
        }
        return 1 + max(leftHeight, rightHeight); 
    }
public:
    bool isBalanced(TreeNode* root) {
        if(checkHeight(root) != -1) return true;
        else return false;
    }
};

#diameterofbinarytree
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int res = 0;
        diameter(root, res);
        return res;
    }

private:
    int diameter(TreeNode* curr, int& res){
        if (!curr) return 0;
       
        int left = diameter(curr->left, res);
        int right = diameter(curr->right, res);

        res = std::max(res, left + right);
       
        return std::max(left, right) + 1;
    }
};

#treemaxsumpart
class Solution {
public:
        int solve(TreeNode* node, int &ans) {
        if (!node)
            return 0;
        int l = max(0, solve(node->left, ans));
        int r = max(0, solve(node->right, ans));
        ans = max(ans, node->val + l + r);
        return node->val + max(l, r);
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        solve(root, ans);
        return ans;
    }
};

#sametree
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL) {
            return false;
        }
        if (p->val == q->val) {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};


#zigzag
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        q.push(root);
        int alt = 1;
        while(!q.empty()){
            vector<int> v;
            int s = q.size();
            for(int i =0;i<s;i++){
                TreeNode* temp = q.front();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                v.push_back(temp->val);
                q.pop();
            }
            if(alt == -1){
                reverse(v.begin(),v.end());
            }
            alt = alt*-1;
            ans.push_back(v);
        }
        return ans;
    }
};

#vertical order travesal
class Solution {
public:
    map<int, map<int, multiset<int>>> m;
    void dfs(TreeNode* root, int x, int y) {
        if (root == NULL) {
            return;
        }
        m[x][y].insert(root->val);
        dfs(root->left, x - 1, y + 1);
        dfs(root->right, x + 1, y + 1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root, 0, 0);
        vector<vector<int>> ans;
        for (auto i : m) {
            vector<int> col;
            for (auto j : i.second) {
                col.insert(col.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};

#binarytreerightsideview
class Solution {
public:
    vector<int> ans;
    int ma = 0;

    void traverse(TreeNode* root, int curr) {
        if (root == NULL) return;
        if (curr > ma) {
            ma++;
            ans.push_back(root->val);
        }
        traverse(root->right, curr + 1);
        traverse(root->left, curr + 1);
    }

    vector<int> rightSideView(TreeNode* root) {
        traverse(root, 1);
        return ans;
    }
};

#symetrric tree
class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
    if (!left && !right) return true;
    if (!left || !right) return false;
    return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
}

bool isSymmetric(TreeNode* root) {
    if (!root) return true;
    return isMirror(root->left, root->right);
}

};

#contsructBT for pre and post
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int p = 0, i = 0;
        return build(preorder, inorder, p, i, INT_MAX);
    }
private:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& p, int& i, int stop) {
        if (i < inorder.size() && inorder[i] != stop) {
            TreeNode* root = new TreeNode(preorder[p++]);
            root->left = build(preorder, inorder, p, i, root->val);
            i++;
            root->right = build(preorder, inorder, p, i, stop);
            return root;
        }
        return nullptr;
    }
};

#lowestcommon
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
        return NULL;

        if(root==p || root==q)
        return root;

        TreeNode* L=lowestCommonAncestor(root->left,p,q);
        TreeNode* R=lowestCommonAncestor(root->right,p,q);

        if(L==NULL)
        return R;
        if(R==NULL)
        return L;

        return root;

    }
};

#designhaset
class MyHashSet {
private:
    std::vector<bool> mp;

public:
    MyHashSet() {
        mp.resize(1000001, false);
    }

    void add(int key) {
        mp[key] = true;
    }

    void remove(int key) {
        mp[key] = false;
    }

    bool contains(int key) {
        return mp[key];
    }
};

#designhashmap
class MyHashMap {
public:
int map[1000001];
    MyHashMap() {
     
        for(int i=0;i<1000001;i++)
        {
            map[i]=-1;
        }
    }
    
    void put(int key, int value) {
        map[key]=value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key]=-1;
    }
};

#numberofgoodpair
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i = nums.begin(); i != nums.end(); ++i) {
            m[*i]++;
        }
        
        int ans = 0;
        for(auto i = m.begin(); i != m.end(); ++i) {
            ans += i->second * (i->second - 1) / 2;
        }
        return ans;
    }
};

#setmismatch
class Solution {
public:
    // time/space: O(nlogn)/O(logn)
    vector<int> findErrorNums(vector<int>& nums) {
        // sort the array
        int n = nums.size();
        sort(nums.begin(), nums.end());

        // find the repeated number
        int repeated;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] == nums[i]) {
                repeated = nums[i];
                break;
            }
        }

        // find the lost number
        int lost;
        if (nums.front() != 1) lost = 1;
        else if (nums.back() != n) lost = n;
        else {
            // the lost number is [2, n)
            int prev = 0;
            for (auto& num : nums) {
                if ((prev + 1) < num) {
                    lost = prev + 1;
                    break;
                }
                prev = num;
            }
        }

        return vector<int>({repeated, lost});
    }
};
#containduplicate
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        if(k==0){
            return false;
        }
        while(i<n){
            int j=i+1;
            while(j<=i+k&&j<n){
            if(nums[i]==nums[j]){
                return true;
            }
                j++;
            }
           i++;
        }
    
        return false;

    }
};

#find-subsequence-of-length-k-with-the-largest-sum
typedef pair<int,int> p;

class Solution {
public:
static bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}

    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
       priority_queue<p,vector<p>,greater<p>>pq;
       for(int i=0;i<nums.size();i++)
       pq.push({nums[i],i});
     vector<pair<int,int>>v1;

       while(pq.size()>0){
           if(pq.size()<=k)
         v1.push_back({pq.top().first,pq.top().second});
           pq.pop();
       }

       sort(v1.begin(),v1.end(),cmp);
       for(auto x:v1){
           ans.push_back(x.first);
       }
       return ans;

        
    }
};

#wordpattern
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s=s+' ';
        unordered_map<string,char>mp1;
        unordered_map<char,string>mp2;
        string temp="";
        int ind=0;
        for(auto i:s){
            if(i==' '){
               if(mp1.count(temp)>0 && mp1[temp]!=pattern[ind]){
                return false;
               }
               else{
                mp1[temp]=pattern[ind];
               }

                if(mp2.count(pattern[ind])>0 && mp2[pattern[ind]]!=temp){
                return false;
               }
               else{
                mp2[pattern[ind]]=temp;
               }
               ind++;
               temp.clear();
            }
            else{
            temp+=i;
            }

        }
      
        return ind == pattern.size(); 
    }
};

#twosum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
};
```

## Submission at 2024-10-28 10:25:31


```
int main(){
    int n;
    int k;
    int arr1(n);    

    for (int i = 0; i < n; i++){
        int ref_v = arr1[i];
        int count = 0;
        for (int j = 0; j < n; j++){
            if(ref_v == arr1[j]){
                count++;
            }
            if( count == k){
            return k;
            }
        }
    }
    return -1;
}
```

## Submission at 2024-10-28 10:30:49


```
#include <iostream> 

int main(){
    int n,k;
    int arr1[n];    

    for (int i = 0; i < n; i++){
        int ref_v = arr1[i];
        int count = 0;
        for (int j = 0; j < n; j++){
            if(ref_v == arr1[j]){
                count++;
            }
            if( count == k){
            return k;
            }
        }
    }
    return -1;
}
```

## Submission at 2024-10-28 10:37:56


```
#include <iostream> 
using namespace std;

int main(){
    int n,k;
    int arr1[n];    

    for (int i = 0; i < n; i++){
        int ref_v = arr1[i];
        int count = 0;
        for (int j = i+1; j < n; j++){
            if(ref_v == arr1[j]){
                count++;
            }
            if( count == k){
                cout << arr1[j];
                break;
            }
        }
    }
}
```

## Submission at 2024-10-28 10:47:37


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

        def inordertraversal(self, root):
            arr = []
            if root == None:
                return
            inordertraversal(root.left)
            arr.append[root.data]
            inordertraversal(root.right)
            return arr
        
        ans = []
        ans = inordertraversal(self, root)
        min_v = ans[0]
        for i in range(len(ans)):
            if min_v > ans[i]:
                min_v = ans[i]
        
        print(min_v)
```

## Submission at 2024-10-28 10:59:01


```
#include <iostream>
#include <vector>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* temp3;
  while(temp1 != NULL){
    while(temp2 != NULL){
      if(temp1->data == temp2->data){
        temp3 = temp1;
        return temp3;
        break;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
}
```

## Submission at 2024-10-28 11:04:03


```
#include <iostream>
#include <vector>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* temp3;
  while(temp1 != NULL){
    while(temp2 != NULL){
      if(temp1->data == temp2->data){
        temp3 = temp1;
        return temp3;
        break;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
}
```

## Submission at 2024-10-28 11:05:43


```
#include <iostream>
#include <vector>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while(temp1 != NULL){
    while(temp2 != NULL){
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
}
```

## Submission at 2024-10-28 11:07:53


```
#include <iostream>
#include <vector>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while(temp1 != NULL){
    while(temp2 != NULL){
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
}
```

## Submission at 2024-10-28 11:08:13


```
#include <iostream>
#include <vector>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while(temp1 != NULL){
    while(temp2 != NULL){
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
}
```

## Submission at 2024-10-28 11:09:49


```
#include <iostream>
#include <vector>
using namespace std;
/*
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

Node* findIntersection(Node* head1, Node* head2)
{
  Node* temp1 = head1;
  Node* temp2 = head2;
  Node* head3;
  while(temp1 != NULL){
    while(temp2 != NULL){
      if(temp1->data == temp2->data){
        head3 = temp1;
        return head3;
      }
      temp2 = temp2->next;
    }
    temp1 = temp1->next;
  }
  return NULL;
}
```

## Submission at 2024-10-28 11:14:44


```
#include <iostream>
using namespace std;

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
vector<int> inorderTraversal(Node *root) {
        vector<int> inorder;
        stack<root> st;
        Node* node = root;

        while (true) {
            if (node != nullptr) {
                st.push(node);
                node = node->left;
            } else {
                if (st.empty()) break;
                node = st.top();
                st.pop();
                inorder.push_back(node->data);
                node = node->right;
            }
        }
        return inorder;
}

int findMin(Node *root)
{
    //code here
}


```

## Submission at 2024-10-28 11:24:50


```
#include <iostream>
#include <string>
using namespace std;

int main(){
    string order,s;
    cin >> order >> s;
    string temp;

    for(int i = 0; i <s.length(); i++){
        for(int j = 0; j < order.length(); j++){
            if (s[i] == order[j]){
                temp[i] = s[i];
            }
        }
    }
    cout << temp << endl;
}
```

## Submission at 2024-10-28 11:25:53


```
#include <iostream>
#include <string>
using namespace std;

int main(){
    string order,s;
    cin >> order >> s;
    string temp = s;

    for(int i = 0; i <s.length(); i++){
        for(int j = 0; j < order.length(); j++){
            if (s[i] == order[j]){
                temp[j] = s[i];
            }
        }
    }
    cout << temp << endl;
}
```

## Submission at 2024-11-18 08:02:26


```
def reversed_string(s):
    n = len(s)
    stack = []
    for i in range(n):
        if s[i] != "." and s[1] != None:
            stack.append(s[i])
        
        elif s[i] == ".":
            n1 = len(stack)
            while(n1>0):
                print(stack[n1-1],end="")
                n1 = n1 - 1
            print(".", end="")
            stack=[]

        if i == (n-1):
            n1 = len(stack)
            for i in range(n1):
                print(stack[n1-i-1], end="")
            # while(n1>0):
            #     print(stack[n1-1],end="")
            #     n1 = n1 - 1
    
def main():
    s = input()
    ans = reversed_string(s)

if __name__ == "__main__":
    main()

```

## Submission at 2024-11-25 09:54:09


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i =0; i < n; i++){
        for(int j =0; j <=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:02:56


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> temp;
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = true;
    for (int i =0; i < n-1; i++){
        if((temp[i+1] - temp[i]) != d){
            flag = false;
        }
    }
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:08:42


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> temp;
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =0;
    while ((temp[j+1] - temp[j]) == d && j <n-1){
        flag = true;
        j++;
    }
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:12:14


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> temp;
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <=n-1){
        flag = true;
        j++;
    }
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:20:39


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1, c2;
    for (int i= 0; i < s.length(); i++){
        if(s[i] == 'a') {c1++;}
        else if(s[i] == 'b') {c2++;}
    }
    if (c1 > c2) cout << 'a';
    else if (c2 > c1) cout << 'b';
}
```

## Submission at 2024-11-25 10:22:10


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1, c2;
    for (int i= 0; i < s.length(); i++){
        if(s[i] == 'a') {c1++;}
        else if(s[i] == 'b') {c2++;}
    }
    if (c1 > c2) cout << 'a';
    else cout << 'b';
}
```

## Submission at 2024-11-25 10:24:51


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1, c2;
    if(s.length() >= 2 && s.length() <=100) {
        for (int i= 0; i < s.length(); i++){
            if(s[i] == 'a') {c1++;}
            else if(s[i] == 'b') {c2++;}
        }
        if (c1 > c2) cout << 'a';
        else if (c2 > c1) cout << 'b';
    }
}
```

## Submission at 2024-11-25 10:27:00


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1, c2;
    if(s.length() >= 2 && s.length() <=100) {
        for (int i= 0; i < s.length(); i++){
            if(s[i] == 'a') {c1++;}
            else if(s[i] == 'b') {c2++;}
        }
        if (c1 > c2) cout << "a";
        else if (c2 > c1) cout << "b";
    }
}
```

## Submission at 2024-11-25 10:29:17


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1, c2;
    if(s.length() >= 2 && s.length() <=100) {
        for (int i= 0; i < s.length(); i++){
            if(s[i] == 'a') {c1++;}
            else {c2++;}
        }
        if (c1 > c2) cout << "a";
        else if (c2 > c1) cout << "b";
    }
}
```

## Submission at 2024-11-25 10:30:45


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <=n-1){
        flag = true;
        j++;
    }
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:35:25


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <=n-1){
        flag = true;
        j++;
    }
    if (j != n){
        flag = false;
    }
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:39:15


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <=n-1){
        flag = true;
        j++;
    }
    if( j!= n) { flag = false;}
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:44:22


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <=(n-1)){
        flag = true;
        j++;
    }
    if( j!= n) { flag = false;}
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:46:45


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <= (n-1)){
        flag = true;
        j++;
    }
    if( j!= n) { flag = false;}
    cout << flag << endl;
}
```

## Submission at 2024-11-25 10:50:24


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while ((temp[j] - temp[j-1]) == d && j <= (n-1)){
        j++;
    }
    if( j== n) { flag = true;}
    cout << flag << endl;
}
```

## Submission at 2024-11-25 11:03:20


```
#include<bits/stdc++.h>
using namespace std;

void check_n(int& arr,int start,int end){
    string ans;
    int mid = (start + end)/2;
    if(end+1 > 3) {ans = "YES";}
    else if(end+1 == 3){ans = "YES"; }
    else {ans = "NO";}
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;

}
```

## Submission at 2024-11-25 11:03:22


```
#include<bits/stdc++.h>
using namespace std;

void check_n(int& arr,int start,int end){
    string ans;
    int mid = (start + end)/2;
    if(end+1 > 3) {ans = "YES";}
    else if(end+1 == 3){ans = "YES"; }
    else {ans = "NO";}
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;

}
```

## Submission at 2024-11-25 11:03:24


```
#include<bits/stdc++.h>
using namespace std;

void check_n(int& arr,int start,int end){
    string ans;
    int mid = (start + end)/2;
    if(end+1 > 3) {ans = "YES";}
    else if(end+1 == 3){ans = "YES"; }
    else {ans = "NO";}
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int mid = (low + high)/2;

}
```

## Submission at 2024-11-25 11:05:57


```
#include<bits/stdc++.h>
using namespace std;

void check_n(int& arr,int start,int end){
    string ans;
    int mid = (start + end)/2;
    if(end+1 == 3){ans = "YES"; }
    else if(end+1 <3) {ans = "NO";}
    else{
        check_n(arr,0, mid-1);
        check_n(arr, mid+1,end)
        ans = "YES";
    }  
    cout << ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    
    check_n(arr, 0, n-1)

}
```

## Submission at 2024-11-25 11:06:09


```
#include<bits/stdc++.h>
using namespace std;

void check_n(int& arr,int start,int end){
    string ans;
    int mid = (start + end)/2;
    if(end+1 == 3){ans = "YES"; }
    else if(end+1 <3) {ans = "NO";}
    else{
        check_n(arr,0, mid-1);
        check_n(arr, mid+1,end)
        ans = "YES";
    }  
    cout << ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    
    check_n(arr, 0, n-1);
}
```

## Submission at 2024-11-25 11:09:40


```
#include<bits/stdc++.h>
using namespace std;

void check_n(int arr(end+1),int start,int end){
    string ans;
    int mid = (start + end)/2;
    if(end+1 == 3){ans = "YES"; }
    else if(end+1 <3) {ans = "NO";}
    else{
        check_n(arr,0, mid-1);
        check_n(arr, mid+1,end)
        ans = "YES";
    }  
    cout << ans;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i <n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    
    check_n(arr(n), 0, n-1);
}
```

## Submission at 2024-11-25 11:13:55


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i =0; i <n; i++){
        for(int j =0; j < n-i+1; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k<n; k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:14:51


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i =0; i <n; i++){
        for(int j =0; j < n-i; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k<n; k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:15:36


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i =0; i <n; i++){
        for(int j = i+; j < n-i; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k<n; k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:15:57


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i =0; i <n; i++){
        for(int j = i+1; j < n-i; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k<n; k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:20:07


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    for (int i =0; i <n; i++){
        for(int j = i+1; j < n-i; j++){
            if(arr[j] > arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k<n; k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:22:26


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    
    int swap_n = 0;
    int j = 0;
    while (swap_n < n){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1])l;
        }
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k<n; k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:24:10


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    
    int swap_n = 0;
    int j = 0;
    while (swap_n < n){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1])l;
        }
        j++;
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k < ans_v.size(); k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:25:13


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, target;
    cin >> n >> target;
    int arr[n];
    for(int i =0; i <n; i++){
        cin >> arr[i];
    }
    
    int swap_n = 0;
    int j = 0;
    while (swap_n < n){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
        j++;
    }
    vector<int> ans_v;
    for (int i=0; i <n; i++){
        if(arr[i] == target){
            ans_v.push_back(i);
        }
    }
    for(int k =0; k < ans_v.size(); k++){
        cout << ans_v[k] << " ";
    }
}
```

## Submission at 2024-11-25 11:26:57


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1, c2;
    char A1= 'a';
    char B1 = 'b';
    if(s.length() >= 2 && s.length() <=100) {
        for (int i= 0; i < s.length(); i++){
            if(s[i] == A1) {c1++;}
            else if(s[i] == B1) {c2++;}
        }
        if (c1 > c2) cout << A1;
        else if (c2 > c1) cout << B1;
    }
}
```

## Submission at 2024-11-25 11:28:01


```
// mind A' and B's
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int c1=0;
    int c2 =0;
    char A1= 'a';
    char B1 = 'b';
    if(s.length() >= 2 && s.length() <=100) {
        for (int i= 0; i < s.length(); i++){
            if(s[i] == A1) {c1++;}
            else if(s[i] == B1) {c2++;}
        }
        if (c1 > c2) cout << A1;
        else if (c2 > c1) cout << B1;
    }
}
```

## Submission at 2024-11-25 11:31:22


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while (j <= (n-1)){
        int temp1 = arr[j] - arr[j-1];
        if (temp1 == d){
            flag = true;
        } 
        else {flag =false;}
    }
    cout << flag << endl;
}
```

## Submission at 2024-11-25 11:35:39


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while (j <= (n-1)){
        int temp1 = temp[j] - temp[j-1];
        if (temp1 == d){
            flag = true;
        } 
        else {
            flag =false;
        }
    }
    cout << flag;
}
```

## Submission at 2024-11-25 11:37:32


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while (j <= (n-1)){
        int temp1 = temp[j] - temp[j-1];
        if (temp1 == d){
            flag = true;
        } 
        else {
            flag =false;
        }
    }
    cout << flag;
}
```

## Submission at 2024-11-25 11:39:37


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while (j < n ){
        int temp1 = temp[j] - temp[j-1];
        if (temp1 == d){
            flag = true;
        } 
        else {
            flag =false;
        }
        j++;
    }
    cout << flag;
}
```

## Submission at 2024-11-25 11:41:08


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while (j < n ){
        int temp1 = temp[j] - temp[j-1];
        if (temp1 == d){
            flag = true;
        } 
        else {
            flag =false;
            break;
        }
        j++;
    }
    cout << flag;
}
```

## Submission at 2024-11-25 11:42:24


```
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp[n];
    for(int i =0; i < n; i++){
        cin >> temp[i];
    }
    int d = temp[1] - temp[0];
    bool flag = false;
    
    int j =1;
    while (j < n ){
        int temp1 = temp[j] - temp[j-1];
        if (temp1 == d){
            flag = true;
        } 
        else {
            flag =false;
            cout << "false";
            break;
        }
        j++;
    }
}
```

