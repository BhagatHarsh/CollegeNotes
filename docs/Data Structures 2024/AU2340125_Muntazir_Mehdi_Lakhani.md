## Submission at 2024-08-09 04:52:54


```
# Write your Python code here from the scratch

Username=input()

if(len(Username)>=1 and len(Username)<=100):
    print("Hello "+Username+"!")
else:
    print("Enter a valid name .")


```

## Submission at 2024-08-09 04:54:33


```
# Write your Python code here from the scratch

Username=input()

if(len(Username)>=1 and len(Username)<=100):
    print("Hello "+Username+"!")
else:
    print("Enter a valid name .")


```

## Submission at 2024-08-09 05:08:36


```
# Write your Python code here from the scratch

Username=input()

if((len(Username))>=1 and (len(Username))<=100):
    print("Hello "+Username+"!")
else:
    print("Enter a name within 1 to 100 digits")

```

## Submission at 2024-08-09 05:35:48


```
# Write your Python code here

n=int(input())




for i in range(0,n):
    a=input()
    if(len(a)>=1 and len(a)<=100):
        
        print("Hello "+a+"!")
    else:
        print("Invalid Name")
        

# for i in range(0,n):
    # print("Hello "+list[i]+"!")
    


```

## Submission at 2024-08-09 05:38:30


```
# Write your Python code here

n=int(input())




for i in range(0,n):
    a=input()
    if(len(a)>=1 and len(a)<=100):
        
        print("Hello "+a+"!")
    else:
        print("Invalid Name")
        

# for i in range(0,n):
    # print("Hello "+list[i]+"!")
    


```

## Submission at 2024-08-16 05:06:36


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return False
    else:
        n=n/2
        is_power_of_two(n)
        return True

print(is_power_of_two(64))
        


```

## Submission at 2024-08-16 05:08:55


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return("False")
    else:
        n=n/2
        is_power_of_two(n)
        return("True")

print(is_power_of_two(64))
        


```

## Submission at 2024-08-16 05:09:19


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return("false")
    else:
        n=n/2
        is_power_of_two(n)
        return("true")

print(is_power_of_two(64))
        


```

## Submission at 2024-08-16 05:10:12


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return("false")
    else:
        n=n/2
        is_power_of_two(n)
        return("true")

print(is_power_of_two(2))
        


```

## Submission at 2024-08-16 05:35:39


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(14))
        


```

## Submission at 2024-08-16 05:36:21


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(14))
        


```

## Submission at 2024-08-16 05:36:44


```
def is_power_of_two(n:int) -> int:
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(14))
        


```

## Submission at 2024-08-16 05:43:44


```
def is_power_of_two(n):
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(128))
        


```

## Submission at 2024-08-16 05:45:34


```
def is_power_of_two(n):
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(256))
        


```

## Submission at 2024-08-16 05:50:43


```
def is_power_of_two(n):

    if(n<0||((-2**31)<=n<(2**31))):
        return("Invalid input")
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(256))
        


```

## Submission at 2024-08-16 05:52:43


```
def is_power_of_two(n):

    if(n<0):
        return("Invalid input")
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2 or n==1):
            return("true")
    

print(is_power_of_two(256))
        


```

## Submission at 2024-08-16 05:56:37


```
def is_power_of_two(n):

    if(n<0):
        return("Invalid input")
    if(n==1)
        return("true")
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2):
            return("true")
    

print(is_power_of_two(256))
        


```

## Submission at 2024-08-16 05:58:39


```
def is_power_of_two(n):

    if(n<0):
        return("Invalid input")
    if(n==1)
        return("true")
    
    if(n%2!=0):
        return("false")
    else:
        if(n>2):
            n=n/2
            return is_power_of_two(n)
        elif(n==2):
            return("true")
    

print(is_power_of_two(256))
        


```

## Submission at 2024-08-16 06:01:20


```
def is_power_of_two(n):

    if n==1 or n==2:
        return "true"
    elif(n>2):
        return "false"
    return is_power_of_two(n**(1/2))

print(is_power_of_two(256))
        


```

## Submission at 2024-08-16 06:05:07


```
def is_power_of_two(n):

    if n==1 or n==2:
        return "true"
    elif(n<2):
        return "false"
    return is_power_of_two(n**(1/2))

print(is_power_of_two(256))
        


```

## Submission at 2024-08-20 04:34:15


```
from itertools import combinations

def combine(n, k):
    return list(combinations(range(1,n+1),k))
    


print(combine(4,2))

```

