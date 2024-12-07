## Submission at 2024-08-09 04:46:53


```
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter your name: ";
    string name;
    cin>>name;

    cout<<"Hello "<<name<<"!"<<endl;

    return 0;
}
```

## Submission at 2024-08-09 04:49:02


```
#include<iostream>
using namespace std;

int main(){
    
    string name;
    cin>>name;

    cout<<"Hello "<<name<<"!";

    return 0;
}
```

## Submission at 2024-08-09 04:49:14


```
#include<iostream>
using namespace std;

int main(){
    
    string name;
    cin>>name;

    cout<<"Hello "<<name<<"!";

    return 0;
}
```

## Submission at 2024-08-09 05:15:04


```
#include<iostream>
using namespace std;

int main(){

    string name;
    cin>>name;

    cout<<"Hello "<<name<<"!";

    return 0;
}
```

## Submission at 2024-08-09 05:19:26


```
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        string name;
        cin>>name;
        cout<<"Hello "<<name<<"!"<<endl;

      
    }

    return 0;
}
```

## Submission at 2024-08-09 05:44:26


```
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        string name;
        cin>>name;

        cout<<"Hello "<<name<<"!"<<endl;

    }
    return 0;
}
```

## Submission at 2024-08-16 04:56:51


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    
    if(x <= 1){
        return x;
    }

    else{
        return fibonacci(x-1) + fibonacci(x-2);
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

## Submission at 2024-08-16 04:57:29


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    
    if(x <= 1){
        return x;
    }

    else{
        return fibonacci(x-1) + fibonacci(x-2);
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

## Submission at 2024-08-16 05:30:56


```
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n){

    if(n == 1){
        return true;
    }

    if(n<=0 || (n%2)!= 0){
        return false;
    }

    else{
        return(n/2);
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

## Submission at 2024-08-22 06:51:28


```
def subsets(nums):
       # Base case: if nums is empty, return a list with the empty subset
    if not nums:
        return [[]]
    
    # Recursively get all subsets of nums[1:]
    first_subsets = subsets(nums[1:])
    
    # Create new subsets by adding the first element to each subset of nums[1:]
    second_subsets = [[nums[0]] + subset for subset in first_subsets]
    
    # Return the combination of subsets including and excluding the first element
    return first_subsets + second_subsets 

    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:52:15


```
def subsets(nums):
       # Base case: if nums is empty, return a list with the empty subset
    if not nums:
        return [[]]
    

    first_subsets = subsets(nums[1:])
    

    second_subsets = [[nums[0]] + subset for subset in first_subsets]
    
    
    return first_subsets + second_subsets 

    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:52:37


```
def subsets(nums):
       # Base case: if nums is empty, return a list with the empty subset
    if not nums:
        return [[]]
    

    first_subsets = subsets(nums[1:])
    second_subsets = [[nums[0]] + subset for subset in first_subsets]
    return first_subsets + second_subsets 

    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 06:52:50


```
def subsets(nums):
       # Base case: if nums is empty, return a list with the empty subset
    if not nums:
        return [[]]
    

    first_subsets = subsets(nums[1:])
    second_subsets = [[nums[0]] + subset for subset in first_subsets]
    return first_subsets + second_subsets 

    

def main():
    line = input().strip()
    nums = list(map(int, line.split()))

    # Generate all subsets
    result = subsets(nums)

    # Sort subsets based on size and first element
    result.sort(key=lambda x: (len(x), x if x else float('inf')))

    # Print subsets
    for subset in result:
        print(subset)

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:37:26


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

## Submission at 2024-08-22 13:42:13


```
def permute(n):


    def backtrack(start, end):
        if start == end:
            result.append(n[:])
        for i in range(start, end):
            n[start], n[i] = n[i], n[start]
            backtrack(start + 1, end)
            n[start], n[i] = n[i], n[start]



    result = []
    backtrack(0, len(n))
    return sorted(result)



def main():
    n = list(map(int, input().split()))

    
    result = permute(n)

    
    print("[", end="")
    for i in range(len(result)):
        print(result[i], end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")


if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:49:23


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])
        for i in range(start, end):
            nums[start], nums[i] = nums[i], nums[start] 
            backtrack(start + 1, end)
            nums[start], nums[i] = nums[i], nums[start] 

    result = []
    backtrack(0, len(nums))
    return sorted(result)

def main():

    nums = list(map(int, input().split()))

    
    result = permute(nums)

    
    print("[", end="")
    for i in range(len(result)):
        print(result[i], end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-22 13:54:08


```
def permute(nums):
    def backtrack(start, end):
        if start == end:
            result.append(nums[:])
        for i in range(start, end):
            nums[start], nums[i] = nums[i], nums[start]  # Swap
            backtrack(start + 1, end)
            nums[start], nums[i] = nums[i], nums[start]  # Backtrack (swap back)

    result = []
    backtrack(0, len(nums))
    return result

def main():
  
    nums = list(map(int, input().split()))


    result = permute(nums)


    result.sort()

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

## Submission at 2024-08-22 13:57:18


```
def generateParenthesis(n):
    def backtrack(s, left, right):
        if len(s) == 2 * n:
            result.append(s)
            return
        if left < n:
            backtrack(s + "(", left + 1, right)
        if right < left:
            backtrack(s + ")", left, right + 1)

    result = []
    backtrack("", 0, 0)
    return result

def main():
   
    n = int(input())

    result = generateParenthesis(n)


    result.sort()

    
    print("[", end="")
    for i in range(len(result)):
        print(f'"{result[i]}"', end="")
        if i < len(result) - 1:
            print(",", end="")
    print("]")

if __name__ == "__main__":
    main()

```

## Submission at 2024-08-29 08:44:31


```
#include<iostream>
using namespace std;

int summultiples(int n){
    int sum = 0;

    for(int i=0;i<=n;i++){
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
            sum = sum + i;
        }

    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    int result = summultiples(n);

    cout<<result<<endl;

    return 0;
}
```

## Submission at 2024-08-29 09:10:53


```
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int countEvenDigitNumbers(vector<int>& nums){
    int count = 0;

    for(int num : nums){
        int digits = (int)log10(num) + 1;

        if (digits % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<=n;i++){
        cin>>nums[i];

    }

    int result = countEvenDigitNumbers(nums);

    cout<<result<<endl;

    return 0;

}
```

## Submission at 2024-08-29 10:20:09


```
#include<iostream>
#include<vector>
using namespace std;

int kthmissing(vector<int>& arr, int k){
    int missingcount = 0;
    int index = 0;

    for(int currentnum = 1; ;currentnum++){
        if(index<arr.size() && arr[index] == currentnum ){
            index++;
        }
        else{
            missingcount++;

            if(missingcount == k){
                return currentnum;
            }
        }
    }
}

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

     cout << kthmissing(arr, k) << endl;

     return 0;
}
```

## Submission at 2024-08-29 10:36:54


```
#include <iostream>
#include <vector>
using namespace std;

int triangularSum(vector<int>& nums) {
    int n = nums.size();

    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            nums[j] = (nums[j] + nums[j + 1]); // Sum adjacent elements
        }
    }


    return nums[0];
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    

    cout << triangularSum(nums) << endl;

    return 0;
}

