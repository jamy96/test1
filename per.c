#include<stdio.h>
//Edited in moon9607
int Bin[1000];
int Number[3]={1,2,3};
void print()
{
	int i;
	for(i=0;i<3;i++)
	{
		if(Bin[i]){
			printf("%d ",Number[i]);
		}
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
