## Submission at 2024-08-09 04:43:51


```
#include<iostream>
using namespace std;

int main() {
    string name;
    cin >> name;
    cout << "Hello " << name << "!";
}
```

## Submission at 2024-08-09 04:57:59


```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string name;
    for(int i = 0; i < n; i++) {
        cin >> name;
        cout << "Hello " << name << "!" << endl;
    }
}
```

## Submission at 2024-08-09 05:05:40


```
#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;
    cout << "Hello " << name << "!";
}
```

## Submission at 2024-08-09 05:08:48


```
#include <iostream>
using namespace std;
 int main() {
    int n;
    string name;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> name;
        cout << "Hello " << name << "!" << endl;
    }
 }
```

## Submission at 2024-08-16 04:39:52


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x < 0) return -1;
    if( x == 0 || x == 1) return x;
    return fibonacci(x - 1) + fibonacci (x - 2);
}

int main() {
    int x;
    cin >> x;
    
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:55:32


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1 || n == 2) return true;
    if(n <= 0 || n % 2 != 0) return false;
    isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;

    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;

    return 0;
}

```

## Submission at 2024-08-16 04:55:46


```
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n == 1 || n == 2) return true;
    if(n <= 0 || n % 2 != 0) return false;
    isPowerOfTwo(n/2);
}

int main() {
    int n;
    cin >> n;
    cout << (isPowerOfTwo(n) ? "true" : "false") << endl;
    return 0;
}

```

## Submission at 2024-08-17 10:47:29


```
#include <bits/stdc++.h>
#include <vector>

using namespace std;

void combine(int start, int k, int n, vector<int>& current, vector<vector<int>>& result) {
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            if(i != j) {
                current.push_back(i);
                current.push_back(j);
                result.push_back(current);
            }
            current.clear();
        }
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

## Submission at 2024-08-24 12:43:20


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr[n],arr1[m];
    bool value = true;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    if(n != m) cout << "false";

    map<int,int>mpp;
    for(int i = 0; i < n; i++) {
        mpp[arr1[i]]++;
    }

    for(int i = 0; i < m; i++) {
        if(mpp[arr[i]] != 1) {
            cout << "false";
            value = false;
            break;
        }
    }

    if(value) cout << "true";

    return 0;
}
```

## Submission at 2024-08-24 12:48:23


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr[n],arr1[m];
    bool value = true;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }

    if(n != m) {
        cout << "false";
        return 0;
    };

    map<int,int>mpp;
    for(int i = 0; i < m; i++) {
        mpp[arr1[i]]++;
    }

    for(int i = 0; i < m; i++) {
        if(mpp[arr[i]] != 1) {
            cout << "false";
            value = false;
            break;
        }
    }

    if(value) cout << "true";

    return 0;
}
```

## Submission at 2024-08-24 13:04:32


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = i+1;
        if((i+1) % 3 == 0 || (i+1) % 5 == 0 || (i+1) % 7 == 0) {
            sum = sum + arr[i];
        }
    }
    cout << sum;
    return 0;
}
```

## Submission at 2024-08-24 13:17:44


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int count = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if((to_string(arr[i]).length()) % 2 == 0) count++;
    }
    cout << count;
    return 0;
}
```

## Submission at 2024-08-24 13:57:07


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    map<int,int>mpp;
    int count = 1;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for(int i = 1; i <= 1000; i++) {
        if(mpp[i] != 1) {
            if(count == k) {
                cout << i;
                return 0;
            }
            count++;
        }
    }

    return 0;
}
```

## Submission at 2024-08-28 03:36:31


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int row,column;
    cin >> row >> column;
    int arr[row][column];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    for(int j = 0; j < column; j++) {
        for(int i = 0; i < row; i++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
```

