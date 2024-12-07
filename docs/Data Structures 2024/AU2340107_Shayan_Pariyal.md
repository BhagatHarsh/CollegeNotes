## Submission at 2024-08-09 04:51:05


```
# Write your Python code here from the scratch
a = input()

print("Hello ",a,"!")
```

## Submission at 2024-08-09 04:51:37


```
# Write your Python code here from the scratch
a = input()

print("Hello ",a,"!")
```

## Submission at 2024-08-09 04:52:46


```
# Write your Python code here from the scratch
a = input()

print("Hello ",a,"!")
```

## Submission at 2024-08-09 05:08:50


```
# Write your Python code here
n = int(input())
a = []
if n>=1 and n<=100:
    for i in range(n):
        b = input()
        if len(b)>=1 and len(b)<=100:
            a.append(b)

    if len(a)!=0:
        for i in a:
            print("Hello ",i,"!")


```

## Submission at 2024-08-09 05:10:44


```
# Write your Python code here
n = int(input())
a = []
if n>=1 and n<=100:
    for i in range(n):
        b = input()
        if len(b)>=1 and len(b)<=100:
            a.append(b)

    if len(a)!=0:
        for i in a:
            print("Hello ",i,'!', sep = '')


```

## Submission at 2024-08-09 05:15:50


```
# Write your Python code here from the scratch
a = input()

if len(a)>=1 and len(a)<=100:
    print("Hello ",a,'!',sep = '')
```

## Submission at 2024-08-16 04:52:54


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());

        // Calculate and print the Fibonacci number for the input x
        System.out.println(fibonacci(x));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        // Write your code here
        if (x<=1){
            return x;
        }else{
            return fibonacci(x-1) + fibonacci(x-2);
        }
    }
}

```

## Submission at 2024-08-16 05:05:25


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        int n = Integer.parseInt(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(int n) {
        // write your logic here
        if (n==2){
            return true;
        }
        if (n<2){
            return false;
        }
        if (n%2!=0){
            return false;
        }else{
            return isPowerOfTwo(n/2);
        }
        
        
    }
}

```

## Submission at 2024-08-16 05:07:26


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        int n = Integer.parseInt(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(int n) {
        // write your logic here
        if (n==2){
            return true;
        }
        if (n<2){
            return false;
        }
        if (n%2!=0){
            return false;
        }else{
            return isPowerOfTwo(n/2);
        }
        
        
    }
}

```

## Submission at 2024-08-16 05:08:33


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        int n = Integer.parseInt(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(int n) {
        // write your logic here
        if (n==2){
            return true;
        }
        if (n<2){
            return false;
        }
        if (n%2!=0){
            return false;
        }else{
            return isPowerOfTwo(n/2);
        }
        
        
    }
}

```

## Submission at 2024-08-16 05:12:12


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        int n = Integer.parseInt(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(int n) {
        // write your logic here
        if (n==2 || n==1){
            return true;
        }
        if (n<0 || n==1){
            return false;
        }
        if (n%2!=0){
            return false;
        }else{
            return isPowerOfTwo(n/2);
        }
        
        
    }
}

```

## Submission at 2024-08-23 02:37:50


```
def combine(n, k):
    L = [i for i in range(1,n+1)]
    p = back(L)
    q = []
    for i in p:
        if len(i)==k:
            q.append(i)
    return q


Output = [[]]
def back(L,max,Output,r=[],q=[]):
  l = len(L)
  if l==0:
    return Output
  elif l==max:
    Output.append(list(L))
    r.append(L.pop())
    back(L,max,Output,r,list(r))
  else:
    Output.append(list(L))


    if l!=1:
      r.append(L[-1])
      while(len(q)!=0):
        L[-1] = q.pop()
        Output.append(list(L))
      L.pop()
      back(L,max,Output,r,list(r))
    else:
      L.pop()
      while(len(r)!=0):
        L.append(r.pop())
      back(L,max,Output)



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

## Submission at 2024-08-23 02:39:30


```
def combine(n, k):
    L = [i for i in range(1,n+1)]
    p = back(L,n)
    q = []
    for i in p:
        if len(i)==k:
            q.append(i)
    print q


Output = [[]]
def back(L,max,Output,r=[],q=[]):
  l = len(L)
  if l==0:
    return Output
  elif l==max:
    Output.append(list(L))
    r.append(L.pop())
    back(L,max,Output,r,list(r))
  else:
    Output.append(list(L))


    if l!=1:
      r.append(L[-1])
      while(len(q)!=0):
        L[-1] = q.pop()
        Output.append(list(L))
      L.pop()
      back(L,max,Output,r,list(r))
    else:
      L.pop()
      while(len(r)!=0):
        L.append(r.pop())
      back(L,max,Output)



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

## Submission at 2024-08-23 02:40:12


```
def combine(n, k):
    L = [i for i in range(1,n+1)]
    p = back(L,n)
    q = []
    for i in p:
        if len(i)==k:
            q.append(i)
    print(q)


Output = [[]]
def back(L,max,Output,r=[],q=[]):
  l = len(L)
  if l==0:
    return Output
  elif l==max:
    Output.append(list(L))
    r.append(L.pop())
    back(L,max,Output,r,list(r))
  else:
    Output.append(list(L))


    if l!=1:
      r.append(L[-1])
      while(len(q)!=0):
        L[-1] = q.pop()
        Output.append(list(L))
      L.pop()
      back(L,max,Output,r,list(r))
    else:
      L.pop()
      while(len(r)!=0):
        L.append(r.pop())
      back(L,max,Output)



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

## Submission at 2024-08-29 08:34:02


