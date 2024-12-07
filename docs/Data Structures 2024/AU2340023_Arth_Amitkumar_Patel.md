## Submission at 2024-08-05 10:11:46


```
# Write your Python code here from the scratch
str=input("Give your name")
print(f"Hello {str} !")
```

## Submission at 2024-08-05 10:12:15


```
# Write your Python code here from the scratch
str=input()
print(f"Hello {str} !")
```

## Submission at 2024-08-05 10:13:24


```
# Write your Python code here from the scratch
str=input()
print(f"Hello {str}!")
```

## Submission at 2024-08-05 10:27:56


```
# Write your Python code here from the scratch
s=input()
print(f"Hello {s}!")
```

## Submission at 2024-08-05 10:31:54


```
# Write your Python code here
n=int(input())
s=[]
for i in range(n):
    s.append(input())
for x in s:
    print(f"Hello {x}!")

```

## Submission at 2024-08-05 10:33:57


```
# Write your Python code here
n=int(input())
s=[]
for i in range(n):
    s.append(input())
for x in s:
    print(f"Hello {x}!")

```

## Submission at 2024-08-12 09:41:56


```
def fibonacci(x:int) -> int:
    # write your logic here
    if x == 0:
        return 0
    if x == 1:
        return 1
    return fibonacci(x-1)+fibonacci(x-2)

def main():
    x = int(input().strip())
    # Calculate and print the Fibonacci number for the input x
    print(fibonacci(x))


```

## Submission at 2024-08-12 09:47:16


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    return math.log(n,2)%1==0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print("True" if is_power_of_two(n) else "False")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:48:09


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    return math.log(n,2)%1==0

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:49:45


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    return math.log(n,2) == int(math.log(n,2))

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:52:46


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n!=int(n):
        return 0
    if n==1:
        return 1
    return n/2

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print("true" if is_power_of_two(n) else "false")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:54:56


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n!=int(n):
        return 0
    if n==1:
        return 1
    return n/2

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:56:29


```
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n!=int(n):
        return 0
    if n==1:
        return 1
    return is_power_of_two(n/2)

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:57:46


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    return math.log(n,2)==int(math.log(n,2))

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 09:59:48


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==0 or n==1:
        return 0
    return math.log(n,2)==int(math.log(n,2))

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:01:15


```
import math
def is_power_of_two(n:int) -> int:
    # Write your logic here
    if n==0 or n==1:
        return 0
    return math.log(n,2)==int(math.log(n,2))

def main():
    n = int(input().strip())

    # Determine if n is a power of two
    print(is_power_of_two(n))

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:21:54


```
def subsets(nums):
    # Wrtie logic here
    res=[]
    res.append(nums)
    if len(nums) == 1:
        return res
    for i in range(len(nums)):
        n=nums
        return subsets(nums[:i]+nums[i+1:])

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = list(set(subsets(nums)))

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 10:57:28


```
def subsets(nums,r):
    # Wrtie logic here
    res=r
    if nums not in res:
        res.append(nums)
    if len(nums) == 1:
        return res
    for i in range(len(nums)):
        sres=subsets(nums[:i]+nums[i+1:],res)
    return sres

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums,[])
    result.append([])

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 11:09:49


```
def subsets(nums,r):
    # Wrtie logic here
    res=r
    if nums not in res:
        res.append(nums)
    if len(nums) == 1:
        return res
    for i in range(len(nums)):
        sres=subsets(nums[:i]+nums[i+1:],res)
    return sres

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums,[])
    result.append([])

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-12 11:14:29


```
def subsets(nums,r):
    # Wrtie logic here
    res=r
    if nums not in res:
        res.append(nums)
    if len(nums) == 1:
        return res
    for i in range(len(nums)):
        sres=subsets(nums[:i]+nums[i+1:],res)
    return sres

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums,[])
    result.append([])

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x[0] if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-14 05:44:54


```
def combine(nums, k,r=[]):
    # Write logic here
    sres=r
    if len(nums)==k and nums not in sres:
        sres.append(nums)
        return sres
    for i in range(len(nums)):
        sres=combine(nums[:i]+nums[i+1:],k,r)
    return sres
def main():
    n, k = map(int, input().split())
    nums=[i+1 for i in range(n)]
    # Generate combinations
    result = combine(nums, k)
    result.sort()
    # Print combinations
    for ele in result:
        print(ele)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-14 05:51:46


```
def combine(nums, k,r=[]):
    # Write logic here
    sres=r
    if len(nums)==k and nums not in sres:
        sres.append(nums)
        return sres
    for i in range(len(nums)):
        sres=combine(nums[:i]+nums[i+1:],k,r)
    return sres
def main():
    n, k = map(int, input().split())
    nums=[i+1 for i in range(n)]
    # Generate combinations
    result = combine(nums, k)
    result.sort()
    # Print combinations
    print(result)
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-14 05:53:04


```
def combine(nums, k,r=[]):
    # Write logic here
    sres=r
    if len(nums)==k and nums not in sres:
        sres.append(nums)
        return sres
    for i in range(len(nums)):
        sres=combine(nums[:i]+nums[i+1:],k,r)
    return sres
def main():
    n, k = map(int, input().split())
    nums=[i+1 for i in range(n)]
    # Generate combinations
    result = combine(nums, k)
    result.sort()
    # Print combinations
    print(result)
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 02:06:15


```
def combine(nums, k,r=[]):
    # Write logic here
    sres=r
    if len(nums)==k and nums not in sres:
        sres.append(nums)
        return sres
    for i in range(len(nums)):
        sres=combine(nums[:i]+nums[i+1:],k,r)
    return sres
def main():
    n, k = map(int, input().split())
    nums=[i+1 for i in range(n)]
    # Generate combinations
    result = combine(nums, k)
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
if __name__ == "__main__":
    main()

```

## Submission at 2024-08-16 02:07:02


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
    num = list(map(int, input().split()))
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:12:17


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
    nu = input()
    num=[]
    for i in range(1,len(nu),2):
        num.append(nu[i])
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:13:06


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
    nu = input()
    num=[]
    for i in range(1,len(nu),2):
        num.append(nu[i])
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:13:55


```
def is_correct(st):
    ini=1
    for i in range(len(st)):
        if st[i]==")":
            ini-=1
        else:
            ini+=1
        if ini<0:
            return False
    return True

def brackets(s):
    res=[]
    if len(s)==2:
        res.append(s)
        res.append(s[::-1])
        return res
    for i in range(len(s)):
        c=s[i]
        r=brackets(s[:i]+s[i+1:])
        l=[]
        for ele in r:
            if is_correct(ele):
                l.append(ele+c)
        res+=l
    return res

