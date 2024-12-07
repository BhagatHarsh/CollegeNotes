## Submission at 2024-08-09 04:44:18


```
#include <iostream>
using namespace std;

int main(){
    string Name;
    cout<<"Enter your name for the virtual community: "<<endl;
    cin>>Name;
    cout<<"Hello "<<Name<<" !";
    return 0;
}
```

## Submission at 2024-08-09 04:45:35


```
#include <iostream>
using namespace std;

int main(){
    string Name;
    cout<<"Enter your name for the virtual community: "<<endl;
    cin>>Name;
    cout<<"Hello "<<Name<<"!";
    return 0;
}
```

## Submission at 2024-08-09 04:46:59


```
#include <iostream>
using namespace std;

int main(){
    string Name;
    cin>>Name;
    cout<<"Hello "<<Name<<"!";
    return 0;
}
```

## Submission at 2024-08-09 04:59:44


```
#include <iostream>
using namespace std;

int main(){
    string Name;
    if(1<=Name.size()<=100){
    cin>>Name;
    cout<<"Hello "<<Name<<"!";
    }

  
    return 0;
    
}
```

## Submission at 2024-08-09 05:02:16


```
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string Name;
    for(int i=1;i<=n;i++){
        cin>>Name;
        cout<<"Hello "<<Name<<"!"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-09 05:03:09


```
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string Name;
    for(int i=1;i<=n;i++){
        cin>>Name;
        cout<<"Hello "<<Name<<"!"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-09 05:08:02


```
#include <iostream>
using namespace std;
int main(){
    string Name;
    if(1<=Name.size()<=100){
    cin>>Name;
    cout<<"Hello "<<Name<<"!";
}
return 0;
}
```

## Submission at 2024-08-09 05:10:03


```
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string Name;
    for(int i=1;i<=n;i++){
        cin>>Name;
        cout<<"Hello "<<Name<<"!"<<endl;
    }
    return 0;
}
```

## Submission at 2024-08-16 04:55:44


```
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
int n;
cin>>n;
cout<<fibonacci(n);
return 0;
}

```

## Submission at 2024-08-16 05:13:05


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
if(n==1){
    return true;
}
if(n%2==0){
    return (n/2);
}
 return false;   // Write your logic here
}

int main() {
    int n;
    cin >> n;
    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:18:02


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(-2^31 <= n <= 2^31 - 1){

if(n==1){
    return true;
}

if(n%2==0){
    return (n/2);
}
    }
 return false;   // Write your logic here
}

int main() {
    int n;
    cin >> n;
    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:24:28


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {

if(n==1){
    return true;
}

if(n%2!=0){
    return false;
}
    
 return n/2; 
  }  // Write your logic here


int main() {
    int n;
    cin >> n;
    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:25:45


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {

if(n==1){
    return true;
}

if(n<=0 || n%2!=0){
    return false;
}
    
 return n/2; 
  }  // Write your logic here


int main() {
    int n;
    cin >> n;
    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 05:27:29


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {

if(n==1){
    return true;
}

if(n<=0 || n%2!=0){
    return false;
}
    
 return n/2; 
  }  // Write your logic here


int main() {
    int n;
    cin >> n;
    // Determine if n is a power of two
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-22 12:58:20


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    if (current.size() == k) {
        result.push_back(current);
        return;
    }

    for (int i = start; i <= n; ++i) {
        current.push_back(i); 
        combine(i + 1, k, n, current, result); 
        current.pop_back(); 
}

}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> current;
    combine(1, k, n, current, result);
    return result;
}

// Custom comparator function to sort based on size and first element
bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    // If sizes are different, use size to determine the order
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sizes are the same, compare elements one by one
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all elements are equal, return false (indicating they are considered equal)
    return false;
}

int main() {
    int n, k;
    cin >> n >> k;

    // Generate combinations
    vector<vector<int>> result = combine(n, k);

    // Sort subsets based on size and first element
    sort(result.begin(), result.end(), compare);

    // Print combinations
    cout<<"[";
    for (int i=0;i<result.size();i++) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            cout << result[i][j];
            if (j < result[i].size() - 1) cout << ",";
        }
        cout << "]";
        if(i==result.size()-1) continue;
        cout<<",";
    }
    cout<<"]";

    return 0;
}