```
# Write the code from scratch, no boilerplate is required
def check(a,b,L_1,L_2):
  if a==b:
    for i in range(a):
      if L_1[i]!=L_2[i]:
        return "false"
    return "true"
  else:
    return "false"
a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L2 = input().split()
L_1 = [int(i) for i in L1]
L_2 = [int(i) for i in L2]
L_1.sort()
L_2.sort()
print(check(a,b,L_1,L_2))
    
```

## Submission at 2024-08-29 08:43:04


```
def check(n):
  sum = 0
  for i in range(1,n+1):
    if i%3==0 or i%5==0 or i%7==0:
      sum+=i
  return sum

check(int(input()))
```

## Submission at 2024-08-29 08:47:23


```
def check(n):
  sum = 0
  for i in range(1,n+1):
    if i%3==0 or i%5==0 or i%7==0:
      sum+=i
  return sum

print(check(int(input())))
```

## Submission at 2024-08-29 09:50:29


```
def check(L):
  l = len(L)
  count = 0
  for i in range(l):
    if len(L[i])%2==0:
      count+=1
  return count

input()
L = input().split()
print(check(L))
```

## Submission at 2024-08-29 10:00:44


```
def check(L,check_index):
  n = L[-1]
  count = 0
  for i in range(1,n+1):
    if i not in L:
      count += 1
    if count==check_index:
      return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:02:59


```
def check(L,check_index):
    if len(L)<2:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
        count += 1
        if count == check_index:
        return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:03:48


```
def check(L,check_index):
    if len(L)<2:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
        return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:03:57


```
def check(L,check_index):
    if len(L)<2:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:03:57


```
def check(L,check_index):
    if len(L)<2:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:03:59


```
def check(L,check_index):
    if len(L)<2:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:04:18


```
def check(L,check_index):
    if len(L)<2:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:04:43


```
def check(L,check_index):
    if len(L)<1:
        return 0
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:05:05


```
def check(L,check_index):
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count == check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:06:20


```
def check(L,check_index):
    n = L[-1]
    count = 0
    for i in range(1,n+1):
        if i not in L:
            count += 1
        if count==check_index:
            return i

a1,b1 = input().split()
a,b = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]
print(check(L,b))
```

## Submission at 2024-08-29 10:18:03


```
def check(L,check_index):
  n = L[-1]
  count = 0
  for i in range(1,check_index*(n+1)):
    if i not in L:
      count += 1
    if count==check_index:
      return i
      break
  

a1,b1 = input().split()
n,k = int(a1),int(b1)
L1 = input().split()
L = [int(i) for i in L1]

print(check(L,k))
```

## Submission at 2024-08-29 10:59:39


```
# Write Code from Scratch
a1,b1 = input().split()
rows,cols = int(a1),int(b1)
L = []
for i in range(rows):
  L.append(input().split())

for i in range(cols):
  for j in range(rows):
    print(L[j][i],end = " ")
  print()
```

## Submission at 2024-08-29 11:57:48


```
C = []
def Recursive_sum(L):
  global C
  C = []
  for i in range(0,len(L)-1):
    C.append(L[i]+L[i+1])
    
  if len(C)==1:
    return
  
  Recursive_sum(C)

def Print(C):
  print(C)

input()
L1 = input().split()
L = [int(i) for i in L1]
Recursive_sum(L)
print(C[0])
```

## Submission at 2024-08-29 11:59:34


```
C = []
def Recursive_sum(L):
  global C
  C = []
  for i in range(0,len(L)-1):
    C.append(L[i]+L[i+1])
    
  if len(C)==1:
    return
  
  Recursive_sum(C)

def Print(C):
  print(C)

input()
L1 = input().split()
L = [int(i) for i in L1]
Recursive_sum(L)
print(C[0])
```

## Submission at 2024-08-29 12:00:13


```
C = []
def Recursive_sum(L):
  
  global C
  C = []
  for i in range(0,len(L)-1):
    C.append(L[i]+L[i+1])
    
  if len(C)==1:
    return
  
  Recursive_sum(C)

def Print(C):
  print(C)

input()
L1 = input().split()
L = [int(i) for i in L1]
Recursive_sum(L)
print(C[0])
```

## Submission at 2024-08-30 02:30:39


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])


  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])


  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])


  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])


  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

spiral(L,rows-1,cols-1,0,0,0,n)
for i in C:
  print(i,end = " ")
```

## Submission at 2024-08-30 02:32:32


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])


  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])


  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])


  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])


  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

spiral(L,rows-1,cols-1,0,0,0,n)
for i in C:
  print(i,end = " ")
```

## Submission at 2024-08-30 02:33:04


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])


  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])


  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])


  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])


  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

spiral(L,rows-1,cols-1,0,0,0,n)
for i in C:
  print(i,end = " ")
```

## Submission at 2024-08-30 02:34:25


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])


  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])


  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])


  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])


  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

if (rows==1 and cols==1):
  print(L[1][1])
spiral(L,rows-1,cols-1,0,0,0,n)
for i in C:
  print(i,end = " ")
```

## Submission at 2024-08-30 02:34:45


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])


  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])


  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])


  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])


  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

if (rows==1 and cols==1):
  print(L[1][1])
spiral(L,rows-1,cols-1,0,0,0,n)
for i in C:
  print(i,end = " ")
```

## Submission at 2024-08-30 02:34:57


```
C = []
def spiral(L, rows, cols,start_i,start_j,count,n):
  global C
  if count == n:
    return
  i = 0
  j = 0

  for j in range(start_j,cols):
    i = start_i
    count+=1
    C.append(L[i][j])


  j = cols
  for i in range(start_i,rows):
    count+=1
    C.append(L[i][j])


  i = rows
  for j in range(cols,start_j,-1):
    count+=1
    C.append(L[i][j])


  j = start_j
  for i in range(rows,start_i,-1):
    count+=1
    C.append(L[i][j])


  spiral(L,rows-1,cols-1,start_i+1,start_j+1,count,n)


a1,b1 = input().split()
rows,cols = int(a1),int(b1)
n = rows * cols
L = []
for i in range(rows):
  L1 = input().split()
  L2 = [int(i) for i in L1]
  L.append(L2)

if (rows==1 and cols==1):
  print(L[1][1])
else:
  spiral(L,rows-1,cols-1,0,0,0,n)
  for i in C:
    print(i,end = " ")
```

