## Submission at 2024-08-09 05:49:30


```
// Write your Java code here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n,i;
        n = input.nextInt();
        for(i = 0;i<n;i++){
            String b;
            b = input.next();
            System.out.println("Hello "+b+'!');
        }
    }
}
```

## Submission at 2024-08-16 05:01:43


```
/*import java.io.*;
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
    }
}
*/
public class Main{
    public static void main (String[] args){
        int n=12;

        System.out.print(fibonacci(n));

    }
    public static int fibonacci(int n){
        if (n<=1){
            return n;
        }
        if (n<=10){
            return fibonacci(n-1)+fibonacci(n-2);
        }
        else {
            return 0;
        }
    }
}
```

## Submission at 2024-08-16 05:04:39


```
import java.util.Scanner;
public class Main{
    public static void main (String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        System.out.print(fibonacci(n));

    }
    public static int fibonacci(int n){
        if (n<=1){
            return n;
        }
        if (n<=10){
            return fibonacci(n-1)+fibonacci(n-2);
        }
        else {
            return 0;
        }
    }
}
```

## Submission at 2024-08-16 05:41:28


```
import java.util.Scanner;
public class Main{
    public static void main (String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.print(isPowerOfTwo(n));
    }
    public static boolean isPowerOfTwo(int n){
        if (n==1){
            return true;
        }
        if (n<=0 || n%2!=0){
            return false; 
        }
        else {
          isPowwerOfTwo(n/2); 
        }
    }
}
```

## Submission at 2024-08-16 05:44:44


```
import java.util.Scanner;
public class Main{
    public static void main (String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.print(isPowerOfTwo(n));
    }
    public static boolean isPowerOfTwo(int n){
        if (n==1){
            return true;
        }
        if (n<=0 || n%2!=0){
            return false; 
        }
        else {
         return isPowerOfTwo(n/2); 
        }
    }
}
```

## Submission at 2024-08-22 13:51:58


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        // Generate and print all combinations of well-formed parentheses
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

## Submission at 2024-08-22 14:08:29


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

## Submission at 2024-08-22 14:11:46


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

## Submission at 2024-08-28 05:01:21


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:02:54


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:07:44


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:07:51


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:07:54


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:07:59


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:08:09


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:09:04


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:12:16


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:12:20


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:12:30


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:12:38


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:12:43


```
// Write the code from scratch, no boilerplate is required
#include<iostream>
#include<algorithm>
using namespace std;

bool areArrayEqual(int arr1[], int arr2[], int m , int n){
    if(m ==n ){
        std::sort(arr1, arr1+m);
        std::sort(arr2, arr2+n);

        for(int i=0; i<n; i++){
            if (arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int m, n;
    cin>>m>>n;
    int arr1[m];
    for( int i=0; i<m; i++){
        cin>>arr1[i];
    }
    //cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    if (areArrayEqual(arr1, arr2, m, n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-28 05:32:23


```
#include<iostream>
using namespace std;
int countDigit(int num){
    int count=0;
    if (num==0){
        return 1;
    }
    while (num>0){
        num /= 10;
        count++;
    }
    return count;
}
int main(){
    int n; 
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int evenDigitCount = 0;
    for ( int i=0; i<n; i++){
        if (countDigit(nums[i]) % 2 == 0){
            evenDigitCount++;
        }
    }
    cout<< evenDigitCount<<endl;
    return 0;
}
```

## Submission at 2024-08-28 08:05:09


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

## Submission at 2024-08-28 08:14:08


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
//cout<<n;
for(int i=0; i<n; i++){
cin>>arr[i];
}

int ans=findKthMissing(arr,n,k);
cout<<ans;

return 0;
}
```

## Submission at 2024-08-28 08:18:08


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
    cout << ans;

    return 0;
}
```

## Submission at 2024-08-28 08:21:06


```
// Write Code from Scratch
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

    //cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-28 08:24:29


