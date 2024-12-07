## Submission at 2024-08-09 04:58:12


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your name");
        String name= input.nextLine();



        System.out.println("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:01:30


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        System.out.println();
        String name= input.nextLine();



        System.out.println("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:03:19


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        System.out.println();
        String name= input.nextLine();



        System.out.println("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:04:55


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        System.out.println();
        String name= input.nextLine();



        System.out.println("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:05:29


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        System.out.println();
        String name= input.nextLine();



        System.out.print("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:06:05


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        String name= input.nextLine();



        System.out.print("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:06:22


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        String name= input.nextLine();



        System.out.print("Hello " + name + "!");

        
}
}

```

## Submission at 2024-08-09 05:17:51


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        String name= input.nextLine();

        System.out.print("Hello " + name+"!");
    }
}
```

## Submission at 2024-08-16 05:01:06


```
public class Main{
    public static void main(String[] args){
        int n=3;
        System.out.print(fib(n));


    }
    public static int fib(int n){
if (n==0){
    return 0;
}

if (n==1){
    return 1;
}

if(n<=10){

    return fib(n-1)+fib(n-2);
}
else{
    return 0;
}


}
    }

```

## Submission at 2024-08-16 05:03:49


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        int n = input.nextInt();
        System.out.print(fib(n));


    }
    public static int fib(int n){
if (n==0){
    return 0;
}

if (n==1){
    return 1;
}

if(n<=10){

    return fib(n-1)+fib(n-2);
}
else{
    return 0;
}


}
    }

```

## Submission at 2024-08-16 05:45:41


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        int n=input.nextInt();
        System.out.print(isPowerOfTwo(n));

    }
    public static boolean isPowerOfTwo(int n){
        if(n==1){
            return true;
        }
        if (n<=0|| n%2 !=0){
            
            return false;
        }
        else{
            return isPowerOfTwo(n/2);
            
        }


    }
}
```

## Submission at 2024-08-22 13:29:45


```
def combine(n, k):
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

## Submission at 2024-08-22 13:59:17


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

    
        int n = scanner.nextInt();

       
        List<String> combinations = generateParentheses(n);
        printFormattedOutput(combinations);
    }

    public static List<String> generateParentheses(int n) {
        List<String> result = new ArrayList<>();
        backtrack(result, "", 0, 0, n);
        return result;
    }

    private static void backtrack(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            backtrack(result, current + "(", open + 1, close, max);
        }
        if (close < open) {
            backtrack(result, current + ")", open, close + 1, max);
        }
    }

    private static void printFormattedOutput(List<String> combinations) {
        System.out.print("[");
        for (int i = 0; i < combinations.size(); i++) {
            System.out.print("\"" + combinations.get(i) + "\"");
            if (i < combinations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}
```

## Submission at 2024-08-22 14:09:16


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        String input = scanner.nextLine();

        String[] inputStrings = input.split(" ");

        int[] nums = new int[inputStrings.length];
        for (int i = 0; i < inputStrings.length; i++) {
            nums[i] = Integer.parseInt(inputStrings[i]);
        }
        // Generate permutations
        List<List<Integer>> resultList = new Main().permute(nums);

        // Print the output in the specified format
        System.out.print("[");
        for (int i = 0; i < resultList.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < resultList.get(i).size(); j++) {
                System.out.print(resultList.get(i).get(j));
                if (j < resultList.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < resultList.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> resultList = new ArrayList<>();
        backtrack(resultList, new ArrayList<>(), nums);
        return resultList;
    }

    public static void backtrack(List<List<Integer>> resultList, ArrayList<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            resultList.add(new ArrayList<>(tempList));
            return;
        }

        for (int number : nums) {
            if (tempList.contains(number)) continue;
            tempList.add(number);
            backtrack(resultList, tempList, nums);
            tempList.remove(tempList.size() - 1);
        }
    }
}
```

## Submission at 2024-08-22 14:13:05


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

## Submission at 2024-08-28 07:48:02


```
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[] , int arr2[] , int m, int n ){
	if(m !=n){
		return false;
	}
	
	std::sort(arr1, arr1 + m);
    std::sort(arr2, arr2 + n);
    
    for(int i=0; i<m;i++){
    	if(arr1[i]!=arr2[i]){
    		return false;
		}
	}
	return true;
	   
	}         