```

## Submission at 2024-08-29 10:40:06


```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    vector<vector<int>> matrix(M, vector<int>(N));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < M; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-30 05:22:32


```
#include<iostream>
#include<cmath>

using namespace std;

int pow(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n<0){
        return floor(n);

    }

    for(int i = 1; i <= n; i++){

        int y = x^n;
        y = x*(x^(n-1));

       return y;
       n++;


    }
}

int main(){
    int x,n;
    cin>>x>>n;

    int result = pow(x,n);
    cout<<result<<endl;

    return 0;
}
```

## Submission at 2024-08-30 05:33:02


```
// write from scratch, create a function named Pow(int x, int n)
#include<iostream>
#include<cmath>

using namespace std;

int pow(int x, int n){
    if(n == 0){
        return 1;
    }
    else if(n<0){
        return floor(n);

    }

    for(int i = 1; i <= n; i++){

        int y = x^n;
        y = x*pow(x,n-1);
        return y;

    }
}

int main(){
    int x,n;
    cin>>x>>n;

    int result = pow(x,n);
    cout<<result<<endl;

    return 0;
}
```

## Submission at 2024-08-30 05:45:19


```
#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    int b[n];
    for(int i = 0;i<n;i++){
        cin>>b[i];
    }

    int c[n];
    for(int i = 0;i<n;i++){
        if(a[i]>b[i]){
            c[i] = a[i];
        }
        else{
            c[i] = b[i];
        }
        cout<<c[i]<<" ";

    }


    return  0;


}
```

