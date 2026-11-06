#include <stdio.h>
int main()
{
	int arr[4];
	int sum = 0;
	int count = 0 ;
// ввод масива 
	for(int i = 0; i <= 4;i = i + 1)
	{
	scanf("%d",&arr[i]);
	}
	for(int i = 0; i <= 4;i = i + 1)
	{
		sum =  sum + arr[i];
	}
	for(int i = 0; i <= 4;i = i + 1)
	{
		if(arr[i] % 2 == 0 && arr[i] % 5 == 0 )
		{
			count = count + 1;
			printf("Число является четным иделиться на 5 %d \n",arr[i]);
		}
		else
		{
			printf("Число не является четным и не делиться на 5 %d \n",arr[i]);
		}
	}
	printf(" sum : = %d count : = %d",sum,count);
}