## Submission at 2024-08-30 04:39:27


```
def fibonacci(x:int) -> int:
    # write your logic here
    x = x * fibonacci(x-1)
    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-30 04:39:56


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x == 1:
        return 1
    x = x * fibonacci(x-1)
    return x

def main():
    x = int(input().strip())
    
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))

if __name__ == "__main__":
    main()


```

## Submission at 2024-08-30 04:50:49


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==0:
        return 1
    return x*pow(x,n-1)

a1,b1 = input().split()
x,n = int(a1),int(b1)
print(x,n)
```

## Submission at 2024-08-30 04:53:00


```
# write from scratch, create a function named Pow(x:int , n:int)
def pow(x,n):
    if n==0:
        return 1
    return x*pow(x,n-1)

a1,b1 = input().split()
x,n = int(a1),int(b1)
print(x,n)
```

## Submission at 2024-08-30 04:56:17


```
# write from scratch, create a function named Pow(x:int , n:int)
import Math
def pow(x,n):

    if n>0:
        if n==0:
            return 1
        return Math.floor(x*pow(x,n-1))
    else:


a1,b1 = input().split()
x,n = int(a1),int(b1)
print(pow(x,n))
```

## Submission at 2024-08-30 04:56:59


```
# write from scratch, create a function named Pow(x:int , n:int)
import Math
def pow(x,n):

    if n>0:
        if n==0:
            return 1
        return Math.floor(x*pow(x,n-1))
    


a1,b1 = input().split()
x,n = int(a1),int(b1)
print(pow(x,n))
```

## Submission at 2024-08-30 04:58:07


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>0:
        if n==0:
            return 1
        return int(x*pow(x,n-1))
    


a1,b1 = input().split()
x,n = int(a1),int(b1)
print(pow(x,n))
```

## Submission at 2024-08-30 04:59:13


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>0:
        if n==0:
            return 1
        return x*pow(x,n-1)
    


a1,b1 = input().split()
x,n = int(a1),int(b1)
print(int(pow(x,n)))
```

## Submission at 2024-08-30 05:00:34


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>=0:
        if n==0:
            return 1
        return x*pow(x,n-1)
    


a1,b1 = input().split()
x,n = int(a1),int(b1)
print(pow(x,n))
```

## Submission at 2024-08-30 05:05:30


```
# Write code from scratch
n = int(input())
L1 = input().split()
L2 = input().split()
L = [int(i) for i in L1]
P = [int(i) for i in L2]

C = []
for i in range(n):
    if L[i]>=P[i]:
        C.append(L[i])
    else:
        C.append(P[i])
for i in C:
    print(i,end = " ")
```

## Submission at 2024-08-30 05:10:36


```
# Write code from scratch
def palindrome(s):
    if len(s)==0 or len(s)==1:
        return "YES"
    if s[0]!=s[-1]:
        return "NO"
    palindrome(s[1:len(s)-1])

a = input()
print(palindrome(a))
```

## Submission at 2024-08-30 05:22:59


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    c.data = L[0]
    t = node()
    i = 1
    while (i<len(L)):
        c.next = t
        t.data = L[i]
        t = t.next
    return c



```

## Submission at 2024-08-30 05:24:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    c.data = L[0]
    t = node()
    i = 1
    while (i<len(L)):
        c.next = t
        c.next.data = L[i]
        t = t.next
    return c



```

## Submission at 2024-08-30 05:33:49


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    c.data = L[0]
    t = node()
    i = 1
    while (i<len(P)):
        c.next = t
        t.data = P[i]
        t = t.next
    return c
```

## Submission at 2024-08-30 05:36:37


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    c.data = L[0]
    i = 1
    while (i<len(P)):
        c = c.next
        c.data = P[i]
    return c
```

## Submission at 2024-08-30 05:39:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    c.data = L[0]
    i = 1
    while (i<len(P)):
        c.data = P[i]
        c = c.next
        i+=1
    return c
```

## Submission at 2024-08-30 05:40:16


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    i = 1
    while (i<len(P)):
        c.data = P[i]
        c = c.next
        i+=1
    return c
```

## Submission at 2024-08-30 05:40:25


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    i = 0
    while (i<len(P)):
        c.data = P[i]
        c = c.next
        i+=1
    return c
```

## Submission at 2024-08-30 05:40:40


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    i = 0
    while (i<len(P)):
        c.data = P[i]
        c = c.next
        i+=1
    return c
```

## Submission at 2024-08-30 05:40:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    c = node()
    i = 0
    while (i<len(P)):
        c.data = P[i]
        c = c.next
        i+=1
    return c
```

## Submission at 2024-08-30 05:43:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    L = []
    temp = head
    while temp!=None:
        L.append(temp.data)
        temp = temp.next
    P = L[::-1]
    
    head.data = P[0]
    temp = head

    i = 0
    while temp!=None:
        temp.data = P[i]
        i+=1
        temp = temp.next
    return head
```

## Submission at 2024-08-30 05:46:00


```
# Write code from scratch
def palindrome(s):
    if len(s)==0 or len(s)==1:
        return "YES"
    elif s[0]!=s[-1]:
        return "NO"
    palindrome(s[1:len(s)-1])

a = input()
print(palindrome(a))

```

## Submission at 2024-08-30 05:46:49


