# AtCoder Dynamic Programming Contest
## Problem D: Knapsack 1

### Problem Description

You have `N` items, each with a weight and a value. You also have a knapsack that can carry a weight of up to `W`.

You need to select a subset of the items to maximize the total value without exceeding the weight limit of the knapsack.

## Input

- The first line contains two integers, `N` and `W`.
  - `N` (1 ≤ N ≤ 100): The number of items.
  - `W` (1 ≤ W ≤ 100,000): The maximum weight the knapsack can carry.

- The next `N` lines each contain two integers, `w_i` and `v_i`:
  - `w_i` (1 ≤ w_i ≤ W): The weight of the `i`-th item.
  - `v_i` (1 ≤ v_i ≤ 1,000): The value of the `i`-th item.

## Output

- Output a single integer: the maximum total value of items that can be put into the knapsack.

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
5 5
1 1000000000
1 1000000000
1 1000000000
1 1000000000
1 1000000000
```

### Output
```
5000000000
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

