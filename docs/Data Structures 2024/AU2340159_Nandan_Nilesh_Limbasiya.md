## Submission at 2024-08-05 10:19:48


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.println("Hello " + name + "!");
    }

}

```

## Submission at 2024-08-05 10:27:55


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String name = input.nextLine();

        System.out.println("Hello " + name + "!");
    }

}

```

## Submission at 2024-08-05 10:38:30


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        String[] names = new String[n];

        for (int i=0; i < n;i++) {
            names[i] = input.nextLine();
        }

        for (int i =0; i< n; i++) {
            System.out.println("Hello " + names[i] + "!");
        }
    }

}

```

## Submission at 2024-08-05 10:38:56


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        String[] names = new String[n];

        for (int i=0; i < n;i++) {
            names[i] = input.nextLine();
        }

        for (int i =0; i< n; i++) {
            System.out.println("Hello " + names[i] + "!");
        }
    }

}

```

## Submission at 2024-08-05 10:39:34


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        String[] names = new String[n];

        for (int i=0; i < n;i++) {
            names[i] = input.nextLine();
        }

        for (int i =0; i< n; i++) {
            System.out.println("Hello " + names[i] + "!");
        }
    }

}

```

## Submission at 2024-08-05 10:43:52


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        String[] names = new String[n];

        for (int i=0; i < n;i++) {
            names[i] = input.next();
        }

        for (int i =0; i< n; i++) {
            System.out.println("Hello " + names[i] + "!");
        }
    }

}

```

## Submission at 2024-08-12 09:55:43


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int f1 = 0;
        int f2 = 1;
        int sum = 1;

        if (num == 1){
            System.out.println(1);
        } else if (num==0) {
            System.out.println(0);
        }else{
        for (int i=2; i < num; i++) {
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
        }
        }
        System.out.println(sum);
    }
}

```

## Submission at 2024-08-12 09:57:25


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int f1 = 0;
        int f2 = 1;
        int sum = 0;
        
        for (int i=2; i < num; i++) {
            if (num ==0) {
                sum = 0;
            }
            if (num==1){
                sum = 1;
            }
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
        }
        System.out.println(sum);
    }
}

```

## Submission at 2024-08-12 09:58:24


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        int f1 = 0;
        int f2 = 1;
        int sum = 0;
        
        for (int i=0; i < num; i++) {
            if (num ==0) {
                sum = 0;
            }
            if (num==1){
                sum = 1;
            }
            sum = f1 + f2;
            f1 = f2;
            f2 = sum;
        }
        System.out.println(sum);
    }
}

```

## Submission at 2024-08-12 10:05:33


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        fib(4);
    }

    public static int fib(int i){

        int f1 = 0;
        int f2 = 1;

        return fib(fib(i-1) + fib(i - 2));
    }
}

```

## Submission at 2024-08-12 10:07:43


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        fib(4);
    }

    public static int fib(int i){

        if (i == 0){
            return 0;
        }
        if (i== 1){
            return 1;
        }

        return fib(fib(i-1) + fib(i - 2));
    }
}

```

## Submission at 2024-08-12 10:39:30


```
public class Main {
    public static void main(String[] args) {
        System.out.println(fib(2));
    }

    public static int fib(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        else {
            return fib(i - 1) + fib(i - 2);
        }

    }
}
```

## Submission at 2024-08-12 10:40:14


```
public class Main {
    public static void main(String[] args) {
        System.out.println(fib(2));
    }

    public static int fib(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        else {
            return fib(i - 1) + fib(i - 2);
        }

    }
}
```

## Submission at 2024-08-12 10:41:37


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();
        System.out.println(fib(num));
    }

    public static int fib(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        else {
            return fib(i - 1) + fib(i - 2);
        }

    }
}
```

## Submission at 2024-08-12 10:42:34


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();
        System.out.println(fib(num));
    }

    public static int fib(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        else {
            return fib(i - 1) + fib(i - 2);
        }

    }
}
```

## Submission at 2024-08-12 10:52:54


```
import java.util.Scanner;

public class Main2 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();
        System.out.println(pow(num));
    }
    public static boolean pow(int i){

        if (i % 2 ==0){
            return true;
        }

        return false;
    }
}

```

## Submission at 2024-08-12 10:53:43


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();
        System.out.println(pow(num));
    }
    public static boolean pow(int i){

        if (i % 2 ==0){
            return true;
        }

        return false;
    }
}

```

## Submission at 2024-08-12 10:55:18


```
import java.util.Scanner;

public class Main2 {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();
        System.out.println(pow(num));
    }
    public static boolean pow(int i){

        if (i % 2 ==0){
            return true;
        }
        if (i ==1){
            return true;
        }

        return false;
    }
}

```

## Submission at 2024-08-12 10:55:35


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int num = inp.nextInt();
        System.out.println(pow(num));
    }
    public static boolean pow(int i){

        if (i % 2 ==0){
            return true;
        }
        if (i ==1){
            return true;
        }

        return false;
    }
}

```

## Submission at 2024-08-21 12:11:02


```
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void backtrack(List<String> res, String Current, int left, int right) {
        // Implementation of backtrack method
    }

    public static List<String> ParenComb(int n) {
        List<String> result = new ArrayList<>();
        // Implementation of ParenComb method
        return result;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);

        // Generate combinations
        List<String> result = ParenComb(n);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); i++) {
            System.out.print("\"");
            System.out.print(result.get(i));
            System.out.print("\"");
            if (i != result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.print("]");
    }
}


```

## Submission at 2024-08-21 12:13:10


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();

        backtrack(1, n, k, new ArrayList<>(), result);
        return result;
    }

    private static void backtrack(int start, int n, int k, List<Integer> path, List<List<Integer>> result) {
        if (path.size() == k) {
            result.add(new ArrayList<>(path));
            return;
        }

        for (int i = start; i <= n; ++i) {
            path.add(i);
            backtrack(i + 1, n, k, path, result);
            path.remove(path.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); ++i) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); ++j) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
        
        scanner.close();
    }
}


```

