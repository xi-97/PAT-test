//最大公约数
#include <cstdio>
//求最大公约数的辗转相除法递归写法
int gcd(int a,int b)
{
	return !b ? a:gcd(b, a % b);
}
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		printf("%d\n",gcd(m,n));
	}
	return 0;
}