def main():
    n=int(input())
    s="("*n+")"*n
    result=brackets(s[1:2*n-1])
    fin=[]
    for ele in result:
        fin.append("("+ele+")")
    fin=list(set(fin))
    print("[", end="")
    for i,ele in enumerate(fin):
        print(f'"{ele}"',end="")
        if i<len(fin)-1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:15:13


```
def is_correct(st):
    ini=1
    for i in range(len(st)):
        if st[i]==")":
            ini-=1
        else:
            ini+=1
        if ini<0:
            return False
    return True

def brackets(s):
    res=[]
    if len(s)==2:
        res.append(s)
        res.append(s[::-1])
        return res
    for i in range(len(s)):
        c=s[i]
        r=brackets(s[:i]+s[i+1:])
        l=[]
        for ele in r:
            if is_correct(ele):
                l.append(ele+c)
        res+=l
    return res

def main():
    n=int(input())
    s="("*n+")"*n
    result=brackets(s[1:2*n-1])
    fin=[]
    for ele in result:
        fin.append("("+ele+")")
    fin=list(set(fin))
    print("[", end="")
    for i,ele in enumerate(fin):
        print(ele,end="")
        if i<len(fin)-1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:16:26


```
def is_correct(st):
    ini=1
    for i in range(len(st)):
        if st[i]==")":
            ini-=1
        else:
            ini+=1
        if ini<0:
            return False
    return True

def brackets(s):
    res=[]
    if len(s)==2:
        res.append(s)
        res.append(s[::-1])
        return res
    for i in range(len(s)):
        c=s[i]
        r=brackets(s[:i]+s[i+1:])
        l=[]
        for ele in r:
            if is_correct(ele):
                l.append(ele+c)
        res+=l
    return res

def main():
    n=int(input())
    s="("*n+")"*n
    result=brackets(s[1:2*n-1])
    fin=[]
    for ele in result:
        fin.append("("+ele+")")
    fin=list(set(fin))
    print("[", end="")
    for i,ele in enumerate(fin):
        print(f"'{ele}'",end="")
        if i<len(fin)-1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:17:53


```
def is_correct(st):
    ini=1
    for i in range(len(st)):
        if st[i]==")":
            ini-=1
        else:
            ini+=1
        if ini<0:
            return False
    return True

def brackets(s):
    res=[]
    if len(s)==2:
        res.append(s)
        res.append(s[::-1])
        return res
    for i in range(len(s)):
        c=s[i]
        r=brackets(s[:i]+s[i+1:])
        l=[]
        for ele in r:
            if is_correct(ele):
                l.append(ele+c)
        res+=l
    return res

def main():
    n=int(input())
    s="("*n+")"*n
    result=brackets(s[1:2*n-1])
    fin=[]
    for ele in result:
        fin.append("("+ele+")")
    fin=list(set(fin))
    fin.sort()
    print("[", end="")
    for i,ele in enumerate(fin):
        print(f'"{ele}"',end="")
        if i<len(fin)-1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:20:00


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
    nu = input()
    num=[]
    for i in range(1,len(nu),2):
        num.append(nu[i])
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:26:07


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
        num[i]=num[i].replace("[", "")
        num[i]=num[i].replace("]", "")
        num[i]=int(num[i])

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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:30:25


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
        num[i]=num[i].replace("[", "")
        num[i]=num[i].replace("]", "")
        num[i]=int(num[i])

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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:32:12


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
        num[i]=num[i].replace("[", "")
        num[i]=num[i].replace("]", "")
        num[i]=int(num[i])

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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:40:04


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
        num[i]=num[i].replace("[", "")
        num[i]=num[i].replace("]", "")
        num[i]=int(num[i])

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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:40:51


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
    num = list(map(int, input().split()))
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 02:44:35


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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 03:28:58


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
    nu = input()
    num=[]
    for i in range(1,len(nu),2):
        num.appned(nu[i])
    
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 03:31:22


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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:33:34


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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:35:37


```
def perm(num):
    sres=[]
    if len(num)==1:
        return num
    if len(num)==2:
        sres.append(num)
        sres.append(num[::-1])
        return sres
    for i in range(len(num)):
        n=num[i]
        r=perm(num[:i]+num[i+1:])
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:37:25


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
    num=list(map(int,input().split()))
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-16 05:41:06


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
    num=list(map(int,input().split()))
    # Generate combinations
    if len(num)==1:
        print("[",end="")
        print(num,end='')
        print("]")
    else:
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
if __name__ == "__main__":
    main()
```

## Submission at 2024-08-28 06:02:53


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head.next:
            if counter==k-1:
                head.next=head.next.next
            counter+=1
        return head

```

## Submission at 2024-08-28 06:06:45


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head.next:
            counter+=1
            if counter==k-1:
                head.next=head.next.next
        return head

```

## Submission at 2024-08-28 06:07:45


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head:
            counter+=1
            if counter==k-1:
                head.next=head.next.next
        return head

```

## Submission at 2024-08-28 06:15:26


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head:
            if counter==k-1:
                head.next=head.next.next
            counter+=1
            head=head.next
        return head

```

## Submission at 2024-08-28 06:16:18


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head.next:
            if counter==k-1:
                head.next=head.next.next
            counter+=1
            head=head.next
        return head

```

## Submission at 2024-08-28 06:17:15


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head:
            counter+=1
            if counter==k-1:
                head.next=head.next.next
            head=head.next
        return head

```

## Submission at 2024-08-28 06:18:35


```
class node:
    def __init__(self):
        self.data = None
        self.next = None

def delNode(head, k):
    # Code here
    counter=1
    if k==1:
        return head.next
    else:
        while head:
            counter+=1
            if counter==k:
                head.next=head.next.next
            head=head.next
        return head

```

## Submission at 2024-09-02 09:48:09


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    # Your code here
    temp=head
    while temp:
        result.append(temp.val)
        temp=temp.next
    return result

```

## Submission at 2024-09-02 09:52:14


```
# Write code from scratch
def main():
    n=int(input())
    c=[]
    a=map(int,input.split())
    b=map(int,input.split())
    for i in range(n):
        c.append(max(a[i],b[i]))
    print(*c)
main()
```

## Submission at 2024-09-02 09:52:59


```
# Write code from scratch
def main():
    n=int(input())
    c=[]
    a=map(int,input.split())
    b=map(int,input.split())
    for i in range(n):
        c.append(max(a[i],b[i]))
    print(*c)

if __name__=="__main__":
    main()
```

## Submission at 2024-09-02 09:57:01


```
# Write code from scratch
def main():
    n=int(input())
    a=input().split(" ")
    b=input()
    c=[]
    a=[]
    b=[]
    for i in range(n):
        a[i]=int(a[i])
    for i in range(n):
        b[i]=int(b[i])
    for i in range(n):
        c.append(max(a[i],b[i]))
    print(*c)

if __name__=="__main__":
    main()
```

## Submission at 2024-09-02 09:57:19


