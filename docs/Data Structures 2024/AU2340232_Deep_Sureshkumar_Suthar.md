## Submission at 2024-08-05 10:49:53


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String name=s.nextLine();
        System.out.print("Hello "+name+" !");
    }
}
```

## Submission at 2024-08-05 10:50:54


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String name=s.nextLine();
        System.out.print("Hello "+name+" !");
    }
}
```

## Submission at 2024-08-05 10:51:24


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String name=s.nextLine();
        System.out.print("Hello "+name+"!");
    }
}
```

## Submission at 2024-08-12 10:07:12


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int x=s.nextInt();
        System.out.print(fibonacci(x));
    }

    private static int fibonacci(int x) {
        // Write your code here
        int a=0,b=1,d=0,f=0;
        if(x==1){
            x=a;
        }else if(x==2){
            x=b;
        }else{
            for(d=0;d<x-2;d++){
                f=a+b;
                a=b;
                b=f;
            }
            x=f;
        }
        return x;
    }
}

```

## Submission at 2024-08-12 10:10:43


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int x=s.nextInt();
        System.out.print(fibonacci(x));
    }

    private static int fibonacci(int x) {
        // Write your code here
        int a=0,b=1,d=0,f=0;
        if(x==1){
            x=a;
        }else if(x==2){
            x=b;
        }else{
            fibonacci(x);
        }
        return x;
    }
}

```

## Submission at 2024-08-12 10:22:21


```
import java.io.*;
import java.util.*;

class Main {
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int x=s.nextInt();
        System.out.print(fibonacci(x));
    }

    private static int fibonacci(int x) {
        // Write your code here
        if(x==0){
            return 0;
        }else if(x==1){
            return 1;
        } return fibonacci(x-1)+fibonacci(x-2);

    }
}

```

## Submission at 2024-08-12 10:57:17


```
import java.io.*;
import java.util.Scanner;

class Main {
    int count=0;
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int num=s.nextInt();
        System.out.print(isPowerOfTwo(num));
    }
    private static boolean isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n%2==0 && n>0){
            if (n == 2) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:57:40


```
import java.io.*;
import java.util.Scanner;

class Main {
    int count=0;
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        int num=s.nextInt();
        System.out.print(isPowerOfTwo(num));
    }
    private static boolean isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        if(n%2==0 && n>0){
            if (n == 2) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-21 09:49:17


```
import java.io.*;
import java.util.*;

class main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.println(result);
    }

    public static List<List<Integer>> combine(int n, int k) {
        // write logic here
        List<List<Integer>> returnArray = new ArrayList<>();
        List<Integer> elements = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            elements.add(i);
        }
        generateCombinations(n , k, new ArrayList<>(), 1, returnArray);
        return returnArray;
    }

    public static void generateCombinations(int n, int k, List<Integer> currentCombinations, int index, List<List<Integer>> allCombinations) {
        // base case
        if (currentCombinations.size() == k) {
            allCombinations.add(new ArrayList<>(currentCombinations));
            return;
        }
        for (int i = index; i <= n; i++) {
            currentCombinations.add(i);
            generateCombinations(n, k, currentCombinations, i + 1, allCombinations);
            currentCombinations.remove(currentCombinations.size() - 1);
        }
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}

```

## Submission at 2024-08-21 09:51:16


```
import java.io.*;
import java.util.*;

public class main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.println(result);
    }

    public static List<List<Integer>> combine(int n, int k) {
        // write logic here
        List<List<Integer>> returnArray = new ArrayList<>();
        List<Integer> elements = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            elements.add(i);
        }
        generateCombinations(n , k, new ArrayList<>(), 1, returnArray);
        return returnArray;
    }

    public static void generateCombinations(int n, int k, List<Integer> currentCombinations, int index, List<List<Integer>> allCombinations) {
        // base case
        if (currentCombinations.size() == k) {
            allCombinations.add(new ArrayList<>(currentCombinations));
            return;
        }
        for (int i = index; i <= n; i++) {
            currentCombinations.add(i);
            generateCombinations(n, k, currentCombinations, i + 1, allCombinations);
            currentCombinations.remove(currentCombinations.size() - 1);
        }
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}

