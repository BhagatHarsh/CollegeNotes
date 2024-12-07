## Submission at 2024-08-05 10:16:26


```
# Write your Python code here from the scratch\
a = input()
print(f"Hello {a}!")
```

## Submission at 2024-08-05 10:29:04


```
# Write your Python code here from the scratch
a = input()
print(f"Hello {a}!")
```

## Submission at 2024-08-05 10:36:05


```
# Write your Python code here
a  = input()
print(f"Total numbers of users: {a}")

b = input()
print(f"\nHello {b}!")

c = input()
print(f"\nHello {c}!")

d = input()
print(f"\nHello {d}!")
```

## Submission at 2024-08-05 10:38:27


```
# Write your Python code here
a  = input()
print(f"Total numbers of users: {a}")

b = input()
print(f"\nHello {b}!")

c = input()
print(f"\nHello {c}!")

d = input()
print(f"\nHello {d}!")
```

## Submission at 2024-08-05 10:40:18


```
# Write your Python code here
a  = input()
print(f"Total numbers of users: {a}")
b = input()
print(f"\nHello {b}!")
c = input()
print(f"\nHello {c}!")
d = input()
print(f"\nHello {d}!")
```

## Submission at 2024-08-05 10:45:49


```
// Write your Java code here]
import java.util.Scanner;

class Main(){
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        int num = Integer.parseInt(input.nextLine());
        for (int i = 0; i<num; i++){
            String username= input.nextLine();
            System.out.println("Hello "+username+"!");

        }
    }




}
```

## Submission at 2024-08-05 10:50:03


```
// Write your Java code here]
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        int num = Integer.parseInt(input.nextLine());
        for (int i = 0; i<num; i++){
            String username= input.nextLine();
            System.out.println("Hello "+username+"!");

        }
    }
}
```

## Submission at 2024-08-05 11:03:18


```
// Write your Java code here
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        int num = Integer.parseInt(input.nextLine());
        for (int i = 0; i<num; i++){
            String username= input.nextLine();
            System.out.println("Hello "+username+"!");

        }
    }
}

```

## Submission at 2024-08-12 09:59:33


```
#include <iostream>

using namespace std;

int fibonacci(int x) {
    // write your code here
    if (x==0){
        return 0;
    } else if (x==1){
        return 1;
    }
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int x;
    cin >> x;
    
    // Calculate and print the Fibonacci number for the input x
    cout << fibonacci(x) << endl;

    return 0;
}

```

## Submission at 2024-08-12 10:30:27


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
        else if (n%2 !=0){
            return false;
        } return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:33:03


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
        if(n<=0){
            return false;
        }
        if (n==2){
            return true;
        }
        else if (n%2 !=0){
            return false;
        } return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:34:41


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
        if(n<=0){
            return false;
        }
        if (n==2){
            return true;
        }
        else if (n%2 !=0){
            return false;
        } return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:35:51


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
        if(n<=1){
            return false;
        }
        if (n==2){
            return true;
        }
        else if (n%2 !=0){
            return false;
        } return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:36:58


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
        if(n<=1){
            return false;
        }
        else if (n==2){
            return true;
        }
        else if (n%2 != 0){
            return false;
        } return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 10:41:36


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
        if(n<=0){
            return false;
        }
        else if (n==2 || n==1){
            return true;
        }
        else if (n%2 != 0){
            return false;
        } return isPowerOfTwo(n/2);
    }
}

```

## Submission at 2024-08-12 11:05:19


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        // Write logic here
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums, 0);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, int start) {
        result.add(new ArrayList<>(tempList));
        for (int i = start; i < nums.length; i++) {
            tempList.add(nums[i]);
            backtrack(result, tempList, nums, i + 1);
            tempList.remove(tempList.size() - 1);
        }
    }
    }


```

## Submission at 2024-08-12 11:12:57


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        // Write logic here
        List<List<Integer>> result = new ArrayList<>();
        generateSubsets(0, nums, new ArrayList<>(), result);
        return result;
    }

    private static void generateSubsets(int index, int[] nums, List<Integer> current, List<List<Integer>> result) {
        if (index == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        // Include the current element
        current.add(nums[index]);
        generateSubsets(index + 1, nums, current, result);
        // Exclude the current element
        current.remove(current.size() - 1);
        generateSubsets(index + 1, nums, current, result);
    }
    }


```

## Submission at 2024-08-12 11:19:04


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine().trim();
        String[] tokens = line.split("\\s+");
        int[] nums = new int[tokens.length];

        for (int i = 0; i < tokens.length; i++) {
            nums[i] = Integer.parseInt(tokens[i]);
        }

        // Generate all subsets
        List<List<Integer>> result = subsets(nums);

        // Sort subsets based on size and first element
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                // Compare based on size first
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }
                // If sizes are the same, compare based on the first element
                if (!a.isEmpty() && !b.isEmpty()) {
                    return Integer.compare(a.get(0), b.get(0));
                }
                return 0; // Handle empty lists (although empty lists are unlikely in this case)
            }
        });
        
        // Print subsets
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        // Write logic here
        List<List<Integer>> result = new ArrayList<>();
        generateSubsets(0, nums, new ArrayList<>(), result);
        return result;
    }

    private static void generateSubsets(int index, int[] nums, List<Integer> current, List<List<Integer>> result) {
        if (index == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        // Include the current element
        current.add(nums[index]);
        generateSubsets(index + 1, nums, current, result);
        // Exclude the current element
        current.remove(current.size() - 1);
        generateSubsets(index + 1, nums, current, result);
    }
    }


```

