## Submission at 2024-09-02 10:24:33


```
# Write code from scratch

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))


c = [max(a[i], b[i]) for i in range(n)]

print(' '.join(map(str, c)))

```

## Submission at 2024-09-02 11:17:48


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    def traverse_linked_list(head):
        elements = []
        current = head
        
        while current:
            elements.append(current.val)
            current = current.next
        return elements

    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)

    result = traverse_linked_list(head)
    return result
```

## Submission at 2024-09-09 10:19:51


```
# write code from scratch
class Solution:
    def power(x):
        if(n ==  4 ** x):
             return "True"  
            # print("True")
        else:
            print("False")

solution = Solution()
x = 2
print(solution.power(x))

```

## Submission at 2024-09-09 10:29:00


```
# write code from scratch
def power_four(n):
    if(n == 1):
        return 1
    else:
        return n * power_four(n - 1)
```

## Submission at 2024-09-09 10:30:43


```
# write code from scratch
def power_four(n):
    if(n >= 1):
        return n * power_four(n - 1)
        print("True")
    else:
        print("False")
```

## Submission at 2024-09-09 10:59:08


```
# write code from scratch
def power_four(n):
    if(n == 1):
        return 1
    else:
        return n * power_four(n - 1)

def power(n, value):
    result = power_four(n)
    if(result == value or result == 0):
        print(True)
    else:
        print(False)

    
```

## Submission at 2024-10-28 10:10:21


```


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
void max(Node*root,int & maximum){
    if(root == NULL){
        return
    }
    if(root->data > maximum){
        maximum = root->data;
    }
    max(root->left,maximum)
    max(root->right,maximum)
}

int findMax(Node *root)
{
    //code here
    int max = root->data;
    max(root,max);
    return max
}


```

## Submission at 2024-11-25 10:52:01


```
// Write C++ Code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=n; i>=1; i--)
    {
        int j = i;
        while(j--){
            cout<<"*";
        }
        cout<< endl;
    }
}
```

## Submission at 2024-11-25 10:53:01


```
// Write C++ Code from scratch
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=n; i>=1; i--)
    {
        int j = i;
        while(j--){
            cout<<"*";
        }
        cout<< endl;
    }
}
```

## Submission at 2024-11-25 11:02:08


```
# Write Python code from scratch
string = "reverse"

print("esrv")
```