## Submission at 2024-08-20 04:38:32


```
from itertools import combinations

def combine(n, k):
    return [list(combo) for combo in combinations(range(1,n+1),k)]
    


print(combine(4,2))

```

## Submission at 2024-08-20 04:43:01


```
from itertools import combinations

def combine(n, k):
    return [list(combo) for combo in combinations(range(1,n+1),k)]
    formatted_result = [str(combo).replace(', ', ',') for combo in result]
    
    output_string = '[' + ','.join(formatted_result) + ']'
    return output_string


print(combine(4,2))

```

## Submission at 2024-08-20 09:12:30


```
def generate_parentheses(n):
    
    if not (1 <= n <= 8):
        raise ValueError("Input must be between 1 and 8, inclusive.")
    
    def backtrack(s='', left=0, right=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)
    
    result = []
    backtrack()
    return result


try:
    n = 3  
    print(generate_parentheses(n))
except ValueError as e:
    print(e)

```

## Submission at 2024-08-20 09:15:00


```
def generate_parentheses(n):
    # Check if the input is within the valid range
    if not (1 <= n <= 8):
        raise ValueError("Input must be between 1 and 8, inclusive.")
    
    def backtrack(s='', left=0, right=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)
    
    result = []
    backtrack()
    return result

# Example usage:
try:
    n = 3  # Change this value to test with different inputs
    result = generate_parentheses(n)
    # Print the result with each element enclosed in double quotes
    formatted_result = '","'.join(result)
    print(f'["{formatted_result}"]')
except ValueError as e:
    print(e)

```

## Submission at 2024-08-20 09:16:35


```
nvbvjv
```

## Submission at 2024-08-20 09:21:38


```
def generate_parentheses(n):
    if not (1 <= n <= 8):
        raise ValueError("Input must be between 1 and 8, inclusive.")
    
    def backtrack(s='', left=0, right=0):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + '(', left + 1, right)
        if right < left:
            backtrack(s + ')', left, right + 1)
    
    result = []
    backtrack()
    return result


try:
    n = 3  
    result = generate_parentheses(n)
    formatted_result = '","'.join(result)
    print(f'["{formatted_result}"]')
except ValueError as e:
    print(e)

```

## Submission at 2024-08-30 05:00:23


```
#include<stdio.h>

int pow(int x,int n){
    int product=1;
    for(int i=0;i<n;i++){
        
    }
    
       
    
    return product;
}

int main(){
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
}
```

## Submission at 2024-08-30 05:14:21


```
#include<stdio.h>

int product=1;

int pow(int x,int n){
    
    if(n==0)
        return 1;
    
    else if(n>0){

        product=product*x;
        return pow(x,n-1);

    
    
    }
    
    
       
    
    return product;
}

int main(){
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
}

```

## Submission at 2024-08-30 05:15:14


```
#include<stdio.h>

int product=1;

int pow(int x,int n){
    
    if(n==0)
        return 1;
    
    else if(n>0){

        product=product*x;
        return pow(x,n-1);

    
    
    }
    
    
       
    
    return product;
}

int main(){
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
}

```

## Submission at 2024-08-30 05:24:35


```
#include<stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int arr1[n];
    int arr2[n];
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d ", &arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d ", &arr2[i]);
    }
    for(int i=0;i<n;i++){
        if(arr1[i]>arr2[i])
            c[i]=arr1[i];
        else
            c[i]=arr2[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ", c[i]);
    }



    return 0;
}

```

## Submission at 2024-08-30 05:38:11


```
#include<stdio.h>

int pow(int x,int n){
    int product=1;
    
    // if(n==0)
    //     return 1;
    if(n>0){
        product=product*x;
        return pow(x,n-1);
        
    }
        

    
    
       
    
    return product;
}

int main(){
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
}

```

## Submission at 2024-08-30 06:00:32


```
#include<stdio.h>


int product=1;
int pow(int x,int n){
    
    if(n==0)
        return 1;
    
    else if(n>0){

        product=product*x*1;
        return pow(x,n-1);
        
            
    }
    return product;
}

int main(){
    int product;
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
    return 0;
}
    
```

## Submission at 2024-08-30 06:08:54


```
#include<stdio.h>



int pow(int x,int n){
    int product=1;
    int floor=x;
    if(n==0)
        return product;
    else if(n>0){

    for(int i=0;i<n;i++){
        product = product * x;

    }
    
    }
    else if(n<0){
        for(int i=0;i<n;i++){
            floor=floor/n;
        }
        
    }
    if(n==0||n>0)
        return product;
    else 
        return floor;

    }

int main(){
    
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
    return 0;
}
    
```