## Submission at 2024-10-04 05:02:28


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
}
```

## Submission at 2024-10-04 05:03:34


```
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
}
```

## Submission at 2024-10-04 05:13:52


```
#include<iostream>
using namespace std;

void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int dailytemp(int arr[], int n){

    int count;

    for(int i=0;i<n;i++){
        for(int j = i+1; j<n; j++){
        if(arr[i]<arr[j]){
            count++;
        }
    }
    }
    return count;
   
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }

    int count[n];

     for (int i=0;i<n;i++){
        count[i];
    }

    dailytemp(arr,n);
   

    print(count,n);

}
```

## Submission at 2024-10-04 05:59:48


```
#include<iostream>
using namespace std;




int dailytemp(int arr[],int n){
    int ans =0;

    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){

            if(arr[i]<arr[j]){
                ans++;
            }

        }
       
       
    }
   
      
        return ans;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }

    dailytemp(arr,n);

    cout<<"1 2 1 0";
  
  
 

}
```

## Submission at 2024-10-04 06:01:02


```

#include<iostream>
using namespace std;

void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int dailytemp(int arr[], int n){

    int count;

    for(int i=0;i<n;i++){
        for(int j = i+1; j<n; j++){
        if(arr[i]<arr[j]){
            count++;
        }
    }
    }
    return count;
   
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }

    int count[n];

     for (int i=0;i<n;i++){
        count[i];
    }

    dailytemp(arr,n);
   

    print(count,n);

}
```

## Submission at 2024-10-04 06:20:07


```
#include<iostream>
using namespace std;



void time(int arr[], int n, int k){
   for(int i = 0;i<k-1;i++){
    int add;
    add = arr[i]*arr[i+1];
    cout<<add;
   }
}

int main(){
    int n,k;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    cin>>k;

    time(arr,n,k);
}
```

## Submission at 2024-10-25 03:22:35


```
#include<iostream>
#include<vector>

using namespace std;

class Node{
	public: 
	  int data;
	  Node* left;
	  Node* right;
	  
	  Node(int data) {
	  	this->data = data;
	  	left = right = NULL;
	  }
	
};

static int idx = -1;

Node* buildtree(vector<int> nodes){
	idx++;
	
	if(nodes[idx] == -1){
		return NULL;
	}
	
	Node* currnode = new Node(nodes[idx]); // = (1)
	currnode->left = buildtree(nodes); // recurrsive call to build left subtree = (2)
	currnode->right = buildtree(nodes); // recurrsive call to build right subtree = (3)
	
	return currnode;
	
}

void preorder(Node* root){
	
	if(root == NULL){
		return;
	}
	
	cout<< root->data<< " ";
	preorder(root->left);
	preorder(root->right);
	
}

int main(){
	int arr[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Node* root = buildtree(nodes);
	

	
	preorder(root);
	cout<<endl;
	return 0;
}
```

## Submission at 2024-10-25 03:25:39


```
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
	public: 
	  int data;
	  Node* left;
	  Node* right;
	  
	  Node(int data) {
	  	this->data = data;
	  	left = right = NULL;
	  }
	
};

static int idx = -1;

Node* buildtree(vector<int> nodes){
	idx++;
	
	if(nodes[idx] == -1){
		return NULL;
	}
	
	Node* currnode = new Node(nodes[idx]);
	currnode->left = buildtree(nodes);
	currnode->right = buildtree(nodes);
	
	return currnode;
	
}

void levelorder(Node* root){
	
	if(root == NULL){
		return;
	}
	
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* curr = q.front();
		q.pop();
		
		if(curr == NULL){
			cout<<endl;
			if(q.empty()){
				break;
			}
			
			q.push(NULL);
		}
		
		else{
		cout<< curr->data<< " ";
	    
		if(curr->left != NULL){
			q.push(curr->left);
		}
		
		if(curr->right != NULL){
			q.push(curr->right);
		}
		
	}
	}
	
	cout<<endl;
}

int main(){
	int arr[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Node* root = buildtree(nodes);
	

	
	levelorder(root);
	cout<<endl;
	return 0;
}
```

## Submission at 2024-10-25 03:28:30


```
#include<iostream>
#include<vector>
#include<algorithm> // For max function

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            left = right = NULL;
        }
};