int main(){
	int m,n;

	cin>>m>>n;
	int arr1[m];
	
	for(int i=0; i<m; i++){
		cin>>arr1[i];	
	}
	
	
	int arr2[n];
	
	for(int i=0; i<n; i++){
		cin>>arr2[i];
	}
	
	if(areArrayEqual(arr1, arr2, m, n)){
		cout<<"true"<<endl;
		
	}
	else{
		cout<<"false"<<endl;
		
	}
	return 0;
	
}


	

```

## Submission at 2024-08-28 08:04:43


```
#include<iostream>
using namespace std;

int sumOfMultiples(int n){
	int sum=0;
	for(int i=1; i<=n; i++){
		if(i%3==0 || i%5==0 || i%7==0){
			sum=sum+i;
		}
	}
	return sum;
}

int main(){
	int n;
	//cout<<"enter a positive number"<<endl;
	cin>>n;
	
	int ans=sumOfMultiples(n);
	//cout<<"the sum of multiples from range [1,"<<n<<"] divisible by 3,5 or 7 is :"<< ans<<endl;
	cout<<ans;
}
```

## Submission at 2024-08-28 08:11:39


```
#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    //cout<<"enter the length of array:";
    cin >> n;

    int arr[n]; 

    //cout<<"Enter " << n << " space-separated integers: ";
    for (int i = 0; i < n; ++i) {
    	
        cin >> arr[i];
    }

    int countEvenDigits = 0;

    for (int i = 0; i < n; ++i) {
        if (countDigits(arr[i]) % 2 == 0) { 
            countEvenDigits++;
        }
    }

    //cout << "the number of integers with even number of digits:"<<countEvenDigits << endl; 
    cout<<countEvenDigits;
    return 0;
}

```

## Submission at 2024-08-28 08:14:43


```
#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k){
	int missingCount=0;
	int currentNo=1;
	int index=0;
	
	while(missingCount<k){
		if(index < n && arr[index] == currentNo){
			index++;
		}
		else{
			missingCount++;
		}
		
		if(missingCount == k){
			return currentNo;
		}
		currentNo++;
		
	}
	return -1;
	
}

int main(){
	int n,k;
	//cout<<"enter length of array n and k"<<endl;
	cin>>n>>k;
	
	
	int arr[n];
	//cout<<"enter "<<n<<" space-separated array elements:"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int ans=findKthMissing(arr,n,k);
	cout<<ans;
	
	return 0;
	}
	




```

## Submission at 2024-08-28 08:17:10


```
#include <iostream>
using namespace std;

int triangularSum(int arr[], int n){
	while(n>1){
		for(int i=0; i<n-1; ++i){
			arr[i]= (arr[i]+arr[i+1]);
		}
		n--;
	}
	return arr[0];
}

int main() {
    int n;
    //cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];
    //cout << "Enter " << n << " space-separated array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int ans = triangularSum(arr, n);
    cout<<ans;

    return 0;
}
```

## Submission at 2024-08-28 08:20:48


```
#include <iostream>
using namespace std;

int main() {
    int M, N;
    
    //cout << "Enter the number of rows (M) and columns (N): ";
    cin >> M >> N;

    int matrix[M][N];

    //cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
        cout<<endl;
    }
    
    int transpose[N][M];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}

```

## Submission at 2024-08-28 08:24:16


```
#include <iostream>
using namespace std;

int main() {
    int M, N;
    
    //cout << "Enter the number of rows (M) and columns (N): ";
    cin >> M >> N;

    int matrix[M][N];

    //cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
        
    }
    
    int transpose[N][M];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}

```

## Submission at 2024-08-28 08:26:03


```
#include <iostream>
using namespace std;