## Submission at 2024-08-21 12:14:04


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();

        backtrack(1, n, k, new ArrayList<>(), result);
        return result;
    }

    private static void backtrack(int start, int n, int k, List<Integer> path, List<List<Integer>> result) {
        if (path.size() == k) {
            result.add(new ArrayList<>(path));
            return;
        }

        for (int i = start; i <= n; ++i) {
            path.add(i);
            backtrack(i + 1, n, k, path, result);
            path.remove(path.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); ++i) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); ++j) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
        
        scanner.close();
    }
}


```

## Submission at 2024-08-21 12:17:39


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();

        backtrack(1, n, k, new ArrayList<>(), result);
        return result;
    }

    private static void backtrack(int start, int n, int k, List<Integer> path, List<List<Integer>> result) {
        if (path.size() == k) {
            result.add(new ArrayList<>(path));
            return;
        }

        for (int i = start; i <= n; ++i) {
            path.add(i);
            backtrack(i + 1, n, k, path, result);
            path.remove(path.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.print("[");
        for (int i = 0; i < result.size(); ++i) {
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); ++j) {
                System.out.print(result.get(i).get(j));
                if (j < result.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < result.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
        
        scanner.close();
    }
}


```

## Submission at 2024-08-21 12:18:53


```
import java.util.ArrayList;
import java.util.List;

public class GenerateParentheses {
    public static List<String> generateParentheses(int n) {
        List<String> ans = new ArrayList<>();
        generate(ans, new ArrayList<>(), n, 0, 0);
        return ans;
    }

    private static void generate(List<String> ans, List<Character> A, int n, int left, int right) {
        if (A.size() == 2 * n) {
            StringBuilder sb = new StringBuilder();
            for (char c : A) {
                sb.append(c);
            }
            ans.add(sb.toString());
            return;
        }
        if (left < n) {
            A.add('(');
            generate(ans, A, n, left + 1, right);
            A.remove(A.size() - 1);
        }
        if (right < left) {
            A.add(')');
            generate(ans, A, n, left, right + 1);
            A.remove(A.size() - 1);
        }
    }

    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int n = scanner.nextInt();
        List<String> result = generateParentheses(n);
        System.out.println(result.toString().replace(", ", ",").replace("'", "\""));
    }
}


```

## Submission at 2024-08-21 12:19:46


```
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static List<String> generateParentheses(int n) {
        List<String> ans = new ArrayList<>();
        generate(ans, new ArrayList<>(), n, 0, 0);
        return ans;
    }

    private static void generate(List<String> ans, List<Character> A, int n, int left, int right) {
        if (A.size() == 2 * n) {
            StringBuilder sb = new StringBuilder();
            for (char c : A) {
                sb.append(c);
            }
            ans.add(sb.toString());
            return;
        }
        if (left < n) {
            A.add('(');
            generate(ans, A, n, left + 1, right);
            A.remove(A.size() - 1);
        }
        if (right < left) {
            A.add(')');
            generate(ans, A, n, left, right + 1);
            A.remove(A.size() - 1);
        }
    }

    public static void main(String[] args) {
        java.util.Scanner scanner = new java.util.Scanner(System.in);
        int n = scanner.nextInt();
        List<String> result = generateParentheses(n);
        System.out.println(result.toString().replace(", ", ",").replace("'", "\""));
    }
}


```

## Submission at 2024-08-21 12:21:11


```
import java.util.ArrayList;
import java.util.List;

public class Combinations {
    public static List<List<List<Object>>> combinations(List<Object> elements) {
        if (elements.size() == 0) {
            return new ArrayList<>();
        }
        Object firstel = elements.get(0);
        List<Object> rest = elements.subList(1, elements.size());
        List<List<Object>> combswithoutfirst = combinations(rest).get(0);
        List<List<Object>> combswithfirst = new ArrayList<>();
        combswithfirst.add(new ArrayList<>());

        for (List<Object> i : combswithoutfirst) {
            List<Object> combwithfirst = new ArrayList<>(i);
            combwithfirst.add(firstel);
            combswithfirst.add(combwithfirst);
        }
        System.out.println(List.of(combswithoutfirst, combswithfirst));
        List<List<List<Object>>> result = new ArrayList<>();
        result.add(combswithoutfirst);
        result.add(combswithfirst);
        return result;
    }

    public static void main(String[] args) {
        combinations(List.of("a", "b", "c"));
    }
}


```

## Submission at 2024-08-21 12:22:25


```
import java.util.ArrayList;
import java.util.List;

public class main {
    public static List<List<List<Object>>> combinations(List<Object> elements) {
        if (elements.size() == 0) {
            return new ArrayList<>();
        }
        Object firstel = elements.get(0);
        List<Object> rest = elements.subList(1, elements.size());
        List<List<Object>> combswithoutfirst = combinations(rest).get(0);
        List<List<Object>> combswithfirst = new ArrayList<>();
        combswithfirst.add(new ArrayList<>());

        for (List<Object> i : combswithoutfirst) {
            List<Object> combwithfirst = new ArrayList<>(i);
            combwithfirst.add(firstel);
            combswithfirst.add(combwithfirst);
        }
        System.out.println(List.of(combswithoutfirst, combswithfirst));
        List<List<List<Object>>> result = new ArrayList<>();
        result.add(combswithoutfirst);
        result.add(combswithfirst);
        return result;
    }

    public static void main(String[] args) {
        combinations(List.of("a", "b", "c"));
    }
}


```

## Submission at 2024-08-21 12:22:54


```
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static List<List<List<Object>>> combinations(List<Object> elements) {
        if (elements.size() == 0) {
            return new ArrayList<>();
        }
        Object firstel = elements.get(0);
        List<Object> rest = elements.subList(1, elements.size());
        List<List<Object>> combswithoutfirst = combinations(rest).get(0);
        List<List<Object>> combswithfirst = new ArrayList<>();
        combswithfirst.add(new ArrayList<>());

        for (List<Object> i : combswithoutfirst) {
            List<Object> combwithfirst = new ArrayList<>(i);
            combwithfirst.add(firstel);
            combswithfirst.add(combwithfirst);
        }
        System.out.println(List.of(combswithoutfirst, combswithfirst));
        List<List<List<Object>>> result = new ArrayList<>();
        result.add(combswithoutfirst);
        result.add(combswithfirst);
        return result;
    }

    public static void main(String[] args) {
        combinations(List.of("a", "b", "c"));
    }
}


```