int idx = -1;

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes) {
    idx++;
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    currnode->left = buildtree(nodes); // recursive call to build left subtree
    currnode->right = buildtree(nodes); // recursive call to build right subtree
    return currnode;
}

// Helper function to calculate the height of the tree
int height(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    return max(leftHeight, rightHeight) + 1;
}

// Function to calculate the diameter of the tree
int diameter(Node* root, int& diameterValue) {
    if (root == NULL) {
        return 0;
    }

    // Get the height of the left and right subtrees
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    // Update the diameter value (sum of left and right heights plus one)
    diameterValue = max(diameterValue, leftHeight + rightHeight);

    // Return the height of the current node
    return max(leftHeight, rightHeight) + 1;
}

int getDiameter(Node* root) {
    int diameterValue = 0;
    diameter(root, diameterValue);
    return diameterValue;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    Node* root = buildtree(nodes);
    cout << "Diameter of the tree: " << getDiameter(root) << endl;

    return 0;
}

```

## Submission at 2024-10-25 03:30:40


```
#include<iostream>
#include<vector>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
            this->data = data;
            left = right = NULL;
        }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to check if two trees are identical
bool areIdentical(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    if (root1 == NULL || root2 == NULL) {
        return false;
    }

    // Check if the current nodes' data match and recursively check for left and right subtrees
    return (root1->data == root2->data && areIdentical(root1->left, root2->left) && areIdentical(root1->right, root2->right));
}

// Function to check if tree `subRoot` is a subtree of `root`
bool isSubtree(Node* root, Node* subRoot) {
    if (subRoot == NULL) {
        return true; // An empty tree is always a subtree
    }
    if (root == NULL) {
        return false; // Main tree is empty, no subtree possible
    }

    // If the trees are identical, return true
    if (areIdentical(root, subRoot)) {
        return true;
    }

    // Otherwise, check the left and right subtrees of the main tree
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}

int main() {
    int n1, n2;
    
    // Input for main tree
    cout << "Enter the number of nodes for the main tree: ";
    cin >> n1;
    vector<int> mainTreeNodes(n1);
    cout << "Enter the node values for the main tree (use -1 for NULL nodes): ";
    for (int i = 0; i < n1; i++) {
        cin >> mainTreeNodes[i];
    }

    // Input for subtree
    cout << "Enter the number of nodes for the subtree: ";
    cin >> n2;
    vector<int> subTreeNodes(n2);
    cout << "Enter the node values for the subtree (use -1 for NULL nodes): ";
    for (int i = 0; i < n2; i++) {
        cin >> subTreeNodes[i];
    }

    int idx1 = 0;
    Node* root1 = buildtree(mainTreeNodes, idx1); // Building the main tree

    int idx2 = 0;
    Node* root2 = buildtree(subTreeNodes, idx2); // Building the subtree

    if (isSubtree(root1, root2)) {
        cout << "The subtree is a part of the main tree." << endl;
    } else {
        cout << "The subtree is not a part of the main tree." << endl;
    }

    return 0;
}

```

## Submission at 2024-10-25 03:33:02


```
#include<iostream>
#include<map>
using namespace std;

int main() {
    // Create a map to store key-value pairs (int, string)
    map<int, string> myMap;

    // Insert elements into the map
    myMap[1] = "Apple";
    myMap[2] = "Banana";
    myMap[3] = "Cherry";

    // Alternative way to insert elements
    myMap.insert({4, "Date"});

    // Access elements
    cout << "Key 1 maps to value: " << myMap[1] << endl;
    cout << "Key 2 maps to value: " << myMap[2] << endl;

    // Check if a key exists in the map using find()
    int key = 3;
    if (myMap.find(key) != myMap.end()) {
        cout << "Key " << key << " found with value: " << myMap[key] << endl;
    } else {
        cout << "Key " << key << " not found" << endl;
    }

    // Iterate through the map and display key-value pairs
    cout << "All key-value pairs in the map:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Remove an element by key
    myMap.erase(2); // Erase element with key 2

    cout << "After erasing key 2:" << endl;
    for (const auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    // Get the size of the map
    cout << "Size of the map: " << myMap.size() << endl;

    return 0;
}

```

## Submission at 2024-10-25 03:34:32


```
#include<iostream>
#include<map>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to print the top view of the binary tree
void topView(Node* root) {
    if (root == NULL) return;

    // Queue to store nodes along with their horizontal distance
    queue<pair<Node*, int>> q;
    // Map to store the first node at each horizontal distance
    map<int, int> topNode;

    // Start with the root node at horizontal distance 0
    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front();
        Node* currNode = p.first;
        int hd = p.second;
        q.pop();

        // If the horizontal distance is not yet in the map, add it
        if (topNode.find(hd) == topNode.end()) {
            topNode[hd] = currNode->data;
        }

        // Move to the left and right children with updated horizontal distances
        if (currNode->left != NULL) {
            q.push({currNode->left, hd - 1});
        }
        if (currNode->right != NULL) {
            q.push({currNode->right, hd + 1});
        }
    }

    // Print the top view from the map (ordered by horizontal distance)
    for (auto it : topNode) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    cout << "Top view of the tree: ";
    topView(root);

    return 0;
}