```
// Write Code from Scratch
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
       // cout<<endl;
    }
   
    int transpose[N][M];

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    //cout << "The transpose of the matrix is: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

## Submission at 2024-08-28 08:41:30


```
#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][100], int n, int m, int result[]) {
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
    spiralMatrix(matrix, n, m, result);

    //cout << "Spiral order of the matrix is:" << endl;
    for (int i = 0; i < n * m; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Submission at 2024-08-30 05:15:16


```
// Write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;
int maximalArray(int i,int a[], int b[], int c[], int n){
   //cout<<"Enter the length of array";
   //int n=5;
   std::sort(a[],a[]+n);
   
    /*int a[i];
    for (int i=0; i<n, i++){
        cout<<a[i];
    }
    int b[i];
    for (int i=0; i<n; i++){
        cout<<b[i];
    }*/
   if (a[i]>b[i]){
    int d= a[i];
    cout<<c[i];
   }
   else {
    int e= b[i];
    cout<<c[i];
   }
   return 0;
   

}
int main(){
    int n;
    cin>>n; 
    int a[];
    for (int i=0; i<n; i++){
        cout<<a[i];
    }
    int b[];
    for (int i=0; i<n; i++){
        cout<<b[i];
    }
    cout<<maximalArray;
    return 0;

}
```

## Submission at 2024-08-30 05:17:48


```
// Write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;
int maximalArray(int i,int a[], int b[], int c[], int n){
   //cout<<"Enter the length of array";
   //int n=5;
   std::sort(a[],a[]+n);
   
    /*int a[i];
    for (int i=0; i<n, i++){
        cout<<a[i];
    }
    int b[i];
    for (int i=0; i<n; i++){
        cout<<b[i];
    }*/
   if (a[i]>b[i]){
    int c[0]= a[i];
    cout<<c[i];
   }
   else {
    int c[0]= b[i];
    cout<<c[i];
   }
   return 0;
   

}
int main(){
    int n;
    cin>>n; 
    int a[];
    for (int i=0; i<n; i++){
        cout<<a[i];
    }
    int b[];
    for (int i=0; i<n; i++){
        cout<<b[i];
    }
    cout<<maximalArray;
    return 0;

}
```

## Submission at 2024-08-30 05:37:47


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>
using namespace std;


int pow(int x, int n){
    //for (int i=0; i<n; i++){
        if (n>0){
            cout<<(x*(x^(n-1)));
        }
        else{
            return 0;
        }
    }

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<pow(x, n);

}
```

## Submission at 2024-08-30 05:40:40


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>
using namespace std;


int pow(int x, int n){
    //for (int i=0; i<n; i++){
        if (n>0){
            cout<<(x*(x^(n-1)));
        }
        else{
            return 0;
        }
    }

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<pow(x, n);

}
```

## Submission at 2024-08-30 05:59:47


```
// Write code from scratch
#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
    int n= s.length();
    for (int i = 0; i=n; i--)
        if (s[i]= s[n-i]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    return 0;

}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
}
```

## Submission at 2024-08-30 06:11:40


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
//#include<cmath>
using namespace std;


int pow(int x, int n){
    for (int i=0; i<n; i++){
        if (n>0){
            cout<<(x+(x^(n-1)));
        }
        else{
            return 1;
        }
        
    }
}

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<pow(x, n);

}
```

## Submission at 2024-08-30 06:25:40


```
// Write code from scratch
#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
    int n= s.length();
    for (int i = 1; i<n;i++)
        if (s[i]= s[n-i]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
   

}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
    
}

```

## Submission at 2024-08-30 06:26:43


```
// Write code from scratch
#include<iostream>
#include<string>
using namespace std;
bool palindrome(string s){
    int n= s.length();
    for (int i = 1; i<n;i++)
        if (s[i]= s[n-i]){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
   

}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
    
}

```

## Submission at 2024-09-06 05:45:51


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
//#include<cmath>
using namespace std;


int pow(int x, int n){
    int ans;
    //for (int i=0; i<n; i++){
    if (n==0){
        return 1;
    }
    if (n>0){
            ans=x*pow(x,n-1);
            return ans;
        }
        
    }

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    cout<<pow(x, n);

}
```

## Submission at 2024-09-13 06:16:11


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>
using namespace std;


double pow(double x, double n){
    double ans;
    //for (int i=0; i<n; i++){
    if (n==0){
        return 1;
    }
    //if (n < 0) {
        // Handle negative powers
        //return 1.0 / pow(x, -n); // x^(-n) is 1/(x^n)
    //}
    if (n>0){
        ans=x*pow(x,n-1);
        return ans;
        }
        
    
}
int main(){
    double x;
    cin>>x;
    double n;
    cin>>n;
    double result = pow(x,n);
    cout<<floor(result);

}
```

## Submission at 2024-09-13 06:17:57


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>
using namespace std;


double pow(double x, double n){
    double ans;
    //for (int i=0; i<n; i++){
    if (n==0){
        return 1;
    }
    if (n < 0) {
        return 1.0 / pow(x, -n); // x^(-n) is 1/(x^n)
    }
    if (n>0){
        ans=x*pow(x,n-1);
        return ans;
        }
        
    
}
int main(){
    double x;
    cin>>x;
    double n;
    cin>>n;
    double result = pow(x,n);
    cout<<floor(result);

}
```

