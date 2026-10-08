//week05-2.cpp 學習計畫
//Leetcode 709. to lower case變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        //week02 教過字串s的長度length()
        for(int i =0;i<s.length();i++){
            if(isupper(s[i]))s[i]=s[i]-'A'+'a';
        }
        //s[0] = 'h';(先試試看 看起來就是錯的)
        return s;
    }
};
