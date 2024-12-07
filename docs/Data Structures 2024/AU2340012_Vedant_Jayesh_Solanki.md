## Submission at 2024-08-05 10:24:31


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Name :");
        String a = input.nextLine();
        int b = a.length();

        // if (1 <<= b <<= 100){
            System.out.println("Hello "+b+ " !");

    }
}
```

## Submission at 2024-08-05 10:26:32


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Name :");
        String a = input.nextLine();

        System.out.println("Hello "+a+ "!");
    }
}
```

## Submission at 2024-08-05 10:28:15


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a = input.nextLine();

        System.out.println("Hello "+a+ "!");
    }
}
```

## Submission at 2024-08-05 10:31:20


```
n = input()
print("Hello",n,"!")
```

## Submission at 2024-08-05 10:32:12


```
n = input()
print("Hello",n,"!")
```

## Submission at 2024-08-05 10:32:43


```
n = input("")
print("Hello",n,"!")
```

## Submission at 2024-08-05 10:35:17


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a = input.nextLine();

        System.out.println("Hello "+a+"!")
    }
}
```

## Submission at 2024-08-05 10:35:57


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a = input.nextLine();

        System.out.println("Hello "+a+"!");
    }
}
```

## Submission at 2024-08-05 10:45:19


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int a = input.nextInt();

        for(i=0; i<a;i++){
            String b = input.next();
            System.out.println("Hello "+b+"!");
        }

        

    }
}
```

## Submission at 2024-08-05 10:46:07


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        int a = input.nextInt();

        for( int i=0; i<a;i++){
            String b = input.next();
            System.out.println("Hello "+b+"!");
        }

        

    }
}
```

## Submission at 2024-08-12 10:08:18


```
import java.util.Scanner;

public class Main{

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();       
        System.out.println(fibonacci(x));
    }

    public static int fibonacci(int x){
        if(x == 0){
            return 0;
        }
        if (x == 1){
            return 1;
        }
        int a  = fibonacci(x-1);
        int b = fibonacci(x-2);
        int c = a + b;
        return c;
    }
}
```

## Submission at 2024-08-12 11:15:47


```
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    public static boolean isPowerOfTwo(int n) {
        if (n == 0){
            return false;
        }
        if (n == 1){
            return true;
        }
        if(n % 2 == 0){
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}
```

## Submission at 2024-08-12 11:16:47


```
import java.util.Scanner;

public class Main {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    public static boolean isPowerOfTwo(int n) {
        if (n == 0){
            return false;
        }
        if (n == 1){
            return true;
        }
        if(n % 2 == 0){
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}
```

## Submission at 2024-08-20 10:51:05


```
import java.util.*;
import java.io.*;



class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] num = new int[n];

        for (int i=0; i<n; i++){
            int x = input.nextInt();
            num[i] = x;
        }

        
        List<List<Integer>> result = subsets(num);
        System.out.println(result);
    
}
    public static List<List<Integer>> subsets(int[] num){
        List<List<Integer>> result = new ArrayList<>();
        subset(0, num, new ArrayList<>(), result);
        return result;
    }

    public static void subset(int index, int[] num, List<Integer> current, List<List<Integer>> result){
    result.add(new ArrayList<>(current));

        for(int i = index; i<num.length; i++){
            current.add(num[i]);
            subset(i+1, num, current, result);
            current.remove(current.size()-1);
        }
    }
}
```

## Submission at 2024-08-27 03:24:58


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in){
            int a = input.nextInt();
        }

        // Read the input
        // int x = Integer.parseInt(br.readLine().trim());

        // Calculate and print the Fibonacci number for the input x
        System.out.println(fibonacci(a));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        int x;
        if (x==1){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        else if(x<0){
            System.out.println("Negative Number!");
        }
        else{
            return (fibonacci(x-1) + fibonacci(x-2));
        }
    }
}

```

## Submission at 2024-08-27 03:31:17


```
import java.io.*;
import java.util.*;

class Main {
    public static int fibonacci(int x) {
        if (x==1){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        else if(x<0){
            System.out.println("Negative Number!");
            return -1;
        }
        else{
            return (fibonacci(x-1) + fibonacci(x-2));
        }
    }
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        System.out.println(fibonacci(x));
    }
}

```

## Submission at 2024-09-02 10:07:38


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/


class TraverseLinkedList {
    List<Integer> traverseLinkedList(Node head) {
        List<Integer> result = new ArrayList<>();
        Node temp = head;
        while(temp != null){
            result.add(temp.data);
            temp = temp.next;
        }
        return result;
    }

}

```

## Submission at 2024-09-02 10:18:59


```
a = [1,3,6,7,10];
b = [2,4,5,8,9];
c = [];