## Submission at 2024-08-30 06:15:30


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

```

## Submission at 2024-08-30 06:16:23


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:23


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:24


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:24


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:25


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:26


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:53


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:56


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:16:57


```
s1=input();

def palin(s1):
    
    for i in range(1,16,1){
        if(s1[i]==s1[s1.lenght-i]):
            flag=True;
        else:
             flag=False;
            
        
    }
    if(flag=True)
        print("YES")
    if(flag=False)
        print("NO")

palin(s1)
```

## Submission at 2024-08-30 06:27:24


```
s1=input();

def palin(s1):
    
    for i in range(0,(len(s1)-1)/2,1):
        
        if(s1[i]==s1[len(s1)-i]):
            flags="true";
        else:
             flags="false";
             
            
        
    
    if(flags=="true")
        print("YES")
    if(flags=="false")
        print("NO")



palin(s1)
```

## Submission at 2024-08-30 09:58:59


```
#include<stdio.h>

int pow(int x,int n){
    static int product=1;
    if(n==0){
        return 1;
    }
    else{
        return x*pow(x,n-1);
    }
    
    
}

int main(){
    int x,n;
    scanf("%d ", &x);
    scanf("%d", &n);
    printf("%d", pow(x,n));
    return 0;
}
```

## Submission at 2024-09-09 11:33:44


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    /if(x==0||x==1)
        return 1;
    else{
        return fibonacci(x-1)+fibonacci(n-2)
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-09 11:34:14


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0||x==1)
        return 1;
    else{
        return fibonacci(x-1)+fibonacci(n-2);
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-09 11:35:18


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0)
        return 0;
    elif(x==1)
        return 1;
    else{
        return fibonacci(x-1)+fibonacci(n-2);
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-09 11:37:26


```
#include <iostream>

using namespace std;

int fibonacci(int x) {

    if(x==0){
        return 0;}
    elif(x==1){
        return 1;}
    else{
        return fibonacci(x-1)+fibonacci(x-2);
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-09 11:40:36


```
#include <iostream>
#include<stdio.h>

using namespace std;

int fibonacci(int x) {

    if(x==0){
        return 0;
        }
    else if(x==1){
        return 1;}
    else{
        return fibonacci(x-1)+fibonacci(x-2);
}
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-09-09 11:56:15


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n==1)
        return true;
    else if(n%2!=0)
        return false;
    else
        return isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-09-11 10:20:37


```
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    bool flag;
    scanf("%d ",&n);
    scanf("%d",&m);
    int *arr1 = (int*)malloc(n * sizeof(int)); 
    int *arr2 = (int*)malloc(m * sizeof(int)); 
    for(int i=0;i<n;i++){
        scanf("%d ",arr1[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d ",arr2[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                flag=true;
                break;}
            else{
                flag=false;
                break;
            }
            }
        }
    
    
    
    return 0;
}
```

## Submission at 2024-09-11 10:22:13


```
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,m;
    bool flag;
    scanf("%d ",&n);
    scanf("%d\n",&m);
    int *arr1 = (int*)malloc(n * sizeof(int)); 
    int *arr2 = (int*)malloc(m * sizeof(int)); 
    for(int i=0;i<n;i++){
        scanf("%d ",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        scanf("%d ",arr2[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                flag=true;
                break;}
            else{
                flag=false;
                break;
            }
            }
        }
    
    
    printf("%d",flag);
    return 0;
}
```

## Submission at 2024-09-11 11:06:25


```
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    arr[0]=1;
    int c=2;
    for(int i=1;i<n;i++){
        arr[i]=c;
        c++;
    }
    int count=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%3==0||arr[i]%5==0||arr[i]%7==0)
            count=count + arr[i];
    }
    printf("%d", count);
    return 0;
}
```

## Submission at 2024-10-04 05:19:58


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> line;
    
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        cout<<" ";
        line.push(m);
        

    }
    int seconds=0;
    
    int ki=line[k];
    if(line.empty()!=true){
        if(line.front()>1){
            if(ki==1){
                seconds++;
                cout<<seconds
                break;
            }
        int a=line.front();
        a=a-1;
        seconds++;
        
        line.push(a);

        }

        if(ki==0){
            cout<<seconds;
            break;
        }
    }

    return 0;
}
```