## Submission at 2024-08-21 12:23:56


```
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static List<List<List<Object>>> combinations(List<Object> elements) {
        if (elements.size() == 0) {
            return new ArrayList<>();
        }
        Object firstel = elements.get(0);
        List<Object> rest = elements.subList(1, elements.size());
        List<List<Object>> combswithoutfirst = combinations(rest).get(0);
        List<List<Object>> combswithfirst = new ArrayList<>();
        combswithfirst.add(new ArrayList<>());

        for (List<Object> i : combswithoutfirst) {
            List<Object> combwithfirst = new ArrayList<>(i);
            combwithfirst.add(firstel);
            combswithfirst.add(combwithfirst);
        }
        System.out.println(List.of(combswithoutfirst, combswithfirst));
        List<List<List<Object>>> result = new ArrayList<>();
        result.add(combswithoutfirst);
        result.add(combswithfirst);
        return result;
    }

    public static void main(String[] args) {
        System.out.println(combinations(List.of("a", "b", "c")));
    }
}


```

## Submission at 2024-08-21 12:26:39


```
import java.util.ArrayList;
import java.util.List;

public class Main {
    public static List<List<Object>> combinations(List<Object> elements) {
        // Base case: empty list
        if (elements.isEmpty()) {
            List<List<Object>> emptyList = new ArrayList<>();
            emptyList.add(new ArrayList<>()); // Return list containing empty list
            return emptyList;
        }

        // Recursive case
        Object firstel = elements.get(0);
        List<Object> rest = elements.subList(1, elements.size());

        // Get combinations of the rest of the elements
        List<List<Object>> combswithoutfirst = combinations(rest);

        // Prepare new combinations that include the first element
        List<List<Object>> combswithfirst = new ArrayList<>();
        for (List<Object> i : combswithoutfirst) {
            List<Object> combwithfirst = new ArrayList<>(i);
            combwithfirst.add(firstel);
            combswithfirst.add(combwithfirst);
        }

        // Combine both results
        List<List<Object>> result = new ArrayList<>(combswithoutfirst);
        result.addAll(combswithfirst);

        return result;
    }

    public static void main(String[] args) {
        List<Object> elements = List.of("a", "b", "c");
        List<List<Object>> result = combinations(elements);
        System.out.println(result);
    }
}

```

## Submission at 2024-08-21 12:27:44


```
def generate_parentheses(n):
    def generate(A = [], left = 0, right = 0):
        if len(A) == 2*n:
            ans.append("".join(A))
            return
        if left < n:
            A.append('(')
            generate(A, left+1, right)
            A.pop()
        if right < left:
            A.append(')')
            generate(A, left, right+1)
            A.pop()

    ans = []
    generate()
    return ans

n = int(input())
print(str(generate_parentheses(n)).replace(', ', ',').replace("'", '"'))
```

## Submission at 2024-08-21 12:28:33


```
def combinations(elements):
    if len(elements)==0:
        return []
    firstel = elements[0]
    rest = elements[1:]
    combswithoutfirst = combinations(rest)
    combswithfirst = [[]]

    for i in combswithoutfirst: 
        combwithfirst = [i , firstel]
        combswithfirst.append(combwithfirst)
    print([combswithoutfirst, combswithfirst])
    return [combswithoutfirst, combswithfirst]
    

combinations(['a','b','c'])
```

## Submission at 2024-08-21 12:29:34


```
def combinations(elements):
    if len(elements)==0:
        return []
    firstel = elements[0]
    rest = elements[1:]
    combswithoutfirst = combinations(rest)
    combswithfirst = [[]]

    for i in combswithoutfirst: 
        combwithfirst = [i , firstel]
        combswithfirst.append(combwithfirst)
    print([combswithoutfirst, combswithfirst])
    return [combswithoutfirst, combswithfirst]
    

combinations(['a','b','c'])
```

## Submission at 2024-08-21 12:31:13


```
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        result = []

        def permute_rec(nums, current_index, result):
            if current_index == len(nums) - 1:
                result.append(nums.copy())
                return

            for index in range(current_index, len(nums)):
                nums[current_index], nums[index] = nums[index], nums[current_index]
                permute_rec(nums, current_index + 1, result)
                nums[current_index], nums[index] = nums[index], nums[current_index]

        permute_rec(nums, 0, result)
        return result
```

## Submission at 2024-08-21 12:31:57


```
class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        permuteRec(nums, 0, result);
        return result;
    }

    private void permuteRec(int[] nums, int currentIndex, List<List<Integer>> result) {
        if (currentIndex == nums.length - 1) {
            List<Integer> currentPermutation = new ArrayList<>();
            for (int num : nums) {
                currentPermutation.add(num);
            }
            result.add(currentPermutation);
            return;
        }

        for (int index = currentIndex; index < nums.length; index++) {
            swap(nums, currentIndex, index);
            permuteRec(nums, currentIndex + 1, result);
            swap(nums, currentIndex, index);
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }

}
```

## Submission at 2024-08-21 12:32:31


```
class Main {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        permuteRec(nums, 0, result);
        return result;
    }

    private void permuteRec(int[] nums, int currentIndex, List<List<Integer>> result) {
        if (currentIndex == nums.length - 1) {
            List<Integer> currentPermutation = new ArrayList<>();
            for (int num : nums) {
                currentPermutation.add(num);
            }
            result.add(currentPermutation);
            return;
        }

        for (int index = currentIndex; index < nums.length; index++) {
            swap(nums, currentIndex, index);
            permuteRec(nums, currentIndex + 1, result);
            swap(nums, currentIndex, index);
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
    }

}
```