## Submission at 2024-10-04 05:16:54


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return 0;
                }
                else{
                    return 1;
                }

            }
            
            
        }
        
    }
    return false;
    
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        return true;
    }
    else {
        return false;
    }
    
}
```

## Submission at 2024-10-04 05:22:45


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:03:06


```
// Write C++ code from scratch
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int DailyTemp(vector<int> temp){
    int n=0;
    int count=1;
    stack<int> ans;
    
    for(int i=0; i<n; i++){
        if(temp[i]<=temp[i+1]){
            count=count +1;
            return ans.push(count);
        }
        else if(temp[i]>=temp[i+1]){
            count= count-1;
            return ans.push(count);
        }
        else{
            return ans.push(0);
        }
    }
    
}
int main(){
    int n;
    int count = 1;
    cin>>n;
    //vector<int> ans(n);
    vector<int> temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    
    cout<<DailyTemp(temp);

}
```

## Submission at 2024-10-04 06:13:31


```
// Write C++ code from scratch
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int DailyTemp(int temp[]){
    int n;
    int count=1;
    int ans[n];
    for(int i=0; i<n; i++){
        if(temp[i]<=temp[i+1]){
            count=count +1;
            return ans[count];
        }
        else if(temp[i]>=temp[i+1]){
            count= count-1;
            return ans[count];
        }
        else{
            return ans[0];
        }
    }
    
}
int main(){
    int n;
    int count = 1;
    cin>>n;
    int ans(n);
    int temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        cout<<ans[count];
    }
    cout<<DailyTemp(temp);

}
```

## Submission at 2024-10-04 06:14:24


```
// Write C++ code from scratch
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int DailyTemp(int temp[]){
    int n;
    int count=1;
    int ans[n];
    for(int i=0; i<n; i++){
        if(temp[i]<=temp[i+1]){
            count=count +1;
            return ans[count];
        }
        else if(temp[i]>=temp[i+1]){
            count= count-1;
            return ans[count];
        }
        else{
            return ans[0];
        }
    }
    
}
int main(){
    int n;
    int count = 1;
    cin>>n;
    int ans(n);
    int temp(n);
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    for(int i=0; i<n; i++){
        cout<<ans[count];
    }
    cout<<DailyTemp(temp);

}
```

## Submission at 2024-10-04 06:17:29


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:18:18


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:18:23


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:22:22


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:22:54


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:27:52


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2 && 1<=n1<=50000 && 1<=n2<=50000){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-04 06:28:49


```
// Write C++ code from scratch
#include <iostream>
using namespace std;
bool anagram(string s, string t){
    int n1=s.length();
    int n2=t.length();
    if (n1==n2 && 1<=n1<=50000 && 1<=n2<=50000){
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(s[i]=t[j]){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
    
    }return false;
}
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    if(anagram(s,t)){
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
}
```

## Submission at 2024-10-23 08:30:24


```
// Write C++ code from scratch
#include <iostream>
using namespace std;

void DailyTemp(int temp[], int n, int ans[]) {
    int stack[n]; 
    int top = -1; 
    for (int i = 0; i < n; i++) {
        while (top != -1 && temp[stack[top]] < temp[i]) {
            int idx = stack[top--]; 
            ans[idx] = i - idx; 
        }
        stack[++top] = i; 
    }
}

int main() {
    int n;
    cin >> n; 

    int temp[n];
    for (int i = 0; i < n; i++) {
        cin >> temp[i]; 
    }

    int ans[n]; 
    for (int i = 0; i < n; i++) {
        ans[i] = 0; 
    }

    DailyTemp(temp, n, ans); 
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " "; 
    }

    return 0;
}

```

## Submission at 2024-10-25 05:38:32


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
  // Your code here
  int N;
  vector<int> ans;
  if (root==N){
    return ans;
  }
  if(root->left){
    return postOrder(root->left);
  }
  if(root->right){
    return postOrder(root->right);
  }
  ans.push_back(root->data);

 
}

```

## Submission at 2024-10-25 05:51:06


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<t.length(); j++){
            if(s[i]==t[j]){
                cout<<"true";
            }
            else{
                cout<<"false";
            }
        }
    }
}
```

## Submission at 2024-10-25 06:08:30


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    n=t.length();
    int ans[n];
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<t.length(); j++){
            if(s[i]==t[j]){
                return ans;
            }
            else{
                
            }
        }
    }return ans;
    if(ans.isEmpty()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-10-25 06:22:24


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    //n=t.length();
    string r;
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<t.length(); j++){
            if(s[i]==t[j]){
                return r[j];
            }
            else{
                
            }
        }
    }
    if(r.empty()){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}


```

## Submission at 2024-10-25 06:46:12


```
// write code from scratch
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string pattern;
    string s;
    if(pattern.length()==s.length()){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}

```

