## Submission at 2024-09-02 11:09:36


```
#include <iostream> // Include iostream for input/output operations
#include <vector>   // Include vector for using the vector container
#include <algorithm> // Include algorithm for std::max

using namespace std; // To avoid prefixing std:: with cin, cout, endl

int main() {
    int n;
    cin >> n; // Read the size of the arrays

    vector<int> a(n), b(n), c(n);

    // Read the first array
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Read the second array
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    // Compute the maximal array
    for (int i = 0; i < n; ++i) {
        c[i] = max(a[i], b[i]);
    }

    // Output the maximal array
    for (int i = 0; i < n; ++i) {
        if (i > 0) cout << " ";
        cout << c[i];
    }
    cout << endl;

    return 0;
}

```

## Submission at 2024-09-03 11:45:41


```
Node* deleteNode(Node *head, int x)
{
    // Edge case: if the list is empty
    if (head == NULL) return head;

    // Special case: if the node to delete is the first node
    if (x == 1) {
        Node* temp = head;
        head = head->next;  
        delete temp;        
        return head;
    }

    // Traverse to the node just before the one to delete
    Node* current = head;
    for (int i = 1; i < x - 1 && current != NULL; i++) {
        current = current->next;
    }

    // If the node to delete doesn't exist (x is out of bounds)
    if (current == NULL || current->next == NULL) return head;

    // Node to delete is current->next
    Node* temp = current->next;
    current->next = current->next->next;   

    delete temp;  

    return head;
}

```

## Submission at 2024-09-03 11:46:46


```
Node* deleteNode(Node *head, int x)
{
    // Edge case: if the list is empty
    if (head == NULL) return head;

    // Special case: if the node to delete is the first node
    if (x == 1) {
        Node* temp = head;
        head = head->next;  
        delete temp;        
        return head;
    }

    // Traverse to the node just before the one to delete
    Node* current = head;
    for (int i = 1; i < x - 1 && current != NULL; i++) {
        current = current->next;
    }

    // If the node to delete doesn't exist (x is out of bounds)
    if (current == NULL || current->next == NULL) return head;

    // Node to delete is current->next
    Node* temp = current->next;
    current->next = current->next->next;   

    delete temp;  

    return head;
}

```

## Submission at 2024-09-03 11:55:43


```
#include <vector>
using namespace std;


vector<int> traverseLinkedList(ListNode* head) {
    vector<int> result;
    ListNode* current = head;

    // Traverse the linked list
    while (current != nullptr) {
        result.push_back(current->val);  
        current = current->next;  
    }

    return result;  
}

```

## Submission at 2024-09-03 12:20:02


```
#include <iostream>
using namespace std;

Node* reverseLinkedList(Node *head)
{
    Node* prev = nullptr;  
    Node* current = head;  
    Node* next = nullptr;
    
    while (current != nullptr) {
        next = current->next;   
        current->next = prev;     
        
        // Move the pointers one step forward
        prev = current;
        current = next;
    }
    
    // At the end, prev will be pointing to the new head of the reversed list
    return prev;
}


```

## Submission at 2024-09-03 13:09:05


```
#include <vector>
using namespace std;

vector<int> diagonalTraversal(vector<vector<int>> matrix) {
    vector<int> result;
    int m = matrix.size();
    if (m == 0) return result;
    int n = matrix[0].size();

    // Traverse diagonals starting from the first row and then from the first column
    for (int d = 0; d < m + n - 1; ++d) {
        int row = d < m ? d : m - 1;
        int col = d < m ? 0 : d - m + 1;

        while (row >= 0 && col < n) {
            result.push_back(matrix[row][col]);
            row--;
            col++;
        }
    }

    return result;
}

```

## Submission at 2024-09-03 13:16:27


```
/*#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

int getKthNode(Node* head, int k) {
    Node* current = head; // Start from the head of the list
    int count = 0;        // Initialize count to zero

    // Traverse the linked list
    while (current != nullptr) {
        count++;  // Increment count for each node
        if (count == k) {
            return current->data;  // Return the data of the k-th node
        }
        current = current->next;  // Move to the next node
    }

    // If we reach here, k is greater than the size of the linked list
    return -1;
}

// Example usage:
int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 3;
    cout << getKthNode(head, k) << endl; // Output should be 3

    return 0;
}

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

int getKthNode(Node* head, int k) {
    // Write your logic here
}

```

## Submission at 2024-09-04 09:43:16


```
int getKthNode(Node* head, int k) {
    Node* current = head;
    int count = 1;  // Start with a 1-based index

    // Traverse the list to find the k-th node
    while (current != nullptr) {
        if (count == k) {
            return current->data;  // Return the value of the k-th node
        }
        count++;
        current = current->next;
    }

    // If k is greater than the length of the list
    return -1;
}

```

