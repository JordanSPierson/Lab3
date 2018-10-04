# Lab3
Lab3 readme file and code
1. Report n and the sum:
When n is 5 the sum is ten.
2. How can you detect overflow in this process? Where does n overflow?
You can detect overflow by adding an if statement that determines if the sum is less then the previous value for sum (which mathematically should never happen). This could only occur during an overflow. The overflow occurs at an n of 256, where the sum is 32640.
3. Same as first questions but with type long
When n is 5 the sum is ten. You can detect overflow the same way, except in your if statement you need to include an or that includes the case if the previous i value is greater than the current i value, in which case the value of i overflowed. Overflow occurs at an n of 65535 and a sum of 2147450880. This is because a long can store more than a short.
4. Factorial segment. How can you detect overflow? Where does overflow occur?
You can detect overflow by using another if statemnet that determines if the previous value of the product is more than the current value of the product. Overflow occurs at an n value of 13.
5. Factorial with double. Where does overflow occur?
Overflow occurs at an n value of  2.34234e+06, the product is supposedly infinity (INF).
6. Strange behavior. What is the expected value of the function? Explain results:
The expected value of the function would be to simply return the value of 1, because it would be dividing and multiplying by n, which cancel eachother out. These results occur however because a float is not precise like a double when holding a ratio in the form of a decimal. 
7. Puzzle. Execute code, explain why numeric error occurs.
Numeric error occurs because again floats are not precise. The value actually being stored is likely smaller than 4.4 in what should be the last execution of the for loop. Because the value is smaller it goes through the loop a second time. 
8.Change to double. Explain effect.
Doubles again are more precise than floats, this time the computer recognizes the number at the last execution of the code as i being 4.4, so it doesn't run through the loop again. 