## Submission at 2024-08-14 06:44:17


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
        // write logic here
        List<List<Integer>> res = new ArrayList<>();
        backtrack(1, new ArrayList<>(), res, n, k);
        return res;
    }
    private static void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k) {
        if (comb.size() == k) {
            res.add(new ArrayList<>(comb));
            return;
        }
        for (int i = start; i <= n; i++) {
            comb.add(i);
            backtrack(i + 1, comb, res, n, k);
            comb.remove(comb.size() - 1);
        }
    }
    }


```

## Submission at 2024-08-14 06:49:02


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int[] nums = new int[input.length];

        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

        List<List<Integer>> result = permute(nums);

        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                for (int i = 0; i < a.size(); i++) {
                    if (!a.get(i).equals(b.get(i))) {
                        return a.get(i) - b.get(i);
                    }
                }
                return 0;
            }
        });

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

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums);
        return res;
    }

    private static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i])) continue; 
                tempList.add(nums[i]);
                backtrack(res, tempList, nums);
                tempList.remove(tempList.size() - 1);
            }
        }
    }
}
```

## Submission at 2024-08-14 06:52:02


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int[] nums = new int[input.length];

        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

        // Generate permutations
        List<List<Integer>> result = permute(nums);

        // Sort permutations
        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                for (int i = 0; i < a.size(); i++) {
                    if (!a.get(i).equals(b.get(i))) {
                        return a.get(i) - b.get(i);
                    }
                }
                return 0;
            }
        });

        // Print permutations
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

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums);
        return res;
    }

    private static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i])) continue; // element already exists, skip
                tempList.add(nums[i]);
                backtrack(res, tempList, nums);
                tempList.remove(tempList.size() - 1);
            }
        }
    }
}
```

## Submission at 2024-08-14 06:55:35


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int[] nums = new int[input.length];

        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

        List<List<Integer>> result = permute(nums);

        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                for (int i = 0; i < a.size(); i++) {
                    if (!a.get(i).equals(b.get(i))) {
                        return a.get(i) - b.get(i);
                    }
                }
                return 0;
            }
        });

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

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums);
        return res;
    }

    private static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i])) continue; 
                tempList.add(nums[i]);
                backtrack(res, tempList, nums);
                tempList.remove(tempList.size() - 1);
            }
        }
    }
}
```

## Submission at 2024-08-14 06:57:16


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void backtrack(vector<vector<int>>& res, vector<int>& tempList, vector<int>& nums, vector<bool>& used) {
    if (tempList.size() == nums.size()) {
        res.push_back(tempList);
    } else {
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue; 
            used[i] = true;
            tempList.push_back(nums[i]);
            backtrack(res, tempList, nums, used);
            used[i] = false;
            tempList.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> tempList;
    vector<bool> used(nums.size(), false);
    backtrack(res, tempList, nums, used);
    return res;
}

int main() {
    string input;
    getline(cin, input);
    input = input.substr(1, input.size() - 2); 
    vector<int> nums;
    size_t pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        nums.push_back(stoi(input.substr(0, pos)));
        input.erase(0, pos + 1);
    }
    nums.push_back(stoi(input)); 

    vector<vector<int>> result = permute(nums);

    sort(result.begin(), result.end());

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-14 06:58:48


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void backtrack(vector<vector<int>>& res, vector<int>& tempList, vector<int>& nums, vector<bool>& used) {
    if (tempList.size() == nums.size()) {
        res.push_back(tempList);
    } else {
        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue; // element already exists, skip
            used[i] = true;
            tempList.push_back(nums[i]);
            backtrack(res, tempList, nums, used);
            used[i] = false;
            tempList.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    vector<int> tempList;
    vector<bool> used(nums.size(), false);
    backtrack(res, tempList, nums, used);
    return res;
}

int main() {
    string input;
    getline(cin, input);
    input = input.substr(1, input.size() - 2); // Remove the square brackets
    vector<int> nums;
    size_t pos = 0;
    while ((pos = input.find(',')) != string::npos) {
        nums.push_back(stoi(input.substr(0, pos)));
        input.erase(0, pos + 1);
    }
    nums.push_back(stoi(input)); // Add the last number

    // Generate permutations
    vector<vector<int>> result = permute(nums);

    // Sort permutations
    sort(result.begin(), result.end());

    // Print permutations
    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j];
            if (j < result[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]";
        if (i != result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-14 07:00:06


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);

    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-14 07:02:38


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int l, int r, vector<vector<int>>& result) {
    if (l == r) {
        result.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, l + 1, r, result);
            swap(nums[l], nums[i]); // backtrack
        }
    }
}