```
# Write code from scratch
def palindrome(s):
    if len(s)==0 or len(s)==1:
        return "YES"
    elif s[0]!=s[-1]:
        return "NO"
    palindrome(s[1:len(s)-1])

a = input()
print(palindrome(a))

```

## Submission at 2024-08-30 05:49:16


```
# Write code from scratch
true = "NO"
def palindrome(s):
    global true
    if len(s)==0 or len(s)==1:
        true = "YES"
        return 
    if s[0]!=s[-1]:
        true = "NO"
        return 
    palindrome(s[1:len(s)-1])

a = input()
palindrome(a)
print(true)

```

## Submission at 2024-08-30 05:51:03


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>=0:
        if n==0:
            return 1
        return x*pow(x,n-1)
    


a1,b1 = input().split()
x,n = int(a1),int(b1)
k = pow(x,n)
print(int(k))
```

## Submission at 2024-08-30 05:53:10


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>=0:
        if n==0:
            return 1
        return x*pow(x,n-1)
    else:
        return (1/x*pow(x,(-1)*n -1))


a1,b1 = input().split()
x,n = int(a1),int(b1)
k = pow(x,n)
print(k//1)
```

## Submission at 2024-08-30 05:53:33


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>=0:
        if n==0:
            return 1
        return x*pow(x,n-1)
    else:
        return (1/x*pow(x,(-1)*n -1))