```

## Submission at 2024-08-21 09:56:42


```
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.println(result);
    }

    public static List<List<Integer>> combine(int n, int k) {
        // write logic here
        List<List<Integer>> returnArray = new ArrayList<>();
        List<Integer> elements = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            elements.add(i);
        }
        generateCombinations(n , k, new ArrayList<>(), 1, returnArray);
        return returnArray;
    }

    public static void generateCombinations(int n, int k, List<Integer> currentCombinations, int index, List<List<Integer>> allCombinations) {
        // base case
        if (currentCombinations.size() == k) {
            allCombinations.add(new ArrayList<>(currentCombinations));
            return;
        }
        for (int i = index; i <= n; i++) {
            currentCombinations.add(i);
            generateCombinations(n, k, currentCombinations, i + 1, allCombinations);
            currentCombinations.remove(currentCombinations.size() - 1);
        }
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}

```

## Submission at 2024-08-21 10:11:38


```
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations in required format
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        for (int i = 0; i < result.size(); i++) {
            sb.append(Arrays.toString(result.get(i).toArray()));
            if (i < result.size() - 1) {
                sb.append(",");
            }
        }
        sb.append("]");
        System.out.println(sb.toString());
    }

    public static List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(1, new ArrayList<>(), result, n, k);
        return result;
    }

    private static void backtrack(int start, List<Integer> current, List<List<Integer>> result, int n, int k) {
        if (current.size() == k) {
            result.add(new ArrayList<>(current));
            return;
        }
        for (int i = start; i <= n; i++) {
            current.add(i);
            backtrack(i + 1, current, result, n, k);
            current.remove(current.size() - 1);
        }
    }
}
```

## Submission at 2024-08-21 10:13:06


```
import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.println(result);
    }

    public static List<List<Integer>> combine(int n, int k) {
        // write logic here
        List<List<Integer>> returnArray = new ArrayList<>();
        List<Integer> elements = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            elements.add(i);
        }
        generateCombinations(n , k, new ArrayList<>(), 1, returnArray);
        return returnArray;
    }

    public static void generateCombinations(int n, int k, List<Integer> currentCombinations, int index, List<List<Integer>> allCombinations) {
        // base case
        if (currentCombinations.size() == k) {
            allCombinations.add(new ArrayList<>(currentCombinations));
            return;
        }
        for (int i = index; i <= n; i++) {
            currentCombinations.add(i);
            generateCombinations(n, k, currentCombinations, i + 1, allCombinations);
            currentCombinations.remove(currentCombinations.size() - 1);
        }
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}
```

## Submission at 2024-08-21 10:14:18


```
import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().trim().split("\\s+");
        int n = Integer.parseInt(input[0]);
        int k = Integer.parseInt(input[1]);

        // Generate combinations
        List<List<Integer>> result = combine(n, k);

        // Print combinations
        System.out.println(result);
    }

    public static List<List<Integer>> combine(int n, int k) {
        // write logic here
        List<List<Integer>> returnArray = new ArrayList<>();
        List<Integer> elements = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            elements.add(i);
        }
        generateCombinations(n , k, new ArrayList<>(), 1, returnArray);
        return returnArray;
    }

    public static void generateCombinations(int n, int k, List<Integer> currentCombinations, int index, List<List<Integer>> allCombinations) {
        // base case
        if (currentCombinations.size() == k) {
            allCombinations.add(new ArrayList<>(currentCombinations));
            return;
        }
        for (int i = index; i <= n; i++) {
            currentCombinations.add(i);
            generateCombinations(n, k, currentCombinations, i + 1, allCombinations);
            currentCombinations.remove(currentCombinations.size() - 1);
        }
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}
```

## Submission at 2024-08-21 10:19:43


```
import java.io.*;
import java.util.*;

