//week01-1.cpp SOIT106_ADNANCE_001
//c++,再多寫一些中文註解
#include <iostream>//使用IO串流外掛
using namespace std;//使用std命名空間
int main()
{
	int N;
	scanf("%d",&N); //console input到右邊的N
	int b = N,ans=0;
	while(N>0){
		ans = ans*10 + N%10;
		N = N /10;
	}

	printf("%d+%d=%d\n",b,ans,ans+b);//正確3

}