## Submission at 2024-08-28 03:45:09


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int row,column;
    cin >> row >> column;
    int arr[row][column];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            cin >> arr[i][j];
        }
    }

    for(int j = 0; j < column; j++) {
        for(int i = 0; i < row; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
```

## Submission at 2024-08-28 08:37:14


```
#include<bits/stdc++.h>
using namespace std;

void triangularSum(int arr[],int n) {
    if(n == 0) return;
    int arr1[n];
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j <= i+1; j++) {
            arr1[i] = arr[i] + arr[j];
        }
    }
    if(sizeof(arr1)/sizeof(int) == 2) cout << arr1[0];
    triangularSum(arr1,n-1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    triangularSum(arr,n);
}
```

## Submission at 2024-08-28 08:40:09


```
#include<bits/stdc++.h>
using namespace std;

void triangularSum(int arr[],int n) {
    if(n == 0) return;
    int arr1[n];
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j <= i+1; j++) {
            arr1[i] = arr[i] + arr[j];
        }
    }
    if(sizeof(arr1)/sizeof(int) == 2) cout << arr1[0];
    triangularSum(arr1,n-1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n == 1) cout << arr[0];
    triangularSum(arr,n);
}
```

## Submission at 2024-08-28 08:42:36


```
#include<bits/stdc++.h>
using namespace std;

void triangularSum(int arr[],int n) {
    if(n == 0) return;
    int arr1[n];
    for(int i = 0; i < n; i++) {
        arr1[i] = arr[i] + arr[i+1];
    }
    if(sizeof(arr1)/sizeof(int) == 2) cout << arr1[0];
    triangularSum(arr1,n-1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if(n == 1) cout << arr[0];
    triangularSum(arr,n);
}
```

## Submission at 2024-08-30 04:40:25


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x < 0) return -1;
    if(x == 0 || x == 1) return 1;
    return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-30 04:41:00


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    if(x < 0) return -1;
    if(x == 0 || x == 1) return x;
    return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-30 05:01:37


```
#include <iostream>
using namespace std;
void Pow(int x, int n) {
    int product = x;
    if(n == 0) {
        cout << product;
        return;
    };
    product = product * x;
    Pow(x,n-1);
}

int main() {
    int x,n;
    cin >> n >> x;
    Pow(x,n);
}

```

## Submission at 2024-08-30 05:10:15


```
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        c[i] = max(a[i],b[i]);
        cout << c[i] << " ";
    }
    return 0;
}
```

## Submission at 2024-08-30 05:17:52


```
#include <iostream>
using namespace std;

void Pow(float x, int n) {
    float product = x;
    if(n == 0) {
        cout << (int)product;
        return;
    }
    product = product * x;
    Pow(x,n-1);
}

int main() {
    float x;
    int n;
    cin >> x >> n;
    if(n == 0) {
        cout << 1;
        return 0;
    }
    Pow(x,n);
}

```

## Submission at 2024-08-30 05:22:37


```
#include <iostream>
using namespace std;

void Pow(float x, int n) {
    float product = x;
    if(n == 0) {
        cout << (int)product;
        return;
    }
    else if(n > 0) {
        product = product * x;
        Pow(x,n-1);
    }
    else {
        product = 1/x;
        product = product * (1/x);
        Pow(x,n+1);
    }
}

int main() {
    float x;
    int n;
    cin >> x >> n;
    if(n == 0) {
        cout << 1;
        return 0;
    }
    Pow(x,n);
}

```

## Submission at 2024-08-30 05:51:39


```
#include <iostream>
using namespace std;

void isPalindrome(string s, int i, bool flag) {
    if(i >= s.length()) {
        if(flag == true) cout << "YES";
        return;
    }
    if(s[i] == s[s.length()-i-1]) {
        flag = true;
        isPalindrome(s,i+1,flag);
    } else {
        cout << "NO";
        return;
    }
}

int main() {
    string s;
    cin >> s;
    isPalindrome(s,0,false);
}
```

## Submission at 2024-09-06 05:30:51


```

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    int sum = 0;
    vector<int>ans;
    int n = matrix.size();
    int m = matrix[0].size();
    while(sum != (n-1)+(m-1)+1) {
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(i + j == sum) {
                    ans.push_back(matrix[j][i]);
                }
            }
        }
        sum++;
    }
    return ans;
}

```

## Submission at 2024-10-04 05:28:53


```
#include<bits/stdc++.h>
using namespace std;