public class Main{
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
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print("[");
            for (int j = 0; j < result.get(i).size(); j++) {
                if (j != 0) {
                    System.out.print(",");
                }
                System.out.print(result.get(i).get(j));
            }
            System.out.print("]");
        }
        System.out.println("]");
    }

    public static List<List<Integer>> combine(int n, int k) {
        // write logic here
        List<List<Integer>> returnArray = new ArrayList<>();
        List<Integer> elements = new ArrayList<>();
        for (int i = 1; i < n; i++) {
            elements.add(i);
        }
        generateCombinations(n , k, new ArrayList<>(), 1, returnArray);
        return returnArray;
    }

    public static void generateCombinations(int n, int k, List<Integer> currentCombinations, int index, List<List<Integer>> allCombinations) {
        // base case
        if (currentCombinations.size() == k) {
            allCombinations.add(new ArrayList<>(currentCombinations));
            return;
        }
        for (int i = index; i <= n; i++) {
            currentCombinations.add(i);
            generateCombinations(n, k, currentCombinations, i + 1, allCombinations);
            currentCombinations.remove(currentCombinations.size() - 1);
        }
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}
```

## Submission at 2024-08-21 10:24:32


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] numbersInString = input.next().replace("[", "").replace("]", "").split(",");
        List<Integer> numbers = new ArrayList<>();
        for (String string : numbersInString) {
            try {
                numbers.add(Integer.parseInt(string));
            } catch (Exception error) {}
        }
        List<Integer> sortedNumbersArray = numbers;
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
        
        return allPermutationsCopy;
    }
}

 */
```

## Submission at 2024-08-21 10:25:45


```
import java.util.*;

public class Q2 {
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

## Submission at 2024-08-21 10:26:29


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

## Submission at 2024-08-21 10:28:12


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

## Submission at 2024-08-21 10:30:12


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

## Submission at 2024-08-21 10:39:17


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
        List<Integer> sortedNumbersArray = numbers;
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

## Submission at 2024-08-21 10:51:06


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 0) {
            List<String> allParenthesesArray = getParenthesesCombinations(0, n, new ArrayList<>(), "", 0);
            printArray(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains("\"" + parenthesesString + "\"")) {
                allParenthesesArray.add("\"" + parenthesesString + "\"");
            }
            return allParenthesesArray;
        }

        int numberOfRightBrackets = parenthesesString.length() - numberOfLeftBrackets;

        if (numberOfLeftBrackets < n && numberOfLeftBrackets >= numberOfRightBrackets) {
            allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + "", numberOfLeftBrackets + 1);
        } else {
            allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets);
        }

        allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets);

        return allParenthesesArray;
    }

    public static void printArray(List<String> parenthesesArray) {
        System.out.println(parenthesesArray);
        System.out.print("[");
        for (int i = 0; i < parenthesesArray.size(); i++) {
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print(parenthesesArray.get(i));
        }
        System.out.print("]");
    }
}


```

## Submission at 2024-08-21 10:52:11


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 0) {
            List<String> allParenthesesArray = getParenthesesCombinations(0, n, new ArrayList<>(), "", 0);
            printArray(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains("\"" + parenthesesString + "\"")) {
                allParenthesesArray.add("\"" + parenthesesString + "\"");
            }
            return allParenthesesArray;
        }

        int numberOfRightBrackets = parenthesesString.length() - numberOfLeftBrackets;

        if (numberOfLeftBrackets < n && numberOfLeftBrackets >= numberOfRightBrackets) {
            allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets + 1);
        } else {
            allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets);
        }

        allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets);

        return allParenthesesArray;
    }

    public static void printArray(List<String> parenthesesArray) {
        System.out.println(parenthesesArray);
        System.out.print("[");
        for (int i = 0; i < parenthesesArray.size(); i++) {
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print(parenthesesArray.get(i));
        }
        System.out.print("]");
    }
}


