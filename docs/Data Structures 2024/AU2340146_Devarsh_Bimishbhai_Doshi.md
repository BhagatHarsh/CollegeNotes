## Submission at 2024-08-05 10:15:00


```
// Write your Java code here from the scratch
import java.util.scanner;
public class Q1{
    public static void main(String[],args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Name:");
        String nme=input.nextLine();
        System.out.println("Hello"+nme)
    }
}
```

## Submission at 2024-08-05 10:15:02


```
// Write your Java code here from the scratch
import java.util.scanner;
public class Q1{
    public static void main(String[],args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your Name:");
        String nme=input.nextLine();
        System.out.println("Hello"+nme)
    }
}
```

## Submission at 2024-08-05 10:21:28


```
// Write your Java code here from the scratch
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        // System.out.println("Enter your Name:");
        String nme=input.nextLine();
        System.out.println("Hello"+nme+"!");
    }
}
```

## Submission at 2024-08-05 10:21:56


```
// Write your Java code here from the scratch
import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        // System.out.println("Enter your Name:");
        String nme=input.nextLine();
        System.out.println("Hello "+nme+"!");
    }
}
```

## Submission at 2024-08-05 10:28:52


```
// Write your Java code here from the scratch
import java.util.*
public class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        String nme = input.nextLine();
        System.out.println("Hello "+nme +"!");
    }
}
```

## Submission at 2024-08-05 10:29:41


```
// Write your Java code here from the scratch
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input= new Scanner(System.in);
        String nme = input.nextLine();
        System.out.println("Hello "+nme +"!");
    }
}
```

## Submission at 2024-08-05 10:32:54


```
// Write your Java code here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=0;i<n;i++){
            String nme= input.nextLine();
            System.out.println("Hello "+nme+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:33:30


```
// Write your Java code here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for(int i=0;i<n;i++){
            String nme= input.nextLine();
            System.out.println("Hello "+nme+"!");
        }
    }
}
```

## Submission at 2024-08-05 10:36:58


```
// Write your Java code here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i=0;i<n;i++){
            String nme=input.nextLine();
            System.out.println("Hello "+nme+"!");
        }
    }
}

```

## Submission at 2024-08-05 10:39:23


```
// Write your Java code here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i=0;i<n;i++){
            String nme = input.next();
            System.out.println("Hello "+nme+"!");
        }
    }
}

```

## Submission at 2024-08-05 10:40:18


```
// Write your Java code here
import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i=0;i<n;i++){
            String nme = input.next();
            System.out.println("Hello "+nme+"!");
        }
    }
}

```

## Submission at 2024-08-12 09:50:14


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
        System.out.println(fibonacci(x));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        if(x>0){
        if(x==1){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        else{
            return fibonacci(x-1)+fibonacci(x-2);
        }
    }
    
    }
    
}

```

## Submission at 2024-08-12 09:52:17


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
        System.out.println(fibonacci(x));
    }

    // Method to calculate the x-th Fibonacci number
    private static int fibonacci(int x) {
        
        if(x==1){
            return 1;
        }
        else if(x==0){
            return 0;
        }
        else{
            return fibonacci(x-1)+fibonacci(x-2);
        }
    }
    
    }
    


```

## Submission at 2024-08-12 10:08:08


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
        if(n==2){
            return true;
        }
        else if(n%2!=0){
            return false;
        }
        else{
      return isPowerOfTwo(n/2);
      
       }
        

    }
}

```

## Submission at 2024-08-12 10:13:20


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        double n = Double.parseDouble(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(double n) {
        if(n==1){
            return true;
        }
        else if(Math.round(n)==n){
            return false;
        }
        else{
      return isPowerOfTwo(n/2);
      
       }
        

    }
}

```

## Submission at 2024-08-12 10:20:41


```
import java.io.*;

class Main {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the input
        double n = Double.parseDouble(br.readLine().trim());

        // Determine if n is a power of two
        System.out.println(isPowerOfTwo(n));
    }

    // Method to check if n is a power of two
    private static boolean isPowerOfTwo(double n) {
        if (n==0){
            return false;
        }
       else if(n==1){
            return true;
        }
        else if(Math.round(n)!=n){
            return false;
        }
        else{
      return isPowerOfTwo(n/2);
      
       }
        

    }
}

```

## Submission at 2024-08-13 04:36:15


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
       List<List<Integer>> churn=new ArrayList<>();
        List<Integer> list1 = new ArrayList<>();
            for (int numd : nums) {
    list1.add(numd);
}
          
             churn.add(list1);
        int flag=0;
        for(int i=0;i<nums.length;i++){
            
            if(nums[i]!=0){
                flag++;
            }
            
        }

        if (flag==0){
            List<List<Integer>> subset=new ArrayList<>() ;
            subset.add(new ArrayList<>());
            return subset;
        }
        else{
            for (int j=0;j<nums.length;j++){
                int gum=nums[j];
            int[] num=new int[nums.length-1];
            int k=-1;
            for (int i=0;i<nums.length;i++){
                
                if(nums[i]!=gum){
                num[++k]=nums[i];
                    
                
            }}
                
                
               
                
            List<Integer> list = new ArrayList<>();
            for (int numd : num) {
    list.add(numd);
}
          
             churn.add(list);
             
             churn.addAll(subsets(num));
             Set<List<Integer>> set=new HashSet<>(churn);
             churn=new ArrayList<>(set);
            //return churn;
           

        }}
       return churn;  
    }}
```

