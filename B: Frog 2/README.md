
# AtCoder Dynamic Programming Contest

## Problem B: Frog 2

### Problem Statement

There are N stones numbered 1 through N, and for each i (1 ≤ i ≤ N), the height of Stone i is h[i].
There is a frog initially on Stone 1. He will perform a series of jumps and reach Stone N. In each jump, if the frog is currently on Stone i, he can jump to Stone i+1 or Stone i+2. Thus, he can potentially choose from two types of jumps.

He wants to minimize the total cost of the jumps. The cost of each jump is the absolute difference in heights between the two stones. Formally, if the frog is on Stone i and jumps to Stone j, the cost of the jump will be |h[i] - h[j]|.

Find the minimum total cost to reach Stone N from Stone 1.

### Input

The first line contains two integers N (2 ≤ N ≤ 10^5) and K (1 ≤ K ≤ 100), representing the number of stones and the maximum jump distance, respectively.
The second line contains N integers h[1], h[2], ..., h[N] (1 ≤ h[i] ≤ 10^4), representing the heights of the stones.

### Output

Print a single integer, the minimum total cost to reach Stone N from Stone 1.

### Example

Input:
```
4 2
10 30 40 20
```

Output:
```
30
```

### Explanation

The optimal way is to jump from Stone 1 to Stone 2 (cost = |10-30| = 20), then from Stone 2 to Stone 4 (cost = |30-20| = 10), resulting in a total cost of 20 + 10 = 30.