```

## Submission at 2024-08-21 10:56:08


```
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 0) {
            List<String> allParenthesesArray = getParenthesesCombinations(0, n, new ArrayList<>(), "", 0);
            printArray(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains("\"" + parenthesesString + "\"")) {
                allParenthesesArray.add("\"" + parenthesesString + "\"");
            }
            return allParenthesesArray;
        }

        int numberOfRightBrackets = parenthesesString.length() - numberOfLeftBrackets;

        if (numberOfLeftBrackets < n && numberOfLeftBrackets >= numberOfRightBrackets) {
            allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + "(", numberOfLeftBrackets + 1);
        } else {
            allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets);
        }

        allParenthesesArray = getParenthesesCombinations(index + 1, n, allParenthesesArray, parenthesesString + ")", numberOfLeftBrackets);

        return allParenthesesArray;
    }

    public static void printArray(List<String> parenthesesArray) {
        System.out.print("[");
        for (int i = 0; i < parenthesesArray.size(); i++) {
            if (i != 0) {
                System.out.print(",");
            }
            System.out.print(parenthesesArray.get(i));
        }
        System.out.print("]");
    }
}


```

## Submission at 2024-09-02 10:11:05


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
        while(head!=null){
            result.add(head.data);
            head=head.next;
        }
        return result;
    }
}

```

## Submission at 2024-09-02 10:25:50


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
        int i,Kvalue=0;
        for(i=0;i<k;i++){
            if(i==k-1){
                Kvalue=head.data;
            }else{
                head=head.next;
            }
        }
        return(Kvalue);
    }
}
```

## Submission at 2024-09-02 10:30:53


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
        int i,Kvalue=0;
        for(i=1;i<=k;i++){
            if(i==k){
                Kvalue=head.data;
                return(Kvalue);
            }
                head=head.next;
        }
        return(-1);
    }
}
```

## Submission at 2024-09-02 10:46:14


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
        int i=1,Kvalue=0;
        while(head!=null){
            if(i==k){
                Kvalue=head.data;
                return(Kvalue);
            }
            head=head.next;
            i++;
        }
        return(-1);
    }
}
```

## Submission at 2024-09-05 06:19:15


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
        Node revlist= new Node(head.data);
        while(head.next!=null){

            Node newnode=new Node(head.next.data);
            newnode.next=revlist;
            revlist = newnode;
            head=head.next;
        }
        return(revlist);
    }
}
```

## Submission at 2024-09-05 06:21:00


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
        Node revlist= new Node(head.data);
        while(head.next!=null){
            Node newnode=new Node(head.next.data);
            newnode.next=revlist;
            revlist = newnode;
            head=head.next;
        }
        return(revlist);
    }
}
```

## Submission at 2024-09-09 08:23:51


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
        int i=1;
	if(x==1){
        head=head.next;
        return head;
    }
    while(head.next!=null){
        if(x==i+1){
            head.next=head.next.next;
            return head;
        }
        i++;
        head=head.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 08:28:07


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
        int i=1;
	if(x==1){
        head=head.next;
        return head;
    }
    while(head.next!=null){
        if(x==i+1){
            head.next=head.next.next;
            return head;
        }
        i++;
        if (head.next == null) break;
        head=head.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 08:34:49


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
        int i=1;
	if(x==1){
        head=head.next;
        return head;
    }
    while(head.next!=null){
        if(x==i+1){
            if(head.next.next==null){
                head.next=null;
            }
            head.next=head.next.next;
            return head;
        }
        i++;
        if (head.next == null) break;
        head=head.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 08:36:43


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
        int i=1;
	if(x==1){
        head=head.next;
        return head;
    }
    while(head.next!=null){
        if(x==i+1){
            if(head.next.next==null) head.next=null;
            else head.next=head.next.next;
            break;
        }
        i++;
        head=head.next;
    }
    return head;
    }
}
```