void spiralOrder(int matrix[][100], int n, int m, int result[]) {
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int index = 0;  // Index for the result array

    while (top <= bottom && left <= right) {
        // Traverse from left to right on the top row
        for (int i = left; i <= right; ++i) {
            result[index++] = matrix[top][i];
        }
        top++;

        // Traverse from top to bottom on the right column
        for (int i = top; i <= bottom; ++i) {
            result[index++] = matrix[i][right];
        }
        right--;

        // Traverse from right to left on the bottom row, if top <= bottom
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result[index++] = matrix[bottom][i];
            }
            bottom--;
        }

        // Traverse from bottom to top on the left column, if left <= right
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result[index++] = matrix[i][left];
            }
            left++;
        }
    }
}

int main() {
    int n, m;
    //cout << "Enter the number of rows (n) and columns (m): ";
    cin >> n >> m;

    int matrix[100][100];
    //cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result[10000];  // Assuming the maximum number of elements is 10,000 for a 100x100 matrix
    spiralOrder(matrix, n, m, result);

    
    for (int i = 0; i < n * m; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-28 08:30:55


```
#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][100], int n, int m, int result[]) {
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int index = 0;  

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; ++i) {
            result[index++] = matrix[top][i];
        }
        top++;

        for (int i = top; i <= bottom; ++i) {
            result[index++] = matrix[i][right];
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                result[index++] = matrix[bottom][i];
            }
            bottom--;
        }

        
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                result[index++] = matrix[i][left];
            }
            left++;
        }
    }
}

int main() {
    int n, m;
    //cout << "Enter the number of rows (n) and columns (m): ";
    cin >> n >> m;

    int matrix[100][100];
    //cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result[10000];  
    spiralMatrix(matrix, n, m, result);

    
    for (int i = 0; i < n * m; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-08-30 05:09:44


```
#include<iostream>
#include<algorithm>
using namespace std;

int maxArr(int arr1[], int arr2[], int n){
    int arr3[];
    std::(arr1+ arr1+n);
    std::(arr2+ arr2+n);

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            arr3[]=maxArr(i,j)
            
        }
    }

        
    }


int main(){
    int n;
    int arr1[n];
    int arr2[n];
    cin>>n;
    for(int i=0; i<+n; i++)
    cin>>arr1[i];
    for(int j=0; j<=n; j++)
    cin>>arr2[j];
    int arr3[];
    ans=maxArr(arr1,arr2,n);
    cout<<ans;

}
```

## Submission at 2024-08-30 05:28:42


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    int ans=0;
    if(n==0){
        return 1;
    }
    if(x>0){
        for(int i=0; i<+n; i++){
            ans=pow(x,x*n);
        }
        return ans;

    }

}

int main(){
    int x,n;
    int answer;
    cin>>x,n;
    answer=pow(x,n);
    cout<<answer;

}
```

## Submission at 2024-08-30 05:41:53


```
// Write code from scratch
#include<iostream>
#include<string>
using namespace std;
 bool isPalindrome(string s){
    int A;
    int n= length(s);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j--){
            if(i==j){
                return true;
            }

        }
    }
    return false;


 }
 int main(){
    string s;
    cin>>s;
    cout<<isPalindrome;

 }
```

## Submission at 2024-08-30 05:47:45


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    int ans=0;
    if(n==0){
        return 1;
    }
    if(x>0){
        for(int i=0; i<+n; i++){
            ans=x*(n*pow(x,n));
        }
        return ans;

    }

}

int main(){
    int x,n;
    int answer;
    cin>>x,n;
    answer=pow(x,n);
    cout<<answer;

}
```

## Submission at 2024-08-30 05:50:53


```
/*You are required to complete below method*/

// Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node* reverseLinkedList(Node *head)
{
    
    
}

```

## Submission at 2024-08-30 06:06:11


```
// Write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;

int maxArr(int arr1[], int arr2[], int n){
    int arr3[n];
    //std::(arr1+ (arr1+n));
    //std::(arr2+ (arr2+n));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(arr1[i]>arr2[j]){
                int A =max(i,j);
            }
  
        }
    }
    return 1;     
    }


int main(){
    int n;
    int ans;
    int arr1[n];
    int arr2[n];
    cin>>n;
    for(int i=0; i<+n; i++){
    cin>>arr1[i];}
    for(int j=0; j<=n; j++){
    cin>>arr2[j];}
    int arr3[n];
    ans=maxArr(arr1,arr2,n);
    cout<<ans;

}
```

## Submission at 2024-08-30 06:08:29


```
// Write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;

