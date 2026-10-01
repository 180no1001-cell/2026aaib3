//week04-1.cpp 學習計畫Basic六題
//Leetcode 283. Move Zeroes 把0移到陣列的右邊
//就是把綠色數字移到左邊 剩下補0,題目會自己檢查nums陣列2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//把不是0的數字移到num[k]
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){ //不等於0的數字
                nums[k] = nums[i];
                k++;
            }
        }//移動完會有殘留的0
        for(int i=k;i<nums.size();i++){
            nums[i]=0;
        }
    }
};