## Submission at 2024-09-09 08:38:23


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
        int i=1;
	if(x==1){
        head=head.next;
        return head;
    }
    Node headRef = head;
    while(head.next!=null){
        if(x==i+1){
            if(head.next.next==null) head.next=null;
            else head.next=head.next.next;
            break;
        }
        i++;
        head=head.next;
    }
    return headRef;
    }
}
```

## Submission at 2024-09-09 10:06:56


```
import java.util.Scanner;
class Main{
    public static boolean ispowerofthree(int n){
        if(n==1){
            return true;
        }
        if(n%3==0 && n>0){
            if(n==3){
                return true;
            }
            ispowerofthree(n/3);
        }
        return false;
    }
    public static void Main(){
        Scanner s=new Scanner(System.in);
        int num=s.();
        System.out.print(ispowerofthree(num));
    }
    }

```

## Submission at 2024-09-16 04:22:27


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
      Node Orlist=head;
      Node revlist= new Node(head.data);
      int i=1,j,cnt=0;
      while(head.next!=null){
        i++;
        Node newnode=new Node(head.next.data);
        newnode.next=revlist;
        revlist = newnode;
        head=head.next;
        }
        for(j=0;j<i;j++){
          if(revlist.data==Orlist.data){
            cnt++;
            revlist=revlist.next;
            Orlist=Orlist.next;
          }
        }
        if(i==cnt){
          return true;
        }
        return false;
    }
}


```

## Submission at 2024-10-07 10:07:12


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        Queue<Integer> Rev_que=new Queue<>();
        i=0,j;
        int[] ary;
        while(q.peek()!=null){
            ary=new int[i+1];
            ary[i]=q.poll();
            i++;
        }
        for(j=ary.length-1;j>=0;j--){
            Rev_que.add(ary[j]);
        }
        return Rev_que;
    }
}
```

## Submission at 2024-10-07 10:13:22


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        Queue<Integer> Rev_que=new LinkedList<>();
        int j,i=0;
        int[] ary={};
        while(q.peek()!=null){
            ary=new int[i+1];
            ary[i]=q.poll();
            i++;
        }
        for(j=ary.length-1;j>=0;j--){
            Rev_que.add(ary[j]);
        }
        return Rev_que;
    }
}
```

## Submission at 2024-10-07 11:14:44


```
import java.util.Scanner;
class Main{
    public static char rev(String str){
        int i;
        for(i=str.length()-1;i>=0;i++){
            return str.charAt(i);
        }
        return 'n';
    }
    public static void main(String args[]){
        Scanner s=new Scanner(System.in);
        String str1=s.nextLine();
        System.out.print(rev(str1));
    }
}
```

## Submission at 2024-10-28 10:38:01


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
        int[] ary=new int[5];
        int i,j;
        int ref=0;
        trav(root,ary,0);
        for(i=0;i<ary.length;i++){
            if(ref>ary[i]){
                ref=ary[i];
            }
        }
        return ref;
    }
    public static void trav(Node root,int[] ary,int i){
        if(root==null){
            return;
        }
        trav(root.left,ary,i);
        ary[i]=root.data;
        i++;
        trav(root.right,ary,i);
    }
}
```

## Submission at 2024-10-28 10:42:22


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
        int[] ary=new int[5];
        int i,j;
        int ref=0;
        trav(root,ary,0);
        for(i=0;i<ary.length;i++){
           if(ref>ary[i]){
            ref=ary[i];
            }
        }
        return 1;
    }
    public static void trav(Node root,int[] ary,int i){
        if(root==null){
            return;
        }
        trav(root.left,ary,i);
        ary[i]=root.data;
        i++;
        trav(root.right,ary,i);
    }
}
```