void findTemp(int n, int arr[]) {
    int ans[n];
    for(int i = 0; i < n; i++) {
        int distance = 0;
        for(int j = i+1; j < n; j++) {
            if(arr[i] >= arr[j]) {
                distance++;
            }
            else {
                ans[i] = distance;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findTemp(n,arr);
}
```

## Submission at 2024-10-04 05:32:28


```
#include<bits/stdc++.h>
using namespace std;

void findTemp(int n, int arr[]) {
    int ans[n];
    for(int i = 0; i < n; i++) {
        int distance = 0;
        for(int j = i+1; j < n; j++) {
            if(arr[i] >= arr[j]) {
                distance++;
            }
            else if (arr[i] < arr[j]) {
                distance++;
                ans[i] = distance;
                break;
            }
            else {
                ans[i] = distance;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findTemp(n,arr);
}
```

## Submission at 2024-10-04 05:33:28


```
#include<bits/stdc++.h>
using namespace std;

void findTemp(int n, int arr[]) {
    int ans[n];
    for(int i = 0; i < n; i++) {
        int distance = 0;
        for(int j = i+1; j < n; j++) {
            if(arr[i] >= arr[j]) {
                distance++;
            }
            else if (arr[i] < arr[j]) {
                distance++;
                ans[i] = distance;
                break;
            }
            else {
                ans[i] = distance;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    findTemp(n,arr);
}
```

## Submission at 2024-10-04 05:52:49


```
#include<bits/stdc++.h>
using namespace std;

int countDays(int n, int arr[], int mid) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= mid) {
            count++;
        }
    }
    return count;
}

int search(int n, int k, int m, int arr[]) {
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    int flowers = k * m;
    int ans;
    while(low <= high) {
        int mid = (low + high) / 2;
        int days = countDays(n,arr,mid);
        if(days == flowers) {
            ans = days;
            high = mid - 1;
        }
        else if(days < flowers) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n,k,m;
    cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,k,m,arr);
}
```

## Submission at 2024-10-04 05:53:31


```
#include<bits/stdc++.h>
using namespace std;

int countDays(int n, int arr[], int mid) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= mid) {
            count++;
        }
    }
    return count;
}

int search(int n, int k, int m, int arr[]) {
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    int flowers = k * m;
    int ans;
    while(low <= high) {
        int mid = (low + high) / 2;
        int days = countDays(n,arr,mid);
        if(days == flowers) {
            ans = days;
            high = mid - 1;
        }
        else if(days < flowers) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n,k,m;
    cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,k,m,arr);
}
```

## Submission at 2024-10-04 05:55:38


```
#include<bits/stdc++.h>
using namespace std;

int countDays(int n, int arr[], int mid) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= mid) {
            count++;
        }
    }
    return count;
}

int search(int n, int k, int m, int arr[]) {
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    int flowers = k * m;
    int ans = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        int days = countDays(n,arr,mid);
        if(days == flowers) {
            ans = days;
            high = mid - 1;
        }
        else if(days < flowers) {
            low = mid + 1;
        }
        else if {
            high = mid - 1;
        }
    }
    if(ans == 0) {
        return -1;
    }
    else {
        return ans;
    }
}

int main() {
    int n,k,m;
    cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,k,m,arr);
}
```

## Submission at 2024-10-04 05:59:24


```
#include<bits/stdc++.h>
using namespace std;

int countDays(int n, int arr[], int mid) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= mid) {
            count++;
        }
    }
    return count;
}

int search(int n, int k, int m, int arr[]) {
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    int flowers = k * m;
    int ans;
    while(low <= high) {
        int mid = (low + high) / 2;
        int days = countDays(n,arr,mid);
        if(days == flowers) {
            return ans;
        }
        else if(days < flowers) {
            low = mid + 1;
        }
        else if {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n,k,m;
    cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,k,m,arr);
}
```

## Submission at 2024-10-04 05:59:54


```
#include<bits/stdc++.h>
using namespace std;

int countDays(int n, int arr[], int mid) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= mid) {
            count++;
        }
    }
    return count;
}

int search(int n, int k, int m, int arr[]) {
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    int flowers = k * m;
    while(low <= high) {
        int mid = (low + high) / 2;
        int days = countDays(n,arr,mid);
        if(days == flowers) {
            return mid;
        }
        else if(days < flowers) {
            low = mid + 1;
        }
        else if {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n,k,m;
    cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,k,m,arr);
}
```

## Submission at 2024-10-04 06:00:45


```
#include<bits/stdc++.h>
using namespace std;

int countDays(int n, int arr[], int mid) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= mid) {
            count++;
        }
    }
    return count;
}