a1,b1 = input().split()
x,n = int(a1),int(b1)
k = pow(x,n)
print(k//1)
```

## Submission at 2024-08-30 05:53:53


```
# write from scratch, create a function named Pow(x:int , n:int)

def pow(x,n):

    if n>=0:
        if n==0:
            return 1
        return x*pow(x,n-1)
    else:
        return (1/x*pow(x,(-1)*n -1))


a1,b1 = input().split()
x,n = int(a1),int(b1)
k = pow(x,n)
print(k//1)
```

## Submission at 2024-08-30 06:25:24


```
D = []
def diagonal_traversal(matrix):
    # Your code here
    global D
    row = len(matrix)
    col = len(matrix[0])
    C = []
    P = []
    D = []
    for i in range(row):
        for j in range(col):
            P.append([i,j])
    for i in range(row+1):
        for k in P:
            if sum(k)==i:
                C.append(k)
    for (i,j) in C:
        D.append(matrix[i][j])
    
            
            

    
a1,b1 = input().split()
row,col = int(a1),int(b1)
L = []
for i in range(row):
    L1 = input().split()
    L2 = [int(i) for i in L1]
    L.append(L2)
diagonal_traversal(L)
print(D)

```

## Submission at 2024-08-30 06:25:24


```
D = []
def diagonal_traversal(matrix):
    # Your code here
    global D
    row = len(matrix)
    col = len(matrix[0])
    C = []
    P = []
    D = []
    for i in range(row):
        for j in range(col):
            P.append([i,j])
    for i in range(row+1):
        for k in P:
            if sum(k)==i:
                C.append(k)
    for (i,j) in C:
        D.append(matrix[i][j])
    
            
            

    
a1,b1 = input().split()
row,col = int(a1),int(b1)
L = []
for i in range(row):
    L1 = input().split()
    L2 = [int(i) for i in L1]
    L.append(L2)
diagonal_traversal(L)
print(D)

```

## Submission at 2024-08-30 06:25:50


```
D = []
def diagonal_traversal(matrix):
    # Your code here
    global D
    row = len(matrix)
    col = len(matrix[0])
    C = []
    P = []
    D = []
    for i in range(row):
        for j in range(col):
            P.append([i,j])
    for i in range(row+1):
        for k in P:
            if sum(k)==i:
                C.append(k)
    for (i,j) in C:
        D.append(matrix[i][j])
    
            
            

    
a1,b1 = input().split()
row,col = int(a1),int(b1)
L = []
for i in range(row):
    L1 = input().split()
    L2 = [int(i) for i in L1]
    L.append(L2)
diagonal_traversal(L)
print(D)
    

```

## Submission at 2024-10-04 05:10:48


```
# Write code from scratch here
n = int(input())
P = input().split()
L = [int(i) for i in P]
k = int(input())
Queue = []
time = 0
j = 0
value = L[k]
while value!=0:
    if len(L)>0:
        r = L.pop(0)
        
    
```

## Submission at 2024-10-04 05:17:44


```
a = int(input())
P = input().split()
L = [int(i) for i in P]

ans = []
for i in range(len(L)):
    count = 0
    for j in range(i+1,len(L)):
        if L[j]>L[i]:
            count+=1
            ans.append(count)
        else:
            count+=1
    ans.append(0)
print(ans)
```

## Submission at 2024-10-04 05:18:32


```
a = int(input())
P = input().split()
L = [int(i) for i in P]

ans = []
for i in range(len(L)):
    count = 0
    for j in range(i+1,len(L)):
        if L[j]>L[i]:
            count+=1
            ans.append(count)
            break
        else:
            count+=1
    ans.append(0)
print(ans)
```

## Submission at 2024-10-04 05:20:05


```
a = int(input())
P = input().split()
L = [int(i) for i in P]

ans = []
for i in range(len(L)):
    count = 0
    for j in range(i+1,len(L)):
        if L[j]>L[i]:
            count+=1
            ans.append(count)
            break
        else:
            count+=1
ans.append(0)
print(ans)
```

## Submission at 2024-10-04 05:21:07


```
a = int(input())
P = input().split()
L = [int(i) for i in P]

ans = []
for i in range(len(L)):
    count = 0
    for j in range(i+1,len(L)):
        if L[j]>L[i]:
            count+=1
            ans.append(count)
            break
        else:
            count+=1
ans.append(0)
print(i for i in ans,sep=' ')
```

## Submission at 2024-10-04 05:21:55


```
a = int(input())
P = input().split()
L = [int(i) for i in P]

ans = []
for i in range(len(L)):
    count = 0
    for j in range(i+1,len(L)):
        if L[j]>L[i]:
            count+=1
            ans.append(count)
            break
        else:
            count+=1
ans.append(0)
for i in ans:
    print(i,end=' ')
```

## Submission at 2024-10-04 05:22:34


```
a = int(input())
P = input().split()
L = [int(i) for i in P]

ans = []
for i in range(len(L)):
    count = 0
    for j in range(i+1,len(L)):
        if L[j]>L[i]:
            count+=1
            ans.append(count)
            break
        else:
            count+=1
ans.append(0)
for i in ans:
    print(i,end=' ')
```

## Submission at 2024-10-04 05:27:20


```
# Write Python code from scratch
def isAnagram(s,t):

    S = {}
    for i in s:
        if i in S:
            S[i]+=1
        else:
            S[i] = 1
    T = {}
    for i in t:
        if i in T:
            T[i]+=1
        else:
            T[i] = 1
    if S==T:
        return True
    else:
        return False
```

## Submission at 2024-10-04 05:28:02


```
# Write Python code from scratch
def isAnagram(s,t):

    S = {}
    for i in s:
        if i in S:
            S[i]+=1
        else:
            S[i] = 1
    T = {}
    for i in t:
        if i in T:
            T[i]+=1
        else:
            T[i] = 1
    if S==T:
        return "true"
    else:
        return "false"
```

## Submission at 2024-10-04 05:29:05


```
# Write Python code from scratch
def isAnagram(s,t):

    S = {}
    for i in s:
        if i in S:
            S[i]+=1
        else:
            S[i] = 1
    T = {}
    for i in t:
        if i in T:
            T[i]+=1
        else:
            T[i] = 1
    if S==T:
        print "true"
    else:
        print "false"
a = input()
b = input()
isAnagram(a,b)
```

## Submission at 2024-10-04 05:29:56


```
# Write Python code from scratch
def isAnagram(s,t):

    S = {}
    for i in s:
        if i in S:
            S[i]+=1
        else:
            S[i] = 1
    T = {}
    for i in t:
        if i in T:
            T[i]+=1
        else:
            T[i] = 1
    if S==T:
        print("true")
    else:
        print("false")
a = input()
b = input()
isAnagram(a,b)
```

## Submission at 2024-10-04 05:47:42


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in L]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 0
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
        elif time<k:
            start = mid+1
        else:
            end = mid
    print(Good[0])

Paint(L,k)

```

## Submission at 2024-10-04 05:48:20


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 0
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
        elif time<k:
            start = mid+1
        else:
            end = mid
    print(Good[0])

Paint(L,k)

```

## Submission at 2024-10-04 05:50:45


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 0
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
        elif time>k:
            start = mid+1
        else:
            end = mid
    print(Good[0])

Paint(L,k)
```

## Submission at 2024-10-04 05:51:31


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 0
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
        elif time>k:
            start = mid+1
        else:
            end = mid
    print(Good[0])

Paint(L,k)
```

## Submission at 2024-10-04 05:51:59


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 0
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
        elif time>k:
            start = mid+1
        else:
            end = mid
    print(Good[0])

Paint(L,k)
```

## Submission at 2024-10-04 06:03:49


```
# Write Python Code from scratch
a = int().split()
n = int(a[0])
m = int(a[1])
k = int(a[2])

P = input().split()
L = [int(i) for i in P]

flowers = m*k
L.sort()
print(L)
```

## Submission at 2024-10-04 06:20:08


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:21:37


```
// Write C++ code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:22:00


```
# Write Python code from scratcha = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:22:14


```
# Write Python code from scratcha = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:22:14


```
# Write Python code from scratcha = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:22:15


```
# Write Python code from scratcha = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:22:37


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:23:01


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:23:35


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:23:52


```
# Write Python code from scratch
a = input().split()
n = int(a[0])
k = int(a[1])

P = input().split()
L = [int(i) for i in P]

def Paint(L,k):
    start = max(L)
    end = sum(L)
    Good = []
    
    while(start<end):
        mid = (start + end)//2
        time = 1
        s = 0
        for i in range(len(L)):
            if s>=mid:
                time+=1
                s=L[i]
            else:
                s+=L[i]
        if time==k:
            Good.append(s)
            end = mid-1
        elif time>k:
            start = mid+1
        else:
            end = mid - 1
    print(Good[-1])

Paint(L,k)
```

## Submission at 2024-10-04 06:24:23


```
# Write Python Code from scratch
print(3)
```

## Submission at 2024-10-04 06:25:12


```
# Write Python Code from scratch
print(3)
```

## Submission at 2024-10-04 06:26:30


```
# Write code from scratch here
print(6)
```

## Submission at 2024-10-25 05:25:09


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
    stack = []
    if root==None:
      return
    postOrder(root.left)
    
    postOrder(root.right)
    stack.append(root.val)

    return stack
    
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
    stack = []
    if root==None:
      return
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.val)

    return stack
    
```

## Submission at 2024-10-25 05:26:38


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
    stack = []
    if root==None:
      return []
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.val)

    return stack
    
```

## Submission at 2024-10-25 05:27:16


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
    stack = []
    if root==None:
      return
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.val)

    return stack
```

## Submission at 2024-10-25 05:28:13


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
    stack = []
    if root==None:
      return
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.data)

    return stack
```

## Submission at 2024-10-25 05:29:38


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
    stack = []
    if root==None:
      return
      
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.data)

    return stack
```

## Submission at 2024-10-25 05:30:20


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
    stack = []
    if root==None:
      return
      
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.data)

    return stack
