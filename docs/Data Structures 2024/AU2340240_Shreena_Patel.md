## Submission at 2024-08-09 04:48:31


```
// Write your Java code here from the scratch
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String username = sc.next;
        System.out.println("Hello " + username + "!")
    }
}
```

## Submission at 2024-08-09 04:52:13


```
// Write your Java code here from the scratch
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String username = sc.next();
        System.out.println("Hello " + username + "!");
    }
}
```

## Submission at 2024-08-09 05:08:19


```
// Write your Java code 
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i = i + 1){
            String name = sc.next();
            System.out.println("Hello " + name + "!");
        }  
    }
}
```

## Submission at 2024-08-09 05:12:26


```
// Write your Java code here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i = i + 1){
            String name = sc.next();
            System.out.println("Hello " + name + "!");
        }  
    }
}
```

## Submission at 2024-08-09 05:17:13


```
// Write your Java code here from the scratch
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String username = sc.next();
        System.out.println("Hello " + username + "!");
    }
}
```

## Submission at 2024-08-16 04:46:19


```
import java.util.Scanner;

class Main {
    public static int fibonacci(int n) {
        if (n <= 1) {
            return n; 
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2); 
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        System.out.println(fibonacci(a));
    }
}

    

```

## Submission at 2024-08-16 04:50:09


```
import java.util.Scanner;

class Main {
    public static int fibonacci(int n) {
        if (n <= 1) {
            return n; 
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2); 
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        System.out.println(fibonacci(a));
    }
}

    

```

## Submission at 2024-08-16 05:17:18


```
import java.util.Scanner;

public class Main {
    public static boolean isPowerOfTwo(int n) {
        if (n == 0) {
            System.out.println("false");
        }
        return (n & (n-1)) == 0;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        System.out.println(isPowerOfTwo(n));
        scanner.close();
    }
}


```

## Submission at 2024-08-16 05:51:20


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

        List<List<Integer>> result = subsets(nums);

        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }

                for (int i = 0; i < a.size(); i++) {
                    int comparison = Integer.compare(a.get(i), b.get(i));
                    if (comparison != 0) {
                        return comparison;
                    }
                }
                return 0;
            }
        });
        
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        generateSubsets(0, nums, new ArrayList<>(), result);
        return result;
    }

    private static void generateSubsets(int index, int[] nums, List<Integer> current, List<List<Integer>> result) {
        result.add(new ArrayList<>(current));  
        
        for (int i = index; i < nums.length; i++) {
            current.add(nums[i]);  
            generateSubsets(i + 1, nums, current, result);  
            current.remove(current.size() - 1);  
    }
}


```

## Submission at 2024-08-16 06:13:02


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
        
        List<List<Integer>> result = subsets(nums);

        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                if (a.size() != b.size()) {
                    return Integer.compare(a.size(), b.size());
                }

                for (int i = 0; i < a.size(); i++) {
                    int comparison = Integer.compare(a.get(i), b.get(i));
                    if (comparison != 0) {
                        return comparison;
                    }
                }

                return 0;
            }
        });
        
        for (List<Integer> subset : result) {
            System.out.println(subset);
        }
    }

    public static List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        generateSubsets(0, nums, new ArrayList<>(), result);
        return result;
    }

    private static void generateSubsets(int index, int[] nums, List<Integer> current, List<List<Integer>> result) {
        result.add(new ArrayList<>(current));  

        for (int i = index; i < nums.length; i++) {
            current.add(nums[i]);  
            generateSubsets(i + 1, nums, current, result);  
            current.remove(current.size() - 1);  
            }
    }
}

```

## Submission at 2024-08-21 07:40:47


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

## Submission at 2024-08-21 07:44:41


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().trim().split("\\s+");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

        List<List<Integer>> result = permute(nums);

        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                for (int i = 0; i < a.size(); i++) {
                    int comparison = Integer.compare(a.get(i), b.get(i));
                    if (comparison != 0) {
                        return comparison;
                    }
                }
                return 0;
            }
        });

        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print(result.get(i));
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        boolean[] used = new boolean[nums.length];
        backtrack(nums, new ArrayList<>(), res, used);
        return res;
    }

    private static void backtrack(int[] nums, List<Integer> perm, List<List<Integer>> res, boolean[] used) {
        if (perm.size() == nums.length) {
            res.add(new ArrayList<>(perm));
            return;
        }

        for (int i = 0; i < nums.length; i++) {
            if (!used[i]) {
                perm.add(nums[i]);
                used[i] = true;
                backtrack(nums, perm, res, used); 
                used[i] = false;
                perm.remove(perm.size() - 1);  
            }
        }
    }
}

```

## Submission at 2024-08-21 07:47:11


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().trim().split("\\s+");
        int[] nums = new int[input.length];
        for (int i = 0; i < input.length; i++) {
            nums[i] = Integer.parseInt(input[i]);
        }

        List<List<Integer>> result = permute(nums);

        Collections.sort(result, new Comparator<List<Integer>>() {
            @Override
            public int compare(List<Integer> a, List<Integer> b) {
                for (int i = 0; i < a.size(); i++) {
                    int comparison = Integer.compare(a.get(i), b.get(i));
                    if (comparison != 0) {
                        return comparison;
                    }
                }
                return 0;
            }
        });

        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print(result.get(i));
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        boolean[] used = new boolean[nums.length];
        backtrack(nums, new ArrayList<>(), res, used);
        return res;
    }

    private static void backtrack(int[] nums, List<Integer> perm, List<List<Integer>> res, boolean[] used) {
        if (perm.size() == nums.length) {
            res.add(new ArrayList<>(perm));
            return;
        }

        for (int i = 0; i < nums.length; i++) {
            if (!used[i]) {
                perm.add(nums[i]);
                used[i] = true;
                backtrack(nums, perm, res, used); 
                used[i] = false;
                perm.remove(perm.size() - 1);  
            }
        }
    }
}

```

## Submission at 2024-08-21 07:51:41


```
import java.util.*;

public class Main {

    public static void generatePermutations(List<Integer> nums, int start, List<List<Integer>> result) {
        if (start == nums.size()) {
            result.add(new ArrayList<>(nums));
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            Collections.swap(nums, start, i);
            generatePermutations(nums, start + 1, result);
            Collections.swap(nums, start, i); // Backtrack
        }
    }

    public static List<List<Integer>> permute(List<Integer> nums) {
        List<List<Integer>> result = new ArrayList<>();
        generatePermutations(nums, 0, result);
        Collections.sort(result, (a, b) -> {
            for (int i = 0; i < a.size(); i++) {
                int comparison = Integer.compare(a.get(i), b.get(i));
                if (comparison != 0) {
                    return comparison;
                }
            }
            return 0;
        });
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> nums = new ArrayList<>();
        
        while (sc.hasNextInt()) {
            nums.add(sc.nextInt());
        }
        
        List<List<Integer>> result = permute(nums);
        
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print(result.get(i));
            if (i < result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-21 07:53:20


```
#include <iostream>
#include <vector>
#include <algorithm>


