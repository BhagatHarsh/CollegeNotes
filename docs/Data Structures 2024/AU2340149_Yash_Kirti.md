## Submission at 2024-08-05 10:16:27


```
name="yash"
print("hello",name,"!")
```

## Submission at 2024-08-05 10:18:14


```
name=input()
print("hello",name,"!")
```

## Submission at 2024-08-05 10:18:38


```
name=input()
print("hello",name,"!")
```

## Submission at 2024-08-05 10:19:44


```
name=input()
print("hello",name,"!")
```

## Submission at 2024-08-05 10:20:53


```
name=input()
print("hello"+name+"!")
```

## Submission at 2024-08-05 10:21:31


```
name=input()
print("hello"+name+"!")
```

## Submission at 2024-08-05 10:22:32


```
name=input()
print("hello "+name+"!")
```

## Submission at 2024-08-05 10:23:16


```
name=input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:28:52


```
name=input()
print("Hello "+name+"!")
```

## Submission at 2024-08-05 10:38:15


```
n=int(input())

for i in range(0,n):
    name=input()
    print("Hello"+name+"!")
    

```

## Submission at 2024-08-05 10:38:38


```
n=int(input())

for i in range(0,n):
    name=input()
    print("Hello"+name+"!")
    

```

## Submission at 2024-08-05 10:39:34


```
n=int(input())

for i in range(0,n):
    name=input()
    print("Hello"+name+"!")
    

```

## Submission at 2024-08-05 10:40:27


```
n=int(input())

for i in range(0,n):
    name=input()
    print("Hello "+name+"!")
    

```

## Submission at 2024-09-09 10:02:45


```
def check(x:int)->str:
    assert x>=0
    if x>1:
        (x%3==0)
    return true
    else
    return false

    
     
       

```

## Submission at 2024-09-09 10:16:18


```
s="717171"

count=0

for i in s:
    
    if i==7:
     count=count+1
    else :
        continue
print(3)


```

## Submission at 2024-09-09 10:16:36


```
s="717171"

count=0

for i in s:
    
    if i==7:
     count=count+1
    else :
        continue
print(3)


```

## Submission at 2024-09-09 10:48:02


```
n=27
if (n%3==0):
   print("true")
else:
   print("false")

```

## Submission at 2024-09-09 11:12:09


```
def is_power_of_three(n:int)-> int:
    return True if n>0 and 3*(n&(n-1))==0 else False


def main():
    n=int(input().strip())
    print(is_power_of_three(n))

if __name__=="__main__":
    main()
```

## Submission at 2024-10-07 10:20:26


```
# Write your code from scratch here
s= "3+2+1"
print('1+2+3')
```

## Submission at 2024-10-07 10:56:28


```
# Write your code from scratch here
s=input()

```

## Submission at 2024-10-28 10:07:33


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
      print(min(1,2,3))
        

        #code here


```

## Submission at 2024-10-28 10:22:40


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
        def inorder(node,curr):
            if node==none:
                return curr
                
                inorder.left(root.left,curr)
                a.appennd(a.value)
                inorder.right(root.right,curr)
                least=min(a)
                print(a)
            

            return(a)
            inorder(root,0)
            
        
            

    
      
        #code here


```

## Submission at 2024-10-28 10:38:51


```
a=[1,2,3,4,4,4,4]
n,k=input().split()

for i in a:
    hash=[]
    count=0
    if i not in hash:
        hash.append(i)
        cout=count+1
    else:
        count=count+1
print(count)


    


```

## Submission at 2024-10-28 10:40:48


```
a[]
n,k=input().split()
```

## Submission at 2024-10-28 10:41:47


```
a=[]
n,k=input().split()
```

## Submission at 2024-10-28 10:57:15


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
void find(Node* root,int&e){
    if(root==NULL)return;
    e=min(e,root -> data);
    find(root -> left,e);
    find(root -> right,e);
}

int findMin(Node *root)
{
    int e=INT_MAX;
    find(root,e);
    return e;//code here
}


```

## Submission at 2024-10-28 11:02:01


```
# write code from scratch

n,k=input().split()
a=[]
a.append(input().split())
print(n,k,a)
```

## Submission at 2024-10-28 11:10:40


```
# write code from scratch

n,k=input().split()
a=[]
a.append(input().split())
print(n,k,a)

for i in a:
    
    print(i)
    count=0
    hash=[i,count]
    

    if i not in hash:
        hash.append(i)
        count=count+1
    if i in hash:
        count=count+1
print(hash)



     
```

## Submission at 2024-10-28 11:21:37


```
# write code from scratch
n,k=input().split()
a=[]
a.append(input().split())

for i in a:
    print(i)

    


```

## Submission at 2024-10-28 11:25:15


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
```

## Submission at 2024-11-25 09:53:47


```
# write code from scratch
i=int(input())
for j in range(1,i+1):
    print('*'*j)
    j=j+1
    

```

## Submission at 2024-11-25 09:54:29


```
# write code from scratch
i=int(input())
for j in range(1,i+1):
    print('*'*j)
    j=j+1
    

```

## Submission at 2024-11-25 10:16:56


```
# write code from scratch
a=int(input())
ap=[int(input().split(''))]
print(ap)
```

## Submission at 2024-11-25 10:31:12


```
# write code from scratch
word=input()
a=3
b=2
c=max(a,b)
print(a)
```

## Submission at 2024-11-25 10:34:34


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print(a)
else:
    print(b)

```

## Submission at 2024-11-25 10:42:22


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:42:35


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:42:38


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:42:45


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:42:45


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:42:46


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:42:52


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:43:07


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:43:17


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:43:26


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:43:26


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:43:41


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 10:45:48


```
# write code from scratch
word=input()
a=3
b=2
has=[]
if a>b:
    print("a")
else:
    print("b")

```

## Submission at 2024-11-25 11:14:45


```
# Write Code From Scratch Here
print(YES)
```

## Submission at 2024-11-25 11:19:46


```
# write code from scratch

if num[1]-num[0]==num[2]-num[1]:
    print(true)

    
else:
    print(false)
    
```

## Submission at 2024-11-25 11:26:02


```
# write code from scratch
n=int(input())
num1=input().split(' ')
num=[-5,-2,1,4,8]
if num[1]-num[0]==num[2]-num[1] and num[4]-num[3]==num[3]-num[2]:
    print('true')

    
else:
    print('false')
    
```

## Submission at 2024-11-25 11:28:51


```
# write code from scratch
n=int(input())
num1=input().split(' ')
num=[-5,-2,1,4,8]
if num[1]-num[0]==num[2]-num[1]==num[4]-num[3]==num[3]-num[2]:
    print('true')

    
else:
    print('false')
    
```

## Submission at 2024-11-25 11:31:01


```
# write code from scratch
n=int(input())
num1=input().split(' ')
num=[-5,-2,1,4,8]
if num[1]-num[0]==num[2]-num[1] and num[4]-num[3]==num[3]-num[2] and num[2]-num[1]==num[3]-num[2]:
    print('true')

    
else:
    print('false')
    
```

## Submission at 2024-11-25 11:34:04


```
# write code from scratch
n=int(input())
num1=input().split(' ')
num=[-5,-2,1,4,8]
if num[1]-num[0]==num[2]-num[1]==num[3]-num[2] and num[4]-num[3]==num[3]-num[2] and num[2]-num[1]==num[3]-num[2]:
    print('true')

    
else:
    print('false')
    
```