## Submission at 2024-10-04 05:34:54


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int days;
    cin>>days;
    cout<<endl;
    vector<int> temps;
    for(int i=0;i<days;i++){
        int m;
        cin>>m;
        temps.push_back(m);
        cout<<" ";
        
    }
    vector<int> days;
    for(int i=0;i<temps.size();i++){
        int tem=temps[i];
        for(int j=i+1;j<temps.size();j++){
            bool flag;
            if(temps[j]>temps[i]){
                int m=j-i;
                flag=true;
                cout<<m<<" ";
                days.push_back(m);
                
            }
            if(flag!=true&&j==temps.size()-1){
                cout<<0<<" ";
                    days.push_back(0);
                }
            
        }
    }
    
    return 0;
}
```

## Submission at 2024-10-04 05:36:40


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int days;
    cin>>days;
    cout<<endl;
    vector<int> temps;
    for(int i=0;i<days;i++){
        int m;
        cin>>m;
        temps.push_back(m);
        cout<<" ";
        
    }
    vector<int> days_taken;
    for(int i=0;i<temps.size();i++){
        int tem=temps[i];
        for(int j=i+1;j<temps.size();j++){
            bool flag;
            if(temps[j]>temps[i]){
                int m=j-i;
                flag=true;
                cout<<m<<" ";
                days_taken.push_back(m);
                
            }
            if(flag!=true&&j==temps.size()-1){
                cout<<0<<" ";
                    days_taken.push_back(0);
                }
            
        }
    }
    
    return 0;
}
```

## Submission at 2024-10-04 05:41:37


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int days;
    cin>>days;
    cout<<endl;
    vector<int> temps;
    for(int i=0;i<days;i++){
        int m;
        cin>>m;
        temps.push_back(m);
        cout<<" ";
        
    }
    vector<int> days_taken;
    for(int i=0;i<temps.size();i++){
        int tem=temps[i];
        if(i==temps.size()-1){
            cout<<0<<" ";
            break;
        }
        for(int j=i+1;j<temps.size();j++){
            bool flag;
            if(temps[j]>temps[i]){
                int m=j-i;
                flag=true;
                cout<<m<<" ";
                break;
                days_taken.push_back(m);
                
            }
            if(flag!=true&&j==temps.size()-1){
                cout<<0<<" ";
                break;
                    days_taken.push_back(0);
                }
            
        }
    }
    
    return 0;
}
```

## Submission at 2024-10-04 05:45:33


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int days;
    cin>>days;
    
    vector<int> temps;
    for(int i=0;i<days;i++){
        int m;
        cin>>m;
        
        temps.push_back(m);
        
        
    }
    vector<int> days_taken;
    for(int i=0;i<temps.size();i++){
        int tem=temps[i];
        if(i==temps.size()-1){
            cout<<0<<" ";
            break;
        }
        for(int j=i+1;j<temps.size();j++){
            bool flag;
            if(temps[j]>temps[i]){
                int m=j-i;
                flag=true;
                cout<<m<<" ";
                break;
                days_taken.push_back(m);
                
            }
            if(flag!=true&&j==temps.size()-1){
                cout<<0<<" ";
                break;
                    days_taken.push_back(0);
                }
            
        }
    }
    
    return 0;
}
```

## Submission at 2024-10-04 06:01:48


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int count=1;
    bool flag;
    if(s.length()==t.length()){
        for(int i=0;i<s.length();i++){
            flag=false;
            for(int j=0;j<t.length();j++){
                if((char)s[i]==(char)j[t]){
                    flag=false;
                    count++;
                    break;
                }
                if((char)s[i]!=(char)j[t]&&j=t.length()-1){
                    cout<<"false";
                    break;
                }
            }
        }
        if(flag==false){
            cout<<"true";
        }
        else{
            cout<<"false";
        }

    }
    else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 06:13:59


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int painters;
    cin>>painters;
    vector<int> boards;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        boards.push_back(m);
    }

    int time=*accumulate(boards.begin(),boards.end());
    high=*accumulate(boards.begin(),boards.end());
    low=0;
    int mid;
    while(low<=high){
        mid=low + (high-low)/2;

        int time_cal;
        for(int i=0;i<boards.size();i++){
            
        }
    }
    return 0
}
```

## Submission at 2024-10-04 06:29:53


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    queue<int> line;
    
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        
        line.push(m);
        

    }
    int seconds=0;
    
    int ki=line[k];
    if(line.empty()!=true){
        if(line.front()>1){
            if(ki==1){
                seconds++;
                cout<<seconds;
                
            }
        int a=line.front();
        a=a-1;
        seconds++;
        
        line.push(a);

        }

        if(ki==0){
            cout<<seconds;
            break;
        }
    }

    return 0;
}
```