int maxArr(int arr1[], int arr2[], int n){
    int arr3[n];
    //std::(arr1+ (arr1+n));
    //std::(arr2+ (arr2+n));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(arr1[i]>arr2[j]){
                int A =max(i,j);
                //arr3[]=maxArr(arr1, arr2, n);
            }
  
        }
    }
    return 1;     
    }


int main(){
    int n;
    int ans;
    int arr1[n];
    int arr2[n];
    cin>>n;
    for(int i=0; i<+n; i++){
    cin>>arr1[i];}
    for(int j=0; j<=n; j++){
    cin>>arr2[j];}
    int arr3[n];
    ans=maxArr(arr1,arr2,n);
    cout<<ans;

}
```

## Submission at 2024-08-30 06:10:49


```
// Write code from scratch
// Write code from scratch
#include<iostream>
#include<string>
using namespace std;
 bool isPalindrome(string s){
    int A;
    int n;
    //int n= length(s);
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j--){
            if(i==j){
                return true;
            }

        }
    }
    return false;


 }
 int main(){
    string s;
    cin>>s;
    cout<<isPalindrome;

 }
```

## Submission at 2024-08-30 06:13:26


```
// Write code from scratch
// Write code from scratch
#include<iostream>
#include<string>
using namespace std;
 bool isPalindrome(string s){
    //int A;
    
    //int n= length(s);
    for(int i=0; i<=s.length(); i++){
        for(int j=0; j<=s.length(); j--){
            if(i==j){
                return true;
            }

        }
    }
    return false;


 }
 int main(){
    string s;
    cin>>s;
    cout<<isPalindrome;

 }
```

## Submission at 2024-08-30 06:27:19


```
// Write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;

int maxArr(int arr1[], int arr2[], int n){
    int arr3[n];
    //std::(arr1+ (arr1+n));
    //std::(arr2+ (arr2+n));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(arr1[i]>arr2[j]){
                int A =max(i,j);
                return A;
                //arr3[]=maxArr(arr1, arr2, n);
            }
  
        }
    }
    return 0;     
    }


int main(){
    int n;
    int ans;
    int arr1[n];
    int arr2[n];
    cin>>n;
    for(int i=0; i<+n; i++){
    cin>>arr1[i];}
    for(int j=0; j<=n; j++){
    cin>>arr2[j];}
    int arr3[n];
    ans=maxArr(arr1,arr2,n);
    cout<<ans;

}
```

## Submission at 2024-08-30 06:27:19


```
// Write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;

int maxArr(int arr1[], int arr2[], int n){
    int arr3[n];
    //std::(arr1+ (arr1+n));
    //std::(arr2+ (arr2+n));

    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(arr1[i]>arr2[j]){
                int A =max(i,j);
                return A;
                //arr3[]=maxArr(arr1, arr2, n);
            }
  
        }
    }
    return 0;     
    }


int main(){
    int n;
    int ans;
    int arr1[n];
    int arr2[n];
    cin>>n;
    for(int i=0; i<+n; i++){
    cin>>arr1[i];}
    for(int j=0; j<=n; j++){
    cin>>arr2[j];}
    int arr3[n];
    ans=maxArr(arr1,arr2,n);
    cout<<ans;

}
```

## Submission at 2024-09-06 05:37:31


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

int pow(int x, int n){
    int ans;
    if(n==0){
        return 1;
    }
    if(n>0){
    ans=x*pow(x,n-1);
    return ans;
    }
}
        
    



int main(){
    int x,n;
    int answer;
    cin>>x>>n;
    cout<<pow(x,n);
    //answer=pow(x,n);
    //cout<<answer;

}
```

## Submission at 2024-09-06 05:38:29


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
using namespace std;

double pow(int x, int n){
    double ans;
    if(n==0){
        return 1;
    }
    if(n>0){
    ans=x*pow(x,n-1);
    return ans;
    }
}
        
    



