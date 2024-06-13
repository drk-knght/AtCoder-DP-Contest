
# AtCoder Dynamic Programming Contest
## Problem C: Vacation

### Problem Statement

There are `N` days, and for each day, you have three possible activities to choose from. Each activity gives you some happiness points. However, you cannot choose the same activity two days in a row. Your goal is to maximize the total happiness points over `N` days.

### Input
- The first line contains an integer `N` (1 ≤ N ≤ 10^5), the number of days.
- The next `N` lines contain three integers `a_i`, `b_i`, `c_i` (1 ≤ a_i, b_i, c_i ≤ 10^4), the happiness points for the three activities on the `i`-th day.

### Output
- Print a single integer, the maximum total happiness points you can get.

### Example 1
**Input:**
```
3
10 40 70
20 50 80
30 60 90
```

**Output:**
```
210
```

### Example 2
**Input:**
```
1
100 10 1
```

**Output:**
```
100
```

### Example 3
**Input:**
```
7
6 7 8
8 8 3
2 5 2
7 8 6
4 6 8
2 3 4
7 5 1
```

**Output:**
```
46
```