## Submission at 2024-10-04 10:57:27


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x==0||x==1){
        return x;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }

}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:08:48


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0||n==1||n%2!=0){
        return false;
    }
    if(n==2){
        return true;
    }
    else{
        n=n/2;
        return isPowerOfTwo(n);
    }

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:13:42


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0||n%2!=0){
        return false;
    }
    if(n==2||n==1){
        return true;
    }
    else{
        n=n/2;
        return isPowerOfTwo(n);
    }

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:14:22


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<0||n%2!=0){
        return false;
    }
    if(n==2||n==1){
        return true;
    }
    else{
        n=n/2;
        return isPowerOfTwo(n);
    }

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:18:42


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    if(n==2||n==1){
        return true;
    }
    if(n%2!=0){
        n=n/2;
        return isPowerOfTwo(n);
    }
    else{
        n=n/2;
        return isPowerOfTwo(n);
    }

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:20:07


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    if(n==2||n==1){
        return true;
    }
    if(n%2!=0){
        n=n/2;
        return isPowerOfTwo(n);
    }
    

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:21:11


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    if(n==2||n==1){
        return true;
    }
    if(n%2!=0){
        return false;
    }
    else{
        n=n/2;
        return isPowerOfTwo(n);
    }

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:23:07


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0){
        return false;
    }
    if(n==2||n==1){
        return true;
    }
    if(n%2!=0){
        return false;
    }
    else{
        n=n/2;
        return isPowerOfTwo(n);
    }

}

int main() {
    int n;
    cin >> n;

    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-10-04 11:28:32


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<arr1.size();i++){
        
        for(int)
    }
    return 0;
}
```

## Submission at 2024-10-04 11:48:53


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr1;
    vector<int> arr2;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr1.push_back(m);
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>m;
        arr2.push_back(k);
    }
    
    
    bool flag;
    for(int i=0;i<arr1.size();i++){
        flag=false;
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                flag=true;
                break;
            }
            
        }
        if(flag==false){
            break;
            cout<<"false";
        }
    }
    if(flag==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-04 11:49:58


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr1;
    vector<int> arr2;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        arr1.push_back(m);
    }
    for(int i=0;i<m;i++){
        int k;
        cin>>m;
        arr2.push_back(k);
    }
    
    
    bool flag;
    for(int i=0;i<arr1.size();i++){
        flag=false;
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                flag=true;
                break;
            }
            
        }
        if(flag==false){
            break;
            cout<<"false";
        }
    }
    if(flag==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
```

## Submission at 2024-10-16 07:59:00


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> temps;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        temps.push_back(m);
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n-1)){
                cout<<0<<" ";
                break;
            }
            else if(temps[j]>temps[i]){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
```

## Submission at 2024-10-16 08:00:21


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> temps;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        temps.push_back(m);
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<=n;j++){
            if(i==(n-1)){
                cout<<0<<" ";
                break;
            }
            else if(temps[j]>temps[i]){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
```

## Submission at 2024-10-16 08:04:06


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> temps;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        temps.push_back(m);
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n-1)){
                cout<<0<<" ";
                break;
            }
            else if(j==n){
                cout<<0<<" ";
            }
            else if(temps[j]>temps[i]){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}
```

## Submission at 2024-10-16 08:10:53


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> temps;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        temps.push_back(m);
    }

    for(int i=0;i<n;i++){
        if(i==(n-1)){
            cout<<0<<" ";
            break;
        }
        for(int j=i+1;j<=n;j++){
            if(j==n){
                cout<<0<<" ";
            }
            else if(temps[j]>temps[i]){
                cout<<j-i<<" ";
                break;
            }
        }
    }
    return 0;
}
```

## Submission at 2024-10-16 08:25:39


```
#include<bits/stdc++.h>

using namespace std;

int daywait()

int main(){
    int days;
    cin>>days;
    int no;
    cin>>no;
    int k'
    cin>>k;
    int n,;
    cin>>n;
    vector<int> daybloom;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        daybloom.push_back(m);
    }
    




    return 0;
}
```

## Submission at 2024-10-25 05:25:42


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  if(root==NULL){
    return {};
  }
}