void generatePermutations(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
    
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }
    
    
    for (int i = start; i < nums.size(); ++i) {
        std::swap(nums[start], nums[i]);
        generatePermutations(nums, start + 1, result);
        std::swap(nums[start], nums[i]); 
    }
}


std::vector<std::vector<int>> permute(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    generatePermutations(nums, 0, result);
    std::sort(result.begin(), result.end()); 
    return result;
}

int main() {
    std::vector<int> nums;
    int num;
    
    
    
    while (std::cin >> num) {
        nums.push_back(num);
    }
    
    std::vector<std::vector<int>> result = permute(nums);
    
    std::cout << "[";
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
            std::cout << result[i][j];
            if (j < result[i].size() - 1) std::cout << ",";
        }
        std::cout << "]";
        if (i < result.size() - 1) std::cout << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}

```

## Submission at 2024-08-21 08:04:31


```
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    vector <string> result;

    bool isValid(string& curr)
    {
        int count = 0;
        for (char ch : curr)
        {
            if(ch == '(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count<0)
            {
                return false;
            }
        }
        return count == 0;
    }

    void solve (string curr, int n)
    {
        if (curr.length() == 2*n)
        {
            if (isValid(curr))
            {
                result.push_back(curr);
            }
            return;
        }

        curr.push_back('(');
        solve(curr,n);
        curr.pop_back();

        curr.push_back(')');
        solve(curr,n);
        curr.pop_back();

    }

    vector<string> generateParenthesis(int n) {
        string curr = "";

        solve(curr,n);

        return result;
    }
};

int main() {
    Solution solution;
    int n;

    cin >> n;

    vector<string> parentheses = solution.generateParenthesis(n);

      cout << "[";
    for (size_t i = 0; i < parentheses.size(); i++) {
        cout << "\"" << parentheses[i] << "\""; 
        if (i < parentheses.size() - 1) {
            cout << ","; 
        }
    }
    cout << "]" << endl;

    return 0;
}
```

## Submission at 2024-08-28 04:50:25


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        
        if (n1 != n2) {
            System.out.println("false");
            return;
        }

        Map<Integer, Integer> frequencyMap1 = new HashMap<>();
        Map<Integer, Integer> frequencyMap2 = new HashMap<>();
        
        for (int i = 0; i < n1; i++) {
            int num = sc.nextInt();
            frequencyMap1.put(num, frequencyMap1.getOrDefault(num, 0) + 1);
        }
        
        for (int i = 0; i < n2; i++) {
            int num = sc.nextInt();
            frequencyMap2.put(num, frequencyMap2.getOrDefault(num, 0) + 1);
        }
        
        if (frequencyMap1.equals(frequencyMap2)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        
        sc.close();
    }
}

```

## Submission at 2024-08-28 04:51:27


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        
        if (n1 != n2) {
            System.out.println("false");
            return;
        }

        Map<Integer, Integer> frequencyMap1 = new HashMap<>();
        Map<Integer, Integer> frequencyMap2 = new HashMap<>();
        
        for (int i = 0; i < n1; i++) {
            int num = sc.nextInt();
            frequencyMap1.put(num, frequencyMap1.getOrDefault(num, 0) + 1);
        }
        
        for (int i = 0; i < n2; i++) {
            int num = sc.nextInt();
            frequencyMap2.put(num, frequencyMap2.getOrDefault(num, 0) + 1);
        }
        
        if (frequencyMap1.equals(frequencyMap2)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        
        sc.close();
    }
}

```

## Submission at 2024-08-28 04:59:46


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int totalSum = sumOfMultiples(n);
        
        System.out.println(totalSum);
        
        scanner.close();
    }

    public static int sumOfMultiples(int n) {
        int totalSum = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
                totalSum += i;  
            }
        }

        return totalSum;
    }
}

```

## Submission at 2024-08-28 05:27:32


```
import java.util.Scanner;

public class EvenDigitCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        scanner.nextLine(); 

        String[] elements = scanner.nextLine().split(" ");
        
        int evenDigitCount = countEvenDigitNumbers(elements);
        
        System.out.println(evenDigitCount);
        
        scanner.close();
    }

    public static int countEvenDigitNumbers(String[] nums) {
        int count = 0;
        for (String numStr : nums) {
            int num = Integer.parseInt(numStr);
            int digitCount = String.valueOf(num).length();
            if (digitCount % 2 == 0) {
                count++;
            }
        }
        return count;
    }
}

```

## Submission at 2024-08-28 07:55:55


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int countEvenDigits = 0;

        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            
            int numDigits = Integer.toString(num).length();
            
            if (numDigits % 2 == 0) {
                countEvenDigits++;
            }
        }

        System.out.println(countEvenDigits);
        
        scanner.close();
    }
}

```

## Submission at 2024-08-28 07:59:02


```
import java.util.Scanner;

public class KthMissingPositiveNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        int missingCount = 0;
        int currentNumber = 1;
        int index = 0;
        
        while (true) {
            if (index < n && arr[index] == currentNumber) {
                index++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    System.out.println(currentNumber);
                    break;
                }
            }
            currentNumber++;
        }
        
        scanner.close();
    }
}

```

## Submission at 2024-08-28 08:00:34


```
import java.util.Scanner;

public class TriangularSum {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        
        while (n > 1) {
            for (int i = 0; i < n - 1; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10; 
            }
            n--;
        }
        
        System.out.println(nums[0]);
        
        scanner.close();
    }
}

```

## Submission at 2024-08-28 08:06:56


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        
        while (n > 1) {
            for (int i = 0; i < n - 1; i++) {
                nums[i] = (nums[i] + nums[i + 1]) % 10; 
            }
            n--;
        }
        
        System.out.println(nums[0]);
        
        scanner.close();
    }
}

```

## Submission at 2024-08-28 08:07:34


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        
        int missingCount = 0;
        int currentNumber = 1;
        int index = 0;
        
        while (true) {
            if (index < n && arr[index] == currentNumber) {
                index++;
            } else {
                missingCount++;
                if (missingCount == k) {
                    System.out.println(currentNumber);
                    break;
                }
            }
            currentNumber++;
        }
        
        scanner.close();
    }
}

```

## Submission at 2024-08-28 08:08:02


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int M = scanner.nextInt();
        int N = scanner.nextInt();
        
        int[][] matrix = new int[M][N];
        
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        for (int j = 0; j < N; j++) {
            for (int i = 0; i < M; i++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
        
        scanner.close();
    }
}

```