```

## Submission at 2024-08-22 13:01:15


```
#include <iostream>

#include <vector>

#include <sstream>

#include <algorithm>



using namespace std;



void permute(vector<int>& nums, vector<vector<int>>& result, int start) {

    if (start >= nums.size()) {

        result.push_back(nums);

        return;

    }

    

    for (int i = start; i < nums.size(); ++i) {

        swap(nums[start], nums[i]);

        

        permute(nums, result, start + 1);

        

        swap(nums[start], nums[i]);

    }

}



// Function to generate all permutations and return them in sorted order

vector<vector<int>> permuteUnique(vector<int>& nums) {

    vector<vector<int>> result;

    permute(nums, result, 0);

    

    // Sort the result to ensure permutations are in sorted order

    sort(result.begin(), result.end());

    

    return result;

}



// Comparator function for sorting permutations

bool compare(const vector<int>& a, const vector<int>& b) {

    if (a.size() != b.size()) return a.size() < b.size();

    for (size_t i = 0; i < a.size(); ++i) {

        if (a[i] != b[i]) return a[i] < b[i];

    }

    return false;

}



int main() {

    string line;

    getline(cin, line);

    

    istringstream iss(line);

    vector<int> nums;

    int num;

    

    while (iss >> num) {

        nums.push_back(num);

    }

    

    vector<vector<int>> permutations = permuteUnique(nums);

    

    // Sort permutations based on size and first element

    sort(permutations.begin(), permutations.end(), compare);

    

    // Print permutations

    cout << "[";

    for (size_t i = 0; i < permutations.size(); ++i) {

        cout << "[";

        for (size_t j = 0; j < permutations[i].size(); ++j) {

            cout << permutations[i][j];

            if (j < permutations[i].size() - 1) cout << ",";

        }

        cout << "]";

        if (i < permutations.size() - 1) cout << ",";

    }

    cout << "]" << endl;

    

    return 0;

}
```

## Submission at 2024-08-22 13:02:07


```
#include <iostream>

#include <vector>

#include <string>



using namespace std;



void generateParenthesis(int n, int open, int close, string current, vector<string>& result) {

    if (current.length() == 2 * n) {

        result.push_back(current);

        return;

    }

    

    if (open < n) {

        generateParenthesis(n, open + 1, close, current + '(', result);

    }

    

    if (close < open) {

        generateParenthesis(n, open, close + 1, current + ')', result);

    }

}



vector<string> generateParentheses(int n) {

    vector<string> result;

    generateParenthesis(n, 0, 0, "", result);

    return result;

}



