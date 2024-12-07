## Submission at 2024-08-09 04:53:59


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner name=new Scanner(System.in);

        String user=name.nextLine();
        System.out.println("Hello "+ user+"!");
        
    }
}
```

## Submission at 2024-08-09 05:00:25


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner name=new Scanner(System.in);

        String user=name.nextLine();
        if(1<=user.length() || user.length()<=100)
        System.out.println("Hello "+ user+"!");
        else{
            System.out.println("error");
        }
        
    }
}
```

## Submission at 2024-08-09 05:14:14


```
// Write your Java code here from the scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner namee=new Scanner(System.in);
        String name;
        name=namee.nextLine();
        if(1<=name.length()|| name.length()<=100){
            System.out.print("Hello "+name+"!");
        }
    }
}
```

## Submission at 2024-08-09 05:36:53


```
// Write your Java code here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner namee=new Scanner(System.in);
        int n=namee.nextInt();
    
        String name;
        for(int i=0;i<n;i++){
        
        name = namee.nextLine();
        if(1<=name.length()|| name.length()<=100){
            System.out.println("Hello "+name+"!");
        } else {
            continue;
        }
        
        }
        
    }
}

    
```

## Submission at 2024-08-09 05:51:35


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner namee=new Scanner(System.in);
        int n=namee.nextInt();
        String name;
        for(int i=0;i<n;i++){
            name = namee.next();
            System.out.println("Hello "+name+"!");
        }
        
    }
}

    
```

## Submission at 2024-08-21 03:54:25


```
#include <iostream>
#include <string>

void generateParentheses(int open, int close, std::string current, std::string arr[], int& index, int n) {
    if (open == 0 && close == 0) {
        arr[index++] = current;
        return;
    }

    if (open > 0) {
        generateParentheses(open - 1, close + 1, current + "(", arr, index, n);
    }

    if (close > 0) {
        generateParentheses(open, close - 1, current + ")", arr, index, n);
    }
}

