## Submission at 2024-08-05 10:11:41


```
name = input("enter your name: ")
print("hello" + " " + name)
```

## Submission at 2024-08-05 10:17:14


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:25


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:25


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:26


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:29


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:29


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:29


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:17:35


```
user = input("enter your name: ")
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:18:32


```
user = input()
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:19:10


```
user = input()
if len(user)<=1 or len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:24:55


```
user = input()
if len(user)>=1 and len(user)<=100:
        print("hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:25:16


```
user = input()
if len(user)>=1 and len(user)<=100:
        print("Hello" + " " + user + "!")
```

## Submission at 2024-08-05 10:43:36


```
n = int(input())
if n>=1 and n<=100:
    for i in range(1,n+1):
        user = input()
        if len(user)>=1 and len(user)<=100:
            print("Hello" + " " + user + "!")
```

## Submission at 2024-08-12 09:53:54


```
y = int()
def fibonacci(x:int) -> int:

    if (x== 0 or x== 1):
       return x
    elif(x>1 and x<=30):
        y = fibonacci(x-1) + fibonacci(x-2)
    return y


def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 10:40:07


```
def is_power_of_two(n:int) -> int:
    if n>= (-2**31) and n<=(2**31-1):
        if n<0:
            n = 0- n 
        if n == 1:
            print("true")
        if (n%2 != 0 ):
            return ("false")
        return is_power_of_two(n//2)
        
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:45:03


```
def is_power_of_two(n:int) -> int:
        if n<0:
            n = 0- n 
        if n == 1:
            print("true")
        if (n%2 != 0 or n<1):
            return ("false")
        return is_power_of_two(n//2)
        
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:45:41


```
def is_power_of_two(n:int) -> int:
        if n<0:
            n = 0- n 
        if n == 1:
            print("true")
        if (n%2 != 0 or n<=0):
            return ("false")
        return is_power_of_two(n//2)
        
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:48:04


```
def is_power_of_two(n:int) -> int:
if n>=(-(2**31) and n<=(2**31)-1):
    if n<0:
        n = 0- n 
    if n == 1:
        print("true")
    if (n%2 != 0 or n<=0):
        return ("false")
    return is_power_of_two(n//2)
        
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:48:52


```
def is_power_of_two(n:int) -> int:
    if n>=(-(2**31) and n<=(2**31)-1):
        if n<0:
            n = 0- n 
        if n == 1:
            print("true")
        if (n%2 != 0 or n<=0):
            return ("false")
        return is_power_of_two(n//2)
            
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:50:02


```
def is_power_of_two(n:int) -> int:
    if n>=(-(2**31) and n<=(2**31)-1):
        if n == 1:
            print("true")
        if n%2 != 0 or n<=0:
            return ("false")
        return is_power_of_two(n//2)
            
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:51:13


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>=(-(2**31) and n<=(2**31)-1):
        if n == 1:
            return a
        if n%2 != 0 or n<=0:
            return b
        return is_power_of_two(n//2)
            
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:51:45


```
def is_power_of_two(n:int) -> int:
    a = "true"
    b = "false"
    if n>=(-(2**31)) and n<=((2**31)-1):
        if n == 1:
            return a
        if n%2 != 0 or n<=0:
            return b
        return is_power_of_two(n//2)
            
        
        
   
            
def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-14 03:43:25


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

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-14 03:44:46


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

if _name_ == "_main_":
    main()
```

## Submission at 2024-08-14 03:48:06


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

## Submission at 2024-08-14 03:51:50


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

## Submission at 2024-08-14 03:51:51


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

## Submission at 2024-08-14 03:53:54


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

## Submission at 2024-08-20 07:40:01


```
def combine(n, k):
    # Write logic here

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

## Submission at 2024-08-21 06:26:05


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

## Submission at 2024-08-21 06:28:19


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

## Submission at 2024-08-21 06:39:00


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

## Submission at 2024-09-02 09:56:56


```
n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = []

for i in range(n):
    if a[i]>b[i]:
        c.append(a[i])
    else:
        c.append(b[i])
    
for x in c:
    print(x, end=" ")
```

## Submission at 2024-09-02 10:10:37


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

## Submission at 2024-09-09 10:01:04


```
def power_of_three(n):
    if n==1:
        return True
    if n>1:
        if(n%3 == 0):
            return power_of_three(n/3)
        if(n%3 != 0):
            return False
n = 27
print(power_of_three(n))

```

## Submission at 2024-09-09 10:01:40


```
def power_of_three(n):
    if n==1:
        return True
    if n>1:
        if(n%3 == 0):
            return power_of_three(n/3)
        if(n%3 != 0):
            return False
n = 89
print(power_of_three(n))

```

## Submission at 2024-09-09 10:03:07


```
def power_of_three(n):
    if n==1:
        return True
    if n>1:
        if(n%3 == 0):
            return power_of_three(n/3)
        if(n%3 != 0):
            return False
n = 27
print(power_of_three(n))

```

## Submission at 2024-09-09 10:03:46


```
def power_of_three(n):
    if n==1:
        return True
    if n>1:
        if(n%3 == 0):
            return power_of_three(n/3)
        if(n%3 != 0):
            return False
n = 89
print(power_of_three(n))

```

## Submission at 2024-09-09 10:33:58


```
def power_of_three(n):
    if n==1:
        return True
    if n>1:
        if(n%3 == 0):
            return power_of_three(n/3)
        if(n%3 != 0):
            return False
n = 89
print(power_of_three(n))
```

## Submission at 2024-09-09 10:46:32


```
class node:
    def __init__(self):
        self.data = None
        self.next = None


def removeDuplicates(head):
    current = head
    while current.next.data == current:
        current = current.next
    current.next = current.next.next

def print_list(head):
    current = head
    while current:
        print(current.data)
    print_list(head)

```

## Submission at 2024-10-07 09:58:16


```
from collections import deque # Don't touch this line

def rev(q):
    n = int(len(q))
    temp = []
    for i in range(len(q),-1):
        temp.append(q[i])
    return temp





```

## Submission at 2024-10-28 04:29:37


```
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

## Submission at 2024-10-28 10:48:06


```
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p=0
res = [0] * len(s)
for i,in enumerate(order):
    myhash[n] = i
for j in myhash:
    res[myhash[j]] = j
    p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1 : len(s)]
for i in res:
    print(i,end = " ")
```

## Submission at 2024-10-28 11:24:31


```
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p=0
res = [0] * len(s)
for i,n in enumerate(order):
    myhash[n] = i
for j in myhash:
    res[myhash[j]] = j
    p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1 : len(s)]
for i in res:
    print(i,end = " ")
```

## Submission at 2024-10-28 11:25:59


```
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p=0
res = [0] * len(s)
for i,n in enumerate(order):
    myhash[n] = i
for j in s:
    if j in myhash:
        res[myhash[j]] = j
        p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1 : len(s)]
for i in res:
    print(i,end = " ")
```

## Submission at 2024-10-28 11:28:05


```
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p=0
res = [0] * len(s)
for i,n in enumerate(order):
    myhash[n] = i
for j in s:
    if j in myhash:
        res[myhash[j]] = j
        p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1 : len(s)]
for i in res:
    print(i,end = " ")

```

## Submission at 2024-10-28 11:29:00


```
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p=0
res = [0] * len(s)
for i,n in enumerate(order):
    myhash[n] = i
for j in s:
    if j in myhash:
        res[myhash[j]] = j
        p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1 : len(s)]