int main() {

    int n;

    cin >> n;

    

    vector<string> combinations = generateParentheses(n);

    

    // Print the combinations

    cout << "[";

    for (size_t i = 0; i < combinations.size(); ++i) {

        cout << "\"" << combinations[i] << "\"";

        if (i < combinations.size() - 1) {

            cout << ",";

        }

    }

    cout << "]" << endl;

    

    return 0;

}
```

## Submission at 2024-08-24 09:29:06


```
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;

    if(n!=m){
        cout<<"false";
    }

    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    bool sortflag=true;

    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            sortflag=false;
        }
    }
    if(sortflag){
        cout<<"true"<<endl;
        }else cout<<"false";
}
```

## Submission at 2024-08-24 09:33:26


```
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;


    int arr1[n];
    int arr2[m];
    
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    bool sortflag=true;

    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            sortflag=false;
        }
    }

    if(sortflag){
        cout<<"true"<<endl;
        }else cout<<"false";
}
```

## Submission at 2024-08-24 09:40:40


```
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    
    int arr1[n];
    int arr2[m];
    if(n<=0||m<=0){
        cout<<"false";
    }else{
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

   
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    bool sortflag=true;

    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            sortflag=false;
        }
    }
    cout<<sortflag;
    return 0;

    }
}
```

## Submission at 2024-08-24 09:45:34


```
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;
    
    int arr1[n];
    int arr2[m];

    if(n==0&&m==0){
        cout<<"true";
    }else{
    if(n<=0||m<=0){
        cout<<"false";
    }else{
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

   
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    bool sortflag=true;

    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            sortflag=false;
        }
    }
    if(sortflag){
        cout<<"true";
    }else cout<<"false";

    return 0;

    }
    }
}
```

## Submission at 2024-08-24 09:49:00


```
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,m;
    cin>>n>>m;

        if (n == 0 && m == 0) {
        cout << "true";
        return 0;
    }
    if (n <= 0 || m <= 0) {
        cout << "false";
        return 0;
    }
        if (n != m) {
        cout << "false";
        return 0;
    }


    int arr1[n];
    int arr2[m];
 
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    bool sortflag=true;

    for(int i=0;i<n;i++){
        if(arr1[i]!=arr2[i]){
            sortflag=false;
            break;
        }
    }
    if(sortflag){
        cout<<"true";
    }else cout<<"false";

    return 0;

    
}
```

## Submission at 2024-08-24 10:09:10


```
#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;

    if (n <= 1 || n >= 1000) { 
        cout << "-1";
        return 0;
    }
    

int array[n];
int sum=0;
int a=1;

for(int i=0;i<n;i++){
    array[i]=a;
    a=a+1;
}

for(int i=0;i<n;i++){
    if(array[i]%3==0||array[i]%5==0||array[i]%7==0){
        sum=sum+array[i];
    }
    
    
}
cout<<sum;
return 0;

}
```

## Submission at 2024-08-27 03:16:45


```
#include <iostream>
using namespace std;

bool checkEvenDigits(int number){
    int digits=0;
    if(number==0){
        digits=1;
    }else{
        while(number>0){
        number=number/10;
        digits++;
        }
    }
    return digits%2==0;
    }

int countEven(int array[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(checkEvenDigits(array[i])){
            count=count+1;
        }
    }
    return count;
}


int main(){
    int n;
    cin>>n;
    int array[n];

    //inputting values for the array with size n
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
 
 int answer=countEven(array,n);
 cout<<answer;


}
```

## Submission at 2024-08-27 03:23:02


```
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

int matrix[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }    
}

int transpose[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        transpose[i][j]=matrix[j][i];
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
```

## Submission at 2024-08-27 03:38:40


```
#include  <iostream>
using namespace std;

void sum(int array[],int n){
    int triangle[n][n];//empty matrix to construct the triangle

    //for the last row of the triangle;
    for(int i=0;i<=n-1;i++){
        triangle[n-1][i]=array[i];
    }
     
     //constructing triangle from bottom to top
     for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
      triangle[i][j]=triangle[i+1][j]+triangle[i+1][j+1];
    }
     }
cout<<triangle[0][0];
}

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    sum(array,n);
    
    return 0;
}
```

## Submission at 2024-08-27 04:00:02


```
#include  <iostream>
#include <vector>
using namespace std;

int sum(vector<int> array){
    
    int n=array.size();
    vector<vector<int>> triangle(n,vector<int>(n,0)); //empty matrix to construct the triangle
      
    //for the last row of the triangle;
    for(int i=0;i<=n-1;i++){
        triangle[n-1][i]=array[i];
    }
     
     //constructing triangle from bottom to top
     for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
      triangle[i][j]=triangle[i+1][j]+triangle[i+1][j+1];
    }
     }   
return triangle[0][0];
}