## Submission at 2024-08-16 02:36:13


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
        List<List<Integer>> cost=new ArrayList<>();
        
        
        int[] num=new int[n];
        for (int i = 1; i <= n; i++) {
            num[i-1]=i;
            
        

    }
        cost=backtrack(num,n,k);
        
            
        Collections.reverse(cost);
        return cost;
        
    }

    private static List<List<Integer>> backtrack(int[] nmes,int n, int k)  {
        // use it if you want
        List<List<Integer>> churn=new ArrayList<>();
        int[] num=new int[n];
        for (int i = 1; i <= n; i++) {
            num[i-1]=i;}
        if(nmes.length!=k){
//            int jk=0;
//            for (int i = 0; i < num.length; i++) {
//                if(i<nmes.length){
//               if(nmes[i]!=num[i]){
//                   jk=i;
//                   break;
//               }}
//                else{
//                    jk=i;
//                }
//                
//               
//                
//            }
//           
           for (int i = 0; i < nmes.length; i++) {
               
            int j = nmes[i];
            
                int[] nme=new int[nmes.length-1];
                int z=-1;
                for (int o = 0; o < nmes.length; o++) {
                   if (nmes[o]!=j){
                       nme[++z]=nmes[o];
                      
                        
                   }
                    
                    
                
                
                
            }
                churn.addAll(backtrack(nme,n,k));
                Set<List<Integer>> set=new LinkedHashSet<>(churn);
            churn=new ArrayList<>(set);
            
        }
        }
        else{
            List<Integer> list = new ArrayList<>();
            for (int numd : nmes) {
                
    list.add(numd);
}
           
            
          
             churn.add(list);
             return churn;
        }
        
        return churn;
    }
}
```

## Submission at 2024-08-21 03:39:04


```
import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       String arr= input.nextLine();
       arr=arr.replaceAll(" ","");
      
       int[] arri=new int[arr.length()];
        for (int i = 0; i < arri.length; i++) {
            arri[i]=Character.getNumericValue(arr.charAt(i));
           
            
        }
        List<List<Integer>> result =Assignment2(arri);
        
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
    public static List<List<Integer>>Assignment2(int[] num){
     int n=0;   
    List<List<Integer>> churn=new ArrayList<>();
    
        
        
        
        
  int[] newNum = new int[1];
        for (int i = 0; i < num.length; i++) {
            newNum[0]=num[i];
            int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
             
             List<List<Integer>> add=new ArrayList<>();
             add.addAll(backtrack(nums,1,num[i]));
            for (int j = 0; j < add.size(); j++) {
                List<Integer> newNums=new ArrayList<>();
                for (int numd : newNum) {
                
    newNums.add(numd);
}
                
                for (int numd : add.get(j)) {
                    
                
    newNums.add(numd);
}
 churn.add(newNums);               
            }
            n++;
            
        
        
         
                  
                       
        
          
  
        }
        return churn;
    }
  public static List<List<Integer>> backtrack(int[] num, int n, int m){
      int[] newNum=new int[1];
      List<List<Integer>> add=new ArrayList<>();
      List<List<Integer>> newNums = new ArrayList<>();
      if(num.length==1){
          
          List<List<Integer>> names=new ArrayList<>();
          List<Integer> single=new ArrayList<>();
          single.add(num[0]);
         
          names.add(single);
          return names;
      }
      for (int i = 0; i < num.length; i++) {
          
          newNum[0]=num[i];
          
          int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
            
           
             add.addAll(backtrack(nums,1,num[i]));
             
            for (int j = 0; j < add.size(); j++) {
                
                List<Integer> newNumes=new ArrayList<>();
                for (int numd : newNum) {
                
    newNumes.add(numd);
}
                int flag=0;
                for (int numd : add.get(j)) {
                   
                    for (int l = 0; l < newNumes.size(); l++) {
                        if(numd==newNumes.get(l)){
                            flag+=1;
                            break;
                        }
                        
                    }
                         
                if(flag==0){
    newNumes.add(numd);}
}
                
                    
                if(flag==0){
                newNums.add(newNumes);}
            }
          
          
      }
  
       
return newNums;
  }
}
```

## Submission at 2024-08-21 03:58:11


```
import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
       String arr= input.nextLine();
       arr=arr.replaceAll(" ","");
      
       int[] arri=new int[arr.length()];
        for (int i = 0; i < arri.length; i++) {
            arri[i]=Character.getNumericValue(arr.charAt(i));
           
            
        }
        List<List<Integer>> result =Assignment2(arri);
        
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
    public static List<List<Integer>>Assignment2(int[] num){
     int n=0;   
    List<List<Integer>> churn=new ArrayList<>();
    
        
        
        
    if(num.length==1){
       List<Integer> one=new ArrayList<>();
       one.add(num[0]);
       churn.add(one);
       return churn;
   }     else{     
  int[] newNum = new int[1];

        for (int i = 0; i < num.length; i++) {
            newNum[0]=num[i];
            int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
             
             List<List<Integer>> add=new ArrayList<>();
             add.addAll(backtrack(nums,1,num[i]));
            for (int j = 0; j < add.size(); j++) {
                List<Integer> newNums=new ArrayList<>();
                for (int numd : newNum) {
                
    newNums.add(numd);
}
                
                for (int numd : add.get(j)) {
                    
                
    newNums.add(numd);
}
 churn.add(newNums);               
            }
            n++;
            
        
        
         
                  
                       
        
          
  
        }
        return churn;}
    }
  public static List<List<Integer>> backtrack(int[] num, int n, int m){
      int[] newNum=new int[1];
      List<List<Integer>> add=new ArrayList<>();
      List<List<Integer>> newNums = new ArrayList<>();
      if(num.length==1){
          
          List<List<Integer>> names=new ArrayList<>();
          List<Integer> single=new ArrayList<>();
          single.add(num[0]);
         
          names.add(single);
          return names;
      }
      for (int i = 0; i < num.length; i++) {
          
          newNum[0]=num[i];
          
          int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
            
           
             add.addAll(backtrack(nums,1,num[i]));
             
            for (int j = 0; j < add.size(); j++) {
                
                List<Integer> newNumes=new ArrayList<>();
                for (int numd : newNum) {
                
    newNumes.add(numd);
}
                int flag=0;
                for (int numd : add.get(j)) {
                   
                    for (int l = 0; l < newNumes.size(); l++) {
                        if(numd==newNumes.get(l)){
                            flag+=1;
                            break;
                        }
                        
                    }
                         
                if(flag==0){
    newNumes.add(numd);}
}
                
                    
                if(flag==0){
                newNums.add(newNumes);}
            }
          
          
      }
  
       
return newNums;
  }
}
```

## Submission at 2024-08-21 05:23:48


```
import java.util.*;
import java.io.*;
public class Main {
    public static void main(String[] args) {
       Scanner input = new Scanner(System.in);
        String[] arr = input.nextLine().trim().split("\\s+"); // Split by space and trim any leading or trailing whitespace

        int[] arri = new int[arr.length];
        for (int i = 0; i < arri.length; i++) {
            arri[i] = Integer.parseInt(arr[i]); // Parse each element as an integer
        }
        List<List<Integer>> result =Assignment2(arri);
        
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
    public static List<List<Integer>>Assignment2(int[] num){
     int n=0;   
    List<List<Integer>> churn=new ArrayList<>();
    
        
        
        
   if(num.length==1){
       List<Integer> one=new ArrayList<>();
       one.add(num[0]);
       churn.add(one);
       return churn;
   }     else{
       
   
  int[] newNum = new int[1];
        for (int i = 0; i < num.length; i++) {
            newNum[0]=num[i];
            int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
             
             List<List<Integer>> add=new ArrayList<>();
             add.addAll(backtrack(nums,1,num[i]));
            for (int j = 0; j < add.size(); j++) {
                List<Integer> newNums=new ArrayList<>();
                for (int numd : newNum) {
                
    newNums.add(numd);
}
                
                for (int numd : add.get(j)) {
                    
                
    newNums.add(numd);
}
 churn.add(newNums);               
            }
            n++;
            
        
        
         
                  
                       
        
          
  
        }
        return churn;}
    }
  public static List<List<Integer>> backtrack(int[] num, int n, int m){
      int[] newNum=new int[1];
      
      
      List<List<Integer>> add=new ArrayList<>();
      List<List<Integer>> newNums = new ArrayList<>();
      if(num.length==1){
          
          List<List<Integer>> names=new ArrayList<>();
          List<Integer> single=new ArrayList<>();
          single.add(num[0]);
         
          names.add(single);
          return names;
      }
      for (int i = 0; i < num.length; i++) {
          
          newNum[0]=num[i];
         
          int[] nums=new int[num.length-1];
            int k=-1;
            for (int j = 0; j < num.length; j++) {
                if(num[i]!=num[j]){
                    nums[++k]=num[j];
                }
                
            }
            
           
             add.addAll(backtrack(nums,1,num[i]));
             
            for (int j = 0; j < add.size(); j++) {
                
                List<Integer> newNumes=new ArrayList<>();
                for (int numd : newNum) {
                
    newNumes.add(numd);
}
                int flag=0;
                for (int numd : add.get(j)) {
                    
                   
                    for (int l = 0; l < newNumes.size(); l++) {
                        if(numd==newNumes.get(l)){
                            flag+=1;
                            break;
                        }
                        
                    }
                         
                if(flag==0){
    newNumes.add(numd);}
}
                
                    
                if(flag==0){
                newNums.add(newNumes);}
            }
          
          
      }
  
       
return newNums;
  }
}
```

## Submission at 2024-08-21 11:48:12


```
import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        
        List<String> bracket=meths(n);
        for (int i = 0; i < bracket.size(); i++) {
            System.out.println(bracket.get(i));
            
        }
        
        
    }
    public static List<String> meths(int n){
        String br="";
        List<String> arg=new ArrayList<>();
        parenthesis(n,br,arg,0,0);
        return arg;
    }
   public static void parenthesis(int n, String br, List<String> arg,int a, int b){
       if(br.length()==2*n){
           arg.add(br);
           return;
       }
       else{
           if(a<n){
               parenthesis(n,br+"(",arg,a+1,b);
           }
           if(b<a){
               parenthesis(n,br+")",arg,a,b+1);
           }
       }
       
   }
    
}

