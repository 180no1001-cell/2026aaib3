
//week05-3.cpp 學習計畫Built-in Funtions 第一題
//Leetcode 58. Length of Last Word 最後那個字 有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0,now = 0;//最後答案vs.現在累計字母
        for(char c:s){ //每次逐一檢查字母
            if(c==' '){遇到空格 要清空
            if(now!=0) ans = now;//更新答案
            now = 0;//清空

            }else now++;
        }
        //還差一點點
        if(now!=0)ans= now;//更新答案
        return ans;//先試試看(還沒有正確)
    }
};