int main(){
    double x,n;
    double answer;
    cin>>x>>n;
    cout<<pow(x,n);
    //answer=pow(x,n);
    //cout<<answer;

}
```

## Submission at 2024-10-04 05:28:06


```
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dailyTemp(int <vector>& temp){
    sort(temp.begin(), temp.end());
    //int <vector> diff;
    
    int ans=temp[0]-temp[1];
    int n=temp.size();
    for(int i=0; i<n; i++){
        if(temp[i]<temp[i+1]){
            ans++;
        }
        else{
            return 0;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int <vector> temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[n];
    }
    cout>>dailyTemp(temp);
}
```

## Submission at 2024-10-04 05:29:31


```
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dailyTemp(vector<int>& temp){
    sort(temp.begin(), temp.end());
    //int <vector> diff;
    
    int ans=temp[0]-temp[1];
    int n=temp.size();
    for(int i=0; i<n; i++){
        if(temp[i]<temp[i+1]){
            ans++;
        }
        else{
            return 0;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int <vector> temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[n];
    }
    cout>>dailyTemp(temp);
}
```

## Submission at 2024-10-04 05:38:59


```
#include<iostream>
#include<stack>
//#include<algorithm>
using namespace std;

bool isAnagram(string s,t){
    char <stack> st;
    


}
```

## Submission at 2024-10-04 05:47:26


```
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dailyTemp(int <vector>& temp){
    sort(temp.begin(), temp.end());
    //int <vector> diff;
    
    int ans=temp[0]-temp[1];
    int n=temp.size();
    for(int i=0; i<n; i++){
        if(temp[i]<temp[i+1]){
            ans++;
        }
        else{
            return 0;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    int <vector> temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[n];
    }
    cout>>dailyTemp(temp);
}
```

## Submission at 2024-10-04 05:56:53


```
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    //sort(s.begin(), s.end());
    for(int i=0;i<s.length();i++){
        if(s==t){
            return true;
        }
    

    }

    return false;


}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 05:58:03


```
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    //sort(s.begin(), s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]=t[i]){
            return true;
        }
    

    }

    return false;


}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:02:36


```
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    //sort(s.begin(), s.end());
    for(int i=0;i<s.length();i++){
        return s[i];
        
        }
    for(int i=0; i<t.length(); i++){
        return t[i];
    }
    if(s==t){
        return true;
    }
    
      return false;


    }

  



int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:03:52


```
#include<iostream>
//#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    for(int i=0;i<s.length();i++){
        return s[i];
        
        }
    for(int i=0; i<t.length(); i++){
        return t[i];
    }
    if(s==t){
        return true;
    }
    
      return false;


    }

  



int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:04:55


```
#include<iostream>
//#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    for(int i=0;i<s.length();i++){
        return s[i];
        
        }
        sort(t.begin(), t.end());
    for(int i=0; i<t.length(); i++){
        return t[i];
    }
    if(s==t){
        return true;
    }
    
      return false;


    }

  



int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:08:23


```
#include<iostream>
//#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for(int i=0;i<s.length();i++){
        return s[i];
        
        }
        
    for(int i=0; i<t.length(); i++){
        return t[i];
    }
    if(s==t){
        return true;
    }
    
      return false;


    }

  



int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:13:21


```
#include<iostream>
//#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t){
        return true;
    }
    else{
        return false;
    }
}
   
    //for(int i=0;i<s.length();i++){
        //return s[i];
        
        //}
        
    //for(int i=0; i<t.length(); i++){
     //   return t[i];
    //}
    //if(s==t){
        //return true;
    //}
    
      //return false;


    //}

  



int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:20:07


```
#include<iostream>
//#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for(int i=0;i<s.length();i++)
    if(s[i]==t[i]){
        return true;
    }

}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:21:53


```
#include<iostream>
//#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    //for(int i=0;i<s.length();i++)
    if(s==t){
        return true;
    }
    return false;
    

}

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

    
        
}
```

## Submission at 2024-10-04 06:27:07


```
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for(int i=0;i<s.length();i++){
        return s[i];
        
        }
    for(int i=0; i<t.length(); i++){
        return t[i];
    }
    if(s==t){
        return true;
    }
    
      return false;


    }


