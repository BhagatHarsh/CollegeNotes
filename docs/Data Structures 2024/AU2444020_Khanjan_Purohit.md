## Submission at 2024-09-02 10:45:38


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = []
for i in range(n):
    c.append(max(a[i], b[i]))
print(' '.join(map(str, c)))
```

## Submission at 2024-09-02 10:49:22


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = []
for i in range(n):
    c.append(max(a[i], b[i]))
print(' '.join(c))
```

## Submission at 2024-09-02 10:50:21


```
n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

c = []
for i in range(n):
    c.append(max(a[i], b[i]))
print(' '.join(map(str, c)))
```

## Submission at 2024-09-02 11:16:18


```
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def traverse_linked_list(head):
    def traverse_linked_list(head):
        elements = []
        current = head
        
        while current:
            elements.append(current.val)
            current = current.next
        return elements

    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)

    result = traverse_linked_list(head)
    return result

```

## Submission at 2024-09-09 10:02:11


```
def power_four(value):
    if value != 1:
        if value % 4 != 0:
            return False
        else:
            divided_value = value / 4
            new_value = power_four(divided_value)
            if new_value == False:
                return False
            else: 
                return True

response = power_four(64)
print("RES ==>", response)
```

## Submission at 2024-09-09 10:05:06


```
def power_four(n):
    if n != 1:
        if n % 4 != 0:
            return False
        else:
            divided_value = n / 4
            new_value = power_four(divided_value)
            if new_value == False:
                return False
            else: 
                return True
```

## Submission at 2024-09-09 10:05:59


```
def power_four(n):
    if n != 1:
        if n % 4 != 0:
            return False
        else:
            divided_value = n / 4
            new_value = power_four(divided_value)
            if new_value == False:
                return False
            else: 
                return True
```

## Submission at 2024-09-09 10:07:16


```
def power_four(n):
    if n != 1:
        if n % 4 != 0:
            return False
        else:
            divided_value = n / 4
            new_value = power_four(divided_value)
            if new_value == False:
                return False
            else: 
                return True
print(power_four(16))
```

## Submission at 2024-09-09 10:08:25


```
def power_four(n):
    if n != 1:
        if n % 4 != 0:
            return False
        else:
            divided_value = n / 4
            new_value = power_four(divided_value)
            if new_value == False:
                return False
            else: 
                return True
print(power_four(16))
```

## Submission at 2024-09-09 10:09:45


```
def power_four(n):
    if n != 1:
        if n % 4 != 0:
            return False
        else:
            new_value = power_four(n / 4)
            if new_value == False:
                return False
            else: 
                return True
print(power_four(16))
```

## Submission at 2024-10-07 10:10:47


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        elif data[i] == data[i+1]:
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    return finalPrice
```

## Submission at 2024-10-07 10:12:07


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        elif data[i] == data[i+1]:
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    print("finalPrice>>", finalPrice)
    return finalPrice
```

## Submission at 2024-10-07 10:13:52


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    print("finalPrice>>", finalPrice)
    return finalPrice

```

## Submission at 2024-10-07 10:19:03


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    return finalPrice
calculatePrice(5, [10,1,1,6,3])
```

## Submission at 2024-10-07 10:19:55


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    print("data>>>", data)
    return finalPrice
calculatePrice(5, [10,1,1,6,3])
```

## Submission at 2024-10-07 10:21:17


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    print("data>>>", finalPrice)
    return finalPrice
calculatePrice(5, [12,10,1,9,1])
```

## Submission at 2024-10-07 10:47:20


```
# Write Python Code from scratch
def calculatePrice(n, data):
    finalPrice = []
    for i in range(len(data)):
        if i == (len(data)-1):
            finalPrice.append(data[i])
        else:
            if data[i] > data[i+1]:
                discPrice = data[i] - data[i+1]
                finalPrice.append(discPrice)
            else:
                finalPrice.append(data[i])
    print("data>>>",finalPrice)
    return finalPrice
calculatePrice(5, [12,10,1,9,1])
```

## Submission at 2024-10-28 10:10:12


```
# Write code from scratch
def count_candy(total, candy_array):
    number_of_allowed_candies = total / 2
    candy_types = []
    for i in range(len(candy_array)):
        if candy_array[i] not in candy_types:
            candy_types.append(candy_array[i])
    max_value = max(candy_types)
    return max_value

count_candy(6, [1,1,2,2,3,3])  
```

## Submission at 2024-10-28 10:10:30


```
# Write code from scratch
def count_candy(total, candy_array):
    number_of_allowed_candies = total / 2
    candy_types = []
    for i in range(len(candy_array)):
        if candy_array[i] not in candy_types:
            candy_types.append(candy_array[i])
    max_value = max(candy_types)
    return max_value

```

## Submission at 2024-10-28 10:23:12


```
# Write code from scratch
def candy_type(N, candyType):
    number_allowed_candies = N / 2
    candy_array = candyType.split(" ")
    candy_different_types = []
    for i in candy_array:
        if i not in candy_different_types:
            candy_different_types.append(i)
    max_candies = max(candy_different_types)
    return max_candies
```

## Submission at 2024-10-28 10:24:48


```
# Write code from scratch
def candy_type(N, candyType):
    number_allowed_candies = N / 2
    candy_array = candyType.split(" ")
    candy_different_types = []
    for i in candy_array:
        if i not in candy_different_types:
            candy_different_types.append(i)
    max_candies = max(candy_different_types)
    print("???", max_candies)
    return max_candies

```

