# Kids With the Greatest Number of Candies
``` 
Input: candies = [2,3,5,1,3]
extraCandies = 3
Output: [true,true,true,false,true] 
```
Explanation: 
- Kid 1 has 2 candies and if he or she receives all extra candies (3) will have 5 candies --- the greatest number of candies among the kids. 
- Kid 2 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids. 
- Kid 3 has 5 candies and this is already the greatest number of candies among the kids. 
- Kid 4 has 1 candy and even if he or she receives all extra candies will only have 4 candies. 
- Kid 5 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids

# Linear Search
### Problem: Given an array arr[] of n elements, write a function to search a given element x in arr[].
### Examples :  
```
Input : arr[] = {10, 20, 80, 30, 60, 50, 
                     110, 100, 130, 170}
          x = 110;
Output : 6
Element x is present at index 6

Input : arr[] = {10, 20, 80, 30, 60, 50, 
                     110, 100, 130, 170}
           x = 175;
Output : -1
Element x is not present in arr[].
```

A simple approach is to do a linear search, i.e  
* Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
* If x matches with an element, return the index.
* If x doesn’t match with any of elements, return -1.

### Time Complexcity of Linear Search O(n) 

<p align="center"> 
<a href="#"><img width="50%" height="auto" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png" height="175px"/></a>
</p>