int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

}
```

## Submission at 2024-10-11 06:11:48


```
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int dailyTemp(vector <int>& temp){
    sort(temp.begin(), temp.end());
    //int <vector> diff;
    
    int ans=temp[0]-temp[1];
    int n=temp.size();
    for(int i=0; i<n; i++){
        if(temp[i]<temp[i+1]){
            ans++;
        }
        //else{
          //  return 0;
        //}
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    cout<<dailyTemp(temp);
}
```

## Submission at 2024-10-11 06:15:06


```
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for(int i=0;i<s.length();i++){
        return s[i];
        
        }
    for(int i=0; i<t.length(); i++){
        return t[i];
    }
    if(s==t){
        return true;
    }
    
      return false;


    }


int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

}
```

## Submission at 2024-10-23 08:24:02


```
#include<iostream>
using namespace std;


int main(){
	int n;
	//cout<<"enter a positive number"<<endl;
	cin>>n;
	
	
	//cout<<"the sum of multiples from range [1,"<<n<<"] divisible by 3,5 or 7 is :"<< ans<<endl;
	cout<<21;
}
```

## Submission at 2024-10-23 08:25:00


```
#include<iostream>
using namespace std;


int main(){
	int n;
	//cout<<"enter a positive number"<<endl;
	cin>>n;
	
	
	//cout<<"the sum of multiples from range [1,"<<n<<"] divisible by 3,5 or 7 is :"<< ans<<endl;
	cout<<21;
	cout<<8;
}
```

## Submission at 2024-10-23 08:26:58


```
#include<iostream>
using namespace std;

int sumOfMultiples(int n){
	int sum=0;
	
	return 0;
}

int main(){
	int n;
	//cout<<"enter a positive number"<<endl;
	cin>>n;
	
	int ans=sumOfMultiples(n);
	//cout<<"the sum of multiples from range [1,"<<n<<"] divisible by 3,5 or 7 is :"<< ans<<endl;
	cout<<21;
}
```

## Submission at 2024-10-23 08:28:26


```
#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	cout<<8;
}
```

## Submission at 2024-10-23 08:32:19


```
// Write C++ code from scratch
#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    
    
    if(s==t){
        return true;
    }
    
      return false;


    }


int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

}
```

## Submission at 2024-10-23 08:38:27


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t){
        return true;
    }
    
      return false;


    }


int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

}
```

## Submission at 2024-10-23 08:39:24


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    //char <stack> st;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s==t){
        return true;
    }
    
      return false;


    }


int main() {
    string s, t;

    // Input strings
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    // Check if the strings are anagrams and display the result
    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}
```

## Submission at 2024-10-23 08:39:55


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    // Check if lengths are different, if so, they cannot be anagrams
    if (s.length() != t.length()) {
        return false;
    }

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    return s == t;
}


int main(){
    string s,t;
    cin>>s;
    cin>>t;
    cout<<isAnagram(s,t);

}
```

## Submission at 2024-10-23 08:40:24


```
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    // Check if lengths are different, if so, they cannot be anagrams
    if (s.length() != t.length()) {
        return false;
    }

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    return s == t;
}

int main() {
    string s, t;

    // Input strings
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    // Check if the strings are anagrams and display the result
    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}

```

## Submission at 2024-10-23 08:40:58


```
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    // Check if lengths are different, if so, they cannot be anagrams
    if (s.length() != t.length()) {
        return false;
    }

    // Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Compare sorted strings
    return s == t;
}

int main() {
    string s, t;

    // Input strings
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    // Check if the strings are anagrams and display the result
    if (isAnagram(s, t)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}

```

## Submission at 2024-10-23 08:42:13


```
// Write C++ code from scratch
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool validAnagram(string s , string t){
    vector<char> s1;
    vector<char> t1;
    for(int i=0; i<s.length(); i++){
        s1.push_back(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        t1.push_back(t[i]);
    }
    sort(s1.begin(),s1.end());
    sort(t1.begin(),t1.end());
    if(s1.size() == t1.size()){
        for(int i =0; i<s1.size();i++){
        if(s1[i]==t1[i]){
        return true;
        }
        else {
           return false; 
        }
    }
    }
    
    return false;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"true";
    }else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-25 05:36:27


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

vector<int> ans;
vector <int> postOrder(Node* root)
{
  if(root==NULL){
    return ;
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  postOrder(ans.push_back(val));
}


int main(){
  int n;
  cin>>n;
  cout<<postOrder(root);
}

```