## Submission at 2024-10-28 10:42:58


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
        int[] ary=new int[5];
        int i,j;
        int ref=0;
        trav(root,ary,0);
        for(i=0;i<ary.length;i++){
           if(ref>ary[i]){
            ref=ary[i];
            }
        }
        return 1;
    }
    public static void trav(Node root,int[] ary,int i){
        if(root==null){
            return;
        }
        trav(root.left,ary,i);
        ary[i]=root.data;
        i++;
        trav(root.right,ary,i);
    }
}
```

## Submission at 2024-10-28 11:26:14


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

class FindIntersectionFromLL {
    Node findIntersection(Node head1, Node head2) {
        Node head3=head1;
  int i,j;
  int cnt=1;
  int cnt1=1;
  Node head4=head2;
  Node head5=new Node(0);
  if(head3!=null){
    cnt++;
    head3=head3.next;
  }
  if(head4!=null){
    cnt1++;
    head4=head4.next;
  }
  for(i=0;i<cnt;i++){
    for(j=0;j<cnt1;j++){
      if(head3.data==head4.data){
        head5.data=head4.data;
        head5=head5.next;
        head4=head4.next;
      }else{
         head4=head4.next;
      }
    }
    head3=head3.next;
    head4=head2;
  }
  return head5;
    }
}
```

## Submission at 2024-11-17 08:28:34


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
        List<Integer> lst=new ArrayList<>();
        inorder(root,lst);
        int i,ref=0;
        for(i=0;i<lst.size();i++){
            if(ref<lst.get(i)){
                ref=lst.get(i);
            }
        }
        return ref;

    }
    public static void inorder(Node root,List<Integer> lst){
        if(root==null){
            return;
        }
        inorder(root.left,lst);
        lst.add(root.data);
        inorder(root.right,lst);
    }
}
```

## Submission at 2024-11-17 08:29:47


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
        List<Integer> lst=new ArrayList<>();
        inorder(root,lst);
        int i,ref=0;
        for(i=0;i<lst.size();i++){
            if(ref<lst.get(i)){
                ref=lst.get(i);
            }
        }
        return ref;

    }
    public static void inorder(Node root,List<Integer> lst){
        if(root==null){
            return;
        }
        inorder(root.left,lst);
        lst.add(root.data);
        inorder(root.right,lst);
    }
}
```

## Submission at 2024-11-17 08:33:41


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
        List<Integer> lst=new ArrayList<>();
        inorder(root,lst);
        int i,ref=lst.get(0);
        for(i=0;i<lst.size();i++){
            if(ref>lst.get(i)){
                ref=lst.get(i);
            }
        }
        return ref;

    }
    public static void inorder(Node root,List<Integer> lst){
        if(root==null){
            return;
        }
        inorder(root.left,lst);
        lst.add(root.data);
        inorder(root.right,lst);
    }
}
```

## Submission at 2024-11-25 10:06:31


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        String str=s.nextLine();
        StringBuilder str1=new StringBuilder(str);
        int i,cn1=0;
        int cn2=0;
        for(i=0;i<str1.length();i++){
            if(str1.charAt(i)=='a'){
                cn1++;
            }else{
                cn2++;
            }
        }
        if(cn1>cn2){
            System.out.print("a");
        }else{
            System.out.print("b");
        }
    }
}
```

## Submission at 2024-11-25 10:19:00


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(j==i){
                    System.out.print("*\n");
                }else{
                    System.out.print("*");
                }
            }
        }
    }
}
```

## Submission at 2024-11-25 10:27:53


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] ary=new int[n];
        int i,j;
        for(i=0;i<5;i++){
            ary[i]=s.nextInt();
        }
        int ref=ary[0]-ary[1];
        boolean flag=true;
        for(i=1;i<n-1;i++){
            if(ary[i]-ary[i+1]!=ref){
                flag=false;
            }
            }
            System.out.print(flag);
        }
    }
```