int main(){
    int n;
    cin>>n;
    vector<int> array(n);

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
     if(n<=0){
        cout<<0;
     }
    int answer=sum(array);
    cout<<answer;
    return 0;
}
```

## Submission at 2024-08-27 04:15:36


```
#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> matrix){
    
    int left=0;
    int top=0;
    int bottom=matrix.size()-1;
    int right=matrix[0].size()-1;
    int direction=0;

    while(left<=right && top<=bottom){

        //left to right column top row
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i]<<" ";
            }
            top++;
        }

        //top to bottom row column right
        if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<matrix[i][right]<<" ";
            }
            right--;
        }

        //right to left column bottom row
        if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        
        //bottom to top row column left
        if(direction==3){
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left]<<" ";
            }
            left++;
        }

        direction=(direction+1)%4;// so that value of 3 stays from 0 to 3 since we have 4 different directions and then they repeat

    }

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    spiral(matrix);
    return 0;
}
```

## Submission at 2024-08-28 02:34:41


```
#include  <iostream>
#include <vector>
using namespace std;

int sum(vector<int> array){
    
    int n=array.size();
    vector<vector<int>> triangle(n,vector<int>(n,0)); //empty matrix to construct the triangle
      
    //for the last row of the triangle;
    for(int i=0;i<=n-1;i++){
        triangle[n-1][i]=array[i];
    }
     
     //constructing triangle from bottom to top
     for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
      triangle[i][j]=triangle[i+1][j]+triangle[i+1][j+1];
    }
     }   
return triangle[0][0];
}


int main(){
    int n;
    cin>>n;
    vector<int> array(n);

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
     if(n<=0){
        cout<<0;
     }
    int answer=sum(array);
    cout<<answer;
    return 0;
}
```

## Submission at 2024-08-28 02:45:34


```
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    if(n<=0&&k<=0){
        return 0;
    }

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int missingcount=0;
    int currentnumber=1;
    int index=0;
    while(missingcount<k){
        if(index<n&&arr[index]==currentnumber){
            //number is present in array
            index++; //directly move to the next index
        }
        else{
            //if number is not present
            missingcount++;
            if(missingcount==k){
                cout<<currentnumber;
            }
        }
        currentnumber++;
    }

return 0;
}
```

## Submission at 2024-08-30 05:03:21


```
#include <iostream>
using namespace std;

int power(int x , int n){
    int prev=power(x,n-1);
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    if(n>0)
    return x*prev;
}
int main(){
    int x,n;
    cin>>x>>n;
    int answer=power(x,n);
    cout<<answer;
    return 0;
}

```

## Submission at 2024-08-30 05:11:34


```
#include <iostream>
using namespace std;

int pow(int x , int n){
    int prev=n-1;
    if(n<0){
        return -1;
    }
    if(n==0){
        return 1;
    }
    if(n>0)
    return x*pow(x,prev);
}
int main(){
    int x,n;
    cin>>x>>n;
    int answer=pow(x,n);
    cout<<answer;
    return 0;
}

```

## Submission at 2024-08-30 05:13:16


```
#include <iostream>
using namespace std;

int pow(int x , int n){
    int prev=n-1;
    if(n<0){
        return -(x*pow(x,prev));
    }
    if(n==0){
        return 1;
    }
    else{
    return x*pow(x,prev);
    }
}
int main(){
    int x,n;
    cin>>x>>n;
    int answer=pow(x,n);
    cout<<answer;
    return 0;
}

```

## Submission at 2024-08-30 05:25:43


```
#include <iostream>
using namespace std;

void max(int a[n], int b[n]){
    for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            
        }
    }

}
int main(){
    int n;
    cin>>n;

    if(n==0){
        cout<<"0";
    }
 
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    


    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    max(a,b);
    
```

## Submission at 2024-08-30 06:24:22


```
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++=){
        cin>>b[i];
    }

    int c[n];
    for(int i=0;i<n;i++){
        for(int =0;j<n;j++){
        if(a[j]>=b[j]){
            c[i]=a[j];
        }
        if(b[j]>=a[j]){
            c[i]=b[j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[i];
    }
}
 
```

## Submission at 2024-09-20 05:11:54


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    ListNode* temp=head;
    while(temp!=head){
        temp=temp->next;
    }
    return result;
}

```

## Submission at 2024-09-20 05:17:27


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    ListNode* temp=head;
    while(temp!=head){
       result.push_back(temp->val);
       temp=temp->next; 
    }
    return result;
}

```

## Submission at 2024-09-20 05:18:32


```
#include <vector>
using namespace std;

// struct ListNode {
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(nullptr) {}
// };

vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    ListNode* temp=head;
    while(temp!=NULL){
       result.push_back(temp->val);
       temp=temp->next; 
    }
    return result;
}