int search(int n, int k, int m, int arr[]) {
    sort(arr,arr+n);
    int low = 0;
    int high = n-1;
    int flowers = k * m;
    while(low <= high) {
        int mid = (low + high) / 2;
        int days = countDays(n,arr,mid);
        if(days == flowers) {
            return mid;
        }
        else if(days < flowers) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n,k,m;
    cin >> n >> m >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,k,m,arr);
}
```

## Submission at 2024-10-04 06:24:43


```
#include<bits/stdc++.h>
using namespace std;

int countPainter(int n, int arr[], int k, int mid) {
    int count = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum > mid) {
            count++;
            sum = arr[i];
        }
        else {
            sum += arr[i];
        }
    }
    return count;
}

int search(int n, int arr[], int k) {
    int low = 0;
    int high = n-1;
    while(low <= high) {
        int mid = (low + high) / 2;
        int painter = countPainter(n,arr,k,mid);
        if(painter == k) {
            return mid;
        }
        else if(painter > k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << search(n,arr,k);
}
```

## Submission at 2024-10-04 06:28:26


```
#include<bits/stdc++.h>
using namespace std;

int countPainter(int n, int arr[], int k, int mid) {
    int count = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum > mid) {
            count++;
            sum = arr[i];
        }
        else {
            sum += arr[i];
        }
    }
    return count;
}

int search(int n, int arr[], int k, int sum) {
    int low = *max_element(arr,arr+n);
    int high = sum;
    int ans;
    while(low <= high) {
        int mid = (low + high) / 2;
        int painter = countPainter(n,arr,k,mid);
        if(painter == k) {
            ans = mid;
            high = mid - 1;
        }
        else if(painter > k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}

int main() {
    int n,k;
    int sum = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << search(n,arr,k,sum);
}
```

## Submission at 2024-10-25 05:29:02


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
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}

```

## Submission at 2024-10-25 05:29:47


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
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}

```

## Submission at 2024-10-25 05:30:26


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
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}

```

## Submission at 2024-10-25 05:32:54


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
void traverse(Node* root, vector<int> &ans) {
  if(root == NULL) {
    return;
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  traverse(root,ans);
  return ans;
}

```

## Submission at 2024-10-25 05:33:59


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
void traverse(Node* root, vector<int> &ans) {
  if(root == NULL) {
    return;
  }
  if(root->left) postOrder(root->left);
  ans.push_back(root->data);
  if(root->right) postOrder(root->right);
}

vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  traverse(root,ans);
  return ans;
}

```

## Submission at 2024-10-25 05:34:33


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
void traverse(Node* root, vector<int> &ans) {
  if(root == NULL) {
    return;
  }
  ans.push_back(root->data);
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
}

vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  traverse(root,ans);
  return ans;
}

```

## Submission at 2024-10-25 05:35:00


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
void traverse(Node* root, vector<int> &ans) {
  if(root == NULL) {
    return;
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
}

vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  traverse(root,ans);
  return ans;
}

```

## Submission at 2024-10-25 05:49:55


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    string r,m;
    cin >> r >> m;
    bool ans = true;
    unordered_map<char,int>mp;
    for(int i = 0; i < m.length(); i++) {
        mp[m[i]]++;
    }
    for(int i = 0; i < r.length(); i++) {
        if(mp[r[i]] == 0) {
            ans = false;
        }
        else {
            mp[r[i]]--;
        }
    }
    return ans;
}
```

## Submission at 2024-10-25 05:53:28


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    string r,m;
    cin >> r >> m;
    bool ans = true;
    unordered_map<char,int>mp;
    for(int i = 0; i < m.length(); i++) {
        mp[m[i]]++;
    }
    for(int i = 0; i < r.length(); i++) {
        if(mp[r[i]] == 0) {
            ans = false;
        }
        else {
            mp[r[i]]--;
        }
    }
    if(ans == false) cout << "false";
    else {
        cout << "true";
    }
}
```

## Submission at 2024-10-25 06:00:35


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
vector <int> postOrder(Node* root) {
  if(root == NULL) {
    return;
  }
  vector<int>ans;
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}
```

## Submission at 2024-10-25 06:03:43


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
  if(root == NULL) {
    return {};
  }
  vector<int>ans;
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}

```

## Submission at 2024-10-25 06:04:48


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
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  if(root->left) postOrder(root->left);
  if(root->right) postOrder(root->right);
  ans.push_back(root->data);
  return ans;
}