vector<vector<int>> permuteSorted(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    permute(nums, 0, nums.size() - 1, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permuteSorted(nums);

    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


```

## Submission at 2024-08-14 07:04:05


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int l, int r, vector<vector<int>>& result) {
    if (l == r) {
        result.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, l + 1, r, result);
            swap(nums[l], nums[i]); // backtrack
        }
    }
}

vector<vector<int>> permuteSorted(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    permute(nums, 0, nums.size() - 1, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permuteSorted(nums);

    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
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

## Submission at 2024-08-14 07:06:01


```
from itertools import permutations

def permute_sorted(nums):
    perms = sorted(permutations(nums))
    return [list(perm) for perm in perms]

# Example usage
if __name__ == "__main__":
    nums = list(map(int, input("Enter numbers separated by spaces: ").split()))
    permutations = permute_sorted(nums)

    print("[", end="")
    for i, perm in enumerate(permutations):
        print("[", end="")
        print(",".join(map(str, perm)), end="")
        print("]", end="")
        if i < len(permutations) - 1:
            print(",", end="")
    print("]")

```

## Submission at 2024-08-14 07:09:40


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end()); // Ensure the permutations are in sorted order
    
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<vector<int>> permutations = permute(nums);

    cout << "All possible permutations:\n";
    for (const auto& permutation : permutations) {
        cout << "[";
        for (size_t i = 0; i < permutation.size(); ++i) {
            cout << permutation[i];
            if (i < permutation.size() - 1) cout << ",";
        }
        cout << "]\n";
    }

    return 0;
}

```

## Submission at 2024-08-14 07:14:34


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    do {
        result.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permute(nums);

    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-14 07:16:40


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int l, int r, vector<vector<int>>& result) {
    if (l == r) {
        result.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, l + 1, r, result);
            swap(nums[l], nums[i]); // backtrack
        }
    }
}

vector<vector<int>> permuteSorted(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    permute(nums, 0, nums.size() - 1, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permuteSorted(nums);

    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
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

## Submission at 2024-08-14 07:19:19


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int l, int r, vector<vector<int>>& result) {
    if (l == r) {
        result.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, l + 1, r, result);
            swap(nums[l], nums[i]); // backtrack
        }
    }
}

vector<vector<int>> permuteSorted(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    permute(nums, 0, nums.size() - 1, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permuteSorted(nums);

    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
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

## Submission at 2024-08-14 07:20:59


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int l, int r, vector<vector<int>>& result) {
    if (l == r) {
        result.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, l + 1, r, result);
            swap(nums[l], nums[i]); // backtrack
        }
    }
}