int main() {
    int n;
   
    std::cin >> n;

    int size = 1;
    for (int i = 0; i < n; i++) {
        size *= 2;
    }

    std::string arr[size];
    int index = 0;

    generateParentheses(n, 0, "", arr, index, n);

    std::cout << "All combinations of balanced parentheses:" << std::endl;
    for (int i = 0; i < index; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
```

## Submission at 2024-08-21 03:56:04


```
#include <iostream>
#include <string>

void generateParentheses(int open, int close, std::string current, std::string arr[], int& index, int n) {
    if (open == 0 && close == 0) {
        arr[index++] = current;
        return;
    }

    if (open > 0) {
        generateParentheses(open - 1, close + 1, current + "(", arr, index, n);
    }

    if (close > 0) {
        generateParentheses(open, close - 1, current + ")", arr, index, n);
    }
}

int main() {
    int n;
    std::cin >> n;

    int size = 1;
    for (int i = 0; i < n; i++) {
        size *= 2;
    }

    std::string arr[size];
    int index = 0;

    generateParentheses(n, 0, "", arr, index, n);

    std::cout << "All combinations of balanced parentheses:" << std::endl;
    std::cout << "[";
    for (int i = 0; i < index; i++) {
        std::cout << "\"" << arr[i] << "\"";
        if (i < index - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
```

## Submission at 2024-08-21 03:57:22


```
#include <iostream>
#include <string>

void generateParentheses(int open, int close, std::string current, std::string arr[], int& index, int n) {
    if (open == 0 && close == 0) {
        arr[index++] = current;
        return;
    }

    if (open > 0) {
        generateParentheses(open - 1, close + 1, current + "(", arr, index, n);
    }

    if (close > 0) {
        generateParentheses(open, close - 1, current + ")", arr, index, n);
    }
}

int main() {
    int n;
    std::cin >> n;

    int size = 1;
    for (int i = 0; i < n; i++) {
        size *= 2;
    }

    std::string arr[size];
    int index = 0;

    generateParentheses(n, 0, "", arr, index, n);

    std::cout << "All combinations of balanced parentheses:" << std::endl;
    std::cout << "[";
    for (int i = 0; i < index; i++) {
        std::cout << "\"" << arr[i] << "\"";
        if (i < index - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
```

## Submission at 2024-08-21 04:15:25


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), 1, n, k);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int start, int n, int k) {
        if (tempList.size() == k) {
            result.add(new ArrayList<>(tempList));
        } else {
            for (int i = start; i <= n; i++) {
                tempList.add(i);
                backtrack(result, tempList, i + 1, n, k);
                tempList.remove(tempList.size() - 1); // Backtrack
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking input for n and k
        
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        // Get all combinations
        List<List<Integer>> result = combine(n, k);

        // Print all combinations
       System.out.print("[");
        for (List<Integer> combination : result) {
            
            System.out.print(combination);
            
        }
        System.out.print("]");
    }
}

```

## Submission at 2024-08-21 08:39:29


```
import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);
        List<List<Integer>> result = combine(n, k);

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

    private static void backtrack(int start, int n, int k, List<Integer> current, List<List<Integer>> result) {
        if (current.size() == k) {
            result.add(new ArrayList<>(current));
            return;
        }

        for (int i = start; i <= n; i++) {
            current.add(i);
            backtrack(i + 1, n, k, current, result);
            current.remove(current.size() - 1);  // Backtrack
        }
    }
}

```

## Submission at 2024-08-22 08:54:52


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i]);
        }
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        
        for (List<Integer> permutation : result) {
            System.out.print(permutation);
        }
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
```

## Submission at 2024-08-22 08:58:24


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i]);
        }
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        if(inputArray.length!=0){
            System.out.print("[");
        for (List<Integer> permutation : result) {
            System.out.print(permutation);
        }System.out.print("]");}
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
```

## Submission at 2024-08-22 09:06:45


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i]);
        }
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        List<List<Integer>> per = new ArrayList<>();
        
        for (List<Integer> permutation : result) {
            per.add(permutation);
        }
        System.out.print(per);
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

```

## Submission at 2024-08-22 09:10:09


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            if(inputArray.length<=6|| inputArray.length>=1){
                if(nums[i]>=-10|| nums[i]<=10){
            nums[i] = Integer.parseInt(inputArray[i]);
        }}
        else{
            break;
        }}
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        List<List<Integer>> per = new ArrayList<>();
        
        for (List<Integer> permutation : result) {
            per.add(permutation);
        }
        System.out.print(per);
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

```

## Submission at 2024-08-22 09:11:28


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            if(inputArray.length<=6|| inputArray.length>=1){
                if(nums[i]>=-10|| nums[i]<=10){
            nums[i] = Integer.parseInt(inputArray[i]);
        }}
        else{
            break;
        }}
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        List<List<Integer>> per = new ArrayList<>();
        
        for (List<Integer> permutation : result) {
            per.add(permutation);
        }
        System.out.print(per);
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
```

## Submission at 2024-08-22 09:29:18


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<String> result = generateParenthesis(n);
        System.out.println(result);
    }

    public static List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        generateCombinations(result, "", 0, 0, n);
        return result;
    }

    private static void generateCombinations(List<String> result, String current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.add(current);
            return;
        }

        if (open < max) {
            generateCombinations(result, current + "(", open + 1, close, max);
        }
        if (close < open) {
            generateCombinations(result, current + ")", open, close + 1, max);
        }
    }
}


```

## Submission at 2024-08-22 09:30:55


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

## Submission at 2024-08-22 09:32:48


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            if(inputArray.length<=6|| inputArray.length>=1){
                if(nums[i]>=-10|| nums[i]<=10){
            nums[i] = Integer.parseInt(inputArray[i]);
        }}
        else{
            break;
        }}
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        List<List<Integer>> per = new ArrayList<>();
        
        for (List<Integer> permutation : result) {
            per.add(permutation);
        }
        System.out.print(per);
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

```

## Submission at 2024-08-22 09:36:26


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
  
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i]);
        }
        
        List<List<Integer>> permutations = permute(nums);
        System.out.println(permutations);
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums, new boolean[nums.length]);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums, boolean[] used) {
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (used[i]) continue;
                tempList.add(nums[i]);
                used[i] = true;
                backtrack(result, tempList, nums, used);
                used[i] = false;
                tempList.remove(tempList.size() - 1);
            }
        }
    }
}

```

## Submission at 2024-08-22 09:51:36


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            if(inputArray.length<=6|| inputArray.length>=1){
                if(nums[i]>=-10|| nums[i]<=10){
            nums[i] = Integer.parseInt(inputArray[i]);
        }}
        else{
            break;
        }}
        
        List<List<Integer>> result = new ArrayList<>();
        permute(nums, 0, result);
        List<List<Integer>> per = new ArrayList<>();
        
        for (List<Integer> permutation : result) {
            per.add(permutation);
        }
        System.out.print(per);
    }

    public static void permute(int[] nums, int start, List<List<Integer>> result) {
        if (start == nums.length) {
            List<Integer> permutation = new ArrayList<>();
            for (int num : nums) {
                permutation.add(num);
            }
            result.add(permutation);
        } else {
            for (int i = start; i < nums.length; i++) {
                swap(nums, start, i);
                permute(nums, start + 1, result);
                swap(nums, start, i);
            }
        }
    }

    public static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}

