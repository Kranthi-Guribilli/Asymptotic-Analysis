# Asymptotic-Analysis
## Basics of Asymptotic Analysis
Every coder probably want to write better and faster code.
How can we do that? Can we time how long it takes to run a program? Of course, you can!</br>
However, if we run the same program on a computer, cellphone, or even a smartwatch, it will take different times.

Wouldn’t it be great if we can compare algorithms regardless of the hardware where we run them? That’s what time complexity is for! But, why stop with the running time?</br>
Here comes the BIG(O) Notation..</br>
So, here comes the question How to calculate the TIME COMPLEXITY?<br>
<b>Calculating Time Complexity :</b></br>
In computer science, time complexity describes the number of operations a program will execute for the given size of input n.</br>
How do you get a function that gives you the rough number of operations that a CPU will execute?</br>
One idea is to analyze your code line by line and mind code inside loops. Let’s do an example to explain this point. For instance, we have a function to find the minimum value on an array called getMin.
<img src="https://github.com/amejiarosario/dsa.js-data-structures-algorithms-javascript/blob/master/book/images/image4.png">
By translating lines of code to an approximate number of operations</br>
Assuming that each line of code is an operation, we get the following:</br>
3n + 3, 
n = input size.</br>
That means that if you have an array of 3 elements, e.g. getMin([1, 2, 3]), then it will execute around 3(3)+3 = 12 operations. Of course, this is not for every case. For instance, Line 12 is only executed if the condition on line 11 is met. As you might learn in the next section, we want to get the big picture and get rid of smaller terms to compare algorithms easier.i.e., we used to calculate for worst cases...<br>
<b>Simplifying Time Complexity with Asymptotic Analysis</b><br>
When we compare algorithms, about the growth rate when the input gets huge (towards infinity). Then you have a function like 20*n^3 + 100. If n is one million. The term + 100 makes a tiny contribution to the result (less than 0.000001%). Here is when the asymptotic analysis comes to the rescue.</br>
Note: Asymptotic analysis describes the behavior of functions as their inputs approach to infinity</br>

Operations performed by an algorithm with a time complexity of 3n + 3</br>
If n=10, 3(10) + 3=33</br>
If n=10k, 3(10k)+3= 30,003</br>
if n=1M, 3(1M)+3=3,000,003</br>
As the input size n grows bigger and bigger, then the expression 3n + 3 is closer and closer to 3n. Dropping terms might look like a stretch at first, but you will see that what matters the most is the higher-order terms of the function rather than lesser terms and constants.</br>
If n is the size of the input then f(n) is a function of n denotes the  time complexity. In other words, f(n) is nothing nut a no.of instructions executed for the input value n.</br>
Then how to find f(n)?</br>
1. we can compare two data structures for a particular operation by comparing their f(n) values.
2. we are interested in growth rate of f(n) with respect to n because it might be possible that for smaller size it might be look a data structure is better than other but for larger it may not!
3. This concept is applicable in comparing two algorithms as well.
Another example:
<img src="https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/readme.png">
In the above example we can clearly observe that the growth rate of 5n^2 is increasing while 6n and the constant 12 are decreasing. And the most of the time is consumed at 5n^2.
And lets say if we consider the value of n as 1 then we can simply say that 12 is taking most of the time. But the reality is different when we are increasing the value of n we can clearly observe that which term is taking the most of the time. Now let's have a look at visualisation of growth rate.
<img src="https://github.com/Kranthi-Guribilli/Asymptotic-Analysis/blob/main/Graph_Visualization.png">
In this graph you can see that 5n^2 is increasing fastly and at the same time the constant is high at first but later it declines faster similar for the linear term as well.<br>
So there is no harm if we eliminate the rest of the term as they are not contributing to the much time.<br>
f(n)=5n^2<br>
So, finally we are getting the approximate time complexity and we are satisfied with this result because this approximate result is very near to the actual result.<br>
<b>This approximate measure of time complexity is called Asymptotic Complexity.</b>