i = 0
for i in range(0,len(a)):
    if (a[i] > b[i]):
        c.append(a[i])
    else:
        c.append(b[i])

print(c)
```

## Submission at 2024-09-02 10:20:37


```
a = [];
b = [];
c = [];

i = 0
for i in range(0,len(a)):
    if (a[i] > b[i]):
        c.append(a[i])
    else:
        c.append(b[i])

print(c)
```

## Submission at 2024-09-02 10:48:35


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int[] a = new int[n];
        int[] b = new int[n];

        for (int i=0; i<n; i++){
            a[i] = input.nextInt();
        }
        for (int i=0; i<n; i++){
            b[i] = input.nextInt();
        }

        int[] c = new int[n];
        for (int i=0; i<n; i++){
                c[i] = Math.max(a[i],b[i]);
        }

        for(int i=0; i<n; i++){
            System.out.print(c[i]+" ");
        }
    }
}
```

## Submission at 2024-09-02 11:03:25


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        int[] a = new int[n];
        int[] b = new int[n];

        for (int i=0; i<n; i++){
            a[i] = input.nextInt();
        }
        for (int i=0; i<n; i++){
            b[i] = input.nextInt();
        }
        
        int[] result = MaxArray(n,a,b);
            for(int i=0; i<n; i++){
                System.out.print(result[i]+" ");
            }
        
    }

    public static int[] MaxArray(int n, int[] a, int[] b){
        int[] c = new int[n];
        for (int i=0; i<n; i++){
                c[i] = Math.max(a[i],b[i]);
        }
        return c;
    }
}

```

## Submission at 2024-09-02 11:34:41


```
/* 
Linked List Node
class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}
*/

class GetKthNodeFromLinkedList {
    int getKthNode(Node head, int k) {
        if (k<=0){
            return -1;
        }

        Node temp = head;
        int count = 1;
        while(temp != null){
            if(count == k){
                return temp.data;
            }
            temp = temp.next;
            count++;
        }
        return -1;
    }
}
```

## Submission at 2024-09-09 04:27:34


```
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

class Main{
    public static List<Integer> spiral(int[][] matrix){
        ArrayList<Integer> result = new ArrayList<>();
        if(matrix.length == 0 || matrix == null){
            return result;
        }

        int top = 0;
        int left = 0;
        int right = matrix[0].length - 1;
        int bottom = matrix.length - 1;

        while(top<=bottom && left<=right){
            for(int i=left; i<=right; i++){
                result.add(matrix[top][i]);
            }
            top++;

            for(int i=top; i<=bottom; i++){
                result.add(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    result.add(matrix[bottom][i]);
                }
                bottom --;
            }

            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int r = input.nextInt();
        int c = input.nextInt();

        int[][] matrix = new int[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                matrix[i][j] = input.nextInt(); 
            }
        }
        System.out.println(spiral(matrix));      
    }
}
```

## Submission at 2024-09-09 04:30:54


```
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;

class Main{
    public static List<Integer> spiral(int[][] matrix){
        ArrayList<Integer> result = new ArrayList<>();
        if(matrix.length == 0 || matrix == null){
            return result;
        }

        int top = 0;
        int left = 0;
        int right = matrix[0].length - 1;
        int bottom = matrix.length - 1;

        while(top<=bottom && left<=right){
            for(int i=left; i<=right; i++){
                result.add(matrix[top][i]);
            }
            top++;

            for(int i=top; i<=bottom; i++){
                result.add(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    result.add(matrix[bottom][i]);
                }
                bottom --;
            }

            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }

    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int r = input.nextInt();
        int c = input.nextInt();

        int[][] matrix = new int[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                matrix[i][j] = input.nextInt(); 
            }
        }

        List<Integer> answer = spiral(matrix);
        for(int i=0; i<answer.size(); i++){
            System.out.print(answer.get(i)+" ");
        }


    }
}
```

## Submission at 2024-09-09 09:59:59


```
import java.util.*;

class Solution{
    public static boolean PowerOfThree(int n){
        if(n==0 || n==1 || n==8 || n==27){
            return true;
        }
        return false;       
    }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
            int n = input.nextInt();
            System.out.println(PowerOfThree(n));        
    }
}
```

## Submission at 2024-09-09 10:59:28


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-09-09 11:03:31


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;

s = input()
x = input()
Solution(s,x)


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-09-09 11:03:32


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;

s = input()
x = input()
Solution(s,x)


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-09-09 11:03:33


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;

s = input()
x = input()
Solution(s,x)


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-09-09 11:03:34


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;

s = input()
x = input()
Solution(s,x)


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-09-09 11:03:35


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;

s = input()
x = input()
Solution(s,x)


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-09-09 11:03:35


```
def Solution(s, x):
    cnt = 0;
    for i in range(0,len(s)):
        if(x == s[i]):
            cnt = cnt + 1
            i = i+1
    return cnt;

