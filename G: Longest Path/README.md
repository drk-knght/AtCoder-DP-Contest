# AtCoder Dynamic Programming Contest
## G - Longest Path

### Problem Statement

You are given a directed acyclic graph (DAG) with \( N \) vertices and \( M \) edges. Your task is to find the length of the longest path in the graph.

## Input

The input consists of multiple lines:
- The first line contains two integers \( N \) and \( M \) (1 ≤ \( N \) ≤ 100000, 0 ≤ \( M \) ≤ 100000).
- The next \( M \) lines each contain two integers \( x \) and \( y \) (1 ≤ \( x, y \) ≤ \( N \), \( x \neq y \)), representing a directed edge from vertex \( x \) to vertex \( y \).

## Output

Print the length of the longest path in the graph.

## Examples

### Example 1

#### Input
```
4 5
1 2
1 3
3 2
2 4
3 4
```

#### Output
```
3
```

### Example 2

#### Input
```
6 3
2 3
4 5
5 6
```

#### Output
```
2
```