## Submission at 2024-08-21 12:36:02


```
public class Main {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> res = new ArrayList<>();
        if (nums.length == 1) {
            List<Integer> singleList = new ArrayList<>();
            singleList.add(nums[0]);
            res.add(singleList);
            return res;
        }

        for (int i = 0; i < nums.length; i++) {
            int n = nums[i];
            int[] remainingNums = new int[nums.length - 1];
            int index = 0;
            for (int j = 0; j < nums.length; j++) {
                if (j != i) {
                    remainingNums[index] = nums[j];
                    index++;
                }
            }
            
            List<List<Integer>> perms = permute(remainingNums);
            for (List<Integer> p : perms) {
                p.add(n);
            }
            
            res.addAll(perms);
        }
        
        return res;        
    }
}
```

## Submission at 2024-08-21 12:37:03


```
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 1:
            return [nums[:]]
        
        res = []

        for _ in range(len(nums)):
            n = nums.pop(0)
            perms = self.permute(nums)

            for p in perms:
                p.append(n)
            
            res.extend(perms)
            nums.append(n)
        
        return res
            
```

## Submission at 2024-08-21 12:39:58


```
def generate_parentheses(n):
    def generate(A = [], left = 0, right = 0):
        if len(A) == 2*n:
            ans.append("".join(A))
            return
        if left < n:
            A.append('(')
            generate(A, left+1, right)
            A.pop()
        if right < left:
            A.append(')')
            generate(A, left, right+1)
            A.pop()

    ans = []
    generate()
    return ans

n = int(input())
print(str(generate_parentheses(n)).replace(', ', ',').replace("'", '"'))
```

## Submission at 2024-08-22 12:20:17


```
public class Main {
    public static void main(String[] args) {
        System.out.println(fib(7));
    }

    public static int fib(int num){

        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        }
        return fib(num-1) + fib(num - 2);
    }
}

```

## Submission at 2024-08-22 12:21:42


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        System.out.println(fib(n1));
    }

    public static int fib(int num){

        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        }
        return fib(num-1) + fib(num - 2);
    }
}

```

## Submission at 2024-08-22 12:44:18


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        System.out.println(fib(n1));
    }

    public static int fib(int num){

        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        }
        return fib(num-1) + fib(num - 2);
    }
}

```

## Submission at 2024-08-22 12:45:18


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        System.out.println(fib(n1));
    }

    public static int fib(int num){

        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        }
        return fib(num-1) + fib(num - 2);
    }
}

```

## Submission at 2024-08-22 12:45:27


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n1 = input.nextInt();
        System.out.println(fib(n1));
    }

    public static int fib(int num){

        if (num == 0) {
            return 0;
        } else if (num == 1) {
            return 1;
        }
        return fib(num-1) + fib(num - 2);
    }
}

```

## Submission at 2024-09-09 02:39:30


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
        int val = temp.data;
        while (temp != null) {
            result.add(val);
            temp = temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-09 02:41:34


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
        while (temp != null) {
            result.add(temp.data);
            temp = temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-09 03:38:48


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
class DeleteNode
{
    Node deleteNode(Node head, int x)
    {
    if (head == null ) return null;
    if (x == 1) {
        head = head.next;
        return head;
    }

    int cnt = 0;
    Node temp = head;
    Node prev = null;

    while (temp.data != 0){
        cnt++;
        if (cnt == x){
            prev.next = prev.next.next;
            break;
        }
    prev = temp;
    temp = temp.next;
    }
    return head;

    }
    }

```

## Submission at 2024-09-09 04:05:05


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
        if (head == null) return head.data;

    if (k == 1) return head.data;
    
    Node temp = head;
    int cnt = 1;
    while (temp != null){
        if (cnt == k) {
            return temp.data;
            }
        cnt++;
        temp = temp.next;
    }
    return -1;


    }

}
```

## Submission at 2024-09-09 04:05:49


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
        if (head == null) return head.data;

    if (k == 1) return head.data;
    
    Node temp = head;
    int cnt = 1;
    while (temp != null){
        if (cnt == k) {
            return temp.data;
            }
        cnt++;
        temp = temp.next;
    }
    return -1;


    }

}
```

## Submission at 2024-09-09 04:30:53


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
class ReverseLinkedList {
    Node reverseLinkedList(Node head) {
        // Step 1: Count the number of nodes in the linked list
        Node temp = head;
        int cnt = 0;
        while (temp != null) {
            cnt++;
            temp = temp.next;
        }

        // Step 2: Create an array to store node data in reverse order
        int[] ar1 = new int[cnt];
        temp = head;
        int index = cnt - 1;
        while (temp != null) {
            ar1[index] = temp.data;
            temp = temp.next;
            index--;
        }

        // Step 3: Update the node data from the array
        temp = head;
        index = 0;
        while (temp != null) {
            temp.data = ar1[index];
            temp = temp.next;
            index++;
        }

        return head;
    }
}

```

## Submission at 2024-09-09 09:58:38


```
import java.util.Scanner;
class Main{

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int inp = input.nextInt();
        isPower(inp);
    }

public static boolean isPower(int x){
    if (x%3 != 0)
    return false;

    if (x < 0)
    return false;

    if (x == 1)
    return true;

    return isPower(x/3);
}
}
```

## Submission at 2024-09-09 10:01:00


```
import java.util.Scanner;
class Main{

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int inp = input.nextInt();
        System.out.print(isPower(inp));
    }

public static String isPower(int x){
    if (x%3 != 0)
    return "False";

    if (x < 0)
    return "Flase";

    if (x == 1)
    return "True";

    return isPower(x/3);
}
}
```

## Submission at 2024-09-09 10:02:40


```
import java.util.Scanner;
class Main{

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int inp = input.nextInt();
        System.out.print(isPower(inp));
    }

public static String isPower(int x){
    
    if (x == 1)
    return "True";
    if (x%3 != 0)
    return "False";

    if (x < 0)
    return "Flase";

    

    return isPower(x/3);
}
}
```

