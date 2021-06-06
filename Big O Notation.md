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
## 2. Logarthmic<br>
 Represented in Big O notation as O(log n). When an algorithm has this running time, it means that as the input size grows, the number of operations grows very slowly. Logarithmic algorithms are very scalable and one such example is binary search.<br>
<b>Searching on a sorted array</b><br>
The binary search only works for sorted arrays. It starts searching for the element in the middle of the array, and then it moves to the right or left depending on if the value you are looking for is larger or smalller.<br>
[Binary search](https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/Binary%20Search.c)<br>
<img src="https://www.geeksforgeeks.org/wp-content/uploads/Binary-Search.png"><br>
This binary search implementation is a recursive algorithm, which means that the function binarySearchRecursive calls itself multiple times until the program finds a solution. The binary search splits the array in half every time.
 Since the binarySearch divides the input in half each time. As a rule of thumb, when you have an algorithm that divides the data in half on each call, you are most likely in front of a logarithmic runtime: O(log n).
## 3. Linear
Linear algorithms are one of the most common runtimes. Their Big O representation is O(n). Usually, an algorithm has a linear running time when it visits every input element a fixed number of times.<br>
#### Finding duplicates in an array
Let’s say that we want to find duplicate elements in an array. What’s the first implementation that comes to mind?<br>
1. Best-case scenario: the first two elements are duplicates. It only has to visit two elements and return.

2. Worst-case scenario: no duplicates or duplicates are the last two. In either case, it has to visit every item in the array.

3. Average-case scenario: duplicates are somewhere in the middle of the collection.
As we learned before, the big O cares about the worst-case scenario, where we would have to visit every element on the array. So, we have an O(n) runtime.
## 4. Linearithmic
You can represent linearithmic algorithms as O(n log n). This one is important because it is the best runtime for sorting! Let’s see the merge-sort.<br>
<b>Sorting elements in an Array</b>
1. If the array only has two elements, we can sort them manually.
2. We divide the array into two halves.
3. Merge the two parts recursively with the merge function explained below
[MergeSort.c]("https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/MergeSort.c")<br>
The merge function combines two sorted arrays in ascending order. Let’s say that we want to sort the array [9, 2, 5, 1, 7, 6]. In the following illustration, you can see what each function does.<br>
<img src="https://github.com/amejiarosario/dsa.js-data-structures-algorithms-javascript/blob/master/book/images/image11.png"><br>
How do we obtain the running time of the merge sort algorithm? The merge-sort divides the array in half each time in the split phase, log n, and the merge function join each splits, n. The total work is O(n log n). There are more formal ways to reach this runtime, like using the Master Method and recursion trees.
## 5. Quadratic
Quadratic running times, O(n^2), are the ones to watch out for. They usually don’t scale well when they have a large amount of data to process.<br>
Usually, they have double-nested loops, where each one visits all or most elements in the input. One example of this is a naïve implementation to find duplicate words on an array.<br>
<b>Finding duplicates in an array (naïve approach)</b><br>
If you remember, we have solved this problem more efficiently in the Linear section. We solved this problem before using an O(n), let’s solve it this time with an O(n^2):

class Solution {<br>
public:<br>
    bool containsDuplicate(vector<int>& nums) {<br>
        for (int i = 1; i < nums.size(); ++ i) {<br>
            for (int j = 0; j < i; ++ j) {<br>
                if (nums[i] == nums[j]) {<br>
                    return true;<br>
                }<br>
            }<br>
        }<br>
        return false;<br>
    }<br>
};<br>
 As you can see, we have two nested loops causing the running time to be quadratic. How much difference is there between a linear vs. quadratic algorithm?<br>
Let’s say you want to find a duplicated middle name in a phone directory book of a city of ~1 million people. If you use this quadratic solution, you would have to wait for ~12 days to get an answer 🐢; while if you use the linear solution, you will get the answer in seconds! 🚀<br>
 ## 6. Cubic
 Cubic O(n^3) and higher polynomial functions usually involve many nested loops. An example of a cubic algorithm is a multi-variable equation solver (using brute force) or finding three elements on an array that add up to a given number.<br>
 <b>3 SUM</b><br>
 Let’s say you want to find 3 items in an array that add up to a target number. One brute force solution would be to visit every possible combination of 3 elements and add them to see if they are equal to the target.<br>
 
