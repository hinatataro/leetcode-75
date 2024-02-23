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




//補充一個自己寫的gcd方式

class Solution {
public:
    int gcdOfSize(int a, int b)
        {
            if(a<b)
            {
                return gcdOfSize(b, a);
            }
            else if(b == 0)
            {
                return a;
            }
			//之前寫錯，不能整個裡面都if，會報錯
			//error: non-void function does not return a value in all control paths [-Werror,-Wreturn-type]
            return gcdOfSize(b, a%b);  //可以放在else，也可以直接寫在外面
        }
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1)
        {
            return "";
        }
        else
        {
            return str1.substr(0, gcdOfSize(str1.size(), str2.size()));
        }
    }
};