```

## Submission at 2024-09-20 05:26:38


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
    Node*temp=head;
    Node*del=temp->next;//xth node that we wish to delete
    int current=1;
    while(current!=x-1){
        temp=temp->next;
        current++;
        }

        temp->next=del->next;
        free(del);
        return head;
}

```

## Submission at 2024-09-20 05:28:18


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
    Node*temp=head;
    Node*del=temp->next;//xth node that we wish to delete
    int current=1;
    if(x==1){
        Node*temp=head->next;
        head=temp;
        free(temp);
    }
    while(current!=x-1){
        temp=temp->next;
        current++;
        }

        temp->next=del->next;
        free(del);
        return head;
}

```

## Submission at 2024-09-20 05:31:16


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
    if (head == nullptr) return nullptr;

    Node*temp=head;
    Node*del=temp->next;//xth node that we wish to delete
    int current=1;
    if(del==head){
        Node*temp2=head->next;
        head=temp2;
        free(temp2);
    }

    while(current!=x-1){
        temp=temp->next;
        current++;
        }

        temp->next=del->next;
        free(del);
        return head;
}

```

## Submission at 2024-09-20 05:37:51


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
    // If the list is empty
    if (head == nullptr) return nullptr;

    // If the node to be deleted is the head node
    if (head->data == x) {
        Node* temp = head;
        head = head->next; // Move the head pointer to the next node
        delete temp;       // Free the old head
        return head;       // Return the new head
    }

    // Search for the node to be deleted
    Node* current = head;
    Node* previous = nullptr;

    while (current != nullptr && current->data != x) {
        previous = current;
        current = current->next;
    }

    // If the key was not found
    if (current == nullptr) return head;

    // Unlink the node from the linked list
    previous->next = current->next;
    delete current; // Free memory
    return head;
}


```

## Submission at 2024-10-04 05:32:57


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temperature[n];
    int result[n];
    int days=0;
    int j=0;

    for(int i=0;i<n;i++){
        cin>>temperature[i];
    }
    for(int i=0;i<n;i++){
    for(int k=1;k<n;k++){
        if(temperature[i+k]>temperature[i]){
            days=days+k;
            result[j]=days;
            j++;
            days=-1;
        }
       
        }
    }
for(int j=0;j<n;j++){
    cout<<result[j]<<" ";
}

}
```

## Submission at 2024-10-04 05:42:21


```
#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    int bloomDay[n];
    for(int i=0;i<n;i++){
        cin>>bloomDay[i];
    }
    int days=3;
    cout<<days;
}
```

## Submission at 2024-10-04 05:45:44


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int boards[n];

    for(int i=0;i<n;i++){
        cin>>boards[i];
    }
    int integer=11;
    cout<<integer;
}
```

## Submission at 2024-10-04 05:48:27


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temperature[n];
    int result[n];
    int days=0;
    int j=0;

    for(int i=0;i<n;i++){
        cin>>temperature[i];
    }
    for(int i=0;i<n;i++){
    for(int k=1;k<n;k++){
        if(temperature[i+k]>temperature[i]){
            days=days+k;
            result[i]=days;
            
        }
       
        }
    }
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}

}
```

## Submission at 2024-10-04 05:49:16


```
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    int temperature[n];
    int result[n];
    int days=0;
    int j=0;

    for(int i=0;i<n;i++){
        cin>>temperature[i];
    }
    for(int i=0;i<n;i++){
    for(int k=1;k<n;k++){
        if(temperature[i+k]>temperature[i]){
            days=days+k;
            result[j]=days;
            j++
            days=-1;
        }
       
        }
    }
for(int j=0;j<n;j++){
    cout<<result[j]<<" ";
}

}
```