```

## Submission at 2024-08-21 11:52:18


```
import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        
        List<String> bracket=meths(n);
        System.out.print("[");
        for (int i = 0; i < bracket.size(); i++) {
            System.out.print('\"'+bracket.get(i)+'\"');
            if (i != bracket.size() - 1) {
                System.out.print(",");
            }
            
        }
        System.out.print("]");
        
        
    }
    public static List<String> meths(int n){
        String br="";
        List<String> arg=new ArrayList<>();
        parenthesis(n,br,arg,0,0);
        return arg;
    }
   public static void parenthesis(int n, String br, List<String> arg,int a, int b){
       if(br.length()==2*n){
           arg.add(br);
           return;
       }
       else{
           if(a<n){
               parenthesis(n,br+"(",arg,a+1,b);
           }
           if(b<a){
               parenthesis(n,br+")",arg,a,b+1);
           }
       }
       
   }
    
}

```

## Submission at 2024-08-22 13:08:50


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
    }

    private void backtrack(int start, List<Integer> comb, List<List<Integer>> res, int n, int k)  {
        // use it if you want
    }
}

```

## Submission at 2024-09-02 10:52:34


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
        int a=1;
        Node temp=head;
        if(x==1){
                if(a==1){
                head=temp.next;}
            }
            else{
        while(temp.next!=null){
            

           if(a==x-1){
                temp.next=temp.next.next;
                
            }
            else{
                temp=temp.next;
                
            }
            a++;
         
    }}
    return head;
   
    	
    }
}
```

## Submission at 2024-09-02 11:00:10


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
        while(head.next!=null){
            result.add(head.data);
            head=head.next;
        }
        result.add(head.data);
        return result;
    }
}

```