```

## Submission at 2024-08-22 12:47:49


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String[] inputArray = input.split("\\s+");
        
        int[] nums = new int[inputArray.length];
        for (int i = 0; i < inputArray.length; i++) {
            nums[i] = Integer.parseInt(inputArray[i]);
        }
        
        List<List<Integer>> permutations = permute(nums);
        printPermutations(permutations);
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums);
        return result;
    }

    private static void backtrack(List<List<Integer>> result, List<Integer> tempList, int[] nums) {
        if (tempList.size() == nums.length) {
            result.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i])) continue; // Element already exists, skip
                tempList.add(nums[i]);
                backtrack(result, tempList, nums);
                tempList.remove(tempList.size() - 1);
            }
        }
    }

    private static void printPermutations(List<List<Integer>> permutations) {
        System.out.print("[");
        for (int i = 0; i < permutations.size(); i++) {
            System.out.print("[");
            for (int j = 0; j < permutations.get(i).size(); j++) {
                System.out.print(permutations.get(i).get(j));
                if (j < permutations.get(i).size() - 1) {
                    System.out.print(",");
                }
            }
            System.out.print("]");
            if (i < permutations.size() - 1) {
                System.out.print(",");
            }
        }
        System.out.println("]");
    }
}

```

## Submission at 2024-08-28 03:05:03


```
// Write the code from scratch, no boilerplate is required
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n1=input.nextInt();
        int n2=input.nextInt();
        int[] arr1=new int[n1];
        for(int i=0;i<n1;i++){
            arr1[i]=input.nextInt();
        }
        int[] arr2=new int[n1];
        for(int i=0;i<n1;i++){
            arr2[i]=input.nextInt();
        }  
        System.out.print(check(arr1,arr2));
    }
    public static boolean check(int[] arr1,int[] arr2){
        boolean ans=false;
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr2.length;j++){
                if(arr1[i]==arr2[j]){
                    ans=true;
                }
                else{
                    ans=false;
                }
            }
        }
        return ans;
    }
}
```

## Submission at 2024-08-28 07:34:10


```
// Write the code from scratch, no boilerplate is required
// Write the code from scratch, no boilerplate is required
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n1=input.nextInt();
        int n2=input.nextInt();
        int[] arr1=new int[n1];
        for(int i=0;i<n1;i++){
            arr1[i]=input.nextInt();
        }
        int[] arr2=new int[n1];
        for(int i=0;i<n1;i++){
            arr2[i]=input.nextInt();
        }  
        System.out.print(check(arr1,arr2));
    }
    public static boolean check(int[] arr1,int[] arr2){
        boolean ans=false;
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr2.length;j++){
                if(arr1[i]==arr2[j]){
                    ans=true;
                }
                else{
                    ans=false;
                    break;
                }
            }
        }
        return ans;
    }
}
```

## Submission at 2024-08-28 07:44:43


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int ans=0;
        for(int i=1;i<=n;i++){
            if(i%3==0||i%5==0||i%7==0){
                ans=ans+i;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-08-28 11:18:04


```
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int missingCount = 0; 
        int current = 1;
        int index = 0;

        while (missingCount < k) {
            
            if (index < n && arr[index] == current) {
                index++; 
            } else {
                missingCount++; 
                if (missingCount == k) { 
                    System.out.println(current);
                    return;
                }
            }
            current++; 
        }
    }
}
```

## Submission at 2024-08-28 11:24:22


```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = input.nextInt();
        }

        int count = 0;
        for (int num : nums) {
            
            int digits = String.valueOf(num).length();
            if (digits % 2 == 0) {
                count++;
            }
        }
        System.out.println(count);
    }
}

```

## Submission at 2024-08-29 07:35:21


```
// Write the code from scratch, no boilerplate is required
import java.util.Scanner;
import java.util.Arrays;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n1=input.nextInt();
        int n2=input.nextInt();
        int[] arr1=new int[n1];
        for(int i=0;i<n1;i++){
            arr1[i]=input.nextInt();
        }
        int[] arr2=new int[n1];
        for(int i=0;i<n1;i++){
            arr2[i]=input.nextInt();
        }  
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        System.out.print(check(arr1,arr2));
    }
    public static boolean check(int[] arr1,int[] arr2){
        boolean ans=false;
        if(arr1.length==arr2.length){
            for(int i=0;i<arr1.length;i++){
                if(arr1[i]==arr2[i]){
                    ans=true;
                }
                else{
                    ans=false;
                }
            }
        }
        return ans;
    }
}
```

## Submission at 2024-08-29 09:36:31


```
// Write Code from Scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int m=input.nextInt();
        int n=input.nextInt();
        int[][] matrix=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=input.nextInt();
            }
        }
        int[][] transpose=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                transpose[i][j]=matrix[j][i];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                System.out.print(transpose[i][j]+" ");
            }
            System.out.println();
        }
        }
    }

```

## Submission at 2024-08-30 04:48:48


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int n=input.nextInt();
        int ans=1;
        for(int i=0;i<n;i++){
            ans=x*ans;
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-08-30 04:53:29


```
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int n=input.nextInt();
        double ans=1;
        if(n<0){
            for(int i=n;i>0;i--){
                ans=1/(ans*x);
            }
            System.out.print((int)ans);
        }
        else{
        for(int i=0;i<n;i++){
            ans=x*ans;
        }
        System.out.print((int)ans);}
    }
}
```

## Submission at 2024-08-30 04:58:06


```
// Write code from scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr1=new int[n];
        int[] arr2=new int[n];
        for(int i=0;i<n;i++){
            arr1[i]=input.nextInt();
        } 
        for(int i=0;i<n;i++){
            arr2[i]=input.nextInt();
        } 
        for(int i=0;i<n;i++){
            if(arr1[i]>=arr2[i]){
                System.out.print(arr1[i]+" ");
            }
            if(arr1[i]<arr2[i]){
                System.out.print(arr2[i]+" ");
            }
        }
    }
}
```

## Submission at 2024-08-30 05:13:54


```

import java.util.Scanner;
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        Scanner input=new Scanner(System.in);
        int m=input.nextInt();
        int n=input.nextInt();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=input.nextInt();
            }
        }
        
    }
}

```

## Submission at 2024-08-30 05:18:55


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
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {
        Node current=head;
        Node prev;
        while(current!=null){
            prev=current;
            current=current.next;
        }
        return current;
    }
}
```

## Submission at 2024-08-30 05:21:26


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int n=input.nextInt();
        double ans=1;
        if(n<0){
            for(int i=0;i<n;i++){
                ans=1/(ans*x);
            }
            System.out.print((int)ans);
        }
        else{
        for(int i=0;i<n;i++){
            ans=x*ans;
        }
        System.out.print((int)ans);}
    }
}
```

## Submission at 2024-08-30 05:21:55


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int n=input.nextInt();
        double ans=1;
        if(n<0){
            for(int i=0;i>n;i--){
                ans=1/(ans*x);
            }
            System.out.print((int)ans);
        }
        else{
        for(int i=0;i<n;i++){
            ans=x*ans;
        }
        System.out.print((int)ans);}
    }
}
```

## Submission at 2024-08-30 05:22:45


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int n=input.nextInt();
        double ans=1;
        if(n<0){
            for(int i=0;i>n;i--){
                ans=1/(ans*x);
            }
            System.out.print((Math.floor)ans);
        }
        else{
        for(int i=0;i<n;i++){
            ans=x*ans;
        }
        System.out.print((int)ans);}
    }
}
```