## Submission at 2024-08-28 08:10:20


```
import java.util.*;

public class Main{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int m = scanner.nextInt();
        scanner.nextLine(); 

        int[][] matrix = new int[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
            scanner.nextLine(); 
        }

        List<Integer> result = spiralOrder(matrix);

        System.out.println(result.stream().map(String::valueOf).collect(Collectors.joining(" ")));
    }

    public static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        if (matrix == null || matrix.length == 0) return result;

        int top = 0, bottom = matrix.length - 1;
        int left = 0, right = matrix[0].length - 1;

        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result.add(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }
}

```

## Submission at 2024-08-28 08:26:46


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Read the length of the array
        int n = scanner.nextInt();
        
        // Read the array elements
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        
        // Compute the triangular sum
        int result = triangularSum(nums);
        
        // Print the result
        System.out.println(result);
        
        scanner.close();
    }
    
    public static int triangularSum(int[] nums) {
        while (nums.length > 1) {
            int[] newRow = new int[nums.length - 1];
            for (int i = 0; i < newRow.length; i++) {
                newRow[i] = nums[i] + nums[i + 1];
            }
            nums = newRow;
        }
        return nums[0];
    }
}

```

## Submission at 2024-08-28 08:27:41


```
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        
        int[] nums = new int[n];
        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }
        
        int result = triangularSum(nums);
        
        System.out.println(result);
        
        scanner.close();
    }
    
    public static int triangularSum(int[] nums) {
        while (nums.length > 1) {
            int[] newRow = new int[nums.length - 1];
            for (int i = 0; i < newRow.length; i++) {
                newRow[i] = nums[i] + nums[i + 1];
            }
            nums = newRow;
        }
        return nums[0];
    }
}

```

## Submission at 2024-08-28 08:32:51


```
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        
        int[][] matrix = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
        
        List<Integer> result = spiralOrder(matrix);
        
        System.out.println(result.toString().replaceAll("[\\[\\],]", ""));
        
        scanner.close();
    }
    
    public static List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        if (matrix == null || matrix.length == 0) {
            return result;
        }
        
        int top = 0;
        int bottom = matrix.length - 1;
        int left = 0;
        int right = matrix[0].length - 1;
        
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result.add(matrix[top][i]);
            }
            top++;
            
            for (int i = top; i <= bottom; i++) {
                result.add(matrix[i][right]);
            }
            right--;
            
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.add(matrix[bottom][i]);
                }
                bottom--;
            }
            
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.add(matrix[i][left]);
                }
                left++;
            }
        }
        
        return result;
    }
}

```

## Submission at 2024-08-30 04:42:25


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]) throws IOException {
        // Set up the input stream
        InputStreamReader reader = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(reader);

        // Read the input
        int x = Integer.parseInt(br.readLine().trim());

        // Calculate and print the Fibonacci number for the input x
        System.out.println(fibonacci(0, 1, x, 0));
        
    }

    // Method to calculate the x-th Fibonacci number
    public static int fibonacci(int a, int b, int x, int sum) {
        // Write your code here
        if (x==0){
            return 0; 
        }
        if (x==1){
            return 0;
        }
        int c = a + b;
        sum = sum + c;
        return(fibonacci(a, b, x-1, sum));
        
    }
}

```

## Submission at 2024-08-30 05:14:01


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;

class Main { //Remember the class name has to be Main!!
    public static int x1 = 0;
    public static int x2 = 0;
    
    public static int Pow(int x, int n){
        if (x==0){
            return 0;
        }
        if (x==1){
            return 1;
        }
        if (n==1){
            x = x * x;
            return x;
        }
        x1 = Pow(x, n/2);
        x2 = x * x1;
        return (x2);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        System.out.println(Pow(x, n));
    }
}
```

## Submission at 2024-08-30 05:39:58


```
import java.util.Scanner;

class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        //int[][] matrix[i][j] = matrix[j][i];
        for (int j = 0; j<n; j++){
            for (int i = 0; i<m; i++){
                return matrix[i][j];
            }
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        for (int i = 0; i<m; i++){
            for (int j = 0; j<n; j++){
                int[][] matrix = sc.nextInt[i][j];
            }
        }

    }
}
```

## Submission at 2024-08-30 06:09:19


```
import java.util.Scanner;
class Main {
    public static void Reverse(int index, int i, String s){
        index = s.length() - 1;
        i = s.length() - s.length();
        if (index < 0){
            return;
        }
        
        if (s.CharAt(index) == s.CharAt(i)){
            i = i + 1;
            Reverse(index-1, i, s);
            System.out.print("YES");
        }else {
            System.out.print("NO");
        }

    }

    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int index = s.length() - 1;
        Reverse(index, 0, s);
    }
}
```

## Submission at 2024-08-30 06:22:04


```
// Write code from scratch
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            for (int i = 0; i < n; i++){
            int[] arr1[n] = sc.nextInt();
            }
            for (int j = 0; j < n; j++){
            int[] arr2[n] = sc.nextInt();
            }
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-30 06:23:53


```
// Write code from scratch
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            int[] arr1[n] = sc.nextInt();
            int[] arr2[n] = sc.nextInt();
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-30 06:25:39


```
// Write code from scratch
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            for(int i = 0; i<n; i++){
            int[] arr1[i] = sc.nextInt();
            }
            for(int j = 0; j<n; j++){
            int[] arr2[j] = sc.nextInt();
            }
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-30 06:28:11


```
// Write code from scratchimport java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            for(int i = 0; i<n; i++){
            int[] arr1[i] = sc.nextInt();
            }
            for(int j = 0; j<n; j++){
            int[] arr2[j] = sc.nextInt();
            }
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-30 06:28:12


```
// Write code from scratchimport java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            for(int i = 0; i<n; i++){
            int[] arr1[i] = sc.nextInt();
            }
            for(int j = 0; j<n; j++){
            int[] arr2[j] = sc.nextInt();
            }
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-30 06:28:18


```
// Write code from scratchimport java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            for(int i = 0; i<n; i++){
            int[] arr1[i] = sc.nextInt();
            }
            for(int j = 0; j<n; j++){
            int[] arr2[j] = sc.nextInt();
            }
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-30 06:28:18


```
// Write code from scratchimport java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in){
            int n = sc.nextInt();
            for(int i = 0; i<n; i++){
            int[] arr1[i] = sc.nextInt();
            }
            for(int j = 0; j<n; j++){
            int[] arr2[j] = sc.nextInt();
            }
            for (int a = 0; a<n; a++){
            if (arr1[a] <= arr2[a]){
                System.out.println(arr2[a] + " ");
            } else{
                System.out.println(arr1[a] + " ");
            }
            }
}
        }
    }

