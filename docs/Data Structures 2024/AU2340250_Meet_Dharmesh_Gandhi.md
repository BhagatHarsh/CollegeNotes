## Submission at 2024-08-05 10:34:35


```
// Write your Java code here from the scratch
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String userName = input.nextLine();
        System.out.println("Hello " + userName + "!");
    }
}
```

## Submission at 2024-08-05 10:39:57


```
// Write your Java code here
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = Integer.parseInt(input.nextLine());
        for (int i = 0; i < number; i++) {
            String userName = input.nextLine();
            System.out.println("Hello " + userName + "!");
        }
    }
}
```

## Submission at 2024-08-12 09:58:24


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
        System.out.println(fibonacci(x, 1, 1, 0));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int finalCount, int currentCount, int currentNumber, int prevNumber) {
        // Write your code here
        if (finalCount == currentCount) {
            return currentNumber;
        }
        int temp = currentNumber;
        currentNumber = currentNumber + prevNumber;
        prevNumber = temp;
        return fibonacci(finalCount, currentCount+1, currentNumber, prevNumber);
    }
}

```

## Submission at 2024-08-12 09:59:46


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
        System.out.println(fibonacci(x, 1, 1, 0));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int finalCount, int currentCount, int currentNumber, int prevNumber) {
        // Write your code here
        if (finalCount == currentCount) {
            return currentNumber;
        }
        int temp = currentNumber;
        currentNumber = currentNumber + prevNumber;
        prevNumber = temp;
        return fibonacci(finalCount, currentCount+1, currentNumber, prevNumber);
    }
}

```

## Submission at 2024-08-12 10:05:49


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
        System.out.println(fibonacci(x, 1, 1, 0));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int finalCount, int currentCount, int currentNumber, int prevNumber) {
        // Write your code here
        if (finalCount < 0) {
            return -1;
        }
        if (finalCount == currentCount) {
            return currentNumber;
        }
        int temp = currentNumber;
        currentNumber = currentNumber + prevNumber;
        prevNumber = temp;
        return fibonacci(finalCount, currentCount+1, currentNumber, prevNumber);
    }
}

```

## Submission at 2024-08-12 10:07:01


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
        System.out.println(fibonacci(x, 1, 1, 0));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int finalCount, int currentCount, int currentNumber, int prevNumber) {
        // Write your code here
        if (finalCount < 0) {
            return -1;
        }
        if (finalCount == 0) {
            return 0;
        }
        if (finalCount == currentCount) {
            return currentNumber;
        }
        int temp = currentNumber;
        currentNumber = currentNumber + prevNumber;
        prevNumber = temp;
        return fibonacci(finalCount, currentCount+1, currentNumber, prevNumber);
    }
}

```