## Submission at 2024-08-30 05:23:30


```
// write from scratch, create a function named Pow(int x, int n)
// write from scratch, create a function named Pow(int x, int n)
import java.util.Scanner;
class Main { //Remember the class name has to be Main!!
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int x=input.nextInt();
        int n=input.nextInt();
        int ans=1;
        for(int i=0;i<n;i++){
            ans=x*ans;
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-08-30 05:36:31


```
import java.util.Scanner;
class Main {
    public static void main (String args []) {
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        System.out.print(palindrome(s));
        
        }
    public static String  palindrome(String s){
        return "YES";
    }
}
```

## Submission at 2024-08-30 06:04:45


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
class ReverseLinkedList
{
    Node reverseLinkedList(Node head)
    {
        Node temp=head;
        Node prev=head;
        Node current=temp;
        while(current!=null){
          temp=head.next;
          temp=prev;
          prev=prev.next;
          current=current.next;
        }   
        return temp;
    }
}
```

## Submission at 2024-09-13 04:35:00


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
        Node temp=head;
        while(temp!=null){
        result.add(temp.data);
        temp=temp.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-13 05:23:12


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
class ReverseLinkedList


{
    Node reverseLinkedList(Node head)
    {
        Node curr=head, prev = null, next;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    }

```

## Submission at 2024-10-04 05:10:31


```
// Write Java code from 
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int div=n/k;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<div;i++){
            sum1=sum1+arr[i];
        }
        for(int i=div;i<n;i++){
            sum2=sum2+arr[i];
        }
        if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:11:26


```
// Write Java code from 
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int div=n/k;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
        if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:13:42


```
// Write Java code from 
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
        if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:22:33


```
// Write Java code from scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int ans[]=new int[n];
    
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]<arr[j]){
                    ans[i]=count;
                }
                else{
                    count++;
                }
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(ans[i]+" ");
        }
        
      
    }
}
```

## Submission at 2024-10-04 05:33:51


```
// Write Java code from scratch
import java.util.Stack;
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
    
        String s=input.nextLine();
        String t=input.nextLine();
        if(s.length()!=t.length())
        System.out.print("false");


    }
}
```

## Submission at 2024-10-04 05:33:52


```
// Write Java code from scratch
import java.util.Stack;
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
    
        String s=input.nextLine();
        String t=input.nextLine();
        if(s.length()!=t.length())
        System.out.print("false");


    }
}
```

## Submission at 2024-10-04 05:37:38


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:38:12


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:38:34


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:38:56


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:39:13


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:39:31


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:39:45


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:40:04


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:40:28


```
// Write Java code from scratch
import java.util.Scanner;
 public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
            }
        int div=n/k;
        int sum1=0;
        int sum2=0;
    
        for(int i=0;i<div;i++){
            sum2=sum2+arr[i];
        }
        for(int i=div;i<n;i++){
            sum1=sum1+arr[i];
        }
if(sum1>=sum2){
            System.out.print(sum1);
        }
        else{
            System.out.print(sum2);
        }
    }
}
```

## Submission at 2024-10-04 05:57:15


```
// Write Java code from scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int m=input.nextInt();
        int k=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int need=m*k;
        int sorarr[]=new int[n];
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                sorarr[i]=arr[i+1];
            }
            else{
                sorarr[i+1]=arr[i];
            }
        }
                

        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+sorarr[i];
            if(sum==need){
                System.out.print(sum);
                break;
            }

        }
        if(sum!=need){
            System.out.print("-1");
        }
        
    }
}
```

## Submission at 2024-10-04 06:04:01


```
// Write Java code from scratch
import java.util.Stack;
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
    
        String s=input.nextLine();
        String t=input.nextLine();
        if(s.length()==t.length())
        System.out.print("true");


    }
}
```

## Submission at 2024-10-04 06:14:01


```
// Write Java code from scratch
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int ans[]=new int[n];
    
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=i;j<n;j++){
                if(arr[i]<arr[j]){
                    ans[i]=count;
                    
                }
                else{
                    count=count+1;
                }
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(ans[i]+" ");
        }
        
      
    }
}
```

## Submission at 2024-10-16 08:01:34


```
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(); 
        int k = input.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }

        int div = n / k;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < div; i++) {
            sum2 += arr[i];
        }
        for (int i = div; i < n; i++) {
            sum1 += arr[i];
        }
        if (sum1 >= sum2) {
            System.out.print(sum1);
        } else {
            System.out.print(sum2);
        }

    }
}

```

## Submission at 2024-10-16 08:02:13


```
// Write Java code from scratch
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(); 
        int k = input.nextInt();
        int arr[] = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }

        int div = n / k;
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < div; i++) {
            sum2 += arr[i];
        }
        for (int i = div; i < n; i++) {
            sum1 += arr[i];
        }
        if (sum1 >= sum2) {
            System.out.print(sum1);
        } else {
            System.out.print(sum2);
        }

    }
}
```

## Submission at 2024-10-25 05:33:17


```
/* write code from scratch  */ 
import java. util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String ransom=input.nextLine();
        String magazin=input.nextLine();
    
        if(ransom==magazin){
            System.out.print("true");
           }
        else{
            System.out.print("false");
        }
    }}

```

## Submission at 2024-10-25 06:07:36


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
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next!=null){
            Next=curr.next;
            curr=Next.next;
            prev=curr;
            prev=prev.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next2!=null){
            Next2=curr2.next;
            curr2=Next2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }
        Node head1 =num1;
        Node head2=num2;
        int num=0;
        Node c = null;
        if(count1>count2){
            while(num!=count1){
                c.data=head1.data+head2.data;
                num++;
                c=c.next;
            }
        }
        return c;
    }
}
```

## Submission at 2024-10-25 06:11:34


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
        while(root.data!='N'){
            
        }
        return true;
    }
}
```