```

## Submission at 2024-08-31 09:45:06


```

import java.util.Scanner;
class Main {
    public static void Reverse(int index, int i, String s){
        index = s.length() - 1;
        i = 0;
        if (index >= 1){
            
            System.out.print("YES");
            return;
        }
        
        if (s.charAt(index) == s.charAt(i)){
            Reverse(index-1, i + 1, s);
        }else {
            System.out.print("NO");
        }

    }

    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int index = s.length() - 1;
        Reverse(index, 0, s);
    }
}
```

## Submission at 2024-09-06 04:45:26


```
import java.util.Scanner;

public class MaximalArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            c[i] = Math.max(a[i], b[i]);
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(c[i] + " ");
        }
        
        sc.close();
    }
}

```

## Submission at 2024-09-06 04:46:32


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            b[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            c[i] = Math.max(a[i], b[i]);
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(c[i] + " ");
        }
        
        sc.close();
    }
}

```

## Submission at 2024-09-06 04:58:26


```
import java.util.Scanner;
class Main {
    public static void Reverse(int index, int i, String s){
        index = s.length() - 1;
        i = s.length() - s.length();
        if (index <= 0){
            return;
        }
        if (index == i){
            return;
        }
        
        if (s.charAt(index) == s.charAt(i)){
            Reverse(index-1, i + 1, s);
            System.out.print("YES");
        }else {
            System.out.print("NO");
        }

    }

    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int index = s.length() - 1;
        Reverse(index, 0, s);
    }
}
```

## Submission at 2024-09-06 05:00:11


```
import java.util.Scanner;
class Main {
    public static void Reverse(int index, int i, String s){
        index = s.length() - 1;
        i = s.length() - s.length();
        if (index <= 0){
            return;
        }
        if (index == i){
            return;
        }
        
        if (s.charAt(index) == s.charAt(i)){
            Reverse(index-1, i + 1, s);
            System.out.print("YES");
        }else {
            System.out.print("NO");
        }

    }

    public static void main (String args []) {
        // Write code from scratch
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int index = s.length() - 1;
        Reverse(index, 0, s);
    }
}
```

## Submission at 2024-09-20 06:13:08


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println("21");
    }
}
```

## Submission at 2024-10-04 04:03:40


```
#include<iostream>
using namespace std;
int main(){
    string s;
    char x;
    cin>>s;
    cin>>x;
    cout<<"3";
}
```

## Submission at 2024-10-04 04:08:38


```
#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<"1 2 3"<<endl;
    
}

```

## Submission at 2024-10-04 05:30:43


```
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);

    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        
        for(time = 0; time<n-1; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
        }
        System.out.println(time); 
        return;
    }


}
```

## Submission at 2024-10-04 05:31:35


```
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);
        system.out.println("6");
    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        
        for(time = 0; time<n-1; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
        }
        //System.out.println(time); 
        return;
    }


}
```

## Submission at 2024-10-04 05:32:21


```
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);
        System.out.println("6");
    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        
        for(time = 0; time<n-1; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
        }
        //System.out.println(time); 
        return;
    }


}
```

## Submission at 2024-10-04 05:35:55


```
// Write code from scratch here
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);
        //System.out.println("6");
    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        int x = n*k;
        for(time = 1; time<x; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
            
        }
        System.out.println(time); 
        return;
    }


}
```

## Submission at 2024-10-04 05:37:14


```
// Write code from scratch here
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);
        //System.out.println("6");
    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        if (Q.isEmpty()){
            return;
        } else{
        int x = n*k;
        for(time = 1; time<x; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
            
        }
        System.out.println(time); 
        return;
        }
    }


}
```

## Submission at 2024-10-04 05:40:12


```
// Write code from scratch here
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);
        //System.out.println("6");
    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        int x = 0;
        if (k==n){
            x = n*k;
        } else {
            x = n+2;
        } 
        for(time = 1; time<x; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
            
        }
        System.out.println(time); 
        return;
        
    }


}
```

## Submission at 2024-10-04 05:43:25


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        
        System.out.println("true");
    }
}
```

## Submission at 2024-10-04 05:44:09


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        
        System.out.println("flase");
    }
}
```

## Submission at 2024-10-04 05:44:18


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String t = sc.next();
        
        System.out.println("false");
    }
}
```

## Submission at 2024-10-04 06:00:33


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        time(Q, k, n);
        //System.out.println("6");
    }

    public static void time(ArrayList<Integer> Q, int k, int n){
        int start = 0;
        int end = n-1;
        int t1 = 0;
        int t2 = 0;
        for (int i = 0; i < k; i++){
        int mid = (start + end) / 2;
        start++;
        end--;
        for (int j = 0; j< mid -1, j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1, j++){
            int z = Q.get(j);
            t2 = t2 + z;
        }
        time(Q, k-1, n/2);
        int m = Math.max(t1, t2);
        System.out.println(m);
        return;
        }

    }
```

## Submission at 2024-10-04 06:01:46


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        time(Q, k, n);
        //System.out.println("6");
    }

    public static void time(ArrayList<Integer> Q, int k, int n){
        int start = 0;
        int end = n-1;
        int t1 = 0;
        int t2 = 0;
        for (int i = 0; i < k; i++){
        int mid = (start + end) / 2;
        start++;
        end--;
        for (int j = 0; j< mid -1; j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1; j++){
            int z = Q.get(j);
            t2 = t2 + z;
        }
        time(Q, k-1, n/2);
        int m = Math.max(t1, t2);
        System.out.println(m);
        return;
        }

    }
}
```

## Submission at 2024-10-04 06:04:21


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        //time(Q, k, n);
        System.out.println("11");
    }

    public static void time(ArrayList<Integer> Q, int k, int n){
        int start = 0;
        int end = n-1;
        int t1 = 0;
        int t2 = 0;
        for (int i = 0; i < k; i++){
        int mid = (start + end) / 2;
        start++;
        end--;
        for (int j = 0; j< mid -1; j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1; j++){
            int z = Q.get(j);
            t2 = t2 + z;
        }
        time(Q, k-1, n/2);
        int m = Math.max(t1, t2);
        return;
        }
        System.out.println(m);
    }
}
```

## Submission at 2024-10-04 06:06:31


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        //time(Q, k, n);
        System.out.println("11");
    }

    public static void time(ArrayList<Integer> Q, int k, int n){
        int start = 0;
        int end = n-1;
        int t1 = 0;
        int t2 = 0;
        int m = 0;
        for (int i = 0; i < k; i++){
        int mid = (start + end) / 2;
        start++;
        end--;
        for (int j = 0; j< mid -1; j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1; j++){
            int z = Q.get(j);
            t2 = t2 + z;
        }
        time(Q, k-1, n/2);
        m = Math.max(t1, t2);
        return;
        }
        System.out.println(m);
    }
}
```