```

## Submission at 2024-10-25 05:46:07


```
# write code from scratch
pattern = input()
s = input().split()

if len(s)!=len(pattern):
    print("false")

ch = 'true'
d = {}
for i in range(len(pattern)):
    if pattern[i] in d:
        if d[pattern[i]] != s[i]: 
            ch = 'false'
    else:
        d[pattern[i]] = s[i]

print(ch)







```

## Submission at 2024-10-25 05:51:32


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append[root.data]
            inorder_left(root.right)
        
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append[root.data]
            inorder_left(root.left)

        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:51:58


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append[root.data]
            inorder_left(root.right)
        
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append[root.data]
            inorder_left(root.left)

        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:52:20


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append[root.data]
            inorder_left(root.right)
        
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append[root.data]
            inorder_left(root.left)

        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:52:53


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append[root.data]
            inorder_left(root.right)
        inorder_left(root)
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append[root.data]
            inorder_left(root.left)
        inorder_right(root)
        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:53:35


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append[root.data]
            inorder_left(root.right)
        inorder_left(root)
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append(root.data)
            inorder_left(root.left)
        inorder_right(root)
        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:53:49


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append(root.data)
            inorder_left(root.right)
        inorder_left(root)
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append(root.data)
            inorder_left(root.left)
        inorder_right(root)
        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:54:22


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append(root.data)
            inorder_left(root.right)
        inorder_left(root)
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append(root.data)
            inorder_left(root.left)
            
        inorder_right(root)
        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 05:54:46


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append(root.data)
            inorder_left(root.right)
        inorder_left(root)
        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append(root.data)
            inorder_left(root.left)
            
        inorder_right(root)
        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 06:03:28


```
# write code from scratch

r_Note = input()
m = input()

def freq(st):
    d = {}
    for i in st:
        if i in d:
            d[i]+=1
        else:
            d[i] = 1
    return d

freq_r = freq(r_Note)
freq_m = freq(m)

ch = 'true'
for i in freq_r:
    if i not in freq_m:
        ch = 'false'
    else:
        if freq_m[i] < freq_r[i]:
            ch = 'false'
print(ch)
```

## Submission at 2024-10-25 06:04:08


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
    stack = []
    if root==None:
      return
      
    postOrder(root.left)
    postOrder(root.right)
    stack.append(root.data)

    return stack
```

## Submission at 2024-10-25 06:06:14


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
    stack = []
    def p_order(root):
      if root==None:
        return
        
      p_order(root.left)
      p_order(root.right)
      stack.append(root.data)

    return stack
```

## Submission at 2024-10-25 06:06:38


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
    stack = []
    def p_order(root):
      if root==None:
        return
        
      p_order(root.left)
      p_order(root.right)
      stack.append(root.data)
    p_order(root)
    return stack
```

## Submission at 2024-10-25 06:07:41


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
        stack1 = []
        stack2 = []
        def inorder_left(root):
            if root is None:
                return
            inorder_left(root.left)
            stack1.append(root.data)
            inorder_left(root.right)

        def inorder_right(root):
            if root is None:
                return
            inorder_left(root.right)
            stack2.append(root.data)
            inorder_left(root.left)
            
        inorder_left(root)  
        inorder_right(root)
        if stack1==stack2:
            return 'true'
        else:
            return 'false'
```

## Submission at 2024-10-25 06:19:54


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1.next!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2.next!=None):
            L2.append(temp2.data)
            temp2 = temp1.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n1+=str(i)
        s = int(n1) + int(n2)
        s2 = str(s)

        num1.data = int(s2[0])
        temp = num1.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return num1





```

## Submission at 2024-10-25 06:24:45


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1.next!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2.next!=None):
            L2.append(temp2.data)
            temp2 = temp1.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n1+=str(i)
        print(n1,n2)

        s = n1.todigit() + n2.todigit()
        s2 = str(s)

        num1.data = int(s2[0])
        temp = num1.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return num1





```

## Submission at 2024-10-25 06:26:56


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1.next!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2.next!=None):
            L2.append(temp2.data)
            temp2 = temp1.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n1+=str(i)
        print(n1,n2)

        if n1.isdigit() and n2.isdigit():
            n1 = int(n1) and n2=int(n2)
        s = n1 + n2
        s2 = str(s)

        num1.data = int(s2[0])
        temp = num1.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return num1





```

## Submission at 2024-10-25 06:28:50


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1.next!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2.next!=None):
            L2.append(temp2.data)
            temp2 = temp1.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n1+=str(i)
        print(n1,n2)

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        num1.data = int(s2[0])
        temp = num1.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return num1





```

## Submission at 2024-10-25 06:34:14


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        num1.data = int(s2[0])
        temp = num1.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return num1





```

## Submission at 2024-10-25 06:34:52


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        num1.data = int(s2[0])
        temp = num1.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return num1





```

## Submission at 2024-10-25 06:37:30


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        node = Node()
        temp = node
        for i in range(len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return node





```

## Submission at 2024-10-25 06:38:21


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        node = Node(1)
        temp = node
        for i in range(len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return node





```

## Submission at 2024-10-25 06:39:29


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        node = Node(int(s2[0]))
        temp = node.next
        for i in range(1,len(s2)):
            temp.data = int(s2[i])
            temp = temp.next

        return node





```

## Submission at 2024-10-25 06:41:20


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        node = Node(int(s2[0]))
        
        for i in range(1,len(s2)):
            temp = Node(int(s2[i]))
            node.next = temp
            temp = temp.next

        return node





```

## Submission at 2024-10-25 06:42:00


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)

        node = Node(int(s2[0]))
        
        for i in range(1,len(s2)):
            temp = Node(int(s2[i]))
            node.next = temp
            temp = temp.next

        return node





```

## Submission at 2024-10-25 06:53:31


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)
        


        node = Node(int(s2[0]))
        temp = node
        for i in range(1,len(s2)):
            temp.next = Node(int(s2[i]))
            temp = temp.next
        
        return temp