vector<vector<int>> permuteSorted(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    permute(nums, 0, nums.size() - 1, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permuteSorted(nums);

    cout << "[";
    for (size_t i = 0; i < permutations.size(); i++) {
        cout << "[";
        for (size_t j = 0; j < permutations[i].size(); j++) {
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

## Submission at 2024-08-14 07:21:52


```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void permute(vector<int>& nums, int l, int r, vector<vector<int>>& result) {
    if (l == r) {
        result.push_back(nums);
    } else {
        for (int i = l; i <= r; i++) {
            swap(nums[l], nums[i]);
            permute(nums, l + 1, r, result);
            swap(nums[l], nums[i]); // backtrack
        }
    }
}

vector<vector<int>> permuteSorted(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    permute(nums, 0, nums.size() - 1, result);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = permuteSorted(nums);

    for (const auto& perm : permutations) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

```

## Submission at 2024-08-14 07:27:30


```
#include <iostream>
#include <vector>
#include <algorithm>

void backtrack(std::vector<int>& nums, int start, int end, std::vector<std::vector<int>>& result) {
    if (start == end) {
        result.push_back(nums);
    } else {
        for (int i = start; i <= end; i++) {
            std::swap(nums[start], nums[i]);
            backtrack(nums, start + 1, end, result);
            std::swap(nums[start], nums[i]); // backtrack
        }
    }
}

std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    backtrack(nums, 0, nums.size() - 1, result);
    return result;
}

int main() {
    std::vector<int> nums;
    std::cout;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    std::vector<std::vector<int>> result = permute(nums);

    std::cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); j++) {
            std::cout << result[i][j];
            if (j != result[i].size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]";
        if (i != result.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
```

## Submission at 2024-08-14 07:30:18


```
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void backtrack(int[] nums, int start, int end, List<List<Integer>> result) {
        if (start == end) {
            result.add(new ArrayList<>(Arrays.stream(nums).boxed().collect(Collectors.toList())));
        } else {
            for (int i = start; i <= end; i++) {
                swap(nums, start, i);
                backtrack(nums, start + 1, end, result);
                swap(nums, start, i); // backtrack
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(nums, 0, nums.length - 1, result);
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

        List<List<Integer>> result = permute(nums);

        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}
```

## Submission at 2024-08-14 07:32:55


```
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void backtrack(int[] nums, int start, int end, List<List<Integer>> result) {
        if (start == end) {
            result.add(new ArrayList<>(Arrays.stream(nums).boxed().collect(Collectors.toList())));
        } else {
            for (int i = start; i <= end; i++) {
                swap(nums, start, i);
                backtrack(nums, start + 1, end, result);
                swap(nums, start, i); // backtrack
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(nums, 0, nums.length - 1, result);
        return result;
    }

    public static void main(String[] args) {
        try {
            Scanner scanner = new Scanner(System.in);
            String[] input = scanner.nextLine().split(" ");
            int[] nums = new int[input.length];
            for (int i = 0; i < input.length; i++) {
                nums[i] = Integer.parseInt(input[i]);
            }

            List<List<Integer>> result = permute(nums);

            System.out.print("[");
            for (int i = 0; i < result.size(); i++) {
                System.out.print("[");
                for (int j = 0; j < result.get(i).size(); j++) {
                    System.out.print(result.get(i).get(j));
                    if (j != result.get(i).size() - 1) {
                        System.out.print(",");
                    }
                }
                System.out.print("]");
                if (i != result.size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.println("]");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

```

## Submission at 2024-08-14 07:35:13


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().replaceAll("[\\[\\]]", "").split(",");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 07:37:20


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 07:38:08


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 07:38:59


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 07:39:49


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 07:43:06


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}


```

## Submission at 2024-08-14 07:43:51


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}


```

## Submission at 2024-08-14 07:50:14


```
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        GenerateParentheses gp = new GenerateParentheses();
        System.out.println(gp.generateParenthesis(3)); // Example usage
    }
}

class GenerateParentheses {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        generate(result, "", n, n);
        return result;
    }

    private void generate(List<String> result, String current, int left, int right) {
        if (left > right) {
            return; // Invalid state
        }
        if (left == 0 && right == 0) {
            result.add(current);
            return;
        }
        if (left > 0) {
            generate(result, current + "(", left - 1, right);
        }
        if (right > 0) {
            generate(result, current + ")", left, right - 1);
        }
    }
}

```

## Submission at 2024-08-14 07:59:22


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateCombinations(vector<string>& result, string current, int open, int close, int max) {
    if (current.length() == max * 2) {
        result.push_back(current);
        return;
    }

    if (open < max) {
        generateCombinations(result, current + "(", open + 1, close, max);
    }
    if (close < open) {
        generateCombinations(result, current + ")", open, close + 1, max);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateCombinations(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-14 08:00:08


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void generateCombinations(vector<string>& result, string current, int open, int close, int max) {
    if (current.length() == max * 2) {
        result.push_back(current);
        return;
    }

    if (open < max) {
        generateCombinations(result, current + "(", open + 1, close, max);
    }
    if (close < open) {
        generateCombinations(result, current + ")", open, close + 1, max);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> result;
    generateCombinations(result, "", 0, 0, n);
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> result = generateParenthesis(n);

    cout << "[";
    for (size_t i = 0; i < result.size(); i++) {
        cout << "\"" << result[i] << "\"";
        if (i < result.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;

    return 0;
}

```

## Submission at 2024-08-14 08:02:47


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 08:05:19


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 08:06:02


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 08:06:43


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-14 08:08:01


```
import java.util.*;

public class Main {
    public static void backtrack(List<List<Integer>> res, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            res.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue; // element already exists, skip
                used[i] = true;
                tempList.add(nums[i]);
                backtrack(res, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        backtrack(res, new ArrayList<>(), nums, new boolean[nums.length]);
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine().trim();
        if (input.equals("[]")) {
            System.out.println("[]");
            return;
        }
        input = input.substring(1, input.length() - 1); // Remove the square brackets
        String[] inputArray = input.split(",");
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i].trim());
        }

        List<List<Integer>> result = permute(nums);

        // Sort permutations
        result.sort((a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                if (!a.get(i).equals(b.get(i))) {
                    return a.get(i) - b.get(i);
                }
            }
            return 0;
        });

        // Print permutations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                System.out.print(result.get(i).get(j));
                if (j != result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-21 05:08:43


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] numbersInString = input.nextLine().replace("[", "").replace("]", "").split(" ");
        List<Integer> numbers = new ArrayList<>();
        for (String string : numbersInString) {
            try {
                numbers.add(Integer.parseInt(string));
            } catch (Exception error) {}
        }
        List<Integer> sortedNumbersArray = getSortedArray(numbers);
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(sortedNumbersArray, 0, allPermutations, numbers);
        System.out.print("[");
        for (int i = 0; i < allPermutations.size(); i++) {
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print("[");
            for (int j = 0; j < allPermutations.get(i).size(); j++) {
                if (j != 0) {
                    System.out.print(",");
                }
                System.out.print(allPermutations.get(i).get(j));
            }
            System.out.print("]");
        }
        System.out.println("]");
    }

    private static List<Integer> getSortedArray(List<Integer> numbers) {
        List<Integer> sortedNumbersArray = new ArrayList<>();
        int minValue = numbers.get(0);
        for (Integer integer : numbers) {
            if (integer < minValue) {
                minValue = integer;
            }
        }
        sortedNumbersArray.add(minValue);
        for (Integer number : numbers) {
            for (int j = 0; j < sortedNumbersArray.size(); j++) {
                if (number > sortedNumbersArray.get(j)) {
                    sortedNumbersArray.add(j, number);
                    break;
                }
            }
        }
        return sortedNumbersArray;
    }

    public static List<List<Integer>> generatePermutations(List<Integer> possibilities, int index, List<List<Integer>> allPermutations, List<Integer> modifiedArray) {
        List<List<Integer>> allPermutationsCopy = new ArrayList<>(allPermutations);
        List<Integer> modifiedArrayCopy = new ArrayList<>(modifiedArray);
        if (possibilities.isEmpty()) {
            allPermutationsCopy.add(modifiedArray);
            return allPermutationsCopy;
        }
        for (int i = 0; i < possibilities.size(); i++) {
            int currentElement = possibilities.get(i);
            modifiedArrayCopy.add(index, currentElement);
            modifiedArrayCopy.remove(index+1);
            possibilities.remove(i);
            allPermutationsCopy = generatePermutations(possibilities, index+1, allPermutationsCopy, modifiedArrayCopy);
            possibilities.add(i, currentElement);
        }
        return allPermutationsCopy;
    }
}
```

## Submission at 2024-08-21 05:10:06


```
import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] numbersInString = input.nextLine().replace("[", "").replace("]", "").split(" ");
        List<Integer> numbers = new ArrayList<>();
        for (String string : numbersInString) {
            try {
                numbers.add(Integer.parseInt(string));
            } catch (Exception error) {}
        }
        List<Integer> sortedNumbersArray = getSortedArray(numbers);
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(sortedNumbersArray, 0, allPermutations, numbers);
        System.out.print("[");
        for (int i = 0; i < allPermutations.size(); i++) {
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print("[");
            for (int j = 0; j < allPermutations.get(i).size(); j++) {
                if (j != 0) {
                    System.out.print(",");
                }
                System.out.print(allPermutations.get(i).get(j));
            }
            System.out.print("]");
        }
        System.out.println("]");
    }

    private static List<Integer> getSortedArray(List<Integer> numbers) {
        List<Integer> sortedNumbersArray = new ArrayList<>();
        int minValue = numbers.get(0);
        for (Integer integer : numbers) {
            if (integer < minValue) {
                minValue = integer;
            }
        }
        sortedNumbersArray.add(minValue);
        for (Integer number : numbers) {
            for (int j = 0; j < sortedNumbersArray.size(); j++) {
                if (number > sortedNumbersArray.get(j)) {
                    sortedNumbersArray.add(j, number);
                    break;
                }
            }
        }
        return sortedNumbersArray;
    }

    public static List<List<Integer>> generatePermutations(List<Integer> possibilities, int index, List<List<Integer>> allPermutations, List<Integer> modifiedArray) {
        List<List<Integer>> allPermutationsCopy = new ArrayList<>(allPermutations);
        List<Integer> modifiedArrayCopy = new ArrayList<>(modifiedArray);
        if (possibilities.isEmpty()) {
            allPermutationsCopy.add(modifiedArray);
            return allPermutationsCopy;
        }
        for (int i = 0; i < possibilities.size(); i++) {
            int currentElement = possibilities.get(i);
            modifiedArrayCopy.add(index, currentElement);
            modifiedArrayCopy.remove(index+1);
            possibilities.remove(i);
            allPermutationsCopy = generatePermutations(possibilities, index+1, allPermutationsCopy, modifiedArrayCopy);
            possibilities.add(i, currentElement);
        }
        return allPermutationsCopy;
    }
}
```

## Submission at 2024-08-21 07:05:02


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] numbersInString = input.nextLine().replace("[", "").replace("]", "").split(" ");
        List<Integer> numbers = new ArrayList<>();
        for (String string : numbersInString) {
            try {
                numbers.add(Integer.parseInt(string));
            } catch (Exception error) {}
        }
        List<Integer> sortedNumbersArray = numbers; //getSortedArray(numbers)
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(sortedNumbersArray, 0, allPermutations, numbers);
        System.out.print("[");
        for (int i = 0; i < allPermutations.size(); i++) {
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print("[");
            for (int j = 0; j < allPermutations.get(i).size(); j++) {
                if (j != 0) {
                    System.out.print(",");
                }
                System.out.print(allPermutations.get(i).get(j));
            }
            System.out.print("]");
        }
        System.out.println("]");
    }

    private static List<Integer> getSortedArray(List<Integer> numbers) {
        List<Integer> sortedNumbersArray = new ArrayList<>();
        int minValue = numbers.get(0);
        for (Integer integer : numbers) {
            if (integer < minValue) {
                minValue = integer;
            }
        }
        sortedNumbersArray.add(minValue);
        for (Integer number : numbers) {
            for (int j = 0; j < sortedNumbersArray.size(); j++) {
                if (number > sortedNumbersArray.get(j)) {
                    sortedNumbersArray.add(j, number);
                    break;
                }
            }
        }
        return sortedNumbersArray;
    }

    public static List<List<Integer>> generatePermutations(List<Integer> possibilities, int index, List<List<Integer>> allPermutations, List<Integer> modifiedArray) {
        List<List<Integer>> allPermutationsCopy = new ArrayList<>(allPermutations);
        List<Integer> modifiedArrayCopy = new ArrayList<>(modifiedArray);
        if (possibilities.isEmpty()) {
            allPermutationsCopy.add(modifiedArray);
            return allPermutationsCopy;
        }
        for (int i = 0; i < possibilities.size(); i++) {
            int currentElement = possibilities.get(i);
            modifiedArrayCopy.add(index, currentElement);
            modifiedArrayCopy.remove(index+1);
            possibilities.remove(i);
            allPermutationsCopy = generatePermutations(possibilities, index+1, allPermutationsCopy, modifiedArrayCopy);
            possibilities.add(i, currentElement);
        }
        return allPermutationsCopy;
}
}

```

## Submission at 2024-09-02 10:22:35


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def traverse_linked_list(head):
    result = []
    temp = head
    while temp:
        result.append(temp.val)  
        temp = temp.next
    return result


```

## Submission at 2024-09-02 10:29:13


```
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def get_kth_node(head, k):
    temp = head
    count = 0

    while temp:
        count += 1
        if count == k:
            return temp.val
        temp = temp.next

    return -1


```

## Submission at 2024-09-02 10:36:39


```
# Write code from scratch
def find_maximal_array(a, b):
    n = len(a)
    c = [max(a[i], b[i]) for i in range(n)]
    return c

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

result = find_maximal_array(a, b)

print(*result) 

```

## Submission at 2024-09-02 10:44:02


```
'''
class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None
'''
def delNode(head, k):
    if not head:
        return head

    if k == 1:
        return head.next

    temp = head
    prev = None
    count = 1

    while temp and count < k:
        prev = temp
        temp = temp.next
        count += 1

    if not temp:
        return head

    prev.next = temp.next
    return head


```

## Submission at 2024-09-02 10:50:56


```
'''
class node:
    def __init__(self):
        self.data = None
        self.next = None
'''

def reverseLinkedList(head):
    # Write your logic here
    prev = None
    current = head

    while current:
        next_node = current.next
        current.next = prev
        prev = current
        current = next_node

    return prev

```

## Submission at 2024-09-02 11:13:33


```


class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
       
        List<Integer> result = new ArrayList<>();
        int m = matrix.length;
        int n = matrix[0].length;

        for (int d = 0; d < m + n - 1; d++) {
            for (int i = Math.max(0, d - n + 1); i < Math.min(d + 1, m); i++) {
                int j = d - i;
                result.add(matrix[i][j]);
            }
        }

        return result;
    }

    public static void main(String[] args) {
        // Example usage:
        int[][] matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        List<Integer> traversal = diagonalTraversal(matrix);
        System.out.println(traversal);  // Output: [1, 4, 2, 7, 5, 3, 8, 6, 9]
    }
}


```

## Submission at 2024-09-04 07:14:30


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        List<Integer> diagonalElementsList = new ArrayList<>();
        int rows = matrix.length;
        int cols = matrix[0].length;
        for (int i = 0; i < rows; i++) {
            int j = i;
            int k = 0;
            while (j >= 0 && k < cols) {
                diagonalElementsList.add(matrix[j][k]);
                j--;
                k++;
            }
        }
        for (int i = 1; i < cols; i++) {
            int j = rows - 1;
            int k = i;
            while (j >= 0 && k < cols) {
                diagonalElementsList.add(matrix[j][k]);
                j--;
                k++;
            }
        }
        return diagonalElementsList;
    }
}

```

## Submission at 2024-09-09 10:30:30


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
    }
}

 public static void  Ispowerthree(int x){
    if (x % 3 == 0):
        return true
    else :
        return false
}
```

## Submission at 2024-09-09 10:39:41


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
         if (x % 3 == 0)
        system.out.println("True");
        else 
        system.out.println("False");
    }
}


```