## Submission at 2024-08-12 10:26:42


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
        if (n%2 == 0) {
            if (n == 2) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:28:16


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
        if (n%2 == 0) {
            if (n == 2 || n == 0) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:30:39


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
        if (n%2 == 0) {
            if (n == 2 || n == 0) {
                return true;
            }
            if (n < 0) {
                return false;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:34:19


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
        if (n%2 == 0 || n >= 0) {
            if (n == 2 || n == 0) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:38:29


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
        if (n%2 == 0 && n > 0) {
            System.out.println(n);
            if (n == 2 || n == 1) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:38:50


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
        if (n%2 == 0 && n > 0) {
            if (n == 2 || n == 1) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-12 10:40:49


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
        if (n == 1) {
            return true;
        }
        if (n%2 == 0 && n > 0) {
            if (n == 2) {
                return true;
            }
            return isPowerOfTwo(n/2);
        }
        return false;
    }
}

```

## Submission at 2024-08-16 02:48:09


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
        System.out.println(allPermutations);
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

## Submission at 2024-08-16 03:33:11


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
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

## Submission at 2024-08-16 03:38:37


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
        if (numbers.isEmpty()) {
            System.out.println("[]");
        } else {
            List<List<Integer>> allPermutations = new ArrayList<>();
            allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
            System.out.println(allPermutations);
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

## Submission at 2024-08-16 03:39:25


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
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

## Submission at 2024-08-16 03:40:02


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
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

## Submission at 2024-08-16 03:40:49


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
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

## Submission at 2024-08-16 03:41:18


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
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

## Submission at 2024-08-16 03:44:39


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
        List<List<Integer>> allPermutations = new ArrayList<>();
        allPermutations = generatePermutations(numbers, 0, allPermutations, numbers);
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

## Submission at 2024-08-16 04:06:43


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
        List<Integer> sortedNumbersArray = new ArrayList<>();
        int minValue = numbers.getFirst();
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

## Submission at 2024-08-16 04:13:42


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

## Submission at 2024-08-16 04:14:02


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

## Submission at 2024-08-16 04:15:00


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

## Submission at 2024-08-16 04:37:55


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

## Submission at 2024-08-16 04:39:05


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
        System.out.println(allPermutations);
        // System.out.print("[");
        // for (int i = 0; i < allPermutations.size(); i++) {
        //     if (i != 0) {
        //         System.out.print(",");
        //     }
        //     System.out.print("[");
        //     for (int j = 0; j < allPermutations.get(i).size(); j++) {
        //         if (j != 0) {
        //             System.out.print(",");
        //         }
        //         System.out.print(allPermutations.get(i).get(j));
        //     }
        //     System.out.print("]");
        // }
        // System.out.println("]");
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

## Submission at 2024-08-16 04:39:42


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

## Submission at 2024-08-16 04:41:37


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

## Submission at 2024-08-16 04:57:04


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 0) {
            List<String> allParenthesesArray = getParenthesesCombinations(0, n, new ArrayList<>(), "", 0);
            System.out.println(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains(parenthesesString)) {
                allParenthesesArray.add(parenthesesString);
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
}
```

## Submission at 2024-08-16 05:40:43


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 0) {
            List<String> allParenthesesArray = getParenthesesCombinations(0, n, new ArrayList<>(), "", 0);
            System.out.println(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains(parenthesesString)) {
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
}
```

## Submission at 2024-08-16 05:45:49


```
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if (n > 0) {
            List<String> allParenthesesArray = getParenthesesCombinations(0, n, new ArrayList<>(), "", 0);
            System.out.print("[");
            for (int i = 0; i < allParenthesesArray.size(); i++) {
                if (i != 0) {
                    System.out.print(",");
                }
                System.out.print(allParenthesesArray.get(i));
            }
            System.out.println("]");
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains(parenthesesString)) {
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
}
```

## Submission at 2024-08-16 06:53:01


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
            System.out.println(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains(parenthesesString)) {
                allParenthesesArray.add(parenthesesString);
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
}
```

## Submission at 2024-08-16 06:54:24


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
            System.out.println(allParenthesesArray);
        } else {
            System.out.println("Cannot have parenthesis combinations for numbers less than 1");
        }
    }

    public static List<String> getParenthesesCombinations(int index, int n, List<String> allParenthesesArray, String parenthesesString, int numberOfLeftBrackets) {
        if (parenthesesString.length() == 2 * n) {
            if (numberOfLeftBrackets == n && !allParenthesesArray.contains(parenthesesString)) {
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
}
```

## Submission at 2024-08-20 04:47:12


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

## Submission at 2024-08-20 04:54:07


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

## Submission at 2024-08-20 05:02:56


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

## Submission at 2024-08-21 07:02:22


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

## Submission at 2024-09-02 03:01:52


```


class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        int rows = matrix.length;
        int cols = matrix.length;
        for (int i = 0; i < rows; i++) {
            int j = 0;
            int k = i;
            while (k >= 0 && j < cols) {
                System.out.print(matrix[k][j] + " ");
                j++;
                k--;
            }
        }
        for (int i = 1; i < cols; i++) {
            int k = rows - 1;
            int j = i;
            while (k >= 0 && j < cols) {
                System.out.print(matrix[k][j] + " ");
                j++;
                k--;
            }
        }
        return new ArrayList<Integer>();
    }
}

```

## Submission at 2024-09-02 07:36:08


```
class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        // Your code here
        int rows = matrix.length;
        int cols = matrix[0].length;
        for (int i = 0; i < rows; i++) {
            int j = 0;
            int k = i;
            while (k >= 0 && j < cols) {
                System.out.print(matrix[k][j] + " ");
                j++;
                k--;
            }
        }
        for (int i = 1; i < cols; i++) {
            int k = rows - 1;
            int j = i;
            while (k >= 0 && j < cols) {
                System.out.print(matrix[k][j] + " ");
                j++;
                k--;
            }
        }
        return new ArrayList<Integer>();
    }
}

```

## Submission at 2024-09-02 07:55:44


```
import java.util.*;

class Main {
    public static void main (String args []) {
        // Write code from scratch
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        isPalindrome(s);
    }

    public static void isPalindrome(String s) {
        int len = s.length();
        if (len <= 1) {
            System.out.println("YES");
        } else if (s.charAt(0) == s.charAt(len - 1)) {
            isPalindrome(s.substring(1, len - 1));
        } else {
            System.out.println("NO");
        }
    }
}
```

## Submission at 2024-09-02 09:59:39


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
        if (x == 1) {
            return head.next;
        }
        int index = 1;
        Node listHead = head;
        while (head.next != null) {
            if (index == x - 1) {
                if (head.next.next == null) {
                    head.next = null;
                } else {
                    head.next = head.next.next;
                }
                break;
            }
            head = head.next;
            index++;
        }
        return listHead;
    }
}
```

## Submission at 2024-09-02 10:01:57


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
        // Write your logic here
        while (head.next != null) {
            result.add(head.data);
            head = head.next;
        }
        result.add(head.data);
        return result;
    }
}

```

## Submission at 2024-09-02 10:05:55


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
        // Write your logic here
        int index = 1;
        while (head.next != null) {
            if (index == k) {
                return head.data;
            }
            index++;
            head = head.next;
        }
        if (index == k) {
            return head.data;
        }
        return -1;
    }
}
```

## Submission at 2024-09-02 10:30:49