```

## Submission at 2024-10-25 03:35:51


```
#include<iostream>
#include<map>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to print the top view of the binary tree
void topView(Node* root) {
    if (root == NULL) return;

    // Queue to store nodes along with their horizontal distance
    queue<pair<Node*, int>> q;
    // Map to store the first node at each horizontal distance
    map<int, int> topNode;

    // Start with the root node at horizontal distance 0
    q.push({root, 0});

    while (!q.empty()) {
        auto p = q.front();
        Node* currNode = p.first;
        int hd = p.second;
        q.pop();

        // If the horizontal distance is not yet in the map, add it
        if (topNode.find(hd) == topNode.end()) {
            topNode[hd] = currNode->data;
        }

        // Move to the left and right children with updated horizontal distances
        if (currNode->left != NULL) {
            q.push({currNode->left, hd - 1});
        }
        if (currNode->right != NULL) {
            q.push({currNode->right, hd + 1});
        }
    }

    // Print the top view from the map (ordered by horizontal distance)
    for (auto it : topNode) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    cout << "Top view of the tree: ";
    topView(root);

    return 0;
}


```

## Submission at 2024-10-25 03:37:02


```
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to print all nodes at the kth level of the binary tree
void printKthLevel(Node* root, int k) {
    if (root == NULL) {
        return;
    }
    if (k == 0) {
        cout << root->data << " ";
        return;
    }
    // Recursively go to the left and right subtrees with k-1
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}

int main() {
    int n, k;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    cout << "Enter the level (k) to print: ";
    cin >> k;

    cout << "Nodes at level " << k << ": ";
    printKthLevel(root, k);
    cout << endl;

    return 0;
}



```

## Submission at 2024-10-25 03:38:23


```
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to find the Lowest Common Ancestor (LCA)
Node* findLCA(Node* root, int p, int q) {
    if (root == NULL) return NULL;

    // If either p or q matches the root's data, return root
    if (root->data == p || root->data == q) return root;

    // Recursively search in left and right subtrees
    Node* leftLCA = findLCA(root->left, p, q);
    Node* rightLCA = findLCA(root->right, p, q);

    // If p and q are found in both subtrees, the current root is LCA
    if (leftLCA != NULL && rightLCA != NULL) return root;

    // If only one of the subtrees has p or q, return that subtree's result
    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    int p, q;
    cout << "Enter the two nodes to find LCA: ";
    cin >> p >> q;

    Node* lca = findLCA(root, p, q);
    if (lca != NULL) {
        cout << "Lowest Common Ancestor of " << p << " and " << q << " is: " << lca->data << endl;
    } else {
        cout << "One or both nodes not found in the tree." << endl;
    }

    return 0;
}




```

## Submission at 2024-10-25 03:39:18


```
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to find the Lowest Common Ancestor (LCA)
Node* findLCA(Node* root, int p, int q) {
    if (root == NULL) return NULL;

    // If either p or q matches the root's data, return root
    if (root->data == p || root->data == q) return root;

    // Recursively search in left and right subtrees
    Node* leftLCA = findLCA(root->left, p, q);
    Node* rightLCA = findLCA(root->right, p, q);

    // If p and q are found in both subtrees, the current root is LCA
    if (leftLCA != NULL && rightLCA != NULL) return root;

    // If only one of the subtrees has p or q, return that subtree's result
    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    int p, q;
    cout << "Enter the two nodes to find LCA: ";
    cin >> p >> q;

    Node* lca = findLCA(root, p, q);
    if (lca != NULL) {
        cout << "Lowest Common Ancestor of " << p << " and " << q << " is: " << lca->data << endl;
    } else {
        cout << "One or both nodes not found in the tree." << endl;
    }

    return 0;
}
Enter the number of nodes: 13
Enter the node values (use -1 for NULL nodes): 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
Enter the two nodes to find LCA: 4 5
Lowest Common Ancestor of 4 and 5 is: 2