## Submission at 2024-09-02 11:07:24


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
        int g=-1;
    int a=1;
    while(head.next!=null){
        if(a==k){
            g=head.data;
            head=head.next;
        }
        else{
            head=head.next;
        }
        a++;

    }
    return g;
    }
}
```

## Submission at 2024-09-02 11:19:34


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
        int g=-1;
    int a=1;
    
    while(head.next!=null){
        if(a==k){
            g=head.data;
            head=head.next;
        }
        else{
            head=head.next;
        }
        a++;

    }
    
    if(a==k){
        g=head.data;
    }
    return g;
    }
}
```

## Submission at 2024-09-04 10:08:28


```
import java.util.*;
public class Main{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int n =input.nextInt();
		input.nextLine();
		String a=input.nextLine();
		String b=input.nextLine();
		String[] intStra=a.split(" ");
		String[] intStrb=b.split(" ");
		for(int i=0; i<n; i++){

			if(Integer.parseInt(intStra[i])>=Integer.parseInt(intStrb[i])){
				System.out.print(intStra[i]+" ");
			}
			else{
				System.out.print(intStrb[i]+" ");
			}
		}
	}
}

```

## Submission at 2024-09-05 05:21:28


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
        Node temp=null;
		List<Integer>  nums= new ArrayList<>();
		while(head.next != null){
			nums.add(head.data);
			head=head.next;
		}
		nums.add(head.data);
		temp = new Node(nums.get(nums.size()-1));
		Node current=temp;
		for(int i=nums.size()-2; i>=0;i--){



			Node newNode=new Node(nums.get(i));
			current.next=newNode;
			current=current.next;

		}
		current=temp;



		return current;
    }
}
```

## Submission at 2024-09-09 03:39:19


```


class Solution {
    public static List<Integer> diagonalTraversal(int[][] matrix) {
        List<Integer> list = new ArrayList<>();
		int a = 0;
		int b = 0;
		int aba=0;
		int brow=0;
		while (a != matrix.length-1 || b != matrix[a].length-1) {
			int temp=a;


			for (int i = b; b <= brow; b++) {

				if (a==0) {
					list.add(matrix[a][b]);
					break;
				}

					list.add(matrix[a][b]);


					a--;

			}

			if(b<matrix[0].length-1 && temp<matrix.length-1 ) {
				a=temp+1;
				brow++;
				b=0;
			}
			else if(b<matrix[0].length-1 && temp==matrix.length-1 ){
				a=temp;
				brow++;
				aba++;
				b=aba;
			}
			else if(b>=matrix[0].length-1 && temp<matrix.length-1){
				b=0;
				a=temp+1;
			}
			else{
				aba++;

					if(b>=matrix[0].length-1 && a>=matrix.length-1 ) {

						a=temp;
						continue;
					}
					else{
						a=temp;
						b=aba;
					}
			}

					}
		list.add(matrix[a][b]);

		return list;
	}
        
    }


```

## Submission at 2024-09-09 10:05:35


```
// Write Code from Scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        double a=input.nextDouble();
        if(a<0){
            a=a-2*a;
        }
        if(pow(a)){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
        
    }
    public static boolean pow(double i){
        if(i<3 && i!=0){
            return false;
        }
        else if(i==0){
            return true;
        }
        else if(i==3){
            return true;
        }
        else{
            return pow(i/3);

        }

    }
}
```

## Submission at 2024-09-09 10:12:19


```
// Write Code from Scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        double a=input.nextDouble();
       
        if(pow(a)){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
        
    }
    public static boolean pow(double i){
        if(i<3 && i!=0 && i!=1){
            return false;
        }
        else if(i==0){
            return true;
        }
        if(i==1){
            return true;
        }
        else if(i==3){
            return true;
        }
        else{
            return pow(i/3);

        }

    }
}
```

## Submission at 2024-09-09 10:16:53


```
// Write Code from Scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        double a=input.nextDouble();
       
        if(pow(a)){
            System.out.println("True");
        }
        else{
            System.out.println("False");
        }
        
    }
    public static boolean pow(double i){
        if(i<1 && i>0){
            if(i==3){
                return true;
            }
            else if(i>3){
                return false;

            }
            else{
                return pow(3*i);
            }

        }
        else{
        if(i<3 && i!=0 && i!=1){
            return false;
        }
        else if(i==0){
            return true;
        }
        if(i==1){
            return true;
        }
        else if(i==3){
            return true;
        }
        else{
            return pow(i/3);

        }}

    }
}
```

## Submission at 2024-09-09 10:43:30


```
// Write code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String occ=input.nextLine();
        String[] occ2=occ.split(" ");
       
       
        System.out.print(counti(occ2[0], occ2[1], 0,0));
    }
    public static int counti(String s, String digit, int count, int index){
        int rcount=0;
        if(index==s.length()){
            return count;
        }
        else{
            
            if(s.charAt(index)==digit.toChar()){
                count++;
            }
            index++;
            rcount=counti(s, digit, count, index);
        }
        return rcount;
}}
```

## Submission at 2024-09-09 11:03:59


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
        int length=0;
        Node crr=head;
        while(crr!=null){
          length++;
          crr=crr.next;
        }
       
          int [] list= new int[length];
          int ii=0;
          while(head!=null){
            list[ii]=head.data;
            
            head=head.next;
            ii++;
          }
          int check=0;
          int j=length-1;
        
          for(int i=0; i<length;i++){
           
              if(list[i]!=list[j]){
                
                check=1;
                
              
            }
            j--;
          }
          if(check==1){
            return false;
          }
          else{
            return true;
          }

        
    }
}


```

## Submission at 2024-09-09 11:07:25


```
// Write code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String occ=input.nextLine();
        String[] occ2=occ.split(" ");
       
       
        System.out.print(counti(occ2[0], occ2[1], 0,0));
    }
    public static int counti(String s, String digit, int count, int index){
        int rcount=0;
        if(index==s.length()){
            return count;
        }
        else{
            
            if(s.charAt(index)==digit.charAt(0)){
                count++;
            }
            index++;
            rcount=counti(s, digit, count, index);
        }
        return rcount;
}}
```

