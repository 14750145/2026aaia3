//week01-1.cpp SOIT106_ADVANCE_001
#include <stdio.h>
int main()
{
	int N;                              ///整數
	scanf("%d", &N);
	int b = N, ans=0;
	while(N>0){
		ans = ans*10+N%10;              ///答案*10+皮皮
		N = N/10;                       ///N被剝皮
	}
	printf("%d+%d=%d\n", b, ans, b+ans);
}