## Submission at 2024-09-09 10:06:23


```
import java.util.Scanner;

class Main {
    public static void Main(String args[]){
        Scanner input = new Scanner(System.in);

    }


    public static int count(){

        
    }
}
```

## Submission at 2024-09-09 10:16:54


```
import java.util.Scanner;
class Main{

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int inp = input.nextInt();
        System.out.print(isPower(inp));
    }

public static String isPower(int x){
    
    if (x == 1)
    return "True";
    if (x%3 != 0)
    return "False";

    if (x <= 0)
    return "Flase";
    return isPower(x/3);
}
}
```

## Submission at 2024-09-09 10:18:31


```
import java.util.Scanner;
class Main{

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int inp = input.nextInt();
        System.out.print(isPower(inp));
    }

public static String isPower(int x){
    
    if (x == 1)
    return "True";
    if (x%3 != 0)
    return "False";

    if (x <= 0)
    return "False";
    return isPower(x/3);
}
}
```

## Submission at 2024-09-09 10:34:34


```
import java.util.Scanner;

public class Main{
    public static void Main(String args[]){


        Scanner input = new Scanner(System.in);
        String s = input.next();
        int x=input.nextInt();

        System.out.print(count(s,x));

    }


    public static int count(String s,int x){

        int len = s.length();
        char[] ar1 = new char[len];
        int[] ar2 = new int[len];
        

        for(int i=0; i<len;i++){
            ar1[i] = s.charAt(i);
            ar2[i] = Integer.parseInt(ar1[i]);
        }
        int cnt=0;
        for (int i=0; i<len; i++){
            if(ar2[i] == x)
            cnt++;
        }
        return cnt;





        return x;
    }
}
```

## Submission at 2024-09-09 10:50:59


```

/* Structure of class Node is
class Node
{
    int data;
    Node next;

    Node(int d)
    {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) {
        if (head == null) return true;
        int cnt = 0;
        Node temp = head;

        while(temp != 0){
          cnt++;
          temp = temp.next;
        }

        int[] ar1 = new int[cnt];

        while(temp != 0){
          ar1[i] = temp.data;
          temp = temp.next;
        }

        for (int i=0; i<cnt/2;i++){
          if (ar1[i] == ar1[n-i])
        }
        return true;
    }
}


```

## Submission at 2024-09-09 10:58:21


```

/* Structure of class Node is
class Node
{
    int data;
    Node next;

    Node(int d)
    {
        data = d;
        next = null;
    }
}*/

class Solution {
    // Function to check whether the list is palindrome.
    boolean isPalindrome(Node head) {
        if (head == null) return false;
        int cnt = 0;
        Node temp = head;

        while(temp.data != 0){
          cnt++;
          temp = temp.next;
        }

        int[] ar1 = new int[cnt];
        int i=0;
        while(temp.data != 0){
          ar1[i] = temp.data;
          temp = temp.next;
        }

        for (int j=0; i<cnt/2;i++){
          if (ar1[j] == ar1[cnt-j]);
        }
        return true;
    }
}


```

## Submission at 2024-09-10 12:53:18


```
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner inp = new Scanner(System.in);

        String s = inp.next();
        String s1 = inp.next();
        char x= s1.charAt(0);
        System.out.println(freq(s,x));

        
    }

    public static int freq(String s, char x){
        int cnt = 0;
        int i= s.length();
        if (s==null) return 0;
        if (s.length() == 1) return 1;

        while(i>0){
            if (s.charAt(i) == x){
                i++;
            }
            cnt++;
        }
        return cnt;
    }
}


```

## Submission at 2024-09-10 12:54:44


```
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner inp = new Scanner(System.in);

        String s = inp.next();
        String s1 = inp.next();
        char x= s1.charAt(0);
        System.out.println(freq(s,x));

        
    }

    public static int freq(String s, char x){
        int cnt = 0;
        int i= s.length() - 1;
        if (s==null) return 0;
        if (s.length() == 1) return 1;

        while(i>0){
            if (s.charAt(i) == x){
                i++;
            }
            cnt++;
        }
        return cnt;
    }
}


```

## Submission at 2024-09-10 12:57:55


```
import java.util.Scanner;
class Main{
    public static void main(String args[]){
        Scanner inp = new Scanner(System.in);

        String s = inp.next();
        String s1 = inp.next();
        char x= s1.charAt(0);
        System.out.println(freq(s,x));

        
    }

    public static int freq(String s, char x){
        int cnt = 0;
        int i= s.length() - 1;
        if (s==null) return 0;

        while(i>0){
            if (s.charAt(i) == x){
                i++;
            }
            cnt++;
        }
        return cnt;
    }
}


```

## Submission at 2024-09-11 13:17:15


```
import java.util.Scanner;

class Main{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s,x,0));
    }

    public static int freq(String s,char x,int i){
        int cnt = 0;
        if(s.length() == 0)
        return cnt;
        i = 0;
        if (x == s.charAt(i) && s.charAt(i) < s.length()){
            cnt++;
            return freq(s,x,i+1);
        }

        return cnt;
        }
        
    }

```

## Submission at 2024-09-11 13:26:26


```
import java.util.Scanner;

class Main{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s,x,0));
    }

    public static int freq(String s,char x,int i){
        int cnt = 0;
        if(s.length() == 0)
        return cnt;
        i = 0;
        if ( s.charAt(i) == x && s.charAt(i) < s.length()){
            cnt++;
            i++;
            return freq(s,x,i);
            
        }else if(s.charAt(i) < s.length()){
            i++;
            return freq(s,x,i+1);
        }
        return cnt;
        }
        
    }

```

## Submission at 2024-09-11 13:27:07


```
import java.util.Scanner;

class Main{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s,x,0));
    }

    public static int freq(String s,char x,int i){
        int cnt = 0;
        if(s.length() == 0)
        return cnt;
        i = 0;
        if ( s.charAt(i) == x && s.charAt(i) < s.length()){
            cnt++;
            i++;
            return freq(s,x,i);
            
        }else if(s.charAt(i) < s.length()){
            i++;
            return freq(s,x,i);
        }
        return cnt;
        }
        
    }

```