```

## Submission at 2024-10-25 05:26:17


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  if(root=='N'){
    return {};
  }
}

```

## Submission at 2024-10-25 05:32:46


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root){
vector<int> answer={};
{
  if(root=="N"){
    
    return answer;
  }
  
}
return answer;
}
```

## Submission at 2024-10-25 05:34:16


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root){
vector<int> answer={};
{
  if(root->data=='N'){
    
    return answer;
  }
  
}
return answer;
}
```

## Submission at 2024-10-25 05:40:12


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;
    bool check(ransomnote,magazine){
        bool ans;
        if(ransomnote.size()>magazine.size()){
            ans=false;
        }
        return ans;
    }
    return 0;
}
```

## Submission at 2024-10-25 05:43:18


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;
    


    cout<<"false";
    return 0;
}
```

## Submission at 2024-10-25 05:50:38


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;
    
    if(ransomnote.size()>magazine.size()){
        cout>>"false";
    }


    
    return 0;
}
```

## Submission at 2024-10-25 05:52:32


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;
    
    if(ransomnote.length()>magazine.length()){
        cout<<"false";
    }


    
    return 0;
}
```

## Submission at 2024-10-25 05:57:32


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;
    
    if(ransomnote.length()>magazine.length()){
        cout<<"false";
    }

    for(int i=0;i<ransomnote.length();i++){

        bool flag=false;
        char a=ransomnote[i];

        for(int j=0;j<magazine.length();j++){
            
            if(magazine[j]==a){
                break;
            }
            else{
                flag=true;
            }
        }


    }

    
    return 0;
}

```

## Submission at 2024-10-25 06:03:29


```
#include<bits/stdc++.h>

using namespace std;

int main(){
vector<string> words;

    string pattern;
    cin>>pattern;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        
    }
    
    

    if




    
    return 0;
}

```

## Submission at 2024-10-25 06:17:34


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag;
	    if(root->left==root->right){
            flag==true;
        }
        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:19:50


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag;

        if(root==NULL{
            flag=false;
            return flag;
        }

	    if(root->left==root->right){
            flag==true;
        }
        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:23:14


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag;
	    if(root->left!=root->right){
            flag==false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:23:48


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag;
	    if(root->left!=root->right){
            flag=false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:24:49


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag=true;
	    if(root->left!=root->right){
            flag=false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:26:35


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag=true;
        
        if(root==NULL){
            flag = false;
            return flag;
        }

	    if(root->left!=root->right){
            flag=false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:27:12


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag=true;
        
        if(root==NULL){
            flag = true;
            return flag;
        }

	    if(root->left!=root->right){
            flag=false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:28:56


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag=true;
        
        if(root->right==NULL&&root.left==NULL){
            flag = true;
            return flag;
        }

	    if(root->left!=root->right){
            flag=false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:29:41


```
/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool flag=true;
        
        

	    if(root->left!=root->right){
            flag=false;
            return flag;
        }
        else{
            isSymmetric(root->left);
            isSymmetric(root->right);
        }

        return flag;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {

   
    int t = 1;
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);

        vector<int> ans;
        Solution ob;
        if(ob.isSymmetric(root)){
            cout<<"true"<<endl;
        }
        else{ 
            cout<<"false"<<endl;
        }
}
    return 0;
}
```

## Submission at 2024-10-25 06:47:40


```
#include<bits.stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;

    unordered_map<string> mp;

    for(int i=0;i<magazine.length();i++){
        mp[magazine[i]]++;
    }

    for(int i=0;i<ransomnote.length();i++){
        if(mp.find(ransomnote[i])!=mp.end()){
            mp[ransomnote[i]]--;
        }
        else{
            cout>>"false";
        }
    }
    cout>>"true";

    i
    return 0;
}
```

## Submission at 2024-10-25 06:48:05


```
#include<bits.stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;

    unordered_map<string> mp;

    for(int i=0;i<magazine.length();i++){
        mp[magazine[i]]++;
    }

    for(int i=0;i<ransomnote.length();i++){
        if(mp.find(ransomnote[i])!=mp.end()){
            mp[ransomnote[i]]--;
        }
        else{
            cout>>"false";
        }
    }
    cout>>"true";

    i
    return 0;
}
```

## Submission at 2024-10-25 06:49:18


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    string ransomnote;
    cin>>ransomnote;
    string magazine;
    cin>>magazine;

    unordered_map<string> mp;

    for(int i=0;i<magazine.length();i++){
        mp[magazine[i]]++;
    }

    for(int i=0;i<ransomnote.length();i++){
        if(mp.find(ransomnote[i])!=mp.end()){
            mp[ransomnote[i]]--;
        }
        else{
            cout>>"false";
        }
    }
    cout>>"true";

    
    return 0;
}
```

