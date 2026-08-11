# 461. Hamming Distance

**Difficulty:** Easy

The [Hamming distance](https://en.wikipedia.org/wiki/Hamming_distance) between two integers is the number of positions at which the corresponding bits are different.

Given two integers `x` and `y`, return the Hamming distance between them.

---

**Example 1:**

Input: x = 1, y = 4  
Output: 2  
Explanation:

| Bit Position | 3 | 2 | 1 | 0 |
|---|---|---|---|---|
| x = 1 | 0 | 0 | 0 | 1 |
| y = 4 | 0 | 1 | 0 | 0 |
| Different? | | ↑ | | ↑ |

The above arrows point to positions where the corresponding bits are different.

**Example 2:**

Input: x = 3, y = 1  
Output: 1

---

**Constraints:**

- 0 <= x, y <= 2³¹ - 1

---

**Note:** This question is the same as [2220. Minimum Bit Flips to Convert Number](https://leetcode.com/problems/minimum-bit-flips-to-convert-number/).

---

**Runtime :** 0 ms | **Beats :** 100.00% | **Memory :** 8.04 MB