## Submission at 2024-09-11 08:35:11


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        for(int i=0; i<matrix.size();i++){
            int max=0;
            for(int j=0; j<matrix.get(i).size(); j++){
                if(matrix.get(j).get(i)>max){
                    max=matrix.get(j).get(i);
                }
            }
            for(int j=0; j<matrix.get(i).size();j++){
                if(matrix.get(j).get(i)==-1){
                    matrix.get(j).set(i, max);
                }
            }
        }
        return matrix;
    }
}

```

## Submission at 2024-09-11 08:38:43


```


class Solution {
    public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
        for(int i=0; i<matrix.size();i++){
            int max=Integer.MIN_VALUE;
            for(int j=0; j<matrix.get(i).size(); j++){
                if(matrix.get(j).get(i)>max){
                    max=matrix.get(j).get(i);
                }
            }
            for(int j=0; j<matrix.get(i).size();j++){
                if(matrix.get(j).get(i)==-1){
                    matrix.get(j).set(i, max);
                }
            }
        }
        return matrix;
    }
}

```

## Submission at 2024-09-18 04:19:31


```


public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
    int rows=matrix.sixe();
    int cols=matrix(0).size();
        for(int i=0; i<rows;i++){
            int max=Integer.MIN_VALUE;
            for(int j=0; j<cols; j++){
                if(matrix.get(j).get(i)>max){
                    max=matrix.get(j).get(i);
                }
            }
            for(int j=0; j<cols;j++){
                if(matrix.get(j).get(i)==-1){
                    matrix.get(j).set(i, max);
                }
            }
        }
        return matrix;
    }
}
```

## Submission at 2024-09-18 04:21:12


```

class Solution{
public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
    int rows=matrix.size();
    int cols=matrix.get(0).size();
        for(int i=0; i<rows;i++){
            int max=Integer.MIN_VALUE;
            for(int j=0; j<cols; j++){
                if(matrix.get(j).get(i)>max){
                    max=matrix.get(j).get(i);
                }
            }
            for(int j=0; j<cols;j++){
                if(matrix.get(j).get(i)==-1){
                    matrix.get(j).set(i, max);
                }
            }
        }
        return matrix;
    }
}
```

## Submission at 2024-09-18 04:43:51


```

class Solution{
public static List<List<Integer>> modifiedMatrix(List<List<Integer>> matrix) {
    int rows=matrix.size();
    int cols=matrix.get(0).size();
        for(int i=0; i<cols;i++){
            int max=Integer.MIN_VALUE;
            for(int j=0; j<rows; j++){
                if(matrix.get(j).get(i)>max){
                    max=matrix.get(j).get(i);
                }
            }
            for(int j=0; j<rows;j++){
                if(matrix.get(j).get(i)==-1){
                    matrix.get(j).set(i, max);
                }
            }
        }
        return matrix;
    }
}
```

## Submission at 2024-10-07 09:50:03


```
class ReverseQueue{
    // Function to reverse the queue.
    Queue<Integer> rev(Queue<Integer> q){
        // Write your code here.
        int[] num=new int[q.size()];
        int j=0;
        while(!q.isEmpty()){
            num[j]=q.remove();
            j++;
        }
        Queue<Integer> ans=new LinkedList<>();
        for(int i=num.length-1;i>=0;i--){
            ans.add(num[i]);
        }
        return ans;
    }
}
```

## Submission at 2024-10-07 10:02:31


```
// Write your code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String ops=input.nextLine();
        int[] nums=new int[ops.length()/2+1];
        int j=0;
        for(int i=0; i<ops.length();i+=2){
            int ch=ops.charAt(i);
            nums[j]=ch-48;
            j++;
        }
        Arrays.sort(nums);
        String ans="";
        for(int i=0;i<nums.length;i++){
            String s=Integer.toString(nums[i]);
            ans+=s;
            if(i!=nums.length-1){
            ans=ans+"+";}
        }
        System.out.println(ans);

    }
}
```

## Submission at 2024-10-07 10:29:49


```
// Write your code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        System.out.println(s);
        // String[] split=s.split(".");
        // System.out.print(split.length);
        for(int i=0; i<s.length();i++){
            String split="";
            
            while(s.charAt(i)!='.'){
                split+=s.charAt(i);
                i++;
                if(i>=s.length()){
                    break;
                }
            }
            Stack<Character> rev=new Stack<>();
            String revs="";
            for(int j=0; j<split.length();j++){
                rev.push(split.charAt(j));
            }
            while(!rev.isEmpty()){
                revs+=rev.pop();
            }
            System.out.print(revs);
            if(i<=s.length()-1){
                System.out.print(".");
            }
        }
    }
}
```

## Submission at 2024-10-07 10:35:55


```
// Write your code from scratch here
// Write your code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
       
        // String[] split=s.split(".");
        // System.out.print(split.length);
        for(int i=0; i<s.length();i++){
            String split="";
            
            while(s.charAt(i)!='.'){
                split+=s.charAt(i);
                i++;
                if(i>=s.length()){
                    break;
                }
            }
            Stack<Character> rev=new Stack<>();
            String revs="";
            for(int j=0; j<split.length();j++){
                rev.push(split.charAt(j));
            }
            while(!rev.isEmpty()){
                revs+=rev.pop();
            }
            System.out.print(revs);
            if(i<=s.length()-1){
                System.out.print(".");
            }
        }
    }
}
```

## Submission at 2024-10-07 10:52:50


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        String s1=input.nextLine();
        String[] lendiff=s.split(" ");
        String[] arr=s1.split(" ");
        int[] num =new int[arr.length];
        for(int i=0; i<arr.length;i++){
            num[i]=Integer.parseInt(arr[i]);
        }
        Arrays.sort(num);
        int count=0;
        int diff=Integer.parseInt(lendiff[1]);
        for(int i=num.length-1;i>=0;i--){
            int start=0;
            int end=num.length-1;
            while(end>start){
                int mid=(end+start)/2;
            
                if(num[i]-num[mid]>=diff){
                    count++;
                    break;
                }
                else{
                    start=mid+1;
                }
            }
        }
        System.out.print(count);
    }
}
```