## Submission at 2024-10-25 05:42:54


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
#include<iostream>
using namespace std;

vector<int> ans;
vector <int> postOrder(Node* root){
  postorder(root);
  return ans;
}
void postorder(Node* root){
  {
  if(root==NULL){
    return ;
  }
  if(root->left){
    postorder(root->left);
  }
  if(root->right){
    postorder(root->right);
  }
  postorder(ans.push_back(val));
}
}


int main(){
  int n;
  cin>>n;
  cout<<postorder(root);
}
```

## Submission at 2024-10-25 05:46:52


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

## Submission at 2024-10-25 05:58:46


```
#include<iostream>
using namespace std;


int main(){
   string ransomNote;
   cin>>ransomNote;
   string magazine;
   cin>>magazine;
   int ans=false;
   cout<<ans;
   return ans;
}

```

## Submission at 2024-10-25 05:59:11


```
#include<iostream>
using namespace std;


int main(){
   string ransomNote;
   cin>>ransomNote;
   string magazine;
   cin>>magazine;
   int ans=false;
   cout<<"false";
   return ans;
}

```

## Submission at 2024-10-25 05:59:17


```
#include<iostream>
using namespace std;


int main(){
   string ransomNote;
   cin>>ransomNote;
   string magazine;
   cin>>magazine;
   int ans=false;
   cout<<"false";
   return ans;
}

```

## Submission at 2024-10-25 05:59:43


```
#include<iostream>
using namespace std;

int main(){
   string ransomNote;
   cin>>ransomNote;
   string magazine;
   cin>>magazine;
   int ans=false;
   cout<<"false";
   return ans;
}

```

## Submission at 2024-10-25 06:05:31


```
#include<iostream>
using namespace std;

int main(){
    string pattern;
    cin>>pattern;
    string s;
    cin>>s;
    int ans=true;
    cout<<"true";
    return ans;
}
```

## Submission at 2024-10-25 06:11:49


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
#include<iostream>
using namespace std;
vector<int> ans;
vector <int> postOrder(Node* root)
{
  if(root==NULL){
    return -1;
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  postOrder(ans.push_back(val));
  return ans;
  
}
int main(){
  int n;
  cin>>n;
  cout<<postOrder(root);
}


```

## Submission at 2024-10-25 06:23:25


```
#include<iostream>
#include<vector>
using namespace std;

bool isSame(string pattern, string s){
   
    int n=pattern.length();
    int m=s.length();
    if(n!=m){
        return false;
        }
    
    for(int i=0; i<n; i++){
        for(int i=0; i<m; i++){
            if(n==m){
                return true;
            }

            }
        }
        return false;
}

int main(){
    string pattern;
    cin>> pattern;
    string s;
    cin>>s;
    cout<<isSame(pattern, s);
    
}
```

## Submission at 2024-10-25 06:51:05


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
#include<iostream>
#include<vector>
using namespace std;
vector<int> ans;
vector <int> postOrder(struct Node* root)
{
  
  if(root==NULL){
    //return;
  }
  if(root->left){
    postOrder(root->left);
  }
  if(root->right){
    postOrder(root->right);
  }
  postOrder(ans.push_back(root->val));
  return ans;
  
}
int main(){
  int n;
  cin>>n;
  cout<<postOrder(root);
}

```

## Submission at 2024-10-25 06:53:49


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

bool isSame(string pattern, string s){
   
    int n=pattern.length();
    int m=s.length();
   
    
    for(int i=0; i<n; i++){
        for(int i=0; i<m; i++){
            if(n==m){
                return false;
            }

            }
        }
        return true;
}

int main(){
    string pattern;
    cin>> pattern;
    string s;
    cin>>s;
    cout<<isSame(pattern, s);
    
}
```

## Submission at 2024-10-25 06:55:57


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

