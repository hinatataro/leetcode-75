//__gcd用法

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 == str2+str1) //疊起來要相同，代表開頭為相同，且在這兩串裡面能找到公因數的字串
        {
			//既然兩串加起來一樣，再來就把兩個字串的字數做最大公因數，即可得到該取幾個字串，最後再將數量轉到要取的字串上
        	return str1.substr(0, __gcd(str1.size(), str2.size())); 
        }
        else
        {
			//既然不相同，就直接回傳沒有共同的連接字串
			return "";
        }    
    }
};