```
# Write code from scratch
def main():
    n=int(input())
    a=input().split(" ")
    b=input().split(" ")
    c=[]
    a=[]
    b=[]
    for i in range(n):
        a[i]=int(a[i])
    for i in range(n):
        b[i]=int(b[i])
    for i in range(n):
        c.append(max(a[i],b[i]))
    print(*c)

if __name__=="__main__":
    main()
```

## Submission at 2024-09-02 09:57:28


```
# Write code from scratch
def main():
    n=int(input())
    a=input().split(" ")
    b=input().split(" ")
    c=[]
    a=[]
    b=[]
    for i in range(n):
        a[i]=int(a[i])
    for i in range(n):
        b[i]=int(b[i])
    for i in range(n):
        c.append(max(a[i],b[i]))
    print(*c)

if __name__=="__main__":
    main()
```

## Submission at 2024-09-02 09:59:30


```
# Write code from scratch
def main():
    n=int(input())
    a=input().split(" ")
    b=input().split(" ")
    c=[]
    a=[]
    b=[]
    for i in range(n):
        a[i]=int(a[i])
    for i in range(n):
        b[i]=int(b[i])
    for i in range(n):
        c.append(max(a[i],b[i]))
        print(c[i],end=" ")

if __name__=="__main__":
    main()
```

## Submission at 2024-09-02 10:05:29


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
    count=1
    while temp:
        count+=1
        temp=temp.next
    if k<=0 or k>count:
        return head
    if k==1:
        return head.next
    t=head
    ind=1
    while t.next:
        if ind==k-1:
            t.next=t.next.next
        ind+=1
    return head

```

## Submission at 2024-09-02 10:06:26


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
    count=1
    while temp:
        count+=1
        temp=temp.next
    if k<=0 or k>count:
        return head
    if k==1:
        return head.next
    t=head
    ind=1
    while t.next:
        if ind==k-1:
            t.next=t.next.next
        t=t.next
        ind+=1
    return head

```

## Submission at 2024-09-02 10:09:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if k==1:
        return head.next
    temp=head
    ind=1
    while t.next:
        if ind==k-1:
            t.next=t.next.next
        t=t.next
        if not t:
            break
        ind+=1
    return head

```

## Submission at 2024-09-02 10:10:38


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if k==1:
        return head.next
    temp=head
    ind=1
    while temp.next:
        if ind==k-1:
            temp.next=temp.next.next
        temp=temp.next
        ind+=1
    return head

```

## Submission at 2024-09-02 10:12:31


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def delNode(head, k):
    # Code here
    if k==1:
        return head.next
    temp=head
    ind=1
    while temp.next:
        if ind==k-1:
            temp.next=temp.next.next
        temp=temp.next
        if not temp:
            break
        ind+=1
    return head

```

## Submission at 2024-09-02 10:15:47


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    # Your code her
    c=1
    temp=head
    while temp:
        if c==k:
            return temp.val
        temp=temp.next
        c+=1
    return -1

```

## Submission at 2024-09-02 10:19:12


```
# Write code from scratch
# Write code from scratch
def main():
    n=int(input())
    a=input().split(" ")
    b=input().split(" ")
    c=[]
    for i in range(n):
        c.append(max(int(a[i]),int(b[i])))
        print(c[i],end=" ")

if __name__=="__main__":
    main()
```

## Submission at 2024-09-02 10:26:18


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    cur=head
    temp=head
    prev=None
    while temp:
        cur=temp.next
        temp.next=prev
        prev=temp
        temp=cur
    return temp
```

## Submission at 2024-09-02 10:31:31


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    cur=head
    temp=head
    prev=None
    while cur:
        cur=cur.next
        temp.next=prev
        prev=temp
        temp=cur
    return temp
```

## Submission at 2024-09-02 10:32:33


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    cur=head
    temp=head
    prev=None
    while cur:
        temp=cur
        cur=cur.next
        temp.next=prev
        prev=temp
    return temp
```

## Submission at 2024-09-02 11:01:36


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for j in range(c+1):
            if (c-j)<row and j<row:
                a.append(matrix[c-j][j])
        c+=1

```

## Submission at 2024-09-02 11:02:16


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for j in range(c+1):
            if (c-j)<row and j<row:
                a.append(matrix[c-j][j])
        c+=1
    return a
```

## Submission at 2024-09-02 11:04:12


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(row):
            for j in range(col):
                if i+j==c:
                    a.append(matrix[i][j])
        c+=1
    return a
```

## Submission at 2024-09-02 11:05:19


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(row):
            for j in range(col):
                if i+j==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:06:24


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(row):
            for j in range(col):
                if i+j==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:07:03


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(row):
            for j in range(col):
                if i+j==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:08:21


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(row):
            for j in range(col):
                if i+j==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:09:43


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(row):
            for j in range(col):
                if (i+j)==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:11:10


```

def diagonal_traversal(matrix):
    # Your code here
    n=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(n):
            for j in range(n):
                if (i+j)==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:11:58


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(2*row-1):
        for i in range(col):
            for j in range(row):
                if (i+j)==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-02 11:13:31


```

def diagonal_traversal(matrix):
    # Your code here
    row=len(matrix)
    col=len(matrix[0])
    a=[]
    c=0
    for i in range(col+row-1):
        for i in range(col):
            for j in range(row):
                if (i+j)==c:
                    a.append(matrix[j][i])
        c+=1
    return a
```

## Submission at 2024-09-09 02:26:47


```
n=int(input())
s=0
for i in range(1,n):
    if i%3==0 or i%5==0 or i%7==0:
        s+=i
print(s)
```

## Submission at 2024-09-09 02:29:18


```
n=int(input())
s=0
for i in range(1,n+1):
    if i%3==0 or i%5==0 or i%7==0:
        s+=i
print(s)
```

## Submission at 2024-09-09 02:34:18


```
n=int(input())
s=input().split()
ans=0
for i in range(len(s)):
    if len(s[i])%2==0:
        ans+=1
print(ans)
```

## Submission at 2024-09-09 03:59:44


```
a,b=map(int,input().split())
n=list(map(int,input().split()))
l=[]
m=max(n)
n=set(n)
for i in range(1,m+1):
    if i not in n:
        l.append(i)
print(l[b-1])
```

## Submission at 2024-09-09 04:30:35


```
a,b=map(int,input().split())
n=list(map(int,input().split()))
l=[]
m=max(n)
n=set(n)
for i in range(1,m+1):
    if i not in n:
        l.append(i)
print(l[b-1])
```

## Submission at 2024-09-09 04:39:33


```
a,b=map(int,input().split())
n=set(map(int,input().split()))
count=0
for i in range(1,1001):
    if i not in n:
        count+=1
    if count==b:
        print(i)
        break