```
// Write code from scratch
import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(n);
        input.nextLine();
        String[] arr1 = input.nextLine().split(" ");
        String[] arr2 = input.nextLine().split(" ");
        List<Integer> array1 = new ArrayList<>();
        List<Integer> array2 = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            array1.add(Integer.parseInt(arr1[i]));
            array2.add(Integer.parseInt(arr2[i]));
        }
        System.out.println(getMaximalArray(array1, array2));
    }

    public static List<Integer> getMaximalArray(List<Integer> array1, List<Integer> array2) {
        List<Integer> finalAnswer = new ArrayList<>();
        for (int i = 0; i < array1.size(); i++) {
            if (array1.get(i) > array2.get(i)) {
                finalAnswer.add(array1.get(i));
            } else {
                finalAnswer.add(array2.get(i));
            }
        }
        return finalAnswer;
    }
}
```

## Submission at 2024-09-02 10:37:58


```
// Write code from scratch
import java.util.*;

class Main {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        String[] arr1 = input.nextLine().split(" ");
        String[] arr2 = input.nextLine().split(" ");
        List<Integer> array1 = new ArrayList<>();
        List<Integer> array2 = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            array1.add(Integer.parseInt(arr1[i]));
            array2.add(Integer.parseInt(arr2[i]));
        }
        List<Integer> maximalArray = getMaximalArray(array1, array2);
        displayArray(maximalArray);
    }

    public static List<Integer> getMaximalArray(List<Integer> array1, List<Integer> array2) {
        List<Integer> finalAnswer = new ArrayList<>();
        for (int i = 0; i < array1.size(); i++) {
            if (array1.get(i) > array2.get(i)) {
                finalAnswer.add(array1.get(i));
            } else {
                finalAnswer.add(array2.get(i));
            }
        }
        return finalAnswer;
    }

    public static void displayArray(List<Integer> array) {
        for (int i = 0; i < array.size() - 1; i++) {
            System.out.print(array.get(i) + " ");
        }
        System.out.print(array.get(array.size() - 1));
    }
}
```

## Submission at 2024-09-02 10:47:31


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

## Submission at 2024-09-02 10:55:44


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
        // Write your logic here
        Node revHead = new Node(head.data);
        while (head.next != null) {
            Node newNode = new Node(head.next.data);
            newNode.next = revHead;
            revHead = newNode;
            head = head.next;
        }
        return revHead;
    }
}
```

## Submission at 2024-09-05 12:06:14


```
import java.util.*;

class Main {
    public static void main (String args []) {
        // Write code from scratch
        Scanner input = new Scanner(System.in);
        String word = input.next();
        System.out.println(isPalindrome(word) ? "YES" : "NO");
    }

    public static boolean isPalindrome(String word) {
        int len = word.length();
        int strLen = len - 1;
        if (len % 2 == 0) {
            len /= 2;
        } else {
            len -= 1;
            len /= 2;
        }
        for (int i = 0; i < len; i++) {
            if (word.charAt(i) != word.charAt(strLen - i)) {
                return false;
            }
        }
        return true;
    }
}
```

## Submission at 2024-09-09 09:27:45


```
// Write the code from scratch, no boilerplate is required
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] sLens = input.nextLine().split(" ");
        String[] sArr1 = input.nextLine().split(" ");
        String[] sArr2 = input.nextLine().split(" ");
        int[] lens = new int[sLens.length];
        int[] arr1 = new int[sArr1.length];
        int[] arr2 = new int[sArr2.length];
        for (int i = 0; i < sLens.length; i++) {
            lens[i] = Integer.parseInt(sLens[i]);
        }
        for (int i = 0; i < sArr1.length; i++) {
            arr1[i] = Integer.parseInt(sArr1[i]);
            arr2[i] = Integer.parseInt(sArr2[i]);
        }
        System.out.println(areEqual(arr1, arr2));
    }

    public static boolean areEqual(int[] arr1, int[] arr2) {
        ArrayList<Integer> seenElements = new ArrayList<>();
        for (int i = 0; i < arr1.length; i++) {
            if (!seenElements.contains(arr1[i])) seenElements.add(arr1[i]);
            if (!seenElements.contains(arr2[i])) seenElements.add(arr2[i]);
        }
        return arr1.length == seenElements.size();
    }
}
```

## Submission at 2024-09-09 09:51:51


```
// Write Code from Scratch here
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(isPowerOfThree(num));
    }

    public static boolean isPowerOfThree(int num) {
        if (num == 0) return false;
        if (num == 1) return true;
        if (num % 3 == 0) return isPowerOfThree(num/3);
        return false;
    }
}
```

## Submission at 2024-09-09 09:52:51


```
// Write Code from Scratch here
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(isPowerOfThree(num) ? "True" : "False");
    }

    public static boolean isPowerOfThree(int num) {
        if (num == 0) return false;
        if (num == 1) return true;
        if (num % 3 == 0) return isPowerOfThree(num/3);
        return false;
    }
}
```

## Submission at 2024-09-09 09:52:52


```
// Write Code from Scratch here
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num = input.nextInt();
        System.out.println(isPowerOfThree(num) ? "True" : "False");
    }

    public static boolean isPowerOfThree(int num) {
        if (num == 0) return false;
        if (num == 1) return true;
        if (num % 3 == 0) return isPowerOfThree(num/3);
        return false;
    }
}
```

## Submission at 2024-09-09 10:03:00


```
// Write code from scratch here
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String[] sNums = input.nextLine().split(" ");
        System.out.println(countF(sNums[0], sNums[1].charAt(0), 0, 0));
    }

    public static int countF(String s, char x, int cnt, int index) {
        if (index == s.length()) return cnt;
        if (s.charAt(index) == x) cnt++;
        index++;
        cnt = countF(s, x, cnt, index);
        return cnt;
    }
}
```

## Submission at 2024-09-09 10:10:52


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
    Node removeDuplicate(Node head) {
	    // Your code here
        Node newList = new Node(head.data);
        Node newListHead = newList;
        ArrayList<Integer> seen = new ArrayList<>();
        while (head != null) {
            if (!seen.contains(head.data)) {
                seen.add(head.data);
                newList.next = new Node(head.data);
                newList = newList.next;
            }
            if (head.next == null) break;
            head = head.next;
        }
        return newListHead.next;
    }
}
```