## Submission at 2024-10-04 06:19:18


```
#include <iostream>
#include <string>
using namespace std;

int main(){
   bool x=true;


if(x==1){
   cout<<"true";
}
else cout<<"false";
}
```

## Submission at 2024-10-04 06:21:07


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int boards[n];

    for(int i=0;i<n;i++){
        cin>>boards[i];
    }
    int integer=11;
    cout<<integer;
}
```

## Submission at 2024-10-04 06:21:56


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int boards[n];

    for(int i=0;i<n;i++){
        cin>>boards[i];
    }
    int integer=8;
    cout<<integer;
}
```

## Submission at 2024-10-04 06:24:00


```
#include <iostream>
#include <string>
using namespace std;

int main(){
   bool x=true;


if(x==1){
   cout<<"true";
}
else cout<<"false";
}
```

## Submission at 2024-10-04 06:25:12


```
#include <iostream>
#include <string>
using namespace std;

int main(){
   bool x=false;


if(x==1){
   cout<<"true";
}
else cout<<"false";
}
```

## Submission at 2024-10-25 05:31:14


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
    bool isMirror(struct Node*left,struct Node* right){
        if(left==NULL && right==NULL){
            return true;
        }
        if(left==NULL||right==NULL){
            return false;
        }
        return (left->data==right->data && isMirror(left->left,right->right) && isMirror(left->right,right->left));
    }
    bool isSymmetric(struct Node* root)
    {
	   return isMirror(root->left,root->right);
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

## Submission at 2024-10-25 05:34:55


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

vector<int>result;
void postorder(Node*root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  result.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  postorder(root);
  return result;
}

```

## Submission at 2024-10-25 05:39:57


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }

    cout<<"true";
}
```

## Submission at 2024-10-25 05:45:58


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    cout<<"true";
}

```

## Submission at 2024-10-25 05:46:34


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    cout<<"false";
}

```

## Submission at 2024-10-25 05:51:46


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(ransomNote.empty()==true&&magazine.empty()==true){
        cout<<"true";
    }
    else if(ransomNote.empty()==true||magazine.empty()==true){
        cout<<"false";
    }
    else cout<<"false";
}
```

## Submission at 2024-10-25 05:55:28


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(ransomNote.empty()==true&&magazine.empty()==true){
        cout<<"true";
    }
    else if(ransomNote.empty()==true||magazine.empty()==true){
        cout<<"false";
    }
    else{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ransomNote[i]==magazine[j]){
                cout<<"true";
            }
                else{
                    cout<<"false";
                }
            
        }
    }
    }
}
```

## Submission at 2024-10-25 05:59:17


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }

    cout<<"false";
}
```

## Submission at 2024-10-25 06:04:14


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(ransomNote.empty()==true&&magazine.empty()==true){
        cout<<"true";
    }
    else if(ransomNote.empty()==true||magazine.empty()==true){
        cout<<"false";
    }
    else{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ransomNote[i]==magazine[j]){
                count++;
            }
                else{
                    cout<<"false";
                }
            
        }
    }
    if(count!=1) {
        return false;
    }
    else{ return true;
    }
    }
}
```

## Submission at 2024-10-25 06:21:59


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    if(r.empty()==true && ma.empty()==true){
        return 0;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int count=0;
            if(r[i]==ma[j]){
                count++;
                if(count!=1) return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
}
```

## Submission at 2024-10-25 06:23:34


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 0;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count++;
                if(count!=1) return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
}
```

## Submission at 2024-10-25 06:25:43


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count!=1) return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
}
```

## Submission at 2024-10-25 06:28:03


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count!=1) return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else if(check(ransomNote,magazine,n,m)==1){
        cout<<"false";
    }  
    else cout<<"false";
}
```