```

## Submission at 2024-09-09 04:48:11


```
# Write the code from scratch, no boilerplate is required
x=input()
arr1=list(map(int,input()))
arr2=list(map(int,input()))
arr1.sort()
arr2.sort()
if arr1==arr2:
    print(True)
else:
    print(False)
```

## Submission at 2024-09-09 04:49:01


```
# Write the code from scratch, no boilerplate is required
x=input()
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
arr1.sort()
arr2.sort()
if arr1==arr2:
    print(True)
else:
    print(False)
```

## Submission at 2024-09-09 04:49:30


```
# Write the code from scratch, no boilerplate is required
x=input()
arr1=list(map(int,input().split()))
arr2=list(map(int,input().split()))
arr1.sort()
arr2.sort()
if arr1==arr2:
    print("true")
else:
    print("false")
```

## Submission at 2024-09-09 05:03:19


```
# Write Code from Scratch
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    row=list(map(int,input().split()))
    matrix.append(row)
for i in range(n):
    for j in range(m):
        if i<=j:
            matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]
for row in matrix:
    print(*row)
```

## Submission at 2024-09-09 05:05:44


```
# Write Code from Scratch
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    row=list(map(int,input().split()))
    matrix.append(row)
for i in range(m):
    for j in range(n):
        print(matrix[j][i],end=" ")
    print()
```

## Submission at 2024-09-09 05:11:50


```
n=int(input())
arr=list(map(int,input().split()))
for i in range(n-1):
    arrc=[]
    for j in range(len(arr)-1):
        arrc.append(arr[j]+arr[j+1])
    arr=arrc
print(arr[0])
```

## Submission at 2024-09-09 05:39:48


```
# Write code from scratch here
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    row = list(map(int,input().split()))
    matrix.append(row)
ans=[]
top, bottom=0,n-1
left, right=0,m-1
while top<=bottom and left<=right:

    for i in range(left,right+1):
        ans.append(matrix[top][i])
    top+=1

    for i in range(top,bottom+1):
        ans.append(matrix[i][right])
    right-=1

    for i in range(right,left-1,-1):
        ans.append(matrix[bottom][i])
    bottom-=1

    for i in range(bottom,top-1,-1):
        ans.append(matrix[i][left])
    left+=1

print(*ans)
```

## Submission at 2024-09-09 05:41:33


```
# Write code from scratch here
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    row = list(map(int,input().split()))
    matrix.append(row)
ans=[]
top, bottom=0,n-1
left, right=0,m-1
while top<=bottom and left<=right:

    for i in range(left,right+1):
        ans.append(matrix[top][i])
    top+=1

    for i in range(top,bottom+1):
        ans.append(matrix[i][right])
    right-=1

    for i in range(right,left-1,-1):
        ans.append(matrix[bottom][i])
    bottom-=1

    for i in range(bottom,top-1,-1):
        ans.append(matrix[i][left])
    left+=1
ans=' '.join(map(str, ans))
print(*ans)
```

## Submission at 2024-09-09 05:41:52


```
# Write code from scratch here
n,m=map(int,input().split())
matrix=[]
for i in range(n):
    row = list(map(int,input().split()))
    matrix.append(row)
ans=[]
top, bottom=0,n-1
left, right=0,m-1
while top<=bottom and left<=right:

    for i in range(left,right+1):
        ans.append(matrix[top][i])
    top+=1

    for i in range(top,bottom+1):
        ans.append(matrix[i][right])
    right-=1

    for i in range(right,left-1,-1):
        ans.append(matrix[bottom][i])
    bottom-=1

    for i in range(bottom,top-1,-1):
        ans.append(matrix[i][left])
    left+=1
ans=' '.join(map(str, ans))
print(ans)
```

## Submission at 2024-09-09 05:42:27


```
def spiral_traversal(n, m, matrix):
    # Initialize boundaries
    top, bottom = 0, n - 1
    left, right = 0, m - 1
    result = []

    while top <= bottom and left <= right:
        # Traverse from left to right on the top row
        for i in range(left, right + 1):
            result.append(matrix[top][i])
        top += 1

        # Traverse from top to bottom on the right column
        for i in range(top, bottom + 1):
            result.append(matrix[i][right])
        right -= 1

        if top <= bottom:
            # Traverse from right to left on the bottom row
            for i in range(right, left - 1, -1):
                result.append(matrix[bottom][i])
            bottom -= 1

        if left <= right:
            # Traverse from bottom to top on the left column
            for i in range(bottom, top - 1, -1):
                result.append(matrix[i][left])
            left += 1

    return ' '.join(map(str, result))

# Input reading
n, m = map(int, input().split())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Output the spiral traversal
print(spiral_traversal(n, m, matrix))

```

## Submission at 2024-09-09 09:49:38


```
# Write Code from Scratch here
def power(n,i):
    if 3**i==n:
        return True
    if 3**i>n:
        return False
    return power(n,i+1)
def main():
    n=int(input())
    print(power(n,0))
```

## Submission at 2024-09-09 09:50:11


```
# Write Code from Scratch here
def power(n,i):
    if 3**i==n:
        return True
    if 3**i>n:
        return False
    return power(n,i+1)
def main():
    n=int(input())
    print("True" if power(n,0) else "False")
```

## Submission at 2024-09-09 09:50:28


```
# Write Code from Scratch here
def power(n,i):
    if 3**i==n:
        return True
    if 3**i>n:
        return False
    return power(n,i+1)
def main():
    n=int(input())
    print("True" if power(n,0) else "False")
main()
```

## Submission at 2024-09-09 09:54:01


```
# Write code from scratch here
def find(a,b,count,i):
    if i==len(a)-1:
        return count
    if a[i]==b:
        count+=1
    find(a,b,count,i+1)
def main():
    a,b=input().split()
    print(find(a,b,0,0))
main()
```

## Submission at 2024-09-09 09:54:40


```
# Write code from scratch here
def find(a,b,count,i):
    if i==len(a)-1:
        return count
    if a[i]==b:
        count+=1
    return find(a,b,count,i+1)
def main():
    a,b=input().split()
    print(find(a,b,0,0))
main()
```

## Submission at 2024-09-09 09:57:22


```
# Write code from scratch here
def find(a,b,i):
    count=0
    if i==len(a)-1:
        return count
    if a[i]==b:
        count+=1
    return count+find(a,b,i+1)
def main():
    a,b=input().split()
    print(find(a,b,0,0))
main()
```

## Submission at 2024-09-09 09:57:28


```
# Write code from scratch here
def find(a,b,i):
    count=0
    if i==len(a)-1:
        return count
    if a[i]==b:
        count+=1
    return count+find(a,b,i+1)
def main():
    a,b=input().split()
    print(find(a,b,0))
main()
```

## Submission at 2024-09-09 09:57:39


```
# Write code from scratch here
def find(a,b,i):
    count=0
    if i==len(a)-1:
        return count
    if a[i]==b:
        count+=1
    return count+find(a,b,i+1)