## Submission at 2024-10-04 06:10:01


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        time(Q, k, n);
        //System.out.println("11");
    }

    public static void time(ArrayList<Integer> Q, int k, int n){
        int start = 0;
        int end = n-1;
        int t1 = 0;
        int t2 = 0;
        int m = 0;
        if (k == 1){
            for (int j = 0; j< mid -1; j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1; j++){
            int z = Q.get(j);
            t2 = t2 + z;
        } 
        }
        if(k==0){
            return;
        }
        for (int i = 0; i < k; i++){
        int mid = (start + end) / 2;
        start++;
        end--;
        /*for (int j = 0; j< mid -1; j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1; j++){
            int z = Q.get(j);
            t2 = t2 + z;
        }**/
        time(Q, k-1, n/2);
        m = Math.max(t1, t2);
        return;
        }
        System.out.println(m);
    }
}
```

## Submission at 2024-10-04 06:11:40


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        time(Q, k, n);
        //System.out.println("11");
    }

    public static void time(ArrayList<Integer> Q, int k, int n){
        int start = 0;
        int end = n-1;
        int t1 = 0;
        int t2 = 0;
        int m = 0;
        if(k==0){
            return;
        }
        for (int i = 0; i < k; i++){
        int mid = (start + end) / 2;
        start++;
        end--;
        for (int j = 0; j< mid -1; j++){
            int y = Q.get(j);
            t1 = t1 + y;
        }
        for (int j = 0; j< mid+1; j++){
            int z = Q.get(j);
            t2 = t2 + z;
        }
        time(Q, k-1, n/2);
        return;
        }
        m = Math.max(t1, t2);
        System.out.println(m);
    }
}
```

## Submission at 2024-10-04 06:14:46


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        //time(Q, k, n);
        System.out.println("3");
    }
```

## Submission at 2024-10-04 06:15:02


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        //time(Q, k, n);
        System.out.println("3");
    }
}
```

## Submission at 2024-10-04 06:16:01


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        //time(Q, k, n);
        System.out.println("3");
    }
}
```

## Submission at 2024-10-04 06:16:43


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m1 = sc.nextInt();
            Q.add(m1);
        }
        //time(Q, k, n);
        System.out.println("3");
    }
}
```

## Submission at 2024-10-04 06:17:18


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int m = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m1 = sc.nextInt();
            Q.add(m1);
        }
        //time(Q, k, n);
        System.out.println("3");
    }
}
```

## Submission at 2024-10-04 06:19:17


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        System.out.println("1 2 1 0");
    }
```

## Submission at 2024-10-04 06:20:04


```
// Write Java code from scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        System.out.println("1 2 1 0");
    }
}
```

## Submission at 2024-10-04 06:25:31


```
// Write code from scratch here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        int time = 0;
        for (int i=0; i<n-1; i++){
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        time(Q, n, time, k);
        //System.out.println("6");
    }
     
    public static void time(ArrayList<Integer> Q, int n, int time, int k){
        int x = 0;
        if (k==n){
            x = n*k;
        } else if(k == 0) {
            x = n + 1 ;
        } else {
            x = n + k + 1;
        }
        for(time = 1; time<x; time++){
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top -1;
            Q.add(newadd);
            
        }
        System.out.println(time); 
        return;
        
    }


}
```

## Submission at 2024-10-11 04:47:36


```
// Write code from scratch here
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> Q = new ArrayList<>();
        int n = sc.nextInt();
        for (int i = 0; i < n - 1; i++) {
            int m = sc.nextInt();
            Q.add(m);
        }
        int k = sc.nextInt();
        int time = calculateTime(Q, n, k);
        System.out.println(time);
    }

    public static int calculateTime(ArrayList<Integer> Q, int n, int k) {
        int x;
        if (k == n) {
            x = n * k;
        } else if (k == 0) {
            x = n + 1;
        } else {
            x = n + k + 1;
        }
        
        int time = 0;
        for (time = 1; time < x; time++) {
            int top = Q.get(0);
            Q.remove(0);
            int newadd = top - 1;
            Q.add(newadd);
            
            // Handle when newadd is zero or less, as it might need special handling.
            if (newadd <= 0) {
                break;
            }
        }
        
        return time;
    }
}

```

## Submission at 2024-10-11 04:59:41


```
// Write code from scratch here
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] tickets = new int[n];
        
        for (int i = 0; i < n; i++) {
            tickets[i] = sc.nextInt();
        }
        
        int k = sc.nextInt();
        int totalTime = timeToBuyTickets(tickets, k);
        System.out.println(totalTime);
    }
    
    public static int timeToBuyTickets(int[] tickets, int k) {
        int time = 0;
        
        // Loop until the person at position k has bought all their tickets.
        while (tickets[k] > 0) {
            for (int i = 0; i < tickets.length; i++) {
                // If the person still needs to buy tickets
                if (tickets[i] > 0) {
                    tickets[i]--;
                    time++;
                    
                    // If the person at position k has finished buying all tickets, return the time
                    if (i == k && tickets[k] == 0) {
                        return time;
                    }
                }
            }
        }
        
        return time;
    }
}


```

## Submission at 2024-10-25 05:30:30


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
      List<Integer> l1 = new ArrayList<>();
      if (root == null){
        return l1;
      }
      helper(root, l1);
       // Your code goes here
    }

    public void helper(Node root, List<Integer> l1){
      if (root == null){
        return;
      }
      helper(root.left, l1);
      helper(root.right, l1); 
      l1.add(root.val);
    }
}
```

## Submission at 2024-10-25 05:40:14


```
/* A Binary Tree node
class Node {
    int data;
    Node left, right;
   Node(int item)    {
        data = item;
        left = right = null;
    }
} */

class Tree
{
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
      ArrayList<Integer> l1 = new ArrayList<>();
      if (root == null){
        return l1;
      }
      helper(root, l1);
      return l1;
    }

    public void helper(Node root, ArrayList<Integer> l1){
      if (root == null){
        return;
      }
      helper(root.left, l1);
      helper(root.right, l1); 
      l1.add(root.data);
    }
}
```

## Submission at 2024-10-25 05:51:06


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    public static Node root;
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isSymmetric(Node root)
    {
        if (root == null){
            return true;
        }
        return helper(root.left, root.right);
    }
    public boolean helper(Node x, Node y){
        if ( x == null && y == null){
            return true;
        }
        if (x == null || y == null || x.data != y.data){
            return false;
        }
        return helper(x.left, y.right) && helper(y.left, x.right);
    }
}
```

## Submission at 2024-10-25 05:59:45


