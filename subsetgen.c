#include<stdio.h>
int main()
{
	int size,n,i,j,start,index,a[50],m;
	printf("Enter the size of main set :");
	scanf("%d",&size);
	printf("Enter the elements of main set :");
	for(m=0;m<size;m++)
	scanf("%d",&a[m]);
	printf("The subsets are :\n");
	for(n=1;n<=size;n++)
	{
			for(start=0;start<=(size-n);start++)
			{
					if(n==1)
					{
							printf("%d\n",a[start]);
					}
					else
					{
							index=start+(n-1);
							for(j=index;j<size;j++)
							{
									for(i=start;i<index;i++)
									{
											printf("%d",a[i]);
									}
									printf("%d\n",a[j]);
									
							}
					}
			}
	}
	return 0;
}