def main():
    a,b=input().split()
    print(find(a,b,0))
main()
```

## Submission at 2024-09-09 09:59:41


```
# Write code from scratch here
def find(a,b,count,i):
    count=count
    if i==len(a)-1:
        return count
    if a[i]==b:
        count+=1
    return find(a,b,count,i+1)
def main():
    a,b=input().split()
    print(find(a,b,0,0))
main()
```

## Submission at 2024-09-09 10:01:35


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp=head
    while temp:
        while temp.next and temp.val=temp.next.val:
            temp.next=temp.next.next
        temp=temp.next
    return head

```

## Submission at 2024-09-09 10:02:09


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp=head
    while temp:
        while temp.next and temp.val==temp.next.val:
            temp.next=temp.next.next
        temp=temp.next
    return head

```

## Submission at 2024-09-09 10:03:05


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def removeDuplicates(head):
    # Code here
    temp=head
    while temp:
        while temp.next and temp.data==temp.next.data:
            temp.next=temp.next.next
        temp=temp.next
    return head

```

## Submission at 2024-09-09 10:06:03


```

class Solution:
    def isPalindrome(self, head):
        #code here
      temp=head
      l=[]
      while temp:
        l.append(temp.data)
        temp=temp.next
      n=len(l)
      for i in range(n//2):
        if l[i]!=l[n-i-1]:
          return False
      return True

```

## Submission at 2024-09-09 10:10:28


```
# Write code from scratch here
def freq(s,x,count,itr):
    if itr>len(s):
        return count
    if s[itr]==x:
        count+=1
    return freq(s,x,count,itr+1)
def main():
    s,x=input().split()
    count=freq(s,x,0,0)
    print(count)
main()
```

## Submission at 2024-09-09 10:10:43


```
# Write code from scratch here
def freq(s,x,count,itr):
    if itr>=len(s):
        return count
    if s[itr]==x:
        count+=1
    return freq(s,x,count,itr+1)
def main():
    s,x=input().split()
    count=freq(s,x,0,0)
    print(count)
main()
```

## Submission at 2024-09-09 10:19:44


```

def modify_matrix(matrix):
    # Your code here
    answer=matrix
    row=len(matrix)
    col=len(matrix[0])
    for j in range(col):
        m=0
        for i in range(row):
            m=max(m,matrix[i][j])
        for i in range(row):
            if matrix[i][j] == -1:
                matrix[i][j]=m
    return answer

# def main():
#     n,m=map(int,input().split())
#     matrix=[list(map(int,input().split())) for _ in range(n)]
#     modify_matrix(matrix)
    
# main()
```

## Submission at 2024-09-09 10:21:56


```

def modify_matrix(matrix):
    # Your code here
    answer=matrix
    row=len(matrix)
    col=len(matrix[0])
    for j in range(col):
        m=0
        for i in range(row):
            m=max(m,matrix[i][j])
        for i in range(row):
            if matrix[i][j] < 0:
                matrix[i][j]=m
    return answer

```

## Submission at 2024-09-09 10:22:44


```

def modify_matrix(matrix):
    # Your code here
    answer=matrix
    row=len(matrix)
    col=len(matrix[0])
    for j in range(col):
        m=0
        for i in range(row):
            m=max(m,matrix[i][j])
        for i in range(row):
            if matrix[i][j] < 0:
                answer[i][j]=m
    return answer

```

## Submission at 2024-09-09 10:22:52


```

def modify_matrix(matrix):
    # Your code here
    answer=matrix
    row=len(matrix)
    col=len(matrix[0])
    for j in range(col):
        m=0
        for i in range(row):
            m=max(m,matrix[i][j])
        for i in range(row):
            if matrix[i][j] == -1:
                answer[i][j]=m
    return answer

```

## Submission at 2024-09-09 10:25:59


```

def modify_matrix(matrix):
    # Your code here
    answer=matrix
    row=len(matrix)
    col=len(matrix[0])
    for j in range(col):
        m=matrix[0][j]
        for i in range(row):
            m=max(m,matrix[i][j])
        for i in range(row):
            if answer[i][j] == -1:
                answer[i][j]=m
    return answer

```

## Submission at 2024-10-07 09:48:17


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    q2=deque()
    while q:
        q2.appendleft(q.pop())
    return q2
```

## Submission at 2024-10-07 09:48:54


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    if not q:
        return []
    q2=deque()
    while q:
        q2.appendleft(q.pop())
    return q2
```

## Submission at 2024-10-07 09:49:21


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    if not q:
        return []
    q2=deque()
    while q:
        q2.appendleft(q.pop())
    return list(q2)
```

## Submission at 2024-10-07 09:50:02


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    if not q:
        return []
    q2=deque()
    while q:
        q2.appendleft(q.pop())
    return q2
```

## Submission at 2024-10-07 09:54:46


```
# Write your code from scratch here
s=input()
o=''
l=[]
for x in s:
    if x!='+':
        o+=x
    else:
        l.append(o)
        o=''
l.sort()
out=''
for i in range(len(l)):
    if i!=len(l)-1:
        out+=l[i]+'+'
    else:
        out+=l[i]
print(out)

```

## Submission at 2024-10-07 09:56:29


```
# Write your code from scratch here
s=input()
o=''
l=[]
for x in s:
    if x!='+':
        o+=x
    else:
        l.append(o)
        o=''
l.append(o)
l.sort()
out=''
for i in range(len(l)):
    if i!=len(l)-1:
        out+=l[i]+'+'
    else:
        out+=l[i]
print(out)

```

## Submission at 2024-10-07 10:00:31


```
# Write your code from scratch here
s=input()
t=''
l=[]
for x in s:
    if x!='.':
        t+=x
    else:
        l.append(t[::-1])
        t=''
l.append(t[::-1])
out=''
for i in range(len(l)):
    if i!=len(l)-1:
        out+=l[i]+'.'
    else:
        out+=l[i]
print(out)
```

## Submission at 2024-10-07 10:07:49


```
n,k=map(int,input().split())
pile=list(map(int,input().split()))

pile.sort()
d={}
for x in pile:
    if x in d:
        d[x]+=1
    else:
        d[x]=1
a=0
b=len(pile)
while a<=b:
    if 
```

## Submission at 2024-10-07 10:09:48


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    l=list(q)[::-1]
    q2=deque()
    for x in l:
        q2.appendleft(x)
    return q2
```

## Submission at 2024-10-07 10:22:16


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
x=l[mid]*n*2-s+1
print(x)
```

## Submission at 2024-10-07 10:23:26


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
x=l[mid]*n*2-s+1
print(x if x>1 else -1)
```

## Submission at 2024-10-07 10:27:29


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=s/(n*2.0)
x=(l[mid]-avg)*2*n
avgn=(s+x)/(n*2.0)
if avgn>l[mid]:
    print(x)
else:
    print(x+1)
```

