#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int ll(int n)
{
	int i = 0;
	int ret = 1;

	for (i = 1; i <= n; i++)
	{
		ret*=i;
	}
	return ret;
}
int  lll(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * lll(n-1);
	}


}
int fid(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fid(n - 1) + fid(n - 2);
	}

}
int main()

{
	//ÇónµÄ½×²ã
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fid(n);
	printf("%d\n", ret);
	return 0;
}