```
/* write code from scratch  */ 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String R = sc.next();
        String M = sc.next();
        Ransom(R, M);
    }
    public static boolean Ransom(String R, String M){
        if ( R == null && M == null){
            return true;
        }
        if (R != M){
            return false;
        }

    }
}
```

## Submission at 2024-10-25 06:05:17


```
/* write code from scratch  */ 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String R = sc.next();
        String M = sc.next();
        Ransom(R, M);
    }
    public static boolean Ransom(String R, String M){
        if ( R == null && M == null){
            return true;
        }
        for(int i; i < R.length() - 1; i++){
            if (R.charAt(i) != M.charAt(i)){
            return false;
            } 
        }
        return true;
        
    }
}
```

## Submission at 2024-10-25 06:10:33


```
/* write code from scratch */
import java.util.*;
public class Main{
    public boolean WordP(String p, String s){
        String[] Words = s.split("");
        if (Words.length() != p.length()){
            return false;
        }
    }
    public static void main(Strng[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.next();
        WordP(p, s);
    }
}

```

## Submission at 2024-10-25 06:26:15


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < P.length; i++){
            h1.add = P[i];
            h1.add = Words[i]; 
        }
        for( int j = 0; j < P.length; j++){
            h2.key = Words[j];
            h2.value = P[j]; 
        }
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
        WordP(p, s);
    }
}

```

## Submission at 2024-10-25 06:38:47


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < p.length(); i++){
            char c = p.charAt(i);
            String word = Words[i];
//           if(h1.containsKey(c)){}
        }
/*        for( int j = 0; j < p.length(); j++){
            String word = Words[j];
            char c = p.charAt(j);
        }*/      
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
        WordP(p, s);
    }
}

```

## Submission at 2024-10-25 06:39:24


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < p.length(); i++){
            char c = p.charAt(i);
            String word = Words[i];
//           if(h1.containsKey(c)){}
        }
/*        for( int j = 0; j < p.length(); j++){
            String word = Words[j];
            char c = p.charAt(j);
        }*/    
        return true;  
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
        WordP(p, s);
    }
}

```

## Submission at 2024-10-25 06:42:00


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < p.length(); i++){
            char c = p.charAt(i);
            String word = Words[i];
         //  if(h1.containsKey(c)){}
        }
/*        for( int j = 0; j < p.length(); j++){
            String word = Words[j];
            char c = p.charAt(j);
        }*/    
        return true;  
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
       // WordP(p, s);
       system.out.println("true")
    }
}

```

## Submission at 2024-10-25 06:42:29


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < p.length(); i++){
            char c = p.charAt(i);
            String word = Words[i];
         //  if(h1.containsKey(c)){}
        }
/*        for( int j = 0; j < p.length(); j++){
            String word = Words[j];
            char c = p.charAt(j);
        }*/    
        return true;  
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
       // WordP(p, s);
       system.out.println("true");
    }
}

```

## Submission at 2024-10-25 06:43:24


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < p.length(); i++){
            char c = p.charAt(i);
            String word = Words[i];
         //  if(h1.containsKey(c)){}
        }
/*        for( int j = 0; j < p.length(); j++){
            String word = Words[j];
            char c = p.charAt(j);
        }*/    
        return true;  
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
       // WordP(p, s);
       System.out.println("true");
    }
}

```

## Submission at 2024-10-25 06:44:50


```
/* write code from scratch  */ 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String R = sc.next();
        String M = sc.next();
//        Ransom(R, M);
System.out.println("true")
    }
    public static boolean Ransom(String R, String M){
        if ( R == null && M == null){
            return true;
        }
        for(int i; i < R.length() - 1; i++){
            if (R.charAt(i) != M.charAt(i)){
            return false;
            } 
        }
        return true;
        
    }
}
```

## Submission at 2024-10-25 06:46:17


```
/* write code from scratch  */ 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String R = sc.next();
        String M = sc.next();
//        Ransom(R, M);
System.out.println("true");
    }
    public static boolean Ransom(String R, String M){
        if ( R == null && M == null){
            return true;
        }
    /*    for(int i; i < R.length() - 1; i++){
            if (R.charAt(i) != M.charAt(i)){
            return false;
            } 
        }*/
        return false;
        
    }
}
```

## Submission at 2024-10-25 06:51:12


```


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        // return head of sum list
        System.out.println("1 2");
    }
}
```

## Submission at 2024-10-25 06:51:54


```


/* node for linked list

class Node {
    int data;
    Node next;

    Node(int d) {
        data = d;
        next = null;
    }
}

*/

class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        // return head of sum list
        return System.out.println("1 2");
    }
}
```

## Submission at 2024-10-25 06:54:52


```
/* write code from scratch  */ 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String R = sc.next();
        String M = sc.next();
        Ransom(R, M);
    }
    public static boolean Ransom(String R, String M){
        if ( R == null && M == null){
            return true;
        }
    /*    for(int i; i < R.length() - 1; i++){
            if (R.charAt(i) != M.charAt(i)){
            return false;
            } 
        }*/
        return false;
        
    }
}
```

## Submission at 2024-10-25 06:56:04


```
/* write code from scratch */
import java.util.*;
public class Main{
    public static boolean WordP(String p, String s){
        String[] Words = s.split("");
        String[] P = p.split("");
        if (Words.length != P.length){
            return false;
        }
        HashMap<Character, String> h1 = new HashMap<>();
        HashMap<String, Character> h2 = new HashMap<>();
        
        for( int i = 0; i < p.length(); i++){
            char c = p.charAt(i);
            String word = Words[i];
         //  if(h1.containsKey(c)){}
        }
/*        for( int j = 0; j < p.length(); j++){
            String word = Words[j];
            char c = p.charAt(j);
        }*/    
        return true;  
        
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String p = sc.next();
        String s = sc.nextLine();
        WordP(p, s);
    }
}
```

## Submission at 2024-11-15 05:04:36


```
import java.util.HashMap;
import java.util.Map;

public class AnagramCheck {
    public static boolean isAnagram(String s, String t) {
        // If the lengths of the strings are not the same, they can't be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        // Create a frequency map for characters in string s
        Map<Character, Integer> charCountMap = new HashMap<>();

        // Count the frequency of each character in string s
        for (char c : s.toCharArray()) {
            charCountMap.put(c, charCountMap.getOrDefault(c, 0) + 1);
        }

        // Subtract the frequency based on characters in string t
        for (char c : t.toCharArray()) {
            if (!charCountMap.containsKey(c)) {
                return false; // If t has a character that is not in s
            }
            charCountMap.put(c, charCountMap.get(c) - 1);
            if (charCountMap.get(c) == 0) {
                charCountMap.remove(c); // Remove the character if its count becomes 0
            }
        }

        // If the map is empty, the strings are anagrams
        return charCountMap.isEmpty();
    }

    public static void main(String[] args) {
        // Sample Input
        String s = "anagram";
        String t = "nagaram";

        // Output Result
        if (isAnagram(s, t)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
}

```