## Submission at 2024-10-07 10:29:08


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=s/(n*2.0)
x=(l[mid]-avg)*2*n
avgn=(s+x)/(n*2.0)
if avgn>l[mid]:
    print(x)
else:
    print(x+1)
```

## Submission at 2024-10-07 10:31:01


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=s/(n*2.0)
x=(l[mid])*2*n-s
avgn=(s+x)/(n*2.0)
if avgn>l[mid]:
    print(x)
else:
    print(x+1)
```

## Submission at 2024-10-07 10:34:37


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=s/(n*2.0)
x=(l[mid])*2*n-s+1
if x<=0:
    print(-1)
else:
    print(x)

```

## Submission at 2024-10-07 10:47:33


```
n,k=map(int,input().split())
pile=list(map(int,input().split()))

pile.sort()
d={}
for x in pile:
    if x in d:
        d[x]+=1
    else:
        d[x]=1
s=list(set(pile))
d2=d.copy()
for i in range(len(s)):
    b=len(s)-1
    c=0
    while s[b]-s[i]>k:
       c+=1
       b-=1
    if c==0:
        d[s[i]]=0
for i in range(len(s)-1,-1,-1):
    a=0
    c=0
    while s[i]-s[a]>k:
       c+=1
       a+=1
    if c==0:
        d2[s[i]]=0
c1=0
for x in d:
    c1+=d[x]
c2=0
for x in d2:
    c2+=d2[x]
print(min(c1,c2))
```

## Submission at 2024-10-07 10:54:12


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=s/(n*2.0)
x=(l[mid])*2*n-s+1
if x<=0:
    print(0)
else:
    print(x)
```

## Submission at 2024-10-07 10:57:15


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=s/(n*2.0)
if avg>l[mid]:
    print(0)
x=(l[mid])*2*n-s+1
if x<=0:
    print(0)
else:
    print(x)
```

## Submission at 2024-10-07 11:02:04


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
if avg>l[mid]:
    print(0)
x=(l[mid]-avg)*2*n
new=(s+x)*1.0/(2*n)
if new>l[mid]:
    print(x)
else:
    print(x+1)
```

## Submission at 2024-10-07 11:03:42


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid]-avg)*2*n
new=(s+x)*1.0/(2*n)
if new>l[mid]:
    print(max(x,0))
else:
    print(max(x+1,0))
```

## Submission at 2024-10-07 11:05:35


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
if len(l)<=2:
    print(-1)
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid]-avg)*2*n
new=(s+x)*1.0/(2*n)
if new>l[mid]:
    print(max(x,0))
else:
    print(max(x+1,0))
```

## Submission at 2024-10-07 11:07:14


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
if len(l)<=2:
    print(-1)
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid])*2*n-s+1
print(max(0,x))
```

## Submission at 2024-10-07 11:08:55


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
if len(l)<=2:
    print(-1)
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid])*2*n-s+1
print(max(0,x))
```

## Submission at 2024-10-07 11:10:44


```
from collections import deque # Don't touch this line

def rev(q):
    # Write your code here
    q2=deque(list(q)[::-1])
    return q2
```

## Submission at 2024-10-07 11:12:48


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
if len(l)<=2:
    print(-1)
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid])*2*n-s+1
print(max(-1,x))
```

## Submission at 2024-10-07 11:13:20


```
# Write Python code from scratch
n=int(input())
l=list(map(int,input().split()))
if len(l)<=2:
    print(-1)
l.sort()
s=sum(l)
mid=len(l)//2
avg=(s*1.0)/(n*2)
x=(l[mid])*2*n-s+1
print(max(0,x))
```

## Submission at 2024-10-14 11:09:13


```
# Write code from scratch here
n=int(input())
l=list(map(int,input().split()))
k=int(input())
sec=0
for i in range(n):
    sec+=min(l[k],l[(k+i)%n])
print(sec)
```

## Submission at 2024-10-17 12:44:38


```
# Write code from scratch here
n=int(input())
l=list(map(int,input().split()))
k=int(input())
if l[k]==1:
    print(1)
else:
    sec=0
    for i in range(n):
        sec+=min(l[k],l[(k+i)%n])
    print(sec)
```

## Submission at 2024-10-28 09:59:39


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
        if not root:
            return 1000
        return min(root.data,self.findMin(root.left),self.findMin(root.right))

```

## Submission at 2024-10-28 10:02:39


```
# write code from scratch
d={}
n,k=map(int,input().split())
l=list(map(int,input().split()))
for x in l:
    if x in d:
        d[x]+=1
    else:
        d[x]=1
for x in l:
    if d[x]>=k:
        print(x)
        break
```

## Submission at 2024-10-28 10:03:30


```
# write code from scratch
d={}
n,k=map(int,input().split())
l=list(map(int,input().split()))
for x in l:
    if x in d:
        d[x]+=1
    else:
        d[x]=1
flag=True
for x in l:
    if d[x]>=k:
        print(x)
        flag=False
        break
if flag:
    print(-1)
```

## Submission at 2024-10-28 10:13:40


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root.left and not root.right:
        return int(cur)
    cur+=str(root.data)
    s=0
    if root.left:
        s+=treePathSum(root.left,cur)
    if root.right:
        s+=treePathSum(root.right,cur)
    return s
```

## Submission at 2024-10-28 10:15:32


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root.left and not root.right:
        return int(cur+str(root.data))
    cur+=str(root.data)
    s=0
    if root.left:
        s+=treePathSum(root.left,cur)
    if root.right:
        s+=treePathSum(root.right,cur)
    return s
```

## Submission at 2024-10-28 10:17:16


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root:
        return 0
    cur+=str(root.data)
    if not root.left and not root.right:
        return int(cur)
    return treePathSum(root.left,cur)+treePathSum(root.right,cur)
```

## Submission at 2024-10-28 10:18:37


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root:
        return 0
    cur+=str(root.data)
    if not root.left and not root.right:
        return int(cur)
    s=0
    if root.left:
        s+=treePathSum(root.left,cur)
    if root.right:
        s+=treePathSum(root.right,cur)
    return s
```

## Submission at 2024-10-28 10:28:52


```
# Write your code from scratch here
order,s=input().split()
d={}
for x in order:
    d[x]=0
for x in s:
    if x in d:
        d[x]+=1
s=[x for x in s]
o=order
order=[x for x in order[::-1]]
# print(s,order)
for i in range(len(s)):
    if s[i] in o:
        s[i]=order[-1]
        d[order[-1]]-=1
        if d[order[-1]]==0:
            order.pop()
print(''.join(s))
```

