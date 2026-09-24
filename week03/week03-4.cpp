//week03-4.cpp SOIT106_ADVANCED_012
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a; //宣告陣列
	int now;
	for(int i=0;i<20;i++){
		cin>> now;
		if(now==0)break; //輸入0停止
		a.push_back(now); //逐一輸入陣列數字
	}
	cin>>now;  //輸入檢查數字
	int ans = 0; //檢查數字出現次數
	for(int num :a){
		if(num==now)ans++; //對的話就+1次
	}
	cout<<ans<<"次"<<"\n";

}