## Submission at 2024-09-09 10:53:04


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}


```

## Submission at 2024-09-09 10:55:18


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}


```

## Submission at 2024-09-09 10:55:20


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}


```

## Submission at 2024-09-09 10:55:47


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}


```

## Submission at 2024-09-09 10:56:19


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}
```

## Submission at 2024-09-09 10:56:39


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}
```

## Submission at 2024-09-09 10:57:15


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
    // Your code here
    ArrayList<Integer> values = new ArrayList<>();
    Node middle = head;
    values.add(head.data);
    boolean justMoved = false;
    while (head.next != null) {
      head = head.next;
      if (!justMoved) {
        middle = middle.next;
        justMoved = true;
      }
      else {
        justMoved = false;
        values.add(middle.data);
      }
    }
    if (!justMoved) {
      middle = middle.next;
    }
    int index = 1, size = values.size();
    while (middle != null) {
      if (middle.data != values.get(size - index)) return false;
      if (middle.next == null) break;
      middle = middle.next;
      index++;
    }
    return true;
  }
}
```

## Submission at 2024-09-09 11:13:21


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        List<List<Integer>> tMatrix = transpose(matrix);
        for (int i = 0; i < tMatrix.size(); i++) {
            int maxElement = getMax(tMatrix.get(i));
            for (int j = 0; j < tMatrix.get(i).size(); j++) {
                if (tMatrix.get(i).get(j) == -1) {
                    tMatrix.get(i).replace(j, maxElement);
                }
            }
        }
        return transpose(tMatrix);
    }

    public static int getMax(List<Integer> arr) {
        int max;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) > max) max = arr.get(i);
        }
        return max;
    }

    public static List<List<Integer>> transpose(List<List<Integer>> matrix) {
        List<List<Integer>> tMatrix = new ArrayList<>();
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.get(i).size(); j++) {
                tMatrix.get(i).add(matrix.get(i).get(j));
            }
        }
        return tMatrix;
    }
}

```

## Submission at 2024-09-09 11:13:22


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        List<List<Integer>> tMatrix = transpose(matrix);
        for (int i = 0; i < tMatrix.size(); i++) {
            int maxElement = getMax(tMatrix.get(i));
            for (int j = 0; j < tMatrix.get(i).size(); j++) {
                if (tMatrix.get(i).get(j) == -1) {
                    tMatrix.get(i).replace(j, maxElement);
                }
            }
        }
        return transpose(tMatrix);
    }

    public static int getMax(List<Integer> arr) {
        int max;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) > max) max = arr.get(i);
        }
        return max;
    }

    public static List<List<Integer>> transpose(List<List<Integer>> matrix) {
        List<List<Integer>> tMatrix = new ArrayList<>();
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.get(i).size(); j++) {
                tMatrix.get(i).add(matrix.get(i).get(j));
            }
        }
        return tMatrix;
    }
}

```

## Submission at 2024-09-09 12:25:33


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        // input:
        //  3 -1  5
        // -1  2  8
        //  1 -1  7
        // transpose:
        //  3 -1  1
        // -1  2 -1
        //  5  8  7
        List<List<Integer>> tMatrix = transpose(matrix);
        for (int i = 0; i < tMatrix.size(); i++) {
            int maxElement = getMax(tMatrix.get(i));
            for (int j = 0; j < tMatrix.get(i).size(); j++) {
                if (tMatrix.get(i).get(j) == -1) {
                    tMatrix.get(i).set(j, maxElement);
                }
            }
        }
        return transpose(tMatrix);
    }

    // public static void printArray(List<List<Integer>> array) {
    //     System.out.println("----------");
    //     for (int i = 0; i < array.size(); i++) {
    //         for (int j = 0; j < array.get(i).size(); j++) {
    //             System.out.print(array.get(i).get(j) + " ");
    //         }
    //         System.out.println("");
    //     }
    //     System.out.println("----------");
    // }

    public static int getMax(List<Integer> arr) {
        int max = arr.get(0);
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) > max) max = arr.get(i);
        }
        return max;
    }

    public static List<List<Integer>> transpose(List<List<Integer>> matrix) {
        List<List<Integer>> tMatrix = new ArrayList<>();
        for (int i = 0; i < matrix.get(0).size(); i++) {
            tMatrix.add(new ArrayList<>());
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.get(i).size(); j++) {
                tMatrix.get(i).add(matrix.get(j).get(i));
            }
        }
        return tMatrix;
    }
}
```

