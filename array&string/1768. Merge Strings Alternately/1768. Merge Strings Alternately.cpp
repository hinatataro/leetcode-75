//size的用法
//substr的用法

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        const int lenth = min(word1.size(), word2.size()); //找出迴圈該執行次數
        string ansString; //用來存放合併後的字串
        for(int i = 0; i < lenth; i++)
        {
            ansString += word1[i];    
            ansString += word2[i];    //輪流將字元放進去
        }
        return ansString + word1.substr(lenth) + word2.substr(lenth);   //substr可以用來取某個位置到某個位置的所有字元
    }
};
