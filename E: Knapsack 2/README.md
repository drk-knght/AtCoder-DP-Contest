# AtCoder Dynamic Programming Contest
## Problem E: Knapsack 2

### Problem Statement
There are \(N\) items, numbered \(1, 2, \ldots, N\). For each \(i \, (1 \leq i \leq N)\), Item \(i\) has a weight of \(w_i\) and a value of \(v_i\). You have a knapsack that can hold at most \(W\) weight. Determine the maximum total value of items you can put in the knapsack.

## Input
- The first line contains two integers \(N\) and \(W\) \((1 \leq N \leq 100, 1 \leq W \leq 10^9)\).
- The next \(N\) lines each contain two integers \(w_i\) and \(v_i\) \((1 \leq w_i \leq W, 1 \leq v_i \leq 10^3)\).

## Output
- Print the maximum total value of items that you can put in the knapsack.

## Constraints
- All input values are integers.

## Example 1

### Input
```
3 8
3 30
4 50
5 60
```

### Output
```
90
```

## Example 2

### Input
```
1 1000000000
1000000000 10
```

### Output
```
10
```

## Example 3

### Input
```
6 15
6 5
5 6
6 4
6 6
3 5
7 2
```

### Output
```
17
```