## Submission at 2024-09-09 12:27:11


```
class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        // Code here
        // input:
        //  3 -1  5
        // -1  2  8
        //  1 -1  7
        // transpose:
        //  3 -1  1
        // -1  2 -1
        //  5  8  7
        List<List<Integer>> tMatrix = transpose(matrix);
        for (int i = 0; i < tMatrix.size(); i++) {
            int maxElement = getMax(tMatrix.get(i));
            for (int j = 0; j < tMatrix.get(i).size(); j++) {
                if (tMatrix.get(i).get(j) == -1) {
                    tMatrix.get(i).set(j, maxElement);
                }
            }
        }
        return transpose(tMatrix);
    }

    // public static void printArray(List<List<Integer>> array) {
    //     System.out.println("----------");
    //     for (int i = 0; i < array.size(); i++) {
    //         for (int j = 0; j < array.get(i).size(); j++) {
    //             System.out.print(array.get(i).get(j) + " ");
    //         }
    //         System.out.println("");
    //     }
    //     System.out.println("----------");
    // }

    public static int getMax(List<Integer> arr) {
        int max = arr.get(0);
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) > max) max = arr.get(i);
        }
        return max;
    }

    public static List<List<Integer>> transpose(List<List<Integer>> matrix) {
        List<List<Integer>> tMatrix = new ArrayList<>();
        for (int i = 0; i < matrix.get(0).size(); i++) {
            tMatrix.add(new ArrayList<>());
        }
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.get(i).size(); j++) {
                tMatrix.get(j).add(matrix.get(i).get(j));
            }
        }
        return tMatrix;
    }
}
```

## Submission at 2024-09-09 12:32:29


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
        // Your code here
        ArrayList<Integer> list = new ArrayList<>();
        while (head != null) {
          list.add(head.data);
          if (head.next == null) break;
          head = head.next;
        }
        int len = list.size();
        for (int i = 0; i < len - (len % 2); i++) {
          if (list.get(i) != list.get(len - i - 1)) return false;
        }
        return true;
    }
}

```

## Submission at 2024-09-10 13:24:42


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        input.nextLine();
        String[] sNums = input.nextLine().split(" ");
        ArrayList<Integer> nums = new ArrayList<Integer>();
        for (int i = 0; i < sNums.length; i++) {
            nums.add(Integer.parseInt(sNums[i]));
        }
        System.out.println(getSum(nums));
    }

    public static int getSum(ArrayList<Integer> array) {
        if (array.size() == 1) return array.get(0);
        ArrayList<Integer> sumArray = new ArrayList<>();
        for (int i = 1; i < array.size(); i++) {
            sumArray.add(array.get(i-1) + array.get(i));
        }
        return getSum(sumArray);
    }
}
```

## Submission at 2024-09-10 13:31:49


```
// Write code from scratch here
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int rows = input.nextInt();
        int cols = input.nextInt();
        input.nextLine();
        ArrayList<ArrayList<Integer>> matrix = new ArrayList<>();
        for (int i = 0; i < rows; i++) {
            matrix.add(new ArrayList<>());
            for (int j = 0; j < cols; j++) {
                matrix.get(i).add(Integer.parseInt(input.next()))
            }
        }
        int len = rows * cols;
        int cnt = 0;
        while (cnt != len) {
            cnt = len;
        }
    }
}
```

## Submission at 2024-09-16 04:54:40


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        int k = input.nextInt();
        input.nextLine();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < len; i++) arr.add(input.nextInt());
        getKthNum(arr, k);
    }

    public static void getKthNum(ArrayList<Integer> arr, int k) {
        int i = 1;
        int ind = 0;
        int found = 0;
        int len = arr.size();
        while (found != k && ind < len) {
            if (arr.get(ind) == i) {
                ind++;
            } else {
                found++;
            }
            i++;
        }
        System.out.println(i-1);
    }
}
```

## Submission at 2024-09-16 04:55:02


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        int k = input.nextInt();
        input.nextLine();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < len; i++) arr.add(input.nextInt());
        getKthNum(arr, k);
    }

    public static void getKthNum(ArrayList<Integer> arr, int k) {
        int i = 1;
        int ind = 0;
        int found = 0;
        int len = arr.size();
        while (found != k && ind < len) {
            if (arr.get(ind) == i) {
                ind++;
            } else {
                found++;
            }
            i++;
        }
        System.out.println(i-1);
    }
}
```

## Submission at 2024-09-16 04:57:27


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        int k = input.nextInt();
        input.nextLine();
        ArrayList<Integer> arr = new ArrayList<>();
        for (int i = 0; i < len; i++) arr.add(input.nextInt());
        getKthNum(arr, k);
    }

    public static void getKthNum(ArrayList<Integer> arr, int k) {
        int i = 1;
        int ind = 0;
        int found = 0;
        int len = arr.size();
        while (found != k && ind < len) {
            if (arr.get(ind) == i) {
                ind++;
            } else {
                found++;
            }
            i++;
        }
        if (found != k) {
            while (found != k) {
                i++;
                found++;
            }
        }
        System.out.println(i-1);
    }
}
```

## Submission at 2024-09-16 05:03:20


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        getSumMultiples(n);
    }

    public static void getSumMultiples(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) sum += i;
        }
        System.out.println(sum);
    }
}
```