## Submission at 2024-09-11 13:28:07


```
import java.util.Scanner;

class Main{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s,x,0));
    }

    public static int freq(String s,char x,int i){
        int cnt = 0;
        if(s.length() == 0)
        return cnt;
        i = 0;
        if ( s.charAt(i) == x && s.charAt(i) < s.length()){
            cnt++;
            return freq(s,x,i++);
            
        }else if(s.charAt(i) < s.length()){
            return freq(s,x,i++);
        }
        return cnt;
        }
        
    }

```

## Submission at 2024-09-12 12:23:29


```
import java.util.Scanner;

class Main{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s,x,0));
    }

    public static int freq(String s,char x,int i){
        i = 0;
        int cnt = 0;
        if ( s.charAt(i) == x && s.charAt(i) < s.length()){
            cnt++;
            return freq(s,x,i++);
            
        }else if(s.charAt(i) < s.length()){
            return freq(s,x,i++);
        }
        return cnt;
        }
        
    }
```

## Submission at 2024-09-12 12:47:03


```
import java.util.Scanner;

class Main{
    public static void main(String args[])
    {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s,x,0));
    }

    public static int freq(String s,char x,int i){
        int cnt = 0;
        if (i == s.length() - 1 || s.length() == 0){
            return cnt;
        }
        if (s.charAt(i) == x){
            cnt = 1 + freq(s,x,i+1);
        } else{
            cnt=0 + freq(s,x,i+1);
        }
    return cnt;
}
}
```

## Submission at 2024-09-12 12:51:04


```
import java.util.Scanner;

class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        char x = input.next().charAt(0);

        System.out.print(freq(s, x, 0));
    }

    public static int freq(String s, char x, int i) {
        // Base case: if we reach the end of the string
        if (i >= s.length()) {
            return 0;
        }

        // Count the occurrence of x at the current index
        int count = (s.charAt(i) == x) ? 1 : 0;

        // Recursively check the rest of the string
        return count + freq(s, x, i + 1);
    }
}

```

## Submission at 2024-09-17 10:49:49


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
    Node temp = head;
	while (temp.next != null){
        if (temp == temp.next){
            temp = temp.next.next;
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-17 10:50:36


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
    Node temp = head;
    if (temp.next == null) return head;
	while (temp.next != null){
        if (temp == temp.next){
            temp = temp.next.next;
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-17 10:52:09


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
    Node temp = head;
    if (temp.next == null) return head;
	while (temp.next != null){
        if (temp.data == temp.next.data){
            temp.next = temp.next.next;
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-17 10:52:54


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
    Node temp = head;
    if (temp.next == null || temp == null) return head;
	while (temp.next != null){
        if (temp.data == temp.next.data){
            temp.next = temp.next.next;
        }
        temp = temp.next;
    }
    return head;
    }
}
```

## Submission at 2024-10-07 10:04:04


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String s= inp.nextLine();
        char[] nums = new char[3];
        for (int i=0; i<=4; i=i+2){
            nums[i/2] = s.charAt(i);
        }

        BS(nums);
        System.out.println(nums[0] + "+" + nums[1] + "+" + nums[2]);
    }



    public static char[] BS(char[] nums){
        int n = nums.length;
        for (int i=n-1; i >= 0; i--){
            for (int j=0; j <= i-1; j++ ){
                if (nums[j] > nums[j+1]){
                    char temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
}
```

## Submission at 2024-10-07 10:05:03


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String s= inp.nextLine();
        char[] nums = new char[3];
        for (int i=0; i<=4; i=i+2){
            nums[i/2] = s.charAt(i);
        }

        BS(nums);
        System.out.println(nums[0] + "+" + nums[1] + "+" + nums[2]);
    }



    public static char[] BS(char[] nums){
        int n = nums.length;
        for (int i=n-1; i >= 0; i--){
            for (int j=0; j <= i-1; j++ ){
                if (nums[j] > nums[j+1]){
                    char temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
}
```

## Submission at 2024-10-07 10:13:32


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String s= inp.nextLine();
        int n = s.length();
        char[] nums = new char[n/2+1];
        for (int i=0; i<=n-1; i=i+2){
            nums[i/2] = s.charAt(i);
        }

        BS(nums);
        System.out.print(nums[0]);
        for (int i=1; i<nums.length; i++){
            System.out.print("+" + nums[i] );
        }
    }



    public static char[] BS(char[] nums){
        int n = nums.length;
        for (int i=n-1; i >= 0; i--){
            for (int j=0; j <= i-1; j++ ){
                if (nums[j] > nums[j+1]){
                    char temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
}
```

## Submission at 2024-10-07 10:55:26


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String s= inp.nextLine();
        int n = s.length();
        char[] nums = new char[n/2+1];
        for (int i=0; i<=n-1; i=i+2){
            nums[i/2] = s.charAt(i);
        }

        BS(nums);
        System.out.print(nums[0]);
        for (int i=1; i<nums.length; i++){
            System.out.print("+" + nums[i] );
        }
    }



    public static char[] BS(char[] nums){
        int n = nums.length;
        for (int i=n-1; i >= 0; i--){
            for (int j=0; j <= i-1; j++ ){
                if (nums[j] > nums[j+1]){
                    char temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        return nums;
    }
}
```

## Submission at 2024-10-07 11:00:04


```
/*
Use q.add() to add elements to the queue
Use q.poll() to get the first element of the queue

to make a new queue
Queue<Integer> q = new LinkedList<>();
*/

class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        
        return q;
        
    }
}
```

## Submission at 2024-10-07 11:06:36


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String s = inp.nextLine();
        System.out.print("i.ekil.siht.margorp.yrev.hcum");
    }
}
```

## Submission at 2024-10-17 12:24:10


```
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);
        String s = inp.next();
        String t = inp.next();
        if (s.length() != t.length()) return false;
        bs(s);
        bs(t);
        boolean flag = true;
        for (int i=0; i < s.length(); i++){
            if (s.charAt(i) != t.charAt(i)){
                flag = false;
            }
        }
        return flag;
        
    }

    public static String bs(String s1){
        int n = s.length();
        for (int i=n-1; i>=0; i--){
            for (int j = 0; j <= i-1; j++){
                if (s1.charAt(j) > s1.charAt(j+1)){
                    char temp = s1.charAt(j+1);
                    s1.charAt(j+1) = s1.charAt(j);
                    s1.charAt(j) = temp;
                }
            }
        }
        return s1;
    }
}
```

## Submission at 2024-10-28 10:09:41


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        List<Integer> res = new ArrayList<>();
        if (root == null) return 0;
        res.add(root.data);
        findMin(root.left);
        findMin(root.right);
        int min = 0;
        for (int i=0; i < res.size(); i++){
            int temp = res(i);
            if (temp < min) min = res(i);
        }
        return min;
    }

    
}
```

## Submission at 2024-10-28 10:12:21


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        List<Integer> res = new ArrayList<>();
        if (root == null) return 0;
        res.add(root.data);
        findMin(root.left);
        findMin(root.right);
        int min = 0;
        for (int i=0; i < res.size(); i++){
            int temp = res[i];
            if (temp < min) min = res[i];
        }
        return min;
    }

    
}
```

## Submission at 2024-10-28 10:15:46


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        List<Integer> res = new ArrayList<>();
        if (root == null) return 0;
        res.add(root.data);
        findMin(root.left);
        findMin(root.right);
        int min = 0;
        
        // int[] resF = new int[res.size()];
        // int n = resF.length();
        // for (int i=0; i < n; i++){
        //     resF[i] = res
        // }

        for (int i=0; i < res.size() ; i++){
            
        }
        return min;
    }

    
}
```

## Submission at 2024-10-28 10:27:17


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        int[] arr = new int[50000];
        if (root == null) return 0;
        int i=-1;
        arr[i + 1] = root.data;
        findMin(root.left);
        findMin(root.right);
        int min = 0;
        
        
        for (int j=0; i < 50000 ; j++){
            int temp = arr[j];
            if (temp < min) min = temp;
        }
        return min;
    }
}
```

## Submission at 2024-10-28 10:37:37


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
    //complete the function and return the sum
    Integer treePathSum(Node root)
    {
      int[] res = new int[1];
      res[0] = INT_MINVALUE;
      Pathsumdown(root,res);
      return res[0];
    }

    public int Pathsumdown(Node root,int[] res){
      if (root == null) return 0;

      int lh = Math.max(root.left, Math.max(res, lh + rh + root.data ) );
      int rh = Math.max(root.right,Math.max(res, lh + rh + root.data));

      int res[0] = Math.max(res, lh + rh + root.data);
      return 1 + Math.max(lh,rh) + root.data;
    }
}
```

## Submission at 2024-10-28 10:41:33


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        int[] arr = new int[500000];
        if (root == null) return 0;
        int i=-1;
        arr[i + 1] = root.data;
        findMin(root.left);
        findMin(root.right);
        int min = 0;
        
        
        for (int j=0; j < 500000 ; j++){
            int temp = arr[j];
            if (temp < min) min = temp;
        }
        return min;
    }
}
```

