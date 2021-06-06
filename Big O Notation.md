# Comparing algorithms using Big O Notation
## Big O Examples
There are many kinds of algorithms. Most of them fall into one of the eight time complexities that will explore in this chapter.<br>
Eight running time complexities you should know<br>
1. Constant time: O(1)
2. Logarithmic time: O(Log N)
3. Linear time: O(N)
4. Linearithmic time: O(N LogN)
5. Quadratic time: O(N^2)
6. Cubic time: O(N^3)
7. Exponential time: O(2^N)
8. Factorial time: O(N!)

And here is a plot with all of them
<img src="https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/GraphOfTimeComplexities.png"><br>
Figure 1. CPU operations vs. Algorithm runtime as the input size grows
As you can see, O(1) and O(log n) is very scalable. However, O(n2) and worst can convert your CPU into a furnace 🔥 for massive inputs.
Let us know more about hese eight time complexities<br>
## 1. Constant</b><br>
Represented as O(1), it means that regardless of input size , the number of executions is always the same.<br>
Let's see an example<br>
<b>Example: Finding if an array is empty or not.<br></b>
[Let's implement a function that checks whether the given array is empty or not](https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/IsArrEmpty.c)<br>
Another example is [adding an element to the begining of a linked list](https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/addAtfirst.c)<br>
As you can see in both examples (array and linked list), if the input is a collection of 10 elements or 10M, it would take the same amount of time to execute. You can’t get any more performant than this!<br>
 ## 2. Logarthmic</b><br>
 Represented in Big O notation as O(log n). When an algorithm has this running time, it means that as the input size grows, the number of operations grows very slowly. Logarithmic algorithms are very scalable and one such example is binary search.<br>
<b>Searching on a sorted array</b><br>
<p>The binary search only works for sorted arrays. It starts searching for the element in the middle of the array, and then it moves to the right or left depending on if the value you are looking for is larger or smalller.</p><br>
[Binary search](https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/Binary%20Search.c)<br>
<img src="https://www.geeksforgeeks.org/wp-content/uploads/Binary-Search.png">
<p>This binary search implementation is a recursive algorithm, which means that the function binarySearchRecursive calls itself multiple times until the program finds a solution. The binary search splits the array in half every time.
 Since the binarySearch divides the input in half each time. As a rule of thumb, when you have an algorithm that divides the data in half on each call, you are most likely in front of a logarithmic runtime: O(log n).</p>
 
 