## Submission at 2024-11-12 06:49:15


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

Node* deleteNode(Node *head,int x)
{
    Node* temp=head;

    if(temp->data==x)
        return temp->next;
    
    temp=temp->next;
    Node* prev=head;

    while(temp!=NULL){
        if(temp->data==x){
            prev->next=temp->next;
            return head;
        }
        else{
            temp=temp->next;
            prev=prev->next;
        }
    }
    return head;
}

```

## Submission at 2024-11-22 05:15:03


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        ar.push_back(m);



    }

    unordered_map<int,int> mp;

    for(int i=0;i<ar.size();i++){
        if(mp.find(ar[i])!=mp.end()){
            mp[nums[i]]++;
        }
        else{
            mp[nums[i]]=1;
        }
    }
    int count=0;
    for(auto x:mp){
        if(x.second==2){
            count++;
        }
    }
    cout<<count;






    return 0;
}
```

## Submission at 2024-11-22 05:16:55


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        ar.push_back(m);



    }

    unordered_map<int,int> mp;

    for(int i=0;i<ar.size();i++){
        if(mp.find(ar[i])!=mp.end()){
            mp[ar[i]]++;
        }
        else{
            mp[ar[i]]=1;
        }
    }
    int count=0;
    for(auto x:mp){
        if(x.second==2){
            count++;
        }
    }
    cout<<count;






    return 0;
}
```

## Submission at 2024-11-22 05:26:33


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        ar.push_back(m);
    }

    unordered_map <int,int> mp;

    for(int i=0;i<ar.size();i++){
        if(mp.find(ar[i])!=mp.end()){
            mp[ar[i]]++;
        }
        else{
            mp[ar[i]]=1;
        }
    }

    vector<int> freq;
    for(auto x:mp){
        freq.push_back(x.second);
    }
    int a=*min_element(freq.begin(),freq.end());

    for(auto x:mp){
        if(x.second==a);
        cout<<x.first;
        break;
    }
    return 0;
}
```

## Submission at 2024-11-22 05:28:56


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        ar.push_back(m);
    }

    unordered_map <int,int> mp;

    for(int i=0;i<ar.size();i++){
        if(mp.find(ar[i])!=mp.end()){
            mp[ar[i]]++;
        }
        else{
            mp[ar[i]]=1;
        }
    }

    vector<int> freq;
    for(auto x:mp){
        freq.push_back(x.second);
    }
    int a=*min_element(freq.begin(),freq.end());

    for(auto x:mp){
        if(x.second==a){
        cout<<x.first;
        break;
        }
    }
    return 0;
}
```

## Submission at 2024-11-22 05:39:22


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<b-a;
    return 0;
}
```

## Submission at 2024-11-22 05:44:09


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        ar.push_back(m);
    }

    int sum=0;
    for(int i=0;i<ar.size();i++){
        sum+=ar[i];
    }
    cout<<sum;
    return 0;
}
```

## Submission at 2024-11-22 06:14:16


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
vector<int> ar;
vector<int> inorder(Node* a){

    if(a==nullptr){
        return {};
    }
    inorder(a->left);
    ar.push_back(a->val);
    inorder(a->right);

    return ar;
}

bool isBST(struct Node* root)
{
    vector<int> inordert=inorder(root);
    bool flag=true;
    for(int i=0;i<inordert.size();i++){
        if(ar[i+1]<ar[i]){
            flag= false;
            return flag;
            break;
        }
    }
    return flag;

}


```

## Submission at 2024-11-22 06:17:17


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
vector<int> ar;
vector<int> inorder(Node* a){

    if(a==nullptr){
        return {};
    }
    inorder(a->left);
    ar.push_back(a->val);
    inorder(a->right);

    return ar;
}