```

## Submission at 2024-10-25 06:22:48


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

    void traverse(struct Node* root, Node* leftPart, Node* rightPart, bool &ans) {
        if(leftPart->data == rightPart->data) {
            ans = true;
        }
        traverse(root,leftPart->left,rightPart->right,ans);
        traverse(root,leftPart->right,rightPart->left,ans);
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool ans = false;
        if(root == NULL) {
            ans = true;
        }
        traverse(root,root->left,root->right,ans);
        return ans;
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

## Submission at 2024-10-25 06:38:08


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node* root, vector<int> &ans) {
  if(root == NULL) {
    return ans;
  }
  if(root->left) {
    traverse(root->left,ans);
  }
  if(root->right) {
    traverse(root->right,ans);
  }
  ans.push_back(root->data);
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  traverse(root,ans);
  return ans;
}

```

## Submission at 2024-10-25 06:40:01


```
/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void traverse(Node* root, vector<int> &ans) {
  if(root == NULL) {
    return;
  }
  if(root->left) {
    traverse(root->left,ans);
  }
  if(root->right) {
    traverse(root->right,ans);
  }
  ans.push_back(root->data);
}
//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  vector<int>ans;
  if(root == NULL) {
    return ans;
  }
  traverse(root,ans);
  return ans;
}

```

## Submission at 2024-10-25 06:44:03


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
    bool ans = true;
    return ans;
}


```

## Submission at 2024-10-25 06:45:54


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
void traverse(struct Node* root, Node* leftPart, Node* rightPart, bool &ans) {
        if(leftPart->data == rightPart->data) {
            ans = true;
        }
        traverse(root,leftPart->left,rightPart->right,ans);
        traverse(root,leftPart->right,rightPart->left,ans);
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool ans = false;
        if(root == NULL) {
            ans = true;
        }
        traverse(root,root->left,root->right,ans);
        return ans;
    }


```

## Submission at 2024-10-25 06:47:02


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
void traverse(struct Node* root, Node* leftPart, Node* rightPart, bool ans) {
        if(leftPart->data == rightPart->data) {
            ans = true;
        }
        traverse(root,leftPart->left,rightPart->right,ans);
        traverse(root,leftPart->right,rightPart->left,ans);
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool ans = false;
        if(root == NULL) {
            ans = true;
        }
        traverse(root,root->left,root->right,ans);
        return ans;
    }


```

## Submission at 2024-10-25 06:48:26


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
void traverse(struct Node* root, Node* leftPart, Node* rightPart, bool ans) {
        if(leftPart->data == rightPart->data) {
            ans = true;
        }
        traverse(root,leftPart->left,rightPart->right,ans);
        traverse(root,leftPart->right,rightPart->left,ans);
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool ans = false;
        if(root == NULL) {
            ans = true;
        }
        traverse(root,root->left,root->right,ans);
        return ans;
    }
}
```

## Submission at 2024-10-25 06:49:39


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
void traverse(struct Node* root, Node* leftPart, Node* rightPart, bool ans) {
        if(leftPart->data == rightPart->data) {
            ans = true;
        }
        traverse(root,leftPart->left,rightPart->right,ans);
        traverse(root,leftPart->right,rightPart->left,ans);
    }
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
        bool ans = false;
        if(root == NULL) {
            ans = true;
        }
        traverse(root,root->left,root->right,ans);
        return ans;
    }
};
```

## Submission at 2024-11-15 04:38:37


```
#include <vector>
#include <algorithm>

int timeRequiredToBuy(std::vector<int>& tickets, int k) {
    int time = 0;
    int n = tickets.size();
    
    for (int i = 0; i < n; ++i) {
        // Add the minimum tickets each person will need to buy based on their position relative to k
        if (i <= k) {
            time += std::min(tickets[i], tickets[k]);
        } else {
            time += std::min(tickets[i], tickets[k] - 1);
        }
    }
    
    return time;
}
```

## Submission at 2024-11-22 05:10:52


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<int,int>mp;
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
    }
    int count = 0;
    for(auto it : mp) {
        if(it.first >= 2) {
            count += it.first % 2;
        }
    }
    cout << count;
}
```

## Submission at 2024-11-22 05:20:05


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
}
```

## Submission at 2024-11-22 05:25:04


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << b-a;
}
```