## Submission at 2024-11-25 10:51:02


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int[] ary1=new int[k];
        int[] ary2=new int[k];
        int c1=0;
        int c2=0;
        int sum=0;
        int i;
        for(i=0;i<k+n;i++){
            if(i%2==0){
                ary1[c1]=s.nextInt();
                c1++;
            }else{
                ary2[c2]=s.nextInt();
                c2++;
            }
        }
        for(i=0;i<ary2.length;i++){
            sum=sum+ary2[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 10:53:01


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int[] ary1=new int[n];
        int[] ary2=new int[n];
        int c1=0;
        int c2=0;
        int sum=0;
        int i;
        for(i=0;i<k+n;i++){
            if(i%2==0){
                ary1[c1]=s.nextInt();
                c1++;
            }else{
                ary2[c2]=s.nextInt();
                c2++;
            }
        }
        for(i=0;i<ary2.length;i++){
            sum=sum+ary2[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 10:54:36


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int[] ary1=new int[n];
        int[] ary2=new int[n];
        int sum=0;
        int i;
        for(i=0;i<n;i++){
            ary1[i]=s.nextInt();
            ary2[i]=s.nextInt();
        }
        for(i=0;i<ary2.length;i++){
            sum=sum+ary2[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 10:56:15


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int[] ary1=new int[n];
        int[] ary2=new int[k];
        int sum=0;
        int i;
        for(i=0;i<n;i++){
            ary1[i]=s.nextInt();
            ary2[i]=s.nextInt();
        }
        for(i=0;i<ary2.length;i++){
            sum=sum+ary2[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 10:59:07


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int[] ary1=new int[n];
        int[] ary2=new int[n];
        int sum=0;
        int i;
        for(i=0;i<n;i++){
            ary1[i]=s.nextInt();
            ary2[i]=s.nextInt();
        }
        for(i=0;i<ary2.length;i++){
            sum=sum+ary2[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:01:13


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int k=s.nextInt();
        int[] ary1=new int[n];
        int[] ary2=new int[k];
        int sum=0;
        int i;
        for(i=0;i<n+k;i++){
            ary1[i]=s.nextInt();
            ary2[i]=s.nextInt();
        }
        for(i=0;i<ary2.length;i++){
            sum=sum+ary2[i];
        }
        System.out.print(sum);
    }
}
```

## Submission at 2024-11-25 11:05:47


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] ary=new int[n];
        int i;
        for(i=0;i<5;i++){
            ary[i]=s.nextInt();
        }
        int ref=ary[0]-ary[1];
        boolean flag=true;
        for(i=0;i<n-1;i++){
            if(ary[i]-ary[i+1]!=ref){
                flag=false;
            }
        }
            System.out.print(flag);
        }
    }
```

## Submission at 2024-11-25 11:07:13


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int[] ary=new int[n];
        int i;
        for(i=0;i<5;i++){
            ary[i]=s.nextInt();
        }
        int ref=ary[0]-ary[1];
        boolean flag=true;
        for(i=0;i<n-1;i++){
            if(ary[i]-ary[i+1]!=ref){
                flag=false;
            }
        }
            return flag;
        }
    }
```

## Submission at 2024-11-25 11:23:57


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int tar=s.nextInt();
        int[] ary=new int[n];
        int i,j;
        int ref=0;
        for(i=0;i<n;i++){
            ary[i]=s.nextInt();
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(ary[i]>ary[j]){
                    ref=ary[i];
                    ary[i]=ary[j];
                    ary[j]=ary[i];
                }
            }
        }
        for(i=0;i<n;i++){
            if(ary[i]==tar){
                System.out.print(ary[i]);
            }
        }
    }
}
```

## Submission at 2024-11-25 11:24:30


```
import java.util.Scanner;
class Main{
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int tar=s.nextInt();
        int[] ary=new int[n];
        int i,j;
        int ref=0;
        for(i=0;i<n;i++){
            ary[i]=s.nextInt();
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(ary[i]>ary[j]){
                    ref=ary[i];
                    ary[i]=ary[j];
                    ary[j]=ary[i];
                }
            }
        }
        for(i=0;i<n;i++){
            if(ary[i]==tar){
                System.out.print(i);
            }
        }
    }
}
```