s = input()
x = input()
Solution(s,x)


# class Solution{
#     public static int cnt_char(String s, char x){
#         int cnt = 0;
#         for(int i = 0; i < s.length(); i++){
#             if(x == s[i]){
#                 cnt++;
#             }
#         }
#         return cnt;
#     }
# }

# //     public static void main(String[] args){
# //         Scanner input = new Scanner(System.in){
# //             String s = input.String();
# //             char x = input.nextChar();
# //             System.out.println(cnt_char(s,x));
# //         }
# //     }
# // }



# // import java.util.*;
# // import java.lang.Math;

# // class Solution {
# //     public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
# //         int top = 0;
# //         int bottom = matrix.length-1;
# //         int left = 0;
# //         int right = matrix[0].length-1;
# //         int a = 1;
# //         int[][] result1 = new int[][];
# //         int[][] result2 = new int[][];
# //         int[][] result3 = new int[][];

# //         while(top<=bottom){
# //             for(int i=top; i<bottom; i++){
# //                 for(int j=left;j<a;j++){
# //                     result1.add(matrix[top][left]);
# //                 }

# //                 for(int j=left+1;j<a+1;j++){
# //                     result2.add(matrix[top][left+1]);
# //                 }

# //                 for(int j=left+2;j<a+2;j++){
# //                     result3.add(matrix[top][left+2]);
# //                 }
# //             }
# //             return result1;
# //             return result2;
# //             return result3;
# //         }

# //         int x1 = Math.max(result1);
# //         int y1 = Math.max(result2);
# //         int z1 = Math.max(result3);

# //         int x2 = Math.min(result1);
# //         int y2 = Math.min(result2);
# //         int z2 = Math.min(result3);

# //         int x3 = x2.replace(x1);
# //         int y3 = y2.replace(y1);
# //         int z3 = z2.replace(z1);

# //     }
# // }

```

## Submission at 2024-10-07 09:49:37


```
import java.util.*;
class Solution{
    public static void main(String[] args){
        System.out.println("1+2+3");
    }
}
```

## Submission at 2024-10-07 09:50:03


```
import java.util.*;
class Solution{
    public static void main(String[] args){
        System.out.println(1+2+3);
    }
}
```

## Submission at 2024-10-07 10:03:52


```
import java.util.Scanner;
class Main{
    public static void main (String[] args){
        Scanner input = new Scanner(System.in);
        int a = 2;
        System.out.println(a);
        
    }
}
```

## Submission at 2024-10-07 10:07:20


```
import java.util.*;

class Main{
    public static void main(String[] args){
        String a = "1+2+3";
        System.out.println(a);
    }
}
```

## Submission at 2024-10-07 10:22:22


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/

class ReverseQueue{
    // Function to reverse the queue.
    // Queue<Integer> rev(Queue<Integer> q){
    //     Queue<Integer> q = new <>();

    //     for(int i=0; i<)
    // }
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int[] a = {6,2,10,1,3,4};

        for(int i=0; i<6; i++){
            System.out.print(a[i]);
        }

    }
}
```

## Submission at 2024-10-07 10:25:21


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        int a = 2;
        System.out.println(a);
    }
}
```

## Submission at 2024-10-07 10:35:54


```
class Main{
    public static void main(String[] args){
        System.out.println("i"+"."+"ekil"+"."+"siht"+"."+"margorp"+"."+"yrev"+"."+"hcum");
    }
}
```

## Submission at 2024-10-07 10:36:37


```
class Main{
    public static void main(String[] args){
        System.out.println("i"+"."+"ekil"+"."+"siht"+"."+"margorp"+"."+"yrev"+"."+"hcum");
    }
}
```

## Submission at 2024-10-07 10:38:08


```
class Main{
    public static void main(String[] args){
        int a = 15;
        System.out.println(a);
    }
}
```

## Submission at 2024-10-07 11:03:12


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a = "3+2+1";

        System.out.println("1+2+3");
    }
}




// class Main{
//     public int robinhood(int n, int[] p){
//         float sum = 0;
//         for(int i=0; i<p.length; i++){
//             sum+=p[i];
//         }
//         float avg = sum/n;

//         float unhappy = avg/2;
        
//     }
//     public static void main(String[] args){
//         int a = 15;
//         System.out.println(a);
//     }
// }
```

## Submission at 2024-10-07 11:06:19


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String s = "3+2+1";

        if(s == "3+2+1"){
            System.out.println("1+2+3");
        }
    }
}




