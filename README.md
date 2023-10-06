# Function_Recursion

## **THEORY**

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.

Recursion Example
Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:

Example

int sum(int k) 

{

  if (k > 0)
  
  {
  
    return k + sum(k - 1);
    
  } 
  
  else
  
  {
  
    return 0;
    
  }
  
}

![image](https://github.com/Purvansha022609/Recursion-/assets/139473344/1ff781a1-1e99-477b-b054-b9196a5db7a3)

Working of Recursion

Recursion performs a number of repetitive calls to the function from within the function. The recursive condition performs the repeating calls to the function until the base case is met.The base case is present inside the function, and once the condition of the base case is satisfied, it stops the execution.

Let’s understand it with a simple example. 

![image](https://github.com/Purvansha022609/Recursion-/assets/139473344/dbdafe3e-799d-4308-be6d-5a57db4bccd3)

In the factorial function, we have to perform many repetitive calls to the function. In this example, the recursive condition would be n*factorial(n-1); factorial is the function's name, and the value of n is 5. 

![image](https://github.com/Purvansha022609/Recursion-/assets/139473344/f3bceb3d-6440-4d8c-b63a-4fae6695bf6d)

First, in this function, 5 will be multiplied with factorial(5-1), then 4 is passed to the function. Similarly, in the next iteration, 4 is multiplied with factorial(4-1). This will continue till the value of n becomes 1.

## **THEORY**

- **Algorithm: Factorial Calculation**

Input: An integer 'n' for which you want to calculate the factorial.
Output: The factorial of 'n'.

1. Start with a function named 'factorial' that takes an integer 'n' as its argument.
2. Inside the 'factorial' function:
   a. Check the base case: If 'n' is 0 or 1, return 1 because the factorial of 0 and 1 is 1.
   b. If 'n' is greater than 1, calculate the factorial recursively as follows:
      - Multiply 'n' by the result of the 'factorial' function with argument 'n - 1'.
      - Return this result.
3. In the 'main' function:
   a. Declare an integer 'num' to store the input number for which you want to calculate the factorial.
   b. Ask the user to input the value of 'num'.
   c. Call the 'factorial' function with 'num' as the argument to compute the factorial.
   d. Display the result as the factorial of 'num'.

- **Algorithm: Sum of Integers from 1 to n**

Algorithm: Sum of Integers from 1 to n Using Recursive Function

Input: A positive integer 'n'.
Output: The sum of all integers from 1 to 'n'.

1. Initialize a recursive function 'sumOfIntegers' that takes an integer 'n' as its argument.
2. In the 'sumOfIntegers' function:
   a. Check the base case: If 'n' is 1, return 1 because the sum of integers from 1 to 1 is 1.
   b. If 'n' is greater than 1, calculate the sum recursively as follows:
      - Return 'n' plus the result of the 'sumOfIntegers' function with argument 'n - 1'.
3. In the 'main' function:
   a. Declare an integer variable 'n' to store the input value for which you want to calculate the sum.
   b. Ask the user to input the value of 'n'.
   c. Call the 'sumOfIntegers' function with 'n' as the argument to compute the sum.
   d. Display the result as the sum of integers from 1 to 'n'.

- **Algorithm: Print String in Reverse Using Recursive Function**
  
Input: A string 'str' and the length of the string 'n'.
Output: Print the characters of 'str' in reverse order.

1. Initialize a recursive function 'printReverseString' that takes two arguments: 'str' and 'n'.
2. In the 'printReverseString' function:
   a. Check the base case: If 'n' is 0 (the string is empty), return.
   b. Print the last character of 'str' (str[n-1]).
   c. Call the 'printReverseString' function recursively with 'str' excluding the last character (str[0 to n-2]) and 'n-1' as arguments.
3. In the 'main' function:
   a. Declare a character array 'str' to store the input string.
   b. Read the input string into 'str'.
   c. Calculate the length of the input string and store it in 'n'.
   d. Call the 'printReverseString' function with 'str' and 'n' as arguments to print the string in reverse order

- **OUTPUT**

  - **Algorithm: Factorial Calculation**

![exp15_1](https://github.com/Purvansha022609/Recursion-/assets/139473344/051f0bbb-938b-4038-b85d-2d264020c2e8)

- **Algorithm: Sum of Integers from 1 to n**

![exp15_2](https://github.com/Purvansha022609/Recursion-/assets/139473344/7fd507b2-21ee-4a33-9b74-9d67673acfad)

- **Algorithm: Print String in Reverse Using Recursive Function**

![exp15_3](https://github.com/Purvansha022609/Recursion-/assets/139473344/67ff5fcf-01f6-413e-99b3-e822813bb2dc)