## Submission at 2024-10-07 10:58:09


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        String s1=input.nextLine();
        String[] lendiff=s.split(" ");
        String[] arr=s1.split(" ");
        int[] num =new int[arr.length];
        for(int i=0; i<arr.length;i++){
            num[i]=Integer.parseInt(arr[i]);
        }
        Arrays.sort(num);
        int count=0;
        int diff=Integer.parseInt(lendiff[1]);
        for(int i=num.length-1;i>=0;i--){
            int start=0;
            int end=num.length-1;
            while(end>start){
                int mid=(end+start)/2;
            
                if(num[i]-num[mid]>=diff){
                    count++;
                    break;
                }
                else{
                    end=mid-1;
                }
            }
        }
        System.out.print(count);
    }
}
```

## Submission at 2024-10-07 11:02:50


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        String s1=input.nextLine();
        String[] lendiff=s.split(" ");
        String[] arr=s1.split(" ");
        int[] num =new int[arr.length];
        for(int i=0; i<arr.length;i++){
            num[i]=Integer.parseInt(arr[i]);
        }
        Arrays.sort(num);
        int count=0;
        int diff=Integer.parseInt(lendiff[1]);
        for(int i=num.length-1;i>=0;i--){
            int start=0;
            int end=num.length-1;
            while(end>start){
                int mid=(end+start)/2;
            
                if(num[i]-num[mid]>diff){
                    count++;
                    break;
                }
                else{
                    end=mid-1;
                }
            }
        }
        System.out.print(count);
    }
}
```

## Submission at 2024-10-07 11:04:02


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        String s1=input.nextLine();
        String[] lendiff=s.split(" ");
        String[] arr=s1.split(" ");
        int[] num =new int[arr.length];
        for(int i=0; i<arr.length;i++){
            num[i]=Integer.parseInt(arr[i]);
        }
        Arrays.sort(num);
        int count=0;
        int diff=Integer.parseInt(lendiff[1]);
        for(int i=num.length-1;i>0;i--){
            int start=0;
            int end=num.length-1;
            while(end>start){
                int mid=(end+start)/2;
            
                if(num[i]-num[mid]>diff){
                    count++;
                    break;
                }
                else{
                    end=mid-1;
                }
            }
        }
        System.out.print(count);
    }
}
```

## Submission at 2024-10-07 11:06:09


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String s=input.nextLine();
        String s1=input.nextLine();
        String[] lendiff=s.split(" ");
        String[] arr=s1.split(" ");
        int[] num =new int[arr.length];
        for(int i=0; i<arr.length;i++){
            num[i]=Integer.parseInt(arr[i]);
        }
        Arrays.sort(num);
        int count=0;
        int diff=Integer.parseInt(lendiff[1]);
        for(int i=num.length-1;i>=0;i--){
            int start=0;
            int end=num.length-1;
            while(end>=start){
                int mid=(end+start)/2;
            
                if(num[i]-num[mid]>diff){
                    count++;
                    break;
                }
                else{
                    end=mid-1;
                }
            }
        }
        System.out.print(count);
    }
}
```

## Submission at 2024-10-28 10:04:49


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
        //code here
        List<Integer> list1=stor(root);
        int a=list1.get(0);
        for (int i=1;i<list1.size();i++){
            if(list1.get(i)<a){
                a=list1.get(i);
            }
        }
        return a;

    }
    public static List<Integer> stor(Node root){
        List<Integer> list= new ArrayList<>();
        if(root!=null){
            list.add(root.data);
            list.addAll(stor(root.left));
            list.addAll(stor(root.right));
        }
        return list;
    }
}
```

## Submission at 2024-10-28 10:18:02


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String a=input.nextLine();
        String[] split1=a.split(" ");
        int k=Integer.parseInt(split1[1]);
        String b=input.nextLine();
        String[] split=b.split(" ");
        int[] arr= new int[split.length];
        for (int i=0; i<split.length;i++){
            arr[i]=Integer.parseInt(split[i]);
        }
        HashMap<Integer,Integer> hm= new HashMap<>();
        for (int i=0; i<arr.length;i++){
            if(hm.containsKey(arr[i])){
                hm.put(arr[i],hm.get(arr[i])+1);
            }
            else{
                hm.put(arr[i],1);
            }
        }
        
        int found=-1;
        for (Map.Entry<Integer,Integer> entry: hm.entrySet()){
                if(entry.getValue().equals(k)){
                    found=entry.keySet();
                  
                    break;
                }
        }
      System.out.print(found);
    }
}
```

## Submission at 2024-10-28 10:21:47


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String a=input.nextLine();
        String[] split1=a.split(" ");
        int k=Integer.parseInt(split1[1]);
        String b=input.nextLine();
        String[] split=b.split(" ");
        int[] arr= new int[split.length];
        for (int i=0; i<split.length;i++){
            arr[i]=Integer.parseInt(split[i]);
        }
        HashMap<Integer,Integer> hm= new HashMap<>();
        for (int i=0; i<arr.length;i++){
            if(hm.containsKey(arr[i])){
                hm.put(arr[i],hm.get(arr[i])+1);
            }
            else{
                hm.put(arr[i],1);
            }
        }
        
        int found=-1;
        for (Map.Entry<Integer,Integer> entry: hm.entrySet()){
             
                if(entry.getValue()>=k){
                    found=entry.getKey();
                 
                    break;
                }
        }
      System.out.print(found);
    }
}
```

## Submission at 2024-10-28 10:43:21


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
      Integer a=0;
      List<String> list=sum(root,"");
      for(int i=0;i<list.size();i++){
        a+=Integer.parseInt(list.get(i));
      }
      return a;
    }
    public static List<String> sum(Node root, String s){
      List<String> list= new ArrayList<>();
      if (root!=null){
        s+=root.data+"";
        if(root.right==null && root.left==null){
          list.add(s);
          return list;
        }
        list.addAll(sum(root.left,s));
        list.addAll(sum(root.right,s));
      }
      return list;
    }
}
```