## Submission at 2024-10-25 06:29:56


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
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=curr;
            curr=curr.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }
        Node c=null;
        
        return num1;
    
    }
}
```

## Submission at 2024-10-25 06:45:57


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=curr;
            curr=curr.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }
    

        
        return num2;
    
    }
}

```

## Submission at 2024-10-25 06:46:37


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=curr;
            curr=curr.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }

        return num2+1;
    
    }
}

```

## Submission at 2024-10-25 06:48:54


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=curr;
            curr=curr.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }
        while(num2!=null){
            num2.data=num1.data+num2.data;
            num2=num2.next;
            num1=num1.next;
        }

        return num2;
    
    }
}

```

## Submission at 2024-10-25 06:48:55


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=curr;
            curr=curr.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }
        while(num2!=null){
            num2.data=num1.data+num2.data;
            num2=num2.next;
            num1=num1.next;
        }

        return num2;
    
    }
}

```

## Submission at 2024-10-25 06:50:41


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=prev.next;
            curr=curr.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2.next;
            prev2=curr2;
            prev2=prev2.next;
            count2++;

        }
        while(num2!=null){
            num2.data=num1.data+num2.data;
            num2=num2.next;
            num1=num1.next;
        }

        return num2;
    
    }
}

```

## Submission at 2024-10-25 06:51:49


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=prev.next;
            curr=prev.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2;
            prev2=prev2.next;
            curr2=prev2.next;
            count2++;

        }
        while(num2!=null){
            num2.data=num1.data+num2.data;
            num2=num2.next;
            num1=num1.next;
        }

        return num2;
    
    }
}

```

## Submission at 2024-10-25 06:51:50


```