## Submission at 2024-10-28 10:26:23


```
# Write code from scratch
def candy_type(N, candyType):
    number_allowed_candies = N / 2
    candy_array = candyType.split(" ")
    candy_different_types = []
    for i in candy_array:
        if i not in candy_different_types:
            candy_different_types.append(i)
    max_candies = max(candy_different_types)
    print("???", max_candies)
    return total / 2
#candy_type(6, "1 1 2 2 3 3")
```

## Submission at 2024-10-28 10:33:50


```
# Write your code from scratch here
def permutation(data):
    diff = []
    for i in data:
        if i != " ":
            if i not in diff:
                diff.append(i)
    permuted_string = "".join(diff)
    return permuted_string
```

## Submission at 2024-11-25 09:53:08


```
# write code from scratch

def count_odd_even(length, array_numbers):
    odd_numbers = 0
    even_numbers = 0
    for i in array_numbers:
        if i % 2 == 0:
            even_numbers = even_numbers + 1
        else:
            odd_numbers = odd_numbers + 1
    output_array = [odd_numbers, even_numbers]
    print(output_array)
    return output_array
```

## Submission at 2024-11-25 09:54:45


```
# write code from scratch

def count_odd_even(length, array_numbers):
    odd_numbers = 0
    even_numbers = 0
    for i in array_numbers:
        if i % 2 == 0:
            even_numbers = even_numbers + 1
        else:
            odd_numbers = odd_numbers + 1
    output_array = [odd_numbers, even_numbers]
    return output_array
```

## Submission at 2024-11-25 09:55:29


```
# write code from scratch

def count_odd_even(length, array_numbers):
    odd_numbers = 0
    even_numbers = 0
    for i in array_numbers:
        if i % 2 == 0:
            even_numbers = even_numbers + 1
        else:
            odd_numbers = odd_numbers + 1
    
    return odd_numbers, even_numbers
```

## Submission at 2024-11-25 10:03:09


```
# write code from scratch

def count_odd_even(length, array_numbers):
    odd_numbers = 0
    even_numbers = 0
    for i in array_numbers:
        if i % 2 == 0:
            even_numbers = even_numbers + 1
        else:
            odd_numbers = odd_numbers + 1
    
    print(odd_numbers, even_numbers)
```

## Submission at 2024-11-25 10:05:51


```
# write code from scratch

def count_odd_even(length, array_numbers):
    odd_numbers = 0
    even_numbers = 0
    for i in array_numbers:
        if i % 2 == 0:
            even_numbers = even_numbers + 1
        else:
            odd_numbers = odd_numbers + 1
    
    print(odd_numbers, even_numbers)
```

## Submission at 2024-11-25 10:27:42


```
# write code from scratch

n = input()
arr = input()

def count_integers(length, array_integers):
    count_even = 0
    count_odd = 0
    array_of_integers = array_integers.split(" ")
    #print(">>>>", array_of_integers)
    for i in array_of_integers:
        if int(i) % 2 == 0:
            count_even += 1
        else:
            count_odd += 1
    print(count_odd, count_even)

count_integers(n, arr)
```

## Submission at 2024-11-25 10:51:11


```
# Write Python code from scratch

S = input()

def print_string(string):
    reversed_string = ""
    output = ""
    length_string = len(string) * -1
    for i in range(length_string, 0):
        reversed_string = string[i] + reversed_string
    for i in reversed_string:
        if i not in output:
            output = output + i
    print(output)

print_string(S)
```

## Submission at 2024-11-25 11:02:07


```
# Write Python code from scratch

n = input()

def print_stars(number):
    number_of_stars = number
    while number_of_stars > 0:
        print("*"*number_of_stars)
        number_of_stars = number_of_stars - 1

print_stars(int(n))
```

## Submission at 2024-11-25 11:09:04


```
# Write Python Code from scratch

n = input()

def hello_users(number):
    for i in range(1, number+1):
        input_value = input()
        print("Hello "+input_value+"!")

hello_users(int(n))
```

## Submission at 2024-11-25 11:32:05


```
# write code from scratch

alphabet = {
    "a":1,
    "b":2,
    "c":3,
    "d":4,
    "e":5,
    "f":6,
    "g":7,
    "h":8,
    "i":9,
    "j":10,
    "k":11,
    "l":12,
    "m":13,
    "n":14,
    "o":15,
    "p":16,
    "q":17,
    "r":18,
    "s":19,
    "t":20,
    "u":21,
    "v":22,
    "w":23,
    "x":24,
    "y":25,
    "z":26,
}

n = input()
letters = input()
target = input()

def lex_func(length, letters_value, target_value):
    greater_than_target = []
    output_value_index = 27
    target_value_index = alphabet[target_value]
    output_value = ""
    for i in letters_value:
        if alphabet[i] > target_value_index:
            if i not in greater_than_target:
                greater_than_target.append(i)
    for i in greater_than_target:
        if alphabet[i] < output_value_index:
            output_value_index = alphabet[i]
    for i in alphabet.keys():
        if alphabet[i] == output_value_index:
            output_value = i
    if len(greater_than_target) == 0:
        print(letters_value[0])
    else:
        print(output_value)
    
lex_func(n, letters.split(" "), target)
```

