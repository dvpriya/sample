#include<stdio.h>
int main()
{
	int array[100],size,i,j;
	printf("Enter number of elements in array\n");
	scanf("%d",&size);
	printf("Enter %d numbers\n", size);
	for(i = 0; i < size; i++)
  {
	 scanf("%d", &array[i]);
	}
	printf("unique elements\n");

	for (j=0; j<=i; j++)
	{
	if (array[j] == array[i])
	break;
	}
	 if (i == j)
	 {
	  printf("%d ", array[i]);
	 }
	}
 return 0;
}
