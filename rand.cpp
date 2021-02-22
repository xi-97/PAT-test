//生成随机数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++)
	{
		printf("%d",rand());
	}
	return 0;  
}
