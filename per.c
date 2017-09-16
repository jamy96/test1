#include<stdio.h>
int Bin[100];
void print()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d ",Bin[i]);
	}
	printf("\n");
}
void solve(int i)
{
	if(i==3)
	{
		print();
		return;
	}
	Bin[i]=0;
	solve(i+1);
	Bin[i]=1;
	solve(i+1);
}
int main()
{
	solve(0);
	return 0;
}