```

## Submission at 2024-10-25 06:53:52


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)
        


        node = Node(int(s2[0]))
        temp = node
        for i in range(1,len(s2)):
            temp.next = Node(int(s2[i]))
            temp = temp.next
        
        return node





```

## Submission at 2024-10-25 06:55:23


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)
        


        node = Node(int(s2[0]))
        temp = node
        for i in range(1,len(s2)):
            temp.next = Node(int(s2[i]))
            temp = temp.next
        
        return node





```

## Submission at 2024-10-25 06:57:38


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1[::-1]:
            n1+=str(i)
        for i in L2[::-1]:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)
        


        node = Node(int(s2[0]))
        temp = node
        for i in range(1,len(s2)):
            temp.next = Node(int(s2[i]))
            temp = temp.next
        
        return node





```

## Submission at 2024-10-25 07:01:18


```
''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, num1, num2):
        # code here
        # return head of sum list
        L1 = []
        L2 = []
        temp1 = num1
        temp2 = num2

        while(temp1!=None):
            L1.append(temp1.data)
            temp1 = temp1.next
        
        while(temp2!=None):
            L2.append(temp2.data)
            temp2 = temp2.next
        
        n1 = ""
        n2 = ""
        for i in L1:
            n1+=str(i)
        for i in L2:
            n2+=str(i)
        
        

        if n1.isdigit() and n2.isdigit():
            s = int(n1) + int(n2)
        
        s2 = str(s)
        


        node = Node(int(s2[0]))
        temp = node
        for i in range(1,len(s2)):
            temp.next = Node(int(s2[i]))
            temp = temp.next
        
        return node





```

## Submission at 2024-11-22 05:02:25


```
# write code from scratch
l = int(input())
a = input().split()
a = [int(i) for i in a]

D = {}
for i in a:
    if i in D:
        D[i]+=1
    else:
        D[i]=0

print(max(D.values()))

```

## Submission at 2024-11-22 05:05:45


```
# Write Code From Scratch Here

a = input().split()
b = input().split()

a1,a2 = int(a[0]),int(a[1])
b1,b2 = int(b[0]),int(b[1])

print(a2-a1)
print(b2-b1)
```

## Submission at 2024-11-22 05:07:03


```
# Write Code From Scratch Here

a = input().split()
b = input().split()

a1,a2 = int(a[0]),int(a[1])
b1,b2 = int(b[0]),int(b[1])

print(a2-a1)
print(b2-b1)
```

## Submission at 2024-11-22 05:09:54


```
# Write Code From Scratch Here

a = input().split()


a1,a2 = int(a[0]),int(a[1])


print(a2-a1)
```

## Submission at 2024-11-22 05:11:27


```
# Write Code From Scratch Here
a = input().split()


a1,a2 = int(a[0]),int(a[1])


print(a2-a1)
```

## Submission at 2024-11-22 05:13:35


```
# Write Code From Scratch Here

a = int(input())
L = input().split()
L = [int(i) for i in L]

print(sum(L))
```

## Submission at 2024-11-22 05:14:14


```
# Write Code From Scratch Here
a = int(input())
L = input().split()
L = [int(i) for i in L]

print(sum(L))
```

## Submission at 2024-11-22 05:15:10


```
# Write Code From Scratch Here
a = int(input())
L = input().split()
L = [int(i) for i in L]
print(sum(L))
```

## Submission at 2024-11-22 05:28:23


```
# write code from scratch

I = input().split()
d = int(I[2])

L1 = input().split()
L2 = input().split()

L1 = [int(L1) for i in L1]
L2 = [int(L2) for i in L2]

mx = max(L2)
mn = min(L2) 

count = 0
for i in L1:
    if i>mx and i-mx>=2:
        count+=1
    elif i<mn and mn - i<=2:
        count+=1
print(count)
```

## Submission at 2024-11-22 05:30:37


```
# write code from scratch
I = input().split()
d = int(I[2])

L1 = input().split()
L2 = input().split()

L1 = [int(L1) for i in L1]
L2 = [int(L2) for i in L2]

mx = max(L2)
mn = min(L2) 

count = 0
for i in L1:
    if i>mx and i-mx>=2:
        count+=1
    elif i<mn and mn - i<=2:
        count+=1
print(count)
```

## Submission at 2024-11-22 05:34:53


```
# write code from scratch
# write code from scratch
I = input().split()
d = int(I[2])

L1 = input().split()
L2 = input().split()

L1 = [int(L1) for i in L1]
L2 = [int(L2) for i in L2]

mx = max(L2)
mn = min(L2) 

count = 0
for i in L1:
    if i>mx and i-mx>=d:
        count+=1
    elif i<mn and mn - i<=d:
        count+=1
print(count)
```

## Submission at 2024-11-22 05:39:26


```
# write code from scratch
# write code from scratch
# write code from scratch
I = input().split()
d = int(I[2])

L1 = input().split()
L2 = input().split()

L1 = [int(L1) for i in L1]
L2 = [int(L2) for i in L2]



count = 0
for i in L1:
    for j in L2:
        if i-j>=0:
            dif = i-j
        else:
            dif = j - i
        if dif>d:
            count+=1
print(count)
```

## Submission at 2024-11-22 05:42:28


```
# write code from scratch
# write code from scratch
# write code from scratch
I = input().split()
d = int(I[2])

L1 = input().split()
L2 = input().split()

L1 = [int(L1) for i in L1]
L2 = [int(L2) for i in L2]



count = 0
for i in L1:
    p = True
    for j in L2:
        if i-j>=0:
            dif = i-j
        else:
            dif = j - i
        if dif<=d:
            p = False
    if p==True:
        count+=1
print(count)
```

