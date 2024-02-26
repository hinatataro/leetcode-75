## 605. Can Place Flowers

You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

假設有一個很長的花壇，一部分地塊種了花，另一部分卻沒有。可是，花不能種植在相鄰的地塊上，它們會爭奪水源，兩者都會死。

給你一個整數陣列 flowerbed 表示花壇，由若干 0 和 1 組成，其中 0 表示沒種植花，1 表示種植了花。另有一個數 n ，能否在不打破種植規則的情況下種入 n 朵花？能則回傳 true ，不能則回傳 false 。

Example 1:  
Input: flowerbed = [1,0,0,0,1], n = 1  
Output: true

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2  
Output: false  

### 想法