## Submission at 2024-09-09 10:42:14


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
         if Ispowerthree(x)
        system.out.println("True");
        else 
        system.out.println("False");
    }
}

 public static void  Ispowerthree(int x){
    if (x % 3 == 0):
        return true
    else :
        return false
}
```

## Submission at 2024-09-09 10:43:31


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
         if Ispowerthree(x)
        system.out.println("True");
        else 
        system.out.println("False");
    }
}

 public static void  Ispowerthree(int x){
    if (x % 3 == 0):
        return true
    else :
        return false
}
```

## Submission at 2024-09-09 10:46:18


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
       
    }
}

 public static void  Ispowerthree(int x){
    if (x % 3 == 0):
        return true
    else :
        return false
}
```

## Submission at 2024-09-09 10:49:21


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
       
    }
}

 public static void  Ispowerthree(int x){
    if (x % 3 == 0)
        return true
    else 
        return false
}
```

## Submission at 2024-09-09 10:55:05


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
       
    }
}

 public  void  Ispowerthree(x){
    if (x % 3 == 0)
        return true
    else 
        return false
}
```

## Submission at 2024-09-09 11:03:39


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
       
    }
}

 public  void  Ispowerthree(int x){
    if (x % 3 == 0)
        return true
    else 
        return false
}
```