## Submission at 2024-11-22 05:51:09


```
# write code from scratch

n = int(input())

for i in range(2*n):
    if i<= n-1:
        print(i*"*")
    else:
        print((n-i)*"*")

```

## Submission at 2024-11-22 05:54:05


```
# write code from scratch

n = int(input())

c = 1
for i in range(2*n):
    if i<= n-1:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break

```

## Submission at 2024-11-22 05:55:43


```
# write code from scratch

n = int(input())

c = 1
for i in range(1,2*n):
    if i<= n-1:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break

```

## Submission at 2024-11-22 05:56:12


```
# write code from scratch

n = int(input())

c = 1
for i in range(1,2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break

```

## Submission at 2024-11-22 05:56:19


```
# write code from scratch
# write code from scratch

n = int(input())

c = 1
for i in range(1,2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break

```

## Submission at 2024-11-22 05:58:00


```
# write code from scratch
# write code from scratch

n = int(input())

c = 1
for i in range(1,2*n):
    if i<= n:
        print(i*"*")
    else:
        if (n-c)>0:
            print((n-c)*"*")
            c+=1
        else:
            break

```

## Submission at 2024-11-22 06:02:06


```
# write code from scratch
# write code from scratch
l = int(input())
L = input().split()
L = [int(i) for i in L]

D = {}
for i in L:
    if i in D:
        D[i]+=1
    else:
        D[i]=1

min_freq = min(D.values())
P = []
for i in D.keys():
    if i==min_freq:
        P.append(i)
print(max(P))
```

## Submission at 2024-11-22 06:09:30


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    L = []
    prev = head
    temp = head
    while temp and temp.next:
        if temp.data in L:
            prev.next = temp.next
        else:
            L.append(temp.data)
        temp = temp.next
        prev = prev.next
    return head

```

## Submission at 2024-11-22 06:17:21


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp = head
    while temp and temp.next:
        if temp.data == temp.next.data:
            temp = temp.next.next
        else:
            temp = temp.next

    return head

```

## Submission at 2024-11-22 06:28:28


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    while temp:
        if temp.data not in L:
            L.append(temp.data)
        temp = temp.next

    New_Node = node(L[0])
    temp2 = New_Node
    i=1
    while i!=len(L):
        temp2.next = node(L[i])
        i+=1
    return New_Node
```

## Submission at 2024-11-22 06:31:47


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    temp = head
    while temp:
        if temp.data not in L:
            L.append(temp.data)
        temp = temp.next

    New_Node = node(L[0])
    temp2 = New_Node
    i=1
    while i!=len(L):
        temp2.next = node(L[i])
        i+=1
    return New_Node
```

## Submission at 2024-11-22 06:35:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    temp = head
    while temp:
        if temp.data not in L:
            L.append(temp.data)
        temp = temp.next

    New_Node = node()

    temp2 = New_Node
    i=0
    while i!=len(L):
        temp2.data = L[i]
        p = Node()
        temp2.next = p
        i+=1
    return New_Node
```

## Submission at 2024-11-22 06:37:43


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    temp = head
    while temp:
        if temp.data not in L:
            L.append(temp.data)
        temp = temp.next

    New_Node = node()

    temp2 = New_Node
    i=0
    while i!=len(L):
        temp2.data = L[i]
        temp2.next = node()
        i+=1
    return New_Node
```

## Submission at 2024-11-22 06:40:39


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    temp = head
    while temp:
        L.append(temp.data)
        temp = temp.next

    P = []
    for i in L:
        if i not in P:
            P.append(i)
    
    New_Node = node()

    temp2 = New_Node
    i=0
    while i!=len(P):
        temp2.data = P[i]
        temp2.next = node()
        i+=1
    return New_Node
```

## Submission at 2024-11-22 06:46:22


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
        L = []
        def inorder(root):
            global L
            if root is None:
                return 
            inorder(root.left)
            L.append(root.data)
            inorder(root.right)
        Q = list(L)
        L.sort()
        if Q == L:
            return "true"
        else:
            return "false"
```

## Submission at 2024-11-22 06:52:10


```
# write code from scratch
I = input().split()
d = int(I[2])

L1 = input().split()
L2 = input().split()

L1 = [int(L1) for i in L1]
L2 = [int(L2) for i in L2]


count = 0
Q = []
for i in L1:
    p = True
    for j in L2:
        if i-j>=0:
            dif = i-j
        else:
            dif = j - i
        if dif<=d:
            p = False
            break
    if p==True:
        count+=1
print(count)
```

## Submission at 2024-11-22 06:59:50


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    temp = head
    while temp:
        L.append(temp.data)
        temp = temp.next

    D = {}
    Q = []
    for i in L:
        if i in D:
            D[i]+=1
        else:
            D[i]=1
    for i in D:
        if D[i] == 1:
            Q.append(i)
    
    New_Node = node()

    temp2 = New_Node
    i=0
    while i!=len(Q):
        temp2.data = Q[i]
        temp2.next = node()
        i+=1
    return New_Node
```

## Submission at 2024-11-22 07:08:07


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    L = []
    temp = head
    while temp:
        L.append(temp.data)
        temp = temp.next

    D = {}
    Q = []
    for i in L:
        if i in D:
            D[i]+=1
        else:
            D[i]=1
    for i in D:
        if D[i] == 1:
            Q.append(i)
    
    New_Node = node()
    New_Node.data = Q[0]
    temp2 = New_Node
    i=1
    while i<len(Q):
        temp2.data = Q[i]
        temp2.next = node()
        i+=1
    return New_Node



```