for i in res:
    print(i,end = " ")

```

## Submission at 2024-10-28 11:29:58


```
x = input().split(" ")
order = x[0]
s = x[1]
myhash = {}
p=0
res = [0] * len(s)
for i,n in enumerate(order):
    myhash[n] = i
for j in s:
    if j in myhash:
        res[myhash[j]] = j
        p = max(p,myhash[j])
res[p+1:len(s)] = s[p+1 : len(s)]
for i in res:
    print(i,end = " ")

```

## Submission at 2024-11-25 09:51:22


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count =0;
    int b=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a') count++;
        else b++;
    }
    if(count > b) cout<<"a";
    else cout <<"b";
}
```

## Submission at 2024-11-25 10:12:20


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int diff = abs(a[0]-a[1]);
    int count = 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<i+2;j++){
            if(abs(a[i]-a[j])==diff) count++;
        }
    }
    if(count==n) cout << "true";
    else cout<< "false";
}
```

## Submission at 2024-11-25 10:16:56


```
#include<bits/stdc++>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:17:54


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:18:02


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-25 10:44:20


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin >> n >> target;
    int nums[n];
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    int temp[target];
    for(int i=0;i<target;i++){
        temp.push_back(nums[i]);
    }
    cout << temp << endl;
    return 0;
}
```

## Submission at 2024-11-25 10:52:09


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cin >> n >> target;
    int nums[n];
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    int temp[target];
    for(int i=0;i<target;i++){
        temp.push_back(nums[i]);
    }
    cout << temp << endl;
    return 0;
}
```

## Submission at 2024-11-25 11:14:06


```
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[k][2];
    for(int i = 0;i<k;i++){
        for(int j=0;j<k;j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0;i<k;i++){
        sum += arr[i][1];
    }
    cout << sum;
}
```

