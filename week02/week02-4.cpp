// week02-4.cpp 學習計畫 Basic第二題
// Leetcode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {0};//有26個資源回桶 裡面都0
        for (char c :s ){ //進階for迴圈寫法
            U[c - 'a']++; //把字母放到能對應的桶子裡
        }
        for( char c : t ){ //c++進階迴圈寫法
            U[c-'a'] --; //對應桶子裡拿掉一個字母
            if(U[c-'a']<0) return c;//如果字母不夠用,找到兇手了
        }
        return 0;
    }
};
