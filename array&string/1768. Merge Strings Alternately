//size的用法
//substr的用法

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        const int lenth = min(word1.size(), word2.size());
        string ansString;
        for(int i = 0; i < lenth; i++)
        {
            ansString += word1[i];
            ansString += word2[i];
        }
        return ansString + word1.substr(lenth) + word2.substr(lenth);   
    }
};