## Submission at 2024-10-28 10:38:06


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def findIntersection(head1, head2):
    # Your code here
    d={}
    temp=head1
    while temp:
      if temp.val in d:
        d[temp.val]+=1
      else:
        d[temp.val]=1
      temp=temp.next
    # print(d)
    temp=head2
    head=ListNode(0)
    t=head
    while temp:
      if temp.val in d and d[temp.val]>0:
        t.next=ListNode(temp.val)
        t=t.next
        d[temp.val]-=1
      temp=temp.next
    return head.next
```

## Submission at 2024-10-28 10:39:19


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root:
        return 0
    cur+=str(root.data)
    if not root.left and not root.right:
        return int(cur)
    s=0
    if root.left:
        s+=treePathSum(root.left,cur)
    if root.right:
        s+=treePathSum(root.right,cur)
    return s
```

## Submission at 2024-10-28 10:44:54


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root:
        return 0
    cur+=str(root.data)
    if not root.right and not root.left:
        return int(cur)
    s=0
    if root.left:
        s+=treePathSum(root.left,cur)
    if root.right:
        s+=treePathSum(root.right,cur)
    return s
```

## Submission at 2024-10-28 10:46:43


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
def treePathSum(root,cur='0') -> int:
    # code here
    if not root:
        return cur
    cur+=str(root.data)
    if not root.right and not root.left:
        return int(cur)
    s=0
    if root.left:
        s+=treePathSum(root.left,cur)
    if root.right:
        s+=treePathSum(root.right,cur)
    return s
```

## Submission at 2024-10-28 10:55:25


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
    def find(root,p=0):
        if not root:
            return 0
        print(root.data,p)
        if not root.right and not root.left:
            return p*10+root.data
        p*=10
        return find(root.left,p+root.data)+find(root.right,p+root.data)
    return find(root)
```

## Submission at 2024-10-28 10:55:41


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
    def find(root,p=0):
        if not root:
            return 0
        if not root.right and not root.left:
            return p*10+root.data
        p*=10
        return find(root.left,p+root.data)+find(root.right,p+root.data)
    return find(root)
```

## Submission at 2024-10-28 11:03:01


```
# Write your code from scratch here
order,s=input().split()
d={}
for x in order:
    d[x]=0
for x in s:
    if x in order:
        d[x]+=1
stack=[]
for x in order:
    for i in range(d[x]):
        stack.append(x)
out=''
stack=stack[::-1]
for x in s:
    if x in order:
        out+=stack.pop()
    else:
        out+=x
print(out)
```

## Submission at 2024-11-04 10:01:48


```
# Write Python code from scratch
def calc(l,k):
    s=k
    for i in range(1,len(l)):
        s+=min(k,l[i]-l[i-1])
    return s
def main():
    n,h=map(int,input().split())
    l=list(map(int,input().split()))
    a=1
    b=h
    while a<=b:
        mid=int((a+b)/2)
        dmg=calc(l,mid)
        if dmg>=h:
            b-=1
        else:
            a+=1
    print(a)
main()
```

## Submission at 2024-11-04 10:03:58


```
# Write Python code from scratch
def calc(l,k):
    s=k
    for i in range(1,len(l)):
        s+=min(k,l[i]-l[i-1])
    return s
def main():
    n,h=map(int,input().split())
    l=list(map(int,input().split()))
    a=1
    b=h
    while a<=b:
        mid=int((a+b)/2)
        dmg=calc(l,mid)
        if dmg>=h:
            b=mid-1
        else:
            a=mid+1
    print(a)
main()
```

## Submission at 2024-11-04 10:10:46


```
# Write code from scratch
n,k=map(int,input().split())
print(n//2)
```

## Submission at 2024-11-04 10:23:32


```
# Write code from scratch
n,k=map(int,input().split())
a=0
if n==1:
    print(0)
else:
    while True:
        if a*(a+1)>=k:
            print(a)
            break
        a+=1

```

## Submission at 2024-11-04 10:24:15


```
# Write code from scratch
n,k=map(int,input().split())
a=0
if n==1:
    print(0)
else:
    while True:
        if a*(a+1)/2>=k:
            print(a)
            break
        a+=1

```

## Submission at 2024-11-04 10:25:24


```
# Write code from scratch
n,k=map(int,input().split())
a=1
if n==1:
    print(0)
else:
    while True:
        if a*(a+1)/2>=k:
            print(n-a)
            break
        a+=1

```

## Submission at 2024-11-06 05:51:29


```
# Write code from scratch
import math
n,k=map(int,input().split())
x=(math.sqrt(9+8*(n+k))-3)/2
print(n-x)

```

## Submission at 2024-11-06 05:52:21


```
# Write code from scratch
import math
n,k=map(int,input().split())
x=(math.sqrt(9+8*(n+k))-3)//2
print(n-x)
```

## Submission at 2024-11-06 05:53:26


```
# Write code from scratch
import math
n,k=map(int,input().split())
x=(-3+math.sqrt(9+8*(n+k)))//2
print(int(n-x))
```

## Submission at 2024-11-18 06:15:50


```
n,k=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
c=0
for i in range(1,n):
    for j in range(i+1,n):
        if l[j]-l[i]>k:
            c+=l[j]-l[i]-k
            l[j]=l[i]+k
print(c)

```

## Submission at 2024-11-18 09:34:12


```
n,k=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
l2=[x for x in l][::-1]
c=0
for i in range(1,n):
    for j in range(i+1,n):
        if l[j]-l[i]>k:
            c+=l[j]-l[i]-k
            l[j]=l[i]+k
m=0
for i in range(1,n):
    for j in range(i+1,n):
        if l2[i]-l2[j]>k:
            m+=l2[j]
            l2[j]=0
print(min(m,c))

```

## Submission at 2024-11-25 09:49:17


```
# Write Code From Scratch Here
n=int(input())
l=list(map(int,input().split()))
if l==sorted(l):
    print("YES")
else:
    print("NO")
```

## Submission at 2024-11-25 09:52:13


```
# Write Code From Scratch Here
n,k=map(int,input().split())
l=list(map(int,input().split()))
l.sort()
out=[]
for i in range(n):
    if l[i]==k:
        out.append(i)
print(*out)
```

## Submission at 2024-11-25 09:54:47


```
# write code from scratch
a=0
b=0
s=input()
for x in s:
    if x=='a':
        a+=1
    if x=='b':
        b+=1
print('a' if a>b else 'b')
```

## Submission at 2024-11-25 10:00:32


```
# write code from scratch
n=int(input())
l=list(map(int,input().split()))
f=True
ap=l[1]-l[0]
for i in range(1,n-1):
    if l[i+1]-l[i]!=ap:
        f=False
        break
print(f)
```

## Submission at 2024-11-25 10:04:10


```
# write code from scratch
n=int(input())
l=list(map(int,input().split()))
ap=l[1]-l[0]
f=True
for i in range(1,n-1):
    if l[i+1]-l[i]!=ap:
        f=False
        break
print(f)
```

