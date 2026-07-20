# [Two Sum](https://leetcode.com/problems/two-sum/)

**Difficulty**: Easy
**Language**: Python

## Problem
Given an array of integers `nums` and an integer `target`, return the indices of the
two numbers such that they add up to `target`. Exactly one solution exists.

## Approach
**Hash Map (One Pass)** — store complements as we iterate:
1. Create an empty hash map `seen`
2. For each number `nums[i]`, compute `complement = target - nums[i]`
3. If `complement` is in `seen`, return `[seen[complement], i]`
4. Otherwise store `seen[nums[i]] = i` and continue

## Complexity
- **Time**: O(n) — single pass through the array
- **Space**: O(n) — hash map stores up to n elements

## Notes
- Brute force O(n^2) with nested loops also works but is too slow for large inputs
- The hash map approach trades space for time