## Submission at 2024-09-09 11:13:09


```
// Write Code from Scratch here
class Main(){
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.parseInt();
       
    }
}

 public  void  Ispowerthree(int x){
    if (x % 3 == 0)
        return true;
    else 
        return false;
}
```

## Submission at 2024-10-07 10:43:54


```
# Write your code from scratch here
import java.util.io;

class Main(){
    public static void main(String[] args){
        String[] s = new String;
        for(int i = 0; i < s.length; i++){
            if(s == 1 | s == 2 | s== 3){
                return s.sort(i);
            }
            else{
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:45:20


```
# Write your code from scratch here
import java.util.io;

class Main(){
    public static void main(String[] args){
        String[] s = new String;
        for(int i = 0; i < s.length; i++){
            if(s == 1 | s == 2 | s== 3){
                s.sort() = i;
                return s.sort();
            }
            else{
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:46:24


```
# Write your code from scratch here
import java.util.io;

class Main(){
    public static void main(String[] args){
        String[] s = new String;
        for(int i = 0; i < s.length; i++){
            if(s == 1 | s == 2 | s == 3 | s == ''+''){
                s.sort() = i;
                return s.sort();
            }
            else{
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:52:12


```
// Write your code from scratch here
import java.util.*;

class Main(){
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( s == 1 | s == 2 | s == 3 | s == "+" ){
                return s.sort();
            }
            else {
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:54:30


```
// Write your code from scratch here
import java.util.*;

class Main(){
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( s == 1 | s == 2 | s == 3 | s == "+" ){
                s.sort()=i;
                return i;
            }
            else {
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:56:35


```
// Write your code from scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( i == 1 | i == 2 | i == 3 | i == "+" ){
                s.sort()=i;
                return i;
            }
            else {
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:57:43


```
// Write your code from scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( i == 1 | i == 2 | i == 3 ){
                s.sort()=i;
                return i;
            }
            else {
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 10:59:46


```
// Write your code from scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( i == 1 | i == 2 | i == 3 ){
                sorted_arr = s.sort(i);
                return sorted_arr;
            }
            else {
                return -1;
            }
        }return -1;
    }
}
```

## Submission at 2024-10-07 11:03:16


```
// Write your code from scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( i == 1 | i == 2 | i == 3 ){
              s.sort()=i;
                Sustem.our.println(i);
            }
        }
    }
}
```

## Submission at 2024-10-07 11:04:19


```
// Write your code from scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( i == 1 | i == 2 | i == 3 ){
              s.sort()=i;
                System.out.println(i);
            }
        }
    }
}
```

## Submission at 2024-10-07 11:05:27


```
// Write your code from scratch here
import java.util.*;

