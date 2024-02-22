## 1071. Greatest Common Divisor of Strings

For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).  

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.  

對於字串 s 和 t，只有在 s = t + t + t + ... + t + t（t 自身連接 1 次或多次）時，我們才認定 “t 能除盡 s”。  

給定兩個字串 str1 和 str2 。傳回 最長字串 x，要求滿足 x 能除盡 str1 且 x 能除盡 str2   

#### Example 1:

Input: str1 = "ABCABC", str2 = "ABC"  
Output: "ABC"  

#### Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"  
Output: "AB"  
#### Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""

---
### 想法

[1071. Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75)