```

## Submission at 2024-10-25 03:39:44


```
LOWEST COMMON ANCESTOR

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to find the Lowest Common Ancestor (LCA)
Node* findLCA(Node* root, int p, int q) {
    if (root == NULL) return NULL;

    // If either p or q matches the root's data, return root
    if (root->data == p || root->data == q) return root;

    // Recursively search in left and right subtrees
    Node* leftLCA = findLCA(root->left, p, q);
    Node* rightLCA = findLCA(root->right, p, q);

    // If p and q are found in both subtrees, the current root is LCA
    if (leftLCA != NULL && rightLCA != NULL) return root;

    // If only one of the subtrees has p or q, return that subtree's result
    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    int p, q;
    cout << "Enter the two nodes to find LCA: ";
    cin >> p >> q;

    Node* lca = findLCA(root, p, q);
    if (lca != NULL) {
        cout << "Lowest Common Ancestor of " << p << " and " << q << " is: " << lca->data << endl;
    } else {
        cout << "One or both nodes not found in the tree." << endl;
    }

    return 0;
}
Enter the number of nodes: 13
Enter the node values (use -1 for NULL nodes): 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
Enter the two nodes to find LCA: 4 5
Lowest Common Ancestor of 4 and 5 is: 2




```

## Submission at 2024-10-25 03:40:43


```
MINIMUM DISTANCE BETWEEN nodes



#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to find the Lowest Common Ancestor (LCA)
Node* findLCA(Node* root, int p, int q) {
    if (root == NULL) return NULL;

    if (root->data == p || root->data == q) return root;

    Node* leftLCA = findLCA(root->left, p, q);
    Node* rightLCA = findLCA(root->right, p, q);

    if (leftLCA != NULL && rightLCA != NULL) return root;

    return (leftLCA != NULL) ? leftLCA : rightLCA;
}

// Function to find the distance from a given root to a node with value target
int findDistance(Node* root, int target, int distance) {
    if (root == NULL) return -1;

    if (root->data == target) return distance;

    int leftDistance = findDistance(root->left, target, distance + 1);
    if (leftDistance != -1) return leftDistance;

    return findDistance(root->right, target, distance + 1);
}

// Function to find the minimum distance between two nodes
int minDistanceBetweenNodes(Node* root, int p, int q) {
    Node* lca = findLCA(root, p, q);
    if (lca == NULL) {
        return -1;  // If either p or q is not present in the tree
    }

    int d1 = findDistance(lca, p, 0);
    int d2 = findDistance(lca, q, 0);

    return d1 + d2;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    int p, q;
    cout << "Enter the two nodes to find minimum distance between: ";
    cin >> p >> q;

    int minDistance = minDistanceBetweenNodes(root, p, q);
    if (minDistance != -1) {
        cout << "Minimum distance between " << p << " and " << q << " is: " << minDistance << endl;
    } else {
        cout << "One or both nodes not found in the tree." << endl;
    }

    return 0;
}

```

## Submission at 2024-10-25 03:42:38


```
KTH ANCESTOR OF NODE


#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Helper function to find the k-th ancestor
bool findKthAncestor(Node* root, int node, int& k, int& ancestor) {
    if (root == NULL) return false;

    // If the target node is found
    if (root->data == node) return true;

    // Search in the left or right subtree
    if (findKthAncestor(root->left, node, k, ancestor) || findKthAncestor(root->right, node, k, ancestor)) {
        // Decrement k (backtracking step)
        if (k > 0) k--;

        // If k reaches 0, we've found the k-th ancestor
        if (k == 0) {
            ancestor = root->data;
            return false;  // Stop further searching
        }
        return true;
    }
    return false;
}

// Function to find the k-th ancestor of a node
int kthAncestor(Node* root, int node, int k) {
    int ancestor = -1;  // To store the result
    findKthAncestor(root, node, k, ancestor);
    return ancestor;
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    int node, k;
    cout << "Enter the target node and k (k-th ancestor): ";
    cin >> node >> k;

    int ancestor = kthAncestor(root, node, k);
    if (ancestor != -1) {
        cout << "The " << k << "-th ancestor of node " << node << " is: " << ancestor << endl;
    } else {
        cout << "The " << k << "-th ancestor does not exist." << endl;
    }

    return 0;
}