bool isBST(struct Node* root)
{
    vector<int> inordert=inorder(root);
    bool flag=true;
    for(int i=0;i<inordert.size();i++){
        if(inordert[i+1]<inordert[i]){
            flag= false;
            return flag;
            break;
        }
    }
    return flag;

}
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>0;i--){
//         for(int j=n-1;j>0;j=j-1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


```

## Submission at 2024-11-22 06:18:46


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
vector<int> ar;
vector<int> inorder(Node* a){

    if(a==nullptr){
        return {};
    }
    inorder(a->left);
    ar.push_back(a->val);
    inorder(a->right);

    return ar;
}

bool isBST(struct Node* root)
{
    vector<int> inordert=inorder(root);
    bool flag=true;
    for(int i=0;i<inordert.size()-1;i++){
        if(inordert[i+1]<inordert[i]){
            flag= false;
            return flag;
            break;
        }
    }
    return flag;

}
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>0;i--){
//         for(int j=n-1;j>0;j=j-1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


```

## Submission at 2024-11-22 06:20:58


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
vector<int> ar;
vector<int> inorder(struct Node* a){

    if(a==nullptr){
        return {};
    }
    inorder(a->left);
    ar.push_back(a->val);
    inorder(a->right);

    return ar;
}

bool isBST(struct Node* root)
{
    vector<int> inordert=inorder(root);
    bool flag=true;
    for(int i=0;i<inordert.size()-1;i++){
        if(inordert[i+1]<inordert[i]){
            flag= false;
            return flag;
            break;
        }
    }
    return flag;

}
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>0;i--){
//         for(int j=n-1;j>0;j=j-1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


```

## Submission at 2024-11-22 06:26:12


```


/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return true/false denoting whether the tree is Symmetric or not
vector<int> ar;
vector<int> inorder(struct Node* a){

    if(a==nullptr){
        return {};
    }
    inorder(a->left);
    ar.push_back(a->data);
    inorder(a->right);

    return ar;
}

bool isBST(struct Node* root)
{
    vector<int> inordert=inorder(root);
    bool flag=true;
    for(int i=0;i<inordert.size()-1;i++){
        if(inordert[i+1]<inordert[i]){
            flag= false;
            return flag;
            break;
        }
    }
    return flag;

}
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<=i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=n-1;i>0;i--){
//         for(int j=n-1;j>0;j=j-1){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


```

## Submission at 2024-11-22 06:36:24


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,d;
    cin>>m>>n>>d;
    vector<int> ma;
    vector<int> na;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        ma.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        na.push_back(a);
    }
    int count =0;
    for(int i=0;i<ma.size();i++){
        for(int j=0;j<na.size();j++){
            if(abs(ma[i]-na[j])<=d){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
```

## Submission at 2024-11-22 06:41:11


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,d;
    cin>>m>>n>>d;
    vector<int> ma;
    vector<int> na;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        ma.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        na.push_back(a);
    }
    int count =0;
    for(int i=0;i<ma.size();i++){
        bool flag=true;
        for(int j=0;j<na.size();j++){
            if(abs(ma[i]-na[j])<=d){
                flag=false;
                break;
            }
            if(flag==true&&j=na.size()-1){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
```

## Submission at 2024-11-22 06:43:24


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,d;
    cin>>m>>n>>d;
    vector<int> ma;
    vector<int> na;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        ma.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        na.push_back(a);
    }
    int count =0;
    for(int i=0;i<ma.size();i++){
        bool flag=true;
        for(int j=0;j<na.size();j++){
            if(abs(ma[i]-na[j])<=d){
                flag=false;
                break;
            }
            if(flag==true&&j=na.size()-1){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
```

## Submission at 2024-11-22 06:44:45


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,d;
    cin>>m>>n>>d;
    vector<int> ma;
    vector<int> na;

    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        ma.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        na.push_back(a);
    }
    int count =0;
    for(int i=0;i<ma.size();i++){
        bool flag=true;
        for(int j=0;j<na.size();j++){
            if(abs(ma[i]-na[j])<=d){
                flag=false;
                break;
            }
            if(flag==true&&j==na.size()-1){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
```

## Submission at 2024-11-22 06:47:14


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=n-1;j>0;j=j-1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:52:03


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=i-1;j>0;j=j-1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:56:03


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j=j-1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 07:00:12


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

Node* removeDuplicates(Node *head)
{
    if(head==nullptr){
        return head;
    }
}

```

## Submission at 2024-11-22 07:04:15


```
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==0){
        
    }
    else{for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=i;j>0;j=j-1){
            cout<<"*";
        }
        cout<<endl;
    }
    }
    return 0;
}
```

## Submission at 2024-11-22 07:07:30


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

Node* removeDuplicates(Node *head)
{
    if(head==nullptr){
        return head;
    }
    else{
        return head;
    }
}
```