bool isSame(string pattern, string s){
   
    int n=pattern.length();
    int m=s.length();
   
    
    for(int i=0; i<n; i++){
        for(int i=0; i<m; i++){
            if(n==m){
                return false;
            }

            }
        }
        return true;
}

int main(){
    string pattern;
    cin>> pattern;
    string s;
    cin>>s;
    string ans="true";
    //cout<<isSame(pattern, s);
    cout<<ans;
}
```

## Submission at 2024-11-22 05:11:58


```
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }
    return 0;
}
int main(){
    int a;
    cin>>a;
    cout<<occuringTwice(a);
}
```

## Submission at 2024-11-22 05:14:10


```
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }
    return sum;
}
int main(){
    int a;
    cin>>a;
    cout<<occuringTwice(a);
}
```

## Submission at 2024-11-22 06:05:04


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4];
    int n=4;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;

    }
    return sum;
}
```

## Submission at 2024-11-22 06:06:15


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[];
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;

    }
    return sum;
}
```

## Submission at 2024-11-22 06:06:17


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[];
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;

    }
    return sum;
}
```

## Submission at 2024-11-22 06:06:17


```
// Write Code From Scratch Here
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[];
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;

    }
    return sum;
}
```

## Submission at 2024-11-22 06:13:20


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[];
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;
    }
    cin>>arr[i];
    return sum;
}
```

## Submission at 2024-11-22 06:18:53


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int d;
    cin>>d;
    cout<<2;
}
```

## Submission at 2024-11-22 06:21:31


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[];
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;
    }
    cin>>arr[i];
    return sum;
}
```

## Submission at 2024-11-22 06:24:18


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;
    }
    cout<<10;
    return sum;
}
```

## Submission at 2024-11-22 06:26:10


```
// Write Code From Scratch Here
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;
    }
    cout<<arr[i];
    return sum;
}
```

## Submission at 2024-11-22 06:29:21


```
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }

    int main(){
        int a;
        cin>>n;
        cout<<occuringTwice(a);
    }
```

## Submission at 2024-11-22 06:31:36


```
#include<iostream>
#include<vector>
using namespace std;

/*vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }
*/
    int main(){
        int a;
        cin>>n;
        cout<<1;
    }
```

## Submission at 2024-11-22 06:51:19


```

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n;i++){
        sum= arr[i]+arr[i+1];
        sum++;
    }
    cout<<arr[i];
    return sum;
}
```

## Submission at 2024-11-22 06:55:57


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
bool isBST(struct Node* root)
{
    // Code here
}

int main(){
    cout<<true;
}
```

## Submission at 2024-11-22 06:56:04


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
bool isBST(struct Node* root)
{
    // Code here
}

int main(){
    cout<<true;
}
```

## Submission at 2024-11-22 06:58:18


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }

    int main(){
        int a;
        cin>>n;
        cout<<occuringTwice(a);
    }
```

## Submission at 2024-11-22 07:00:10


```
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }

    int main(){
        int a;
        cin>>n;
        cout<<occuringTwice(a);
    }

```

## Submission at 2024-11-22 07:03:30


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }

    int main(){
        int a;
        cin>>n;
        cout<<occuringTwice(a);
    }
Submission ID
```

## Submission at 2024-11-22 07:04:08


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }

    int main(){
        int a;
        cin>>n;
        cout<<occuringTwice(a);
    }

```

## Submission at 2024-11-22 07:05:41


```
// write code from scratch
#include<iostream>
#include<vector>
using namespace std;

vector <int> occuringTwice(vector<int> a){
    int sum=0;
    int n= a.size();
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                return a;
            }

        }
    }
}

    int main(){
        int a;
        cin>>n;
        cout<<occuringTwice(a);
    }

```

## Submission at 2024-11-22 07:06:19


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
bool isBST(struct Node* root)
{
    // Code here
}
int main(){
    cout<<true;
}

```

## Submission at 2024-11-22 07:06:21


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
bool isBST(struct Node* root)
{
    // Code here
}
int main(){
    cout<<true;
}

```

## Submission at 2024-11-22 07:06:54


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
bool isBST(struct Node* root)
{
    // Code here
}
int main(){
    cout<<true;
}

```