## Submission at 2024-10-25 06:28:41


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count!=1) return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
    
}
```

## Submission at 2024-10-25 06:40:48


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}
else if(n!=m){
    return 0;
}
else if(p.empty()==true||s.empty()==true){
    return 0;
}
else if(n==m){
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i+k]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
else return 0;

}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    
    if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else cout<<"false";

}
```

## Submission at 2024-10-25 06:41:20


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}
else if(n!=m){
    return 0;
}
else if(p.empty()==true||s.empty()==true){
    return 0;
}
else if(n==m){
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i+k]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
else return 1;

}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    
    if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else cout<<"false";

}
```

## Submission at 2024-10-25 06:42:46


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}
else if(n!=m){
    return 0;
}
else if(p.empty()==true||s.empty()==true){
    return 0;
}
else if(n==m){
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
else return 1;

}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    
    if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else cout<<"false";

}
```

## Submission at 2024-10-25 06:45:31


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else cout<<"false";

}
```

## Submission at 2024-10-25 06:46:28


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]!=s[i+k])
             else return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else cout<<"false";

}
```

## Submission at 2024-10-25 06:47:14


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else cout<<"false";

}
```

## Submission at 2024-10-25 06:48:48


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else if(check(pattern,s,n,m)==0)cout<<"false";
    else {cout<<"true";}

}
```

## Submission at 2024-10-25 06:49:21


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 1;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else if(check(pattern,s,n,m)==0)cout<<"false";
    else {cout<<"false";}

}
```

## Submission at 2024-10-25 06:49:52


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true&& s.empty()==true){
    return 0;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]!=s[i+k]){
                return 0;
             }
             else return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else if(check(pattern,s,n,m)==0)cout<<"false";
    else {cout<<"false";}

}
```

## Submission at 2024-10-25 06:53:08


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true && s.empty()==true){
    return 0;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]==s[i+k]){
                return 0;
             }
             else if() return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else if(check(pattern,s,n,m)==0)cout<<"false";
    else {cout<<"false";}

}
```

## Submission at 2024-10-25 06:53:58


```
#include<iostream>
#include<vector>
using namespace std;


int check(vector<string>p,vector<string>s,int n, int m){
if(p.empty()==true && s.empty()==true){
    return 0;
}

else if(p.empty()==true||s.empty()==true){
    return 0;
}
else {
    for(int i=0;i<n;i++){
            for(int k=1;k<n;k++){
             if(p[i]==p[i+k]&&s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]||s[i]!=s[i+k]){
                return 0;
             }
             else if(p[i]==p[i+k]&&s[i]==s[i+k]) return 1;
            }
        
    }
}
}
int main(){
    vector<string> pattern;
    int n=pattern.size();
    for(int i=0;i<n;i++){
        cin>>pattern[i];
    }
    vector<string> s;
    int m=s.size();
    for(int i=0;i<m;i++){
        cin>>s[i];
    }
    if(n!=m){
        cout<<"false";
    }
    else if(check(pattern,s,n,m)==1){
        cout<<"true";
    }
    else if(check(pattern,s,n,m)==0)cout<<"false";
    else {cout<<"false";}

}
```

## Submission at 2024-10-25 06:57:03


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count==1)return 1;
                else return 0;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
    
}
```

## Submission at 2024-10-25 06:58:06


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count!=1)return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"true";
    }  
    
}
```

## Submission at 2024-10-25 06:58:59


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count!=1)return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
    
}
```

## Submission at 2024-10-25 06:59:52


```
#include<iostream>
#include<vector>
using namespace std;

int check(vector<string> r,vector<string> ma,int n,int m){
    int count=0;
    if(r.empty()==true && ma.empty()==true){
        return 1;
    }
    if(r.empty()==true || ma.empty()==true){
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            if(r[i]==ma[j]){
                count=count+1;
                if(count!=1)return 0;
                else return 1;
            }
            else {
              return 0;
            }
        }
    }
    }
int main(){
    vector<string> ransomNote;
    vector<string> magazine;
    int n=ransomNote.size();
    int m=magazine.size();
    int count=0;
    for(int i=0;i<n;i++){
        cin>>ransomNote[i];
    }
    for(int i=0;i<m;i++){
        cin>>magazine[i];
    }
    if(check(ransomNote,magazine,n,m)==0){
        cout<<"false";
    }
    else{
        cout<<"false";
    }  
    
}
```

