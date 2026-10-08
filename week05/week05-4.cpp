//week05-3b.cpp 學習計畫Built-in Funtions 第一題
//Leetcode 58. Length of Last Word 最後那個字 有幾個字母
//前面要寫#include<stringstream>不過Leetcode幫妳寫好了
class Solution {
public:
    int lengthOfLastWord(string s) {
        //前面要寫#include<stringstream>
        stringstream ss(s); //week05 string字串stream串流  week 04 c++ 圓括號是丟進去的物件初始化
        string ans;//week02 c++字串的宣告
        while(ss >> ans){//week 05-1.cpp 有用到 有用到 很像cin的iostream
            //甚麼都不做
        }
        return ans.length(); //week 01 week02字串的長度
    }
};
