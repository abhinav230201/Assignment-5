# DAA Assingment 
#### Team Members

|Enrollment No.|Name|GithubId|
|--------------|----|--------|
|IIT2019098|Abhinav|abhinav230201|
|IIT2019097|Harsh Sharma|harsh12-hub|
|IIT2019099|Nitesh Rawat|nitesh1053|

**Group No-** 02 (Section B)

**Faculty Name-** Dr. Mohammad Javed IIIT Allahabad

**Mentor Name-** Sir Bulla Rajesh

---
## Problem Statement
Given a string s, find the number of palindrome substring of size greater than 1

---
## How to use code

Download project
```
git clone https://github.com/abhinav230201/Assignment-5.git
```
Project Initialize 
```
#Opening Assingment folder
cd Assignment-5

#Compiling The code
g++ solution.cpp -o output
```
---

Run the code
```
./output
```
Input
```
First line of input contains S (the string).
```
Ouput 
```
The numbers of palindrome substring in the string of size greater than 1.
```
---
**Test case**

Test Case-1
```
Input:
abbaeae
Output:
Number of palindrome substring in "abbaeae" with size greater than 1 are: 4
```

Test Case-2
```
Input:
abaab
Output:
Number of palindrome substring in "abaab" with size greater than 1 are: 3
```
---
### Theory
Logic
```
We use dynamic programming dp[n][n], where dp[i][j] stores the number of palindrome substring in between index i to j.
```
Implementation
```
In our approach  we  will  createtwo 2D array, int dp[n][n], and bool P[n][n], where statedp[i][j], will store the number of palindrome in betweenindex i to j (i<j), and P[i][j], will store true if substringformed from index i to j is palindrome, else it will storefalse.   Our  transition  would  be,  first  we  update  P[i][j],P[i][j] will be true only if P[i+1][j-1] is true and S[i]==S[j],similarly,  we would update dp[i][j] to dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1]+P[i][j] (if P[i][j] is true an extra 1 will beadded, also we subtract dp[i+1][j-1] to remove the extrapart we counted in dp[i+1][j]+dp[i][j-1]).
```
---
### Analysis

**Time Complexity**
```
For all the cases : o(N^2)

```
where N is the size of the string

---
**Space Complexity**
```
For all the cases : o(N^2)
```

### References

GFG : Dynamic programming