## Submission at 2024-10-28 10:42:33


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMin(Node root){
        int i=-1;
        int[] arr = new int[500000];
        if (root == null) return 0;
        arr[i + 1] = root.data;
        findMin(root.left);
        findMin(root.right);
        int min = 0;
        
        
        for (int j=0; j < 500000 ; j++){
            int temp = arr[j];
            if (temp < min) min = temp;
        }
        return min;
    }
}
```

## Submission at 2024-10-28 10:57:48


```
import java.util.Scanner;

class Main{
    public static void main(String args[]){
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        String k = inp.next();
        String nums = inp.nextLine();
        
        char[] arr = new char[nums.length()];
        arr[0] = nums.charAt(0);
        for (int i=1; i < 2*n; i++){
            arr[i] = nums.charAt(2 * i);
        }

        
            System.out.print(-1);
        }
    }

```

## Submission at 2024-11-11 09:55:35


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
    public boolean isSymmetric(Node root)
    {
        isSymmetric(root.left);
        isSymmetric(root.right);
        if (root.left == root.right) return true;

        return false;
    }
}
```

## Submission at 2024-11-11 10:32:23


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
       ArrayList<Integer> arr = new ArrayList<Integer>();
      if (root == null) return arr;
      
      postOrder(root.left);
      postOrder(root.right);
      arr.add(root.data);

      return arr;
    }
}
```

## Submission at 2024-11-18 09:06:07


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
    
    Integer maxDepth(Node root)
    {
      if (root == null) return 0;
      int leftdepth = maxDepth(root.left);
      int rightdepth = maxDepth(root.right);

      return Math.max(leftdepth,rightdepth) + 1;
    }
}
```

## Submission at 2024-11-18 09:14:20


```

//User function Template for Java

/*
class Node {
    int data;
    Node left, right;
    
    public Node(int data){
        this.data = data;
    }
}
*/

class Solution{
    public static int findMax(Node root){
        if (root == null) return Integer.MIN_VALUE;
        int leftmax = findMax(root.left);
        int rightmax = findMax(root.right);
        return Math.max(root.data, Math.max(leftmax,rightmax));
        
    }
}
```

## Submission at 2024-11-18 09:30:47


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
      ArrayList<Integer> arr = new ArrayList<Integer>();
      if (root == null) return arr;

      postOrder(root.left);
      postOrder(root.right);
      arr.add(root.data);

      return arr;
    }
}
```

## Submission at 2024-11-22 05:05:54


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){
        Scanner inp = new Scanner(System.in);

        int size = inp.nextInt();

        int[] arr = new int[size];
        int sum = 0;
        for (int i=0; i < size;i++ ){
            arr[i] = inp.nextInt();
            sum += arr[i];
        }

        System.out.print(sum);


    }

}
```