class Solution {
    // Function to add two numbers represented by linked list.
    static Node addTwoLists(Node num1, Node num2) {
        Node curr=num1;
        Node prev=num1;
        Node Next=num1;
        int count1=0;
        while(Next.next!=null){
            Next=curr.next;
            curr=prev;
            prev=prev.next;
            curr=prev.next;
            count1++;
        }
         Node curr2=num2;
        Node prev2=num2;
        Node Next2=num2;
        int count2=0;
        while(Next.next!=null){
            Next2=curr2.next;
            curr2=prev2;
            prev2=prev2.next;
            curr2=prev2.next;
            count2++;

        }
        while(num2!=null){
            num2.data=num1.data+num2.data;
            num2=num2.next;
            num1=num1.next;
        }

        return num2;
    
    }
}

```

## Submission at 2024-11-14 06:11:03


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
       if(root==null){
        return 0;}
        int ld=maxDepth(root.left);
        int rd=maxDepth(root.right);
        return Math.max(ld,rd)+1;
       

    }
}
```

## Submission at 2024-11-22 04:41:33


```
Java program to check if a tree is BST

class Node {
    int data;
    Node left, right;

    Node(int value) {
        data = value;
        left = right = null;
    }
}

class GfG {
    // Function to find max value in the subtree
    static int maxValue(Node node) {
        if (node == null) return Integer.MIN_VALUE;
        return
        Math.max(node.data, 
                 Math.max(maxValue(node.left), maxValue(node.right)));
    }

    // Function to find min value in the subtree
    static int minValue(Node node) {
        if (node == null) return Integer.MAX_VALUE;
        return 
        Math.min(node.data, 
                 Math.min(minValue(node.left), minValue(node.right)));
    }

    // Returns true if the binary tree is a BST
    static boolean isBST(Node node) {
        if (node == null) return true;

        // Check if the max of the left subtree 
        // is greater than current node
        if (node.left != null && maxValue(node.left) >= node.data)
            return false;

        // Check if the min of the right subtree 
        // is smaller than or equal to current node
        if (node.right != null && minValue(node.right) <= node.data)
            return false;

        // Recursively check if left and right subtrees are BSTs
        return isBST(node.left) && isBST(node.right);
    }

    public static void main(String[] args) {
      
        // Create a sample binary tree
        //      4
        //    /   \
        //   2     5
        //  / \
        // 1   3

        Node root = new Node(4);
        root.left = new Node(2);
        root.right = new Node(5);
        root.left.left = new Node(1);
        root.left.right = new Node(3);

        if (isBST(root)) {
            System.out.println("True");
        }
        else {
            System.out.println("False");
        }
    }
}



// Java program to convert sorted 
// array to BST.
import java.util.ArrayList;

class Node {
    int data;
    Node left, right;
    
    Node(int data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class GfG {
    
    // Recursive function to construct BST
    static Node sortedArrayToBSTRecur(int[] arr, int start, int end) {
        if (start > end) return null;
    
        // Find the middle element
        int mid = start + (end - start) / 2;
    
        // Create root node
        Node root = new Node(arr[mid]);
    
        // Create left subtree
        root.left = sortedArrayToBSTRecur(arr, start, mid - 1);
    
        // Create right subtree
        root.right = sortedArrayToBSTRecur(arr, mid + 1, end);
    
        return root;
    }
    
    static Node sortedArrayToBST(int[] arr) {
        return sortedArrayToBSTRecur(arr, 0, arr.length - 1);
    }

    static void preOrder(Node root) {
        if (root == null) return;
        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }

    public static void main(String[] args) {
        int[] arr = {1,2,3,4};
        Node root = sortedArrayToBST(arr);
        preOrder(root);
    }
}



// Java program to find the maximum depth of a binary 
// tree using depth-first search (DFS) approach.
class Node {
    int data;
    Node left, right;

    Node(int val) {
        data = val;
        left = null;
        right = null;
    }
}

// Returns "maxDepth" which is the number of nodes 
// along the longest path from the root node down 
// to the farthest leaf node.
class GfG {
    static int maxDepth(Node node) {
        if (node == null)
            return 0;

        // compute the depth of left and right subtrees
        int lDepth = maxDepth(node.left);
        int rDepth = maxDepth(node.right);

        return Math.max(lDepth, rDepth) + 1;
    }

    public static void main(String[] args) {
      
        // Representation of the input tree:
        // 1
        // / \
        // 2 3
        // / \
        // 4 5   
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.left.right = new Node(5);

        System.out.println(maxDepth(root));
    }
}



// Java Program to find kth largest element
class Node {
    int data;
    Node left, right;

    Node(int x) {
        data = x;
        left = right = null;
    }
}

class GfG {

    // Function to perform Morris Traversal 
    // and return kth largest element
    static int kthLargest(Node root, int k) {

        // return -1 if root is null
        if (root == null) return -1;

        Node curr = root;
        int cnt = 0;

        while (curr != null) {

            // if right tree does not exist,
            // then increment the count, check 
            // count == k. Otherwise, 
            // set curr = curr.left
            if (curr.right == null) {
                cnt++;

                // return current Node
                // if cnt == k.
                if (cnt == k) return curr.data;

                curr = curr.left;
            } else {
                Node succ = curr.right;

                // find the inorder successor
                while (succ.left != null && 
                       succ.left != curr) {
                    succ = succ.left;
                }

                // create a linkage between succ and curr
                if (succ.left == null) {
                    succ.left = curr;
                    curr = curr.right;
                } else {
                    cnt++;

                    // remove the link
                    succ.left = null;

                    // return current Node
                    // if cnt == k.
                    if (cnt == k) return curr.data;

                    curr = curr.left;
                }
            }
        }

        return -1;
    }

    public static void main(String[] args) {

        // Create a hard-coded tree:
        // 20
        // / \
        // 8 22
        // / \
        // 4 12
        // / \
        // 10 14
        Node root = new Node(20);
        root.left = new Node(8);
        root.right = new Node(22);
        root.left.left = new Node(4);
        root.left.right = new Node(12);
        root.left.right.left = new Node(10);
        root.left.right.right = new Node(14);

        int k = 3;

        System.out.println(kthLargest(root, k));
    }
}



// Java program to merge a linked list into another at
// alternate positions

import java.util.*;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class GfG {

    // Function to print a linked list
    static void printList(Node head) {
        Node curr = head;
        while (curr != null) {
            System.out.print(curr.data + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    // Function to merge two linked lists
    static List<Node> merge(Node head1, Node head2) {
      
        // Initialize pointers to traverse the two lists
        Node temp1 = head1;
        Node temp2 = head2;

        // Traverse both lists and merge them
        while (temp1 != null && temp2 != null) {
          
            // Save the next nodes of the current nodes in
            // both lists
            Node ptr1 = temp1.next;
            Node ptr2 = temp2.next;

            // Insert the current node from the second list
            // after the current node from the first list
            temp2.next = temp1.next;
            temp1.next = temp2;

            // Update the pointers for the next iteration
            temp1 = ptr1;
            temp2 = ptr2;
        }

        return Arrays.asList(head1, temp2);
    }

    public static void main(String[] args) {

        // Creating first linked list 1->2->3
        Node head1 = new Node(1);
        head1.next = new Node(2);
        head1.next.next = new Node(3);

        // Creating second linked list 4->5->6->7->8
        Node head2 = new Node(4);
        head2.next = new Node(5);
        head2.next.next = new Node(6);
        head2.next.next.next = new Node(7);
        head2.next.next.next.next = new Node(8);

        // Store first and second head points in array
        List<Node> ar = merge(head1, head2);
        printList(ar.get(0));
        printList(ar.get(1));
    }
}



// Iterative Java program to reverse a linked list

class Node {
    int data;
    Node next;

    Node(int new_data) {
        data = new_data;
        next = null;
    }
}

// Given the head of a list, reverse the list and return the
// head of reversed list
public class GfG {
     static Node reverseList(Node head) {
        
        // Initialize three pointers: curr, prev and next
        Node curr = head, prev = null, next;

        // Traverse all the nodes of Linked List
        while (curr != null) {
            
            // Store next
            next = curr.next;
            
            // Reverse current node's next pointer
            curr.next = prev;
            
            // Move pointers one position ahead
            prev = curr;
            curr = next;
        }
        
        // Return the head of reversed linked list
        return prev;
    }

    // This function prints the contents
    // of the linked list starting from the head
    static void printList(Node node) {
        while (node != null) {
            System.out.print(" " + node.data);
            node = node.next;
        }
    }

    public static void main(String[] args) {

        // Create a hard-coded linked list:
        // 1 -> 2 -> 3 -> 4 -> 5
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(5);

        System.out.print("Given Linked list:");
        printList(head);
        
        head = reverseList(head);

        System.out.print("\nReversed Linked List:");
        printList(head);
    }
}



// Java program to delete last occurrence 
// of key in singly linked list

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class GfG {
  
    // Function to delete the last occurrence 
    // of a key in the linked list
    static Node deleteLastOccurrence(Node head, int key) {
        Node last = null, lastPrev = null;
        Node curr = head, prev = null;

        // Traverse the list to find the last 
        // occurrence of the key
        while (curr != null) {
            if (curr.data == key) {
                lastPrev = prev;
                last = curr;
            }
            prev = curr;
            curr = curr.next;
        }

        // If the key was found
        if (last != null) {

            // If last occurrence is not the head
            if (lastPrev != null) {
                lastPrev.next = last.next;
            } else {

                // If last occurrence is the head, 
                // move head to next node
                head = head.next;
            }
        }

        return head;
    }

    static void print(Node curr) {
        while (curr != null) {
            System.out.print(curr.data + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
      
        // Create a hard-coded linked list:
        // 1 -> 2 -> 2 -> 4 -> 2
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(2);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(2);

        int key = 2;
        head = deleteLastOccurrence(head, key);
        print(head);
    }
}

```