## Submission at 2024-09-16 05:30:50


```
// Write Code from Scratch
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        int n = input.nextInt();
        ArrayList<ArrayList<Integer>> matrix = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            matrix.add(new ArrayList<>());
            for (int j = 0; j < n; j++) {
                matrix.get(i).add(input.nextInt());
            }
            if (i < m - 1) input.nextLine();
        }
        printMatrix(transpose(matrix));
    }

    public static ArrayList<ArrayList<Integer>> transpose(ArrayList<ArrayList<Integer>> matrix) {
        int rows = matrix.size();
        int cols = matrix.get(0).size();
        ArrayList<ArrayList<Integer>> tMatrix = new ArrayList<>();
        for (int i = 0; i < cols; i++) tMatrix.add(new ArrayList<Integer>());
        for (int i = 0; i < rows; i++) for (int j = 0; j < cols; j++) tMatrix.get(j).add(matrix.get(i).get(j));
        return tMatrix;
    }

    public static void printMatrix(ArrayList<ArrayList<Integer>> matrix) {
        int r = matrix.size(), c = matrix.get(0).size();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) System.out.print(matrix.get(i).get(j) + " ");
            System.out.println("");
        }
    }
}
```

## Submission at 2024-09-16 06:26:06


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m = input.nextInt(), n = input.nextInt();
        input.nextLine();
        ArrayList<ArrayList<Integer>> matrix = new ArrayList<>();
        for (int i = 0; i < m; i++) {
            matrix.add(new ArrayList<Integer>());
            for (int j = 0; j < n; j++) matrix.get(i).add(input.nextInt());
            if (i != m - 1) input.nextLine();
        }
        printSpiral(matrix, 0, 0, m, n, 0);
    }

    public static void printSpiral(ArrayList<ArrayList<Integer>> matrix, int rStart, int cStart, int rEnd, int cEnd, int len) {
        if (rStart > rEnd || cStart > cEnd || len >= matrix.size() * matrix.get(0).size()) return;
        int r = rStart, c = cStart;
        int length = len;
        for (int i = c; i < cEnd; i++) {
            System.out.print(matrix.get(r).get(i) + " ");
            c = i;
            length++;
        }
        for (int i = r + 1; i < rEnd; i++) {
            System.out.print(matrix.get(i).get(c) + " ");
            r = i;
            length++;
        }
        if (length >= matrix.size() * matrix.get(0).size()) return;
        for (int i = c - 1; i >= cStart; i--) {
            System.out.print(matrix.get(r).get(i) + " ");
            c = i;
            length++;
        }
        for (int i = r - 1; i > rStart; i--) {
            System.out.print(matrix.get(i).get(c) + " ");
            r = i;
            length++;
        }
        printSpiral(matrix, rStart + 1, cStart + 1, rEnd - 1, cEnd - 1, length);
    }
}
```

## Submission at 2024-09-16 07:19:07


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
        if (n == 1 || n == 0) return true;
        if (n % 2 == 0) return isPowerOfTwo(n/2);
        return false;
    }
}

```

## Submission at 2024-09-16 07:20:47


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
        if (n <= -1) return false;
        if (n == 0 || n == 1) return true;
        if (n % 2 == 0) return isPowerOfTwo(n/2);
        return false;
    }
}

```

## Submission at 2024-09-16 07:21:07


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
        if (n <= -1) return false;
        if (n == 0 || n == 1) return true;
        if (n % 2 == 0) return isPowerOfTwo(n/2);
        return false;
    }
}

```

## Submission at 2024-09-16 07:21:44


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
        if (n <= 0) return false;
        if (n == 1) return true;
        if (n % 2 == 0) return isPowerOfTwo(n/2);
        return false;
    }
}

