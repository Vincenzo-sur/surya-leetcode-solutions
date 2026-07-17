# [Binary Search](https://leetcode.com/problems/binary-search/)

**Difficulty**: Easy
**Language**: C++

## Problem
Given an array of integers `nums` sorted in ascending order, and an integer `target`,
write a function to search `target` in `nums`. Return its index if found, otherwise return `-1`.

## Approach
Classic **Binary Search** — repeatedly halve the search space:
1. Set `low = 0`, `high = nums.size() - 1`
2. Calculate `mid = low + (high - low) / 2` (avoids integer overflow)
3. If `nums[mid] == target` return `mid`
4. If `nums[mid] < target` search the right half (`low = mid + 1`)
5. If `nums[mid] > target` search the left half (`high = mid - 1`)
6. Return `-1` if not found

## Complexity
- **Time**: O(log n) — search space halves each iteration
- **Space**: O(1) — only pointer variables used

## Notes
- Using `mid = low + (high - low) / 2` instead of `(low + high) / 2` prevents integer overflow
- Array must be sorted for binary search to work correctly