## Submission at 2024-10-25 06:51:44


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    //n=t.length();
    string r;
    for(int i=0; i<s.length(); i++){
        if(s[i]==t[i]){
        return r[i];
    }
    else{

    }
    }
    
    if(r.empty()){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}


```

## Submission at 2024-10-25 07:01:56


```
// write code from scratch
#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    //n=t.length();
    string r;
    for(int i=0; i<s.length(); i++){
        if(s[i]==t[i]){
        return r(t[i]);
    }
    else{

    }
    }
    
    if(r==t){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}


```

## Submission at 2024-11-15 09:50:42


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
  vector<int> ans;
  if (root==NULL){
    return {};
  }
  if(root->left){
   postOrder(root->left);
  }
  if(root->right){
   postOrder(root->right);
  }
  ans.push_back(root->data);
  return ans;
  // Your code here
}

```

## Submission at 2024-11-15 11:03:01


```
// write code from scratch
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool RanSome(string r, string m){
    unordered_map<char, int>letterCount;
//counting characters in magzine
    for(int i=0; i<m.length(); i++){
        char currentChar = m[i];
        letterCount[currentChar]=letterCount[currentChar]+1;
    }
    //Checking ransome note characters
    for(int i=0; i<r.length(); i++){
        char currentChar = r[i];
        if(letterCount[currentChar]<=0){
            return false;
        }
        letterCount[currentChar]=letterCount[currentChar]-1;
    }
}
int main(){
    string m;
    string r;
    cin>>r;
    cin>>m;
    if(RanSome(r, m)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}
```

## Submission at 2024-11-15 12:14:55


```
// write code from scratch
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool isSame(string pa, vector<string> s) {
    unordered_map<char, string> sameString;

    for (int i = 0; i < pa.length(); i++) {
        char ch = pa[i];

        if (sameString.find(ch) == sameString.end()) {
            sameString[ch] = s[i];
        } else {
            
            if (sameString[ch] != s[i]) {
                return false; 
            }
        }
    }

    return true;
}

int main() {
    string pa;
    cin >> pa;

    
    vector<string> s(pa.length());
    for (int i = 0; i < pa.length(); i++) {
        cin >> s[i];
    }

    
    if (isSame(pa, s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
```

## Submission at 2024-11-15 12:56:18


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
bool isSymmetric(struct Node* root)
{
    // Code here
}


```

## Submission at 2024-11-15 13:18:44


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
bool isMirror(Node* LeftSubtree, Node*RightSubtree){
    if(LeftSubtree==NULL && RightSubtree==NULL){
        return true;
    }
    if(LeftSubtree == NULL || RightSubtree == NULL){
        return false;
    }
    if(LeftSubtree->data != RightSubtree->data){
        return false;
    }
    return isMirror(LeftSubtree->left, RightSubtree->right)&&
           isMirror(LeftSubtree->right, RightSubtree->left);
}
bool isSymmetric(struct Node* root)
{
    if(root==NULL){
        return true;
    }
    return isMirror(root->left, root->right);
    // Code here

}


```

## Submission at 2024-11-22 05:08:46


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    
    int score =0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                return score++;
            }
    }
    }cout<< score;
    
}
```

## Submission at 2024-11-22 05:22:25


```
// Write Code From Scratch Here
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    sum = arr[0]+arr[1]+arr[2]+arr[3];
    //for(int i=0; i<n; i++){
      //  sum = arr[i]+arr[i+1];

    //}
    
    cout<<sum;
}
```

## Submission at 2024-11-22 05:49:15


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"*"<<endl;
    cout<<"**"<<endl;
    cout<<"***"<<endl;
    cout<<"**"<<endl;
    cout<<"*"<<endl;
}
```

## Submission at 2024-11-22 06:00:06


```
// write code from scratch
#include<iostream>
using namespace std;
int main(){
    int score = 0;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                return score++;
            }
            else{
                return 0;
            }
        }
    }cout<<score;
}
```

## Submission at 2024-11-22 06:15:31


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
    if(root->left < root){
        return true;
    }
    if(root->right > root){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    if(isBST(root)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
```

## Submission at 2024-11-22 06:35:59


```
// Write Code From Scratch Here
#include<iostream>
#include<math>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum;
    sum = add(arr[0], arr[n]);
    //for(int i=0; i<n; i++){
      //  sum = arr[i]+arr[i+1];

    //}
    
    cout<<sum;
}

```

## Submission at 2024-11-22 06:39:45


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
     // Code here
    if(root->left < root){
        return true;
    }
    if(root->right > root){
        return true;
    }
    else{
        return false;
    }
}


```