class Main{
    public static void main(String[] args){
        String[] s = new String[1];
        for (int i = 0; i < s.length; i++){
            if ( i == 1 | i == 2 | i == 3 ){
              sorted = s.sort();
                System.out.println(sorted);
            }
        }
    }
}
```

## Submission at 2024-10-28 10:28:41


```
// Write your code from scratch here
#include<iostream>
#include<string>

using namespace std;

int main(){
    string order;
    string s;

    cin>> order;

    for (int i = 0; i<order.size(); i++){
        for (int j = i; j<order.size(); j++){
            if (order[i] == order[j] && order[i] != ' '){
                s[i] == order[i];
            }
        }
    } return true; 

}
```

## Submission at 2024-10-28 10:40:28


```
// Write your code from scratch here
#include<iostream>
#include<string>

using namespace std;

int main(){
    string order;
    string s;

    cin>> order;

    for (int i = 0; i<order.size(); i++){
        for (int j = i; j<order.size(); j++){
            if (order[i] == order[j] && order[i] != ' '){
                s[i] == order[i];
            }
        }
    } return s;

}
```

## Submission at 2024-10-28 10:51:02


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    int n;
    int k;

    cin>>n;
    cin>>k;

    int arr(n){
    cin>>arr;

    for (int i = 0; i < n; i++){
        int count = 0;
        for(int j = i+1; j < n; j++){
            if ( arr[i] == arr[j]){
                return arr[n];
            }
        }
    }return -1;
    }
}
```

## Submission at 2024-10-28 10:56:25


```
// Write your code from scratch here#include<iostream>
#include<iostream>
#include<string>

using namespace std;

int main(){
    string order;
    string s;

    cin>> order;

    for (int i = 0; i<order.size(); i++){
        for (int j = i; j<order.size(); j++){
            if (order[i] == order[j] && order[i] != ' '){
                s[i] == order[i];
            }
        }
    }return -1; 

}
```

## Submission at 2024-10-28 11:11:32


```
// Write your code from scratch here
#include<iostream>
#include<string>

using namespace std;

int main(){
    string order;
    string s;

    cin>> order;
    cin>> s;

    for (int i = 0; i<order.size(); i++){
        for (int j = i; j<order.size(); j++){
            if (order[i] == order[j] && order[i] != ' '){
                s[i] == order[i];
            }
        }
    }

}
```

## Submission at 2024-10-28 11:17:41


```
// Write your code from scratch here
#include<iostream>
#include<string>

using namespace std;

int main(){
    string order;
    string s;

    cin>> order;
    cin>> s;

    for (int i = 0; i<order.size(); i++){
        for (int j = i; j<order.size(); j++){
            if (order[i] == order[j] && order[i] != ' '){
                s[i] == order[i];
            }
        }
    }

}
```

## Submission at 2024-11-04 09:59:15


```
// Write your code from scratch here
#include<iostream>
#include<string>
using namespace std;

int main(){
    string order,s;

    cin >> order;
    cin >> s;

    for(int i = 0; i<order.size();i++){
        for (int j = i; j<order.size();j++){
                if (order[i] == order[j] & order[i] != ' '){
                    order[i] == s[i];
                }
        }
    }cout<<s;
}
```

## Submission at 2024-11-04 10:07:37


```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string order, s;
    cin >> order;
    cin >> s;

    string result = "";

    for (int i = 0; i < order.size(); i++) {
        for (char ch : s) {
            if (ch == order[i]) {
                result += ch;
            }
        }
    }
    for (char ch : s) {
        if (order.find(ch) == string::npos) {
            result += ch;
        }
    }
    cout << result;
}

```

## Submission at 2024-11-04 10:08:08


