/// Week04-3.cpp 在Codeblocks裡實作一下
#include<iostream>
#include<vector>
#include<algorithm>//this week
using namespace std;
int main(){
	vector<int>a;///week3教的 伸縮自如的陣列
	a.push_back(99);
    a.push_back(88);
    a.push_back(77);
    ///請在Codeblocks的Setting-Compiler..要勾第二個 -std=c++11
    for(int num :a)cout<<num<<' ';///2011年的c++,沒設定好會出錯
    cout<<"\n";

    vector<int>a2(5,7); ///本週教的陣列的初始化 有5格每個都放7
    for(int num :a2)cout<<num<<' ';///2011年的c++,沒設定好會出錯
    cout<<"\n";

    vector<int> a3={5,8,9,5,6,8,5,1,0};
    for(int num : a3)cout<<num<<' ';
    cout<<"\n";
}
