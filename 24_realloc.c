#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	ptr = (int *) calloc(5,sizeof(int));
	printf("enter numbers(5): \n");
	for (int i=0;i<5;i++)
		scanf("%d",&ptr[i]);
	
	ptr = realloc(ptr,8);

	printf("enter numbers(8): \n");
	for (int i=0;i<8;i++)
		scanf("%d",&ptr[i]);

	printf("numbers are: ");
	for(int i=0;i<8;i++)
		printf("%d\t",ptr[i]);
	printf("\n");

	return 0;
}
