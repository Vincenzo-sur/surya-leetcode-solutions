# [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)

**Difficulty**: Medium
**Language**: Python

## Problem
Given an integer array `nums`, find a contiguous non-empty subarray within the array
that has the largest product, and return the product.

## Approach
**Dynamic Programming with min/max tracking**:
1. Track both `max_prod` and `min_prod` at each step
2. A negative number can flip min to max (and vice versa)
3. At each index: new max = max(num, num * prev_max, num * prev_min)
4. At each index: new min = min(num, num * prev_max, num * prev_min)
5. Track global `result = max(result, max_prod)`

## Complexity
- **Time**: O(n) — single pass through the array
- **Space**: O(1) — only tracking max, min, and result

## Notes
- Must track both max and min because a negative * negative = positive (could become new max)
- Reset when encountering 0 (zeros break the product chain)