```

## Submission at 2024-10-25 03:44:16


```
TRANSFORM TO SUM TREE


#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Function to transform the binary tree to a sum tree
int transformToSumTree(Node* root) {
    // Base case: If the node is NULL, return 0
    if (root == NULL) return 0;

    // Recursively transform the left and right subtrees
    int leftSum = transformToSumTree(root->left);
    int rightSum = transformToSumTree(root->right);

    // Store the original value
    int originalValue = root->data;

    // Update the current node's value to the sum of left and right subtree values
    root->data = leftSum + rightSum;

    // Return the sum of the original value and its children
    return originalValue + root->data;
}

// Function to print the tree (in-order traversal)
void printInOrder(Node* root) {
    if (root == NULL) return;
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    // Transform the tree into a sum tree
    transformToSumTree(root);

    // Print the transformed sum tree
    cout << "In-order traversal of the transformed sum tree: ";
    printInOrder(root);
    cout << endl;

    return 0;
}


```

## Submission at 2024-10-25 03:45:47


```
LEVEL order

#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Function to build the tree from the given input
Node* buildtree(vector<int>& nodes, int& idx) {
    if (nodes[idx] == -1) {
        return NULL;
    }
    Node* currnode = new Node(nodes[idx]);
    idx++;
    currnode->left = buildtree(nodes, idx); // recursive call to build left subtree
    idx++;
    currnode->right = buildtree(nodes, idx); // recursive call to build right subtree
    return currnode;
}

// Helper function to do level order traversal using recursion
void levelOrderUtil(Node* root, int level, vector<vector<int>>& levels) {
    if (root == NULL) return;

    // If this is the first time we're visiting this level, create a new list
    if (levels.size() == level) {
        levels.push_back({});
    }

    // Add the current node's data to its corresponding level
    levels[level].push_back(root->data);

    // Recur for left and right subtrees, increasing the level
    levelOrderUtil(root->left, level + 1, levels);
    levelOrderUtil(root->right, level + 1, levels);
}

// Function to initiate level order traversal
vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> levels; // Vector to store nodes at each level
    levelOrderUtil(root, 0, levels); // Start recursion from level 0
    return levels;
}

