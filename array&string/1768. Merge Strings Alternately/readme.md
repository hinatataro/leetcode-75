## 1768. Merge Strings Alternately

### 題目

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

給你兩個字串 word1 和 word2 。請你從 word1 開始，透過交替加上字母來合併字串。如果一個字串比另一個字串長，就將多出來的字母追加到合併後字串的結尾。

傳回合併後的字串 。

**Example 1:**
---
Input: word1 = "abc", word2 = "pqr"  
Output: "apbqcr"  
Explanation: The merged string will be merged as so:  
word1:  a   b   c  
word2:    p   q   r  
merged: a p b q c r  

**Example 2:**
---
Input: word1 = "ab", word2 = "pqrs"  
Output: "apbqrs"  
Explanation: Notice that as word2 is longer, "rs" is appended to the end.  
word1:  a   b   
word2:    p   q   r   s  
merged: a p b q   r   s  

**Example 3:**
---
Input: word1 = "abcd", word2 = "pq"  
Output: "apbqcd"  
Explanation: Notice that as word1 is longer, "cd" is appended to the end.  
word1:  a   b   c   d  
word2:    p   q   
merged: a p b q c   d  

### 想法

既然要輪流將數字排出，並且從第一個字串開始給，那就輪流將字串的數字導出來給一個新設置的string，直到某個字串沒東西傳了，另一個字串剩下的字元再全部加到string裡。

因此需要這兩個字串最小的長度，這樣才能在for迴圈裡限制說要做幾次，再來給定一個新的string用來放最後的答案。

最後還要使用到substr()，可以從某個位置到最後的字元都傳到string上。

[1768. Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/description/?envType=study-plan-v2&envId=leetcode-75)