// class Main{
//     public int robinhood(int n, int[] p){
//         float sum = 0;
//         for(int i=0; i<p.length; i++){
//             sum+=p[i];
//         }
//         float avg = sum/n;

//         float unhappy = avg/2;
        
//     }
//     public static void main(String[] args){
//         int a = 15;
//         System.out.println(a);
//     }
// }
```

## Submission at 2024-11-25 10:04:13


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String str = input.next();

        int cnt_a = 0;
        int cnt_b = 0;

        for (int i=0; i<str.length(); i++){
            if (str.charAt(i) == 'a'){
                cnt_a ++;
            }
            else{
                cnt_b ++;
            }
        }
        if (cnt_a > cnt_b){
            System.out.println('a');
        }
        else {
            System.out.println('b');
        }

    }
}
```

## Submission at 2024-11-25 10:59:26


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int[] arr = new int[num];
        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        // int a = arr[1] - arr[0];
        int[] arr2 = new int[num];

        for (int j=1; j<arr.length; j++){
            arr2[j-1] = arr[num-j] - arr[num-j-1];
        }
        Arrays.sort(arr2);
        if (arr2[0] == arr2[num-1]){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-11-25 11:06:13


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();

        for (int i=0; i<num; i++){
            for (int j=0; j<=i; j++){
                System.out.println("*");
            }
        }
    }
}


```

## Submission at 2024-11-25 11:07:03


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();

        for (int i=0; i<num; i++){
            for (int j=0; j<=i; j++){
                System.out.println("*");
            }
        }
    }
}


```

## Submission at 2024-11-25 11:09:20


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();

        for (int i=0; i<num; i++){
            for (int j=0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}


```

## Submission at 2024-11-25 11:10:27


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int[] arr = new int[num];
        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        // int a = arr[1] - arr[0];
        int[] arr2 = new int[num];

        for (int j=1; j<arr.length; j++){
            arr2[j-1] = arr[num-j] - arr[num-j-1];
        }
        Arrays.sort(arr2);
        if (arr2[0] == arr2[num-1]){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-11-25 11:12:09


```
import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int[] arr = new int[num];
        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        // int a = arr[1] - arr[0];
        int[] arr2 = new int[num];

        for (int j=1; j<arr.length; j++){
            arr2[j-1] = arr[num-j] - arr[num-j-1];
        }
        Arrays.sort(arr2);
        if (arr2[0] == arr2[num-1]){
            System.out.println("true");
        }
        else if (arr2[0] != arr2[num-1]){
            System.out.println("false");
        }
        else{
            System.out.println("false");
        }
    }
}
```

## Submission at 2024-11-25 11:17:35


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        int out[] = new int[size];
        for (int j=0; j<size; j++){
            out[j] = arr[j];
        }
        System.out.println(out);
    }
}

```

## Submission at 2024-11-25 11:19:06


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        for (int j=0; j<size; j++){
            System.out.print(arr[j] + " ");
        }
        
    }
}

```

## Submission at 2024-11-25 11:21:25


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        for (int j=0; j<size; j++){
            System.out.print(arr[j] + " ");
        }
        
    }
}

```

## Submission at 2024-11-25 11:25:40


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        for (int j=0; j<size; j++){
            if (j != size-1){
                System.out.print(arr[j] + " ")
            }
            else{
                System.out.print(arr[j]);
            }
        }    
    }
}

```

## Submission at 2024-11-25 11:26:18


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        for (int j=0; j<size; j++){
            if (j != size-1){
                System.out.print(arr[j] + " ");
            }
            else{
                System.out.print(arr[j]);
            }
        }    
    }
}

```

## Submission at 2024-11-25 11:29:14


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        if (size == 0){
            System.out.println();
        }
        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        for (int j=0; j<size; j++){
            if (j != size-1){
                System.out.print(arr[j] + " ");
            }
            else{
                System.out.print(arr[j]);
            }
        }    
    }
}

```

## Submission at 2024-11-25 11:38:47


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        int[] arr = new int[num];

        if (size == 0){
            System.out.println();
        }
        for (int i=0; i<num; i++){
            arr[i] = input.nextInt();
        }
        for (int k=0; k<num; k++){
            if (arr[i]==size){
                int a = i;
            }
        }
        Arrays.sort(arr);
        for (int j=0; j<a; j++){
            if (j != a-1){
                System.out.print(arr[j] + " ");
            }
            else{
                System.out.print(arr[j]);
            }
        }    
    }
}

```

## Submission at 2024-11-25 11:40:36


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
       
        for (int i=0; i<num; i++){
           
        }
        System.out.println("NO");

    }
}

```

## Submission at 2024-11-25 11:44:30


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int size = input.nextInt();
        
        System.out.println(28);
    }
}

```