```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string order, s;
    cin >> order;
    cin >> s;

    string result = "";

    for (int i = 0; i < order.size(); i++) {
        for (char ch : s) {
            if (ch == order[i]) {
                result += ch;
            }
        }
    }
    for (char ch : s) {
        if (order.find(ch) == string::npos) {
            result += ch;
        }
    }
    cout << result;
}

```

## Submission at 2024-11-04 10:17:30


```
//ist containing the postorder traversal of the tree.
vector<int> postOrder(Node* root) {
    vector<int> result;
    if (root == NULL) return result;  // If root is null, return an empty vector

    // Recursive function to perform postorder traversal
    function<void(Node*)> traverse = [&](Node* node) {
        if (node == NULL) return;
        
        traverse(node->left);      // Visit left subtree
        traverse(node->right);     // Visit right subtree
        result.push_back(node->data); // Visit root node
    };
    
    traverse(root);
    return result;
}

```

## Submission at 2024-11-25 09:56:28


```
// write code from scratch
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnta;
    int cntb;
    for(int i =0; i<s.size(); i++){
        if(s[i] == 'a'){
        cnta++;
        }
        else if(s[i] == 'b'){
        cntb++;
    }
    }
    if(cnta>cntb){
        cout<< 'a';
    }
    else {
        cout<< 'b';
    }
}
```

## Submission at 2024-11-25 10:01:28


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnta;
    int cntb;
    for(int i =0; i<s.size(); i++){
        if(s[i] == 'a'){
        cnta++;
        }
        else if(s[i] == 'b'){
        cntb++;
    }
    }
    if(cnta>cntb){
        cout<< 'a';
    }
    else {
        cout<< 'b';
    }
    return 0;
}
```

## Submission at 2024-11-25 10:06:25


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnta;
    int cntb;
    for(int i =0; i<s.size(); i++){
        if(s[i] == 'a'){
        cnta++;
        }
        else if(s[i] == 'b'){
        cntb++;
    }
    }
    if(cnta>cntb){
        cout<< 'a';
    }
    else if(cntb>cnta){
        cout<< 'b';
    }
    return 0;
}
```

## Submission at 2024-11-25 10:24:38


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>> n;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<=i;j++){
            cout<< '*';
        }
        cout<< endl;
    }
    return 0;
}
```

## Submission at 2024-11-25 10:32:02


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[n];
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i] + arr[i+1] == arr[i + 1] - arr[i]){
            cout<< 'true';
        }
        else{
            cout<< 'false';
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:35:04


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = n ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i] + arr[i+1] == arr[i + 1] - arr[i]){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:38:54


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[] = n ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i] + arr[i+1] == arr[i + 1] - arr[i]){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:44:45


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[] ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i] + arr[i+1] == arr[i + 1] - arr[i]){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:48:10


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[] ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i]  == arr[i + 2] - arr[i + 1] ){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:51:57


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n] ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i]  == arr[i + 2] - arr[i + 1] ){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:56:06


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n] ;
    int d = arr[2] - arr [1];
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i]  == d - arr[i + 1] ){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 10:59:58


```
// write code from scratch
Submission

Code
// write code from scratch
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnta = 0;
    int cntb = 0;
    for(int i =0; i<s.size(); i++){
        if(s[i] == 'a'){
        cnta++;
        }
        else if(s[i] == 'b'){
        cntb++;
    }
    }
    if(cnta>cntb){
        cout<< 'a';
    }
    else {
        cout<< 'b';
    }
    return 0;
}
```

## Submission at 2024-11-25 11:01:17


```
// write code from scratch
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnta = 0;
    int cntb = 0;
    for(int i =0; i<s.size(); i++){
        if(s[i] == 'a'){
        cnta++;
        }
        else if(s[i] == 'b'){
        cntb++;
    }
    }
    if(cnta>cntb){
        cout<< 'a';
    }
    else {
        cout<< 'b';
    }
    return 0;
}
```

## Submission at 2024-11-25 11:23:40


```
// Write Code From Scratch Here
#include<bits/stdc++.h>
using namespace std;

bool BST(vector<int>&ans, int n){
    int mid = n/2;
    for(int i = 0; i<=mid; i++){
        if(mid[i] < ans [i]){
            return false;
        }
        else if (ans[i] < mid [i]){
            return true;
        }
    }
}

int main(){
    int n;
    cin>> n;
    vector<int>ans (int result)
    for(int i = 0; i<n; i++ ){
        if(result = BST(ans, n )){
            cout<< "YES";
        }
        else{
            cout<, "NO";
        }
    }return 0;
}
```

## Submission at 2024-11-25 11:32:00


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[] ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i] = arr[i+1] + (arr[i+1]- arr[i])){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 11:33:42


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n] ;
    cin>> n;
    for(int i = 0; i<n;i++){
        if(arr[i] = arr[i+1] + (arr[i+1]- arr[i])){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 11:36:21


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n] ;
    cin>> n;
    for(int i = 0; i<=n;i++){
        if(arr[i] = arr[i+1] + (arr[i+1]- arr[i])){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

## Submission at 2024-11-25 11:37:48


```
// write code from scratch
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n] ;
    cin>> n;
    for(int i = 0; i<=n;i++){
        if(arr[i] = arr[i+1] + (arr[i+1]- arr[i])){
            cout<< "true";
        }
        else{
            cout<< "false";
        }
    }return 0;
}
```