## Submission at 2024-11-22 05:07:42


```
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<arr.length;i++){
            arr[i]=input.nextInt();
        }

        int score=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[i]==arr[j]){
                    score++;
                }
            }
        }
        System.out.print(score);
    }
}
```

## Submission at 2024-11-22 05:12:12


```
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<arr.length;i++){
            arr[i]=input.nextInt();
        }

        int score=0;
        for(int i=0;i<1;i++){
            for(int j=1;j<n;j++){
                if(arr[i]==arr[j]){
                    score++;
                    arr[j]=0;
                }
            }
        }
        System.out.print(score);
    }
}
```

## Submission at 2024-11-22 05:20:43


```
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int ans=arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                if(ans<arr[i]){
                    ans=arr[i];
                }
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-22 05:21:41


```
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int ans=arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                if(ans<arr[i]){
                    ans=arr[i];
                }
            }
            else{
                ans=0;
            }
        }
        System.out.print(ans);
    }
}
```

## Submission at 2024-11-22 05:46:31


```
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-22 05:52:02


```
// Write Code From Scratch Here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new arr[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-22 05:53:25


```
// Write Code From Scratch Here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new arr[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-22 05:56:03


```
// Write Code From Scratch Here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int n=input.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=input.nextInt();
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-22 06:13:58


```
// Write Code From Scratch Here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        int ans=10;
        int c=0;
        int sol=0;
        for(int i=a;i<b;i++){
            sol=(i-a)+(b-i);
            if(sol<ans){
                ans=sol;
                c=i;
            }
        }
        System.out.print(c);
    }
}
```

## Submission at 2024-11-22 06:19:33


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

## Submission at 2024-11-22 06:21:17


```
// Write Code From Scratch Here
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int a=input.nextInt();
        int b=input.nextInt();
        int ans=10;
        int c=0;
        int sol=0;
        c=b-a;
        System.out.print(c);
    }
}
```

## Submission at 2024-11-22 06:39:24


```
/* write code from scratch */
/* write code from scratch */
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int m=input.nextInt();
        int n=input.nextInt();
        int d=input.nextInt();
        int[] arr1=new int[m];
        int[] arr2=new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=input.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=input.nextInt();
        }
        boolean ans=false;
        int sol=0;
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr2.length;j++){
                if(arr1[i]-arr2[j]>=d || arr2[j]-arr1[i]>=d){
                    ans=true;
                }
                else{
                    j=n;
                }
            }
            if(ans){
                sol++;
            }
        }
        System.out.print(sol);
    }
}
```

## Submission at 2024-11-22 06:43:29


```
/* write code from scratch */
/* write code from scratch */
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int m=input.nextInt();
        int n=input.nextInt();
        int d=input.nextInt();
        int[] arr1=new int[m];
        int[] arr2=new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=input.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=input.nextInt();
        }
        boolean ans=false;
        int sol=0;
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr2.length;j++){
                if(arr1[i]-arr2[j]>=d || arr2[j]-arr1[i]>=d){
                    ans=true;
                }
                else{
                    break;
                }
            }
            if(ans){
                sol++;
            }
        }
        System.out.print(sol-1);
    }
}
```

## Submission at 2024-11-22 06:44:58


```
/* write code from scratch */
/* write code from scratch */
/* write code from scratch */
import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int m=input.nextInt();
        int n=input.nextInt();
        int d=input.nextInt();
        int[] arr1=new int[m];
        int[] arr2=new int[n];
        for(int i=0;i<m;i++){
            arr1[i]=input.nextInt();
        }
        for(int i=0;i<n;i++){
            arr2[i]=input.nextInt();
        }
        boolean ans=false;
        int sol=0;
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr2.length;j++){
                if(arr1[i]-arr2[j]>=d || arr2[j]-arr1[i]>=d){
                    ans=true;
                }
                else{
                    ans=false;
                    break;
                }
            }
            if(ans){
                sol++;
            }
        }
        System.out.print(sol);
    }
}
```

## Submission at 2024-11-22 06:50:04


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
        Node node=root;
        while(node !=null){
            if(root.right>root.right.right){
                return true;
            }
        }
        return false;
    }
}
```

## Submission at 2024-11-22 06:55:59


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
	Node curr=head.next;
    Node pre=head;
    while(curr!=null){
        if(pre.value==curr.value){
            pre=curr.next;
            curr=prev.next;
        }
    }
    return pre;
    }
}
```

## Submission at 2024-11-22 06:58:19


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
	Node curr=head.next;
    Node pre=head;
    Node next=curr.next;
    while(next!=null){
        if(next.value==curr.value){
            pre=curr.next;
            curr=prev.next;
            next=curr.next;
        }
    }
    return pre;
    }
}
```

## Submission at 2024-11-22 06:59:41


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
	Node curr=head.next;
    Node pre=head;
    Node next=curr.next;
    while(next!=null){
        if(next.value==curr.value){
            pre=curr.next;
            curr=pre.next;
            next=curr.next;
        }
    }
    return pre;
    }
}
```