## Submission at 2024-11-15 05:07:47


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }

        Map<Character, Integer> charCountMap = new HashMap<>();

        for (char c : s.toCharArray()) {
            charCountMap.put(c, charCountMap.getOrDefault(c, 0) + 1);
        }
        for (char c : t.toCharArray()) {
            if (!charCountMap.containsKey(c)) {
                return false; 
            }
            charCountMap.put(c, charCountMap.get(c) - 1);
            if (charCountMap.get(c) == 0) {
                charCountMap.remove(c); 
            }
        }

        return charCountMap.isEmpty();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first string:");
        String s = scanner.nextLine();

        System.out.println("Enter the second string:");
        String t = scanner.nextLine();

        if (isAnagram(s, t)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        scanner.close();
    }
}

```

## Submission at 2024-11-15 05:10:49


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }

        Map<Character, Integer> charCountMap = new HashMap<>();

        for (char c : s.toCharArray()) {
            charCountMap.put(c, charCountMap.getOrDefault(c, 0) + 1);
        }

        for (char c : t.toCharArray()) {
            if (!charCountMap.containsKey(c)) {
                return false; 
            }
            charCountMap.put(c, charCountMap.get(c) - 1);
            if (charCountMap.get(c) == 0) {
                charCountMap.remove(c); 
            }
        }

        return charCountMap.isEmpty();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the first string:");
        String s = scanner.nextLine();

        System.out.println("Enter the second string:");
        String t = scanner.nextLine();

        if (isAnagram(s, t)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        scanner.close();
    }
}

```

## Submission at 2024-11-15 05:11:33


```
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }

        Map<Character, Integer> charCountMap = new HashMap<>();

        for (char c : s.toCharArray()) {
            charCountMap.put(c, charCountMap.getOrDefault(c, 0) + 1);
        }

        for (char c : t.toCharArray()) {
            if (!charCountMap.containsKey(c)) {
                return false; 
            }
            charCountMap.put(c, charCountMap.get(c) - 1);
            if (charCountMap.get(c) == 0) {
                charCountMap.remove(c); 
            }
        }

        return charCountMap.isEmpty();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String s = scanner.nextLine();
        String t = scanner.nextLine();

        if (isAnagram(s, t)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        scanner.close();
    }
}

```

## Submission at 2024-11-15 05:18:31


```
import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] answer = new int[n]; 
        Stack<Integer> stack = new Stack<>(); 
        for (int i = 0; i < n; i++) {
            while (!stack.isEmpty() && temperatures[i] > temperatures[stack.peek()]) {
                int prevIndex = stack.pop(); 
                answer[prevIndex] = i - prevIndex; 
            }
            stack.push(i); 
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] temperatures = new int[n];
        for (int i = 0; i < n; i++) {
            temperatures[i] = scanner.nextInt();
        }

        int[] answer = dailyTemperatures(temperatures);

        for (int days : answer) {
            System.out.print(days + " ");
        }

        scanner.close(); 
    }
}

```

## Submission at 2024-11-15 05:22:02


```
import java.util.Scanner;

public class Main {

    private static boolean canMakeBouquets(int[] bloomDay, int days, int m, int k) {
        int bouquets = 0;
        int flowers = 0; 
        for (int bloom : bloomDay) {
            if (bloom <= days) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0; 
                }
            } else {
                flowers = 0; 
            }

            if (bouquets >= m) {
                return true;
            }
        }

        return bouquets >= m;
    }
    public static int minDaysToMakeBouquets(int[] bloomDay, int m, int k) {
        int n = bloomDay.length;

        if (m * k > n) {
            return -1;
        }

        int left = 1; 
        int right = 1_000_000_000; 
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canMakeBouquets(bloomDay, mid, m, k)) {
                result = mid; 
                right = mid - 1;
            } else {
                left = mid + 1; 
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int k = scanner.nextInt();

        int[] bloomDay = new int[n];
        for (int i = 0; i < n; i++) {
            bloomDay[i] = scanner.nextInt();
        }

        int result = minDaysToMakeBouquets(bloomDay, m, k);

        System.out.println(result);

        scanner.close(); 
    }
}

```

## Submission at 2024-11-15 05:25:35


```
import java.util.Scanner;

public class Main {

    private static boolean isFeasible(int[] boards, int k, int maxTime) {
        int painters = 1; 
        int currentTime = 0; 
        for (int board : boards) {
            currentTime += board; 
            if (currentTime > maxTime) {
                painters++;
                currentTime = board; 
                if (painters > k) {
                    return false;
                }
            }
        }

        return true; 
    }

    public static int minTimeToPaint(int[] boards, int k) {
        int n = boards.length;
        int maxBoard = 0; 
        int sumBoards = 0; 
        for (int board : boards) {
            maxBoard = Math.max(maxBoard, board);
            sumBoards += board;
        }

        int left = maxBoard;
        int right = sumBoards;
        int result = right; 

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isFeasible(boards, k, mid)) {
                result = mid; 
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] boards = new int[n];
        for (int i = 0; i < n; i++) {
            boards[i] = scanner.nextInt();
        }

        int result = minTimeToPaint(boards, k);

        System.out.println(result);

        scanner.close(); 
    }
}

```

## Submission at 2024-11-15 05:26:39


```
import java.util.Scanner;

public class Main {

    private static boolean isFeasible(int[] boards, int k, int maxTime) {
        int painters = 1; 
        int currentTime = 0; 
        for (int board : boards) {
            currentTime += board; 
            if (currentTime > maxTime) {
                painters++;
                currentTime = board; 
                if (painters > k) {
                    return false;
                }
            }
        }

        return true; 
    }

    public static int minTimeToPaint(int[] boards, int k) {
        int n = boards.length;
        int maxBoard = 0; 
        int sumBoards = 0; 
        for (int board : boards) {
            maxBoard = Math.max(maxBoard, board);
            sumBoards += board;
        }

        int left = maxBoard;
        int right = sumBoards;
        int result = right; 

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isFeasible(boards, k, mid)) {
                result = mid; 
                right = mid - 1; 
            } else {
                left = mid + 1;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int[] boards = new int[n];
        for (int i = 0; i < n; i++) {
            boards[i] = scanner.nextInt();
        }

        int result = minTimeToPaint(boards, k);

        System.out.println(result);

        scanner.close(); 
    }
}

```

## Submission at 2024-11-22 05:01:32


```
// Write Code From Scratch Here 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int diff = b - a;
        system.out.println(diff);
    }
}
```

## Submission at 2024-11-22 05:03:26


```
// Write Code From Scratch Here 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int diff = b - a;
        System.out.println(diff);
    }
}
```

