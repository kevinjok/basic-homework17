#include <stdio.h> 
#include <stdlib.h> 
int main(void)
{

	int a[5]={0};
	int i=0,min;
	
	printf("�п�J5�Ӽƭ�\n");
	
	for(i=0;i<5;i++)
	{
	printf("��%d�Ӽƭ�:",i+1);	
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
	printf("�̤p��:%d",min);
}
