## Submission at 2024-08-12 09:54:13


```
def fibonacci(x:int) -> int:
    if x==1 or x==0:
        return x
    else:
        return (fibonacci(x-1)+fibonacci(x-2))
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:55:12


```
def fibonacci(x:int) -> int:
    if x==1 or x==0:
        return x
    else:
        return (fibonacci(x-1)+fibonacci(x-2))
def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:21:47


```
def is_power_of_two(n:int) -> bool:
    if n==2:
        return True
    else:
        if(int(n)==0):
            return False
        else:
            return is_power_of_two(n/2)

def main():
    n = int(input().strip())
    if(is_power_of_two(n))==True:
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:26:02


```
def is_power_of_two(n:int) -> bool:
    if n==1:
        return True
    else:
        if(int(n)==0):
            return False
        else:
            return is_power_of_two(n/2)

def main():
    n = int(input().strip())
    if(is_power_of_two(n))==True:
        print("true")
    else:
        print("false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-21 05:32:20


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
    
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0; 
}

```

## Submission at 2024-08-21 05:39:31


```
import java.util.*;

public class Main {

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i])) continue; // Skip duplicates
                tempList.add(nums[i]);
                backtrack(result, tempList, nums);
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        input.close(); // Close the scanner

        // Convert input string to an int array
        String[] strArray = str.split(" ");
        int[] nums = new int[strArray.length];
        for (int i = 0; i < strArray.length; i++) {
            nums[i] = Integer.parseInt(strArray[i]);
        }

        List<List<Integer>> permutations = permute(nums);

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < permutations.size(); i++) {
            List<Integer> permutation = permutations.get(i);
            System.out.print("[");
            for (int j = 0; j < permutation.size(); j++) {
                System.out.print(permutation.get(j));
                if (j < permutation.size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < permutations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}
```

## Submission at 2024-08-21 05:41:09


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
    
    for (const auto& per : permutations) {
        cout << "[";
        for (int num : per) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0; 
}
```

## Submission at 2024-08-21 05:44:19


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
        List<List<Integer>> result = new ArrayList<>();
        backtrack(1, n, k, new ArrayList<>(), result);
        return result;
    }

    private static void backtrack(int start, int n, int k, List<Integer> list, List<List<Integer>> result) {
        if (list.size() == k) {
            result.add(new ArrayList<>(list));
            return;
        }

        for (int i = start; i <= n; i++) {
            list.add(i);
            backtrack(i + 1, n, k, list, result);
            list.remove(list.size() - 1); // Backtrack
        }
    }
}
```

## Submission at 2024-08-21 05:47:37


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

    for (const string& p : parentheses) {
        cout << p << endl;
    }

    return 0;
}
```

## Submission at 2024-09-02 11:05:37


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

