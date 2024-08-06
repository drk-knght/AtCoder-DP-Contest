# AtCoder Dynamic Programming Contest
## F - LCS

### Problem Statement

You are given two strings, $s$ and $t$. Your task is to find their longest common subsequence (LCS).

A subsequence of a string is a new string that is formed from the original string by deleting some (possibly none) of the characters without disturbing the relative positions of the remaining characters. (For example, "ace" is a subsequence of "abcde" while "aec" is not).

The longest common subsequence of two strings is the longest sequence that can be derived from both strings by deleting some characters.

## Input

The input consists of two lines:
- The first line contains the string $s$.
- The second line contains the string $t$.

Both strings consist of lowercase English letters and have lengths between 1 and 3000, inclusive.

## Output

Print the longest common subsequence of $s$ and $t$.

## Examples

### Example 1

#### Input
```
axyb
abyxb
```

#### Output
```
axb
```

### Example 2

#### Input
```
abracadabra
avadakedavra
```

#### Output
```
aaadara
```

### Example 3

#### Input
```
aaaa
aa
```

#### Output
```
aa
```