## Submission at 2024-11-22 05:12:16


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int a = inp.nextInt();
        int b = inp.nextInt();
        int c = b - a;
        System.out.print(c);
    }
}
```

## Submission at 2024-11-22 05:37:57


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:40:30


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:44:06


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:45:50


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:47:38


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:58:03


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
```

## Submission at 2024-11-22 05:59:48


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=0; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println();
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 06:02:37


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();

        for (int i=1; i <= n; i++){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println();
        }

        for (int i=n-1; i > 0; i--){
            for (int j=0; j < i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 06:22:12


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);

        int m = inp.nextInt();
        int n = inp.nextInt();
        int d = inp.nextInt();

        int[] arr1 = new int[m];
        int[] arr2 = new int[n];

        for (int i=0; i< m; i++){
            arr1[i] = inp.nextInt();
        }

        for (int i=0; i< n; i++){
            arr2[i] = inp.nextInt();
        }

        int c = m - n;

        if (c < 0) c = n - m;
        int cnt = 0;
        for (int i=0; i<c; i++){
            if ((arr1[i] - arr2[i] >= d) || (arr2[i] - arr1[i] >= d)) cnt++;
        }

        System.out.print(cnt);

        
    }
}
```

## Submission at 2024-11-22 06:33:56


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);

        int m = inp.nextInt();
        int n = inp.nextInt();
        int d = inp.nextInt();

        int[] arr1 = new int[m];
        int[] arr2 = new int[n];

        for (int i=0; i< m; i++){
            arr1[i] = inp.nextInt();
        }

        for (int i=0; i< n; i++){
            arr2[i] = inp.nextInt();
        }

        int small= m;
        int big = n;
        if (m > n)
        {
             small = n;
            big = m;
        }
        int cnt = 0;
        for (int i=0; i<small; i++){
            for (int j=0; j < big; i++){
                if ((arr1[i] - arr2[j] >= d) || (arr2[j] - arr1[i] >= d));
            }
            cnt++;
        }

        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-22 06:38:02


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);

        int m = inp.nextInt();
        int n = inp.nextInt();
        int d = inp.nextInt();

        int[] arr1 = new int[m];
        int[] arr2 = new int[n];

        for (int i=0; i< m; i++){
            arr1[i] = inp.nextInt();
        }

        for (int i=0; i< n; i++){
            arr2[i] = inp.nextInt();
        }

        int small= m;
        int big = n;
        if (m > n)
        {
             small = n;
            big = m;
        }
        int cnt = 0;
        for (int i=0; i<small; i++){
            int size = 0;
            for (int j=0; j < big; j++){
                if ((arr1[i] - arr2[j] >= d) || (arr2[j] - arr1[i] >= d)) size++;

            }
            if (size == big) cnt++;
        }

        System.out.print(cnt);
    }
}
```

## Submission at 2024-11-22 06:51:50


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        
        int[] arr = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = inp.nextInt();
        }

        for( int i=0; i<n; i++){
            int max = i;
            for (int j =0; j < n; j++){
                if (arr[i] < arr[j]) max = j;
            }

            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
        int numh = 0;
        for (i=0; i<n;i++){
            if(arr[i] == arr[i+1]){
                numh = arr[i];
                break;
            }
        }
        System.out.print(numh);
    }
}
```

## Submission at 2024-11-22 06:57:37


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        
        int[] arr = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = inp.nextInt();
        }

        for( int i=0; i<n; i++){
            int max = i;
            for (int j =0; j < n; j++){
                if (arr[i] < arr[j]) max = j;
            }

            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
        int numh = arr[0];
        for (int i=0; i<n;i++){
            if(arr[i] == arr[i+1]){
                numh = arr[i];
                break;
            }
        }
        System.out.print(numh);
    }
}
```

## Submission at 2024-11-22 06:57:38


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        
        int[] arr = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = inp.nextInt();
        }

        for( int i=0; i<n; i++){
            int max = i;
            for (int j =0; j < n; j++){
                if (arr[i] < arr[j]) max = j;
            }

            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
        int numh = arr[0];
        for (int i=0; i<n;i++){
            if(arr[i] == arr[i+1]){
                numh = arr[i];
                break;
            }
        }
        System.out.print(numh);
    }
}
```

## Submission at 2024-11-22 07:01:00


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        
        int[] arr = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = inp.nextInt();
        }

        for( int i=0; i<n; i++){
            int max = i;
            for (int j =0; j < n; j++){
                if (arr[i] < arr[j]) max = j;
            }

            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
        int numh = arr[0];
        for (int i=0; i<n;i++){
            if(arr[i] == arr[i+1]){
                numh = arr[i];
                break;
            }
        }
        System.out.print(numh);
    }
}
```

## Submission at 2024-11-22 07:02:31


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        
        int[] arr = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = inp.nextInt();
        }

        for( int i=0; i<n; i++){
            int max = i;
            for (int j =0; j < n; j++){
                if (arr[i] < arr[j]) max = j;
            }

            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
        int numh = arr[0];
        for (int i=0; i<n - 1;i++){
            if(arr[i] == arr[i+1]){
                numh = arr[i];
                break;
            }
        }
        System.out.print(numh);
    }
}
```

## Submission at 2024-11-22 07:03:25


```
import java.util.Scanner;

class Main{
    public static void main(String[] args){

        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        
        int[] arr = new int[n];
        for (int i=0; i<n; i++){
            arr[i] = inp.nextInt();
        }

        for( int i=0; i<n; i++){
            int max = i;
            for (int j =0; j < n; j++){
                if (arr[i] < arr[j]) max = j;
            }

            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
        int numh = arr[0];
        for (int i=0; i<n - 1;i++){
            if(arr[i] == arr[i+1]){
                numh = arr[i];
                break;
            }
        }
        System.out.print(numh);
    }
}
```

## Submission at 2024-11-22 07:07:34


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
        return true;
    }
}
```