## Submission at 2024-11-25 10:06:16


```
# write code from scratch
n=int(input())
l=list(map(int,input().split()))
ap=l[1]-l[0]
f=True
for i in range(1,n-1):
    if l[i+1]-l[i]!=ap:
        f=False
        break
print(f)
```

## Submission at 2024-11-25 10:07:32


```
# write code from scratch
n=int(input())
l=list(map(int,input().split()))
ap=l[1]-l[0]
f=True
for i in range(1,n-1):
    if l[i+1]-l[i]!=ap:
        f=False
        break
print(f)
```

## Submission at 2024-11-25 10:08:34


```
# write code from scratch
# write code from scratch
n=int(input())
l=list(map(int,input().split()))
ap=l[1]-l[0]
f=True
for i in range(1,n-1):
    if l[i+1]-l[i]!=ap:
        f=False
        break
print('true' if f else 'false')
```

## Submission at 2024-11-25 10:08:50


```
# write code from scratch
# write code from scratch
n=int(input())
l=list(map(int,input().split()))
ap=l[1]-l[0]
f=True
for i in range(1,n-1):
    if l[i+1]-l[i]!=ap:
        f=False
        break
print('true' if f else 'false')
```

## Submission at 2024-11-25 10:10:29


```
# write code from scratch
n=int(input())
for i in range(n):
    print('*'*(i+1))
```

## Submission at 2024-11-25 10:19:57


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
    def trv(root,n,l):
      if not root:
        return
      if n>root.data:
        l[0]=max(l[0],root.data)
        trv(root.right)
      if n==root.data:
        l[0]=root.data
        return
      else:
        trv(root.left)
      return
    l=[0]
    trv(root)
    return l[0]
```

## Submission at 2024-11-25 10:29:01


```
# Write Code From Scratch Here
n,k=map(int,input().split())
l=[]
for i in range(k):
    a,b=map(int,input().split())
    l.append([a,b])
d={}
for x in l:
    if l[0] in d:
        d[l[0]].append(l[1])
    else:
        d[l[0]]=[l[1]]
l=[]
for x in d:
    l.append([x,sorted(d[x])])
l.sort(key=lambda x:x[0],reverse=True)
ans=0
for i in range(n):
    ans+=sum(l[i][1])
```

## Submission at 2024-11-25 10:29:36


```
#complete the function and return the value of sum.
def findMaxForN(root, n) -> int:
    # code here
    def trv(root,n,l):
      if not root:
        return
      if n>root.data:
        l[0]=max(l[0],root.data)
        trv(root.right)
      if n==root.data:
        l[0]=root.data
        return
      else:
        trv(root.left)
      return
    l=[0]
    trv(root,n,l)
    return l[0]
```

## Submission at 2024-11-25 10:30:26


```
def findMaxForN(root, n) -> int:
    # code here
    def trv(root,n,l):
      if not root:
        return
      if n>root.data:
        l[0]=max(l[0],root.data)
        trv(root.right)
      if n==root.data:
        l[0]=root.data
        return
      else:
        trv(root.left)
      return
    l=[0]
    trv(root,n,l)
    return l[0]
```

## Submission at 2024-11-25 10:34:51


```
# Write Code From Scratch Here
n,k=map(int,input().split())
l=[]
for i in range(k):
    a,b=map(int,input().split())
    l.append([a,b])
d={}
for x in l:
    if x[0] in d:
        d[x[0]].append(x[1])
    else:
        d[x[0]]=[x[1]]
l=[]
for x in d:
    l.append([x,sorted(d[x])])
l.sort(key=lambda x:x[0],reverse=True)
ans=0
for i in range(n):
    ans+=sum(l[i][1])
```

## Submission at 2024-11-25 10:36:33


```
def findMaxForN(root, n) -> int:
    # code here
    def trv(root,n,l):
      if not root:
        return
      if n>root.data:
        l[0]=max(l[0],root.data)
        trv(root.right,n,l)
      if n==root.data:
        l[0]=root.data
        return
      return
    l=[0]
    trv(root,n,l)
    return l[0]
```

## Submission at 2024-11-25 10:42:56


```
# Write Code From Scratch Here
# Write Code From Scratch Here
n,k=map(int,input().split())
l=[]
for i in range(k):
    a,b=map(int,input().split())
    l.append([a,b])
d={}
for x in l:
    if x[0] in d:
        d[x[0]].append(x[1])
    else:
        d[x[0]]=[x[1]]
l=[]
for x in d:
    l.append([x,sorted(d[x])])
l.sort(key=lambda x:x[0],reverse=True)
ans=0
for i in range(n):
    ans+=sum(l[i][1])
print(ans)
```

## Submission at 2024-11-25 10:45:32


```
def findMaxForN(root, n) -> int:
    # code here
    def trv(root,l):
      if not root:
        return
      trv(root.left)
      l.append(root.data)
      trv(root.right)
      return
    l=[]
    trv(root,l)
    ans=0
    for x in l:
      if x<=n:
        ans=max(x,ans)
    return ans
```

## Submission at 2024-11-25 10:48:19


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
        s=set()
        temp=head1
        while temp:
          s1.append(temp)
          temp=temp.next
        temp=head2
        while temp:
          if temp in s:
            return temp
          temp=temp.next
        return 
```

## Submission at 2024-11-25 10:50:43


```
# Write Code From Scratch Here
n,k=map(int,input().split())
l=[]
for i in range(k):
    a,b=map(int,input().split())
    l.append([a,b])
d={}
for x in l:
    if x[0] in d:
        d[x[0]]+=x[1]
    else:
        d[x[0]]=x[1]
l=[]
for x in d:
    l.append(d[x])
l.sort(reverse=True)
print(sum(l[:n]))
```

## Submission at 2024-11-25 10:51:02


```
def findMaxForN(root, n) -> int:
    # code here
    def trv(root,l):
      if not root:
        return
      trv(root.left,l)
      l.append(root.data)
      trv(root.right,l)
      return
    l=[]
    trv(root,l)
    ans=0
    for x in l:
      if x<=n:
        ans=max(x,ans)
    return ans
```

## Submission at 2024-11-25 10:51:36


```
#Function to find intersection point in Y shaped Linked Lists.
class Solution:
    def intersectPoint(self, head1, head2):
        # code here
        s=set()
        temp=head1
        while temp:
          s.add(temp)
          temp=temp.next
        temp=head2
        while temp:
          if temp in s:
            return temp
          temp=temp.next
        return 
```

## Submission at 2024-11-25 10:54:18


```
def findMaxForN(root, n) -> int:
    # code here
    def trv(root,l):
      if not root:
        return
      trv(root.left,l)
      l.append(root.data)
      trv(root.right,l)
      return
    l=[]
    trv(root,l)
    ans=-1
    for x in l:
      if x<=n:
        ans=max(x,ans)
    return ans
```