## Submission at 2024-10-28 11:08:12


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
        HashMap<Integer,Integer> hm= new HashMap<>();
        
        while(head1!=null){
          if(hm.containsKey(head1.data)){
            hm.put(head1.data,hm.get(head1.data)+1);
          }
          else{
          hm.put(head1.data,1);}
          
          head1=head1.next;
        }
        HashMap<Integer,Integer> hm1= new HashMap<>();
        
        while(head2!=null){
          if(hm1.containsKey(head2.data)){
             hm1.put(head2.data,hm1.get(head2.data)+1);
          }
          else{
        hm1.put(head2.data,1);}
       
          head2=head2.next;
        }
        List<Integer> list=new ArrayList<>();
        
        for(Map.Entry<Integer,Integer> entry: hm.entrySet()){

          if(hm1.containsKey(entry.getKey())){
            list.add(entry.getKey());
          }
        }
        if(list.size()==0){
          return new Node(0);
        }
        Node current=new Node(list.get(0));
        Node head=current;
        for (int i=1;i<list.size();i++){
          current.next=new Node(list.get(i));
          current=current.next;
        }
        return head;
        
    }
}
```

## Submission at 2024-10-28 11:20:58


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
      Integer a=0;
      List<String> list=sum(root,"");
      for(int i=0;i<list.size();i++){
        a+=Integer.parseInt(list.get(i));
      }
      return a;
    }
    public static List<String> sum(Node root, String s){
      List<String> list= new ArrayList<>();
      if (root!=null){
        s+=root.data+"";
        if(root.right==null && root.left==null){
          list.add(s);
          return list;
        }
        list.addAll(sum(root.left,s));
        list.addAll(sum(root.right,s));
      }
      return list;
    }
}
```

## Submission at 2024-11-18 07:34:02


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
      Integer a=0;
      List<Integer> list=sum(root,0);
      for(int i=0;i<list.size();i++){
        a+=list.get(i);
      }
      return a;
    }
    public static List<Integer> sum(Node root, int s){
      List<Integer> list= new ArrayList<>();
      if (root!=null){
        s=s*10+root.data;
        if(root.right==null && root.left==null){
          list.add(s);
          return list;
        }
        list.addAll(sum(root.left,s));
        list.addAll(sum(root.right,s));
      }
      return list;
    }
}
```

## Submission at 2024-11-18 08:07:00


```
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String a=input.nextLine();
        String[] split1=a.split(" ");
        String b=input.nextLine();
        String[] split2 = b.split(" ");
        int len=Integer.parseInt(split1[0]);
        int k=Integer.parseInt(split1[1]);
        int[] arr=new int[len];
        for(int i=0;i<len;i++){
            arr[i]=Integer.parseInt(split2[i]);
        }
        if(len==1){
            System.out.println(0);
        }
        else{
        Arrays.sort(arr);
        
        int count=0;
        for(int i=len-1;i>0;i--){
            
            if(arr[i]-arr[0]>k){
                count+=arr[i]-arr[0]-k;
            }
            else{
                break;
            }
        }
            System.out.println(count);
        }
    }
}
```

## Submission at 2024-11-18 08:36:30


```
// Write your code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String x=input.nextLine();
        String[] split=x.split(" ");
        String order= split[0];
        String s=split[1];
        int olen=0;
        String ans="";
        for (int i=0;i<s.length();i++){
            
            if(in(order,s.charAt(i))){
                ans+=order.charAt(olen);
                olen++;
            }
            else{
                ans+=s.charAt(i);
            }
        }
        System.out.print(ans);

    }
    public static boolean in(String a, char b){
        boolean there=false;
        for(int i=0; i<a.length();i++){
            if(a.charAt(i)==b){
                there=true;
                break;
            }

        }
        return there;
    }
}
```

## Submission at 2024-11-18 09:12:32


```
// Write your code from scratch here
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        String x=input.nextLine();
        String[] split=x.split(" ");
        String order= split[0];
        String s=split[1];
        int olen=0;
        String ans="";
        for (int i=0;i<s.length();i++){
            if(olen==order.length()){
                break;
            }
            if(in(order,s.charAt(i))){
                ans+=order.charAt(olen);
                olen++;
            }
            
        }
        for (int i=0;i<s.length();i++){
            if(!in(order,s.charAt(i))){
                ans+=s.charAt(i);
            }
        }
        System.out.println(ans);

    }
    public static boolean in(String a, char b){
        boolean there=false;
        for(int i=0; i<a.length();i++){
            if(a.charAt(i)==b){
                there=true;
                break;
            }

        }
        return there;
    }
}
```

## Submission at 2024-11-25 10:06:42


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
      List<Integer> arr=all(root);
      int ans=0;
      if(arr.get(0)>n){
        return -1;
      }
      else{
        Collections.sort(arr);
        for (int i =0; i<arr.size();i++){
          if(arr.get(i)<=n){
            ans=arr.get(i);
          }
        }
      }
      
    }
    public static List<Integer> all(Node root){
      List<Integer> arr= new ArrayList<>();
       if(root!=null){
        arr.addAll(findMaxForN(root.left));
        arr.add(root.val);

    }
    return arr;
}
}
```