```

## Submission at 2024-10-07 10:29:34


```
// Write your code from scratch here
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] problem = input.next().toCharArray();
        int[] nums = new int[(problem.length + 1)/2];
        int ind = 0;
        for (char c : problem) {
            if (c != '+') {
                nums[ind] = Integer.parseInt(c + "");
                ind++;
            }
        }
        Arrays.sort(nums);
        String newProblem = "";
        for (int i = 0; i < nums.length; i++) {
            newProblem += nums[i] + "";
            if (i < nums.length - 1) newProblem += "+";
        }
        System.out.println(newProblem);
    }
}
```

## Submission at 2024-10-07 11:12:02


```
// Write Java Code from scratch
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        inp.nextLine();
        int[] allWealths = new int[n];
        int ind = 0;
        while (inp.hasNext()) {
            allWealths[ind] = Integer.parseInt(inp.next());
            ind++;
        }
        int max = getMax(allWealths);
        boolean gotMax = false;
        int[] wealths = new int[n - 1];
        for (int i = 0; i < n; i++) {
            if (allWealths[i] != max | gotMax) {
                wealths[i] = allWealths[i];
            } else {
                gotMax = true;
            }
        }
        int x = 0;
        boolean flag = true;

        while (flag) {
            int avg = (getSum(wealths) + max + x)/n;
            if (isRobinHoodAllowed(wealths, avg/2)) flag = false;
            x++;
        }
        System.out.println(x);
    }

    public static int getMax(int[] arr) {
        int max = arr[0];
        for (int i : arr) if (i > max) max = i;
        return max;
    }

    public static int getSum(int[] arr) {
        int sum = 0;
        for (int i : arr) sum += i;
        return sum;
    }

    public static boolean isRobinHoodAllowed(int[] arr, int avg) {
        int unhappy = 0;
        int len = arr.length % 2 == 0 ? arr.length/2 : (arr.length + 1)/2;
        for (int i : arr) if (i < avg) unhappy++;
        return unhappy > len;
    }
}
```

## Submission at 2024-10-28 10:06:23


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
    static int min = 0;
    public static int findMin(Node root){
        //code here
        min = root.data;
        inorderTraversal(root);
        return min;
    }

    public static void inorderTraversal(Node root) {
        if (root == null) return;

        inorderTraversal(root.left);
        if (root.data < min) min = root.data;
        inorderTraversal(root.right);
    }
}
```

## Submission at 2024-10-28 10:26:30


```
import java.util.ArrayList;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        int k = inp.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = inp.nextInt();
        }
        System.out.println(getMinFreq(n, k, arr));
    }

    public static int getMinFreq(int n, int k, int[] arr) {
        ArrayList<Integer> seen = new ArrayList<>();
        ArrayList<Integer> cnts = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            if (!in(seen, arr[i])) {
                cnts.add(1);
                seen.add(arr[i]);
            } else {
                int reqIndex = getIndex(seen, arr[i]);
                cnts.set(reqIndex, cnts.get(reqIndex) + 1);
            }
        }
        int maxCnt = max(cnts);
        return seen.get(getIndex(cnts, maxCnt));
    }

    public static boolean in(ArrayList<Integer> arr, int ele) {
        for (int i = 0; i < arr.size(); i++) if (arr.get(i) == ele) return true;
        return false;
    }

    public static int getIndex(ArrayList<Integer> arr, int ele) {
        for (int i = 0; i < arr.size(); i++) if (arr.get(i) == ele) return i;
        return -1;
    }

    public static int max(ArrayList<Integer> arr) {
        int max = arr.get(0);
        for (int i = 0; i < arr.size(); i++) {
            if (max < arr.get(i)) max = arr.get(i);
        }
        return max;
    }
}
```

## Submission at 2024-10-28 10:42:11


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
        // Write your logic here
        ArrayList<Integer> a1 = convertToArray(head1);
        ArrayList<Integer> a2 = convertToArray(head2);
        ArrayList<Integer> uniques = getUnique(a1, a2);
        return convertToLinkedList(uniques);
    }

    public ArrayList<Integer> convertToArray(Node head) {
      ArrayList<Integer> arr = new ArrayList<>();
      while (head.next != null) {
        arr.add(head.data);
        head = head.next;
      }
      arr.add(head.data);
      return arr;
    }

    public ArrayList<Integer> getUnique(ArrayList<Integer> arr1, ArrayList<Integer> arr2) {
      ArrayList<Integer> uniques = new ArrayList<Integer>();
      
      for (int i = 0; i < arr1.size(); i++) {
        for (int j = 0; j < arr2.size(); j++) {
          if (arr1.get(i) == arr2.get(j)) {
            uniques.add(arr1.get(i));
            arr2.remove(j);
            break;
          }
        }
      }

      return uniques;
    }

    public Node convertToLinkedList(ArrayList<Integer> arr) {
      Node head = new Node(arr.get(0));
      Node temp = head;
      for (int i = 1; i < arr.size(); i++) {
        temp.next = new Node(arr.get(i));
        temp = temp.next;
      }
      return head;
    }
}
```

## Submission at 2024-10-28 10:59:08


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
       // Your code goes here
       ArrayList<Integer> sums = new ArrayList<>();
       getSums(root, "", sums);
       return sum(sums);
    }

    public void getSums(Node root, String curString, ArrayList<Integer> sums) {
      if (root == null) return;
      
      if (root.left == null && root.right == null) {
        sums.add(Integer.parseInt(curString + root.data));
        return;
      }

      getSums(root.left, curString + root.data, sums);
      getSums(root.right, curString + root.data, sums);
    }

    public int sum(ArrayList<Integer> arr) {
      int sum = 0;
      for (int i = 0; i < arr.size(); i++) {
        sum += arr.get(i);
      }
      return sum;
    }
}
```