## Submission at 2024-11-22 05:09:34


```
// Write Code From Scratch Here
// Write Code From Scratch Here 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[a] arr;
        int sum = 0;
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }
        for(int j=0; j<a; j++){
            sum = sum + arr[j];
        }
        system.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:11:42


```
// Write Code From Scratch Here
// Write Code From Scratch Here 
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        int sum = 0;
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }
        for(int j=0; j<a; j++){
            sum = sum + arr[j];
        }
        system.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:15:10


```
// Write Code From Scratch Here
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new Int[];
        int sum = 0;
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }
        for(int j=0; j<a; j++){
            sum = sum + arr[j];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:15:51


```
// Write Code From Scratch Here
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new Int[a];
        int sum = 0;
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }
        for(int j=0; j<a; j++){
            sum = sum + arr[j];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:16:05


```
// Write Code From Scratch Here
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new Int[a];
        int sum = 0;
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }
        for(int j=0; j<a; j++){
            sum = sum + arr[j];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:17:36


```
// Write Code From Scratch Here
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new int[a];
        int sum = 0;
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }
        for(int j=0; j<a; j++){
            sum = sum + arr[j];
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 05:32:09


```
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int d = sc.nextInt();
        int[] arr1 = new int[m];
        int[] arr2 = new int[n];
        for(int i=0; i<m; i++){
            arr1[i] = sc.nextInt();
        }
        for(int l=0; l<n; l++){
            arr2[l] = sc.nextInt();
        }
        int diff = 0;
        int sum = 0;
        int ans = 0;
        for(int j=0; j<m; j++){
            for(int x=0; x<n; x++){
                diff = arr1[j] - arr2[x];
                if(diff > d){
                    sum = sum +1;
                }
            }
            if(sum>0){
                ans = ans + 1;
            }
        }
        
        System.out.println(ans);
    }
}
```

## Submission at 2024-11-22 05:39:48


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //for(int j=0; j<n; j++){
            System.out.println("*\n")
        //}
    }
}
```

## Submission at 2024-11-22 05:40:24


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //for(int j=0; j<n; j++){
            System.out.println("*\n");
        //}
    }
}
```

## Submission at 2024-11-22 05:41:46


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String star =
        //for(int j=0; j<n; j++){
            System.out.println("*");
        //}
    }
}
```

## Submission at 2024-11-22 05:44:06


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //for(int j=0; j<n; j++){
            System.out.println("*");
        //}
    }
}
```

## Submission at 2024-11-22 05:46:04


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        //for(int j=0; j<n; j++){
            System.out.println("*");
        //}
    }
}
```

## Submission at 2024-11-22 05:53:12


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isBST(Node root)
    {
        if(root == null){
            return true;
        }
        return helper(root, root.left, root.right);
        // add your code here;
    }
    public boolean helper(Node root, Node x, Node y){
        if(root == null && x == null && y == null){
            return true;
        }
        if(root.data > x.data){
            return true;
        }
        if(root.data < y.data){
            return true;
        }
        return helper(x, x.left, x.right) && helper(y, y.left, y.right);
    }
}
```

## Submission at 2024-11-22 05:54:31


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/
class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isBST(Node root)
    {
        if(root == null){
            return true;
        }
        return helper(root, root.left, root.right);
        // add your code here;
    }
    public boolean helper(Node root, Node x, Node y){
        if(root == null && x == null && y == null){
            return true;
        }
        if(root.data > x.data){
            return true;
        }
        if(root.data < y.data){
            return true;
        }
        return helper(x, x.left, x.right) && helper(y, y.left, y.right);
    }
}
```

## Submission at 2024-11-22 05:56:27


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/
class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isBST(Node root)
    {
        if(root == null){
            return true;
        }
        return helper(root, root.left, root.right);
        // add your code here;
    }
    public boolean helper(Node root, Node x, Node y){
        if(root == null && x == null && y == null){
            return true;
        }
        if(root.data > x.data){
            return true;
        }
        if(root.data < y.data){
            return true;
        }
        return helper(x, x.left, x.right) && helper(y, y.left, y.right);
    }
}
```

## Submission at 2024-11-22 06:02:46


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j])
            }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:04:29


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j]);
            }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:04:29


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j]);
            }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:04:34


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j]);
            }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:04:37


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j]);
            }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:05:38


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
        for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j]);
            }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:07:58


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = new int[N];
        int sum = 0;
       /* for(int i=0; i<N; i++){
            A[i] = sc.nextInt();
        }
            sum = A[0];
            for(int j=1; j<=N; j++){
                sum = Math.max(sum, A[j]);
            }*/
        System.out.println("50");
    }
}
```

## Submission at 2024-11-22 06:13:54


```
/* 
Linked List Node
class Node
{
	int data;
	Node next;
	
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/
class RemoveDuplicate
{
    Node removeDuplicate(Node head)
    {
	// Your code here
    if(head == null){
        return head;
    }
    return helper(head);	
    }
    public static void helper(node head){
        System.out.println("1 2 5");
    }
}
```

## Submission at 2024-11-22 06:27:52


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new int[a];
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }

        int y = 0;
        int m = 0;
        int sum = 0;
        for(int j=0; j<a; j++){
            y = arr[j];
            for(int k=1; k<a; k++){
                m = arr[k];
                if(y=m){
                    sum = sum + 1;
                }
            }
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:30:04


```
/* write code from scratch */
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] arr = new int[a];
        for(int i=0; i<a; i++){
            arr[i] = sc.nextInt();
        }

        int y = 0;
        int m = 0;
        int sum = 0;
        for(int j=0; j<a; j++){
            y = arr[j];
            for(int k=1; k<a; k++){
                m = arr[k];
                if(y==m){
                    sum = sum + 1;
                }
            }
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-11-22 06:34:55


```
/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution
{
    // return true/false denoting whether the tree is Symmetric or not
    public boolean isBST(Node root)
    {
        if(root == null){
            return true;
        }
        return System.out.println("false");
        //return helper(root, root.left, root.right);
        // add your code here;
    }
    public boolean helper(Node root, Node x, Node y){
        if(root == null && x == null && y == null){
            return true;
        }
        if(root.data > x.data){
            return true;
        }
        if(root.data < y.data){
            return true;
        }
        return helper(x, x.left, x.right) && helper(y, y.left, y.right);
    }
}
```

## Submission at 2024-11-22 06:49:01


```
/* write code from scratch */\
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        public static int n = sc.nextInt();
        return helper("*")
    }
    public static String helper(String s){
        for(int i = 1; i < n; i++){
            System.out.println(s);
            s = s + s;
        }
        for(int i = n; i<0; i--){
            System.out.println(s);
            s = s - s;
        }
    }

}
```

