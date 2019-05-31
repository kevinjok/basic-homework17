#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{

	int a[5]={0};
	int i=0,min;
	
	printf("請輸入5個數值\n");
	
	for(i=0;i<5;i++)
	{
	printf("第%d個數值:",i+1);	
	scanf("%d",&a[i]);
	}
	
	min=a[0];
	
	for(i=0;i<5;i++)
	{
		if(min>=a[i])
		{
			min=a[i];
		}
	}
	printf("最小值:%d",min);
}