## Submission at 2024-10-28 11:00:07


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
       // Your code goes here
       ArrayList<Integer> sums = new ArrayList<>();
       getSums(root, "", sums);
       return sum(sums);
    }

    public void getSums(Node root, String curString, ArrayList<Integer> sums) {
      if (root == null) return;
      
      if (root.left == null && root.right == null) {
        sums.add(Integer.parseInt(curString + root.data));
        return;
      }

      getSums(root.left, curString + root.data, sums);
      getSums(root.right, curString + root.data, sums);
    }

    public int sum(ArrayList<Integer> arr) {
      int sum = 0;
      for (int i = 0; i < arr.size(); i++) {
        sum += arr.get(i);
      }
      return sum;
    }
}
```

## Submission at 2024-10-28 11:00:37


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
       // Your code goes here
       ArrayList<Integer> sums = new ArrayList<>();
       getSums(root, "", sums);
       return sum(sums);
    }

    public void getSums(Node root, String curString, ArrayList<Integer> sums) {
      if (root == null) return;
      
      if (root.left == null && root.right == null) {
        sums.add(Integer.parseInt(curString + root.data));
        return;
      }

      getSums(root.left, curString + root.data, sums);
      getSums(root.right, curString + root.data, sums);
    }

    public int sum(ArrayList<Integer> arr) {
      int sum = 0;
      for (int i = 0; i < arr.size(); i++) {
        sum += arr.get(i);
      }
      return sum;
    }
}
```

## Submission at 2024-10-28 11:23:14


```
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        char[] order = inp.next().toCharArray();
        char[] s = inp.next().toCharArray();
        String sortedString = customSortString(order, s);
        System.out.println(sortedString);
    }

    public static String customSortString(char[] order, char[] s) {
        for (int k = 0; k < s.length; k++) {
            char c = s[k];
            if (in(order, c)) {
                for (int i = 0; i < order.length - getIndex(order, c); i++) {
                    boolean stop = false;
                    for (int j = k; j < s.length; j++) {
                        if (s[j] == order[i]) {
                            swap(s, k, j);
                            stop = true;
                            break;
                        }
                    }
                    if (stop) break;
                }
            }
        }
        String st = "";
        for (char c : s) st += c + "";
        return st;
    }

    public static boolean in(char[] chArr, char c) {
        for (char ch : chArr) if (ch == c) return true;
        return false;
    }
    
    public static int getIndex(char[] chArr, char c) {
        for (int i = 0; i < chArr.length; i++) if (chArr[i] == c) return i;
        return -1;
    }

    public static void swap(char[] chArr, int a, int b) {
        char temp = chArr[a];
        chArr[a] = chArr[b];
        chArr[b] = temp;
    }
}
```

## Submission at 2024-11-25 09:50:27


```
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        int n = inp.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i + 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
```

## Submission at 2024-11-25 10:02:31


```
// write code from scratch
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        int n = inp.nextInt();
        inp.nextLine();

        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = inp.nextInt();
        }
        
        int diff = arr[1] - arr[0];

        System.out.print(checkForAP(arr, diff));
    }

    public static boolean checkForAP(int[] arr, int diff) {
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] - arr[i - 1] != diff) return false;
        }

        return true;
    }
}
```

## Submission at 2024-11-25 10:28:16


```
/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Solution {
  Node intersectPoint(Node head1, Node head2) {
      // code here
      ArrayList<Node> seen = new ArrayList<>();
      while (head1 != null) {
        seen.add(head1);
        head1 = head1.next;
      }
      while (head2 != null) {
        if (contains(seen, head2)) return head2;
        head2 = head2.next;
      }

      return new Node(-1);
  }

  public static boolean contains(ArrayList<Node> head, Node node) {
    for (int i = 0; i < head.size(); i++) {
      if (node == head.get(i)) return true;
    }

    return false;
  }
}
```

## Submission at 2024-11-25 11:08:28


```
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);

        int n = inp.nextInt();

        int target = inp.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = inp.nextInt();
        }

        arr = sort(arr);

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) System.out.print(i + " ");
        }
    }

    public static int[] sort(int[] array) {
        int[] arr = array;
        int[] sorted = new int[arr.length];
        int max = getMax(arr);

        for (int i = 0; i < arr.length; i++) {
            int min = getMin(arr);
            sorted[i] = arr[min];
            arr[min] = arr[max] + 1;
        }

        return sorted;
    }

    public static int getMax(int[] arr) {
        int max = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > arr[max]) max = i;
        }

        return max;
    }

    public static int getMin(int[] arr) {
        int min = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < arr[min]) min = i;
        }

        return min;
    }
}
```

## Submission at 2024-11-25 11:27:22


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
    
    Integer findMaxForN(Node root, int n)
    {
       // Your code goes here
       Node diffNode = root;
       getMaxNum(root, n, diffNode);
       return diffNode.data;
    }

    public static void getMaxNum(Node root, int n, Node diffNode) {
        if (root == null) return;
        
        if (Math.abs(n - root.data) < Math.abs(n - diffNode.data)) {
            diffNode = root;
        }

        getMaxNum(root.left, n, diffNode);
        getMaxNum(root.right, n, diffNode);
    }
}
```

## Submission at 2024-11-25 11:34:08


```
// write code from scratch
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        String s = inp.nextLine();

        int[] cnts = new int[2];

        for (char ch: s.toCharArray()) {
            if (ch == 'a') cnts[0]++;
            else if (ch == 'b') cnts[1]++;
        }

        if (cnts[0] > cnts[1]) System.out.println("a");
        else System.out.println("b");
    }
}
```