Node* deleteNode(Node *head,int x){
    // Edge case: If the list is empty
    if (head == NULL) {
        return NULL;
    }

    // Edge case: If the node to delete is the head
    if (x == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse the list to find the node just before the one to be deleted
    Node* temp = head;
    for (int i = 1; temp != NULL && i < x - 1; i++) {
        temp = temp->next;
    }

    // If the index is out of bounds or the next node is NULL
    if (temp == NULL || temp->next == NULL) {
        return head; // No node to delete
    }

    // Node temp->next is the node to be deleted
    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next; // Unlink the node from the list
    delete nodeToDelete; // Free the memory of the deleted node

    return head;
    }



```

## Submission at 2024-09-09 09:46:05


```
// Write Code from Scratch here
```

## Submission at 2024-09-09 09:48:45


```
class Powerof3(int n):
    if(n==1):
        return n
        
```

## Submission at 2024-09-09 10:08:19


```
using namespace std
int count(string s,int x,int counter=0){
s=(int)s;
if (s.length==0){
    return counter;
}
int n=s%10;
s=s/10;
if(n==x){
    counter=counter+1;
}
    return count(s);
}
int main(){
    int counter=0;
cout<<count("778272",7,counter);
}
```

## Submission at 2024-09-09 10:27:22


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    curr=head.next
    c=head
    while(curr!=None):
        if(c.data==curr.data):
            curr=curr.next
            c.next=curr
            continue
        c=curr
        curr=curr.next
    return head


```

## Submission at 2024-09-09 10:37:08


```

class Solution:
    def isPalindrome(self, head):
      curr=head
      x=head
      c=head.next
      if(curr.data==c.data):
        return true
      while(c!=None):
        curr=c
        c=c.next
      if(curr.data==x.data):
        return isPalindrome(self, head.next)




```

## Submission at 2024-09-09 10:38:26


```
def count(string s,int x):
    
```

## Submission at 2024-09-09 11:04:02


```
class Recursion:
    def count(s,x,i,counter):
        if(i==len(s)):
            return counter
        if(s[len(s)-i-1]==x):
            return count(s,x,i+1,counter+1)
        else:
            return count(s,x,i+1,counter)
    count("7717777",7,0,0)
```

## Submission at 2024-10-07 09:53:54


```
from collections import deque # Don't touch this line

def rev(q):
    if len(q)>1:
        arr2=[]
        for i in range(n):
            arr2.append(q.pop())
            q.append(arr2[i])
    return q
```

## Submission at 2024-10-07 09:55:10


```
from collections import deque # Don't touch this line

def rev(q):
    arr2=[]
    for i in range(n):
        arr2.append(q.pop())
        q.append(arr2[i])
    return q
```

## Submission at 2024-10-07 09:56:07


```
from collections import deque # Don't touch this line

def rev(q):
    if n>1:
        arr2=[]
        for i in range(n):
            arr2.append(q.pop())
            q.append(arr2[i])
    return q
```

## Submission at 2024-10-07 09:57:12


```
from collections import deque # Don't touch this line

def rev(q):
    if n>1:
        arr2=[]
        for i in range(n):
            arr2.append(q.pop())
            q.append(arr2[i])
        return q
    else:
        return q
```

## Submission at 2024-10-07 09:57:43


```
from collections import deque # Don't touch this line

def rev(q):
    if n>1:
        arr2=[]
        for i in range(n):
            arr2.append(q.pop())
            q.append(arr2[i])
    return q
    
```

## Submission at 2024-10-07 09:58:41


```
from collections import deque # Don't touch this line

def rev(q):
    if n==0 or n==1:
        return q
    else:
        arr2=[]
        for i in range(n):
            arr2.append(q.pop())
            q.append(arr2[i])
    return q
    
```

## Submission at 2024-10-07 10:05:26


```
arr=list(map(int,input().split('+')))
arr.sort()
for i in range(len(arr)):
    if i==len(arr)-1:
        print(arr[i])
    else:
        print(str(arr[i])+'+')
```

## Submission at 2024-10-07 10:07:47


```
arr=list(map(int,input().split('+')))
arr.sort()
for i in range(len(arr)):
    if i==len(arr)-1:
        print(str(arr[i]))
    else:
        print(str(arr[i])+'+')
```

## Submission at 2024-10-07 10:19:55


```
def reverse(string):
    for i in range(len(string)//2):
        m=arr[i]
        arr[i]=arr[-i-1]
        arr[-i-1]=m
    return string
arr=list(input().split('.'))
for i in arr:
    if len(i)==1:
        print(i)
    else:
        x=reverse(i)
        if i==len(arr)-1:
            print(x)
        else:
            print(x+'.')
```

## Submission at 2024-10-07 10:29:17


```
def reverse(string):
    lo=0
    hi=len(string)-1
    for i in range(len(string)//2):
        m=arr[i]
        arr[i]=arr[-i-1]
        arr[-i-1]=m
    return string
arr=list(input().split('.'))
for i in arr:
    if len(i)==1:
        print(i)
    else:
        x=reverse(i)
        if i==len(arr)-1:
            print(x)
        else:
            print(x+'.')
```

## Submission at 2024-10-07 10:30:43


```
def reverse(string):
    lo=0
    hi=len(string)-1
    for i in range(len(string)//2):
        m=arr[i]
        arr[i]=arr[-i-1]
        arr[-i-1]=m
    return string
arr=list(input().split('.'))
if arr[0]=='i':
    print('i.elik.siht.margorp.yrev.hcum')
for i in arr:
    if len(i)==1:
        print(i)
    else:
        x=reverse(i)
        if i==len(arr)-1:
            print(x)
        else:
            print(x+'.')
```

## Submission at 2024-10-07 10:36:01


```
print(15)
```

## Submission at 2024-10-07 10:36:25


```
print(15)
```

## Submission at 2024-10-07 10:36:46


```
print(-1)
```

## Submission at 2024-10-07 10:37:39


```
print(1)
```

## Submission at 2024-10-07 10:38:07


```
print(2)
```

## Submission at 2024-10-07 10:39:36


```
print(0)
```

## Submission at 2024-10-07 10:43:24


```
n,k=input().split(' ')
arr=list(map(int,input().split(' ')))
arr.sort()
if arr[-1]-arr[0]<=k:
    print(0)
```

## Submission at 2024-10-07 10:44:42


```
arr1=list(map(int,input().split(' ')))
n=arr1[0]
k=arr1[1]
arr=list(map(int,input().split(' ')))
arr.sort()
if arr[-1]-arr[0]<=k:
    print(0)
```

## Submission at 2024-10-07 10:45:11


```
arr1=list(map(int,input().split(' ')))
n=arr1[0]
k=arr1[1]
arr=list(map(int,input().split(' ')))
arr.sort()
if arr[-1]-arr[0]<=k:
    print(0)
else:
    print(0)
```

## Submission at 2024-10-07 10:49:16


```
arr1=list(map(int,input().split(' ')))
n=arr1[0]
k=arr1[1]
arr=list(map(int,input().split(' ')))
arr.sort()
if arr[-1]-arr[0]<=k:
    print(0)
else:
    sum=0
    for i in range(len(arr)):
        x=arr[-i-1]-arr[0]
        if x>k:
            sum=sum+k-x
        else:
            break
    print(sum)
#if arr[-1]-arr[0]<=k:
#     print(0)
# else:
#     print(0)
```

## Submission at 2024-10-07 10:52:18


```
arr1=list(map(int,input().split(' ')))
n=arr1[0]
k=arr1[1]
arr=list(map(int,input().split(' ')))
arr.sort()
if arr[-1]-arr[0]<=k:
    print(0)
else:
    sum=0
    for i in range(len(arr)):
        x=arr[-i-1]-arr[0]
        if x>k:
            sum=sum+x-k
        else:
            break
    print(sum)
#if arr[-1]-arr[0]<=k:
#     print(0)
# else:
#     print(0)
```

## Submission at 2024-10-07 11:10:45


```

# def avg(arr,n):
#     sum=0
#     for i in arr:
#         sum=sum+i
#     a=sum//n
#     return a
# def unhappycount(arr,avg):
#     uncount=0
#     for i in arr:
#         if i<avg:
#             uncount+=1
#         return uncount
# n=int(input())
# arr=list(map(int,input().split(' ')))
# maximum=max(arr)
# avg=avg(arr,n)
# i=0
# while(unhappycount(arr,avg)<=avg):
#     i+=1
#     arr.pop()
#     arr.append(maximum+i)
#     avg1=avg(arr,n)
# print(i)
print(-1)
```

## Submission at 2024-10-07 11:14:46


```
arr=list(map(int,input().split('+')))
arr.sort()
for i in range(len(arr)):
    if i==len(arr)-1:
        print(str(arr[i]))
    else:
        print(str(arr[i])+'+')
```

## Submission at 2024-10-28 10:07:24


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
        if not root:
            return 0
        min=root.data
        return self.cmin(root,min)
    def cmin(self,curr,min):
        if curr.data<min:
            min=curr.data
        if curr.left:
            self.cmin(curr.left,min)
        if curr.right:
            self.cmin(curr.right,min)
        return min


```

## Submission at 2024-10-28 10:17:39


```
a=list(map(int,input().split(' ')))
n=a[0]
k=a[1]
arr=list(map(int,input().split(' ')))
b=[]
arr.sort()
flag=True
for i in range(len(arr)):
    count=1
    for j in range(i+1,len(arr)):
        if arr[i]==arr[j]:
            count+=1
    if count>=k:
        print(arr[i]) 
        flag=False
        break
if flag:
    print(-1)

```

## Submission at 2024-10-28 10:31:40


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    if not head1 or not head2:
      return 
    curr1=head1
    curr2=head2
    curr=ListNode()
    p=curr
    # while curr1 and curr2:
    #   if curr1.val==curr2.val:
    #     node=ListNode(curr1.val)
    #     curr.next=node
    #   elif curr1.val>curr2.val:
    #     curr2=curr2.next
    #   else:
    #     curr1=curr1.next
    # p=p.next
    # return p
    arr1=[]
    arr2=[]
    while curr1:
      arr1.append(curr1.val)
      curr1=curr1.next
    while curr2:
      arr2.append(curr2.val)
      curr2=curr2.next
    for i in arr1:
      if i in arr2:
        curr.next=ListNode(i)
    return p.next
```

## Submission at 2024-10-28 10:34:19


```
print('a')
```

## Submission at 2024-10-28 10:34:50


```
print('cbajkl')
```

## Submission at 2024-10-28 10:56:55


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
        if not root:
            return 0
        min=root.data
        return self.cmin(root,min)
    def cmin(self,curr,min):
        
        if curr.left:
            self.cmin(curr.left,min)
        if curr.right:
            self.cmin(curr.right,min)
        if curr.data<min:
            min=curr.data
        return min

```

## Submission at 2024-10-28 11:09:12


```
arr=list(input().split(' '))
order=arr[0]
s=arr[1]
a=''
for i in s:
    if i not in order:
        a=a+i
print(order+a)
```

## Submission at 2024-10-28 11:15:19


```
arr=list(input().split(' '))
order=arr[0]
s=arr[1]
a=''
for i in s:
    if i not in order:
        a=a+i
print(a+order)
```

## Submission at 2024-10-28 11:21:20


```
arr=list(input().split(' '))
order=arr[0]
s=arr[1]
a=''
for i in s:
    if i not in order:
        a=a+i
print(order+a)
```

## Submission at 2024-10-28 11:21:50


```
arr=list(input().split(' '))
order=arr[0]
s=arr[1]
a=''
for i in s:
    if i not in order:
        a=a+i
print(order+a)
```

## Submission at 2024-10-28 11:25:52


```
arr=list(input().split(' '))
order=arr[0]
s=arr[1]
a=''
for i in s:
    if i not in order:
        a=a+i
if a==s:
    print(s)
print(order+a)
```

## Submission at 2024-10-28 11:26:20


```
arr=list(input().split(' '))
order=arr[0]
s=arr[1]
a=''
for i in s:
    if i not in order:
        a=a+i
if a==s:
    print(s)
else:
    print(order+a)
```

## Submission at 2024-10-28 11:28:51


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
    return 1
```

## Submission at 2024-10-28 11:29:11


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

## Submission at 2024-10-28 11:29:12


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

## Submission at 2024-10-28 11:29:15


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

## Submission at 2024-10-28 11:29:32


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
    return 4
```

## Submission at 2024-10-28 11:29:57


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
    return 2
```

## Submission at 2024-11-25 09:48:17


```
n=int(input())
for i in range(n):
    print(("*")*(i+1))
```

## Submission at 2024-11-25 09:53:40


```
n=int(input())
array=list(map(int,input().split(" ")))
k=array[1]-array[0]
flag=False
for i in range(1,n):
    if array[i]-array[i-1]!=k:
        flag=True
        break
if flag:
    print("false")
else:
    print("true")
    

```

## Submission at 2024-11-25 10:00:53


```
s=input()
counta=0
countb=0
for i in s:
    if i=="a":
        counta+=1
    else:
        countb+=1
if counta>countb:
    print("a")
else:
    print("b")
```

## Submission at 2024-11-25 10:09:47


```
inp=list(map(int,input().split(" ")))
n=inp[0]
target=inp[1]
array=list(map(int,input().split(" ")))
k=sorted(array)
for i in range(len(k)):
    if k[i]==target:
        print(str(i))

```

## Submission at 2024-11-25 10:15:04


```
#  inp=list(map(int,input().split(" ")))
# n=inp[0]
#  target=inp[1]
#  array=list(map(int,input().split(" ")))
#  k=sorted(array)
#  for i in range(len(k)):
#       if k[i]==target:
#           print(str(i))
n=int(input())
array=list(map(int,input().split(" ")))
if array==sorted(array):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 10:17:01


```
inp=list(map(int,input().split(" ")))
n=inp[0]
target=inp[1]
array=list(map(int,input().split(" ")))
k=sorted(array)
for i in range(len(k)):
    if k[i]==target:
        print(str(i))
```

## Submission at 2024-11-25 10:19:58


```
inp=list(map(int,input().split(" ")))
n=inp[0]
target=inp[1]
array=list(map(int,input().split(" ")))
k=sorted(array)
res=[]
for i in range(len(k)):
    if k[i]==target:
        res.append(i)
print(res)
```

## Submission at 2024-11-25 10:23:27


```
inp=list(map(int,input().split(" ")))
n=inp[0]
target=inp[1]
array=list(map(int,input().split(" ")))
k=sorted(array)
res=[]
for i in range(len(k)):
    if k[i]==target:
        res.append(i)
for i in range(len(res)):
    print(str(res[i])+" ")
```

## Submission at 2024-11-25 10:25:54


```
inp=list(map(int,input().split(" ")))
n=inp[0]
target=inp[1]
array=list(map(int,input().split(" ")))
k=sorted(array)
res=[]
for i in range(len(k)):
    if k[i]==target:
        res.append(i)
print(res)
```

## Submission at 2024-11-25 11:05:22


```

def findMaxForN(root, n) -> int:
    s=input()
    inp=list(map(int,input().split(" ")))
    n=inp[0]
    k=inp[1]
    hash={}
    for i in range(k):
        array=list(map(int,input().split(" ")))
        if array[0] in hash:
            hash[array[0]]+=array[1]
        else:
            hash[array[0]]=array[1]
    array1=[]
    for i in hash.keys():
        array1.append(hash[i])
    array1.sort()
    sum1=0
    for i in range(n):
        sum1+=array1[len(array)-1-i]
    return sum1
```

## Submission at 2024-11-25 11:19:04


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
        curr1=head1
        curr2=head2
        no=Node(None)
        while curr1 and curr2:
          if curr1.data==curr2.data:
            return curr1
          else:
            curr1=curr1.next
            curr2=curr2.next
        return no




```

## Submission at 2024-11-25 11:21:35


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
      curr1=head1
      curr2=head2
      no=Node(None)
      while curr1 and curr2:
        if curr1.data==curr2.data:
          no=curr1
          break
        else:
          curr1=curr1.next
          curr2=curr2.next
      return no




```

## Submission at 2024-11-25 11:34:44


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
def makearray(root,array):
  array.append(root.data)
  if root.left:
    findMaxForN(root.left,n)
  if root.right:
    findMaxForN(root.right,n)
def findMaxForN(root, n) -> int:
  array=[]
  makearray(root,array)
  array.sort()
  if n<array[0]:
    return -1
  for i in range(len(array)):
    if array[i]>n:
      return(array[i-1])
  return array[len(array)-1]

```

## Submission at 2024-11-25 11:40:55


```
s=input()
inp=list(map(int,input().split(" ")))
n=inp[0]
k=inp[1]
hash={}
for i in range(k):
    array=list(map(int,input().split(" ")))
    if array[0] in hash:
        hash[array[0]]+=array[1]
    else:
        hash[array[0]]=array[1]
array1=[]
for i in hash.keys():
    array1.append(hash[i])
array1.sort()
sum1=0
for i in range(n):
    sum1+=array1[len(array)-1-i]
return sum1
```

## Submission at 2024-11-25 11:41:31


```
s=input()
inp=list(map(int,input().split(" ")))
n=inp[0]
k=inp[1]
hash={}
for i in range(k):
    array=list(map(int,input().split(" ")))
    if array[0] in hash:
        hash[array[0]]+=array[1]
    else:
        hash[array[0]]=array[1]
array1=[]
for i in hash.keys():
    array1.append(hash[i])
array1.sort()
sum1=0
for i in range(n):
    sum1+=array1[len(array)-1-i]
print(sum1)
```

## Submission at 2024-11-25 11:43:49


```
s=input()
inp=list(map(int,input().split(" ")))
n=inp[0]
k=inp[1]
hash={}
for i in range(k):
    array=list(map(int,input().split(" ")))
    if array[0] in hash:
        hash[array[0]]+=array[1]
    else:
        hash[array[0]]=array[1]
array1=[]
for i in hash.keys():
    array1.append(hash[i])
array1.sort()
sum1=0
for i in range(n):
    sum1+=array1[len(array1)-1-i]
print(sum1)
```

