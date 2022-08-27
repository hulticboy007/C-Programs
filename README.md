# C-Programs
C language is one of the most popular computer languages today because it is a structured, high level, machine independent language. It allows software developers to develop programs without worrying about the hardware platforms where they will be implemented. C is called a high level, compiler language. The aim of any high level computer language is to provide an easy and natural way of giving a programme of instructions to a computer. In this repository we will discuss some common problems related to various concepts in C.


## Some Problems from various concepts

In this chapter basic c programs are covered, problems from q.19 is covered, as the previous problems dont have much logic in it

17.Program to print sum and loop \
18.Program to print sequence star1 \
19.Program to print sequence star2 \
20.Program to print sequence star3 \
20.a.Program to print sequence star3.1 \
20.b.Program to print sequence star3.2 \
20.c.Program to print sequence star3.3 \
20.d.Program to print sequence star3.4 \
20.e.Program to print sequence star3.5 \
21.Program to print fibanocci series \
22.Program to factorial of a number \
23.Program to check if a no. is prime or not \
24.Program to sum of series 1/n \
25.Program to sum of odd number series \
26.Program to print bitwise && operator result \
27.Program to  \
28.Program to  \
29.Program to  \
30.Program to find the maximum of an array \
31.Program to display a matrix \
32.Program to sum two arrays \
33.Program to find the difference b/w two arrays \
34.Program to multiply two arrays \
35.Program to transpose an array \
36.Program to  \
37.Program to  \
38.Program to  

## Linear Search

Linear search or sequential search is a method for finding a particular value in a list that
checks each element in sequence until the desired element is found or the list is exhausted. \


The list need not be ordered. It is the simplest search algorithm; it is a special case of brute-
force search. \

### Time Complexity

-It is the measure of how long a program takes to run \
-If there are n elements in the array : \
Best case:-
Match found in the first case
Worst case:- \
no match found, or match found in the last part \
Average case:- \
(n+1)/2 search operations 

## Binary Search 

A binary search or half-interval search algorithm finds the position of a target value within a sorted array. The binary search algorithm can be classified as a dichotomic divide-and-
conquer search algorithm executes in logarithmic time.

Basic Concept: 
• Binary search works if the array is sorted.\
– Look for the target in the middle. \
– If you don’t find it, you can ignore half of the array, and repeat the process with the other half. \
• In every step, we reduce the number of elements to search in by half.

Properties:
1. Best Case performance – The middle element is equal to the ‘input key’ O(1).
2. Worst Case performance - The ‘input key’ is not present in the list O(logn).
3. Average Case performance – The ‘input key’ is present, but it’s not the middle element
O(logn).
4. The List should be sorted for using Binary Search Algorithm.
5. It is faster than Linear Search algorithm, and its performance increases in comaparison to
linear search as N grows.

## Strings

1. Array of characters
2. Syntax: char name[size];
3. Character occupy one byte.
4. String itself is not a datatype.
5. " " is for strings and ' ' is for characters.

### Inputing

1. Many ways are there, like scanf,gets,fgets,and so on.
2. scanf cannot be used for multiple words.
3. gets can be used in this case(problem: buffer overflow)