## Submission at 2024-11-25 10:10:37


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
      List<Integer> arr=all(root);
      int ans=0;
      if(arr.get(0)>n){
        return -1;
      }
      else{
        Collections.sort(arr);
        for (int i =0; i<arr.size();i++){
          if(arr.get(i)<=n){
            ans=arr.get(i);
          }
        }
      }
      
    }
    public static List<Integer> all(Node root){
      List<Integer> arr= new ArrayList<>();
       if(root!=null){
        arr.addAll(all(root.left));
        arr.add(root.data);
        arr.addAll(all(root.right));

    }
    return arr;
}
}
```

## Submission at 2024-11-25 10:14:32


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
      List<Integer> arr=all(root);
      int ans=0;
      if(arr.get(0)>n){
        return -1;
      }
      else{
        Collections.sort(arr);
        for (int i =0; i<arr.size();i++){
          if(arr.get(i)<=n){
            ans=arr.get(i);
          }
        }
        return ans;
      }
      
    }
    public static List<Integer> all(Node root){
      List<Integer> arr= new ArrayList<>();
       if(root!=null){
        arr.addAll(all(root.left));
        arr.add(root.data);
        arr.addAll(all(root.right));

    }
    return arr;
}
}
```

## Submission at 2024-11-25 10:49:46


```
// Write Code From Scratch Here

import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a= input.nextLine();
        String[] split= a.split(" ");
        int len=Integer.parseInt(split[0]);
        int target=Integer.parseInt(split[1]);
        String b=input.nextLine();
        String[] split2=b.split(" ");
        int[] arr=new int[len];
        for (int i=0;i<split2.length;i++){
            arr[i]=Integer.parseInt(split2[i]);
        }
        Arrays.sort(arr);
        for (int i=0;i<split2.length;i++){
            if(arr[i]==target){
                System.out.print(i+" ");
            }
        }
    }
}
```

## Submission at 2024-11-25 10:54:54


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
      HashMap<Integer,Integer> hm= new HashMap<>();
      int j=0;
      while(head1!=null){
        hm.put(head1.data,j);
        j++;
        head1=head1.next;
      }
      while(head2!=null){
        if(hm.containsKey(head2.data)){
          return head2;
        }
        head2=head2.next;
      }
      return new Node(-1);
        // code here
    }
}



```

## Submission at 2024-11-25 11:01:31


```
# write code from scratch
a=int(input())
for i in range(a):
    print(i*"*")
    print()
```

## Submission at 2024-11-25 11:13:45


```
# write code from scratch
a=int(input())
for i in range(a):
    print(i*"*")
```

## Submission at 2024-11-25 11:14:12


```
# write code from scratch
a=int(input())
for i in range(a+1):
    print(i*"*")
```

## Submission at 2024-11-25 11:15:01


```
# write code from scratch
a=int(input())
for i in range(a+1):
    print(i*"*")
```

## Submission at 2024-11-25 11:15:28


```
# write code from scratch
a=int(input("*"))
for i in range(1,a+1):
    print(i*"*")
```

## Submission at 2024-11-25 11:16:07


```
# write code from scratch
a=int(input())
for i in range(1,a+1):
    print(i*"*")
```

## Submission at 2024-11-25 11:20:47


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a=input.nextLine();
        int counta=0;
        int countb=0;
        for (int i=0; i<a.lenght();i++){
            if(s.charAt(i)=='a'){
                counta+=1
            }
            else{
                countb+=1;
            }
        }
        if(counta>=countb){
            System.out.print("a");
        }
        else{
             System.out.print("b");
        }
    }}
```

## Submission at 2024-11-25 11:22:13


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a=input.nextLine();
        int counta=0;
        int countb=0;
        for (int i=0; i<a.lenght();i++){
            if(s.charAt(i)=='a'){
                counta+=1;
            }
            else{
                countb+=1;
            }
        }
        if(counta>=countb){
            System.out.print("a");
        }
        else{
             System.out.print("b");
        }
    }}
```

## Submission at 2024-11-25 11:25:02


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        String a=input.nextLine();
        int counta=0;
        int countb=0;
        for (int i=0; i<a.length();i++){
            if(a.charAt(i)=='a'){
                counta+=1;
            }
            else{
                countb+=1;
            }
        }
        if(counta>=countb){
            System.out.print("a");
        }
        else{
             System.out.print("b");
        }
    }}
```

## Submission at 2024-11-25 11:32:23


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a= input.nextInt();
        String b= input.nextInt();
        String[] split= b.split(" ");
        int[] arr= new int[a];
        for (int i=0; i<a; i++){
            arr[i]=Integer.parseInt(split[i]);
        }
        int flag=1;
        int diff=arr[1]-arr[0];
        for (int i=1; i<a; i++){
            if(arr[i]-arr[i-1]!=diff){
                flag=0;
            }
        }
        if(flag==0){
            System.out.print(false);
        }
        else{
           System.out.print(true); 
        }

        }}
```

## Submission at 2024-11-25 11:34:06


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a= input.nextInt();
        String b= input.nextLine();
        String[] split= b.split(" ");
        int[] arr= new int[a];
        for (int i=0; i<a; i++){
            arr[i]=Integer.parseInt(split[i]);
        }
        int flag=1;
        int diff=arr[1]-arr[0];
        for (int i=1; i<a; i++){
            if(arr[i]-arr[i-1]!=diff){
                flag=0;
            }
        }
        if(flag==0){
            System.out.print(false);
        }
        else{
           System.out.print(true); 
        }

        }}
```

## Submission at 2024-11-25 11:41:58


```
// write code from scratch
import java.util.*;
class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int a= input.nextInt();
        input.nextLine();
        String b= input.nextLine();
        String[] split= b.split(" ");
        int[] arr= new int[a];
        for (int i=0; i<a; i++){
            arr[i]=Integer.parseInt(split[i]);
        }
        int flag=1;
        int diff=arr[1]-arr[0];
        for (int i=1; i<a; i++){
            if(arr[i]-arr[i-1]!=diff){
                flag=0;
            }
        }
        if(flag==0){
            System.out.print(false);
        }
        else{
           System.out.print(true); 
        }

        }}
```