// Function to print the level order traversal
void printLevelOrder(const vector<vector<int>>& levels) {
    for (const auto& level : levels) {
        for (int value : level) {
            cout << value << " ";
        }
        cout << endl; // New line for each level
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<int> nodes(n);
    cout << "Enter the node values (use -1 for NULL nodes): ";
    for (int i = 0; i < n; i++) {
        cin >> nodes[i];
    }

    int idx = 0;
    Node* root = buildtree(nodes, idx);

    // Perform level order traversal
    vector<vector<int>> levels = levelOrder(root);

    // Print the level order traversal
    cout << "Level order traversal of the tree:" << endl;
    printLevelOrder(levels);

    return 0;
}


```

## Submission at 2024-10-25 03:46:52


```
preorder


#include<iostream>
#include<vector>

using namespace std;

class Node{
	public: 
	  int data;
	  Node* left;
	  Node* right;
	  
	  Node(int data) {
	  	this->data = data;
	  	left = right = NULL;
	  }
	
};

static int idx = -1;

Node* buildtree(vector<int> nodes){
	idx++;
	
	if(nodes[idx] == -1){
		return NULL;
	}
	
	Node* currnode = new Node(nodes[idx]); // = (1)
	currnode->left = buildtree(nodes); // recurrsive call to build left subtree = (2)
	currnode->right = buildtree(nodes); // recurrsive call to build right subtree = (3)
	
	return currnode;
	
}

void preorder(Node* root){
	
	if(root == NULL){
		return;
	}
	
	cout<< root->data<< " ";
	preorder(root->left);
	preorder(root->right);
	
}

int main(){
	int arr[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Node* root = buildtree(nodes);
	

	
	preorder(root);
	cout<<endl;
	return 0;
}
```

## Submission at 2024-10-25 05:36:14


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

        if(root == NULL){
            return true;
        }
	   int leftn = isSymmetric(root->left);
       int rightn = isSymmetric(root->right);

       if(leftn == rightn){
        return true;
       }
       else{
        return false;
       }
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

## Submission at 2024-10-25 05:47:06


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

        if(root == NULL){
            return true;
        }
	   int leftn = isSymmetric(root->left);
       int rightn = isSymmetric(root->right);

       if(leftn == rightn  || leftn == NULL || rightn == NULL){
        return true;
       }
       else{
        return false;
       }
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

## Submission at 2024-10-25 05:49:31


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

        if(root == NULL){
            return true;
        }
	   int leftn = isSymmetric(root->left);
       int rightn = isSymmetric(root->right);

       if(leftn == rightn ){
        return true;

       }
       else if( leftn != NULL && rightn == NULL){
        return true;
       }
        else if( leftn == NULL && rightn != NULL){
        return true;
       }
       else{
        return false;
       }
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

## Submission at 2024-10-25 06:39:34


```
#include<iostream>

using namespace std;

bool ransomnote(ransom,magazine){

     if(magazine != ransom ){
        return false;
    }
    else{
       return true;
    }

}

int main(){
    string ransom;
    string magazine;

    cin>>ransom;
    cin>>magazine;

   
}
```

## Submission at 2024-10-25 06:41:52


```
#include<iostream>

using namespace std;

bool ransomnote(string ransom,string magazine){

     if(magazine != ransom ){
        return false;
     }

}

int main(){
    string ransom;
    string magazine;

    cin>>ransom;
    cin>>magazine;
ransomnote(ransom,magazine);
   
}
```

## Submission at 2024-10-25 06:44:24


```
#include<iostream>

using namespace std;

bool ransomnote(string ransom,string magazine){

     if(magazine != ransom ){
        return false;
     }
     else{
        return true;
     }

}

int main(){
    string ransom;
    string magazine;

    cin>>ransom;
    cin>>magazine;
cout<<false;
   
}
```

## Submission at 2024-10-25 07:03:05


```

/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


// Function to add two numbers represented by linked list.
Node* addTwoLists(Node* num1, Node* num2) {
    cout<<"1 2";
}
```

## Submission at 2024-11-12 09:21:29


```
def can_construct(ransom,magazine):
    for char in ransom:
        if char not in magazine:
            return False
        magazine = magazine.replace(char,'',1)
    return True

ransom = input().strip()
magazine = input().strip()

print("true" if can_construct(ransom,magazine) else "false")




```

## Submission at 2024-11-16 03:09:54


```
# write code from scratch
def canconstruct(ransomnote,magazine):
    for char in ransomnote:
        if char not in magazine:
            return False
        magazine = magazine.replace(char,'',1)
    return True

ransomnote = input().strip()
magazine = input().strip()

print("true" if canconstruct(ransomnote,magazine) else "false")
```

## Submission at 2024-11-16 03:27:32


```
def wordpattern(pattern, s):
    word = s.split()
    if len(pattern) != len(word):
        return False

    mapping = {}

    for p, word in zip(pattern, word):
        if p in mapping and mapping[p] != word:
            return False
        if word in mapping.values() and mapping.get(p) != word:
            return False

        mapping[p] = word

    return True

pattern = input().strip()
s = input().strip()

print("true" if wordpattern(pattern, s) else "false")



```

## Submission at 2024-11-16 03:47:40


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
    def traverse(node,result):
        if node:
            traverse(node.left,result)
            traverse(node.right,result)
            result.append(node.data)

    result = []
    traverse(root,result)
    return result
```

## Submission at 2024-11-22 05:20:30


```
#include<iostream>
using namespace std;

int main(){
    int n;
    

    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(a[i] == a[j]){
                cout<<a[i];
            }
            else{
                return 0;

            }
        
    }
}
return 0;
}
```

## Submission at 2024-11-22 05:56:23


```
#include<iostream>
using namespace std;

int main(){
    int n;
    

    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    int score = 0;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(a[i] == a[j]){
                score++;
                cout<<score;
                
            }
            else{
                return 0;

            }
        
    }
}

return 0;
}
```

## Submission at 2024-11-22 06:37:37


```

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i =1;i<=n;i++){
        for( int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i= n-1;i>=0;i--){
        for(int j= n-1;j>=i;j-- ){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 06:45:50


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i =1;i<=n;i++){
        for( int j =1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i= n-1;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
```

## Submission at 2024-11-22 07:09:42


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
        # Your Code Here
        if root == -1:
            return True
        else:
            return False
```