## Submission at 2024-11-22 05:37:24


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << "*" << endl;
        }
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = n-1; j > 0; j--) {
            cout << "*" << endl;
        }
    }
}
```

## Submission at 2024-11-22 05:40:48


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = n-1; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}
```

## Submission at 2024-11-22 05:53:00


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unordered_map<int,int>mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    int min = INT_MAX;
    for(auto it : mp) {
        if(it.first < min) {
            min = it.first;
        } 
    }
    int minNum = INT_MIN;
    for(auto it : mp) {
        if(it.first == min) {
            if(it.second > minNum) {
                minNum = it.second;
            }
        }
    }
    cout << minNum;
}
```

## Submission at 2024-11-22 06:07:05


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,d;
    cin >> m >> n >> d;
    int arr1[m];
    int arr2[n];
    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    int count = 0;
    bool ans = false;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(abs(arr1[i] - arr2[j]) > 2) {
                ans = true;
            }
            else {
                ans = false;
                break;
            }
        }
        if(ans) {
            count++;
        }
    }
    cout << count;
}
```

## Submission at 2024-11-22 06:08:40


```
#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n,d;
    cin >> m >> n >> d;
    int arr1[m];
    int arr2[n];
    for(int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    int count = 0;
    bool ans = false;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(abs(arr1[i] - arr2[j]) > d) {
                ans = true;
            }
            else {
                ans = false;
                break;
            }
        }
        if(ans) {
            count++;
        }
    }
    cout << count;
}
```

## Submission at 2024-11-22 06:29:08


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
bool checkSorted(vector<int>tree) {
    bool sorted = false;
    for(int i = 0; i < tree.size()-1; i++) {
        if(tree[i] < tree[i+1]) {
            sorted = true;
        }
        else {
            sorted = false;
            break;
        }
    }
    return sorted;
}

bool isBST(struct Node* root)
{
    vector<int>tree;
    if(root == NULL) {
        return true;
    }
    if(root->left) {
        isBST(root->left);
    }
    tree.push_back(root->data);
    if(root->right) {
        isBST(root->right);
    }
    bool ans = checkSorted(tree);
    return ans;
}


```

## Submission at 2024-11-22 06:32:54


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
bool checkSorted(vector<int>tree) {
    bool sorted = true;
    for(int i = 0; i < tree.size()-1; i++) {
        if(tree[i] > tree[i+1]) {
            sorted = false;
        }
    }
    return sorted;
}

bool isBST(struct Node* root)
{
    vector<int>tree;
    if(root == NULL) {
        return true;
    }
    if(root->left) {
        isBST(root->left);
    }
    tree.push_back(root->data);
    if(root->right) {
        isBST(root->right);
    }
    bool ans = checkSorted(tree);
    return ans;
}


```

## Submission at 2024-11-22 06:47:38


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
    vector<int>el;
    Node* temp = head;
    while(temp != NULL) {
        el.push_back(temp->data);
        temp = temp->next;
    }
    unordered_map<int,int>mp;
    for(int i = 0; i < el.size(); i++) {
        mp[el[i]]++;
    }
    for(auto it : mp) {
        if(it.second > 1) {
            while(it.second != 0) {
                el.remove(it.first);
                mp[it.first]--;
            }
        }
    }
    Node* newHead = new Node(el[0]);
    Node* newTemp = newHead;
    for(int i = 1; i < el.size(); i++) {
        newTemp->next = new Node(el[i]);
        newTemp = newTemp->next;
    }
    return newHead;
}

```

## Submission at 2024-11-22 06:59:42


```
/*You are required to complete below method*/
#include<bits/stdc++.h>
using namespace std;

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
    vector<int>el;
    Node* temp = head;
    while(temp != NULL) {
        el.push_back(temp->data);
        temp = temp->next;
    }
    unordered_map<int,int>mp;
    for(int i = 0; i < el.size(); i++) {
        mp[el[i]]++;
    }
    for(auto it : mp) {
        if(it.first > 1) {
            while(it.first != 0) {
                el.remove(it.second);
                mp[it.first]--;
            }
        }
    }
    Node* newHead = new Node(el[0]);
    Node* newTemp = newHead;
    for(int i = 1; i < el.size(); i++) {
        newTemp->next = new Node(el[i]);
        newTemp = newTemp->next;
    }
    return newHead;
}
```

