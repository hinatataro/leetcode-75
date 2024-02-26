class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i = 0; i<flowerbed.size();)
        {
			//如果i落在最後一個點上
            if(i == flowerbed.size()-1)
            {	
				//如果這個點剛好也是第一個點而且也為0(意思就是如果長[0])  或  如果這個點剛好為0且前面那個也是零，這樣最後一個點也可以種(例如[...,0,0])
                if((i == 0 && flowerbed[i] == 0) || (flowerbed[i] == 0 && flowerbed[i-1] == 0))  //
                {
                    n--;
                    break; //這種情況就可以停止了，因為已經把最後可能還有希望種的可能性給討論完了
                }
            }
			//[0,0,...]可以變[1,0,...]，表示第一個可以種，那n--表示幫忙解決一個，然後往下兩個再重做一次
            if(flowerbed[i] == 0 && flowerbed[i+1] == 0)
            {
                n--;
                i += 2;
            }
			//[0,1,...]這沒辦法種，但至少知道下面應該要長成[0,1,0,...]從第四個位置可以再重新討論一次，所以需要跳三格
            else if(flowerbed[i] == 0 && flowerbed[i+1] == 1)
            {
                i += 3;
            }
			//因為不可能有[1,1,...]，所以剩下只有可能是[1,0,...]，那這種情況可以從第三個位置重新討論，所以跳兩格
            else
            {
                i += 2;
            }
        }
        if(n<1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};


//優化以後
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        for(int i =0; i < len; i++)
        {
			//單純討論前面後面是不是0，確認現在位置可不可以種，並且裡面包含了如果這個位置是頭或尾的情況
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == len-1 || flowerbed[i+1] == 0))
            {
                n--;
                i++; //因為這個點標記為種，那就很確定下一個不能種，可以跳過
            }
        }
        return n<=0;
    }
};