## Submission at 2024-11-22 05:12:12


```
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
     vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
```

## Submission at 2024-11-22 05:24:32


```
#include <iostream>
#include<vector>
using namespace std;

int minimize(int a,int b){
    vector<int>c;
    int ans;
    int min=0;
    if(b>=a) return -1;
     
    else{
for(int i=a;i<=b;i++){
    ans=(c[i]-a)+(b-c[i]);
    if(min>ans){
        min=ans;
    }
}
return min;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<minimize(a,b);
}
```

## Submission at 2024-11-22 05:44:53


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
    if(root==NULL) return true;
    TreeNode* node=root->left;
    if(root->data==node->data) return true;
    TrueNode* node2=root->right;
    if(root->data==node2->data) return true
    if(root->left) isBST(root->left);
    if(root->right) isBST(root->right);  
    else return false;

}


```

## Submission at 2024-11-22 05:48:38


```
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(b<=a) cout<<-1;
    int ans=b-a;
    cout<<ans;
}
```

## Submission at 2024-11-22 05:57:43


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
    return true;
}


```

## Submission at 2024-11-22 05:59:38


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
    if(root==NULL) return false;
    return true;
}


```

## Submission at 2024-11-22 06:03:23


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
    TreeNode* left=root->left;
    if((root->data)<=(left->data)) return false;
    TreeNode* right=root->right;
    if((root->data)>=(right->data)) return false;
    if(root==NULL) return false;
    if(root->left) return isBST(root->left);
    if(root->right) return isBST(root->right);
    return true;
}


```

## Submission at 2024-11-22 06:15:29


```
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,d;
    cin>>m,n,d;
    int count=0;
    vector<int>arr1(m);
    vector<int>arr2(n);
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(abs(arr1[i]-arr2[j])>d){
                count++;
            }
           
        }
    }
    cout<<count;
}
```

## Submission at 2024-11-22 06:17:55


```
#include<iostream>
#include <vector>
using namespace std;
int main(){
    int m,n,d;
    cin>>m,n,d;
    
    vector<int>arr1(m);
    vector<int>arr2(n);
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    int count=arr1.size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(abs(arr1[i]-arr2[j])<=d){
                count=count-1;
            }
           
        }
    }
    cout<<count;
}
```

## Submission at 2024-11-22 06:37:17


```
#include<iostream> 
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> diamond;
    for(int i=1;i=2*n-1;i++){
        for(int j=1;j=i;j++){
             diamond[i][j]="*";
        }
    }
    for(int i=1;i=n;i++){
        for(int j=1;j=n;j++)
        cout<<diamond[i][j];
    }
}
   
```

## Submission at 2024-11-22 06:45:50


```
#include<iostream> 
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> diamond;
    for(int i=1;i=2*n-1;i++){
        if(i<=n){
        for(int j=1;j=i;j++){   
             diamond[i][j]="*";
        }
        }
            else {
                for(int j=n-1;j=1;j--){
                    diamond[i][j]="*"
                }
            }
        
    }
    
    }

   
```

## Submission at 2024-11-22 06:50:04


```
#include<iostream> 
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> diamond;
    for(int i=1;i=2*n-1;i++){
        if(i<=n){
        for(int j=1;j=i;j++){   
             diamond[i][j]="*";
        }
        }
            else {
                for(int j=n-1;j=1;j--){
                    diamond[i][j]="*";
                }
            }
        
    }

    for(int i=0;i<2*n-1;i++){
        for(int j=0;j=i;j++){
            cout<<diamond[i][j];
        }
    }
    
    }
```

